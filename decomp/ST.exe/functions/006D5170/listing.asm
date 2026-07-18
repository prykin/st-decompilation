FUN_006d5170:
006D5170  55                        PUSH EBP
006D5171  8B EC                     MOV EBP,ESP
006D5173  56                        PUSH ESI
006D5174  8B F1                     MOV ESI,ECX
006D5176  E8 25 00 00 00            CALL 0x006d51a0
006D517B  F6 45 08 01               TEST byte ptr [EBP + 0x8],0x1
006D517F  74 09                     JZ 0x006d518a
006D5181  56                        PUSH ESI
006D5182  E8 29 91 05 00            CALL 0x0072e2b0
006D5187  83 C4 04                  ADD ESP,0x4
LAB_006d518a:
006D518A  8B C6                     MOV EAX,ESI
006D518C  5E                        POP ESI
006D518D  5D                        POP EBP
006D518E  C2 04 00                  RET 0x4
