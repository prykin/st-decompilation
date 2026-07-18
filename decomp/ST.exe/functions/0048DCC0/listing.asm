FUN_0048dcc0:
0048DCC0  55                        PUSH EBP
0048DCC1  8B EC                     MOV EBP,ESP
0048DCC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048DCC6  56                        PUSH ESI
0048DCC7  57                        PUSH EDI
0048DCC8  8D B1 54 05 00 00         LEA ESI,[ECX + 0x554]
0048DCCE  B9 0D 00 00 00            MOV ECX,0xd
0048DCD3  8B F8                     MOV EDI,EAX
0048DCD5  F3 A5                     MOVSD.REP ES:EDI,ESI
0048DCD7  5F                        POP EDI
0048DCD8  5E                        POP ESI
0048DCD9  5D                        POP EBP
0048DCDA  C2 04 00                  RET 0x4
