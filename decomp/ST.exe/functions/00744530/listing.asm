FUN_00744530:
00744530  55                        PUSH EBP
00744531  8B EC                     MOV EBP,ESP
00744533  6A 01                     PUSH 0x1
00744535  68 03 01 00 00            PUSH 0x103
0074453A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074453D  50                        PUSH EAX
0074453E  E8 ED 00 00 00            CALL 0x00744630
00744543  83 C4 0C                  ADD ESP,0xc
00744546  5D                        POP EBP
00744547  C3                        RET
