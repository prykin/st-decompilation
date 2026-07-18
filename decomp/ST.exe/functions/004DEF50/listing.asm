FUN_004def50:
004DEF50  55                        PUSH EBP
004DEF51  8B EC                     MOV EBP,ESP
004DEF53  51                        PUSH ECX
004DEF54  56                        PUSH ESI
004DEF55  8B F1                     MOV ESI,ECX
004DEF57  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DEF5A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DEF5D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DEF60  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DEF63  C1 E1 04                  SHL ECX,0x4
004DEF66  03 C8                     ADD ECX,EAX
004DEF68  8B 04 4D 02 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f5802]
004DEF6F  85 C0                     TEST EAX,EAX
004DEF71  75 25                     JNZ 0x004def98
004DEF73  6A 0A                     PUSH 0xa
004DEF75  6A 04                     PUSH 0x4
004DEF77  6A 0A                     PUSH 0xa
004DEF79  6A 00                     PUSH 0x0
004DEF7B  E8 10 F3 1C 00            CALL 0x006ae290
004DEF80  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DEF83  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004DEF86  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004DEF89  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004DEF8C  C1 E2 04                  SHL EDX,0x4
004DEF8F  03 D1                     ADD EDX,ECX
004DEF91  89 04 55 02 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f5802],EAX
LAB_004def98:
004DEF98  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DEF9B  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DEF9E  8D 45 FC                  LEA EAX,[EBP + -0x4]
004DEFA1  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004DEFA4  50                        PUSH EAX
004DEFA5  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004DEFA8  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004DEFAB  C1 E0 04                  SHL EAX,0x4
004DEFAE  03 C6                     ADD EAX,ESI
004DEFB0  8B 0C 45 02 58 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f5802]
004DEFB7  51                        PUSH ECX
004DEFB8  E8 03 F2 1C 00            CALL 0x006ae1c0
004DEFBD  33 C0                     XOR EAX,EAX
004DEFBF  5E                        POP ESI
004DEFC0  8B E5                     MOV ESP,EBP
004DEFC2  5D                        POP EBP
004DEFC3  C3                        RET
