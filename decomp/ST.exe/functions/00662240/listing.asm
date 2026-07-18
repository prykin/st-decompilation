AiFltClassTy::GetAiMess:
00662240  55                        PUSH EBP
00662241  8B EC                     MOV EBP,ESP
00662243  83 EC 70                  SUB ESP,0x70
00662246  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0066224B  53                        PUSH EBX
0066224C  56                        PUSH ESI
0066224D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00662250  33 DB                     XOR EBX,EBX
00662252  57                        PUSH EDI
00662253  8D 55 94                  LEA EDX,[EBP + -0x6c]
00662256  8D 4D 90                  LEA ECX,[EBP + -0x70]
00662259  53                        PUSH EBX
0066225A  52                        PUSH EDX
0066225B  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0066225E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00662264  E8 87 B5 0C 00            CALL 0x0072d7f0
00662269  8B F0                     MOV ESI,EAX
0066226B  83 C4 08                  ADD ESP,0x8
0066226E  3B F3                     CMP ESI,EBX
00662270  0F 85 D5 1A 00 00         JNZ 0x00663d4b
00662276  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00662279  8B 07                     MOV EAX,dword ptr [EDI]
0066227B  83 F8 64                  CMP EAX,0x64
0066227E  0F 82 A3 1A 00 00         JC 0x00663d27
00662284  83 C0 9C                  ADD EAX,-0x64
00662287  83 F8 12                  CMP EAX,0x12
0066228A  0F 87 A7 1A 00 00         JA 0x00663d37
switchD_00662290::switchD:
00662290  FF 24 85 94 3D 66 00      JMP dword ptr [EAX*0x4 + 0x663d94]
switchD_00662290::caseD_6:
00662297  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066229A  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0066229D  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006622A0  89 81 97 00 00 00         MOV dword ptr [ECX + 0x97],EAX
006622A6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006622AC  33 C0                     XOR EAX,EAX
006622AE  5F                        POP EDI
006622AF  5E                        POP ESI
006622B0  5B                        POP EBX
006622B1  8B E5                     MOV ESP,EBP
006622B3  5D                        POP EBP
006622B4  C2 04 00                  RET 0x4
switchD_00662290::caseD_4:
006622B7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006622BA  8A 83 94 01 00 00         MOV AL,byte ptr [EBX + 0x194]
006622C0  84 C0                     TEST AL,AL
006622C2  0F 84 6F 1A 00 00         JZ 0x00663d37
006622C8  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
006622CB  8B 02                     MOV EAX,dword ptr [EDX]
006622CD  83 F8 54                  CMP EAX,0x54
006622D0  0F 82 8D 03 00 00         JC 0x00662663
006622D6  83 F8 5A                  CMP EAX,0x5a
006622D9  0F 87 84 03 00 00         JA 0x00662663
006622DF  50                        PUSH EAX
006622E0  E8 26 1E DA FF            CALL 0x0040410b
006622E5  8B 8B 5F 02 00 00         MOV ECX,dword ptr [EBX + 0x25f]
006622EB  83 C4 04                  ADD ESP,0x4
006622EE  85 C1                     TEST ECX,EAX
006622F0  0F 84 41 1A 00 00         JZ 0x00663d37
006622F6  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
006622F9  8B 00                     MOV EAX,dword ptr [EAX]
006622FB  83 F8 01                  CMP EAX,0x1
006622FE  7C 0C                     JL 0x0066230c
00662300  83 F8 29                  CMP EAX,0x29
00662303  7D 07                     JGE 0x0066230c
00662305  B9 01 00 00 00            MOV ECX,0x1
0066230A  EB 02                     JMP 0x0066230e
LAB_0066230c:
0066230C  33 C9                     XOR ECX,ECX
LAB_0066230e:
0066230E  85 C9                     TEST ECX,ECX
00662310  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00662316  74 13                     JZ 0x0066232b
00662318  85 C9                     TEST ECX,ECX
0066231A  74 0F                     JZ 0x0066232b
0066231C  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0066231F  50                        PUSH EAX
00662320  52                        PUSH EDX
00662321  E8 17 1E DA FF            CALL 0x0040413d
00662326  E9 96 00 00 00            JMP 0x006623c1
LAB_0066232b:
0066232B  83 F8 32                  CMP EAX,0x32
0066232E  7C 0C                     JL 0x0066233c
00662330  83 F8 74                  CMP EAX,0x74
00662333  7D 07                     JGE 0x0066233c
00662335  BA 01 00 00 00            MOV EDX,0x1
0066233A  EB 02                     JMP 0x0066233e
LAB_0066233c:
0066233C  33 D2                     XOR EDX,EDX
LAB_0066233e:
0066233E  85 D2                     TEST EDX,EDX
00662340  74 10                     JZ 0x00662352
00662342  85 C9                     TEST ECX,ECX
00662344  74 0C                     JZ 0x00662352
00662346  50                        PUSH EAX
00662347  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0066234A  50                        PUSH EAX
0066234B  E8 4C 23 DA FF            CALL 0x0040469c
00662350  EB 6F                     JMP 0x006623c1
LAB_00662352:
00662352  3D A3 00 00 00            CMP EAX,0xa3
00662357  74 19                     JZ 0x00662372
00662359  3D A8 00 00 00            CMP EAX,0xa8
0066235E  74 12                     JZ 0x00662372
00662360  3D B2 00 00 00            CMP EAX,0xb2
00662365  74 0B                     JZ 0x00662372
00662367  3D BE 00 00 00            CMP EAX,0xbe
0066236C  74 04                     JZ 0x00662372
0066236E  33 D2                     XOR EDX,EDX
00662370  EB 05                     JMP 0x00662377
LAB_00662372:
00662372  BA 01 00 00 00            MOV EDX,0x1
LAB_00662377:
00662377  85 D2                     TEST EDX,EDX
00662379  74 10                     JZ 0x0066238b
0066237B  85 C9                     TEST ECX,ECX
0066237D  74 0C                     JZ 0x0066238b
0066237F  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00662382  50                        PUSH EAX
00662383  52                        PUSH EDX
00662384  E8 10 F4 D9 FF            CALL 0x00401799
00662389  EB 36                     JMP 0x006623c1
LAB_0066238b:
0066238B  3D DD 00 00 00            CMP EAX,0xdd
00662390  74 19                     JZ 0x006623ab
00662392  3D DE 00 00 00            CMP EAX,0xde
00662397  74 12                     JZ 0x006623ab
00662399  3D E2 00 00 00            CMP EAX,0xe2
0066239E  74 0B                     JZ 0x006623ab
006623A0  3D DC 00 00 00            CMP EAX,0xdc
006623A5  74 04                     JZ 0x006623ab
006623A7  33 C0                     XOR EAX,EAX
006623A9  EB 05                     JMP 0x006623b0
LAB_006623ab:
006623AB  B8 01 00 00 00            MOV EAX,0x1
LAB_006623b0:
006623B0  85 C0                     TEST EAX,EAX
006623B2  74 0B                     JZ 0x006623bf
006623B4  85 C9                     TEST ECX,ECX
006623B6  74 07                     JZ 0x006623bf
006623B8  B8 01 00 00 00            MOV EAX,0x1
006623BD  EB 02                     JMP 0x006623c1
LAB_006623bf:
006623BF  33 C0                     XOR EAX,EAX
LAB_006623c1:
006623C1  85 C0                     TEST EAX,EAX
006623C3  0F 84 6E 19 00 00         JZ 0x00663d37
006623C9  6A 53                     PUSH 0x53
006623CB  8B CB                     MOV ECX,EBX
006623CD  E8 E4 35 DA FF            CALL 0x004059b6
006623D2  85 C0                     TEST EAX,EAX
006623D4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006623D7  0F 84 61 02 00 00         JZ 0x0066263e
006623DD  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006623E0  85 C9                     TEST ECX,ECX
006623E2  0F 84 56 02 00 00         JZ 0x0066263e
006623E8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006623EB  8B 42 0A                  MOV EAX,dword ptr [EDX + 0xa]
006623EE  8A 48 3E                  MOV CL,byte ptr [EAX + 0x3e]
006623F1  84 C9                     TEST CL,CL
006623F3  75 22                     JNZ 0x00662417
006623F5  83 BB 9B 00 00 00 0C      CMP dword ptr [EBX + 0x9b],0xc
006623FC  0F 84 3C 02 00 00         JZ 0x0066263e
00662402  8B 93 B3 00 00 00         MOV EDX,dword ptr [EBX + 0xb3]
00662408  85 D2                     TEST EDX,EDX
0066240A  0F 85 2E 02 00 00         JNZ 0x0066263e
00662410  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00662413  84 C9                     TEST CL,CL
00662415  74 52                     JZ 0x00662469
LAB_00662417:
00662417  66 83 78 16 00            CMP word ptr [EAX + 0x16],0x0
0066241C  7C 0E                     JL 0x0066242c
0066241E  66 83 78 18 00            CMP word ptr [EAX + 0x18],0x0
00662423  7C 07                     JL 0x0066242c
00662425  66 83 78 1A 00            CMP word ptr [EAX + 0x1a],0x0
0066242A  7D 3D                     JGE 0x00662469
LAB_0066242c:
0066242C  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
00662432  85 C9                     TEST ECX,ECX
00662434  74 33                     JZ 0x00662469
00662436  66 8B 89 82 00 00 00      MOV CX,word ptr [ECX + 0x82]
0066243D  66 89 48 16               MOV word ptr [EAX + 0x16],CX
00662441  8B 83 84 02 00 00         MOV EAX,dword ptr [EBX + 0x284]
00662447  8B 4A 0A                  MOV ECX,dword ptr [EDX + 0xa]
0066244A  66 8B 80 84 00 00 00      MOV AX,word ptr [EAX + 0x84]
00662451  66 89 41 18               MOV word ptr [ECX + 0x18],AX
00662455  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
0066245B  8B 52 0A                  MOV EDX,dword ptr [EDX + 0xa]
0066245E  66 8B 81 86 00 00 00      MOV AX,word ptr [ECX + 0x86]
00662465  66 89 42 1A               MOV word ptr [EDX + 0x1a],AX
LAB_00662469:
00662469  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066246C  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00662473  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00662476  85 C0                     TEST EAX,EAX
00662478  0F 8E C0 01 00 00         JLE 0x0066263e
0066247E  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00662481  3B F8                     CMP EDI,EAX
LAB_00662483:
00662483  73 10                     JNC 0x00662495
00662485  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00662488  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0066248B  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0066248E  0F AF C7                  IMUL EAX,EDI
00662491  03 C2                     ADD EAX,EDX
00662493  EB 02                     JMP 0x00662497
LAB_00662495:
00662495  33 C0                     XOR EAX,EAX
LAB_00662497:
00662497  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066249D  66 8B 30                  MOV SI,word ptr [EAX]
006624A0  85 C9                     TEST ECX,ECX
006624A2  74 0E                     JZ 0x006624b2
006624A4  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
006624A7  6A 01                     PUSH 0x1
006624A9  56                        PUSH ESI
006624AA  52                        PUSH EDX
006624AB  E8 0A 04 DA FF            CALL 0x004028ba
006624B0  EB 02                     JMP 0x006624b4
LAB_006624b2:
006624B2  33 C0                     XOR EAX,EAX
LAB_006624b4:
006624B4  85 C0                     TEST EAX,EAX
006624B6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006624B9  0F 84 03 01 00 00         JZ 0x006625c2
006624BF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006624C2  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
006624C5  C6 40 08 01               MOV byte ptr [EAX + 0x8],0x1
006624C9  84 C9                     TEST CL,CL
006624CB  66 89 70 0E               MOV word ptr [EAX + 0xe],SI
006624CF  0F 84 69 01 00 00         JZ 0x0066263e
006624D5  8B 70 0A                  MOV ESI,dword ptr [EAX + 0xa]
006624D8  8D BB AD 01 00 00         LEA EDI,[EBX + 0x1ad]
006624DE  B9 12 00 00 00            MOV ECX,0x12
006624E3  F3 A5                     MOVSD.REP ES:EDI,ESI
006624E5  66 A5                     MOVSW ES:EDI,ESI
006624E7  8A 83 EB 01 00 00         MOV AL,byte ptr [EBX + 0x1eb]
006624ED  84 C0                     TEST AL,AL
006624EF  0F 84 E1 00 00 00         JZ 0x006625d6
006624F5  0F BF 83 C7 01 00 00      MOVSX EAX,word ptr [EBX + 0x1c7]
006624FC  8B 7B 24                  MOV EDI,dword ptr [EBX + 0x24]
006624FF  8B B3 AD 01 00 00         MOV ESI,dword ptr [EBX + 0x1ad]
00662505  0F BF 8B C5 01 00 00      MOVSX ECX,word ptr [EBX + 0x1c5]
0066250C  0F BF 93 C3 01 00 00      MOVSX EDX,word ptr [EBX + 0x1c3]
00662513  6A 00                     PUSH 0x0
00662515  6A 00                     PUSH 0x0
00662517  6A 00                     PUSH 0x0
00662519  6A 00                     PUSH 0x0
0066251B  6A 00                     PUSH 0x0
0066251D  57                        PUSH EDI
0066251E  56                        PUSH ESI
0066251F  50                        PUSH EAX
00662520  51                        PUSH ECX
00662521  52                        PUSH EDX
00662522  E8 02 03 DA FF            CALL 0x00402829
00662527  83 C4 28                  ADD ESP,0x28
0066252A  85 C0                     TEST EAX,EAX
0066252C  0F 85 A4 00 00 00         JNZ 0x006625d6
00662532  0F BF BB C3 01 00 00      MOVSX EDI,word ptr [EBX + 0x1c3]
00662539  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0066253C  8B B3 AD 01 00 00         MOV ESI,dword ptr [EBX + 0x1ad]
00662542  0F BF BB C5 01 00 00      MOVSX EDI,word ptr [EBX + 0x1c5]
00662549  0F BF 83 C7 01 00 00      MOVSX EAX,word ptr [EBX + 0x1c7]
00662550  0F BF 8B C5 01 00 00      MOVSX ECX,word ptr [EBX + 0x1c5]
00662557  0F BF 93 C3 01 00 00      MOVSX EDX,word ptr [EBX + 0x1c3]
0066255E  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00662561  0F BF BB C7 01 00 00      MOVSX EDI,word ptr [EBX + 0x1c7]
00662568  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0066256B  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0066256E  57                        PUSH EDI
0066256F  50                        PUSH EAX
00662570  51                        PUSH ECX
00662571  52                        PUSH EDX
00662572  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00662575  8D 55 E8                  LEA EDX,[EBP + -0x18]
00662578  51                        PUSH ECX
00662579  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0066257C  8D 45 EC                  LEA EAX,[EBP + -0x14]
0066257F  52                        PUSH EDX
00662580  50                        PUSH EAX
00662581  56                        PUSH ESI
00662582  51                        PUSH ECX
00662583  E8 7B 19 DA FF            CALL 0x00403f03
00662588  33 F6                     XOR ESI,ESI
0066258A  83 C4 24                  ADD ESP,0x24
0066258D  3B C6                     CMP EAX,ESI
0066258F  74 23                     JZ 0x006625b4
00662591  66 8B 55 EC               MOV DX,word ptr [EBP + -0x14]
00662595  66 8B 4D E8               MOV CX,word ptr [EBP + -0x18]
00662599  66 89 93 C3 01 00 00      MOV word ptr [EBX + 0x1c3],DX
006625A0  66 8B 55 E4               MOV DX,word ptr [EBP + -0x1c]
006625A4  66 89 8B C5 01 00 00      MOV word ptr [EBX + 0x1c5],CX
006625AB  66 89 93 C7 01 00 00      MOV word ptr [EBX + 0x1c7],DX
006625B2  75 24                     JNZ 0x006625d8
LAB_006625b4:
006625B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006625B7  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006625BA  C6 40 08 00               MOV byte ptr [EAX + 0x8],0x0
006625BE  66 89 70 0E               MOV word ptr [EAX + 0xe],SI
LAB_006625c2:
006625C2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006625C5  47                        INC EDI
006625C6  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006625C9  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006625CC  3B F8                     CMP EDI,EAX
006625CE  0F 8C AF FE FF FF         JL 0x00662483
006625D4  EB 68                     JMP 0x0066263e
LAB_006625d6:
006625D6  33 F6                     XOR ESI,ESI
LAB_006625d8:
006625D8  0F BF 8B C7 01 00 00      MOVSX ECX,word ptr [EBX + 0x1c7]
006625DF  0F BF 93 C5 01 00 00      MOVSX EDX,word ptr [EBX + 0x1c5]
006625E6  0F BF 83 C3 01 00 00      MOVSX EAX,word ptr [EBX + 0x1c3]
006625ED  51                        PUSH ECX
006625EE  8B 8B AD 01 00 00         MOV ECX,dword ptr [EBX + 0x1ad]
006625F4  52                        PUSH EDX
006625F5  50                        PUSH EAX
006625F6  51                        PUSH ECX
006625F7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006625FA  E8 0C 34 DA FF            CALL 0x00405a0b
006625FF  39 B3 B3 00 00 00         CMP dword ptr [EBX + 0xb3],ESI
00662605  74 07                     JZ 0x0066260e
00662607  8B CB                     MOV ECX,EBX
00662609  E8 B1 EE D9 FF            CALL 0x004014bf
LAB_0066260e:
0066260E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00662611  B8 0C 00 00 00            MOV EAX,0xc
00662616  89 83 9B 00 00 00         MOV dword ptr [EBX + 0x9b],EAX
0066261C  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
00662622  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00662628  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
0066262E  8B 4A 0A                  MOV ECX,dword ptr [EDX + 0xa]
00662631  8A 51 3E                  MOV DL,byte ptr [ECX + 0x3e]
00662634  84 D2                     TEST DL,DL
00662636  74 06                     JZ 0x0066263e
00662638  89 83 B3 00 00 00         MOV dword ptr [EBX + 0xb3],EAX
LAB_0066263e:
0066263E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00662641  85 C0                     TEST EAX,EAX
00662643  0F 84 EE 16 00 00         JZ 0x00663d37
00662649  50                        PUSH EAX
0066264A  E8 C1 BA 04 00            CALL 0x006ae110
0066264F  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00662652  33 C0                     XOR EAX,EAX
00662654  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0066265A  5F                        POP EDI
0066265B  5E                        POP ESI
0066265C  5B                        POP EBX
0066265D  8B E5                     MOV ESP,EBP
0066265F  5D                        POP EBP
00662660  C2 04 00                  RET 0x4
LAB_00662663:
00662663  83 F8 32                  CMP EAX,0x32
00662666  72 0C                     JC 0x00662674
00662668  83 F8 74                  CMP EAX,0x74
0066266B  73 07                     JNC 0x00662674
0066266D  B9 01 00 00 00            MOV ECX,0x1
00662672  EB 02                     JMP 0x00662676
LAB_00662674:
00662674  33 C9                     XOR ECX,ECX
LAB_00662676:
00662676  85 C9                     TEST ECX,ECX
00662678  0F 84 15 03 00 00         JZ 0x00662993
0066267E  50                        PUSH EAX
0066267F  E8 87 1A DA FF            CALL 0x0040410b
00662684  8B 8B 5F 02 00 00         MOV ECX,dword ptr [EBX + 0x25f]
0066268A  83 C4 04                  ADD ESP,0x4
0066268D  85 C1                     TEST ECX,EAX
0066268F  0F 84 A2 16 00 00         JZ 0x00663d37
00662695  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
00662698  8B 02                     MOV EAX,dword ptr [EDX]
0066269A  83 F8 01                  CMP EAX,0x1
0066269D  7C 0C                     JL 0x006626ab
0066269F  83 F8 29                  CMP EAX,0x29
006626A2  7D 07                     JGE 0x006626ab
006626A4  B9 01 00 00 00            MOV ECX,0x1
006626A9  EB 02                     JMP 0x006626ad
LAB_006626ab:
006626AB  33 C9                     XOR ECX,ECX
LAB_006626ad:
006626AD  85 C9                     TEST ECX,ECX
006626AF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006626B5  74 13                     JZ 0x006626ca
006626B7  85 C9                     TEST ECX,ECX
006626B9  74 0F                     JZ 0x006626ca
006626BB  50                        PUSH EAX
006626BC  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006626BF  50                        PUSH EAX
006626C0  E8 78 1A DA FF            CALL 0x0040413d
006626C5  E9 96 00 00 00            JMP 0x00662760
LAB_006626ca:
006626CA  83 F8 32                  CMP EAX,0x32
006626CD  7C 0C                     JL 0x006626db
006626CF  83 F8 74                  CMP EAX,0x74
006626D2  7D 07                     JGE 0x006626db
006626D4  BA 01 00 00 00            MOV EDX,0x1
006626D9  EB 02                     JMP 0x006626dd
LAB_006626db:
006626DB  33 D2                     XOR EDX,EDX
LAB_006626dd:
006626DD  85 D2                     TEST EDX,EDX
006626DF  74 10                     JZ 0x006626f1
006626E1  85 C9                     TEST ECX,ECX
006626E3  74 0C                     JZ 0x006626f1
006626E5  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
006626E8  50                        PUSH EAX
006626E9  52                        PUSH EDX
006626EA  E8 AD 1F DA FF            CALL 0x0040469c
006626EF  EB 6F                     JMP 0x00662760
LAB_006626f1:
006626F1  3D A3 00 00 00            CMP EAX,0xa3
006626F6  74 19                     JZ 0x00662711
006626F8  3D A8 00 00 00            CMP EAX,0xa8
006626FD  74 12                     JZ 0x00662711
006626FF  3D B2 00 00 00            CMP EAX,0xb2
00662704  74 0B                     JZ 0x00662711
00662706  3D BE 00 00 00            CMP EAX,0xbe
0066270B  74 04                     JZ 0x00662711
0066270D  33 D2                     XOR EDX,EDX
0066270F  EB 05                     JMP 0x00662716
LAB_00662711:
00662711  BA 01 00 00 00            MOV EDX,0x1
LAB_00662716:
00662716  85 D2                     TEST EDX,EDX
00662718  74 10                     JZ 0x0066272a
0066271A  85 C9                     TEST ECX,ECX
0066271C  74 0C                     JZ 0x0066272a
0066271E  50                        PUSH EAX
0066271F  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00662722  50                        PUSH EAX
00662723  E8 71 F0 D9 FF            CALL 0x00401799
00662728  EB 36                     JMP 0x00662760
LAB_0066272a:
0066272A  3D DD 00 00 00            CMP EAX,0xdd
0066272F  74 19                     JZ 0x0066274a
00662731  3D DE 00 00 00            CMP EAX,0xde
00662736  74 12                     JZ 0x0066274a
00662738  3D E2 00 00 00            CMP EAX,0xe2
0066273D  74 0B                     JZ 0x0066274a
0066273F  3D DC 00 00 00            CMP EAX,0xdc
00662744  74 04                     JZ 0x0066274a
00662746  33 C0                     XOR EAX,EAX
00662748  EB 05                     JMP 0x0066274f
LAB_0066274a:
0066274A  B8 01 00 00 00            MOV EAX,0x1
LAB_0066274f:
0066274F  85 C0                     TEST EAX,EAX
00662751  74 0B                     JZ 0x0066275e
00662753  85 C9                     TEST ECX,ECX
00662755  74 07                     JZ 0x0066275e
00662757  B8 01 00 00 00            MOV EAX,0x1
0066275C  EB 02                     JMP 0x00662760
LAB_0066275e:
0066275E  33 C0                     XOR EAX,EAX
LAB_00662760:
00662760  85 C0                     TEST EAX,EAX
00662762  0F 84 CF 15 00 00         JZ 0x00663d37
00662768  0F BF 43 39               MOVSX EAX,word ptr [EBX + 0x39]
0066276C  48                        DEC EAX
0066276D  74 18                     JZ 0x00662787
0066276F  48                        DEC EAX
00662770  74 0E                     JZ 0x00662780
00662772  48                        DEC EAX
00662773  74 04                     JZ 0x00662779
00662775  33 C0                     XOR EAX,EAX
00662777  EB 13                     JMP 0x0066278c
LAB_00662779:
00662779  B8 19 00 00 00            MOV EAX,0x19
0066277E  EB 0C                     JMP 0x0066278c
LAB_00662780:
00662780  B8 18 00 00 00            MOV EAX,0x18
00662785  EB 05                     JMP 0x0066278c
LAB_00662787:
00662787  B8 0C 00 00 00            MOV EAX,0xc
LAB_0066278c:
0066278C  6A FF                     PUSH -0x1
0066278E  50                        PUSH EAX
0066278F  8B CB                     MOV ECX,EBX
00662791  E8 8A 22 DA FF            CALL 0x00404a20
00662796  85 C0                     TEST EAX,EAX
00662798  0F 8E 99 15 00 00         JLE 0x00663d37
0066279E  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
006627A1  8A 48 3E                  MOV CL,byte ptr [EAX + 0x3e]
006627A4  84 C9                     TEST CL,CL
006627A6  75 26                     JNZ 0x006627ce
006627A8  8B 8B 9B 00 00 00         MOV ECX,dword ptr [EBX + 0x9b]
006627AE  83 F9 23                  CMP ECX,0x23
006627B1  0F 84 80 15 00 00         JZ 0x00663d37
006627B7  83 F9 78                  CMP ECX,0x78
006627BA  0F 84 77 15 00 00         JZ 0x00663d37
006627C0  8B 8B B3 00 00 00         MOV ECX,dword ptr [EBX + 0xb3]
006627C6  85 C9                     TEST ECX,ECX
006627C8  0F 85 69 15 00 00         JNZ 0x00663d37
LAB_006627ce:
006627CE  8A 4F 09                  MOV CL,byte ptr [EDI + 0x9]
006627D1  C6 47 08 01               MOV byte ptr [EDI + 0x8],0x1
006627D5  84 C9                     TEST CL,CL
006627D7  66 C7 47 0E FF FF         MOV word ptr [EDI + 0xe],0xffff
006627DD  0F 84 54 15 00 00         JZ 0x00663d37
006627E3  8A 48 3E                  MOV CL,byte ptr [EAX + 0x3e]
006627E6  84 C9                     TEST CL,CL
006627E8  74 52                     JZ 0x0066283c
006627EA  66 83 78 16 00            CMP word ptr [EAX + 0x16],0x0
006627EF  7C 0E                     JL 0x006627ff
006627F1  66 83 78 18 00            CMP word ptr [EAX + 0x18],0x0
006627F6  7C 07                     JL 0x006627ff
006627F8  66 83 78 1A 00            CMP word ptr [EAX + 0x1a],0x0
006627FD  7D 3D                     JGE 0x0066283c
LAB_006627ff:
006627FF  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
00662805  85 C9                     TEST ECX,ECX
00662807  74 33                     JZ 0x0066283c
00662809  66 8B 89 82 00 00 00      MOV CX,word ptr [ECX + 0x82]
00662810  66 89 48 16               MOV word ptr [EAX + 0x16],CX
00662814  8B 93 84 02 00 00         MOV EDX,dword ptr [EBX + 0x284]
0066281A  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
0066281D  66 8B 8A 84 00 00 00      MOV CX,word ptr [EDX + 0x84]
00662824  66 89 48 18               MOV word ptr [EAX + 0x18],CX
00662828  8B 93 84 02 00 00         MOV EDX,dword ptr [EBX + 0x284]
0066282E  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
00662831  66 8B 8A 86 00 00 00      MOV CX,word ptr [EDX + 0x86]
00662838  66 89 48 1A               MOV word ptr [EAX + 0x1a],CX
LAB_0066283c:
0066283C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0066283F  8D BB AD 01 00 00         LEA EDI,[EBX + 0x1ad]
00662845  B9 12 00 00 00            MOV ECX,0x12
0066284A  8B 72 0A                  MOV ESI,dword ptr [EDX + 0xa]
0066284D  F3 A5                     MOVSD.REP ES:EDI,ESI
0066284F  66 A5                     MOVSW ES:EDI,ESI
00662851  8A 83 EB 01 00 00         MOV AL,byte ptr [EBX + 0x1eb]
00662857  84 C0                     TEST AL,AL
00662859  0F 84 DB 00 00 00         JZ 0x0066293a
0066285F  0F BF 83 C7 01 00 00      MOVSX EAX,word ptr [EBX + 0x1c7]
00662866  8B 7B 24                  MOV EDI,dword ptr [EBX + 0x24]
00662869  8B B3 AD 01 00 00         MOV ESI,dword ptr [EBX + 0x1ad]
0066286F  0F BF 8B C5 01 00 00      MOVSX ECX,word ptr [EBX + 0x1c5]
00662876  0F BF 93 C3 01 00 00      MOVSX EDX,word ptr [EBX + 0x1c3]
0066287D  6A 00                     PUSH 0x0
0066287F  6A 00                     PUSH 0x0
00662881  6A 00                     PUSH 0x0
00662883  6A 00                     PUSH 0x0
00662885  6A 00                     PUSH 0x0
00662887  57                        PUSH EDI
00662888  56                        PUSH ESI
00662889  50                        PUSH EAX
0066288A  51                        PUSH ECX
0066288B  52                        PUSH EDX
0066288C  E8 98 FF D9 FF            CALL 0x00402829
00662891  83 C4 28                  ADD ESP,0x28
00662894  85 C0                     TEST EAX,EAX
00662896  0F 85 9E 00 00 00         JNZ 0x0066293a
0066289C  0F BF BB C3 01 00 00      MOVSX EDI,word ptr [EBX + 0x1c3]
006628A3  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006628A6  8B B3 AD 01 00 00         MOV ESI,dword ptr [EBX + 0x1ad]
006628AC  0F BF BB C5 01 00 00      MOVSX EDI,word ptr [EBX + 0x1c5]
006628B3  0F BF 83 C7 01 00 00      MOVSX EAX,word ptr [EBX + 0x1c7]
006628BA  0F BF 8B C5 01 00 00      MOVSX ECX,word ptr [EBX + 0x1c5]
006628C1  0F BF 93 C3 01 00 00      MOVSX EDX,word ptr [EBX + 0x1c3]
006628C8  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006628CB  0F BF BB C7 01 00 00      MOVSX EDI,word ptr [EBX + 0x1c7]
006628D2  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006628D5  33 FF                     XOR EDI,EDI
006628D7  57                        PUSH EDI
006628D8  50                        PUSH EAX
006628D9  51                        PUSH ECX
006628DA  8D 45 E0                  LEA EAX,[EBP + -0x20]
006628DD  52                        PUSH EDX
006628DE  8D 4D F4                  LEA ECX,[EBP + -0xc]
006628E1  50                        PUSH EAX
006628E2  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006628E5  8D 55 F0                  LEA EDX,[EBP + -0x10]
006628E8  51                        PUSH ECX
006628E9  52                        PUSH EDX
006628EA  56                        PUSH ESI
006628EB  50                        PUSH EAX
006628EC  E8 12 16 DA FF            CALL 0x00403f03
006628F1  83 C4 24                  ADD ESP,0x24
006628F4  3B C7                     CMP EAX,EDI
006628F6  74 23                     JZ 0x0066291b
006628F8  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
006628FC  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
00662900  66 89 8B C3 01 00 00      MOV word ptr [EBX + 0x1c3],CX
00662907  66 8B 4D E0               MOV CX,word ptr [EBP + -0x20]
0066290B  66 89 93 C5 01 00 00      MOV word ptr [EBX + 0x1c5],DX
00662912  66 89 8B C7 01 00 00      MOV word ptr [EBX + 0x1c7],CX
00662919  75 21                     JNZ 0x0066293c
LAB_0066291b:
0066291B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0066291E  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00662921  C6 40 08 00               MOV byte ptr [EAX + 0x8],0x0
00662925  66 89 78 0E               MOV word ptr [EAX + 0xe],DI
00662929  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0066292F  33 C0                     XOR EAX,EAX
00662931  5F                        POP EDI
00662932  5E                        POP ESI
00662933  5B                        POP EBX
00662934  8B E5                     MOV ESP,EBP
00662936  5D                        POP EBP
00662937  C2 04 00                  RET 0x4
LAB_0066293a:
0066293A  33 FF                     XOR EDI,EDI
LAB_0066293c:
0066293C  39 BB B3 00 00 00         CMP dword ptr [EBX + 0xb3],EDI
00662942  74 07                     JZ 0x0066294b
00662944  8B CB                     MOV ECX,EBX
00662946  E8 74 EB D9 FF            CALL 0x004014bf
LAB_0066294b:
0066294B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0066294E  B8 23 00 00 00            MOV EAX,0x23
00662953  89 83 9B 00 00 00         MOV dword ptr [EBX + 0x9b],EAX
00662959  89 BB 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EDI
0066295F  89 BB A3 00 00 00         MOV dword ptr [EBX + 0xa3],EDI
00662965  89 BB A7 00 00 00         MOV dword ptr [EBX + 0xa7],EDI
0066296B  8B 4A 0A                  MOV ECX,dword ptr [EDX + 0xa]
0066296E  8A 51 3E                  MOV DL,byte ptr [ECX + 0x3e]
00662971  84 D2                     TEST DL,DL
00662973  0F 84 BE 13 00 00         JZ 0x00663d37
00662979  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0066297C  89 83 B3 00 00 00         MOV dword ptr [EBX + 0xb3],EAX
00662982  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00662988  33 C0                     XOR EAX,EAX
0066298A  5F                        POP EDI
0066298B  5E                        POP ESI
0066298C  5B                        POP EBX
0066298D  8B E5                     MOV ESP,EBP
0066298F  5D                        POP EBP
00662990  C2 04 00                  RET 0x4
LAB_00662993:
00662993  83 F8 01                  CMP EAX,0x1
00662996  72 0C                     JC 0x006629a4
00662998  83 F8 29                  CMP EAX,0x29
0066299B  73 07                     JNC 0x006629a4
0066299D  B9 01 00 00 00            MOV ECX,0x1
006629A2  EB 02                     JMP 0x006629a6
LAB_006629a4:
006629A4  33 C9                     XOR ECX,ECX
LAB_006629a6:
006629A6  85 C9                     TEST ECX,ECX
006629A8  0F 84 7E 02 00 00         JZ 0x00662c2c
006629AE  50                        PUSH EAX
006629AF  E8 57 17 DA FF            CALL 0x0040410b
006629B4  8B 8B 5F 02 00 00         MOV ECX,dword ptr [EBX + 0x25f]
006629BA  83 C4 04                  ADD ESP,0x4
006629BD  85 C1                     TEST ECX,EAX
006629BF  0F 84 72 13 00 00         JZ 0x00663d37
006629C5  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
006629C8  8B 02                     MOV EAX,dword ptr [EDX]
006629CA  83 F8 01                  CMP EAX,0x1
006629CD  7C 0C                     JL 0x006629db
006629CF  83 F8 29                  CMP EAX,0x29
006629D2  7D 07                     JGE 0x006629db
006629D4  B9 01 00 00 00            MOV ECX,0x1
006629D9  EB 02                     JMP 0x006629dd
LAB_006629db:
006629DB  33 C9                     XOR ECX,ECX
LAB_006629dd:
006629DD  85 C9                     TEST ECX,ECX
006629DF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006629E5  74 13                     JZ 0x006629fa
006629E7  85 C9                     TEST ECX,ECX
006629E9  74 0F                     JZ 0x006629fa
006629EB  50                        PUSH EAX
006629EC  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006629EF  50                        PUSH EAX
006629F0  E8 48 17 DA FF            CALL 0x0040413d
006629F5  E9 96 00 00 00            JMP 0x00662a90
LAB_006629fa:
006629FA  83 F8 32                  CMP EAX,0x32
006629FD  7C 0C                     JL 0x00662a0b
006629FF  83 F8 74                  CMP EAX,0x74
00662A02  7D 07                     JGE 0x00662a0b
00662A04  BA 01 00 00 00            MOV EDX,0x1
00662A09  EB 02                     JMP 0x00662a0d
LAB_00662a0b:
00662A0B  33 D2                     XOR EDX,EDX
LAB_00662a0d:
00662A0D  85 D2                     TEST EDX,EDX
00662A0F  74 10                     JZ 0x00662a21
00662A11  85 C9                     TEST ECX,ECX
00662A13  74 0C                     JZ 0x00662a21
00662A15  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00662A18  50                        PUSH EAX
00662A19  52                        PUSH EDX
00662A1A  E8 7D 1C DA FF            CALL 0x0040469c
00662A1F  EB 6F                     JMP 0x00662a90
LAB_00662a21:
00662A21  3D A3 00 00 00            CMP EAX,0xa3
00662A26  74 19                     JZ 0x00662a41
00662A28  3D A8 00 00 00            CMP EAX,0xa8
00662A2D  74 12                     JZ 0x00662a41
00662A2F  3D B2 00 00 00            CMP EAX,0xb2
00662A34  74 0B                     JZ 0x00662a41
00662A36  3D BE 00 00 00            CMP EAX,0xbe
00662A3B  74 04                     JZ 0x00662a41
00662A3D  33 D2                     XOR EDX,EDX
00662A3F  EB 05                     JMP 0x00662a46
LAB_00662a41:
00662A41  BA 01 00 00 00            MOV EDX,0x1
LAB_00662a46:
00662A46  85 D2                     TEST EDX,EDX
00662A48  74 10                     JZ 0x00662a5a
00662A4A  85 C9                     TEST ECX,ECX
00662A4C  74 0C                     JZ 0x00662a5a
00662A4E  50                        PUSH EAX
00662A4F  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00662A52  50                        PUSH EAX
00662A53  E8 41 ED D9 FF            CALL 0x00401799
00662A58  EB 36                     JMP 0x00662a90
LAB_00662a5a:
00662A5A  3D DD 00 00 00            CMP EAX,0xdd
00662A5F  74 19                     JZ 0x00662a7a
00662A61  3D DE 00 00 00            CMP EAX,0xde
00662A66  74 12                     JZ 0x00662a7a
00662A68  3D E2 00 00 00            CMP EAX,0xe2
00662A6D  74 0B                     JZ 0x00662a7a
00662A6F  3D DC 00 00 00            CMP EAX,0xdc
00662A74  74 04                     JZ 0x00662a7a
00662A76  33 C0                     XOR EAX,EAX
00662A78  EB 05                     JMP 0x00662a7f
LAB_00662a7a:
00662A7A  B8 01 00 00 00            MOV EAX,0x1
LAB_00662a7f:
00662A7F  85 C0                     TEST EAX,EAX
00662A81  74 0B                     JZ 0x00662a8e
00662A83  85 C9                     TEST ECX,ECX
00662A85  74 07                     JZ 0x00662a8e
00662A87  B8 01 00 00 00            MOV EAX,0x1
00662A8C  EB 02                     JMP 0x00662a90
LAB_00662a8e:
00662A8E  33 C0                     XOR EAX,EAX
LAB_00662a90:
00662A90  85 C0                     TEST EAX,EAX
00662A92  0F 84 9F 12 00 00         JZ 0x00663d37
00662A98  8B 4F 0A                  MOV ECX,dword ptr [EDI + 0xa]
00662A9B  8B 01                     MOV EAX,dword ptr [ECX]
00662A9D  0F BF 4B 39               MOVSX ECX,word ptr [EBX + 0x39]
00662AA1  49                        DEC ECX
00662AA2  74 1F                     JZ 0x00662ac3
00662AA4  49                        DEC ECX
00662AA5  74 0E                     JZ 0x00662ab5
00662AA7  49                        DEC ECX
00662AA8  74 04                     JZ 0x00662aae
00662AAA  33 C0                     XOR EAX,EAX
00662AAC  EB 21                     JMP 0x00662acf
LAB_00662aae:
00662AAE  B8 5C 00 00 00            MOV EAX,0x5c
00662AB3  EB 1A                     JMP 0x00662acf
LAB_00662ab5:
00662AB5  83 E8 15                  SUB EAX,0x15
00662AB8  F7 D8                     NEG EAX
00662ABA  1B C0                     SBB EAX,EAX
00662ABC  24 E9                     AND AL,0xe9
00662ABE  83 C0 49                  ADD EAX,0x49
00662AC1  EB 0C                     JMP 0x00662acf
LAB_00662ac3:
00662AC3  83 E8 09                  SUB EAX,0x9
00662AC6  F7 D8                     NEG EAX
00662AC8  1B C0                     SBB EAX,EAX
00662ACA  24 F2                     AND AL,0xf2
00662ACC  83 C0 40                  ADD EAX,0x40
LAB_00662acf:
00662ACF  50                        PUSH EAX
00662AD0  8B CB                     MOV ECX,EBX
00662AD2  E8 DF 2E DA FF            CALL 0x004059b6
00662AD7  85 C0                     TEST EAX,EAX
00662AD9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00662ADC  0F 84 25 01 00 00         JZ 0x00662c07
00662AE2  8B D0                     MOV EDX,EAX
00662AE4  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00662AE7  85 C0                     TEST EAX,EAX
00662AE9  0F 84 18 01 00 00         JZ 0x00662c07
00662AEF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00662AF2  8B 51 0A                  MOV EDX,dword ptr [ECX + 0xa]
00662AF5  8A 4A 3E                  MOV CL,byte ptr [EDX + 0x3e]
00662AF8  84 C9                     TEST CL,CL
00662AFA  75 1B                     JNZ 0x00662b17
00662AFC  83 BB 9B 00 00 00 0E      CMP dword ptr [EBX + 0x9b],0xe
00662B03  0F 84 FE 00 00 00         JZ 0x00662c07
00662B09  8B 8B B3 00 00 00         MOV ECX,dword ptr [EBX + 0xb3]
00662B0F  85 C9                     TEST ECX,ECX
00662B11  0F 85 F0 00 00 00         JNZ 0x00662c07
LAB_00662b17:
00662B17  33 FF                     XOR EDI,EDI
00662B19  85 C0                     TEST EAX,EAX
00662B1B  0F 8E E6 00 00 00         JLE 0x00662c07
LAB_00662b21:
00662B21  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00662B24  3B F8                     CMP EDI,EAX
00662B26  73 0D                     JNC 0x00662b35
00662B28  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00662B2B  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00662B2E  0F AF C7                  IMUL EAX,EDI
00662B31  03 C2                     ADD EAX,EDX
00662B33  EB 02                     JMP 0x00662b37
LAB_00662b35:
00662B35  33 C0                     XOR EAX,EAX
LAB_00662b37:
00662B37  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00662B3D  66 8B 30                  MOV SI,word ptr [EAX]
00662B40  85 C9                     TEST ECX,ECX
00662B42  74 0E                     JZ 0x00662b52
00662B44  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00662B47  6A 01                     PUSH 0x1
00662B49  56                        PUSH ESI
00662B4A  50                        PUSH EAX
00662B4B  E8 6A FD D9 FF            CALL 0x004028ba
00662B50  EB 02                     JMP 0x00662b54
LAB_00662b52:
00662B52  33 C0                     XOR EAX,EAX
LAB_00662b54:
00662B54  85 C0                     TEST EAX,EAX
00662B56  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00662B59  74 0D                     JZ 0x00662b68
00662B5B  6A 01                     PUSH 0x1
00662B5D  8B C8                     MOV ECX,EAX
00662B5F  E8 65 1B DA FF            CALL 0x004046c9
00662B64  85 C0                     TEST EAX,EAX
00662B66  74 10                     JZ 0x00662b78
LAB_00662b68:
00662B68  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00662B6B  47                        INC EDI
00662B6C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00662B6F  3B F8                     CMP EDI,EAX
00662B71  7C AE                     JL 0x00662b21
00662B73  E9 8F 00 00 00            JMP 0x00662c07
LAB_00662b78:
00662B78  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00662B7B  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
00662B7E  C6 40 08 01               MOV byte ptr [EAX + 0x8],0x1
00662B82  84 C9                     TEST CL,CL
00662B84  66 89 70 0E               MOV word ptr [EAX + 0xe],SI
00662B88  74 7D                     JZ 0x00662c07
00662B8A  8B 70 0A                  MOV ESI,dword ptr [EAX + 0xa]
00662B8D  B9 12 00 00 00            MOV ECX,0x12
00662B92  8D BB AD 01 00 00         LEA EDI,[EBX + 0x1ad]
00662B98  F3 A5                     MOVSD.REP ES:EDI,ESI
00662B9A  66 A5                     MOVSW ES:EDI,ESI
00662B9C  8B 40 0A                  MOV EAX,dword ptr [EAX + 0xa]
00662B9F  0F BE 48 1C               MOVSX ECX,byte ptr [EAX + 0x1c]
00662BA3  8D 50 1D                  LEA EDX,[EAX + 0x1d]
00662BA6  52                        PUSH EDX
00662BA7  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00662BAA  51                        PUSH ECX
00662BAB  33 C9                     XOR ECX,ECX
00662BAD  66 8B 48 0C               MOV CX,word ptr [EAX + 0xc]
00662BB1  52                        PUSH EDX
00662BB2  8B 10                     MOV EDX,dword ptr [EAX]
00662BB4  51                        PUSH ECX
00662BB5  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00662BB8  6A 01                     PUSH 0x1
00662BBA  6A 01                     PUSH 0x1
00662BBC  52                        PUSH EDX
00662BBD  6A 01                     PUSH 0x1
00662BBF  E8 95 2B DA FF            CALL 0x00405759
00662BC4  8B 83 B3 00 00 00         MOV EAX,dword ptr [EBX + 0xb3]
00662BCA  85 C0                     TEST EAX,EAX
00662BCC  74 07                     JZ 0x00662bd5
00662BCE  8B CB                     MOV ECX,EBX
00662BD0  E8 EA E8 D9 FF            CALL 0x004014bf
LAB_00662bd5:
00662BD5  33 C0                     XOR EAX,EAX
00662BD7  B9 0E 00 00 00            MOV ECX,0xe
00662BDC  89 83 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EAX
00662BE2  89 83 A3 00 00 00         MOV dword ptr [EBX + 0xa3],EAX
00662BE8  89 83 A7 00 00 00         MOV dword ptr [EBX + 0xa7],EAX
00662BEE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00662BF1  89 8B 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ECX
00662BF7  8B 50 0A                  MOV EDX,dword ptr [EAX + 0xa]
00662BFA  8A 42 3E                  MOV AL,byte ptr [EDX + 0x3e]
00662BFD  84 C0                     TEST AL,AL
00662BFF  74 06                     JZ 0x00662c07
00662C01  89 8B B3 00 00 00         MOV dword ptr [EBX + 0xb3],ECX
LAB_00662c07:
00662C07  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00662C0A  85 C0                     TEST EAX,EAX
00662C0C  0F 84 25 11 00 00         JZ 0x00663d37
00662C12  50                        PUSH EAX
00662C13  E8 F8 B4 04 00            CALL 0x006ae110
00662C18  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00662C1B  33 C0                     XOR EAX,EAX
00662C1D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00662C23  5F                        POP EDI
00662C24  5E                        POP ESI
00662C25  5B                        POP EBX
00662C26  8B E5                     MOV ESP,EBP
00662C28  5D                        POP EBP
00662C29  C2 04 00                  RET 0x4
LAB_00662c2c:
00662C2C  3D A3 00 00 00            CMP EAX,0xa3
00662C31  74 19                     JZ 0x00662c4c
00662C33  3D A8 00 00 00            CMP EAX,0xa8
00662C38  74 12                     JZ 0x00662c4c
00662C3A  3D B2 00 00 00            CMP EAX,0xb2
00662C3F  74 0B                     JZ 0x00662c4c
00662C41  3D BE 00 00 00            CMP EAX,0xbe
00662C46  74 04                     JZ 0x00662c4c
00662C48  33 C9                     XOR ECX,ECX
00662C4A  EB 05                     JMP 0x00662c51
LAB_00662c4c:
00662C4C  B9 01 00 00 00            MOV ECX,0x1
LAB_00662c51:
00662C51  85 C9                     TEST ECX,ECX
00662C53  0F 84 00 03 00 00         JZ 0x00662f59
00662C59  83 F8 01                  CMP EAX,0x1
00662C5C  7C 0C                     JL 0x00662c6a
00662C5E  83 F8 29                  CMP EAX,0x29
00662C61  7D 07                     JGE 0x00662c6a
00662C63  B9 01 00 00 00            MOV ECX,0x1
00662C68  EB 02                     JMP 0x00662c6c
LAB_00662c6a:
00662C6A  33 C9                     XOR ECX,ECX
LAB_00662c6c:
00662C6C  85 C9                     TEST ECX,ECX
00662C6E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00662C74  74 13                     JZ 0x00662c89
00662C76  85 C9                     TEST ECX,ECX
00662C78  74 0F                     JZ 0x00662c89
00662C7A  50                        PUSH EAX
00662C7B  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00662C7E  50                        PUSH EAX
00662C7F  E8 B9 14 DA FF            CALL 0x0040413d
00662C84  E9 96 00 00 00            JMP 0x00662d1f
LAB_00662c89:
00662C89  83 F8 32                  CMP EAX,0x32
00662C8C  7C 0C                     JL 0x00662c9a
00662C8E  83 F8 74                  CMP EAX,0x74
00662C91  7D 07                     JGE 0x00662c9a
00662C93  BA 01 00 00 00            MOV EDX,0x1
00662C98  EB 02                     JMP 0x00662c9c
LAB_00662c9a:
00662C9A  33 D2                     XOR EDX,EDX
LAB_00662c9c:
00662C9C  85 D2                     TEST EDX,EDX
00662C9E  74 10                     JZ 0x00662cb0
00662CA0  85 C9                     TEST ECX,ECX
00662CA2  74 0C                     JZ 0x00662cb0
00662CA4  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00662CA7  50                        PUSH EAX
00662CA8  52                        PUSH EDX
00662CA9  E8 EE 19 DA FF            CALL 0x0040469c
00662CAE  EB 6F                     JMP 0x00662d1f
LAB_00662cb0:
00662CB0  3D A3 00 00 00            CMP EAX,0xa3
00662CB5  74 19                     JZ 0x00662cd0
00662CB7  3D A8 00 00 00            CMP EAX,0xa8
00662CBC  74 12                     JZ 0x00662cd0
00662CBE  3D B2 00 00 00            CMP EAX,0xb2
00662CC3  74 0B                     JZ 0x00662cd0
00662CC5  3D BE 00 00 00            CMP EAX,0xbe
00662CCA  74 04                     JZ 0x00662cd0
00662CCC  33 D2                     XOR EDX,EDX
00662CCE  EB 05                     JMP 0x00662cd5
LAB_00662cd0:
00662CD0  BA 01 00 00 00            MOV EDX,0x1
LAB_00662cd5:
00662CD5  85 D2                     TEST EDX,EDX
00662CD7  74 10                     JZ 0x00662ce9
00662CD9  85 C9                     TEST ECX,ECX
00662CDB  74 0C                     JZ 0x00662ce9
00662CDD  50                        PUSH EAX
00662CDE  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00662CE1  50                        PUSH EAX
00662CE2  E8 B2 EA D9 FF            CALL 0x00401799
00662CE7  EB 36                     JMP 0x00662d1f
LAB_00662ce9:
00662CE9  3D DD 00 00 00            CMP EAX,0xdd
00662CEE  74 19                     JZ 0x00662d09
00662CF0  3D DE 00 00 00            CMP EAX,0xde
00662CF5  74 12                     JZ 0x00662d09
00662CF7  3D E2 00 00 00            CMP EAX,0xe2
00662CFC  74 0B                     JZ 0x00662d09
00662CFE  3D DC 00 00 00            CMP EAX,0xdc
00662D03  74 04                     JZ 0x00662d09
00662D05  33 C0                     XOR EAX,EAX
00662D07  EB 05                     JMP 0x00662d0e
LAB_00662d09:
00662D09  B8 01 00 00 00            MOV EAX,0x1
LAB_00662d0e:
00662D0E  85 C0                     TEST EAX,EAX
00662D10  74 0B                     JZ 0x00662d1d
00662D12  85 C9                     TEST ECX,ECX
00662D14  74 07                     JZ 0x00662d1d
00662D16  B8 01 00 00 00            MOV EAX,0x1
00662D1B  EB 02                     JMP 0x00662d1f
LAB_00662d1d:
00662D1D  33 C0                     XOR EAX,EAX
LAB_00662d1f:
00662D1F  85 C0                     TEST EAX,EAX
00662D21  0F 84 10 10 00 00         JZ 0x00663d37
00662D27  8B 4F 0A                  MOV ECX,dword ptr [EDI + 0xa]
00662D2A  8B 01                     MOV EAX,dword ptr [ECX]
00662D2C  05 5D FF FF FF            ADD EAX,0xffffff5d
00662D31  83 F8 1B                  CMP EAX,0x1b
00662D34  77 2B                     JA 0x00662d61
00662D36  33 D2                     XOR EDX,EDX
00662D38  8A 90 F4 3D 66 00         MOV DL,byte ptr [EAX + 0x663df4]
switchD_00662d3e::switchD:
00662D3E  FF 24 95 E0 3D 66 00      JMP dword ptr [EDX*0x4 + 0x663de0]
switchD_00662d3e::caseD_a3:
00662D45  B8 4E 00 00 00            MOV EAX,0x4e
00662D4A  EB 17                     JMP 0x00662d63
switchD_00662d3e::caseD_a8:
00662D4C  B8 44 00 00 00            MOV EAX,0x44
00662D51  EB 10                     JMP 0x00662d63
switchD_00662d3e::caseD_b2:
00662D53  B8 70 00 00 00            MOV EAX,0x70
00662D58  EB 09                     JMP 0x00662d63
switchD_00662d3e::caseD_be:
00662D5A  B8 72 00 00 00            MOV EAX,0x72
00662D5F  EB 02                     JMP 0x00662d63
switchD_00662d3e::caseD_a4:
00662D61  33 C0                     XOR EAX,EAX
LAB_00662d63:
00662D63  50                        PUSH EAX
00662D64  8B CB                     MOV ECX,EBX
00662D66  E8 4B 2C DA FF            CALL 0x004059b6
00662D6B  85 C0                     TEST EAX,EAX
00662D6D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00662D70  0F 84 BE 01 00 00         JZ 0x00662f34
00662D76  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00662D79  85 C0                     TEST EAX,EAX
00662D7B  0F 84 B3 01 00 00         JZ 0x00662f34
00662D81  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00662D84  8B 51 0A                  MOV EDX,dword ptr [ECX + 0xa]
00662D87  8A 4A 3E                  MOV CL,byte ptr [EDX + 0x3e]
00662D8A  84 C9                     TEST CL,CL
00662D8C  75 1B                     JNZ 0x00662da9
00662D8E  83 BB 9B 00 00 00 12      CMP dword ptr [EBX + 0x9b],0x12
00662D95  0F 84 99 01 00 00         JZ 0x00662f34
00662D9B  8B 8B B3 00 00 00         MOV ECX,dword ptr [EBX + 0xb3]
00662DA1  85 C9                     TEST ECX,ECX
00662DA3  0F 85 8B 01 00 00         JNZ 0x00662f34
LAB_00662da9:
00662DA9  33 C9                     XOR ECX,ECX
00662DAB  85 C0                     TEST EAX,EAX
00662DAD  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00662DB0  0F 8E 7E 01 00 00         JLE 0x00662f34
00662DB6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00662DB9  3B C8                     CMP ECX,EAX
LAB_00662dbb:
00662DBB  73 0B                     JNC 0x00662dc8
00662DBD  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00662DC0  0F AF C1                  IMUL EAX,ECX
00662DC3  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
00662DC6  EB 02                     JMP 0x00662dca
LAB_00662dc8:
00662DC8  33 C0                     XOR EAX,EAX
LAB_00662dca:
00662DCA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00662DD0  66 8B 38                  MOV DI,word ptr [EAX]
00662DD3  85 C9                     TEST ECX,ECX
00662DD5  74 10                     JZ 0x00662de7
00662DD7  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00662DDA  6A 01                     PUSH 0x1
00662DDC  57                        PUSH EDI
00662DDD  50                        PUSH EAX
00662DDE  E8 D7 FA D9 FF            CALL 0x004028ba
00662DE3  8B C8                     MOV ECX,EAX
00662DE5  EB 02                     JMP 0x00662de9
LAB_00662de7:
00662DE7  33 C9                     XOR ECX,ECX
LAB_00662de9:
00662DE9  85 C9                     TEST ECX,ECX
00662DEB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00662DEE  74 62                     JZ 0x00662e52
00662DF0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00662DF3  8B 42 0A                  MOV EAX,dword ptr [EDX + 0xa]
00662DF6  8B 00                     MOV EAX,dword ptr [EAX]
00662DF8  8D B0 5D FF FF FF         LEA ESI,[EAX + 0xffffff5d]
00662DFE  83 FE 1B                  CMP ESI,0x1b
00662E01  77 49                     JA 0x00662e4c
00662E03  33 D2                     XOR EDX,EDX
00662E05  8A 96 24 3E 66 00         MOV DL,byte ptr [ESI + 0x663e24]
switchD_00662e0b::switchD:
00662E0B  FF 24 95 10 3E 66 00      JMP dword ptr [EDX*0x4 + 0x663e10]
switchD_00662e0b::caseD_a8:
00662E12  6A 01                     PUSH 0x1
00662E14  6A 01                     PUSH 0x1
00662E16  6A 01                     PUSH 0x1
00662E18  6A 00                     PUSH 0x0
00662E1A  6A 06                     PUSH 0x6
00662E1C  E8 AD 2C DA FF            CALL 0x00405ace
00662E21  EB 2B                     JMP 0x00662e4e
switchD_00662e0b::caseD_a3:
00662E23  6A 01                     PUSH 0x1
00662E25  6A 01                     PUSH 0x1
00662E27  6A 01                     PUSH 0x1
00662E29  6A 00                     PUSH 0x0
00662E2B  6A 04                     PUSH 0x4
00662E2D  E8 9C 2C DA FF            CALL 0x00405ace
00662E32  EB 1A                     JMP 0x00662e4e
switchD_00662e0b::caseD_be:
00662E34  6A 01                     PUSH 0x1
00662E36  6A 01                     PUSH 0x1
00662E38  6A 01                     PUSH 0x1
00662E3A  6A 00                     PUSH 0x0
00662E3C  6A 08                     PUSH 0x8
00662E3E  E8 8B 2C DA FF            CALL 0x00405ace
00662E43  EB 09                     JMP 0x00662e4e
switchD_00662e0b::caseD_b2:
00662E45  B8 01 00 00 00            MOV EAX,0x1
00662E4A  EB 02                     JMP 0x00662e4e
switchD_00662e0b::caseD_a4:
00662E4C  33 C0                     XOR EAX,EAX
LAB_00662e4e:
00662E4E  85 C0                     TEST EAX,EAX
00662E50  75 1A                     JNZ 0x00662e6c
LAB_00662e52:
00662E52  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00662E55  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00662E58  41                        INC ECX
00662E59  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00662E5C  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00662E5F  3B C8                     CMP ECX,EAX
00662E61  0F 8C 54 FF FF FF         JL 0x00662dbb
00662E67  E9 C8 00 00 00            JMP 0x00662f34
LAB_00662e6c:
00662E6C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00662E6F  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
00662E72  C6 40 08 01               MOV byte ptr [EAX + 0x8],0x1
00662E76  84 C9                     TEST CL,CL
00662E78  66 89 78 0E               MOV word ptr [EAX + 0xe],DI
00662E7C  0F 84 B2 00 00 00         JZ 0x00662f34
00662E82  8B 70 0A                  MOV ESI,dword ptr [EAX + 0xa]
00662E85  B9 12 00 00 00            MOV ECX,0x12
00662E8A  8D BB AD 01 00 00         LEA EDI,[EBX + 0x1ad]
00662E90  F3 A5                     MOVSD.REP ES:EDI,ESI
00662E92  66 A5                     MOVSW ES:EDI,ESI
00662E94  8B 40 0A                  MOV EAX,dword ptr [EAX + 0xa]
00662E97  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00662E9A  8B 00                     MOV EAX,dword ptr [EAX]
00662E9C  2D A3 00 00 00            SUB EAX,0xa3
00662EA1  74 32                     JZ 0x00662ed5
00662EA3  83 E8 05                  SUB EAX,0x5
00662EA6  74 19                     JZ 0x00662ec1
00662EA8  83 E8 16                  SUB EAX,0x16
00662EAB  75 42                     JNZ 0x00662eef
00662EAD  6A 00                     PUSH 0x0
00662EAF  68 FF 00 00 00            PUSH 0xff
00662EB4  51                        PUSH ECX
00662EB5  6A FF                     PUSH -0x1
00662EB7  6A 01                     PUSH 0x1
00662EB9  6A 01                     PUSH 0x1
00662EBB  6A 00                     PUSH 0x0
00662EBD  6A 08                     PUSH 0x8
00662EBF  EB 26                     JMP 0x00662ee7
LAB_00662ec1:
00662EC1  6A 00                     PUSH 0x0
00662EC3  68 FF 00 00 00            PUSH 0xff
00662EC8  51                        PUSH ECX
00662EC9  6A FF                     PUSH -0x1
00662ECB  6A 01                     PUSH 0x1
00662ECD  6A 01                     PUSH 0x1
00662ECF  6A 00                     PUSH 0x0
00662ED1  6A 06                     PUSH 0x6
00662ED3  EB 12                     JMP 0x00662ee7
LAB_00662ed5:
00662ED5  6A 00                     PUSH 0x0
00662ED7  68 FF 00 00 00            PUSH 0xff
00662EDC  51                        PUSH ECX
00662EDD  6A FF                     PUSH -0x1
00662EDF  6A 01                     PUSH 0x1
00662EE1  6A 01                     PUSH 0x1
00662EE3  6A 00                     PUSH 0x0
00662EE5  6A 04                     PUSH 0x4
LAB_00662ee7:
00662EE7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00662EEA  E8 6A 28 DA FF            CALL 0x00405759
LAB_00662eef:
00662EEF  8B 8B B3 00 00 00         MOV ECX,dword ptr [EBX + 0xb3]
00662EF5  33 C0                     XOR EAX,EAX
00662EF7  3B C8                     CMP ECX,EAX
00662EF9  74 09                     JZ 0x00662f04
00662EFB  8B CB                     MOV ECX,EBX
00662EFD  E8 BD E5 D9 FF            CALL 0x004014bf
00662F02  33 C0                     XOR EAX,EAX
LAB_00662f04:
00662F04  89 83 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EAX
00662F0A  89 83 A3 00 00 00         MOV dword ptr [EBX + 0xa3],EAX
00662F10  89 83 A7 00 00 00         MOV dword ptr [EBX + 0xa7],EAX
00662F16  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00662F19  B9 12 00 00 00            MOV ECX,0x12
00662F1E  89 8B 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ECX
00662F24  8B 50 0A                  MOV EDX,dword ptr [EAX + 0xa]
00662F27  8A 42 3E                  MOV AL,byte ptr [EDX + 0x3e]
00662F2A  84 C0                     TEST AL,AL
00662F2C  74 06                     JZ 0x00662f34
00662F2E  89 8B B3 00 00 00         MOV dword ptr [EBX + 0xb3],ECX
LAB_00662f34:
00662F34  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00662F37  85 C0                     TEST EAX,EAX
00662F39  0F 84 F8 0D 00 00         JZ 0x00663d37
00662F3F  50                        PUSH EAX
00662F40  E8 CB B1 04 00            CALL 0x006ae110
00662F45  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00662F48  33 C0                     XOR EAX,EAX
00662F4A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00662F50  5F                        POP EDI
00662F51  5E                        POP ESI
00662F52  5B                        POP EBX
00662F53  8B E5                     MOV ESP,EBP
00662F55  5D                        POP EBP
00662F56  C2 04 00                  RET 0x4
LAB_00662f59:
00662F59  3D DD 00 00 00            CMP EAX,0xdd
00662F5E  74 19                     JZ 0x00662f79
00662F60  3D DE 00 00 00            CMP EAX,0xde
00662F65  74 12                     JZ 0x00662f79
00662F67  3D E2 00 00 00            CMP EAX,0xe2
00662F6C  74 0B                     JZ 0x00662f79
00662F6E  3D DC 00 00 00            CMP EAX,0xdc
00662F73  74 04                     JZ 0x00662f79
00662F75  33 C9                     XOR ECX,ECX
00662F77  EB 05                     JMP 0x00662f7e
LAB_00662f79:
00662F79  B9 01 00 00 00            MOV ECX,0x1
LAB_00662f7e:
00662F7E  85 C9                     TEST ECX,ECX
00662F80  0F 84 B1 0D 00 00         JZ 0x00663d37
00662F86  83 F8 01                  CMP EAX,0x1
00662F89  7C 0C                     JL 0x00662f97
00662F8B  83 F8 29                  CMP EAX,0x29
00662F8E  7D 07                     JGE 0x00662f97
00662F90  B9 01 00 00 00            MOV ECX,0x1
00662F95  EB 02                     JMP 0x00662f99
LAB_00662f97:
00662F97  33 C9                     XOR ECX,ECX
LAB_00662f99:
00662F99  85 C9                     TEST ECX,ECX
00662F9B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00662FA1  74 13                     JZ 0x00662fb6
00662FA3  85 C9                     TEST ECX,ECX
00662FA5  74 0F                     JZ 0x00662fb6
00662FA7  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00662FAA  50                        PUSH EAX
00662FAB  52                        PUSH EDX
00662FAC  E8 8C 11 DA FF            CALL 0x0040413d
00662FB1  E9 96 00 00 00            JMP 0x0066304c
LAB_00662fb6:
00662FB6  83 F8 32                  CMP EAX,0x32
00662FB9  7C 0C                     JL 0x00662fc7
00662FBB  83 F8 74                  CMP EAX,0x74
00662FBE  7D 07                     JGE 0x00662fc7
00662FC0  BA 01 00 00 00            MOV EDX,0x1
00662FC5  EB 02                     JMP 0x00662fc9
LAB_00662fc7:
00662FC7  33 D2                     XOR EDX,EDX
LAB_00662fc9:
00662FC9  85 D2                     TEST EDX,EDX
00662FCB  74 10                     JZ 0x00662fdd
00662FCD  85 C9                     TEST ECX,ECX
00662FCF  74 0C                     JZ 0x00662fdd
00662FD1  50                        PUSH EAX
00662FD2  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00662FD5  50                        PUSH EAX
00662FD6  E8 C1 16 DA FF            CALL 0x0040469c
00662FDB  EB 6F                     JMP 0x0066304c
LAB_00662fdd:
00662FDD  3D A3 00 00 00            CMP EAX,0xa3
00662FE2  74 19                     JZ 0x00662ffd
00662FE4  3D A8 00 00 00            CMP EAX,0xa8
00662FE9  74 12                     JZ 0x00662ffd
00662FEB  3D B2 00 00 00            CMP EAX,0xb2
00662FF0  74 0B                     JZ 0x00662ffd
00662FF2  3D BE 00 00 00            CMP EAX,0xbe
00662FF7  74 04                     JZ 0x00662ffd
00662FF9  33 D2                     XOR EDX,EDX
00662FFB  EB 05                     JMP 0x00663002
LAB_00662ffd:
00662FFD  BA 01 00 00 00            MOV EDX,0x1
LAB_00663002:
00663002  85 D2                     TEST EDX,EDX
00663004  74 10                     JZ 0x00663016
00663006  85 C9                     TEST ECX,ECX
00663008  74 0C                     JZ 0x00663016
0066300A  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0066300D  50                        PUSH EAX
0066300E  52                        PUSH EDX
0066300F  E8 85 E7 D9 FF            CALL 0x00401799
00663014  EB 36                     JMP 0x0066304c
LAB_00663016:
00663016  3D DD 00 00 00            CMP EAX,0xdd
0066301B  74 19                     JZ 0x00663036
0066301D  3D DE 00 00 00            CMP EAX,0xde
00663022  74 12                     JZ 0x00663036
00663024  3D E2 00 00 00            CMP EAX,0xe2
00663029  74 0B                     JZ 0x00663036
0066302B  3D DC 00 00 00            CMP EAX,0xdc
00663030  74 04                     JZ 0x00663036
00663032  33 C0                     XOR EAX,EAX
00663034  EB 05                     JMP 0x0066303b
LAB_00663036:
00663036  B8 01 00 00 00            MOV EAX,0x1
LAB_0066303b:
0066303B  85 C0                     TEST EAX,EAX
0066303D  74 0B                     JZ 0x0066304a
0066303F  85 C9                     TEST ECX,ECX
00663041  74 07                     JZ 0x0066304a
00663043  B8 01 00 00 00            MOV EAX,0x1
00663048  EB 02                     JMP 0x0066304c
LAB_0066304a:
0066304A  33 C0                     XOR EAX,EAX
LAB_0066304c:
0066304C  85 C0                     TEST EAX,EAX
0066304E  0F 84 E3 0C 00 00         JZ 0x00663d37
00663054  0F BF 43 39               MOVSX EAX,word ptr [EBX + 0x39]
00663058  85 C0                     TEST EAX,EAX
0066305A  7E 18                     JLE 0x00663074
0066305C  83 F8 02                  CMP EAX,0x2
0066305F  7E 0C                     JLE 0x0066306d
00663061  83 F8 03                  CMP EAX,0x3
00663064  75 0E                     JNZ 0x00663074
00663066  B8 5F 00 00 00            MOV EAX,0x5f
0066306B  EB 09                     JMP 0x00663076
LAB_0066306d:
0066306D  B8 52 00 00 00            MOV EAX,0x52
00663072  EB 02                     JMP 0x00663076
LAB_00663074:
00663074  33 C0                     XOR EAX,EAX
LAB_00663076:
00663076  50                        PUSH EAX
00663077  8B CB                     MOV ECX,EBX
00663079  E8 38 29 DA FF            CALL 0x004059b6
0066307E  85 C0                     TEST EAX,EAX
00663080  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00663083  0F 84 38 01 00 00         JZ 0x006631c1
00663089  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0066308C  85 C0                     TEST EAX,EAX
0066308E  0F 84 2D 01 00 00         JZ 0x006631c1
00663094  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00663097  8B 51 0A                  MOV EDX,dword ptr [ECX + 0xa]
0066309A  8A 4A 3E                  MOV CL,byte ptr [EDX + 0x3e]
0066309D  84 C9                     TEST CL,CL
0066309F  75 1B                     JNZ 0x006630bc
006630A1  83 BB 9B 00 00 00 10      CMP dword ptr [EBX + 0x9b],0x10
006630A8  0F 84 13 01 00 00         JZ 0x006631c1
006630AE  8B 8B B3 00 00 00         MOV ECX,dword ptr [EBX + 0xb3]
006630B4  85 C9                     TEST ECX,ECX
006630B6  0F 85 05 01 00 00         JNZ 0x006631c1
LAB_006630bc:
006630BC  33 C9                     XOR ECX,ECX
006630BE  85 C0                     TEST EAX,EAX
006630C0  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006630C3  0F 8E F8 00 00 00         JLE 0x006631c1
006630C9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006630CC  EB 06                     JMP 0x006630d4
LAB_006630ce:
006630CE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006630D1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_006630d4:
006630D4  3B C8                     CMP ECX,EAX
006630D6  73 0B                     JNC 0x006630e3
006630D8  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006630DB  0F AF C1                  IMUL EAX,ECX
006630DE  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
006630E1  EB 02                     JMP 0x006630e5
LAB_006630e3:
006630E3  33 C0                     XOR EAX,EAX
LAB_006630e5:
006630E5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006630EB  66 8B 38                  MOV DI,word ptr [EAX]
006630EE  85 C9                     TEST ECX,ECX
006630F0  74 10                     JZ 0x00663102
006630F2  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
006630F5  6A 01                     PUSH 0x1
006630F7  57                        PUSH EDI
006630F8  50                        PUSH EAX
006630F9  E8 BC F7 D9 FF            CALL 0x004028ba
006630FE  8B F0                     MOV ESI,EAX
00663100  EB 02                     JMP 0x00663104
LAB_00663102:
00663102  33 F6                     XOR ESI,ESI
LAB_00663104:
00663104  85 F6                     TEST ESI,ESI
00663106  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00663109  74 2A                     JZ 0x00663135
0066310B  8B CE                     MOV ECX,ESI
0066310D  E8 5E 23 DA FF            CALL 0x00405470
00663112  85 C0                     TEST EAX,EAX
00663114  74 19                     JZ 0x0066312f
00663116  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
0066311D  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
00663123  49                        DEC ECX
00663124  3B C1                     CMP EAX,ECX
00663126  7D 07                     JGE 0x0066312f
00663128  B8 01 00 00 00            MOV EAX,0x1
0066312D  EB 02                     JMP 0x00663131
LAB_0066312f:
0066312F  33 C0                     XOR EAX,EAX
LAB_00663131:
00663131  85 C0                     TEST EAX,EAX
00663133  75 13                     JNZ 0x00663148
LAB_00663135:
00663135  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00663138  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0066313B  41                        INC ECX
0066313C  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0066313F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00663142  3B C8                     CMP ECX,EAX
00663144  7C 88                     JL 0x006630ce
00663146  EB 79                     JMP 0x006631c1
LAB_00663148:
00663148  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0066314B  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
0066314E  C6 40 08 01               MOV byte ptr [EAX + 0x8],0x1
00663152  84 C9                     TEST CL,CL
00663154  66 89 78 0E               MOV word ptr [EAX + 0xe],DI
00663158  74 67                     JZ 0x006631c1
0066315A  8B 70 0A                  MOV ESI,dword ptr [EAX + 0xa]
0066315D  B9 12 00 00 00            MOV ECX,0x12
00663162  8D BB AD 01 00 00         LEA EDI,[EBX + 0x1ad]
00663168  F3 A5                     MOVSD.REP ES:EDI,ESI
0066316A  66 A5                     MOVSW ES:EDI,ESI
0066316C  8B 40 0A                  MOV EAX,dword ptr [EAX + 0xa]
0066316F  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
00663172  8B 10                     MOV EDX,dword ptr [EAX]
00663174  51                        PUSH ECX
00663175  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00663178  52                        PUSH EDX
00663179  E8 B8 E9 D9 FF            CALL 0x00401b36
0066317E  8B 83 B3 00 00 00         MOV EAX,dword ptr [EBX + 0xb3]
00663184  85 C0                     TEST EAX,EAX
00663186  74 07                     JZ 0x0066318f
00663188  8B CB                     MOV ECX,EBX
0066318A  E8 30 E3 D9 FF            CALL 0x004014bf
LAB_0066318f:
0066318F  33 C0                     XOR EAX,EAX
00663191  B9 12 00 00 00            MOV ECX,0x12
00663196  89 83 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EAX
0066319C  89 83 A3 00 00 00         MOV dword ptr [EBX + 0xa3],EAX
006631A2  89 83 A7 00 00 00         MOV dword ptr [EBX + 0xa7],EAX
006631A8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006631AB  89 8B 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ECX
006631B1  8B 50 0A                  MOV EDX,dword ptr [EAX + 0xa]
006631B4  8A 42 3E                  MOV AL,byte ptr [EDX + 0x3e]
006631B7  84 C0                     TEST AL,AL
006631B9  74 06                     JZ 0x006631c1
006631BB  89 8B B3 00 00 00         MOV dword ptr [EBX + 0xb3],ECX
LAB_006631c1:
006631C1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006631C4  85 C0                     TEST EAX,EAX
006631C6  0F 84 6B 0B 00 00         JZ 0x00663d37
006631CC  50                        PUSH EAX
006631CD  E8 3E AF 04 00            CALL 0x006ae110
006631D2  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006631D5  33 C0                     XOR EAX,EAX
006631D7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006631DD  5F                        POP EDI
006631DE  5E                        POP ESI
006631DF  5B                        POP EBX
006631E0  8B E5                     MOV ESP,EBP
006631E2  5D                        POP EBP
006631E3  C2 04 00                  RET 0x4
switchD_00662290::caseD_5:
006631E6  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
006631E9  8B 08                     MOV ECX,dword ptr [EAX]
006631EB  83 F9 32                  CMP ECX,0x32
006631EE  72 0C                     JC 0x006631fc
006631F0  83 F9 74                  CMP ECX,0x74
006631F3  73 07                     JNC 0x006631fc
006631F5  BA 01 00 00 00            MOV EDX,0x1
006631FA  EB 02                     JMP 0x006631fe
LAB_006631fc:
006631FC  33 D2                     XOR EDX,EDX
LAB_006631fe:
006631FE  3B D3                     CMP EDX,EBX
00663200  0F 84 37 01 00 00         JZ 0x0066333d
00663206  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00663209  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0066320C  8B 8B B5 01 00 00         MOV ECX,dword ptr [EBX + 0x1b5]
00663212  3B CA                     CMP ECX,EDX
00663214  0F 84 1D 0B 00 00         JZ 0x00663d37
0066321A  66 8B 48 1A               MOV CX,word ptr [EAX + 0x1a]
0066321E  66 8B 50 18               MOV DX,word ptr [EAX + 0x18]
00663222  66 8B 40 16               MOV AX,word ptr [EAX + 0x16]
00663226  66 85 C0                  TEST AX,AX
00663229  7C 53                     JL 0x0066327e
0066322B  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
00663232  66 3B C6                  CMP AX,SI
00663235  7D 47                     JGE 0x0066327e
00663237  66 85 D2                  TEST DX,DX
0066323A  7C 42                     JL 0x0066327e
0066323C  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00663243  7D 39                     JGE 0x0066327e
00663245  66 85 C9                  TEST CX,CX
00663248  7C 34                     JL 0x0066327e
0066324A  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00663251  7D 2B                     JGE 0x0066327e
00663253  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0066325A  0F BF C9                  MOVSX ECX,CX
0066325D  0F AF F9                  IMUL EDI,ECX
00663260  0F BF CE                  MOVSX ECX,SI
00663263  0F BF D2                  MOVSX EDX,DX
00663266  0F AF CA                  IMUL ECX,EDX
00663269  0F BF C0                  MOVSX EAX,AX
0066326C  03 F9                     ADD EDI,ECX
0066326E  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00663274  03 F8                     ADD EDI,EAX
00663276  8B 34 F9                  MOV ESI,dword ptr [ECX + EDI*0x8]
00663279  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0066327C  EB 02                     JMP 0x00663280
LAB_0066327e:
0066327E  33 F6                     XOR ESI,ESI
LAB_00663280:
00663280  85 F6                     TEST ESI,ESI
00663282  0F 84 9D 00 00 00         JZ 0x00663325
00663288  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0066328B  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0066328E  3B D0                     CMP EDX,EAX
00663290  0F 85 8F 00 00 00         JNZ 0x00663325
00663296  8B 06                     MOV EAX,dword ptr [ESI]
00663298  8B CE                     MOV ECX,ESI
0066329A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0066329D  8B 4F 09                  MOV ECX,dword ptr [EDI + 0x9]
006632A0  3B 01                     CMP EAX,dword ptr [ECX]
006632A2  75 18                     JNZ 0x006632bc
006632A4  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006632A7  C6 47 08 01               MOV byte ptr [EDI + 0x8],0x1
006632AB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006632B1  33 C0                     XOR EAX,EAX
006632B3  5F                        POP EDI
006632B4  5E                        POP ESI
006632B5  5B                        POP EBX
006632B6  8B E5                     MOV ESP,EBP
006632B8  5D                        POP EBP
006632B9  C2 04 00                  RET 0x4
LAB_006632bc:
006632BC  8B 16                     MOV EDX,dword ptr [ESI]
006632BE  8B CE                     MOV ECX,ESI
006632C0  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006632C3  83 F8 78                  CMP EAX,0x78
006632C6  74 18                     JZ 0x006632e0
006632C8  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006632CB  C6 47 08 FF               MOV byte ptr [EDI + 0x8],0xff
006632CF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006632D5  33 C0                     XOR EAX,EAX
006632D7  5F                        POP EDI
006632D8  5E                        POP ESI
006632D9  5B                        POP EBX
006632DA  8B E5                     MOV ESP,EBP
006632DC  5D                        POP EBP
006632DD  C2 04 00                  RET 0x4
LAB_006632e0:
006632E0  8B 06                     MOV EAX,dword ptr [ESI]
006632E2  8B CE                     MOV ECX,ESI
006632E4  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
006632E7  83 F8 78                  CMP EAX,0x78
006632EA  75 08                     JNZ 0x006632f4
006632EC  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
006632F2  EB 02                     JMP 0x006632f6
LAB_006632f4:
006632F4  33 C0                     XOR EAX,EAX
LAB_006632f6:
006632F6  8B 4F 09                  MOV ECX,dword ptr [EDI + 0x9]
006632F9  3B 01                     CMP EAX,dword ptr [ECX]
006632FB  75 28                     JNZ 0x00663325
006632FD  8B 16                     MOV EDX,dword ptr [ESI]
006632FF  8B CE                     MOV ECX,ESI
00663301  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00663304  83 F8 78                  CMP EAX,0x78
00663307  75 08                     JNZ 0x00663311
00663309  8B B6 69 02 00 00         MOV ESI,dword ptr [ESI + 0x269]
0066330F  EB 03                     JMP 0x00663314
LAB_00663311:
00663311  83 CE FF                  OR ESI,0xffffffff
LAB_00663314:
00663314  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
00663317  33 C9                     XOR ECX,ECX
00663319  66 8B 48 0C               MOV CX,word ptr [EAX + 0xc]
0066331D  3B F1                     CMP ESI,ECX
0066331F  0F 84 12 0A 00 00         JZ 0x00663d37
LAB_00663325:
00663325  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663328  C6 47 08 FF               MOV byte ptr [EDI + 0x8],0xff
0066332C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663332  33 C0                     XOR EAX,EAX
00663334  5F                        POP EDI
00663335  5E                        POP ESI
00663336  5B                        POP EBX
00663337  8B E5                     MOV ESP,EBP
00663339  5D                        POP EBP
0066333A  C2 04 00                  RET 0x4
LAB_0066333d:
0066333D  83 F9 01                  CMP ECX,0x1
00663340  72 0C                     JC 0x0066334e
00663342  83 F9 29                  CMP ECX,0x29
00663345  73 07                     JNC 0x0066334e
00663347  B9 01 00 00 00            MOV ECX,0x1
0066334C  EB 02                     JMP 0x00663350
LAB_0066334e:
0066334E  33 C9                     XOR ECX,ECX
LAB_00663350:
00663350  3B CB                     CMP ECX,EBX
00663352  0F 84 DF 09 00 00         JZ 0x00663d37
00663358  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066335E  3B CB                     CMP ECX,EBX
00663360  74 15                     JZ 0x00663377
00663362  66 8B 50 38               MOV DX,word ptr [EAX + 0x38]
00663366  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00663369  6A 01                     PUSH 0x1
0066336B  52                        PUSH EDX
0066336C  8A 50 24                  MOV DL,byte ptr [EAX + 0x24]
0066336F  52                        PUSH EDX
00663370  E8 45 F5 D9 FF            CALL 0x004028ba
00663375  EB 02                     JMP 0x00663379
LAB_00663377:
00663377  33 C0                     XOR EAX,EAX
LAB_00663379:
00663379  3B C3                     CMP EAX,EBX
0066337B  74 A8                     JZ 0x00663325
0066337D  8B 4F 09                  MOV ECX,dword ptr [EDI + 0x9]
00663380  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
00663383  51                        PUSH ECX
00663384  6A 01                     PUSH 0x1
00663386  8B C8                     MOV ECX,EAX
00663388  E8 9E 24 DA FF            CALL 0x0040582b
0066338D  85 C0                     TEST EAX,EAX
0066338F  0F 85 A2 09 00 00         JNZ 0x00663d37
00663395  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663398  C6 47 08 01               MOV byte ptr [EDI + 0x8],0x1
0066339C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006633A2  5F                        POP EDI
006633A3  5E                        POP ESI
006633A4  5B                        POP EBX
006633A5  8B E5                     MOV ESP,EBP
006633A7  5D                        POP EBP
006633A8  C2 04 00                  RET 0x4
switchD_00662290::caseD_7:
006633AB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006633AE  33 C9                     XOR ECX,ECX
006633B0  8B 92 0B 02 00 00         MOV EDX,dword ptr [EDX + 0x20b]
006633B6  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
006633B9  3B F3                     CMP ESI,EBX
006633BB  0F 8E 76 09 00 00         JLE 0x00663d37
006633C1  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006633C4  3B CE                     CMP ECX,ESI
006633C6  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
LAB_006633c9:
006633C9  73 0D                     JNC 0x006633d8
006633CB  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006633CE  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
006633D1  0F AF C1                  IMUL EAX,ECX
006633D4  03 C7                     ADD EAX,EDI
006633D6  EB 02                     JMP 0x006633da
LAB_006633d8:
006633D8  33 C0                     XOR EAX,EAX
LAB_006633da:
006633DA  3B 58 24                  CMP EBX,dword ptr [EAX + 0x24]
006633DD  74 19                     JZ 0x006633f8
006633DF  41                        INC ECX
006633E0  3B CE                     CMP ECX,ESI
006633E2  7C E5                     JL 0x006633c9
006633E4  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006633E7  33 C0                     XOR EAX,EAX
006633E9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006633EF  5F                        POP EDI
006633F0  5E                        POP ESI
006633F1  5B                        POP EBX
006633F2  8B E5                     MOV ESP,EBP
006633F4  5D                        POP EBP
006633F5  C2 04 00                  RET 0x4
LAB_006633f8:
006633F8  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
006633FF  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663402  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663408  33 C0                     XOR EAX,EAX
0066340A  5F                        POP EDI
0066340B  5E                        POP ESI
0066340C  5B                        POP EBX
0066340D  8B E5                     MOV ESP,EBP
0066340F  5D                        POP EBP
00663410  C2 04 00                  RET 0x4
switchD_00662290::caseD_9:
00663413  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00663416  BB 01 00 00 00            MOV EBX,0x1
0066341B  38 9E 63 01 00 00         CMP byte ptr [ESI + 0x163],BL
00663421  75 70                     JNZ 0x00663493
00663423  8A 47 0D                  MOV AL,byte ptr [EDI + 0xd]
00663426  84 C0                     TEST AL,AL
00663428  75 2C                     JNZ 0x00663456
0066342A  66 83 7E 7B 10            CMP word ptr [ESI + 0x7b],0x10
0066342F  75 11                     JNZ 0x00663442
00663431  8B CE                     MOV ECX,ESI
00663433  E8 03 00 DA FF            CALL 0x0040343b
00663438  83 F8 05                  CMP EAX,0x5
0066343B  7C 05                     JL 0x00663442
0066343D  89 5F 08                  MOV dword ptr [EDI + 0x8],EBX
00663440  EB 07                     JMP 0x00663449
LAB_00663442:
00663442  C7 47 08 FF FF FF FF      MOV dword ptr [EDI + 0x8],0xffffffff
LAB_00663449:
00663449  8A 47 0C                  MOV AL,byte ptr [EDI + 0xc]
0066344C  84 C0                     TEST AL,AL
0066344E  74 43                     JZ 0x00663493
00663450  8B 4F 0E                  MOV ECX,dword ptr [EDI + 0xe]
00663453  51                        PUSH ECX
00663454  EB 36                     JMP 0x0066348c
LAB_00663456:
00663456  8B 96 2F 02 00 00         MOV EDX,dword ptr [ESI + 0x22f]
0066345C  83 7A 0C 0A               CMP dword ptr [EDX + 0xc],0xa
00663460  73 31                     JNC 0x00663493
00663462  66 83 7E 7B 10            CMP word ptr [ESI + 0x7b],0x10
00663467  75 11                     JNZ 0x0066347a
00663469  8B CE                     MOV ECX,ESI
0066346B  E8 CB FF D9 FF            CALL 0x0040343b
00663470  83 F8 05                  CMP EAX,0x5
00663473  7C 05                     JL 0x0066347a
00663475  89 5F 08                  MOV dword ptr [EDI + 0x8],EBX
00663478  EB 07                     JMP 0x00663481
LAB_0066347a:
0066347A  C7 47 08 FF FF FF FF      MOV dword ptr [EDI + 0x8],0xffffffff
LAB_00663481:
00663481  8A 47 0C                  MOV AL,byte ptr [EDI + 0xc]
00663484  84 C0                     TEST AL,AL
00663486  74 0B                     JZ 0x00663493
00663488  8B 47 0E                  MOV EAX,dword ptr [EDI + 0xe]
0066348B  50                        PUSH EAX
LAB_0066348c:
0066348C  8B CE                     MOV ECX,ESI
0066348E  E8 94 F5 D9 FF            CALL 0x00402a27
LAB_00663493:
00663493  80 BE 22 01 00 00 01      CMP byte ptr [ESI + 0x122],0x1
0066349A  0F 85 97 08 00 00         JNZ 0x00663d37
006634A0  8A 47 0C                  MOV AL,byte ptr [EDI + 0xc]
006634A3  84 C0                     TEST AL,AL
006634A5  0F 84 8C 08 00 00         JZ 0x00663d37
006634AB  8B 4F 0E                  MOV ECX,dword ptr [EDI + 0xe]
006634AE  6A 05                     PUSH 0x5
006634B0  51                        PUSH ECX
006634B1  8B CE                     MOV ECX,ESI
006634B3  E8 C3 0A DA FF            CALL 0x00403f7b
006634B8  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006634BB  33 C0                     XOR EAX,EAX
006634BD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006634C3  5F                        POP EDI
006634C4  5E                        POP ESI
006634C5  5B                        POP EBX
006634C6  8B E5                     MOV ESP,EBP
006634C8  5D                        POP EBP
006634C9  C2 04 00                  RET 0x4
switchD_00662290::caseD_a:
006634CC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006634CF  BF 19 00 00 00            MOV EDI,0x19
006634D4  39 B9 9B 00 00 00         CMP dword ptr [ECX + 0x9b],EDI
006634DA  0F 85 57 08 00 00         JNZ 0x00663d37
006634E0  0F BF 41 39               MOVSX EAX,word ptr [ECX + 0x39]
006634E4  33 DB                     XOR EBX,EBX
006634E6  3B C3                     CMP EAX,EBX
006634E8  7E 18                     JLE 0x00663502
006634EA  83 F8 02                  CMP EAX,0x2
006634ED  7E 0C                     JLE 0x006634fb
006634EF  83 F8 03                  CMP EAX,0x3
006634F2  75 0E                     JNZ 0x00663502
006634F4  BA 60 00 00 00            MOV EDX,0x60
006634F9  EB 09                     JMP 0x00663504
LAB_006634fb:
006634FB  BA 3B 00 00 00            MOV EDX,0x3b
00663500  EB 02                     JMP 0x00663504
LAB_00663502:
00663502  33 D2                     XOR EDX,EDX
LAB_00663504:
00663504  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00663507  8B 76 0B                  MOV ESI,dword ptr [ESI + 0xb]
0066350A  3B F2                     CMP ESI,EDX
0066350C  75 2C                     JNZ 0x0066353a
LAB_0066350e:
0066350E  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663511  89 B9 9B 00 00 00         MOV dword ptr [ECX + 0x9b],EDI
00663517  89 99 9F 00 00 00         MOV dword ptr [ECX + 0x9f],EBX
0066351D  89 99 A3 00 00 00         MOV dword ptr [ECX + 0xa3],EBX
00663523  89 99 A7 00 00 00         MOV dword ptr [ECX + 0xa7],EBX
00663529  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0066352F  33 C0                     XOR EAX,EAX
00663531  5F                        POP EDI
00663532  5E                        POP ESI
00663533  5B                        POP EBX
00663534  8B E5                     MOV ESP,EBP
00663536  5D                        POP EBP
00663537  C2 04 00                  RET 0x4
LAB_0066353a:
0066353A  8B 91 16 01 00 00         MOV EDX,dword ptr [ECX + 0x116]
00663540  81 EA DD 00 00 00         SUB EDX,0xdd
00663546  74 28                     JZ 0x00663570
00663548  4A                        DEC EDX
00663549  74 19                     JZ 0x00663564
0066354B  83 EA 02                  SUB EDX,0x2
0066354E  74 04                     JZ 0x00663554
00663550  33 C0                     XOR EAX,EAX
00663552  EB 28                     JMP 0x0066357c
LAB_00663554:
00663554  33 D2                     XOR EDX,EDX
00663556  83 F8 03                  CMP EAX,0x3
00663559  0F 95 C2                  SETNZ DL
0066355C  4A                        DEC EDX
0066355D  83 E2 61                  AND EDX,0x61
00663560  8B C2                     MOV EAX,EDX
00663562  EB 18                     JMP 0x0066357c
LAB_00663564:
00663564  83 E8 03                  SUB EAX,0x3
00663567  F7 D8                     NEG EAX
00663569  1B C0                     SBB EAX,EAX
0066356B  83 E0 4F                  AND EAX,0x4f
0066356E  EB 0C                     JMP 0x0066357c
LAB_00663570:
00663570  83 E8 03                  SUB EAX,0x3
00663573  F7 D8                     NEG EAX
00663575  1B C0                     SBB EAX,EAX
00663577  24 DB                     AND AL,0xdb
00663579  83 C0 5E                  ADD EAX,0x5e
LAB_0066357c:
0066357C  3B F0                     CMP ESI,EAX
0066357E  0F 85 B3 07 00 00         JNZ 0x00663d37
00663584  EB 88                     JMP 0x0066350e
switchD_00662290::caseD_10:
00663586  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00663589  66 81 78 7B 00 80         CMP word ptr [EAX + 0x7b],0x8000
0066358F  0F 85 A2 07 00 00         JNZ 0x00663d37
00663595  83 B8 9B 00 00 00 78      CMP dword ptr [EAX + 0x9b],0x78
0066359C  0F 85 95 07 00 00         JNZ 0x00663d37
006635A2  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006635A5  C7 80 9B 00 00 00 33 00 00 00  MOV dword ptr [EAX + 0x9b],0x33
006635AF  89 98 9F 00 00 00         MOV dword ptr [EAX + 0x9f],EBX
006635B5  89 98 A3 00 00 00         MOV dword ptr [EAX + 0xa3],EBX
006635BB  89 98 A7 00 00 00         MOV dword ptr [EAX + 0xa7],EBX
006635C1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006635C7  33 C0                     XOR EAX,EAX
006635C9  5F                        POP EDI
006635CA  5E                        POP ESI
006635CB  5B                        POP EBX
006635CC  8B E5                     MOV ESP,EBP
006635CE  5D                        POP EBP
006635CF  C2 04 00                  RET 0x4
switchD_00662290::caseD_c:
006635D2  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006635D5  8A 86 FF 00 00 00         MOV AL,byte ptr [ESI + 0xff]
006635DB  84 C0                     TEST AL,AL
006635DD  0F 84 54 07 00 00         JZ 0x00663d37
006635E3  0F BF 46 39               MOVSX EAX,word ptr [ESI + 0x39]
006635E7  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006635EA  50                        PUSH EAX
006635EB  8B 11                     MOV EDX,dword ptr [ECX]
006635ED  52                        PUSH EDX
006635EE  E8 A1 1D DA FF            CALL 0x00405394
006635F3  83 C4 08                  ADD ESP,0x8
006635F6  66 39 46 7B               CMP word ptr [ESI + 0x7b],AX
006635FA  0F 85 37 07 00 00         JNZ 0x00663d37
00663600  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00663603  6A FF                     PUSH -0x1
00663605  50                        PUSH EAX
00663606  8B CE                     MOV ECX,ESI
00663608  E8 BC F7 D9 FF            CALL 0x00402dc9
0066360D  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00663610  39 59 24                  CMP dword ptr [ECX + 0x24],EBX
00663613  0F 84 1E 07 00 00         JZ 0x00663d37
00663619  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0066361C  C7 47 08 01 00 00 00      MOV dword ptr [EDI + 0x8],0x1
00663623  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663629  33 C0                     XOR EAX,EAX
0066362B  5F                        POP EDI
0066362C  5E                        POP ESI
0066362D  5B                        POP EBX
0066362E  8B E5                     MOV ESP,EBP
00663630  5D                        POP EBP
00663631  C2 04 00                  RET 0x4
switchD_00662290::caseD_d:
00663634  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00663637  33 C0                     XOR EAX,EAX
00663639  66 8B 41 7B               MOV AX,word ptr [ECX + 0x7b]
0066363D  83 F8 20                  CMP EAX,0x20
00663640  7F 29                     JG 0x0066366b
00663642  74 47                     JZ 0x0066368b
00663644  83 E8 02                  SUB EAX,0x2
00663647  0F 84 EA 06 00 00         JZ 0x00663d37
0066364D  83 E8 0E                  SUB EAX,0xe
00663650  74 39                     JZ 0x0066368b
00663652  E8 9A E8 D9 FF            CALL 0x00401ef1
00663657  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0066365A  33 C0                     XOR EAX,EAX
0066365C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663662  5F                        POP EDI
00663663  5E                        POP ESI
00663664  5B                        POP EBX
00663665  8B E5                     MOV ESP,EBP
00663667  5D                        POP EBP
00663668  C2 04 00                  RET 0x4
LAB_0066366b:
0066366B  3D 00 80 00 00            CMP EAX,0x8000
00663670  74 19                     JZ 0x0066368b
00663672  E8 7A E8 D9 FF            CALL 0x00401ef1
00663677  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0066367A  33 C0                     XOR EAX,EAX
0066367C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663682  5F                        POP EDI
00663683  5E                        POP ESI
00663684  5B                        POP EBX
00663685  8B E5                     MOV ESP,EBP
00663687  5D                        POP EBP
00663688  C2 04 00                  RET 0x4
LAB_0066368b:
0066368B  E8 FD DD D9 FF            CALL 0x0040148d
00663690  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663693  33 C0                     XOR EAX,EAX
00663695  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0066369B  5F                        POP EDI
0066369C  5E                        POP ESI
0066369D  5B                        POP EBX
0066369E  8B E5                     MOV ESP,EBP
006636A0  5D                        POP EBP
006636A1  C2 04 00                  RET 0x4
switchD_00662290::caseD_f:
006636A4  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
006636A7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006636AA  0F BF 48 03               MOVSX ECX,word ptr [EAX + 0x3]
006636AE  0F BF 50 01               MOVSX EDX,word ptr [EAX + 0x1]
006636B2  0F BF 46 39               MOVSX EAX,word ptr [ESI + 0x39]
006636B6  3B C3                     CMP EAX,EBX
006636B8  7E 20                     JLE 0x006636da
006636BA  83 F8 02                  CMP EAX,0x2
006636BD  7E 14                     JLE 0x006636d3
006636BF  83 F8 03                  CMP EAX,0x3
006636C2  75 16                     JNZ 0x006636da
006636C4  51                        PUSH ECX
006636C5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006636CB  52                        PUSH EDX
006636CC  E8 6B 01 DA FF            CALL 0x0040383c
006636D1  EB 09                     JMP 0x006636dc
LAB_006636d3:
006636D3  B8 35 00 00 00            MOV EAX,0x35
006636D8  EB 02                     JMP 0x006636dc
LAB_006636da:
006636DA  33 C0                     XOR EAX,EAX
LAB_006636dc:
006636DC  50                        PUSH EAX
006636DD  8B CE                     MOV ECX,ESI
006636DF  E8 D2 22 DA FF            CALL 0x004059b6
006636E4  3B C3                     CMP EAX,EBX
006636E6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006636E9  0F 84 AF 00 00 00         JZ 0x0066379e
006636EF  8B D0                     MOV EDX,EAX
006636F1  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006636F4  85 C0                     TEST EAX,EAX
006636F6  0F 84 A2 00 00 00         JZ 0x0066379e
006636FC  33 FF                     XOR EDI,EDI
006636FE  85 C0                     TEST EAX,EAX
00663700  0F 8E 98 00 00 00         JLE 0x0066379e
00663706  3B F8                     CMP EDI,EAX
LAB_00663708:
00663708  73 10                     JNC 0x0066371a
0066370A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066370D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00663710  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00663713  0F AF C7                  IMUL EAX,EDI
00663716  03 C2                     ADD EAX,EDX
00663718  EB 02                     JMP 0x0066371c
LAB_0066371a:
0066371A  33 C0                     XOR EAX,EAX
LAB_0066371c:
0066371C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00663722  66 8B 18                  MOV BX,word ptr [EAX]
00663725  85 C9                     TEST ECX,ECX
00663727  74 13                     JZ 0x0066373c
00663729  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066372C  6A 01                     PUSH 0x1
0066372E  53                        PUSH EBX
0066372F  8A 50 24                  MOV DL,byte ptr [EAX + 0x24]
00663732  52                        PUSH EDX
00663733  E8 82 F1 D9 FF            CALL 0x004028ba
00663738  8B F0                     MOV ESI,EAX
0066373A  EB 02                     JMP 0x0066373e
LAB_0066373c:
0066373C  33 F6                     XOR ESI,ESI
LAB_0066373e:
0066373E  85 F6                     TEST ESI,ESI
00663740  74 1D                     JZ 0x0066375f
00663742  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00663745  6A 01                     PUSH 0x1
00663747  8B 40 0A                  MOV EAX,dword ptr [EAX + 0xa]
0066374A  0F BF 48 03               MOVSX ECX,word ptr [EAX + 0x3]
0066374E  0F BF 40 01               MOVSX EAX,word ptr [EAX + 0x1]
00663752  51                        PUSH ECX
00663753  50                        PUSH EAX
00663754  8B CE                     MOV ECX,ESI
00663756  E8 9A E3 D9 FF            CALL 0x00401af5
0066375B  85 C0                     TEST EAX,EAX
0066375D  75 0D                     JNZ 0x0066376c
LAB_0066375f:
0066375F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00663762  47                        INC EDI
00663763  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00663766  3B F8                     CMP EDI,EAX
00663768  7C 9E                     JL 0x00663708
0066376A  EB 32                     JMP 0x0066379e
LAB_0066376c:
0066376C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0066376F  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
00663772  C6 40 08 01               MOV byte ptr [EAX + 0x8],0x1
00663776  84 C9                     TEST CL,CL
00663778  66 89 58 0E               MOV word ptr [EAX + 0xe],BX
0066377C  74 20                     JZ 0x0066379e
0066377E  8B 50 0A                  MOV EDX,dword ptr [EAX + 0xa]
00663781  6A 00                     PUSH 0x0
00663783  68 FF 00 00 00            PUSH 0xff
00663788  6A 00                     PUSH 0x0
0066378A  0F BF 42 01               MOVSX EAX,word ptr [EDX + 0x1]
0066378E  6A FF                     PUSH -0x1
00663790  6A 01                     PUSH 0x1
00663792  6A 01                     PUSH 0x1
00663794  50                        PUSH EAX
00663795  6A 02                     PUSH 0x2
00663797  8B CE                     MOV ECX,ESI
00663799  E8 BB 1F DA FF            CALL 0x00405759
LAB_0066379e:
0066379E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006637A1  85 C0                     TEST EAX,EAX
006637A3  0F 84 8E 05 00 00         JZ 0x00663d37
006637A9  50                        PUSH EAX
006637AA  E8 61 A9 04 00            CALL 0x006ae110
006637AF  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006637B2  33 C0                     XOR EAX,EAX
006637B4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006637BA  5F                        POP EDI
006637BB  5E                        POP ESI
006637BC  5B                        POP EBX
006637BD  8B E5                     MOV ESP,EBP
006637BF  5D                        POP EBP
006637C0  C2 04 00                  RET 0x4
switchD_00662290::caseD_11:
006637C3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006637C6  C6 47 08 00               MOV byte ptr [EDI + 0x8],0x0
006637CA  66 81 7E 7B 00 80         CMP word ptr [ESI + 0x7b],0x8000
006637D0  0F 85 61 05 00 00         JNZ 0x00663d37
006637D6  83 BE 9B 00 00 00 34      CMP dword ptr [ESI + 0x9b],0x34
006637DD  75 04                     JNZ 0x006637e3
006637DF  C6 47 08 01               MOV byte ptr [EDI + 0x8],0x1
LAB_006637e3:
006637E3  8A 47 08                  MOV AL,byte ptr [EDI + 0x8]
006637E6  84 C0                     TEST AL,AL
006637E8  75 4A                     JNZ 0x00663834
006637EA  66 8B 4E 39               MOV CX,word ptr [ESI + 0x39]
006637EE  0F BF C1                  MOVSX EAX,CX
006637F1  3B C3                     CMP EAX,EBX
006637F3  7E 18                     JLE 0x0066380d
006637F5  83 F8 02                  CMP EAX,0x2
006637F8  7E 0C                     JLE 0x00663806
006637FA  83 F8 03                  CMP EAX,0x3
006637FD  75 0E                     JNZ 0x0066380d
006637FF  B8 62 00 00 00            MOV EAX,0x62
00663804  EB 09                     JMP 0x0066380f
LAB_00663806:
00663806  B8 33 00 00 00            MOV EAX,0x33
0066380B  EB 02                     JMP 0x0066380f
LAB_0066380d:
0066380D  33 C0                     XOR EAX,EAX
LAB_0066380f:
0066380F  33 D2                     XOR EDX,EDX
00663811  66 83 F9 03               CMP CX,0x3
00663815  0F 95 C2                  SETNZ DL
00663818  4A                        DEC EDX
00663819  53                        PUSH EBX
0066381A  83 E2 02                  AND EDX,0x2
0066381D  8B CE                     MOV ECX,ESI
0066381F  52                        PUSH EDX
00663820  50                        PUSH EAX
00663821  E8 BB 00 DA FF            CALL 0x004038e1
00663826  3B C3                     CMP EAX,EBX
00663828  74 0A                     JZ 0x00663834
0066382A  50                        PUSH EAX
0066382B  C6 47 08 01               MOV byte ptr [EDI + 0x8],0x1
0066382F  E8 DC A8 04 00            CALL 0x006ae110
LAB_00663834:
00663834  80 7F 08 01               CMP byte ptr [EDI + 0x8],0x1
00663838  0F 85 F9 04 00 00         JNZ 0x00663d37
0066383E  8A 47 09                  MOV AL,byte ptr [EDI + 0x9]
00663841  84 C0                     TEST AL,AL
00663843  7E 11                     JLE 0x00663856
00663845  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
00663848  3B C3                     CMP EAX,EBX
0066384A  74 0A                     JZ 0x00663856
0066384C  6A 01                     PUSH 0x1
0066384E  50                        PUSH EAX
0066384F  8B CE                     MOV ECX,ESI
00663851  E8 94 E8 D9 FF            CALL 0x004020ea
LAB_00663856:
00663856  8B CE                     MOV ECX,ESI
00663858  E8 DE FB D9 FF            CALL 0x0040343b
0066385D  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663860  66 89 47 0E               MOV word ptr [EDI + 0xe],AX
00663864  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0066386A  33 C0                     XOR EAX,EAX
0066386C  5F                        POP EDI
0066386D  5E                        POP ESI
0066386E  5B                        POP EBX
0066386F  8B E5                     MOV ESP,EBP
00663871  5D                        POP EBP
00663872  C2 04 00                  RET 0x4
switchD_00662290::caseD_12:
00663875  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00663878  66 81 79 7B 00 80         CMP word ptr [ECX + 0x7b],0x8000
0066387E  0F 85 B3 04 00 00         JNZ 0x00663d37
00663884  66 C7 47 0F 00 00         MOV word ptr [EDI + 0xf],0x0
0066388A  E8 40 E0 D9 FF            CALL 0x004018cf
0066388F  8B D8                     MOV EBX,EAX
00663891  85 DB                     TEST EBX,EBX
00663893  0F 84 9E 04 00 00         JZ 0x00663d37
00663899  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0066389C  33 FF                     XOR EDI,EDI
0066389E  85 C0                     TEST EAX,EAX
006638A0  0F 8E 9F 00 00 00         JLE 0x00663945
006638A6  3B F8                     CMP EDI,EAX
LAB_006638a8:
006638A8  73 0D                     JNC 0x006638b7
006638AA  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006638AD  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
006638B0  0F AF C7                  IMUL EAX,EDI
006638B3  03 C1                     ADD EAX,ECX
006638B5  EB 02                     JMP 0x006638b9
LAB_006638b7:
006638B7  33 C0                     XOR EAX,EAX
LAB_006638b9:
006638B9  66 8B 00                  MOV AX,word ptr [EAX]
006638BC  6A 01                     PUSH 0x1
006638BE  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006638C1  50                        PUSH EAX
006638C2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006638C5  8A 48 24                  MOV CL,byte ptr [EAX + 0x24]
006638C8  51                        PUSH ECX
006638C9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006638CF  E8 E6 EF D9 FF            CALL 0x004028ba
006638D4  8B F0                     MOV ESI,EAX
006638D6  85 F6                     TEST ESI,ESI
006638D8  74 5F                     JZ 0x00663939
006638DA  8B 16                     MOV EDX,dword ptr [ESI]
006638DC  8B CE                     MOV ECX,ESI
006638DE  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006638E1  83 F8 01                  CMP EAX,0x1
006638E4  7C 0C                     JL 0x006638f2
006638E6  83 F8 29                  CMP EAX,0x29
006638E9  7D 07                     JGE 0x006638f2
006638EB  B8 01 00 00 00            MOV EAX,0x1
006638F0  EB 02                     JMP 0x006638f4
LAB_006638f2:
006638F2  33 C0                     XOR EAX,EAX
LAB_006638f4:
006638F4  85 C0                     TEST EAX,EAX
006638F6  74 41                     JZ 0x00663939
006638F8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006638FB  66 8B 41 09               MOV AX,word ptr [ECX + 0x9]
006638FF  66 3D FE FF               CMP AX,0xfffe
00663903  74 09                     JZ 0x0066390e
00663905  66 3B 86 1C 08 00 00      CMP AX,word ptr [ESI + 0x81c]
0066390C  75 2B                     JNZ 0x00663939
LAB_0066390e:
0066390E  8B 41 0B                  MOV EAX,dword ptr [ECX + 0xb]
00663911  85 C0                     TEST EAX,EAX
00663913  74 0F                     JZ 0x00663924
00663915  8B 06                     MOV EAX,dword ptr [ESI]
00663917  8B CE                     MOV ECX,ESI
00663919  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0066391C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0066391F  39 41 0B                  CMP dword ptr [ECX + 0xb],EAX
00663922  75 15                     JNZ 0x00663939
LAB_00663924:
00663924  8B 41 11                  MOV EAX,dword ptr [ECX + 0x11]
00663927  66 FF 41 0F               INC word ptr [ECX + 0xf]
0066392B  85 C0                     TEST EAX,EAX
0066392D  74 0A                     JZ 0x00663939
0066392F  8D 55 DC                  LEA EDX,[EBP + -0x24]
00663932  52                        PUSH EDX
00663933  50                        PUSH EAX
00663934  E8 87 A8 04 00            CALL 0x006ae1c0
LAB_00663939:
00663939  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0066393C  47                        INC EDI
0066393D  3B F8                     CMP EDI,EAX
0066393F  0F 8C 63 FF FF FF         JL 0x006638a8
LAB_00663945:
00663945  53                        PUSH EBX
00663946  E8 C5 A7 04 00            CALL 0x006ae110
0066394B  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0066394E  33 C0                     XOR EAX,EAX
00663950  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663956  5F                        POP EDI
00663957  5E                        POP ESI
00663958  5B                        POP EBX
00663959  8B E5                     MOV ESP,EBP
0066395B  5D                        POP EBP
0066395C  C2 04 00                  RET 0x4
switchD_00662290::caseD_2:
0066395F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00663962  66 8B 46 7B               MOV AX,word ptr [ESI + 0x7b]
00663966  66 3D 00 80               CMP AX,0x8000
0066396A  0F 84 C7 03 00 00         JZ 0x00663d37
00663970  66 3D 01 00               CMP AX,0x1
00663974  0F 84 BD 03 00 00         JZ 0x00663d37
0066397A  8A 86 87 01 00 00         MOV AL,byte ptr [ESI + 0x187]
00663980  84 C0                     TEST AL,AL
00663982  0F 84 AF 03 00 00         JZ 0x00663d37
00663988  8B 86 9B 00 00 00         MOV EAX,dword ptr [ESI + 0x9b]
0066398E  3D 82 00 00 00            CMP EAX,0x82
00663993  72 0B                     JC 0x006639a0
00663995  3D 8C 00 00 00            CMP EAX,0x8c
0066399A  0F 82 97 03 00 00         JC 0x00663d37
LAB_006639a0:
006639A0  39 9E B3 00 00 00         CMP dword ptr [ESI + 0xb3],EBX
006639A6  0F 85 8B 03 00 00         JNZ 0x00663d37
006639AC  8B CE                     MOV ECX,ESI
006639AE  E8 88 FA D9 FF            CALL 0x0040343b
006639B3  0F BF 8E 8C 01 00 00      MOVSX ECX,word ptr [ESI + 0x18c]
006639BA  3B C1                     CMP EAX,ECX
006639BC  0F 8C 75 03 00 00         JL 0x00663d37
006639C2  C6 47 08 01               MOV byte ptr [EDI + 0x8],0x1
006639C6  66 89 47 09               MOV word ptr [EDI + 0x9],AX
006639CA  8B 96 88 01 00 00         MOV EDX,dword ptr [ESI + 0x188]
006639D0  8B CE                     MOV ECX,ESI
006639D2  89 57 0F                  MOV dword ptr [EDI + 0xf],EDX
006639D5  E8 57 09 DA FF            CALL 0x00404331
006639DA  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006639DD  89 47 0B                  MOV dword ptr [EDI + 0xb],EAX
006639E0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006639E6  33 C0                     XOR EAX,EAX
006639E8  5F                        POP EDI
006639E9  5E                        POP ESI
006639EA  5B                        POP EBX
006639EB  8B E5                     MOV ESP,EBP
006639ED  5D                        POP EBP
006639EE  C2 04 00                  RET 0x4
switchD_00662290::caseD_3:
006639F1  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006639F4  66 8B 46 7B               MOV AX,word ptr [ESI + 0x7b]
006639F8  66 3D 00 80               CMP AX,0x8000
006639FC  0F 84 35 03 00 00         JZ 0x00663d37
00663A02  66 3D 01 00               CMP AX,0x1
00663A06  0F 84 2B 03 00 00         JZ 0x00663d37
00663A0C  8A 86 87 01 00 00         MOV AL,byte ptr [ESI + 0x187]
00663A12  84 C0                     TEST AL,AL
00663A14  0F 84 1D 03 00 00         JZ 0x00663d37
00663A1A  39 9E B3 00 00 00         CMP dword ptr [ESI + 0xb3],EBX
00663A20  0F 85 11 03 00 00         JNZ 0x00663d37
00663A26  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00663A29  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00663A2F  50                        PUSH EAX
00663A30  E8 90 E3 D9 FF            CALL 0x00401dc5
00663A35  8A 4F 08                  MOV CL,byte ptr [EDI + 0x8]
00663A38  84 C9                     TEST CL,CL
00663A3A  75 7C                     JNZ 0x00663ab8
00663A3C  8B 4F 09                  MOV ECX,dword ptr [EDI + 0x9]
00663A3F  83 C7 13                  ADD EDI,0x13
00663A42  89 8E FB 00 00 00         MOV dword ptr [ESI + 0xfb],ECX
00663A48  8B 57 FA                  MOV EDX,dword ptr [EDI + -0x6]
00663A4B  89 96 F7 00 00 00         MOV dword ptr [ESI + 0xf7],EDX
00663A51  8D 96 95 01 00 00         LEA EDX,[ESI + 0x195]
00663A57  0F BF 4F FE               MOVSX ECX,word ptr [EDI + -0x2]
00663A5B  89 8E EF 00 00 00         MOV dword ptr [ESI + 0xef],ECX
00663A61  8B 0F                     MOV ECX,dword ptr [EDI]
00663A63  89 0A                     MOV dword ptr [EDX],ECX
00663A65  3B C3                     CMP EAX,EBX
00663A67  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
00663A6A  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00663A6D  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00663A70  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00663A73  C7 86 9B 00 00 00 82 00 00 00  MOV dword ptr [ESI + 0x9b],0x82
00663A7D  89 9E 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EBX
00663A83  89 9E A3 00 00 00         MOV dword ptr [ESI + 0xa3],EBX
00663A89  89 9E A7 00 00 00         MOV dword ptr [ESI + 0xa7],EBX
00663A8F  0F 84 A2 02 00 00         JZ 0x00663d37
00663A95  8B 96 F7 00 00 00         MOV EDX,dword ptr [ESI + 0xf7]
00663A9B  8B C8                     MOV ECX,EAX
00663A9D  52                        PUSH EDX
00663A9E  53                        PUSH EBX
00663A9F  E8 BD F1 D9 FF            CALL 0x00402c61
00663AA4  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663AA7  33 C0                     XOR EAX,EAX
00663AA9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663AAF  5F                        POP EDI
00663AB0  5E                        POP ESI
00663AB1  5B                        POP EBX
00663AB2  8B E5                     MOV ESP,EBP
00663AB4  5D                        POP EBP
00663AB5  C2 04 00                  RET 0x4
LAB_00663ab8:
00663AB8  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
00663ABE  81 F9 82 00 00 00         CMP ECX,0x82
00663AC4  0F 82 6D 02 00 00         JC 0x00663d37
00663ACA  81 F9 8C 00 00 00         CMP ECX,0x8c
00663AD0  0F 83 61 02 00 00         JNC 0x00663d37
00663AD6  3B C3                     CMP EAX,EBX
00663AD8  74 10                     JZ 0x00663aea
00663ADA  8B 8E F7 00 00 00         MOV ECX,dword ptr [ESI + 0xf7]
00663AE0  51                        PUSH ECX
00663AE1  6A 01                     PUSH 0x1
00663AE3  8B C8                     MOV ECX,EAX
00663AE5  E8 77 F1 D9 FF            CALL 0x00402c61
LAB_00663aea:
00663AEA  89 9E 9B 00 00 00         MOV dword ptr [ESI + 0x9b],EBX
LAB_00663af0:
00663AF0  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663AF3  89 9E 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EBX
00663AF9  89 9E A3 00 00 00         MOV dword ptr [ESI + 0xa3],EBX
00663AFF  89 9E A7 00 00 00         MOV dword ptr [ESI + 0xa7],EBX
00663B05  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663B0B  33 C0                     XOR EAX,EAX
00663B0D  5F                        POP EDI
00663B0E  5E                        POP ESI
00663B0F  5B                        POP EBX
00663B10  8B E5                     MOV ESP,EBP
00663B12  5D                        POP EBP
00663B13  C2 04 00                  RET 0x4
switchD_00662290::caseD_0:
00663B16  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00663B19  66 8B 46 7B               MOV AX,word ptr [ESI + 0x7b]
00663B1D  66 3D 00 80               CMP AX,0x8000
00663B21  0F 84 10 02 00 00         JZ 0x00663d37
00663B27  66 3D 01 00               CMP AX,0x1
00663B2B  0F 84 06 02 00 00         JZ 0x00663d37
00663B31  8A 86 52 01 00 00         MOV AL,byte ptr [ESI + 0x152]
00663B37  84 C0                     TEST AL,AL
00663B39  0F 84 F8 01 00 00         JZ 0x00663d37
00663B3F  66 8B 47 0E               MOV AX,word ptr [EDI + 0xe]
00663B43  8B 8E 53 01 00 00         MOV ECX,dword ptr [ESI + 0x153]
00663B49  8B D0                     MOV EDX,EAX
00663B4B  81 E2 FF FF 00 00         AND EDX,0xffff
00663B51  85 CA                     TEST EDX,ECX
00663B53  0F 84 DE 01 00 00         JZ 0x00663d37
00663B59  39 9E B3 00 00 00         CMP dword ptr [ESI + 0xb3],EBX
00663B5F  0F 85 D2 01 00 00         JNZ 0x00663d37
00663B65  66 3D 01 00               CMP AX,0x1
00663B69  75 54                     JNZ 0x00663bbf
00663B6B  8B 86 9B 00 00 00         MOV EAX,dword ptr [ESI + 0x9b]
00663B71  3D 8C 00 00 00            CMP EAX,0x8c
00663B76  72 0E                     JC 0x00663b86
00663B78  3D 95 00 00 00            CMP EAX,0x95
00663B7D  77 07                     JA 0x00663b86
00663B7F  B9 01 00 00 00            MOV ECX,0x1
00663B84  EB 02                     JMP 0x00663b88
LAB_00663b86:
00663B86  33 C9                     XOR ECX,ECX
LAB_00663b88:
00663B88  3B CB                     CMP ECX,EBX
00663B8A  0F 85 A7 01 00 00         JNZ 0x00663d37
00663B90  83 F8 64                  CMP EAX,0x64
00663B93  72 0C                     JC 0x00663ba1
00663B95  83 F8 6D                  CMP EAX,0x6d
00663B98  77 07                     JA 0x00663ba1
00663B9A  B8 01 00 00 00            MOV EAX,0x1
00663B9F  EB 02                     JMP 0x00663ba3
LAB_00663ba1:
00663BA1  33 C0                     XOR EAX,EAX
LAB_00663ba3:
00663BA3  3B C3                     CMP EAX,EBX
00663BA5  0F 84 B2 00 00 00         JZ 0x00663c5d
00663BAB  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663BAE  33 C0                     XOR EAX,EAX
00663BB0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663BB6  5F                        POP EDI
00663BB7  5E                        POP ESI
00663BB8  5B                        POP EBX
00663BB9  8B E5                     MOV ESP,EBP
00663BBB  5D                        POP EBP
00663BBC  C2 04 00                  RET 0x4
LAB_00663bbf:
00663BBF  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
00663BC5  81 F9 8C 00 00 00         CMP ECX,0x8c
00663BCB  72 0F                     JC 0x00663bdc
00663BCD  81 F9 95 00 00 00         CMP ECX,0x95
00663BD3  77 07                     JA 0x00663bdc
00663BD5  B8 01 00 00 00            MOV EAX,0x1
00663BDA  EB 02                     JMP 0x00663bde
LAB_00663bdc:
00663BDC  33 C0                     XOR EAX,EAX
LAB_00663bde:
00663BDE  3B C3                     CMP EAX,EBX
00663BE0  0F 85 51 01 00 00         JNZ 0x00663d37
00663BE6  83 F9 64                  CMP ECX,0x64
00663BE9  72 0C                     JC 0x00663bf7
00663BEB  83 F9 6D                  CMP ECX,0x6d
00663BEE  77 07                     JA 0x00663bf7
00663BF0  B8 01 00 00 00            MOV EAX,0x1
00663BF5  EB 02                     JMP 0x00663bf9
LAB_00663bf7:
00663BF7  33 C0                     XOR EAX,EAX
LAB_00663bf9:
00663BF9  3B C3                     CMP EAX,EBX
00663BFB  0F 85 36 01 00 00         JNZ 0x00663d37
00663C01  83 F9 6E                  CMP ECX,0x6e
00663C04  72 0C                     JC 0x00663c12
00663C06  83 F9 77                  CMP ECX,0x77
00663C09  77 07                     JA 0x00663c12
00663C0B  B8 01 00 00 00            MOV EAX,0x1
00663C10  EB 02                     JMP 0x00663c14
LAB_00663c12:
00663C12  33 C0                     XOR EAX,EAX
LAB_00663c14:
00663C14  3B C3                     CMP EAX,EBX
00663C16  0F 85 1B 01 00 00         JNZ 0x00663d37
00663C1C  81 F9 82 00 00 00         CMP ECX,0x82
00663C22  72 0F                     JC 0x00663c33
00663C24  81 F9 8B 00 00 00         CMP ECX,0x8b
00663C2A  77 07                     JA 0x00663c33
00663C2C  B8 01 00 00 00            MOV EAX,0x1
00663C31  EB 02                     JMP 0x00663c35
LAB_00663c33:
00663C33  33 C0                     XOR EAX,EAX
LAB_00663c35:
00663C35  3B C3                     CMP EAX,EBX
00663C37  0F 85 FA 00 00 00         JNZ 0x00663d37
00663C3D  83 F9 23                  CMP ECX,0x23
00663C40  74 0E                     JZ 0x00663c50
00663C42  83 F9 0B                  CMP ECX,0xb
00663C45  76 05                     JBE 0x00663c4c
00663C47  83 F9 14                  CMP ECX,0x14
00663C4A  72 04                     JC 0x00663c50
LAB_00663c4c:
00663C4C  33 C0                     XOR EAX,EAX
00663C4E  EB 05                     JMP 0x00663c55
LAB_00663c50:
00663C50  B8 01 00 00 00            MOV EAX,0x1
LAB_00663c55:
00663C55  3B C3                     CMP EAX,EBX
00663C57  0F 85 DA 00 00 00         JNZ 0x00663d37
LAB_00663c5d:
00663C5D  66 39 9E 57 01 00 00      CMP word ptr [ESI + 0x157],BX
00663C64  0F 8E CD 00 00 00         JLE 0x00663d37
00663C6A  8B CE                     MOV ECX,ESI
00663C6C  E8 CA F7 D9 FF            CALL 0x0040343b
00663C71  0F BF 8E 57 01 00 00      MOVSX ECX,word ptr [ESI + 0x157]
00663C78  3B C1                     CMP EAX,ECX
00663C7A  0F 8C B7 00 00 00         JL 0x00663d37
00663C80  8A 47 09                  MOV AL,byte ptr [EDI + 0x9]
00663C83  C6 47 08 01               MOV byte ptr [EDI + 0x8],0x1
00663C87  84 C0                     TEST AL,AL
00663C89  0F 84 A8 00 00 00         JZ 0x00663d37
00663C8F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00663C95  3B CB                     CMP ECX,EBX
00663C97  74 12                     JZ 0x00663cab
00663C99  66 8B 57 10               MOV DX,word ptr [EDI + 0x10]
00663C9D  8A 47 12                  MOV AL,byte ptr [EDI + 0x12]
00663CA0  6A 01                     PUSH 0x1
00663CA2  52                        PUSH EDX
00663CA3  50                        PUSH EAX
00663CA4  E8 11 EC D9 FF            CALL 0x004028ba
00663CA9  EB 02                     JMP 0x00663cad
LAB_00663cab:
00663CAB  33 C0                     XOR EAX,EAX
LAB_00663cad:
00663CAD  3B C3                     CMP EAX,EBX
00663CAF  74 67                     JZ 0x00663d18
00663CB1  8D 4D FE                  LEA ECX,[EBP + -0x2]
00663CB4  8D 55 D4                  LEA EDX,[EBP + -0x2c]
00663CB7  51                        PUSH ECX
00663CB8  8D 4D D8                  LEA ECX,[EBP + -0x28]
00663CBB  52                        PUSH EDX
00663CBC  51                        PUSH ECX
00663CBD  8B C8                     MOV ECX,EAX
00663CBF  E8 01 DC D9 FF            CALL 0x004018c5
00663CC4  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00663CC7  8D 86 95 01 00 00         LEA EAX,[ESI + 0x195]
00663CCD  83 C2 FE                  ADD EDX,-0x2
00663CD0  8D 8E 97 01 00 00         LEA ECX,[ESI + 0x197]
00663CD6  66 89 10                  MOV word ptr [EAX],DX
00663CD9  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00663CDC  83 C2 FE                  ADD EDX,-0x2
00663CDF  8D 9E 9D 01 00 00         LEA EBX,[ESI + 0x19d]
00663CE5  66 89 11                  MOV word ptr [ECX],DX
00663CE8  8D 96 9B 01 00 00         LEA EDX,[ESI + 0x19b]
00663CEE  53                        PUSH EBX
00663CEF  52                        PUSH EDX
00663CF0  51                        PUSH ECX
00663CF1  50                        PUSH EAX
00663CF2  66 C7 86 99 01 00 00 00 00  MOV word ptr [ESI + 0x199],0x0
00663CFB  66 C7 02 05 00            MOV word ptr [EDX],0x5
00663D00  66 C7 03 03 00            MOV word ptr [EBX],0x3
00663D05  66 C7 86 9F 01 00 00 05 00  MOV word ptr [ESI + 0x19f],0x5
00663D0E  E8 F3 DB D9 FF            CALL 0x00401906
00663D13  83 C4 10                  ADD ESP,0x10
00663D16  33 DB                     XOR EBX,EBX
LAB_00663d18:
00663D18  C7 86 9B 00 00 00 8C 00 00 00  MOV dword ptr [ESI + 0x9b],0x8c
00663D22  E9 C9 FD FF FF            JMP 0x00663af0
LAB_00663d27:
00663D27  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00663D2A  57                        PUSH EDI
00663D2B  8B 88 17 02 00 00         MOV ECX,dword ptr [EAX + 0x217]
00663D31  51                        PUSH ECX
00663D32  E8 89 A4 04 00            CALL 0x006ae1c0
switchD_00662290::caseD_1:
00663D37  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00663D3A  33 C0                     XOR EAX,EAX
00663D3C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00663D42  5F                        POP EDI
00663D43  5E                        POP ESI
00663D44  5B                        POP EBX
00663D45  8B E5                     MOV ESP,EBP
00663D47  5D                        POP EBP
00663D48  C2 04 00                  RET 0x4
LAB_00663d4b:
00663D4B  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
00663D4E  68 60 2C 7D 00            PUSH 0x7d2c60
00663D53  68 CC 4C 7A 00            PUSH 0x7a4ccc
00663D58  56                        PUSH ESI
00663D59  53                        PUSH EBX
00663D5A  68 8A 09 00 00            PUSH 0x98a
00663D5F  68 80 2B 7D 00            PUSH 0x7d2b80
00663D64  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00663D69  E8 62 97 04 00            CALL 0x006ad4d0
00663D6E  83 C4 18                  ADD ESP,0x18
00663D71  85 C0                     TEST EAX,EAX
00663D73  74 01                     JZ 0x00663d76
00663D75  CC                        INT3
LAB_00663d76:
00663D76  68 8B 09 00 00            PUSH 0x98b
00663D7B  68 80 2B 7D 00            PUSH 0x7d2b80
00663D80  53                        PUSH EBX
00663D81  56                        PUSH ESI
00663D82  E8 B9 20 04 00            CALL 0x006a5e40
00663D87  8B C6                     MOV EAX,ESI
00663D89  5F                        POP EDI
00663D8A  5E                        POP ESI
00663D8B  5B                        POP EBX
00663D8C  8B E5                     MOV ESP,EBP
00663D8E  5D                        POP EBP
00663D8F  C2 04 00                  RET 0x4
