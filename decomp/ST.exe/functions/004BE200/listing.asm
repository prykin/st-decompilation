FUN_004be200:
004BE200  55                        PUSH EBP
004BE201  8B EC                     MOV EBP,ESP
004BE203  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004BE206  50                        PUSH EAX
004BE207  E8 90 5A F4 FF            CALL 0x00403c9c
004BE20C  5D                        POP EBP
004BE20D  C2 04 00                  RET 0x4
