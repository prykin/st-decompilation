FUN_00735310:
00735310  55                        PUSH EBP
00735311  8B EC                     MOV EBP,ESP
00735313  83 EC 08                  SUB ESP,0x8
00735316  53                        PUSH EBX
00735317  56                        PUSH ESI
00735318  57                        PUSH EDI
00735319  DD 45 08                  FLD double ptr [EBP + 0x8]
0073531C  D9 FC                     FRNDINT
0073531E  DD 5D F8                  FSTP double ptr [EBP + -0x8]
00735321  DD 45 F8                  FLD double ptr [EBP + -0x8]
00735324  5F                        POP EDI
00735325  5E                        POP ESI
00735326  5B                        POP EBX
00735327  8B E5                     MOV ESP,EBP
00735329  5D                        POP EBP
0073532A  C3                        RET
