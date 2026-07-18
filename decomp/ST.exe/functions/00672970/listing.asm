FUN_00672970:
00672970  55                        PUSH EBP
00672971  8B EC                     MOV EBP,ESP
00672973  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00672976  66 8B 0D 24 2D 7D 00      MOV CX,word ptr [0x007d2d24]
0067297D  50                        PUSH EAX
0067297E  68 00 01 00 00            PUSH 0x100
00672983  51                        PUSH ECX
00672984  E8 C7 5F 05 00            CALL 0x006c8950
00672989  25 FF FF 00 00            AND EAX,0xffff
0067298E  A3 24 2D 7D 00            MOV [0x007d2d24],EAX
00672993  5D                        POP EBP
00672994  C2 04 00                  RET 0x4
