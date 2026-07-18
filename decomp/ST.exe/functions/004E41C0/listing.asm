FUN_004e41c0:
004E41C0  55                        PUSH EBP
004E41C1  8B EC                     MOV EBP,ESP
004E41C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E41C6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E41C9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E41CC  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E41CF  C1 E1 04                  SHL ECX,0x4
004E41D2  03 C8                     ADD ECX,EAX
004E41D4  8B 04 4D B6 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57b6]
004E41DB  5D                        POP EBP
004E41DC  C2 04 00                  RET 0x4
