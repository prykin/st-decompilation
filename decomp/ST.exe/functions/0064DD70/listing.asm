FUN_0064dd70:
0064DD70  55                        PUSH EBP
0064DD71  8B EC                     MOV EBP,ESP
0064DD73  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064DD76  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0064DD79  52                        PUSH EDX
0064DD7A  8B 01                     MOV EAX,dword ptr [ECX]
0064DD7C  FF 90 40 01 00 00         CALL dword ptr [EAX + 0x140]
0064DD82  83 C8 FF                  OR EAX,0xffffffff
0064DD85  5D                        POP EBP
0064DD86  C3                        RET
