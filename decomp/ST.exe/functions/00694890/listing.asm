FUN_00694890:
00694890  56                        PUSH ESI
00694891  8B F1                     MOV ESI,ECX
00694893  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00694896  85 C0                     TEST EAX,EAX
00694898  74 09                     JZ 0x006948a3
0069489A  50                        PUSH EAX
0069489B  E8 EA 14 D7 FF            CALL 0x00405d8a
006948A0  83 C4 04                  ADD ESP,0x4
LAB_006948a3:
006948A3  C7 46 10 00 00 00 00      MOV dword ptr [ESI + 0x10],0x0
006948AA  5E                        POP ESI
006948AB  C3                        RET
