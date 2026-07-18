FUN_006d7120:
006D7120  55                        PUSH EBP
006D7121  8B EC                     MOV EBP,ESP
006D7123  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D7126  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D7129  50                        PUSH EAX
006D712A  8B 08                     MOV ECX,dword ptr [EAX]
006D712C  FF 51 04                  CALL dword ptr [ECX + 0x4]
006D712F  5D                        POP EBP
006D7130  C2 04 00                  RET 0x4
