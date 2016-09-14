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
    
outer_loop:
    # Outer loop: process VLEN rows of the input matrix
    vsetvl t0, a0
    vmca va0, a4 # va0 <-- ptr[]
    vmca va1, a2 # va1 <-- idx[]
    vmca va2, a3 # va2 <-- x[]
    vmca va3, a1 # va3 <-- val[]
    vmca va4, a5 # va4 <-- y[]
    addi t1, a4, 4 # t1 <-- ptr+1
    vmca va5, t1 # va5 <-- ptr+1
    vmcs vs1, 0 
    la t3, spmv_v
    vf 0(t3)

    # outer_loop bookkeeping code
    slli t1, t0, 3
    add a4, a4, t1
    sub a0, a0, t0
    bnez a0, outer_loop


.align 3
spmv_v:
    vpset vp0
    vld vv0, va0        # vv0 <-- ptr[i]    ... ptr[i+VLEN]
    vld vv1, va4        # vv1 <-- y[i]      ... y[i+VLEN]
    vld vv2, va5        # vv2 <-- ptr[i+1]  ... ptr[i+VLEN+1]
    vaddi vs1, vs0, 0   # vs1 <-- 0
    inner_spmv:
      vcmplt.vv p0, vv0, vv2 # p0 = (vv0 < ptr[i+1]...ptr[i+VLEN+1])
      vlxd vv3, va1, vv0    # vv3 <-- idx[ptr[i] ... ptr[i+VLEN]]
      vlxd vv4, va2, vv3    # vv4 <-- x[idx[ptr[i] ... ptr[i+VLEN]]]
      vlxd vv5, va3, vv0    # vv5 <-- val[ptr[i] ... ptr[i+VLEN]]
      vmuld vv4, vv5, vv4
      vaddd vv1, vv1, vv4
      vaddi vv2, vv2, 8     # advance row pointer vector
      @p0 vcjal.any 0, inner_spmv
      
      vsd vv1, va4  # y[i]..y[i+VLEN] <-- vv1
      vstop
