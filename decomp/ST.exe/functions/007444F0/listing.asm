FUN_007444f0:
007444F0  55                        PUSH EBP
007444F1  8B EC                     MOV EBP,ESP
007444F3  6A 02                     PUSH 0x2
007444F5  6A 00                     PUSH 0x0
007444F7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007444FA  50                        PUSH EAX
007444FB  E8 30 01 00 00            CALL 0x00744630
00744500  83 C4 0C                  ADD ESP,0xc
00744503  5D                        POP EBP
00744504  C3                        RET
