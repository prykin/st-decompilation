FUN_006db610:
006DB610  55                        PUSH EBP
006DB611  8B EC                     MOV EBP,ESP
006DB613  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DB616  8B C2                     MOV EAX,EDX
006DB618  C1 E0 10                  SHL EAX,0x10
006DB61B  C1 FA 10                  SAR EDX,0x10
006DB61E  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
006DB621  5D                        POP EBP
006DB622  C2 08 00                  RET 0x8
