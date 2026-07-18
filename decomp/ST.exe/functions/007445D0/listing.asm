FUN_007445d0:
007445D0  55                        PUSH EBP
007445D1  8B EC                     MOV EBP,ESP
007445D3  6A 08                     PUSH 0x8
007445D5  6A 00                     PUSH 0x0
007445D7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007445DA  50                        PUSH EAX
007445DB  E8 50 00 00 00            CALL 0x00744630
007445E0  83 C4 0C                  ADD ESP,0xc
007445E3  5D                        POP EBP
007445E4  C3                        RET
