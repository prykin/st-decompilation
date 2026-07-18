FUN_004b72b0:
004B72B0  55                        PUSH EBP
004B72B1  8B EC                     MOV EBP,ESP
004B72B3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004B72B7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B72BA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004B72BD  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004B72C0  C1 E1 04                  SHL ECX,0x4
004B72C3  03 C8                     ADD ECX,EAX
004B72C5  8B 04 4D 96 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f5796]
004B72CC  5D                        POP EBP
004B72CD  C2 04 00                  RET 0x4
