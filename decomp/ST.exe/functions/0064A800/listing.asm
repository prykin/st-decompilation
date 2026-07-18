FUN_0064a800:
0064A800  55                        PUSH EBP
0064A801  8B EC                     MOV EBP,ESP
0064A803  56                        PUSH ESI
0064A804  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064A807  8B 06                     MOV EAX,dword ptr [ESI]
0064A809  85 C0                     TEST EAX,EAX
0064A80B  74 0F                     JZ 0x0064a81c
0064A80D  50                        PUSH EAX
0064A80E  E8 91 87 DB FF            CALL 0x00402fa4
0064A813  83 C4 04                  ADD ESP,0x4
0064A816  56                        PUSH ESI
0064A817  E8 44 08 06 00            CALL 0x006ab060
LAB_0064a81c:
0064A81C  5E                        POP ESI
0064A81D  5D                        POP EBP
0064A81E  C3                        RET
