FUN_006923e0:
006923E0  55                        PUSH EBP
006923E1  8B EC                     MOV EBP,ESP
006923E3  56                        PUSH ESI
006923E4  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006923E7  83 FE FF                  CMP ESI,-0x1
006923EA  75 18                     JNZ 0x00692404
006923EC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006923EF  5E                        POP ESI
006923F0  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006923F3  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
006923F6  8B 8C C1 50 19 00 00      MOV ECX,dword ptr [ECX + EAX*0x8 + 0x1950]
006923FD  8B 41 2D                  MOV EAX,dword ptr [ECX + 0x2d]
00692400  5D                        POP EBP
00692401  C2 14 00                  RET 0x14
LAB_00692404:
00692404  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00692407  53                        PUSH EBX
00692408  4A                        DEC EDX
00692409  57                        PUSH EDI
0069240A  85 F6                     TEST ESI,ESI
0069240C  75 08                     JNZ 0x00692416
0069240E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00692411  8D 78 FF                  LEA EDI,[EAX + -0x1]
00692414  EB 03                     JMP 0x00692419
LAB_00692416:
00692416  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_00692419:
00692419  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069241C  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
0069241F  8D 1C C0                  LEA EBX,[EAX + EAX*0x8]
00692422  8D 3C DF                  LEA EDI,[EDI + EBX*0x8]
00692425  03 F8                     ADD EDI,EAX
00692427  81 E2 FF FF 00 00         AND EDX,0xffff
0069242D  8D 04 77                  LEA EAX,[EDI + ESI*0x2]
00692430  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00692433  5F                        POP EDI
00692434  5B                        POP EBX
00692435  8D 04 46                  LEA EAX,[ESI + EAX*0x2]
00692438  5E                        POP ESI
00692439  8B 8C 81 54 19 00 00      MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1954]
00692440  8B 44 91 2D               MOV EAX,dword ptr [ECX + EDX*0x4 + 0x2d]
00692444  5D                        POP EBP
00692445  C2 14 00                  RET 0x14
