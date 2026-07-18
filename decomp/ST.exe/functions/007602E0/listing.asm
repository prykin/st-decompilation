FUN_007602e0:
007602E0  55                        PUSH EBP
007602E1  8B EC                     MOV EBP,ESP
007602E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007602E6  50                        PUSH EAX
007602E7  E8 35 28 CA FF            CALL 0x00402b21
007602EC  83 C4 04                  ADD ESP,0x4
007602EF  5D                        POP EBP
007602F0  C2 08 00                  RET 0x8
