FUN_006a5100:
006A5100  55                        PUSH EBP
006A5101  8B EC                     MOV EBP,ESP
006A5103  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A5106  A1 98 14 7F 00            MOV EAX,[0x007f1498]
006A510B  89 0D 98 14 7F 00         MOV dword ptr [0x007f1498],ECX
006A5111  5D                        POP EBP
006A5112  C3                        RET
