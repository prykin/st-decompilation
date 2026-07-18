FUN_006d6120:
006D6120  55                        PUSH EBP
006D6121  8B EC                     MOV EBP,ESP
006D6123  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D6126  8B 40 5C                  MOV EAX,dword ptr [EAX + 0x5c]
006D6129  83 C0 0C                  ADD EAX,0xc
006D612C  50                        PUSH EAX
006D612D  8B 08                     MOV ECX,dword ptr [EAX]
006D612F  FF 51 04                  CALL dword ptr [ECX + 0x4]
006D6132  5D                        POP EBP
006D6133  C2 04 00                  RET 0x4
