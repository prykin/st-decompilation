FUN_0067a0c0:
0067A0C0  55                        PUSH EBP
0067A0C1  8B EC                     MOV EBP,ESP
0067A0C3  8B 89 95 06 00 00         MOV ECX,dword ptr [ECX + 0x695]
0067A0C9  85 C9                     TEST ECX,ECX
0067A0CB  74 3C                     JZ 0x0067a109
0067A0CD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067A0D0  85 D2                     TEST EDX,EDX
0067A0D2  7C 35                     JL 0x0067a109
0067A0D4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067A0D7  3B D0                     CMP EDX,EAX
0067A0D9  7D 2E                     JGE 0x0067a109
0067A0DB  73 0B                     JNC 0x0067a0e8
0067A0DD  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067A0E0  0F AF C2                  IMUL EAX,EDX
0067A0E3  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0067A0E6  EB 02                     JMP 0x0067a0ea
LAB_0067a0e8:
0067A0E8  33 C0                     XOR EAX,EAX
LAB_0067a0ea:
0067A0EA  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0067A0ED  85 C9                     TEST ECX,ECX
0067A0EF  74 18                     JZ 0x0067a109
0067A0F1  8B 00                     MOV EAX,dword ptr [EAX]
0067A0F3  85 C0                     TEST EAX,EAX
0067A0F5  74 12                     JZ 0x0067a109
0067A0F7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067A0FA  85 C9                     TEST ECX,ECX
0067A0FC  74 0B                     JZ 0x0067a109
0067A0FE  8B 10                     MOV EDX,dword ptr [EAX]
0067A100  51                        PUSH ECX
0067A101  8B C8                     MOV ECX,EAX
0067A103  FF 12                     CALL dword ptr [EDX]
0067A105  5D                        POP EBP
0067A106  C2 08 00                  RET 0x8
LAB_0067a109:
0067A109  B8 FF FF 00 00            MOV EAX,0xffff
0067A10E  5D                        POP EBP
0067A10F  C2 08 00                  RET 0x8
