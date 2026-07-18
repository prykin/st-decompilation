FUN_006d6140:
006D6140  55                        PUSH EBP
006D6141  8B EC                     MOV EBP,ESP
006D6143  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D6146  8B 40 5C                  MOV EAX,dword ptr [EAX + 0x5c]
006D6149  83 C0 0C                  ADD EAX,0xc
006D614C  50                        PUSH EAX
006D614D  8B 08                     MOV ECX,dword ptr [EAX]
006D614F  FF 51 08                  CALL dword ptr [ECX + 0x8]
006D6152  5D                        POP EBP
006D6153  C2 04 00                  RET 0x4
