FUN_0067baf0:
0067BAF0  55                        PUSH EBP
0067BAF1  8B EC                     MOV EBP,ESP
0067BAF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067BAF6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067BAF9  0F BF 40 18               MOVSX EAX,word ptr [EAX + 0x18]
0067BAFD  0F BF 51 18               MOVSX EDX,word ptr [ECX + 0x18]
0067BB01  2B C2                     SUB EAX,EDX
0067BB03  5D                        POP EBP
0067BB04  C3                        RET
