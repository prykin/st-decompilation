FUN_00673690:
00673690  55                        PUSH EBP
00673691  8B EC                     MOV EBP,ESP
00673693  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00673696  A3 20 2D 7D 00            MOV [0x007d2d20],EAX
0067369B  5D                        POP EBP
0067369C  C2 04 00                  RET 0x4
