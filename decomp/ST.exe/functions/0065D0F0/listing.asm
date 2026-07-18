FUN_0065d0f0:
0065D0F0  55                        PUSH EBP
0065D0F1  8B EC                     MOV EBP,ESP
0065D0F3  56                        PUSH ESI
0065D0F4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0065D0F7  8B 06                     MOV EAX,dword ptr [ESI]
0065D0F9  85 C0                     TEST EAX,EAX
0065D0FB  74 0F                     JZ 0x0065d10c
0065D0FD  50                        PUSH EAX
0065D0FE  E8 88 5E DA FF            CALL 0x00402f8b
0065D103  83 C4 04                  ADD ESP,0x4
0065D106  56                        PUSH ESI
0065D107  E8 54 DF 04 00            CALL 0x006ab060
LAB_0065d10c:
0065D10C  5E                        POP ESI
0065D10D  5D                        POP EBP
0065D10E  C3                        RET
