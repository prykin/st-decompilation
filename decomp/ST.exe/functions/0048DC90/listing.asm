FUN_0048dc90:
0048DC90  55                        PUSH EBP
0048DC91  8B EC                     MOV EBP,ESP
0048DC93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048DC96  56                        PUSH ESI
0048DC97  57                        PUSH EDI
0048DC98  8D B1 9B 04 00 00         LEA ESI,[ECX + 0x49b]
0048DC9E  B9 10 00 00 00            MOV ECX,0x10
0048DCA3  8B F8                     MOV EDI,EAX
0048DCA5  F3 A5                     MOVSD.REP ES:EDI,ESI
0048DCA7  66 A5                     MOVSW ES:EDI,ESI
0048DCA9  5F                        POP EDI
0048DCAA  5E                        POP ESI
0048DCAB  5D                        POP EBP
0048DCAC  C2 04 00                  RET 0x4
