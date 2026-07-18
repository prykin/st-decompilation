FUN_004e4090:
004E4090  55                        PUSH EBP
004E4091  8B EC                     MOV EBP,ESP
004E4093  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E4096  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E4099  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E409C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E409F  C1 E1 04                  SHL ECX,0x4
004E40A2  03 C8                     ADD ECX,EAX
004E40A4  8B 04 4D BA 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57ba]
004E40AB  5D                        POP EBP
004E40AC  C2 04 00                  RET 0x4
