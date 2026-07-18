FUN_0075dfe0:
0075DFE0  55                        PUSH EBP
0075DFE1  8B EC                     MOV EBP,ESP
0075DFE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075DFE6  8B 81 B2 01 00 00         MOV EAX,dword ptr [ECX + 0x1b2]
0075DFEC  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
0075DFF3  8B 49 6C                  MOV ECX,dword ptr [ECX + 0x6c]
0075DFF6  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
0075DFF9  5D                        POP EBP
0075DFFA  C2 04 00                  RET 0x4
