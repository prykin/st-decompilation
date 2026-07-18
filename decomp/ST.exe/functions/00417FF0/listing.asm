FUN_00417ff0:
00417FF0  55                        PUSH EBP
00417FF1  8B EC                     MOV EBP,ESP
00417FF3  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00417FF6  88 41 61                  MOV byte ptr [ECX + 0x61],AL
00417FF9  5D                        POP EBP
00417FFA  C2 04 00                  RET 0x4
