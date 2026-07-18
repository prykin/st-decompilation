FUN_00678580:
00678580  55                        PUSH EBP
00678581  8B EC                     MOV EBP,ESP
00678583  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00678586  A3 84 19 81 00            MOV [0x00811984],EAX
0067858B  83 C8 FF                  OR EAX,0xffffffff
0067858E  5D                        POP EBP
0067858F  C3                        RET
