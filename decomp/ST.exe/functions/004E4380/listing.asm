FUN_004e4380:
004E4380  55                        PUSH EBP
004E4381  8B EC                     MOV EBP,ESP
004E4383  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E4386  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E4389  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E438C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E438F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E4392  C1 E1 04                  SHL ECX,0x4
004E4395  03 C8                     ADD ECX,EAX
004E4397  8D 04 4D BE 57 7F 00      LEA EAX,[ECX*0x2 + 0x7f57be]
004E439E  8B 0C 4D BE 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57be]
004E43A5  03 CA                     ADD ECX,EDX
004E43A7  89 08                     MOV dword ptr [EAX],ECX
004E43A9  8B C1                     MOV EAX,ECX
004E43AB  5D                        POP EBP
004E43AC  C2 08 00                  RET 0x8
