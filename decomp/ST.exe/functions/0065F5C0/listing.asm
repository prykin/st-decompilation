AiFltClassTy::sub_0065F5C0:
0065F5C0  55                        PUSH EBP
0065F5C1  8B EC                     MOV EBP,ESP
0065F5C3  53                        PUSH EBX
0065F5C4  56                        PUSH ESI
0065F5C5  57                        PUSH EDI
0065F5C6  8B F9                     MOV EDI,ECX
0065F5C8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0065F5CB  33 F6                     XOR ESI,ESI
0065F5CD  8B 8F 23 02 00 00         MOV ECX,dword ptr [EDI + 0x223]
0065F5D3  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0065F5D6  85 C0                     TEST EAX,EAX
0065F5D8  7E 3D                     JLE 0x0065f617
0065F5DA  3B F0                     CMP ESI,EAX
LAB_0065f5dc:
0065F5DC  73 0D                     JNC 0x0065f5eb
0065F5DE  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0065F5E1  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0065F5E4  0F AF C6                  IMUL EAX,ESI
0065F5E7  03 C2                     ADD EAX,EDX
0065F5E9  EB 02                     JMP 0x0065f5ed
LAB_0065f5eb:
0065F5EB  33 C0                     XOR EAX,EAX
LAB_0065f5ed:
0065F5ED  0F BF 4B 02               MOVSX ECX,word ptr [EBX + 0x2]
0065F5F1  0F BF 13                  MOVSX EDX,word ptr [EBX]
0065F5F4  51                        PUSH ECX
0065F5F5  52                        PUSH EDX
0065F5F6  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
0065F5FA  0F BF 10                  MOVSX EDX,word ptr [EAX]
0065F5FD  51                        PUSH ECX
0065F5FE  52                        PUSH EDX
0065F5FF  E8 8C D9 04 00            CALL 0x006acf90
0065F604  83 F8 08                  CMP EAX,0x8
0065F607  7C 27                     JL 0x0065f630
0065F609  8B 8F 23 02 00 00         MOV ECX,dword ptr [EDI + 0x223]
0065F60F  46                        INC ESI
0065F610  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0065F613  3B F0                     CMP ESI,EAX
0065F615  7C C5                     JL 0x0065f5dc
LAB_0065f617:
0065F617  8B 87 23 02 00 00         MOV EAX,dword ptr [EDI + 0x223]
0065F61D  53                        PUSH EBX
0065F61E  50                        PUSH EAX
0065F61F  E8 9C EB 04 00            CALL 0x006ae1c0
0065F624  5F                        POP EDI
0065F625  5E                        POP ESI
0065F626  B8 01 00 00 00            MOV EAX,0x1
0065F62B  5B                        POP EBX
0065F62C  5D                        POP EBP
0065F62D  C2 04 00                  RET 0x4
LAB_0065f630:
0065F630  5F                        POP EDI
0065F631  5E                        POP ESI
0065F632  33 C0                     XOR EAX,EAX
0065F634  5B                        POP EBX
0065F635  5D                        POP EBP
0065F636  C2 04 00                  RET 0x4
