FUN_006472b0:
006472B0  8B 51 50                  MOV EDX,dword ptr [ECX + 0x50]
006472B3  33 C0                     XOR EAX,EAX
006472B5  42                        INC EDX
006472B6  89 51 50                  MOV dword ptr [ECX + 0x50],EDX
006472B9  2B D0                     SUB EDX,EAX
006472BB  74 43                     JZ 0x00647300
006472BD  4A                        DEC EDX
006472BE  74 40                     JZ 0x00647300
006472C0  4A                        DEC EDX
006472C1  75 79                     JNZ 0x0064733c
006472C3  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
006472C6  83 C0 02                  ADD EAX,0x2
006472C9  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006472CC  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
006472CF  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
006472D2  89 41 3C                  MOV dword ptr [ECX + 0x3c],EAX
006472D5  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
006472D8  83 C0 02                  ADD EAX,0x2
006472DB  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006472DE  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
006472E1  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
006472E4  89 41 40                  MOV dword ptr [ECX + 0x40],EAX
006472E7  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
006472EA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006472ED  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006472F0  8D 04 D5 DE 00 00 00      LEA EAX,[EDX*0x8 + 0xde]
006472F7  89 41 44                  MOV dword ptr [ECX + 0x44],EAX
006472FA  B8 01 00 00 00            MOV EAX,0x1
006472FF  C3                        RET
LAB_00647300:
00647300  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
00647303  83 C0 02                  ADD EAX,0x2
00647306  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00647309  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0064730C  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0064730F  89 41 3C                  MOV dword ptr [ECX + 0x3c],EAX
00647312  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
00647315  83 C0 02                  ADD EAX,0x2
00647318  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0064731B  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0064731E  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00647321  89 41 40                  MOV dword ptr [ECX + 0x40],EAX
00647324  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
00647327  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0064732A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0064732D  8D 04 D5 78 00 00 00      LEA EAX,[EDX*0x8 + 0x78]
00647334  89 41 44                  MOV dword ptr [ECX + 0x44],EAX
00647337  B8 01 00 00 00            MOV EAX,0x1
LAB_0064733c:
0064733C  C3                        RET
