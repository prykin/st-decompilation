FUN_00491200:
00491200  55                        PUSH EBP
00491201  8B EC                     MOV EBP,ESP
00491203  8B 91 5D 04 00 00         MOV EDX,dword ptr [ECX + 0x45d]
00491209  33 C0                     XOR EAX,EAX
0049120B  83 FA 14                  CMP EDX,0x14
0049120E  75 1A                     JNZ 0x0049122a
00491210  8B 91 A2 05 00 00         MOV EDX,dword ptr [ECX + 0x5a2]
00491216  56                        PUSH ESI
00491217  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0049121A  3B D6                     CMP EDX,ESI
0049121C  5E                        POP ESI
0049121D  75 0B                     JNZ 0x0049122a
0049121F  89 81 A2 05 00 00         MOV dword ptr [ECX + 0x5a2],EAX
00491225  B8 01 00 00 00            MOV EAX,0x1
LAB_0049122a:
0049122A  5D                        POP EBP
0049122B  C2 04 00                  RET 0x4
