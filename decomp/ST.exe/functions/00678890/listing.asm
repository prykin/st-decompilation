FUN_00678890:
00678890  55                        PUSH EBP
00678891  8B EC                     MOV EBP,ESP
00678893  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00678896  A3 84 19 81 00            MOV [0x00811984],EAX
0067889B  83 C8 FF                  OR EAX,0xffffffff
0067889E  5D                        POP EBP
0067889F  C3                        RET
