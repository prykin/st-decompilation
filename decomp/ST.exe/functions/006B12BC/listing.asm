FUN_006b12bc:
006B12BC  55                        PUSH EBP
006B12BD  8B EC                     MOV EBP,ESP
006B12BF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B12C2  F7 6D 0C                  IMUL dword ptr [EBP + 0xc]
006B12C5  F7 7D 10                  IDIV dword ptr [EBP + 0x10]
006B12C8  5D                        POP EBP
006B12C9  C3                        RET
