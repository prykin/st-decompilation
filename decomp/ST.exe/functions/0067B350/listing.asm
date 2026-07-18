FUN_0067b350:
0067B350  55                        PUSH EBP
0067B351  8B EC                     MOV EBP,ESP
0067B353  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067B356  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067B359  0F BF 40 05               MOVSX EAX,word ptr [EAX + 0x5]
0067B35D  0F BF 51 05               MOVSX EDX,word ptr [ECX + 0x5]
0067B361  2B C2                     SUB EAX,EDX
0067B363  5D                        POP EBP
0067B364  C3                        RET
