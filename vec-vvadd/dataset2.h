#define DATA_SIZE 1000
float input_data_X[DATA_SIZE] = 
{
500, 987, 721, 55, 168, 525, 73, 618, 173, 379, 539, 95, 255, 422, 816, 128, 358, 65, 800, 222, 841, 262, 606, 473, 235, 335, 322, 881, 382, 259, 669, 720, 902, 529, 41, 775, 64, 522, 258, 484, 237, 600, 573, 398, 445, 603, 587, 889, 434, 529, 407, 804, 582, 156, 754, 364, 608, 600, 561, 723, 604, 358, 110, 473, 777, 758, 790, 664, 927, 410, 535, 824, 379, 338, 394, 820, 815, 573, 220, 468, 165, 188, 132, 973, 885, 743, 860, 546, 709, 68, 988, 537, 866, 317, 893, 411, 196, 869, 954, 968, 178, 369, 675, 188, 941, 706, 134, 443, 396, 488, 357, 330, 724, 606, 350, 646, 301, 441, 443, 764, 621, 937, 225, 35, 379, 110, 322, 49, 700, 855, 574, 869, 22, 786, 208, 257, 836, 322, 310, 781, 465, 94, 525, 491, 462, 201, 280, 905, 81, 901, 809, 243, 405, 483, 572, 124, 437, 1, 307, 596, 390, 650, 892, 607, 400, 412, 992, 144, 888, 857, 660, 268, 577, 923, 920, 384, 286, 541, 923, 253, 509, 99, 248, 911, 7, 99, 786, 913, 692, 559, 959, 504, 497, 634, 576, 187, 44, 998, 311, 611, 285, 137, 850, 832, 471, 955, 944, 403, 251, 318, 13, 236, 790, 485, 33, 619, 276, 363, 280, 83, 581, 918, 411, 149, 525, 399, 790, 676, 259, 609, 372, 242, 136, 616, 792, 64, 102, 912, 536, 314, 237, 326, 711, 544, 207, 368, 29, 208, 296, 425, 250, 135, 288, 547, 351, 642, 36, 34, 395, 380, 467, 262, 322, 341, 581, 159, 440, 651, 337, 968, 466, 687, 805, 189, 802, 150, 122, 239, 824, 782, 370, 0, 668, 608, 242, 476, 70, 752, 768, 65, 836, 852, 99, 86, 52, 613, 876, 521, 913, 402, 826, 357, 455, 309, 217, 713, 570, 312, 546, 246, 651, 294, 527, 183, 885, 178, 392, 43, 57, 51, 62, 938, 930, 382, 174, 445, 351, 820, 394, 742, 393, 180, 114, 63, 503, 871, 382, 380, 836, 781, 577, 237, 466, 594, 574, 290, 356, 19, 316, 498, 530, 796, 23, 530, 520, 265, 457, 52, 787, 871, 879, 188, 123, 795, 885, 394, 612, 49, 990, 780, 708, 672, 12, 945, 804, 172, 600, 508, 45, 50, 152, 135, 594, 194, 992, 89, 966, 809, 548, 750, 283, 808, 269, 951, 302, 70, 388, 983, 689, 389, 502, 86, 335, 230, 449, 851, 350, 140, 170, 218, 510, 179, 919, 887, 199, 307, 169, 648, 104, 419, 474, 831, 904, 81, 844, 937, 5, 934, 798, 541, 520, 417, 251, 721, 950, 436, 742, 908, 852, 783, 950, 311, 183, 735, 806, 692, 616, 897, 468, 734, 52, 17, 740, 238, 747, 901, 496, 299, 565, 604, 67, 868, 620, 818, 540, 318, 739, 895, 36, 495, 581, 107, 447, 941, 782, 727, 982, 440, 112, 690, 86, 393, 688, 839, 887, 261, 389, 667, 417, 0, 613, 507, 963, 233, 348, 618, 895, 892, 203, 980, 126, 199, 230, 1, 690, 217, 924, 313, 817, 547, 799, 773, 52, 591, 73, 993, 459, 257, 786, 546, 56, 368, 909, 924, 148, 795, 304, 547, 978, 927, 540, 386, 416, 178, 388, 162, 843, 367, 310, 662, 778, 390, 908, 60, 649, 880, 437, 396, 192, 343, 657, 752, 484, 53, 730, 459, 238, 708, 361, 787, 76, 484, 159, 460, 581, 357, 80, 704, 72, 586, 236, 30, 456, 938, 492, 315, 381, 355, 18, 569, 873, 506, 872, 194, 287, 698, 379, 725, 115, 516, 935, 986, 253, 233, 199, 750, 670, 919, 662, 438, 756, 29, 671, 590, 268, 509, 220, 247, 662, 211, 131, 96, 115, 815, 400, 149, 406, 318, 583, 13, 91, 967, 467, 899, 566, 177, 573, 657, 839, 836, 961, 655, 793, 590, 549, 902, 701, 278, 534, 476, 376, 731, 641, 374, 327, 459, 356, 821, 714, 987, 592, 725, 500, 280, 915, 452, 570, 915, 866, 993, 881, 962, 587, 67, 974, 963, 474, 181, 653, 712, 895, 240, 170, 884, 245, 742, 410, 977, 208, 749, 202, 334, 356, 5, 861, 912, 295, 614, 89, 829, 386, 91, 967, 418, 159, 974, 44, 715, 721, 296, 11, 600, 997, 328, 459, 25, 32, 19, 555, 126, 335, 385, 107, 968, 678, 604, 911, 188, 470, 533, 150, 101, 443, 339, 747, 411, 967, 431, 218, 927, 392, 130, 488, 970, 645, 447, 817, 455, 786, 945, 187, 939, 740, 123, 510, 395, 802, 302, 18, 894, 72, 125, 650, 658, 159, 389, 835, 362, 101, 967, 382, 198, 313, 729, 391, 378, 360, 131, 586, 516, 998, 394, 518, 438, 825, 471, 471, 864, 195, 441, 923, 221, 502, 896, 40, 857, 344, 375, 699, 975, 310, 259, 54, 533, 223, 538, 893, 638, 387, 54, 209, 118, 124, 383, 660, 255, 518, 479, 206, 818, 283, 32, 216, 797, 776, 178, 182, 512, 788, 481, 304, 908, 999, 698, 121, 178, 969, 777, 827, 106, 672, 139, 486, 936, 19, 625, 312, 575, 532, 511, 626, 507, 900, 383, 223, 625, 889, 157, 751, 304, 652, 966, 181, 644, 219, 555, 422, 874, 235, 802, 86, 754, 650, 621, 541, 67, 236, 746, 331, 263, 568, 996, 169, 686, 391, 393, 390, 554, 922, 54, 508, 593, 757, 695, 769, 477, 10, 448, 909, 582, 377, 778, 72, 972, 615, 27, 336, 763, 818, 414, 327, 315, 676, 385, 465, 385, 390, 377, 881, 959, 621, 523, 394, 97, 332, 85, 606, 272, 504, 382, 602, 277, 526, 262, 398, 834, 948, 15, 851, 282, 603, 791, 293, 853, 115, 946, 528, 775, 134, 487, 262, 578, 888, 673, 50, 878, 575, 618, 930, 140, 238, 472, 92, 850, 757, 55, 305, 734, 467, 194, 439, 663, 123, 779, 695, 599, 672, 831, 992, 78, 832, 809, 325, 889, 464, 528, 222, 714, 815, 461, 936, 492, 968, 495, 608, 934, 495, 247, 548, 127, 46, 813, 412, 120, 51, 688, 424, 677, 914, 691
};
float input_data_Y[DATA_SIZE] = 
{
600, 783, 626, 645, 926, 438, 386, 835, 142, 294, 150, 897, 475, 702, 961, 548, 2, 957, 968, 497, 723, 955, 14, 23, 83, 625, 257, 855, 353, 635, 499, 262, 473, 912, 310, 886, 314, 206, 673, 854, 390, 474, 989, 800, 341, 34, 784, 56, 669, 466, 498, 18, 133, 824, 56, 938, 306, 819, 476, 891, 871, 824, 84, 194, 830, 62, 549, 976, 682, 562, 142, 394, 847, 842, 965, 678, 204, 695, 684, 668, 318, 963, 873, 52, 75, 108, 441, 566, 863, 862, 394, 258, 178, 70, 551, 400, 404, 110, 658, 562, 743, 156, 321, 486, 520, 189, 769, 409, 245, 979, 765, 78, 956, 449, 554, 589, 782, 529, 959, 840, 299, 316, 377, 387, 689, 897, 868, 259, 511, 33, 378, 271, 102, 190, 84, 79, 428, 847, 247, 812, 358, 612, 206, 71, 254, 299, 562, 731, 438, 49, 867, 890, 611, 316, 873, 708, 876, 45, 907, 766, 201, 691, 364, 355, 342, 147, 236, 556, 633, 857, 792, 437, 121, 45, 262, 388, 68, 258, 469, 270, 924, 126, 0, 99, 6, 537, 596, 482, 333, 853, 8, 711, 202, 30, 451, 357, 211, 839, 919, 479, 747, 700, 297, 392, 957, 905, 564, 911, 302, 110, 429, 828, 408, 365, 69, 527, 808, 543, 298, 411, 726, 317, 264, 791, 814, 258, 838, 871, 469, 772, 352, 588, 529, 289, 750, 641, 473, 299, 922, 159, 972, 236, 9, 774, 731, 47, 407, 768, 552, 731, 447, 629, 888, 9, 305, 308, 750, 869, 969, 905, 483, 425, 2, 969, 742, 201, 327, 280, 767, 417, 758, 606, 280, 941, 330, 837, 414, 196, 354, 924, 450, 525, 508, 758, 177, 14, 410, 512, 354, 576, 234, 211, 408, 352, 513, 161, 482, 749, 664, 14, 517, 935, 733, 498, 536, 335, 344, 50, 829, 811, 652, 890, 930, 820, 453, 84, 904, 534, 26, 459, 820, 592, 669, 130, 628, 791, 333, 861, 575, 384, 260, 137, 593, 496, 482, 445, 320, 18, 572, 793, 915, 210, 105, 6, 254, 45, 519, 722, 633, 600, 181, 901, 995, 802, 770, 380, 261, 525, 604, 524, 854, 676, 961, 108, 571, 881, 310, 106, 496, 107, 226, 950, 179, 304, 594, 989, 365, 506, 684, 907, 217, 859, 422, 608, 46, 360, 579, 437, 251, 201, 533, 54, 728, 238, 72, 710, 205, 352, 392, 373, 811, 297, 761, 713, 671, 874, 691, 925, 388, 456, 497, 823, 239, 188, 408, 347, 877, 81, 258, 505, 622, 181, 691, 701, 334, 165, 258, 548, 939, 688, 57, 756, 910, 345, 421, 825, 915, 808, 574, 529, 319, 445, 661, 974, 557, 218, 74, 509, 445, 161, 797, 737, 911, 665, 99, 709, 207, 357, 441, 322, 267, 259, 229, 28, 914, 821, 563, 473, 541, 716, 377, 141, 864, 631, 403, 787, 90, 639, 103, 146, 763, 351, 550, 117, 804, 5, 289, 949, 226, 226, 745, 97, 904, 544, 359, 26, 779, 819, 842, 858, 404, 860, 135, 677, 894, 811, 981, 26, 281, 687, 198, 165, 818, 455, 453, 305, 424, 259, 659, 58, 160, 412, 77, 921, 131, 198, 27, 669, 606, 353, 978, 292, 37, 18, 732, 318, 17, 376, 185, 225, 806, 370, 734, 146, 961, 948, 369, 525, 888, 955, 808, 255, 470, 78, 526, 266, 239, 318, 702, 622, 167, 217, 324, 928, 543, 427, 210, 787, 195, 569, 917, 711, 757, 854, 784, 337, 774, 503, 966, 832, 666, 787, 245, 580, 132, 767, 418, 59, 848, 809, 77, 588, 686, 73, 975, 241, 308, 471, 521, 209, 459, 163, 307, 72, 493, 920, 489, 99, 334, 401, 745, 309, 447, 935, 113, 517, 858, 975, 641, 415, 119, 725, 339, 48, 491, 583, 764, 427, 807, 216, 197, 738, 455, 420, 737, 783, 213, 66, 702, 837, 255, 242, 587, 369, 533, 83, 51, 31, 438, 127, 491, 869, 821, 701, 606, 776, 896, 362, 697, 205, 299, 87, 671, 378, 988, 233, 206, 490, 680, 975, 423, 334, 875, 372, 156, 811, 597, 770, 457, 331, 899, 958, 373, 862, 507, 315, 788, 658, 408, 606, 741, 237, 349, 697, 940, 345, 453, 937, 674, 598, 690, 551, 842, 606, 738, 692, 919, 440, 993, 908, 147, 515, 804, 364, 8, 173, 383, 747, 345, 864, 210, 24, 367, 153, 779, 654, 747, 5, 514, 158, 774, 924, 748, 286, 685, 698, 412, 740, 720, 301, 879, 680, 418, 795, 708, 803, 517, 557, 219, 939, 904, 961, 595, 119, 717, 723, 999, 230, 820, 72, 142, 762, 176, 638, 408, 500, 354, 245, 820, 650, 666, 811, 872, 1, 142, 238, 131, 176, 184, 37, 478, 986, 42, 39, 554, 431, 913, 641, 662, 589, 209, 515, 861, 12, 990, 341, 713, 945, 977, 294, 251, 130, 733, 733, 182, 617, 247, 829, 340, 815, 469, 129, 755, 184, 424, 31, 967, 755, 248, 454, 962, 632, 253, 168, 191, 528, 393, 767, 115, 506, 766, 676, 121, 545, 160, 907, 86, 178, 500, 883, 802, 878, 869, 341, 473, 593, 545, 959, 577, 54, 763, 691, 359, 423, 882, 768, 495, 936, 346, 663, 980, 610, 681, 327, 840, 451, 379, 999, 563, 234, 842, 939, 369, 570, 917, 806, 331, 21, 335, 828, 890, 529, 554, 182, 360, 692, 136, 986, 373, 891, 234, 727, 296, 72, 48, 425, 364, 413, 476, 623, 963, 521, 676, 613, 981, 413, 888, 138, 782, 626, 84, 799, 808, 542, 260, 662, 701, 780, 711, 470, 801, 186, 968, 351, 877, 622, 731, 303, 920, 169, 868, 179, 395, 163, 970, 370, 835, 348, 620, 41, 510, 921, 566, 672, 118, 61, 43, 798, 597, 607, 184, 910, 339, 248, 999, 385, 277, 716, 429, 33, 989, 122, 351, 617, 460, 523, 675, 889, 274, 463, 702, 434, 70, 80, 168, 230, 607, 901, 175, 585, 471, 301, 436, 187, 147, 263, 101, 925, 56, 676, 417, 611, 162, 0, 614, 366, 665, 300, 207, 760
};
float verify_data[DATA_SIZE] = 
{
1100, 1770, 1347, 700, 1094, 963, 459, 1453, 315, 673, 689, 992, 730, 1124, 1777, 676, 360, 1022, 1768, 719, 1564, 1217, 620, 496, 318, 960, 579, 1736, 735, 894, 1168, 982, 1375, 1441, 351, 1661, 378, 728, 931, 1338, 627, 1074, 1562, 1198, 786, 637, 1371, 945, 1103, 995, 905, 822, 715, 980, 810, 1302, 914, 1419, 1037, 1614, 1475, 1182, 194, 667, 1607, 820, 1339, 1640, 1609, 972, 677, 1218, 1226, 1180, 1359, 1498, 1019, 1268, 904, 1136, 483, 1151, 1005, 1025, 960, 851, 1301, 1112, 1572, 930, 1382, 795, 1044, 387, 1444, 811, 600, 979, 1612, 1530, 921, 525, 996, 674, 1461, 895, 903, 852, 641, 1467, 1122, 408, 1680, 1055, 904, 1235, 1083, 970, 1402, 1604, 920, 1253, 602, 422, 1068, 1007, 1190, 308, 1211, 888, 952, 1140, 124, 976, 292, 336, 1264, 1169, 557, 1593, 823, 706, 731, 562, 716, 500, 842, 1636, 519, 950, 1676, 1133, 1016, 799, 1445, 832, 1313, 46, 1214, 1362, 591, 1341, 1256, 962, 742, 559, 1228, 700, 1521, 1714, 1452, 705, 698, 968, 1182, 772, 354, 799, 1392, 523, 1433, 225, 248, 1010, 13, 636, 1382, 1395, 1025, 1412, 967, 1215, 699, 664, 1027, 544, 255, 1837, 1230, 1090, 1032, 837, 1147, 1224, 1428, 1860, 1508, 1314, 553, 428, 442, 1064, 1198, 850, 102, 1146, 1084, 906, 578, 494, 1307, 1235, 675, 940, 1339, 657, 1628, 1547, 728, 1381, 724, 830, 665, 905, 1542, 705, 575, 1211, 1458, 473, 1209, 562, 720, 1318, 938, 415, 436, 976, 848, 1156, 697, 764, 1176, 556, 656, 950, 786, 903, 1364, 1285, 950, 687, 324, 1310, 1323, 360, 767, 931, 1104, 1385, 1224, 1293, 1085, 1130, 1132, 987, 536, 435, 1178, 1706, 820, 525, 1176, 1366, 419, 490, 480, 1264, 1122, 641, 1070, 1063, 507, 438, 565, 774, 1358, 1270, 1577, 416, 1343, 1292, 1188, 807, 753, 1048, 914, 362, 1375, 1057, 1303, 1184, 1457, 1003, 1338, 262, 1296, 577, 83, 510, 882, 1530, 1599, 512, 802, 1236, 684, 1681, 969, 1126, 653, 317, 707, 559, 985, 1316, 702, 398, 1408, 1574, 1492, 447, 571, 600, 828, 335, 875, 741, 949, 1098, 711, 1697, 1018, 1332, 1290, 645, 718, 577, 1391, 1395, 1733, 864, 1084, 903, 1456, 1275, 922, 155, 1486, 887, 934, 1622, 191, 1249, 1398, 1161, 965, 1014, 729, 957, 369, 994, 1016, 802, 1038, 449, 1545, 1246, 799, 951, 816, 862, 997, 1189, 374, 780, 593, 1335, 1081, 762, 1313, 383, 1096, 943, 1120, 1725, 1041, 1065, 558, 674, 1007, 1002, 1158, 1075, 607, 654, 1046, 729, 362, 924, 1096, 1012, 1595, 782, 1178, 1102, 263, 1482, 1737, 1229, 577, 1173, 1161, 1066, 1371, 1261, 1657, 1716, 1426, 1312, 1269, 756, 844, 1709, 1363, 910, 690, 1406, 913, 895, 849, 754, 1651, 903, 846, 1610, 703, 656, 1006, 926, 334, 1127, 849, 846, 1454, 1139, 1302, 1368, 577, 1211, 958, 248, 1311, 1572, 1185, 1514, 1072, 1079, 215, 836, 849, 744, 1238, 956, 1691, 266, 678, 1616, 643, 226, 1358, 604, 1867, 777, 707, 644, 1674, 1711, 1045, 1838, 530, 1059, 365, 678, 1584, 1028, 1905, 339, 1098, 1234, 997, 938, 870, 1046, 526, 1298, 883, 516, 1445, 604, 216, 780, 986, 1845, 279, 993, 331, 1216, 1584, 1280, 1518, 678, 453, 196, 1120, 480, 860, 743, 495, 887, 1584, 760, 1642, 206, 1610, 1828, 806, 921, 1080, 1298, 1465, 1007, 954, 131, 1256, 725, 477, 1026, 1063, 1409, 243, 701, 483, 1388, 1124, 784, 290, 1491, 267, 1155, 1153, 741, 1213, 1792, 1276, 652, 1155, 858, 984, 1401, 1539, 1293, 1117, 774, 419, 1465, 797, 784, 963, 1325, 1012, 1574, 939, 306, 1174, 991, 978, 1390, 1183, 647, 1215, 192, 978, 662, 761, 1429, 709, 346, 996, 612, 876, 405, 562, 1750, 513, 666, 1264, 1293, 1224, 428, 210, 1692, 806, 947, 1057, 760, 1337, 1084, 1646, 1052, 1158, 1393, 1248, 1010, 1286, 1685, 914, 344, 1236, 1313, 631, 973, 1228, 743, 860, 542, 407, 852, 1152, 1114, 1083, 1594, 1321, 981, 1521, 1228, 1466, 1277, 1563, 1198, 1180, 1049, 1258, 445, 1962, 1196, 680, 671, 1333, 1687, 1318, 574, 1045, 1256, 401, 1553, 1007, 1747, 665, 1080, 1101, 1292, 729, 867, 1368, 1227, 1083, 1272, 497, 1435, 1127, 328, 1316, 1115, 1099, 1319, 497, 1652, 1395, 894, 701, 1151, 1839, 934, 1197, 717, 951, 459, 1548, 1034, 482, 900, 911, 1332, 686, 777, 1294, 935, 815, 1397, 360, 125, 810, 492, 1526, 1065, 1714, 436, 732, 1085, 1166, 1054, 1236, 1256, 1330, 1145, 1229, 1195, 1506, 1246, 1066, 1619, 1158, 918, 1218, 1198, 1319, 859, 237, 1833, 976, 1086, 1245, 777, 876, 1112, 1834, 592, 921, 1039, 524, 960, 489, 1367, 799, 878, 714, 376, 1406, 1166, 1664, 1205, 1390, 439, 967, 709, 602, 1040, 379, 478, 1401, 1207, 544, 935, 594, 1288, 1257, 1016, 1361, 1564, 519, 774, 915, 545, 1213, 879, 1606, 1583, 1364, 348, 460, 248, 857, 1116, 842, 872, 765, 1308, 546, 1633, 752, 161, 971, 981, 1200, 209, 1149, 1267, 1036, 935, 1266, 1540, 1252, 866, 312, 706, 1362, 1544, 942, 612, 1438, 815, 607, 1481, 179, 1532, 398, 753, 1032, 1394, 1428, 1385, 1769, 724, 696, 1218, 1434, 1116, 1328, 358, 1415, 1657, 540, 1067, 1101, 1323, 917, 1810, 581, 1465, 1066, 1364, 1331, 948, 1381, 518, 615, 1745, 894, 497, 1410, 1935, 538, 1256, 1308, 1199, 721, 575, 1257, 882, 1398, 1122, 1311, 877, 1129, 1169, 146, 1434, 1282, 1473, 611, 1505, 368, 1044, 663, 452, 700, 1176, 1294, 1037, 1290, 836, 1352, 998, 1446, 798, 1278, 515, 1663, 1585, 705, 1322, 1202, 639, 592, 747, 1307, 1052, 1215, 852, 1403, 463, 1494, 613, 1275, 1456, 1679, 318, 1771, 451, 1471, 970, 688, 1016, 1085, 1316, 1363, 1123, 754, 528, 772, 1499, 1454, 1345, 168, 939, 618, 1416, 1527, 747, 422, 1382, 431, 1098, 1756, 440, 582, 1450, 896, 227, 1428, 785, 474, 1396, 1155, 1122, 1347, 1720, 1266, 541, 1534, 1243, 395, 969, 632, 758, 829, 1615, 990, 1046, 1407, 793, 1404, 682, 755, 1197, 596, 1172, 604, 803, 463, 1424, 574, 120, 665, 1054, 1089, 977, 1121, 1451
};
