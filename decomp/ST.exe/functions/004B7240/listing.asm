FUN_004b7240:
004B7240  55                        PUSH EBP
004B7241  8B EC                     MOV EBP,ESP
004B7243  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B7246  56                        PUSH ESI
004B7247  0F BE C2                  MOVSX EAX,DL
004B724A  57                        PUSH EDI
004B724B  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004B724E  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
004B7251  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
004B7254  C1 E6 04                  SHL ESI,0x4
004B7257  03 F0                     ADD ESI,EAX
004B7259  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B725C  8B 3C 75 96 57 7F 00      MOV EDI,dword ptr [ESI*0x2 + 0x7f5796]
004B7263  8D 34 75 96 57 7F 00      LEA ESI,[ESI*0x2 + 0x7f5796]
004B726A  2B F8                     SUB EDI,EAX
004B726C  89 3E                     MOV dword ptr [ESI],EDI
004B726E  79 06                     JNS 0x004b7276
004B7270  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_004b7276:
004B7276  85 C0                     TEST EAX,EAX
004B7278  74 06                     JZ 0x004b7280
004B727A  52                        PUSH EDX
004B727B  E8 13 A6 F4 FF            CALL 0x00401893
LAB_004b7280:
004B7280  8B 06                     MOV EAX,dword ptr [ESI]
004B7282  5F                        POP EDI
004B7283  5E                        POP ESI
004B7284  5D                        POP EBP
004B7285  C2 08 00                  RET 0x8
