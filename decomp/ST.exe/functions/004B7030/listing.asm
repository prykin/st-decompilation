FUN_004b7030:
004B7030  55                        PUSH EBP
004B7031  8B EC                     MOV EBP,ESP
004B7033  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004B7037  56                        PUSH ESI
004B7038  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B703B  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004B703E  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004B7041  C1 E1 04                  SHL ECX,0x4
004B7044  03 C8                     ADD ECX,EAX
004B7046  8B 04 4D B2 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57b2]
004B704D  85 C0                     TEST EAX,EAX
004B704F  8D 34 4D B2 57 7F 00      LEA ESI,[ECX*0x2 + 0x7f57b2]
004B7056  74 0C                     JZ 0x004b7064
004B7058  50                        PUSH EAX
004B7059  E8 B2 70 1F 00            CALL 0x006ae110
004B705E  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_004b7064:
004B7064  33 C0                     XOR EAX,EAX
004B7066  5E                        POP ESI
004B7067  5D                        POP EBP
004B7068  C2 04 00                  RET 0x4
