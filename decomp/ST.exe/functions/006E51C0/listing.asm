FUN_006e51c0:
006E51C0  55                        PUSH EBP
006E51C1  8B EC                     MOV EBP,ESP
006E51C3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E51C6  8B C1                     MOV EAX,ECX
006E51C8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E51CB  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
006E51CE  33 C9                     XOR ECX,ECX
006E51D0  C7 00 88 E1 79 00         MOV dword ptr [EAX],0x79e188
006E51D6  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
006E51D9  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006E51DC  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006E51DF  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006E51E2  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006E51E5  5D                        POP EBP
006E51E6  C2 08 00                  RET 0x8
