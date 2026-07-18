FUN_00750940:
00750940  55                        PUSH EBP
00750941  8B EC                     MOV EBP,ESP
00750943  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00750946  56                        PUSH ESI
00750947  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075094A  6A 00                     PUSH 0x0
0075094C  50                        PUSH EAX
0075094D  56                        PUSH ESI
0075094E  E8 9D 2C 00 00            CALL 0x007535f0
00750953  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00750956  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00750959  F7 D8                     NEG EAX
0075095B  1B C0                     SBB EAX,EAX
0075095D  F7 D8                     NEG EAX
0075095F  83 C0 02                  ADD EAX,0x2
00750962  50                        PUSH EAX
00750963  51                        PUSH ECX
00750964  52                        PUSH EDX
00750965  56                        PUSH ESI
00750966  E8 95 29 00 00            CALL 0x00753300
0075096B  5E                        POP ESI
0075096C  5D                        POP EBP
0075096D  C2 10 00                  RET 0x10
