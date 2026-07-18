FUN_00682340:
00682340  55                        PUSH EBP
00682341  8B EC                     MOV EBP,ESP
00682343  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00682346  0F BF 48 01               MOVSX ECX,word ptr [EAX + 0x1]
0068234A  51                        PUSH ECX
0068234B  E8 EA 11 D8 FF            CALL 0x0040353a
00682350  83 C4 04                  ADD ESP,0x4
00682353  5D                        POP EBP
00682354  C2 04 00                  RET 0x4
