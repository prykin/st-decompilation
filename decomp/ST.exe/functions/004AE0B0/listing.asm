FUN_004ae0b0:
004AE0B0  55                        PUSH EBP
004AE0B1  8B EC                     MOV EBP,ESP
004AE0B3  83 EC 20                  SUB ESP,0x20
004AE0B6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004AE0B9  33 D2                     XOR EDX,EDX
004AE0BB  53                        PUSH EBX
004AE0BC  B9 01 00 00 00            MOV ECX,0x1
004AE0C1  8B 04 85 68 1D 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x791d68]
004AE0C8  56                        PUSH ESI
004AE0C9  2B C2                     SUB EAX,EDX
004AE0CB  57                        PUSH EDI
004AE0CC  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004AE0CF  8B F1                     MOV ESI,ECX
004AE0D1  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004AE0D4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004AE0D7  74 0C                     JZ 0x004ae0e5
004AE0D9  48                        DEC EAX
004AE0DA  75 10                     JNZ 0x004ae0ec
004AE0DC  BE 02 00 00 00            MOV ESI,0x2
004AE0E1  8B CE                     MOV ECX,ESI
004AE0E3  EB 07                     JMP 0x004ae0ec
LAB_004ae0e5:
004AE0E5  BE 01 00 00 00            MOV ESI,0x1
004AE0EA  8B CE                     MOV ECX,ESI
LAB_004ae0ec:
004AE0EC  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004AE0EF  3B DA                     CMP EBX,EDX
004AE0F1  0F 8C 64 01 00 00         JL 0x004ae25b
004AE0F7  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004AE0FE  03 CB                     ADD ECX,EBX
004AE100  0F BF C2                  MOVSX EAX,DX
004AE103  3B C8                     CMP ECX,EAX
004AE105  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004AE108  0F 8F 4D 01 00 00         JG 0x004ae25b
004AE10E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AE111  85 C0                     TEST EAX,EAX
004AE113  0F 8C 42 01 00 00         JL 0x004ae25b
004AE119  0F BF 3D 42 B2 7F 00      MOVSX EDI,word ptr [0x007fb242]
004AE120  03 F0                     ADD ESI,EAX
004AE122  3B F7                     CMP ESI,EDI
004AE124  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
004AE127  0F 8F 2E 01 00 00         JG 0x004ae25b
004AE12D  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004AE130  85 F6                     TEST ESI,ESI
004AE132  0F 8C 23 01 00 00         JL 0x004ae25b
004AE138  0F BF 3D 44 B2 7F 00      MOVSX EDI,word ptr [0x007fb244]
004AE13F  46                        INC ESI
004AE140  3B F7                     CMP ESI,EDI
004AE142  0F 8F 13 01 00 00         JG 0x004ae25b
004AE148  3B D9                     CMP EBX,ECX
004AE14A  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
004AE151  8B F3                     MOV ESI,EBX
004AE153  0F 8D 0E 01 00 00         JGE 0x004ae267
LAB_004ae159:
004AE159  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004AE15C  8B C8                     MOV ECX,EAX
004AE15E  3B C7                     CMP EAX,EDI
004AE160  0F 8D E5 00 00 00         JGE 0x004ae24b
LAB_004ae166:
004AE166  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004AE169  8D 58 01                  LEA EBX,[EAX + 0x1]
004AE16C  3B C3                     CMP EAX,EBX
004AE16E  0F 8D CB 00 00 00         JGE 0x004ae23f
LAB_004ae174:
004AE174  66 85 F6                  TEST SI,SI
004AE177  0F 8C DE 00 00 00         JL 0x004ae25b
004AE17D  66 3B F2                  CMP SI,DX
004AE180  7D 50                     JGE 0x004ae1d2
004AE182  66 85 C9                  TEST CX,CX
004AE185  7C 4B                     JL 0x004ae1d2
004AE187  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004AE18E  7D 42                     JGE 0x004ae1d2
004AE190  66 85 C0                  TEST AX,AX
004AE193  7C 3D                     JL 0x004ae1d2
004AE195  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004AE19C  7D 34                     JGE 0x004ae1d2
004AE19E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004AE1A5  0F BF F8                  MOVSX EDI,AX
004AE1A8  0F AF FB                  IMUL EDI,EBX
004AE1AB  0F BF D9                  MOVSX EBX,CX
004AE1AE  0F BF D2                  MOVSX EDX,DX
004AE1B1  0F AF DA                  IMUL EBX,EDX
004AE1B4  0F BF D6                  MOVSX EDX,SI
004AE1B7  03 FB                     ADD EDI,EBX
004AE1B9  03 FA                     ADD EDI,EDX
004AE1BB  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004AE1C1  83 3C FA 00               CMP dword ptr [EDX + EDI*0x8],0x0
004AE1C5  0F 85 90 00 00 00         JNZ 0x004ae25b
004AE1CB  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
LAB_004ae1d2:
004AE1D2  66 85 F6                  TEST SI,SI
004AE1D5  0F 8C 80 00 00 00         JL 0x004ae25b
004AE1DB  66 3B F2                  CMP SI,DX
004AE1DE  7D 7B                     JGE 0x004ae25b
004AE1E0  66 85 C9                  TEST CX,CX
004AE1E3  7C 76                     JL 0x004ae25b
004AE1E5  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004AE1EC  7D 6D                     JGE 0x004ae25b
004AE1EE  66 85 C0                  TEST AX,AX
004AE1F1  7C 68                     JL 0x004ae25b
004AE1F3  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004AE1FA  7D 5F                     JGE 0x004ae25b
004AE1FC  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
004AE203  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
004AE20A  0F BF D1                  MOVSX EDX,CX
004AE20D  0F AF D7                  IMUL EDX,EDI
004AE210  0F BF F8                  MOVSX EDI,AX
004AE213  0F AF FB                  IMUL EDI,EBX
004AE216  03 D7                     ADD EDX,EDI
004AE218  0F BF FE                  MOVSX EDI,SI
004AE21B  03 D7                     ADD EDX,EDI
004AE21D  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
004AE223  0F BF 14 57               MOVSX EDX,word ptr [EDI + EDX*0x2]
004AE227  85 D2                     TEST EDX,EDX
004AE229  75 30                     JNZ 0x004ae25b
004AE22B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004AE22E  40                        INC EAX
004AE22F  42                        INC EDX
004AE230  3B C2                     CMP EAX,EDX
004AE232  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004AE239  0F 8C 35 FF FF FF         JL 0x004ae174
LAB_004ae23f:
004AE23F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004AE242  41                        INC ECX
004AE243  3B C8                     CMP ECX,EAX
004AE245  0F 8C 1B FF FF FF         JL 0x004ae166
LAB_004ae24b:
004AE24B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004AE24E  46                        INC ESI
004AE24F  3B F0                     CMP ESI,EAX
004AE251  7D 14                     JGE 0x004ae267
004AE253  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AE256  E9 FE FE FF FF            JMP 0x004ae159
FUN_004ae0b0::cf_break_loop_004AE25B:
004AE25B  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
004AE262  E9 4B 0A 00 00            JMP 0x004aecb2
LAB_004ae267:
004AE267  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004AE26A  BB 01 00 00 00            MOV EBX,0x1
004AE26F  85 C0                     TEST EAX,EAX
004AE271  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004AE274  0F 8E 04 01 00 00         JLE 0x004ae37e
004AE27A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AE27D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004AE280  3B C8                     CMP ECX,EAX
004AE282  0F 8D F6 00 00 00         JGE 0x004ae37e
LAB_004ae288:
004AE288  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AE28B  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004AE28E  3B C6                     CMP EAX,ESI
004AE290  0F 8D C7 00 00 00         JGE 0x004ae35d
004AE296  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004AE299  4E                        DEC ESI
LAB_004ae29a:
004AE29A  66 85 C9                  TEST CX,CX
004AE29D  0F 8C AE 00 00 00         JL 0x004ae351
004AE2A3  66 3B CA                  CMP CX,DX
004AE2A6  7D 4C                     JGE 0x004ae2f4
004AE2A8  66 85 C0                  TEST AX,AX
004AE2AB  7C 47                     JL 0x004ae2f4
004AE2AD  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
004AE2B4  7D 3E                     JGE 0x004ae2f4
004AE2B6  66 85 F6                  TEST SI,SI
004AE2B9  7C 39                     JL 0x004ae2f4
004AE2BB  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
004AE2C2  7D 30                     JGE 0x004ae2f4
004AE2C4  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004AE2CB  0F BF FE                  MOVSX EDI,SI
004AE2CE  0F AF FB                  IMUL EDI,EBX
004AE2D1  0F BF D8                  MOVSX EBX,AX
004AE2D4  0F BF D2                  MOVSX EDX,DX
004AE2D7  0F AF DA                  IMUL EBX,EDX
004AE2DA  0F BF D1                  MOVSX EDX,CX
004AE2DD  03 FB                     ADD EDI,EBX
004AE2DF  03 FA                     ADD EDI,EDX
004AE2E1  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004AE2E7  83 3C FA 00               CMP dword ptr [EDX + EDI*0x8],0x0
004AE2EB  75 7E                     JNZ 0x004ae36b
004AE2ED  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
LAB_004ae2f4:
004AE2F4  66 85 C9                  TEST CX,CX
004AE2F7  7C 58                     JL 0x004ae351
004AE2F9  66 3B CA                  CMP CX,DX
004AE2FC  7D 53                     JGE 0x004ae351
004AE2FE  66 85 C0                  TEST AX,AX
004AE301  7C 4E                     JL 0x004ae351
004AE303  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
004AE30A  7D 45                     JGE 0x004ae351
004AE30C  66 85 F6                  TEST SI,SI
004AE30F  7C 40                     JL 0x004ae351
004AE311  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
004AE318  7D 37                     JGE 0x004ae351
004AE31A  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
004AE321  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
004AE328  0F BF D0                  MOVSX EDX,AX
004AE32B  0F AF D7                  IMUL EDX,EDI
004AE32E  0F BF FE                  MOVSX EDI,SI
004AE331  0F AF FB                  IMUL EDI,EBX
004AE334  03 D7                     ADD EDX,EDI
004AE336  0F BF F9                  MOVSX EDI,CX
004AE339  03 D7                     ADD EDX,EDI
004AE33B  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
004AE341  0F BF 14 57               MOVSX EDX,word ptr [EDI + EDX*0x2]
004AE345  83 FA FF                  CMP EDX,-0x1
004AE348  75 21                     JNZ 0x004ae36b
004AE34A  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
LAB_004ae351:
004AE351  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004AE354  40                        INC EAX
004AE355  3B C7                     CMP EAX,EDI
004AE357  0F 8C 3D FF FF FF         JL 0x004ae29a
LAB_004ae35d:
004AE35D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004AE360  41                        INC ECX
004AE361  3B C8                     CMP ECX,EAX
004AE363  0F 8C 1F FF FF FF         JL 0x004ae288
004AE369  EB 0E                     JMP 0x004ae379
LAB_004ae36b:
004AE36B  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004AE372  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_004ae379:
004AE379  BB 01 00 00 00            MOV EBX,0x1
LAB_004ae37e:
004AE37E  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
004AE381  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
004AE384  85 C0                     TEST EAX,EAX
004AE386  74 17                     JZ 0x004ae39f
004AE388  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004AE38E  56                        PUSH ESI
004AE38F  E8 23 66 F5 FF            CALL 0x004049b7
004AE394  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004AE39B  3C 03                     CMP AL,0x3
004AE39D  75 7D                     JNZ 0x004ae41c
LAB_004ae39f:
004AE39F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004AE3A2  85 C0                     TEST EAX,EAX
004AE3A4  74 76                     JZ 0x004ae41c
004AE3A6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004AE3A9  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
004AE3B0  83 F8 04                  CMP EAX,0x4
004AE3B3  7D 67                     JGE 0x004ae41c
004AE3B5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AE3B8  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004AE3BB  3B C1                     CMP EAX,ECX
004AE3BD  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004AE3C0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004AE3C3  7D 57                     JGE 0x004ae41c
LAB_004ae3c5:
004AE3C5  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004AE3C8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004AE3CB  3B D8                     CMP EBX,EAX
004AE3CD  7D 2A                     JGE 0x004ae3f9
004AE3CF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004AE3D2  8D 78 01                  LEA EDI,[EAX + 0x1]
LAB_004ae3d5:
004AE3D5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AE3D8  57                        PUSH EDI
004AE3D9  53                        PUSH EBX
004AE3DA  51                        PUSH ECX
004AE3DB  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004AE3E1  E8 55 69 F5 FF            CALL 0x00404d3b
004AE3E6  85 C0                     TEST EAX,EAX
004AE3E8  74 1F                     JZ 0x004ae409
004AE3EA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004AE3ED  43                        INC EBX
004AE3EE  3B D8                     CMP EBX,EAX
004AE3F0  7C E3                     JL 0x004ae3d5
004AE3F2  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
LAB_004ae3f9:
004AE3F9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004AE3FC  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004AE3FF  40                        INC EAX
004AE400  3B C1                     CMP EAX,ECX
004AE402  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004AE405  7C BE                     JL 0x004ae3c5
004AE407  EB 0E                     JMP 0x004ae417
LAB_004ae409:
004AE409  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004AE410  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_004ae417:
004AE417  BB 01 00 00 00            MOV EBX,0x1
LAB_004ae41c:
004AE41C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004AE41F  8D 78 C8                  LEA EDI,[EAX + -0x38]
004AE422  83 FF 29                  CMP EDI,0x29
004AE425  0F 87 87 00 00 00         JA 0x004ae4b2
004AE42B  33 C9                     XOR ECX,ECX
004AE42D  8A 8F E8 EC 4A 00         MOV CL,byte ptr [EDI + 0x4aece8]
switchD_004ae433::switchD:
004AE433  FF 24 8D E0 EC 4A 00      JMP dword ptr [ECX*0x4 + 0x4aece0]
switchD_004ae433::caseD_38:
004AE43A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004AE43D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AE440  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AE443  52                        PUSH EDX
004AE444  50                        PUSH EAX
004AE445  51                        PUSH ECX
004AE446  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004AE44C  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004AE453  E8 F0 79 F5 FF            CALL 0x00405e48
004AE458  85 C0                     TEST EAX,EAX
004AE45A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004AE45D  0F 84 3A 08 00 00         JZ 0x004aec9d
004AE463  8B 10                     MOV EDX,dword ptr [EAX]
004AE465  8B C8                     MOV ECX,EAX
004AE467  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AE46A  33 C9                     XOR ECX,ECX
004AE46C  8A 8F 24 ED 4A 00         MOV CL,byte ptr [EDI + 0x4aed24]
switchD_004ae472::switchD:
004AE472  FF 24 8D 14 ED 4A 00      JMP dword ptr [ECX*0x4 + 0x4aed14]
switchD_004ae472::caseD_0:
004AE479  3D DC 00 00 00            CMP EAX,0xdc
004AE47E  0F 85 19 08 00 00         JNZ 0x004aec9d
004AE484  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004AE487  E9 11 08 00 00            JMP 0x004aec9d
switchD_004ae472::caseD_1:
004AE48C  3D DD 00 00 00            CMP EAX,0xdd
004AE491  0F 85 06 08 00 00         JNZ 0x004aec9d
004AE497  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004AE49A  E9 FE 07 00 00            JMP 0x004aec9d
switchD_004ae472::caseD_2:
004AE49F  3D DE 00 00 00            CMP EAX,0xde
004AE4A4  0F 85 F3 07 00 00         JNZ 0x004aec9d
004AE4AA  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004AE4AD  E9 EB 07 00 00            JMP 0x004aec9d
switchD_004ae433::caseD_3a:
004AE4B2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004AE4B5  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004AE4B8  8B FB                     MOV EDI,EBX
004AE4BA  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
004AE4C1  3B F9                     CMP EDI,ECX
004AE4C3  0F 8D CF 00 00 00         JGE 0x004ae598
004AE4C9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_004ae4cc:
004AE4CC  3B 7D F0                  CMP EDI,dword ptr [EBP + -0x10]
004AE4CF  0F 8D B1 00 00 00         JGE 0x004ae586
LAB_004ae4d5:
004AE4D5  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004AE4D8  8D 46 01                  LEA EAX,[ESI + 0x1]
004AE4DB  3B F0                     CMP ESI,EAX
004AE4DD  0F 8D 94 00 00 00         JGE 0x004ae577
LAB_004ae4e3:
004AE4E3  66 85 DB                  TEST BX,BX
004AE4E6  7C 4A                     JL 0x004ae532
004AE4E8  66 3B DA                  CMP BX,DX
004AE4EB  7D 45                     JGE 0x004ae532
004AE4ED  66 85 FF                  TEST DI,DI
004AE4F0  7C 40                     JL 0x004ae532
004AE4F2  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004AE4F9  7D 37                     JGE 0x004ae532
004AE4FB  66 85 F6                  TEST SI,SI
004AE4FE  7C 32                     JL 0x004ae532
004AE500  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
004AE507  7D 29                     JGE 0x004ae532
004AE509  0F BF C7                  MOVSX EAX,DI
004AE50C  0F BF CA                  MOVSX ECX,DX
004AE50F  0F AF C1                  IMUL EAX,ECX
004AE512  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004AE519  0F BF D6                  MOVSX EDX,SI
004AE51C  0F AF D1                  IMUL EDX,ECX
004AE51F  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004AE525  03 C2                     ADD EAX,EDX
004AE527  0F BF D3                  MOVSX EDX,BX
004AE52A  03 C2                     ADD EAX,EDX
004AE52C  8B 44 C1 04               MOV EAX,dword ptr [ECX + EAX*0x8 + 0x4]
004AE530  EB 02                     JMP 0x004ae534
LAB_004ae532:
004AE532  33 C0                     XOR EAX,EAX
LAB_004ae534:
004AE534  85 C0                     TEST EAX,EAX
004AE536  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004AE539  74 0D                     JZ 0x004ae548
004AE53B  81 78 20 BE 00 00 00      CMP dword ptr [EAX + 0x20],0xbe
004AE542  0F 85 4E 07 00 00         JNZ 0x004aec96
LAB_004ae548:
004AE548  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004AE54E  56                        PUSH ESI
004AE54F  57                        PUSH EDI
004AE550  53                        PUSH EBX
004AE551  E8 F2 78 F5 FF            CALL 0x00405e48
004AE556  85 C0                     TEST EAX,EAX
004AE558  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004AE55B  0F 85 35 07 00 00         JNZ 0x004aec96
004AE561  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004AE564  46                        INC ESI
004AE565  8D 42 01                  LEA EAX,[EDX + 0x1]
004AE568  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004AE56F  3B F0                     CMP ESI,EAX
004AE571  0F 8C 6C FF FF FF         JL 0x004ae4e3
LAB_004ae577:
004AE577  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004AE57A  47                        INC EDI
004AE57B  3B F8                     CMP EDI,EAX
004AE57D  0F 8C 52 FF FF FF         JL 0x004ae4d5
004AE583  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_004ae586:
004AE586  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004AE589  43                        INC EBX
004AE58A  3B D8                     CMP EBX,EAX
004AE58C  0F 8C 3A FF FF FF         JL 0x004ae4cc
004AE592  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
004AE595  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_004ae598:
004AE598  83 F8 54                  CMP EAX,0x54
004AE59B  0F 8C 39 03 00 00         JL 0x004ae8da
004AE5A1  83 F8 5A                  CMP EAX,0x5a
004AE5A4  0F 8F 30 03 00 00         JG 0x004ae8da
004AE5AA  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004AE5AD  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004AE5B4  8D 47 FF                  LEA EAX,[EDI + -0x1]
004AE5B7  85 C0                     TEST EAX,EAX
004AE5B9  0F 8C C2 00 00 00         JL 0x004ae681
004AE5BF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AE5C2  66 85 C9                  TEST CX,CX
004AE5C5  0F 8C B6 00 00 00         JL 0x004ae681
004AE5CB  66 3B CA                  CMP CX,DX
004AE5CE  0F 8D AD 00 00 00         JGE 0x004ae681
004AE5D4  66 85 C0                  TEST AX,AX
004AE5D7  0F 8C A4 00 00 00         JL 0x004ae681
004AE5DD  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
004AE5E4  0F 8D 97 00 00 00         JGE 0x004ae681
004AE5EA  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004AE5ED  66 85 DB                  TEST BX,BX
004AE5F0  0F 8C 8E 00 00 00         JL 0x004ae684
004AE5F6  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
004AE5FD  0F 8D 81 00 00 00         JGE 0x004ae684
004AE603  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004AE60A  0F BF CB                  MOVSX ECX,BX
004AE60D  0F AF CE                  IMUL ECX,ESI
004AE610  0F BF F2                  MOVSX ESI,DX
004AE613  0F BF C0                  MOVSX EAX,AX
004AE616  0F AF F0                  IMUL ESI,EAX
004AE619  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
004AE61D  03 CE                     ADD ECX,ESI
004AE61F  03 C8                     ADD ECX,EAX
004AE621  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004AE626  8B 34 C8                  MOV ESI,dword ptr [EAX + ECX*0x8]
004AE629  85 F6                     TEST ESI,ESI
004AE62B  74 57                     JZ 0x004ae684
004AE62D  8B 16                     MOV EDX,dword ptr [ESI]
004AE62F  8B CE                     MOV ECX,ESI
004AE631  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AE634  83 F8 53                  CMP EAX,0x53
004AE637  75 0C                     JNZ 0x004ae645
004AE639  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
004AE63C  85 C0                     TEST EAX,EAX
004AE63E  74 2C                     JZ 0x004ae66c
004AE640  39 46 18                  CMP dword ptr [ESI + 0x18],EAX
004AE643  74 27                     JZ 0x004ae66c
LAB_004ae645:
004AE645  8B 16                     MOV EDX,dword ptr [ESI]
004AE647  8B CE                     MOV ECX,ESI
004AE649  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AE64C  83 F8 54                  CMP EAX,0x54
004AE64F  7C 27                     JL 0x004ae678
004AE651  8B 06                     MOV EAX,dword ptr [ESI]
004AE653  8B CE                     MOV ECX,ESI
004AE655  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004AE658  83 F8 5A                  CMP EAX,0x5a
004AE65B  7F 1B                     JG 0x004ae678
004AE65D  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
004AE660  85 C0                     TEST EAX,EAX
004AE662  74 08                     JZ 0x004ae66c
004AE664  39 86 D3 05 00 00         CMP dword ptr [ESI + 0x5d3],EAX
004AE66A  75 0C                     JNZ 0x004ae678
LAB_004ae66c:
004AE66C  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
004AE673  E9 25 06 00 00            JMP 0x004aec9d
LAB_004ae678:
004AE678  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004AE67F  EB 03                     JMP 0x004ae684
LAB_004ae681:
004AE681  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
LAB_004ae684:
004AE684  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AE687  8D 41 FF                  LEA EAX,[ECX + -0x1]
004AE68A  85 C0                     TEST EAX,EAX
004AE68C  0F 8C B5 00 00 00         JL 0x004ae747
004AE692  66 85 C0                  TEST AX,AX
004AE695  0F 8C AC 00 00 00         JL 0x004ae747
004AE69B  66 3B C2                  CMP AX,DX
004AE69E  0F 8D A3 00 00 00         JGE 0x004ae747
004AE6A4  66 85 FF                  TEST DI,DI
004AE6A7  0F 8C 9A 00 00 00         JL 0x004ae747
004AE6AD  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004AE6B4  0F 8D 8D 00 00 00         JGE 0x004ae747
004AE6BA  66 85 DB                  TEST BX,BX
004AE6BD  0F 8C 84 00 00 00         JL 0x004ae747
004AE6C3  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
004AE6CA  7D 7B                     JGE 0x004ae747
004AE6CC  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004AE6D3  0F BF CB                  MOVSX ECX,BX
004AE6D6  0F AF CE                  IMUL ECX,ESI
004AE6D9  0F BF F7                  MOVSX ESI,DI
004AE6DC  0F BF FA                  MOVSX EDI,DX
004AE6DF  0F AF F7                  IMUL ESI,EDI
004AE6E2  0F BF C0                  MOVSX EAX,AX
004AE6E5  03 CE                     ADD ECX,ESI
004AE6E7  03 C8                     ADD ECX,EAX
004AE6E9  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004AE6EE  8B 34 C8                  MOV ESI,dword ptr [EAX + ECX*0x8]
004AE6F1  85 F6                     TEST ESI,ESI
004AE6F3  74 4F                     JZ 0x004ae744
004AE6F5  8B 16                     MOV EDX,dword ptr [ESI]
004AE6F7  8B CE                     MOV ECX,ESI
004AE6F9  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AE6FC  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
004AE6FF  83 F8 53                  CMP EAX,0x53
004AE702  75 09                     JNZ 0x004ae70d
004AE704  85 FF                     TEST EDI,EDI
004AE706  74 29                     JZ 0x004ae731
004AE708  39 7E 18                  CMP dword ptr [ESI + 0x18],EDI
004AE70B  74 24                     JZ 0x004ae731
LAB_004ae70d:
004AE70D  8B 06                     MOV EAX,dword ptr [ESI]
004AE70F  8B CE                     MOV ECX,ESI
004AE711  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004AE714  83 F8 54                  CMP EAX,0x54
004AE717  7C 24                     JL 0x004ae73d
004AE719  8B 16                     MOV EDX,dword ptr [ESI]
004AE71B  8B CE                     MOV ECX,ESI
004AE71D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AE720  83 F8 5A                  CMP EAX,0x5a
004AE723  7F 18                     JG 0x004ae73d
004AE725  85 FF                     TEST EDI,EDI
004AE727  74 08                     JZ 0x004ae731
004AE729  39 BE D3 05 00 00         CMP dword ptr [ESI + 0x5d3],EDI
004AE72F  75 0C                     JNZ 0x004ae73d
LAB_004ae731:
004AE731  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
004AE738  E9 60 05 00 00            JMP 0x004aec9d
LAB_004ae73d:
004AE73D  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
LAB_004ae744:
004AE744  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_004ae747:
004AE747  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AE74A  0F BF CA                  MOVSX ECX,DX
004AE74D  40                        INC EAX
004AE74E  3B C1                     CMP EAX,ECX
004AE750  0F 8D AB 00 00 00         JGE 0x004ae801
004AE756  66 85 C0                  TEST AX,AX
004AE759  0F 8C A2 00 00 00         JL 0x004ae801
004AE75F  66 3B C2                  CMP AX,DX
004AE762  0F 8D 99 00 00 00         JGE 0x004ae801
004AE768  66 85 FF                  TEST DI,DI
004AE76B  0F 8C 90 00 00 00         JL 0x004ae801
004AE771  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004AE778  0F 8D 83 00 00 00         JGE 0x004ae801
004AE77E  66 85 DB                  TEST BX,BX
004AE781  7C 7E                     JL 0x004ae801
004AE783  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
004AE78A  7D 75                     JGE 0x004ae801
004AE78C  0F BF F3                  MOVSX ESI,BX
004AE78F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004AE796  0F AF F3                  IMUL ESI,EBX
004AE799  0F BF DF                  MOVSX EBX,DI
004AE79C  0F AF D9                  IMUL EBX,ECX
004AE79F  0F BF C8                  MOVSX ECX,AX
004AE7A2  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004AE7A7  03 F3                     ADD ESI,EBX
004AE7A9  03 F1                     ADD ESI,ECX
004AE7AB  8B 34 F0                  MOV ESI,dword ptr [EAX + ESI*0x8]
004AE7AE  85 F6                     TEST ESI,ESI
004AE7B0  74 4F                     JZ 0x004ae801
004AE7B2  8B 16                     MOV EDX,dword ptr [ESI]
004AE7B4  8B CE                     MOV ECX,ESI
004AE7B6  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AE7B9  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
004AE7BC  83 F8 53                  CMP EAX,0x53
004AE7BF  75 09                     JNZ 0x004ae7ca
004AE7C1  85 DB                     TEST EBX,EBX
004AE7C3  74 29                     JZ 0x004ae7ee
004AE7C5  39 5E 18                  CMP dword ptr [ESI + 0x18],EBX
004AE7C8  74 24                     JZ 0x004ae7ee
LAB_004ae7ca:
004AE7CA  8B 06                     MOV EAX,dword ptr [ESI]
004AE7CC  8B CE                     MOV ECX,ESI
004AE7CE  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004AE7D1  83 F8 54                  CMP EAX,0x54
004AE7D4  7C 24                     JL 0x004ae7fa
004AE7D6  8B 16                     MOV EDX,dword ptr [ESI]
004AE7D8  8B CE                     MOV ECX,ESI
004AE7DA  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AE7DD  83 F8 5A                  CMP EAX,0x5a
004AE7E0  7F 18                     JG 0x004ae7fa
004AE7E2  85 DB                     TEST EBX,EBX
004AE7E4  74 08                     JZ 0x004ae7ee
004AE7E6  39 9E D3 05 00 00         CMP dword ptr [ESI + 0x5d3],EBX
004AE7EC  75 0C                     JNZ 0x004ae7fa
LAB_004ae7ee:
004AE7EE  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
004AE7F5  E9 A3 04 00 00            JMP 0x004aec9d
LAB_004ae7fa:
004AE7FA  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
LAB_004ae801:
004AE801  66 8B 0D 42 B2 7F 00      MOV CX,word ptr [0x007fb242]
004AE808  8D 47 01                  LEA EAX,[EDI + 0x1]
004AE80B  0F BF F1                  MOVSX ESI,CX
004AE80E  3B C6                     CMP EAX,ESI
004AE810  0F 8D 87 04 00 00         JGE 0x004aec9d
004AE816  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004AE819  66 85 F6                  TEST SI,SI
004AE81C  0F 8C 7B 04 00 00         JL 0x004aec9d
004AE822  66 3B F2                  CMP SI,DX
004AE825  0F 8D 72 04 00 00         JGE 0x004aec9d
004AE82B  66 85 C0                  TEST AX,AX
004AE82E  0F 8C 69 04 00 00         JL 0x004aec9d
004AE834  66 3B C1                  CMP AX,CX
004AE837  0F 8D 60 04 00 00         JGE 0x004aec9d
004AE83D  66 83 7D 10 00            CMP word ptr [EBP + 0x10],0x0
004AE842  0F 8C 55 04 00 00         JL 0x004aec9d
004AE848  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
004AE84C  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004AE853  0F 8D 44 04 00 00         JGE 0x004aec9d
004AE859  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004AE860  0F BF C9                  MOVSX ECX,CX
004AE863  0F BF D2                  MOVSX EDX,DX
004AE866  0F AF CF                  IMUL ECX,EDI
004AE869  0F BF C0                  MOVSX EAX,AX
004AE86C  0F AF D0                  IMUL EDX,EAX
004AE86F  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004AE874  03 CA                     ADD ECX,EDX
004AE876  0F BF D6                  MOVSX EDX,SI
004AE879  03 CA                     ADD ECX,EDX
004AE87B  8B 34 C8                  MOV ESI,dword ptr [EAX + ECX*0x8]
004AE87E  85 F6                     TEST ESI,ESI
004AE880  0F 84 17 04 00 00         JZ 0x004aec9d
004AE886  8B 16                     MOV EDX,dword ptr [ESI]
004AE888  8B CE                     MOV ECX,ESI
004AE88A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AE88D  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
004AE890  83 F8 53                  CMP EAX,0x53
004AE893  75 09                     JNZ 0x004ae89e
004AE895  85 FF                     TEST EDI,EDI
004AE897  74 35                     JZ 0x004ae8ce
004AE899  39 7E 18                  CMP dword ptr [ESI + 0x18],EDI
004AE89C  74 30                     JZ 0x004ae8ce
LAB_004ae89e:
004AE89E  8B 06                     MOV EAX,dword ptr [ESI]
004AE8A0  8B CE                     MOV ECX,ESI
004AE8A2  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004AE8A5  83 F8 54                  CMP EAX,0x54
004AE8A8  0F 8C EF 03 00 00         JL 0x004aec9d
004AE8AE  8B 16                     MOV EDX,dword ptr [ESI]
004AE8B0  8B CE                     MOV ECX,ESI
004AE8B2  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AE8B5  83 F8 5A                  CMP EAX,0x5a
004AE8B8  0F 8F DF 03 00 00         JG 0x004aec9d
004AE8BE  85 FF                     TEST EDI,EDI
004AE8C0  74 0C                     JZ 0x004ae8ce
004AE8C2  39 BE D3 05 00 00         CMP dword ptr [ESI + 0x5d3],EDI
004AE8C8  0F 85 CF 03 00 00         JNZ 0x004aec9d
LAB_004ae8ce:
004AE8CE  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
004AE8D5  E9 C3 03 00 00            JMP 0x004aec9d
LAB_004ae8da:
004AE8DA  83 F8 64                  CMP EAX,0x64
004AE8DD  0F 85 A2 00 00 00         JNZ 0x004ae985
004AE8E3  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004AE8E6  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004AE8E9  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
004AE8EC  C1 E2 04                  SHL EDX,0x4
004AE8EF  03 D6                     ADD EDX,ESI
004AE8F1  8B 0C 55 F6 57 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f57f6]
004AE8F8  8D 3C 55 F6 57 7F 00      LEA EDI,[EDX*0x2 + 0x7f57f6]
004AE8FF  85 C9                     TEST ECX,ECX
004AE901  0F 84 96 03 00 00         JZ 0x004aec9d
004AE907  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AE90A  33 F6                     XOR ESI,ESI
004AE90C  85 C0                     TEST EAX,EAX
004AE90E  0F 8E 89 03 00 00         JLE 0x004aec9d
LAB_004ae914:
004AE914  8D 45 F4                  LEA EAX,[EBP + -0xc]
004AE917  8B D6                     MOV EDX,ESI
004AE919  50                        PUSH EAX
004AE91A  E8 51 E3 1F 00            CALL 0x006acc70
004AE91F  8D 4D FC                  LEA ECX,[EBP + -0x4]
004AE922  8D 55 FE                  LEA EDX,[EBP + -0x2]
004AE925  51                        PUSH ECX
004AE926  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AE929  8D 45 2A                  LEA EAX,[EBP + 0x2a]
004AE92C  52                        PUSH EDX
004AE92D  50                        PUSH EAX
004AE92E  E8 92 2F F5 FF            CALL 0x004018c5
004AE933  0F BF 45 2A               MOVSX EAX,word ptr [EBP + 0x2a]
004AE937  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AE93A  3B C1                     CMP EAX,ECX
004AE93C  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
004AE940  75 13                     JNZ 0x004ae955
004AE942  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004AE945  0F BF D1                  MOVSX EDX,CX
004AE948  3B D3                     CMP EDX,EBX
004AE94A  75 09                     JNZ 0x004ae955
004AE94C  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004AE950  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
004AE953  74 23                     JZ 0x004ae978
LAB_004ae955:
004AE955  2B 45 08                  SUB EAX,dword ptr [EBP + 0x8]
004AE958  99                        CDQ
004AE959  33 C2                     XOR EAX,EDX
004AE95B  2B C2                     SUB EAX,EDX
004AE95D  83 F8 0F                  CMP EAX,0xf
004AE960  7F 16                     JG 0x004ae978
004AE962  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AE965  0F BF C1                  MOVSX EAX,CX
004AE968  2B C2                     SUB EAX,EDX
004AE96A  99                        CDQ
004AE96B  33 C2                     XOR EAX,EDX
004AE96D  2B C2                     SUB EAX,EDX
004AE96F  83 F8 0F                  CMP EAX,0xf
004AE972  0F 8E 1E 03 00 00         JLE 0x004aec96
LAB_004ae978:
004AE978  8B 0F                     MOV ECX,dword ptr [EDI]
004AE97A  46                        INC ESI
004AE97B  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AE97E  7C 94                     JL 0x004ae914
004AE980  E9 18 03 00 00            JMP 0x004aec9d
LAB_004ae985:
004AE985  83 F8 4D                  CMP EAX,0x4d
004AE988  0F 85 BE 00 00 00         JNZ 0x004aea4c
004AE98E  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004AE991  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004AE994  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
004AE997  C1 E2 04                  SHL EDX,0x4
004AE99A  03 D6                     ADD EDX,ESI
004AE99C  8B 0C 55 02 58 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f5802]
004AE9A3  8D 04 55 02 58 7F 00      LEA EAX,[EDX*0x2 + 0x7f5802]
004AE9AA  85 C9                     TEST ECX,ECX
004AE9AC  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
004AE9AF  0F 84 E8 02 00 00         JZ 0x004aec9d
004AE9B5  8B 15 18 51 79 00         MOV EDX,dword ptr [0x00795118]
004AE9BB  B8 79 19 8C 02            MOV EAX,0x28c1979
004AE9C0  F7 EA                     IMUL EDX
004AE9C2  D1 FA                     SAR EDX,0x1
004AE9C4  8B C2                     MOV EAX,EDX
004AE9C6  33 F6                     XOR ESI,ESI
004AE9C8  C1 E8 1F                  SHR EAX,0x1f
004AE9CB  03 D0                     ADD EDX,EAX
004AE9CD  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AE9D0  85 C0                     TEST EAX,EAX
004AE9D2  8B DA                     MOV EBX,EDX
004AE9D4  0F 8E C3 02 00 00         JLE 0x004aec9d
LAB_004ae9da:
004AE9DA  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AE9DD  52                        PUSH EDX
004AE9DE  8B D6                     MOV EDX,ESI
004AE9E0  E8 8B E2 1F 00            CALL 0x006acc70
004AE9E5  8D 45 FC                  LEA EAX,[EBP + -0x4]
004AE9E8  8D 4D FE                  LEA ECX,[EBP + -0x2]
004AE9EB  50                        PUSH EAX
004AE9EC  8D 55 2A                  LEA EDX,[EBP + 0x2a]
004AE9EF  51                        PUSH ECX
004AE9F0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AE9F3  52                        PUSH EDX
004AE9F4  E8 CC 2E F5 FF            CALL 0x004018c5
004AE9F9  0F BF 45 2A               MOVSX EAX,word ptr [EBP + 0x2a]
004AE9FD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AEA00  3B C1                     CMP EAX,ECX
004AEA02  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
004AEA06  75 13                     JNZ 0x004aea1b
004AEA08  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004AEA0B  0F BF D1                  MOVSX EDX,CX
004AEA0E  3B D7                     CMP EDX,EDI
004AEA10  75 09                     JNZ 0x004aea1b
004AEA12  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004AEA16  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
004AEA19  74 21                     JZ 0x004aea3c
LAB_004aea1b:
004AEA1B  2B 45 08                  SUB EAX,dword ptr [EBP + 0x8]
004AEA1E  99                        CDQ
004AEA1F  33 C2                     XOR EAX,EDX
004AEA21  2B C2                     SUB EAX,EDX
004AEA23  3B C3                     CMP EAX,EBX
004AEA25  7F 15                     JG 0x004aea3c
004AEA27  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AEA2A  0F BF C1                  MOVSX EAX,CX
004AEA2D  2B C2                     SUB EAX,EDX
004AEA2F  99                        CDQ
004AEA30  33 C2                     XOR EAX,EDX
004AEA32  2B C2                     SUB EAX,EDX
004AEA34  3B C3                     CMP EAX,EBX
004AEA36  0F 8E 5A 02 00 00         JLE 0x004aec96
LAB_004aea3c:
004AEA3C  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
004AEA3F  46                        INC ESI
004AEA40  8B 08                     MOV ECX,dword ptr [EAX]
004AEA42  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AEA45  7C 93                     JL 0x004ae9da
004AEA47  E9 51 02 00 00            JMP 0x004aec9d
LAB_004aea4c:
004AEA4C  83 F8 43                  CMP EAX,0x43
004AEA4F  0F 85 BE 00 00 00         JNZ 0x004aeb13
004AEA55  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004AEA58  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004AEA5B  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004AEA5E  C1 E0 04                  SHL EAX,0x4
004AEA61  03 C6                     ADD EAX,ESI
004AEA63  8B 0C 45 0E 58 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f580e]
004AEA6A  8D 04 45 0E 58 7F 00      LEA EAX,[EAX*0x2 + 0x7f580e]
004AEA71  85 C9                     TEST ECX,ECX
004AEA73  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
004AEA76  0F 84 21 02 00 00         JZ 0x004aec9d
004AEA7C  8B 15 F0 50 79 00         MOV EDX,dword ptr [0x007950f0]
004AEA82  B8 79 19 8C 02            MOV EAX,0x28c1979
004AEA87  F7 EA                     IMUL EDX
004AEA89  D1 FA                     SAR EDX,0x1
004AEA8B  8B C2                     MOV EAX,EDX
004AEA8D  33 F6                     XOR ESI,ESI
004AEA8F  C1 E8 1F                  SHR EAX,0x1f
004AEA92  03 D0                     ADD EDX,EAX
004AEA94  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AEA97  85 C0                     TEST EAX,EAX
004AEA99  8B DA                     MOV EBX,EDX
004AEA9B  0F 8E FC 01 00 00         JLE 0x004aec9d
LAB_004aeaa1:
004AEAA1  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AEAA4  52                        PUSH EDX
004AEAA5  8B D6                     MOV EDX,ESI
004AEAA7  E8 C4 E1 1F 00            CALL 0x006acc70
004AEAAC  8D 45 FC                  LEA EAX,[EBP + -0x4]
004AEAAF  8D 4D FE                  LEA ECX,[EBP + -0x2]
004AEAB2  50                        PUSH EAX
004AEAB3  8D 55 2A                  LEA EDX,[EBP + 0x2a]
004AEAB6  51                        PUSH ECX
004AEAB7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AEABA  52                        PUSH EDX
004AEABB  E8 05 2E F5 FF            CALL 0x004018c5
004AEAC0  0F BF 45 2A               MOVSX EAX,word ptr [EBP + 0x2a]
004AEAC4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AEAC7  3B C1                     CMP EAX,ECX
004AEAC9  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
004AEACD  75 13                     JNZ 0x004aeae2
004AEACF  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004AEAD2  0F BF D1                  MOVSX EDX,CX
004AEAD5  3B D7                     CMP EDX,EDI
004AEAD7  75 09                     JNZ 0x004aeae2
004AEAD9  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004AEADD  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
004AEAE0  74 21                     JZ 0x004aeb03
LAB_004aeae2:
004AEAE2  2B 45 08                  SUB EAX,dword ptr [EBP + 0x8]
004AEAE5  99                        CDQ
004AEAE6  33 C2                     XOR EAX,EDX
004AEAE8  2B C2                     SUB EAX,EDX
004AEAEA  3B C3                     CMP EAX,EBX
004AEAEC  7F 15                     JG 0x004aeb03
004AEAEE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AEAF1  0F BF C1                  MOVSX EAX,CX
004AEAF4  2B C2                     SUB EAX,EDX
004AEAF6  99                        CDQ
004AEAF7  33 C2                     XOR EAX,EDX
004AEAF9  2B C2                     SUB EAX,EDX
004AEAFB  3B C3                     CMP EAX,EBX
004AEAFD  0F 8E 93 01 00 00         JLE 0x004aec96
LAB_004aeb03:
004AEB03  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
004AEB06  46                        INC ESI
004AEB07  8B 08                     MOV ECX,dword ptr [EAX]
004AEB09  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AEB0C  7C 93                     JL 0x004aeaa1
004AEB0E  E9 8A 01 00 00            JMP 0x004aec9d
LAB_004aeb13:
004AEB13  83 F8 73                  CMP EAX,0x73
004AEB16  0F 85 BE 00 00 00         JNZ 0x004aebda
004AEB1C  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004AEB1F  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004AEB22  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004AEB25  C1 E0 04                  SHL EAX,0x4
004AEB28  03 C6                     ADD EAX,ESI
004AEB2A  8B 0C 45 12 58 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f5812]
004AEB31  8D 04 45 12 58 7F 00      LEA EAX,[EAX*0x2 + 0x7f5812]
004AEB38  85 C9                     TEST ECX,ECX
004AEB3A  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
004AEB3D  0F 84 5A 01 00 00         JZ 0x004aec9d
004AEB43  8B 15 B0 51 79 00         MOV EDX,dword ptr [0x007951b0]
004AEB49  B8 79 19 8C 02            MOV EAX,0x28c1979
004AEB4E  F7 EA                     IMUL EDX
004AEB50  D1 FA                     SAR EDX,0x1
004AEB52  8B C2                     MOV EAX,EDX
004AEB54  33 F6                     XOR ESI,ESI
004AEB56  C1 E8 1F                  SHR EAX,0x1f
004AEB59  03 D0                     ADD EDX,EAX
004AEB5B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AEB5E  85 C0                     TEST EAX,EAX
004AEB60  8B DA                     MOV EBX,EDX
004AEB62  0F 8E 35 01 00 00         JLE 0x004aec9d
LAB_004aeb68:
004AEB68  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AEB6B  52                        PUSH EDX
004AEB6C  8B D6                     MOV EDX,ESI
004AEB6E  E8 FD E0 1F 00            CALL 0x006acc70
004AEB73  8D 45 FC                  LEA EAX,[EBP + -0x4]
004AEB76  8D 4D FE                  LEA ECX,[EBP + -0x2]
004AEB79  50                        PUSH EAX
004AEB7A  8D 55 2A                  LEA EDX,[EBP + 0x2a]
004AEB7D  51                        PUSH ECX
004AEB7E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AEB81  52                        PUSH EDX
004AEB82  E8 3E 2D F5 FF            CALL 0x004018c5
004AEB87  0F BF 45 2A               MOVSX EAX,word ptr [EBP + 0x2a]
004AEB8B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AEB8E  3B C1                     CMP EAX,ECX
004AEB90  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
004AEB94  75 13                     JNZ 0x004aeba9
004AEB96  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004AEB99  0F BF D1                  MOVSX EDX,CX
004AEB9C  3B D7                     CMP EDX,EDI
004AEB9E  75 09                     JNZ 0x004aeba9
004AEBA0  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004AEBA4  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
004AEBA7  74 21                     JZ 0x004aebca
LAB_004aeba9:
004AEBA9  2B 45 08                  SUB EAX,dword ptr [EBP + 0x8]
004AEBAC  99                        CDQ
004AEBAD  33 C2                     XOR EAX,EDX
004AEBAF  2B C2                     SUB EAX,EDX
004AEBB1  3B C3                     CMP EAX,EBX
004AEBB3  7F 15                     JG 0x004aebca
004AEBB5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AEBB8  0F BF C1                  MOVSX EAX,CX
004AEBBB  2B C2                     SUB EAX,EDX
004AEBBD  99                        CDQ
004AEBBE  33 C2                     XOR EAX,EDX
004AEBC0  2B C2                     SUB EAX,EDX
004AEBC2  3B C3                     CMP EAX,EBX
004AEBC4  0F 8E CC 00 00 00         JLE 0x004aec96
LAB_004aebca:
004AEBCA  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
004AEBCD  46                        INC ESI
004AEBCE  8B 08                     MOV ECX,dword ptr [EAX]
004AEBD0  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AEBD3  7C 93                     JL 0x004aeb68
004AEBD5  E9 C3 00 00 00            JMP 0x004aec9d
LAB_004aebda:
004AEBDA  83 F8 65                  CMP EAX,0x65
004AEBDD  0F 85 BA 00 00 00         JNZ 0x004aec9d
004AEBE3  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004AEBE6  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004AEBE9  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004AEBEC  C1 E0 04                  SHL EAX,0x4
004AEBEF  03 C6                     ADD EAX,ESI
004AEBF1  8B 0C 45 06 58 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f5806]
004AEBF8  8D 04 45 06 58 7F 00      LEA EAX,[EAX*0x2 + 0x7f5806]
004AEBFF  85 C9                     TEST ECX,ECX
004AEC01  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
004AEC04  0F 84 93 00 00 00         JZ 0x004aec9d
004AEC0A  8B 15 78 51 79 00         MOV EDX,dword ptr [0x00795178]
004AEC10  B8 79 19 8C 02            MOV EAX,0x28c1979
004AEC15  F7 EA                     IMUL EDX
004AEC17  D1 FA                     SAR EDX,0x1
004AEC19  8B C2                     MOV EAX,EDX
004AEC1B  33 F6                     XOR ESI,ESI
004AEC1D  C1 E8 1F                  SHR EAX,0x1f
004AEC20  03 D0                     ADD EDX,EAX
004AEC22  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AEC25  85 C0                     TEST EAX,EAX
004AEC27  8B DA                     MOV EBX,EDX
004AEC29  7E 72                     JLE 0x004aec9d
LAB_004aec2b:
004AEC2B  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AEC2E  52                        PUSH EDX
004AEC2F  8B D6                     MOV EDX,ESI
004AEC31  E8 3A E0 1F 00            CALL 0x006acc70
004AEC36  8D 45 FC                  LEA EAX,[EBP + -0x4]
004AEC39  8D 4D FE                  LEA ECX,[EBP + -0x2]
004AEC3C  50                        PUSH EAX
004AEC3D  8D 55 2A                  LEA EDX,[EBP + 0x2a]
004AEC40  51                        PUSH ECX
004AEC41  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AEC44  52                        PUSH EDX
004AEC45  E8 7B 2C F5 FF            CALL 0x004018c5
004AEC4A  0F BF 45 2A               MOVSX EAX,word ptr [EBP + 0x2a]
004AEC4E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AEC51  3B C1                     CMP EAX,ECX
004AEC53  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
004AEC57  75 13                     JNZ 0x004aec6c
004AEC59  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004AEC5C  0F BF D1                  MOVSX EDX,CX
004AEC5F  3B D7                     CMP EDX,EDI
004AEC61  75 09                     JNZ 0x004aec6c
004AEC63  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004AEC67  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
004AEC6A  74 1D                     JZ 0x004aec89
LAB_004aec6c:
004AEC6C  2B 45 08                  SUB EAX,dword ptr [EBP + 0x8]
004AEC6F  99                        CDQ
004AEC70  33 C2                     XOR EAX,EDX
004AEC72  2B C2                     SUB EAX,EDX
004AEC74  3B C3                     CMP EAX,EBX
004AEC76  7F 11                     JG 0x004aec89
004AEC78  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AEC7B  0F BF C1                  MOVSX EAX,CX
004AEC7E  2B C2                     SUB EAX,EDX
004AEC80  99                        CDQ
004AEC81  33 C2                     XOR EAX,EDX
004AEC83  2B C2                     SUB EAX,EDX
004AEC85  3B C3                     CMP EAX,EBX
004AEC87  7E 0D                     JLE 0x004aec96
LAB_004aec89:
004AEC89  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
004AEC8C  46                        INC ESI
004AEC8D  8B 08                     MOV ECX,dword ptr [EAX]
004AEC8F  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AEC92  7C 97                     JL 0x004aec2b
004AEC94  EB 07                     JMP 0x004aec9d
FUN_004ae0b0::cf_break_loop_004AEC96:
004AEC96  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
switchD_004ae472::caseD_3:
004AEC9D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004AECA0  85 C0                     TEST EAX,EAX
004AECA2  74 0E                     JZ 0x004aecb2
004AECA4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004AECA7  85 C0                     TEST EAX,EAX
004AECA9  74 07                     JZ 0x004aecb2
004AECAB  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
LAB_004aecb2:
004AECB2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004AECB5  5F                        POP EDI
004AECB6  5E                        POP ESI
004AECB7  5B                        POP EBX
004AECB8  85 C0                     TEST EAX,EAX
004AECBA  74 05                     JZ 0x004aecc1
004AECBC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004AECBF  89 08                     MOV dword ptr [EAX],ECX
LAB_004aecc1:
004AECC1  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004AECC4  85 C0                     TEST EAX,EAX
004AECC6  74 05                     JZ 0x004aeccd
004AECC8  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004AECCB  89 10                     MOV dword ptr [EAX],EDX
LAB_004aeccd:
004AECCD  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004AECD0  85 C0                     TEST EAX,EAX
004AECD2  74 05                     JZ 0x004aecd9
004AECD4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AECD7  89 08                     MOV dword ptr [EAX],ECX
LAB_004aecd9:
004AECD9  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004AECDC  8B E5                     MOV ESP,EBP
004AECDE  5D                        POP EBP
004AECDF  C3                        RET
