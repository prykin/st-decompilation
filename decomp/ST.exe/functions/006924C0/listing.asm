FUN_006924c0:
006924C0  55                        PUSH EBP
006924C1  8B EC                     MOV EBP,ESP
006924C3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006924C6  56                        PUSH ESI
006924C7  85 D2                     TEST EDX,EDX
006924C9  57                        PUSH EDI
006924CA  75 08                     JNZ 0x006924d4
006924CC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006924CF  8D 70 FF                  LEA ESI,[EAX + -0x1]
006924D2  EB 03                     JMP 0x006924d7
LAB_006924d4:
006924D4  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
LAB_006924d7:
006924D7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006924DA  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006924DD  8D 3C C0                  LEA EDI,[EAX + EAX*0x8]
006924E0  8D 14 56                  LEA EDX,[ESI + EDX*0x2]
006924E3  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
006924E6  5F                        POP EDI
006924E7  5E                        POP ESI
006924E8  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006924EB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006924EE  03 C2                     ADD EAX,EDX
006924F0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006924F3  8B 8C 81 08 1B 00 00      MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1b08]
006924FA  8B 44 91 2D               MOV EAX,dword ptr [ECX + EDX*0x4 + 0x2d]
006924FE  5D                        POP EBP
006924FF  C2 14 00                  RET 0x14
