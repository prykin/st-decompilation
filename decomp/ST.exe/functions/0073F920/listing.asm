FUN_0073f920:
0073F920  55                        PUSH EBP
0073F921  8B EC                     MOV EBP,ESP
0073F923  51                        PUSH ECX
0073F924  53                        PUSH EBX
0073F925  56                        PUSH ESI
0073F926  57                        PUSH EDI
0073F927  9B DD 7D FC               FSTSW word ptr [EBP + -0x4]
0073F92B  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0073F92F  50                        PUSH EAX
0073F930  E8 DB 03 00 00            CALL 0x0073fd10
0073F935  83 C4 04                  ADD ESP,0x4
0073F938  5F                        POP EDI
0073F939  5E                        POP ESI
0073F93A  5B                        POP EBX
0073F93B  8B E5                     MOV ESP,EBP
0073F93D  5D                        POP EBP
0073F93E  C3                        RET
