FUN_006a48e0:
006A48E0  55                        PUSH EBP
006A48E1  8B EC                     MOV EBP,ESP
006A48E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A48E6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A48E9  6A 00                     PUSH 0x0
006A48EB  6A 00                     PUSH 0x0
006A48ED  6A 01                     PUSH 0x1
006A48EF  50                        PUSH EAX
006A48F0  51                        PUSH ECX
006A48F1  E8 FA FE D5 FF            CALL 0x004047f0
006A48F6  83 C4 14                  ADD ESP,0x14
006A48F9  5D                        POP EBP
006A48FA  C3                        RET
