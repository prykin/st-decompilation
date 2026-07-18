FUN_006b12a8:
006B12A8  55                        PUSH EBP
006B12A9  8B EC                     MOV EBP,ESP
006B12AB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B12AE  F7 2D 8C DA 7E 00         IMUL dword ptr [0x007eda8c]
006B12B4  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
006B12B7  5D                        POP EBP
006B12B8  C3                        RET
