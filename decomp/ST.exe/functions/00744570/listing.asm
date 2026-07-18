FUN_00744570:
00744570  55                        PUSH EBP
00744571  8B EC                     MOV EBP,ESP
00744573  6A 03                     PUSH 0x3
00744575  68 57 01 00 00            PUSH 0x157
0074457A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074457D  50                        PUSH EAX
0074457E  E8 AD 00 00 00            CALL 0x00744630
00744583  83 C4 0C                  ADD ESP,0xc
00744586  5D                        POP EBP
00744587  C3                        RET
