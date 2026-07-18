FUN_0070abf0:
0070ABF0  55                        PUSH EBP
0070ABF1  8B EC                     MOV EBP,ESP
0070ABF3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070ABF6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070ABF9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070ABFC  50                        PUSH EAX
0070ABFD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070AC00  51                        PUSH ECX
0070AC01  52                        PUSH EDX
0070AC02  6A 04                     PUSH 0x4
0070AC04  50                        PUSH EAX
0070AC05  E8 96 F9 FF FF            CALL 0x0070a5a0
0070AC0A  83 C4 14                  ADD ESP,0x14
0070AC0D  5D                        POP EBP
0070AC0E  C3                        RET
