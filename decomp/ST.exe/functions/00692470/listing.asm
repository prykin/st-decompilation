FUN_00692470:
00692470  55                        PUSH EBP
00692471  8B EC                     MOV EBP,ESP
00692473  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00692476  56                        PUSH ESI
00692477  85 D2                     TEST EDX,EDX
00692479  57                        PUSH EDI
0069247A  75 08                     JNZ 0x00692484
0069247C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069247F  8D 70 FF                  LEA ESI,[EAX + -0x1]
00692482  EB 03                     JMP 0x00692487
LAB_00692484:
00692484  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
LAB_00692487:
00692487  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0069248A  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0069248D  8D 3C C0                  LEA EDI,[EAX + EAX*0x8]
00692490  8D 14 56                  LEA EDX,[ESI + EDX*0x2]
00692493  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
00692496  5F                        POP EDI
00692497  5E                        POP ESI
00692498  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
0069249B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0069249E  8B 8C 81 74 1A 00 00      MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1a74]
006924A5  8B 44 91 2D               MOV EAX,dword ptr [ECX + EDX*0x4 + 0x2d]
006924A9  5D                        POP EBP
006924AA  C2 10 00                  RET 0x10
