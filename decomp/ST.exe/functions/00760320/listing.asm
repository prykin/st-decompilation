FUN_00760320:
00760320  55                        PUSH EBP
00760321  8B EC                     MOV EBP,ESP
00760323  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00760326  50                        PUSH EAX
00760327  E8 F5 27 CA FF            CALL 0x00402b21
0076032C  83 C4 04                  ADD ESP,0x4
0076032F  5D                        POP EBP
00760330  C2 08 00                  RET 0x8
