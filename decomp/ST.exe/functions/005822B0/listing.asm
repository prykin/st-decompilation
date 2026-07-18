FUN_005822b0:
005822B0  55                        PUSH EBP
005822B1  8B EC                     MOV EBP,ESP
005822B3  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
005822B7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005822BA  66 89 81 05 02 00 00      MOV word ptr [ECX + 0x205],AX
005822C1  89 91 DD 01 00 00         MOV dword ptr [ECX + 0x1dd],EDX
005822C7  5D                        POP EBP
005822C8  C2 08 00                  RET 0x8
