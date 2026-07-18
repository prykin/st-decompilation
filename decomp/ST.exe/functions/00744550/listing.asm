FUN_00744550:
00744550  55                        PUSH EBP
00744551  8B EC                     MOV EBP,ESP
00744553  6A 03                     PUSH 0x3
00744555  68 17 01 00 00            PUSH 0x117
0074455A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074455D  50                        PUSH EAX
0074455E  E8 CD 00 00 00            CALL 0x00744630
00744563  83 C4 0C                  ADD ESP,0xc
00744566  5D                        POP EBP
00744567  C3                        RET
