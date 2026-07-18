FUN_00476cc0:
00476CC0  55                        PUSH EBP
00476CC1  8B EC                     MOV EBP,ESP
00476CC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00476CC6  50                        PUSH EAX
00476CC7  E8 24 D1 F8 FF            CALL 0x00403df0
00476CCC  5D                        POP EBP
00476CCD  C2 04 00                  RET 0x4
