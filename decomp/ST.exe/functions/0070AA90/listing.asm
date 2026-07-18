FUN_0070aa90:
0070AA90  55                        PUSH EBP
0070AA91  8B EC                     MOV EBP,ESP
0070AA93  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070AA96  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070AA99  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070AA9C  50                        PUSH EAX
0070AA9D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070AAA0  51                        PUSH ECX
0070AAA1  52                        PUSH EDX
0070AAA2  6A 16                     PUSH 0x16
0070AAA4  50                        PUSH EAX
0070AAA5  E8 F6 FA FF FF            CALL 0x0070a5a0
0070AAAA  83 C4 14                  ADD ESP,0x14
0070AAAD  5D                        POP EBP
0070AAAE  C3                        RET
