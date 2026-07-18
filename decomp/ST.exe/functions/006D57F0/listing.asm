FUN_006d57f0:
006D57F0  55                        PUSH EBP
006D57F1  8B EC                     MOV EBP,ESP
006D57F3  56                        PUSH ESI
006D57F4  8B F1                     MOV ESI,ECX
006D57F6  E8 CA 2D 07 00            CALL 0x007485c5
006D57FB  F6 45 08 01               TEST byte ptr [EBP + 0x8],0x1
006D57FF  74 09                     JZ 0x006d580a
006D5801  56                        PUSH ESI
006D5802  E8 A9 8A 05 00            CALL 0x0072e2b0
006D5807  83 C4 04                  ADD ESP,0x4
LAB_006d580a:
006D580A  8B C6                     MOV EAX,ESI
006D580C  5E                        POP ESI
006D580D  5D                        POP EBP
006D580E  C2 04 00                  RET 0x4
