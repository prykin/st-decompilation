FUN_004da340:
004DA340  55                        PUSH EBP
004DA341  8B EC                     MOV EBP,ESP
004DA343  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DA346  56                        PUSH ESI
004DA347  83 CA FF                  OR EDX,0xffffffff
004DA34A  8D 70 01                  LEA ESI,[EAX + 0x1]
004DA34D  89 50 01                  MOV dword ptr [EAX + 0x1],EDX
004DA350  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
004DA353  C6 00 00                  MOV byte ptr [EAX],0x0
004DA356  8B 91 AC 05 00 00         MOV EDX,dword ptr [ECX + 0x5ac]
004DA35C  5E                        POP ESI
004DA35D  83 FA 3C                  CMP EDX,0x3c
004DA360  74 05                     JZ 0x004da367
004DA362  83 FA 53                  CMP EDX,0x53
004DA365  75 12                     JNZ 0x004da379
LAB_004da367:
004DA367  6A 01                     PUSH 0x1
004DA369  50                        PUSH EAX
004DA36A  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004DA36D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA373  50                        PUSH EAX
004DA374  E8 CF 9C F2 FF            CALL 0x00404048
LAB_004da379:
004DA379  5D                        POP EBP
004DA37A  C2 04 00                  RET 0x4
