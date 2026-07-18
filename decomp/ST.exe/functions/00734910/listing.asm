FUN_00734910:
00734910  55                        PUSH EBP
00734911  8B EC                     MOV EBP,ESP
00734913  81 7D 08 80 00 00 00      CMP dword ptr [EBP + 0x8],0x80
0073491A  1B C0                     SBB EAX,EAX
0073491C  F7 D8                     NEG EAX
0073491E  5D                        POP EBP
0073491F  C3                        RET
