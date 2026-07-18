FUN_0075f720:
0075F720  55                        PUSH EBP
0075F721  8B EC                     MOV EBP,ESP
0075F723  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F726  8B 88 BA 01 00 00         MOV ECX,dword ptr [EAX + 0x1ba]
0075F72C  C7 41 1C 01 00 00 00      MOV dword ptr [ECX + 0x1c],0x1
0075F733  5D                        POP EBP
0075F734  C2 04 00                  RET 0x4
