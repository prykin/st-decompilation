FUN_00627650:
00627650  55                        PUSH EBP
00627651  8B EC                     MOV EBP,ESP
00627653  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00627656  89 81 42 03 00 00         MOV dword ptr [ECX + 0x342],EAX
0062765C  5D                        POP EBP
0062765D  C2 04 00                  RET 0x4
