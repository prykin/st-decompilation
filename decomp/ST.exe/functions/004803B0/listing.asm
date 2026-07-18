FUN_004803b0:
004803B0  55                        PUSH EBP
004803B1  8B EC                     MOV EBP,ESP
004803B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004803B6  50                        PUSH EAX
004803B7  E8 34 3A F8 FF            CALL 0x00403df0
004803BC  5D                        POP EBP
004803BD  C2 04 00                  RET 0x4
