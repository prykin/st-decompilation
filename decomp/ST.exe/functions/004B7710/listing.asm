FUN_004b7710:
004B7710  55                        PUSH EBP
004B7711  8B EC                     MOV EBP,ESP
004B7713  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B7716  56                        PUSH ESI
004B7717  57                        PUSH EDI
004B7718  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004B771B  50                        PUSH EAX
004B771C  8B F1                     MOV ESI,ECX
004B771E  57                        PUSH EDI
004B771F  E8 73 B1 F4 FF            CALL 0x00402897
004B7724  50                        PUSH EAX
004B7725  57                        PUSH EDI
004B7726  8B CE                     MOV ECX,ESI
004B7728  E8 AE D1 F4 FF            CALL 0x004048db
004B772D  5F                        POP EDI
004B772E  5E                        POP ESI
004B772F  5D                        POP EBP
004B7730  C2 08 00                  RET 0x8
