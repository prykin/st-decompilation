FUN_00677200:
00677200  55                        PUSH EBP
00677201  8B EC                     MOV EBP,ESP
00677203  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00677206  A3 84 19 81 00            MOV [0x00811984],EAX
0067720B  83 C8 FF                  OR EAX,0xffffffff
0067720E  5D                        POP EBP
0067720F  C3                        RET
