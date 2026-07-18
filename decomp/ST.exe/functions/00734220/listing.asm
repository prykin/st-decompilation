FUN_00734220:
00734220  55                        PUSH EBP
00734221  8B EC                     MOV EBP,ESP
00734223  6A 00                     PUSH 0x0
00734225  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00734228  50                        PUSH EAX
00734229  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073422C  51                        PUSH ECX
0073422D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734230  52                        PUSH EDX
00734231  E8 0A 00 00 00            CALL 0x00734240
00734236  83 C4 10                  ADD ESP,0x10
00734239  5D                        POP EBP
0073423A  C3                        RET
