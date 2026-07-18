FUN_00680270:
00680270  55                        PUSH EBP
00680271  8B EC                     MOV EBP,ESP
00680273  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00680276  68 98 1D 7D 00            PUSH 0x7d1d98
0068027B  50                        PUSH EAX
0068027C  E8 EF E7 0A 00            CALL 0x0072ea70
00680281  83 C4 08                  ADD ESP,0x8
00680284  5D                        POP EBP
00680285  C2 04 00                  RET 0x4
