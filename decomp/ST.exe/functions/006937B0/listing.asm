FUN_006937b0:
006937B0  55                        PUSH EBP
006937B1  8B EC                     MOV EBP,ESP
006937B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006937B6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006937B9  A3 80 3D 85 00            MOV [0x00853d80],EAX
006937BE  89 0D 84 3D 85 00         MOV dword ptr [0x00853d84],ECX
006937C4  5D                        POP EBP
006937C5  C3                        RET
