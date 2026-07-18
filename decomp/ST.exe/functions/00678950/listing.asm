FUN_00678950:
00678950  55                        PUSH EBP
00678951  8B EC                     MOV EBP,ESP
00678953  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00678956  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00678959  50                        PUSH EAX
0067895A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067895D  52                        PUSH EDX
0067895E  50                        PUSH EAX
0067895F  83 C1 E4                  ADD ECX,-0x1c
00678962  E8 99 D6 06 00            CALL 0x006e6000
00678967  5D                        POP EBP
00678968  C2 0C 00                  RET 0xc
