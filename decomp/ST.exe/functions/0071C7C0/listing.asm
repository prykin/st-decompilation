FUN_0071c7c0:
0071C7C0  55                        PUSH EBP
0071C7C1  8B EC                     MOV EBP,ESP
0071C7C3  83 EC 64                  SUB ESP,0x64
0071C7C6  53                        PUSH EBX
0071C7C7  8B D9                     MOV EBX,ECX
0071C7C9  56                        PUSH ESI
0071C7CA  33 F6                     XOR ESI,ESI
0071C7CC  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0071C7CF  57                        PUSH EDI
0071C7D0  3B C6                     CMP EAX,ESI
0071C7D2  74 4B                     JZ 0x0071c81f
0071C7D4  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0071C7D7  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0071C7DA  8D 55 9C                  LEA EDX,[EBP + -0x64]
0071C7DD  E8 AE 49 F9 FF            CALL 0x006b1190
0071C7E2  85 C0                     TEST EAX,EAX
0071C7E4  7C 39                     JL 0x0071c81f
LAB_0071c7e6:
0071C7E6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071C7E9  B9 13 00 00 00            MOV ECX,0x13
0071C7EE  8D 75 9C                  LEA ESI,[EBP + -0x64]
0071C7F1  33 C0                     XOR EAX,EAX
0071C7F3  F3 A7                     CMPSD.REPE ES:EDI,ESI
0071C7F5  74 1A                     JZ 0x0071c811
0071C7F7  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0071C7FA  8D 55 9C                  LEA EDX,[EBP + -0x64]
0071C7FD  E8 8E 49 F9 FF            CALL 0x006b1190
0071C802  85 C0                     TEST EAX,EAX
0071C804  7D E0                     JGE 0x0071c7e6
0071C806  5F                        POP EDI
0071C807  5E                        POP ESI
0071C808  33 C0                     XOR EAX,EAX
0071C80A  5B                        POP EBX
0071C80B  8B E5                     MOV ESP,EBP
0071C80D  5D                        POP EBP
0071C80E  C2 04 00                  RET 0x4
LAB_0071c811:
0071C811  5F                        POP EDI
0071C812  5E                        POP ESI
0071C813  B8 01 00 00 00            MOV EAX,0x1
0071C818  5B                        POP EBX
0071C819  8B E5                     MOV ESP,EBP
0071C81B  5D                        POP EBP
0071C81C  C2 04 00                  RET 0x4
LAB_0071c81f:
0071C81F  8B C6                     MOV EAX,ESI
0071C821  5F                        POP EDI
0071C822  5E                        POP ESI
0071C823  5B                        POP EBX
0071C824  8B E5                     MOV ESP,EBP
0071C826  5D                        POP EBP
0071C827  C2 04 00                  RET 0x4
