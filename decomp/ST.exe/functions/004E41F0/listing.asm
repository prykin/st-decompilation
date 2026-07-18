FUN_004e41f0:
004E41F0  55                        PUSH EBP
004E41F1  8B EC                     MOV EBP,ESP
004E41F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E41F6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E41F9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E41FC  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E41FF  C1 E1 04                  SHL ECX,0x4
004E4202  03 C8                     ADD ECX,EAX
004E4204  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E4207  89 04 4D B6 57 7F 00      MOV dword ptr [ECX*0x2 + 0x7f57b6],EAX
004E420E  5D                        POP EBP
004E420F  C2 08 00                  RET 0x8
