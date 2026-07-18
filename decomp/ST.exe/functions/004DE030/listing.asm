FUN_004de030:
004DE030  55                        PUSH EBP
004DE031  8B EC                     MOV EBP,ESP
004DE033  51                        PUSH ECX
004DE034  56                        PUSH ESI
004DE035  8B F1                     MOV ESI,ECX
004DE037  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DE03A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DE03D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DE040  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DE043  C1 E1 04                  SHL ECX,0x4
004DE046  03 C8                     ADD ECX,EAX
004DE048  8B 04 4D EE 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57ee]
004DE04F  85 C0                     TEST EAX,EAX
004DE051  75 25                     JNZ 0x004de078
004DE053  6A 0A                     PUSH 0xa
004DE055  6A 04                     PUSH 0x4
004DE057  6A 0A                     PUSH 0xa
004DE059  6A 00                     PUSH 0x0
004DE05B  E8 30 02 1D 00            CALL 0x006ae290
004DE060  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DE063  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004DE066  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004DE069  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004DE06C  C1 E2 04                  SHL EDX,0x4
004DE06F  03 D1                     ADD EDX,ECX
004DE071  89 04 55 EE 57 7F 00      MOV dword ptr [EDX*0x2 + 0x7f57ee],EAX
LAB_004de078:
004DE078  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DE07B  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DE07E  8D 45 FC                  LEA EAX,[EBP + -0x4]
004DE081  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004DE084  50                        PUSH EAX
004DE085  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004DE088  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004DE08B  C1 E0 04                  SHL EAX,0x4
004DE08E  03 C6                     ADD EAX,ESI
004DE090  8B 0C 45 EE 57 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f57ee]
004DE097  51                        PUSH ECX
004DE098  E8 23 01 1D 00            CALL 0x006ae1c0
004DE09D  33 C0                     XOR EAX,EAX
004DE09F  5E                        POP ESI
004DE0A0  8B E5                     MOV ESP,EBP
004DE0A2  5D                        POP EBP
004DE0A3  C3                        RET
