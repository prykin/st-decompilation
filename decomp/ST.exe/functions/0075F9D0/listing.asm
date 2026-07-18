FUN_0075f9d0:
0075F9D0  55                        PUSH EBP
0075F9D1  8B EC                     MOV EBP,ESP
0075F9D3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075F9D6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075F9D9  56                        PUSH ESI
0075F9DA  8B F0                     MOV ESI,EAX
0075F9DC  C1 E6 08                  SHL ESI,0x8
0075F9DF  2B F0                     SUB ESI,EAX
0075F9E1  8B C1                     MOV EAX,ECX
0075F9E3  99                        CDQ
0075F9E4  2B C2                     SUB EAX,EDX
0075F9E6  D1 F8                     SAR EAX,0x1
0075F9E8  03 C6                     ADD EAX,ESI
0075F9EA  5E                        POP ESI
0075F9EB  99                        CDQ
0075F9EC  F7 F9                     IDIV ECX
0075F9EE  5D                        POP EBP
0075F9EF  C2 10 00                  RET 0x10
