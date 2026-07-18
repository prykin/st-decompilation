FUN_00760300:
00760300  55                        PUSH EBP
00760301  8B EC                     MOV EBP,ESP
00760303  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00760306  50                        PUSH EAX
00760307  E8 7E 5A CA FF            CALL 0x00405d8a
0076030C  83 C4 04                  ADD ESP,0x4
0076030F  5D                        POP EBP
00760310  C2 0C 00                  RET 0xc
