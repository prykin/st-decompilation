FUN_00752080:
00752080  55                        PUSH EBP
00752081  8B EC                     MOV EBP,ESP
00752083  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00752086  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00752089  6A 00                     PUSH 0x0
0075208B  50                        PUSH EAX
0075208C  8B 51 32                  MOV EDX,dword ptr [ECX + 0x32]
0075208F  52                        PUSH EDX
00752090  FF 15 64 BB 85 00         CALL dword ptr [0x0085bb64]
00752096  5D                        POP EBP
00752097  C2 08 00                  RET 0x8
