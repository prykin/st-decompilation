STVolcanoC::GetMessage:
006461E0  55                        PUSH EBP
006461E1  8B EC                     MOV EBP,ESP
006461E3  83 EC 50                  SUB ESP,0x50
006461E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006461EB  53                        PUSH EBX
006461EC  56                        PUSH ESI
006461ED  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006461F0  57                        PUSH EDI
006461F1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006461F4  8D 4D B0                  LEA ECX,[EBP + -0x50]
006461F7  6A 00                     PUSH 0x0
006461F9  52                        PUSH EDX
006461FA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006461FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00646203  E8 E8 75 0E 00            CALL 0x0072d7f0
00646208  8B F0                     MOV ESI,EAX
0064620A  83 C4 08                  ADD ESP,0x8
0064620D  85 F6                     TEST ESI,ESI
0064620F  0F 85 BE 07 00 00         JNZ 0x006469d3
00646215  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00646218  BF 03 00 00 00            MOV EDI,0x3
0064621D  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00646220  3B C7                     CMP EAX,EDI
00646222  0F 87 62 07 00 00         JA 0x0064698a
00646228  0F 84 40 07 00 00         JZ 0x0064696e
0064622E  2B C6                     SUB EAX,ESI
00646230  0F 84 D4 00 00 00         JZ 0x0064630a
00646236  83 E8 02                  SUB EAX,0x2
00646239  0F 85 80 07 00 00         JNZ 0x006469bf
0064623F  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
00646242  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
00646246  0F 84 8C 00 00 00         JZ 0x006462d8
0064624C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0064624F  B9 0E 00 00 00            MOV ECX,0xe
00646254  8D 7B 1C                  LEA EDI,[EBX + 0x1c]
00646257  F3 A5                     MOVSD.REP ES:EDI,ESI
00646259  A1 54 87 80 00            MOV EAX,[0x00808754]
0064625E  8B CB                     MOV ECX,EBX
00646260  89 83 B1 00 00 00         MOV dword ptr [EBX + 0xb1],EAX
00646266  E8 EC C9 DB FF            CALL 0x00402c57
0064626B  85 C0                     TEST EAX,EAX
0064626D  75 1B                     JNZ 0x0064628a
0064626F  8B CB                     MOV ECX,EBX
00646271  E8 C0 E5 DB FF            CALL 0x00404836
00646276  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00646279  33 C0                     XOR EAX,EAX
0064627B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00646281  5F                        POP EDI
00646282  5E                        POP ESI
00646283  5B                        POP EBX
00646284  8B E5                     MOV ESP,EBP
00646286  5D                        POP EBP
00646287  C2 04 00                  RET 0x4
LAB_0064628a:
0064628A  8B 8B B1 00 00 00         MOV ECX,dword ptr [EBX + 0xb1]
00646290  33 D2                     XOR EDX,EDX
00646292  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00646298  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0064629E  B9 11 27 00 00            MOV ECX,0x2711
006462A3  89 83 B1 00 00 00         MOV dword ptr [EBX + 0xb1],EAX
006462A9  C7 83 A9 00 00 00 06 00 00 00  MOV dword ptr [EBX + 0xa9],0x6
006462B3  C1 E8 10                  SHR EAX,0x10
006462B6  F7 F1                     DIV ECX
006462B8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006462BB  81 C2 20 4E 00 00         ADD EDX,0x4e20
006462C1  33 C0                     XOR EAX,EAX
006462C3  89 93 A4 00 00 00         MOV dword ptr [EBX + 0xa4],EDX
006462C9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006462CF  5F                        POP EDI
006462D0  5E                        POP ESI
006462D1  5B                        POP EBX
006462D2  8B E5                     MOV ESP,EBP
006462D4  5D                        POP EBP
006462D5  C2 04 00                  RET 0x4
LAB_006462d8:
006462D8  56                        PUSH ESI
006462D9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006462DC  8B CE                     MOV ECX,ESI
006462DE  E8 8C C0 DB FF            CALL 0x0040236f
006462E3  8B 96 AD 00 00 00         MOV EDX,dword ptr [ESI + 0xad]
006462E9  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006462EC  89 96 B1 00 00 00         MOV dword ptr [ESI + 0xb1],EDX
006462F2  C6 86 A8 00 00 00 00      MOV byte ptr [ESI + 0xa8],0x0
006462F9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006462FF  33 C0                     XOR EAX,EAX
00646301  5F                        POP EDI
00646302  5E                        POP ESI
00646303  5B                        POP EBX
00646304  8B E5                     MOV ESP,EBP
00646306  5D                        POP EBP
00646307  C2 04 00                  RET 0x4
LAB_0064630a:
0064630A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0064630D  8B 86 A9 00 00 00         MOV EAX,dword ptr [ESI + 0xa9]
00646313  48                        DEC EAX
00646314  83 F8 05                  CMP EAX,0x5
00646317  0F 87 A2 06 00 00         JA 0x006469bf
switchD_0064631d::switchD:
0064631D  FF 24 85 20 6A 64 00      JMP dword ptr [EAX*0x4 + 0x646a20]
switchD_0064631d::caseD_6:
00646324  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00646327  C7 86 A9 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xa9],0x1
00646331  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00646337  33 C0                     XOR EAX,EAX
00646339  5F                        POP EDI
0064633A  5E                        POP ESI
0064633B  5B                        POP EBX
0064633C  8B E5                     MOV ESP,EBP
0064633E  5D                        POP EBP
0064633F  C2 04 00                  RET 0x4
switchD_0064631d::caseD_1:
00646342  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00646347  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
0064634D  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00646353  3B C8                     CMP ECX,EAX
00646355  0F 83 64 06 00 00         JNC 0x006469bf
0064635B  8B CE                     MOV ECX,ESI
0064635D  89 86 9C 00 00 00         MOV dword ptr [ESI + 0x9c],EAX
00646363  E8 F8 E7 DB FF            CALL 0x00404b60
00646368  8B 4E 6D                  MOV ECX,dword ptr [ESI + 0x6d]
0064636B  8B 56 69                  MOV EDX,dword ptr [ESI + 0x69]
0064636E  8B 46 65                  MOV EAX,dword ptr [ESI + 0x65]
00646371  51                        PUSH ECX
00646372  52                        PUSH EDX
00646373  50                        PUSH EAX
00646374  8B CE                     MOV ECX,ESI
00646376  E8 FC C6 DB FF            CALL 0x00402a77
0064637B  85 C0                     TEST EAX,EAX
0064637D  74 07                     JZ 0x00646386
0064637F  C6 86 A8 00 00 00 01      MOV byte ptr [ESI + 0xa8],0x1
LAB_00646386:
00646386  8A 86 A8 00 00 00         MOV AL,byte ptr [ESI + 0xa8]
0064638C  C7 46 71 29 00 00 00      MOV dword ptr [ESI + 0x71],0x29
00646393  84 C0                     TEST AL,AL
00646395  C7 46 75 2E 00 00 00      MOV dword ptr [ESI + 0x75],0x2e
0064639C  C7 86 8A 00 00 00 0A 00 00 00  MOV dword ptr [ESI + 0x8a],0xa
006463A6  C7 86 8E 00 00 00 0F 00 00 00  MOV dword ptr [ESI + 0x8e],0xf
006463B0  74 09                     JZ 0x006463bb
006463B2  6A 00                     PUSH 0x0
006463B4  8B CE                     MOV ECX,ESI
006463B6  E8 B1 B3 DB FF            CALL 0x0040176c
LAB_006463bb:
006463BB  68 B5 04 00 00            PUSH 0x4b5
006463C0  8B CE                     MOV ECX,ESI
006463C2  C7 86 A9 00 00 00 04 00 00 00  MOV dword ptr [ESI + 0xa9],0x4
006463CC  E8 2B D3 DB FF            CALL 0x004036fc
006463D1  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006463D4  33 C0                     XOR EAX,EAX
006463D6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006463DC  5F                        POP EDI
006463DD  5E                        POP ESI
006463DE  5B                        POP EBX
006463DF  8B E5                     MOV ESP,EBP
006463E1  5D                        POP EBP
006463E2  C2 04 00                  RET 0x4
switchD_0064631d::caseD_4:
006463E5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006463EB  33 D2                     XOR EDX,EDX
006463ED  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006463F3  B9 05 00 00 00            MOV ECX,0x5
006463F8  F7 F1                     DIV ECX
006463FA  85 D2                     TEST EDX,EDX
006463FC  0F 85 BD 05 00 00         JNZ 0x006469bf
00646402  8B 56 71                  MOV EDX,dword ptr [ESI + 0x71]
00646405  8B 4E 75                  MOV ECX,dword ptr [ESI + 0x75]
00646408  42                        INC EDX
00646409  BB 01 00 00 00            MOV EBX,0x1
0064640E  8B C2                     MOV EAX,EDX
00646410  89 56 71                  MOV dword ptr [ESI + 0x71],EDX
00646413  3B C1                     CMP EAX,ECX
00646415  7C 65                     JL 0x0064647c
00646417  8B 96 B1 00 00 00         MOV EDX,dword ptr [ESI + 0xb1]
0064641D  B9 F5 01 00 00            MOV ECX,0x1f5
00646422  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00646428  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0064642E  33 D2                     XOR EDX,EDX
00646430  89 86 B1 00 00 00         MOV dword ptr [ESI + 0xb1],EAX
00646436  C1 E8 10                  SHR EAX,0x10
00646439  F7 F1                     DIV ECX
0064643B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00646440  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00646446  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
00646449  0B C3                     OR EAX,EBX
0064644B  89 BE A9 00 00 00         MOV dword ptr [ESI + 0xa9],EDI
00646451  89 46 58                  MOV dword ptr [ESI + 0x58],EAX
00646454  33 FF                     XOR EDI,EDI
00646456  B8 0A 00 00 00            MOV EAX,0xa
0064645B  89 7E 71                  MOV dword ptr [ESI + 0x71],EDI
0064645E  89 46 75                  MOV dword ptr [ESI + 0x75],EAX
00646461  89 BE 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EDI
00646467  89 86 8E 00 00 00         MOV dword ptr [ESI + 0x8e],EAX
0064646D  8D 94 0A F4 01 00 00      LEA EDX,[EDX + ECX*0x1 + 0x1f4]
00646474  89 96 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EDX
0064647A  EB 02                     JMP 0x0064647e
LAB_0064647c:
0064647C  33 FF                     XOR EDI,EDI
LAB_0064647e:
0064647E  8B 96 8A 00 00 00         MOV EDX,dword ptr [ESI + 0x8a]
00646484  8B 8E 8E 00 00 00         MOV ECX,dword ptr [ESI + 0x8e]
0064648A  42                        INC EDX
0064648B  8B C2                     MOV EAX,EDX
0064648D  89 96 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EDX
00646493  3B C1                     CMP EAX,ECX
00646495  7C 06                     JL 0x0064649d
00646497  89 BE 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EDI
LAB_0064649d:
0064649D  8A 86 A8 00 00 00         MOV AL,byte ptr [ESI + 0xa8]
006464A3  84 C0                     TEST AL,AL
006464A5  74 1B                     JZ 0x006464c2
006464A7  8B CE                     MOV ECX,ESI
006464A9  E8 20 C9 DB FF            CALL 0x00402dce
006464AE  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006464B1  33 C0                     XOR EAX,EAX
006464B3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006464B9  5F                        POP EDI
006464BA  5E                        POP ESI
006464BB  5B                        POP EBX
006464BC  8B E5                     MOV ESP,EBP
006464BE  5D                        POP EBP
006464BF  C2 04 00                  RET 0x4
LAB_006464c2:
006464C2  8B 46 6D                  MOV EAX,dword ptr [ESI + 0x6d]
006464C5  8B 4E 69                  MOV ECX,dword ptr [ESI + 0x69]
006464C8  8B 56 65                  MOV EDX,dword ptr [ESI + 0x65]
006464CB  50                        PUSH EAX
006464CC  51                        PUSH ECX
006464CD  52                        PUSH EDX
006464CE  8B CE                     MOV ECX,ESI
006464D0  E8 A2 C5 DB FF            CALL 0x00402a77
006464D5  85 C0                     TEST EAX,EAX
006464D7  0F 84 E2 04 00 00         JZ 0x006469bf
006464DD  57                        PUSH EDI
006464DE  8B CE                     MOV ECX,ESI
006464E0  88 9E A8 00 00 00         MOV byte ptr [ESI + 0xa8],BL
006464E6  E8 81 B2 DB FF            CALL 0x0040176c
006464EB  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006464EE  33 C0                     XOR EAX,EAX
006464F0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006464F6  5F                        POP EDI
006464F7  5E                        POP ESI
006464F8  5B                        POP EBX
006464F9  8B E5                     MOV ESP,EBP
006464FB  5D                        POP EBP
006464FC  C2 04 00                  RET 0x4
switchD_0064631d::caseD_2:
006464FF  8B 4E 58                  MOV ECX,dword ptr [ESI + 0x58]
00646502  F6 C1 01                  TEST CL,0x1
00646505  0F 84 B0 01 00 00         JZ 0x006466bb
0064650B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00646510  33 D2                     XOR EDX,EDX
00646512  8B DF                     MOV EBX,EDI
00646514  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0064651A  F7 F3                     DIV EBX
0064651C  85 D2                     TEST EDX,EDX
0064651E  0F 85 97 01 00 00         JNZ 0x006466bb
00646524  8B 5E 71                  MOV EBX,dword ptr [ESI + 0x71]
00646527  8B 56 75                  MOV EDX,dword ptr [ESI + 0x75]
0064652A  43                        INC EBX
0064652B  8B C3                     MOV EAX,EBX
0064652D  89 5E 71                  MOV dword ptr [ESI + 0x71],EBX
00646530  3B C2                     CMP EAX,EDX
00646532  0F 8C 83 01 00 00         JL 0x006466bb
00646538  33 FF                     XOR EDI,EDI
0064653A  BB 01 00 00 00            MOV EBX,0x1
0064653F  89 7E 71                  MOV dword ptr [ESI + 0x71],EDI
00646542  C7 46 75 0A 00 00 00      MOV dword ptr [ESI + 0x75],0xa
00646549  89 9E A9 00 00 00         MOV dword ptr [ESI + 0xa9],EBX
0064654F  8B 8E B1 00 00 00         MOV ECX,dword ptr [ESI + 0xb1]
00646555  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0064655B  33 D2                     XOR EDX,EDX
0064655D  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00646563  B9 11 27 00 00            MOV ECX,0x2711
00646568  89 86 B1 00 00 00         MOV dword ptr [ESI + 0xb1],EAX
0064656E  C1 E8 10                  SHR EAX,0x10
00646571  F7 F1                     DIV ECX
00646573  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00646578  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0064657E  8A 46 5C                  MOV AL,byte ptr [ESI + 0x5c]
00646581  84 C0                     TEST AL,AL
00646583  8D 94 0A 20 4E 00 00      LEA EDX,[EDX + ECX*0x1 + 0x4e20]
0064658A  89 96 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EDX
00646590  0F 85 0A 01 00 00         JNZ 0x006466a0
00646596  8B 46 61                  MOV EAX,dword ptr [ESI + 0x61]
00646599  3B C7                     CMP EAX,EDI
0064659B  74 7C                     JZ 0x00646619
0064659D  DB 46 6D                  FILD dword ptr [ESI + 0x6d]
006465A0  68 38 34 1F 41            PUSH 0x411f3438
006465A5  57                        PUSH EDI
006465A6  51                        PUSH ECX
006465A7  8B 40 21                  MOV EAX,dword ptr [EAX + 0x21]
006465AA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006465B0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006465B6  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006465BC  D9 1C 24                  FSTP float ptr [ESP]
006465BF  DB 46 69                  FILD dword ptr [ESI + 0x69]
006465C2  51                        PUSH ECX
006465C3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006465C9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006465CF  D9 1C 24                  FSTP float ptr [ESP]
006465D2  DB 46 65                  FILD dword ptr [ESI + 0x65]
006465D5  51                        PUSH ECX
006465D6  8B 88 A0 00 00 00         MOV ECX,dword ptr [EAX + 0xa0]
006465DC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006465E2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006465E8  D9 1C 24                  FSTP float ptr [ESP]
006465EB  6A 2F                     PUSH 0x2f
006465ED  6A 5A                     PUSH 0x5a
006465EF  51                        PUSH ECX
006465F0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006465F6  E8 05 2A 0A 00            CALL 0x006e9000
006465FB  8B CE                     MOV ECX,ESI
006465FD  88 5E 5C                  MOV byte ptr [ESI + 0x5c],BL
00646600  E8 AE B5 DB FF            CALL 0x00401bb3
00646605  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00646608  33 C0                     XOR EAX,EAX
0064660A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00646610  5F                        POP EDI
00646611  5E                        POP ESI
00646612  5B                        POP EBX
00646613  8B E5                     MOV ESP,EBP
00646615  5D                        POP EBP
00646616  C2 04 00                  RET 0x4
LAB_00646619:
00646619  8B 15 64 67 80 00         MOV EDX,dword ptr [0x00806764]
0064661F  57                        PUSH EDI
00646620  57                        PUSH EDI
00646621  53                        PUSH EBX
00646622  57                        PUSH EDI
00646623  6A FF                     PUSH -0x1
00646625  68 B0 26 7D 00            PUSH 0x7d26b0
0064662A  6A 1D                     PUSH 0x1d
0064662C  52                        PUSH EDX
0064662D  E8 BE 34 0C 00            CALL 0x00709af0
00646632  83 C4 20                  ADD ESP,0x20
00646635  3B C7                     CMP EAX,EDI
00646637  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
0064663A  74 64                     JZ 0x006466a0
0064663C  DB 46 6D                  FILD dword ptr [ESI + 0x6d]
0064663F  68 38 34 1F 41            PUSH 0x411f3438
00646644  57                        PUSH EDI
00646645  51                        PUSH ECX
00646646  8B 40 21                  MOV EAX,dword ptr [EAX + 0x21]
00646649  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0064664F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00646655  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0064665B  D9 1C 24                  FSTP float ptr [ESP]
0064665E  DB 46 69                  FILD dword ptr [ESI + 0x69]
00646661  51                        PUSH ECX
00646662  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00646668  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0064666E  D9 1C 24                  FSTP float ptr [ESP]
00646671  DB 46 65                  FILD dword ptr [ESI + 0x65]
00646674  51                        PUSH ECX
00646675  8B 88 A0 00 00 00         MOV ECX,dword ptr [EAX + 0xa0]
0064667B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00646681  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00646687  D9 1C 24                  FSTP float ptr [ESP]
0064668A  6A 2F                     PUSH 0x2f
0064668C  6A 5A                     PUSH 0x5a
0064668E  51                        PUSH ECX
0064668F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00646695  E8 66 29 0A 00            CALL 0x006e9000
0064669A  88 5E 5C                  MOV byte ptr [ESI + 0x5c],BL
0064669D  89 7E 61                  MOV dword ptr [ESI + 0x61],EDI
LAB_006466a0:
006466A0  8B CE                     MOV ECX,ESI
006466A2  E8 0C B5 DB FF            CALL 0x00401bb3
006466A7  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006466AA  33 C0                     XOR EAX,EAX
006466AC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006466B2  5F                        POP EDI
006466B3  5E                        POP ESI
006466B4  5B                        POP EBX
006466B5  8B E5                     MOV ESP,EBP
006466B7  5D                        POP EBP
006466B8  C2 04 00                  RET 0x4
LAB_006466bb:
006466BB  F6 C1 02                  TEST CL,0x2
006466BE  74 72                     JZ 0x00646732
006466C0  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006466C6  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
006466CC  33 D2                     XOR EDX,EDX
006466CE  F7 F7                     DIV EDI
006466D0  85 D2                     TEST EDX,EDX
006466D2  75 5E                     JNZ 0x00646732
006466D4  8B 56 7E                  MOV EDX,dword ptr [ESI + 0x7e]
006466D7  8B 8E 82 00 00 00         MOV ECX,dword ptr [ESI + 0x82]
006466DD  42                        INC EDX
006466DE  8B C2                     MOV EAX,EDX
006466E0  89 56 7E                  MOV dword ptr [ESI + 0x7e],EDX
006466E3  3B C1                     CMP EAX,ECX
006466E5  7C 16                     JL 0x006466fd
006466E7  8B 46 7A                  MOV EAX,dword ptr [ESI + 0x7a]
006466EA  C7 46 7E 00 00 00 00      MOV dword ptr [ESI + 0x7e],0x0
006466F1  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006466F7  50                        PUSH EAX
006466F8  E8 63 44 0A 00            CALL 0x006eab60
LAB_006466fd:
006466FD  8B 96 8A 00 00 00         MOV EDX,dword ptr [ESI + 0x8a]
00646703  8B 8E 8E 00 00 00         MOV ECX,dword ptr [ESI + 0x8e]
00646709  42                        INC EDX
0064670A  8B C2                     MOV EAX,EDX
0064670C  89 96 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EDX
00646712  3B C1                     CMP EAX,ECX
00646714  7C 1C                     JL 0x00646732
00646716  8B 8E 86 00 00 00         MOV ECX,dword ptr [ESI + 0x86]
0064671C  C7 86 8A 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x8a],0x0
00646726  51                        PUSH ECX
00646727  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0064672D  E8 2E 44 0A 00            CALL 0x006eab60
LAB_00646732:
00646732  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00646738  B3 01                     MOV BL,0x1
0064673A  84 9A E4 00 00 00         TEST byte ptr [EDX + 0xe4],BL
00646740  75 4C                     JNZ 0x0064678e
00646742  8B 7E 71                  MOV EDI,dword ptr [ESI + 0x71]
00646745  83 FF 02                  CMP EDI,0x2
00646748  7E 44                     JLE 0x0064678e
0064674A  8B 4E 75                  MOV ECX,dword ptr [ESI + 0x75]
0064674D  B8 56 55 55 55            MOV EAX,0x55555556
00646752  D1 E1                     SHL ECX,0x1
00646754  F7 E9                     IMUL ECX
00646756  8B C2                     MOV EAX,EDX
00646758  C1 E8 1F                  SHR EAX,0x1f
0064675B  03 D0                     ADD EDX,EAX
0064675D  3B FA                     CMP EDI,EDX
0064675F  7D 2D                     JGE 0x0064678e
00646761  8B 8E B1 00 00 00         MOV ECX,dword ptr [ESI + 0xb1]
00646767  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0064676D  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00646773  89 86 B1 00 00 00         MOV dword ptr [ESI + 0xb1],EAX
00646779  25 00 00 07 00            AND EAX,0x70000
0064677E  3D 00 00 01 00            CMP EAX,0x10000
00646783  75 09                     JNZ 0x0064678e
00646785  6A 00                     PUSH 0x0
00646787  8B CE                     MOV ECX,ESI
00646789  E8 FE C1 DB FF            CALL 0x0040298c
LAB_0064678e:
0064678E  8A 86 A8 00 00 00         MOV AL,byte ptr [ESI + 0xa8]
00646794  84 C0                     TEST AL,AL
00646796  74 28                     JZ 0x006467c0
00646798  83 BE A9 00 00 00 02      CMP dword ptr [ESI + 0xa9],0x2
0064679F  0F 85 1A 02 00 00         JNZ 0x006469bf
006467A5  8B CE                     MOV ECX,ESI
006467A7  E8 22 C6 DB FF            CALL 0x00402dce
006467AC  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006467AF  33 C0                     XOR EAX,EAX
006467B1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006467B7  5F                        POP EDI
006467B8  5E                        POP ESI
006467B9  5B                        POP EBX
006467BA  8B E5                     MOV ESP,EBP
006467BC  5D                        POP EBP
006467BD  C2 04 00                  RET 0x4
LAB_006467c0:
006467C0  8B 56 6D                  MOV EDX,dword ptr [ESI + 0x6d]
006467C3  8B 46 69                  MOV EAX,dword ptr [ESI + 0x69]
006467C6  8B 4E 65                  MOV ECX,dword ptr [ESI + 0x65]
006467C9  52                        PUSH EDX
006467CA  50                        PUSH EAX
006467CB  51                        PUSH ECX
006467CC  8B CE                     MOV ECX,ESI
006467CE  E8 A4 C2 DB FF            CALL 0x00402a77
006467D3  85 C0                     TEST EAX,EAX
006467D5  0F 84 E4 01 00 00         JZ 0x006469bf
006467DB  6A 02                     PUSH 0x2
006467DD  8B CE                     MOV ECX,ESI
006467DF  88 9E A8 00 00 00         MOV byte ptr [ESI + 0xa8],BL
006467E5  E8 82 AF DB FF            CALL 0x0040176c
006467EA  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006467ED  33 C0                     XOR EAX,EAX
006467EF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006467F5  5F                        POP EDI
006467F6  5E                        POP ESI
006467F7  5B                        POP EBX
006467F8  8B E5                     MOV ESP,EBP
006467FA  5D                        POP EBP
006467FB  C2 04 00                  RET 0x4
switchD_0064631d::caseD_3:
006467FE  8A 46 58                  MOV AL,byte ptr [ESI + 0x58]
00646801  BB 01 00 00 00            MOV EBX,0x1
00646806  84 C3                     TEST BL,AL
00646808  0F 84 B6 00 00 00         JZ 0x006468c4
0064680E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00646814  8B CF                     MOV ECX,EDI
00646816  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0064681C  33 D2                     XOR EDX,EDX
0064681E  F7 F1                     DIV ECX
00646820  85 D2                     TEST EDX,EDX
00646822  0F 85 9C 00 00 00         JNZ 0x006468c4
00646828  8B 56 71                  MOV EDX,dword ptr [ESI + 0x71]
0064682B  8B 4E 75                  MOV ECX,dword ptr [ESI + 0x75]
0064682E  42                        INC EDX
0064682F  8B C2                     MOV EAX,EDX
00646831  89 56 71                  MOV dword ptr [ESI + 0x71],EDX
00646834  3B C1                     CMP EAX,ECX
00646836  7C 69                     JL 0x006468a1
00646838  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
0064683E  C7 46 71 00 00 00 00      MOV dword ptr [ESI + 0x71],0x0
00646845  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0064684A  3B 90 E4 00 00 00         CMP EDX,dword ptr [EAX + 0xe4]
00646850  73 4F                     JNC 0x006468a1
00646852  68 B6 04 00 00            PUSH 0x4b6
00646857  8B CE                     MOV ECX,ESI
00646859  C7 86 A9 00 00 00 02 00 00 00  MOV dword ptr [ESI + 0xa9],0x2
00646863  E8 94 CE DB FF            CALL 0x004036fc
00646868  8A 86 A8 00 00 00         MOV AL,byte ptr [ESI + 0xa8]
0064686E  84 C0                     TEST AL,AL
00646870  74 08                     JZ 0x0064687a
00646872  53                        PUSH EBX
00646873  8B CE                     MOV ECX,ESI
00646875  E8 F2 AE DB FF            CALL 0x0040176c
LAB_0064687a:
0064687A  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
0064687D  C7 46 71 0A 00 00 00      MOV dword ptr [ESI + 0x71],0xa
00646884  0B C7                     OR EAX,EDI
00646886  C7 46 75 29 00 00 00      MOV dword ptr [ESI + 0x75],0x29
0064688D  89 46 58                  MOV dword ptr [ESI + 0x58],EAX
00646890  C7 46 7E 00 00 00 00      MOV dword ptr [ESI + 0x7e],0x0
00646897  C7 86 82 00 00 00 1F 00 00 00  MOV dword ptr [ESI + 0x82],0x1f
LAB_006468a1:
006468A1  8B 96 8A 00 00 00         MOV EDX,dword ptr [ESI + 0x8a]
006468A7  8B 8E 8E 00 00 00         MOV ECX,dword ptr [ESI + 0x8e]
006468AD  42                        INC EDX
006468AE  8B C2                     MOV EAX,EDX
006468B0  89 96 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EDX
006468B6  3B C1                     CMP EAX,ECX
006468B8  7C 0A                     JL 0x006468c4
006468BA  C7 86 8A 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x8a],0x0
LAB_006468c4:
006468C4  8B 8E B1 00 00 00         MOV ECX,dword ptr [ESI + 0xb1]
006468CA  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
006468D0  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
006468D6  89 86 B1 00 00 00         MOV dword ptr [ESI + 0xb1],EAX
006468DC  25 00 00 0F 00            AND EAX,0xf0000
006468E1  3D 00 00 01 00            CMP EAX,0x10000
006468E6  75 08                     JNZ 0x006468f0
006468E8  53                        PUSH EBX
006468E9  8B CE                     MOV ECX,ESI
006468EB  E8 9C C0 DB FF            CALL 0x0040298c
LAB_006468f0:
006468F0  8A 86 A8 00 00 00         MOV AL,byte ptr [ESI + 0xa8]
006468F6  84 C0                     TEST AL,AL
006468F8  74 1B                     JZ 0x00646915
006468FA  8B CE                     MOV ECX,ESI
006468FC  E8 CD C4 DB FF            CALL 0x00402dce
00646901  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00646904  33 C0                     XOR EAX,EAX
00646906  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064690C  5F                        POP EDI
0064690D  5E                        POP ESI
0064690E  5B                        POP EBX
0064690F  8B E5                     MOV ESP,EBP
00646911  5D                        POP EBP
00646912  C2 04 00                  RET 0x4
LAB_00646915:
00646915  8B 56 6D                  MOV EDX,dword ptr [ESI + 0x6d]
00646918  8B 46 69                  MOV EAX,dword ptr [ESI + 0x69]
0064691B  8B 4E 65                  MOV ECX,dword ptr [ESI + 0x65]
0064691E  52                        PUSH EDX
0064691F  50                        PUSH EAX
00646920  51                        PUSH ECX
00646921  8B CE                     MOV ECX,ESI
00646923  E8 4F C1 DB FF            CALL 0x00402a77
00646928  85 C0                     TEST EAX,EAX
0064692A  0F 84 8F 00 00 00         JZ 0x006469bf
00646930  6A 00                     PUSH 0x0
00646932  8B CE                     MOV ECX,ESI
00646934  88 9E A8 00 00 00         MOV byte ptr [ESI + 0xa8],BL
0064693A  E8 2D AE DB FF            CALL 0x0040176c
0064693F  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00646942  33 C0                     XOR EAX,EAX
00646944  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064694A  5F                        POP EDI
0064694B  5E                        POP ESI
0064694C  5B                        POP EBX
0064694D  8B E5                     MOV ESP,EBP
0064694F  5D                        POP EBP
00646950  C2 04 00                  RET 0x4
switchD_0064631d::caseD_5:
00646953  8B CE                     MOV ECX,ESI
00646955  E8 DC DE DB FF            CALL 0x00404836
0064695A  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0064695D  33 C0                     XOR EAX,EAX
0064695F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00646965  5F                        POP EDI
00646966  5E                        POP ESI
00646967  5B                        POP EBX
00646968  8B E5                     MOV ESP,EBP
0064696A  5D                        POP EBP
0064696B  C2 04 00                  RET 0x4
LAB_0064696e:
0064696E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00646971  E8 3D B2 DB FF            CALL 0x00401bb3
00646976  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00646979  33 C0                     XOR EAX,EAX
0064697B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00646981  5F                        POP EDI
00646982  5E                        POP ESI
00646983  5B                        POP EBX
00646984  8B E5                     MOV ESP,EBP
00646986  5D                        POP EBP
00646987  C2 04 00                  RET 0x4
LAB_0064698a:
0064698A  3D 0F 01 00 00            CMP EAX,0x10f
0064698F  75 2E                     JNZ 0x006469bf
00646991  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00646994  8D 55 F8                  LEA EDX,[EBP + -0x8]
00646997  52                        PUSH EDX
00646998  8B CE                     MOV ECX,ESI
0064699A  E8 96 D5 DB FF            CALL 0x00403f35
0064699F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006469A2  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006469A5  51                        PUSH ECX
006469A6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006469AC  50                        PUSH EAX
006469AD  52                        PUSH EDX
006469AE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006469B1  E8 43 BC DB FF            CALL 0x004025f9
006469B6  8D 45 F4                  LEA EAX,[EBP + -0xc]
006469B9  50                        PUSH EAX
006469BA  E8 A1 46 06 00            CALL 0x006ab060
switchD_0064631d::default:
006469BF  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006469C2  33 C0                     XOR EAX,EAX
006469C4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006469CA  5F                        POP EDI
006469CB  5E                        POP ESI
006469CC  5B                        POP EBX
006469CD  8B E5                     MOV ESP,EBP
006469CF  5D                        POP EBP
006469D0  C2 04 00                  RET 0x4
LAB_006469d3:
006469D3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006469D6  68 08 27 7D 00            PUSH 0x7d2708
006469DB  68 CC 4C 7A 00            PUSH 0x7a4ccc
006469E0  56                        PUSH ESI
006469E1  6A 00                     PUSH 0x0
006469E3  68 21 01 00 00            PUSH 0x121
006469E8  68 E4 26 7D 00            PUSH 0x7d26e4
006469ED  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006469F3  E8 D8 6A 06 00            CALL 0x006ad4d0
006469F8  83 C4 18                  ADD ESP,0x18
006469FB  85 C0                     TEST EAX,EAX
006469FD  74 01                     JZ 0x00646a00
006469FF  CC                        INT3
LAB_00646a00:
00646A00  68 23 01 00 00            PUSH 0x123
00646A05  68 E4 26 7D 00            PUSH 0x7d26e4
00646A0A  6A 00                     PUSH 0x0
00646A0C  56                        PUSH ESI
00646A0D  E8 2E F4 05 00            CALL 0x006a5e40
00646A12  5F                        POP EDI
00646A13  5E                        POP ESI
00646A14  B8 FF FF 00 00            MOV EAX,0xffff
00646A19  5B                        POP EBX
00646A1A  8B E5                     MOV ESP,EBP
00646A1C  5D                        POP EBP
00646A1D  C2 04 00                  RET 0x4
