FUN_006c6fc0:
006C6FC0  55                        PUSH EBP
006C6FC1  8B EC                     MOV EBP,ESP
006C6FC3  56                        PUSH ESI
006C6FC4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C6FC7  85 F6                     TEST ESI,ESI
006C6FC9  74 21                     JZ 0x006c6fec
006C6FCB  8B 46 2A                  MOV EAX,dword ptr [ESI + 0x2a]
006C6FCE  50                        PUSH EAX
006C6FCF  E8 BC EE FD FF            CALL 0x006a5e90
006C6FD4  8B 4E 12                  MOV ECX,dword ptr [ESI + 0x12]
006C6FD7  51                        PUSH ECX
006C6FD8  E8 B3 EE FD FF            CALL 0x006a5e90
006C6FDD  8B 56 72                  MOV EDX,dword ptr [ESI + 0x72]
006C6FE0  52                        PUSH EDX
006C6FE1  E8 AA EE FD FF            CALL 0x006a5e90
006C6FE6  56                        PUSH ESI
006C6FE7  E8 A4 EE FD FF            CALL 0x006a5e90
LAB_006c6fec:
006C6FEC  5E                        POP ESI
006C6FED  5D                        POP EBP
006C6FEE  C2 04 00                  RET 0x4
