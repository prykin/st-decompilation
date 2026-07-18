FUN_006d57b0:
006D57B0  55                        PUSH EBP
006D57B1  8B EC                     MOV EBP,ESP
006D57B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D57B6  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D57B9  50                        PUSH EAX
006D57BA  8B 08                     MOV ECX,dword ptr [EAX]
006D57BC  FF 51 04                  CALL dword ptr [ECX + 0x4]
006D57BF  5D                        POP EBP
006D57C0  C2 04 00                  RET 0x4
