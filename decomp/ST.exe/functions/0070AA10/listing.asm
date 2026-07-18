FUN_0070aa10:
0070AA10  55                        PUSH EBP
0070AA11  8B EC                     MOV EBP,ESP
0070AA13  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070AA16  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070AA19  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070AA1C  50                        PUSH EAX
0070AA1D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070AA20  51                        PUSH ECX
0070AA21  52                        PUSH EDX
0070AA22  6A 0E                     PUSH 0xe
0070AA24  50                        PUSH EAX
0070AA25  E8 76 FB FF FF            CALL 0x0070a5a0
0070AA2A  83 C4 14                  ADD ESP,0x14
0070AA2D  5D                        POP EBP
0070AA2E  C3                        RET
