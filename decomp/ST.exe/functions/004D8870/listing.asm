FUN_004d8870:
004D8870  55                        PUSH EBP
004D8871  8B EC                     MOV EBP,ESP
004D8873  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D8877  3D FF 00 00 00            CMP EAX,0xff
004D887C  75 06                     JNZ 0x004d8884
004D887E  33 C0                     XOR EAX,EAX
004D8880  5D                        POP EBP
004D8881  C2 04 00                  RET 0x4
LAB_004d8884:
004D8884  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D8887  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D888A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D888D  C1 E1 04                  SHL ECX,0x4
004D8890  03 C8                     ADD ECX,EAX
004D8892  8B 04 4D 3F 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e3f]
004D8899  5D                        POP EBP
004D889A  C2 04 00                  RET 0x4
