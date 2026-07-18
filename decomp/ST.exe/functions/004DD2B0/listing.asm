FUN_004dd2b0:
004DD2B0  55                        PUSH EBP
004DD2B1  8B EC                     MOV EBP,ESP
004DD2B3  51                        PUSH ECX
004DD2B4  56                        PUSH ESI
004DD2B5  8B F1                     MOV ESI,ECX
004DD2B7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DD2BA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DD2BD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DD2C0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DD2C3  C1 E1 04                  SHL ECX,0x4
004DD2C6  03 C8                     ADD ECX,EAX
004DD2C8  8B 04 4D FE 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57fe]
004DD2CF  85 C0                     TEST EAX,EAX
004DD2D1  75 25                     JNZ 0x004dd2f8
004DD2D3  6A 0A                     PUSH 0xa
004DD2D5  6A 04                     PUSH 0x4
004DD2D7  6A 0A                     PUSH 0xa
004DD2D9  6A 00                     PUSH 0x0
004DD2DB  E8 B0 0F 1D 00            CALL 0x006ae290
004DD2E0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DD2E3  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004DD2E6  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004DD2E9  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004DD2EC  C1 E2 04                  SHL EDX,0x4
004DD2EF  03 D1                     ADD EDX,ECX
004DD2F1  89 04 55 FE 57 7F 00      MOV dword ptr [EDX*0x2 + 0x7f57fe],EAX
LAB_004dd2f8:
004DD2F8  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DD2FB  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DD2FE  8D 45 FC                  LEA EAX,[EBP + -0x4]
004DD301  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004DD304  50                        PUSH EAX
004DD305  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004DD308  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004DD30B  C1 E0 04                  SHL EAX,0x4
004DD30E  03 C6                     ADD EAX,ESI
004DD310  8B 0C 45 FE 57 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f57fe]
004DD317  51                        PUSH ECX
004DD318  E8 A3 0E 1D 00            CALL 0x006ae1c0
004DD31D  33 C0                     XOR EAX,EAX
004DD31F  5E                        POP ESI
004DD320  8B E5                     MOV ESP,EBP
004DD322  5D                        POP EBP
004DD323  C3                        RET
