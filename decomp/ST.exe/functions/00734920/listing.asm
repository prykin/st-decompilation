FUN_00734920:
00734920  55                        PUSH EBP
00734921  8B EC                     MOV EBP,ESP
00734923  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734926  83 E0 7F                  AND EAX,0x7f
00734929  5D                        POP EBP
0073492A  C3                        RET
