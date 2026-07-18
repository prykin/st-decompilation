FUN_0070b680:
0070B680  55                        PUSH EBP
0070B681  8B EC                     MOV EBP,ESP
0070B683  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B686  66 8B 08                  MOV CX,word ptr [EAX]
0070B689  66 89 48 06               MOV word ptr [EAX + 0x6],CX
0070B68D  5D                        POP EBP
0070B68E  C3                        RET
