FUN_00750970:
00750970  55                        PUSH EBP
00750971  8B EC                     MOV EBP,ESP
00750973  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00750976  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00750979  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075097C  50                        PUSH EAX
0075097D  6A 00                     PUSH 0x0
0075097F  6A 01                     PUSH 0x1
00750981  6A 00                     PUSH 0x0
00750983  51                        PUSH ECX
00750984  52                        PUSH EDX
00750985  E8 76 29 00 00            CALL 0x00753300
0075098A  5D                        POP EBP
0075098B  C2 0C 00                  RET 0xc
