FUN_004d7b90:
004D7B90  55                        PUSH EBP
004D7B91  8B EC                     MOV EBP,ESP
004D7B93  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D7B97  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D7B9A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D7B9D  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D7BA0  C1 E1 04                  SHL ECX,0x4
004D7BA3  03 C8                     ADD ECX,EAX
004D7BA5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D7BA8  8B D0                     MOV EDX,EAX
004D7BAA  C1 E2 04                  SHL EDX,0x4
004D7BAD  03 D0                     ADD EDX,EAX
004D7BAF  C1 E2 02                  SHL EDX,0x2
004D7BB2  8B 84 4A 06 56 7F 00      MOV EAX,dword ptr [EDX + ECX*0x2 + 0x7f5606]
004D7BB9  5D                        POP EBP
004D7BBA  C2 08 00                  RET 0x8
