FUN_00760340:
00760340  55                        PUSH EBP
00760341  8B EC                     MOV EBP,ESP
00760343  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00760346  50                        PUSH EAX
00760347  E8 3E 5A CA FF            CALL 0x00405d8a
0076034C  83 C4 04                  ADD ESP,0x4
0076034F  5D                        POP EBP
00760350  C2 0C 00                  RET 0xc
