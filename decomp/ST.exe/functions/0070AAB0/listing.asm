FUN_0070aab0:
0070AAB0  55                        PUSH EBP
0070AAB1  8B EC                     MOV EBP,ESP
0070AAB3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070AAB6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070AAB9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070AABC  50                        PUSH EAX
0070AABD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070AAC0  51                        PUSH ECX
0070AAC1  52                        PUSH EDX
0070AAC2  6A 05                     PUSH 0x5
0070AAC4  50                        PUSH EAX
0070AAC5  E8 D6 FA FF FF            CALL 0x0070a5a0
0070AACA  83 C4 14                  ADD ESP,0x14
0070AACD  5D                        POP EBP
0070AACE  C3                        RET
