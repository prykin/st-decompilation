FUN_004769f0:
004769F0  55                        PUSH EBP
004769F1  8B EC                     MOV EBP,ESP
004769F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004769F6  50                        PUSH EAX
004769F7  E8 F4 D3 F8 FF            CALL 0x00403df0
004769FC  5D                        POP EBP
004769FD  C2 04 00                  RET 0x4
