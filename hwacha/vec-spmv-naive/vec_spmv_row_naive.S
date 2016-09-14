## Hwacha v4 SPMV ASM code

#include "vec-util.h"

.text
.align 2

.globl vec_spmv_asm
.type  vec_spmv_asm,@function

# assumes calling convention:
# a0 has int r
# a1 has double* val  <---
# a2 has int* idx
# a3 has double* x
# a4 has int* ptr
# a5 has double* y
vec_spmv_asm:
    li t0, VCFG(2, 2, 0, 0)
    vsetcfg t0

row_loop:
    # compute t4: the number of elements in the current row (i)
    # and set t3 = ptr[i] (pointer to current row)
    ld t3, 0(a4)    # t3 = ptr[i]
    ld t4, 4(a4)    # t4 = ptr[i+1]
    sub t4, t4, t3  # t4 = ptr[i+1] - ptr[i]

    stripmine_col:
      vsetvl t0, t4 # t4 is requested vec len, actual is placed in t0
      vmca va0, a1  # va0 is address of val[ptr[i]] (val[t3])
      vmca va1, a2  # va1 is address of idx[ptr[i]] (idx[t3])
      vmca va2, a3  # va2 is address of x[]
      la t5, spmv_v
      vf 0(t5)
      # stripmine loop bookkeeping code
      slli t2, t0, 3
      add a2, a2, t2
      add a5, a5, t2
      add t3, t3, t2
      bne t3, t4, stripmine_col

    # row_loop bookkeeping code
    slli t4, t3, 3
    add a4, a4, t4
    add a3, a3, t4
    sub a0, a0, t0
    bnez a0, row_loop
    fence
    ret

# vector thread asm
.align 3
spmv_v:
    vpset vp0
    vld vv0, va0        # vv0 <-- val[ptr[i]...ptr[i]+VLEN]
    vld vv1, va1        # vv1 <-- idx[ptr[i]...ptr[i]+VLEN]
    vld vv2, vv1        # vv2 <-- x[idx[ptr[i]]....idx[ptr[i]+VLEN]]

    # appears to be faster if we write into vv1 instead of using a new reg?
    vfmadd.s vv1, vs1, vv0, vv1
    vsw vv1, va1
    vstop
