FUN_00746fab:
00746FAB  57                        PUSH EDI
00746FAC  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
00746FB0  85 FF                     TEST EDI,EDI
00746FB2  75 07                     JNZ 0x00746fbb
00746FB4  B8 03 40 00 80            MOV EAX,0x80004003
00746FB9  EB 0F                     JMP 0x00746fca
LAB_00746fbb:
00746FBB  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
00746FBF  56                        PUSH ESI
00746FC0  8D 70 1C                  LEA ESI,[EAX + 0x1c]
00746FC3  33 C0                     XOR EAX,EAX
00746FC5  A5                        MOVSD ES:EDI,ESI
00746FC6  A5                        MOVSD ES:EDI,ESI
00746FC7  A5                        MOVSD ES:EDI,ESI
00746FC8  A5                        MOVSD ES:EDI,ESI
00746FC9  5E                        POP ESI
LAB_00746fca:
00746FCA  5F                        POP EDI
00746FCB  C2 08 00                  RET 0x8
