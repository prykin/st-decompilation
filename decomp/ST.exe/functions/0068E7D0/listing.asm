FUN_0068e7d0:
0068E7D0  55                        PUSH EBP
0068E7D1  8B EC                     MOV EBP,ESP
0068E7D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0068E7D6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0068E7D9  0F BF 40 06               MOVSX EAX,word ptr [EAX + 0x6]
0068E7DD  0F BF 51 06               MOVSX EDX,word ptr [ECX + 0x6]
0068E7E1  2B C2                     SUB EAX,EDX
0068E7E3  5D                        POP EBP
0068E7E4  C3                        RET
