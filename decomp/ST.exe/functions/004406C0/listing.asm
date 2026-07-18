FUN_004406c0:
004406C0  55                        PUSH EBP
004406C1  8B EC                     MOV EBP,ESP
004406C3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004406C7  3D FF 00 00 00            CMP EAX,0xff
004406CC  75 06                     JNZ 0x004406d4
004406CE  32 C0                     XOR AL,AL
004406D0  5D                        POP EBP
004406D1  C2 04 00                  RET 0x4
LAB_004406d4:
004406D4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004406D7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004406DA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004406DD  C1 E1 04                  SHL ECX,0x4
004406E0  03 C8                     ADD ECX,EAX
004406E2  8A 04 4D 20 4E 7F 00      MOV AL,byte ptr [ECX*0x2 + 0x7f4e20]
004406E9  5D                        POP EBP
004406EA  C2 04 00                  RET 0x4
