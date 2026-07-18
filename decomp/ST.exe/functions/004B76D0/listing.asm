FUN_004b76d0:
004B76D0  55                        PUSH EBP
004B76D1  8B EC                     MOV EBP,ESP
004B76D3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B76D6  56                        PUSH ESI
004B76D7  57                        PUSH EDI
004B76D8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004B76DB  50                        PUSH EAX
004B76DC  8B F1                     MOV ESI,ECX
004B76DE  57                        PUSH EDI
004B76DF  E8 B3 B1 F4 FF            CALL 0x00402897
004B76E4  50                        PUSH EAX
004B76E5  57                        PUSH EDI
004B76E6  8B CE                     MOV ECX,ESI
004B76E8  E8 89 B9 F4 FF            CALL 0x00403076
004B76ED  5F                        POP EDI
004B76EE  5E                        POP ESI
004B76EF  5D                        POP EBP
004B76F0  C2 08 00                  RET 0x8
