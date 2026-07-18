FUN_0044ede0:
0044EDE0  55                        PUSH EBP
0044EDE1  8B EC                     MOV EBP,ESP
0044EDE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044EDE6  85 C0                     TEST EAX,EAX
0044EDE8  7D 0E                     JGE 0x0044edf8
0044EDEA  C7 81 1A 07 00 00 00 00 00 00  MOV dword ptr [ECX + 0x71a],0x0
0044EDF4  5D                        POP EBP
0044EDF5  C2 04 00                  RET 0x4
LAB_0044edf8:
0044EDF8  83 F8 64                  CMP EAX,0x64
0044EDFB  7E 0E                     JLE 0x0044ee0b
0044EDFD  C7 81 1A 07 00 00 64 00 00 00  MOV dword ptr [ECX + 0x71a],0x64
0044EE07  5D                        POP EBP
0044EE08  C2 04 00                  RET 0x4
LAB_0044ee0b:
0044EE0B  89 81 1A 07 00 00         MOV dword ptr [ECX + 0x71a],EAX
0044EE11  5D                        POP EBP
0044EE12  C2 04 00                  RET 0x4
