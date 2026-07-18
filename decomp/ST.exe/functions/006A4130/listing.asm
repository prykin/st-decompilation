FUN_006a4130:
006A4130  55                        PUSH EBP
006A4131  8B EC                     MOV EBP,ESP
006A4133  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A4136  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A4139  6A 00                     PUSH 0x0
006A413B  6A 00                     PUSH 0x0
006A413D  6A 01                     PUSH 0x1
006A413F  50                        PUSH EAX
006A4140  51                        PUSH ECX
006A4141  E8 6E 06 D6 FF            CALL 0x004047b4
006A4146  83 C4 14                  ADD ESP,0x14
006A4149  5D                        POP EBP
006A414A  C3                        RET
