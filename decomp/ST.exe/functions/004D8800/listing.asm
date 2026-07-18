FUN_004d8800:
004D8800  55                        PUSH EBP
004D8801  8B EC                     MOV EBP,ESP
004D8803  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D8807  3D FF 00 00 00            CMP EAX,0xff
004D880C  75 06                     JNZ 0x004d8814
004D880E  33 C0                     XOR EAX,EAX
004D8810  5D                        POP EBP
004D8811  C2 08 00                  RET 0x8
LAB_004d8814:
004D8814  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D8817  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D881A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D881D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D8820  C1 E1 04                  SHL ECX,0x4
004D8823  03 C8                     ADD ECX,EAX
004D8825  8B 04 4D 3F 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e3f]
004D882C  3B C2                     CMP EAX,EDX
004D882E  8D 0C 4D 3F 4E 7F 00      LEA ECX,[ECX*0x2 + 0x7f4e3f]
004D8835  7D 07                     JGE 0x004d883e
004D8837  83 C8 FF                  OR EAX,0xffffffff
004D883A  5D                        POP EBP
004D883B  C2 08 00                  RET 0x8
LAB_004d883e:
004D883E  2B C2                     SUB EAX,EDX
004D8840  89 01                     MOV dword ptr [ECX],EAX
004D8842  5D                        POP EBP
004D8843  C2 08 00                  RET 0x8
