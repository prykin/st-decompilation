FUN_004d88f0:
004D88F0  55                        PUSH EBP
004D88F1  8B EC                     MOV EBP,ESP
004D88F3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D88F7  3D FF 00 00 00            CMP EAX,0xff
004D88FC  75 06                     JNZ 0x004d8904
004D88FE  33 C0                     XOR EAX,EAX
004D8900  5D                        POP EBP
004D8901  C2 08 00                  RET 0x8
LAB_004d8904:
004D8904  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D8907  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D890A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D890D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D8910  C1 E1 04                  SHL ECX,0x4
004D8913  03 C8                     ADD ECX,EAX
004D8915  8D 04 4D 43 4E 7F 00      LEA EAX,[ECX*0x2 + 0x7f4e43]
004D891C  8B 0C 4D 43 4E 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f4e43]
004D8923  03 CA                     ADD ECX,EDX
004D8925  89 08                     MOV dword ptr [EAX],ECX
004D8927  8B C1                     MOV EAX,ECX
004D8929  5D                        POP EBP
004D892A  C2 08 00                  RET 0x8
