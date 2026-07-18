FUN_006d6110:
006D6110  55                        PUSH EBP
006D6111  8B EC                     MOV EBP,ESP
006D6113  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D6116  89 41 58                  MOV dword ptr [ECX + 0x58],EAX
006D6119  5D                        POP EBP
006D611A  C2 04 00                  RET 0x4
