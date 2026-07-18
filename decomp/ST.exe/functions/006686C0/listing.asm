FUN_006686c0:
006686C0  55                        PUSH EBP
006686C1  8B EC                     MOV EBP,ESP
006686C3  56                        PUSH ESI
006686C4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006686C7  8B 06                     MOV EAX,dword ptr [ESI]
006686C9  85 C0                     TEST EAX,EAX
006686CB  74 0F                     JZ 0x006686dc
006686CD  50                        PUSH EAX
006686CE  E8 C0 9B D9 FF            CALL 0x00402293
006686D3  83 C4 04                  ADD ESP,0x4
006686D6  56                        PUSH ESI
006686D7  E8 84 29 04 00            CALL 0x006ab060
LAB_006686dc:
006686DC  5E                        POP ESI
006686DD  5D                        POP EBP
006686DE  C3                        RET
