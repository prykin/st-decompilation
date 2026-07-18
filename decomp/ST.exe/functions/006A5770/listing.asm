FUN_006a5770:
006A5770  55                        PUSH EBP
006A5771  8B EC                     MOV EBP,ESP
006A5773  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A5776  A1 1C 75 85 00            MOV EAX,[0x0085751c]
006A577B  89 0D 1C 75 85 00         MOV dword ptr [0x0085751c],ECX
006A5781  5D                        POP EBP
006A5782  C3                        RET
