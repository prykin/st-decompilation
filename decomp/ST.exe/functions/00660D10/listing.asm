FUN_00660d10:
00660D10  55                        PUSH EBP
00660D11  8B EC                     MOV EBP,ESP
00660D13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00660D16  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00660D19  0F BF 40 0C               MOVSX EAX,word ptr [EAX + 0xc]
00660D1D  0F BF 51 0C               MOVSX EDX,word ptr [ECX + 0xc]
00660D21  2B C2                     SUB EAX,EDX
00660D23  5D                        POP EBP
00660D24  C3                        RET
