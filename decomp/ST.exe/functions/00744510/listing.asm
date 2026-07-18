FUN_00744510:
00744510  55                        PUSH EBP
00744511  8B EC                     MOV EBP,ESP
00744513  6A 01                     PUSH 0x1
00744515  68 07 01 00 00            PUSH 0x107
0074451A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074451D  50                        PUSH EAX
0074451E  E8 0D 01 00 00            CALL 0x00744630
00744523  83 C4 0C                  ADD ESP,0xc
00744526  5D                        POP EBP
00744527  C3                        RET
