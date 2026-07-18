FUN_00590130:
00590130  55                        PUSH EBP
00590131  8B EC                     MOV EBP,ESP
00590133  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00590136  89 81 5F 02 00 00         MOV dword ptr [ECX + 0x25f],EAX
0059013C  5D                        POP EBP
0059013D  C2 08 00                  RET 0x8
