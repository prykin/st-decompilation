FUN_004b6fc0:
004B6FC0  55                        PUSH EBP
004B6FC1  8B EC                     MOV EBP,ESP
004B6FC3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004B6FC7  56                        PUSH ESI
004B6FC8  57                        PUSH EDI
004B6FC9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B6FCC  6A 14                     PUSH 0x14
004B6FCE  6A 0C                     PUSH 0xc
004B6FD0  6A 14                     PUSH 0x14
004B6FD2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004B6FD5  B9 06 00 00 00            MOV ECX,0x6
004B6FDA  8D 34 50                  LEA ESI,[EAX + EDX*0x2]
004B6FDD  C1 E6 04                  SHL ESI,0x4
004B6FE0  03 F0                     ADD ESI,EAX
004B6FE2  33 C0                     XOR EAX,EAX
004B6FE4  D1 E6                     SHL ESI,0x1
004B6FE6  50                        PUSH EAX
004B6FE7  8D BE 9A 57 7F 00         LEA EDI,[ESI + 0x7f579a]
004B6FED  F3 AB                     STOSD.REP ES:EDI
004B6FEF  E8 9C 72 1F 00            CALL 0x006ae290
004B6FF4  89 86 B2 57 7F 00         MOV dword ptr [ESI + 0x7f57b2],EAX
004B6FFA  5F                        POP EDI
004B6FFB  33 C0                     XOR EAX,EAX
004B6FFD  5E                        POP ESI
004B6FFE  5D                        POP EBP
004B6FFF  C2 04 00                  RET 0x4
