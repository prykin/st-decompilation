FUN_005844b0:
005844B0  55                        PUSH EBP
005844B1  8B EC                     MOV EBP,ESP
005844B3  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
005844B7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005844BA  66 89 81 92 02 00 00      MOV word ptr [ECX + 0x292],AX
005844C1  89 91 5A 02 00 00         MOV dword ptr [ECX + 0x25a],EDX
005844C7  5D                        POP EBP
005844C8  C2 08 00                  RET 0x8
