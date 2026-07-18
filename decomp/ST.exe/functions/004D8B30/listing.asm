FUN_004d8b30:
004D8B30  55                        PUSH EBP
004D8B31  8B EC                     MOV EBP,ESP
004D8B33  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D8B37  3D FF 00 00 00            CMP EAX,0xff
004D8B3C  75 06                     JNZ 0x004d8b44
004D8B3E  33 C0                     XOR EAX,EAX
004D8B40  5D                        POP EBP
004D8B41  C2 08 00                  RET 0x8
LAB_004d8b44:
004D8B44  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D8B47  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D8B4A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D8B4D  C1 E1 04                  SHL ECX,0x4
004D8B50  03 C8                     ADD ECX,EAX
004D8B52  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D8B55  89 04 4D 47 4E 7F 00      MOV dword ptr [ECX*0x2 + 0x7f4e47],EAX
004D8B5C  5D                        POP EBP
004D8B5D  C2 08 00                  RET 0x8
