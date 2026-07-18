FUN_006c7d00:
006C7D00  55                        PUSH EBP
006C7D01  8B EC                     MOV EBP,ESP
006C7D03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7D06  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C7D09  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C7D0C  89 08                     MOV dword ptr [EAX],ECX
006C7D0E  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006C7D11  5D                        POP EBP
006C7D12  C2 0C 00                  RET 0xc
