FUN_004df950:
004DF950  55                        PUSH EBP
004DF951  8B EC                     MOV EBP,ESP
004DF953  51                        PUSH ECX
004DF954  56                        PUSH ESI
004DF955  8B F1                     MOV ESI,ECX
004DF957  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF95A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DF95D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DF960  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DF963  C1 E1 04                  SHL ECX,0x4
004DF966  03 C8                     ADD ECX,EAX
004DF968  8B 04 4D F2 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57f2]
004DF96F  85 C0                     TEST EAX,EAX
004DF971  75 25                     JNZ 0x004df998
004DF973  6A 0A                     PUSH 0xa
004DF975  6A 04                     PUSH 0x4
004DF977  6A 0A                     PUSH 0xa
004DF979  6A 00                     PUSH 0x0
004DF97B  E8 10 E9 1C 00            CALL 0x006ae290
004DF980  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DF983  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004DF986  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004DF989  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004DF98C  C1 E2 04                  SHL EDX,0x4
004DF98F  03 D1                     ADD EDX,ECX
004DF991  89 04 55 F2 57 7F 00      MOV dword ptr [EDX*0x2 + 0x7f57f2],EAX
LAB_004df998:
004DF998  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DF99B  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DF99E  8D 45 FC                  LEA EAX,[EBP + -0x4]
004DF9A1  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004DF9A4  50                        PUSH EAX
004DF9A5  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004DF9A8  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004DF9AB  C1 E0 04                  SHL EAX,0x4
004DF9AE  03 C6                     ADD EAX,ESI
004DF9B0  8B 0C 45 F2 57 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f57f2]
004DF9B7  51                        PUSH ECX
004DF9B8  E8 03 E8 1C 00            CALL 0x006ae1c0
004DF9BD  33 C0                     XOR EAX,EAX
004DF9BF  5E                        POP ESI
004DF9C0  8B E5                     MOV ESP,EBP
004DF9C2  5D                        POP EBP
004DF9C3  C3                        RET
