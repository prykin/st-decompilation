FUN_0042a990:
0042A990  55                        PUSH EBP
0042A991  8B EC                     MOV EBP,ESP
0042A993  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042A997  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042A99A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042A99D  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042A9A0  C1 E1 04                  SHL ECX,0x4
0042A9A3  03 C8                     ADD ECX,EAX
0042A9A5  8B 04 4D 29 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e29]
0042A9AC  5D                        POP EBP
0042A9AD  C2 04 00                  RET 0x4
