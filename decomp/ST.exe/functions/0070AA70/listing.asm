FUN_0070aa70:
0070AA70  55                        PUSH EBP
0070AA71  8B EC                     MOV EBP,ESP
0070AA73  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070AA76  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070AA79  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070AA7C  50                        PUSH EAX
0070AA7D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070AA80  51                        PUSH ECX
0070AA81  52                        PUSH EDX
0070AA82  6A 12                     PUSH 0x12
0070AA84  50                        PUSH EAX
0070AA85  E8 16 FB FF FF            CALL 0x0070a5a0
0070AA8A  83 C4 14                  ADD ESP,0x14
0070AA8D  5D                        POP EBP
0070AA8E  C3                        RET
