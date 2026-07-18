FUN_00734020:
00734020  55                        PUSH EBP
00734021  8B EC                     MOV EBP,ESP
00734023  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734026  83 E8 20                  SUB EAX,0x20
00734029  5D                        POP EBP
0073402A  C3                        RET
