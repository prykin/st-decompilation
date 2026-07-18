FUN_006d5130:
006D5130  55                        PUSH EBP
006D5131  8B EC                     MOV EBP,ESP
006D5133  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5136  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D5139  50                        PUSH EAX
006D513A  8B 08                     MOV ECX,dword ptr [EAX]
006D513C  FF 51 04                  CALL dword ptr [ECX + 0x4]
006D513F  5D                        POP EBP
006D5140  C2 04 00                  RET 0x4
