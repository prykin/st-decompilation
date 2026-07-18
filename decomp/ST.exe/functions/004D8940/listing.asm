FUN_004d8940:
004D8940  55                        PUSH EBP
004D8941  8B EC                     MOV EBP,ESP
004D8943  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D8947  3D FF 00 00 00            CMP EAX,0xff
004D894C  75 06                     JNZ 0x004d8954
004D894E  33 C0                     XOR EAX,EAX
004D8950  5D                        POP EBP
004D8951  C2 08 00                  RET 0x8
LAB_004d8954:
004D8954  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D8957  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D895A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D895D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D8960  C1 E1 04                  SHL ECX,0x4
004D8963  03 C8                     ADD ECX,EAX
004D8965  8B 04 4D 43 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e43]
004D896C  3B C2                     CMP EAX,EDX
004D896E  8D 0C 4D 43 4E 7F 00      LEA ECX,[ECX*0x2 + 0x7f4e43]
004D8975  7D 07                     JGE 0x004d897e
004D8977  83 C8 FF                  OR EAX,0xffffffff
004D897A  5D                        POP EBP
004D897B  C2 08 00                  RET 0x8
LAB_004d897e:
004D897E  2B C2                     SUB EAX,EDX
004D8980  89 01                     MOV dword ptr [ECX],EAX
004D8982  5D                        POP EBP
004D8983  C2 08 00                  RET 0x8
