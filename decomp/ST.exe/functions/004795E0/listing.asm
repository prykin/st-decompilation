FUN_004795e0:
004795E0  55                        PUSH EBP
004795E1  8B EC                     MOV EBP,ESP
004795E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004795E6  50                        PUSH EAX
004795E7  E8 04 A8 F8 FF            CALL 0x00403df0
004795EC  5D                        POP EBP
004795ED  C2 04 00                  RET 0x4
