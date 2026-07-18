FUN_007444b0:
007444B0  55                        PUSH EBP
007444B1  8B EC                     MOV EBP,ESP
007444B3  6A 01                     PUSH 0x1
007444B5  6A 00                     PUSH 0x0
007444B7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007444BA  50                        PUSH EAX
007444BB  E8 70 01 00 00            CALL 0x00744630
007444C0  83 C4 0C                  ADD ESP,0xc
007444C3  5D                        POP EBP
007444C4  C3                        RET
