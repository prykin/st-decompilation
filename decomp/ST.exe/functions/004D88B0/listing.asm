FUN_004d88b0:
004D88B0  55                        PUSH EBP
004D88B1  8B EC                     MOV EBP,ESP
004D88B3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D88B7  3D FF 00 00 00            CMP EAX,0xff
004D88BC  75 06                     JNZ 0x004d88c4
004D88BE  33 C0                     XOR EAX,EAX
004D88C0  5D                        POP EBP
004D88C1  C2 08 00                  RET 0x8
LAB_004d88c4:
004D88C4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D88C7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D88CA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D88CD  C1 E1 04                  SHL ECX,0x4
004D88D0  03 C8                     ADD ECX,EAX
004D88D2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D88D5  89 04 4D 3F 4E 7F 00      MOV dword ptr [ECX*0x2 + 0x7f4e3f],EAX
004D88DC  5D                        POP EBP
004D88DD  C2 08 00                  RET 0x8
