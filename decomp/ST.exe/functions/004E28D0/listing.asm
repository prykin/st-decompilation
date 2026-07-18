FUN_004e28d0:
004E28D0  55                        PUSH EBP
004E28D1  8B EC                     MOV EBP,ESP
004E28D3  51                        PUSH ECX
004E28D4  56                        PUSH ESI
004E28D5  8B F1                     MOV ESI,ECX
004E28D7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E28DA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E28DD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E28E0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E28E3  C1 E1 04                  SHL ECX,0x4
004E28E6  03 C8                     ADD ECX,EAX
004E28E8  8B 04 4D FA 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57fa]
004E28EF  85 C0                     TEST EAX,EAX
004E28F1  75 25                     JNZ 0x004e2918
004E28F3  6A 0A                     PUSH 0xa
004E28F5  6A 04                     PUSH 0x4
004E28F7  6A 0A                     PUSH 0xa
004E28F9  6A 00                     PUSH 0x0
004E28FB  E8 90 B9 1C 00            CALL 0x006ae290
004E2900  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E2903  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004E2906  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004E2909  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004E290C  C1 E2 04                  SHL EDX,0x4
004E290F  03 D1                     ADD EDX,ECX
004E2911  89 04 55 FA 57 7F 00      MOV dword ptr [EDX*0x2 + 0x7f57fa],EAX
LAB_004e2918:
004E2918  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004E291B  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004E291E  8D 45 FC                  LEA EAX,[EBP + -0x4]
004E2921  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004E2924  50                        PUSH EAX
004E2925  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004E2928  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004E292B  C1 E0 04                  SHL EAX,0x4
004E292E  03 C6                     ADD EAX,ESI
004E2930  8B 0C 45 FA 57 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f57fa]
004E2937  51                        PUSH ECX
004E2938  E8 83 B8 1C 00            CALL 0x006ae1c0
004E293D  33 C0                     XOR EAX,EAX
004E293F  5E                        POP ESI
004E2940  8B E5                     MOV ESP,EBP
004E2942  5D                        POP EBP
004E2943  C3                        RET
