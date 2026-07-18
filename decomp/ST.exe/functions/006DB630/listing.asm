FUN_006db630:
006DB630  55                        PUSH EBP
006DB631  8B EC                     MOV EBP,ESP
006DB633  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DB636  F7 6D 0C                  IMUL dword ptr [EBP + 0xc]
006DB639  F7 7D 10                  IDIV dword ptr [EBP + 0x10]
006DB63C  5D                        POP EBP
006DB63D  C2 0C 00                  RET 0xc
