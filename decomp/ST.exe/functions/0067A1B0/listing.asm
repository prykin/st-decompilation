FUN_0067a1b0:
0067A1B0  55                        PUSH EBP
0067A1B1  8B EC                     MOV EBP,ESP
0067A1B3  56                        PUSH ESI
0067A1B4  57                        PUSH EDI
0067A1B5  8B F9                     MOV EDI,ECX
0067A1B7  8B 8F 95 06 00 00         MOV ECX,dword ptr [EDI + 0x695]
0067A1BD  85 C9                     TEST ECX,ECX
0067A1BF  74 51                     JZ 0x0067a212
0067A1C1  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067A1C4  33 F6                     XOR ESI,ESI
0067A1C6  85 C0                     TEST EAX,EAX
0067A1C8  7E 48                     JLE 0x0067a212
0067A1CA  53                        PUSH EBX
0067A1CB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_0067a1ce:
0067A1CE  85 C9                     TEST ECX,ECX
0067A1D0  74 31                     JZ 0x0067a203
0067A1D2  85 F6                     TEST ESI,ESI
0067A1D4  7C 2D                     JL 0x0067a203
0067A1D6  3B F0                     CMP ESI,EAX
0067A1D8  7D 29                     JGE 0x0067a203
0067A1DA  73 0D                     JNC 0x0067a1e9
0067A1DC  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067A1DF  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067A1E2  0F AF C6                  IMUL EAX,ESI
0067A1E5  03 C2                     ADD EAX,EDX
0067A1E7  EB 02                     JMP 0x0067a1eb
LAB_0067a1e9:
0067A1E9  33 C0                     XOR EAX,EAX
LAB_0067a1eb:
0067A1EB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0067A1EE  85 C9                     TEST ECX,ECX
0067A1F0  74 11                     JZ 0x0067a203
0067A1F2  8B 00                     MOV EAX,dword ptr [EAX]
0067A1F4  85 C0                     TEST EAX,EAX
0067A1F6  74 0B                     JZ 0x0067a203
0067A1F8  85 DB                     TEST EBX,EBX
0067A1FA  74 07                     JZ 0x0067a203
0067A1FC  8B 10                     MOV EDX,dword ptr [EAX]
0067A1FE  53                        PUSH EBX
0067A1FF  8B C8                     MOV ECX,EAX
0067A201  FF 12                     CALL dword ptr [EDX]
LAB_0067a203:
0067A203  8B 8F 95 06 00 00         MOV ECX,dword ptr [EDI + 0x695]
0067A209  46                        INC ESI
0067A20A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067A20D  3B F0                     CMP ESI,EAX
0067A20F  7C BD                     JL 0x0067a1ce
0067A211  5B                        POP EBX
LAB_0067a212:
0067A212  5F                        POP EDI
0067A213  5E                        POP ESI
0067A214  5D                        POP EBP
0067A215  C2 04 00                  RET 0x4
