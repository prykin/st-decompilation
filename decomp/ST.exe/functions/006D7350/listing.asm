FUN_006d7350:
006D7350  55                        PUSH EBP
006D7351  8B EC                     MOV EBP,ESP
006D7353  56                        PUSH ESI
006D7354  8B F1                     MOV ESI,ECX
006D7356  E8 6A 12 07 00            CALL 0x007485c5
006D735B  F6 45 08 01               TEST byte ptr [EBP + 0x8],0x1
006D735F  74 09                     JZ 0x006d736a
006D7361  56                        PUSH ESI
006D7362  E8 49 6F 05 00            CALL 0x0072e2b0
006D7367  83 C4 04                  ADD ESP,0x4
LAB_006d736a:
006D736A  8B C6                     MOV EAX,ESI
006D736C  5E                        POP ESI
006D736D  5D                        POP EBP
006D736E  C2 04 00                  RET 0x4
