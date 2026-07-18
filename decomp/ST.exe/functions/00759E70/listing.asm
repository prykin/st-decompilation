FUN_00759e70:
00759E70  55                        PUSH EBP
00759E71  8B EC                     MOV EBP,ESP
00759E73  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00759E76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759E79  8D 44 08 FF               LEA EAX,[EAX + ECX*0x1 + -0x1]
00759E7D  99                        CDQ
00759E7E  F7 F9                     IDIV ECX
00759E80  5D                        POP EBP
00759E81  C2 08 00                  RET 0x8
