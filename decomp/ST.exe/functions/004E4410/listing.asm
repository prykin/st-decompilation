FUN_004e4410:
004E4410  55                        PUSH EBP
004E4411  8B EC                     MOV EBP,ESP
004E4413  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E4416  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E4419  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E441C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E441F  C1 E1 04                  SHL ECX,0x4
004E4422  03 C8                     ADD ECX,EAX
004E4424  8B 04 4D BE 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57be]
004E442B  5D                        POP EBP
004E442C  C2 04 00                  RET 0x4
