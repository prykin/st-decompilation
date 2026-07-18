FUN_006b12dc:
006B12DC  55                        PUSH EBP
006B12DD  8B EC                     MOV EBP,ESP
006B12DF  66 56                     PUSH SI
006B12E1  66 57                     PUSH DI
006B12E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B12E6  F7 6D 0C                  IMUL dword ptr [EBP + 0xc]
006B12E9  F7 3D 8C DA 7E 00         IDIV dword ptr [0x007eda8c]
006B12EF  66 5F                     POP DI
006B12F1  66 5E                     POP SI
006B12F3  5D                        POP EBP
006B12F4  C3                        RET
