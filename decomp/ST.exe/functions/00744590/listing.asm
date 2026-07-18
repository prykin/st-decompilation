FUN_00744590:
00744590  55                        PUSH EBP
00744591  8B EC                     MOV EBP,ESP
00744593  6A 02                     PUSH 0x2
00744595  6A 10                     PUSH 0x10
00744597  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074459A  50                        PUSH EAX
0074459B  E8 90 00 00 00            CALL 0x00744630
007445A0  83 C4 0C                  ADD ESP,0xc
007445A3  5D                        POP EBP
007445A4  C3                        RET
