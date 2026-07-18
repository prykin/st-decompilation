FUN_0070b3c0:
0070B3C0  55                        PUSH EBP
0070B3C1  8B EC                     MOV EBP,ESP
0070B3C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B3C6  66 C7 40 29 FF FF         MOV word ptr [EAX + 0x29],0xffff
0070B3CC  5D                        POP EBP
0070B3CD  C3                        RET
