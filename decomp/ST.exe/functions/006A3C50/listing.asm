FUN_006a3c50:
006A3C50  55                        PUSH EBP
006A3C51  8B EC                     MOV EBP,ESP
006A3C53  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A3C56  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A3C59  6A 00                     PUSH 0x0
006A3C5B  6A 00                     PUSH 0x0
006A3C5D  6A 01                     PUSH 0x1
006A3C5F  50                        PUSH EAX
006A3C60  51                        PUSH ECX
006A3C61  E8 32 1D D6 FF            CALL 0x00405998
006A3C66  83 C4 14                  ADD ESP,0x14
006A3C69  5D                        POP EBP
006A3C6A  C3                        RET
