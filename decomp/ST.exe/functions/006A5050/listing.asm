FUN_006a5050:
006A5050  55                        PUSH EBP
006A5051  8B EC                     MOV EBP,ESP
006A5053  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A5056  A1 80 C1 7E 00            MOV EAX,[0x007ec180]
006A505B  89 0D 80 C1 7E 00         MOV dword ptr [0x007ec180],ECX
006A5061  5D                        POP EBP
006A5062  C3                        RET
