FUN_0075d470:
0075D470  55                        PUSH EBP
0075D471  8B EC                     MOV EBP,ESP
0075D473  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075D476  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075D479  89 08                     MOV dword ptr [EAX],ECX
0075D47B  5D                        POP EBP
0075D47C  C2 10 00                  RET 0x10
