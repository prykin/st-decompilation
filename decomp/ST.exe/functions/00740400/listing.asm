FUN_00740400:
00740400  55                        PUSH EBP
00740401  8B EC                     MOV EBP,ESP
00740403  68 B8 24 7F 00            PUSH 0x7f24b8
00740408  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074040B  50                        PUSH EAX
0074040C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074040F  51                        PUSH ECX
00740410  E8 7B FD FF FF            CALL 0x00740190
00740415  83 C4 0C                  ADD ESP,0xc
00740418  5D                        POP EBP
00740419  C3                        RET
