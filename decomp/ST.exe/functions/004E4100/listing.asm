FUN_004e4100:
004E4100  55                        PUSH EBP
004E4101  8B EC                     MOV EBP,ESP
004E4103  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E4106  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E4109  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E410C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E410F  C1 E1 04                  SHL ECX,0x4
004E4112  03 C8                     ADD ECX,EAX
004E4114  8D 04 4D BA 57 7F 00      LEA EAX,[ECX*0x2 + 0x7f57ba]
004E411B  8B 0C 4D BA 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57ba]
004E4122  49                        DEC ECX
004E4123  89 08                     MOV dword ptr [EAX],ECX
004E4125  8B C1                     MOV EAX,ECX
004E4127  5D                        POP EBP
004E4128  C2 08 00                  RET 0x8
