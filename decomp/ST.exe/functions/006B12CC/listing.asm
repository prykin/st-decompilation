FUN_006b12cc:
006B12CC  55                        PUSH EBP
006B12CD  8B EC                     MOV EBP,ESP
006B12CF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B12D2  F7 2D 8C DA 7E 00         IMUL dword ptr [0x007eda8c]
006B12D8  5D                        POP EBP
006B12D9  C3                        RET
