FUN_0058cf90:
0058CF90  55                        PUSH EBP
0058CF91  8B EC                     MOV EBP,ESP
0058CF93  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0058CF97  66 89 81 99 02 00 00      MOV word ptr [ECX + 0x299],AX
0058CF9E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0058CFA1  89 81 79 02 00 00         MOV dword ptr [ECX + 0x279],EAX
0058CFA7  89 41 24                  MOV dword ptr [ECX + 0x24],EAX
0058CFAA  5D                        POP EBP
0058CFAB  C2 08 00                  RET 0x8
