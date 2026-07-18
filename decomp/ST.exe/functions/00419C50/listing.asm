FUN_00419c50:
00419C50  55                        PUSH EBP
00419C51  8B EC                     MOV EBP,ESP
00419C53  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
00419C57  66 89 41 32               MOV word ptr [ECX + 0x32],AX
00419C5B  5D                        POP EBP
00419C5C  C2 04 00                  RET 0x4
