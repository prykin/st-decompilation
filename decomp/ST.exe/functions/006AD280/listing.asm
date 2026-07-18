FUN_006ad280:
006AD280  55                        PUSH EBP
006AD281  8B EC                     MOV EBP,ESP
006AD283  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006AD286  A1 98 D7 7E 00            MOV EAX,[0x007ed798]
006AD28B  89 0D 98 D7 7E 00         MOV dword ptr [0x007ed798],ECX
006AD291  5D                        POP EBP
006AD292  C2 04 00                  RET 0x4
