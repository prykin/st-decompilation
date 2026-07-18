FUN_00419c30:
00419C30  55                        PUSH EBP
00419C31  8B EC                     MOV EBP,ESP
00419C33  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
00419C37  66 89 41 30               MOV word ptr [ECX + 0x30],AX
00419C3B  5D                        POP EBP
00419C3C  C2 04 00                  RET 0x4
