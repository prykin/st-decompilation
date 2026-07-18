FUN_007444d0:
007444D0  55                        PUSH EBP
007444D1  8B EC                     MOV EBP,ESP
007444D3  6A 03                     PUSH 0x3
007444D5  6A 00                     PUSH 0x0
007444D7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007444DA  50                        PUSH EAX
007444DB  E8 50 01 00 00            CALL 0x00744630
007444E0  83 C4 0C                  ADD ESP,0xc
007444E3  5D                        POP EBP
007444E4  C3                        RET
