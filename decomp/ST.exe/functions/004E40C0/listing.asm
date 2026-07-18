FUN_004e40c0:
004E40C0  55                        PUSH EBP
004E40C1  8B EC                     MOV EBP,ESP
004E40C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E40C6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E40C9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E40CC  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E40CF  C1 E1 04                  SHL ECX,0x4
004E40D2  03 C8                     ADD ECX,EAX
004E40D4  8D 04 4D BA 57 7F 00      LEA EAX,[ECX*0x2 + 0x7f57ba]
004E40DB  8B 0C 4D BA 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57ba]
004E40E2  41                        INC ECX
004E40E3  89 08                     MOV dword ptr [EAX],ECX
004E40E5  8B C1                     MOV EAX,ECX
004E40E7  5D                        POP EBP
004E40E8  C2 08 00                  RET 0x8
