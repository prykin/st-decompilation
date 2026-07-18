FUN_0068e190:
0068E190  55                        PUSH EBP
0068E191  8B EC                     MOV EBP,ESP
0068E193  8B 89 A5 00 00 00         MOV ECX,dword ptr [ECX + 0xa5]
0068E199  53                        PUSH EBX
0068E19A  56                        PUSH ESI
0068E19B  33 D2                     XOR EDX,EDX
0068E19D  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
0068E1A0  57                        PUSH EDI
0068E1A1  85 F6                     TEST ESI,ESI
0068E1A3  7E 1F                     JLE 0x0068e1c4
0068E1A5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068E1A8  3B D6                     CMP EDX,ESI
LAB_0068e1aa:
0068E1AA  73 0D                     JNC 0x0068e1b9
0068E1AC  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068E1AF  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
0068E1B2  0F AF C2                  IMUL EAX,EDX
0068E1B5  03 C3                     ADD EAX,EBX
0068E1B7  EB 02                     JMP 0x0068e1bb
LAB_0068e1b9:
0068E1B9  33 C0                     XOR EAX,EAX
LAB_0068e1bb:
0068E1BB  39 38                     CMP dword ptr [EAX],EDI
0068E1BD  74 0E                     JZ 0x0068e1cd
0068E1BF  42                        INC EDX
0068E1C0  3B D6                     CMP EDX,ESI
0068E1C2  7C E6                     JL 0x0068e1aa
LAB_0068e1c4:
0068E1C4  5F                        POP EDI
0068E1C5  5E                        POP ESI
0068E1C6  33 C0                     XOR EAX,EAX
0068E1C8  5B                        POP EBX
0068E1C9  5D                        POP EBP
0068E1CA  C2 04 00                  RET 0x4
LAB_0068e1cd:
0068E1CD  85 C9                     TEST ECX,ECX
0068E1CF  74 F3                     JZ 0x0068e1c4
0068E1D1  85 D2                     TEST EDX,EDX
0068E1D3  7C EF                     JL 0x0068e1c4
0068E1D5  3B D6                     CMP EDX,ESI
0068E1D7  7D EB                     JGE 0x0068e1c4
0068E1D9  73 15                     JNC 0x0068e1f0
0068E1DB  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068E1DE  5F                        POP EDI
0068E1DF  0F AF C2                  IMUL EAX,EDX
0068E1E2  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068E1E5  5E                        POP ESI
0068E1E6  03 C2                     ADD EAX,EDX
0068E1E8  5B                        POP EBX
0068E1E9  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068E1EC  5D                        POP EBP
0068E1ED  C2 04 00                  RET 0x4
LAB_0068e1f0:
0068E1F0  33 C0                     XOR EAX,EAX
0068E1F2  5F                        POP EDI
0068E1F3  5E                        POP ESI
0068E1F4  5B                        POP EBX
0068E1F5  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068E1F8  5D                        POP EBP
0068E1F9  C2 04 00                  RET 0x4
