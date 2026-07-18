FUN_004d7430:
004D7430  55                        PUSH EBP
004D7431  8B EC                     MOV EBP,ESP
004D7433  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D7437  56                        PUSH ESI
004D7438  57                        PUSH EDI
004D7439  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D743C  BF 06 00 00 00            MOV EDI,0x6
004D7441  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D7444  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D7447  C1 E1 04                  SHL ECX,0x4
004D744A  03 C8                     ADD ECX,EAX
004D744C  8D 34 4D 0E 56 7F 00      LEA ESI,[ECX*0x2 + 0x7f560e]
LAB_004d7453:
004D7453  56                        PUSH ESI
004D7454  E8 B7 6C 1D 00            CALL 0x006ae110
004D7459  83 C6 44                  ADD ESI,0x44
004D745C  4F                        DEC EDI
004D745D  75 F4                     JNZ 0x004d7453
004D745F  5F                        POP EDI
004D7460  33 C0                     XOR EAX,EAX
004D7462  5E                        POP ESI
004D7463  5D                        POP EBP
004D7464  C2 04 00                  RET 0x4
