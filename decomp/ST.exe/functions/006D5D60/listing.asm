FUN_006d5d60:
006D5D60  55                        PUSH EBP
006D5D61  8B EC                     MOV EBP,ESP
006D5D63  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5D66  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D5D69  50                        PUSH EAX
006D5D6A  8B 08                     MOV ECX,dword ptr [EAX]
006D5D6C  FF 51 08                  CALL dword ptr [ECX + 0x8]
006D5D6F  5D                        POP EBP
006D5D70  C2 04 00                  RET 0x4
