FUN_006f07e0:
006F07E0  55                        PUSH EBP
006F07E1  8B EC                     MOV EBP,ESP
006F07E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F07E6  83 38 00                  CMP dword ptr [EAX],0x0
006F07E9  74 06                     JZ 0x006f07f1
006F07EB  50                        PUSH EAX
006F07EC  E8 6F A8 FB FF            CALL 0x006ab060
LAB_006f07f1:
006F07F1  5D                        POP EBP
006F07F2  C3                        RET
