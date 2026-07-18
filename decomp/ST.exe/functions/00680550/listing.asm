FUN_00680550:
00680550  55                        PUSH EBP
00680551  8B EC                     MOV EBP,ESP
00680553  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00680556  A2 08 8A 84 00            MOV [0x00848a08],AL
0068055B  5D                        POP EBP
0068055C  C3                        RET
