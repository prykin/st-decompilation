FUN_00417a00:
00417A00  55                        PUSH EBP
00417A01  8B EC                     MOV EBP,ESP
00417A03  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00417A06  88 81 8E 00 00 00         MOV byte ptr [ECX + 0x8e],AL
00417A0C  5D                        POP EBP
00417A0D  C2 04 00                  RET 0x4
