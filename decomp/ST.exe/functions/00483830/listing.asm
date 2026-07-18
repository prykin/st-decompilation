FUN_00483830:
00483830  55                        PUSH EBP
00483831  8B EC                     MOV EBP,ESP
00483833  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
00483837  66 89 81 F2 07 00 00      MOV word ptr [ECX + 0x7f2],AX
0048383E  5D                        POP EBP
0048383F  C2 04 00                  RET 0x4
