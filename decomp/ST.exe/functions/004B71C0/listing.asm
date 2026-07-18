FUN_004b71c0:
004B71C0  55                        PUSH EBP
004B71C1  8B EC                     MOV EBP,ESP
004B71C3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004B71C7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B71CA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004B71CD  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004B71D0  C1 E1 04                  SHL ECX,0x4
004B71D3  03 C8                     ADD ECX,EAX
004B71D5  8B 04 4D 92 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f5792]
004B71DC  5D                        POP EBP
004B71DD  C2 04 00                  RET 0x4
