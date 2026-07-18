FUN_004e4230:
004E4230  55                        PUSH EBP
004E4231  8B EC                     MOV EBP,ESP
004E4233  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E4236  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E4239  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E423C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E423F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E4242  C1 E1 04                  SHL ECX,0x4
004E4245  03 C8                     ADD ECX,EAX
004E4247  8D 04 4D B6 57 7F 00      LEA EAX,[ECX*0x2 + 0x7f57b6]
004E424E  8B 0C 4D B6 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57b6]
004E4255  03 CA                     ADD ECX,EDX
004E4257  89 08                     MOV dword ptr [EAX],ECX
004E4259  8B C1                     MOV EAX,ECX
004E425B  5D                        POP EBP
004E425C  C2 08 00                  RET 0x8
