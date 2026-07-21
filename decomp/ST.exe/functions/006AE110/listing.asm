DArrayDestroy:
006AE110  55                        PUSH EBP
006AE111  8B EC                     MOV EBP,ESP
006AE113  56                        PUSH ESI
006AE114  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006AE117  85 F6                     TEST ESI,ESI
006AE119  74 14                     JZ 0x006ae12f
006AE11B  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006AE11E  50                        PUSH EAX
006AE11F  E8 6C 7D FF FF            CALL 0x006a5e90
006AE124  F6 06 08                  TEST byte ptr [ESI],0x8
006AE127  74 06                     JZ 0x006ae12f
006AE129  56                        PUSH ESI
006AE12A  E8 61 7D FF FF            CALL 0x006a5e90
LAB_006ae12f:
006AE12F  5E                        POP ESI
006AE130  5D                        POP EBP
006AE131  C2 04 00                  RET 0x4
