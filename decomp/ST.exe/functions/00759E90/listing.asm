FUN_00759e90:
00759E90  55                        PUSH EBP
00759E91  8B EC                     MOV EBP,ESP
00759E93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759E96  56                        PUSH ESI
00759E97  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00759E9A  8D 4C 30 FF               LEA ECX,[EAX + ESI*0x1 + -0x1]
00759E9E  8B C1                     MOV EAX,ECX
00759EA0  99                        CDQ
00759EA1  F7 FE                     IDIV ESI
00759EA3  8B C1                     MOV EAX,ECX
00759EA5  5E                        POP ESI
00759EA6  2B C2                     SUB EAX,EDX
00759EA8  5D                        POP EBP
00759EA9  C2 08 00                  RET 0x8
