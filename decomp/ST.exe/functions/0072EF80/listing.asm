FUN_0072ef80:
0072EF80  55                        PUSH EBP
0072EF81  8B EC                     MOV EBP,ESP
0072EF83  6A 00                     PUSH 0x0
0072EF85  6A 00                     PUSH 0x0
0072EF87  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072EF8A  50                        PUSH EAX
0072EF8B  E8 70 00 00 00            CALL 0x0072f000
0072EF90  83 C4 0C                  ADD ESP,0xc
0072EF93  5D                        POP EBP
0072EF94  C3                        RET
