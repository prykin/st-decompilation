sub_00416240:
00416240  55                        PUSH EBP
00416241  8B EC                     MOV EBP,ESP
00416243  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
00416247  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
0041624B  66 89 41 41               MOV word ptr [ECX + 0x41],AX
0041624F  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
00416253  66 89 51 43               MOV word ptr [ECX + 0x43],DX
00416257  66 89 41 45               MOV word ptr [ECX + 0x45],AX
0041625B  5D                        POP EBP
0041625C  C2 0C 00                  RET 0xc
