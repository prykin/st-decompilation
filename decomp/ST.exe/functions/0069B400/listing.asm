CGenerate::sub_0069B400:
0069B400  55                        PUSH EBP
0069B401  8B EC                     MOV EBP,ESP
0069B403  83 EC 14                  SUB ESP,0x14
0069B406  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069B409  53                        PUSH EBX
0069B40A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069B40D  56                        PUSH ESI
0069B40E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0069B411  57                        PUSH EDI
0069B412  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0069B415  2B D3                     SUB EDX,EBX
0069B417  33 C0                     XOR EAX,EAX
0069B419  42                        INC EDX
0069B41A  2B FE                     SUB EDI,ESI
0069B41C  8B B1 47 58 00 00         MOV ESI,dword ptr [ECX + 0x5847]
0069B422  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069B425  47                        INC EDI
0069B426  33 D2                     XOR EDX,EDX
0069B428  4E                        DEC ESI
0069B429  85 F6                     TEST ESI,ESI
0069B42B  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0069B42E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0069B431  0F 8E AD 00 00 00         JLE 0x0069b4e4
0069B437  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0069B43A  83 C6 18                  ADD ESI,0x18
0069B43D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_0069b440:
0069B440  8B B1 2F 58 00 00         MOV ESI,dword ptr [ECX + 0x582f]
0069B446  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
0069B44D  0F AF F2                  IMUL ESI,EDX
0069B450  85 FF                     TEST EDI,EDI
0069B452  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
0069B459  7E 62                     JLE 0x0069b4bd
0069B45B  8B 91 33 58 00 00         MOV EDX,dword ptr [ECX + 0x5833]
0069B461  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
0069B464  8D 1C 12                  LEA EBX,[EDX + EDX*0x1]
0069B467  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
0069B46B  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0069B46E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069B471  03 D6                     ADD EDX,ESI
0069B473  03 D3                     ADD EDX,EBX
0069B475  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0069B478  D1 E2                     SHL EDX,0x1
LAB_0069b47a:
0069B47A  85 DB                     TEST EBX,EBX
0069B47C  7E 2E                     JLE 0x0069b4ac
0069B47E  8B B9 4F 58 00 00         MOV EDI,dword ptr [ECX + 0x584f]
0069B484  03 FA                     ADD EDI,EDX
LAB_0069b486:
0069B486  66 8B 37                  MOV SI,word ptr [EDI]
0069B489  66 85 F6                  TEST SI,SI
0069B48C  7E 12                     JLE 0x0069b4a0
0069B48E  0F BF F6                  MOVSX ESI,SI
0069B491  03 C6                     ADD EAX,ESI
0069B493  83 FE 04                  CMP ESI,0x4
0069B496  75 05                     JNZ 0x0069b49d
0069B498  FF 45 14                  INC dword ptr [EBP + 0x14]
0069B49B  EB 03                     JMP 0x0069b4a0
LAB_0069b49d:
0069B49D  FF 45 10                  INC dword ptr [EBP + 0x10]
LAB_0069b4a0:
0069B4A0  83 C7 02                  ADD EDI,0x2
0069B4A3  4B                        DEC EBX
0069B4A4  75 E0                     JNZ 0x0069b486
0069B4A6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0069B4A9  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0069b4ac:
0069B4AC  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0069B4AF  03 D6                     ADD EDX,ESI
0069B4B1  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0069B4B4  4E                        DEC ESI
0069B4B5  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
0069B4B8  75 C0                     JNZ 0x0069b47a
0069B4BA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0069b4bd:
0069B4BD  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0069B4C0  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0069B4C3  42                        INC EDX
0069B4C4  89 5E EC                  MOV dword ptr [ESI + -0x14],EBX
0069B4C7  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0069B4CA  89 1E                     MOV dword ptr [ESI],EBX
0069B4CC  83 C6 04                  ADD ESI,0x4
0069B4CF  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0069B4D2  8B B1 47 58 00 00         MOV ESI,dword ptr [ECX + 0x5847]
0069B4D8  4E                        DEC ESI
0069B4D9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0069B4DC  3B D6                     CMP EDX,ESI
0069B4DE  0F 8C 5C FF FF FF         JL 0x0069b440
LAB_0069b4e4:
0069B4E4  5F                        POP EDI
0069B4E5  5E                        POP ESI
0069B4E6  5B                        POP EBX
0069B4E7  8B E5                     MOV ESP,EBP
0069B4E9  5D                        POP EBP
0069B4EA  C2 14 00                  RET 0x14
