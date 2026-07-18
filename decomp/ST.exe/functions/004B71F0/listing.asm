FUN_004b71f0:
004B71F0  55                        PUSH EBP
004B71F1  8B EC                     MOV EBP,ESP
004B71F3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B71F6  56                        PUSH ESI
004B71F7  0F BE C2                  MOVSX EAX,DL
004B71FA  57                        PUSH EDI
004B71FB  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004B71FE  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
004B7201  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
004B7204  C1 E6 04                  SHL ESI,0x4
004B7207  03 F0                     ADD ESI,EAX
004B7209  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B720C  8B 3C 75 96 57 7F 00      MOV EDI,dword ptr [ESI*0x2 + 0x7f5796]
004B7213  8D 34 75 96 57 7F 00      LEA ESI,[ESI*0x2 + 0x7f5796]
004B721A  03 F8                     ADD EDI,EAX
004B721C  85 C0                     TEST EAX,EAX
004B721E  89 3E                     MOV dword ptr [ESI],EDI
004B7220  74 06                     JZ 0x004b7228
004B7222  52                        PUSH EDX
004B7223  E8 6B A6 F4 FF            CALL 0x00401893
LAB_004b7228:
004B7228  8B 06                     MOV EAX,dword ptr [ESI]
004B722A  5F                        POP EDI
004B722B  5E                        POP ESI
004B722C  5D                        POP EBP
004B722D  C2 08 00                  RET 0x8
