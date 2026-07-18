FUN_004b7080:
004B7080  55                        PUSH EBP
004B7081  8B EC                     MOV EBP,ESP
004B7083  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B7086  56                        PUSH ESI
004B7087  0F BE C2                  MOVSX EAX,DL
004B708A  57                        PUSH EDI
004B708B  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004B708E  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
004B7091  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
004B7094  C1 E6 04                  SHL ESI,0x4
004B7097  03 F0                     ADD ESI,EAX
004B7099  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B709C  8B 3C 75 92 57 7F 00      MOV EDI,dword ptr [ESI*0x2 + 0x7f5792]
004B70A3  8D 34 75 92 57 7F 00      LEA ESI,[ESI*0x2 + 0x7f5792]
004B70AA  03 F8                     ADD EDI,EAX
004B70AC  85 C0                     TEST EAX,EAX
004B70AE  89 3E                     MOV dword ptr [ESI],EDI
004B70B0  74 06                     JZ 0x004b70b8
004B70B2  52                        PUSH EDX
004B70B3  E8 DB A7 F4 FF            CALL 0x00401893
LAB_004b70b8:
004B70B8  8B 06                     MOV EAX,dword ptr [ESI]
004B70BA  5F                        POP EDI
004B70BB  5E                        POP ESI
004B70BC  5D                        POP EBP
004B70BD  C2 08 00                  RET 0x8
