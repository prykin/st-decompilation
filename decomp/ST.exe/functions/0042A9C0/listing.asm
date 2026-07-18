FUN_0042a9c0:
0042A9C0  55                        PUSH EBP
0042A9C1  8B EC                     MOV EBP,ESP
0042A9C3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042A9C7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042A9CA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042A9CD  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042A9D0  C1 E1 04                  SHL ECX,0x4
0042A9D3  03 C8                     ADD ECX,EAX
0042A9D5  8B 04 4D 25 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e25]
0042A9DC  5D                        POP EBP
0042A9DD  C2 04 00                  RET 0x4
