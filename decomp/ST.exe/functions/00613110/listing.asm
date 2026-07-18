FUN_00613110:
00613110  55                        PUSH EBP
00613111  8B EC                     MOV EBP,ESP
00613113  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
00613119  E8 FE 26 DF FF            CALL 0x0040581c
0061311E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00613121  5D                        POP EBP
00613122  C2 04 00                  RET 0x4
