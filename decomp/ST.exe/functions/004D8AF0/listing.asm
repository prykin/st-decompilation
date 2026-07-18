FUN_004d8af0:
004D8AF0  55                        PUSH EBP
004D8AF1  8B EC                     MOV EBP,ESP
004D8AF3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D8AF7  3D FF 00 00 00            CMP EAX,0xff
004D8AFC  75 06                     JNZ 0x004d8b04
004D8AFE  33 C0                     XOR EAX,EAX
004D8B00  5D                        POP EBP
004D8B01  C2 04 00                  RET 0x4
LAB_004d8b04:
004D8B04  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D8B07  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D8B0A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D8B0D  C1 E1 04                  SHL ECX,0x4
004D8B10  03 C8                     ADD ECX,EAX
004D8B12  8B 04 4D 47 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e47]
004D8B19  5D                        POP EBP
004D8B1A  C2 04 00                  RET 0x4
