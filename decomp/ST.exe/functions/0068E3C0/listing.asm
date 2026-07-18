FUN_0068e3c0:
0068E3C0  55                        PUSH EBP
0068E3C1  8B EC                     MOV EBP,ESP
0068E3C3  83 EC 08                  SUB ESP,0x8
0068E3C6  8B 89 A5 00 00 00         MOV ECX,dword ptr [ECX + 0xa5]
0068E3CC  53                        PUSH EBX
0068E3CD  56                        PUSH ESI
0068E3CE  57                        PUSH EDI
0068E3CF  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0068E3D2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068E3D5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0068E3D8  8D 5A FF                  LEA EBX,[EDX + -0x1]
0068E3DB  85 DB                     TEST EBX,EBX
0068E3DD  7C 56                     JL 0x0068e435
LAB_0068e3df:
0068E3DF  3B DA                     CMP EBX,EDX
0068E3E1  73 0D                     JNC 0x0068e3f0
0068E3E3  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068E3E6  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
0068E3E9  0F AF C3                  IMUL EAX,EBX
0068E3EC  03 C6                     ADD EAX,ESI
0068E3EE  EB 02                     JMP 0x0068e3f2
LAB_0068e3f0:
0068E3F0  33 C0                     XOR EAX,EAX
LAB_0068e3f2:
0068E3F2  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0068E3F5  85 FF                     TEST EDI,EDI
0068E3F7  74 39                     JZ 0x0068e432
0068E3F9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068E3FC  8D 4F 3B                  LEA ECX,[EDI + 0x3b]
LAB_0068e3ff:
0068E3FF  8A 01                     MOV AL,byte ptr [ECX]
0068E401  8A D0                     MOV DL,AL
0068E403  3A 06                     CMP AL,byte ptr [ESI]
0068E405  75 1C                     JNZ 0x0068e423
0068E407  84 D2                     TEST DL,DL
0068E409  74 14                     JZ 0x0068e41f
0068E40B  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
0068E40E  8A D0                     MOV DL,AL
0068E410  3A 46 01                  CMP AL,byte ptr [ESI + 0x1]
0068E413  75 0E                     JNZ 0x0068e423
0068E415  83 C1 02                  ADD ECX,0x2
0068E418  83 C6 02                  ADD ESI,0x2
0068E41B  84 D2                     TEST DL,DL
0068E41D  75 E0                     JNZ 0x0068e3ff
LAB_0068e41f:
0068E41F  33 C9                     XOR ECX,ECX
0068E421  EB 05                     JMP 0x0068e428
LAB_0068e423:
0068E423  1B C9                     SBB ECX,ECX
0068E425  83 D9 FF                  SBB ECX,-0x1
LAB_0068e428:
0068E428  85 C9                     TEST ECX,ECX
0068E42A  74 14                     JZ 0x0068e440
0068E42C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068E42F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0068e432:
0068E432  4B                        DEC EBX
0068E433  79 AA                     JNS 0x0068e3df
LAB_0068e435:
0068E435  5F                        POP EDI
0068E436  5E                        POP ESI
0068E437  33 C0                     XOR EAX,EAX
0068E439  5B                        POP EBX
0068E43A  8B E5                     MOV ESP,EBP
0068E43C  5D                        POP EBP
0068E43D  C2 04 00                  RET 0x4
LAB_0068e440:
0068E440  8B C7                     MOV EAX,EDI
0068E442  5F                        POP EDI
0068E443  5E                        POP ESI
0068E444  5B                        POP EBX
0068E445  8B E5                     MOV ESP,EBP
0068E447  5D                        POP EBP
0068E448  C2 04 00                  RET 0x4
