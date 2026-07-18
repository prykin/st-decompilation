FUN_00627200:
00627200  55                        PUSH EBP
00627201  8B EC                     MOV EBP,ESP
00627203  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00627206  66 8B 81 C2 02 00 00      MOV AX,word ptr [ECX + 0x2c2]
0062720D  66 89 02                  MOV word ptr [EDX],AX
00627210  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00627213  66 8B 81 C6 02 00 00      MOV AX,word ptr [ECX + 0x2c6]
0062721A  66 89 02                  MOV word ptr [EDX],AX
0062721D  66 8B 81 CA 02 00 00      MOV AX,word ptr [ECX + 0x2ca]
00627224  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00627227  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0062722A  66 89 01                  MOV word ptr [ECX],AX
0062722D  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00627233  33 C0                     XOR EAX,EAX
00627235  5D                        POP EBP
00627236  C2 14 00                  RET 0x14
