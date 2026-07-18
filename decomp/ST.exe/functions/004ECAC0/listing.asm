FUN_004ecac0:
004ECAC0  55                        PUSH EBP
004ECAC1  8B EC                     MOV EBP,ESP
004ECAC3  51                        PUSH ECX
004ECAC4  56                        PUSH ESI
004ECAC5  8B F1                     MOV ESI,ECX
004ECAC7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004ECACA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004ECACD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004ECAD0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004ECAD3  C1 E1 04                  SHL ECX,0x4
004ECAD6  03 C8                     ADD ECX,EAX
004ECAD8  8B 04 4D 12 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f5812]
004ECADF  85 C0                     TEST EAX,EAX
004ECAE1  75 25                     JNZ 0x004ecb08
004ECAE3  6A 0A                     PUSH 0xa
004ECAE5  6A 04                     PUSH 0x4
004ECAE7  6A 0A                     PUSH 0xa
004ECAE9  6A 00                     PUSH 0x0
004ECAEB  E8 A0 17 1C 00            CALL 0x006ae290
004ECAF0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004ECAF3  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004ECAF6  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004ECAF9  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004ECAFC  C1 E2 04                  SHL EDX,0x4
004ECAFF  03 D1                     ADD EDX,ECX
004ECB01  89 04 55 12 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f5812],EAX
LAB_004ecb08:
004ECB08  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004ECB0B  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004ECB0E  8D 45 FC                  LEA EAX,[EBP + -0x4]
004ECB11  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004ECB14  50                        PUSH EAX
004ECB15  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004ECB18  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004ECB1B  C1 E0 04                  SHL EAX,0x4
004ECB1E  03 C6                     ADD EAX,ESI
004ECB20  8B 0C 45 12 58 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f5812]
004ECB27  51                        PUSH ECX
004ECB28  E8 93 16 1C 00            CALL 0x006ae1c0
004ECB2D  33 C0                     XOR EAX,EAX
004ECB2F  5E                        POP ESI
004ECB30  8B E5                     MOV ESP,EBP
004ECB32  5D                        POP EBP
004ECB33  C3                        RET
