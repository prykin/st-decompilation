FUN_004d87b0:
004D87B0  55                        PUSH EBP
004D87B1  8B EC                     MOV EBP,ESP
004D87B3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D87B7  3D FF 00 00 00            CMP EAX,0xff
004D87BC  75 06                     JNZ 0x004d87c4
004D87BE  33 C0                     XOR EAX,EAX
004D87C0  5D                        POP EBP
004D87C1  C2 08 00                  RET 0x8
LAB_004d87c4:
004D87C4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D87C7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D87CA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D87CD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D87D0  C1 E1 04                  SHL ECX,0x4
004D87D3  03 C8                     ADD ECX,EAX
004D87D5  8D 04 4D 3F 4E 7F 00      LEA EAX,[ECX*0x2 + 0x7f4e3f]
004D87DC  8B 0C 4D 3F 4E 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f4e3f]
004D87E3  03 CA                     ADD ECX,EDX
004D87E5  89 08                     MOV dword ptr [EAX],ECX
004D87E7  8B C1                     MOV EAX,ECX
004D87E9  5D                        POP EBP
004D87EA  C2 08 00                  RET 0x8
