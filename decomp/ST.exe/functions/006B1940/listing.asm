FUN_006b1940:
006B1940  55                        PUSH EBP
006B1941  8B EC                     MOV EBP,ESP
006B1943  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B1946  8B 81 D0 01 00 00         MOV EAX,dword ptr [ECX + 0x1d0]
006B194C  C7 81 D0 01 00 00 00 00 00 00  MOV dword ptr [ECX + 0x1d0],0x0
006B1956  5D                        POP EBP
006B1957  C2 04 00                  RET 0x4
