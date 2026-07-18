FUN_0070b3d0:
0070B3D0  55                        PUSH EBP
0070B3D1  8B EC                     MOV EBP,ESP
0070B3D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B3D6  66 8B 48 23               MOV CX,word ptr [EAX + 0x23]
0070B3DA  66 89 48 29               MOV word ptr [EAX + 0x29],CX
0070B3DE  5D                        POP EBP
0070B3DF  C3                        RET
