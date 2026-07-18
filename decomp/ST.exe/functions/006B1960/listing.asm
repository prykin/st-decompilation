FUN_006b1960:
006B1960  55                        PUSH EBP
006B1961  8B EC                     MOV EBP,ESP
006B1963  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B1966  8B 81 D0 01 00 00         MOV EAX,dword ptr [ECX + 0x1d0]
006B196C  C7 81 D0 01 00 00 01 00 00 00  MOV dword ptr [ECX + 0x1d0],0x1
006B1976  5D                        POP EBP
006B1977  C2 04 00                  RET 0x4
