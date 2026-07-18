__exit:
0072EFA0  55                        PUSH EBP
0072EFA1  8B EC                     MOV EBP,ESP
0072EFA3  6A 00                     PUSH 0x0
0072EFA5  6A 01                     PUSH 0x1
0072EFA7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072EFAA  50                        PUSH EAX
0072EFAB  E8 50 00 00 00            CALL 0x0072f000
0072EFB0  83 C4 0C                  ADD ESP,0xc
0072EFB3  5D                        POP EBP
0072EFB4  C3                        RET
