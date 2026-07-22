007345A4  D9 C9                     FXCH
007345A6  83 3D 44 71 85 00 01      CMP dword ptr [0x00857144],0x1
007345AD  74 04                     JZ 0x007345b3
007345AF  D9 F8                     FPREM
007345B1  EB 05                     JMP 0x007345b8
007345B3  E8 E4 AF 00 00            CALL 0x0073f59c
007345B8  9B DF E0                  FSTSW AX
007345BB  9B                        WAIT
007345BC  9E                        SAHF
007345BD  7A E7                     JP 0x007345a6
007345BF  DD D9                     FSTP ST1
007345C1  C3                        RET
