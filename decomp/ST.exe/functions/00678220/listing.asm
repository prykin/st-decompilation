FUN_00678220:
00678220  55                        PUSH EBP
00678221  8B EC                     MOV EBP,ESP
00678223  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00678226  A3 84 19 81 00            MOV [0x00811984],EAX
0067822B  83 C8 FF                  OR EAX,0xffffffff
0067822E  5D                        POP EBP
0067822F  C3                        RET
