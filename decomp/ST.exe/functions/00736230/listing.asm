FUN_00736230:
00736230  55                        PUSH EBP
00736231  8B EC                     MOV EBP,ESP
00736233  51                        PUSH ECX
00736234  53                        PUSH EBX
00736235  56                        PUSH ESI
00736236  57                        PUSH EDI
00736237  9B DD 7D FC               FSTSW word ptr [EBP + -0x4]
0073623B  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0073623F  5F                        POP EDI
00736240  5E                        POP ESI
00736241  5B                        POP EBX
00736242  8B E5                     MOV ESP,EBP
00736244  5D                        POP EBP
00736245  C3                        RET
