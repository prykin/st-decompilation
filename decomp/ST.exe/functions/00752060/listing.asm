FUN_00752060:
00752060  55                        PUSH EBP
00752061  8B EC                     MOV EBP,ESP
00752063  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00752066  6A 01                     PUSH 0x1
00752068  6A 00                     PUSH 0x0
0075206A  8B 48 32                  MOV ECX,dword ptr [EAX + 0x32]
0075206D  51                        PUSH ECX
0075206E  FF 15 64 BB 85 00         CALL dword ptr [0x0085bb64]
00752074  5D                        POP EBP
00752075  C2 04 00                  RET 0x4
