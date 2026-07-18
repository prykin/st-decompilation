FUN_004357f0:
004357F0  55                        PUSH EBP
004357F1  8B EC                     MOV EBP,ESP
004357F3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004357F7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004357FA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004357FD  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00435800  C1 E1 04                  SHL ECX,0x4
00435803  03 C8                     ADD ECX,EAX
00435805  8B 04 4D 21 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e21]
0043580C  5D                        POP EBP
0043580D  C2 04 00                  RET 0x4
