FUN_004ee350:
004EE350  55                        PUSH EBP
004EE351  8B EC                     MOV EBP,ESP
004EE353  83 EC 54                  SUB ESP,0x54
004EE356  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004EE359  56                        PUSH ESI
004EE35A  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
004EE35D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004EE364  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004EE367  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004EE36A  8B 10                     MOV EDX,dword ptr [EAX]
004EE36C  2B D6                     SUB EDX,ESI
004EE36E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004EE371  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
004EE374  85 D2                     TEST EDX,EDX
004EE376  75 10                     JNZ 0x004ee388
004EE378  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
004EE37B  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
004EE381  2B C1                     SUB EAX,ECX
004EE383  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004EE386  EB 0B                     JMP 0x004ee393
LAB_004ee388:
004EE388  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004EE38B  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
004EE38E  2B D0                     SUB EDX,EAX
004EE390  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_004ee393:
004EE393  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004EE398  8D 55 B0                  LEA EDX,[EBP + -0x50]
004EE39B  8D 4D AC                  LEA ECX,[EBP + -0x54]
004EE39E  6A 00                     PUSH 0x0
004EE3A0  52                        PUSH EDX
004EE3A1  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004EE3A4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EE3AA  E8 41 F4 23 00            CALL 0x0072d7f0
004EE3AF  8B F0                     MOV ESI,EAX
004EE3B1  83 C4 08                  ADD ESP,0x8
004EE3B4  85 F6                     TEST ESI,ESI
004EE3B6  75 7D                     JNZ 0x004ee435
004EE3B8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004EE3BB  6A 01                     PUSH 0x1
004EE3BD  50                        PUSH EAX
004EE3BE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004EE3C1  25 FF 00 00 00            AND EAX,0xff
004EE3C6  50                        PUSH EAX
004EE3C7  6A 01                     PUSH 0x1
004EE3C9  51                        PUSH ECX
004EE3CA  E8 31 48 20 00            CALL 0x006f2c00
004EE3CF  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004EE3D5  83 C4 0C                  ADD ESP,0xc
004EE3D8  50                        PUSH EAX
004EE3D9  6A 01                     PUSH 0x1
004EE3DB  E8 00 39 20 00            CALL 0x006f1ce0
004EE3E0  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004EE3E3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004EE3E6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004EE3E9  50                        PUSH EAX
004EE3EA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004EE3ED  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
004EE3F0  6A 01                     PUSH 0x1
004EE3F2  52                        PUSH EDX
004EE3F3  50                        PUSH EAX
004EE3F4  51                        PUSH ECX
004EE3F5  E8 2F 4E F1 FF            CALL 0x00403229
004EE3FA  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004EE400  83 C4 14                  ADD ESP,0x14
004EE403  8D 55 FC                  LEA EDX,[EBP + -0x4]
004EE406  52                        PUSH EDX
004EE407  E8 D4 3C 20 00            CALL 0x006f20e0
004EE40C  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
004EE40F  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004EE412  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
004EE415  50                        PUSH EAX
004EE416  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004EE41B  51                        PUSH ECX
004EE41C  6A FF                     PUSH -0x1
004EE41E  52                        PUSH EDX
004EE41F  50                        PUSH EAX
004EE420  E8 1B 52 1C 00            CALL 0x006b3640
004EE425  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004EE428  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EE42E  5E                        POP ESI
004EE42F  8B E5                     MOV ESP,EBP
004EE431  5D                        POP EBP
004EE432  C2 0C 00                  RET 0xc
LAB_004ee435:
004EE435  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004EE438  68 70 17 7C 00            PUSH 0x7c1770
004EE43D  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EE442  56                        PUSH ESI
004EE443  6A 00                     PUSH 0x0
004EE445  68 C5 00 00 00            PUSH 0xc5
004EE44A  68 94 16 7C 00            PUSH 0x7c1694
004EE44F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EE455  E8 76 F0 1B 00            CALL 0x006ad4d0
004EE45A  83 C4 18                  ADD ESP,0x18
004EE45D  85 C0                     TEST EAX,EAX
004EE45F  74 01                     JZ 0x004ee462
004EE461  CC                        INT3
LAB_004ee462:
004EE462  68 C5 00 00 00            PUSH 0xc5
004EE467  68 94 16 7C 00            PUSH 0x7c1694
004EE46C  6A 00                     PUSH 0x0
004EE46E  56                        PUSH ESI
004EE46F  E8 CC 79 1B 00            CALL 0x006a5e40
004EE474  5E                        POP ESI
004EE475  8B E5                     MOV ESP,EBP
004EE477  5D                        POP EBP
004EE478  C2 0C 00                  RET 0xc
