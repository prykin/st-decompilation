FUN_0068e290:
0068E290  55                        PUSH EBP
0068E291  8B EC                     MOV EBP,ESP
0068E293  8B 89 A5 00 00 00         MOV ECX,dword ptr [ECX + 0xa5]
0068E299  53                        PUSH EBX
0068E29A  56                        PUSH ESI
0068E29B  33 D2                     XOR EDX,EDX
0068E29D  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
0068E2A0  57                        PUSH EDI
0068E2A1  85 F6                     TEST ESI,ESI
0068E2A3  7E 29                     JLE 0x0068e2ce
0068E2A5  66 8B 7D 08               MOV DI,word ptr [EBP + 0x8]
0068E2A9  3B D6                     CMP EDX,ESI
LAB_0068e2ab:
0068E2AB  73 0D                     JNC 0x0068e2ba
0068E2AD  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068E2B0  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
0068E2B3  0F AF C2                  IMUL EAX,EDX
0068E2B6  03 C3                     ADD EAX,EBX
0068E2B8  EB 02                     JMP 0x0068e2bc
LAB_0068e2ba:
0068E2BA  33 C0                     XOR EAX,EAX
LAB_0068e2bc:
0068E2BC  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068E2BF  85 C0                     TEST EAX,EAX
0068E2C1  74 06                     JZ 0x0068e2c9
0068E2C3  66 39 78 7D               CMP word ptr [EAX + 0x7d],DI
0068E2C7  74 07                     JZ 0x0068e2d0
LAB_0068e2c9:
0068E2C9  42                        INC EDX
0068E2CA  3B D6                     CMP EDX,ESI
0068E2CC  7C DD                     JL 0x0068e2ab
LAB_0068e2ce:
0068E2CE  33 C0                     XOR EAX,EAX
LAB_0068e2d0:
0068E2D0  5F                        POP EDI
0068E2D1  5E                        POP ESI
0068E2D2  5B                        POP EBX
0068E2D3  5D                        POP EBP
0068E2D4  C2 04 00                  RET 0x4
