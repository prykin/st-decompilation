FUN_006785a0:
006785A0  55                        PUSH EBP
006785A1  8B EC                     MOV EBP,ESP
006785A3  83 EC 68                  SUB ESP,0x68
006785A6  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
006785A9  53                        PUSH EBX
006785AA  56                        PUSH ESI
006785AB  57                        PUSH EDI
006785AC  84 C0                     TEST AL,AL
006785AE  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
006785B5  7C 07                     JL 0x006785be
006785B7  3C 08                     CMP AL,0x8
006785B9  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
006785BC  7C 04                     JL 0x006785c2
LAB_006785be:
006785BE  C6 45 FF FF               MOV byte ptr [EBP + -0x1],0xff
LAB_006785c2:
006785C2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006785C7  8D 55 9C                  LEA EDX,[EBP + -0x64]
006785CA  8D 4D 98                  LEA ECX,[EBP + -0x68]
006785CD  6A 00                     PUSH 0x0
006785CF  52                        PUSH EDX
006785D0  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
006785D3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006785D9  E8 12 52 0B 00            CALL 0x0072d7f0
006785DE  8B F0                     MOV ESI,EAX
006785E0  83 C4 08                  ADD ESP,0x8
006785E3  85 F6                     TEST ESI,ESI
006785E5  0F 85 AB 01 00 00         JNZ 0x00678796
006785EB  A1 64 A1 7F 00            MOV EAX,[0x007fa164]
006785F0  85 C0                     TEST EAX,EAX
006785F2  75 17                     JNZ 0x0067860b
006785F4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006785F9  68 59 04 00 00            PUSH 0x459
006785FE  68 58 2D 7D 00            PUSH 0x7d2d58
00678603  50                        PUSH EAX
00678604  6A CC                     PUSH -0x34
00678606  E8 35 D8 02 00            CALL 0x006a5e40
LAB_0067860b:
0067860B  8B 0D 64 A1 7F 00         MOV ECX,dword ptr [0x007fa164]
00678611  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00678614  4A                        DEC EDX
00678615  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00678618  0F 88 66 01 00 00         JS 0x00678784
0067861E  EB 06                     JMP 0x00678626
LAB_00678620:
00678620  8B 0D 64 A1 7F 00         MOV ECX,dword ptr [0x007fa164]
LAB_00678626:
00678626  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00678629  73 0D                     JNC 0x00678638
0067862B  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067862E  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
00678631  0F AF C2                  IMUL EAX,EDX
00678634  03 C6                     ADD EAX,ESI
00678636  EB 02                     JMP 0x0067863a
LAB_00678638:
00678638  33 C0                     XOR EAX,EAX
LAB_0067863a:
0067863A  8B 38                     MOV EDI,dword ptr [EAX]
0067863C  85 FF                     TEST EDI,EDI
0067863E  0F 84 1D 01 00 00         JZ 0x00678761
00678644  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00678647  BB 01 00 00 00            MOV EBX,0x1
0067864C  85 C0                     TEST EAX,EAX
0067864E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00678651  74 48                     JZ 0x0067869b
00678653  80 38 00                  CMP byte ptr [EAX],0x0
00678656  74 43                     JZ 0x0067869b
00678658  8B 17                     MOV EDX,dword ptr [EDI]
0067865A  8D 45 DC                  LEA EAX,[EBP + -0x24]
0067865D  50                        PUSH EAX
0067865E  8B CF                     MOV ECX,EDI
00678660  FF 52 74                  CALL dword ptr [EDX + 0x74]
00678663  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00678666  8D 75 DC                  LEA ESI,[EBP + -0x24]
LAB_00678669:
00678669  8A 10                     MOV DL,byte ptr [EAX]
0067866B  8A CA                     MOV CL,DL
0067866D  3A 16                     CMP DL,byte ptr [ESI]
0067866F  75 1C                     JNZ 0x0067868d
00678671  84 C9                     TEST CL,CL
00678673  74 14                     JZ 0x00678689
00678675  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00678678  8A CA                     MOV CL,DL
0067867A  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
0067867D  75 0E                     JNZ 0x0067868d
0067867F  83 C0 02                  ADD EAX,0x2
00678682  83 C6 02                  ADD ESI,0x2
00678685  84 C9                     TEST CL,CL
00678687  75 E0                     JNZ 0x00678669
LAB_00678689:
00678689  33 C0                     XOR EAX,EAX
0067868B  EB 05                     JMP 0x00678692
LAB_0067868d:
0067868D  1B C0                     SBB EAX,EAX
0067868F  83 D8 FF                  SBB EAX,-0x1
LAB_00678692:
00678692  85 C0                     TEST EAX,EAX
00678694  74 05                     JZ 0x0067869b
00678696  33 DB                     XOR EBX,EBX
00678698  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_0067869b:
0067869B  85 DB                     TEST EBX,EBX
0067869D  0F 84 BB 00 00 00         JZ 0x0067875e
006786A3  80 7D FF FF               CMP byte ptr [EBP + -0x1],0xff
006786A7  74 13                     JZ 0x006786bc
006786A9  8B 07                     MOV EAX,dword ptr [EDI]
006786AB  8B CF                     MOV ECX,EDI
006786AD  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
006786B0  0F BE 4D FF               MOVSX ECX,byte ptr [EBP + -0x1]
006786B4  3B C8                     CMP ECX,EAX
006786B6  0F 85 A2 00 00 00         JNZ 0x0067875e
LAB_006786bc:
006786BC  66 8B 75 1C               MOV SI,word ptr [EBP + 0x1c]
006786C0  66 85 F6                  TEST SI,SI
006786C3  7E 7A                     JLE 0x0067873f
006786C5  66 83 7D 20 00            CMP word ptr [EBP + 0x20],0x0
006786CA  7E 73                     JLE 0x0067873f
006786CC  66 83 7D 24 00            CMP word ptr [EBP + 0x24],0x0
006786D1  7E 6C                     JLE 0x0067873f
006786D3  8D 55 F8                  LEA EDX,[EBP + -0x8]
006786D6  8D 45 FA                  LEA EAX,[EBP + -0x6]
006786D9  52                        PUSH EDX
006786DA  8D 4D FC                  LEA ECX,[EBP + -0x4]
006786DD  50                        PUSH EAX
006786DE  51                        PUSH ECX
006786DF  8B CF                     MOV ECX,EDI
006786E1  E8 DF 91 D8 FF            CALL 0x004018c5
006786E6  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
006786EA  66 8B 5D 10               MOV BX,word ptr [EBP + 0x10]
006786EE  66 3B C3                  CMP AX,BX
006786F1  7C 45                     JL 0x00678738
006786F3  66 8B 4D FA               MOV CX,word ptr [EBP + -0x6]
006786F7  66 3B 4D 14               CMP CX,word ptr [EBP + 0x14]
006786FB  7C 3B                     JL 0x00678738
006786FD  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
00678701  66 3B 55 18               CMP DX,word ptr [EBP + 0x18]
00678705  7C 31                     JL 0x00678738
00678707  0F BF DB                  MOVSX EBX,BX
0067870A  0F BF F6                  MOVSX ESI,SI
0067870D  0F BF C0                  MOVSX EAX,AX
00678710  03 DE                     ADD EBX,ESI
00678712  3B C3                     CMP EAX,EBX
00678714  7D 22                     JGE 0x00678738
00678716  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
0067871A  0F BF 75 20               MOVSX ESI,word ptr [EBP + 0x20]
0067871E  0F BF C9                  MOVSX ECX,CX
00678721  03 C6                     ADD EAX,ESI
00678723  3B C8                     CMP ECX,EAX
00678725  7D 11                     JGE 0x00678738
00678727  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
0067872B  0F BF 4D 24               MOVSX ECX,word ptr [EBP + 0x24]
0067872F  0F BF D2                  MOVSX EDX,DX
00678732  03 C1                     ADD EAX,ECX
00678734  3B D0                     CMP EDX,EAX
00678736  7C 04                     JL 0x0067873c
LAB_00678738:
00678738  33 DB                     XOR EBX,EBX
0067873A  EB 03                     JMP 0x0067873f
LAB_0067873c:
0067873C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0067873f:
0067873F  85 DB                     TEST EBX,EBX
00678741  74 1B                     JZ 0x0067875e
00678743  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00678746  85 C0                     TEST EAX,EAX
00678748  74 14                     JZ 0x0067875e
0067874A  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
0067874D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00678750  51                        PUSH ECX
00678751  57                        PUSH EDI
00678752  52                        PUSH EDX
00678753  6A 00                     PUSH 0x0
00678755  FF D0                     CALL EAX
00678757  83 C4 10                  ADD ESP,0x10
0067875A  85 C0                     TEST EAX,EAX
0067875C  75 1F                     JNZ 0x0067877d
LAB_0067875e:
0067875E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_00678761:
00678761  4A                        DEC EDX
00678762  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00678765  0F 89 B5 FE FF FF         JNS 0x00678620
0067876B  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0067876E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00678773  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00678776  5F                        POP EDI
00678777  5E                        POP ESI
00678778  5B                        POP EBX
00678779  8B E5                     MOV ESP,EBP
0067877B  5D                        POP EBP
0067877C  C3                        RET
LAB_0067877d:
0067877D  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
LAB_00678784:
00678784  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00678787  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067878C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0067878F  5F                        POP EDI
00678790  5E                        POP ESI
00678791  5B                        POP EBX
00678792  8B E5                     MOV ESP,EBP
00678794  5D                        POP EBP
00678795  C3                        RET
LAB_00678796:
00678796  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00678799  68 40 2E 7D 00            PUSH 0x7d2e40
0067879E  68 CC 4C 7A 00            PUSH 0x7a4ccc
006787A3  56                        PUSH ESI
006787A4  6A 00                     PUSH 0x0
006787A6  68 70 04 00 00            PUSH 0x470
006787AB  68 58 2D 7D 00            PUSH 0x7d2d58
006787B0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006787B6  E8 15 4D 03 00            CALL 0x006ad4d0
006787BB  83 C4 18                  ADD ESP,0x18
006787BE  85 C0                     TEST EAX,EAX
006787C0  74 01                     JZ 0x006787c3
006787C2  CC                        INT3
LAB_006787c3:
006787C3  68 71 04 00 00            PUSH 0x471
006787C8  68 58 2D 7D 00            PUSH 0x7d2d58
006787CD  6A 00                     PUSH 0x0
006787CF  56                        PUSH ESI
006787D0  E8 6B D6 02 00            CALL 0x006a5e40
006787D5  8B C6                     MOV EAX,ESI
006787D7  5F                        POP EDI
006787D8  5E                        POP ESI
006787D9  5B                        POP EBX
006787DA  8B E5                     MOV ESP,EBP
006787DC  5D                        POP EBP
006787DD  C3                        RET
