FUN_006c7e90:
006C7E90  55                        PUSH EBP
006C7E91  8B EC                     MOV EBP,ESP
006C7E93  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C7E96  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C7E99  89 41 36                  MOV dword ptr [ECX + 0x36],EAX
006C7E9C  5D                        POP EBP
006C7E9D  C2 08 00                  RET 0x8
