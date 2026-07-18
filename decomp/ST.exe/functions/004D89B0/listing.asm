FUN_004d89b0:
004D89B0  55                        PUSH EBP
004D89B1  8B EC                     MOV EBP,ESP
004D89B3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D89B7  3D FF 00 00 00            CMP EAX,0xff
004D89BC  75 06                     JNZ 0x004d89c4
004D89BE  33 C0                     XOR EAX,EAX
004D89C0  5D                        POP EBP
004D89C1  C2 04 00                  RET 0x4
LAB_004d89c4:
004D89C4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D89C7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D89CA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D89CD  C1 E1 04                  SHL ECX,0x4
004D89D0  03 C8                     ADD ECX,EAX
004D89D2  8B 04 4D 43 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e43]
004D89D9  5D                        POP EBP
004D89DA  C2 04 00                  RET 0x4
