FUN_007445b0:
007445B0  55                        PUSH EBP
007445B1  8B EC                     MOV EBP,ESP
007445B3  6A 04                     PUSH 0x4
007445B5  6A 00                     PUSH 0x0
007445B7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007445BA  50                        PUSH EAX
007445BB  E8 70 00 00 00            CALL 0x00744630
007445C0  83 C4 0C                  ADD ESP,0xc
007445C3  5D                        POP EBP
007445C4  C3                        RET
