FUN_004b70d0:
004B70D0  55                        PUSH EBP
004B70D1  8B EC                     MOV EBP,ESP
004B70D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B70D6  56                        PUSH ESI
004B70D7  0F BE C2                  MOVSX EAX,DL
004B70DA  57                        PUSH EDI
004B70DB  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004B70DE  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
004B70E1  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
004B70E4  C1 E6 04                  SHL ESI,0x4
004B70E7  03 F0                     ADD ESI,EAX
004B70E9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B70EC  8B 3C 75 92 57 7F 00      MOV EDI,dword ptr [ESI*0x2 + 0x7f5792]
004B70F3  8D 34 75 92 57 7F 00      LEA ESI,[ESI*0x2 + 0x7f5792]
004B70FA  2B F8                     SUB EDI,EAX
004B70FC  89 3E                     MOV dword ptr [ESI],EDI
004B70FE  79 06                     JNS 0x004b7106
004B7100  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_004b7106:
004B7106  85 C0                     TEST EAX,EAX
004B7108  74 06                     JZ 0x004b7110
004B710A  52                        PUSH EDX
004B710B  E8 83 A7 F4 FF            CALL 0x00401893
LAB_004b7110:
004B7110  8B 06                     MOV EAX,dword ptr [ESI]
004B7112  5F                        POP EDI
004B7113  5E                        POP ESI
004B7114  5D                        POP EBP
004B7115  C2 08 00                  RET 0x8
