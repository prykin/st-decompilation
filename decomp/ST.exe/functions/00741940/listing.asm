FUN_00741940:
00741940  55                        PUSH EBP
00741941  8B EC                     MOV EBP,ESP
00741943  6A 00                     PUSH 0x0
00741945  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00741948  50                        PUSH EAX
00741949  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074194C  51                        PUSH ECX
0074194D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00741950  52                        PUSH EDX
00741951  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741954  50                        PUSH EAX
00741955  E8 06 00 00 00            CALL 0x00741960
0074195A  83 C4 14                  ADD ESP,0x14
0074195D  5D                        POP EBP
0074195E  C3                        RET
