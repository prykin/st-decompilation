FUN_004d89f0:
004D89F0  55                        PUSH EBP
004D89F1  8B EC                     MOV EBP,ESP
004D89F3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D89F7  3D FF 00 00 00            CMP EAX,0xff
004D89FC  75 06                     JNZ 0x004d8a04
004D89FE  33 C0                     XOR EAX,EAX
004D8A00  5D                        POP EBP
004D8A01  C2 08 00                  RET 0x8
LAB_004d8a04:
004D8A04  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D8A07  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D8A0A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D8A0D  C1 E1 04                  SHL ECX,0x4
004D8A10  03 C8                     ADD ECX,EAX
004D8A12  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D8A15  89 04 4D 43 4E 7F 00      MOV dword ptr [ECX*0x2 + 0x7f4e43],EAX
004D8A1C  5D                        POP EBP
004D8A1D  C2 08 00                  RET 0x8
