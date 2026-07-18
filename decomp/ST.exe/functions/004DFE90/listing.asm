FUN_004dfe90:
004DFE90  55                        PUSH EBP
004DFE91  8B EC                     MOV EBP,ESP
004DFE93  51                        PUSH ECX
004DFE94  56                        PUSH ESI
004DFE95  8B F1                     MOV ESI,ECX
004DFE97  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DFE9A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DFE9D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DFEA0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DFEA3  C1 E1 04                  SHL ECX,0x4
004DFEA6  03 C8                     ADD ECX,EAX
004DFEA8  8B 04 4D 0A 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f580a]
004DFEAF  85 C0                     TEST EAX,EAX
004DFEB1  75 25                     JNZ 0x004dfed8
004DFEB3  6A 0A                     PUSH 0xa
004DFEB5  6A 04                     PUSH 0x4
004DFEB7  6A 0A                     PUSH 0xa
004DFEB9  6A 00                     PUSH 0x0
004DFEBB  E8 D0 E3 1C 00            CALL 0x006ae290
004DFEC0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DFEC3  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004DFEC6  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004DFEC9  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004DFECC  C1 E2 04                  SHL EDX,0x4
004DFECF  03 D1                     ADD EDX,ECX
004DFED1  89 04 55 0A 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f580a],EAX
LAB_004dfed8:
004DFED8  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DFEDB  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DFEDE  8D 45 FC                  LEA EAX,[EBP + -0x4]
004DFEE1  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004DFEE4  50                        PUSH EAX
004DFEE5  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004DFEE8  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004DFEEB  C1 E0 04                  SHL EAX,0x4
004DFEEE  03 C6                     ADD EAX,ESI
004DFEF0  8B 0C 45 0A 58 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f580a]
004DFEF7  51                        PUSH ECX
004DFEF8  E8 C3 E2 1C 00            CALL 0x006ae1c0
004DFEFD  33 C0                     XOR EAX,EAX
004DFEFF  5E                        POP ESI
004DFF00  8B E5                     MOV ESP,EBP
004DFF02  5D                        POP EBP
004DFF03  C3                        RET
