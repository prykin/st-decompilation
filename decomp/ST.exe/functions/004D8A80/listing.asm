FUN_004d8a80:
004D8A80  55                        PUSH EBP
004D8A81  8B EC                     MOV EBP,ESP
004D8A83  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D8A87  3D FF 00 00 00            CMP EAX,0xff
004D8A8C  75 06                     JNZ 0x004d8a94
004D8A8E  33 C0                     XOR EAX,EAX
004D8A90  5D                        POP EBP
004D8A91  C2 08 00                  RET 0x8
LAB_004d8a94:
004D8A94  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D8A97  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D8A9A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D8A9D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D8AA0  C1 E1 04                  SHL ECX,0x4
004D8AA3  03 C8                     ADD ECX,EAX
004D8AA5  8B 04 4D 47 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e47]
004D8AAC  3B C2                     CMP EAX,EDX
004D8AAE  8D 0C 4D 47 4E 7F 00      LEA ECX,[ECX*0x2 + 0x7f4e47]
004D8AB5  7D 07                     JGE 0x004d8abe
004D8AB7  83 C8 FF                  OR EAX,0xffffffff
004D8ABA  5D                        POP EBP
004D8ABB  C2 08 00                  RET 0x8
LAB_004d8abe:
004D8ABE  2B C2                     SUB EAX,EDX
004D8AC0  89 01                     MOV dword ptr [ECX],EAX
004D8AC2  5D                        POP EBP
004D8AC3  C2 08 00                  RET 0x8
