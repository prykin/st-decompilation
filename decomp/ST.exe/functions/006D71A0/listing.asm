FUN_006d71a0:
006D71A0  55                        PUSH EBP
006D71A1  8B EC                     MOV EBP,ESP
006D71A3  56                        PUSH ESI
006D71A4  8B F1                     MOV ESI,ECX
006D71A6  E8 7D 4C 07 00            CALL 0x0074be28
006D71AB  F6 45 08 01               TEST byte ptr [EBP + 0x8],0x1
006D71AF  74 09                     JZ 0x006d71ba
006D71B1  56                        PUSH ESI
006D71B2  E8 F9 70 05 00            CALL 0x0072e2b0
006D71B7  83 C4 04                  ADD ESP,0x4
LAB_006d71ba:
006D71BA  8B C6                     MOV EAX,ESI
006D71BC  5E                        POP ESI
006D71BD  5D                        POP EBP
006D71BE  C2 04 00                  RET 0x4
