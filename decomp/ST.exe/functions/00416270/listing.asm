FUN_00416270:
00416270  55                        PUSH EBP
00416271  8B EC                     MOV EBP,ESP
00416273  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00416276  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
0041627A  66 89 02                  MOV word ptr [EDX],AX
0041627D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00416280  66 8B 41 43               MOV AX,word ptr [ECX + 0x43]
00416284  66 89 02                  MOV word ptr [EDX],AX
00416287  66 8B 41 45               MOV AX,word ptr [ECX + 0x45]
0041628B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0041628E  66 89 01                  MOV word ptr [ECX],AX
00416291  5D                        POP EBP
00416292  C2 0C 00                  RET 0xc
