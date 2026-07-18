FUN_006e8630:
006E8630  55                        PUSH EBP
006E8631  8B EC                     MOV EBP,ESP
006E8633  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E8636  89 81 D0 02 00 00         MOV dword ptr [ECX + 0x2d0],EAX
006E863C  5D                        POP EBP
006E863D  C2 04 00                  RET 0x4
