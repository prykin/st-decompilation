FUN_004e4140:
004E4140  55                        PUSH EBP
004E4141  8B EC                     MOV EBP,ESP
004E4143  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E4146  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E4149  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E414C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E414F  C1 E1 04                  SHL ECX,0x4
004E4152  03 C8                     ADD ECX,EAX
004E4154  8B 04 4D FA 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57fa]
004E415B  85 C0                     TEST EAX,EAX
004E415D  74 07                     JZ 0x004e4166
004E415F  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004E4162  5D                        POP EBP
004E4163  C2 04 00                  RET 0x4
LAB_004e4166:
004E4166  33 C0                     XOR EAX,EAX
004E4168  5D                        POP EBP
004E4169  C2 04 00                  RET 0x4
