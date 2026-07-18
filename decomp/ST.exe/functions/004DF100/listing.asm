FUN_004df100:
004DF100  55                        PUSH EBP
004DF101  8B EC                     MOV EBP,ESP
004DF103  51                        PUSH ECX
004DF104  56                        PUSH ESI
004DF105  8B F1                     MOV ESI,ECX
004DF107  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF10A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DF10D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DF110  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DF113  C1 E1 04                  SHL ECX,0x4
004DF116  03 C8                     ADD ECX,EAX
004DF118  8B 04 4D 0E 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f580e]
004DF11F  85 C0                     TEST EAX,EAX
004DF121  75 25                     JNZ 0x004df148
004DF123  6A 0A                     PUSH 0xa
004DF125  6A 04                     PUSH 0x4
004DF127  6A 0A                     PUSH 0xa
004DF129  6A 00                     PUSH 0x0
004DF12B  E8 60 F1 1C 00            CALL 0x006ae290
004DF130  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DF133  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004DF136  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004DF139  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004DF13C  C1 E2 04                  SHL EDX,0x4
004DF13F  03 D1                     ADD EDX,ECX
004DF141  89 04 55 0E 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f580e],EAX
LAB_004df148:
004DF148  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DF14B  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DF14E  8D 45 FC                  LEA EAX,[EBP + -0x4]
004DF151  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004DF154  50                        PUSH EAX
004DF155  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004DF158  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004DF15B  C1 E0 04                  SHL EAX,0x4
004DF15E  03 C6                     ADD EAX,ESI
004DF160  8B 0C 45 0E 58 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f580e]
004DF167  51                        PUSH ECX
004DF168  E8 53 F0 1C 00            CALL 0x006ae1c0
004DF16D  33 C0                     XOR EAX,EAX
004DF16F  5E                        POP ESI
004DF170  8B E5                     MOV ESP,EBP
004DF172  5D                        POP EBP
004DF173  C3                        RET
