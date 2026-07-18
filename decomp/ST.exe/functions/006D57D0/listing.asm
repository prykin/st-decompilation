FUN_006d57d0:
006D57D0  55                        PUSH EBP
006D57D1  8B EC                     MOV EBP,ESP
006D57D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D57D6  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D57D9  50                        PUSH EAX
006D57DA  8B 08                     MOV ECX,dword ptr [EAX]
006D57DC  FF 51 08                  CALL dword ptr [ECX + 0x8]
006D57DF  5D                        POP EBP
006D57E0  C2 04 00                  RET 0x4
