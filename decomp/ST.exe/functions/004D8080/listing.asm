FUN_004d8080:
004D8080  55                        PUSH EBP
004D8081  8B EC                     MOV EBP,ESP
004D8083  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D8086  56                        PUSH ESI
004D8087  0F BE C2                  MOVSX EAX,DL
004D808A  57                        PUSH EDI
004D808B  52                        PUSH EDX
004D808C  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004D808F  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
004D8092  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
004D8095  C1 E6 04                  SHL ESI,0x4
004D8098  03 F0                     ADD ESI,EAX
004D809A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D809D  8B F8                     MOV EDI,EAX
004D809F  C1 E7 04                  SHL EDI,0x4
004D80A2  03 F8                     ADD EDI,EAX
004D80A4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004D80A7  C1 E7 02                  SHL EDI,0x2
004D80AA  89 84 77 FA 55 7F 00      MOV dword ptr [EDI + ESI*0x2 + 0x7f55fa],EAX
004D80B1  E8 40 A8 F2 FF            CALL 0x004028f6
004D80B6  5F                        POP EDI
004D80B7  33 C0                     XOR EAX,EAX
004D80B9  5E                        POP ESI
004D80BA  5D                        POP EBP
004D80BB  C2 0C 00                  RET 0xc
