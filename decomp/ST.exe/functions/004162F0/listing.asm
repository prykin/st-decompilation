FUN_004162f0:
004162F0  55                        PUSH EBP
004162F1  8B EC                     MOV EBP,ESP
004162F3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004162F6  66 8B 41 5B               MOV AX,word ptr [ECX + 0x5b]
004162FA  66 89 02                  MOV word ptr [EDX],AX
004162FD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00416300  66 8B 41 5D               MOV AX,word ptr [ECX + 0x5d]
00416304  66 89 02                  MOV word ptr [EDX],AX
00416307  66 8B 41 5F               MOV AX,word ptr [ECX + 0x5f]
0041630B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0041630E  66 89 01                  MOV word ptr [ECX],AX
00416311  5D                        POP EBP
00416312  C2 0C 00                  RET 0xc
