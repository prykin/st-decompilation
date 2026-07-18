FUN_00418010:
00418010  55                        PUSH EBP
00418011  8B EC                     MOV EBP,ESP
00418013  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00418016  88 41 62                  MOV byte ptr [ECX + 0x62],AL
00418019  5D                        POP EBP
0041801A  C2 04 00                  RET 0x4
