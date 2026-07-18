FUN_004d7b50:
004D7B50  55                        PUSH EBP
004D7B51  8B EC                     MOV EBP,ESP
004D7B53  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D7B57  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D7B5A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D7B5D  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D7B60  C1 E1 04                  SHL ECX,0x4
004D7B63  03 C8                     ADD ECX,EAX
004D7B65  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D7B68  8B D0                     MOV EDX,EAX
004D7B6A  C1 E2 04                  SHL EDX,0x4
004D7B6D  03 D0                     ADD EDX,EAX
004D7B6F  C1 E2 02                  SHL EDX,0x2
004D7B72  8B 84 4A 02 56 7F 00      MOV EAX,dword ptr [EDX + ECX*0x2 + 0x7f5602]
004D7B79  5D                        POP EBP
004D7B7A  C2 08 00                  RET 0x8
