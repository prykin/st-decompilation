FUN_0044e1f0:
0044E1F0  55                        PUSH EBP
0044E1F1  8B EC                     MOV EBP,ESP
0044E1F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044E1F6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044E1F9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044E1FC  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044E1FF  C1 E1 04                  SHL ECX,0x4
0044E202  03 C8                     ADD ECX,EAX
0044E204  66 8B 04 4D 2D 4E 7F 00   MOV AX,word ptr [ECX*0x2 + 0x7f4e2d]
0044E20C  5D                        POP EBP
0044E20D  C2 04 00                  RET 0x4
