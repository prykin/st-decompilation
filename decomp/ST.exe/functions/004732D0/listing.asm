FUN_004732d0:
004732D0  55                        PUSH EBP
004732D1  8B EC                     MOV EBP,ESP
004732D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004732D6  50                        PUSH EAX
004732D7  E8 5E 16 F9 FF            CALL 0x0040493a
004732DC  5D                        POP EBP
004732DD  C2 04 00                  RET 0x4
