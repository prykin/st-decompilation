FUN_006d5d80:
006D5D80  55                        PUSH EBP
006D5D81  8B EC                     MOV EBP,ESP
006D5D83  56                        PUSH ESI
006D5D84  8B F1                     MOV ESI,ECX
006D5D86  E8 25 00 00 00            CALL 0x006d5db0
006D5D8B  F6 45 08 01               TEST byte ptr [EBP + 0x8],0x1
006D5D8F  74 09                     JZ 0x006d5d9a
006D5D91  56                        PUSH ESI
006D5D92  E8 19 85 05 00            CALL 0x0072e2b0
006D5D97  83 C4 04                  ADD ESP,0x4
LAB_006d5d9a:
006D5D9A  8B C6                     MOV EAX,ESI
006D5D9C  5E                        POP ESI
006D5D9D  5D                        POP EBP
006D5D9E  C2 04 00                  RET 0x4
