__ultoa:
0072DFC0  55                        PUSH EBP
0072DFC1  8B EC                     MOV EBP,ESP
0072DFC3  6A 00                     PUSH 0x0
0072DFC5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072DFC8  50                        PUSH EAX
0072DFC9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072DFCC  51                        PUSH ECX
0072DFCD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072DFD0  52                        PUSH EDX
0072DFD1  E8 DA FE FF FF            CALL 0x0072deb0
0072DFD6  83 C4 10                  ADD ESP,0x10
0072DFD9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072DFDC  5D                        POP EBP
0072DFDD  C3                        RET
