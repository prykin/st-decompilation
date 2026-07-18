FUN_006d6190:
006D6190  55                        PUSH EBP
006D6191  8B EC                     MOV EBP,ESP
006D6193  56                        PUSH ESI
006D6194  8B F1                     MOV ESI,ECX
006D6196  E8 38 29 07 00            CALL 0x00748ad3
006D619B  F6 45 08 01               TEST byte ptr [EBP + 0x8],0x1
006D619F  74 09                     JZ 0x006d61aa
006D61A1  56                        PUSH ESI
006D61A2  E8 09 81 05 00            CALL 0x0072e2b0
006D61A7  83 C4 04                  ADD ESP,0x4
LAB_006d61aa:
006D61AA  8B C6                     MOV EAX,ESI
006D61AC  5E                        POP ESI
006D61AD  5D                        POP EBP
006D61AE  C2 04 00                  RET 0x4
