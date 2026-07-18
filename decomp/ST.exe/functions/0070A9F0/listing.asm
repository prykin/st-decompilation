FUN_0070a9f0:
0070A9F0  55                        PUSH EBP
0070A9F1  8B EC                     MOV EBP,ESP
0070A9F3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070A9F6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070A9F9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070A9FC  50                        PUSH EAX
0070A9FD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070AA00  51                        PUSH ECX
0070AA01  52                        PUSH EDX
0070AA02  6A 01                     PUSH 0x1
0070AA04  50                        PUSH EAX
0070AA05  E8 96 FB FF FF            CALL 0x0070a5a0
0070AA0A  83 C4 14                  ADD ESP,0x14
0070AA0D  5D                        POP EBP
0070AA0E  C3                        RET
