FUN_0067f4b0:
0067F4B0  55                        PUSH EBP
0067F4B1  8B EC                     MOV EBP,ESP
0067F4B3  8B 0D 28 8A 84 00         MOV ECX,dword ptr [0x00848a28]
0067F4B9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067F4BC  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0067F4BF  73 11                     JNC 0x0067f4d2
0067F4C1  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067F4C4  0F AF C2                  IMUL EAX,EDX
0067F4C7  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0067F4CA  85 C0                     TEST EAX,EAX
0067F4CC  74 04                     JZ 0x0067f4d2
0067F4CE  8B 00                     MOV EAX,dword ptr [EAX]
0067F4D0  5D                        POP EBP
0067F4D1  C3                        RET
LAB_0067f4d2:
0067F4D2  33 C0                     XOR EAX,EAX
0067F4D4  5D                        POP EBP
0067F4D5  C3                        RET
