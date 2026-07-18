FUN_00750920:
00750920  55                        PUSH EBP
00750921  8B EC                     MOV EBP,ESP
00750923  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00750926  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00750929  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075092C  6A 00                     PUSH 0x0
0075092E  50                        PUSH EAX
0075092F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00750932  6A 02                     PUSH 0x2
00750934  51                        PUSH ECX
00750935  52                        PUSH EDX
00750936  50                        PUSH EAX
00750937  E8 C4 29 00 00            CALL 0x00753300
0075093C  5D                        POP EBP
0075093D  C2 10 00                  RET 0x10
