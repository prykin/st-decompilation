FUN_006a3be0:
006A3BE0  55                        PUSH EBP
006A3BE1  8B EC                     MOV EBP,ESP
006A3BE3  A1 CC 71 85 00            MOV EAX,[0x008571cc]
006A3BE8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A3BEB  6A 00                     PUSH 0x0
006A3BED  6A 00                     PUSH 0x0
006A3BEF  6A 01                     PUSH 0x1
006A3BF1  50                        PUSH EAX
006A3BF2  51                        PUSH ECX
006A3BF3  E8 A0 1D D6 FF            CALL 0x00405998
006A3BF8  83 C4 14                  ADD ESP,0x14
006A3BFB  5D                        POP EBP
006A3BFC  C3                        RET
