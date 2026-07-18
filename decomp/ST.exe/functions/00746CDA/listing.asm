FUN_00746cda:
00746CDA  57                        PUSH EDI
00746CDB  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
00746CDF  85 FF                     TEST EDI,EDI
00746CE1  75 07                     JNZ 0x00746cea
00746CE3  B8 03 40 00 80            MOV EAX,0x80004003
00746CE8  EB 0F                     JMP 0x00746cf9
LAB_00746cea:
00746CEA  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
00746CEE  56                        PUSH ESI
00746CEF  8D 70 14                  LEA ESI,[EAX + 0x14]
00746CF2  33 C0                     XOR EAX,EAX
00746CF4  A5                        MOVSD ES:EDI,ESI
00746CF5  A5                        MOVSD ES:EDI,ESI
00746CF6  A5                        MOVSD ES:EDI,ESI
00746CF7  A5                        MOVSD ES:EDI,ESI
00746CF8  5E                        POP ESI
LAB_00746cf9:
00746CF9  5F                        POP EDI
00746CFA  C2 08 00                  RET 0x8
