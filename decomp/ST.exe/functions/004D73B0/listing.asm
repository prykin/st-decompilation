FUN_004d73b0:
004D73B0  55                        PUSH EBP
004D73B1  8B EC                     MOV EBP,ESP
004D73B3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D73B7  56                        PUSH ESI
004D73B8  57                        PUSH EDI
004D73B9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D73BC  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D73BF  B9 66 00 00 00            MOV ECX,0x66
004D73C4  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004D73C7  C1 E2 04                  SHL EDX,0x4
004D73CA  03 D0                     ADD EDX,EAX
004D73CC  D1 E2                     SHL EDX,0x1
004D73CE  33 C0                     XOR EAX,EAX
004D73D0  8D BA FA 55 7F 00         LEA EDI,[EDX + 0x7f55fa]
004D73D6  8D B2 0E 56 7F 00         LEA ESI,[EDX + 0x7f560e]
004D73DC  F3 AB                     STOSD.REP ES:EDI
004D73DE  BF 06 00 00 00            MOV EDI,0x6
LAB_004d73e3:
004D73E3  6A 0A                     PUSH 0xa
004D73E5  6A 14                     PUSH 0x14
004D73E7  6A 0A                     PUSH 0xa
004D73E9  56                        PUSH ESI
004D73EA  C7 46 EC 64 00 00 00      MOV dword ptr [ESI + -0x14],0x64
004D73F1  E8 9A 6E 1D 00            CALL 0x006ae290
004D73F6  83 C6 44                  ADD ESI,0x44
004D73F9  4F                        DEC EDI
004D73FA  75 E7                     JNZ 0x004d73e3
004D73FC  5F                        POP EDI
004D73FD  33 C0                     XOR EAX,EAX
004D73FF  5E                        POP ESI
004D7400  5D                        POP EBP
004D7401  C2 04 00                  RET 0x4
