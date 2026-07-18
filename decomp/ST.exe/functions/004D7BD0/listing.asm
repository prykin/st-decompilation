FUN_004d7bd0:
004D7BD0  55                        PUSH EBP
004D7BD1  8B EC                     MOV EBP,ESP
004D7BD3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D7BD7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D7BDA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D7BDD  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D7BE0  C1 E1 04                  SHL ECX,0x4
004D7BE3  03 C8                     ADD ECX,EAX
004D7BE5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D7BE8  8B D0                     MOV EDX,EAX
004D7BEA  C1 E2 04                  SHL EDX,0x4
004D7BED  03 D0                     ADD EDX,EAX
004D7BEF  C1 E2 02                  SHL EDX,0x2
004D7BF2  8B 84 4A 0A 56 7F 00      MOV EAX,dword ptr [EDX + ECX*0x2 + 0x7f560a]
004D7BF9  5D                        POP EBP
004D7BFA  C2 08 00                  RET 0x8
