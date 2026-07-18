FUN_00735330:
00735330  55                        PUSH EBP
00735331  8B EC                     MOV EBP,ESP
00735333  83 3D D0 24 7F 00 00      CMP dword ptr [0x007f24d0],0x0
0073533A  75 28                     JNZ 0x00735364
0073533C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0073533F  50                        PUSH EAX
00735340  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00735343  51                        PUSH ECX
00735344  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735347  52                        PUSH EDX
00735348  6A 00                     PUSH 0x0
0073534A  6A 00                     PUSH 0x0
0073534C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073534F  50                        PUSH EAX
00735350  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735353  51                        PUSH ECX
00735354  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735357  52                        PUSH EDX
00735358  6A 01                     PUSH 0x1
0073535A  E8 81 0A 00 00            CALL 0x00735de0
0073535F  83 C4 24                  ADD ESP,0x24
00735362  EB 1E                     JMP 0x00735382
LAB_00735364:
00735364  C7 05 48 71 85 00 21 00 00 00  MOV dword ptr [0x00857148],0x21
0073536E  68 FF FF 00 00            PUSH 0xffff
00735373  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00735376  50                        PUSH EAX
00735377  E8 F4 0E 00 00            CALL 0x00736270
0073537C  83 C4 08                  ADD ESP,0x8
0073537F  DD 45 0C                  FLD double ptr [EBP + 0xc]
LAB_00735382:
00735382  5D                        POP EBP
00735383  C3                        RET
