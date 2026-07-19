STBoatC::GetMessage:
0044EE30  55                        PUSH EBP
0044EE31  8B EC                     MOV EBP,ESP
0044EE33  81 EC 80 02 00 00         SUB ESP,0x280
0044EE39  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044EE3E  53                        PUSH EBX
0044EE3F  56                        PUSH ESI
0044EE40  89 8D 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],ECX
0044EE46  33 F6                     XOR ESI,ESI
0044EE48  57                        PUSH EDI
0044EE49  8D 95 84 FE FF FF         LEA EDX,[EBP + 0xfffffe84]
0044EE4F  8D 8D 80 FE FF FF         LEA ECX,[EBP + 0xfffffe80]
0044EE55  56                        PUSH ESI
0044EE56  52                        PUSH EDX
0044EE57  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0044EE5A  89 B5 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],ESI
0044EE60  89 85 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EAX
0044EE66  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044EE6C  E8 7F E9 2D 00            CALL 0x0072d7f0
0044EE71  8B D8                     MOV EBX,EAX
0044EE73  83 C4 08                  ADD ESP,0x8
0044EE76  3B DE                     CMP EBX,ESI
0044EE78  0F 85 86 C0 00 00         JNZ 0x0045af04
0044EE7E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0044EE81  8B 9D 18 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff18]
0044EE87  57                        PUSH EDI
0044EE88  8B CB                     MOV ECX,EBX
0044EE8A  E8 78 60 FB FF            CALL 0x00404f07
0044EE8F  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0044EE92  3D 11 01 00 00            CMP EAX,0x111
0044EE97  0F 87 E8 B8 00 00         JA 0x0045a785
0044EE9D  0F 84 C5 13 00 00         JZ 0x00450268
0044EEA3  83 F8 03                  CMP EAX,0x3
0044EEA6  0F 87 09 AE 00 00         JA 0x00459cb5
0044EEAC  0F 84 F0 14 00 00         JZ 0x004503a2
0044EEB2  2B C6                     SUB EAX,ESI
0044EEB4  0F 84 D0 15 00 00         JZ 0x0045048a
0044EEBA  83 E8 02                  SUB EAX,0x2
0044EEBD  0F 85 2A C0 00 00         JNZ 0x0045aeed
0044EEC3  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0044EEC6  56                        PUSH ESI
0044EEC7  8B CB                     MOV ECX,EBX
0044EEC9  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0044EECC  E8 8C 3C FB FF            CALL 0x00402b5d
0044EED1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0044EED4  39 71 0C                  CMP dword ptr [ECX + 0xc],ESI
0044EED7  0F 85 A9 05 00 00         JNZ 0x0044f486
0044EEDD  8B D7                     MOV EDX,EDI
0044EEDF  8B 7A 14                  MOV EDI,dword ptr [EDX + 0x14]
0044EEE2  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0044EEE5  89 83 F3 06 00 00         MOV dword ptr [EBX + 0x6f3],EAX
0044EEEB  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
0044EEEE  89 8B F7 06 00 00         MOV dword ptr [EBX + 0x6f7],ECX
0044EEF4  8B 57 2A                  MOV EDX,dword ptr [EDI + 0x2a]
0044EEF7  3B D6                     CMP EDX,ESI
0044EEF9  7D 08                     JGE 0x0044ef03
0044EEFB  89 B3 D6 07 00 00         MOV dword ptr [EBX + 0x7d6],ESI
0044EF01  EB 25                     JMP 0x0044ef28
LAB_0044ef03:
0044EF03  83 FA 78                  CMP EDX,0x78
0044EF06  7E 0C                     JLE 0x0044ef14
0044EF08  C7 83 D6 07 00 00 28 00 00 00  MOV dword ptr [EBX + 0x7d6],0x28
0044EF12  EB 14                     JMP 0x0044ef28
LAB_0044ef14:
0044EF14  B8 56 55 55 55            MOV EAX,0x55555556
0044EF19  F7 EA                     IMUL EDX
0044EF1B  8B C2                     MOV EAX,EDX
0044EF1D  C1 E8 1F                  SHR EAX,0x1f
0044EF20  03 D0                     ADD EDX,EAX
0044EF22  89 93 D6 07 00 00         MOV dword ptr [EBX + 0x7d6],EDX
LAB_0044ef28:
0044EF28  8B 4F 2E                  MOV ECX,dword ptr [EDI + 0x2e]
0044EF2B  3B CE                     CMP ECX,ESI
0044EF2D  7D 08                     JGE 0x0044ef37
0044EF2F  89 B3 DA 07 00 00         MOV dword ptr [EBX + 0x7da],ESI
0044EF35  EB 2B                     JMP 0x0044ef62
LAB_0044ef37:
0044EF37  81 F9 20 03 00 00         CMP ECX,0x320
0044EF3D  7E 0C                     JLE 0x0044ef4b
0044EF3F  C7 83 DA 07 00 00 28 00 00 00  MOV dword ptr [EBX + 0x7da],0x28
0044EF49  EB 17                     JMP 0x0044ef62
LAB_0044ef4b:
0044EF4B  B8 67 66 66 66            MOV EAX,0x66666667
0044EF50  F7 E9                     IMUL ECX
0044EF52  C1 FA 03                  SAR EDX,0x3
0044EF55  8B CA                     MOV ECX,EDX
0044EF57  C1 E9 1F                  SHR ECX,0x1f
0044EF5A  03 D1                     ADD EDX,ECX
0044EF5C  89 93 DA 07 00 00         MOV dword ptr [EBX + 0x7da],EDX
LAB_0044ef62:
0044EF62  8B 83 D6 07 00 00         MOV EAX,dword ptr [EBX + 0x7d6]
0044EF68  8B 93 DA 07 00 00         MOV EDX,dword ptr [EBX + 0x7da]
0044EF6E  8D 0C 02                  LEA ECX,[EDX + EAX*0x1]
0044EF71  83 F9 28                  CMP ECX,0x28
0044EF74  7E 1C                     JLE 0x0044ef92
0044EF76  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0044EF79  C1 E0 03                  SHL EAX,0x3
0044EF7C  99                        CDQ
0044EF7D  F7 F9                     IDIV ECX
0044EF7F  B9 28 00 00 00            MOV ECX,0x28
0044EF84  2B C8                     SUB ECX,EAX
0044EF86  89 83 D6 07 00 00         MOV dword ptr [EBX + 0x7d6],EAX
0044EF8C  89 8B DA 07 00 00         MOV dword ptr [EBX + 0x7da],ECX
LAB_0044ef92:
0044EF92  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044EF98  83 C0 EA                  ADD EAX,-0x16
0044EF9B  83 F8 0F                  CMP EAX,0xf
0044EF9E  77 3D                     JA 0x0044efdd
0044EFA0  33 D2                     XOR EDX,EDX
0044EFA2  8A 90 B8 AF 45 00         MOV DL,byte ptr [EAX + 0x45afb8]
switchD_0044efa8::switchD:
0044EFA8  FF 24 95 A4 AF 45 00      JMP dword ptr [EDX*0x4 + 0x45afa4]
switchD_0044efa8::caseD_23:
0044EFAF  C7 83 22 07 00 00 14 00 00 00  MOV dword ptr [EBX + 0x722],0x14
0044EFB9  EB 22                     JMP 0x0044efdd
switchD_0044efa8::caseD_1b:
0044EFBB  C7 83 1E 07 00 00 14 00 00 00  MOV dword ptr [EBX + 0x71e],0x14
0044EFC5  EB 16                     JMP 0x0044efdd
switchD_0044efa8::caseD_16:
0044EFC7  C7 83 26 07 00 00 28 00 00 00  MOV dword ptr [EBX + 0x726],0x28
0044EFD1  EB 0A                     JMP 0x0044efdd
switchD_0044efa8::caseD_17:
0044EFD3  C7 83 2A 07 00 00 28 00 00 00  MOV dword ptr [EBX + 0x72a],0x28
switchD_0044efa8::caseD_18:
0044EFDD  66 8B 47 1C               MOV AX,word ptr [EDI + 0x1c]
0044EFE1  66 8B 4F 20               MOV CX,word ptr [EDI + 0x20]
0044EFE5  66 8B 57 1E               MOV DX,word ptr [EDI + 0x1e]
0044EFE9  66 3B C6                  CMP AX,SI
0044EFEC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0044EFEF  7C 5C                     JL 0x0044f04d
0044EFF1  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0044EFF8  7D 53                     JGE 0x0044f04d
0044EFFA  66 3B D6                  CMP DX,SI
0044EFFD  7C 4E                     JL 0x0044f04d
0044EFFF  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0044F006  7D 45                     JGE 0x0044f04d
0044F008  66 3B CE                  CMP CX,SI
0044F00B  7C 40                     JL 0x0044f04d
0044F00D  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0044F014  7D 37                     JGE 0x0044f04d
0044F016  0F BF C1                  MOVSX EAX,CX
0044F019  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0044F020  0F AF C1                  IMUL EAX,ECX
0044F023  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0044F02A  0F BF D2                  MOVSX EDX,DX
0044F02D  0F AF D1                  IMUL EDX,ECX
0044F030  03 C2                     ADD EAX,EDX
0044F032  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0044F036  03 C2                     ADD EAX,EDX
0044F038  33 C9                     XOR ECX,ECX
0044F03A  8A 8B 8E 00 00 00         MOV CL,byte ptr [EBX + 0x8e]
0044F040  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
0044F043  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0044F048  8B 0C 90                  MOV ECX,dword ptr [EAX + EDX*0x4]
0044F04B  EB 02                     JMP 0x0044f04f
LAB_0044f04d:
0044F04D  33 C9                     XOR ECX,ECX
LAB_0044f04f:
0044F04F  3B CE                     CMP ECX,ESI
0044F051  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0044F054  0F 84 9D 00 00 00         JZ 0x0044f0f7
0044F05A  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F060  8B 11                     MOV EDX,dword ptr [ECX]
0044F062  50                        PUSH EAX
0044F063  FF 92 14 01 00 00         CALL dword ptr [EDX + 0x114]
0044F069  85 C0                     TEST EAX,EAX
0044F06B  75 3E                     JNZ 0x0044f0ab
0044F06D  68 2C A0 7A 00            PUSH 0x7aa02c
0044F072  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044F077  56                        PUSH ESI
0044F078  56                        PUSH ESI
0044F079  68 97 01 00 00            PUSH 0x197
0044F07E  68 3C 9D 7A 00            PUSH 0x7a9d3c
0044F083  E8 48 E4 25 00            CALL 0x006ad4d0
0044F088  83 C4 18                  ADD ESP,0x18
0044F08B  85 C0                     TEST EAX,EAX
0044F08D  74 01                     JZ 0x0044f090
0044F08F  CC                        INT3
LAB_0044f090:
0044F090  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0044F096  68 98 01 00 00            PUSH 0x198
0044F09B  68 3C 9D 7A 00            PUSH 0x7a9d3c
0044F0A0  51                        PUSH ECX
0044F0A1  68 FF FF 00 00            PUSH 0xffff
0044F0A6  E8 95 6D 25 00            CALL 0x006a5e40
LAB_0044f0ab:
0044F0AB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044F0AE  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0044F0B1  50                        PUSH EAX
0044F0B2  8B 11                     MOV EDX,dword ptr [ECX]
0044F0B4  FF 92 18 01 00 00         CALL dword ptr [EDX + 0x118]
0044F0BA  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F0C0  83 F8 07                  CMP EAX,0x7
0044F0C3  74 0A                     JZ 0x0044f0cf
0044F0C5  83 F8 13                  CMP EAX,0x13
0044F0C8  74 05                     JZ 0x0044f0cf
0044F0CA  83 F8 1B                  CMP EAX,0x1b
0044F0CD  75 28                     JNZ 0x0044f0f7
LAB_0044f0cf:
0044F0CF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044F0D2  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0044F0D5  89 93 CA 07 00 00         MOV dword ptr [EBX + 0x7ca],EDX
0044F0DB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044F0DE  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
0044F0E4  8B 88 ED 01 00 00         MOV ECX,dword ptr [EAX + 0x1ed]
0044F0EA  51                        PUSH ECX
0044F0EB  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0044F0F1  52                        PUSH EDX
0044F0F2  E8 E9 B2 29 00            CALL 0x006ea3e0
LAB_0044f0f7:
0044F0F7  8D 47 36                  LEA EAX,[EDI + 0x36]
0044F0FA  8D 8B FB 06 00 00         LEA ECX,[EBX + 0x6fb]
0044F100  8B 10                     MOV EDX,dword ptr [EAX]
0044F102  89 11                     MOV dword ptr [ECX],EDX
0044F104  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0044F107  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0044F10A  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0044F10D  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0044F110  66 8B 50 0C               MOV DX,word ptr [EAX + 0xc]
0044F114  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
0044F118  8A 40 0E                  MOV AL,byte ptr [EAX + 0xe]
0044F11B  88 41 0E                  MOV byte ptr [ECX + 0xe],AL
0044F11E  8B 4F 32                  MOV ECX,dword ptr [EDI + 0x32]
0044F121  89 8B 3E 07 00 00         MOV dword ptr [EBX + 0x73e],ECX
0044F127  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044F12A  3B C6                     CMP EAX,ESI
0044F12C  74 2B                     JZ 0x0044f159
0044F12E  66 8B 50 6E               MOV DX,word ptr [EAX + 0x6e]
0044F132  66 89 53 6E               MOV word ptr [EBX + 0x6e],DX
0044F136  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F13C  83 F8 07                  CMP EAX,0x7
0044F13F  74 0F                     JZ 0x0044f150
0044F141  83 F8 13                  CMP EAX,0x13
0044F144  74 0A                     JZ 0x0044f150
0044F146  83 F8 1B                  CMP EAX,0x1b
0044F149  74 05                     JZ 0x0044f150
0044F14B  89 73 76                  MOV dword ptr [EBX + 0x76],ESI
0044F14E  EB 31                     JMP 0x0044f181
LAB_0044f150:
0044F150  C7 43 76 01 00 00 00      MOV dword ptr [EBX + 0x76],0x1
0044F157  EB 28                     JMP 0x0044f181
LAB_0044f159:
0044F159  C7 43 76 01 00 00 00      MOV dword ptr [EBX + 0x76],0x1
0044F160  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0044F163  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0044F169  05 39 30 00 00            ADD EAX,0x3039
0044F16E  33 D2                     XOR EDX,EDX
0044F170  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044F173  B9 30 00 00 00            MOV ECX,0x30
0044F178  C1 E8 10                  SHR EAX,0x10
0044F17B  F7 F1                     DIV ECX
0044F17D  66 89 53 6E               MOV word ptr [EBX + 0x6e],DX
LAB_0044f181:
0044F181  8B CB                     MOV ECX,EBX
0044F183  E8 24 54 FB FF            CALL 0x004045ac
0044F188  8B CB                     MOV ECX,EBX
0044F18A  C6 83 E3 00 00 00 00      MOV byte ptr [EBX + 0xe3],0x0
0044F191  E8 00 56 FB FF            CALL 0x00404796
0044F196  8B 47 26                  MOV EAX,dword ptr [EDI + 0x26]
0044F199  3B C6                     CMP EAX,ESI
0044F19B  7D 0C                     JGE 0x0044f1a9
0044F19D  C7 83 16 07 00 00 01 00 00 00  MOV dword ptr [EBX + 0x716],0x1
0044F1A7  EB 2D                     JMP 0x0044f1d6
LAB_0044f1a9:
0044F1A9  83 F8 64                  CMP EAX,0x64
0044F1AC  7C 08                     JL 0x0044f1b6
0044F1AE  8B 93 12 07 00 00         MOV EDX,dword ptr [EBX + 0x712]
0044F1B4  EB 1A                     JMP 0x0044f1d0
LAB_0044f1b6:
0044F1B6  8B 8B 12 07 00 00         MOV ECX,dword ptr [EBX + 0x712]
0044F1BC  0F AF C8                  IMUL ECX,EAX
0044F1BF  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0044F1C4  F7 E9                     IMUL ECX
0044F1C6  C1 FA 05                  SAR EDX,0x5
0044F1C9  8B C2                     MOV EAX,EDX
0044F1CB  C1 E8 1F                  SHR EAX,0x1f
0044F1CE  03 D0                     ADD EDX,EAX
LAB_0044f1d0:
0044F1D0  89 93 16 07 00 00         MOV dword ptr [EBX + 0x716],EDX
LAB_0044f1d6:
0044F1D6  8B CB                     MOV ECX,EBX
0044F1D8  E8 83 5E FB FF            CALL 0x00405060
0044F1DD  8B CB                     MOV ECX,EBX
0044F1DF  E8 ED 29 FB FF            CALL 0x00401bd1
0044F1E4  39 75 F4                  CMP dword ptr [EBP + -0xc],ESI
0044F1E7  74 58                     JZ 0x0044f241
0044F1E9  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F1EF  83 F8 07                  CMP EAX,0x7
0044F1F2  74 4D                     JZ 0x0044f241
0044F1F4  83 F8 13                  CMP EAX,0x13
0044F1F7  74 48                     JZ 0x0044f241
0044F1F9  83 F8 1B                  CMP EAX,0x1b
0044F1FC  74 43                     JZ 0x0044f241
0044F1FE  66 8B 4F 20               MOV CX,word ptr [EDI + 0x20]
0044F202  66 8B 57 1E               MOV DX,word ptr [EDI + 0x1e]
0044F206  66 8B 47 1C               MOV AX,word ptr [EDI + 0x1c]
0044F20A  56                        PUSH ESI
0044F20B  51                        PUSH ECX
0044F20C  52                        PUSH EDX
0044F20D  50                        PUSH EAX
0044F20E  8B CB                     MOV ECX,EBX
0044F210  E8 4A 37 FB FF            CALL 0x0040295f
0044F215  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044F218  66 8B 51 41               MOV DX,word ptr [ECX + 0x41]
0044F21C  66 89 53 41               MOV word ptr [EBX + 0x41],DX
0044F220  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044F223  66 8B 48 43               MOV CX,word ptr [EAX + 0x43]
0044F227  66 89 4B 43               MOV word ptr [EBX + 0x43],CX
0044F22B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044F22E  66 8B 42 45               MOV AX,word ptr [EDX + 0x45]
0044F232  66 89 43 45               MOV word ptr [EBX + 0x45],AX
0044F236  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044F239  8A 51 4D                  MOV DL,byte ptr [ECX + 0x4d]
0044F23C  88 53 4D                  MOV byte ptr [EBX + 0x4d],DL
0044F23F  EB 18                     JMP 0x0044f259
LAB_0044f241:
0044F241  66 8B 47 20               MOV AX,word ptr [EDI + 0x20]
0044F245  66 8B 4F 1E               MOV CX,word ptr [EDI + 0x1e]
0044F249  66 8B 57 1C               MOV DX,word ptr [EDI + 0x1c]
0044F24D  6A 01                     PUSH 0x1
0044F24F  50                        PUSH EAX
0044F250  51                        PUSH ECX
0044F251  52                        PUSH EDX
0044F252  8B CB                     MOV ECX,EBX
0044F254  E8 06 37 FB FF            CALL 0x0040295f
LAB_0044f259:
0044F259  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F25F  83 F8 09                  CMP EAX,0x9
0044F262  74 09                     JZ 0x0044f26d
0044F264  83 F8 15                  CMP EAX,0x15
0044F267  74 04                     JZ 0x0044f26d
0044F269  6A 18                     PUSH 0x18
0044F26B  EB 02                     JMP 0x0044f26f
LAB_0044f26d:
0044F26D  6A 08                     PUSH 0x8
LAB_0044f26f:
0044F26F  8B CB                     MOV ECX,EBX
0044F271  E8 34 28 FB FF            CALL 0x00401aaa
0044F276  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044F279  3B C6                     CMP EAX,ESI
0044F27B  74 0A                     JZ 0x0044f287
0044F27D  66 8B 40 6C               MOV AX,word ptr [EAX + 0x6c]
0044F281  66 89 43 6C               MOV word ptr [EBX + 0x6c],AX
0044F285  EB 26                     JMP 0x0044f2ad
LAB_0044f287:
0044F287  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0044F28A  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0044F290  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0044F296  8B CB                     MOV ECX,EBX
0044F298  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044F29B  C1 E8 10                  SHR EAX,0x10
0044F29E  83 E0 07                  AND EAX,0x7
0044F2A1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0044F2A4  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0044F2A7  52                        PUSH EDX
0044F2A8  E8 14 6B FB FF            CALL 0x00405dc1
LAB_0044f2ad:
0044F2AD  8B 47 49                  MOV EAX,dword ptr [EDI + 0x49]
0044F2B0  66 8B 4F 22               MOV CX,word ptr [EDI + 0x22]
0044F2B4  66 8B 57 24               MOV DX,word ptr [EDI + 0x24]
0044F2B8  50                        PUSH EAX
0044F2B9  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0044F2BC  6A 01                     PUSH 0x1
0044F2BE  53                        PUSH EBX
0044F2BF  51                        PUSH ECX
0044F2C0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044F2C6  52                        PUSH EDX
0044F2C7  50                        PUSH EAX
0044F2C8  E8 F5 5F FB FF            CALL 0x004052c2
0044F2CD  C7 83 87 04 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x487],0xffffffff
0044F2D7  C7 83 8B 04 00 00 FF FF 00 00  MOV dword ptr [EBX + 0x48b],0xffff
0044F2E1  66 8B 8B 16 08 00 00      MOV CX,word ptr [EBX + 0x816]
0044F2E8  66 69 C9 C9 00            IMUL CX,CX,0xc9
0044F2ED  66 89 8B 14 08 00 00      MOV word ptr [EBX + 0x814],CX
0044F2F4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044F2F7  3B C6                     CMP EAX,ESI
0044F2F9  74 6F                     JZ 0x0044f36a
0044F2FB  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F301  83 F8 07                  CMP EAX,0x7
0044F304  74 64                     JZ 0x0044f36a
0044F306  83 F8 13                  CMP EAX,0x13
0044F309  74 5F                     JZ 0x0044f36a
0044F30B  83 F8 1B                  CMP EAX,0x1b
0044F30E  74 5A                     JZ 0x0044f36a
0044F310  C7 83 5D 04 00 00 14 00 00 00  MOV dword ptr [EBX + 0x45d],0x14
0044F31A  C7 83 C2 07 00 00 01 00 00 00  MOV dword ptr [EBX + 0x7c2],0x1
0044F324  8B 83 D1 01 00 00         MOV EAX,dword ptr [EBX + 0x1d1]
0044F32A  8B 13                     MOV EDX,dword ptr [EBX]
0044F32C  0C 0D                     OR AL,0xd
0044F32E  8B CB                     MOV ECX,EBX
0044F330  50                        PUSH EAX
0044F331  FF 92 00 01 00 00         CALL dword ptr [EDX + 0x100]
0044F337  C7 83 C0 05 00 00 03 00 00 00  MOV dword ptr [EBX + 0x5c0],0x3
0044F341  66 8B 4B 30               MOV CX,word ptr [EBX + 0x30]
0044F345  66 89 8B A0 05 00 00      MOV word ptr [EBX + 0x5a0],CX
0044F34C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044F34F  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0044F352  89 83 A2 05 00 00         MOV dword ptr [EBX + 0x5a2],EAX
0044F358  89 B3 A6 05 00 00         MOV dword ptr [EBX + 0x5a6],ESI
0044F35E  C7 83 C4 05 00 00 07 00 00 00  MOV dword ptr [EBX + 0x5c4],0x7
0044F368  EB 35                     JMP 0x0044f39f
LAB_0044f36a:
0044F36A  C7 83 2E 08 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x82e],0xffffffff
0044F374  C7 83 36 08 00 00 04 00 00 00  MOV dword ptr [EBX + 0x836],0x4
0044F37E  66 8B 4B 47               MOV CX,word ptr [EBX + 0x47]
0044F382  66 89 8B 75 04 00 00      MOV word ptr [EBX + 0x475],CX
0044F389  66 8B 53 49               MOV DX,word ptr [EBX + 0x49]
0044F38D  66 89 93 77 04 00 00      MOV word ptr [EBX + 0x477],DX
0044F394  66 8B 43 4B               MOV AX,word ptr [EBX + 0x4b]
0044F398  66 89 83 79 04 00 00      MOV word ptr [EBX + 0x479],AX
LAB_0044f39f:
0044F39F  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0044F3A2  33 D2                     XOR EDX,EDX
0044F3A4  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0044F3AA  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0044F3B0  B9 13 00 00 00            MOV ECX,0x13
0044F3B5  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044F3B8  C1 E8 10                  SHR EAX,0x10
0044F3BB  F7 F1                     DIV ECX
0044F3BD  8B CB                     MOV ECX,EBX
0044F3BF  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
0044F3C5  8B 13                     MOV EDX,dword ptr [EBX]
0044F3C7  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044F3CA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044F3D0  50                        PUSH EAX
0044F3D1  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0044F3D4  50                        PUSH EAX
0044F3D5  E8 5F 6A FB FF            CALL 0x00405e39
0044F3DA  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0044F3DD  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0044F3E0  33 D2                     XOR EDX,EDX
0044F3E2  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
0044F3E8  3B C2                     CMP EAX,EDX
0044F3EA  75 0C                     JNZ 0x0044f3f8
0044F3EC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044F3F2  50                        PUSH EAX
0044F3F3  E8 95 57 FB FF            CALL 0x00404b8d
LAB_0044f3f8:
0044F3F8  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F3FE  83 C0 FB                  ADD EAX,-0x5
0044F401  83 F8 20                  CMP EAX,0x20
0044F404  77 1B                     JA 0x0044f421
0044F406  33 C9                     XOR ECX,ECX
0044F408  8A 88 D0 AF 45 00         MOV CL,byte ptr [EAX + 0x45afd0]
switchD_0044f40e::switchD:
0044F40E  FF 24 8D C8 AF 45 00      JMP dword ptr [ECX*0x4 + 0x45afc8]
switchD_0044f40e::caseD_5:
0044F415  C7 83 0A 07 00 00 08 00 00 00  MOV dword ptr [EBX + 0x70a],0x8
0044F41F  EB 0A                     JMP 0x0044f42b
switchD_0044f40e::caseD_6:
0044F421  C7 83 0A 07 00 00 05 00 00 00  MOV dword ptr [EBX + 0x70a],0x5
LAB_0044f42b:
0044F42B  8B 93 0A 07 00 00         MOV EDX,dword ptr [EBX + 0x70a]
0044F431  8B CB                     MOV ECX,EBX
0044F433  52                        PUSH EDX
0044F434  E8 68 2F FB FF            CALL 0x004023a1
0044F439  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0044F43C  33 D2                     XOR EDX,EDX
0044F43E  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0044F444  05 39 30 00 00            ADD EAX,0x3039
0044F449  B9 05 00 00 00            MOV ECX,0x5
0044F44E  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044F451  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0044F454  C1 E8 10                  SHR EAX,0x10
0044F457  F7 F1                     DIV ECX
0044F459  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0044F45C  8D 4C 80 F1               LEA ECX,[EAX + EAX*0x4 + -0xf]
0044F460  89 8B 7E 07 00 00         MOV dword ptr [EBX + 0x77e],ECX
0044F466  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0044F469  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0044F46F  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0044F475  33 D2                     XOR EDX,EDX
0044F477  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044F47A  C1 E8 10                  SHR EAX,0x10
0044F47D  41                        INC ECX
0044F47E  F7 F1                     DIV ECX
0044F480  89 93 7A 07 00 00         MOV dword ptr [EBX + 0x77a],EDX
LAB_0044f486:
0044F486  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0044F489  83 78 0C 01               CMP dword ptr [EAX + 0xc],0x1
0044F48D  0F 85 D7 04 00 00         JNZ 0x0044f96a
0044F493  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044F496  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
0044F499  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0044F49C  8D 4F 32                  LEA ECX,[EDI + 0x32]
0044F49F  89 93 F3 06 00 00         MOV dword ptr [EBX + 0x6f3],EDX
0044F4A5  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0044F4A8  89 83 F7 06 00 00         MOV dword ptr [EBX + 0x6f7],EAX
0044F4AE  8B 01                     MOV EAX,dword ptr [ECX]
0044F4B0  8D 93 FB 06 00 00         LEA EDX,[EBX + 0x6fb]
0044F4B6  89 83 FB 06 00 00         MOV dword ptr [EBX + 0x6fb],EAX
0044F4BC  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0044F4BF  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0044F4C2  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0044F4C5  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0044F4C8  66 8B 41 0C               MOV AX,word ptr [ECX + 0xc]
0044F4CC  66 89 42 0C               MOV word ptr [EDX + 0xc],AX
0044F4D0  8A 49 0E                  MOV CL,byte ptr [ECX + 0xe]
0044F4D3  88 4A 0E                  MOV byte ptr [EDX + 0xe],CL
0044F4D6  8B 57 41                  MOV EDX,dword ptr [EDI + 0x41]
0044F4D9  89 93 1E 08 00 00         MOV dword ptr [EBX + 0x81e],EDX
0044F4DF  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F4E5  83 C0 EA                  ADD EAX,-0x16
0044F4E8  83 F8 0F                  CMP EAX,0xf
0044F4EB  77 3D                     JA 0x0044f52a
0044F4ED  33 C9                     XOR ECX,ECX
0044F4EF  8A 88 08 B0 45 00         MOV CL,byte ptr [EAX + 0x45b008]
switchD_0044f4f5::switchD:
0044F4F5  FF 24 8D F4 AF 45 00      JMP dword ptr [ECX*0x4 + 0x45aff4]
switchD_0044f4f5::caseD_23:
0044F4FC  C7 83 22 07 00 00 14 00 00 00  MOV dword ptr [EBX + 0x722],0x14
0044F506  EB 22                     JMP 0x0044f52a
switchD_0044f4f5::caseD_1b:
0044F508  C7 83 1E 07 00 00 14 00 00 00  MOV dword ptr [EBX + 0x71e],0x14
0044F512  EB 16                     JMP 0x0044f52a
switchD_0044f4f5::caseD_16:
0044F514  C7 83 26 07 00 00 28 00 00 00  MOV dword ptr [EBX + 0x726],0x28
0044F51E  EB 0A                     JMP 0x0044f52a
switchD_0044f4f5::caseD_17:
0044F520  C7 83 2A 07 00 00 28 00 00 00  MOV dword ptr [EBX + 0x72a],0x28
switchD_0044f4f5::caseD_18:
0044F52A  C7 43 76 01 00 00 00      MOV dword ptr [EBX + 0x76],0x1
0044F531  8B CB                     MOV ECX,EBX
0044F533  66 89 73 6E               MOV word ptr [EBX + 0x6e],SI
0044F537  E8 70 50 FB FF            CALL 0x004045ac
0044F53C  8B CB                     MOV ECX,EBX
0044F53E  C6 83 E3 00 00 00 00      MOV byte ptr [EBX + 0xe3],0x0
0044F545  E8 4C 52 FB FF            CALL 0x00404796
0044F54A  8B CB                     MOV ECX,EBX
0044F54C  E8 0F 5B FB FF            CALL 0x00405060
0044F551  8B CB                     MOV ECX,EBX
0044F553  E8 79 26 FB FF            CALL 0x00401bd1
0044F558  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0044F55B  8A 83 8E 00 00 00         MOV AL,byte ptr [EBX + 0x8e]
0044F561  66 8B 4F 20               MOV CX,word ptr [EDI + 0x20]
0044F565  52                        PUSH EDX
0044F566  66 8B 57 1E               MOV DX,word ptr [EDI + 0x1e]
0044F56A  53                        PUSH EBX
0044F56B  50                        PUSH EAX
0044F56C  66 8B 47 1C               MOV AX,word ptr [EDI + 0x1c]
0044F570  51                        PUSH ECX
0044F571  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0044F577  52                        PUSH EDX
0044F578  50                        PUSH EAX
0044F579  E8 43 59 FB FF            CALL 0x00404ec1
0044F57E  66 8B 4F 1C               MOV CX,word ptr [EDI + 0x1c]
0044F582  66 89 4B 47               MOV word ptr [EBX + 0x47],CX
0044F586  66 8B 57 22               MOV DX,word ptr [EDI + 0x22]
0044F58A  66 89 53 41               MOV word ptr [EBX + 0x41],DX
0044F58E  66 8B 47 1E               MOV AX,word ptr [EDI + 0x1e]
0044F592  66 89 43 49               MOV word ptr [EBX + 0x49],AX
0044F596  66 8B 4F 24               MOV CX,word ptr [EDI + 0x24]
0044F59A  66 89 4B 43               MOV word ptr [EBX + 0x43],CX
0044F59E  66 8B 57 20               MOV DX,word ptr [EDI + 0x20]
0044F5A2  66 89 53 4B               MOV word ptr [EBX + 0x4b],DX
0044F5A6  66 8B 47 26               MOV AX,word ptr [EDI + 0x26]
0044F5AA  66 89 43 45               MOV word ptr [EBX + 0x45],AX
0044F5AE  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0044F5B1  8A 93 8E 00 00 00         MOV DL,byte ptr [EBX + 0x8e]
0044F5B7  66 8B 43 4B               MOV AX,word ptr [EBX + 0x4b]
0044F5BB  51                        PUSH ECX
0044F5BC  66 8B 4B 49               MOV CX,word ptr [EBX + 0x49]
0044F5C0  53                        PUSH EBX
0044F5C1  52                        PUSH EDX
0044F5C2  66 8B 53 47               MOV DX,word ptr [EBX + 0x47]
0044F5C6  50                        PUSH EAX
0044F5C7  51                        PUSH ECX
0044F5C8  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0044F5CE  52                        PUSH EDX
0044F5CF  E8 51 1D FB FF            CALL 0x00401325
0044F5D4  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F5DA  83 F8 09                  CMP EAX,0x9
0044F5DD  74 09                     JZ 0x0044f5e8
0044F5DF  83 F8 15                  CMP EAX,0x15
0044F5E2  74 04                     JZ 0x0044f5e8
0044F5E4  6A 18                     PUSH 0x18
0044F5E6  EB 02                     JMP 0x0044f5ea
LAB_0044f5e8:
0044F5E8  6A 08                     PUSH 0x8
LAB_0044f5ea:
0044F5EA  8B CB                     MOV ECX,EBX
0044F5EC  E8 B9 24 FB FF            CALL 0x00401aaa
0044F5F1  6A 5A                     PUSH 0x5a
0044F5F3  8B CB                     MOV ECX,EBX
0044F5F5  E8 C7 67 FB FF            CALL 0x00405dc1
0044F5FA  66 8B 47 2A               MOV AX,word ptr [EDI + 0x2a]
0044F5FE  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0044F601  56                        PUSH ESI
0044F602  56                        PUSH ESI
0044F603  53                        PUSH EBX
0044F604  68 FF FF 00 00            PUSH 0xffff
0044F609  50                        PUSH EAX
0044F60A  51                        PUSH ECX
0044F60B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044F611  E8 AC 5C FB FF            CALL 0x004052c2
0044F616  C7 83 5D 04 00 00 13 00 00 00  MOV dword ptr [EBX + 0x45d],0x13
0044F620  66 8B 57 1C               MOV DX,word ptr [EDI + 0x1c]
0044F624  66 89 93 10 05 00 00      MOV word ptr [EBX + 0x510],DX
0044F62B  66 8B 47 1E               MOV AX,word ptr [EDI + 0x1e]
0044F62F  66 89 83 12 05 00 00      MOV word ptr [EBX + 0x512],AX
0044F636  66 8B 4F 20               MOV CX,word ptr [EDI + 0x20]
0044F63A  66 89 8B 14 05 00 00      MOV word ptr [EBX + 0x514],CX
0044F641  66 8B 57 22               MOV DX,word ptr [EDI + 0x22]
0044F645  66 89 93 16 05 00 00      MOV word ptr [EBX + 0x516],DX
0044F64C  66 8B 47 24               MOV AX,word ptr [EDI + 0x24]
0044F650  66 89 83 18 05 00 00      MOV word ptr [EBX + 0x518],AX
0044F657  66 8B 4F 26               MOV CX,word ptr [EDI + 0x26]
0044F65B  66 89 8B 1A 05 00 00      MOV word ptr [EBX + 0x51a],CX
0044F662  66 8B 57 2C               MOV DX,word ptr [EDI + 0x2c]
0044F666  66 89 93 1C 05 00 00      MOV word ptr [EBX + 0x51c],DX
0044F66D  66 8B 47 2E               MOV AX,word ptr [EDI + 0x2e]
0044F671  66 89 83 1E 05 00 00      MOV word ptr [EBX + 0x51e],AX
0044F678  66 8B 4F 30               MOV CX,word ptr [EDI + 0x30]
0044F67C  66 89 8B 20 05 00 00      MOV word ptr [EBX + 0x520],CX
0044F683  66 8B 57 28               MOV DX,word ptr [EDI + 0x28]
0044F687  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0044F68A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044F690  6A 01                     PUSH 0x1
0044F692  52                        PUSH EDX
0044F693  50                        PUSH EAX
0044F694  E8 21 32 FB FF            CALL 0x004028ba
0044F699  3B C6                     CMP EAX,ESI
0044F69B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0044F69E  74 0B                     JZ 0x0044f6ab
0044F6A0  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0044F6A3  89 8B 24 05 00 00         MOV dword ptr [EBX + 0x524],ECX
0044F6A9  EB 06                     JMP 0x0044f6b1
LAB_0044f6ab:
0044F6AB  89 B3 24 05 00 00         MOV dword ptr [EBX + 0x524],ESI
LAB_0044f6b1:
0044F6B1  89 B3 28 05 00 00         MOV dword ptr [EBX + 0x528],ESI
0044F6B7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044F6BA  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
0044F6C0  8B 82 ED 01 00 00         MOV EAX,dword ptr [EDX + 0x1ed]
0044F6C6  50                        PUSH EAX
0044F6C7  51                        PUSH ECX
0044F6C8  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0044F6CE  E8 8D AD 29 00            CALL 0x006ea460
0044F6D3  A1 FC 73 80 00            MOV EAX,[0x008073fc]
0044F6D8  8B CB                     MOV ECX,EBX
0044F6DA  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0044F6DD  8B 03                     MOV EAX,dword ptr [EBX]
0044F6DF  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
0044F6E5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0044F6E8  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0044F6EB  50                        PUSH EAX
0044F6EC  51                        PUSH ECX
0044F6ED  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044F6F3  E8 41 67 FB FF            CALL 0x00405e39
0044F6F8  8B 53 10                  MOV EDX,dword ptr [EBX + 0x10]
0044F6FB  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0044F6FE  33 C0                     XOR EAX,EAX
0044F700  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
0044F706  3B C8                     CMP ECX,EAX
0044F708  75 0C                     JNZ 0x0044f716
0044F70A  51                        PUSH ECX
0044F70B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044F711  E8 77 54 FB FF            CALL 0x00404b8d
LAB_0044f716:
0044F716  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F71C  83 C0 FB                  ADD EAX,-0x5
0044F71F  83 F8 20                  CMP EAX,0x20
0044F722  77 1B                     JA 0x0044f73f
0044F724  33 D2                     XOR EDX,EDX
0044F726  8A 90 20 B0 45 00         MOV DL,byte ptr [EAX + 0x45b020]
switchD_0044f72c::switchD:
0044F72C  FF 24 95 18 B0 45 00      JMP dword ptr [EDX*0x4 + 0x45b018]
switchD_0044f72c::caseD_5:
0044F733  C7 83 0A 07 00 00 08 00 00 00  MOV dword ptr [EBX + 0x70a],0x8
0044F73D  EB 0A                     JMP 0x0044f749
switchD_0044f72c::caseD_6:
0044F73F  C7 83 0A 07 00 00 05 00 00 00  MOV dword ptr [EBX + 0x70a],0x5
LAB_0044f749:
0044F749  8B 83 0A 07 00 00         MOV EAX,dword ptr [EBX + 0x70a]
0044F74F  8B CB                     MOV ECX,EBX
0044F751  50                        PUSH EAX
0044F752  E8 4A 2C FB FF            CALL 0x004023a1
0044F757  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0044F75A  33 D2                     XOR EDX,EDX
0044F75C  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0044F762  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0044F768  B9 05 00 00 00            MOV ECX,0x5
0044F76D  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044F770  C1 E8 10                  SHR EAX,0x10
0044F773  F7 F1                     DIV ECX
0044F775  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0044F778  8D 4C 80 F1               LEA ECX,[EAX + EAX*0x4 + -0xf]
0044F77C  89 8B 7E 07 00 00         MOV dword ptr [EBX + 0x77e],ECX
0044F782  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0044F785  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0044F78B  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0044F791  33 D2                     XOR EDX,EDX
0044F793  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044F796  C1 E8 10                  SHR EAX,0x10
0044F799  41                        INC ECX
0044F79A  F7 F1                     DIV ECX
0044F79C  89 93 7A 07 00 00         MOV dword ptr [EBX + 0x77a],EDX
0044F7A2  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
0044F7A8  3B CE                     CMP ECX,ESI
0044F7AA  74 3B                     JZ 0x0044f7e7
0044F7AC  C7 85 78 FF FF FF D0 5D 00 00  MOV dword ptr [EBP + 0xffffff78],0x5dd0
0044F7B6  66 8B 43 24               MOV AX,word ptr [EBX + 0x24]
0044F7BA  66 89 85 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],AX
0044F7C1  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
0044F7C5  66 89 95 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],DX
0044F7CC  66 8B 43 24               MOV AX,word ptr [EBX + 0x24]
0044F7D0  66 89 45 80               MOV word ptr [EBP + -0x80],AX
0044F7D4  66 8B 57 28               MOV DX,word ptr [EDI + 0x28]
0044F7D8  66 89 55 82               MOV word ptr [EBP + -0x7e],DX
0044F7DC  8B 01                     MOV EAX,dword ptr [ECX]
0044F7DE  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
0044F7E4  52                        PUSH EDX
0044F7E5  FF 10                     CALL dword ptr [EAX]
LAB_0044f7e7:
0044F7E7  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044F7ED  48                        DEC EAX
0044F7EE  83 F8 27                  CMP EAX,0x27
0044F7F1  0F 87 61 01 00 00         JA 0x0044f958
switchD_0044f7f7::switchD:
0044F7F7  FF 24 85 44 B0 45 00      JMP dword ptr [EAX*0x4 + 0x45b044]
switchD_0044f7f7::caseD_1:
0044F7FE  B8 C8 00 00 00            MOV EAX,0xc8
0044F803  E9 52 01 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_2:
0044F808  B8 CE 00 00 00            MOV EAX,0xce
0044F80D  E9 48 01 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_3:
0044F812  B8 D4 00 00 00            MOV EAX,0xd4
0044F817  E9 3E 01 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_4:
0044F81C  B8 DA 00 00 00            MOV EAX,0xda
0044F821  E9 34 01 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_5:
0044F826  B8 E0 00 00 00            MOV EAX,0xe0
0044F82B  E9 2A 01 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_6:
0044F830  B8 E7 00 00 00            MOV EAX,0xe7
0044F835  E9 20 01 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_7:
0044F83A  B8 EE 00 00 00            MOV EAX,0xee
0044F83F  E9 16 01 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_8:
0044F844  B8 F5 00 00 00            MOV EAX,0xf5
0044F849  E9 0C 01 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_9:
0044F84E  B8 FD 00 00 00            MOV EAX,0xfd
0044F853  E9 02 01 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_a:
0044F858  B8 02 01 00 00            MOV EAX,0x102
0044F85D  E9 F8 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_b:
0044F862  B8 08 01 00 00            MOV EAX,0x108
0044F867  E9 EE 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_c:
0044F86C  B8 0E 01 00 00            MOV EAX,0x10e
0044F871  E9 E4 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_d:
0044F876  B8 2C 01 00 00            MOV EAX,0x12c
0044F87B  E9 DA 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_e:
0044F880  B8 32 01 00 00            MOV EAX,0x132
0044F885  E9 D0 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_f:
0044F88A  B8 38 01 00 00            MOV EAX,0x138
0044F88F  E9 C6 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_10:
0044F894  B8 3E 01 00 00            MOV EAX,0x13e
0044F899  E9 BC 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_11:
0044F89E  B8 44 01 00 00            MOV EAX,0x144
0044F8A3  E9 B2 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_12:
0044F8A8  B8 4B 01 00 00            MOV EAX,0x14b
0044F8AD  E9 A8 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_13:
0044F8B2  B8 52 01 00 00            MOV EAX,0x152
0044F8B7  E9 9E 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_14:
0044F8BC  B8 59 01 00 00            MOV EAX,0x159
0044F8C1  E9 94 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_15:
0044F8C6  B8 61 01 00 00            MOV EAX,0x161
0044F8CB  E9 8A 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_16:
0044F8D0  B8 66 01 00 00            MOV EAX,0x166
0044F8D5  E9 80 00 00 00            JMP 0x0044f95a
switchD_0044f7f7::caseD_17:
0044F8DA  B8 6E 01 00 00            MOV EAX,0x16e
0044F8DF  EB 79                     JMP 0x0044f95a
switchD_0044f7f7::caseD_18:
0044F8E1  B8 74 01 00 00            MOV EAX,0x174
0044F8E6  EB 72                     JMP 0x0044f95a
switchD_0044f7f7::caseD_19:
0044F8E8  B8 90 01 00 00            MOV EAX,0x190
0044F8ED  EB 6B                     JMP 0x0044f95a
switchD_0044f7f7::caseD_1a:
0044F8EF  B8 98 01 00 00            MOV EAX,0x198
0044F8F4  EB 64                     JMP 0x0044f95a
switchD_0044f7f7::caseD_1b:
0044F8F6  B8 A0 01 00 00            MOV EAX,0x1a0
0044F8FB  EB 5D                     JMP 0x0044f95a
switchD_0044f7f7::caseD_1c:
0044F8FD  B8 A6 01 00 00            MOV EAX,0x1a6
0044F902  EB 56                     JMP 0x0044f95a
switchD_0044f7f7::caseD_1d:
0044F904  B8 AC 01 00 00            MOV EAX,0x1ac
0044F909  EB 4F                     JMP 0x0044f95a
switchD_0044f7f7::caseD_1e:
0044F90B  B8 B3 01 00 00            MOV EAX,0x1b3
0044F910  EB 48                     JMP 0x0044f95a
switchD_0044f7f7::caseD_1f:
0044F912  B8 B9 01 00 00            MOV EAX,0x1b9
0044F917  EB 41                     JMP 0x0044f95a
switchD_0044f7f7::caseD_20:
0044F919  B8 BF 01 00 00            MOV EAX,0x1bf
0044F91E  EB 3A                     JMP 0x0044f95a
switchD_0044f7f7::caseD_21:
0044F920  B8 C5 01 00 00            MOV EAX,0x1c5
0044F925  EB 33                     JMP 0x0044f95a
switchD_0044f7f7::caseD_22:
0044F927  B8 CC 01 00 00            MOV EAX,0x1cc
0044F92C  EB 2C                     JMP 0x0044f95a
switchD_0044f7f7::caseD_23:
0044F92E  B8 D3 01 00 00            MOV EAX,0x1d3
0044F933  EB 25                     JMP 0x0044f95a
switchD_0044f7f7::caseD_24:
0044F935  B8 D9 01 00 00            MOV EAX,0x1d9
0044F93A  EB 1E                     JMP 0x0044f95a
switchD_0044f7f7::caseD_25:
0044F93C  B8 7A 01 00 00            MOV EAX,0x17a
0044F941  EB 17                     JMP 0x0044f95a
switchD_0044f7f7::caseD_26:
0044F943  B8 14 01 00 00            MOV EAX,0x114
0044F948  EB 10                     JMP 0x0044f95a
switchD_0044f7f7::caseD_27:
0044F94A  B8 80 01 00 00            MOV EAX,0x180
0044F94F  EB 09                     JMP 0x0044f95a
switchD_0044f7f7::caseD_28:
0044F951  B8 DF 01 00 00            MOV EAX,0x1df
0044F956  EB 02                     JMP 0x0044f95a
switchD_0044f7f7::default:
0044F958  33 C0                     XOR EAX,EAX
LAB_0044f95a:
0044F95A  8B 13                     MOV EDX,dword ptr [EBX]
0044F95C  50                        PUSH EAX
0044F95D  6A 04                     PUSH 0x4
0044F95F  8B CB                     MOV ECX,EBX
0044F961  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
0044F967  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0044f96a:
0044F96A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0044F96D  83 78 0C 02               CMP dword ptr [EAX + 0xc],0x2
0044F971  0F 85 7E 01 00 00         JNZ 0x0044faf5
0044F977  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
0044F97A  6A 44                     PUSH 0x44
0044F97C  E8 EF B2 25 00            CALL 0x006aac70
0044F981  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
LAB_0044f987:
0044F987  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
0044F98D  8B 0D 7C 67 80 00         MOV ECX,dword ptr [0x0080677c]
0044F993  89 0C 16                  MOV dword ptr [ESI + EDX*0x1],ECX
0044F996  83 C6 04                  ADD ESI,0x4
0044F999  83 FE 44                  CMP ESI,0x44
0044F99C  7C E9                     JL 0x0044f987
0044F99E  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
0044F9A4  A1 74 67 80 00            MOV EAX,[0x00806774]
0044F9A9  33 F6                     XOR ESI,ESI
0044F9AB  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0044F9AE  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
0044F9B4  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0044F9BA  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0044F9BD  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
0044F9C3  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
0044F9C9  89 0A                     MOV dword ptr [EDX],ECX
0044F9CB  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
0044F9D1  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
0044F9D7  89 48 3C                  MOV dword ptr [EAX + 0x3c],ECX
0044F9DA  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
0044F9E0  A1 64 67 80 00            MOV EAX,[0x00806764]
0044F9E5  89 42 24                  MOV dword ptr [EDX + 0x24],EAX
0044F9E8  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
0044F9EE  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
0044F9F4  89 4A 20                  MOV dword ptr [EDX + 0x20],ECX
0044F9F7  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
0044F9FD  A1 74 67 80 00            MOV EAX,[0x00806774]
0044FA02  89 41 28                  MOV dword ptr [ECX + 0x28],EAX
0044FA05  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
0044FA0B  A1 74 67 80 00            MOV EAX,[0x00806774]
0044FA10  89 42 2C                  MOV dword ptr [EDX + 0x2c],EAX
0044FA13  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
0044FA19  89 B5 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],ESI
0044FA1F  89 B5 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ESI
0044FA25  89 8D 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],ECX
0044FA2B  89 B5 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],ESI
0044FA31  89 B5 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],ESI
0044FA37  89 B5 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ESI
0044FA3D  8B 97 F6 05 00 00         MOV EDX,dword ptr [EDI + 0x5f6]
0044FA43  8D 85 34 FF FF FF         LEA EAX,[EBP + 0xffffff34]
0044FA49  03 D7                     ADD EDX,EDI
0044FA4B  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0044FA51  52                        PUSH EDX
0044FA52  50                        PUSH EAX
0044FA53  E8 4D 52 FB FF            CALL 0x00404ca5
0044FA58  8D 8D 34 FF FF FF         LEA ECX,[EBP + 0xffffff34]
0044FA5E  51                        PUSH ECX
0044FA5F  E8 FC B5 25 00            CALL 0x006ab060
0044FA64  8B 97 FE 05 00 00         MOV EDX,dword ptr [EDI + 0x5fe]
0044FA6A  8B CB                     MOV ECX,EBX
0044FA6C  03 D7                     ADD EDX,EDI
0044FA6E  52                        PUSH EDX
0044FA6F  E8 AB 5A FB FF            CALL 0x0040551f
0044FA74  57                        PUSH EDI
0044FA75  8B CB                     MOV ECX,EBX
0044FA77  E8 C0 38 FB FF            CALL 0x0040333c
0044FA7C  89 B3 A6 05 00 00         MOV dword ptr [EBX + 0x5a6],ESI
0044FA82  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
0044FA86  66 8B 4B 30               MOV CX,word ptr [EBX + 0x30]
0044FA8A  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0044FA8D  56                        PUSH ESI
0044FA8E  6A 01                     PUSH 0x1
0044FA90  53                        PUSH EBX
0044FA91  50                        PUSH EAX
0044FA92  51                        PUSH ECX
0044FA93  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044FA99  52                        PUSH EDX
0044FA9A  E8 23 58 FB FF            CALL 0x004052c2
0044FA9F  83 BB 5D 04 00 00 14      CMP dword ptr [EBX + 0x45d],0x14
0044FAA6  75 09                     JNZ 0x0044fab1
0044FAA8  83 BB C0 05 00 00 03      CMP dword ptr [EBX + 0x5c0],0x3
0044FAAF  74 20                     JZ 0x0044fad1
LAB_0044fab1:
0044FAB1  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0044FAB4  66 8B 4B 5F               MOV CX,word ptr [EBX + 0x5f]
0044FAB8  66 8B 53 5D               MOV DX,word ptr [EBX + 0x5d]
0044FABC  50                        PUSH EAX
0044FABD  66 8B 43 5B               MOV AX,word ptr [EBX + 0x5b]
0044FAC1  53                        PUSH EBX
0044FAC2  56                        PUSH ESI
0044FAC3  51                        PUSH ECX
0044FAC4  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0044FACA  52                        PUSH EDX
0044FACB  50                        PUSH EAX
0044FACC  E8 54 18 FB FF            CALL 0x00401325
LAB_0044fad1:
0044FAD1  8B CB                     MOV ECX,EBX
0044FAD3  E8 88 55 FB FF            CALL 0x00405060
0044FAD8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0044FADE  68 A6 02 00 00            PUSH 0x2a6
0044FAE3  68 3C 9D 7A 00            PUSH 0x7a9d3c
0044FAE8  51                        PUSH ECX
0044FAE9  68 09 00 FE AF            PUSH 0xaffe0009
0044FAEE  E8 4D 63 25 00            CALL 0x006a5e40
0044FAF3  33 F6                     XOR ESI,ESI
LAB_0044faf5:
0044FAF5  C6 45 90 00               MOV byte ptr [EBP + -0x70],0x0
0044FAF9  C6 85 1C FF FF FF 00      MOV byte ptr [EBP + 0xffffff1c],0x0
0044FB00  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044FB06  48                        DEC EAX
0044FB07  83 F8 27                  CMP EAX,0x27
0044FB0A  0F 87 A9 02 00 00         JA 0x0044fdb9
switchD_0044fb10::switchD:
0044FB10  FF 24 85 E4 B0 45 00      JMP dword ptr [EAX*0x4 + 0x45b0e4]
switchD_0044fb10::caseD_1:
0044FB17  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB1A  BF 8C 9E 7A 00            MOV EDI,0x7a9e8c
0044FB1F  E9 6E 02 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_2:
0044FB24  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB27  BF 84 9E 7A 00            MOV EDI,0x7a9e84
0044FB2C  E9 61 02 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_3:
0044FB31  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB34  BF 7C 9E 7A 00            MOV EDI,0x7a9e7c
0044FB39  E9 54 02 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_4:
0044FB3E  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB41  BF 74 9E 7A 00            MOV EDI,0x7a9e74
0044FB46  E9 47 02 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_5:
0044FB4B  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB4E  BF 6C 9E 7A 00            MOV EDI,0x7a9e6c
0044FB53  E9 3A 02 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_6:
0044FB58  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB5B  BF 64 9E 7A 00            MOV EDI,0x7a9e64
0044FB60  E9 2D 02 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_7:
0044FB65  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB68  BF 5C 9E 7A 00            MOV EDI,0x7a9e5c
0044FB6D  E9 20 02 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_8:
0044FB72  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB75  BF 54 9E 7A 00            MOV EDI,0x7a9e54
0044FB7A  E9 13 02 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_9:
0044FB7F  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB82  BF 50 9E 7A 00            MOV EDI,0x7a9e50
0044FB87  E9 06 02 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_a:
0044FB8C  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FB8F  BF 48 9E 7A 00            MOV EDI,0x7a9e48
0044FB94  E9 F9 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_b:
0044FB99  BF 40 9E 7A 00            MOV EDI,0x7a9e40
0044FB9E  83 C9 FF                  OR ECX,0xffffffff
0044FBA1  33 C0                     XOR EAX,EAX
0044FBA3  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FBA6  F2 AE                     SCASB.REPNE ES:EDI
0044FBA8  F7 D1                     NOT ECX
0044FBAA  2B F9                     SUB EDI,ECX
0044FBAC  8B F7                     MOV ESI,EDI
0044FBAE  8B FA                     MOV EDI,EDX
0044FBB0  8B D1                     MOV EDX,ECX
0044FBB2  83 C9 FF                  OR ECX,0xffffffff
0044FBB5  F2 AE                     SCASB.REPNE ES:EDI
0044FBB7  8B CA                     MOV ECX,EDX
0044FBB9  4F                        DEC EDI
0044FBBA  C1 E9 02                  SHR ECX,0x2
0044FBBD  F3 A5                     MOVSD.REP ES:EDI,ESI
0044FBBF  8B CA                     MOV ECX,EDX
0044FBC1  8D 95 1C FF FF FF         LEA EDX,[EBP + 0xffffff1c]
0044FBC7  83 E1 03                  AND ECX,0x3
0044FBCA  F3 A4                     MOVSB.REP ES:EDI,ESI
0044FBCC  BF 94 9E 7A 00            MOV EDI,0x7a9e94
0044FBD1  E9 BC 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_c:
0044FBD6  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FBD9  BF 38 9E 7A 00            MOV EDI,0x7a9e38
0044FBDE  E9 AF 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_d:
0044FBE3  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FBE6  BF 30 9E 7A 00            MOV EDI,0x7a9e30
0044FBEB  E9 A2 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_e:
0044FBF0  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FBF3  BF 28 9E 7A 00            MOV EDI,0x7a9e28
0044FBF8  E9 95 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_f:
0044FBFD  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FC00  BF 20 9E 7A 00            MOV EDI,0x7a9e20
0044FC05  E9 88 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_10:
0044FC0A  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FC0D  BF 18 9E 7A 00            MOV EDI,0x7a9e18
0044FC12  E9 7B 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_11:
0044FC17  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FC1A  BF 10 9E 7A 00            MOV EDI,0x7a9e10
0044FC1F  E9 6E 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_12:
0044FC24  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FC27  BF 08 9E 7A 00            MOV EDI,0x7a9e08
0044FC2C  E9 61 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_13:
0044FC31  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FC34  BF 00 9E 7A 00            MOV EDI,0x7a9e00
0044FC39  E9 54 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_14:
0044FC3E  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FC41  BF F8 9D 7A 00            MOV EDI,0x7a9df8
0044FC46  E9 47 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_15:
0044FC4B  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FC4E  BF F4 9D 7A 00            MOV EDI,0x7a9df4
0044FC53  E9 3A 01 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_16:
0044FC58  BF EC 9D 7A 00            MOV EDI,0x7a9dec
0044FC5D  83 C9 FF                  OR ECX,0xffffffff
0044FC60  33 C0                     XOR EAX,EAX
0044FC62  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FC65  F2 AE                     SCASB.REPNE ES:EDI
0044FC67  F7 D1                     NOT ECX
0044FC69  2B F9                     SUB EDI,ECX
0044FC6B  8B F7                     MOV ESI,EDI
0044FC6D  8B FA                     MOV EDI,EDX
0044FC6F  8B D1                     MOV EDX,ECX
0044FC71  83 C9 FF                  OR ECX,0xffffffff
0044FC74  F2 AE                     SCASB.REPNE ES:EDI
0044FC76  8B CA                     MOV ECX,EDX
0044FC78  4F                        DEC EDI
0044FC79  C1 E9 02                  SHR ECX,0x2
0044FC7C  F3 A5                     MOVSD.REP ES:EDI,ESI
0044FC7E  8B CA                     MOV ECX,EDX
0044FC80  8D 95 1C FF FF FF         LEA EDX,[EBP + 0xffffff1c]
0044FC86  83 E1 03                  AND ECX,0x3
0044FC89  F3 A4                     MOVSB.REP ES:EDI,ESI
0044FC8B  BF 9C 9E 7A 00            MOV EDI,0x7a9e9c
0044FC90  E9 FD 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_17:
0044FC95  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FC98  BF E4 9D 7A 00            MOV EDI,0x7a9de4
0044FC9D  E9 F0 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_18:
0044FCA2  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FCA5  BF DC 9D 7A 00            MOV EDI,0x7a9ddc
0044FCAA  E9 E3 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_19:
0044FCAF  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FCB2  BF D8 9D 7A 00            MOV EDI,0x7a9dd8
0044FCB7  E9 D6 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_1a:
0044FCBC  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FCBF  BF D4 9D 7A 00            MOV EDI,0x7a9dd4
0044FCC4  E9 C9 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_1b:
0044FCC9  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FCCC  BF D0 9D 7A 00            MOV EDI,0x7a9dd0
0044FCD1  E9 BC 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_1c:
0044FCD6  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FCD9  BF CC 9D 7A 00            MOV EDI,0x7a9dcc
0044FCDE  E9 AF 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_1d:
0044FCE3  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FCE6  BF C8 9D 7A 00            MOV EDI,0x7a9dc8
0044FCEB  E9 A2 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_1e:
0044FCF0  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FCF3  BF C4 9D 7A 00            MOV EDI,0x7a9dc4
0044FCF8  E9 95 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_1f:
0044FCFD  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD00  BF C0 9D 7A 00            MOV EDI,0x7a9dc0
0044FD05  E9 88 00 00 00            JMP 0x0044fd92
switchD_0044fb10::caseD_20:
0044FD0A  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD0D  BF BC 9D 7A 00            MOV EDI,0x7a9dbc
0044FD12  EB 7E                     JMP 0x0044fd92
switchD_0044fb10::caseD_21:
0044FD14  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD17  BF B8 9D 7A 00            MOV EDI,0x7a9db8
0044FD1C  EB 74                     JMP 0x0044fd92
switchD_0044fb10::caseD_22:
0044FD1E  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD21  BF B4 9D 7A 00            MOV EDI,0x7a9db4
0044FD26  EB 6A                     JMP 0x0044fd92
switchD_0044fb10::caseD_23:
0044FD28  BF B0 9D 7A 00            MOV EDI,0x7a9db0
0044FD2D  83 C9 FF                  OR ECX,0xffffffff
0044FD30  33 C0                     XOR EAX,EAX
0044FD32  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD35  F2 AE                     SCASB.REPNE ES:EDI
0044FD37  F7 D1                     NOT ECX
0044FD39  2B F9                     SUB EDI,ECX
0044FD3B  8B F7                     MOV ESI,EDI
0044FD3D  8B FA                     MOV EDI,EDX
0044FD3F  8B D1                     MOV EDX,ECX
0044FD41  83 C9 FF                  OR ECX,0xffffffff
0044FD44  F2 AE                     SCASB.REPNE ES:EDI
0044FD46  8B CA                     MOV ECX,EDX
0044FD48  4F                        DEC EDI
0044FD49  C1 E9 02                  SHR ECX,0x2
0044FD4C  F3 A5                     MOVSD.REP ES:EDI,ESI
0044FD4E  8B CA                     MOV ECX,EDX
0044FD50  8D 95 1C FF FF FF         LEA EDX,[EBP + 0xffffff1c]
0044FD56  83 E1 03                  AND ECX,0x3
0044FD59  F3 A4                     MOVSB.REP ES:EDI,ESI
0044FD5B  BF A4 9E 7A 00            MOV EDI,0x7a9ea4
0044FD60  EB 30                     JMP 0x0044fd92
switchD_0044fb10::caseD_24:
0044FD62  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD65  BF AC 9D 7A 00            MOV EDI,0x7a9dac
0044FD6A  EB 26                     JMP 0x0044fd92
switchD_0044fb10::caseD_25:
0044FD6C  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD6F  BF A4 9D 7A 00            MOV EDI,0x7a9da4
0044FD74  EB 1C                     JMP 0x0044fd92
switchD_0044fb10::caseD_26:
0044FD76  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD79  BF 9C 9D 7A 00            MOV EDI,0x7a9d9c
0044FD7E  EB 12                     JMP 0x0044fd92
switchD_0044fb10::caseD_27:
0044FD80  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD83  BF 94 9D 7A 00            MOV EDI,0x7a9d94
0044FD88  EB 08                     JMP 0x0044fd92
switchD_0044fb10::caseD_28:
0044FD8A  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FD8D  BF 8C 9D 7A 00            MOV EDI,0x7a9d8c
LAB_0044fd92:
0044FD92  83 C9 FF                  OR ECX,0xffffffff
0044FD95  33 C0                     XOR EAX,EAX
0044FD97  F2 AE                     SCASB.REPNE ES:EDI
0044FD99  F7 D1                     NOT ECX
0044FD9B  2B F9                     SUB EDI,ECX
0044FD9D  8B F7                     MOV ESI,EDI
0044FD9F  8B FA                     MOV EDI,EDX
0044FDA1  8B D1                     MOV EDX,ECX
0044FDA3  83 C9 FF                  OR ECX,0xffffffff
0044FDA6  F2 AE                     SCASB.REPNE ES:EDI
0044FDA8  8B CA                     MOV ECX,EDX
0044FDAA  4F                        DEC EDI
0044FDAB  C1 E9 02                  SHR ECX,0x2
0044FDAE  F3 A5                     MOVSD.REP ES:EDI,ESI
0044FDB0  8B CA                     MOV ECX,EDX
0044FDB2  83 E1 03                  AND ECX,0x3
0044FDB5  F3 A4                     MOVSB.REP ES:EDI,ESI
0044FDB7  33 F6                     XOR ESI,ESI
switchD_0044fb10::default:
0044FDB9  8B 0D 7C 67 80 00         MOV ECX,dword ptr [0x0080677c]
0044FDBF  8D 45 90                  LEA EAX,[EBP + -0x70]
0044FDC2  6A 1D                     PUSH 0x1d
0044FDC4  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
0044FDCA  50                        PUSH EAX
0044FDCB  51                        PUSH ECX
0044FDCC  6A 0E                     PUSH 0xe
0044FDCE  8B CF                     MOV ECX,EDI
0044FDD0  E8 AE 43 FB FF            CALL 0x00404183
0044FDD5  85 C0                     TEST EAX,EAX
0044FDD7  74 1B                     JZ 0x0044fdf4
0044FDD9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0044FDDF  68 DA 02 00 00            PUSH 0x2da
0044FDE4  68 3C 9D 7A 00            PUSH 0x7a9d3c
0044FDE9  52                        PUSH EDX
0044FDEA  68 FF FF 00 00            PUSH 0xffff
0044FDEF  E8 4C 60 25 00            CALL 0x006a5e40
LAB_0044fdf4:
0044FDF4  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044FDFA  83 F8 0B                  CMP EAX,0xb
0044FDFD  74 0A                     JZ 0x0044fe09
0044FDFF  83 F8 16                  CMP EAX,0x16
0044FE02  74 05                     JZ 0x0044fe09
0044FE04  83 F8 23                  CMP EAX,0x23
0044FE07  75 38                     JNZ 0x0044fe41
LAB_0044fe09:
0044FE09  8B 0D 7C 67 80 00         MOV ECX,dword ptr [0x0080677c]
0044FE0F  8D 85 1C FF FF FF         LEA EAX,[EBP + 0xffffff1c]
0044FE15  6A 1D                     PUSH 0x1d
0044FE17  50                        PUSH EAX
0044FE18  51                        PUSH ECX
0044FE19  6A 0D                     PUSH 0xd
0044FE1B  8B CF                     MOV ECX,EDI
0044FE1D  E8 61 43 FB FF            CALL 0x00404183
0044FE22  85 C0                     TEST EAX,EAX
0044FE24  74 1B                     JZ 0x0044fe41
0044FE26  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0044FE2C  68 DE 02 00 00            PUSH 0x2de
0044FE31  68 3C 9D 7A 00            PUSH 0x7a9d3c
0044FE36  52                        PUSH EDX
0044FE37  68 FF FF 00 00            PUSH 0xffff
0044FE3C  E8 FF 5F 25 00            CALL 0x006a5e40
LAB_0044fe41:
0044FE41  8B 83 F3 06 00 00         MOV EAX,dword ptr [EBX + 0x6f3]
0044FE47  83 F8 07                  CMP EAX,0x7
0044FE4A  77 7C                     JA 0x0044fec8
switchD_0044fe4c::switchD:
0044FE4C  FF 24 85 84 B1 45 00      JMP dword ptr [EAX*0x4 + 0x45b184]
switchD_0044fe4c::caseD_0:
0044FE53  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FE56  BF 88 9D 7A 00            MOV EDI,0x7a9d88
0044FE5B  EB 44                     JMP 0x0044fea1
switchD_0044fe4c::caseD_1:
0044FE5D  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FE60  BF FC 4F 7A 00            MOV EDI,0x7a4ffc
0044FE65  EB 3A                     JMP 0x0044fea1
switchD_0044fe4c::caseD_2:
0044FE67  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FE6A  BF 28 A0 7A 00            MOV EDI,0x7aa028
0044FE6F  EB 30                     JMP 0x0044fea1
switchD_0044fe4c::caseD_3:
0044FE71  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FE74  BF 24 A0 7A 00            MOV EDI,0x7aa024
0044FE79  EB 26                     JMP 0x0044fea1
switchD_0044fe4c::caseD_4:
0044FE7B  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FE7E  BF 20 A0 7A 00            MOV EDI,0x7aa020
0044FE83  EB 1C                     JMP 0x0044fea1
switchD_0044fe4c::caseD_5:
0044FE85  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FE88  BF 1C A0 7A 00            MOV EDI,0x7aa01c
0044FE8D  EB 12                     JMP 0x0044fea1
switchD_0044fe4c::caseD_6:
0044FE8F  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FE92  BF 18 A0 7A 00            MOV EDI,0x7aa018
0044FE97  EB 08                     JMP 0x0044fea1
switchD_0044fe4c::caseD_7:
0044FE99  8D 55 90                  LEA EDX,[EBP + -0x70]
0044FE9C  BF 14 A0 7A 00            MOV EDI,0x7aa014
LAB_0044fea1:
0044FEA1  83 C9 FF                  OR ECX,0xffffffff
0044FEA4  33 C0                     XOR EAX,EAX
0044FEA6  F2 AE                     SCASB.REPNE ES:EDI
0044FEA8  F7 D1                     NOT ECX
0044FEAA  2B F9                     SUB EDI,ECX
0044FEAC  8B F7                     MOV ESI,EDI
0044FEAE  8B FA                     MOV EDI,EDX
0044FEB0  8B D1                     MOV EDX,ECX
0044FEB2  83 C9 FF                  OR ECX,0xffffffff
0044FEB5  F2 AE                     SCASB.REPNE ES:EDI
0044FEB7  8B CA                     MOV ECX,EDX
0044FEB9  4F                        DEC EDI
0044FEBA  C1 E9 02                  SHR ECX,0x2
0044FEBD  F3 A5                     MOVSD.REP ES:EDI,ESI
0044FEBF  8B CA                     MOV ECX,EDX
0044FEC1  83 E1 03                  AND ECX,0x3
0044FEC4  F3 A4                     MOVSB.REP ES:EDI,ESI
0044FEC6  33 F6                     XOR ESI,ESI
switchD_0044fe4c::default:
0044FEC8  8B 0D 7C 67 80 00         MOV ECX,dword ptr [0x0080677c]
0044FECE  8D 45 90                  LEA EAX,[EBP + -0x70]
0044FED1  6A 1D                     PUSH 0x1d
0044FED3  50                        PUSH EAX
0044FED4  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
0044FEDA  51                        PUSH ECX
0044FEDB  6A 0C                     PUSH 0xc
0044FEDD  8B CF                     MOV ECX,EDI
0044FEDF  E8 9F 42 FB FF            CALL 0x00404183
0044FEE4  85 C0                     TEST EAX,EAX
0044FEE6  74 1B                     JZ 0x0044ff03
0044FEE8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0044FEEE  68 EB 02 00 00            PUSH 0x2eb
0044FEF3  68 3C 9D 7A 00            PUSH 0x7a9d3c
0044FEF8  52                        PUSH EDX
0044FEF9  68 FF FF 00 00            PUSH 0xffff
0044FEFE  E8 3D 5F 25 00            CALL 0x006a5e40
LAB_0044ff03:
0044FF03  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0044FF09  83 C0 F7                  ADD EAX,-0x9
0044FF0C  83 F8 1C                  CMP EAX,0x1c
0044FF0F  0F 87 E9 00 00 00         JA 0x0044fffe
0044FF15  33 C9                     XOR ECX,ECX
0044FF17  8A 88 B4 B1 45 00         MOV CL,byte ptr [EAX + 0x45b1b4]
switchD_0044ff1d::switchD:
0044FF1D  FF 24 8D A4 B1 45 00      JMP dword ptr [ECX*0x4 + 0x45b1a4]
switchD_0044ff1d::caseD_15:
0044FF24  0F BF 4B 6C               MOVSX ECX,word ptr [EBX + 0x6c]
0044FF28  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0044FF2D  F7 E9                     IMUL ECX
0044FF2F  03 D1                     ADD EDX,ECX
0044FF31  B9 A0 00 00 00            MOV ECX,0xa0
0044FF36  C1 FA 05                  SAR EDX,0x5
0044FF39  8B C2                     MOV EAX,EDX
0044FF3B  C1 E8 1F                  SHR EAX,0x1f
0044FF3E  03 D0                     ADD EDX,EAX
0044FF40  B8 08 00 00 00            MOV EAX,0x8
0044FF45  2B C2                     SUB EAX,EDX
0044FF47  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0044FF4A  C1 E0 02                  SHL EAX,0x2
0044FF4D  99                        CDQ
0044FF4E  F7 F9                     IDIV ECX
0044FF50  B9 13 00 00 00            MOV ECX,0x13
0044FF55  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0044FF58  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0044FF5B  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0044FF61  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0044FF67  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044FF6A  C1 E8 10                  SHR EAX,0x10
0044FF6D  33 D2                     XOR EDX,EDX
0044FF6F  EB 48                     JMP 0x0044ffb9
switchD_0044ff1d::caseD_9:
0044FF71  0F BF 4B 6C               MOVSX ECX,word ptr [EBX + 0x6c]
0044FF75  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0044FF7A  F7 E9                     IMUL ECX
0044FF7C  03 D1                     ADD EDX,ECX
0044FF7E  B9 78 00 00 00            MOV ECX,0x78
0044FF83  C1 FA 05                  SAR EDX,0x5
0044FF86  8B C2                     MOV EAX,EDX
0044FF88  C1 E8 1F                  SHR EAX,0x1f
0044FF8B  03 D0                     ADD EDX,EAX
0044FF8D  B8 08 00 00 00            MOV EAX,0x8
0044FF92  2B C2                     SUB EAX,EDX
0044FF94  6B C0 0F                  IMUL EAX,EAX,0xf
0044FF97  99                        CDQ
0044FF98  F7 F9                     IDIV ECX
0044FF9A  B9 0E 00 00 00            MOV ECX,0xe
0044FF9F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0044FFA2  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0044FFA5  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0044FFAB  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0044FFB1  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044FFB4  C1 E8 10                  SHR EAX,0x10
0044FFB7  33 D2                     XOR EDX,EDX
LAB_0044ffb9:
0044FFB9  F7 F1                     DIV ECX
0044FFBB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044FFBE  8B CF                     MOV ECX,EDI
0044FFC0  89 93 22 08 00 00         MOV dword ptr [EBX + 0x822],EDX
0044FFC6  03 D0                     ADD EDX,EAX
0044FFC8  52                        PUSH EDX
0044FFC9  6A 0E                     PUSH 0xe
0044FFCB  E8 94 10 FB FF            CALL 0x00401064
0044FFD0  8B 8B 22 08 00 00         MOV ECX,dword ptr [EBX + 0x822]
0044FFD6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044FFD9  03 C8                     ADD ECX,EAX
0044FFDB  51                        PUSH ECX
0044FFDC  EB 72                     JMP 0x00450050
switchD_0044ff1d::caseD_24:
0044FFDE  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0044FFE1  B9 0A 00 00 00            MOV ECX,0xa
0044FFE6  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0044FFEC  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0044FFF2  33 D2                     XOR EDX,EDX
0044FFF4  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0044FFF7  C1 E8 10                  SHR EAX,0x10
0044FFFA  F7 F1                     DIV ECX
0044FFFC  EB 41                     JMP 0x0045003f
switchD_0044ff1d::caseD_a:
0044FFFE  0F BF 4B 6C               MOVSX ECX,word ptr [EBX + 0x6c]
00450002  B8 89 88 88 88            MOV EAX,0x88888889
00450007  F7 E9                     IMUL ECX
00450009  03 D1                     ADD EDX,ECX
0045000B  B9 18 00 00 00            MOV ECX,0x18
00450010  C1 FA 03                  SAR EDX,0x3
00450013  8B C2                     MOV EAX,EDX
00450015  C1 E8 1F                  SHR EAX,0x1f
00450018  03 D0                     ADD EDX,EAX
0045001A  B8 18 00 00 00            MOV EAX,0x18
0045001F  2B C2                     SUB EAX,EDX
00450021  99                        CDQ
00450022  F7 F9                     IDIV ECX
00450024  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
0045002A  B8 04 00 00 00            MOV EAX,0x4
0045002F  2B C1                     SUB EAX,ECX
00450031  B9 18 00 00 00            MOV ECX,0x18
00450036  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00450039  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
0045003C  99                        CDQ
0045003D  F7 F9                     IDIV ECX
LAB_0045003f:
0045003F  52                        PUSH EDX
00450040  6A 0E                     PUSH 0xe
00450042  8B CF                     MOV ECX,EDI
00450044  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00450047  E8 18 10 FB FF            CALL 0x00401064
0045004C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0045004F  52                        PUSH EDX
LAB_00450050:
00450050  6A 0C                     PUSH 0xc
00450052  8B CF                     MOV ECX,EDI
00450054  E8 0B 10 FB FF            CALL 0x00401064
00450059  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0045005F  83 F8 25                  CMP EAX,0x25
00450062  74 17                     JZ 0x0045007b
00450064  83 F8 24                  CMP EAX,0x24
00450067  74 12                     JZ 0x0045007b
00450069  6A 0E                     PUSH 0xe
0045006B  8B CF                     MOV ECX,EDI
0045006D  E8 34 5A FB FF            CALL 0x00405aa6
00450072  6A 0C                     PUSH 0xc
00450074  8B CF                     MOV ECX,EDI
00450076  E8 2B 5A FB FF            CALL 0x00405aa6
LAB_0045007b:
0045007B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00450080  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00450086  51                        PUSH ECX
00450087  6A 0E                     PUSH 0xe
00450089  8B CF                     MOV ECX,EDI
0045008B  E8 B0 51 FB FF            CALL 0x00405240
00450090  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00450096  8B CF                     MOV ECX,EDI
00450098  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0045009E  50                        PUSH EAX
0045009F  6A 0C                     PUSH 0xc
004500A1  E8 9A 51 FB FF            CALL 0x00405240
004500A6  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
004500AC  83 F8 0B                  CMP EAX,0xb
004500AF  74 0A                     JZ 0x004500bb
004500B1  83 F8 16                  CMP EAX,0x16
004500B4  74 05                     JZ 0x004500bb
004500B6  83 F8 23                  CMP EAX,0x23
004500B9  75 3E                     JNZ 0x004500f9
LAB_004500bb:
004500BB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004500C1  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004500C7  8B CF                     MOV ECX,EDI
004500C9  83 E2 01                  AND EDX,0x1
004500CC  52                        PUSH EDX
004500CD  6A 0D                     PUSH 0xd
004500CF  E8 D1 2D FB FF            CALL 0x00402ea5
004500D4  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004500D9  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004500DF  51                        PUSH ECX
004500E0  6A 0D                     PUSH 0xd
004500E2  8B CF                     MOV ECX,EDI
004500E4  E8 57 51 FB FF            CALL 0x00405240
004500E9  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
004500EF  8B CF                     MOV ECX,EDI
004500F1  52                        PUSH EDX
004500F2  6A 0D                     PUSH 0xd
004500F4  E8 6B 0F FB FF            CALL 0x00401064
LAB_004500f9:
004500F9  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
004500FD  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00450100  51                        PUSH ECX
00450101  DB 45 8C                  FILD dword ptr [EBP + -0x74]
00450104  0F BF 4B 43               MOVSX ECX,word ptr [EBX + 0x43]
00450108  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0045010E  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00450111  0F BF 53 41               MOVSX EDX,word ptr [EBX + 0x41]
00450115  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0045011B  D9 1C 24                  FSTP float ptr [ESP]
0045011E  DB 45 8C                  FILD dword ptr [EBP + -0x74]
00450121  51                        PUSH ECX
00450122  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
00450125  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0045012B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00450131  D9 1C 24                  FSTP float ptr [ESP]
00450134  DB 45 8C                  FILD dword ptr [EBP + -0x74]
00450137  51                        PUSH ECX
00450138  8B CF                     MOV ECX,EDI
0045013A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00450140  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00450146  D9 1C 24                  FSTP float ptr [ESP]
00450149  E8 8B 44 FB FF            CALL 0x004045d9
0045014E  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00450154  83 F8 25                  CMP EAX,0x25
00450157  74 2D                     JZ 0x00450186
00450159  83 F8 24                  CMP EAX,0x24
0045015C  74 28                     JZ 0x00450186
0045015E  0F BF 4B 6C               MOVSX ECX,word ptr [EBX + 0x6c]
00450162  B8 89 88 88 88            MOV EAX,0x88888889
00450167  F7 E9                     IMUL ECX
00450169  03 D1                     ADD EDX,ECX
0045016B  B9 18 00 00 00            MOV ECX,0x18
00450170  C1 FA 03                  SAR EDX,0x3
00450173  8B C2                     MOV EAX,EDX
00450175  C1 E8 1F                  SHR EAX,0x1f
00450178  03 D0                     ADD EDX,EAX
0045017A  B8 18 00 00 00            MOV EAX,0x18
0045017F  2B C2                     SUB EAX,EDX
00450181  99                        CDQ
00450182  F7 F9                     IDIV ECX
00450184  EB 03                     JMP 0x00450189
LAB_00450186:
00450186  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00450189:
00450189  52                        PUSH EDX
0045018A  6A 0E                     PUSH 0xe
0045018C  8B CF                     MOV ECX,EDI
0045018E  E8 6B 51 FB FF            CALL 0x004052fe
00450193  8B CB                     MOV ECX,EBX
00450195  E8 FD 17 FB FF            CALL 0x00401997
0045019A  A0 26 73 80 00            MOV AL,[0x00807326]
0045019F  84 C0                     TEST AL,AL
004501A1  75 07                     JNZ 0x004501aa
004501A3  8B CF                     MOV ECX,EDI
004501A5  E8 E6 28 FB FF            CALL 0x00402a90
LAB_004501aa:
004501AA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004501AD  39 70 0C                  CMP dword ptr [EAX + 0xc],ESI
004501B0  0F 85 97 00 00 00         JNZ 0x0045024d
004501B6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004501B9  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
004501BC  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
004501BF  83 78 45 01               CMP dword ptr [EAX + 0x45],0x1
004501C3  75 69                     JNZ 0x0045022e
004501C5  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
004501CB  6A 1D                     PUSH 0x1d
004501CD  68 08 A0 7A 00            PUSH 0x7aa008
004501D2  52                        PUSH EDX
004501D3  6A 0B                     PUSH 0xb
004501D5  8B CF                     MOV ECX,EDI
004501D7  E8 A7 3F FB FF            CALL 0x00404183
004501DC  85 C0                     TEST EAX,EAX
004501DE  74 1A                     JZ 0x004501fa
004501E0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004501E5  68 1B 03 00 00            PUSH 0x31b
004501EA  68 3C 9D 7A 00            PUSH 0x7a9d3c
004501EF  50                        PUSH EAX
004501F0  68 FF FF 00 00            PUSH 0xffff
004501F5  E8 46 5C 25 00            CALL 0x006a5e40
LAB_004501fa:
004501FA  6A 0E                     PUSH 0xe
004501FC  8B CF                     MOV ECX,EDI
004501FE  E8 EF 57 FB FF            CALL 0x004059f2
00450203  6A 0B                     PUSH 0xb
00450205  8B CF                     MOV ECX,EDI
00450207  E8 D3 29 FB FF            CALL 0x00402bdf
0045020C  6A 0B                     PUSH 0xb
0045020E  8B CF                     MOV ECX,EDI
00450210  E8 BF 20 FB FF            CALL 0x004022d4
00450215  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045021B  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00450221  8B CF                     MOV ECX,EDI
00450223  52                        PUSH EDX
00450224  6A 0B                     PUSH 0xb
00450226  E8 15 50 FB FF            CALL 0x00405240
0045022B  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
LAB_0045022e:
0045022E  83 78 45 03               CMP dword ptr [EAX + 0x45],0x3
00450232  75 19                     JNZ 0x0045024d
00450234  8B 83 ED 01 00 00         MOV EAX,dword ptr [EBX + 0x1ed]
0045023A  6A 12                     PUSH 0x12
0045023C  6A FF                     PUSH -0x1
0045023E  6A FF                     PUSH -0x1
00450240  6A FF                     PUSH -0x1
00450242  6A 01                     PUSH 0x1
00450244  50                        PUSH EAX
00450245  E8 5B 4F FB FF            CALL 0x004051a5
0045024A  83 C4 18                  ADD ESP,0x18
LAB_0045024d:
0045024D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00450253  68 29 03 00 00            PUSH 0x329
00450258  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045025D  51                        PUSH ECX
0045025E  68 09 00 FE AF            PUSH 0xaffe0009
00450263  E8 D8 5B 25 00            CALL 0x006a5e40
LAB_00450268:
00450268  8D 83 6B 04 00 00         LEA EAX,[EBX + 0x46b]
0045026E  50                        PUSH EAX
0045026F  89 30                     MOV dword ptr [EAX],ESI
00450271  8B 93 71 04 00 00         MOV EDX,dword ptr [EBX + 0x471]
00450277  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045027D  52                        PUSH EDX
0045027E  E8 4D 60 29 00            CALL 0x006e62d0
00450283  8B 83 CA 07 00 00         MOV EAX,dword ptr [EBX + 0x7ca]
00450289  3B C6                     CMP EAX,ESI
0045028B  74 6F                     JZ 0x004502fc
0045028D  8D 4D D4                  LEA ECX,[EBP + -0x2c]
00450290  51                        PUSH ECX
00450291  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00450297  50                        PUSH EAX
00450298  E8 33 60 29 00            CALL 0x006e62d0
0045029D  83 F8 FC                  CMP EAX,-0x4
004502A0  75 3E                     JNZ 0x004502e0
004502A2  68 C8 9F 7A 00            PUSH 0x7a9fc8
004502A7  68 CC 4C 7A 00            PUSH 0x7a4ccc
004502AC  56                        PUSH ESI
004502AD  56                        PUSH ESI
004502AE  68 35 03 00 00            PUSH 0x335
004502B3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004502B8  E8 13 D2 25 00            CALL 0x006ad4d0
004502BD  83 C4 18                  ADD ESP,0x18
004502C0  85 C0                     TEST EAX,EAX
004502C2  74 01                     JZ 0x004502c5
004502C4  CC                        INT3
LAB_004502c5:
004502C5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004502CB  68 36 03 00 00            PUSH 0x336
004502D0  68 3C 9D 7A 00            PUSH 0x7a9d3c
004502D5  52                        PUSH EDX
004502D6  68 FF FF 00 00            PUSH 0xffff
004502DB  E8 60 5B 25 00            CALL 0x006a5e40
LAB_004502e0:
004502E0  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004502E3  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
004502E9  8B 88 ED 01 00 00         MOV ECX,dword ptr [EAX + 0x1ed]
004502EF  51                        PUSH ECX
004502F0  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004502F6  52                        PUSH EDX
004502F7  E8 E4 A0 29 00            CALL 0x006ea3e0
LAB_004502fc:
004502FC  83 BB 5D 04 00 00 0F      CMP dword ptr [EBX + 0x45d],0xf
00450303  0F 85 E4 AB 00 00         JNZ 0x0045aeed
00450309  83 BB 96 05 00 00 03      CMP dword ptr [EBX + 0x596],0x3
00450310  0F 85 D7 AB 00 00         JNZ 0x0045aeed
00450316  8B 8B 8E 05 00 00         MOV ECX,dword ptr [EBX + 0x58e]
0045031C  8D 45 D4                  LEA EAX,[EBP + -0x2c]
0045031F  50                        PUSH EAX
00450320  51                        PUSH ECX
00450321  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00450327  E8 A4 5F 29 00            CALL 0x006e62d0
0045032C  83 F8 FC                  CMP EAX,-0x4
0045032F  75 3E                     JNZ 0x0045036f
00450331  68 8C 9F 7A 00            PUSH 0x7a9f8c
00450336  68 CC 4C 7A 00            PUSH 0x7a4ccc
0045033B  56                        PUSH ESI
0045033C  56                        PUSH ESI
0045033D  68 3C 03 00 00            PUSH 0x33c
00450342  68 3C 9D 7A 00            PUSH 0x7a9d3c
00450347  E8 84 D1 25 00            CALL 0x006ad4d0
0045034C  83 C4 18                  ADD ESP,0x18
0045034F  85 C0                     TEST EAX,EAX
00450351  74 01                     JZ 0x00450354
00450353  CC                        INT3
LAB_00450354:
00450354  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045035A  68 3D 03 00 00            PUSH 0x33d
0045035F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00450364  52                        PUSH EDX
00450365  68 FF FF 00 00            PUSH 0xffff
0045036A  E8 D1 5A 25 00            CALL 0x006a5e40
LAB_0045036f:
0045036F  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00450372  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
00450378  8B 88 ED 01 00 00         MOV ECX,dword ptr [EAX + 0x1ed]
0045037E  51                        PUSH ECX
0045037F  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00450385  52                        PUSH EDX
00450386  E8 55 A0 29 00            CALL 0x006ea3e0
0045038B  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
00450391  33 C0                     XOR EAX,EAX
00450393  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00450399  5F                        POP EDI
0045039A  5E                        POP ESI
0045039B  5B                        POP EBX
0045039C  8B E5                     MOV ESP,EBP
0045039E  5D                        POP EBP
0045039F  C2 04 00                  RET 0x4
LAB_004503a2:
004503A2  8B CB                     MOV ECX,EBX
004503A4  E8 A3 42 FB FF            CALL 0x0040464c
004503A9  8B CB                     MOV ECX,EBX
004503AB  E8 79 42 FB FF            CALL 0x00404629
004503B0  8B CB                     MOV ECX,EBX
004503B2  E8 9B 55 FB FF            CALL 0x00405952
004503B7  66 8B 53 30               MOV DX,word ptr [EBX + 0x30]
004503BB  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004503BE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004503C4  52                        PUSH EDX
004503C5  50                        PUSH EAX
004503C6  E8 2E 59 FB FF            CALL 0x00405cf9
004503CB  3B C6                     CMP EAX,ESI
004503CD  74 0E                     JZ 0x004503dd
004503CF  33 C9                     XOR ECX,ECX
004503D1  66 8B 4B 32               MOV CX,word ptr [EBX + 0x32]
004503D5  51                        PUSH ECX
004503D6  8B C8                     MOV ECX,EAX
004503D8  E8 15 4C FB FF            CALL 0x00404ff2
LAB_004503dd:
004503DD  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004503E3  E8 ED 1D FB FF            CALL 0x004021d5
004503E8  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004503EB  8A 83 8E 00 00 00         MOV AL,byte ptr [EBX + 0x8e]
004503F1  66 8B 4B 5F               MOV CX,word ptr [EBX + 0x5f]
004503F5  52                        PUSH EDX
004503F6  66 8B 53 5D               MOV DX,word ptr [EBX + 0x5d]
004503FA  53                        PUSH EBX
004503FB  50                        PUSH EAX
004503FC  66 8B 43 5B               MOV AX,word ptr [EBX + 0x5b]
00450400  51                        PUSH ECX
00450401  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00450407  52                        PUSH EDX
00450408  50                        PUSH EAX
00450409  E8 B3 4A FB FF            CALL 0x00404ec1
0045040E  8B 8B 26 08 00 00         MOV ECX,dword ptr [EBX + 0x826]
00450414  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
00450418  66 8B 43 30               MOV AX,word ptr [EBX + 0x30]
0045041C  51                        PUSH ECX
0045041D  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
00450420  53                        PUSH EBX
00450421  52                        PUSH EDX
00450422  50                        PUSH EAX
00450423  51                        PUSH ECX
00450424  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045042A  E8 7F 1C FB FF            CALL 0x004020ae
0045042F  8B CB                     MOV ECX,EBX
00450431  E8 4D 2E FB FF            CALL 0x00403283
00450436  8B 83 7B 04 00 00         MOV EAX,dword ptr [EBX + 0x47b]
0045043C  3B C6                     CMP EAX,ESI
0045043E  74 0C                     JZ 0x0045044c
00450440  50                        PUSH EAX
00450441  E8 CA DC 25 00            CALL 0x006ae110
00450446  89 B3 7B 04 00 00         MOV dword ptr [EBX + 0x47b],ESI
LAB_0045044c:
0045044C  8B 8B 65 04 00 00         MOV ECX,dword ptr [EBX + 0x465]
00450452  3B CE                     CMP ECX,ESI
00450454  74 1A                     JZ 0x00450470
00450456  E8 93 45 FB FF            CALL 0x004049ee
0045045B  8B 93 65 04 00 00         MOV EDX,dword ptr [EBX + 0x465]
00450461  52                        PUSH EDX
00450462  E8 49 DE 2D 00            CALL 0x0072e2b0
00450467  83 C4 04                  ADD ESP,0x4
0045046A  89 B3 65 04 00 00         MOV dword ptr [EBX + 0x465],ESI
LAB_00450470:
00450470  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00450475  68 7A 03 00 00            PUSH 0x37a
0045047A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045047F  50                        PUSH EAX
00450480  68 09 00 FE AF            PUSH 0xaffe0009
00450485  E8 B6 59 25 00            CALL 0x006a5e40
LAB_0045048a:
0045048A  80 7B 4D 01               CMP byte ptr [EBX + 0x4d],0x1
0045048E  75 7A                     JNZ 0x0045050a
00450490  80 7B 5A 01               CMP byte ptr [EBX + 0x5a],0x1
00450494  75 74                     JNZ 0x0045050a
00450496  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045049C  33 D2                     XOR EDX,EDX
0045049E  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
004504A4  B9 32 00 00 00            MOV ECX,0x32
004504A9  F7 F1                     DIV ECX
004504AB  83 FA 07                  CMP EDX,0x7
004504AE  75 5A                     JNZ 0x0045050a
004504B0  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
004504B4  99                        CDQ
004504B5  B9 C9 00 00 00            MOV ECX,0xc9
004504BA  BF C9 00 00 00            MOV EDI,0xc9
004504BF  F7 F9                     IDIV ECX
004504C1  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
004504C5  8B CA                     MOV ECX,EDX
004504C7  99                        CDQ
004504C8  F7 FF                     IDIV EDI
004504CA  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
004504CE  BF C8 00 00 00            MOV EDI,0xc8
004504D3  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
004504D6  99                        CDQ
004504D7  F7 FF                     IDIV EDI
004504D9  83 F9 46                  CMP ECX,0x46
004504DC  7E 2C                     JLE 0x0045050a
004504DE  81 F9 82 00 00 00         CMP ECX,0x82
004504E4  7D 24                     JGE 0x0045050a
004504E6  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
004504E9  83 F8 46                  CMP EAX,0x46
004504EC  7E 1C                     JLE 0x0045050a
004504EE  3D 82 00 00 00            CMP EAX,0x82
004504F3  7D 15                     JGE 0x0045050a
004504F5  83 FA 47                  CMP EDX,0x47
004504F8  7E 10                     JLE 0x0045050a
004504FA  81 FA 81 00 00 00         CMP EDX,0x81
00450500  7D 08                     JGE 0x0045050a
00450502  C6 43 5A 00               MOV byte ptr [EBX + 0x5a],0x0
00450506  C6 43 4D 00               MOV byte ptr [EBX + 0x4d],0x0
LAB_0045050a:
0045050A  83 BB EE 07 00 00 01      CMP dword ptr [EBX + 0x7ee],0x1
00450511  75 0C                     JNZ 0x0045051f
00450513  8B 13                     MOV EDX,dword ptr [EBX]
00450515  8B CB                     MOV ECX,EBX
00450517  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
0045051A  83 F8 19                  CMP EAX,0x19
0045051D  7E 32                     JLE 0x00450551
LAB_0045051f:
0045051F  83 BB EE 07 00 00 02      CMP dword ptr [EBX + 0x7ee],0x2
00450526  75 0C                     JNZ 0x00450534
00450528  8B 03                     MOV EAX,dword ptr [EBX]
0045052A  8B CB                     MOV ECX,EBX
0045052C  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
0045052F  83 F8 32                  CMP EAX,0x32
00450532  7E 1D                     JLE 0x00450551
LAB_00450534:
00450534  83 BB EE 07 00 00 03      CMP dword ptr [EBX + 0x7ee],0x3
0045053B  0F 85 59 01 00 00         JNZ 0x0045069a
00450541  8B 13                     MOV EDX,dword ptr [EBX]
00450543  8B CB                     MOV ECX,EBX
00450545  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
00450548  83 F8 4B                  CMP EAX,0x4b
0045054B  0F 8F 49 01 00 00         JG 0x0045069a
LAB_00450551:
00450551  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00450557  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045055D  50                        PUSH EAX
0045055E  E8 F7 19 FB FF            CALL 0x00401f5a
00450563  83 F8 03                  CMP EAX,0x3
00450566  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
0045056C  0F 84 9B 00 00 00         JZ 0x0045060d
00450572  83 F8 04                  CMP EAX,0x4
00450575  0F 84 1F 01 00 00         JZ 0x0045069a
0045057B  6A 04                     PUSH 0x4
0045057D  8B CB                     MOV ECX,EBX
0045057F  E8 75 48 FB FF            CALL 0x00404df9
00450584  85 C0                     TEST EAX,EAX
00450586  0F 85 0E 01 00 00         JNZ 0x0045069a
0045058C  0F BE 4B 24               MOVSX ECX,byte ptr [EBX + 0x24]
00450590  69 C9 62 0A 00 00         IMUL ECX,ECX,0xa62
00450596  66 39 B1 7B 4F 7F 00      CMP word ptr [ECX + 0x7f4f7b],SI
0045059D  0F 86 F7 00 00 00         JBE 0x0045069a
004505A3  6A 01                     PUSH 0x1
004505A5  6A 02                     PUSH 0x2
004505A7  6A 01                     PUSH 0x1
004505A9  56                        PUSH ESI
004505AA  E8 E1 DC 25 00            CALL 0x006ae290
004505AF  8D 53 32                  LEA EDX,[EBX + 0x32]
004505B2  8B F8                     MOV EDI,EAX
004505B4  52                        PUSH EDX
004505B5  57                        PUSH EDI
004505B6  E8 05 DC 25 00            CALL 0x006ae1c0
004505BB  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004505BE  8D 45 B4                  LEA EAX,[EBP + -0x4c]
004505C1  50                        PUSH EAX
004505C2  57                        PUSH EDI
004505C3  68 FE FF 00 00            PUSH 0xfffe
004505C8  51                        PUSH ECX
004505C9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004505CF  E8 BB 11 FB FF            CALL 0x0040178f
004505D4  57                        PUSH EDI
004505D5  E8 36 DB 25 00            CALL 0x006ae110
004505DA  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004505DD  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004505E0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004505E6  52                        PUSH EDX
004505E7  50                        PUSH EAX
004505E8  E8 0C 57 FB FF            CALL 0x00405cf9
004505ED  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
004505F3  C7 85 5C FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff5c],0x1
004505FD  89 B5 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ESI
00450603  8B 10                     MOV EDX,dword ptr [EAX]
00450605  51                        PUSH ECX
00450606  6A 04                     PUSH 0x4
00450608  E9 88 00 00 00            JMP 0x00450695
LAB_0045060d:
0045060D  83 F8 16                  CMP EAX,0x16
00450610  0F 84 84 00 00 00         JZ 0x0045069a
00450616  6A 16                     PUSH 0x16
00450618  8B CB                     MOV ECX,EBX
0045061A  E8 DA 47 FB FF            CALL 0x00404df9
0045061F  85 C0                     TEST EAX,EAX
00450621  75 77                     JNZ 0x0045069a
00450623  0F BE 53 24               MOVSX EDX,byte ptr [EBX + 0x24]
00450627  69 D2 62 0A 00 00         IMUL EDX,EDX,0xa62
0045062D  66 39 B2 7F 4F 7F 00      CMP word ptr [EDX + 0x7f4f7f],SI
00450634  76 64                     JBE 0x0045069a
00450636  6A 01                     PUSH 0x1
00450638  6A 02                     PUSH 0x2
0045063A  6A 01                     PUSH 0x1
0045063C  56                        PUSH ESI
0045063D  E8 4E DC 25 00            CALL 0x006ae290
00450642  8B F8                     MOV EDI,EAX
00450644  8D 43 32                  LEA EAX,[EBX + 0x32]
00450647  50                        PUSH EAX
00450648  57                        PUSH EDI
00450649  E8 72 DB 25 00            CALL 0x006ae1c0
0045064E  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
00450651  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00450654  51                        PUSH ECX
00450655  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045065B  57                        PUSH EDI
0045065C  68 FE FF 00 00            PUSH 0xfffe
00450661  52                        PUSH EDX
00450662  E8 28 11 FB FF            CALL 0x0040178f
00450667  57                        PUSH EDI
00450668  E8 A3 DA 25 00            CALL 0x006ae110
0045066D  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00450670  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
00450673  50                        PUSH EAX
00450674  51                        PUSH ECX
00450675  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045067B  E8 79 56 FB FF            CALL 0x00405cf9
00450680  8D 8D 50 FF FF FF         LEA ECX,[EBP + 0xffffff50]
00450686  C7 85 50 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff50],0x1
00450690  8B 10                     MOV EDX,dword ptr [EAX]
00450692  51                        PUSH ECX
00450693  6A 11                     PUSH 0x11
LAB_00450695:
00450695  8B C8                     MOV ECX,EAX
00450697  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_0045069a:
0045069A  66 8B 53 30               MOV DX,word ptr [EBX + 0x30]
0045069E  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004506A1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004506A7  52                        PUSH EDX
004506A8  50                        PUSH EAX
004506A9  E8 4B 56 FB FF            CALL 0x00405cf9
004506AE  8B 93 AA 07 00 00         MOV EDX,dword ptr [EBX + 0x7aa]
004506B4  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004506B7  42                        INC EDX
004506B8  89 93 AA 07 00 00         MOV dword ptr [EBX + 0x7aa],EDX
004506BE  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
004506C4  48                        DEC EAX
004506C5  83 F8 27                  CMP EAX,0x27
004506C8  0F 87 05 01 00 00         JA 0x004507d3
004506CE  33 C9                     XOR ECX,ECX
004506D0  8A 88 E0 B1 45 00         MOV CL,byte ptr [EAX + 0x45b1e0]
switchD_004506d6::switchD:
004506D6  FF 24 8D D4 B1 45 00      JMP dword ptr [ECX*0x4 + 0x45b1d4]
switchD_004506d6::caseD_1:
004506DD  39 B3 A2 07 00 00         CMP dword ptr [EBX + 0x7a2],ESI
004506E3  0F 8F 15 01 00 00         JG 0x004507fe
004506E9  8B 93 9E 07 00 00         MOV EDX,dword ptr [EBX + 0x79e]
004506EF  89 93 A2 07 00 00         MOV dword ptr [EBX + 0x7a2],EDX
004506F5  E9 04 01 00 00            JMP 0x004507fe
switchD_004506d6::caseD_f:
004506FA  8B 83 AE 07 00 00         MOV EAX,dword ptr [EBX + 0x7ae]
00450700  8B 8B B2 07 00 00         MOV ECX,dword ptr [EBX + 0x7b2]
00450706  99                        CDQ
00450707  F7 F9                     IDIV ECX
00450709  0F AF 8B A2 07 00 00      IMUL ECX,dword ptr [EBX + 0x7a2]
00450710  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
00450713  89 83 AE 07 00 00         MOV dword ptr [EBX + 0x7ae],EAX
00450719  8B 8B 9E 07 00 00         MOV ECX,dword ptr [EBX + 0x79e]
0045071F  0F AF 8B B2 07 00 00      IMUL ECX,dword ptr [EBX + 0x7b2]
00450726  3B C1                     CMP EAX,ECX
00450728  0F 8D 88 00 00 00         JGE 0x004507b6
0045072E  40                        INC EAX
0045072F  89 83 AE 07 00 00         MOV dword ptr [EBX + 0x7ae],EAX
00450735  99                        CDQ
00450736  F7 BB B2 07 00 00         IDIV dword ptr [EBX + 0x7b2]
0045073C  89 83 A2 07 00 00         MOV dword ptr [EBX + 0x7a2],EAX
00450742  8B 8B F7 06 00 00         MOV ECX,dword ptr [EBX + 0x6f7]
00450748  83 F9 0A                  CMP ECX,0xa
0045074B  74 69                     JZ 0x004507b6
0045074D  3B C6                     CMP EAX,ESI
0045074F  75 65                     JNZ 0x004507b6
00450751  8B 93 9A 07 00 00         MOV EDX,dword ptr [EBX + 0x79a]
00450757  8B 8B 9E 07 00 00         MOV ECX,dword ptr [EBX + 0x79e]
0045075D  8B 04 95 F0 3F 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x793ff0]
00450764  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00450767  50                        PUSH EAX
00450768  51                        PUSH ECX
00450769  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045076F  52                        PUSH EDX
00450770  E8 E7 1A FB FF            CALL 0x0040225c
00450775  0F AF 83 B2 07 00 00      IMUL EAX,dword ptr [EBX + 0x7b2]
0045077C  8B BB AE 07 00 00         MOV EDI,dword ptr [EBX + 0x7ae]
00450782  03 F8                     ADD EDI,EAX
00450784  89 BB AE 07 00 00         MOV dword ptr [EBX + 0x7ae],EDI
0045078A  8B 83 9E 07 00 00         MOV EAX,dword ptr [EBX + 0x79e]
00450790  0F AF 83 B2 07 00 00      IMUL EAX,dword ptr [EBX + 0x7b2]
00450797  8B CF                     MOV ECX,EDI
00450799  3B C8                     CMP ECX,EAX
0045079B  7E 06                     JLE 0x004507a3
0045079D  89 83 AE 07 00 00         MOV dword ptr [EBX + 0x7ae],EAX
LAB_004507a3:
004507A3  8B 83 AE 07 00 00         MOV EAX,dword ptr [EBX + 0x7ae]
004507A9  99                        CDQ
004507AA  F7 BB B2 07 00 00         IDIV dword ptr [EBX + 0x7b2]
004507B0  89 83 A2 07 00 00         MOV dword ptr [EBX + 0x7a2],EAX
LAB_004507b6:
004507B6  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004507B9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004507BF  6A 3A                     PUSH 0x3a
004507C1  50                        PUSH EAX
004507C2  E8 A4 10 FB FF            CALL 0x0040186b
004507C7  85 C0                     TEST EAX,EAX
004507C9  7E 33                     JLE 0x004507fe
004507CB  FF 83 AA 07 00 00         INC dword ptr [EBX + 0x7aa]
004507D1  EB 2B                     JMP 0x004507fe
switchD_004506d6::caseD_2:
004507D3  39 B3 A2 07 00 00         CMP dword ptr [EBX + 0x7a2],ESI
004507D9  7F 23                     JG 0x004507fe
004507DB  8B 8B 9E 07 00 00         MOV ECX,dword ptr [EBX + 0x79e]
004507E1  8B 93 9A 07 00 00         MOV EDX,dword ptr [EBX + 0x79a]
004507E7  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004507EA  51                        PUSH ECX
004507EB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004507F1  52                        PUSH EDX
004507F2  50                        PUSH EAX
004507F3  E8 94 3A FB FF            CALL 0x0040428c
004507F8  89 83 A2 07 00 00         MOV dword ptr [EBX + 0x7a2],EAX
LAB_004507fe:
004507FE  83 BB F7 06 00 00 0B      CMP dword ptr [EBX + 0x6f7],0xb
00450805  74 2F                     JZ 0x00450836
00450807  8B 83 B6 07 00 00         MOV EAX,dword ptr [EBX + 0x7b6]
0045080D  3B C6                     CMP EAX,ESI
0045080F  74 25                     JZ 0x00450836
00450811  39 B3 BE 07 00 00         CMP dword ptr [EBX + 0x7be],ESI
00450817  75 1D                     JNZ 0x00450836
00450819  8B 8B BA 07 00 00         MOV ECX,dword ptr [EBX + 0x7ba]
0045081F  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00450822  51                        PUSH ECX
00450823  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00450829  50                        PUSH EAX
0045082A  52                        PUSH EDX
0045082B  E8 5C 3A FB FF            CALL 0x0040428c
00450830  89 83 BE 07 00 00         MOV dword ptr [EBX + 0x7be],EAX
LAB_00450836:
00450836  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0045083C  83 F8 24                  CMP EAX,0x24
0045083F  74 0A                     JZ 0x0045084b
00450841  83 F8 1B                  CMP EAX,0x1b
00450844  74 05                     JZ 0x0045084b
00450846  83 F8 1D                  CMP EAX,0x1d
00450849  75 2A                     JNZ 0x00450875
LAB_0045084b:
0045084B  8B 8B 1E 07 00 00         MOV ECX,dword ptr [EBX + 0x71e]
00450851  83 F9 14                  CMP ECX,0x14
00450854  7D 1F                     JGE 0x00450875
00450856  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0045085B  33 D2                     XOR EDX,EDX
0045085D  BF 3C 00 00 00            MOV EDI,0x3c
00450862  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00450868  F7 F7                     DIV EDI
0045086A  85 D2                     TEST EDX,EDX
0045086C  75 07                     JNZ 0x00450875
0045086E  41                        INC ECX
0045086F  89 8B 1E 07 00 00         MOV dword ptr [EBX + 0x71e],ECX
LAB_00450875:
00450875  83 BB F7 06 00 00 17      CMP dword ptr [EBX + 0x6f7],0x17
0045087C  75 2B                     JNZ 0x004508a9
0045087E  8B 8B 2A 07 00 00         MOV ECX,dword ptr [EBX + 0x72a]
00450884  83 F9 28                  CMP ECX,0x28
00450887  7D 20                     JGE 0x004508a9
00450889  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0045088F  BF 0F 00 00 00            MOV EDI,0xf
00450894  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0045089A  33 D2                     XOR EDX,EDX
0045089C  F7 F7                     DIV EDI
0045089E  85 D2                     TEST EDX,EDX
004508A0  75 07                     JNZ 0x004508a9
004508A2  41                        INC ECX
004508A3  89 8B 2A 07 00 00         MOV dword ptr [EBX + 0x72a],ECX
LAB_004508a9:
004508A9  83 BB F7 06 00 00 23      CMP dword ptr [EBX + 0x6f7],0x23
004508B0  75 73                     JNZ 0x00450925
004508B2  83 BB 2E 07 00 00 01      CMP dword ptr [EBX + 0x72e],0x1
004508B9  75 40                     JNZ 0x004508fb
004508BB  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004508C0  33 D2                     XOR EDX,EDX
004508C2  B9 28 00 00 00            MOV ECX,0x28
004508C7  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004508CD  F7 F1                     DIV ECX
004508CF  85 D2                     TEST EDX,EDX
004508D1  75 52                     JNZ 0x00450925
004508D3  8B 83 22 07 00 00         MOV EAX,dword ptr [EBX + 0x722]
004508D9  48                        DEC EAX
004508DA  89 83 22 07 00 00         MOV dword ptr [EBX + 0x722],EAX
004508E0  75 43                     JNZ 0x00450925
004508E2  89 B3 2E 07 00 00         MOV dword ptr [EBX + 0x72e],ESI
004508E8  8B 13                     MOV EDX,dword ptr [EBX]
004508EA  68 6D 01 00 00            PUSH 0x16d
004508EF  6A 03                     PUSH 0x3
004508F1  8B CB                     MOV ECX,EBX
004508F3  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004508F9  EB 2A                     JMP 0x00450925
LAB_004508fb:
004508FB  8B 8B 22 07 00 00         MOV ECX,dword ptr [EBX + 0x722]
00450901  83 F9 14                  CMP ECX,0x14
00450904  7D 1F                     JGE 0x00450925
00450906  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0045090B  33 D2                     XOR EDX,EDX
0045090D  BF F0 00 00 00            MOV EDI,0xf0
00450912  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00450918  F7 F7                     DIV EDI
0045091A  85 D2                     TEST EDX,EDX
0045091C  75 07                     JNZ 0x00450925
0045091E  41                        INC ECX
0045091F  89 8B 22 07 00 00         MOV dword ptr [EBX + 0x722],ECX
LAB_00450925:
00450925  8B 8B F7 06 00 00         MOV ECX,dword ptr [EBX + 0x6f7]
0045092B  83 F9 16                  CMP ECX,0x16
0045092E  74 09                     JZ 0x00450939
00450930  83 F9 25                  CMP ECX,0x25
00450933  0F 85 E0 00 00 00         JNZ 0x00450a19
LAB_00450939:
00450939  83 BB 32 07 00 00 01      CMP dword ptr [EBX + 0x732],0x1
00450940  75 6A                     JNZ 0x004509ac
00450942  83 F9 16                  CMP ECX,0x16
00450945  75 19                     JNZ 0x00450960
00450947  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0045094D  BF 1E 00 00 00            MOV EDI,0x1e
00450952  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00450958  33 D2                     XOR EDX,EDX
0045095A  F7 F7                     DIV EDI
0045095C  85 D2                     TEST EDX,EDX
0045095E  74 1D                     JZ 0x0045097d
LAB_00450960:
00450960  83 F9 25                  CMP ECX,0x25
00450963  75 3E                     JNZ 0x004509a3
00450965  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0045096A  33 D2                     XOR EDX,EDX
0045096C  B9 5A 00 00 00            MOV ECX,0x5a
00450971  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00450977  F7 F1                     DIV ECX
00450979  85 D2                     TEST EDX,EDX
0045097B  75 26                     JNZ 0x004509a3
LAB_0045097d:
0045097D  8B 83 26 07 00 00         MOV EAX,dword ptr [EBX + 0x726]
00450983  48                        DEC EAX
00450984  89 83 26 07 00 00         MOV dword ptr [EBX + 0x726],EAX
0045098A  75 17                     JNZ 0x004509a3
0045098C  89 B3 32 07 00 00         MOV dword ptr [EBX + 0x732],ESI
00450992  8B 13                     MOV EDX,dword ptr [EBX]
00450994  68 6D 01 00 00            PUSH 0x16d
00450999  6A 03                     PUSH 0x3
0045099B  8B CB                     MOV ECX,EBX
0045099D  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004509a3:
004509A3  8B CB                     MOV ECX,EBX
004509A5  E8 6A 29 FB FF            CALL 0x00403314
004509AA  EB 6D                     JMP 0x00450a19
LAB_004509ac:
004509AC  83 F9 16                  CMP ECX,0x16
004509AF  75 3E                     JNZ 0x004509ef
004509B1  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004509B4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004509BA  68 92 00 00 00            PUSH 0x92
004509BF  50                        PUSH EAX
004509C0  E8 A6 0E FB FF            CALL 0x0040186b
004509C5  85 C0                     TEST EAX,EAX
004509C7  7E 26                     JLE 0x004509ef
004509C9  8B 8B 26 07 00 00         MOV ECX,dword ptr [EBX + 0x726]
004509CF  83 F9 28                  CMP ECX,0x28
004509D2  7D 45                     JGE 0x00450a19
004509D4  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004509DA  BF 2D 00 00 00            MOV EDI,0x2d
004509DF  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004509E5  33 D2                     XOR EDX,EDX
004509E7  F7 F7                     DIV EDI
004509E9  85 D2                     TEST EDX,EDX
004509EB  75 2C                     JNZ 0x00450a19
004509ED  EB 23                     JMP 0x00450a12
LAB_004509ef:
004509EF  8B 8B 26 07 00 00         MOV ECX,dword ptr [EBX + 0x726]
004509F5  83 F9 28                  CMP ECX,0x28
004509F8  7D 1F                     JGE 0x00450a19
004509FA  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004509FF  33 D2                     XOR EDX,EDX
00450A01  BF 5A 00 00 00            MOV EDI,0x5a
00450A06  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00450A0C  F7 F7                     DIV EDI
00450A0E  85 D2                     TEST EDX,EDX
00450A10  75 07                     JNZ 0x00450a19
LAB_00450a12:
00450A12  41                        INC ECX
00450A13  89 8B 26 07 00 00         MOV dword ptr [EBX + 0x726],ECX
LAB_00450a19:
00450A19  8B 83 36 07 00 00         MOV EAX,dword ptr [EBX + 0x736]
00450A1F  48                        DEC EAX
00450A20  89 83 36 07 00 00         MOV dword ptr [EBX + 0x736],EAX
00450A26  79 06                     JNS 0x00450a2e
00450A28  89 B3 36 07 00 00         MOV dword ptr [EBX + 0x736],ESI
LAB_00450a2e:
00450A2E  8B 8B 16 07 00 00         MOV ECX,dword ptr [EBX + 0x716]
00450A34  8B 83 12 07 00 00         MOV EAX,dword ptr [EBX + 0x712]
00450A3A  3B C8                     CMP ECX,EAX
00450A3C  75 0A                     JNZ 0x00450a48
00450A3E  C7 83 6E 07 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x76e],0xffffffff
LAB_00450a48:
00450A48  8B 83 6E 07 00 00         MOV EAX,dword ptr [EBX + 0x76e]
00450A4E  3B C6                     CMP EAX,ESI
00450A50  0F 8C EA 00 00 00         JL 0x00450b40
00450A56  83 BB 5D 04 00 00 14      CMP dword ptr [EBX + 0x45d],0x14
00450A5D  75 0D                     JNZ 0x00450a6c
00450A5F  83 BB C0 05 00 00 03      CMP dword ptr [EBX + 0x5c0],0x3
00450A66  0F 84 D4 00 00 00         JZ 0x00450b40
LAB_00450a6c:
00450A6C  99                        CDQ
00450A6D  B9 7D 00 00 00            MOV ECX,0x7d
00450A72  F7 F9                     IDIV ECX
00450A74  85 D2                     TEST EDX,EDX
00450A76  0F 85 BE 00 00 00         JNZ 0x00450b3a
00450A7C  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00450A82  6A 1D                     PUSH 0x1d
00450A84  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
00450A8A  68 08 A0 7A 00            PUSH 0x7aa008
00450A8F  52                        PUSH EDX
00450A90  6A 0B                     PUSH 0xb
00450A92  8B CF                     MOV ECX,EDI
00450A94  E8 EA 36 FB FF            CALL 0x00404183
00450A99  85 C0                     TEST EAX,EAX
00450A9B  74 1A                     JZ 0x00450ab7
00450A9D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00450AA2  68 1B 04 00 00            PUSH 0x41b
00450AA7  68 3C 9D 7A 00            PUSH 0x7a9d3c
00450AAC  50                        PUSH EAX
00450AAD  68 FF FF 00 00            PUSH 0xffff
00450AB2  E8 89 53 25 00            CALL 0x006a5e40
LAB_00450ab7:
00450AB7  6A 0E                     PUSH 0xe
00450AB9  8B CF                     MOV ECX,EDI
00450ABB  E8 32 4F FB FF            CALL 0x004059f2
00450AC0  6A 0B                     PUSH 0xb
00450AC2  8B CF                     MOV ECX,EDI
00450AC4  E8 16 21 FB FF            CALL 0x00402bdf
00450AC9  6A 0B                     PUSH 0xb
00450ACB  8B CF                     MOV ECX,EDI
00450ACD  E8 02 18 FB FF            CALL 0x004022d4
00450AD2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00450AD8  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00450ADE  8B CF                     MOV ECX,EDI
00450AE0  52                        PUSH EDX
00450AE1  6A 0B                     PUSH 0xb
00450AE3  E8 58 47 FB FF            CALL 0x00405240
00450AE8  8B 83 76 07 00 00         MOV EAX,dword ptr [EBX + 0x776]
00450AEE  C7 85 00 FF FF FF 65 00 00 00  MOV dword ptr [EBP + 0xffffff00],0x65
00450AF8  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00450AFE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00450B01  89 85 FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],EAX
00450B07  8B 8B 72 07 00 00         MOV ECX,dword ptr [EBX + 0x772]
00450B0D  89 8D 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],ECX
00450B13  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
00450B19  C7 85 10 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x1
00450B23  C7 85 78 FF FF FF 10 01 00 00  MOV dword ptr [EBP + 0xffffff78],0x110
00450B2D  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
00450B33  8B 03                     MOV EAX,dword ptr [EBX]
00450B35  51                        PUSH ECX
00450B36  8B CB                     MOV ECX,EBX
00450B38  FF 10                     CALL dword ptr [EAX]
LAB_00450b3a:
00450B3A  FF 83 6E 07 00 00         INC dword ptr [EBX + 0x76e]
LAB_00450b40:
00450B40  8B 83 82 07 00 00         MOV EAX,dword ptr [EBX + 0x782]
00450B46  3B C6                     CMP EAX,ESI
00450B48  7E 11                     JLE 0x00450b5b
00450B4A  48                        DEC EAX
00450B4B  3B C6                     CMP EAX,ESI
00450B4D  89 83 82 07 00 00         MOV dword ptr [EBX + 0x782],EAX
00450B53  75 06                     JNZ 0x00450b5b
00450B55  89 B3 86 07 00 00         MOV dword ptr [EBX + 0x786],ESI
LAB_00450b5b:
00450B5B  39 B3 3A 07 00 00         CMP dword ptr [EBX + 0x73a],ESI
00450B61  0F 8E 08 01 00 00         JLE 0x00450c6f
00450B67  8B 8B 65 04 00 00         MOV ECX,dword ptr [EBX + 0x465]
00450B6D  3B CE                     CMP ECX,ESI
00450B6F  74 1D                     JZ 0x00450b8e
00450B71  0F BF 53 6C               MOVSX EDX,word ptr [EBX + 0x6c]
00450B75  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
00450B79  6A 64                     PUSH 0x64
00450B7B  52                        PUSH EDX
00450B7C  0F BF 53 43               MOVSX EDX,word ptr [EBX + 0x43]
00450B80  50                        PUSH EAX
00450B81  52                        PUSH EDX
00450B82  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
00450B86  50                        PUSH EAX
00450B87  E8 D2 37 FB FF            CALL 0x0040435e
00450B8C  EB 1E                     JMP 0x00450bac
LAB_00450b8e:
00450B8E  E8 5A 30 FB FF            CALL 0x00403bed
00450B93  3B C6                     CMP EAX,ESI
00450B95  89 83 65 04 00 00         MOV dword ptr [EBX + 0x465],EAX
00450B9B  74 0F                     JZ 0x00450bac
00450B9D  8B 8B F7 06 00 00         MOV ECX,dword ptr [EBX + 0x6f7]
00450BA3  51                        PUSH ECX
00450BA4  56                        PUSH ESI
00450BA5  8B C8                     MOV ECX,EAX
00450BA7  E8 6D 2C FB FF            CALL 0x00403819
LAB_00450bac:
00450BAC  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00450BB3  75 06                     JNZ 0x00450bbb
00450BB5  FF 8B 3A 07 00 00         DEC dword ptr [EBX + 0x73a]
LAB_00450bbb:
00450BBB  83 BB 5D 04 00 00 14      CMP dword ptr [EBX + 0x45d],0x14
00450BC2  75 5A                     JNZ 0x00450c1e
00450BC4  83 BB C0 05 00 00 03      CMP dword ptr [EBX + 0x5c0],0x3
00450BCB  75 4B                     JNZ 0x00450c18
00450BCD  8B 83 A6 05 00 00         MOV EAX,dword ptr [EBX + 0x5a6]
00450BD3  8D BB A6 05 00 00         LEA EDI,[EBX + 0x5a6]
00450BD9  3B C6                     CMP EAX,ESI
00450BDB  75 2F                     JNZ 0x00450c0c
00450BDD  8B 93 A2 05 00 00         MOV EDX,dword ptr [EBX + 0x5a2]
00450BE3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00450BE9  57                        PUSH EDI
00450BEA  52                        PUSH EDX
00450BEB  E8 E0 56 29 00            CALL 0x006e62d0
00450BF0  83 F8 FC                  CMP EAX,-0x4
00450BF3  75 17                     JNZ 0x00450c0c
00450BF5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00450BFA  68 3C 04 00 00            PUSH 0x43c
00450BFF  68 3C 9D 7A 00            PUSH 0x7a9d3c
00450C04  50                        PUSH EAX
00450C05  6A FC                     PUSH -0x4
00450C07  E8 34 52 25 00            CALL 0x006a5e40
LAB_00450c0c:
00450C0C  8B 0F                     MOV ECX,dword ptr [EDI]
00450C0E  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00450C11  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
00450C14  3B D0                     CMP EDX,EAX
00450C16  75 06                     JNZ 0x00450c1e
LAB_00450c18:
00450C18  FF 8B 3A 07 00 00         DEC dword ptr [EBX + 0x73a]
LAB_00450c1e:
00450C1E  39 B3 3A 07 00 00         CMP dword ptr [EBX + 0x73a],ESI
00450C24  75 49                     JNZ 0x00450c6f
00450C26  8B 8B 65 04 00 00         MOV ECX,dword ptr [EBX + 0x465]
00450C2C  3B CE                     CMP ECX,ESI
00450C2E  74 1A                     JZ 0x00450c4a
00450C30  E8 B9 3D FB FF            CALL 0x004049ee
00450C35  8B 83 65 04 00 00         MOV EAX,dword ptr [EBX + 0x465]
00450C3B  50                        PUSH EAX
00450C3C  E8 6F D6 2D 00            CALL 0x0072e2b0
00450C41  83 C4 04                  ADD ESP,0x4
00450C44  89 B3 65 04 00 00         MOV dword ptr [EBX + 0x465],ESI
LAB_00450c4a:
00450C4A  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00450C51  74 1C                     JZ 0x00450c6f
00450C53  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00450C59  8D 45 A8                  LEA EAX,[EBP + -0x58]
00450C5C  50                        PUSH EAX
00450C5D  6A 03                     PUSH 0x3
00450C5F  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00450C65  8B CB                     MOV ECX,EBX
00450C67  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
00450C6A  E8 B7 14 FB FF            CALL 0x00402126
LAB_00450c6f:
00450C6F  39 B3 0E 07 00 00         CMP dword ptr [EBX + 0x70e],ESI
00450C75  75 46                     JNZ 0x00450cbd
00450C77  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00450C7D  33 D2                     XOR EDX,EDX
00450C7F  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00450C85  B9 03 00 00 00            MOV ECX,0x3
00450C8A  F7 F1                     DIV ECX
00450C8C  85 D2                     TEST EDX,EDX
00450C8E  75 2D                     JNZ 0x00450cbd
00450C90  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00450C93  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00450C99  6A 0A                     PUSH 0xa
00450C9B  52                        PUSH EDX
00450C9C  E8 CA 0B FB FF            CALL 0x0040186b
00450CA1  85 C0                     TEST EAX,EAX
00450CA3  7E 18                     JLE 0x00450cbd
00450CA5  8B 83 0A 07 00 00         MOV EAX,dword ptr [EBX + 0x70a]
00450CAB  8B CB                     MOV ECX,EBX
00450CAD  50                        PUSH EAX
00450CAE  E8 36 1F FB FF            CALL 0x00402be9
00450CB3  C7 83 0E 07 00 00 01 00 00 00  MOV dword ptr [EBX + 0x70e],0x1
LAB_00450cbd:
00450CBD  83 BB C0 02 00 00 01      CMP dword ptr [EBX + 0x2c0],0x1
00450CC4  0F 85 BD 01 00 00         JNZ 0x00450e87
00450CCA  89 B3 C0 02 00 00         MOV dword ptr [EBX + 0x2c0],ESI
00450CD0  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00450CD6  83 F8 09                  CMP EAX,0x9
00450CD9  0F 84 0B 01 00 00         JZ 0x00450dea
00450CDF  83 F8 15                  CMP EAX,0x15
00450CE2  0F 84 CE 00 00 00         JZ 0x00450db6
00450CE8  8B CB                     MOV ECX,EBX
00450CEA  E8 4B 0A FB FF            CALL 0x0040173a
00450CEF  83 F8 07                  CMP EAX,0x7
00450CF2  89 83 2A 08 00 00         MOV dword ptr [EBX + 0x82a],EAX
00450CF8  7C 06                     JL 0x00450d00
00450CFA  89 B3 2A 08 00 00         MOV dword ptr [EBX + 0x82a],ESI
LAB_00450d00:
00450D00  8B 8B 2A 08 00 00         MOV ECX,dword ptr [EBX + 0x82a]
00450D06  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00450D0C  6A 1D                     PUSH 0x1d
00450D0E  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
00450D14  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00450D17  C1 E0 03                  SHL EAX,0x3
00450D1A  2B C1                     SUB EAX,ECX
00450D1C  8D 8C 40 E0 8E 7A 00      LEA ECX,[EAX + EAX*0x2 + 0x7a8ee0]
00450D23  51                        PUSH ECX
00450D24  52                        PUSH EDX
00450D25  6A 08                     PUSH 0x8
00450D27  8B CF                     MOV ECX,EDI
00450D29  E8 55 34 FB FF            CALL 0x00404183
00450D2E  8B 8B 2A 08 00 00         MOV ECX,dword ptr [EBX + 0x82a]
00450D34  6A 1D                     PUSH 0x1d
00450D36  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00450D39  C1 E0 03                  SHL EAX,0x3
00450D3C  2B C1                     SUB EAX,ECX
00450D3E  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
00450D44  8D 84 40 EF 8E 7A 00      LEA EAX,[EAX + EAX*0x2 + 0x7a8eef]
00450D4B  50                        PUSH EAX
00450D4C  51                        PUSH ECX
00450D4D  6A 09                     PUSH 0x9
00450D4F  8B CF                     MOV ECX,EDI
00450D51  E8 2D 34 FB FF            CALL 0x00404183
00450D56  8B 8B 2A 08 00 00         MOV ECX,dword ptr [EBX + 0x82a]
00450D5C  6A 1D                     PUSH 0x1d
00450D5E  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00450D61  C1 E0 03                  SHL EAX,0x3
00450D64  2B C1                     SUB EAX,ECX
00450D66  8B CF                     MOV ECX,EDI
00450D68  8D 94 40 FE 8E 7A 00      LEA EDX,[EAX + EAX*0x2 + 0x7a8efe]
00450D6F  A1 74 67 80 00            MOV EAX,[0x00806774]
00450D74  52                        PUSH EDX
00450D75  50                        PUSH EAX
00450D76  6A 0A                     PUSH 0xa
00450D78  E8 06 34 FB FF            CALL 0x00404183
00450D7D  6A 0A                     PUSH 0xa
00450D7F  8B CF                     MOV ECX,EDI
00450D81  E8 4E 15 FB FF            CALL 0x004022d4
00450D86  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00450D8C  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00450D92  8B CF                     MOV ECX,EDI
00450D94  52                        PUSH EDX
00450D95  6A 0A                     PUSH 0xa
00450D97  E8 A4 44 FB FF            CALL 0x00405240
00450D9C  A1 B8 32 80 00            MOV EAX,[0x008032b8]
00450DA1  6A 10                     PUSH 0x10
00450DA3  50                        PUSH EAX
00450DA4  8B CF                     MOV ECX,EDI
00450DA6  E8 43 37 FB FF            CALL 0x004044ee
00450DAB  6A 0A                     PUSH 0xa
00450DAD  8B CF                     MOV ECX,EDI
00450DAF  E8 7F 24 FB FF            CALL 0x00403233
00450DB4  EB 7C                     JMP 0x00450e32
LAB_00450db6:
00450DB6  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00450DBC  6A 1D                     PUSH 0x1d
00450DBE  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
00450DC4  68 80 9F 7A 00            PUSH 0x7a9f80
00450DC9  51                        PUSH ECX
00450DCA  6A 08                     PUSH 0x8
00450DCC  8B CF                     MOV ECX,EDI
00450DCE  E8 B0 33 FB FF            CALL 0x00404183
00450DD3  85 C0                     TEST EAX,EAX
00450DD5  74 5B                     JZ 0x00450e32
00450DD7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00450DDD  68 62 04 00 00            PUSH 0x462
00450DE2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00450DE7  52                        PUSH EDX
00450DE8  EB 3E                     JMP 0x00450e28
LAB_00450dea:
00450DEA  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
00450DF0  6A 08                     PUSH 0x8
00450DF2  8B CF                     MOV ECX,EDI
00450DF4  E8 E9 3D FB FF            CALL 0x00404be2
00450DF9  85 C0                     TEST EAX,EAX
00450DFB  75 35                     JNZ 0x00450e32
00450DFD  A1 74 67 80 00            MOV EAX,[0x00806774]
00450E02  6A 1D                     PUSH 0x1d
00450E04  68 80 9F 7A 00            PUSH 0x7a9f80
00450E09  50                        PUSH EAX
00450E0A  6A 08                     PUSH 0x8
00450E0C  8B CF                     MOV ECX,EDI
00450E0E  E8 70 33 FB FF            CALL 0x00404183
00450E13  85 C0                     TEST EAX,EAX
00450E15  74 1B                     JZ 0x00450e32
00450E17  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00450E1D  68 5D 04 00 00            PUSH 0x45d
00450E22  68 3C 9D 7A 00            PUSH 0x7a9d3c
00450E27  51                        PUSH ECX
LAB_00450e28:
00450E28  68 FF FF 00 00            PUSH 0xffff
00450E2D  E8 0E 50 25 00            CALL 0x006a5e40
LAB_00450e32:
00450E32  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00450E38  8B CF                     MOV ECX,EDI
00450E3A  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00450E40  50                        PUSH EAX
00450E41  6A 08                     PUSH 0x8
00450E43  E8 F8 43 FB FF            CALL 0x00405240
00450E48  C7 83 55 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x455],0x1
00450E52  8B 13                     MOV EDX,dword ptr [EBX]
00450E54  8B CB                     MOV ECX,EBX
00450E56  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00450E59  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00450E5F  50                        PUSH EAX
00450E60  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00450E63  50                        PUSH EAX
00450E64  E8 A5 20 FB FF            CALL 0x00402f0e
00450E69  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
00450E6C  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00450E6F  33 D2                     XOR EDX,EDX
00450E71  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
00450E77  3B C2                     CMP EAX,EDX
00450E79  75 0C                     JNZ 0x00450e87
00450E7B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00450E81  50                        PUSH EAX
00450E82  E8 06 3D FB FF            CALL 0x00404b8d
LAB_00450e87:
00450E87  83 BB 55 04 00 00 01      CMP dword ptr [EBX + 0x455],0x1
00450E8E  0F 85 AD 02 00 00         JNZ 0x00451141
00450E94  8B 13                     MOV EDX,dword ptr [EBX]
00450E96  8B CB                     MOV ECX,EBX
00450E98  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00450E9E  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
00450EA4  6A 08                     PUSH 0x8
00450EA6  8B CF                     MOV ECX,EDI
00450EA8  E8 02 34 FB FF            CALL 0x004042af
00450EAD  83 F8 02                  CMP EAX,0x2
00450EB0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00450EB3  75 23                     JNZ 0x00450ed8
00450EB5  6A 0F                     PUSH 0xf
00450EB7  8B CF                     MOV ECX,EDI
00450EB9  E8 A6 33 FB FF            CALL 0x00404264
00450EBE  56                        PUSH ESI
00450EBF  8B CF                     MOV ECX,EDI
00450EC1  E8 9E 33 FB FF            CALL 0x00404264
00450EC6  6A 01                     PUSH 0x1
00450EC8  8B CF                     MOV ECX,EDI
00450ECA  E8 95 33 FB FF            CALL 0x00404264
00450ECF  6A 02                     PUSH 0x2
00450ED1  8B CF                     MOV ECX,EDI
00450ED3  E8 8C 33 FB FF            CALL 0x00404264
LAB_00450ed8:
00450ED8  8B 8B 2A 08 00 00         MOV ECX,dword ptr [EBX + 0x82a]
00450EDE  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00450EE1  C1 E0 03                  SHL EAX,0x3
00450EE4  2B C1                     SUB EAX,ECX
00450EE6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00450EE9  3B 8C 40 11 8F 7A 00      CMP ECX,dword ptr [EAX + EAX*0x2 + 0x7a8f11]
00450EF0  0F 85 AC 00 00 00         JNZ 0x00450fa2
00450EF6  6A 0E                     PUSH 0xe
00450EF8  8B CF                     MOV ECX,EDI
00450EFA  E8 65 33 FB FF            CALL 0x00404264
00450EFF  6A 0D                     PUSH 0xd
00450F01  8B CF                     MOV ECX,EDI
00450F03  E8 5C 33 FB FF            CALL 0x00404264
00450F08  6A 0C                     PUSH 0xc
00450F0A  8B CF                     MOV ECX,EDI
00450F0C  E8 53 33 FB FF            CALL 0x00404264
00450F11  6A 0B                     PUSH 0xb
00450F13  8B CF                     MOV ECX,EDI
00450F15  E8 4A 33 FB FF            CALL 0x00404264
00450F1A  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00450F20  56                        PUSH ESI
00450F21  83 F8 21                  CMP EAX,0x21
00450F24  75 2A                     JNZ 0x00450f50
00450F26  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00450F29  8B CF                     MOV ECX,EDI
00450F2B  52                        PUSH EDX
00450F2C  E8 9B 43 FB FF            CALL 0x004052cc
00450F31  8B 8B F7 06 00 00         MOV ECX,dword ptr [EBX + 0x6f7]
00450F37  50                        PUSH EAX
00450F38  0F BF 43 6C               MOVSX EAX,word ptr [EBX + 0x6c]
00450F3C  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
00450F40  50                        PUSH EAX
00450F41  53                        PUSH EBX
00450F42  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
00450F46  51                        PUSH ECX
00450F47  52                        PUSH EDX
00450F48  0F BF 4B 41               MOVSX ECX,word ptr [EBX + 0x41]
00450F4C  50                        PUSH EAX
00450F4D  51                        PUSH ECX
00450F4E  EB 26                     JMP 0x00450f76
LAB_00450f50:
00450F50  6A FF                     PUSH -0x1
00450F52  8B CF                     MOV ECX,EDI
00450F54  E8 73 43 FB FF            CALL 0x004052cc
00450F59  0F BF 53 6C               MOVSX EDX,word ptr [EBX + 0x6c]
00450F5D  0F BF 4B 45               MOVSX ECX,word ptr [EBX + 0x45]
00450F61  50                        PUSH EAX
00450F62  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00450F68  52                        PUSH EDX
00450F69  53                        PUSH EBX
00450F6A  0F BF 53 43               MOVSX EDX,word ptr [EBX + 0x43]
00450F6E  50                        PUSH EAX
00450F6F  51                        PUSH ECX
00450F70  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
00450F74  52                        PUSH EDX
00450F75  50                        PUSH EAX
LAB_00450f76:
00450F76  E8 C3 12 FB FF            CALL 0x0040223e
00450F7B  8B 8B 65 04 00 00         MOV ECX,dword ptr [EBX + 0x465]
00450F81  83 C4 24                  ADD ESP,0x24
00450F84  3B CE                     CMP ECX,ESI
00450F86  74 1A                     JZ 0x00450fa2
00450F88  E8 61 3A FB FF            CALL 0x004049ee
00450F8D  8B 8B 65 04 00 00         MOV ECX,dword ptr [EBX + 0x465]
00450F93  51                        PUSH ECX
00450F94  E8 17 D3 2D 00            CALL 0x0072e2b0
00450F99  83 C4 04                  ADD ESP,0x4
00450F9C  89 B3 65 04 00 00         MOV dword ptr [EBX + 0x465],ESI
LAB_00450fa2:
00450FA2  83 BB F7 06 00 00 21      CMP dword ptr [EBX + 0x6f7],0x21
00450FA9  75 35                     JNZ 0x00450fe0
00450FAB  83 7D F8 18               CMP dword ptr [EBP + -0x8],0x18
00450FAF  75 2F                     JNZ 0x00450fe0
00450FB1  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00450FB4  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00450FB7  33 D2                     XOR EDX,EDX
00450FB9  68 C8 00 00 00            PUSH 0xc8
00450FBE  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
00450FC2  6A 21                     PUSH 0x21
00450FC4  52                        PUSH EDX
00450FC5  50                        PUSH EAX
00450FC6  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
00450FCA  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
00450FCE  51                        PUSH ECX
00450FCF  6A 03                     PUSH 0x3
00450FD1  0F BF 4B 41               MOVSX ECX,word ptr [EBX + 0x41]
00450FD5  52                        PUSH EDX
00450FD6  50                        PUSH EAX
00450FD7  51                        PUSH ECX
00450FD8  E8 5E 33 FB FF            CALL 0x0040433b
00450FDD  83 C4 24                  ADD ESP,0x24
LAB_00450fe0:
00450FE0  8B 8B 2A 08 00 00         MOV ECX,dword ptr [EBX + 0x82a]
00450FE6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00450FE9  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00450FEC  C1 E0 03                  SHL EAX,0x3
00450FEF  2B C1                     SUB EAX,ECX
00450FF1  3B 94 40 15 8F 7A 00      CMP EDX,dword ptr [EAX + EAX*0x2 + 0x7a8f15]
00450FF8  75 07                     JNZ 0x00451001
00450FFA  8B CF                     MOV ECX,EDI
00450FFC  E8 8F 1A FB FF            CALL 0x00402a90
LAB_00451001:
00451001  8B 8B 2A 08 00 00         MOV ECX,dword ptr [EBX + 0x82a]
00451007  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0045100A  C1 E0 03                  SHL EAX,0x3
0045100D  2B C1                     SUB EAX,ECX
0045100F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00451012  3B 8C 40 19 8F 7A 00      CMP ECX,dword ptr [EAX + EAX*0x2 + 0x7a8f19]
00451019  75 26                     JNZ 0x00451041
0045101B  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00451021  83 F8 09                  CMP EAX,0x9
00451024  74 1B                     JZ 0x00451041
00451026  83 F8 15                  CMP EAX,0x15
00451029  74 16                     JZ 0x00451041
0045102B  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00451031  8B CF                     MOV ECX,EDI
00451033  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00451039  50                        PUSH EAX
0045103A  6A 09                     PUSH 0x9
0045103C  E8 FF 41 FB FF            CALL 0x00405240
LAB_00451041:
00451041  8B 8B 2A 08 00 00         MOV ECX,dword ptr [EBX + 0x82a]
00451047  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0045104A  C1 E0 03                  SHL EAX,0x3
0045104D  2B C1                     SUB EAX,ECX
0045104F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00451052  3B 8C 40 19 8F 7A 00      CMP ECX,dword ptr [EAX + EAX*0x2 + 0x7a8f19]
00451059  7E 3C                     JLE 0x00451097
0045105B  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00451061  83 F8 09                  CMP EAX,0x9
00451064  74 31                     JZ 0x00451097
00451066  83 F8 15                  CMP EAX,0x15
00451069  74 2C                     JZ 0x00451097
0045106B  6A 08                     PUSH 0x8
0045106D  8B CF                     MOV ECX,EDI
0045106F  E8 3B 32 FB FF            CALL 0x004042af
00451074  8B 93 2A 08 00 00         MOV EDX,dword ptr [EBX + 0x82a]
0045107A  8D 0C 52                  LEA ECX,[EDX + EDX*0x2]
0045107D  C1 E1 03                  SHL ECX,0x3
00451080  2B CA                     SUB ECX,EDX
00451082  8B 94 49 0D 8F 7A 00      MOV EDX,dword ptr [ECX + ECX*0x2 + 0x7a8f0d]
00451089  4A                        DEC EDX
0045108A  3B C2                     CMP EAX,EDX
0045108C  75 09                     JNZ 0x00451097
0045108E  6A 08                     PUSH 0x8
00451090  8B CF                     MOV ECX,EDI
00451092  E8 CD 31 FB FF            CALL 0x00404264
LAB_00451097:
00451097  8B 8B 2A 08 00 00         MOV ECX,dword ptr [EBX + 0x82a]
0045109D  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
004510A0  C1 E0 03                  SHL EAX,0x3
004510A3  2B C1                     SUB EAX,ECX
004510A5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004510A8  3B 8C 40 21 8F 7A 00      CMP ECX,dword ptr [EAX + EAX*0x2 + 0x7a8f21]
004510AF  75 14                     JNZ 0x004510c5
004510B1  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004510B4  3B C6                     CMP EAX,ESI
004510B6  74 0D                     JZ 0x004510c5
004510B8  8B C8                     MOV ECX,EAX
004510BA  8D 43 32                  LEA EAX,[EBX + 0x32]
004510BD  50                        PUSH EAX
004510BE  6A 6A                     PUSH 0x6a
004510C0  8B 11                     MOV EDX,dword ptr [ECX]
004510C2  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_004510c5:
004510C5  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
004510CB  83 F8 09                  CMP EAX,0x9
004510CE  74 1C                     JZ 0x004510ec
004510D0  83 F8 15                  CMP EAX,0x15
004510D3  74 17                     JZ 0x004510ec
004510D5  6A 09                     PUSH 0x9
004510D7  8B CF                     MOV ECX,EDI
004510D9  E8 D1 31 FB FF            CALL 0x004042af
004510DE  83 F8 14                  CMP EAX,0x14
004510E1  0F 85 06 9E 00 00         JNZ 0x0045aeed
004510E7  E9 8F 9C 00 00            JMP 0x0045ad7b
LAB_004510ec:
004510EC  83 7D F8 27               CMP dword ptr [EBP + -0x8],0x27
004510F0  0F 85 F7 9D 00 00         JNZ 0x0045aeed
004510F6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004510FC  C7 85 78 FF FF FF 0A 00 00 00  MOV dword ptr [EBP + 0xffffff78],0xa
00451106  89 B5 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ESI
0045110C  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0045110F  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
00451115  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
00451118  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
0045111E  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
00451124  50                        PUSH EAX
00451125  E8 E6 46 29 00            CALL 0x006e5810
0045112A  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
00451130  33 C0                     XOR EAX,EAX
00451132  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00451138  5F                        POP EDI
00451139  5E                        POP ESI
0045113A  5B                        POP EBX
0045113B  8B E5                     MOV ESP,EBP
0045113D  5D                        POP EBP
0045113E  C2 04 00                  RET 0x4
LAB_00451141:
00451141  8B 83 59 04 00 00         MOV EAX,dword ptr [EBX + 0x459]
00451147  3B C6                     CMP EAX,ESI
00451149  0F 84 07 02 00 00         JZ 0x00451356
0045114F  83 C0 9B                  ADD EAX,-0x65
00451152  83 F8 16                  CMP EAX,0x16
00451155  0F 87 A7 01 00 00         JA 0x00451302
switchD_0045115b::switchD:
0045115B  FF 24 85 08 B2 45 00      JMP dword ptr [EAX*0x4 + 0x45b208]
switchD_0045115b::caseD_65:
00451162  6A 02                     PUSH 0x2
00451164  8B CB                     MOV ECX,EBX
00451166  E8 85 2C FB FF            CALL 0x00403df0
0045116B  8B F8                     MOV EDI,EAX
0045116D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451170  E9 AB 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_67:
00451175  6A 02                     PUSH 0x2
00451177  8B CB                     MOV ECX,EBX
00451179  E8 BC 37 FB FF            CALL 0x0040493a
0045117E  8B F8                     MOV EDI,EAX
00451180  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451183  E9 98 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_66:
00451188  6A 02                     PUSH 0x2
0045118A  8B CB                     MOV ECX,EBX
0045118C  E8 C2 23 FB FF            CALL 0x00403553
00451191  8B F8                     MOV EDI,EAX
00451193  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451196  E9 85 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_6a:
0045119B  6A 02                     PUSH 0x2
0045119D  8B CB                     MOV ECX,EBX
0045119F  E8 4F 15 FB FF            CALL 0x004026f3
004511A4  8B F8                     MOV EDI,EAX
004511A6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004511A9  E9 72 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_70:
004511AE  6A 02                     PUSH 0x2
004511B0  8B CB                     MOV ECX,EBX
004511B2  E8 25 22 FB FF            CALL 0x004033dc
004511B7  8B F8                     MOV EDI,EAX
004511B9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004511BC  E9 5F 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_75:
004511C1  6A 02                     PUSH 0x2
004511C3  8B CB                     MOV ECX,EBX
004511C5  E8 49 FF FA FF            CALL 0x00401113
004511CA  8B F8                     MOV EDI,EAX
004511CC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004511CF  E9 4C 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_77:
004511D4  6A 02                     PUSH 0x2
004511D6  8B CB                     MOV ECX,EBX
004511D8  E8 36 40 FB FF            CALL 0x00405213
004511DD  8B F8                     MOV EDI,EAX
004511DF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004511E2  E9 39 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_71:
004511E7  6A 02                     PUSH 0x2
004511E9  8B CB                     MOV ECX,EBX
004511EB  E8 5A 22 FB FF            CALL 0x0040344a
004511F0  8B F8                     MOV EDI,EAX
004511F2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004511F5  E9 26 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_68:
004511FA  6A 02                     PUSH 0x2
004511FC  8B CB                     MOV ECX,EBX
004511FE  E8 B9 46 FB FF            CALL 0x004058bc
00451203  8B F8                     MOV EDI,EAX
00451205  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451208  E9 13 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_69:
0045120D  6A 02                     PUSH 0x2
0045120F  8B CB                     MOV ECX,EBX
00451211  E8 F1 32 FB FF            CALL 0x00404507
00451216  8B F8                     MOV EDI,EAX
00451218  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045121B  E9 00 01 00 00            JMP 0x00451320
switchD_0045115b::caseD_73:
00451220  6A 02                     PUSH 0x2
00451222  8B CB                     MOV ECX,EBX
00451224  E8 5C 2D FB FF            CALL 0x00403f85
00451229  8B F8                     MOV EDI,EAX
0045122B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045122E  E9 ED 00 00 00            JMP 0x00451320
switchD_0045115b::caseD_78:
00451233  6A 02                     PUSH 0x2
00451235  8B CB                     MOV ECX,EBX
00451237  E8 1C 14 FB FF            CALL 0x00402658
0045123C  8B F8                     MOV EDI,EAX
0045123E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451241  E9 DA 00 00 00            JMP 0x00451320
switchD_0045115b::caseD_74:
00451246  6A 02                     PUSH 0x2
00451248  8B CB                     MOV ECX,EBX
0045124A  E8 4B 27 FB FF            CALL 0x0040399a
0045124F  8B F8                     MOV EDI,EAX
00451251  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451254  E9 C7 00 00 00            JMP 0x00451320
switchD_0045115b::caseD_6b:
00451259  6A 02                     PUSH 0x2
0045125B  8B CB                     MOV ECX,EBX
0045125D  E8 3A 25 FB FF            CALL 0x0040379c
00451262  8B F8                     MOV EDI,EAX
00451264  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451267  E9 B4 00 00 00            JMP 0x00451320
switchD_0045115b::caseD_6e:
0045126C  6A 02                     PUSH 0x2
0045126E  8B CB                     MOV ECX,EBX
00451270  E8 29 46 FB FF            CALL 0x0040589e
00451275  8B F8                     MOV EDI,EAX
00451277  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045127A  E9 A1 00 00 00            JMP 0x00451320
switchD_0045115b::caseD_6d:
0045127F  6A 02                     PUSH 0x2
00451281  8B CB                     MOV ECX,EBX
00451283  E8 D0 18 FB FF            CALL 0x00402b58
00451288  8B F8                     MOV EDI,EAX
0045128A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045128D  E9 8E 00 00 00            JMP 0x00451320
switchD_0045115b::caseD_7a:
00451292  6A 02                     PUSH 0x2
00451294  8B CB                     MOV ECX,EBX
00451296  E8 EC 34 FB FF            CALL 0x00404787
0045129B  8B F8                     MOV EDI,EAX
0045129D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004512A0  EB 7E                     JMP 0x00451320
switchD_0045115b::caseD_79:
004512A2  6A 02                     PUSH 0x2
004512A4  8B CB                     MOV ECX,EBX
004512A6  E8 82 48 FB FF            CALL 0x00405b2d
004512AB  8B F8                     MOV EDI,EAX
004512AD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004512B0  EB 6E                     JMP 0x00451320
switchD_0045115b::caseD_7b:
004512B2  6A 02                     PUSH 0x2
004512B4  8B CB                     MOV ECX,EBX
004512B6  E8 7D 06 FB FF            CALL 0x00401938
004512BB  8B F8                     MOV EDI,EAX
004512BD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004512C0  EB 5E                     JMP 0x00451320
switchD_0045115b::caseD_6f:
004512C2  6A 02                     PUSH 0x2
004512C4  8B CB                     MOV ECX,EBX
004512C6  E8 7B 43 FB FF            CALL 0x00405646
004512CB  8B F8                     MOV EDI,EAX
004512CD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004512D0  EB 4E                     JMP 0x00451320
switchD_0045115b::caseD_76:
004512D2  6A 02                     PUSH 0x2
004512D4  8B CB                     MOV ECX,EBX
004512D6  E8 09 23 FB FF            CALL 0x004035e4
004512DB  8B F8                     MOV EDI,EAX
004512DD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004512E0  EB 3E                     JMP 0x00451320
switchD_0045115b::caseD_6c:
004512E2  6A 02                     PUSH 0x2
004512E4  8B CB                     MOV ECX,EBX
004512E6  E8 A2 10 FB FF            CALL 0x0040238d
004512EB  8B F8                     MOV EDI,EAX
004512ED  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004512F0  EB 2E                     JMP 0x00451320
switchD_0045115b::caseD_72:
004512F2  6A 02                     PUSH 0x2
004512F4  8B CB                     MOV ECX,EBX
004512F6  E8 3E 3C FB FF            CALL 0x00404f39
004512FB  8B F8                     MOV EDI,EAX
004512FD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451300  EB 1E                     JMP 0x00451320
switchD_0045115b::default:
00451302  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451308  68 CB 04 00 00            PUSH 0x4cb
0045130D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451312  51                        PUSH ECX
00451313  68 FF FF 00 00            PUSH 0xffff
00451318  E8 23 4B 25 00            CALL 0x006a5e40
0045131D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00451320:
00451320  83 FF FF                  CMP EDI,-0x1
00451323  75 1B                     JNZ 0x00451340
00451325  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045132B  68 CD 04 00 00            PUSH 0x4cd
00451330  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451335  52                        PUSH EDX
00451336  68 FF FF 00 00            PUSH 0xffff
0045133B  E8 00 4B 25 00            CALL 0x006a5e40
LAB_00451340:
00451340  3B FE                     CMP EDI,ESI
00451342  75 06                     JNZ 0x0045134a
00451344  89 B3 59 04 00 00         MOV dword ptr [EBX + 0x459],ESI
LAB_0045134a:
0045134A  39 B3 59 04 00 00         CMP dword ptr [EBX + 0x459],ESI
00451350  0F 85 97 9B 00 00         JNZ 0x0045aeed
LAB_00451356:
00451356  83 BB C4 02 00 00 01      CMP dword ptr [EBX + 0x2c4],0x1
0045135D  0F 85 AA 7D 00 00         JNZ 0x0045910d
00451363  8B 83 3A 07 00 00         MOV EAX,dword ptr [EBX + 0x73a]
00451369  33 D2                     XOR EDX,EDX
0045136B  3B C6                     CMP EAX,ESI
0045136D  0F 8E 8F 00 00 00         JLE 0x00451402
00451373  8B 8B D4 02 00 00         MOV ECX,dword ptr [EBX + 0x2d4]
00451379  BF 01 00 00 00            MOV EDI,0x1
0045137E  33 C0                     XOR EAX,EAX
00451380  3B CF                     CMP ECX,EDI
00451382  0F 94 C0                  SETZ AL
00451385  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00451388  8B 83 14 03 00 00         MOV EAX,dword ptr [EBX + 0x314]
0045138E  33 C9                     XOR ECX,ECX
00451390  3B C7                     CMP EAX,EDI
00451392  0F 94 C1                  SETZ CL
00451395  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00451398  8B 8B F4 02 00 00         MOV ECX,dword ptr [EBX + 0x2f4]
0045139E  33 C0                     XOR EAX,EAX
004513A0  3B CF                     CMP ECX,EDI
004513A2  0F 94 C0                  SETZ AL
004513A5  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
004513A8  B9 17 00 00 00            MOV ECX,0x17
004513AD  33 C0                     XOR EAX,EAX
004513AF  8D BB CC 02 00 00         LEA EDI,[EBX + 0x2cc]
004513B5  F3 AB                     STOSD.REP ES:EDI
004513B7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004513BA  89 B3 C4 02 00 00         MOV dword ptr [EBX + 0x2c4],ESI
004513C0  83 F8 01                  CMP EAX,0x1
004513C3  B8 01 00 00 00            MOV EAX,0x1
004513C8  75 06                     JNZ 0x004513d0
004513CA  89 83 D4 02 00 00         MOV dword ptr [EBX + 0x2d4],EAX
LAB_004513d0:
004513D0  8B 7D 8C                  MOV EDI,dword ptr [EBP + -0x74]
004513D3  3B F8                     CMP EDI,EAX
004513D5  75 06                     JNZ 0x004513dd
004513D7  89 83 14 03 00 00         MOV dword ptr [EBX + 0x314],EAX
LAB_004513dd:
004513DD  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
004513E0  3B C8                     CMP ECX,EAX
004513E2  75 06                     JNZ 0x004513ea
004513E4  89 83 F4 02 00 00         MOV dword ptr [EBX + 0x2f4],EAX
LAB_004513ea:
004513EA  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
004513ED  74 0D                     JZ 0x004513fc
004513EF  3B F8                     CMP EDI,EAX
004513F1  74 09                     JZ 0x004513fc
004513F3  3B C8                     CMP ECX,EAX
004513F5  75 0B                     JNZ 0x00451402
004513F7  B8 01 00 00 00            MOV EAX,0x1
LAB_004513fc:
004513FC  89 83 C4 02 00 00         MOV dword ptr [EBX + 0x2c4],EAX
LAB_00451402:
00451402  8B 83 14 03 00 00         MOV EAX,dword ptr [EBX + 0x314]
00451408  B9 01 00 00 00            MOV ECX,0x1
0045140D  3B C1                     CMP EAX,ECX
0045140F  75 24                     JNZ 0x00451435
00451411  B9 17 00 00 00            MOV ECX,0x17
00451416  33 C0                     XOR EAX,EAX
00451418  8D BB CC 02 00 00         LEA EDI,[EBX + 0x2cc]
0045141E  F3 AB                     STOSD.REP ES:EDI
00451420  C7 83 14 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x314],0x1
0045142A  8B 93 C4 03 00 00         MOV EDX,dword ptr [EBX + 0x3c4]
00451430  B9 01 00 00 00            MOV ECX,0x1
LAB_00451435:
00451435  83 BB 5D 04 00 00 14      CMP dword ptr [EBX + 0x45d],0x14
0045143C  75 33                     JNZ 0x00451471
0045143E  83 BB C0 05 00 00 03      CMP dword ptr [EBX + 0x5c0],0x3
00451445  75 2A                     JNZ 0x00451471
00451447  B9 17 00 00 00            MOV ECX,0x17
0045144C  33 C0                     XOR EAX,EAX
0045144E  8D BB CC 02 00 00         LEA EDI,[EBX + 0x2cc]
00451454  F3 AB                     STOSD.REP ES:EDI
00451456  89 B3 C4 02 00 00         MOV dword ptr [EBX + 0x2c4],ESI
0045145C  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
00451462  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00451468  5F                        POP EDI
00451469  5E                        POP ESI
0045146A  5B                        POP EBX
0045146B  8B E5                     MOV ESP,EBP
0045146D  5D                        POP EBP
0045146E  C2 04 00                  RET 0x4
LAB_00451471:
00451471  8B BB CC 02 00 00         MOV EDI,dword ptr [EBX + 0x2cc]
00451477  3B F9                     CMP EDI,ECX
00451479  75 0C                     JNZ 0x00451487
0045147B  8B 83 28 03 00 00         MOV EAX,dword ptr [EBX + 0x328]
00451481  3B C2                     CMP EAX,EDX
00451483  76 02                     JBE 0x00451487
00451485  8B D0                     MOV EDX,EAX
LAB_00451487:
00451487  39 8B D0 02 00 00         CMP dword ptr [EBX + 0x2d0],ECX
0045148D  75 0C                     JNZ 0x0045149b
0045148F  8B 83 32 03 00 00         MOV EAX,dword ptr [EBX + 0x332]
00451495  3B C2                     CMP EAX,EDX
00451497  76 02                     JBE 0x0045149b
00451499  8B D0                     MOV EDX,EAX
LAB_0045149b:
0045149B  39 8B D4 02 00 00         CMP dword ptr [EBX + 0x2d4],ECX
004514A1  75 0C                     JNZ 0x004514af
004514A3  8B 83 43 03 00 00         MOV EAX,dword ptr [EBX + 0x343]
004514A9  3B C2                     CMP EAX,EDX
004514AB  76 02                     JBE 0x004514af
004514AD  8B D0                     MOV EDX,EAX
LAB_004514af:
004514AF  39 8B E0 02 00 00         CMP dword ptr [EBX + 0x2e0],ECX
004514B5  75 0C                     JNZ 0x004514c3
004514B7  8B 83 47 03 00 00         MOV EAX,dword ptr [EBX + 0x347]
004514BD  3B C2                     CMP EAX,EDX
004514BF  76 02                     JBE 0x004514c3
004514C1  8B D0                     MOV EDX,EAX
LAB_004514c3:
004514C3  39 8B F8 02 00 00         CMP dword ptr [EBX + 0x2f8],ECX
004514C9  75 0C                     JNZ 0x004514d7
004514CB  8B 83 4F 03 00 00         MOV EAX,dword ptr [EBX + 0x34f]
004514D1  3B C2                     CMP EAX,EDX
004514D3  76 02                     JBE 0x004514d7
004514D5  8B D0                     MOV EDX,EAX
LAB_004514d7:
004514D7  39 8B 0C 03 00 00         CMP dword ptr [EBX + 0x30c],ECX
004514DD  75 0C                     JNZ 0x004514eb
004514DF  8B 83 6F 03 00 00         MOV EAX,dword ptr [EBX + 0x36f]
004514E5  3B C2                     CMP EAX,EDX
004514E7  76 02                     JBE 0x004514eb
004514E9  8B D0                     MOV EDX,EAX
LAB_004514eb:
004514EB  39 8B FC 02 00 00         CMP dword ptr [EBX + 0x2fc],ECX
004514F1  75 0C                     JNZ 0x004514ff
004514F3  8B 83 92 03 00 00         MOV EAX,dword ptr [EBX + 0x392]
004514F9  3B C2                     CMP EAX,EDX
004514FB  76 02                     JBE 0x004514ff
004514FD  8B D0                     MOV EDX,EAX
LAB_004514ff:
004514FF  39 8B D8 02 00 00         CMP dword ptr [EBX + 0x2d8],ECX
00451505  75 0C                     JNZ 0x00451513
00451507  8B 83 9C 03 00 00         MOV EAX,dword ptr [EBX + 0x39c]
0045150D  3B C2                     CMP EAX,EDX
0045150F  76 02                     JBE 0x00451513
00451511  8B D0                     MOV EDX,EAX
LAB_00451513:
00451513  39 8B DC 02 00 00         CMP dword ptr [EBX + 0x2dc],ECX
00451519  75 0C                     JNZ 0x00451527
0045151B  8B 83 A6 03 00 00         MOV EAX,dword ptr [EBX + 0x3a6]
00451521  3B C2                     CMP EAX,EDX
00451523  76 02                     JBE 0x00451527
00451525  8B D0                     MOV EDX,EAX
LAB_00451527:
00451527  39 8B 04 03 00 00         CMP dword ptr [EBX + 0x304],ECX
0045152D  75 0C                     JNZ 0x0045153b
0045152F  8B 83 B6 03 00 00         MOV EAX,dword ptr [EBX + 0x3b6]
00451535  3B C2                     CMP EAX,EDX
00451537  76 02                     JBE 0x0045153b
00451539  8B D0                     MOV EDX,EAX
LAB_0045153b:
0045153B  39 8B 14 03 00 00         CMP dword ptr [EBX + 0x314],ECX
00451541  75 0C                     JNZ 0x0045154f
00451543  8B 83 C4 03 00 00         MOV EAX,dword ptr [EBX + 0x3c4]
00451549  3B C2                     CMP EAX,EDX
0045154B  76 02                     JBE 0x0045154f
0045154D  8B D0                     MOV EDX,EAX
LAB_0045154f:
0045154F  39 8B 08 03 00 00         CMP dword ptr [EBX + 0x308],ECX
00451555  75 0C                     JNZ 0x00451563
00451557  8B 83 CA 03 00 00         MOV EAX,dword ptr [EBX + 0x3ca]
0045155D  3B C2                     CMP EAX,EDX
0045155F  76 02                     JBE 0x00451563
00451561  8B D0                     MOV EDX,EAX
LAB_00451563:
00451563  39 8B E4 02 00 00         CMP dword ptr [EBX + 0x2e4],ECX
00451569  75 0C                     JNZ 0x00451577
0045156B  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
00451571  3B C2                     CMP EAX,EDX
00451573  76 02                     JBE 0x00451577
00451575  8B D0                     MOV EDX,EAX
LAB_00451577:
00451577  39 8B F0 02 00 00         CMP dword ptr [EBX + 0x2f0],ECX
0045157D  75 0C                     JNZ 0x0045158b
0045157F  8B 83 DE 03 00 00         MOV EAX,dword ptr [EBX + 0x3de]
00451585  3B C2                     CMP EAX,EDX
00451587  76 02                     JBE 0x0045158b
00451589  8B D0                     MOV EDX,EAX
LAB_0045158b:
0045158B  39 8B EC 02 00 00         CMP dword ptr [EBX + 0x2ec],ECX
00451591  75 0C                     JNZ 0x0045159f
00451593  8B 83 E8 03 00 00         MOV EAX,dword ptr [EBX + 0x3e8]
00451599  3B C2                     CMP EAX,EDX
0045159B  76 02                     JBE 0x0045159f
0045159D  8B D0                     MOV EDX,EAX
LAB_0045159f:
0045159F  39 8B 1C 03 00 00         CMP dword ptr [EBX + 0x31c],ECX
004515A5  75 0C                     JNZ 0x004515b3
004515A7  8B 83 F3 03 00 00         MOV EAX,dword ptr [EBX + 0x3f3]
004515AD  3B C2                     CMP EAX,EDX
004515AF  76 02                     JBE 0x004515b3
004515B1  8B D0                     MOV EDX,EAX
LAB_004515b3:
004515B3  39 8B 18 03 00 00         CMP dword ptr [EBX + 0x318],ECX
004515B9  75 0C                     JNZ 0x004515c7
004515BB  8B 83 01 04 00 00         MOV EAX,dword ptr [EBX + 0x401]
004515C1  3B C2                     CMP EAX,EDX
004515C3  76 02                     JBE 0x004515c7
004515C5  8B D0                     MOV EDX,EAX
LAB_004515c7:
004515C7  39 8B 20 03 00 00         CMP dword ptr [EBX + 0x320],ECX
004515CD  75 0C                     JNZ 0x004515db
004515CF  8B 83 15 04 00 00         MOV EAX,dword ptr [EBX + 0x415]
004515D5  3B C2                     CMP EAX,EDX
004515D7  76 02                     JBE 0x004515db
004515D9  8B D0                     MOV EDX,EAX
LAB_004515db:
004515DB  39 8B F4 02 00 00         CMP dword ptr [EBX + 0x2f4],ECX
004515E1  75 0C                     JNZ 0x004515ef
004515E3  8B 83 1F 04 00 00         MOV EAX,dword ptr [EBX + 0x41f]
004515E9  3B C2                     CMP EAX,EDX
004515EB  76 02                     JBE 0x004515ef
004515ED  8B D0                     MOV EDX,EAX
LAB_004515ef:
004515EF  39 8B 10 03 00 00         CMP dword ptr [EBX + 0x310],ECX
004515F5  75 0C                     JNZ 0x00451603
004515F7  8B 83 29 04 00 00         MOV EAX,dword ptr [EBX + 0x429]
004515FD  3B C2                     CMP EAX,EDX
004515FF  76 02                     JBE 0x00451603
00451601  8B D0                     MOV EDX,EAX
LAB_00451603:
00451603  39 8B E8 02 00 00         CMP dword ptr [EBX + 0x2e8],ECX
00451609  75 0C                     JNZ 0x00451617
0045160B  8B 83 37 04 00 00         MOV EAX,dword ptr [EBX + 0x437]
00451611  3B C2                     CMP EAX,EDX
00451613  76 02                     JBE 0x00451617
00451615  8B D0                     MOV EDX,EAX
LAB_00451617:
00451617  39 8B 00 03 00 00         CMP dword ptr [EBX + 0x300],ECX
0045161D  75 0C                     JNZ 0x0045162b
0045161F  8B 83 47 04 00 00         MOV EAX,dword ptr [EBX + 0x447]
00451625  3B C2                     CMP EAX,EDX
00451627  76 02                     JBE 0x0045162b
00451629  8B D0                     MOV EDX,EAX
LAB_0045162b:
0045162B  3B F9                     CMP EDI,ECX
0045162D  75 0E                     JNZ 0x0045163d
0045162F  39 93 28 03 00 00         CMP dword ptr [EBX + 0x328],EDX
00451635  73 06                     JNC 0x0045163d
00451637  89 B3 CC 02 00 00         MOV dword ptr [EBX + 0x2cc],ESI
LAB_0045163d:
0045163D  39 8B D0 02 00 00         CMP dword ptr [EBX + 0x2d0],ECX
00451643  75 0E                     JNZ 0x00451653
00451645  39 93 32 03 00 00         CMP dword ptr [EBX + 0x332],EDX
0045164B  73 06                     JNC 0x00451653
0045164D  89 B3 D0 02 00 00         MOV dword ptr [EBX + 0x2d0],ESI
LAB_00451653:
00451653  39 8B D4 02 00 00         CMP dword ptr [EBX + 0x2d4],ECX
00451659  75 0E                     JNZ 0x00451669
0045165B  39 93 43 03 00 00         CMP dword ptr [EBX + 0x343],EDX
00451661  73 06                     JNC 0x00451669
00451663  89 B3 D4 02 00 00         MOV dword ptr [EBX + 0x2d4],ESI
LAB_00451669:
00451669  39 8B E0 02 00 00         CMP dword ptr [EBX + 0x2e0],ECX
0045166F  75 0E                     JNZ 0x0045167f
00451671  39 93 47 03 00 00         CMP dword ptr [EBX + 0x347],EDX
00451677  73 06                     JNC 0x0045167f
00451679  89 B3 E0 02 00 00         MOV dword ptr [EBX + 0x2e0],ESI
LAB_0045167f:
0045167F  39 8B F8 02 00 00         CMP dword ptr [EBX + 0x2f8],ECX
00451685  75 0E                     JNZ 0x00451695
00451687  39 93 4F 03 00 00         CMP dword ptr [EBX + 0x34f],EDX
0045168D  73 06                     JNC 0x00451695
0045168F  89 B3 F8 02 00 00         MOV dword ptr [EBX + 0x2f8],ESI
LAB_00451695:
00451695  39 8B 0C 03 00 00         CMP dword ptr [EBX + 0x30c],ECX
0045169B  75 0E                     JNZ 0x004516ab
0045169D  39 93 6F 03 00 00         CMP dword ptr [EBX + 0x36f],EDX
004516A3  73 06                     JNC 0x004516ab
004516A5  89 B3 0C 03 00 00         MOV dword ptr [EBX + 0x30c],ESI
LAB_004516ab:
004516AB  39 8B FC 02 00 00         CMP dword ptr [EBX + 0x2fc],ECX
004516B1  75 0E                     JNZ 0x004516c1
004516B3  39 93 92 03 00 00         CMP dword ptr [EBX + 0x392],EDX
004516B9  73 06                     JNC 0x004516c1
004516BB  89 B3 FC 02 00 00         MOV dword ptr [EBX + 0x2fc],ESI
LAB_004516c1:
004516C1  39 8B D8 02 00 00         CMP dword ptr [EBX + 0x2d8],ECX
004516C7  75 0E                     JNZ 0x004516d7
004516C9  39 93 9C 03 00 00         CMP dword ptr [EBX + 0x39c],EDX
004516CF  73 06                     JNC 0x004516d7
004516D1  89 B3 D8 02 00 00         MOV dword ptr [EBX + 0x2d8],ESI
LAB_004516d7:
004516D7  39 8B DC 02 00 00         CMP dword ptr [EBX + 0x2dc],ECX
004516DD  75 0E                     JNZ 0x004516ed
004516DF  39 93 A6 03 00 00         CMP dword ptr [EBX + 0x3a6],EDX
004516E5  73 06                     JNC 0x004516ed
004516E7  89 B3 DC 02 00 00         MOV dword ptr [EBX + 0x2dc],ESI
LAB_004516ed:
004516ED  39 8B 04 03 00 00         CMP dword ptr [EBX + 0x304],ECX
004516F3  75 0E                     JNZ 0x00451703
004516F5  39 93 B6 03 00 00         CMP dword ptr [EBX + 0x3b6],EDX
004516FB  73 06                     JNC 0x00451703
004516FD  89 B3 04 03 00 00         MOV dword ptr [EBX + 0x304],ESI
LAB_00451703:
00451703  39 8B 14 03 00 00         CMP dword ptr [EBX + 0x314],ECX
00451709  75 0E                     JNZ 0x00451719
0045170B  39 93 C4 03 00 00         CMP dword ptr [EBX + 0x3c4],EDX
00451711  73 06                     JNC 0x00451719
00451713  89 B3 14 03 00 00         MOV dword ptr [EBX + 0x314],ESI
LAB_00451719:
00451719  39 8B 08 03 00 00         CMP dword ptr [EBX + 0x308],ECX
0045171F  75 0E                     JNZ 0x0045172f
00451721  39 93 CA 03 00 00         CMP dword ptr [EBX + 0x3ca],EDX
00451727  73 06                     JNC 0x0045172f
00451729  89 B3 08 03 00 00         MOV dword ptr [EBX + 0x308],ESI
LAB_0045172f:
0045172F  39 8B E4 02 00 00         CMP dword ptr [EBX + 0x2e4],ECX
00451735  75 0E                     JNZ 0x00451745
00451737  39 93 D4 03 00 00         CMP dword ptr [EBX + 0x3d4],EDX
0045173D  73 06                     JNC 0x00451745
0045173F  89 B3 E4 02 00 00         MOV dword ptr [EBX + 0x2e4],ESI
LAB_00451745:
00451745  39 8B F0 02 00 00         CMP dword ptr [EBX + 0x2f0],ECX
0045174B  75 0E                     JNZ 0x0045175b
0045174D  39 93 DE 03 00 00         CMP dword ptr [EBX + 0x3de],EDX
00451753  73 06                     JNC 0x0045175b
00451755  89 B3 F0 02 00 00         MOV dword ptr [EBX + 0x2f0],ESI
LAB_0045175b:
0045175B  39 8B EC 02 00 00         CMP dword ptr [EBX + 0x2ec],ECX
00451761  75 0E                     JNZ 0x00451771
00451763  39 93 E8 03 00 00         CMP dword ptr [EBX + 0x3e8],EDX
00451769  73 06                     JNC 0x00451771
0045176B  89 B3 EC 02 00 00         MOV dword ptr [EBX + 0x2ec],ESI
LAB_00451771:
00451771  39 8B 1C 03 00 00         CMP dword ptr [EBX + 0x31c],ECX
00451777  75 0E                     JNZ 0x00451787
00451779  39 93 F3 03 00 00         CMP dword ptr [EBX + 0x3f3],EDX
0045177F  73 06                     JNC 0x00451787
00451781  89 B3 1C 03 00 00         MOV dword ptr [EBX + 0x31c],ESI
LAB_00451787:
00451787  39 8B 18 03 00 00         CMP dword ptr [EBX + 0x318],ECX
0045178D  75 0E                     JNZ 0x0045179d
0045178F  39 93 01 04 00 00         CMP dword ptr [EBX + 0x401],EDX
00451795  73 06                     JNC 0x0045179d
00451797  89 B3 18 03 00 00         MOV dword ptr [EBX + 0x318],ESI
LAB_0045179d:
0045179D  39 8B 20 03 00 00         CMP dword ptr [EBX + 0x320],ECX
004517A3  75 0E                     JNZ 0x004517b3
004517A5  39 93 15 04 00 00         CMP dword ptr [EBX + 0x415],EDX
004517AB  73 06                     JNC 0x004517b3
004517AD  89 B3 20 03 00 00         MOV dword ptr [EBX + 0x320],ESI
LAB_004517b3:
004517B3  39 8B F4 02 00 00         CMP dword ptr [EBX + 0x2f4],ECX
004517B9  75 0E                     JNZ 0x004517c9
004517BB  39 93 1F 04 00 00         CMP dword ptr [EBX + 0x41f],EDX
004517C1  73 06                     JNC 0x004517c9
004517C3  89 B3 F4 02 00 00         MOV dword ptr [EBX + 0x2f4],ESI
LAB_004517c9:
004517C9  39 8B 10 03 00 00         CMP dword ptr [EBX + 0x310],ECX
004517CF  75 0E                     JNZ 0x004517df
004517D1  39 93 29 04 00 00         CMP dword ptr [EBX + 0x429],EDX
004517D7  73 06                     JNC 0x004517df
004517D9  89 B3 10 03 00 00         MOV dword ptr [EBX + 0x310],ESI
LAB_004517df:
004517DF  39 8B E8 02 00 00         CMP dword ptr [EBX + 0x2e8],ECX
004517E5  75 0E                     JNZ 0x004517f5
004517E7  39 93 37 04 00 00         CMP dword ptr [EBX + 0x437],EDX
004517ED  73 06                     JNC 0x004517f5
004517EF  89 B3 E8 02 00 00         MOV dword ptr [EBX + 0x2e8],ESI
LAB_004517f5:
004517F5  39 8B 00 03 00 00         CMP dword ptr [EBX + 0x300],ECX
004517FB  75 0E                     JNZ 0x0045180b
004517FD  39 93 47 04 00 00         CMP dword ptr [EBX + 0x447],EDX
00451803  73 06                     JNC 0x0045180b
00451805  89 B3 00 03 00 00         MOV dword ptr [EBX + 0x300],ESI
LAB_0045180b:
0045180B  39 8B D0 02 00 00         CMP dword ptr [EBX + 0x2d0],ECX
00451811  0F 85 92 05 00 00         JNZ 0x00451da9
00451817  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
0045181D  3B C6                     CMP EAX,ESI
0045181F  75 73                     JNZ 0x00451894
00451821  56                        PUSH ESI
00451822  8B CB                     MOV ECX,EBX
00451824  C7 83 5D 04 00 00 02 00 00 00  MOV dword ptr [EBX + 0x45d],0x2
0045182E  E8 1F 37 FB FF            CALL 0x00404f52
00451833  8B F8                     MOV EDI,EAX
00451835  83 FF FF                  CMP EDI,-0x1
00451838  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045183B  75 1B                     JNZ 0x00451858
0045183D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451843  68 32 05 00 00            PUSH 0x532
00451848  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045184D  51                        PUSH ECX
0045184E  68 FF FF 00 00            PUSH 0xffff
00451853  E8 E8 45 25 00            CALL 0x006a5e40
LAB_00451858:
00451858  3B FE                     CMP EDI,ESI
0045185A  0F 85 8D 96 00 00         JNZ 0x0045aeed
00451860  56                        PUSH ESI
00451861  8B CB                     MOV ECX,EBX
00451863  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045186D  E8 B9 21 FB FF            CALL 0x00403a2b
00451872  83 F8 FF                  CMP EAX,-0x1
00451875  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00451878  0F 85 6F 96 00 00         JNZ 0x0045aeed
0045187E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451884  68 36 05 00 00            PUSH 0x536
00451889  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045188E  52                        PUSH EDX
0045188F  E9 4F 96 00 00            JMP 0x0045aee3
LAB_00451894:
00451894  48                        DEC EAX
00451895  83 F8 16                  CMP EAX,0x16
00451898  0F 87 4F 96 00 00         JA 0x0045aeed
switchD_0045189e::switchD:
0045189E  FF 24 85 64 B2 45 00      JMP dword ptr [EAX*0x4 + 0x45b264]
switchD_0045189e::caseD_1:
004518A5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004518AB  56                        PUSH ESI
004518AC  8B CB                     MOV ECX,EBX
004518AE  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
004518B8  E8 33 25 FB FF            CALL 0x00403df0
004518BD  8B F8                     MOV EDI,EAX
004518BF  83 FF FF                  CMP EDI,-0x1
004518C2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004518C5  0F 85 90 73 00 00         JNZ 0x00458c5b
004518CB  68 3E 05 00 00            PUSH 0x53e
004518D0  E9 71 73 00 00            JMP 0x00458c46
switchD_0045189e::caseD_3:
004518D5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004518DB  56                        PUSH ESI
004518DC  8B CB                     MOV ECX,EBX
004518DE  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
004518E8  E8 4D 30 FB FF            CALL 0x0040493a
004518ED  8B F8                     MOV EDI,EAX
004518EF  83 FF FF                  CMP EDI,-0x1
004518F2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004518F5  0F 85 60 73 00 00         JNZ 0x00458c5b
004518FB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451901  68 44 05 00 00            PUSH 0x544
00451906  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045190B  51                        PUSH ECX
0045190C  E9 40 73 00 00            JMP 0x00458c51
switchD_0045189e::caseD_2:
00451911  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451917  56                        PUSH ESI
00451918  8B CB                     MOV ECX,EBX
0045191A  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00451924  E8 2A 1C FB FF            CALL 0x00403553
00451929  8B F8                     MOV EDI,EAX
0045192B  83 FF FF                  CMP EDI,-0x1
0045192E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451931  0F 85 24 73 00 00         JNZ 0x00458c5b
00451937  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045193D  68 49 05 00 00            PUSH 0x549
00451942  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451947  52                        PUSH EDX
00451948  E9 04 73 00 00            JMP 0x00458c51
switchD_0045189e::caseD_6:
0045194D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451953  56                        PUSH ESI
00451954  8B CB                     MOV ECX,EBX
00451956  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00451960  E8 8E 0D FB FF            CALL 0x004026f3
00451965  8B F8                     MOV EDI,EAX
00451967  83 FF FF                  CMP EDI,-0x1
0045196A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045196D  0F 85 E8 72 00 00         JNZ 0x00458c5b
00451973  68 4E 05 00 00            PUSH 0x54e
00451978  E9 C9 72 00 00            JMP 0x00458c46
switchD_0045189e::caseD_c:
0045197D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451983  56                        PUSH ESI
00451984  8B CB                     MOV ECX,EBX
00451986  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00451990  E8 47 1A FB FF            CALL 0x004033dc
00451995  8B F8                     MOV EDI,EAX
00451997  83 FF FF                  CMP EDI,-0x1
0045199A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045199D  0F 85 B8 72 00 00         JNZ 0x00458c5b
004519A3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004519A9  68 53 05 00 00            PUSH 0x553
004519AE  68 3C 9D 7A 00            PUSH 0x7a9d3c
004519B3  51                        PUSH ECX
004519B4  E9 98 72 00 00            JMP 0x00458c51
switchD_0045189e::caseD_11:
004519B9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004519BF  56                        PUSH ESI
004519C0  8B CB                     MOV ECX,EBX
004519C2  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
004519CC  E8 42 F7 FA FF            CALL 0x00401113
004519D1  8B F8                     MOV EDI,EAX
004519D3  83 FF FF                  CMP EDI,-0x1
004519D6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004519D9  0F 85 7C 72 00 00         JNZ 0x00458c5b
004519DF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004519E5  68 58 05 00 00            PUSH 0x558
004519EA  68 3C 9D 7A 00            PUSH 0x7a9d3c
004519EF  52                        PUSH EDX
004519F0  E9 5C 72 00 00            JMP 0x00458c51
switchD_0045189e::caseD_13:
004519F5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004519FB  56                        PUSH ESI
004519FC  8B CB                     MOV ECX,EBX
004519FE  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00451A08  E8 06 38 FB FF            CALL 0x00405213
00451A0D  8B F8                     MOV EDI,EAX
00451A0F  83 FF FF                  CMP EDI,-0x1
00451A12  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451A15  0F 85 40 72 00 00         JNZ 0x00458c5b
00451A1B  68 5D 05 00 00            PUSH 0x55d
00451A20  E9 21 72 00 00            JMP 0x00458c46
switchD_0045189e::caseD_d:
00451A25  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451A2B  56                        PUSH ESI
00451A2C  8B CB                     MOV ECX,EBX
00451A2E  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00451A38  E8 0D 1A FB FF            CALL 0x0040344a
00451A3D  8B F8                     MOV EDI,EAX
00451A3F  83 FF FF                  CMP EDI,-0x1
00451A42  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451A45  0F 85 10 72 00 00         JNZ 0x00458c5b
00451A4B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451A51  68 62 05 00 00            PUSH 0x562
00451A56  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451A5B  51                        PUSH ECX
00451A5C  E9 F0 71 00 00            JMP 0x00458c51
switchD_0045189e::caseD_4:
00451A61  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451A67  56                        PUSH ESI
00451A68  8B CB                     MOV ECX,EBX
00451A6A  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00451A74  E8 43 3E FB FF            CALL 0x004058bc
00451A79  8B F8                     MOV EDI,EAX
00451A7B  83 FF FF                  CMP EDI,-0x1
00451A7E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451A81  0F 85 D4 71 00 00         JNZ 0x00458c5b
00451A87  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451A8D  68 67 05 00 00            PUSH 0x567
00451A92  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451A97  52                        PUSH EDX
00451A98  E9 B4 71 00 00            JMP 0x00458c51
switchD_0045189e::caseD_5:
00451A9D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451AA3  56                        PUSH ESI
00451AA4  8B CB                     MOV ECX,EBX
00451AA6  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00451AB0  E8 52 2A FB FF            CALL 0x00404507
00451AB5  8B F8                     MOV EDI,EAX
00451AB7  83 FF FF                  CMP EDI,-0x1
00451ABA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451ABD  0F 85 98 71 00 00         JNZ 0x00458c5b
00451AC3  68 6C 05 00 00            PUSH 0x56c
00451AC8  E9 79 71 00 00            JMP 0x00458c46
switchD_0045189e::caseD_f:
00451ACD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451AD3  56                        PUSH ESI
00451AD4  8B CB                     MOV ECX,EBX
00451AD6  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00451AE0  E8 A0 24 FB FF            CALL 0x00403f85
00451AE5  8B F8                     MOV EDI,EAX
00451AE7  83 FF FF                  CMP EDI,-0x1
00451AEA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451AED  0F 85 68 71 00 00         JNZ 0x00458c5b
00451AF3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451AF9  68 71 05 00 00            PUSH 0x571
00451AFE  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451B03  51                        PUSH ECX
00451B04  E9 48 71 00 00            JMP 0x00458c51
switchD_0045189e::caseD_14:
00451B09  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451B0F  56                        PUSH ESI
00451B10  8B CB                     MOV ECX,EBX
00451B12  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00451B1C  E8 37 0B FB FF            CALL 0x00402658
00451B21  8B F8                     MOV EDI,EAX
00451B23  83 FF FF                  CMP EDI,-0x1
00451B26  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451B29  0F 85 2C 71 00 00         JNZ 0x00458c5b
00451B2F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451B35  68 76 05 00 00            PUSH 0x576
00451B3A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451B3F  52                        PUSH EDX
00451B40  E9 0C 71 00 00            JMP 0x00458c51
switchD_0045189e::caseD_10:
00451B45  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451B4B  56                        PUSH ESI
00451B4C  8B CB                     MOV ECX,EBX
00451B4E  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00451B58  E8 3D 1E FB FF            CALL 0x0040399a
00451B5D  8B F8                     MOV EDI,EAX
00451B5F  83 FF FF                  CMP EDI,-0x1
00451B62  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451B65  0F 85 F0 70 00 00         JNZ 0x00458c5b
00451B6B  68 7B 05 00 00            PUSH 0x57b
00451B70  E9 D1 70 00 00            JMP 0x00458c46
switchD_0045189e::caseD_7:
00451B75  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451B7B  56                        PUSH ESI
00451B7C  8B CB                     MOV ECX,EBX
00451B7E  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00451B88  E8 0F 1C FB FF            CALL 0x0040379c
00451B8D  8B F8                     MOV EDI,EAX
00451B8F  83 FF FF                  CMP EDI,-0x1
00451B92  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451B95  0F 85 C0 70 00 00         JNZ 0x00458c5b
00451B9B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451BA1  68 80 05 00 00            PUSH 0x580
00451BA6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451BAB  51                        PUSH ECX
00451BAC  E9 A0 70 00 00            JMP 0x00458c51
switchD_0045189e::caseD_a:
00451BB1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451BB7  56                        PUSH ESI
00451BB8  8B CB                     MOV ECX,EBX
00451BBA  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00451BC4  E8 D5 3C FB FF            CALL 0x0040589e
00451BC9  8B F8                     MOV EDI,EAX
00451BCB  83 FF FF                  CMP EDI,-0x1
00451BCE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451BD1  0F 85 84 70 00 00         JNZ 0x00458c5b
00451BD7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451BDD  68 85 05 00 00            PUSH 0x585
00451BE2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451BE7  52                        PUSH EDX
00451BE8  E9 64 70 00 00            JMP 0x00458c51
switchD_0045189e::caseD_9:
00451BED  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451BF3  56                        PUSH ESI
00451BF4  8B CB                     MOV ECX,EBX
00451BF6  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00451C00  E8 53 0F FB FF            CALL 0x00402b58
00451C05  8B F8                     MOV EDI,EAX
00451C07  83 FF FF                  CMP EDI,-0x1
00451C0A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451C0D  0F 85 48 70 00 00         JNZ 0x00458c5b
00451C13  68 8A 05 00 00            PUSH 0x58a
00451C18  E9 29 70 00 00            JMP 0x00458c46
switchD_0045189e::caseD_16:
00451C1D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451C23  56                        PUSH ESI
00451C24  8B CB                     MOV ECX,EBX
00451C26  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00451C30  E8 52 2B FB FF            CALL 0x00404787
00451C35  8B F8                     MOV EDI,EAX
00451C37  83 FF FF                  CMP EDI,-0x1
00451C3A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451C3D  0F 85 18 70 00 00         JNZ 0x00458c5b
00451C43  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451C49  68 8F 05 00 00            PUSH 0x58f
00451C4E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451C53  51                        PUSH ECX
00451C54  E9 F8 6F 00 00            JMP 0x00458c51
switchD_0045189e::caseD_15:
00451C59  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451C5F  56                        PUSH ESI
00451C60  8B CB                     MOV ECX,EBX
00451C62  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00451C6C  E8 BC 3E FB FF            CALL 0x00405b2d
00451C71  8B F8                     MOV EDI,EAX
00451C73  83 FF FF                  CMP EDI,-0x1
00451C76  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451C79  0F 85 DC 6F 00 00         JNZ 0x00458c5b
00451C7F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451C85  68 94 05 00 00            PUSH 0x594
00451C8A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451C8F  52                        PUSH EDX
00451C90  E9 BC 6F 00 00            JMP 0x00458c51
switchD_0045189e::caseD_17:
00451C95  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451C9B  56                        PUSH ESI
00451C9C  8B CB                     MOV ECX,EBX
00451C9E  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00451CA8  E8 8B FC FA FF            CALL 0x00401938
00451CAD  8B F8                     MOV EDI,EAX
00451CAF  83 FF FF                  CMP EDI,-0x1
00451CB2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451CB5  0F 85 A0 6F 00 00         JNZ 0x00458c5b
00451CBB  68 99 05 00 00            PUSH 0x599
00451CC0  E9 81 6F 00 00            JMP 0x00458c46
switchD_0045189e::caseD_b:
00451CC5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451CCB  56                        PUSH ESI
00451CCC  8B CB                     MOV ECX,EBX
00451CCE  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00451CD8  E8 69 39 FB FF            CALL 0x00405646
00451CDD  8B F8                     MOV EDI,EAX
00451CDF  83 FF FF                  CMP EDI,-0x1
00451CE2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451CE5  0F 85 70 6F 00 00         JNZ 0x00458c5b
00451CEB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451CF1  68 9E 05 00 00            PUSH 0x59e
00451CF6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451CFB  51                        PUSH ECX
00451CFC  E9 50 6F 00 00            JMP 0x00458c51
switchD_0045189e::caseD_12:
00451D01  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451D07  56                        PUSH ESI
00451D08  8B CB                     MOV ECX,EBX
00451D0A  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00451D14  E8 CB 18 FB FF            CALL 0x004035e4
00451D19  8B F8                     MOV EDI,EAX
00451D1B  83 FF FF                  CMP EDI,-0x1
00451D1E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451D21  0F 85 34 6F 00 00         JNZ 0x00458c5b
00451D27  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451D2D  68 A3 05 00 00            PUSH 0x5a3
00451D32  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451D37  52                        PUSH EDX
00451D38  E9 14 6F 00 00            JMP 0x00458c51
switchD_0045189e::caseD_8:
00451D3D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451D43  56                        PUSH ESI
00451D44  8B CB                     MOV ECX,EBX
00451D46  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00451D50  E8 38 06 FB FF            CALL 0x0040238d
00451D55  8B F8                     MOV EDI,EAX
00451D57  83 FF FF                  CMP EDI,-0x1
00451D5A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451D5D  0F 85 F8 6E 00 00         JNZ 0x00458c5b
00451D63  68 A8 05 00 00            PUSH 0x5a8
00451D68  E9 D9 6E 00 00            JMP 0x00458c46
switchD_0045189e::caseD_e:
00451D6D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451D73  56                        PUSH ESI
00451D74  8B CB                     MOV ECX,EBX
00451D76  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00451D80  E8 B4 31 FB FF            CALL 0x00404f39
00451D85  8B F8                     MOV EDI,EAX
00451D87  83 FF FF                  CMP EDI,-0x1
00451D8A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451D8D  0F 85 C8 6E 00 00         JNZ 0x00458c5b
00451D93  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451D99  68 AD 05 00 00            PUSH 0x5ad
00451D9E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451DA3  51                        PUSH ECX
00451DA4  E9 A8 6E 00 00            JMP 0x00458c51
LAB_00451da9:
00451DA9  39 8B F8 02 00 00         CMP dword ptr [EBX + 0x2f8],ECX
00451DAF  0F 85 53 05 00 00         JNZ 0x00452308
00451DB5  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00451DBB  3B C6                     CMP EAX,ESI
00451DBD  75 34                     JNZ 0x00451df3
00451DBF  56                        PUSH ESI
00451DC0  8B CB                     MOV ECX,EBX
00451DC2  C7 83 5D 04 00 00 0C 00 00 00  MOV dword ptr [EBX + 0x45d],0xc
00451DCC  E8 63 36 FB FF            CALL 0x00405434
00451DD1  83 F8 FF                  CMP EAX,-0x1
00451DD4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00451DD7  0F 85 10 91 00 00         JNZ 0x0045aeed
00451DDD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451DE3  68 B9 05 00 00            PUSH 0x5b9
00451DE8  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451DED  52                        PUSH EDX
00451DEE  E9 F0 90 00 00            JMP 0x0045aee3
LAB_00451df3:
00451DF3  48                        DEC EAX
00451DF4  83 F8 16                  CMP EAX,0x16
00451DF7  0F 87 F0 90 00 00         JA 0x0045aeed
switchD_00451dfd::switchD:
00451DFD  FF 24 85 C0 B2 45 00      JMP dword ptr [EAX*0x4 + 0x45b2c0]
switchD_00451dfd::caseD_1:
00451E04  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451E0A  56                        PUSH ESI
00451E0B  8B CB                     MOV ECX,EBX
00451E0D  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00451E17  E8 D4 1F FB FF            CALL 0x00403df0
00451E1C  8B F8                     MOV EDI,EAX
00451E1E  83 FF FF                  CMP EDI,-0x1
00451E21  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451E24  0F 85 31 6E 00 00         JNZ 0x00458c5b
00451E2A  68 C0 05 00 00            PUSH 0x5c0
00451E2F  E9 12 6E 00 00            JMP 0x00458c46
switchD_00451dfd::caseD_3:
00451E34  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451E3A  56                        PUSH ESI
00451E3B  8B CB                     MOV ECX,EBX
00451E3D  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00451E47  E8 EE 2A FB FF            CALL 0x0040493a
00451E4C  8B F8                     MOV EDI,EAX
00451E4E  83 FF FF                  CMP EDI,-0x1
00451E51  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451E54  0F 85 01 6E 00 00         JNZ 0x00458c5b
00451E5A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451E60  68 C6 05 00 00            PUSH 0x5c6
00451E65  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451E6A  51                        PUSH ECX
00451E6B  E9 E1 6D 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_2:
00451E70  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451E76  56                        PUSH ESI
00451E77  8B CB                     MOV ECX,EBX
00451E79  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00451E83  E8 CB 16 FB FF            CALL 0x00403553
00451E88  8B F8                     MOV EDI,EAX
00451E8A  83 FF FF                  CMP EDI,-0x1
00451E8D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451E90  0F 85 C5 6D 00 00         JNZ 0x00458c5b
00451E96  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451E9C  68 CB 05 00 00            PUSH 0x5cb
00451EA1  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451EA6  52                        PUSH EDX
00451EA7  E9 A5 6D 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_6:
00451EAC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451EB2  56                        PUSH ESI
00451EB3  8B CB                     MOV ECX,EBX
00451EB5  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00451EBF  E8 2F 08 FB FF            CALL 0x004026f3
00451EC4  8B F8                     MOV EDI,EAX
00451EC6  83 FF FF                  CMP EDI,-0x1
00451EC9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451ECC  0F 85 89 6D 00 00         JNZ 0x00458c5b
00451ED2  68 D0 05 00 00            PUSH 0x5d0
00451ED7  E9 6A 6D 00 00            JMP 0x00458c46
switchD_00451dfd::caseD_c:
00451EDC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451EE2  56                        PUSH ESI
00451EE3  8B CB                     MOV ECX,EBX
00451EE5  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00451EEF  E8 E8 14 FB FF            CALL 0x004033dc
00451EF4  8B F8                     MOV EDI,EAX
00451EF6  83 FF FF                  CMP EDI,-0x1
00451EF9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451EFC  0F 85 59 6D 00 00         JNZ 0x00458c5b
00451F02  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451F08  68 D5 05 00 00            PUSH 0x5d5
00451F0D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451F12  51                        PUSH ECX
00451F13  E9 39 6D 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_11:
00451F18  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451F1E  56                        PUSH ESI
00451F1F  8B CB                     MOV ECX,EBX
00451F21  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00451F2B  E8 E3 F1 FA FF            CALL 0x00401113
00451F30  8B F8                     MOV EDI,EAX
00451F32  83 FF FF                  CMP EDI,-0x1
00451F35  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451F38  0F 85 1D 6D 00 00         JNZ 0x00458c5b
00451F3E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451F44  68 DA 05 00 00            PUSH 0x5da
00451F49  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451F4E  52                        PUSH EDX
00451F4F  E9 FD 6C 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_13:
00451F54  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451F5A  56                        PUSH ESI
00451F5B  8B CB                     MOV ECX,EBX
00451F5D  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00451F67  E8 A7 32 FB FF            CALL 0x00405213
00451F6C  8B F8                     MOV EDI,EAX
00451F6E  83 FF FF                  CMP EDI,-0x1
00451F71  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451F74  0F 85 E1 6C 00 00         JNZ 0x00458c5b
00451F7A  68 DF 05 00 00            PUSH 0x5df
00451F7F  E9 C2 6C 00 00            JMP 0x00458c46
switchD_00451dfd::caseD_d:
00451F84  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451F8A  56                        PUSH ESI
00451F8B  8B CB                     MOV ECX,EBX
00451F8D  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00451F97  E8 AE 14 FB FF            CALL 0x0040344a
00451F9C  8B F8                     MOV EDI,EAX
00451F9E  83 FF FF                  CMP EDI,-0x1
00451FA1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451FA4  0F 85 B1 6C 00 00         JNZ 0x00458c5b
00451FAA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00451FB0  68 E4 05 00 00            PUSH 0x5e4
00451FB5  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451FBA  51                        PUSH ECX
00451FBB  E9 91 6C 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_4:
00451FC0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00451FC6  56                        PUSH ESI
00451FC7  8B CB                     MOV ECX,EBX
00451FC9  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00451FD3  E8 E4 38 FB FF            CALL 0x004058bc
00451FD8  8B F8                     MOV EDI,EAX
00451FDA  83 FF FF                  CMP EDI,-0x1
00451FDD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00451FE0  0F 85 75 6C 00 00         JNZ 0x00458c5b
00451FE6  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00451FEC  68 E9 05 00 00            PUSH 0x5e9
00451FF1  68 3C 9D 7A 00            PUSH 0x7a9d3c
00451FF6  52                        PUSH EDX
00451FF7  E9 55 6C 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_5:
00451FFC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452002  56                        PUSH ESI
00452003  8B CB                     MOV ECX,EBX
00452005  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
0045200F  E8 F3 24 FB FF            CALL 0x00404507
00452014  8B F8                     MOV EDI,EAX
00452016  83 FF FF                  CMP EDI,-0x1
00452019  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045201C  0F 85 39 6C 00 00         JNZ 0x00458c5b
00452022  68 EE 05 00 00            PUSH 0x5ee
00452027  E9 1A 6C 00 00            JMP 0x00458c46
switchD_00451dfd::caseD_f:
0045202C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452032  56                        PUSH ESI
00452033  8B CB                     MOV ECX,EBX
00452035  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
0045203F  E8 41 1F FB FF            CALL 0x00403f85
00452044  8B F8                     MOV EDI,EAX
00452046  83 FF FF                  CMP EDI,-0x1
00452049  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045204C  0F 85 09 6C 00 00         JNZ 0x00458c5b
00452052  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452058  68 F3 05 00 00            PUSH 0x5f3
0045205D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452062  51                        PUSH ECX
00452063  E9 E9 6B 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_14:
00452068  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045206E  56                        PUSH ESI
0045206F  8B CB                     MOV ECX,EBX
00452071  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
0045207B  E8 D8 05 FB FF            CALL 0x00402658
00452080  8B F8                     MOV EDI,EAX
00452082  83 FF FF                  CMP EDI,-0x1
00452085  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452088  0F 85 CD 6B 00 00         JNZ 0x00458c5b
0045208E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452094  68 F8 05 00 00            PUSH 0x5f8
00452099  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045209E  52                        PUSH EDX
0045209F  E9 AD 6B 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_10:
004520A4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004520AA  56                        PUSH ESI
004520AB  8B CB                     MOV ECX,EBX
004520AD  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
004520B7  E8 DE 18 FB FF            CALL 0x0040399a
004520BC  8B F8                     MOV EDI,EAX
004520BE  83 FF FF                  CMP EDI,-0x1
004520C1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004520C4  0F 85 91 6B 00 00         JNZ 0x00458c5b
004520CA  68 FD 05 00 00            PUSH 0x5fd
004520CF  E9 72 6B 00 00            JMP 0x00458c46
switchD_00451dfd::caseD_7:
004520D4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004520DA  56                        PUSH ESI
004520DB  8B CB                     MOV ECX,EBX
004520DD  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
004520E7  E8 B0 16 FB FF            CALL 0x0040379c
004520EC  8B F8                     MOV EDI,EAX
004520EE  83 FF FF                  CMP EDI,-0x1
004520F1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004520F4  0F 85 61 6B 00 00         JNZ 0x00458c5b
004520FA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452100  68 02 06 00 00            PUSH 0x602
00452105  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045210A  51                        PUSH ECX
0045210B  E9 41 6B 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_a:
00452110  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452116  56                        PUSH ESI
00452117  8B CB                     MOV ECX,EBX
00452119  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00452123  E8 76 37 FB FF            CALL 0x0040589e
00452128  8B F8                     MOV EDI,EAX
0045212A  83 FF FF                  CMP EDI,-0x1
0045212D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452130  0F 85 25 6B 00 00         JNZ 0x00458c5b
00452136  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045213C  68 07 06 00 00            PUSH 0x607
00452141  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452146  52                        PUSH EDX
00452147  E9 05 6B 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_9:
0045214C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452152  56                        PUSH ESI
00452153  8B CB                     MOV ECX,EBX
00452155  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
0045215F  E8 F4 09 FB FF            CALL 0x00402b58
00452164  8B F8                     MOV EDI,EAX
00452166  83 FF FF                  CMP EDI,-0x1
00452169  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045216C  0F 85 E9 6A 00 00         JNZ 0x00458c5b
00452172  68 0C 06 00 00            PUSH 0x60c
00452177  E9 CA 6A 00 00            JMP 0x00458c46
switchD_00451dfd::caseD_16:
0045217C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452182  56                        PUSH ESI
00452183  8B CB                     MOV ECX,EBX
00452185  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
0045218F  E8 F3 25 FB FF            CALL 0x00404787
00452194  8B F8                     MOV EDI,EAX
00452196  83 FF FF                  CMP EDI,-0x1
00452199  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045219C  0F 85 B9 6A 00 00         JNZ 0x00458c5b
004521A2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004521A8  68 11 06 00 00            PUSH 0x611
004521AD  68 3C 9D 7A 00            PUSH 0x7a9d3c
004521B2  51                        PUSH ECX
004521B3  E9 99 6A 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_15:
004521B8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004521BE  56                        PUSH ESI
004521BF  8B CB                     MOV ECX,EBX
004521C1  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
004521CB  E8 5D 39 FB FF            CALL 0x00405b2d
004521D0  8B F8                     MOV EDI,EAX
004521D2  83 FF FF                  CMP EDI,-0x1
004521D5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004521D8  0F 85 7D 6A 00 00         JNZ 0x00458c5b
004521DE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004521E4  68 16 06 00 00            PUSH 0x616
004521E9  68 3C 9D 7A 00            PUSH 0x7a9d3c
004521EE  52                        PUSH EDX
004521EF  E9 5D 6A 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_17:
004521F4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004521FA  56                        PUSH ESI
004521FB  8B CB                     MOV ECX,EBX
004521FD  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00452207  E8 2C F7 FA FF            CALL 0x00401938
0045220C  8B F8                     MOV EDI,EAX
0045220E  83 FF FF                  CMP EDI,-0x1
00452211  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452214  0F 85 41 6A 00 00         JNZ 0x00458c5b
0045221A  68 1B 06 00 00            PUSH 0x61b
0045221F  E9 22 6A 00 00            JMP 0x00458c46
switchD_00451dfd::caseD_b:
00452224  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045222A  56                        PUSH ESI
0045222B  8B CB                     MOV ECX,EBX
0045222D  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00452237  E8 0A 34 FB FF            CALL 0x00405646
0045223C  8B F8                     MOV EDI,EAX
0045223E  83 FF FF                  CMP EDI,-0x1
00452241  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452244  0F 85 11 6A 00 00         JNZ 0x00458c5b
0045224A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452250  68 20 06 00 00            PUSH 0x620
00452255  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045225A  51                        PUSH ECX
0045225B  E9 F1 69 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_12:
00452260  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452266  56                        PUSH ESI
00452267  8B CB                     MOV ECX,EBX
00452269  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00452273  E8 6C 13 FB FF            CALL 0x004035e4
00452278  8B F8                     MOV EDI,EAX
0045227A  83 FF FF                  CMP EDI,-0x1
0045227D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452280  0F 85 D5 69 00 00         JNZ 0x00458c5b
00452286  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045228C  68 25 06 00 00            PUSH 0x625
00452291  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452296  52                        PUSH EDX
00452297  E9 B5 69 00 00            JMP 0x00458c51
switchD_00451dfd::caseD_8:
0045229C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004522A2  56                        PUSH ESI
004522A3  8B CB                     MOV ECX,EBX
004522A5  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
004522AF  E8 D9 00 FB FF            CALL 0x0040238d
004522B4  8B F8                     MOV EDI,EAX
004522B6  83 FF FF                  CMP EDI,-0x1
004522B9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004522BC  0F 85 99 69 00 00         JNZ 0x00458c5b
004522C2  68 2A 06 00 00            PUSH 0x62a
004522C7  E9 7A 69 00 00            JMP 0x00458c46
switchD_00451dfd::caseD_e:
004522CC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004522D2  56                        PUSH ESI
004522D3  8B CB                     MOV ECX,EBX
004522D5  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
004522DF  E8 55 2C FB FF            CALL 0x00404f39
004522E4  8B F8                     MOV EDI,EAX
004522E6  83 FF FF                  CMP EDI,-0x1
004522E9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004522EC  0F 85 69 69 00 00         JNZ 0x00458c5b
004522F2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004522F8  68 2F 06 00 00            PUSH 0x62f
004522FD  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452302  51                        PUSH ECX
00452303  E9 49 69 00 00            JMP 0x00458c51
LAB_00452308:
00452308  39 8B CC 02 00 00         CMP dword ptr [EBX + 0x2cc],ECX
0045230E  0F 85 9D 05 00 00         JNZ 0x004528b1
00452314  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
0045231A  3B C6                     CMP EAX,ESI
0045231C  75 72                     JNZ 0x00452390
0045231E  56                        PUSH ESI
0045231F  8B CB                     MOV ECX,EBX
00452321  C7 83 5D 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x45d],0x1
0045232B  E8 28 EF FA FF            CALL 0x00401258
00452330  8B F8                     MOV EDI,EAX
00452332  83 FF FF                  CMP EDI,-0x1
00452335  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452338  75 1B                     JNZ 0x00452355
0045233A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452340  68 3B 06 00 00            PUSH 0x63b
00452345  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045234A  52                        PUSH EDX
0045234B  68 FF FF 00 00            PUSH 0xffff
00452350  E8 EB 3A 25 00            CALL 0x006a5e40
LAB_00452355:
00452355  3B FE                     CMP EDI,ESI
00452357  0F 85 90 8B 00 00         JNZ 0x0045aeed
0045235D  56                        PUSH ESI
0045235E  8B CB                     MOV ECX,EBX
00452360  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045236A  E8 BC 16 FB FF            CALL 0x00403a2b
0045236F  83 F8 FF                  CMP EAX,-0x1
00452372  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00452375  0F 85 72 8B 00 00         JNZ 0x0045aeed
0045237B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00452380  68 3F 06 00 00            PUSH 0x63f
00452385  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045238A  50                        PUSH EAX
0045238B  E9 53 8B 00 00            JMP 0x0045aee3
LAB_00452390:
00452390  48                        DEC EAX
00452391  83 F8 16                  CMP EAX,0x16
00452394  0F 87 53 8B 00 00         JA 0x0045aeed
switchD_0045239a::switchD:
0045239A  FF 24 85 1C B3 45 00      JMP dword ptr [EAX*0x4 + 0x45b31c]
switchD_0045239a::caseD_1:
004523A1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004523A7  56                        PUSH ESI
004523A8  8B CB                     MOV ECX,EBX
004523AA  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
004523B4  E8 37 1A FB FF            CALL 0x00403df0
004523B9  8B F8                     MOV EDI,EAX
004523BB  83 FF FF                  CMP EDI,-0x1
004523BE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004523C1  0F 85 94 68 00 00         JNZ 0x00458c5b
004523C7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004523CD  68 47 06 00 00            PUSH 0x647
004523D2  68 3C 9D 7A 00            PUSH 0x7a9d3c
004523D7  51                        PUSH ECX
004523D8  E9 74 68 00 00            JMP 0x00458c51
switchD_0045239a::caseD_3:
004523DD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004523E3  56                        PUSH ESI
004523E4  8B CB                     MOV ECX,EBX
004523E6  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
004523F0  E8 45 25 FB FF            CALL 0x0040493a
004523F5  8B F8                     MOV EDI,EAX
004523F7  83 FF FF                  CMP EDI,-0x1
004523FA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004523FD  0F 85 58 68 00 00         JNZ 0x00458c5b
00452403  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452409  68 4D 06 00 00            PUSH 0x64d
0045240E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452413  52                        PUSH EDX
00452414  E9 38 68 00 00            JMP 0x00458c51
switchD_0045239a::caseD_2:
00452419  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045241F  56                        PUSH ESI
00452420  8B CB                     MOV ECX,EBX
00452422  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
0045242C  E8 22 11 FB FF            CALL 0x00403553
00452431  8B F8                     MOV EDI,EAX
00452433  83 FF FF                  CMP EDI,-0x1
00452436  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452439  0F 85 1C 68 00 00         JNZ 0x00458c5b
0045243F  68 52 06 00 00            PUSH 0x652
00452444  E9 FD 67 00 00            JMP 0x00458c46
switchD_0045239a::caseD_6:
00452449  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045244F  56                        PUSH ESI
00452450  8B CB                     MOV ECX,EBX
00452452  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
0045245C  E8 92 02 FB FF            CALL 0x004026f3
00452461  8B F8                     MOV EDI,EAX
00452463  83 FF FF                  CMP EDI,-0x1
00452466  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452469  0F 85 EC 67 00 00         JNZ 0x00458c5b
0045246F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452475  68 57 06 00 00            PUSH 0x657
0045247A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045247F  51                        PUSH ECX
00452480  E9 CC 67 00 00            JMP 0x00458c51
switchD_0045239a::caseD_c:
00452485  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045248B  56                        PUSH ESI
0045248C  8B CB                     MOV ECX,EBX
0045248E  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00452498  E8 3F 0F FB FF            CALL 0x004033dc
0045249D  8B F8                     MOV EDI,EAX
0045249F  83 FF FF                  CMP EDI,-0x1
004524A2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004524A5  0F 85 B0 67 00 00         JNZ 0x00458c5b
004524AB  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004524B1  68 5C 06 00 00            PUSH 0x65c
004524B6  68 3C 9D 7A 00            PUSH 0x7a9d3c
004524BB  52                        PUSH EDX
004524BC  E9 90 67 00 00            JMP 0x00458c51
switchD_0045239a::caseD_11:
004524C1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004524C7  56                        PUSH ESI
004524C8  8B CB                     MOV ECX,EBX
004524CA  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
004524D4  E8 3A EC FA FF            CALL 0x00401113
004524D9  8B F8                     MOV EDI,EAX
004524DB  83 FF FF                  CMP EDI,-0x1
004524DE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004524E1  0F 85 74 67 00 00         JNZ 0x00458c5b
004524E7  68 61 06 00 00            PUSH 0x661
004524EC  E9 55 67 00 00            JMP 0x00458c46
switchD_0045239a::caseD_13:
004524F1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004524F7  56                        PUSH ESI
004524F8  8B CB                     MOV ECX,EBX
004524FA  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00452504  E8 0A 2D FB FF            CALL 0x00405213
00452509  8B F8                     MOV EDI,EAX
0045250B  83 FF FF                  CMP EDI,-0x1
0045250E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452511  0F 85 44 67 00 00         JNZ 0x00458c5b
00452517  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045251D  68 66 06 00 00            PUSH 0x666
00452522  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452527  51                        PUSH ECX
00452528  E9 24 67 00 00            JMP 0x00458c51
switchD_0045239a::caseD_d:
0045252D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452533  56                        PUSH ESI
00452534  8B CB                     MOV ECX,EBX
00452536  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00452540  E8 05 0F FB FF            CALL 0x0040344a
00452545  8B F8                     MOV EDI,EAX
00452547  83 FF FF                  CMP EDI,-0x1
0045254A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045254D  0F 85 08 67 00 00         JNZ 0x00458c5b
00452553  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452559  68 6B 06 00 00            PUSH 0x66b
0045255E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452563  52                        PUSH EDX
00452564  E9 E8 66 00 00            JMP 0x00458c51
switchD_0045239a::caseD_4:
00452569  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045256F  56                        PUSH ESI
00452570  8B CB                     MOV ECX,EBX
00452572  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
0045257C  E8 3B 33 FB FF            CALL 0x004058bc
00452581  8B F8                     MOV EDI,EAX
00452583  83 FF FF                  CMP EDI,-0x1
00452586  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452589  0F 85 CC 66 00 00         JNZ 0x00458c5b
0045258F  68 70 06 00 00            PUSH 0x670
00452594  E9 AD 66 00 00            JMP 0x00458c46
switchD_0045239a::caseD_5:
00452599  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045259F  56                        PUSH ESI
004525A0  8B CB                     MOV ECX,EBX
004525A2  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
004525AC  E8 56 1F FB FF            CALL 0x00404507
004525B1  8B F8                     MOV EDI,EAX
004525B3  83 FF FF                  CMP EDI,-0x1
004525B6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004525B9  0F 85 9C 66 00 00         JNZ 0x00458c5b
004525BF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004525C5  68 75 06 00 00            PUSH 0x675
004525CA  68 3C 9D 7A 00            PUSH 0x7a9d3c
004525CF  51                        PUSH ECX
004525D0  E9 7C 66 00 00            JMP 0x00458c51
switchD_0045239a::caseD_f:
004525D5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004525DB  56                        PUSH ESI
004525DC  8B CB                     MOV ECX,EBX
004525DE  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
004525E8  E8 98 19 FB FF            CALL 0x00403f85
004525ED  8B F8                     MOV EDI,EAX
004525EF  83 FF FF                  CMP EDI,-0x1
004525F2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004525F5  0F 85 60 66 00 00         JNZ 0x00458c5b
004525FB  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452601  68 7A 06 00 00            PUSH 0x67a
00452606  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045260B  52                        PUSH EDX
0045260C  E9 40 66 00 00            JMP 0x00458c51
switchD_0045239a::caseD_14:
00452611  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452617  56                        PUSH ESI
00452618  8B CB                     MOV ECX,EBX
0045261A  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00452624  E8 2F 00 FB FF            CALL 0x00402658
00452629  8B F8                     MOV EDI,EAX
0045262B  83 FF FF                  CMP EDI,-0x1
0045262E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452631  0F 85 24 66 00 00         JNZ 0x00458c5b
00452637  68 7F 06 00 00            PUSH 0x67f
0045263C  E9 05 66 00 00            JMP 0x00458c46
switchD_0045239a::caseD_10:
00452641  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452647  56                        PUSH ESI
00452648  8B CB                     MOV ECX,EBX
0045264A  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00452654  E8 41 13 FB FF            CALL 0x0040399a
00452659  8B F8                     MOV EDI,EAX
0045265B  83 FF FF                  CMP EDI,-0x1
0045265E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452661  0F 85 F4 65 00 00         JNZ 0x00458c5b
00452667  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045266D  68 84 06 00 00            PUSH 0x684
00452672  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452677  51                        PUSH ECX
00452678  E9 D4 65 00 00            JMP 0x00458c51
switchD_0045239a::caseD_7:
0045267D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452683  56                        PUSH ESI
00452684  8B CB                     MOV ECX,EBX
00452686  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00452690  E8 07 11 FB FF            CALL 0x0040379c
00452695  8B F8                     MOV EDI,EAX
00452697  83 FF FF                  CMP EDI,-0x1
0045269A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045269D  0F 85 B8 65 00 00         JNZ 0x00458c5b
004526A3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004526A9  68 89 06 00 00            PUSH 0x689
004526AE  68 3C 9D 7A 00            PUSH 0x7a9d3c
004526B3  52                        PUSH EDX
004526B4  E9 98 65 00 00            JMP 0x00458c51
switchD_0045239a::caseD_a:
004526B9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004526BF  56                        PUSH ESI
004526C0  8B CB                     MOV ECX,EBX
004526C2  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
004526CC  E8 CD 31 FB FF            CALL 0x0040589e
004526D1  8B F8                     MOV EDI,EAX
004526D3  83 FF FF                  CMP EDI,-0x1
004526D6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004526D9  0F 85 7C 65 00 00         JNZ 0x00458c5b
004526DF  68 8E 06 00 00            PUSH 0x68e
004526E4  E9 5D 65 00 00            JMP 0x00458c46
switchD_0045239a::caseD_9:
004526E9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004526EF  56                        PUSH ESI
004526F0  8B CB                     MOV ECX,EBX
004526F2  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
004526FC  E8 57 04 FB FF            CALL 0x00402b58
00452701  8B F8                     MOV EDI,EAX
00452703  83 FF FF                  CMP EDI,-0x1
00452706  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452709  0F 85 4C 65 00 00         JNZ 0x00458c5b
0045270F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452715  68 93 06 00 00            PUSH 0x693
0045271A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045271F  51                        PUSH ECX
00452720  E9 2C 65 00 00            JMP 0x00458c51
switchD_0045239a::caseD_16:
00452725  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045272B  56                        PUSH ESI
0045272C  8B CB                     MOV ECX,EBX
0045272E  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00452738  E8 4A 20 FB FF            CALL 0x00404787
0045273D  8B F8                     MOV EDI,EAX
0045273F  83 FF FF                  CMP EDI,-0x1
00452742  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452745  0F 85 10 65 00 00         JNZ 0x00458c5b
0045274B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452751  68 98 06 00 00            PUSH 0x698
00452756  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045275B  52                        PUSH EDX
0045275C  E9 F0 64 00 00            JMP 0x00458c51
switchD_0045239a::caseD_15:
00452761  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452767  56                        PUSH ESI
00452768  8B CB                     MOV ECX,EBX
0045276A  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00452774  E8 B4 33 FB FF            CALL 0x00405b2d
00452779  8B F8                     MOV EDI,EAX
0045277B  83 FF FF                  CMP EDI,-0x1
0045277E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452781  0F 85 D4 64 00 00         JNZ 0x00458c5b
00452787  68 9D 06 00 00            PUSH 0x69d
0045278C  E9 B5 64 00 00            JMP 0x00458c46
switchD_0045239a::caseD_17:
00452791  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452797  56                        PUSH ESI
00452798  8B CB                     MOV ECX,EBX
0045279A  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
004527A4  E8 8F F1 FA FF            CALL 0x00401938
004527A9  8B F8                     MOV EDI,EAX
004527AB  83 FF FF                  CMP EDI,-0x1
004527AE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004527B1  0F 85 A4 64 00 00         JNZ 0x00458c5b
004527B7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004527BD  68 A2 06 00 00            PUSH 0x6a2
004527C2  68 3C 9D 7A 00            PUSH 0x7a9d3c
004527C7  51                        PUSH ECX
004527C8  E9 84 64 00 00            JMP 0x00458c51
switchD_0045239a::caseD_b:
004527CD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004527D3  56                        PUSH ESI
004527D4  8B CB                     MOV ECX,EBX
004527D6  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
004527E0  E8 61 2E FB FF            CALL 0x00405646
004527E5  8B F8                     MOV EDI,EAX
004527E7  83 FF FF                  CMP EDI,-0x1
004527EA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004527ED  0F 85 68 64 00 00         JNZ 0x00458c5b
004527F3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004527F9  68 A7 06 00 00            PUSH 0x6a7
004527FE  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452803  52                        PUSH EDX
00452804  E9 48 64 00 00            JMP 0x00458c51
switchD_0045239a::caseD_12:
00452809  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045280F  56                        PUSH ESI
00452810  8B CB                     MOV ECX,EBX
00452812  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
0045281C  E8 C3 0D FB FF            CALL 0x004035e4
00452821  8B F8                     MOV EDI,EAX
00452823  83 FF FF                  CMP EDI,-0x1
00452826  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452829  0F 85 2C 64 00 00         JNZ 0x00458c5b
0045282F  68 AC 06 00 00            PUSH 0x6ac
00452834  E9 0D 64 00 00            JMP 0x00458c46
switchD_0045239a::caseD_8:
00452839  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045283F  56                        PUSH ESI
00452840  8B CB                     MOV ECX,EBX
00452842  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
0045284C  E8 3C FB FA FF            CALL 0x0040238d
00452851  8B F8                     MOV EDI,EAX
00452853  83 FF FF                  CMP EDI,-0x1
00452856  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452859  0F 85 FC 63 00 00         JNZ 0x00458c5b
0045285F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452865  68 B1 06 00 00            PUSH 0x6b1
0045286A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045286F  51                        PUSH ECX
00452870  E9 DC 63 00 00            JMP 0x00458c51
switchD_0045239a::caseD_e:
00452875  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045287B  56                        PUSH ESI
0045287C  8B CB                     MOV ECX,EBX
0045287E  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00452888  E8 AC 26 FB FF            CALL 0x00404f39
0045288D  8B F8                     MOV EDI,EAX
0045288F  83 FF FF                  CMP EDI,-0x1
00452892  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452895  0F 85 C0 63 00 00         JNZ 0x00458c5b
0045289B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004528A1  68 B6 06 00 00            PUSH 0x6b6
004528A6  68 3C 9D 7A 00            PUSH 0x7a9d3c
004528AB  52                        PUSH EDX
004528AC  E9 A0 63 00 00            JMP 0x00458c51
LAB_004528b1:
004528B1  39 8B E0 02 00 00         CMP dword ptr [EBX + 0x2e0],ECX
004528B7  0F 85 5E 05 00 00         JNZ 0x00452e1b
004528BD  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
004528C3  3B C6                     CMP EAX,ESI
004528C5  75 33                     JNZ 0x004528fa
004528C7  56                        PUSH ESI
004528C8  8B CB                     MOV ECX,EBX
004528CA  C7 83 5D 04 00 00 06 00 00 00  MOV dword ptr [EBX + 0x45d],0x6
004528D4  E8 1C 1A FB FF            CALL 0x004042f5
004528D9  83 F8 FF                  CMP EAX,-0x1
004528DC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004528DF  0F 85 08 86 00 00         JNZ 0x0045aeed
004528E5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004528EA  68 C2 06 00 00            PUSH 0x6c2
004528EF  68 3C 9D 7A 00            PUSH 0x7a9d3c
004528F4  50                        PUSH EAX
004528F5  E9 E9 85 00 00            JMP 0x0045aee3
LAB_004528fa:
004528FA  48                        DEC EAX
004528FB  83 F8 16                  CMP EAX,0x16
004528FE  0F 87 E9 85 00 00         JA 0x0045aeed
switchD_00452904::switchD:
00452904  FF 24 85 78 B3 45 00      JMP dword ptr [EAX*0x4 + 0x45b378]
switchD_00452904::caseD_1:
0045290B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452911  56                        PUSH ESI
00452912  8B CB                     MOV ECX,EBX
00452914  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
0045291E  E8 CD 14 FB FF            CALL 0x00403df0
00452923  8B F8                     MOV EDI,EAX
00452925  83 FF FF                  CMP EDI,-0x1
00452928  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045292B  0F 85 2A 63 00 00         JNZ 0x00458c5b
00452931  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452937  68 C9 06 00 00            PUSH 0x6c9
0045293C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452941  51                        PUSH ECX
00452942  E9 0A 63 00 00            JMP 0x00458c51
switchD_00452904::caseD_3:
00452947  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045294D  56                        PUSH ESI
0045294E  8B CB                     MOV ECX,EBX
00452950  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
0045295A  E8 DB 1F FB FF            CALL 0x0040493a
0045295F  8B F8                     MOV EDI,EAX
00452961  83 FF FF                  CMP EDI,-0x1
00452964  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452967  0F 85 EE 62 00 00         JNZ 0x00458c5b
0045296D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452973  68 CF 06 00 00            PUSH 0x6cf
00452978  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045297D  52                        PUSH EDX
0045297E  E9 CE 62 00 00            JMP 0x00458c51
switchD_00452904::caseD_2:
00452983  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452989  56                        PUSH ESI
0045298A  8B CB                     MOV ECX,EBX
0045298C  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00452996  E8 B8 0B FB FF            CALL 0x00403553
0045299B  8B F8                     MOV EDI,EAX
0045299D  83 FF FF                  CMP EDI,-0x1
004529A0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004529A3  0F 85 B2 62 00 00         JNZ 0x00458c5b
004529A9  68 D4 06 00 00            PUSH 0x6d4
004529AE  E9 93 62 00 00            JMP 0x00458c46
switchD_00452904::caseD_6:
004529B3  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004529B9  56                        PUSH ESI
004529BA  8B CB                     MOV ECX,EBX
004529BC  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
004529C6  E8 28 FD FA FF            CALL 0x004026f3
004529CB  8B F8                     MOV EDI,EAX
004529CD  83 FF FF                  CMP EDI,-0x1
004529D0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004529D3  0F 85 82 62 00 00         JNZ 0x00458c5b
004529D9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004529DF  68 D9 06 00 00            PUSH 0x6d9
004529E4  68 3C 9D 7A 00            PUSH 0x7a9d3c
004529E9  51                        PUSH ECX
004529EA  E9 62 62 00 00            JMP 0x00458c51
switchD_00452904::caseD_c:
004529EF  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004529F5  56                        PUSH ESI
004529F6  8B CB                     MOV ECX,EBX
004529F8  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00452A02  E8 D5 09 FB FF            CALL 0x004033dc
00452A07  8B F8                     MOV EDI,EAX
00452A09  83 FF FF                  CMP EDI,-0x1
00452A0C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452A0F  0F 85 46 62 00 00         JNZ 0x00458c5b
00452A15  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452A1B  68 DE 06 00 00            PUSH 0x6de
00452A20  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452A25  52                        PUSH EDX
00452A26  E9 26 62 00 00            JMP 0x00458c51
switchD_00452904::caseD_11:
00452A2B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452A31  56                        PUSH ESI
00452A32  8B CB                     MOV ECX,EBX
00452A34  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00452A3E  E8 D0 E6 FA FF            CALL 0x00401113
00452A43  8B F8                     MOV EDI,EAX
00452A45  83 FF FF                  CMP EDI,-0x1
00452A48  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452A4B  0F 85 0A 62 00 00         JNZ 0x00458c5b
00452A51  68 E3 06 00 00            PUSH 0x6e3
00452A56  E9 EB 61 00 00            JMP 0x00458c46
switchD_00452904::caseD_13:
00452A5B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452A61  56                        PUSH ESI
00452A62  8B CB                     MOV ECX,EBX
00452A64  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00452A6E  E8 A0 27 FB FF            CALL 0x00405213
00452A73  8B F8                     MOV EDI,EAX
00452A75  83 FF FF                  CMP EDI,-0x1
00452A78  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452A7B  0F 85 DA 61 00 00         JNZ 0x00458c5b
00452A81  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452A87  68 E8 06 00 00            PUSH 0x6e8
00452A8C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452A91  51                        PUSH ECX
00452A92  E9 BA 61 00 00            JMP 0x00458c51
switchD_00452904::caseD_d:
00452A97  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452A9D  56                        PUSH ESI
00452A9E  8B CB                     MOV ECX,EBX
00452AA0  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00452AAA  E8 9B 09 FB FF            CALL 0x0040344a
00452AAF  8B F8                     MOV EDI,EAX
00452AB1  83 FF FF                  CMP EDI,-0x1
00452AB4  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452AB7  0F 85 9E 61 00 00         JNZ 0x00458c5b
00452ABD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452AC3  68 ED 06 00 00            PUSH 0x6ed
00452AC8  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452ACD  52                        PUSH EDX
00452ACE  E9 7E 61 00 00            JMP 0x00458c51
switchD_00452904::caseD_4:
00452AD3  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452AD9  56                        PUSH ESI
00452ADA  8B CB                     MOV ECX,EBX
00452ADC  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00452AE6  E8 D1 2D FB FF            CALL 0x004058bc
00452AEB  8B F8                     MOV EDI,EAX
00452AED  83 FF FF                  CMP EDI,-0x1
00452AF0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452AF3  0F 85 62 61 00 00         JNZ 0x00458c5b
00452AF9  68 F2 06 00 00            PUSH 0x6f2
00452AFE  E9 43 61 00 00            JMP 0x00458c46
switchD_00452904::caseD_5:
00452B03  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452B09  56                        PUSH ESI
00452B0A  8B CB                     MOV ECX,EBX
00452B0C  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00452B16  E8 EC 19 FB FF            CALL 0x00404507
00452B1B  8B F8                     MOV EDI,EAX
00452B1D  83 FF FF                  CMP EDI,-0x1
00452B20  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452B23  0F 85 32 61 00 00         JNZ 0x00458c5b
00452B29  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452B2F  68 F7 06 00 00            PUSH 0x6f7
00452B34  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452B39  51                        PUSH ECX
00452B3A  E9 12 61 00 00            JMP 0x00458c51
switchD_00452904::caseD_f:
00452B3F  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452B45  56                        PUSH ESI
00452B46  8B CB                     MOV ECX,EBX
00452B48  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00452B52  E8 2E 14 FB FF            CALL 0x00403f85
00452B57  8B F8                     MOV EDI,EAX
00452B59  83 FF FF                  CMP EDI,-0x1
00452B5C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452B5F  0F 85 F6 60 00 00         JNZ 0x00458c5b
00452B65  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452B6B  68 FC 06 00 00            PUSH 0x6fc
00452B70  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452B75  52                        PUSH EDX
00452B76  E9 D6 60 00 00            JMP 0x00458c51
switchD_00452904::caseD_14:
00452B7B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452B81  56                        PUSH ESI
00452B82  8B CB                     MOV ECX,EBX
00452B84  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00452B8E  E8 C5 FA FA FF            CALL 0x00402658
00452B93  8B F8                     MOV EDI,EAX
00452B95  83 FF FF                  CMP EDI,-0x1
00452B98  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452B9B  0F 85 BA 60 00 00         JNZ 0x00458c5b
00452BA1  68 01 07 00 00            PUSH 0x701
00452BA6  E9 9B 60 00 00            JMP 0x00458c46
switchD_00452904::caseD_10:
00452BAB  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452BB1  56                        PUSH ESI
00452BB2  8B CB                     MOV ECX,EBX
00452BB4  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00452BBE  E8 D7 0D FB FF            CALL 0x0040399a
00452BC3  8B F8                     MOV EDI,EAX
00452BC5  83 FF FF                  CMP EDI,-0x1
00452BC8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452BCB  0F 85 8A 60 00 00         JNZ 0x00458c5b
00452BD1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452BD7  68 06 07 00 00            PUSH 0x706
00452BDC  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452BE1  51                        PUSH ECX
00452BE2  E9 6A 60 00 00            JMP 0x00458c51
switchD_00452904::caseD_7:
00452BE7  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452BED  56                        PUSH ESI
00452BEE  8B CB                     MOV ECX,EBX
00452BF0  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00452BFA  E8 9D 0B FB FF            CALL 0x0040379c
00452BFF  8B F8                     MOV EDI,EAX
00452C01  83 FF FF                  CMP EDI,-0x1
00452C04  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452C07  0F 85 4E 60 00 00         JNZ 0x00458c5b
00452C0D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452C13  68 0B 07 00 00            PUSH 0x70b
00452C18  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452C1D  52                        PUSH EDX
00452C1E  E9 2E 60 00 00            JMP 0x00458c51
switchD_00452904::caseD_a:
00452C23  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452C29  56                        PUSH ESI
00452C2A  8B CB                     MOV ECX,EBX
00452C2C  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00452C36  E8 63 2C FB FF            CALL 0x0040589e
00452C3B  8B F8                     MOV EDI,EAX
00452C3D  83 FF FF                  CMP EDI,-0x1
00452C40  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452C43  0F 85 12 60 00 00         JNZ 0x00458c5b
00452C49  68 10 07 00 00            PUSH 0x710
00452C4E  E9 F3 5F 00 00            JMP 0x00458c46
switchD_00452904::caseD_9:
00452C53  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452C59  56                        PUSH ESI
00452C5A  8B CB                     MOV ECX,EBX
00452C5C  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00452C66  E8 ED FE FA FF            CALL 0x00402b58
00452C6B  8B F8                     MOV EDI,EAX
00452C6D  83 FF FF                  CMP EDI,-0x1
00452C70  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452C73  0F 85 E2 5F 00 00         JNZ 0x00458c5b
00452C79  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452C7F  68 15 07 00 00            PUSH 0x715
00452C84  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452C89  51                        PUSH ECX
00452C8A  E9 C2 5F 00 00            JMP 0x00458c51
switchD_00452904::caseD_16:
00452C8F  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452C95  56                        PUSH ESI
00452C96  8B CB                     MOV ECX,EBX
00452C98  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00452CA2  E8 E0 1A FB FF            CALL 0x00404787
00452CA7  8B F8                     MOV EDI,EAX
00452CA9  83 FF FF                  CMP EDI,-0x1
00452CAC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452CAF  0F 85 A6 5F 00 00         JNZ 0x00458c5b
00452CB5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452CBB  68 1A 07 00 00            PUSH 0x71a
00452CC0  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452CC5  52                        PUSH EDX
00452CC6  E9 86 5F 00 00            JMP 0x00458c51
switchD_00452904::caseD_15:
00452CCB  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452CD1  56                        PUSH ESI
00452CD2  8B CB                     MOV ECX,EBX
00452CD4  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00452CDE  E8 4A 2E FB FF            CALL 0x00405b2d
00452CE3  8B F8                     MOV EDI,EAX
00452CE5  83 FF FF                  CMP EDI,-0x1
00452CE8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452CEB  0F 85 6A 5F 00 00         JNZ 0x00458c5b
00452CF1  68 1F 07 00 00            PUSH 0x71f
00452CF6  E9 4B 5F 00 00            JMP 0x00458c46
switchD_00452904::caseD_17:
00452CFB  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452D01  56                        PUSH ESI
00452D02  8B CB                     MOV ECX,EBX
00452D04  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00452D0E  E8 25 EC FA FF            CALL 0x00401938
00452D13  8B F8                     MOV EDI,EAX
00452D15  83 FF FF                  CMP EDI,-0x1
00452D18  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452D1B  0F 85 3A 5F 00 00         JNZ 0x00458c5b
00452D21  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452D27  68 24 07 00 00            PUSH 0x724
00452D2C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452D31  51                        PUSH ECX
00452D32  E9 1A 5F 00 00            JMP 0x00458c51
switchD_00452904::caseD_b:
00452D37  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452D3D  56                        PUSH ESI
00452D3E  8B CB                     MOV ECX,EBX
00452D40  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00452D4A  E8 F7 28 FB FF            CALL 0x00405646
00452D4F  8B F8                     MOV EDI,EAX
00452D51  83 FF FF                  CMP EDI,-0x1
00452D54  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452D57  0F 85 FE 5E 00 00         JNZ 0x00458c5b
00452D5D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452D63  68 29 07 00 00            PUSH 0x729
00452D68  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452D6D  52                        PUSH EDX
00452D6E  E9 DE 5E 00 00            JMP 0x00458c51
switchD_00452904::caseD_12:
00452D73  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452D79  56                        PUSH ESI
00452D7A  8B CB                     MOV ECX,EBX
00452D7C  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00452D86  E8 59 08 FB FF            CALL 0x004035e4
00452D8B  8B F8                     MOV EDI,EAX
00452D8D  83 FF FF                  CMP EDI,-0x1
00452D90  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452D93  0F 85 C2 5E 00 00         JNZ 0x00458c5b
00452D99  68 2E 07 00 00            PUSH 0x72e
00452D9E  E9 A3 5E 00 00            JMP 0x00458c46
switchD_00452904::caseD_8:
00452DA3  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452DA9  56                        PUSH ESI
00452DAA  8B CB                     MOV ECX,EBX
00452DAC  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00452DB6  E8 D2 F5 FA FF            CALL 0x0040238d
00452DBB  8B F8                     MOV EDI,EAX
00452DBD  83 FF FF                  CMP EDI,-0x1
00452DC0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452DC3  0F 85 92 5E 00 00         JNZ 0x00458c5b
00452DC9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452DCF  68 33 07 00 00            PUSH 0x733
00452DD4  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452DD9  51                        PUSH ECX
00452DDA  E9 72 5E 00 00            JMP 0x00458c51
switchD_00452904::caseD_e:
00452DDF  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452DE5  56                        PUSH ESI
00452DE6  8B CB                     MOV ECX,EBX
00452DE8  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00452DF2  E8 42 21 FB FF            CALL 0x00404f39
00452DF7  8B F8                     MOV EDI,EAX
00452DF9  83 FF FF                  CMP EDI,-0x1
00452DFC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452DFF  0F 85 56 5E 00 00         JNZ 0x00458c5b
00452E05  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452E0B  68 38 07 00 00            PUSH 0x738
00452E10  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452E15  52                        PUSH EDX
00452E16  E9 36 5E 00 00            JMP 0x00458c51
LAB_00452e1b:
00452E1B  39 8B 0C 03 00 00         CMP dword ptr [EBX + 0x30c],ECX
00452E21  0F 85 85 05 00 00         JNZ 0x004533ac
00452E27  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00452E2D  3B C6                     CMP EAX,ESI
00452E2F  75 66                     JNZ 0x00452e97
00452E31  56                        PUSH ESI
00452E32  8B CB                     MOV ECX,EBX
00452E34  C7 83 5D 04 00 00 11 00 00 00  MOV dword ptr [EBX + 0x45d],0x11
00452E3E  E8 00 17 FB FF            CALL 0x00404543
00452E43  8B F8                     MOV EDI,EAX
00452E45  83 FF FF                  CMP EDI,-0x1
00452E48  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452E4B  75 1A                     JNZ 0x00452e67
00452E4D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00452E52  68 44 07 00 00            PUSH 0x744
00452E57  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452E5C  50                        PUSH EAX
00452E5D  68 FF FF 00 00            PUSH 0xffff
00452E62  E8 D9 2F 25 00            CALL 0x006a5e40
LAB_00452e67:
00452E67  3B FE                     CMP EDI,ESI
00452E69  0F 85 7E 80 00 00         JNZ 0x0045aeed
00452E6F  56                        PUSH ESI
00452E70  8B CB                     MOV ECX,EBX
00452E72  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00452E7C  E8 AA 0B FB FF            CALL 0x00403a2b
00452E81  83 F8 FF                  CMP EAX,-0x1
00452E84  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00452E87  0F 85 60 80 00 00         JNZ 0x0045aeed
00452E8D  68 48 07 00 00            PUSH 0x748
00452E92  E9 40 80 00 00            JMP 0x0045aed7
LAB_00452e97:
00452E97  48                        DEC EAX
00452E98  83 F8 16                  CMP EAX,0x16
00452E9B  0F 87 4C 80 00 00         JA 0x0045aeed
switchD_00452ea1::switchD:
00452EA1  FF 24 85 D4 B3 45 00      JMP dword ptr [EAX*0x4 + 0x45b3d4]
switchD_00452ea1::caseD_1:
00452EA8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452EAE  56                        PUSH ESI
00452EAF  8B CB                     MOV ECX,EBX
00452EB1  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00452EBB  E8 30 0F FB FF            CALL 0x00403df0
00452EC0  8B F8                     MOV EDI,EAX
00452EC2  83 FF FF                  CMP EDI,-0x1
00452EC5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452EC8  0F 85 8D 5D 00 00         JNZ 0x00458c5b
00452ECE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452ED4  68 50 07 00 00            PUSH 0x750
00452ED9  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452EDE  52                        PUSH EDX
00452EDF  E9 6D 5D 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_3:
00452EE4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452EEA  56                        PUSH ESI
00452EEB  8B CB                     MOV ECX,EBX
00452EED  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00452EF7  E8 3E 1A FB FF            CALL 0x0040493a
00452EFC  8B F8                     MOV EDI,EAX
00452EFE  83 FF FF                  CMP EDI,-0x1
00452F01  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452F04  0F 85 51 5D 00 00         JNZ 0x00458c5b
00452F0A  68 56 07 00 00            PUSH 0x756
00452F0F  E9 32 5D 00 00            JMP 0x00458c46
switchD_00452ea1::caseD_2:
00452F14  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452F1A  56                        PUSH ESI
00452F1B  8B CB                     MOV ECX,EBX
00452F1D  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00452F27  E8 27 06 FB FF            CALL 0x00403553
00452F2C  8B F8                     MOV EDI,EAX
00452F2E  83 FF FF                  CMP EDI,-0x1
00452F31  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452F34  0F 85 21 5D 00 00         JNZ 0x00458c5b
00452F3A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452F40  68 5B 07 00 00            PUSH 0x75b
00452F45  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452F4A  51                        PUSH ECX
00452F4B  E9 01 5D 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_6:
00452F50  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452F56  56                        PUSH ESI
00452F57  8B CB                     MOV ECX,EBX
00452F59  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00452F63  E8 8B F7 FA FF            CALL 0x004026f3
00452F68  8B F8                     MOV EDI,EAX
00452F6A  83 FF FF                  CMP EDI,-0x1
00452F6D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452F70  0F 85 E5 5C 00 00         JNZ 0x00458c5b
00452F76  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00452F7C  68 60 07 00 00            PUSH 0x760
00452F81  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452F86  52                        PUSH EDX
00452F87  E9 C5 5C 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_c:
00452F8C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452F92  56                        PUSH ESI
00452F93  8B CB                     MOV ECX,EBX
00452F95  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00452F9F  E8 38 04 FB FF            CALL 0x004033dc
00452FA4  8B F8                     MOV EDI,EAX
00452FA6  83 FF FF                  CMP EDI,-0x1
00452FA9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452FAC  0F 85 A9 5C 00 00         JNZ 0x00458c5b
00452FB2  68 65 07 00 00            PUSH 0x765
00452FB7  E9 8A 5C 00 00            JMP 0x00458c46
switchD_00452ea1::caseD_11:
00452FBC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452FC2  56                        PUSH ESI
00452FC3  8B CB                     MOV ECX,EBX
00452FC5  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00452FCF  E8 3F E1 FA FF            CALL 0x00401113
00452FD4  8B F8                     MOV EDI,EAX
00452FD6  83 FF FF                  CMP EDI,-0x1
00452FD9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00452FDC  0F 85 79 5C 00 00         JNZ 0x00458c5b
00452FE2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00452FE8  68 6A 07 00 00            PUSH 0x76a
00452FED  68 3C 9D 7A 00            PUSH 0x7a9d3c
00452FF2  51                        PUSH ECX
00452FF3  E9 59 5C 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_13:
00452FF8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00452FFE  56                        PUSH ESI
00452FFF  8B CB                     MOV ECX,EBX
00453001  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
0045300B  E8 03 22 FB FF            CALL 0x00405213
00453010  8B F8                     MOV EDI,EAX
00453012  83 FF FF                  CMP EDI,-0x1
00453015  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453018  0F 85 3D 5C 00 00         JNZ 0x00458c5b
0045301E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453024  68 6F 07 00 00            PUSH 0x76f
00453029  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045302E  52                        PUSH EDX
0045302F  E9 1D 5C 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_d:
00453034  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045303A  56                        PUSH ESI
0045303B  8B CB                     MOV ECX,EBX
0045303D  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00453047  E8 FE 03 FB FF            CALL 0x0040344a
0045304C  8B F8                     MOV EDI,EAX
0045304E  83 FF FF                  CMP EDI,-0x1
00453051  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453054  0F 85 01 5C 00 00         JNZ 0x00458c5b
0045305A  68 74 07 00 00            PUSH 0x774
0045305F  E9 E2 5B 00 00            JMP 0x00458c46
switchD_00452ea1::caseD_4:
00453064  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045306A  56                        PUSH ESI
0045306B  8B CB                     MOV ECX,EBX
0045306D  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00453077  E8 40 28 FB FF            CALL 0x004058bc
0045307C  8B F8                     MOV EDI,EAX
0045307E  83 FF FF                  CMP EDI,-0x1
00453081  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453084  0F 85 D1 5B 00 00         JNZ 0x00458c5b
0045308A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453090  68 79 07 00 00            PUSH 0x779
00453095  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045309A  51                        PUSH ECX
0045309B  E9 B1 5B 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_5:
004530A0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004530A6  56                        PUSH ESI
004530A7  8B CB                     MOV ECX,EBX
004530A9  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
004530B3  E8 4F 14 FB FF            CALL 0x00404507
004530B8  8B F8                     MOV EDI,EAX
004530BA  83 FF FF                  CMP EDI,-0x1
004530BD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004530C0  0F 85 95 5B 00 00         JNZ 0x00458c5b
004530C6  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004530CC  68 7E 07 00 00            PUSH 0x77e
004530D1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004530D6  52                        PUSH EDX
004530D7  E9 75 5B 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_f:
004530DC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004530E2  56                        PUSH ESI
004530E3  8B CB                     MOV ECX,EBX
004530E5  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
004530EF  E8 91 0E FB FF            CALL 0x00403f85
004530F4  8B F8                     MOV EDI,EAX
004530F6  83 FF FF                  CMP EDI,-0x1
004530F9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004530FC  0F 85 59 5B 00 00         JNZ 0x00458c5b
00453102  68 83 07 00 00            PUSH 0x783
00453107  E9 3A 5B 00 00            JMP 0x00458c46
switchD_00452ea1::caseD_14:
0045310C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453112  56                        PUSH ESI
00453113  8B CB                     MOV ECX,EBX
00453115  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
0045311F  E8 34 F5 FA FF            CALL 0x00402658
00453124  8B F8                     MOV EDI,EAX
00453126  83 FF FF                  CMP EDI,-0x1
00453129  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045312C  0F 85 29 5B 00 00         JNZ 0x00458c5b
00453132  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453138  68 88 07 00 00            PUSH 0x788
0045313D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453142  51                        PUSH ECX
00453143  E9 09 5B 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_10:
00453148  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045314E  56                        PUSH ESI
0045314F  8B CB                     MOV ECX,EBX
00453151  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
0045315B  E8 3A 08 FB FF            CALL 0x0040399a
00453160  8B F8                     MOV EDI,EAX
00453162  83 FF FF                  CMP EDI,-0x1
00453165  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453168  0F 85 ED 5A 00 00         JNZ 0x00458c5b
0045316E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453174  68 8D 07 00 00            PUSH 0x78d
00453179  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045317E  52                        PUSH EDX
0045317F  E9 CD 5A 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_7:
00453184  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045318A  56                        PUSH ESI
0045318B  8B CB                     MOV ECX,EBX
0045318D  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00453197  E8 00 06 FB FF            CALL 0x0040379c
0045319C  8B F8                     MOV EDI,EAX
0045319E  83 FF FF                  CMP EDI,-0x1
004531A1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004531A4  0F 85 B1 5A 00 00         JNZ 0x00458c5b
004531AA  68 92 07 00 00            PUSH 0x792
004531AF  E9 92 5A 00 00            JMP 0x00458c46
switchD_00452ea1::caseD_a:
004531B4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004531BA  56                        PUSH ESI
004531BB  8B CB                     MOV ECX,EBX
004531BD  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
004531C7  E8 D2 26 FB FF            CALL 0x0040589e
004531CC  8B F8                     MOV EDI,EAX
004531CE  83 FF FF                  CMP EDI,-0x1
004531D1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004531D4  0F 85 81 5A 00 00         JNZ 0x00458c5b
004531DA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004531E0  68 97 07 00 00            PUSH 0x797
004531E5  68 3C 9D 7A 00            PUSH 0x7a9d3c
004531EA  51                        PUSH ECX
004531EB  E9 61 5A 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_9:
004531F0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004531F6  56                        PUSH ESI
004531F7  8B CB                     MOV ECX,EBX
004531F9  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00453203  E8 50 F9 FA FF            CALL 0x00402b58
00453208  8B F8                     MOV EDI,EAX
0045320A  83 FF FF                  CMP EDI,-0x1
0045320D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453210  0F 85 45 5A 00 00         JNZ 0x00458c5b
00453216  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045321C  68 9C 07 00 00            PUSH 0x79c
00453221  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453226  52                        PUSH EDX
00453227  E9 25 5A 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_16:
0045322C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453232  56                        PUSH ESI
00453233  8B CB                     MOV ECX,EBX
00453235  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
0045323F  E8 43 15 FB FF            CALL 0x00404787
00453244  8B F8                     MOV EDI,EAX
00453246  83 FF FF                  CMP EDI,-0x1
00453249  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045324C  0F 85 09 5A 00 00         JNZ 0x00458c5b
00453252  68 A1 07 00 00            PUSH 0x7a1
00453257  E9 EA 59 00 00            JMP 0x00458c46
switchD_00452ea1::caseD_15:
0045325C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453262  56                        PUSH ESI
00453263  8B CB                     MOV ECX,EBX
00453265  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
0045326F  E8 B9 28 FB FF            CALL 0x00405b2d
00453274  8B F8                     MOV EDI,EAX
00453276  83 FF FF                  CMP EDI,-0x1
00453279  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045327C  0F 85 D9 59 00 00         JNZ 0x00458c5b
00453282  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453288  68 A6 07 00 00            PUSH 0x7a6
0045328D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453292  51                        PUSH ECX
00453293  E9 B9 59 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_17:
00453298  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045329E  56                        PUSH ESI
0045329F  8B CB                     MOV ECX,EBX
004532A1  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
004532AB  E8 88 E6 FA FF            CALL 0x00401938
004532B0  8B F8                     MOV EDI,EAX
004532B2  83 FF FF                  CMP EDI,-0x1
004532B5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004532B8  0F 85 9D 59 00 00         JNZ 0x00458c5b
004532BE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004532C4  68 AB 07 00 00            PUSH 0x7ab
004532C9  68 3C 9D 7A 00            PUSH 0x7a9d3c
004532CE  52                        PUSH EDX
004532CF  E9 7D 59 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_b:
004532D4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004532DA  56                        PUSH ESI
004532DB  8B CB                     MOV ECX,EBX
004532DD  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
004532E7  E8 5A 23 FB FF            CALL 0x00405646
004532EC  8B F8                     MOV EDI,EAX
004532EE  83 FF FF                  CMP EDI,-0x1
004532F1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004532F4  0F 85 61 59 00 00         JNZ 0x00458c5b
004532FA  68 B0 07 00 00            PUSH 0x7b0
004532FF  E9 42 59 00 00            JMP 0x00458c46
switchD_00452ea1::caseD_12:
00453304  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045330A  56                        PUSH ESI
0045330B  8B CB                     MOV ECX,EBX
0045330D  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00453317  E8 C8 02 FB FF            CALL 0x004035e4
0045331C  8B F8                     MOV EDI,EAX
0045331E  83 FF FF                  CMP EDI,-0x1
00453321  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453324  0F 85 31 59 00 00         JNZ 0x00458c5b
0045332A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453330  68 B5 07 00 00            PUSH 0x7b5
00453335  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045333A  51                        PUSH ECX
0045333B  E9 11 59 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_8:
00453340  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453346  56                        PUSH ESI
00453347  8B CB                     MOV ECX,EBX
00453349  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00453353  E8 35 F0 FA FF            CALL 0x0040238d
00453358  8B F8                     MOV EDI,EAX
0045335A  83 FF FF                  CMP EDI,-0x1
0045335D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453360  0F 85 F5 58 00 00         JNZ 0x00458c5b
00453366  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045336C  68 BA 07 00 00            PUSH 0x7ba
00453371  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453376  52                        PUSH EDX
00453377  E9 D5 58 00 00            JMP 0x00458c51
switchD_00452ea1::caseD_e:
0045337C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453382  56                        PUSH ESI
00453383  8B CB                     MOV ECX,EBX
00453385  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
0045338F  E8 A5 1B FB FF            CALL 0x00404f39
00453394  8B F8                     MOV EDI,EAX
00453396  83 FF FF                  CMP EDI,-0x1
00453399  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045339C  0F 85 B9 58 00 00         JNZ 0x00458c5b
004533A2  68 BF 07 00 00            PUSH 0x7bf
004533A7  E9 9A 58 00 00            JMP 0x00458c46
LAB_004533ac:
004533AC  39 8B FC 02 00 00         CMP dword ptr [EBX + 0x2fc],ECX
004533B2  0F 85 47 05 00 00         JNZ 0x004538ff
004533B8  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
004533BE  3B C6                     CMP EAX,ESI
004533C0  75 28                     JNZ 0x004533ea
004533C2  56                        PUSH ESI
004533C3  8B CB                     MOV ECX,EBX
004533C5  C7 83 5D 04 00 00 0D 00 00 00  MOV dword ptr [EBX + 0x45d],0xd
004533CF  E8 BD 18 FB FF            CALL 0x00404c91
004533D4  83 F8 FF                  CMP EAX,-0x1
004533D7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004533DA  0F 85 0D 7B 00 00         JNZ 0x0045aeed
004533E0  68 CB 07 00 00            PUSH 0x7cb
004533E5  E9 ED 7A 00 00            JMP 0x0045aed7
LAB_004533ea:
004533EA  48                        DEC EAX
004533EB  83 F8 16                  CMP EAX,0x16
004533EE  0F 87 F9 7A 00 00         JA 0x0045aeed
switchD_004533f4::switchD:
004533F4  FF 24 85 30 B4 45 00      JMP dword ptr [EAX*0x4 + 0x45b430]
switchD_004533f4::caseD_1:
004533FB  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453401  56                        PUSH ESI
00453402  8B CB                     MOV ECX,EBX
00453404  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
0045340E  E8 DD 09 FB FF            CALL 0x00403df0
00453413  8B F8                     MOV EDI,EAX
00453415  83 FF FF                  CMP EDI,-0x1
00453418  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045341B  0F 85 3A 58 00 00         JNZ 0x00458c5b
00453421  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453427  68 D2 07 00 00            PUSH 0x7d2
0045342C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453431  52                        PUSH EDX
00453432  E9 1A 58 00 00            JMP 0x00458c51
switchD_004533f4::caseD_3:
00453437  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045343D  56                        PUSH ESI
0045343E  8B CB                     MOV ECX,EBX
00453440  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
0045344A  E8 EB 14 FB FF            CALL 0x0040493a
0045344F  8B F8                     MOV EDI,EAX
00453451  83 FF FF                  CMP EDI,-0x1
00453454  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453457  0F 85 FE 57 00 00         JNZ 0x00458c5b
0045345D  68 D7 07 00 00            PUSH 0x7d7
00453462  E9 DF 57 00 00            JMP 0x00458c46
switchD_004533f4::caseD_2:
00453467  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045346D  56                        PUSH ESI
0045346E  8B CB                     MOV ECX,EBX
00453470  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
0045347A  E8 D4 00 FB FF            CALL 0x00403553
0045347F  8B F8                     MOV EDI,EAX
00453481  83 FF FF                  CMP EDI,-0x1
00453484  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453487  0F 85 CE 57 00 00         JNZ 0x00458c5b
0045348D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453493  68 DC 07 00 00            PUSH 0x7dc
00453498  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045349D  51                        PUSH ECX
0045349E  E9 AE 57 00 00            JMP 0x00458c51
switchD_004533f4::caseD_6:
004534A3  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004534A9  56                        PUSH ESI
004534AA  8B CB                     MOV ECX,EBX
004534AC  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
004534B6  E8 38 F2 FA FF            CALL 0x004026f3
004534BB  8B F8                     MOV EDI,EAX
004534BD  83 FF FF                  CMP EDI,-0x1
004534C0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004534C3  0F 85 92 57 00 00         JNZ 0x00458c5b
004534C9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004534CF  68 E1 07 00 00            PUSH 0x7e1
004534D4  68 3C 9D 7A 00            PUSH 0x7a9d3c
004534D9  52                        PUSH EDX
004534DA  E9 72 57 00 00            JMP 0x00458c51
switchD_004533f4::caseD_c:
004534DF  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004534E5  56                        PUSH ESI
004534E6  8B CB                     MOV ECX,EBX
004534E8  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
004534F2  E8 E5 FE FA FF            CALL 0x004033dc
004534F7  8B F8                     MOV EDI,EAX
004534F9  83 FF FF                  CMP EDI,-0x1
004534FC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004534FF  0F 85 56 57 00 00         JNZ 0x00458c5b
00453505  68 E6 07 00 00            PUSH 0x7e6
0045350A  E9 37 57 00 00            JMP 0x00458c46
switchD_004533f4::caseD_11:
0045350F  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453515  56                        PUSH ESI
00453516  8B CB                     MOV ECX,EBX
00453518  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00453522  E8 EC DB FA FF            CALL 0x00401113
00453527  8B F8                     MOV EDI,EAX
00453529  83 FF FF                  CMP EDI,-0x1
0045352C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045352F  0F 85 26 57 00 00         JNZ 0x00458c5b
00453535  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045353B  68 EB 07 00 00            PUSH 0x7eb
00453540  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453545  51                        PUSH ECX
00453546  E9 06 57 00 00            JMP 0x00458c51
switchD_004533f4::caseD_13:
0045354B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453551  56                        PUSH ESI
00453552  8B CB                     MOV ECX,EBX
00453554  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
0045355E  E8 B0 1C FB FF            CALL 0x00405213
00453563  8B F8                     MOV EDI,EAX
00453565  83 FF FF                  CMP EDI,-0x1
00453568  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045356B  0F 85 EA 56 00 00         JNZ 0x00458c5b
00453571  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453577  68 F0 07 00 00            PUSH 0x7f0
0045357C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453581  52                        PUSH EDX
00453582  E9 CA 56 00 00            JMP 0x00458c51
switchD_004533f4::caseD_d:
00453587  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045358D  56                        PUSH ESI
0045358E  8B CB                     MOV ECX,EBX
00453590  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
0045359A  E8 AB FE FA FF            CALL 0x0040344a
0045359F  8B F8                     MOV EDI,EAX
004535A1  83 FF FF                  CMP EDI,-0x1
004535A4  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004535A7  0F 85 AE 56 00 00         JNZ 0x00458c5b
004535AD  68 F5 07 00 00            PUSH 0x7f5
004535B2  E9 8F 56 00 00            JMP 0x00458c46
switchD_004533f4::caseD_4:
004535B7  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004535BD  56                        PUSH ESI
004535BE  8B CB                     MOV ECX,EBX
004535C0  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
004535CA  E8 ED 22 FB FF            CALL 0x004058bc
004535CF  8B F8                     MOV EDI,EAX
004535D1  83 FF FF                  CMP EDI,-0x1
004535D4  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004535D7  0F 85 7E 56 00 00         JNZ 0x00458c5b
004535DD  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004535E3  68 FA 07 00 00            PUSH 0x7fa
004535E8  68 3C 9D 7A 00            PUSH 0x7a9d3c
004535ED  51                        PUSH ECX
004535EE  E9 5E 56 00 00            JMP 0x00458c51
switchD_004533f4::caseD_5:
004535F3  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004535F9  56                        PUSH ESI
004535FA  8B CB                     MOV ECX,EBX
004535FC  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00453606  E8 FC 0E FB FF            CALL 0x00404507
0045360B  8B F8                     MOV EDI,EAX
0045360D  83 FF FF                  CMP EDI,-0x1
00453610  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453613  0F 85 42 56 00 00         JNZ 0x00458c5b
00453619  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045361F  68 FF 07 00 00            PUSH 0x7ff
00453624  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453629  52                        PUSH EDX
0045362A  E9 22 56 00 00            JMP 0x00458c51
switchD_004533f4::caseD_f:
0045362F  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453635  56                        PUSH ESI
00453636  8B CB                     MOV ECX,EBX
00453638  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00453642  E8 3E 09 FB FF            CALL 0x00403f85
00453647  8B F8                     MOV EDI,EAX
00453649  83 FF FF                  CMP EDI,-0x1
0045364C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045364F  0F 85 06 56 00 00         JNZ 0x00458c5b
00453655  68 04 08 00 00            PUSH 0x804
0045365A  E9 E7 55 00 00            JMP 0x00458c46
switchD_004533f4::caseD_14:
0045365F  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453665  56                        PUSH ESI
00453666  8B CB                     MOV ECX,EBX
00453668  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00453672  E8 E1 EF FA FF            CALL 0x00402658
00453677  8B F8                     MOV EDI,EAX
00453679  83 FF FF                  CMP EDI,-0x1
0045367C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045367F  0F 85 D6 55 00 00         JNZ 0x00458c5b
00453685  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045368B  68 09 08 00 00            PUSH 0x809
00453690  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453695  51                        PUSH ECX
00453696  E9 B6 55 00 00            JMP 0x00458c51
switchD_004533f4::caseD_10:
0045369B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004536A1  56                        PUSH ESI
004536A2  8B CB                     MOV ECX,EBX
004536A4  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
004536AE  E8 E7 02 FB FF            CALL 0x0040399a
004536B3  8B F8                     MOV EDI,EAX
004536B5  83 FF FF                  CMP EDI,-0x1
004536B8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004536BB  0F 85 9A 55 00 00         JNZ 0x00458c5b
004536C1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004536C7  68 0E 08 00 00            PUSH 0x80e
004536CC  68 3C 9D 7A 00            PUSH 0x7a9d3c
004536D1  52                        PUSH EDX
004536D2  E9 7A 55 00 00            JMP 0x00458c51
switchD_004533f4::caseD_7:
004536D7  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004536DD  56                        PUSH ESI
004536DE  8B CB                     MOV ECX,EBX
004536E0  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
004536EA  E8 AD 00 FB FF            CALL 0x0040379c
004536EF  8B F8                     MOV EDI,EAX
004536F1  83 FF FF                  CMP EDI,-0x1
004536F4  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004536F7  0F 85 5E 55 00 00         JNZ 0x00458c5b
004536FD  68 13 08 00 00            PUSH 0x813
00453702  E9 3F 55 00 00            JMP 0x00458c46
switchD_004533f4::caseD_a:
00453707  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045370D  56                        PUSH ESI
0045370E  8B CB                     MOV ECX,EBX
00453710  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
0045371A  E8 7F 21 FB FF            CALL 0x0040589e
0045371F  8B F8                     MOV EDI,EAX
00453721  83 FF FF                  CMP EDI,-0x1
00453724  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453727  0F 85 2E 55 00 00         JNZ 0x00458c5b
0045372D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453733  68 18 08 00 00            PUSH 0x818
00453738  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045373D  51                        PUSH ECX
0045373E  E9 0E 55 00 00            JMP 0x00458c51
switchD_004533f4::caseD_9:
00453743  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453749  56                        PUSH ESI
0045374A  8B CB                     MOV ECX,EBX
0045374C  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00453756  E8 FD F3 FA FF            CALL 0x00402b58
0045375B  8B F8                     MOV EDI,EAX
0045375D  83 FF FF                  CMP EDI,-0x1
00453760  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453763  0F 85 F2 54 00 00         JNZ 0x00458c5b
00453769  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045376F  68 1D 08 00 00            PUSH 0x81d
00453774  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453779  52                        PUSH EDX
0045377A  E9 D2 54 00 00            JMP 0x00458c51
switchD_004533f4::caseD_16:
0045377F  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453785  56                        PUSH ESI
00453786  8B CB                     MOV ECX,EBX
00453788  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00453792  E8 F0 0F FB FF            CALL 0x00404787
00453797  8B F8                     MOV EDI,EAX
00453799  83 FF FF                  CMP EDI,-0x1
0045379C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045379F  0F 85 B6 54 00 00         JNZ 0x00458c5b
004537A5  68 22 08 00 00            PUSH 0x822
004537AA  E9 97 54 00 00            JMP 0x00458c46
switchD_004533f4::caseD_15:
004537AF  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004537B5  56                        PUSH ESI
004537B6  8B CB                     MOV ECX,EBX
004537B8  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
004537C2  E8 66 23 FB FF            CALL 0x00405b2d
004537C7  8B F8                     MOV EDI,EAX
004537C9  83 FF FF                  CMP EDI,-0x1
004537CC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004537CF  0F 85 86 54 00 00         JNZ 0x00458c5b
004537D5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004537DB  68 27 08 00 00            PUSH 0x827
004537E0  68 3C 9D 7A 00            PUSH 0x7a9d3c
004537E5  51                        PUSH ECX
004537E6  E9 66 54 00 00            JMP 0x00458c51
switchD_004533f4::caseD_17:
004537EB  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004537F1  56                        PUSH ESI
004537F2  8B CB                     MOV ECX,EBX
004537F4  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
004537FE  E8 35 E1 FA FF            CALL 0x00401938
00453803  8B F8                     MOV EDI,EAX
00453805  83 FF FF                  CMP EDI,-0x1
00453808  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045380B  0F 85 4A 54 00 00         JNZ 0x00458c5b
00453811  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453817  68 2C 08 00 00            PUSH 0x82c
0045381C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453821  52                        PUSH EDX
00453822  E9 2A 54 00 00            JMP 0x00458c51
switchD_004533f4::caseD_b:
00453827  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045382D  56                        PUSH ESI
0045382E  8B CB                     MOV ECX,EBX
00453830  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
0045383A  E8 07 1E FB FF            CALL 0x00405646
0045383F  8B F8                     MOV EDI,EAX
00453841  83 FF FF                  CMP EDI,-0x1
00453844  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453847  0F 85 0E 54 00 00         JNZ 0x00458c5b
0045384D  68 31 08 00 00            PUSH 0x831
00453852  E9 EF 53 00 00            JMP 0x00458c46
switchD_004533f4::caseD_12:
00453857  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045385D  56                        PUSH ESI
0045385E  8B CB                     MOV ECX,EBX
00453860  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
0045386A  E8 75 FD FA FF            CALL 0x004035e4
0045386F  8B F8                     MOV EDI,EAX
00453871  83 FF FF                  CMP EDI,-0x1
00453874  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453877  0F 85 DE 53 00 00         JNZ 0x00458c5b
0045387D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453883  68 36 08 00 00            PUSH 0x836
00453888  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045388D  51                        PUSH ECX
0045388E  E9 BE 53 00 00            JMP 0x00458c51
switchD_004533f4::caseD_8:
00453893  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453899  56                        PUSH ESI
0045389A  8B CB                     MOV ECX,EBX
0045389C  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
004538A6  E8 E2 EA FA FF            CALL 0x0040238d
004538AB  8B F8                     MOV EDI,EAX
004538AD  83 FF FF                  CMP EDI,-0x1
004538B0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004538B3  0F 85 A2 53 00 00         JNZ 0x00458c5b
004538B9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004538BF  68 3B 08 00 00            PUSH 0x83b
004538C4  68 3C 9D 7A 00            PUSH 0x7a9d3c
004538C9  52                        PUSH EDX
004538CA  E9 82 53 00 00            JMP 0x00458c51
switchD_004533f4::caseD_e:
004538CF  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004538D5  56                        PUSH ESI
004538D6  8B CB                     MOV ECX,EBX
004538D8  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
004538E2  E8 52 16 FB FF            CALL 0x00404f39
004538E7  8B F8                     MOV EDI,EAX
004538E9  83 FF FF                  CMP EDI,-0x1
004538EC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004538EF  0F 85 66 53 00 00         JNZ 0x00458c5b
004538F5  68 40 08 00 00            PUSH 0x840
004538FA  E9 47 53 00 00            JMP 0x00458c46
LAB_004538ff:
004538FF  39 8B D8 02 00 00         CMP dword ptr [EBX + 0x2d8],ECX
00453905  0F 85 47 05 00 00         JNZ 0x00453e52
0045390B  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00453911  3B C6                     CMP EAX,ESI
00453913  75 28                     JNZ 0x0045393d
00453915  56                        PUSH ESI
00453916  8B CB                     MOV ECX,EBX
00453918  C7 83 5D 04 00 00 04 00 00 00  MOV dword ptr [EBX + 0x45d],0x4
00453922  E8 91 05 FB FF            CALL 0x00403eb8
00453927  83 F8 FF                  CMP EAX,-0x1
0045392A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0045392D  0F 85 BA 75 00 00         JNZ 0x0045aeed
00453933  68 4C 08 00 00            PUSH 0x84c
00453938  E9 9A 75 00 00            JMP 0x0045aed7
LAB_0045393d:
0045393D  48                        DEC EAX
0045393E  83 F8 16                  CMP EAX,0x16
00453941  0F 87 A6 75 00 00         JA 0x0045aeed
switchD_00453947::switchD:
00453947  FF 24 85 8C B4 45 00      JMP dword ptr [EAX*0x4 + 0x45b48c]
switchD_00453947::caseD_1:
0045394E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453954  56                        PUSH ESI
00453955  8B CB                     MOV ECX,EBX
00453957  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00453961  E8 8A 04 FB FF            CALL 0x00403df0
00453966  8B F8                     MOV EDI,EAX
00453968  83 FF FF                  CMP EDI,-0x1
0045396B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045396E  0F 85 E7 52 00 00         JNZ 0x00458c5b
00453974  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045397A  68 53 08 00 00            PUSH 0x853
0045397F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453984  52                        PUSH EDX
00453985  E9 C7 52 00 00            JMP 0x00458c51
switchD_00453947::caseD_3:
0045398A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453990  56                        PUSH ESI
00453991  8B CB                     MOV ECX,EBX
00453993  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
0045399D  E8 98 0F FB FF            CALL 0x0040493a
004539A2  8B F8                     MOV EDI,EAX
004539A4  83 FF FF                  CMP EDI,-0x1
004539A7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004539AA  0F 85 AB 52 00 00         JNZ 0x00458c5b
004539B0  68 58 08 00 00            PUSH 0x858
004539B5  E9 8C 52 00 00            JMP 0x00458c46
switchD_00453947::caseD_2:
004539BA  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004539C0  56                        PUSH ESI
004539C1  8B CB                     MOV ECX,EBX
004539C3  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
004539CD  E8 81 FB FA FF            CALL 0x00403553
004539D2  8B F8                     MOV EDI,EAX
004539D4  83 FF FF                  CMP EDI,-0x1
004539D7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004539DA  0F 85 7B 52 00 00         JNZ 0x00458c5b
004539E0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004539E6  68 5D 08 00 00            PUSH 0x85d
004539EB  68 3C 9D 7A 00            PUSH 0x7a9d3c
004539F0  51                        PUSH ECX
004539F1  E9 5B 52 00 00            JMP 0x00458c51
switchD_00453947::caseD_6:
004539F6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004539FC  56                        PUSH ESI
004539FD  8B CB                     MOV ECX,EBX
004539FF  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00453A09  E8 E5 EC FA FF            CALL 0x004026f3
00453A0E  8B F8                     MOV EDI,EAX
00453A10  83 FF FF                  CMP EDI,-0x1
00453A13  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453A16  0F 85 3F 52 00 00         JNZ 0x00458c5b
00453A1C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453A22  68 62 08 00 00            PUSH 0x862
00453A27  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453A2C  52                        PUSH EDX
00453A2D  E9 1F 52 00 00            JMP 0x00458c51
switchD_00453947::caseD_c:
00453A32  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453A38  56                        PUSH ESI
00453A39  8B CB                     MOV ECX,EBX
00453A3B  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00453A45  E8 92 F9 FA FF            CALL 0x004033dc
00453A4A  8B F8                     MOV EDI,EAX
00453A4C  83 FF FF                  CMP EDI,-0x1
00453A4F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453A52  0F 85 03 52 00 00         JNZ 0x00458c5b
00453A58  68 67 08 00 00            PUSH 0x867
00453A5D  E9 E4 51 00 00            JMP 0x00458c46
switchD_00453947::caseD_11:
00453A62  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453A68  56                        PUSH ESI
00453A69  8B CB                     MOV ECX,EBX
00453A6B  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00453A75  E8 99 D6 FA FF            CALL 0x00401113
00453A7A  8B F8                     MOV EDI,EAX
00453A7C  83 FF FF                  CMP EDI,-0x1
00453A7F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453A82  0F 85 D3 51 00 00         JNZ 0x00458c5b
00453A88  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453A8E  68 6C 08 00 00            PUSH 0x86c
00453A93  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453A98  51                        PUSH ECX
00453A99  E9 B3 51 00 00            JMP 0x00458c51
switchD_00453947::caseD_13:
00453A9E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453AA4  56                        PUSH ESI
00453AA5  8B CB                     MOV ECX,EBX
00453AA7  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00453AB1  E8 5D 17 FB FF            CALL 0x00405213
00453AB6  8B F8                     MOV EDI,EAX
00453AB8  83 FF FF                  CMP EDI,-0x1
00453ABB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453ABE  0F 85 97 51 00 00         JNZ 0x00458c5b
00453AC4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453ACA  68 71 08 00 00            PUSH 0x871
00453ACF  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453AD4  52                        PUSH EDX
00453AD5  E9 77 51 00 00            JMP 0x00458c51
switchD_00453947::caseD_d:
00453ADA  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453AE0  56                        PUSH ESI
00453AE1  8B CB                     MOV ECX,EBX
00453AE3  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00453AED  E8 58 F9 FA FF            CALL 0x0040344a
00453AF2  8B F8                     MOV EDI,EAX
00453AF4  83 FF FF                  CMP EDI,-0x1
00453AF7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453AFA  0F 85 5B 51 00 00         JNZ 0x00458c5b
00453B00  68 76 08 00 00            PUSH 0x876
00453B05  E9 3C 51 00 00            JMP 0x00458c46
switchD_00453947::caseD_4:
00453B0A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453B10  56                        PUSH ESI
00453B11  8B CB                     MOV ECX,EBX
00453B13  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00453B1D  E8 9A 1D FB FF            CALL 0x004058bc
00453B22  8B F8                     MOV EDI,EAX
00453B24  83 FF FF                  CMP EDI,-0x1
00453B27  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453B2A  0F 85 2B 51 00 00         JNZ 0x00458c5b
00453B30  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453B36  68 7B 08 00 00            PUSH 0x87b
00453B3B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453B40  51                        PUSH ECX
00453B41  E9 0B 51 00 00            JMP 0x00458c51
switchD_00453947::caseD_5:
00453B46  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453B4C  56                        PUSH ESI
00453B4D  8B CB                     MOV ECX,EBX
00453B4F  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00453B59  E8 A9 09 FB FF            CALL 0x00404507
00453B5E  8B F8                     MOV EDI,EAX
00453B60  83 FF FF                  CMP EDI,-0x1
00453B63  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453B66  0F 85 EF 50 00 00         JNZ 0x00458c5b
00453B6C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453B72  68 80 08 00 00            PUSH 0x880
00453B77  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453B7C  52                        PUSH EDX
00453B7D  E9 CF 50 00 00            JMP 0x00458c51
switchD_00453947::caseD_f:
00453B82  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453B88  56                        PUSH ESI
00453B89  8B CB                     MOV ECX,EBX
00453B8B  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00453B95  E8 EB 03 FB FF            CALL 0x00403f85
00453B9A  8B F8                     MOV EDI,EAX
00453B9C  83 FF FF                  CMP EDI,-0x1
00453B9F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453BA2  0F 85 B3 50 00 00         JNZ 0x00458c5b
00453BA8  68 85 08 00 00            PUSH 0x885
00453BAD  E9 94 50 00 00            JMP 0x00458c46
switchD_00453947::caseD_14:
00453BB2  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453BB8  56                        PUSH ESI
00453BB9  8B CB                     MOV ECX,EBX
00453BBB  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00453BC5  E8 8E EA FA FF            CALL 0x00402658
00453BCA  8B F8                     MOV EDI,EAX
00453BCC  83 FF FF                  CMP EDI,-0x1
00453BCF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453BD2  0F 85 83 50 00 00         JNZ 0x00458c5b
00453BD8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453BDE  68 8A 08 00 00            PUSH 0x88a
00453BE3  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453BE8  51                        PUSH ECX
00453BE9  E9 63 50 00 00            JMP 0x00458c51
switchD_00453947::caseD_10:
00453BEE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453BF4  56                        PUSH ESI
00453BF5  8B CB                     MOV ECX,EBX
00453BF7  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00453C01  E8 94 FD FA FF            CALL 0x0040399a
00453C06  8B F8                     MOV EDI,EAX
00453C08  83 FF FF                  CMP EDI,-0x1
00453C0B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453C0E  0F 85 47 50 00 00         JNZ 0x00458c5b
00453C14  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453C1A  68 8F 08 00 00            PUSH 0x88f
00453C1F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453C24  52                        PUSH EDX
00453C25  E9 27 50 00 00            JMP 0x00458c51
switchD_00453947::caseD_7:
00453C2A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453C30  56                        PUSH ESI
00453C31  8B CB                     MOV ECX,EBX
00453C33  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00453C3D  E8 5A FB FA FF            CALL 0x0040379c
00453C42  8B F8                     MOV EDI,EAX
00453C44  83 FF FF                  CMP EDI,-0x1
00453C47  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453C4A  0F 85 0B 50 00 00         JNZ 0x00458c5b
00453C50  68 94 08 00 00            PUSH 0x894
00453C55  E9 EC 4F 00 00            JMP 0x00458c46
switchD_00453947::caseD_a:
00453C5A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453C60  56                        PUSH ESI
00453C61  8B CB                     MOV ECX,EBX
00453C63  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00453C6D  E8 2C 1C FB FF            CALL 0x0040589e
00453C72  8B F8                     MOV EDI,EAX
00453C74  83 FF FF                  CMP EDI,-0x1
00453C77  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453C7A  0F 85 DB 4F 00 00         JNZ 0x00458c5b
00453C80  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453C86  68 99 08 00 00            PUSH 0x899
00453C8B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453C90  51                        PUSH ECX
00453C91  E9 BB 4F 00 00            JMP 0x00458c51
switchD_00453947::caseD_9:
00453C96  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453C9C  56                        PUSH ESI
00453C9D  8B CB                     MOV ECX,EBX
00453C9F  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00453CA9  E8 AA EE FA FF            CALL 0x00402b58
00453CAE  8B F8                     MOV EDI,EAX
00453CB0  83 FF FF                  CMP EDI,-0x1
00453CB3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453CB6  0F 85 9F 4F 00 00         JNZ 0x00458c5b
00453CBC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453CC2  68 9E 08 00 00            PUSH 0x89e
00453CC7  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453CCC  52                        PUSH EDX
00453CCD  E9 7F 4F 00 00            JMP 0x00458c51
switchD_00453947::caseD_16:
00453CD2  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453CD8  56                        PUSH ESI
00453CD9  8B CB                     MOV ECX,EBX
00453CDB  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00453CE5  E8 9D 0A FB FF            CALL 0x00404787
00453CEA  8B F8                     MOV EDI,EAX
00453CEC  83 FF FF                  CMP EDI,-0x1
00453CEF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453CF2  0F 85 63 4F 00 00         JNZ 0x00458c5b
00453CF8  68 A3 08 00 00            PUSH 0x8a3
00453CFD  E9 44 4F 00 00            JMP 0x00458c46
switchD_00453947::caseD_15:
00453D02  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453D08  56                        PUSH ESI
00453D09  8B CB                     MOV ECX,EBX
00453D0B  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00453D15  E8 13 1E FB FF            CALL 0x00405b2d
00453D1A  8B F8                     MOV EDI,EAX
00453D1C  83 FF FF                  CMP EDI,-0x1
00453D1F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453D22  0F 85 33 4F 00 00         JNZ 0x00458c5b
00453D28  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453D2E  68 A8 08 00 00            PUSH 0x8a8
00453D33  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453D38  51                        PUSH ECX
00453D39  E9 13 4F 00 00            JMP 0x00458c51
switchD_00453947::caseD_17:
00453D3E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453D44  56                        PUSH ESI
00453D45  8B CB                     MOV ECX,EBX
00453D47  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00453D51  E8 E2 DB FA FF            CALL 0x00401938
00453D56  8B F8                     MOV EDI,EAX
00453D58  83 FF FF                  CMP EDI,-0x1
00453D5B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453D5E  0F 85 F7 4E 00 00         JNZ 0x00458c5b
00453D64  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453D6A  68 AD 08 00 00            PUSH 0x8ad
00453D6F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453D74  52                        PUSH EDX
00453D75  E9 D7 4E 00 00            JMP 0x00458c51
switchD_00453947::caseD_b:
00453D7A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453D80  56                        PUSH ESI
00453D81  8B CB                     MOV ECX,EBX
00453D83  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00453D8D  E8 B4 18 FB FF            CALL 0x00405646
00453D92  8B F8                     MOV EDI,EAX
00453D94  83 FF FF                  CMP EDI,-0x1
00453D97  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453D9A  0F 85 BB 4E 00 00         JNZ 0x00458c5b
00453DA0  68 B2 08 00 00            PUSH 0x8b2
00453DA5  E9 9C 4E 00 00            JMP 0x00458c46
switchD_00453947::caseD_12:
00453DAA  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453DB0  56                        PUSH ESI
00453DB1  8B CB                     MOV ECX,EBX
00453DB3  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00453DBD  E8 22 F8 FA FF            CALL 0x004035e4
00453DC2  8B F8                     MOV EDI,EAX
00453DC4  83 FF FF                  CMP EDI,-0x1
00453DC7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453DCA  0F 85 8B 4E 00 00         JNZ 0x00458c5b
00453DD0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453DD6  68 B7 08 00 00            PUSH 0x8b7
00453DDB  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453DE0  51                        PUSH ECX
00453DE1  E9 6B 4E 00 00            JMP 0x00458c51
switchD_00453947::caseD_8:
00453DE6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453DEC  56                        PUSH ESI
00453DED  8B CB                     MOV ECX,EBX
00453DEF  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00453DF9  E8 8F E5 FA FF            CALL 0x0040238d
00453DFE  8B F8                     MOV EDI,EAX
00453E00  83 FF FF                  CMP EDI,-0x1
00453E03  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453E06  0F 85 4F 4E 00 00         JNZ 0x00458c5b
00453E0C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453E12  68 BC 08 00 00            PUSH 0x8bc
00453E17  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453E1C  52                        PUSH EDX
00453E1D  E9 2F 4E 00 00            JMP 0x00458c51
switchD_00453947::caseD_e:
00453E22  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453E28  56                        PUSH ESI
00453E29  8B CB                     MOV ECX,EBX
00453E2B  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00453E35  E8 FF 10 FB FF            CALL 0x00404f39
00453E3A  8B F8                     MOV EDI,EAX
00453E3C  83 FF FF                  CMP EDI,-0x1
00453E3F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453E42  0F 85 13 4E 00 00         JNZ 0x00458c5b
00453E48  68 C1 08 00 00            PUSH 0x8c1
00453E4D  E9 F4 4D 00 00            JMP 0x00458c46
LAB_00453e52:
00453E52  39 8B DC 02 00 00         CMP dword ptr [EBX + 0x2dc],ECX
00453E58  0F 85 47 05 00 00         JNZ 0x004543a5
00453E5E  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00453E64  3B C6                     CMP EAX,ESI
00453E66  75 28                     JNZ 0x00453e90
00453E68  56                        PUSH ESI
00453E69  8B CB                     MOV ECX,EBX
00453E6B  C7 83 5D 04 00 00 05 00 00 00  MOV dword ptr [EBX + 0x45d],0x5
00453E75  E8 52 0F FB FF            CALL 0x00404dcc
00453E7A  83 F8 FF                  CMP EAX,-0x1
00453E7D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00453E80  0F 85 67 70 00 00         JNZ 0x0045aeed
00453E86  68 CD 08 00 00            PUSH 0x8cd
00453E8B  E9 47 70 00 00            JMP 0x0045aed7
LAB_00453e90:
00453E90  48                        DEC EAX
00453E91  83 F8 16                  CMP EAX,0x16
00453E94  0F 87 53 70 00 00         JA 0x0045aeed
switchD_00453e9a::switchD:
00453E9A  FF 24 85 E8 B4 45 00      JMP dword ptr [EAX*0x4 + 0x45b4e8]
switchD_00453e9a::caseD_1:
00453EA1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453EA7  56                        PUSH ESI
00453EA8  8B CB                     MOV ECX,EBX
00453EAA  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00453EB4  E8 37 FF FA FF            CALL 0x00403df0
00453EB9  8B F8                     MOV EDI,EAX
00453EBB  83 FF FF                  CMP EDI,-0x1
00453EBE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453EC1  0F 85 94 4D 00 00         JNZ 0x00458c5b
00453EC7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453ECD  68 D4 08 00 00            PUSH 0x8d4
00453ED2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453ED7  52                        PUSH EDX
00453ED8  E9 74 4D 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_3:
00453EDD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453EE3  56                        PUSH ESI
00453EE4  8B CB                     MOV ECX,EBX
00453EE6  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00453EF0  E8 45 0A FB FF            CALL 0x0040493a
00453EF5  8B F8                     MOV EDI,EAX
00453EF7  83 FF FF                  CMP EDI,-0x1
00453EFA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453EFD  0F 85 58 4D 00 00         JNZ 0x00458c5b
00453F03  68 D9 08 00 00            PUSH 0x8d9
00453F08  E9 39 4D 00 00            JMP 0x00458c46
switchD_00453e9a::caseD_2:
00453F0D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453F13  56                        PUSH ESI
00453F14  8B CB                     MOV ECX,EBX
00453F16  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00453F20  E8 2E F6 FA FF            CALL 0x00403553
00453F25  8B F8                     MOV EDI,EAX
00453F27  83 FF FF                  CMP EDI,-0x1
00453F2A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453F2D  0F 85 28 4D 00 00         JNZ 0x00458c5b
00453F33  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453F39  68 DE 08 00 00            PUSH 0x8de
00453F3E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453F43  51                        PUSH ECX
00453F44  E9 08 4D 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_6:
00453F49  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453F4F  56                        PUSH ESI
00453F50  8B CB                     MOV ECX,EBX
00453F52  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00453F5C  E8 92 E7 FA FF            CALL 0x004026f3
00453F61  8B F8                     MOV EDI,EAX
00453F63  83 FF FF                  CMP EDI,-0x1
00453F66  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453F69  0F 85 EC 4C 00 00         JNZ 0x00458c5b
00453F6F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00453F75  68 E3 08 00 00            PUSH 0x8e3
00453F7A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453F7F  52                        PUSH EDX
00453F80  E9 CC 4C 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_c:
00453F85  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453F8B  56                        PUSH ESI
00453F8C  8B CB                     MOV ECX,EBX
00453F8E  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00453F98  E8 3F F4 FA FF            CALL 0x004033dc
00453F9D  8B F8                     MOV EDI,EAX
00453F9F  83 FF FF                  CMP EDI,-0x1
00453FA2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453FA5  0F 85 B0 4C 00 00         JNZ 0x00458c5b
00453FAB  68 E8 08 00 00            PUSH 0x8e8
00453FB0  E9 91 4C 00 00            JMP 0x00458c46
switchD_00453e9a::caseD_11:
00453FB5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453FBB  56                        PUSH ESI
00453FBC  8B CB                     MOV ECX,EBX
00453FBE  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00453FC8  E8 46 D1 FA FF            CALL 0x00401113
00453FCD  8B F8                     MOV EDI,EAX
00453FCF  83 FF FF                  CMP EDI,-0x1
00453FD2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00453FD5  0F 85 80 4C 00 00         JNZ 0x00458c5b
00453FDB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00453FE1  68 ED 08 00 00            PUSH 0x8ed
00453FE6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00453FEB  51                        PUSH ECX
00453FEC  E9 60 4C 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_13:
00453FF1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00453FF7  56                        PUSH ESI
00453FF8  8B CB                     MOV ECX,EBX
00453FFA  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00454004  E8 0A 12 FB FF            CALL 0x00405213
00454009  8B F8                     MOV EDI,EAX
0045400B  83 FF FF                  CMP EDI,-0x1
0045400E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454011  0F 85 44 4C 00 00         JNZ 0x00458c5b
00454017  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045401D  68 F2 08 00 00            PUSH 0x8f2
00454022  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454027  52                        PUSH EDX
00454028  E9 24 4C 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_d:
0045402D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454033  56                        PUSH ESI
00454034  8B CB                     MOV ECX,EBX
00454036  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00454040  E8 05 F4 FA FF            CALL 0x0040344a
00454045  8B F8                     MOV EDI,EAX
00454047  83 FF FF                  CMP EDI,-0x1
0045404A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045404D  0F 85 08 4C 00 00         JNZ 0x00458c5b
00454053  68 F7 08 00 00            PUSH 0x8f7
00454058  E9 E9 4B 00 00            JMP 0x00458c46
switchD_00453e9a::caseD_4:
0045405D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454063  56                        PUSH ESI
00454064  8B CB                     MOV ECX,EBX
00454066  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00454070  E8 47 18 FB FF            CALL 0x004058bc
00454075  8B F8                     MOV EDI,EAX
00454077  83 FF FF                  CMP EDI,-0x1
0045407A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045407D  0F 85 D8 4B 00 00         JNZ 0x00458c5b
00454083  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454089  68 FC 08 00 00            PUSH 0x8fc
0045408E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454093  51                        PUSH ECX
00454094  E9 B8 4B 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_5:
00454099  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045409F  56                        PUSH ESI
004540A0  8B CB                     MOV ECX,EBX
004540A2  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
004540AC  E8 56 04 FB FF            CALL 0x00404507
004540B1  8B F8                     MOV EDI,EAX
004540B3  83 FF FF                  CMP EDI,-0x1
004540B6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004540B9  0F 85 9C 4B 00 00         JNZ 0x00458c5b
004540BF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004540C5  68 01 09 00 00            PUSH 0x901
004540CA  68 3C 9D 7A 00            PUSH 0x7a9d3c
004540CF  52                        PUSH EDX
004540D0  E9 7C 4B 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_f:
004540D5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004540DB  56                        PUSH ESI
004540DC  8B CB                     MOV ECX,EBX
004540DE  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
004540E8  E8 98 FE FA FF            CALL 0x00403f85
004540ED  8B F8                     MOV EDI,EAX
004540EF  83 FF FF                  CMP EDI,-0x1
004540F2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004540F5  0F 85 60 4B 00 00         JNZ 0x00458c5b
004540FB  68 06 09 00 00            PUSH 0x906
00454100  E9 41 4B 00 00            JMP 0x00458c46
switchD_00453e9a::caseD_14:
00454105  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045410B  56                        PUSH ESI
0045410C  8B CB                     MOV ECX,EBX
0045410E  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00454118  E8 3B E5 FA FF            CALL 0x00402658
0045411D  8B F8                     MOV EDI,EAX
0045411F  83 FF FF                  CMP EDI,-0x1
00454122  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454125  0F 85 30 4B 00 00         JNZ 0x00458c5b
0045412B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454131  68 0B 09 00 00            PUSH 0x90b
00454136  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045413B  51                        PUSH ECX
0045413C  E9 10 4B 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_10:
00454141  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454147  56                        PUSH ESI
00454148  8B CB                     MOV ECX,EBX
0045414A  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00454154  E8 41 F8 FA FF            CALL 0x0040399a
00454159  8B F8                     MOV EDI,EAX
0045415B  83 FF FF                  CMP EDI,-0x1
0045415E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454161  0F 85 F4 4A 00 00         JNZ 0x00458c5b
00454167  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045416D  68 10 09 00 00            PUSH 0x910
00454172  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454177  52                        PUSH EDX
00454178  E9 D4 4A 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_7:
0045417D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454183  56                        PUSH ESI
00454184  8B CB                     MOV ECX,EBX
00454186  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00454190  E8 07 F6 FA FF            CALL 0x0040379c
00454195  8B F8                     MOV EDI,EAX
00454197  83 FF FF                  CMP EDI,-0x1
0045419A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045419D  0F 85 B8 4A 00 00         JNZ 0x00458c5b
004541A3  68 15 09 00 00            PUSH 0x915
004541A8  E9 99 4A 00 00            JMP 0x00458c46
switchD_00453e9a::caseD_a:
004541AD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004541B3  56                        PUSH ESI
004541B4  8B CB                     MOV ECX,EBX
004541B6  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
004541C0  E8 D9 16 FB FF            CALL 0x0040589e
004541C5  8B F8                     MOV EDI,EAX
004541C7  83 FF FF                  CMP EDI,-0x1
004541CA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004541CD  0F 85 88 4A 00 00         JNZ 0x00458c5b
004541D3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004541D9  68 1A 09 00 00            PUSH 0x91a
004541DE  68 3C 9D 7A 00            PUSH 0x7a9d3c
004541E3  51                        PUSH ECX
004541E4  E9 68 4A 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_9:
004541E9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004541EF  56                        PUSH ESI
004541F0  8B CB                     MOV ECX,EBX
004541F2  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
004541FC  E8 57 E9 FA FF            CALL 0x00402b58
00454201  8B F8                     MOV EDI,EAX
00454203  83 FF FF                  CMP EDI,-0x1
00454206  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454209  0F 85 4C 4A 00 00         JNZ 0x00458c5b
0045420F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454215  68 1F 09 00 00            PUSH 0x91f
0045421A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045421F  52                        PUSH EDX
00454220  E9 2C 4A 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_16:
00454225  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045422B  56                        PUSH ESI
0045422C  8B CB                     MOV ECX,EBX
0045422E  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00454238  E8 4A 05 FB FF            CALL 0x00404787
0045423D  8B F8                     MOV EDI,EAX
0045423F  83 FF FF                  CMP EDI,-0x1
00454242  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454245  0F 85 10 4A 00 00         JNZ 0x00458c5b
0045424B  68 24 09 00 00            PUSH 0x924
00454250  E9 F1 49 00 00            JMP 0x00458c46
switchD_00453e9a::caseD_15:
00454255  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045425B  56                        PUSH ESI
0045425C  8B CB                     MOV ECX,EBX
0045425E  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00454268  E8 C0 18 FB FF            CALL 0x00405b2d
0045426D  8B F8                     MOV EDI,EAX
0045426F  83 FF FF                  CMP EDI,-0x1
00454272  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454275  0F 85 E0 49 00 00         JNZ 0x00458c5b
0045427B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454281  68 29 09 00 00            PUSH 0x929
00454286  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045428B  51                        PUSH ECX
0045428C  E9 C0 49 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_17:
00454291  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454297  56                        PUSH ESI
00454298  8B CB                     MOV ECX,EBX
0045429A  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
004542A4  E8 8F D6 FA FF            CALL 0x00401938
004542A9  8B F8                     MOV EDI,EAX
004542AB  83 FF FF                  CMP EDI,-0x1
004542AE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004542B1  0F 85 A4 49 00 00         JNZ 0x00458c5b
004542B7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004542BD  68 2E 09 00 00            PUSH 0x92e
004542C2  68 3C 9D 7A 00            PUSH 0x7a9d3c
004542C7  52                        PUSH EDX
004542C8  E9 84 49 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_b:
004542CD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004542D3  56                        PUSH ESI
004542D4  8B CB                     MOV ECX,EBX
004542D6  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
004542E0  E8 61 13 FB FF            CALL 0x00405646
004542E5  8B F8                     MOV EDI,EAX
004542E7  83 FF FF                  CMP EDI,-0x1
004542EA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004542ED  0F 85 68 49 00 00         JNZ 0x00458c5b
004542F3  68 33 09 00 00            PUSH 0x933
004542F8  E9 49 49 00 00            JMP 0x00458c46
switchD_00453e9a::caseD_12:
004542FD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454303  56                        PUSH ESI
00454304  8B CB                     MOV ECX,EBX
00454306  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00454310  E8 CF F2 FA FF            CALL 0x004035e4
00454315  8B F8                     MOV EDI,EAX
00454317  83 FF FF                  CMP EDI,-0x1
0045431A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045431D  0F 85 38 49 00 00         JNZ 0x00458c5b
00454323  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454329  68 38 09 00 00            PUSH 0x938
0045432E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454333  51                        PUSH ECX
00454334  E9 18 49 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_8:
00454339  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045433F  56                        PUSH ESI
00454340  8B CB                     MOV ECX,EBX
00454342  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
0045434C  E8 3C E0 FA FF            CALL 0x0040238d
00454351  8B F8                     MOV EDI,EAX
00454353  83 FF FF                  CMP EDI,-0x1
00454356  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454359  0F 85 FC 48 00 00         JNZ 0x00458c5b
0045435F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454365  68 3D 09 00 00            PUSH 0x93d
0045436A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045436F  52                        PUSH EDX
00454370  E9 DC 48 00 00            JMP 0x00458c51
switchD_00453e9a::caseD_e:
00454375  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045437B  56                        PUSH ESI
0045437C  8B CB                     MOV ECX,EBX
0045437E  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00454388  E8 AC 0B FB FF            CALL 0x00404f39
0045438D  8B F8                     MOV EDI,EAX
0045438F  83 FF FF                  CMP EDI,-0x1
00454392  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454395  0F 85 C0 48 00 00         JNZ 0x00458c5b
0045439B  68 42 09 00 00            PUSH 0x942
004543A0  E9 A1 48 00 00            JMP 0x00458c46
LAB_004543a5:
004543A5  39 8B 04 03 00 00         CMP dword ptr [EBX + 0x304],ECX
004543AB  0F 85 47 05 00 00         JNZ 0x004548f8
004543B1  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
004543B7  3B C6                     CMP EAX,ESI
004543B9  75 28                     JNZ 0x004543e3
004543BB  56                        PUSH ESI
004543BC  8B CB                     MOV ECX,EBX
004543BE  C7 83 5D 04 00 00 0F 00 00 00  MOV dword ptr [EBX + 0x45d],0xf
004543C8  E8 4F 0A FB FF            CALL 0x00404e1c
004543CD  83 F8 FF                  CMP EAX,-0x1
004543D0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004543D3  0F 85 14 6B 00 00         JNZ 0x0045aeed
004543D9  68 4E 09 00 00            PUSH 0x94e
004543DE  E9 F4 6A 00 00            JMP 0x0045aed7
LAB_004543e3:
004543E3  48                        DEC EAX
004543E4  83 F8 16                  CMP EAX,0x16
004543E7  0F 87 00 6B 00 00         JA 0x0045aeed
switchD_004543ed::switchD:
004543ED  FF 24 85 44 B5 45 00      JMP dword ptr [EAX*0x4 + 0x45b544]
switchD_004543ed::caseD_1:
004543F4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004543FA  56                        PUSH ESI
004543FB  8B CB                     MOV ECX,EBX
004543FD  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00454407  E8 E4 F9 FA FF            CALL 0x00403df0
0045440C  8B F8                     MOV EDI,EAX
0045440E  83 FF FF                  CMP EDI,-0x1
00454411  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454414  0F 85 41 48 00 00         JNZ 0x00458c5b
0045441A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454420  68 55 09 00 00            PUSH 0x955
00454425  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045442A  52                        PUSH EDX
0045442B  E9 21 48 00 00            JMP 0x00458c51
switchD_004543ed::caseD_3:
00454430  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454436  56                        PUSH ESI
00454437  8B CB                     MOV ECX,EBX
00454439  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00454443  E8 F2 04 FB FF            CALL 0x0040493a
00454448  8B F8                     MOV EDI,EAX
0045444A  83 FF FF                  CMP EDI,-0x1
0045444D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454450  0F 85 05 48 00 00         JNZ 0x00458c5b
00454456  68 5A 09 00 00            PUSH 0x95a
0045445B  E9 E6 47 00 00            JMP 0x00458c46
switchD_004543ed::caseD_2:
00454460  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454466  56                        PUSH ESI
00454467  8B CB                     MOV ECX,EBX
00454469  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00454473  E8 DB F0 FA FF            CALL 0x00403553
00454478  8B F8                     MOV EDI,EAX
0045447A  83 FF FF                  CMP EDI,-0x1
0045447D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454480  0F 85 D5 47 00 00         JNZ 0x00458c5b
00454486  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045448C  68 5F 09 00 00            PUSH 0x95f
00454491  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454496  51                        PUSH ECX
00454497  E9 B5 47 00 00            JMP 0x00458c51
switchD_004543ed::caseD_6:
0045449C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004544A2  56                        PUSH ESI
004544A3  8B CB                     MOV ECX,EBX
004544A5  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
004544AF  E8 3F E2 FA FF            CALL 0x004026f3
004544B4  8B F8                     MOV EDI,EAX
004544B6  83 FF FF                  CMP EDI,-0x1
004544B9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004544BC  0F 85 99 47 00 00         JNZ 0x00458c5b
004544C2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004544C8  68 64 09 00 00            PUSH 0x964
004544CD  68 3C 9D 7A 00            PUSH 0x7a9d3c
004544D2  52                        PUSH EDX
004544D3  E9 79 47 00 00            JMP 0x00458c51
switchD_004543ed::caseD_c:
004544D8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004544DE  56                        PUSH ESI
004544DF  8B CB                     MOV ECX,EBX
004544E1  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
004544EB  E8 EC EE FA FF            CALL 0x004033dc
004544F0  8B F8                     MOV EDI,EAX
004544F2  83 FF FF                  CMP EDI,-0x1
004544F5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004544F8  0F 85 5D 47 00 00         JNZ 0x00458c5b
004544FE  68 69 09 00 00            PUSH 0x969
00454503  E9 3E 47 00 00            JMP 0x00458c46
switchD_004543ed::caseD_11:
00454508  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045450E  56                        PUSH ESI
0045450F  8B CB                     MOV ECX,EBX
00454511  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
0045451B  E8 F3 CB FA FF            CALL 0x00401113
00454520  8B F8                     MOV EDI,EAX
00454522  83 FF FF                  CMP EDI,-0x1
00454525  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454528  0F 85 2D 47 00 00         JNZ 0x00458c5b
0045452E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454534  68 6E 09 00 00            PUSH 0x96e
00454539  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045453E  51                        PUSH ECX
0045453F  E9 0D 47 00 00            JMP 0x00458c51
switchD_004543ed::caseD_13:
00454544  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045454A  56                        PUSH ESI
0045454B  8B CB                     MOV ECX,EBX
0045454D  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00454557  E8 B7 0C FB FF            CALL 0x00405213
0045455C  8B F8                     MOV EDI,EAX
0045455E  83 FF FF                  CMP EDI,-0x1
00454561  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454564  0F 85 F1 46 00 00         JNZ 0x00458c5b
0045456A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454570  68 73 09 00 00            PUSH 0x973
00454575  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045457A  52                        PUSH EDX
0045457B  E9 D1 46 00 00            JMP 0x00458c51
switchD_004543ed::caseD_d:
00454580  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454586  56                        PUSH ESI
00454587  8B CB                     MOV ECX,EBX
00454589  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00454593  E8 B2 EE FA FF            CALL 0x0040344a
00454598  8B F8                     MOV EDI,EAX
0045459A  83 FF FF                  CMP EDI,-0x1
0045459D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004545A0  0F 85 B5 46 00 00         JNZ 0x00458c5b
004545A6  68 78 09 00 00            PUSH 0x978
004545AB  E9 96 46 00 00            JMP 0x00458c46
switchD_004543ed::caseD_4:
004545B0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004545B6  56                        PUSH ESI
004545B7  8B CB                     MOV ECX,EBX
004545B9  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
004545C3  E8 F4 12 FB FF            CALL 0x004058bc
004545C8  8B F8                     MOV EDI,EAX
004545CA  83 FF FF                  CMP EDI,-0x1
004545CD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004545D0  0F 85 85 46 00 00         JNZ 0x00458c5b
004545D6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004545DC  68 7D 09 00 00            PUSH 0x97d
004545E1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004545E6  51                        PUSH ECX
004545E7  E9 65 46 00 00            JMP 0x00458c51
switchD_004543ed::caseD_5:
004545EC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004545F2  56                        PUSH ESI
004545F3  8B CB                     MOV ECX,EBX
004545F5  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
004545FF  E8 03 FF FA FF            CALL 0x00404507
00454604  8B F8                     MOV EDI,EAX
00454606  83 FF FF                  CMP EDI,-0x1
00454609  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045460C  0F 85 49 46 00 00         JNZ 0x00458c5b
00454612  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454618  68 82 09 00 00            PUSH 0x982
0045461D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454622  52                        PUSH EDX
00454623  E9 29 46 00 00            JMP 0x00458c51
switchD_004543ed::caseD_f:
00454628  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045462E  56                        PUSH ESI
0045462F  8B CB                     MOV ECX,EBX
00454631  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
0045463B  E8 45 F9 FA FF            CALL 0x00403f85
00454640  8B F8                     MOV EDI,EAX
00454642  83 FF FF                  CMP EDI,-0x1
00454645  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454648  0F 85 0D 46 00 00         JNZ 0x00458c5b
0045464E  68 87 09 00 00            PUSH 0x987
00454653  E9 EE 45 00 00            JMP 0x00458c46
switchD_004543ed::caseD_14:
00454658  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045465E  56                        PUSH ESI
0045465F  8B CB                     MOV ECX,EBX
00454661  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
0045466B  E8 E8 DF FA FF            CALL 0x00402658
00454670  8B F8                     MOV EDI,EAX
00454672  83 FF FF                  CMP EDI,-0x1
00454675  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454678  0F 85 DD 45 00 00         JNZ 0x00458c5b
0045467E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454684  68 8C 09 00 00            PUSH 0x98c
00454689  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045468E  51                        PUSH ECX
0045468F  E9 BD 45 00 00            JMP 0x00458c51
switchD_004543ed::caseD_10:
00454694  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045469A  56                        PUSH ESI
0045469B  8B CB                     MOV ECX,EBX
0045469D  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
004546A7  E8 EE F2 FA FF            CALL 0x0040399a
004546AC  8B F8                     MOV EDI,EAX
004546AE  83 FF FF                  CMP EDI,-0x1
004546B1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004546B4  0F 85 A1 45 00 00         JNZ 0x00458c5b
004546BA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004546C0  68 91 09 00 00            PUSH 0x991
004546C5  68 3C 9D 7A 00            PUSH 0x7a9d3c
004546CA  52                        PUSH EDX
004546CB  E9 81 45 00 00            JMP 0x00458c51
switchD_004543ed::caseD_7:
004546D0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004546D6  56                        PUSH ESI
004546D7  8B CB                     MOV ECX,EBX
004546D9  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
004546E3  E8 B4 F0 FA FF            CALL 0x0040379c
004546E8  8B F8                     MOV EDI,EAX
004546EA  83 FF FF                  CMP EDI,-0x1
004546ED  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004546F0  0F 85 65 45 00 00         JNZ 0x00458c5b
004546F6  68 96 09 00 00            PUSH 0x996
004546FB  E9 46 45 00 00            JMP 0x00458c46
switchD_004543ed::caseD_a:
00454700  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454706  56                        PUSH ESI
00454707  8B CB                     MOV ECX,EBX
00454709  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00454713  E8 86 11 FB FF            CALL 0x0040589e
00454718  8B F8                     MOV EDI,EAX
0045471A  83 FF FF                  CMP EDI,-0x1
0045471D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454720  0F 85 35 45 00 00         JNZ 0x00458c5b
00454726  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045472C  68 9B 09 00 00            PUSH 0x99b
00454731  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454736  51                        PUSH ECX
00454737  E9 15 45 00 00            JMP 0x00458c51
switchD_004543ed::caseD_9:
0045473C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454742  56                        PUSH ESI
00454743  8B CB                     MOV ECX,EBX
00454745  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
0045474F  E8 04 E4 FA FF            CALL 0x00402b58
00454754  8B F8                     MOV EDI,EAX
00454756  83 FF FF                  CMP EDI,-0x1
00454759  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045475C  0F 85 F9 44 00 00         JNZ 0x00458c5b
00454762  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454768  68 A0 09 00 00            PUSH 0x9a0
0045476D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454772  52                        PUSH EDX
00454773  E9 D9 44 00 00            JMP 0x00458c51
switchD_004543ed::caseD_16:
00454778  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045477E  56                        PUSH ESI
0045477F  8B CB                     MOV ECX,EBX
00454781  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
0045478B  E8 F7 FF FA FF            CALL 0x00404787
00454790  8B F8                     MOV EDI,EAX
00454792  83 FF FF                  CMP EDI,-0x1
00454795  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454798  0F 85 BD 44 00 00         JNZ 0x00458c5b
0045479E  68 A5 09 00 00            PUSH 0x9a5
004547A3  E9 9E 44 00 00            JMP 0x00458c46
switchD_004543ed::caseD_15:
004547A8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004547AE  56                        PUSH ESI
004547AF  8B CB                     MOV ECX,EBX
004547B1  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
004547BB  E8 6D 13 FB FF            CALL 0x00405b2d
004547C0  8B F8                     MOV EDI,EAX
004547C2  83 FF FF                  CMP EDI,-0x1
004547C5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004547C8  0F 85 8D 44 00 00         JNZ 0x00458c5b
004547CE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004547D4  68 AA 09 00 00            PUSH 0x9aa
004547D9  68 3C 9D 7A 00            PUSH 0x7a9d3c
004547DE  51                        PUSH ECX
004547DF  E9 6D 44 00 00            JMP 0x00458c51
switchD_004543ed::caseD_17:
004547E4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004547EA  56                        PUSH ESI
004547EB  8B CB                     MOV ECX,EBX
004547ED  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
004547F7  E8 3C D1 FA FF            CALL 0x00401938
004547FC  8B F8                     MOV EDI,EAX
004547FE  83 FF FF                  CMP EDI,-0x1
00454801  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454804  0F 85 51 44 00 00         JNZ 0x00458c5b
0045480A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454810  68 AF 09 00 00            PUSH 0x9af
00454815  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045481A  52                        PUSH EDX
0045481B  E9 31 44 00 00            JMP 0x00458c51
switchD_004543ed::caseD_b:
00454820  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454826  56                        PUSH ESI
00454827  8B CB                     MOV ECX,EBX
00454829  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00454833  E8 0E 0E FB FF            CALL 0x00405646
00454838  8B F8                     MOV EDI,EAX
0045483A  83 FF FF                  CMP EDI,-0x1
0045483D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454840  0F 85 15 44 00 00         JNZ 0x00458c5b
00454846  68 B4 09 00 00            PUSH 0x9b4
0045484B  E9 F6 43 00 00            JMP 0x00458c46
switchD_004543ed::caseD_12:
00454850  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454856  56                        PUSH ESI
00454857  8B CB                     MOV ECX,EBX
00454859  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00454863  E8 7C ED FA FF            CALL 0x004035e4
00454868  8B F8                     MOV EDI,EAX
0045486A  83 FF FF                  CMP EDI,-0x1
0045486D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454870  0F 85 E5 43 00 00         JNZ 0x00458c5b
00454876  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045487C  68 B9 09 00 00            PUSH 0x9b9
00454881  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454886  51                        PUSH ECX
00454887  E9 C5 43 00 00            JMP 0x00458c51
switchD_004543ed::caseD_8:
0045488C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454892  56                        PUSH ESI
00454893  8B CB                     MOV ECX,EBX
00454895  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
0045489F  E8 E9 DA FA FF            CALL 0x0040238d
004548A4  8B F8                     MOV EDI,EAX
004548A6  83 FF FF                  CMP EDI,-0x1
004548A9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004548AC  0F 85 A9 43 00 00         JNZ 0x00458c5b
004548B2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004548B8  68 BE 09 00 00            PUSH 0x9be
004548BD  68 3C 9D 7A 00            PUSH 0x7a9d3c
004548C2  52                        PUSH EDX
004548C3  E9 89 43 00 00            JMP 0x00458c51
switchD_004543ed::caseD_e:
004548C8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004548CE  56                        PUSH ESI
004548CF  8B CB                     MOV ECX,EBX
004548D1  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
004548DB  E8 59 06 FB FF            CALL 0x00404f39
004548E0  8B F8                     MOV EDI,EAX
004548E2  83 FF FF                  CMP EDI,-0x1
004548E5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004548E8  0F 85 6D 43 00 00         JNZ 0x00458c5b
004548EE  68 C3 09 00 00            PUSH 0x9c3
004548F3  E9 4E 43 00 00            JMP 0x00458c46
LAB_004548f8:
004548F8  39 8B 14 03 00 00         CMP dword ptr [EBX + 0x314],ECX
004548FE  0F 85 47 05 00 00         JNZ 0x00454e4b
00454904  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
0045490A  3B C6                     CMP EAX,ESI
0045490C  75 28                     JNZ 0x00454936
0045490E  56                        PUSH ESI
0045490F  8B CB                     MOV ECX,EBX
00454911  C7 83 5D 04 00 00 14 00 00 00  MOV dword ptr [EBX + 0x45d],0x14
0045491B  E8 E8 04 FB FF            CALL 0x00404e08
00454920  83 F8 FF                  CMP EAX,-0x1
00454923  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00454926  0F 85 C1 65 00 00         JNZ 0x0045aeed
0045492C  68 CF 09 00 00            PUSH 0x9cf
00454931  E9 A1 65 00 00            JMP 0x0045aed7
LAB_00454936:
00454936  48                        DEC EAX
00454937  83 F8 16                  CMP EAX,0x16
0045493A  0F 87 AD 65 00 00         JA 0x0045aeed
switchD_00454940::switchD:
00454940  FF 24 85 A0 B5 45 00      JMP dword ptr [EAX*0x4 + 0x45b5a0]
switchD_00454940::caseD_1:
00454947  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045494D  56                        PUSH ESI
0045494E  8B CB                     MOV ECX,EBX
00454950  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
0045495A  E8 91 F4 FA FF            CALL 0x00403df0
0045495F  8B F8                     MOV EDI,EAX
00454961  83 FF FF                  CMP EDI,-0x1
00454964  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454967  0F 85 EE 42 00 00         JNZ 0x00458c5b
0045496D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454973  68 D6 09 00 00            PUSH 0x9d6
00454978  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045497D  52                        PUSH EDX
0045497E  E9 CE 42 00 00            JMP 0x00458c51
switchD_00454940::caseD_3:
00454983  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454989  56                        PUSH ESI
0045498A  8B CB                     MOV ECX,EBX
0045498C  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00454996  E8 9F FF FA FF            CALL 0x0040493a
0045499B  8B F8                     MOV EDI,EAX
0045499D  83 FF FF                  CMP EDI,-0x1
004549A0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004549A3  0F 85 B2 42 00 00         JNZ 0x00458c5b
004549A9  68 DB 09 00 00            PUSH 0x9db
004549AE  E9 93 42 00 00            JMP 0x00458c46
switchD_00454940::caseD_2:
004549B3  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004549B9  56                        PUSH ESI
004549BA  8B CB                     MOV ECX,EBX
004549BC  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
004549C6  E8 88 EB FA FF            CALL 0x00403553
004549CB  8B F8                     MOV EDI,EAX
004549CD  83 FF FF                  CMP EDI,-0x1
004549D0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004549D3  0F 85 82 42 00 00         JNZ 0x00458c5b
004549D9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004549DF  68 E0 09 00 00            PUSH 0x9e0
004549E4  68 3C 9D 7A 00            PUSH 0x7a9d3c
004549E9  51                        PUSH ECX
004549EA  E9 62 42 00 00            JMP 0x00458c51
switchD_00454940::caseD_6:
004549EF  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004549F5  56                        PUSH ESI
004549F6  8B CB                     MOV ECX,EBX
004549F8  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00454A02  E8 EC DC FA FF            CALL 0x004026f3
00454A07  8B F8                     MOV EDI,EAX
00454A09  83 FF FF                  CMP EDI,-0x1
00454A0C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454A0F  0F 85 46 42 00 00         JNZ 0x00458c5b
00454A15  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454A1B  68 E5 09 00 00            PUSH 0x9e5
00454A20  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454A25  52                        PUSH EDX
00454A26  E9 26 42 00 00            JMP 0x00458c51
switchD_00454940::caseD_c:
00454A2B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454A31  56                        PUSH ESI
00454A32  8B CB                     MOV ECX,EBX
00454A34  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00454A3E  E8 99 E9 FA FF            CALL 0x004033dc
00454A43  8B F8                     MOV EDI,EAX
00454A45  83 FF FF                  CMP EDI,-0x1
00454A48  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454A4B  0F 85 0A 42 00 00         JNZ 0x00458c5b
00454A51  68 EA 09 00 00            PUSH 0x9ea
00454A56  E9 EB 41 00 00            JMP 0x00458c46
switchD_00454940::caseD_11:
00454A5B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454A61  56                        PUSH ESI
00454A62  8B CB                     MOV ECX,EBX
00454A64  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00454A6E  E8 A0 C6 FA FF            CALL 0x00401113
00454A73  8B F8                     MOV EDI,EAX
00454A75  83 FF FF                  CMP EDI,-0x1
00454A78  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454A7B  0F 85 DA 41 00 00         JNZ 0x00458c5b
00454A81  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454A87  68 EF 09 00 00            PUSH 0x9ef
00454A8C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454A91  51                        PUSH ECX
00454A92  E9 BA 41 00 00            JMP 0x00458c51
switchD_00454940::caseD_13:
00454A97  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454A9D  56                        PUSH ESI
00454A9E  8B CB                     MOV ECX,EBX
00454AA0  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00454AAA  E8 64 07 FB FF            CALL 0x00405213
00454AAF  8B F8                     MOV EDI,EAX
00454AB1  83 FF FF                  CMP EDI,-0x1
00454AB4  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454AB7  0F 85 9E 41 00 00         JNZ 0x00458c5b
00454ABD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454AC3  68 F4 09 00 00            PUSH 0x9f4
00454AC8  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454ACD  52                        PUSH EDX
00454ACE  E9 7E 41 00 00            JMP 0x00458c51
switchD_00454940::caseD_d:
00454AD3  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454AD9  56                        PUSH ESI
00454ADA  8B CB                     MOV ECX,EBX
00454ADC  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00454AE6  E8 5F E9 FA FF            CALL 0x0040344a
00454AEB  8B F8                     MOV EDI,EAX
00454AED  83 FF FF                  CMP EDI,-0x1
00454AF0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454AF3  0F 85 62 41 00 00         JNZ 0x00458c5b
00454AF9  68 F9 09 00 00            PUSH 0x9f9
00454AFE  E9 43 41 00 00            JMP 0x00458c46
switchD_00454940::caseD_4:
00454B03  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454B09  56                        PUSH ESI
00454B0A  8B CB                     MOV ECX,EBX
00454B0C  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00454B16  E8 A1 0D FB FF            CALL 0x004058bc
00454B1B  8B F8                     MOV EDI,EAX
00454B1D  83 FF FF                  CMP EDI,-0x1
00454B20  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454B23  0F 85 32 41 00 00         JNZ 0x00458c5b
00454B29  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454B2F  68 FE 09 00 00            PUSH 0x9fe
00454B34  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454B39  51                        PUSH ECX
00454B3A  E9 12 41 00 00            JMP 0x00458c51
switchD_00454940::caseD_5:
00454B3F  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454B45  56                        PUSH ESI
00454B46  8B CB                     MOV ECX,EBX
00454B48  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00454B52  E8 B0 F9 FA FF            CALL 0x00404507
00454B57  8B F8                     MOV EDI,EAX
00454B59  83 FF FF                  CMP EDI,-0x1
00454B5C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454B5F  0F 85 F6 40 00 00         JNZ 0x00458c5b
00454B65  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454B6B  68 03 0A 00 00            PUSH 0xa03
00454B70  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454B75  52                        PUSH EDX
00454B76  E9 D6 40 00 00            JMP 0x00458c51
switchD_00454940::caseD_f:
00454B7B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454B81  56                        PUSH ESI
00454B82  8B CB                     MOV ECX,EBX
00454B84  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00454B8E  E8 F2 F3 FA FF            CALL 0x00403f85
00454B93  8B F8                     MOV EDI,EAX
00454B95  83 FF FF                  CMP EDI,-0x1
00454B98  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454B9B  0F 85 BA 40 00 00         JNZ 0x00458c5b
00454BA1  68 08 0A 00 00            PUSH 0xa08
00454BA6  E9 9B 40 00 00            JMP 0x00458c46
switchD_00454940::caseD_14:
00454BAB  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454BB1  56                        PUSH ESI
00454BB2  8B CB                     MOV ECX,EBX
00454BB4  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00454BBE  E8 95 DA FA FF            CALL 0x00402658
00454BC3  8B F8                     MOV EDI,EAX
00454BC5  83 FF FF                  CMP EDI,-0x1
00454BC8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454BCB  0F 85 8A 40 00 00         JNZ 0x00458c5b
00454BD1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454BD7  68 0D 0A 00 00            PUSH 0xa0d
00454BDC  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454BE1  51                        PUSH ECX
00454BE2  E9 6A 40 00 00            JMP 0x00458c51
switchD_00454940::caseD_10:
00454BE7  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454BED  56                        PUSH ESI
00454BEE  8B CB                     MOV ECX,EBX
00454BF0  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00454BFA  E8 9B ED FA FF            CALL 0x0040399a
00454BFF  8B F8                     MOV EDI,EAX
00454C01  83 FF FF                  CMP EDI,-0x1
00454C04  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454C07  0F 85 4E 40 00 00         JNZ 0x00458c5b
00454C0D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454C13  68 12 0A 00 00            PUSH 0xa12
00454C18  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454C1D  52                        PUSH EDX
00454C1E  E9 2E 40 00 00            JMP 0x00458c51
switchD_00454940::caseD_7:
00454C23  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454C29  56                        PUSH ESI
00454C2A  8B CB                     MOV ECX,EBX
00454C2C  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00454C36  E8 61 EB FA FF            CALL 0x0040379c
00454C3B  8B F8                     MOV EDI,EAX
00454C3D  83 FF FF                  CMP EDI,-0x1
00454C40  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454C43  0F 85 12 40 00 00         JNZ 0x00458c5b
00454C49  68 17 0A 00 00            PUSH 0xa17
00454C4E  E9 F3 3F 00 00            JMP 0x00458c46
switchD_00454940::caseD_a:
00454C53  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454C59  56                        PUSH ESI
00454C5A  8B CB                     MOV ECX,EBX
00454C5C  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00454C66  E8 33 0C FB FF            CALL 0x0040589e
00454C6B  8B F8                     MOV EDI,EAX
00454C6D  83 FF FF                  CMP EDI,-0x1
00454C70  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454C73  0F 85 E2 3F 00 00         JNZ 0x00458c5b
00454C79  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454C7F  68 1C 0A 00 00            PUSH 0xa1c
00454C84  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454C89  51                        PUSH ECX
00454C8A  E9 C2 3F 00 00            JMP 0x00458c51
switchD_00454940::caseD_9:
00454C8F  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454C95  56                        PUSH ESI
00454C96  8B CB                     MOV ECX,EBX
00454C98  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00454CA2  E8 B1 DE FA FF            CALL 0x00402b58
00454CA7  8B F8                     MOV EDI,EAX
00454CA9  83 FF FF                  CMP EDI,-0x1
00454CAC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454CAF  0F 85 A6 3F 00 00         JNZ 0x00458c5b
00454CB5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454CBB  68 21 0A 00 00            PUSH 0xa21
00454CC0  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454CC5  52                        PUSH EDX
00454CC6  E9 86 3F 00 00            JMP 0x00458c51
switchD_00454940::caseD_16:
00454CCB  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454CD1  56                        PUSH ESI
00454CD2  8B CB                     MOV ECX,EBX
00454CD4  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00454CDE  E8 A4 FA FA FF            CALL 0x00404787
00454CE3  8B F8                     MOV EDI,EAX
00454CE5  83 FF FF                  CMP EDI,-0x1
00454CE8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454CEB  0F 85 6A 3F 00 00         JNZ 0x00458c5b
00454CF1  68 26 0A 00 00            PUSH 0xa26
00454CF6  E9 4B 3F 00 00            JMP 0x00458c46
switchD_00454940::caseD_15:
00454CFB  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454D01  56                        PUSH ESI
00454D02  8B CB                     MOV ECX,EBX
00454D04  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00454D0E  E8 1A 0E FB FF            CALL 0x00405b2d
00454D13  8B F8                     MOV EDI,EAX
00454D15  83 FF FF                  CMP EDI,-0x1
00454D18  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454D1B  0F 85 3A 3F 00 00         JNZ 0x00458c5b
00454D21  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454D27  68 2B 0A 00 00            PUSH 0xa2b
00454D2C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454D31  51                        PUSH ECX
00454D32  E9 1A 3F 00 00            JMP 0x00458c51
switchD_00454940::caseD_17:
00454D37  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454D3D  56                        PUSH ESI
00454D3E  8B CB                     MOV ECX,EBX
00454D40  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00454D4A  E8 E9 CB FA FF            CALL 0x00401938
00454D4F  8B F8                     MOV EDI,EAX
00454D51  83 FF FF                  CMP EDI,-0x1
00454D54  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454D57  0F 85 FE 3E 00 00         JNZ 0x00458c5b
00454D5D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454D63  68 30 0A 00 00            PUSH 0xa30
00454D68  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454D6D  52                        PUSH EDX
00454D6E  E9 DE 3E 00 00            JMP 0x00458c51
switchD_00454940::caseD_b:
00454D73  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454D79  56                        PUSH ESI
00454D7A  8B CB                     MOV ECX,EBX
00454D7C  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00454D86  E8 BB 08 FB FF            CALL 0x00405646
00454D8B  8B F8                     MOV EDI,EAX
00454D8D  83 FF FF                  CMP EDI,-0x1
00454D90  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454D93  0F 85 C2 3E 00 00         JNZ 0x00458c5b
00454D99  68 35 0A 00 00            PUSH 0xa35
00454D9E  E9 A3 3E 00 00            JMP 0x00458c46
switchD_00454940::caseD_12:
00454DA3  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454DA9  56                        PUSH ESI
00454DAA  8B CB                     MOV ECX,EBX
00454DAC  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00454DB6  E8 29 E8 FA FF            CALL 0x004035e4
00454DBB  8B F8                     MOV EDI,EAX
00454DBD  83 FF FF                  CMP EDI,-0x1
00454DC0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454DC3  0F 85 92 3E 00 00         JNZ 0x00458c5b
00454DC9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454DCF  68 3A 0A 00 00            PUSH 0xa3a
00454DD4  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454DD9  51                        PUSH ECX
00454DDA  E9 72 3E 00 00            JMP 0x00458c51
switchD_00454940::caseD_8:
00454DDF  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454DE5  56                        PUSH ESI
00454DE6  8B CB                     MOV ECX,EBX
00454DE8  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00454DF2  E8 96 D5 FA FF            CALL 0x0040238d
00454DF7  8B F8                     MOV EDI,EAX
00454DF9  83 FF FF                  CMP EDI,-0x1
00454DFC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454DFF  0F 85 56 3E 00 00         JNZ 0x00458c5b
00454E05  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454E0B  68 3F 0A 00 00            PUSH 0xa3f
00454E10  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454E15  52                        PUSH EDX
00454E16  E9 36 3E 00 00            JMP 0x00458c51
switchD_00454940::caseD_e:
00454E1B  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454E21  56                        PUSH ESI
00454E22  8B CB                     MOV ECX,EBX
00454E24  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00454E2E  E8 06 01 FB FF            CALL 0x00404f39
00454E33  8B F8                     MOV EDI,EAX
00454E35  83 FF FF                  CMP EDI,-0x1
00454E38  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454E3B  0F 85 1A 3E 00 00         JNZ 0x00458c5b
00454E41  68 44 0A 00 00            PUSH 0xa44
00454E46  E9 FB 3D 00 00            JMP 0x00458c46
LAB_00454e4b:
00454E4B  39 8B 08 03 00 00         CMP dword ptr [EBX + 0x308],ECX
00454E51  0F 85 47 05 00 00         JNZ 0x0045539e
00454E57  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00454E5D  3B C6                     CMP EAX,ESI
00454E5F  75 28                     JNZ 0x00454e89
00454E61  56                        PUSH ESI
00454E62  8B CB                     MOV ECX,EBX
00454E64  C7 83 5D 04 00 00 10 00 00 00  MOV dword ptr [EBX + 0x45d],0x10
00454E6E  E8 3B C3 FA FF            CALL 0x004011ae
00454E73  83 F8 FF                  CMP EAX,-0x1
00454E76  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00454E79  0F 85 6E 60 00 00         JNZ 0x0045aeed
00454E7F  68 50 0A 00 00            PUSH 0xa50
00454E84  E9 4E 60 00 00            JMP 0x0045aed7
LAB_00454e89:
00454E89  48                        DEC EAX
00454E8A  83 F8 16                  CMP EAX,0x16
00454E8D  0F 87 5A 60 00 00         JA 0x0045aeed
switchD_00454e93::switchD:
00454E93  FF 24 85 FC B5 45 00      JMP dword ptr [EAX*0x4 + 0x45b5fc]
switchD_00454e93::caseD_1:
00454E9A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454EA0  56                        PUSH ESI
00454EA1  8B CB                     MOV ECX,EBX
00454EA3  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00454EAD  E8 3E EF FA FF            CALL 0x00403df0
00454EB2  8B F8                     MOV EDI,EAX
00454EB4  83 FF FF                  CMP EDI,-0x1
00454EB7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454EBA  0F 85 9B 3D 00 00         JNZ 0x00458c5b
00454EC0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454EC6  68 57 0A 00 00            PUSH 0xa57
00454ECB  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454ED0  52                        PUSH EDX
00454ED1  E9 7B 3D 00 00            JMP 0x00458c51
switchD_00454e93::caseD_3:
00454ED6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454EDC  56                        PUSH ESI
00454EDD  8B CB                     MOV ECX,EBX
00454EDF  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00454EE9  E8 4C FA FA FF            CALL 0x0040493a
00454EEE  8B F8                     MOV EDI,EAX
00454EF0  83 FF FF                  CMP EDI,-0x1
00454EF3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454EF6  0F 85 5F 3D 00 00         JNZ 0x00458c5b
00454EFC  68 5C 0A 00 00            PUSH 0xa5c
00454F01  E9 40 3D 00 00            JMP 0x00458c46
switchD_00454e93::caseD_2:
00454F06  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454F0C  56                        PUSH ESI
00454F0D  8B CB                     MOV ECX,EBX
00454F0F  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00454F19  E8 35 E6 FA FF            CALL 0x00403553
00454F1E  8B F8                     MOV EDI,EAX
00454F20  83 FF FF                  CMP EDI,-0x1
00454F23  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454F26  0F 85 2F 3D 00 00         JNZ 0x00458c5b
00454F2C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454F32  68 61 0A 00 00            PUSH 0xa61
00454F37  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454F3C  51                        PUSH ECX
00454F3D  E9 0F 3D 00 00            JMP 0x00458c51
switchD_00454e93::caseD_6:
00454F42  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454F48  56                        PUSH ESI
00454F49  8B CB                     MOV ECX,EBX
00454F4B  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00454F55  E8 99 D7 FA FF            CALL 0x004026f3
00454F5A  8B F8                     MOV EDI,EAX
00454F5C  83 FF FF                  CMP EDI,-0x1
00454F5F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454F62  0F 85 F3 3C 00 00         JNZ 0x00458c5b
00454F68  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00454F6E  68 66 0A 00 00            PUSH 0xa66
00454F73  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454F78  52                        PUSH EDX
00454F79  E9 D3 3C 00 00            JMP 0x00458c51
switchD_00454e93::caseD_c:
00454F7E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454F84  56                        PUSH ESI
00454F85  8B CB                     MOV ECX,EBX
00454F87  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00454F91  E8 46 E4 FA FF            CALL 0x004033dc
00454F96  8B F8                     MOV EDI,EAX
00454F98  83 FF FF                  CMP EDI,-0x1
00454F9B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454F9E  0F 85 B7 3C 00 00         JNZ 0x00458c5b
00454FA4  68 6B 0A 00 00            PUSH 0xa6b
00454FA9  E9 98 3C 00 00            JMP 0x00458c46
switchD_00454e93::caseD_11:
00454FAE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454FB4  56                        PUSH ESI
00454FB5  8B CB                     MOV ECX,EBX
00454FB7  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00454FC1  E8 4D C1 FA FF            CALL 0x00401113
00454FC6  8B F8                     MOV EDI,EAX
00454FC8  83 FF FF                  CMP EDI,-0x1
00454FCB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00454FCE  0F 85 87 3C 00 00         JNZ 0x00458c5b
00454FD4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00454FDA  68 70 0A 00 00            PUSH 0xa70
00454FDF  68 3C 9D 7A 00            PUSH 0x7a9d3c
00454FE4  51                        PUSH ECX
00454FE5  E9 67 3C 00 00            JMP 0x00458c51
switchD_00454e93::caseD_13:
00454FEA  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00454FF0  56                        PUSH ESI
00454FF1  8B CB                     MOV ECX,EBX
00454FF3  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00454FFD  E8 11 02 FB FF            CALL 0x00405213
00455002  8B F8                     MOV EDI,EAX
00455004  83 FF FF                  CMP EDI,-0x1
00455007  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045500A  0F 85 4B 3C 00 00         JNZ 0x00458c5b
00455010  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455016  68 75 0A 00 00            PUSH 0xa75
0045501B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455020  52                        PUSH EDX
00455021  E9 2B 3C 00 00            JMP 0x00458c51
switchD_00454e93::caseD_d:
00455026  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045502C  56                        PUSH ESI
0045502D  8B CB                     MOV ECX,EBX
0045502F  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00455039  E8 0C E4 FA FF            CALL 0x0040344a
0045503E  8B F8                     MOV EDI,EAX
00455040  83 FF FF                  CMP EDI,-0x1
00455043  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455046  0F 85 0F 3C 00 00         JNZ 0x00458c5b
0045504C  68 7A 0A 00 00            PUSH 0xa7a
00455051  E9 F0 3B 00 00            JMP 0x00458c46
switchD_00454e93::caseD_4:
00455056  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045505C  56                        PUSH ESI
0045505D  8B CB                     MOV ECX,EBX
0045505F  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00455069  E8 4E 08 FB FF            CALL 0x004058bc
0045506E  8B F8                     MOV EDI,EAX
00455070  83 FF FF                  CMP EDI,-0x1
00455073  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455076  0F 85 DF 3B 00 00         JNZ 0x00458c5b
0045507C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455082  68 7F 0A 00 00            PUSH 0xa7f
00455087  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045508C  51                        PUSH ECX
0045508D  E9 BF 3B 00 00            JMP 0x00458c51
switchD_00454e93::caseD_5:
00455092  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455098  56                        PUSH ESI
00455099  8B CB                     MOV ECX,EBX
0045509B  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
004550A5  E8 5D F4 FA FF            CALL 0x00404507
004550AA  8B F8                     MOV EDI,EAX
004550AC  83 FF FF                  CMP EDI,-0x1
004550AF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004550B2  0F 85 A3 3B 00 00         JNZ 0x00458c5b
004550B8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004550BE  68 84 0A 00 00            PUSH 0xa84
004550C3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004550C8  52                        PUSH EDX
004550C9  E9 83 3B 00 00            JMP 0x00458c51
switchD_00454e93::caseD_f:
004550CE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004550D4  56                        PUSH ESI
004550D5  8B CB                     MOV ECX,EBX
004550D7  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
004550E1  E8 9F EE FA FF            CALL 0x00403f85
004550E6  8B F8                     MOV EDI,EAX
004550E8  83 FF FF                  CMP EDI,-0x1
004550EB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004550EE  0F 85 67 3B 00 00         JNZ 0x00458c5b
004550F4  68 89 0A 00 00            PUSH 0xa89
004550F9  E9 48 3B 00 00            JMP 0x00458c46
switchD_00454e93::caseD_14:
004550FE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455104  56                        PUSH ESI
00455105  8B CB                     MOV ECX,EBX
00455107  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00455111  E8 42 D5 FA FF            CALL 0x00402658
00455116  8B F8                     MOV EDI,EAX
00455118  83 FF FF                  CMP EDI,-0x1
0045511B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045511E  0F 85 37 3B 00 00         JNZ 0x00458c5b
00455124  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045512A  68 8E 0A 00 00            PUSH 0xa8e
0045512F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455134  51                        PUSH ECX
00455135  E9 17 3B 00 00            JMP 0x00458c51
switchD_00454e93::caseD_10:
0045513A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455140  56                        PUSH ESI
00455141  8B CB                     MOV ECX,EBX
00455143  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
0045514D  E8 48 E8 FA FF            CALL 0x0040399a
00455152  8B F8                     MOV EDI,EAX
00455154  83 FF FF                  CMP EDI,-0x1
00455157  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045515A  0F 85 FB 3A 00 00         JNZ 0x00458c5b
00455160  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455166  68 93 0A 00 00            PUSH 0xa93
0045516B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455170  52                        PUSH EDX
00455171  E9 DB 3A 00 00            JMP 0x00458c51
switchD_00454e93::caseD_7:
00455176  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045517C  56                        PUSH ESI
0045517D  8B CB                     MOV ECX,EBX
0045517F  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00455189  E8 0E E6 FA FF            CALL 0x0040379c
0045518E  8B F8                     MOV EDI,EAX
00455190  83 FF FF                  CMP EDI,-0x1
00455193  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455196  0F 85 BF 3A 00 00         JNZ 0x00458c5b
0045519C  68 98 0A 00 00            PUSH 0xa98
004551A1  E9 A0 3A 00 00            JMP 0x00458c46
switchD_00454e93::caseD_a:
004551A6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004551AC  56                        PUSH ESI
004551AD  8B CB                     MOV ECX,EBX
004551AF  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
004551B9  E8 E0 06 FB FF            CALL 0x0040589e
004551BE  8B F8                     MOV EDI,EAX
004551C0  83 FF FF                  CMP EDI,-0x1
004551C3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004551C6  0F 85 8F 3A 00 00         JNZ 0x00458c5b
004551CC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004551D2  68 9D 0A 00 00            PUSH 0xa9d
004551D7  68 3C 9D 7A 00            PUSH 0x7a9d3c
004551DC  51                        PUSH ECX
004551DD  E9 6F 3A 00 00            JMP 0x00458c51
switchD_00454e93::caseD_9:
004551E2  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004551E8  56                        PUSH ESI
004551E9  8B CB                     MOV ECX,EBX
004551EB  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
004551F5  E8 5E D9 FA FF            CALL 0x00402b58
004551FA  8B F8                     MOV EDI,EAX
004551FC  83 FF FF                  CMP EDI,-0x1
004551FF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455202  0F 85 53 3A 00 00         JNZ 0x00458c5b
00455208  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045520E  68 A2 0A 00 00            PUSH 0xaa2
00455213  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455218  52                        PUSH EDX
00455219  E9 33 3A 00 00            JMP 0x00458c51
switchD_00454e93::caseD_16:
0045521E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455224  56                        PUSH ESI
00455225  8B CB                     MOV ECX,EBX
00455227  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00455231  E8 51 F5 FA FF            CALL 0x00404787
00455236  8B F8                     MOV EDI,EAX
00455238  83 FF FF                  CMP EDI,-0x1
0045523B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045523E  0F 85 17 3A 00 00         JNZ 0x00458c5b
00455244  68 A7 0A 00 00            PUSH 0xaa7
00455249  E9 F8 39 00 00            JMP 0x00458c46
switchD_00454e93::caseD_15:
0045524E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455254  56                        PUSH ESI
00455255  8B CB                     MOV ECX,EBX
00455257  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00455261  E8 C7 08 FB FF            CALL 0x00405b2d
00455266  8B F8                     MOV EDI,EAX
00455268  83 FF FF                  CMP EDI,-0x1
0045526B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045526E  0F 85 E7 39 00 00         JNZ 0x00458c5b
00455274  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045527A  68 AC 0A 00 00            PUSH 0xaac
0045527F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455284  51                        PUSH ECX
00455285  E9 C7 39 00 00            JMP 0x00458c51
switchD_00454e93::caseD_17:
0045528A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455290  56                        PUSH ESI
00455291  8B CB                     MOV ECX,EBX
00455293  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
0045529D  E8 96 C6 FA FF            CALL 0x00401938
004552A2  8B F8                     MOV EDI,EAX
004552A4  83 FF FF                  CMP EDI,-0x1
004552A7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004552AA  0F 85 AB 39 00 00         JNZ 0x00458c5b
004552B0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004552B6  68 B1 0A 00 00            PUSH 0xab1
004552BB  68 3C 9D 7A 00            PUSH 0x7a9d3c
004552C0  52                        PUSH EDX
004552C1  E9 8B 39 00 00            JMP 0x00458c51
switchD_00454e93::caseD_b:
004552C6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004552CC  56                        PUSH ESI
004552CD  8B CB                     MOV ECX,EBX
004552CF  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
004552D9  E8 68 03 FB FF            CALL 0x00405646
004552DE  8B F8                     MOV EDI,EAX
004552E0  83 FF FF                  CMP EDI,-0x1
004552E3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004552E6  0F 85 6F 39 00 00         JNZ 0x00458c5b
004552EC  68 B6 0A 00 00            PUSH 0xab6
004552F1  E9 50 39 00 00            JMP 0x00458c46
switchD_00454e93::caseD_12:
004552F6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004552FC  56                        PUSH ESI
004552FD  8B CB                     MOV ECX,EBX
004552FF  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00455309  E8 D6 E2 FA FF            CALL 0x004035e4
0045530E  8B F8                     MOV EDI,EAX
00455310  83 FF FF                  CMP EDI,-0x1
00455313  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455316  0F 85 3F 39 00 00         JNZ 0x00458c5b
0045531C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455322  68 BB 0A 00 00            PUSH 0xabb
00455327  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045532C  51                        PUSH ECX
0045532D  E9 1F 39 00 00            JMP 0x00458c51
switchD_00454e93::caseD_8:
00455332  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455338  56                        PUSH ESI
00455339  8B CB                     MOV ECX,EBX
0045533B  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00455345  E8 43 D0 FA FF            CALL 0x0040238d
0045534A  8B F8                     MOV EDI,EAX
0045534C  83 FF FF                  CMP EDI,-0x1
0045534F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455352  0F 85 03 39 00 00         JNZ 0x00458c5b
00455358  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045535E  68 C0 0A 00 00            PUSH 0xac0
00455363  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455368  52                        PUSH EDX
00455369  E9 E3 38 00 00            JMP 0x00458c51
switchD_00454e93::caseD_e:
0045536E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455374  56                        PUSH ESI
00455375  8B CB                     MOV ECX,EBX
00455377  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00455381  E8 B3 FB FA FF            CALL 0x00404f39
00455386  8B F8                     MOV EDI,EAX
00455388  83 FF FF                  CMP EDI,-0x1
0045538B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045538E  0F 85 C7 38 00 00         JNZ 0x00458c5b
00455394  68 C5 0A 00 00            PUSH 0xac5
00455399  E9 A8 38 00 00            JMP 0x00458c46
LAB_0045539e:
0045539E  39 8B E4 02 00 00         CMP dword ptr [EBX + 0x2e4],ECX
004553A4  0F 85 92 05 00 00         JNZ 0x0045593c
004553AA  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
004553B0  3B C6                     CMP EAX,ESI
004553B2  75 73                     JNZ 0x00455427
004553B4  56                        PUSH ESI
004553B5  8B CB                     MOV ECX,EBX
004553B7  C7 83 5D 04 00 00 07 00 00 00  MOV dword ptr [EBX + 0x45d],0x7
004553C1  E8 4D F4 FA FF            CALL 0x00404813
004553C6  8B F8                     MOV EDI,EAX
004553C8  83 FF FF                  CMP EDI,-0x1
004553CB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004553CE  75 1B                     JNZ 0x004553eb
004553D0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004553D6  68 D1 0A 00 00            PUSH 0xad1
004553DB  68 3C 9D 7A 00            PUSH 0x7a9d3c
004553E0  51                        PUSH ECX
004553E1  68 FF FF 00 00            PUSH 0xffff
004553E6  E8 55 0A 25 00            CALL 0x006a5e40
LAB_004553eb:
004553EB  3B FE                     CMP EDI,ESI
004553ED  0F 85 FA 5A 00 00         JNZ 0x0045aeed
004553F3  56                        PUSH ESI
004553F4  8B CB                     MOV ECX,EBX
004553F6  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00455400  E8 26 E6 FA FF            CALL 0x00403a2b
00455405  83 F8 FF                  CMP EAX,-0x1
00455408  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0045540B  0F 85 DC 5A 00 00         JNZ 0x0045aeed
00455411  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455417  68 D5 0A 00 00            PUSH 0xad5
0045541C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455421  52                        PUSH EDX
00455422  E9 BC 5A 00 00            JMP 0x0045aee3
LAB_00455427:
00455427  48                        DEC EAX
00455428  83 F8 16                  CMP EAX,0x16
0045542B  0F 87 BC 5A 00 00         JA 0x0045aeed
switchD_00455431::switchD:
00455431  FF 24 85 58 B6 45 00      JMP dword ptr [EAX*0x4 + 0x45b658]
switchD_00455431::caseD_1:
00455438  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045543E  56                        PUSH ESI
0045543F  8B CB                     MOV ECX,EBX
00455441  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
0045544B  E8 A0 E9 FA FF            CALL 0x00403df0
00455450  8B F8                     MOV EDI,EAX
00455452  83 FF FF                  CMP EDI,-0x1
00455455  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455458  0F 85 FD 37 00 00         JNZ 0x00458c5b
0045545E  68 DD 0A 00 00            PUSH 0xadd
00455463  E9 DE 37 00 00            JMP 0x00458c46
switchD_00455431::caseD_3:
00455468  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045546E  56                        PUSH ESI
0045546F  8B CB                     MOV ECX,EBX
00455471  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
0045547B  E8 BA F4 FA FF            CALL 0x0040493a
00455480  8B F8                     MOV EDI,EAX
00455482  83 FF FF                  CMP EDI,-0x1
00455485  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455488  0F 85 CD 37 00 00         JNZ 0x00458c5b
0045548E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455494  68 E3 0A 00 00            PUSH 0xae3
00455499  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045549E  51                        PUSH ECX
0045549F  E9 AD 37 00 00            JMP 0x00458c51
switchD_00455431::caseD_2:
004554A4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004554AA  56                        PUSH ESI
004554AB  8B CB                     MOV ECX,EBX
004554AD  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
004554B7  E8 97 E0 FA FF            CALL 0x00403553
004554BC  8B F8                     MOV EDI,EAX
004554BE  83 FF FF                  CMP EDI,-0x1
004554C1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004554C4  0F 85 91 37 00 00         JNZ 0x00458c5b
004554CA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004554D0  68 E8 0A 00 00            PUSH 0xae8
004554D5  68 3C 9D 7A 00            PUSH 0x7a9d3c
004554DA  52                        PUSH EDX
004554DB  E9 71 37 00 00            JMP 0x00458c51
switchD_00455431::caseD_6:
004554E0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004554E6  56                        PUSH ESI
004554E7  8B CB                     MOV ECX,EBX
004554E9  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
004554F3  E8 FB D1 FA FF            CALL 0x004026f3
004554F8  8B F8                     MOV EDI,EAX
004554FA  83 FF FF                  CMP EDI,-0x1
004554FD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455500  0F 85 55 37 00 00         JNZ 0x00458c5b
00455506  68 ED 0A 00 00            PUSH 0xaed
0045550B  E9 36 37 00 00            JMP 0x00458c46
switchD_00455431::caseD_c:
00455510  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455516  56                        PUSH ESI
00455517  8B CB                     MOV ECX,EBX
00455519  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00455523  E8 B4 DE FA FF            CALL 0x004033dc
00455528  8B F8                     MOV EDI,EAX
0045552A  83 FF FF                  CMP EDI,-0x1
0045552D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455530  0F 85 25 37 00 00         JNZ 0x00458c5b
00455536  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045553C  68 F2 0A 00 00            PUSH 0xaf2
00455541  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455546  51                        PUSH ECX
00455547  E9 05 37 00 00            JMP 0x00458c51
switchD_00455431::caseD_11:
0045554C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455552  56                        PUSH ESI
00455553  8B CB                     MOV ECX,EBX
00455555  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
0045555F  E8 AF BB FA FF            CALL 0x00401113
00455564  8B F8                     MOV EDI,EAX
00455566  83 FF FF                  CMP EDI,-0x1
00455569  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045556C  0F 85 E9 36 00 00         JNZ 0x00458c5b
00455572  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455578  68 F7 0A 00 00            PUSH 0xaf7
0045557D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455582  52                        PUSH EDX
00455583  E9 C9 36 00 00            JMP 0x00458c51
switchD_00455431::caseD_13:
00455588  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045558E  56                        PUSH ESI
0045558F  8B CB                     MOV ECX,EBX
00455591  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
0045559B  E8 73 FC FA FF            CALL 0x00405213
004555A0  8B F8                     MOV EDI,EAX
004555A2  83 FF FF                  CMP EDI,-0x1
004555A5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004555A8  0F 85 AD 36 00 00         JNZ 0x00458c5b
004555AE  68 FC 0A 00 00            PUSH 0xafc
004555B3  E9 8E 36 00 00            JMP 0x00458c46
switchD_00455431::caseD_d:
004555B8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004555BE  56                        PUSH ESI
004555BF  8B CB                     MOV ECX,EBX
004555C1  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
004555CB  E8 7A DE FA FF            CALL 0x0040344a
004555D0  8B F8                     MOV EDI,EAX
004555D2  83 FF FF                  CMP EDI,-0x1
004555D5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004555D8  0F 85 7D 36 00 00         JNZ 0x00458c5b
004555DE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004555E4  68 01 0B 00 00            PUSH 0xb01
004555E9  68 3C 9D 7A 00            PUSH 0x7a9d3c
004555EE  51                        PUSH ECX
004555EF  E9 5D 36 00 00            JMP 0x00458c51
switchD_00455431::caseD_4:
004555F4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004555FA  56                        PUSH ESI
004555FB  8B CB                     MOV ECX,EBX
004555FD  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00455607  E8 B0 02 FB FF            CALL 0x004058bc
0045560C  8B F8                     MOV EDI,EAX
0045560E  83 FF FF                  CMP EDI,-0x1
00455611  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455614  0F 85 41 36 00 00         JNZ 0x00458c5b
0045561A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455620  68 06 0B 00 00            PUSH 0xb06
00455625  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045562A  52                        PUSH EDX
0045562B  E9 21 36 00 00            JMP 0x00458c51
switchD_00455431::caseD_5:
00455630  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455636  56                        PUSH ESI
00455637  8B CB                     MOV ECX,EBX
00455639  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00455643  E8 BF EE FA FF            CALL 0x00404507
00455648  8B F8                     MOV EDI,EAX
0045564A  83 FF FF                  CMP EDI,-0x1
0045564D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455650  0F 85 05 36 00 00         JNZ 0x00458c5b
00455656  68 0B 0B 00 00            PUSH 0xb0b
0045565B  E9 E6 35 00 00            JMP 0x00458c46
switchD_00455431::caseD_f:
00455660  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455666  56                        PUSH ESI
00455667  8B CB                     MOV ECX,EBX
00455669  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00455673  E8 0D E9 FA FF            CALL 0x00403f85
00455678  8B F8                     MOV EDI,EAX
0045567A  83 FF FF                  CMP EDI,-0x1
0045567D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455680  0F 85 D5 35 00 00         JNZ 0x00458c5b
00455686  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045568C  68 10 0B 00 00            PUSH 0xb10
00455691  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455696  51                        PUSH ECX
00455697  E9 B5 35 00 00            JMP 0x00458c51
switchD_00455431::caseD_14:
0045569C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004556A2  56                        PUSH ESI
004556A3  8B CB                     MOV ECX,EBX
004556A5  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
004556AF  E8 A4 CF FA FF            CALL 0x00402658
004556B4  8B F8                     MOV EDI,EAX
004556B6  83 FF FF                  CMP EDI,-0x1
004556B9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004556BC  0F 85 99 35 00 00         JNZ 0x00458c5b
004556C2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004556C8  68 15 0B 00 00            PUSH 0xb15
004556CD  68 3C 9D 7A 00            PUSH 0x7a9d3c
004556D2  52                        PUSH EDX
004556D3  E9 79 35 00 00            JMP 0x00458c51
switchD_00455431::caseD_10:
004556D8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004556DE  56                        PUSH ESI
004556DF  8B CB                     MOV ECX,EBX
004556E1  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
004556EB  E8 AA E2 FA FF            CALL 0x0040399a
004556F0  8B F8                     MOV EDI,EAX
004556F2  83 FF FF                  CMP EDI,-0x1
004556F5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004556F8  0F 85 5D 35 00 00         JNZ 0x00458c5b
004556FE  68 1A 0B 00 00            PUSH 0xb1a
00455703  E9 3E 35 00 00            JMP 0x00458c46
switchD_00455431::caseD_7:
00455708  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045570E  56                        PUSH ESI
0045570F  8B CB                     MOV ECX,EBX
00455711  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
0045571B  E8 7C E0 FA FF            CALL 0x0040379c
00455720  8B F8                     MOV EDI,EAX
00455722  83 FF FF                  CMP EDI,-0x1
00455725  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455728  0F 85 2D 35 00 00         JNZ 0x00458c5b
0045572E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455734  68 1F 0B 00 00            PUSH 0xb1f
00455739  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045573E  51                        PUSH ECX
0045573F  E9 0D 35 00 00            JMP 0x00458c51
switchD_00455431::caseD_a:
00455744  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045574A  56                        PUSH ESI
0045574B  8B CB                     MOV ECX,EBX
0045574D  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00455757  E8 42 01 FB FF            CALL 0x0040589e
0045575C  8B F8                     MOV EDI,EAX
0045575E  83 FF FF                  CMP EDI,-0x1
00455761  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455764  0F 85 F1 34 00 00         JNZ 0x00458c5b
0045576A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455770  68 24 0B 00 00            PUSH 0xb24
00455775  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045577A  52                        PUSH EDX
0045577B  E9 D1 34 00 00            JMP 0x00458c51
switchD_00455431::caseD_9:
00455780  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455786  56                        PUSH ESI
00455787  8B CB                     MOV ECX,EBX
00455789  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00455793  E8 C0 D3 FA FF            CALL 0x00402b58
00455798  8B F8                     MOV EDI,EAX
0045579A  83 FF FF                  CMP EDI,-0x1
0045579D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004557A0  0F 85 B5 34 00 00         JNZ 0x00458c5b
004557A6  68 29 0B 00 00            PUSH 0xb29
004557AB  E9 96 34 00 00            JMP 0x00458c46
switchD_00455431::caseD_16:
004557B0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004557B6  56                        PUSH ESI
004557B7  8B CB                     MOV ECX,EBX
004557B9  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
004557C3  E8 BF EF FA FF            CALL 0x00404787
004557C8  8B F8                     MOV EDI,EAX
004557CA  83 FF FF                  CMP EDI,-0x1
004557CD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004557D0  0F 85 85 34 00 00         JNZ 0x00458c5b
004557D6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004557DC  68 2E 0B 00 00            PUSH 0xb2e
004557E1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004557E6  51                        PUSH ECX
004557E7  E9 65 34 00 00            JMP 0x00458c51
switchD_00455431::caseD_15:
004557EC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004557F2  56                        PUSH ESI
004557F3  8B CB                     MOV ECX,EBX
004557F5  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
004557FF  E8 29 03 FB FF            CALL 0x00405b2d
00455804  8B F8                     MOV EDI,EAX
00455806  83 FF FF                  CMP EDI,-0x1
00455809  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045580C  0F 85 49 34 00 00         JNZ 0x00458c5b
00455812  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455818  68 33 0B 00 00            PUSH 0xb33
0045581D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455822  52                        PUSH EDX
00455823  E9 29 34 00 00            JMP 0x00458c51
switchD_00455431::caseD_17:
00455828  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045582E  56                        PUSH ESI
0045582F  8B CB                     MOV ECX,EBX
00455831  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
0045583B  E8 F8 C0 FA FF            CALL 0x00401938
00455840  8B F8                     MOV EDI,EAX
00455842  83 FF FF                  CMP EDI,-0x1
00455845  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455848  0F 85 0D 34 00 00         JNZ 0x00458c5b
0045584E  68 38 0B 00 00            PUSH 0xb38
00455853  E9 EE 33 00 00            JMP 0x00458c46
switchD_00455431::caseD_b:
00455858  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045585E  56                        PUSH ESI
0045585F  8B CB                     MOV ECX,EBX
00455861  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
0045586B  E8 D6 FD FA FF            CALL 0x00405646
00455870  8B F8                     MOV EDI,EAX
00455872  83 FF FF                  CMP EDI,-0x1
00455875  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455878  0F 85 DD 33 00 00         JNZ 0x00458c5b
0045587E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455884  68 3D 0B 00 00            PUSH 0xb3d
00455889  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045588E  51                        PUSH ECX
0045588F  E9 BD 33 00 00            JMP 0x00458c51
switchD_00455431::caseD_12:
00455894  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045589A  56                        PUSH ESI
0045589B  8B CB                     MOV ECX,EBX
0045589D  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
004558A7  E8 38 DD FA FF            CALL 0x004035e4
004558AC  8B F8                     MOV EDI,EAX
004558AE  83 FF FF                  CMP EDI,-0x1
004558B1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004558B4  0F 85 A1 33 00 00         JNZ 0x00458c5b
004558BA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004558C0  68 42 0B 00 00            PUSH 0xb42
004558C5  68 3C 9D 7A 00            PUSH 0x7a9d3c
004558CA  52                        PUSH EDX
004558CB  E9 81 33 00 00            JMP 0x00458c51
switchD_00455431::caseD_8:
004558D0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004558D6  56                        PUSH ESI
004558D7  8B CB                     MOV ECX,EBX
004558D9  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
004558E3  E8 A5 CA FA FF            CALL 0x0040238d
004558E8  8B F8                     MOV EDI,EAX
004558EA  83 FF FF                  CMP EDI,-0x1
004558ED  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004558F0  0F 85 65 33 00 00         JNZ 0x00458c5b
004558F6  68 47 0B 00 00            PUSH 0xb47
004558FB  E9 46 33 00 00            JMP 0x00458c46
switchD_00455431::caseD_e:
00455900  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455906  56                        PUSH ESI
00455907  8B CB                     MOV ECX,EBX
00455909  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00455913  E8 21 F6 FA FF            CALL 0x00404f39
00455918  8B F8                     MOV EDI,EAX
0045591A  83 FF FF                  CMP EDI,-0x1
0045591D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455920  0F 85 35 33 00 00         JNZ 0x00458c5b
00455926  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045592C  68 4C 0B 00 00            PUSH 0xb4c
00455931  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455936  51                        PUSH ECX
00455937  E9 15 33 00 00            JMP 0x00458c51
LAB_0045593c:
0045593C  39 8B F0 02 00 00         CMP dword ptr [EBX + 0x2f0],ECX
00455942  0F 85 9D 05 00 00         JNZ 0x00455ee5
00455948  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
0045594E  3B C6                     CMP EAX,ESI
00455950  75 72                     JNZ 0x004559c4
00455952  56                        PUSH ESI
00455953  8B CB                     MOV ECX,EBX
00455955  C7 83 5D 04 00 00 0A 00 00 00  MOV dword ptr [EBX + 0x45d],0xa
0045595F  E8 84 EC FA FF            CALL 0x004045e8
00455964  8B F8                     MOV EDI,EAX
00455966  83 FF FF                  CMP EDI,-0x1
00455969  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045596C  75 1B                     JNZ 0x00455989
0045596E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455974  68 58 0B 00 00            PUSH 0xb58
00455979  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045597E  52                        PUSH EDX
0045597F  68 FF FF 00 00            PUSH 0xffff
00455984  E8 B7 04 25 00            CALL 0x006a5e40
LAB_00455989:
00455989  3B FE                     CMP EDI,ESI
0045598B  0F 85 5C 55 00 00         JNZ 0x0045aeed
00455991  56                        PUSH ESI
00455992  8B CB                     MOV ECX,EBX
00455994  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045599E  E8 88 E0 FA FF            CALL 0x00403a2b
004559A3  83 F8 FF                  CMP EAX,-0x1
004559A6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004559A9  0F 85 3E 55 00 00         JNZ 0x0045aeed
004559AF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004559B4  68 5C 0B 00 00            PUSH 0xb5c
004559B9  68 3C 9D 7A 00            PUSH 0x7a9d3c
004559BE  50                        PUSH EAX
004559BF  E9 1F 55 00 00            JMP 0x0045aee3
LAB_004559c4:
004559C4  48                        DEC EAX
004559C5  83 F8 16                  CMP EAX,0x16
004559C8  0F 87 1F 55 00 00         JA 0x0045aeed
switchD_004559ce::switchD:
004559CE  FF 24 85 B4 B6 45 00      JMP dword ptr [EAX*0x4 + 0x45b6b4]
switchD_004559ce::caseD_1:
004559D5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004559DB  56                        PUSH ESI
004559DC  8B CB                     MOV ECX,EBX
004559DE  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
004559E8  E8 03 E4 FA FF            CALL 0x00403df0
004559ED  8B F8                     MOV EDI,EAX
004559EF  83 FF FF                  CMP EDI,-0x1
004559F2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004559F5  0F 85 60 32 00 00         JNZ 0x00458c5b
004559FB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455A01  68 64 0B 00 00            PUSH 0xb64
00455A06  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455A0B  51                        PUSH ECX
00455A0C  E9 40 32 00 00            JMP 0x00458c51
switchD_004559ce::caseD_3:
00455A11  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455A17  56                        PUSH ESI
00455A18  8B CB                     MOV ECX,EBX
00455A1A  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00455A24  E8 11 EF FA FF            CALL 0x0040493a
00455A29  8B F8                     MOV EDI,EAX
00455A2B  83 FF FF                  CMP EDI,-0x1
00455A2E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455A31  0F 85 24 32 00 00         JNZ 0x00458c5b
00455A37  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455A3D  68 6A 0B 00 00            PUSH 0xb6a
00455A42  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455A47  52                        PUSH EDX
00455A48  E9 04 32 00 00            JMP 0x00458c51
switchD_004559ce::caseD_2:
00455A4D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455A53  56                        PUSH ESI
00455A54  8B CB                     MOV ECX,EBX
00455A56  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00455A60  E8 EE DA FA FF            CALL 0x00403553
00455A65  8B F8                     MOV EDI,EAX
00455A67  83 FF FF                  CMP EDI,-0x1
00455A6A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455A6D  0F 85 E8 31 00 00         JNZ 0x00458c5b
00455A73  68 6F 0B 00 00            PUSH 0xb6f
00455A78  E9 C9 31 00 00            JMP 0x00458c46
switchD_004559ce::caseD_6:
00455A7D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455A83  56                        PUSH ESI
00455A84  8B CB                     MOV ECX,EBX
00455A86  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00455A90  E8 5E CC FA FF            CALL 0x004026f3
00455A95  8B F8                     MOV EDI,EAX
00455A97  83 FF FF                  CMP EDI,-0x1
00455A9A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455A9D  0F 85 B8 31 00 00         JNZ 0x00458c5b
00455AA3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455AA9  68 74 0B 00 00            PUSH 0xb74
00455AAE  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455AB3  51                        PUSH ECX
00455AB4  E9 98 31 00 00            JMP 0x00458c51
switchD_004559ce::caseD_c:
00455AB9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455ABF  56                        PUSH ESI
00455AC0  8B CB                     MOV ECX,EBX
00455AC2  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00455ACC  E8 0B D9 FA FF            CALL 0x004033dc
00455AD1  8B F8                     MOV EDI,EAX
00455AD3  83 FF FF                  CMP EDI,-0x1
00455AD6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455AD9  0F 85 7C 31 00 00         JNZ 0x00458c5b
00455ADF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455AE5  68 79 0B 00 00            PUSH 0xb79
00455AEA  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455AEF  52                        PUSH EDX
00455AF0  E9 5C 31 00 00            JMP 0x00458c51
switchD_004559ce::caseD_11:
00455AF5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455AFB  56                        PUSH ESI
00455AFC  8B CB                     MOV ECX,EBX
00455AFE  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00455B08  E8 06 B6 FA FF            CALL 0x00401113
00455B0D  8B F8                     MOV EDI,EAX
00455B0F  83 FF FF                  CMP EDI,-0x1
00455B12  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455B15  0F 85 40 31 00 00         JNZ 0x00458c5b
00455B1B  68 7E 0B 00 00            PUSH 0xb7e
00455B20  E9 21 31 00 00            JMP 0x00458c46
switchD_004559ce::caseD_13:
00455B25  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455B2B  56                        PUSH ESI
00455B2C  8B CB                     MOV ECX,EBX
00455B2E  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00455B38  E8 D6 F6 FA FF            CALL 0x00405213
00455B3D  8B F8                     MOV EDI,EAX
00455B3F  83 FF FF                  CMP EDI,-0x1
00455B42  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455B45  0F 85 10 31 00 00         JNZ 0x00458c5b
00455B4B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455B51  68 83 0B 00 00            PUSH 0xb83
00455B56  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455B5B  51                        PUSH ECX
00455B5C  E9 F0 30 00 00            JMP 0x00458c51
switchD_004559ce::caseD_d:
00455B61  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455B67  56                        PUSH ESI
00455B68  8B CB                     MOV ECX,EBX
00455B6A  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00455B74  E8 D1 D8 FA FF            CALL 0x0040344a
00455B79  8B F8                     MOV EDI,EAX
00455B7B  83 FF FF                  CMP EDI,-0x1
00455B7E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455B81  0F 85 D4 30 00 00         JNZ 0x00458c5b
00455B87  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455B8D  68 88 0B 00 00            PUSH 0xb88
00455B92  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455B97  52                        PUSH EDX
00455B98  E9 B4 30 00 00            JMP 0x00458c51
switchD_004559ce::caseD_4:
00455B9D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455BA3  56                        PUSH ESI
00455BA4  8B CB                     MOV ECX,EBX
00455BA6  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00455BB0  E8 07 FD FA FF            CALL 0x004058bc
00455BB5  8B F8                     MOV EDI,EAX
00455BB7  83 FF FF                  CMP EDI,-0x1
00455BBA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455BBD  0F 85 98 30 00 00         JNZ 0x00458c5b
00455BC3  68 8D 0B 00 00            PUSH 0xb8d
00455BC8  E9 79 30 00 00            JMP 0x00458c46
switchD_004559ce::caseD_5:
00455BCD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455BD3  56                        PUSH ESI
00455BD4  8B CB                     MOV ECX,EBX
00455BD6  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00455BE0  E8 22 E9 FA FF            CALL 0x00404507
00455BE5  8B F8                     MOV EDI,EAX
00455BE7  83 FF FF                  CMP EDI,-0x1
00455BEA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455BED  0F 85 68 30 00 00         JNZ 0x00458c5b
00455BF3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455BF9  68 92 0B 00 00            PUSH 0xb92
00455BFE  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455C03  51                        PUSH ECX
00455C04  E9 48 30 00 00            JMP 0x00458c51
switchD_004559ce::caseD_f:
00455C09  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455C0F  56                        PUSH ESI
00455C10  8B CB                     MOV ECX,EBX
00455C12  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00455C1C  E8 64 E3 FA FF            CALL 0x00403f85
00455C21  8B F8                     MOV EDI,EAX
00455C23  83 FF FF                  CMP EDI,-0x1
00455C26  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455C29  0F 85 2C 30 00 00         JNZ 0x00458c5b
00455C2F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455C35  68 97 0B 00 00            PUSH 0xb97
00455C3A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455C3F  52                        PUSH EDX
00455C40  E9 0C 30 00 00            JMP 0x00458c51
switchD_004559ce::caseD_14:
00455C45  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455C4B  56                        PUSH ESI
00455C4C  8B CB                     MOV ECX,EBX
00455C4E  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00455C58  E8 FB C9 FA FF            CALL 0x00402658
00455C5D  8B F8                     MOV EDI,EAX
00455C5F  83 FF FF                  CMP EDI,-0x1
00455C62  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455C65  0F 85 F0 2F 00 00         JNZ 0x00458c5b
00455C6B  68 9C 0B 00 00            PUSH 0xb9c
00455C70  E9 D1 2F 00 00            JMP 0x00458c46
switchD_004559ce::caseD_10:
00455C75  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455C7B  56                        PUSH ESI
00455C7C  8B CB                     MOV ECX,EBX
00455C7E  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00455C88  E8 0D DD FA FF            CALL 0x0040399a
00455C8D  8B F8                     MOV EDI,EAX
00455C8F  83 FF FF                  CMP EDI,-0x1
00455C92  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455C95  0F 85 C0 2F 00 00         JNZ 0x00458c5b
00455C9B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455CA1  68 A1 0B 00 00            PUSH 0xba1
00455CA6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455CAB  51                        PUSH ECX
00455CAC  E9 A0 2F 00 00            JMP 0x00458c51
switchD_004559ce::caseD_7:
00455CB1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455CB7  56                        PUSH ESI
00455CB8  8B CB                     MOV ECX,EBX
00455CBA  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00455CC4  E8 D3 DA FA FF            CALL 0x0040379c
00455CC9  8B F8                     MOV EDI,EAX
00455CCB  83 FF FF                  CMP EDI,-0x1
00455CCE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455CD1  0F 85 84 2F 00 00         JNZ 0x00458c5b
00455CD7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455CDD  68 A6 0B 00 00            PUSH 0xba6
00455CE2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455CE7  52                        PUSH EDX
00455CE8  E9 64 2F 00 00            JMP 0x00458c51
switchD_004559ce::caseD_a:
00455CED  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455CF3  56                        PUSH ESI
00455CF4  8B CB                     MOV ECX,EBX
00455CF6  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00455D00  E8 99 FB FA FF            CALL 0x0040589e
00455D05  8B F8                     MOV EDI,EAX
00455D07  83 FF FF                  CMP EDI,-0x1
00455D0A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455D0D  0F 85 48 2F 00 00         JNZ 0x00458c5b
00455D13  68 AB 0B 00 00            PUSH 0xbab
00455D18  E9 29 2F 00 00            JMP 0x00458c46
switchD_004559ce::caseD_9:
00455D1D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455D23  56                        PUSH ESI
00455D24  8B CB                     MOV ECX,EBX
00455D26  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00455D30  E8 23 CE FA FF            CALL 0x00402b58
00455D35  8B F8                     MOV EDI,EAX
00455D37  83 FF FF                  CMP EDI,-0x1
00455D3A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455D3D  0F 85 18 2F 00 00         JNZ 0x00458c5b
00455D43  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455D49  68 B0 0B 00 00            PUSH 0xbb0
00455D4E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455D53  51                        PUSH ECX
00455D54  E9 F8 2E 00 00            JMP 0x00458c51
switchD_004559ce::caseD_16:
00455D59  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455D5F  56                        PUSH ESI
00455D60  8B CB                     MOV ECX,EBX
00455D62  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00455D6C  E8 16 EA FA FF            CALL 0x00404787
00455D71  8B F8                     MOV EDI,EAX
00455D73  83 FF FF                  CMP EDI,-0x1
00455D76  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455D79  0F 85 DC 2E 00 00         JNZ 0x00458c5b
00455D7F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455D85  68 B5 0B 00 00            PUSH 0xbb5
00455D8A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455D8F  52                        PUSH EDX
00455D90  E9 BC 2E 00 00            JMP 0x00458c51
switchD_004559ce::caseD_15:
00455D95  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455D9B  56                        PUSH ESI
00455D9C  8B CB                     MOV ECX,EBX
00455D9E  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00455DA8  E8 80 FD FA FF            CALL 0x00405b2d
00455DAD  8B F8                     MOV EDI,EAX
00455DAF  83 FF FF                  CMP EDI,-0x1
00455DB2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455DB5  0F 85 A0 2E 00 00         JNZ 0x00458c5b
00455DBB  68 BA 0B 00 00            PUSH 0xbba
00455DC0  E9 81 2E 00 00            JMP 0x00458c46
switchD_004559ce::caseD_17:
00455DC5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455DCB  56                        PUSH ESI
00455DCC  8B CB                     MOV ECX,EBX
00455DCE  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00455DD8  E8 5B BB FA FF            CALL 0x00401938
00455DDD  8B F8                     MOV EDI,EAX
00455DDF  83 FF FF                  CMP EDI,-0x1
00455DE2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455DE5  0F 85 70 2E 00 00         JNZ 0x00458c5b
00455DEB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455DF1  68 BF 0B 00 00            PUSH 0xbbf
00455DF6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455DFB  51                        PUSH ECX
00455DFC  E9 50 2E 00 00            JMP 0x00458c51
switchD_004559ce::caseD_b:
00455E01  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455E07  56                        PUSH ESI
00455E08  8B CB                     MOV ECX,EBX
00455E0A  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00455E14  E8 2D F8 FA FF            CALL 0x00405646
00455E19  8B F8                     MOV EDI,EAX
00455E1B  83 FF FF                  CMP EDI,-0x1
00455E1E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455E21  0F 85 34 2E 00 00         JNZ 0x00458c5b
00455E27  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455E2D  68 C4 0B 00 00            PUSH 0xbc4
00455E32  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455E37  52                        PUSH EDX
00455E38  E9 14 2E 00 00            JMP 0x00458c51
switchD_004559ce::caseD_12:
00455E3D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455E43  56                        PUSH ESI
00455E44  8B CB                     MOV ECX,EBX
00455E46  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00455E50  E8 8F D7 FA FF            CALL 0x004035e4
00455E55  8B F8                     MOV EDI,EAX
00455E57  83 FF FF                  CMP EDI,-0x1
00455E5A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455E5D  0F 85 F8 2D 00 00         JNZ 0x00458c5b
00455E63  68 C9 0B 00 00            PUSH 0xbc9
00455E68  E9 D9 2D 00 00            JMP 0x00458c46
switchD_004559ce::caseD_8:
00455E6D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455E73  56                        PUSH ESI
00455E74  8B CB                     MOV ECX,EBX
00455E76  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00455E80  E8 08 C5 FA FF            CALL 0x0040238d
00455E85  8B F8                     MOV EDI,EAX
00455E87  83 FF FF                  CMP EDI,-0x1
00455E8A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455E8D  0F 85 C8 2D 00 00         JNZ 0x00458c5b
00455E93  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00455E99  68 CE 0B 00 00            PUSH 0xbce
00455E9E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455EA3  51                        PUSH ECX
00455EA4  E9 A8 2D 00 00            JMP 0x00458c51
switchD_004559ce::caseD_e:
00455EA9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455EAF  56                        PUSH ESI
00455EB0  8B CB                     MOV ECX,EBX
00455EB2  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00455EBC  E8 78 F0 FA FF            CALL 0x00404f39
00455EC1  8B F8                     MOV EDI,EAX
00455EC3  83 FF FF                  CMP EDI,-0x1
00455EC6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455EC9  0F 85 8C 2D 00 00         JNZ 0x00458c5b
00455ECF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455ED5  68 D3 0B 00 00            PUSH 0xbd3
00455EDA  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455EDF  52                        PUSH EDX
00455EE0  E9 6C 2D 00 00            JMP 0x00458c51
LAB_00455ee5:
00455EE5  39 8B EC 02 00 00         CMP dword ptr [EBX + 0x2ec],ECX
00455EEB  0F 85 85 05 00 00         JNZ 0x00456476
00455EF1  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00455EF7  3B C6                     CMP EAX,ESI
00455EF9  75 66                     JNZ 0x00455f61
00455EFB  56                        PUSH ESI
00455EFC  8B CB                     MOV ECX,EBX
00455EFE  C7 83 5D 04 00 00 09 00 00 00  MOV dword ptr [EBX + 0x45d],0x9
00455F08  E8 B7 F6 FA FF            CALL 0x004055c4
00455F0D  8B F8                     MOV EDI,EAX
00455F0F  83 FF FF                  CMP EDI,-0x1
00455F12  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455F15  75 1A                     JNZ 0x00455f31
00455F17  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00455F1C  68 DF 0B 00 00            PUSH 0xbdf
00455F21  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455F26  50                        PUSH EAX
00455F27  68 FF FF 00 00            PUSH 0xffff
00455F2C  E8 0F FF 24 00            CALL 0x006a5e40
LAB_00455f31:
00455F31  3B FE                     CMP EDI,ESI
00455F33  0F 85 B4 4F 00 00         JNZ 0x0045aeed
00455F39  56                        PUSH ESI
00455F3A  8B CB                     MOV ECX,EBX
00455F3C  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00455F46  E8 E0 DA FA FF            CALL 0x00403a2b
00455F4B  83 F8 FF                  CMP EAX,-0x1
00455F4E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00455F51  0F 85 96 4F 00 00         JNZ 0x0045aeed
00455F57  68 E3 0B 00 00            PUSH 0xbe3
00455F5C  E9 76 4F 00 00            JMP 0x0045aed7
LAB_00455f61:
00455F61  48                        DEC EAX
00455F62  83 F8 16                  CMP EAX,0x16
00455F65  0F 87 82 4F 00 00         JA 0x0045aeed
switchD_00455f6b::switchD:
00455F6B  FF 24 85 10 B7 45 00      JMP dword ptr [EAX*0x4 + 0x45b710]
switchD_00455f6b::caseD_1:
00455F72  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455F78  56                        PUSH ESI
00455F79  8B CB                     MOV ECX,EBX
00455F7B  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00455F85  E8 66 DE FA FF            CALL 0x00403df0
00455F8A  8B F8                     MOV EDI,EAX
00455F8C  83 FF FF                  CMP EDI,-0x1
00455F8F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455F92  0F 85 C3 2C 00 00         JNZ 0x00458c5b
00455F98  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00455F9E  68 EB 0B 00 00            PUSH 0xbeb
00455FA3  68 3C 9D 7A 00            PUSH 0x7a9d3c
00455FA8  52                        PUSH EDX
00455FA9  E9 A3 2C 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_3:
00455FAE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455FB4  56                        PUSH ESI
00455FB5  8B CB                     MOV ECX,EBX
00455FB7  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00455FC1  E8 74 E9 FA FF            CALL 0x0040493a
00455FC6  8B F8                     MOV EDI,EAX
00455FC8  83 FF FF                  CMP EDI,-0x1
00455FCB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455FCE  0F 85 87 2C 00 00         JNZ 0x00458c5b
00455FD4  68 F1 0B 00 00            PUSH 0xbf1
00455FD9  E9 68 2C 00 00            JMP 0x00458c46
switchD_00455f6b::caseD_2:
00455FDE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00455FE4  56                        PUSH ESI
00455FE5  8B CB                     MOV ECX,EBX
00455FE7  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00455FF1  E8 5D D5 FA FF            CALL 0x00403553
00455FF6  8B F8                     MOV EDI,EAX
00455FF8  83 FF FF                  CMP EDI,-0x1
00455FFB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00455FFE  0F 85 57 2C 00 00         JNZ 0x00458c5b
00456004  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045600A  68 F6 0B 00 00            PUSH 0xbf6
0045600F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456014  51                        PUSH ECX
00456015  E9 37 2C 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_6:
0045601A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456020  56                        PUSH ESI
00456021  8B CB                     MOV ECX,EBX
00456023  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
0045602D  E8 C1 C6 FA FF            CALL 0x004026f3
00456032  8B F8                     MOV EDI,EAX
00456034  83 FF FF                  CMP EDI,-0x1
00456037  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045603A  0F 85 1B 2C 00 00         JNZ 0x00458c5b
00456040  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456046  68 FB 0B 00 00            PUSH 0xbfb
0045604B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456050  52                        PUSH EDX
00456051  E9 FB 2B 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_c:
00456056  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045605C  56                        PUSH ESI
0045605D  8B CB                     MOV ECX,EBX
0045605F  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00456069  E8 6E D3 FA FF            CALL 0x004033dc
0045606E  8B F8                     MOV EDI,EAX
00456070  83 FF FF                  CMP EDI,-0x1
00456073  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456076  0F 85 DF 2B 00 00         JNZ 0x00458c5b
0045607C  68 00 0C 00 00            PUSH 0xc00
00456081  E9 C0 2B 00 00            JMP 0x00458c46
switchD_00455f6b::caseD_11:
00456086  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045608C  56                        PUSH ESI
0045608D  8B CB                     MOV ECX,EBX
0045608F  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00456099  E8 75 B0 FA FF            CALL 0x00401113
0045609E  8B F8                     MOV EDI,EAX
004560A0  83 FF FF                  CMP EDI,-0x1
004560A3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004560A6  0F 85 AF 2B 00 00         JNZ 0x00458c5b
004560AC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004560B2  68 05 0C 00 00            PUSH 0xc05
004560B7  68 3C 9D 7A 00            PUSH 0x7a9d3c
004560BC  51                        PUSH ECX
004560BD  E9 8F 2B 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_13:
004560C2  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004560C8  56                        PUSH ESI
004560C9  8B CB                     MOV ECX,EBX
004560CB  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
004560D5  E8 39 F1 FA FF            CALL 0x00405213
004560DA  8B F8                     MOV EDI,EAX
004560DC  83 FF FF                  CMP EDI,-0x1
004560DF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004560E2  0F 85 73 2B 00 00         JNZ 0x00458c5b
004560E8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004560EE  68 0A 0C 00 00            PUSH 0xc0a
004560F3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004560F8  52                        PUSH EDX
004560F9  E9 53 2B 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_d:
004560FE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456104  56                        PUSH ESI
00456105  8B CB                     MOV ECX,EBX
00456107  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00456111  E8 34 D3 FA FF            CALL 0x0040344a
00456116  8B F8                     MOV EDI,EAX
00456118  83 FF FF                  CMP EDI,-0x1
0045611B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045611E  0F 85 37 2B 00 00         JNZ 0x00458c5b
00456124  68 0F 0C 00 00            PUSH 0xc0f
00456129  E9 18 2B 00 00            JMP 0x00458c46
switchD_00455f6b::caseD_4:
0045612E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456134  56                        PUSH ESI
00456135  8B CB                     MOV ECX,EBX
00456137  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00456141  E8 76 F7 FA FF            CALL 0x004058bc
00456146  8B F8                     MOV EDI,EAX
00456148  83 FF FF                  CMP EDI,-0x1
0045614B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045614E  0F 85 07 2B 00 00         JNZ 0x00458c5b
00456154  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045615A  68 14 0C 00 00            PUSH 0xc14
0045615F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456164  51                        PUSH ECX
00456165  E9 E7 2A 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_5:
0045616A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456170  56                        PUSH ESI
00456171  8B CB                     MOV ECX,EBX
00456173  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
0045617D  E8 85 E3 FA FF            CALL 0x00404507
00456182  8B F8                     MOV EDI,EAX
00456184  83 FF FF                  CMP EDI,-0x1
00456187  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045618A  0F 85 CB 2A 00 00         JNZ 0x00458c5b
00456190  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456196  68 19 0C 00 00            PUSH 0xc19
0045619B  68 3C 9D 7A 00            PUSH 0x7a9d3c
004561A0  52                        PUSH EDX
004561A1  E9 AB 2A 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_f:
004561A6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004561AC  56                        PUSH ESI
004561AD  8B CB                     MOV ECX,EBX
004561AF  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
004561B9  E8 C7 DD FA FF            CALL 0x00403f85
004561BE  8B F8                     MOV EDI,EAX
004561C0  83 FF FF                  CMP EDI,-0x1
004561C3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004561C6  0F 85 8F 2A 00 00         JNZ 0x00458c5b
004561CC  68 1E 0C 00 00            PUSH 0xc1e
004561D1  E9 70 2A 00 00            JMP 0x00458c46
switchD_00455f6b::caseD_14:
004561D6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004561DC  56                        PUSH ESI
004561DD  8B CB                     MOV ECX,EBX
004561DF  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
004561E9  E8 6A C4 FA FF            CALL 0x00402658
004561EE  8B F8                     MOV EDI,EAX
004561F0  83 FF FF                  CMP EDI,-0x1
004561F3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004561F6  0F 85 5F 2A 00 00         JNZ 0x00458c5b
004561FC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456202  68 23 0C 00 00            PUSH 0xc23
00456207  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045620C  51                        PUSH ECX
0045620D  E9 3F 2A 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_10:
00456212  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456218  56                        PUSH ESI
00456219  8B CB                     MOV ECX,EBX
0045621B  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00456225  E8 70 D7 FA FF            CALL 0x0040399a
0045622A  8B F8                     MOV EDI,EAX
0045622C  83 FF FF                  CMP EDI,-0x1
0045622F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456232  0F 85 23 2A 00 00         JNZ 0x00458c5b
00456238  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045623E  68 28 0C 00 00            PUSH 0xc28
00456243  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456248  52                        PUSH EDX
00456249  E9 03 2A 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_7:
0045624E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456254  56                        PUSH ESI
00456255  8B CB                     MOV ECX,EBX
00456257  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00456261  E8 36 D5 FA FF            CALL 0x0040379c
00456266  8B F8                     MOV EDI,EAX
00456268  83 FF FF                  CMP EDI,-0x1
0045626B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045626E  0F 85 E7 29 00 00         JNZ 0x00458c5b
00456274  68 2D 0C 00 00            PUSH 0xc2d
00456279  E9 C8 29 00 00            JMP 0x00458c46
switchD_00455f6b::caseD_a:
0045627E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456284  56                        PUSH ESI
00456285  8B CB                     MOV ECX,EBX
00456287  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00456291  E8 08 F6 FA FF            CALL 0x0040589e
00456296  8B F8                     MOV EDI,EAX
00456298  83 FF FF                  CMP EDI,-0x1
0045629B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045629E  0F 85 B7 29 00 00         JNZ 0x00458c5b
004562A4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004562AA  68 32 0C 00 00            PUSH 0xc32
004562AF  68 3C 9D 7A 00            PUSH 0x7a9d3c
004562B4  51                        PUSH ECX
004562B5  E9 97 29 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_9:
004562BA  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004562C0  56                        PUSH ESI
004562C1  8B CB                     MOV ECX,EBX
004562C3  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
004562CD  E8 86 C8 FA FF            CALL 0x00402b58
004562D2  8B F8                     MOV EDI,EAX
004562D4  83 FF FF                  CMP EDI,-0x1
004562D7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004562DA  0F 85 7B 29 00 00         JNZ 0x00458c5b
004562E0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004562E6  68 37 0C 00 00            PUSH 0xc37
004562EB  68 3C 9D 7A 00            PUSH 0x7a9d3c
004562F0  52                        PUSH EDX
004562F1  E9 5B 29 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_16:
004562F6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004562FC  56                        PUSH ESI
004562FD  8B CB                     MOV ECX,EBX
004562FF  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00456309  E8 79 E4 FA FF            CALL 0x00404787
0045630E  8B F8                     MOV EDI,EAX
00456310  83 FF FF                  CMP EDI,-0x1
00456313  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456316  0F 85 3F 29 00 00         JNZ 0x00458c5b
0045631C  68 3C 0C 00 00            PUSH 0xc3c
00456321  E9 20 29 00 00            JMP 0x00458c46
switchD_00455f6b::caseD_15:
00456326  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045632C  56                        PUSH ESI
0045632D  8B CB                     MOV ECX,EBX
0045632F  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00456339  E8 EF F7 FA FF            CALL 0x00405b2d
0045633E  8B F8                     MOV EDI,EAX
00456340  83 FF FF                  CMP EDI,-0x1
00456343  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456346  0F 85 0F 29 00 00         JNZ 0x00458c5b
0045634C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456352  68 41 0C 00 00            PUSH 0xc41
00456357  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045635C  51                        PUSH ECX
0045635D  E9 EF 28 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_17:
00456362  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456368  56                        PUSH ESI
00456369  8B CB                     MOV ECX,EBX
0045636B  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00456375  E8 BE B5 FA FF            CALL 0x00401938
0045637A  8B F8                     MOV EDI,EAX
0045637C  83 FF FF                  CMP EDI,-0x1
0045637F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456382  0F 85 D3 28 00 00         JNZ 0x00458c5b
00456388  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045638E  68 46 0C 00 00            PUSH 0xc46
00456393  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456398  52                        PUSH EDX
00456399  E9 B3 28 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_b:
0045639E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004563A4  56                        PUSH ESI
004563A5  8B CB                     MOV ECX,EBX
004563A7  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
004563B1  E8 90 F2 FA FF            CALL 0x00405646
004563B6  8B F8                     MOV EDI,EAX
004563B8  83 FF FF                  CMP EDI,-0x1
004563BB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004563BE  0F 85 97 28 00 00         JNZ 0x00458c5b
004563C4  68 4B 0C 00 00            PUSH 0xc4b
004563C9  E9 78 28 00 00            JMP 0x00458c46
switchD_00455f6b::caseD_12:
004563CE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004563D4  56                        PUSH ESI
004563D5  8B CB                     MOV ECX,EBX
004563D7  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
004563E1  E8 FE D1 FA FF            CALL 0x004035e4
004563E6  8B F8                     MOV EDI,EAX
004563E8  83 FF FF                  CMP EDI,-0x1
004563EB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004563EE  0F 85 67 28 00 00         JNZ 0x00458c5b
004563F4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004563FA  68 50 0C 00 00            PUSH 0xc50
004563FF  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456404  51                        PUSH ECX
00456405  E9 47 28 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_8:
0045640A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456410  56                        PUSH ESI
00456411  8B CB                     MOV ECX,EBX
00456413  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
0045641D  E8 6B BF FA FF            CALL 0x0040238d
00456422  8B F8                     MOV EDI,EAX
00456424  83 FF FF                  CMP EDI,-0x1
00456427  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045642A  0F 85 2B 28 00 00         JNZ 0x00458c5b
00456430  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456436  68 55 0C 00 00            PUSH 0xc55
0045643B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456440  52                        PUSH EDX
00456441  E9 0B 28 00 00            JMP 0x00458c51
switchD_00455f6b::caseD_e:
00456446  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045644C  56                        PUSH ESI
0045644D  8B CB                     MOV ECX,EBX
0045644F  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00456459  E8 DB EA FA FF            CALL 0x00404f39
0045645E  8B F8                     MOV EDI,EAX
00456460  83 FF FF                  CMP EDI,-0x1
00456463  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456466  0F 85 EF 27 00 00         JNZ 0x00458c5b
0045646C  68 5A 0C 00 00            PUSH 0xc5a
00456471  E9 D0 27 00 00            JMP 0x00458c46
LAB_00456476:
00456476  39 8B 1C 03 00 00         CMP dword ptr [EBX + 0x31c],ECX
0045647C  0F 85 92 05 00 00         JNZ 0x00456a14
00456482  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00456488  3B C6                     CMP EAX,ESI
0045648A  75 73                     JNZ 0x004564ff
0045648C  56                        PUSH ESI
0045648D  8B CB                     MOV ECX,EBX
0045648F  C7 83 5D 04 00 00 16 00 00 00  MOV dword ptr [EBX + 0x45d],0x16
00456499  E8 8A C9 FA FF            CALL 0x00402e28
0045649E  8B F8                     MOV EDI,EAX
004564A0  83 FF FF                  CMP EDI,-0x1
004564A3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004564A6  75 1B                     JNZ 0x004564c3
004564A8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004564AE  68 66 0C 00 00            PUSH 0xc66
004564B3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004564B8  51                        PUSH ECX
004564B9  68 FF FF 00 00            PUSH 0xffff
004564BE  E8 7D F9 24 00            CALL 0x006a5e40
LAB_004564c3:
004564C3  3B FE                     CMP EDI,ESI
004564C5  0F 85 22 4A 00 00         JNZ 0x0045aeed
004564CB  56                        PUSH ESI
004564CC  8B CB                     MOV ECX,EBX
004564CE  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
004564D8  E8 4E D5 FA FF            CALL 0x00403a2b
004564DD  83 F8 FF                  CMP EAX,-0x1
004564E0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004564E3  0F 85 04 4A 00 00         JNZ 0x0045aeed
004564E9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004564EF  68 6A 0C 00 00            PUSH 0xc6a
004564F4  68 3C 9D 7A 00            PUSH 0x7a9d3c
004564F9  52                        PUSH EDX
004564FA  E9 E4 49 00 00            JMP 0x0045aee3
LAB_004564ff:
004564FF  48                        DEC EAX
00456500  83 F8 16                  CMP EAX,0x16
00456503  0F 87 E4 49 00 00         JA 0x0045aeed
switchD_00456509::switchD:
00456509  FF 24 85 6C B7 45 00      JMP dword ptr [EAX*0x4 + 0x45b76c]
switchD_00456509::caseD_1:
00456510  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456516  56                        PUSH ESI
00456517  8B CB                     MOV ECX,EBX
00456519  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00456523  E8 C8 D8 FA FF            CALL 0x00403df0
00456528  8B F8                     MOV EDI,EAX
0045652A  83 FF FF                  CMP EDI,-0x1
0045652D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456530  0F 85 25 27 00 00         JNZ 0x00458c5b
00456536  68 72 0C 00 00            PUSH 0xc72
0045653B  E9 06 27 00 00            JMP 0x00458c46
switchD_00456509::caseD_3:
00456540  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456546  56                        PUSH ESI
00456547  8B CB                     MOV ECX,EBX
00456549  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00456553  E8 E2 E3 FA FF            CALL 0x0040493a
00456558  8B F8                     MOV EDI,EAX
0045655A  83 FF FF                  CMP EDI,-0x1
0045655D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456560  0F 85 F5 26 00 00         JNZ 0x00458c5b
00456566  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045656C  68 78 0C 00 00            PUSH 0xc78
00456571  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456576  51                        PUSH ECX
00456577  E9 D5 26 00 00            JMP 0x00458c51
switchD_00456509::caseD_2:
0045657C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456582  56                        PUSH ESI
00456583  8B CB                     MOV ECX,EBX
00456585  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
0045658F  E8 BF CF FA FF            CALL 0x00403553
00456594  8B F8                     MOV EDI,EAX
00456596  83 FF FF                  CMP EDI,-0x1
00456599  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045659C  0F 85 B9 26 00 00         JNZ 0x00458c5b
004565A2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004565A8  68 7D 0C 00 00            PUSH 0xc7d
004565AD  68 3C 9D 7A 00            PUSH 0x7a9d3c
004565B2  52                        PUSH EDX
004565B3  E9 99 26 00 00            JMP 0x00458c51
switchD_00456509::caseD_6:
004565B8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004565BE  56                        PUSH ESI
004565BF  8B CB                     MOV ECX,EBX
004565C1  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
004565CB  E8 23 C1 FA FF            CALL 0x004026f3
004565D0  8B F8                     MOV EDI,EAX
004565D2  83 FF FF                  CMP EDI,-0x1
004565D5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004565D8  0F 85 7D 26 00 00         JNZ 0x00458c5b
004565DE  68 82 0C 00 00            PUSH 0xc82
004565E3  E9 5E 26 00 00            JMP 0x00458c46
switchD_00456509::caseD_c:
004565E8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004565EE  56                        PUSH ESI
004565EF  8B CB                     MOV ECX,EBX
004565F1  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
004565FB  E8 DC CD FA FF            CALL 0x004033dc
00456600  8B F8                     MOV EDI,EAX
00456602  83 FF FF                  CMP EDI,-0x1
00456605  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456608  0F 85 4D 26 00 00         JNZ 0x00458c5b
0045660E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456614  68 87 0C 00 00            PUSH 0xc87
00456619  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045661E  51                        PUSH ECX
0045661F  E9 2D 26 00 00            JMP 0x00458c51
switchD_00456509::caseD_11:
00456624  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045662A  56                        PUSH ESI
0045662B  8B CB                     MOV ECX,EBX
0045662D  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00456637  E8 D7 AA FA FF            CALL 0x00401113
0045663C  8B F8                     MOV EDI,EAX
0045663E  83 FF FF                  CMP EDI,-0x1
00456641  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456644  0F 85 11 26 00 00         JNZ 0x00458c5b
0045664A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456650  68 8C 0C 00 00            PUSH 0xc8c
00456655  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045665A  52                        PUSH EDX
0045665B  E9 F1 25 00 00            JMP 0x00458c51
switchD_00456509::caseD_13:
00456660  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456666  56                        PUSH ESI
00456667  8B CB                     MOV ECX,EBX
00456669  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00456673  E8 9B EB FA FF            CALL 0x00405213
00456678  8B F8                     MOV EDI,EAX
0045667A  83 FF FF                  CMP EDI,-0x1
0045667D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456680  0F 85 D5 25 00 00         JNZ 0x00458c5b
00456686  68 91 0C 00 00            PUSH 0xc91
0045668B  E9 B6 25 00 00            JMP 0x00458c46
switchD_00456509::caseD_d:
00456690  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456696  56                        PUSH ESI
00456697  8B CB                     MOV ECX,EBX
00456699  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
004566A3  E8 A2 CD FA FF            CALL 0x0040344a
004566A8  8B F8                     MOV EDI,EAX
004566AA  83 FF FF                  CMP EDI,-0x1
004566AD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004566B0  0F 85 A5 25 00 00         JNZ 0x00458c5b
004566B6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004566BC  68 96 0C 00 00            PUSH 0xc96
004566C1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004566C6  51                        PUSH ECX
004566C7  E9 85 25 00 00            JMP 0x00458c51
switchD_00456509::caseD_4:
004566CC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004566D2  56                        PUSH ESI
004566D3  8B CB                     MOV ECX,EBX
004566D5  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
004566DF  E8 D8 F1 FA FF            CALL 0x004058bc
004566E4  8B F8                     MOV EDI,EAX
004566E6  83 FF FF                  CMP EDI,-0x1
004566E9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004566EC  0F 85 69 25 00 00         JNZ 0x00458c5b
004566F2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004566F8  68 9B 0C 00 00            PUSH 0xc9b
004566FD  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456702  52                        PUSH EDX
00456703  E9 49 25 00 00            JMP 0x00458c51
switchD_00456509::caseD_5:
00456708  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045670E  56                        PUSH ESI
0045670F  8B CB                     MOV ECX,EBX
00456711  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
0045671B  E8 E7 DD FA FF            CALL 0x00404507
00456720  8B F8                     MOV EDI,EAX
00456722  83 FF FF                  CMP EDI,-0x1
00456725  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456728  0F 85 2D 25 00 00         JNZ 0x00458c5b
0045672E  68 A0 0C 00 00            PUSH 0xca0
00456733  E9 0E 25 00 00            JMP 0x00458c46
switchD_00456509::caseD_f:
00456738  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045673E  56                        PUSH ESI
0045673F  8B CB                     MOV ECX,EBX
00456741  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
0045674B  E8 35 D8 FA FF            CALL 0x00403f85
00456750  8B F8                     MOV EDI,EAX
00456752  83 FF FF                  CMP EDI,-0x1
00456755  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456758  0F 85 FD 24 00 00         JNZ 0x00458c5b
0045675E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456764  68 A5 0C 00 00            PUSH 0xca5
00456769  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045676E  51                        PUSH ECX
0045676F  E9 DD 24 00 00            JMP 0x00458c51
switchD_00456509::caseD_14:
00456774  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045677A  56                        PUSH ESI
0045677B  8B CB                     MOV ECX,EBX
0045677D  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00456787  E8 CC BE FA FF            CALL 0x00402658
0045678C  8B F8                     MOV EDI,EAX
0045678E  83 FF FF                  CMP EDI,-0x1
00456791  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456794  0F 85 C1 24 00 00         JNZ 0x00458c5b
0045679A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004567A0  68 AA 0C 00 00            PUSH 0xcaa
004567A5  68 3C 9D 7A 00            PUSH 0x7a9d3c
004567AA  52                        PUSH EDX
004567AB  E9 A1 24 00 00            JMP 0x00458c51
switchD_00456509::caseD_10:
004567B0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004567B6  56                        PUSH ESI
004567B7  8B CB                     MOV ECX,EBX
004567B9  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
004567C3  E8 D2 D1 FA FF            CALL 0x0040399a
004567C8  8B F8                     MOV EDI,EAX
004567CA  83 FF FF                  CMP EDI,-0x1
004567CD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004567D0  0F 85 85 24 00 00         JNZ 0x00458c5b
004567D6  68 AF 0C 00 00            PUSH 0xcaf
004567DB  E9 66 24 00 00            JMP 0x00458c46
switchD_00456509::caseD_7:
004567E0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004567E6  56                        PUSH ESI
004567E7  8B CB                     MOV ECX,EBX
004567E9  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
004567F3  E8 A4 CF FA FF            CALL 0x0040379c
004567F8  8B F8                     MOV EDI,EAX
004567FA  83 FF FF                  CMP EDI,-0x1
004567FD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456800  0F 85 55 24 00 00         JNZ 0x00458c5b
00456806  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045680C  68 B4 0C 00 00            PUSH 0xcb4
00456811  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456816  51                        PUSH ECX
00456817  E9 35 24 00 00            JMP 0x00458c51
switchD_00456509::caseD_a:
0045681C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456822  56                        PUSH ESI
00456823  8B CB                     MOV ECX,EBX
00456825  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
0045682F  E8 6A F0 FA FF            CALL 0x0040589e
00456834  8B F8                     MOV EDI,EAX
00456836  83 FF FF                  CMP EDI,-0x1
00456839  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045683C  0F 85 19 24 00 00         JNZ 0x00458c5b
00456842  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456848  68 B9 0C 00 00            PUSH 0xcb9
0045684D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456852  52                        PUSH EDX
00456853  E9 F9 23 00 00            JMP 0x00458c51
switchD_00456509::caseD_9:
00456858  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045685E  56                        PUSH ESI
0045685F  8B CB                     MOV ECX,EBX
00456861  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
0045686B  E8 E8 C2 FA FF            CALL 0x00402b58
00456870  8B F8                     MOV EDI,EAX
00456872  83 FF FF                  CMP EDI,-0x1
00456875  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456878  0F 85 DD 23 00 00         JNZ 0x00458c5b
0045687E  68 BE 0C 00 00            PUSH 0xcbe
00456883  E9 BE 23 00 00            JMP 0x00458c46
switchD_00456509::caseD_16:
00456888  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045688E  56                        PUSH ESI
0045688F  8B CB                     MOV ECX,EBX
00456891  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
0045689B  E8 E7 DE FA FF            CALL 0x00404787
004568A0  8B F8                     MOV EDI,EAX
004568A2  83 FF FF                  CMP EDI,-0x1
004568A5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004568A8  0F 85 AD 23 00 00         JNZ 0x00458c5b
004568AE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004568B4  68 C3 0C 00 00            PUSH 0xcc3
004568B9  68 3C 9D 7A 00            PUSH 0x7a9d3c
004568BE  51                        PUSH ECX
004568BF  E9 8D 23 00 00            JMP 0x00458c51
switchD_00456509::caseD_15:
004568C4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004568CA  56                        PUSH ESI
004568CB  8B CB                     MOV ECX,EBX
004568CD  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
004568D7  E8 51 F2 FA FF            CALL 0x00405b2d
004568DC  8B F8                     MOV EDI,EAX
004568DE  83 FF FF                  CMP EDI,-0x1
004568E1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004568E4  0F 85 71 23 00 00         JNZ 0x00458c5b
004568EA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004568F0  68 C8 0C 00 00            PUSH 0xcc8
004568F5  68 3C 9D 7A 00            PUSH 0x7a9d3c
004568FA  52                        PUSH EDX
004568FB  E9 51 23 00 00            JMP 0x00458c51
switchD_00456509::caseD_17:
00456900  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456906  56                        PUSH ESI
00456907  8B CB                     MOV ECX,EBX
00456909  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00456913  E8 20 B0 FA FF            CALL 0x00401938
00456918  8B F8                     MOV EDI,EAX
0045691A  83 FF FF                  CMP EDI,-0x1
0045691D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456920  0F 85 35 23 00 00         JNZ 0x00458c5b
00456926  68 CD 0C 00 00            PUSH 0xccd
0045692B  E9 16 23 00 00            JMP 0x00458c46
switchD_00456509::caseD_b:
00456930  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456936  56                        PUSH ESI
00456937  8B CB                     MOV ECX,EBX
00456939  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00456943  E8 FE EC FA FF            CALL 0x00405646
00456948  8B F8                     MOV EDI,EAX
0045694A  83 FF FF                  CMP EDI,-0x1
0045694D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456950  0F 85 05 23 00 00         JNZ 0x00458c5b
00456956  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045695C  68 D2 0C 00 00            PUSH 0xcd2
00456961  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456966  51                        PUSH ECX
00456967  E9 E5 22 00 00            JMP 0x00458c51
switchD_00456509::caseD_12:
0045696C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456972  56                        PUSH ESI
00456973  8B CB                     MOV ECX,EBX
00456975  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
0045697F  E8 60 CC FA FF            CALL 0x004035e4
00456984  8B F8                     MOV EDI,EAX
00456986  83 FF FF                  CMP EDI,-0x1
00456989  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045698C  0F 85 C9 22 00 00         JNZ 0x00458c5b
00456992  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456998  68 D7 0C 00 00            PUSH 0xcd7
0045699D  68 3C 9D 7A 00            PUSH 0x7a9d3c
004569A2  52                        PUSH EDX
004569A3  E9 A9 22 00 00            JMP 0x00458c51
switchD_00456509::caseD_8:
004569A8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004569AE  56                        PUSH ESI
004569AF  8B CB                     MOV ECX,EBX
004569B1  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
004569BB  E8 CD B9 FA FF            CALL 0x0040238d
004569C0  8B F8                     MOV EDI,EAX
004569C2  83 FF FF                  CMP EDI,-0x1
004569C5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004569C8  0F 85 8D 22 00 00         JNZ 0x00458c5b
004569CE  68 DC 0C 00 00            PUSH 0xcdc
004569D3  E9 6E 22 00 00            JMP 0x00458c46
switchD_00456509::caseD_e:
004569D8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004569DE  56                        PUSH ESI
004569DF  8B CB                     MOV ECX,EBX
004569E1  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
004569EB  E8 49 E5 FA FF            CALL 0x00404f39
004569F0  8B F8                     MOV EDI,EAX
004569F2  83 FF FF                  CMP EDI,-0x1
004569F5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004569F8  0F 85 5D 22 00 00         JNZ 0x00458c5b
004569FE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456A04  68 E1 0C 00 00            PUSH 0xce1
00456A09  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456A0E  51                        PUSH ECX
00456A0F  E9 3D 22 00 00            JMP 0x00458c51
LAB_00456a14:
00456A14  39 8B 18 03 00 00         CMP dword ptr [EBX + 0x318],ECX
00456A1A  0F 85 9D 05 00 00         JNZ 0x00456fbd
00456A20  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00456A26  3B C6                     CMP EAX,ESI
00456A28  75 72                     JNZ 0x00456a9c
00456A2A  56                        PUSH ESI
00456A2B  8B CB                     MOV ECX,EBX
00456A2D  C7 83 5D 04 00 00 15 00 00 00  MOV dword ptr [EBX + 0x45d],0x15
00456A37  E8 44 EE FA FF            CALL 0x00405880
00456A3C  8B F8                     MOV EDI,EAX
00456A3E  83 FF FF                  CMP EDI,-0x1
00456A41  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456A44  75 1B                     JNZ 0x00456a61
00456A46  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456A4C  68 ED 0C 00 00            PUSH 0xced
00456A51  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456A56  52                        PUSH EDX
00456A57  68 FF FF 00 00            PUSH 0xffff
00456A5C  E8 DF F3 24 00            CALL 0x006a5e40
LAB_00456a61:
00456A61  3B FE                     CMP EDI,ESI
00456A63  0F 85 84 44 00 00         JNZ 0x0045aeed
00456A69  56                        PUSH ESI
00456A6A  8B CB                     MOV ECX,EBX
00456A6C  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00456A76  E8 B0 CF FA FF            CALL 0x00403a2b
00456A7B  83 F8 FF                  CMP EAX,-0x1
00456A7E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00456A81  0F 85 66 44 00 00         JNZ 0x0045aeed
00456A87  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00456A8C  68 F1 0C 00 00            PUSH 0xcf1
00456A91  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456A96  50                        PUSH EAX
00456A97  E9 47 44 00 00            JMP 0x0045aee3
LAB_00456a9c:
00456A9C  48                        DEC EAX
00456A9D  83 F8 16                  CMP EAX,0x16
00456AA0  0F 87 47 44 00 00         JA 0x0045aeed
switchD_00456aa6::switchD:
00456AA6  FF 24 85 C8 B7 45 00      JMP dword ptr [EAX*0x4 + 0x45b7c8]
switchD_00456aa6::caseD_1:
00456AAD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456AB3  56                        PUSH ESI
00456AB4  8B CB                     MOV ECX,EBX
00456AB6  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00456AC0  E8 2B D3 FA FF            CALL 0x00403df0
00456AC5  8B F8                     MOV EDI,EAX
00456AC7  83 FF FF                  CMP EDI,-0x1
00456ACA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456ACD  0F 85 88 21 00 00         JNZ 0x00458c5b
00456AD3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456AD9  68 F9 0C 00 00            PUSH 0xcf9
00456ADE  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456AE3  51                        PUSH ECX
00456AE4  E9 68 21 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_3:
00456AE9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456AEF  56                        PUSH ESI
00456AF0  8B CB                     MOV ECX,EBX
00456AF2  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00456AFC  E8 39 DE FA FF            CALL 0x0040493a
00456B01  8B F8                     MOV EDI,EAX
00456B03  83 FF FF                  CMP EDI,-0x1
00456B06  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456B09  0F 85 4C 21 00 00         JNZ 0x00458c5b
00456B0F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456B15  68 FF 0C 00 00            PUSH 0xcff
00456B1A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456B1F  52                        PUSH EDX
00456B20  E9 2C 21 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_2:
00456B25  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456B2B  56                        PUSH ESI
00456B2C  8B CB                     MOV ECX,EBX
00456B2E  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00456B38  E8 16 CA FA FF            CALL 0x00403553
00456B3D  8B F8                     MOV EDI,EAX
00456B3F  83 FF FF                  CMP EDI,-0x1
00456B42  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456B45  0F 85 10 21 00 00         JNZ 0x00458c5b
00456B4B  68 04 0D 00 00            PUSH 0xd04
00456B50  E9 F1 20 00 00            JMP 0x00458c46
switchD_00456aa6::caseD_6:
00456B55  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456B5B  56                        PUSH ESI
00456B5C  8B CB                     MOV ECX,EBX
00456B5E  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00456B68  E8 86 BB FA FF            CALL 0x004026f3
00456B6D  8B F8                     MOV EDI,EAX
00456B6F  83 FF FF                  CMP EDI,-0x1
00456B72  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456B75  0F 85 E0 20 00 00         JNZ 0x00458c5b
00456B7B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456B81  68 09 0D 00 00            PUSH 0xd09
00456B86  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456B8B  51                        PUSH ECX
00456B8C  E9 C0 20 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_c:
00456B91  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456B97  56                        PUSH ESI
00456B98  8B CB                     MOV ECX,EBX
00456B9A  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00456BA4  E8 33 C8 FA FF            CALL 0x004033dc
00456BA9  8B F8                     MOV EDI,EAX
00456BAB  83 FF FF                  CMP EDI,-0x1
00456BAE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456BB1  0F 85 A4 20 00 00         JNZ 0x00458c5b
00456BB7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456BBD  68 0E 0D 00 00            PUSH 0xd0e
00456BC2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456BC7  52                        PUSH EDX
00456BC8  E9 84 20 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_11:
00456BCD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456BD3  56                        PUSH ESI
00456BD4  8B CB                     MOV ECX,EBX
00456BD6  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00456BE0  E8 2E A5 FA FF            CALL 0x00401113
00456BE5  8B F8                     MOV EDI,EAX
00456BE7  83 FF FF                  CMP EDI,-0x1
00456BEA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456BED  0F 85 68 20 00 00         JNZ 0x00458c5b
00456BF3  68 13 0D 00 00            PUSH 0xd13
00456BF8  E9 49 20 00 00            JMP 0x00458c46
switchD_00456aa6::caseD_13:
00456BFD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456C03  56                        PUSH ESI
00456C04  8B CB                     MOV ECX,EBX
00456C06  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00456C10  E8 FE E5 FA FF            CALL 0x00405213
00456C15  8B F8                     MOV EDI,EAX
00456C17  83 FF FF                  CMP EDI,-0x1
00456C1A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456C1D  0F 85 38 20 00 00         JNZ 0x00458c5b
00456C23  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456C29  68 18 0D 00 00            PUSH 0xd18
00456C2E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456C33  51                        PUSH ECX
00456C34  E9 18 20 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_d:
00456C39  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456C3F  56                        PUSH ESI
00456C40  8B CB                     MOV ECX,EBX
00456C42  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00456C4C  E8 F9 C7 FA FF            CALL 0x0040344a
00456C51  8B F8                     MOV EDI,EAX
00456C53  83 FF FF                  CMP EDI,-0x1
00456C56  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456C59  0F 85 FC 1F 00 00         JNZ 0x00458c5b
00456C5F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456C65  68 1D 0D 00 00            PUSH 0xd1d
00456C6A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456C6F  52                        PUSH EDX
00456C70  E9 DC 1F 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_4:
00456C75  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456C7B  56                        PUSH ESI
00456C7C  8B CB                     MOV ECX,EBX
00456C7E  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00456C88  E8 2F EC FA FF            CALL 0x004058bc
00456C8D  8B F8                     MOV EDI,EAX
00456C8F  83 FF FF                  CMP EDI,-0x1
00456C92  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456C95  0F 85 C0 1F 00 00         JNZ 0x00458c5b
00456C9B  68 22 0D 00 00            PUSH 0xd22
00456CA0  E9 A1 1F 00 00            JMP 0x00458c46
switchD_00456aa6::caseD_5:
00456CA5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456CAB  56                        PUSH ESI
00456CAC  8B CB                     MOV ECX,EBX
00456CAE  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00456CB8  E8 4A D8 FA FF            CALL 0x00404507
00456CBD  8B F8                     MOV EDI,EAX
00456CBF  83 FF FF                  CMP EDI,-0x1
00456CC2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456CC5  0F 85 90 1F 00 00         JNZ 0x00458c5b
00456CCB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456CD1  68 27 0D 00 00            PUSH 0xd27
00456CD6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456CDB  51                        PUSH ECX
00456CDC  E9 70 1F 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_f:
00456CE1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456CE7  56                        PUSH ESI
00456CE8  8B CB                     MOV ECX,EBX
00456CEA  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00456CF4  E8 8C D2 FA FF            CALL 0x00403f85
00456CF9  8B F8                     MOV EDI,EAX
00456CFB  83 FF FF                  CMP EDI,-0x1
00456CFE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456D01  0F 85 54 1F 00 00         JNZ 0x00458c5b
00456D07  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456D0D  68 2C 0D 00 00            PUSH 0xd2c
00456D12  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456D17  52                        PUSH EDX
00456D18  E9 34 1F 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_14:
00456D1D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456D23  56                        PUSH ESI
00456D24  8B CB                     MOV ECX,EBX
00456D26  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00456D30  E8 23 B9 FA FF            CALL 0x00402658
00456D35  8B F8                     MOV EDI,EAX
00456D37  83 FF FF                  CMP EDI,-0x1
00456D3A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456D3D  0F 85 18 1F 00 00         JNZ 0x00458c5b
00456D43  68 31 0D 00 00            PUSH 0xd31
00456D48  E9 F9 1E 00 00            JMP 0x00458c46
switchD_00456aa6::caseD_10:
00456D4D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456D53  56                        PUSH ESI
00456D54  8B CB                     MOV ECX,EBX
00456D56  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00456D60  E8 35 CC FA FF            CALL 0x0040399a
00456D65  8B F8                     MOV EDI,EAX
00456D67  83 FF FF                  CMP EDI,-0x1
00456D6A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456D6D  0F 85 E8 1E 00 00         JNZ 0x00458c5b
00456D73  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456D79  68 36 0D 00 00            PUSH 0xd36
00456D7E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456D83  51                        PUSH ECX
00456D84  E9 C8 1E 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_7:
00456D89  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456D8F  56                        PUSH ESI
00456D90  8B CB                     MOV ECX,EBX
00456D92  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00456D9C  E8 FB C9 FA FF            CALL 0x0040379c
00456DA1  8B F8                     MOV EDI,EAX
00456DA3  83 FF FF                  CMP EDI,-0x1
00456DA6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456DA9  0F 85 AC 1E 00 00         JNZ 0x00458c5b
00456DAF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456DB5  68 3B 0D 00 00            PUSH 0xd3b
00456DBA  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456DBF  52                        PUSH EDX
00456DC0  E9 8C 1E 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_a:
00456DC5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456DCB  56                        PUSH ESI
00456DCC  8B CB                     MOV ECX,EBX
00456DCE  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00456DD8  E8 C1 EA FA FF            CALL 0x0040589e
00456DDD  8B F8                     MOV EDI,EAX
00456DDF  83 FF FF                  CMP EDI,-0x1
00456DE2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456DE5  0F 85 70 1E 00 00         JNZ 0x00458c5b
00456DEB  68 40 0D 00 00            PUSH 0xd40
00456DF0  E9 51 1E 00 00            JMP 0x00458c46
switchD_00456aa6::caseD_9:
00456DF5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456DFB  56                        PUSH ESI
00456DFC  8B CB                     MOV ECX,EBX
00456DFE  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00456E08  E8 4B BD FA FF            CALL 0x00402b58
00456E0D  8B F8                     MOV EDI,EAX
00456E0F  83 FF FF                  CMP EDI,-0x1
00456E12  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456E15  0F 85 40 1E 00 00         JNZ 0x00458c5b
00456E1B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456E21  68 45 0D 00 00            PUSH 0xd45
00456E26  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456E2B  51                        PUSH ECX
00456E2C  E9 20 1E 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_16:
00456E31  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456E37  56                        PUSH ESI
00456E38  8B CB                     MOV ECX,EBX
00456E3A  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00456E44  E8 3E D9 FA FF            CALL 0x00404787
00456E49  8B F8                     MOV EDI,EAX
00456E4B  83 FF FF                  CMP EDI,-0x1
00456E4E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456E51  0F 85 04 1E 00 00         JNZ 0x00458c5b
00456E57  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456E5D  68 4A 0D 00 00            PUSH 0xd4a
00456E62  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456E67  52                        PUSH EDX
00456E68  E9 E4 1D 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_15:
00456E6D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456E73  56                        PUSH ESI
00456E74  8B CB                     MOV ECX,EBX
00456E76  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00456E80  E8 A8 EC FA FF            CALL 0x00405b2d
00456E85  8B F8                     MOV EDI,EAX
00456E87  83 FF FF                  CMP EDI,-0x1
00456E8A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456E8D  0F 85 C8 1D 00 00         JNZ 0x00458c5b
00456E93  68 4F 0D 00 00            PUSH 0xd4f
00456E98  E9 A9 1D 00 00            JMP 0x00458c46
switchD_00456aa6::caseD_17:
00456E9D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456EA3  56                        PUSH ESI
00456EA4  8B CB                     MOV ECX,EBX
00456EA6  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00456EB0  E8 83 AA FA FF            CALL 0x00401938
00456EB5  8B F8                     MOV EDI,EAX
00456EB7  83 FF FF                  CMP EDI,-0x1
00456EBA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456EBD  0F 85 98 1D 00 00         JNZ 0x00458c5b
00456EC3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456EC9  68 54 0D 00 00            PUSH 0xd54
00456ECE  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456ED3  51                        PUSH ECX
00456ED4  E9 78 1D 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_b:
00456ED9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456EDF  56                        PUSH ESI
00456EE0  8B CB                     MOV ECX,EBX
00456EE2  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00456EEC  E8 55 E7 FA FF            CALL 0x00405646
00456EF1  8B F8                     MOV EDI,EAX
00456EF3  83 FF FF                  CMP EDI,-0x1
00456EF6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456EF9  0F 85 5C 1D 00 00         JNZ 0x00458c5b
00456EFF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456F05  68 59 0D 00 00            PUSH 0xd59
00456F0A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456F0F  52                        PUSH EDX
00456F10  E9 3C 1D 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_12:
00456F15  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456F1B  56                        PUSH ESI
00456F1C  8B CB                     MOV ECX,EBX
00456F1E  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00456F28  E8 B7 C6 FA FF            CALL 0x004035e4
00456F2D  8B F8                     MOV EDI,EAX
00456F2F  83 FF FF                  CMP EDI,-0x1
00456F32  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456F35  0F 85 20 1D 00 00         JNZ 0x00458c5b
00456F3B  68 5E 0D 00 00            PUSH 0xd5e
00456F40  E9 01 1D 00 00            JMP 0x00458c46
switchD_00456aa6::caseD_8:
00456F45  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456F4B  56                        PUSH ESI
00456F4C  8B CB                     MOV ECX,EBX
00456F4E  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00456F58  E8 30 B4 FA FF            CALL 0x0040238d
00456F5D  8B F8                     MOV EDI,EAX
00456F5F  83 FF FF                  CMP EDI,-0x1
00456F62  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456F65  0F 85 F0 1C 00 00         JNZ 0x00458c5b
00456F6B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00456F71  68 63 0D 00 00            PUSH 0xd63
00456F76  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456F7B  51                        PUSH ECX
00456F7C  E9 D0 1C 00 00            JMP 0x00458c51
switchD_00456aa6::caseD_e:
00456F81  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00456F87  56                        PUSH ESI
00456F88  8B CB                     MOV ECX,EBX
00456F8A  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00456F94  E8 A0 DF FA FF            CALL 0x00404f39
00456F99  8B F8                     MOV EDI,EAX
00456F9B  83 FF FF                  CMP EDI,-0x1
00456F9E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456FA1  0F 85 B4 1C 00 00         JNZ 0x00458c5b
00456FA7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00456FAD  68 68 0D 00 00            PUSH 0xd68
00456FB2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456FB7  52                        PUSH EDX
00456FB8  E9 94 1C 00 00            JMP 0x00458c51
LAB_00456fbd:
00456FBD  39 8B 20 03 00 00         CMP dword ptr [EBX + 0x320],ECX
00456FC3  0F 85 85 05 00 00         JNZ 0x0045754e
00456FC9  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00456FCF  3B C6                     CMP EAX,ESI
00456FD1  75 66                     JNZ 0x00457039
00456FD3  56                        PUSH ESI
00456FD4  8B CB                     MOV ECX,EBX
00456FD6  C7 83 5D 04 00 00 17 00 00 00  MOV dword ptr [EBX + 0x45d],0x17
00456FE0  E8 29 D8 FA FF            CALL 0x0040480e
00456FE5  8B F8                     MOV EDI,EAX
00456FE7  83 FF FF                  CMP EDI,-0x1
00456FEA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00456FED  75 1A                     JNZ 0x00457009
00456FEF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00456FF4  68 74 0D 00 00            PUSH 0xd74
00456FF9  68 3C 9D 7A 00            PUSH 0x7a9d3c
00456FFE  50                        PUSH EAX
00456FFF  68 FF FF 00 00            PUSH 0xffff
00457004  E8 37 EE 24 00            CALL 0x006a5e40
LAB_00457009:
00457009  3B FE                     CMP EDI,ESI
0045700B  0F 85 DC 3E 00 00         JNZ 0x0045aeed
00457011  56                        PUSH ESI
00457012  8B CB                     MOV ECX,EBX
00457014  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045701E  E8 08 CA FA FF            CALL 0x00403a2b
00457023  83 F8 FF                  CMP EAX,-0x1
00457026  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00457029  0F 85 BE 3E 00 00         JNZ 0x0045aeed
0045702F  68 78 0D 00 00            PUSH 0xd78
00457034  E9 9E 3E 00 00            JMP 0x0045aed7
LAB_00457039:
00457039  48                        DEC EAX
0045703A  83 F8 16                  CMP EAX,0x16
0045703D  0F 87 AA 3E 00 00         JA 0x0045aeed
switchD_00457043::switchD:
00457043  FF 24 85 24 B8 45 00      JMP dword ptr [EAX*0x4 + 0x45b824]
switchD_00457043::caseD_1:
0045704A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457050  56                        PUSH ESI
00457051  8B CB                     MOV ECX,EBX
00457053  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
0045705D  E8 8E CD FA FF            CALL 0x00403df0
00457062  8B F8                     MOV EDI,EAX
00457064  83 FF FF                  CMP EDI,-0x1
00457067  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045706A  0F 85 EB 1B 00 00         JNZ 0x00458c5b
00457070  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457076  68 80 0D 00 00            PUSH 0xd80
0045707B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457080  52                        PUSH EDX
00457081  E9 CB 1B 00 00            JMP 0x00458c51
switchD_00457043::caseD_3:
00457086  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045708C  56                        PUSH ESI
0045708D  8B CB                     MOV ECX,EBX
0045708F  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00457099  E8 9C D8 FA FF            CALL 0x0040493a
0045709E  8B F8                     MOV EDI,EAX
004570A0  83 FF FF                  CMP EDI,-0x1
004570A3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004570A6  0F 85 AF 1B 00 00         JNZ 0x00458c5b
004570AC  68 86 0D 00 00            PUSH 0xd86
004570B1  E9 90 1B 00 00            JMP 0x00458c46
switchD_00457043::caseD_2:
004570B6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004570BC  56                        PUSH ESI
004570BD  8B CB                     MOV ECX,EBX
004570BF  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
004570C9  E8 85 C4 FA FF            CALL 0x00403553
004570CE  8B F8                     MOV EDI,EAX
004570D0  83 FF FF                  CMP EDI,-0x1
004570D3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004570D6  0F 85 7F 1B 00 00         JNZ 0x00458c5b
004570DC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004570E2  68 8B 0D 00 00            PUSH 0xd8b
004570E7  68 3C 9D 7A 00            PUSH 0x7a9d3c
004570EC  51                        PUSH ECX
004570ED  E9 5F 1B 00 00            JMP 0x00458c51
switchD_00457043::caseD_6:
004570F2  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004570F8  56                        PUSH ESI
004570F9  8B CB                     MOV ECX,EBX
004570FB  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00457105  E8 E9 B5 FA FF            CALL 0x004026f3
0045710A  8B F8                     MOV EDI,EAX
0045710C  83 FF FF                  CMP EDI,-0x1
0045710F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457112  0F 85 43 1B 00 00         JNZ 0x00458c5b
00457118  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045711E  68 90 0D 00 00            PUSH 0xd90
00457123  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457128  52                        PUSH EDX
00457129  E9 23 1B 00 00            JMP 0x00458c51
switchD_00457043::caseD_c:
0045712E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457134  56                        PUSH ESI
00457135  8B CB                     MOV ECX,EBX
00457137  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00457141  E8 96 C2 FA FF            CALL 0x004033dc
00457146  8B F8                     MOV EDI,EAX
00457148  83 FF FF                  CMP EDI,-0x1
0045714B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045714E  0F 85 07 1B 00 00         JNZ 0x00458c5b
00457154  68 95 0D 00 00            PUSH 0xd95
00457159  E9 E8 1A 00 00            JMP 0x00458c46
switchD_00457043::caseD_11:
0045715E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457164  56                        PUSH ESI
00457165  8B CB                     MOV ECX,EBX
00457167  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00457171  E8 9D 9F FA FF            CALL 0x00401113
00457176  8B F8                     MOV EDI,EAX
00457178  83 FF FF                  CMP EDI,-0x1
0045717B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045717E  0F 85 D7 1A 00 00         JNZ 0x00458c5b
00457184  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045718A  68 9A 0D 00 00            PUSH 0xd9a
0045718F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457194  51                        PUSH ECX
00457195  E9 B7 1A 00 00            JMP 0x00458c51
switchD_00457043::caseD_13:
0045719A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004571A0  56                        PUSH ESI
004571A1  8B CB                     MOV ECX,EBX
004571A3  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
004571AD  E8 61 E0 FA FF            CALL 0x00405213
004571B2  8B F8                     MOV EDI,EAX
004571B4  83 FF FF                  CMP EDI,-0x1
004571B7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004571BA  0F 85 9B 1A 00 00         JNZ 0x00458c5b
004571C0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004571C6  68 9F 0D 00 00            PUSH 0xd9f
004571CB  68 3C 9D 7A 00            PUSH 0x7a9d3c
004571D0  52                        PUSH EDX
004571D1  E9 7B 1A 00 00            JMP 0x00458c51
switchD_00457043::caseD_d:
004571D6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004571DC  56                        PUSH ESI
004571DD  8B CB                     MOV ECX,EBX
004571DF  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
004571E9  E8 5C C2 FA FF            CALL 0x0040344a
004571EE  8B F8                     MOV EDI,EAX
004571F0  83 FF FF                  CMP EDI,-0x1
004571F3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004571F6  0F 85 5F 1A 00 00         JNZ 0x00458c5b
004571FC  68 A4 0D 00 00            PUSH 0xda4
00457201  E9 40 1A 00 00            JMP 0x00458c46
switchD_00457043::caseD_4:
00457206  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045720C  56                        PUSH ESI
0045720D  8B CB                     MOV ECX,EBX
0045720F  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00457219  E8 9E E6 FA FF            CALL 0x004058bc
0045721E  8B F8                     MOV EDI,EAX
00457220  83 FF FF                  CMP EDI,-0x1
00457223  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457226  0F 85 2F 1A 00 00         JNZ 0x00458c5b
0045722C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457232  68 A9 0D 00 00            PUSH 0xda9
00457237  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045723C  51                        PUSH ECX
0045723D  E9 0F 1A 00 00            JMP 0x00458c51
switchD_00457043::caseD_5:
00457242  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457248  56                        PUSH ESI
00457249  8B CB                     MOV ECX,EBX
0045724B  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00457255  E8 AD D2 FA FF            CALL 0x00404507
0045725A  8B F8                     MOV EDI,EAX
0045725C  83 FF FF                  CMP EDI,-0x1
0045725F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457262  0F 85 F3 19 00 00         JNZ 0x00458c5b
00457268  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045726E  68 AE 0D 00 00            PUSH 0xdae
00457273  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457278  52                        PUSH EDX
00457279  E9 D3 19 00 00            JMP 0x00458c51
switchD_00457043::caseD_f:
0045727E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457284  56                        PUSH ESI
00457285  8B CB                     MOV ECX,EBX
00457287  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00457291  E8 EF CC FA FF            CALL 0x00403f85
00457296  8B F8                     MOV EDI,EAX
00457298  83 FF FF                  CMP EDI,-0x1
0045729B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045729E  0F 85 B7 19 00 00         JNZ 0x00458c5b
004572A4  68 B3 0D 00 00            PUSH 0xdb3
004572A9  E9 98 19 00 00            JMP 0x00458c46
switchD_00457043::caseD_14:
004572AE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004572B4  56                        PUSH ESI
004572B5  8B CB                     MOV ECX,EBX
004572B7  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
004572C1  E8 92 B3 FA FF            CALL 0x00402658
004572C6  8B F8                     MOV EDI,EAX
004572C8  83 FF FF                  CMP EDI,-0x1
004572CB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004572CE  0F 85 87 19 00 00         JNZ 0x00458c5b
004572D4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004572DA  68 B8 0D 00 00            PUSH 0xdb8
004572DF  68 3C 9D 7A 00            PUSH 0x7a9d3c
004572E4  51                        PUSH ECX
004572E5  E9 67 19 00 00            JMP 0x00458c51
switchD_00457043::caseD_10:
004572EA  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004572F0  56                        PUSH ESI
004572F1  8B CB                     MOV ECX,EBX
004572F3  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
004572FD  E8 98 C6 FA FF            CALL 0x0040399a
00457302  8B F8                     MOV EDI,EAX
00457304  83 FF FF                  CMP EDI,-0x1
00457307  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045730A  0F 85 4B 19 00 00         JNZ 0x00458c5b
00457310  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457316  68 BD 0D 00 00            PUSH 0xdbd
0045731B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457320  52                        PUSH EDX
00457321  E9 2B 19 00 00            JMP 0x00458c51
switchD_00457043::caseD_7:
00457326  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045732C  56                        PUSH ESI
0045732D  8B CB                     MOV ECX,EBX
0045732F  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00457339  E8 5E C4 FA FF            CALL 0x0040379c
0045733E  8B F8                     MOV EDI,EAX
00457340  83 FF FF                  CMP EDI,-0x1
00457343  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457346  0F 85 0F 19 00 00         JNZ 0x00458c5b
0045734C  68 C2 0D 00 00            PUSH 0xdc2
00457351  E9 F0 18 00 00            JMP 0x00458c46
switchD_00457043::caseD_a:
00457356  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045735C  56                        PUSH ESI
0045735D  8B CB                     MOV ECX,EBX
0045735F  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00457369  E8 30 E5 FA FF            CALL 0x0040589e
0045736E  8B F8                     MOV EDI,EAX
00457370  83 FF FF                  CMP EDI,-0x1
00457373  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457376  0F 85 DF 18 00 00         JNZ 0x00458c5b
0045737C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457382  68 C7 0D 00 00            PUSH 0xdc7
00457387  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045738C  51                        PUSH ECX
0045738D  E9 BF 18 00 00            JMP 0x00458c51
switchD_00457043::caseD_9:
00457392  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457398  56                        PUSH ESI
00457399  8B CB                     MOV ECX,EBX
0045739B  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
004573A5  E8 AE B7 FA FF            CALL 0x00402b58
004573AA  8B F8                     MOV EDI,EAX
004573AC  83 FF FF                  CMP EDI,-0x1
004573AF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004573B2  0F 85 A3 18 00 00         JNZ 0x00458c5b
004573B8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004573BE  68 CC 0D 00 00            PUSH 0xdcc
004573C3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004573C8  52                        PUSH EDX
004573C9  E9 83 18 00 00            JMP 0x00458c51
switchD_00457043::caseD_16:
004573CE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004573D4  56                        PUSH ESI
004573D5  8B CB                     MOV ECX,EBX
004573D7  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
004573E1  E8 A1 D3 FA FF            CALL 0x00404787
004573E6  8B F8                     MOV EDI,EAX
004573E8  83 FF FF                  CMP EDI,-0x1
004573EB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004573EE  0F 85 67 18 00 00         JNZ 0x00458c5b
004573F4  68 D1 0D 00 00            PUSH 0xdd1
004573F9  E9 48 18 00 00            JMP 0x00458c46
switchD_00457043::caseD_15:
004573FE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457404  56                        PUSH ESI
00457405  8B CB                     MOV ECX,EBX
00457407  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00457411  E8 17 E7 FA FF            CALL 0x00405b2d
00457416  8B F8                     MOV EDI,EAX
00457418  83 FF FF                  CMP EDI,-0x1
0045741B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045741E  0F 85 37 18 00 00         JNZ 0x00458c5b
00457424  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045742A  68 D6 0D 00 00            PUSH 0xdd6
0045742F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457434  51                        PUSH ECX
00457435  E9 17 18 00 00            JMP 0x00458c51
switchD_00457043::caseD_17:
0045743A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457440  56                        PUSH ESI
00457441  8B CB                     MOV ECX,EBX
00457443  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
0045744D  E8 E6 A4 FA FF            CALL 0x00401938
00457452  8B F8                     MOV EDI,EAX
00457454  83 FF FF                  CMP EDI,-0x1
00457457  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045745A  0F 85 FB 17 00 00         JNZ 0x00458c5b
00457460  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457466  68 DB 0D 00 00            PUSH 0xddb
0045746B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457470  52                        PUSH EDX
00457471  E9 DB 17 00 00            JMP 0x00458c51
switchD_00457043::caseD_b:
00457476  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045747C  56                        PUSH ESI
0045747D  8B CB                     MOV ECX,EBX
0045747F  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00457489  E8 B8 E1 FA FF            CALL 0x00405646
0045748E  8B F8                     MOV EDI,EAX
00457490  83 FF FF                  CMP EDI,-0x1
00457493  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457496  0F 85 BF 17 00 00         JNZ 0x00458c5b
0045749C  68 E0 0D 00 00            PUSH 0xde0
004574A1  E9 A0 17 00 00            JMP 0x00458c46
switchD_00457043::caseD_12:
004574A6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004574AC  56                        PUSH ESI
004574AD  8B CB                     MOV ECX,EBX
004574AF  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
004574B9  E8 26 C1 FA FF            CALL 0x004035e4
004574BE  8B F8                     MOV EDI,EAX
004574C0  83 FF FF                  CMP EDI,-0x1
004574C3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004574C6  0F 85 8F 17 00 00         JNZ 0x00458c5b
004574CC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004574D2  68 E5 0D 00 00            PUSH 0xde5
004574D7  68 3C 9D 7A 00            PUSH 0x7a9d3c
004574DC  51                        PUSH ECX
004574DD  E9 6F 17 00 00            JMP 0x00458c51
switchD_00457043::caseD_8:
004574E2  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004574E8  56                        PUSH ESI
004574E9  8B CB                     MOV ECX,EBX
004574EB  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
004574F5  E8 93 AE FA FF            CALL 0x0040238d
004574FA  8B F8                     MOV EDI,EAX
004574FC  83 FF FF                  CMP EDI,-0x1
004574FF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457502  0F 85 53 17 00 00         JNZ 0x00458c5b
00457508  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045750E  68 EA 0D 00 00            PUSH 0xdea
00457513  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457518  52                        PUSH EDX
00457519  E9 33 17 00 00            JMP 0x00458c51
switchD_00457043::caseD_e:
0045751E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457524  56                        PUSH ESI
00457525  8B CB                     MOV ECX,EBX
00457527  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00457531  E8 03 DA FA FF            CALL 0x00404f39
00457536  8B F8                     MOV EDI,EAX
00457538  83 FF FF                  CMP EDI,-0x1
0045753B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045753E  0F 85 17 17 00 00         JNZ 0x00458c5b
00457544  68 EF 0D 00 00            PUSH 0xdef
00457549  E9 F8 16 00 00            JMP 0x00458c46
LAB_0045754e:
0045754E  39 8B F4 02 00 00         CMP dword ptr [EBX + 0x2f4],ECX
00457554  0F 85 92 05 00 00         JNZ 0x00457aec
0045755A  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00457560  3B C6                     CMP EAX,ESI
00457562  75 73                     JNZ 0x004575d7
00457564  56                        PUSH ESI
00457565  8B CB                     MOV ECX,EBX
00457567  C7 83 5D 04 00 00 0B 00 00 00  MOV dword ptr [EBX + 0x45d],0xb
00457571  E8 85 9F FA FF            CALL 0x004014fb
00457576  8B F8                     MOV EDI,EAX
00457578  83 FF FF                  CMP EDI,-0x1
0045757B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045757E  75 1B                     JNZ 0x0045759b
00457580  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457586  68 FB 0D 00 00            PUSH 0xdfb
0045758B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457590  51                        PUSH ECX
00457591  68 FF FF 00 00            PUSH 0xffff
00457596  E8 A5 E8 24 00            CALL 0x006a5e40
LAB_0045759b:
0045759B  3B FE                     CMP EDI,ESI
0045759D  0F 85 4A 39 00 00         JNZ 0x0045aeed
004575A3  56                        PUSH ESI
004575A4  8B CB                     MOV ECX,EBX
004575A6  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
004575B0  E8 76 C4 FA FF            CALL 0x00403a2b
004575B5  83 F8 FF                  CMP EAX,-0x1
004575B8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004575BB  0F 85 2C 39 00 00         JNZ 0x0045aeed
004575C1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004575C7  68 FF 0D 00 00            PUSH 0xdff
004575CC  68 3C 9D 7A 00            PUSH 0x7a9d3c
004575D1  52                        PUSH EDX
004575D2  E9 0C 39 00 00            JMP 0x0045aee3
LAB_004575d7:
004575D7  48                        DEC EAX
004575D8  83 F8 16                  CMP EAX,0x16
004575DB  0F 87 0C 39 00 00         JA 0x0045aeed
switchD_004575e1::switchD:
004575E1  FF 24 85 80 B8 45 00      JMP dword ptr [EAX*0x4 + 0x45b880]
switchD_004575e1::caseD_1:
004575E8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004575EE  56                        PUSH ESI
004575EF  8B CB                     MOV ECX,EBX
004575F1  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
004575FB  E8 F0 C7 FA FF            CALL 0x00403df0
00457600  8B F8                     MOV EDI,EAX
00457602  83 FF FF                  CMP EDI,-0x1
00457605  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457608  0F 85 4D 16 00 00         JNZ 0x00458c5b
0045760E  68 07 0E 00 00            PUSH 0xe07
00457613  E9 2E 16 00 00            JMP 0x00458c46
switchD_004575e1::caseD_3:
00457618  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045761E  56                        PUSH ESI
0045761F  8B CB                     MOV ECX,EBX
00457621  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
0045762B  E8 0A D3 FA FF            CALL 0x0040493a
00457630  8B F8                     MOV EDI,EAX
00457632  83 FF FF                  CMP EDI,-0x1
00457635  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457638  0F 85 1D 16 00 00         JNZ 0x00458c5b
0045763E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457644  68 0D 0E 00 00            PUSH 0xe0d
00457649  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045764E  51                        PUSH ECX
0045764F  E9 FD 15 00 00            JMP 0x00458c51
switchD_004575e1::caseD_2:
00457654  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045765A  56                        PUSH ESI
0045765B  8B CB                     MOV ECX,EBX
0045765D  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00457667  E8 E7 BE FA FF            CALL 0x00403553
0045766C  8B F8                     MOV EDI,EAX
0045766E  83 FF FF                  CMP EDI,-0x1
00457671  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457674  0F 85 E1 15 00 00         JNZ 0x00458c5b
0045767A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457680  68 12 0E 00 00            PUSH 0xe12
00457685  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045768A  52                        PUSH EDX
0045768B  E9 C1 15 00 00            JMP 0x00458c51
switchD_004575e1::caseD_6:
00457690  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457696  56                        PUSH ESI
00457697  8B CB                     MOV ECX,EBX
00457699  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
004576A3  E8 4B B0 FA FF            CALL 0x004026f3
004576A8  8B F8                     MOV EDI,EAX
004576AA  83 FF FF                  CMP EDI,-0x1
004576AD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004576B0  0F 85 A5 15 00 00         JNZ 0x00458c5b
004576B6  68 17 0E 00 00            PUSH 0xe17
004576BB  E9 86 15 00 00            JMP 0x00458c46
switchD_004575e1::caseD_c:
004576C0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004576C6  56                        PUSH ESI
004576C7  8B CB                     MOV ECX,EBX
004576C9  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
004576D3  E8 04 BD FA FF            CALL 0x004033dc
004576D8  8B F8                     MOV EDI,EAX
004576DA  83 FF FF                  CMP EDI,-0x1
004576DD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004576E0  0F 85 75 15 00 00         JNZ 0x00458c5b
004576E6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004576EC  68 1C 0E 00 00            PUSH 0xe1c
004576F1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004576F6  51                        PUSH ECX
004576F7  E9 55 15 00 00            JMP 0x00458c51
switchD_004575e1::caseD_11:
004576FC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457702  56                        PUSH ESI
00457703  8B CB                     MOV ECX,EBX
00457705  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
0045770F  E8 FF 99 FA FF            CALL 0x00401113
00457714  8B F8                     MOV EDI,EAX
00457716  83 FF FF                  CMP EDI,-0x1
00457719  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045771C  0F 85 39 15 00 00         JNZ 0x00458c5b
00457722  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457728  68 21 0E 00 00            PUSH 0xe21
0045772D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457732  52                        PUSH EDX
00457733  E9 19 15 00 00            JMP 0x00458c51
switchD_004575e1::caseD_13:
00457738  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045773E  56                        PUSH ESI
0045773F  8B CB                     MOV ECX,EBX
00457741  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
0045774B  E8 C3 DA FA FF            CALL 0x00405213
00457750  8B F8                     MOV EDI,EAX
00457752  83 FF FF                  CMP EDI,-0x1
00457755  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457758  0F 85 FD 14 00 00         JNZ 0x00458c5b
0045775E  68 26 0E 00 00            PUSH 0xe26
00457763  E9 DE 14 00 00            JMP 0x00458c46
switchD_004575e1::caseD_d:
00457768  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045776E  56                        PUSH ESI
0045776F  8B CB                     MOV ECX,EBX
00457771  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
0045777B  E8 CA BC FA FF            CALL 0x0040344a
00457780  8B F8                     MOV EDI,EAX
00457782  83 FF FF                  CMP EDI,-0x1
00457785  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457788  0F 85 CD 14 00 00         JNZ 0x00458c5b
0045778E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457794  68 2B 0E 00 00            PUSH 0xe2b
00457799  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045779E  51                        PUSH ECX
0045779F  E9 AD 14 00 00            JMP 0x00458c51
switchD_004575e1::caseD_4:
004577A4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004577AA  56                        PUSH ESI
004577AB  8B CB                     MOV ECX,EBX
004577AD  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
004577B7  E8 00 E1 FA FF            CALL 0x004058bc
004577BC  8B F8                     MOV EDI,EAX
004577BE  83 FF FF                  CMP EDI,-0x1
004577C1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004577C4  0F 85 91 14 00 00         JNZ 0x00458c5b
004577CA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004577D0  68 30 0E 00 00            PUSH 0xe30
004577D5  68 3C 9D 7A 00            PUSH 0x7a9d3c
004577DA  52                        PUSH EDX
004577DB  E9 71 14 00 00            JMP 0x00458c51
switchD_004575e1::caseD_5:
004577E0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004577E6  56                        PUSH ESI
004577E7  8B CB                     MOV ECX,EBX
004577E9  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
004577F3  E8 0F CD FA FF            CALL 0x00404507
004577F8  8B F8                     MOV EDI,EAX
004577FA  83 FF FF                  CMP EDI,-0x1
004577FD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457800  0F 85 55 14 00 00         JNZ 0x00458c5b
00457806  68 35 0E 00 00            PUSH 0xe35
0045780B  E9 36 14 00 00            JMP 0x00458c46
switchD_004575e1::caseD_f:
00457810  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457816  56                        PUSH ESI
00457817  8B CB                     MOV ECX,EBX
00457819  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00457823  E8 5D C7 FA FF            CALL 0x00403f85
00457828  8B F8                     MOV EDI,EAX
0045782A  83 FF FF                  CMP EDI,-0x1
0045782D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457830  0F 85 25 14 00 00         JNZ 0x00458c5b
00457836  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045783C  68 3A 0E 00 00            PUSH 0xe3a
00457841  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457846  51                        PUSH ECX
00457847  E9 05 14 00 00            JMP 0x00458c51
switchD_004575e1::caseD_14:
0045784C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457852  56                        PUSH ESI
00457853  8B CB                     MOV ECX,EBX
00457855  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
0045785F  E8 F4 AD FA FF            CALL 0x00402658
00457864  8B F8                     MOV EDI,EAX
00457866  83 FF FF                  CMP EDI,-0x1
00457869  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045786C  0F 85 E9 13 00 00         JNZ 0x00458c5b
00457872  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457878  68 3F 0E 00 00            PUSH 0xe3f
0045787D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457882  52                        PUSH EDX
00457883  E9 C9 13 00 00            JMP 0x00458c51
switchD_004575e1::caseD_10:
00457888  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045788E  56                        PUSH ESI
0045788F  8B CB                     MOV ECX,EBX
00457891  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
0045789B  E8 FA C0 FA FF            CALL 0x0040399a
004578A0  8B F8                     MOV EDI,EAX
004578A2  83 FF FF                  CMP EDI,-0x1
004578A5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004578A8  0F 85 AD 13 00 00         JNZ 0x00458c5b
004578AE  68 44 0E 00 00            PUSH 0xe44
004578B3  E9 8E 13 00 00            JMP 0x00458c46
switchD_004575e1::caseD_7:
004578B8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004578BE  56                        PUSH ESI
004578BF  8B CB                     MOV ECX,EBX
004578C1  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
004578CB  E8 CC BE FA FF            CALL 0x0040379c
004578D0  8B F8                     MOV EDI,EAX
004578D2  83 FF FF                  CMP EDI,-0x1
004578D5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004578D8  0F 85 7D 13 00 00         JNZ 0x00458c5b
004578DE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004578E4  68 49 0E 00 00            PUSH 0xe49
004578E9  68 3C 9D 7A 00            PUSH 0x7a9d3c
004578EE  51                        PUSH ECX
004578EF  E9 5D 13 00 00            JMP 0x00458c51
switchD_004575e1::caseD_a:
004578F4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004578FA  56                        PUSH ESI
004578FB  8B CB                     MOV ECX,EBX
004578FD  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00457907  E8 92 DF FA FF            CALL 0x0040589e
0045790C  8B F8                     MOV EDI,EAX
0045790E  83 FF FF                  CMP EDI,-0x1
00457911  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457914  0F 85 41 13 00 00         JNZ 0x00458c5b
0045791A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457920  68 4E 0E 00 00            PUSH 0xe4e
00457925  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045792A  52                        PUSH EDX
0045792B  E9 21 13 00 00            JMP 0x00458c51
switchD_004575e1::caseD_9:
00457930  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457936  56                        PUSH ESI
00457937  8B CB                     MOV ECX,EBX
00457939  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00457943  E8 10 B2 FA FF            CALL 0x00402b58
00457948  8B F8                     MOV EDI,EAX
0045794A  83 FF FF                  CMP EDI,-0x1
0045794D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457950  0F 85 05 13 00 00         JNZ 0x00458c5b
00457956  68 53 0E 00 00            PUSH 0xe53
0045795B  E9 E6 12 00 00            JMP 0x00458c46
switchD_004575e1::caseD_16:
00457960  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457966  56                        PUSH ESI
00457967  8B CB                     MOV ECX,EBX
00457969  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00457973  E8 0F CE FA FF            CALL 0x00404787
00457978  8B F8                     MOV EDI,EAX
0045797A  83 FF FF                  CMP EDI,-0x1
0045797D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457980  0F 85 D5 12 00 00         JNZ 0x00458c5b
00457986  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045798C  68 58 0E 00 00            PUSH 0xe58
00457991  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457996  51                        PUSH ECX
00457997  E9 B5 12 00 00            JMP 0x00458c51
switchD_004575e1::caseD_15:
0045799C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004579A2  56                        PUSH ESI
004579A3  8B CB                     MOV ECX,EBX
004579A5  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
004579AF  E8 79 E1 FA FF            CALL 0x00405b2d
004579B4  8B F8                     MOV EDI,EAX
004579B6  83 FF FF                  CMP EDI,-0x1
004579B9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004579BC  0F 85 99 12 00 00         JNZ 0x00458c5b
004579C2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004579C8  68 5D 0E 00 00            PUSH 0xe5d
004579CD  68 3C 9D 7A 00            PUSH 0x7a9d3c
004579D2  52                        PUSH EDX
004579D3  E9 79 12 00 00            JMP 0x00458c51
switchD_004575e1::caseD_17:
004579D8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004579DE  56                        PUSH ESI
004579DF  8B CB                     MOV ECX,EBX
004579E1  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
004579EB  E8 48 9F FA FF            CALL 0x00401938
004579F0  8B F8                     MOV EDI,EAX
004579F2  83 FF FF                  CMP EDI,-0x1
004579F5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004579F8  0F 85 5D 12 00 00         JNZ 0x00458c5b
004579FE  68 62 0E 00 00            PUSH 0xe62
00457A03  E9 3E 12 00 00            JMP 0x00458c46
switchD_004575e1::caseD_b:
00457A08  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457A0E  56                        PUSH ESI
00457A0F  8B CB                     MOV ECX,EBX
00457A11  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00457A1B  E8 26 DC FA FF            CALL 0x00405646
00457A20  8B F8                     MOV EDI,EAX
00457A22  83 FF FF                  CMP EDI,-0x1
00457A25  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457A28  0F 85 2D 12 00 00         JNZ 0x00458c5b
00457A2E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457A34  68 67 0E 00 00            PUSH 0xe67
00457A39  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457A3E  51                        PUSH ECX
00457A3F  E9 0D 12 00 00            JMP 0x00458c51
switchD_004575e1::caseD_12:
00457A44  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457A4A  56                        PUSH ESI
00457A4B  8B CB                     MOV ECX,EBX
00457A4D  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00457A57  E8 88 BB FA FF            CALL 0x004035e4
00457A5C  8B F8                     MOV EDI,EAX
00457A5E  83 FF FF                  CMP EDI,-0x1
00457A61  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457A64  0F 85 F1 11 00 00         JNZ 0x00458c5b
00457A6A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457A70  68 6C 0E 00 00            PUSH 0xe6c
00457A75  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457A7A  52                        PUSH EDX
00457A7B  E9 D1 11 00 00            JMP 0x00458c51
switchD_004575e1::caseD_8:
00457A80  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457A86  56                        PUSH ESI
00457A87  8B CB                     MOV ECX,EBX
00457A89  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00457A93  E8 F5 A8 FA FF            CALL 0x0040238d
00457A98  8B F8                     MOV EDI,EAX
00457A9A  83 FF FF                  CMP EDI,-0x1
00457A9D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457AA0  0F 85 B5 11 00 00         JNZ 0x00458c5b
00457AA6  68 71 0E 00 00            PUSH 0xe71
00457AAB  E9 96 11 00 00            JMP 0x00458c46
switchD_004575e1::caseD_e:
00457AB0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457AB6  56                        PUSH ESI
00457AB7  8B CB                     MOV ECX,EBX
00457AB9  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00457AC3  E8 71 D4 FA FF            CALL 0x00404f39
00457AC8  8B F8                     MOV EDI,EAX
00457ACA  83 FF FF                  CMP EDI,-0x1
00457ACD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457AD0  0F 85 85 11 00 00         JNZ 0x00458c5b
00457AD6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457ADC  68 76 0E 00 00            PUSH 0xe76
00457AE1  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457AE6  51                        PUSH ECX
00457AE7  E9 65 11 00 00            JMP 0x00458c51
LAB_00457aec:
00457AEC  39 8B 10 03 00 00         CMP dword ptr [EBX + 0x310],ECX
00457AF2  0F 85 9D 05 00 00         JNZ 0x00458095
00457AF8  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00457AFE  3B C6                     CMP EAX,ESI
00457B00  75 72                     JNZ 0x00457b74
00457B02  56                        PUSH ESI
00457B03  8B CB                     MOV ECX,EBX
00457B05  C7 83 5D 04 00 00 12 00 00 00  MOV dword ptr [EBX + 0x45d],0x12
00457B0F  E8 0B C1 FA FF            CALL 0x00403c1f
00457B14  8B F8                     MOV EDI,EAX
00457B16  83 FF FF                  CMP EDI,-0x1
00457B19  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457B1C  75 1B                     JNZ 0x00457b39
00457B1E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457B24  68 82 0E 00 00            PUSH 0xe82
00457B29  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457B2E  52                        PUSH EDX
00457B2F  68 FF FF 00 00            PUSH 0xffff
00457B34  E8 07 E3 24 00            CALL 0x006a5e40
LAB_00457b39:
00457B39  3B FE                     CMP EDI,ESI
00457B3B  0F 85 AC 33 00 00         JNZ 0x0045aeed
00457B41  56                        PUSH ESI
00457B42  8B CB                     MOV ECX,EBX
00457B44  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00457B4E  E8 D8 BE FA FF            CALL 0x00403a2b
00457B53  83 F8 FF                  CMP EAX,-0x1
00457B56  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00457B59  0F 85 8E 33 00 00         JNZ 0x0045aeed
00457B5F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00457B64  68 86 0E 00 00            PUSH 0xe86
00457B69  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457B6E  50                        PUSH EAX
00457B6F  E9 6F 33 00 00            JMP 0x0045aee3
LAB_00457b74:
00457B74  48                        DEC EAX
00457B75  83 F8 16                  CMP EAX,0x16
00457B78  0F 87 6F 33 00 00         JA 0x0045aeed
switchD_00457b7e::switchD:
00457B7E  FF 24 85 DC B8 45 00      JMP dword ptr [EAX*0x4 + 0x45b8dc]
switchD_00457b7e::caseD_1:
00457B85  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457B8B  56                        PUSH ESI
00457B8C  8B CB                     MOV ECX,EBX
00457B8E  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00457B98  E8 53 C2 FA FF            CALL 0x00403df0
00457B9D  8B F8                     MOV EDI,EAX
00457B9F  83 FF FF                  CMP EDI,-0x1
00457BA2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457BA5  0F 85 B0 10 00 00         JNZ 0x00458c5b
00457BAB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457BB1  68 8E 0E 00 00            PUSH 0xe8e
00457BB6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457BBB  51                        PUSH ECX
00457BBC  E9 90 10 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_3:
00457BC1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457BC7  56                        PUSH ESI
00457BC8  8B CB                     MOV ECX,EBX
00457BCA  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00457BD4  E8 61 CD FA FF            CALL 0x0040493a
00457BD9  8B F8                     MOV EDI,EAX
00457BDB  83 FF FF                  CMP EDI,-0x1
00457BDE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457BE1  0F 85 74 10 00 00         JNZ 0x00458c5b
00457BE7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457BED  68 94 0E 00 00            PUSH 0xe94
00457BF2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457BF7  52                        PUSH EDX
00457BF8  E9 54 10 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_2:
00457BFD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457C03  56                        PUSH ESI
00457C04  8B CB                     MOV ECX,EBX
00457C06  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00457C10  E8 3E B9 FA FF            CALL 0x00403553
00457C15  8B F8                     MOV EDI,EAX
00457C17  83 FF FF                  CMP EDI,-0x1
00457C1A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457C1D  0F 85 38 10 00 00         JNZ 0x00458c5b
00457C23  68 99 0E 00 00            PUSH 0xe99
00457C28  E9 19 10 00 00            JMP 0x00458c46
switchD_00457b7e::caseD_6:
00457C2D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457C33  56                        PUSH ESI
00457C34  8B CB                     MOV ECX,EBX
00457C36  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00457C40  E8 AE AA FA FF            CALL 0x004026f3
00457C45  8B F8                     MOV EDI,EAX
00457C47  83 FF FF                  CMP EDI,-0x1
00457C4A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457C4D  0F 85 08 10 00 00         JNZ 0x00458c5b
00457C53  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457C59  68 9E 0E 00 00            PUSH 0xe9e
00457C5E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457C63  51                        PUSH ECX
00457C64  E9 E8 0F 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_c:
00457C69  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457C6F  56                        PUSH ESI
00457C70  8B CB                     MOV ECX,EBX
00457C72  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00457C7C  E8 5B B7 FA FF            CALL 0x004033dc
00457C81  8B F8                     MOV EDI,EAX
00457C83  83 FF FF                  CMP EDI,-0x1
00457C86  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457C89  0F 85 CC 0F 00 00         JNZ 0x00458c5b
00457C8F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457C95  68 A3 0E 00 00            PUSH 0xea3
00457C9A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457C9F  52                        PUSH EDX
00457CA0  E9 AC 0F 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_11:
00457CA5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457CAB  56                        PUSH ESI
00457CAC  8B CB                     MOV ECX,EBX
00457CAE  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00457CB8  E8 56 94 FA FF            CALL 0x00401113
00457CBD  8B F8                     MOV EDI,EAX
00457CBF  83 FF FF                  CMP EDI,-0x1
00457CC2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457CC5  0F 85 90 0F 00 00         JNZ 0x00458c5b
00457CCB  68 A8 0E 00 00            PUSH 0xea8
00457CD0  E9 71 0F 00 00            JMP 0x00458c46
switchD_00457b7e::caseD_13:
00457CD5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457CDB  56                        PUSH ESI
00457CDC  8B CB                     MOV ECX,EBX
00457CDE  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00457CE8  E8 26 D5 FA FF            CALL 0x00405213
00457CED  8B F8                     MOV EDI,EAX
00457CEF  83 FF FF                  CMP EDI,-0x1
00457CF2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457CF5  0F 85 60 0F 00 00         JNZ 0x00458c5b
00457CFB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457D01  68 AD 0E 00 00            PUSH 0xead
00457D06  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457D0B  51                        PUSH ECX
00457D0C  E9 40 0F 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_d:
00457D11  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457D17  56                        PUSH ESI
00457D18  8B CB                     MOV ECX,EBX
00457D1A  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00457D24  E8 21 B7 FA FF            CALL 0x0040344a
00457D29  8B F8                     MOV EDI,EAX
00457D2B  83 FF FF                  CMP EDI,-0x1
00457D2E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457D31  0F 85 24 0F 00 00         JNZ 0x00458c5b
00457D37  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457D3D  68 B2 0E 00 00            PUSH 0xeb2
00457D42  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457D47  52                        PUSH EDX
00457D48  E9 04 0F 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_4:
00457D4D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457D53  56                        PUSH ESI
00457D54  8B CB                     MOV ECX,EBX
00457D56  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00457D60  E8 57 DB FA FF            CALL 0x004058bc
00457D65  8B F8                     MOV EDI,EAX
00457D67  83 FF FF                  CMP EDI,-0x1
00457D6A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457D6D  0F 85 E8 0E 00 00         JNZ 0x00458c5b
00457D73  68 B7 0E 00 00            PUSH 0xeb7
00457D78  E9 C9 0E 00 00            JMP 0x00458c46
switchD_00457b7e::caseD_5:
00457D7D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457D83  56                        PUSH ESI
00457D84  8B CB                     MOV ECX,EBX
00457D86  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00457D90  E8 72 C7 FA FF            CALL 0x00404507
00457D95  8B F8                     MOV EDI,EAX
00457D97  83 FF FF                  CMP EDI,-0x1
00457D9A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457D9D  0F 85 B8 0E 00 00         JNZ 0x00458c5b
00457DA3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457DA9  68 BC 0E 00 00            PUSH 0xebc
00457DAE  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457DB3  51                        PUSH ECX
00457DB4  E9 98 0E 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_f:
00457DB9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457DBF  56                        PUSH ESI
00457DC0  8B CB                     MOV ECX,EBX
00457DC2  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00457DCC  E8 B4 C1 FA FF            CALL 0x00403f85
00457DD1  8B F8                     MOV EDI,EAX
00457DD3  83 FF FF                  CMP EDI,-0x1
00457DD6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457DD9  0F 85 7C 0E 00 00         JNZ 0x00458c5b
00457DDF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457DE5  68 C1 0E 00 00            PUSH 0xec1
00457DEA  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457DEF  52                        PUSH EDX
00457DF0  E9 5C 0E 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_14:
00457DF5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457DFB  56                        PUSH ESI
00457DFC  8B CB                     MOV ECX,EBX
00457DFE  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00457E08  E8 4B A8 FA FF            CALL 0x00402658
00457E0D  8B F8                     MOV EDI,EAX
00457E0F  83 FF FF                  CMP EDI,-0x1
00457E12  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457E15  0F 85 40 0E 00 00         JNZ 0x00458c5b
00457E1B  68 C6 0E 00 00            PUSH 0xec6
00457E20  E9 21 0E 00 00            JMP 0x00458c46
switchD_00457b7e::caseD_10:
00457E25  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457E2B  56                        PUSH ESI
00457E2C  8B CB                     MOV ECX,EBX
00457E2E  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00457E38  E8 5D BB FA FF            CALL 0x0040399a
00457E3D  8B F8                     MOV EDI,EAX
00457E3F  83 FF FF                  CMP EDI,-0x1
00457E42  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457E45  0F 85 10 0E 00 00         JNZ 0x00458c5b
00457E4B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457E51  68 CB 0E 00 00            PUSH 0xecb
00457E56  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457E5B  51                        PUSH ECX
00457E5C  E9 F0 0D 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_7:
00457E61  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457E67  56                        PUSH ESI
00457E68  8B CB                     MOV ECX,EBX
00457E6A  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00457E74  E8 23 B9 FA FF            CALL 0x0040379c
00457E79  8B F8                     MOV EDI,EAX
00457E7B  83 FF FF                  CMP EDI,-0x1
00457E7E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457E81  0F 85 D4 0D 00 00         JNZ 0x00458c5b
00457E87  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457E8D  68 D0 0E 00 00            PUSH 0xed0
00457E92  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457E97  52                        PUSH EDX
00457E98  E9 B4 0D 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_a:
00457E9D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457EA3  56                        PUSH ESI
00457EA4  8B CB                     MOV ECX,EBX
00457EA6  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00457EB0  E8 E9 D9 FA FF            CALL 0x0040589e
00457EB5  8B F8                     MOV EDI,EAX
00457EB7  83 FF FF                  CMP EDI,-0x1
00457EBA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457EBD  0F 85 98 0D 00 00         JNZ 0x00458c5b
00457EC3  68 D5 0E 00 00            PUSH 0xed5
00457EC8  E9 79 0D 00 00            JMP 0x00458c46
switchD_00457b7e::caseD_9:
00457ECD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457ED3  56                        PUSH ESI
00457ED4  8B CB                     MOV ECX,EBX
00457ED6  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00457EE0  E8 73 AC FA FF            CALL 0x00402b58
00457EE5  8B F8                     MOV EDI,EAX
00457EE7  83 FF FF                  CMP EDI,-0x1
00457EEA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457EED  0F 85 68 0D 00 00         JNZ 0x00458c5b
00457EF3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457EF9  68 DA 0E 00 00            PUSH 0xeda
00457EFE  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457F03  51                        PUSH ECX
00457F04  E9 48 0D 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_16:
00457F09  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457F0F  56                        PUSH ESI
00457F10  8B CB                     MOV ECX,EBX
00457F12  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00457F1C  E8 66 C8 FA FF            CALL 0x00404787
00457F21  8B F8                     MOV EDI,EAX
00457F23  83 FF FF                  CMP EDI,-0x1
00457F26  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457F29  0F 85 2C 0D 00 00         JNZ 0x00458c5b
00457F2F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457F35  68 DF 0E 00 00            PUSH 0xedf
00457F3A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457F3F  52                        PUSH EDX
00457F40  E9 0C 0D 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_15:
00457F45  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457F4B  56                        PUSH ESI
00457F4C  8B CB                     MOV ECX,EBX
00457F4E  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00457F58  E8 D0 DB FA FF            CALL 0x00405b2d
00457F5D  8B F8                     MOV EDI,EAX
00457F5F  83 FF FF                  CMP EDI,-0x1
00457F62  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457F65  0F 85 F0 0C 00 00         JNZ 0x00458c5b
00457F6B  68 E4 0E 00 00            PUSH 0xee4
00457F70  E9 D1 0C 00 00            JMP 0x00458c46
switchD_00457b7e::caseD_17:
00457F75  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457F7B  56                        PUSH ESI
00457F7C  8B CB                     MOV ECX,EBX
00457F7E  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00457F88  E8 AB 99 FA FF            CALL 0x00401938
00457F8D  8B F8                     MOV EDI,EAX
00457F8F  83 FF FF                  CMP EDI,-0x1
00457F92  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457F95  0F 85 C0 0C 00 00         JNZ 0x00458c5b
00457F9B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00457FA1  68 E9 0E 00 00            PUSH 0xee9
00457FA6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457FAB  51                        PUSH ECX
00457FAC  E9 A0 0C 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_b:
00457FB1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457FB7  56                        PUSH ESI
00457FB8  8B CB                     MOV ECX,EBX
00457FBA  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00457FC4  E8 7D D6 FA FF            CALL 0x00405646
00457FC9  8B F8                     MOV EDI,EAX
00457FCB  83 FF FF                  CMP EDI,-0x1
00457FCE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00457FD1  0F 85 84 0C 00 00         JNZ 0x00458c5b
00457FD7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00457FDD  68 EE 0E 00 00            PUSH 0xeee
00457FE2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00457FE7  52                        PUSH EDX
00457FE8  E9 64 0C 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_12:
00457FED  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00457FF3  56                        PUSH ESI
00457FF4  8B CB                     MOV ECX,EBX
00457FF6  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00458000  E8 DF B5 FA FF            CALL 0x004035e4
00458005  8B F8                     MOV EDI,EAX
00458007  83 FF FF                  CMP EDI,-0x1
0045800A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045800D  0F 85 48 0C 00 00         JNZ 0x00458c5b
00458013  68 F3 0E 00 00            PUSH 0xef3
00458018  E9 29 0C 00 00            JMP 0x00458c46
switchD_00457b7e::caseD_8:
0045801D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458023  56                        PUSH ESI
00458024  8B CB                     MOV ECX,EBX
00458026  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00458030  E8 58 A3 FA FF            CALL 0x0040238d
00458035  8B F8                     MOV EDI,EAX
00458037  83 FF FF                  CMP EDI,-0x1
0045803A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045803D  0F 85 18 0C 00 00         JNZ 0x00458c5b
00458043  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458049  68 F8 0E 00 00            PUSH 0xef8
0045804E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458053  51                        PUSH ECX
00458054  E9 F8 0B 00 00            JMP 0x00458c51
switchD_00457b7e::caseD_e:
00458059  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045805F  56                        PUSH ESI
00458060  8B CB                     MOV ECX,EBX
00458062  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
0045806C  E8 C8 CE FA FF            CALL 0x00404f39
00458071  8B F8                     MOV EDI,EAX
00458073  83 FF FF                  CMP EDI,-0x1
00458076  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458079  0F 85 DC 0B 00 00         JNZ 0x00458c5b
0045807F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458085  68 FD 0E 00 00            PUSH 0xefd
0045808A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045808F  52                        PUSH EDX
00458090  E9 BC 0B 00 00            JMP 0x00458c51
LAB_00458095:
00458095  39 8B E8 02 00 00         CMP dword ptr [EBX + 0x2e8],ECX
0045809B  0F 85 85 05 00 00         JNZ 0x00458626
004580A1  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
004580A7  3B C6                     CMP EAX,ESI
004580A9  75 66                     JNZ 0x00458111
004580AB  56                        PUSH ESI
004580AC  8B CB                     MOV ECX,EBX
004580AE  C7 83 5D 04 00 00 08 00 00 00  MOV dword ptr [EBX + 0x45d],0x8
004580B8  E8 42 CC FA FF            CALL 0x00404cff
004580BD  8B F8                     MOV EDI,EAX
004580BF  83 FF FF                  CMP EDI,-0x1
004580C2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004580C5  75 1A                     JNZ 0x004580e1
004580C7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004580CC  68 09 0F 00 00            PUSH 0xf09
004580D1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004580D6  50                        PUSH EAX
004580D7  68 FF FF 00 00            PUSH 0xffff
004580DC  E8 5F DD 24 00            CALL 0x006a5e40
LAB_004580e1:
004580E1  3B FE                     CMP EDI,ESI
004580E3  0F 85 04 2E 00 00         JNZ 0x0045aeed
004580E9  56                        PUSH ESI
004580EA  8B CB                     MOV ECX,EBX
004580EC  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
004580F6  E8 30 B9 FA FF            CALL 0x00403a2b
004580FB  83 F8 FF                  CMP EAX,-0x1
004580FE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00458101  0F 85 E6 2D 00 00         JNZ 0x0045aeed
00458107  68 0D 0F 00 00            PUSH 0xf0d
0045810C  E9 C6 2D 00 00            JMP 0x0045aed7
LAB_00458111:
00458111  48                        DEC EAX
00458112  83 F8 16                  CMP EAX,0x16
00458115  0F 87 D2 2D 00 00         JA 0x0045aeed
switchD_0045811b::switchD:
0045811B  FF 24 85 38 B9 45 00      JMP dword ptr [EAX*0x4 + 0x45b938]
switchD_0045811b::caseD_1:
00458122  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458128  56                        PUSH ESI
00458129  8B CB                     MOV ECX,EBX
0045812B  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00458135  E8 B6 BC FA FF            CALL 0x00403df0
0045813A  8B F8                     MOV EDI,EAX
0045813C  83 FF FF                  CMP EDI,-0x1
0045813F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458142  0F 85 13 0B 00 00         JNZ 0x00458c5b
00458148  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045814E  68 15 0F 00 00            PUSH 0xf15
00458153  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458158  52                        PUSH EDX
00458159  E9 F3 0A 00 00            JMP 0x00458c51
switchD_0045811b::caseD_3:
0045815E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458164  56                        PUSH ESI
00458165  8B CB                     MOV ECX,EBX
00458167  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00458171  E8 C4 C7 FA FF            CALL 0x0040493a
00458176  8B F8                     MOV EDI,EAX
00458178  83 FF FF                  CMP EDI,-0x1
0045817B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045817E  0F 85 D7 0A 00 00         JNZ 0x00458c5b
00458184  68 1B 0F 00 00            PUSH 0xf1b
00458189  E9 B8 0A 00 00            JMP 0x00458c46
switchD_0045811b::caseD_2:
0045818E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458194  56                        PUSH ESI
00458195  8B CB                     MOV ECX,EBX
00458197  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
004581A1  E8 AD B3 FA FF            CALL 0x00403553
004581A6  8B F8                     MOV EDI,EAX
004581A8  83 FF FF                  CMP EDI,-0x1
004581AB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004581AE  0F 85 A7 0A 00 00         JNZ 0x00458c5b
004581B4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004581BA  68 20 0F 00 00            PUSH 0xf20
004581BF  68 3C 9D 7A 00            PUSH 0x7a9d3c
004581C4  51                        PUSH ECX
004581C5  E9 87 0A 00 00            JMP 0x00458c51
switchD_0045811b::caseD_6:
004581CA  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004581D0  56                        PUSH ESI
004581D1  8B CB                     MOV ECX,EBX
004581D3  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
004581DD  E8 11 A5 FA FF            CALL 0x004026f3
004581E2  8B F8                     MOV EDI,EAX
004581E4  83 FF FF                  CMP EDI,-0x1
004581E7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004581EA  0F 85 6B 0A 00 00         JNZ 0x00458c5b
004581F0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004581F6  68 25 0F 00 00            PUSH 0xf25
004581FB  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458200  52                        PUSH EDX
00458201  E9 4B 0A 00 00            JMP 0x00458c51
switchD_0045811b::caseD_c:
00458206  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045820C  56                        PUSH ESI
0045820D  8B CB                     MOV ECX,EBX
0045820F  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00458219  E8 BE B1 FA FF            CALL 0x004033dc
0045821E  8B F8                     MOV EDI,EAX
00458220  83 FF FF                  CMP EDI,-0x1
00458223  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458226  0F 85 2F 0A 00 00         JNZ 0x00458c5b
0045822C  68 2A 0F 00 00            PUSH 0xf2a
00458231  E9 10 0A 00 00            JMP 0x00458c46
switchD_0045811b::caseD_11:
00458236  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045823C  56                        PUSH ESI
0045823D  8B CB                     MOV ECX,EBX
0045823F  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00458249  E8 C5 8E FA FF            CALL 0x00401113
0045824E  8B F8                     MOV EDI,EAX
00458250  83 FF FF                  CMP EDI,-0x1
00458253  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458256  0F 85 FF 09 00 00         JNZ 0x00458c5b
0045825C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458262  68 2F 0F 00 00            PUSH 0xf2f
00458267  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045826C  51                        PUSH ECX
0045826D  E9 DF 09 00 00            JMP 0x00458c51
switchD_0045811b::caseD_13:
00458272  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458278  56                        PUSH ESI
00458279  8B CB                     MOV ECX,EBX
0045827B  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00458285  E8 89 CF FA FF            CALL 0x00405213
0045828A  8B F8                     MOV EDI,EAX
0045828C  83 FF FF                  CMP EDI,-0x1
0045828F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458292  0F 85 C3 09 00 00         JNZ 0x00458c5b
00458298  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045829E  68 34 0F 00 00            PUSH 0xf34
004582A3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004582A8  52                        PUSH EDX
004582A9  E9 A3 09 00 00            JMP 0x00458c51
switchD_0045811b::caseD_d:
004582AE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004582B4  56                        PUSH ESI
004582B5  8B CB                     MOV ECX,EBX
004582B7  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
004582C1  E8 84 B1 FA FF            CALL 0x0040344a
004582C6  8B F8                     MOV EDI,EAX
004582C8  83 FF FF                  CMP EDI,-0x1
004582CB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004582CE  0F 85 87 09 00 00         JNZ 0x00458c5b
004582D4  68 39 0F 00 00            PUSH 0xf39
004582D9  E9 68 09 00 00            JMP 0x00458c46
switchD_0045811b::caseD_4:
004582DE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004582E4  56                        PUSH ESI
004582E5  8B CB                     MOV ECX,EBX
004582E7  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
004582F1  E8 C6 D5 FA FF            CALL 0x004058bc
004582F6  8B F8                     MOV EDI,EAX
004582F8  83 FF FF                  CMP EDI,-0x1
004582FB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004582FE  0F 85 57 09 00 00         JNZ 0x00458c5b
00458304  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045830A  68 3E 0F 00 00            PUSH 0xf3e
0045830F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458314  51                        PUSH ECX
00458315  E9 37 09 00 00            JMP 0x00458c51
switchD_0045811b::caseD_5:
0045831A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458320  56                        PUSH ESI
00458321  8B CB                     MOV ECX,EBX
00458323  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
0045832D  E8 D5 C1 FA FF            CALL 0x00404507
00458332  8B F8                     MOV EDI,EAX
00458334  83 FF FF                  CMP EDI,-0x1
00458337  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045833A  0F 85 1B 09 00 00         JNZ 0x00458c5b
00458340  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458346  68 43 0F 00 00            PUSH 0xf43
0045834B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458350  52                        PUSH EDX
00458351  E9 FB 08 00 00            JMP 0x00458c51
switchD_0045811b::caseD_f:
00458356  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045835C  56                        PUSH ESI
0045835D  8B CB                     MOV ECX,EBX
0045835F  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00458369  E8 17 BC FA FF            CALL 0x00403f85
0045836E  8B F8                     MOV EDI,EAX
00458370  83 FF FF                  CMP EDI,-0x1
00458373  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458376  0F 85 DF 08 00 00         JNZ 0x00458c5b
0045837C  68 48 0F 00 00            PUSH 0xf48
00458381  E9 C0 08 00 00            JMP 0x00458c46
switchD_0045811b::caseD_14:
00458386  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045838C  56                        PUSH ESI
0045838D  8B CB                     MOV ECX,EBX
0045838F  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00458399  E8 BA A2 FA FF            CALL 0x00402658
0045839E  8B F8                     MOV EDI,EAX
004583A0  83 FF FF                  CMP EDI,-0x1
004583A3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004583A6  0F 85 AF 08 00 00         JNZ 0x00458c5b
004583AC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004583B2  68 4D 0F 00 00            PUSH 0xf4d
004583B7  68 3C 9D 7A 00            PUSH 0x7a9d3c
004583BC  51                        PUSH ECX
004583BD  E9 8F 08 00 00            JMP 0x00458c51
switchD_0045811b::caseD_10:
004583C2  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004583C8  56                        PUSH ESI
004583C9  8B CB                     MOV ECX,EBX
004583CB  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
004583D5  E8 C0 B5 FA FF            CALL 0x0040399a
004583DA  8B F8                     MOV EDI,EAX
004583DC  83 FF FF                  CMP EDI,-0x1
004583DF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004583E2  0F 85 73 08 00 00         JNZ 0x00458c5b
004583E8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004583EE  68 52 0F 00 00            PUSH 0xf52
004583F3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004583F8  52                        PUSH EDX
004583F9  E9 53 08 00 00            JMP 0x00458c51
switchD_0045811b::caseD_7:
004583FE  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458404  56                        PUSH ESI
00458405  8B CB                     MOV ECX,EBX
00458407  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00458411  E8 86 B3 FA FF            CALL 0x0040379c
00458416  8B F8                     MOV EDI,EAX
00458418  83 FF FF                  CMP EDI,-0x1
0045841B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045841E  0F 85 37 08 00 00         JNZ 0x00458c5b
00458424  68 57 0F 00 00            PUSH 0xf57
00458429  E9 18 08 00 00            JMP 0x00458c46
switchD_0045811b::caseD_a:
0045842E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458434  56                        PUSH ESI
00458435  8B CB                     MOV ECX,EBX
00458437  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00458441  E8 58 D4 FA FF            CALL 0x0040589e
00458446  8B F8                     MOV EDI,EAX
00458448  83 FF FF                  CMP EDI,-0x1
0045844B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045844E  0F 85 07 08 00 00         JNZ 0x00458c5b
00458454  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045845A  68 5C 0F 00 00            PUSH 0xf5c
0045845F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458464  51                        PUSH ECX
00458465  E9 E7 07 00 00            JMP 0x00458c51
switchD_0045811b::caseD_9:
0045846A  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458470  56                        PUSH ESI
00458471  8B CB                     MOV ECX,EBX
00458473  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
0045847D  E8 D6 A6 FA FF            CALL 0x00402b58
00458482  8B F8                     MOV EDI,EAX
00458484  83 FF FF                  CMP EDI,-0x1
00458487  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045848A  0F 85 CB 07 00 00         JNZ 0x00458c5b
00458490  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458496  68 61 0F 00 00            PUSH 0xf61
0045849B  68 3C 9D 7A 00            PUSH 0x7a9d3c
004584A0  52                        PUSH EDX
004584A1  E9 AB 07 00 00            JMP 0x00458c51
switchD_0045811b::caseD_16:
004584A6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004584AC  56                        PUSH ESI
004584AD  8B CB                     MOV ECX,EBX
004584AF  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
004584B9  E8 C9 C2 FA FF            CALL 0x00404787
004584BE  8B F8                     MOV EDI,EAX
004584C0  83 FF FF                  CMP EDI,-0x1
004584C3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004584C6  0F 85 8F 07 00 00         JNZ 0x00458c5b
004584CC  68 66 0F 00 00            PUSH 0xf66
004584D1  E9 70 07 00 00            JMP 0x00458c46
switchD_0045811b::caseD_15:
004584D6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004584DC  56                        PUSH ESI
004584DD  8B CB                     MOV ECX,EBX
004584DF  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
004584E9  E8 3F D6 FA FF            CALL 0x00405b2d
004584EE  8B F8                     MOV EDI,EAX
004584F0  83 FF FF                  CMP EDI,-0x1
004584F3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004584F6  0F 85 5F 07 00 00         JNZ 0x00458c5b
004584FC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458502  68 6B 0F 00 00            PUSH 0xf6b
00458507  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045850C  51                        PUSH ECX
0045850D  E9 3F 07 00 00            JMP 0x00458c51
switchD_0045811b::caseD_17:
00458512  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458518  56                        PUSH ESI
00458519  8B CB                     MOV ECX,EBX
0045851B  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00458525  E8 0E 94 FA FF            CALL 0x00401938
0045852A  8B F8                     MOV EDI,EAX
0045852C  83 FF FF                  CMP EDI,-0x1
0045852F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458532  0F 85 23 07 00 00         JNZ 0x00458c5b
00458538  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045853E  68 70 0F 00 00            PUSH 0xf70
00458543  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458548  52                        PUSH EDX
00458549  E9 03 07 00 00            JMP 0x00458c51
switchD_0045811b::caseD_b:
0045854E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458554  56                        PUSH ESI
00458555  8B CB                     MOV ECX,EBX
00458557  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00458561  E8 E0 D0 FA FF            CALL 0x00405646
00458566  8B F8                     MOV EDI,EAX
00458568  83 FF FF                  CMP EDI,-0x1
0045856B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045856E  0F 85 E7 06 00 00         JNZ 0x00458c5b
00458574  68 75 0F 00 00            PUSH 0xf75
00458579  E9 C8 06 00 00            JMP 0x00458c46
switchD_0045811b::caseD_12:
0045857E  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458584  56                        PUSH ESI
00458585  8B CB                     MOV ECX,EBX
00458587  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00458591  E8 4E B0 FA FF            CALL 0x004035e4
00458596  8B F8                     MOV EDI,EAX
00458598  83 FF FF                  CMP EDI,-0x1
0045859B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045859E  0F 85 B7 06 00 00         JNZ 0x00458c5b
004585A4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004585AA  68 7A 0F 00 00            PUSH 0xf7a
004585AF  68 3C 9D 7A 00            PUSH 0x7a9d3c
004585B4  51                        PUSH ECX
004585B5  E9 97 06 00 00            JMP 0x00458c51
switchD_0045811b::caseD_8:
004585BA  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004585C0  56                        PUSH ESI
004585C1  8B CB                     MOV ECX,EBX
004585C3  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
004585CD  E8 BB 9D FA FF            CALL 0x0040238d
004585D2  8B F8                     MOV EDI,EAX
004585D4  83 FF FF                  CMP EDI,-0x1
004585D7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004585DA  0F 85 7B 06 00 00         JNZ 0x00458c5b
004585E0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004585E6  68 7F 0F 00 00            PUSH 0xf7f
004585EB  68 3C 9D 7A 00            PUSH 0x7a9d3c
004585F0  52                        PUSH EDX
004585F1  E9 5B 06 00 00            JMP 0x00458c51
switchD_0045811b::caseD_e:
004585F6  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004585FC  56                        PUSH ESI
004585FD  8B CB                     MOV ECX,EBX
004585FF  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00458609  E8 2B C9 FA FF            CALL 0x00404f39
0045860E  8B F8                     MOV EDI,EAX
00458610  83 FF FF                  CMP EDI,-0x1
00458613  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458616  0F 85 3F 06 00 00         JNZ 0x00458c5b
0045861C  68 84 0F 00 00            PUSH 0xf84
00458621  E9 20 06 00 00            JMP 0x00458c46
LAB_00458626:
00458626  39 8B 00 03 00 00         CMP dword ptr [EBX + 0x300],ECX
0045862C  0F 85 92 05 00 00         JNZ 0x00458bc4
00458632  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00458638  3B C6                     CMP EAX,ESI
0045863A  75 73                     JNZ 0x004586af
0045863C  56                        PUSH ESI
0045863D  8B CB                     MOV ECX,EBX
0045863F  C7 83 5D 04 00 00 0E 00 00 00  MOV dword ptr [EBX + 0x45d],0xe
00458649  E8 59 BF FA FF            CALL 0x004045a7
0045864E  8B F8                     MOV EDI,EAX
00458650  83 FF FF                  CMP EDI,-0x1
00458653  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458656  75 1B                     JNZ 0x00458673
00458658  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045865E  68 90 0F 00 00            PUSH 0xf90
00458663  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458668  51                        PUSH ECX
00458669  68 FF FF 00 00            PUSH 0xffff
0045866E  E8 CD D7 24 00            CALL 0x006a5e40
LAB_00458673:
00458673  3B FE                     CMP EDI,ESI
00458675  0F 85 72 28 00 00         JNZ 0x0045aeed
0045867B  56                        PUSH ESI
0045867C  8B CB                     MOV ECX,EBX
0045867E  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00458688  E8 9E B3 FA FF            CALL 0x00403a2b
0045868D  83 F8 FF                  CMP EAX,-0x1
00458690  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00458693  0F 85 54 28 00 00         JNZ 0x0045aeed
00458699  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045869F  68 94 0F 00 00            PUSH 0xf94
004586A4  68 3C 9D 7A 00            PUSH 0x7a9d3c
004586A9  52                        PUSH EDX
004586AA  E9 34 28 00 00            JMP 0x0045aee3
LAB_004586af:
004586AF  48                        DEC EAX
004586B0  83 F8 16                  CMP EAX,0x16
004586B3  0F 87 34 28 00 00         JA 0x0045aeed
switchD_004586b9::switchD:
004586B9  FF 24 85 94 B9 45 00      JMP dword ptr [EAX*0x4 + 0x45b994]
switchD_004586b9::caseD_1:
004586C0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004586C6  56                        PUSH ESI
004586C7  8B CB                     MOV ECX,EBX
004586C9  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
004586D3  E8 18 B7 FA FF            CALL 0x00403df0
004586D8  8B F8                     MOV EDI,EAX
004586DA  83 FF FF                  CMP EDI,-0x1
004586DD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004586E0  0F 85 75 05 00 00         JNZ 0x00458c5b
004586E6  68 9C 0F 00 00            PUSH 0xf9c
004586EB  E9 56 05 00 00            JMP 0x00458c46
switchD_004586b9::caseD_3:
004586F0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004586F6  56                        PUSH ESI
004586F7  8B CB                     MOV ECX,EBX
004586F9  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00458703  E8 32 C2 FA FF            CALL 0x0040493a
00458708  8B F8                     MOV EDI,EAX
0045870A  83 FF FF                  CMP EDI,-0x1
0045870D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458710  0F 85 45 05 00 00         JNZ 0x00458c5b
00458716  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045871C  68 A2 0F 00 00            PUSH 0xfa2
00458721  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458726  51                        PUSH ECX
00458727  E9 25 05 00 00            JMP 0x00458c51
switchD_004586b9::caseD_2:
0045872C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458732  56                        PUSH ESI
00458733  8B CB                     MOV ECX,EBX
00458735  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
0045873F  E8 0F AE FA FF            CALL 0x00403553
00458744  8B F8                     MOV EDI,EAX
00458746  83 FF FF                  CMP EDI,-0x1
00458749  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045874C  0F 85 09 05 00 00         JNZ 0x00458c5b
00458752  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458758  68 A7 0F 00 00            PUSH 0xfa7
0045875D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458762  52                        PUSH EDX
00458763  E9 E9 04 00 00            JMP 0x00458c51
switchD_004586b9::caseD_6:
00458768  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045876E  56                        PUSH ESI
0045876F  8B CB                     MOV ECX,EBX
00458771  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
0045877B  E8 73 9F FA FF            CALL 0x004026f3
00458780  8B F8                     MOV EDI,EAX
00458782  83 FF FF                  CMP EDI,-0x1
00458785  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458788  0F 85 CD 04 00 00         JNZ 0x00458c5b
0045878E  68 AC 0F 00 00            PUSH 0xfac
00458793  E9 AE 04 00 00            JMP 0x00458c46
switchD_004586b9::caseD_c:
00458798  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045879E  56                        PUSH ESI
0045879F  8B CB                     MOV ECX,EBX
004587A1  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
004587AB  E8 2C AC FA FF            CALL 0x004033dc
004587B0  8B F8                     MOV EDI,EAX
004587B2  83 FF FF                  CMP EDI,-0x1
004587B5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004587B8  0F 85 9D 04 00 00         JNZ 0x00458c5b
004587BE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004587C4  68 B1 0F 00 00            PUSH 0xfb1
004587C9  68 3C 9D 7A 00            PUSH 0x7a9d3c
004587CE  51                        PUSH ECX
004587CF  E9 7D 04 00 00            JMP 0x00458c51
switchD_004586b9::caseD_11:
004587D4  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004587DA  56                        PUSH ESI
004587DB  8B CB                     MOV ECX,EBX
004587DD  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
004587E7  E8 27 89 FA FF            CALL 0x00401113
004587EC  8B F8                     MOV EDI,EAX
004587EE  83 FF FF                  CMP EDI,-0x1
004587F1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004587F4  0F 85 61 04 00 00         JNZ 0x00458c5b
004587FA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458800  68 B6 0F 00 00            PUSH 0xfb6
00458805  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045880A  52                        PUSH EDX
0045880B  E9 41 04 00 00            JMP 0x00458c51
switchD_004586b9::caseD_13:
00458810  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458816  56                        PUSH ESI
00458817  8B CB                     MOV ECX,EBX
00458819  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00458823  E8 EB C9 FA FF            CALL 0x00405213
00458828  8B F8                     MOV EDI,EAX
0045882A  83 FF FF                  CMP EDI,-0x1
0045882D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458830  0F 85 25 04 00 00         JNZ 0x00458c5b
00458836  68 BB 0F 00 00            PUSH 0xfbb
0045883B  E9 06 04 00 00            JMP 0x00458c46
switchD_004586b9::caseD_d:
00458840  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458846  56                        PUSH ESI
00458847  8B CB                     MOV ECX,EBX
00458849  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00458853  E8 F2 AB FA FF            CALL 0x0040344a
00458858  8B F8                     MOV EDI,EAX
0045885A  83 FF FF                  CMP EDI,-0x1
0045885D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458860  0F 85 F5 03 00 00         JNZ 0x00458c5b
00458866  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045886C  68 C0 0F 00 00            PUSH 0xfc0
00458871  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458876  51                        PUSH ECX
00458877  E9 D5 03 00 00            JMP 0x00458c51
switchD_004586b9::caseD_4:
0045887C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458882  56                        PUSH ESI
00458883  8B CB                     MOV ECX,EBX
00458885  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
0045888F  E8 28 D0 FA FF            CALL 0x004058bc
00458894  8B F8                     MOV EDI,EAX
00458896  83 FF FF                  CMP EDI,-0x1
00458899  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0045889C  0F 85 B9 03 00 00         JNZ 0x00458c5b
004588A2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004588A8  68 C5 0F 00 00            PUSH 0xfc5
004588AD  68 3C 9D 7A 00            PUSH 0x7a9d3c
004588B2  52                        PUSH EDX
004588B3  E9 99 03 00 00            JMP 0x00458c51
switchD_004586b9::caseD_5:
004588B8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004588BE  56                        PUSH ESI
004588BF  8B CB                     MOV ECX,EBX
004588C1  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
004588CB  E8 37 BC FA FF            CALL 0x00404507
004588D0  8B F8                     MOV EDI,EAX
004588D2  83 FF FF                  CMP EDI,-0x1
004588D5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004588D8  0F 85 7D 03 00 00         JNZ 0x00458c5b
004588DE  68 CA 0F 00 00            PUSH 0xfca
004588E3  E9 5E 03 00 00            JMP 0x00458c46
switchD_004586b9::caseD_f:
004588E8  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004588EE  56                        PUSH ESI
004588EF  8B CB                     MOV ECX,EBX
004588F1  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
004588FB  E8 85 B6 FA FF            CALL 0x00403f85
00458900  8B F8                     MOV EDI,EAX
00458902  83 FF FF                  CMP EDI,-0x1
00458905  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458908  0F 85 4D 03 00 00         JNZ 0x00458c5b
0045890E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458914  68 CF 0F 00 00            PUSH 0xfcf
00458919  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045891E  51                        PUSH ECX
0045891F  E9 2D 03 00 00            JMP 0x00458c51
switchD_004586b9::caseD_14:
00458924  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045892A  56                        PUSH ESI
0045892B  8B CB                     MOV ECX,EBX
0045892D  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00458937  E8 1C 9D FA FF            CALL 0x00402658
0045893C  8B F8                     MOV EDI,EAX
0045893E  83 FF FF                  CMP EDI,-0x1
00458941  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458944  0F 85 11 03 00 00         JNZ 0x00458c5b
0045894A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458950  68 D4 0F 00 00            PUSH 0xfd4
00458955  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045895A  52                        PUSH EDX
0045895B  E9 F1 02 00 00            JMP 0x00458c51
switchD_004586b9::caseD_10:
00458960  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458966  56                        PUSH ESI
00458967  8B CB                     MOV ECX,EBX
00458969  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00458973  E8 22 B0 FA FF            CALL 0x0040399a
00458978  8B F8                     MOV EDI,EAX
0045897A  83 FF FF                  CMP EDI,-0x1
0045897D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458980  0F 85 D5 02 00 00         JNZ 0x00458c5b
00458986  68 D9 0F 00 00            PUSH 0xfd9
0045898B  E9 B6 02 00 00            JMP 0x00458c46
switchD_004586b9::caseD_7:
00458990  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458996  56                        PUSH ESI
00458997  8B CB                     MOV ECX,EBX
00458999  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
004589A3  E8 F4 AD FA FF            CALL 0x0040379c
004589A8  8B F8                     MOV EDI,EAX
004589AA  83 FF FF                  CMP EDI,-0x1
004589AD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004589B0  0F 85 A5 02 00 00         JNZ 0x00458c5b
004589B6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004589BC  68 DE 0F 00 00            PUSH 0xfde
004589C1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004589C6  51                        PUSH ECX
004589C7  E9 85 02 00 00            JMP 0x00458c51
switchD_004586b9::caseD_a:
004589CC  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004589D2  56                        PUSH ESI
004589D3  8B CB                     MOV ECX,EBX
004589D5  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
004589DF  E8 BA CE FA FF            CALL 0x0040589e
004589E4  8B F8                     MOV EDI,EAX
004589E6  83 FF FF                  CMP EDI,-0x1
004589E9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004589EC  0F 85 69 02 00 00         JNZ 0x00458c5b
004589F2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004589F8  68 E3 0F 00 00            PUSH 0xfe3
004589FD  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458A02  52                        PUSH EDX
00458A03  E9 49 02 00 00            JMP 0x00458c51
switchD_004586b9::caseD_9:
00458A08  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458A0E  56                        PUSH ESI
00458A0F  8B CB                     MOV ECX,EBX
00458A11  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00458A1B  E8 38 A1 FA FF            CALL 0x00402b58
00458A20  8B F8                     MOV EDI,EAX
00458A22  83 FF FF                  CMP EDI,-0x1
00458A25  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458A28  0F 85 2D 02 00 00         JNZ 0x00458c5b
00458A2E  68 E8 0F 00 00            PUSH 0xfe8
00458A33  E9 0E 02 00 00            JMP 0x00458c46
switchD_004586b9::caseD_16:
00458A38  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458A3E  56                        PUSH ESI
00458A3F  8B CB                     MOV ECX,EBX
00458A41  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00458A4B  E8 37 BD FA FF            CALL 0x00404787
00458A50  8B F8                     MOV EDI,EAX
00458A52  83 FF FF                  CMP EDI,-0x1
00458A55  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458A58  0F 85 FD 01 00 00         JNZ 0x00458c5b
00458A5E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458A64  68 ED 0F 00 00            PUSH 0xfed
00458A69  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458A6E  51                        PUSH ECX
00458A6F  E9 DD 01 00 00            JMP 0x00458c51
switchD_004586b9::caseD_15:
00458A74  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458A7A  56                        PUSH ESI
00458A7B  8B CB                     MOV ECX,EBX
00458A7D  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
00458A87  E8 A1 D0 FA FF            CALL 0x00405b2d
00458A8C  8B F8                     MOV EDI,EAX
00458A8E  83 FF FF                  CMP EDI,-0x1
00458A91  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458A94  0F 85 C1 01 00 00         JNZ 0x00458c5b
00458A9A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458AA0  68 F2 0F 00 00            PUSH 0xff2
00458AA5  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458AAA  52                        PUSH EDX
00458AAB  E9 A1 01 00 00            JMP 0x00458c51
switchD_004586b9::caseD_17:
00458AB0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458AB6  56                        PUSH ESI
00458AB7  8B CB                     MOV ECX,EBX
00458AB9  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00458AC3  E8 70 8E FA FF            CALL 0x00401938
00458AC8  8B F8                     MOV EDI,EAX
00458ACA  83 FF FF                  CMP EDI,-0x1
00458ACD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458AD0  0F 85 85 01 00 00         JNZ 0x00458c5b
00458AD6  68 F7 0F 00 00            PUSH 0xff7
00458ADB  E9 66 01 00 00            JMP 0x00458c46
switchD_004586b9::caseD_b:
00458AE0  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458AE6  56                        PUSH ESI
00458AE7  8B CB                     MOV ECX,EBX
00458AE9  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00458AF3  E8 4E CB FA FF            CALL 0x00405646
00458AF8  8B F8                     MOV EDI,EAX
00458AFA  83 FF FF                  CMP EDI,-0x1
00458AFD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458B00  0F 85 55 01 00 00         JNZ 0x00458c5b
00458B06  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458B0C  68 FC 0F 00 00            PUSH 0xffc
00458B11  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458B16  51                        PUSH ECX
00458B17  E9 35 01 00 00            JMP 0x00458c51
switchD_004586b9::caseD_12:
00458B1C  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458B22  56                        PUSH ESI
00458B23  8B CB                     MOV ECX,EBX
00458B25  C7 83 59 04 00 00 76 00 00 00  MOV dword ptr [EBX + 0x459],0x76
00458B2F  E8 B0 AA FA FF            CALL 0x004035e4
00458B34  8B F8                     MOV EDI,EAX
00458B36  83 FF FF                  CMP EDI,-0x1
00458B39  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458B3C  0F 85 19 01 00 00         JNZ 0x00458c5b
00458B42  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458B48  68 01 10 00 00            PUSH 0x1001
00458B4D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458B52  52                        PUSH EDX
00458B53  E9 F9 00 00 00            JMP 0x00458c51
switchD_004586b9::caseD_8:
00458B58  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458B5E  56                        PUSH ESI
00458B5F  8B CB                     MOV ECX,EBX
00458B61  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
00458B6B  E8 1D 98 FA FF            CALL 0x0040238d
00458B70  8B F8                     MOV EDI,EAX
00458B72  83 FF FF                  CMP EDI,-0x1
00458B75  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458B78  0F 85 DD 00 00 00         JNZ 0x00458c5b
00458B7E  68 06 10 00 00            PUSH 0x1006
00458B83  E9 BE 00 00 00            JMP 0x00458c46
switchD_004586b9::caseD_e:
00458B88  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458B8E  56                        PUSH ESI
00458B8F  8B CB                     MOV ECX,EBX
00458B91  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
00458B9B  E8 99 C3 FA FF            CALL 0x00404f39
00458BA0  8B F8                     MOV EDI,EAX
00458BA2  83 FF FF                  CMP EDI,-0x1
00458BA5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458BA8  0F 85 AD 00 00 00         JNZ 0x00458c5b
00458BAE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458BB4  68 0B 10 00 00            PUSH 0x100b
00458BB9  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458BBE  51                        PUSH ECX
00458BBF  E9 8D 00 00 00            JMP 0x00458c51
LAB_00458bc4:
00458BC4  39 8B D4 02 00 00         CMP dword ptr [EBX + 0x2d4],ECX
00458BCA  0F 85 3D 05 00 00         JNZ 0x0045910d
00458BD0  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00458BD6  3B C6                     CMP EAX,ESI
00458BD8  75 34                     JNZ 0x00458c0e
00458BDA  56                        PUSH ESI
00458BDB  8B CB                     MOV ECX,EBX
00458BDD  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00458BE7  E8 3F AE FA FF            CALL 0x00403a2b
00458BEC  83 F8 FF                  CMP EAX,-0x1
00458BEF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00458BF2  0F 85 F5 22 00 00         JNZ 0x0045aeed
00458BF8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458BFE  68 17 10 00 00            PUSH 0x1017
00458C03  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458C08  52                        PUSH EDX
00458C09  E9 D5 22 00 00            JMP 0x0045aee3
LAB_00458c0e:
00458C0E  48                        DEC EAX
00458C0F  83 F8 16                  CMP EAX,0x16
00458C12  0F 87 D5 22 00 00         JA 0x0045aeed
switchD_00458c18::switchD:
00458C18  FF 24 85 F0 B9 45 00      JMP dword ptr [EAX*0x4 + 0x45b9f0]
switchD_00458c18::caseD_1:
00458C1F  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458C25  56                        PUSH ESI
00458C26  8B CB                     MOV ECX,EBX
00458C28  C7 83 59 04 00 00 65 00 00 00  MOV dword ptr [EBX + 0x459],0x65
00458C32  E8 B9 B1 FA FF            CALL 0x00403df0
00458C37  8B F8                     MOV EDI,EAX
00458C39  83 FF FF                  CMP EDI,-0x1
00458C3C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458C3F  75 1A                     JNZ 0x00458c5b
00458C41  68 1E 10 00 00            PUSH 0x101e
LAB_00458c46:
00458C46  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00458C4B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458C50  50                        PUSH EAX
LAB_00458c51:
00458C51  68 FF FF 00 00            PUSH 0xffff
00458C56  E8 E5 D1 24 00            CALL 0x006a5e40
LAB_00458c5b:
00458C5B  3B FE                     CMP EDI,ESI
00458C5D  0F 85 8A 22 00 00         JNZ 0x0045aeed
00458C63  89 B3 59 04 00 00         MOV dword ptr [EBX + 0x459],ESI
00458C69  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
00458C6F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00458C75  33 C0                     XOR EAX,EAX
00458C77  5F                        POP EDI
00458C78  5E                        POP ESI
00458C79  5B                        POP EBX
00458C7A  8B E5                     MOV ESP,EBP
00458C7C  5D                        POP EBP
00458C7D  C2 04 00                  RET 0x4
switchD_00458c18::caseD_3:
00458C80  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458C86  56                        PUSH ESI
00458C87  8B CB                     MOV ECX,EBX
00458C89  C7 83 59 04 00 00 67 00 00 00  MOV dword ptr [EBX + 0x459],0x67
00458C93  E8 A2 BC FA FF            CALL 0x0040493a
00458C98  8B F8                     MOV EDI,EAX
00458C9A  83 FF FF                  CMP EDI,-0x1
00458C9D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458CA0  75 B9                     JNZ 0x00458c5b
00458CA2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458CA8  68 23 10 00 00            PUSH 0x1023
00458CAD  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458CB2  51                        PUSH ECX
00458CB3  EB 9C                     JMP 0x00458c51
switchD_00458c18::caseD_2:
00458CB5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458CBB  56                        PUSH ESI
00458CBC  8B CB                     MOV ECX,EBX
00458CBE  C7 83 59 04 00 00 66 00 00 00  MOV dword ptr [EBX + 0x459],0x66
00458CC8  E8 86 A8 FA FF            CALL 0x00403553
00458CCD  8B F8                     MOV EDI,EAX
00458CCF  83 FF FF                  CMP EDI,-0x1
00458CD2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458CD5  75 84                     JNZ 0x00458c5b
00458CD7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458CDD  68 28 10 00 00            PUSH 0x1028
00458CE2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458CE7  52                        PUSH EDX
00458CE8  E9 64 FF FF FF            JMP 0x00458c51
switchD_00458c18::caseD_6:
00458CED  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458CF3  56                        PUSH ESI
00458CF4  8B CB                     MOV ECX,EBX
00458CF6  C7 83 59 04 00 00 6A 00 00 00  MOV dword ptr [EBX + 0x459],0x6a
00458D00  E8 EE 99 FA FF            CALL 0x004026f3
00458D05  8B F8                     MOV EDI,EAX
00458D07  83 FF FF                  CMP EDI,-0x1
00458D0A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458D0D  0F 85 48 FF FF FF         JNZ 0x00458c5b
00458D13  68 2D 10 00 00            PUSH 0x102d
00458D18  E9 29 FF FF FF            JMP 0x00458c46
switchD_00458c18::caseD_c:
00458D1D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458D23  56                        PUSH ESI
00458D24  8B CB                     MOV ECX,EBX
00458D26  C7 83 59 04 00 00 70 00 00 00  MOV dword ptr [EBX + 0x459],0x70
00458D30  E8 A7 A6 FA FF            CALL 0x004033dc
00458D35  8B F8                     MOV EDI,EAX
00458D37  83 FF FF                  CMP EDI,-0x1
00458D3A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458D3D  0F 85 18 FF FF FF         JNZ 0x00458c5b
00458D43  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458D49  68 32 10 00 00            PUSH 0x1032
00458D4E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458D53  51                        PUSH ECX
00458D54  E9 F8 FE FF FF            JMP 0x00458c51
switchD_00458c18::caseD_11:
00458D59  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458D5F  56                        PUSH ESI
00458D60  8B CB                     MOV ECX,EBX
00458D62  C7 83 59 04 00 00 75 00 00 00  MOV dword ptr [EBX + 0x459],0x75
00458D6C  E8 A2 83 FA FF            CALL 0x00401113
00458D71  8B F8                     MOV EDI,EAX
00458D73  83 FF FF                  CMP EDI,-0x1
00458D76  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458D79  0F 85 DC FE FF FF         JNZ 0x00458c5b
00458D7F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458D85  68 37 10 00 00            PUSH 0x1037
00458D8A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458D8F  52                        PUSH EDX
00458D90  E9 BC FE FF FF            JMP 0x00458c51
switchD_00458c18::caseD_13:
00458D95  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458D9B  56                        PUSH ESI
00458D9C  8B CB                     MOV ECX,EBX
00458D9E  C7 83 59 04 00 00 77 00 00 00  MOV dword ptr [EBX + 0x459],0x77
00458DA8  E8 66 C4 FA FF            CALL 0x00405213
00458DAD  8B F8                     MOV EDI,EAX
00458DAF  83 FF FF                  CMP EDI,-0x1
00458DB2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458DB5  0F 85 A0 FE FF FF         JNZ 0x00458c5b
00458DBB  68 3C 10 00 00            PUSH 0x103c
00458DC0  E9 81 FE FF FF            JMP 0x00458c46
switchD_00458c18::caseD_d:
00458DC5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458DCB  56                        PUSH ESI
00458DCC  8B CB                     MOV ECX,EBX
00458DCE  C7 83 59 04 00 00 71 00 00 00  MOV dword ptr [EBX + 0x459],0x71
00458DD8  E8 6D A6 FA FF            CALL 0x0040344a
00458DDD  8B F8                     MOV EDI,EAX
00458DDF  83 FF FF                  CMP EDI,-0x1
00458DE2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458DE5  0F 85 70 FE FF FF         JNZ 0x00458c5b
00458DEB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458DF1  68 41 10 00 00            PUSH 0x1041
00458DF6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458DFB  51                        PUSH ECX
00458DFC  E9 50 FE FF FF            JMP 0x00458c51
switchD_00458c18::caseD_4:
00458E01  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458E07  56                        PUSH ESI
00458E08  8B CB                     MOV ECX,EBX
00458E0A  C7 83 59 04 00 00 68 00 00 00  MOV dword ptr [EBX + 0x459],0x68
00458E14  E8 A3 CA FA FF            CALL 0x004058bc
00458E19  8B F8                     MOV EDI,EAX
00458E1B  83 FF FF                  CMP EDI,-0x1
00458E1E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458E21  0F 85 34 FE FF FF         JNZ 0x00458c5b
00458E27  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458E2D  68 46 10 00 00            PUSH 0x1046
00458E32  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458E37  52                        PUSH EDX
00458E38  E9 14 FE FF FF            JMP 0x00458c51
switchD_00458c18::caseD_5:
00458E3D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458E43  56                        PUSH ESI
00458E44  8B CB                     MOV ECX,EBX
00458E46  C7 83 59 04 00 00 69 00 00 00  MOV dword ptr [EBX + 0x459],0x69
00458E50  E8 B2 B6 FA FF            CALL 0x00404507
00458E55  8B F8                     MOV EDI,EAX
00458E57  83 FF FF                  CMP EDI,-0x1
00458E5A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458E5D  0F 85 F8 FD FF FF         JNZ 0x00458c5b
00458E63  68 4B 10 00 00            PUSH 0x104b
00458E68  E9 D9 FD FF FF            JMP 0x00458c46
switchD_00458c18::caseD_f:
00458E6D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458E73  56                        PUSH ESI
00458E74  8B CB                     MOV ECX,EBX
00458E76  C7 83 59 04 00 00 73 00 00 00  MOV dword ptr [EBX + 0x459],0x73
00458E80  E8 00 B1 FA FF            CALL 0x00403f85
00458E85  8B F8                     MOV EDI,EAX
00458E87  83 FF FF                  CMP EDI,-0x1
00458E8A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458E8D  0F 85 C8 FD FF FF         JNZ 0x00458c5b
00458E93  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458E99  68 50 10 00 00            PUSH 0x1050
00458E9E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458EA3  51                        PUSH ECX
00458EA4  E9 A8 FD FF FF            JMP 0x00458c51
switchD_00458c18::caseD_14:
00458EA9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458EAF  56                        PUSH ESI
00458EB0  8B CB                     MOV ECX,EBX
00458EB2  C7 83 59 04 00 00 78 00 00 00  MOV dword ptr [EBX + 0x459],0x78
00458EBC  E8 97 97 FA FF            CALL 0x00402658
00458EC1  8B F8                     MOV EDI,EAX
00458EC3  83 FF FF                  CMP EDI,-0x1
00458EC6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458EC9  0F 85 8C FD FF FF         JNZ 0x00458c5b
00458ECF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458ED5  68 55 10 00 00            PUSH 0x1055
00458EDA  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458EDF  52                        PUSH EDX
00458EE0  E9 6C FD FF FF            JMP 0x00458c51
switchD_00458c18::caseD_10:
00458EE5  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458EEB  56                        PUSH ESI
00458EEC  8B CB                     MOV ECX,EBX
00458EEE  C7 83 59 04 00 00 74 00 00 00  MOV dword ptr [EBX + 0x459],0x74
00458EF8  E8 9D AA FA FF            CALL 0x0040399a
00458EFD  8B F8                     MOV EDI,EAX
00458EFF  83 FF FF                  CMP EDI,-0x1
00458F02  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458F05  0F 85 50 FD FF FF         JNZ 0x00458c5b
00458F0B  68 5A 10 00 00            PUSH 0x105a
00458F10  E9 31 FD FF FF            JMP 0x00458c46
switchD_00458c18::caseD_7:
00458F15  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458F1B  56                        PUSH ESI
00458F1C  8B CB                     MOV ECX,EBX
00458F1E  C7 83 59 04 00 00 6B 00 00 00  MOV dword ptr [EBX + 0x459],0x6b
00458F28  E8 6F A8 FA FF            CALL 0x0040379c
00458F2D  8B F8                     MOV EDI,EAX
00458F2F  83 FF FF                  CMP EDI,-0x1
00458F32  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458F35  0F 85 20 FD FF FF         JNZ 0x00458c5b
00458F3B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458F41  68 5F 10 00 00            PUSH 0x105f
00458F46  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458F4B  51                        PUSH ECX
00458F4C  E9 00 FD FF FF            JMP 0x00458c51
switchD_00458c18::caseD_a:
00458F51  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458F57  56                        PUSH ESI
00458F58  8B CB                     MOV ECX,EBX
00458F5A  C7 83 59 04 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x459],0x6e
00458F64  E8 35 C9 FA FF            CALL 0x0040589e
00458F69  8B F8                     MOV EDI,EAX
00458F6B  83 FF FF                  CMP EDI,-0x1
00458F6E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458F71  0F 85 E4 FC FF FF         JNZ 0x00458c5b
00458F77  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00458F7D  68 64 10 00 00            PUSH 0x1064
00458F82  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458F87  52                        PUSH EDX
00458F88  E9 C4 FC FF FF            JMP 0x00458c51
switchD_00458c18::caseD_9:
00458F8D  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458F93  56                        PUSH ESI
00458F94  8B CB                     MOV ECX,EBX
00458F96  C7 83 59 04 00 00 6D 00 00 00  MOV dword ptr [EBX + 0x459],0x6d
00458FA0  E8 B3 9B FA FF            CALL 0x00402b58
00458FA5  8B F8                     MOV EDI,EAX
00458FA7  83 FF FF                  CMP EDI,-0x1
00458FAA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458FAD  0F 85 A8 FC FF FF         JNZ 0x00458c5b
00458FB3  68 69 10 00 00            PUSH 0x1069
00458FB8  E9 89 FC FF FF            JMP 0x00458c46
switchD_00458c18::caseD_16:
00458FBD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458FC3  56                        PUSH ESI
00458FC4  8B CB                     MOV ECX,EBX
00458FC6  C7 83 59 04 00 00 7A 00 00 00  MOV dword ptr [EBX + 0x459],0x7a
00458FD0  E8 B2 B7 FA FF            CALL 0x00404787
00458FD5  8B F8                     MOV EDI,EAX
00458FD7  83 FF FF                  CMP EDI,-0x1
00458FDA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00458FDD  0F 85 78 FC FF FF         JNZ 0x00458c5b
00458FE3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00458FE9  68 6E 10 00 00            PUSH 0x106e
00458FEE  68 3C 9D 7A 00            PUSH 0x7a9d3c
00458FF3  51                        PUSH ECX
00458FF4  E9 58 FC FF FF            JMP 0x00458c51
switchD_00458c18::caseD_15:
00458FF9  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
00458FFF  56                        PUSH ESI
00459000  8B CB                     MOV ECX,EBX
00459002  C7 83 59 04 00 00 79 00 00 00  MOV dword ptr [EBX + 0x459],0x79
0045900C  E8 1C CB FA FF            CALL 0x00405b2d
00459011  8B F8                     MOV EDI,EAX
00459013  83 FF FF                  CMP EDI,-0x1
00459016  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459019  0F 85 3C FC FF FF         JNZ 0x00458c5b
0045901F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459025  68 73 10 00 00            PUSH 0x1073
0045902A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045902F  52                        PUSH EDX
00459030  E9 1C FC FF FF            JMP 0x00458c51
switchD_00458c18::caseD_17:
00459035  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045903B  56                        PUSH ESI
0045903C  8B CB                     MOV ECX,EBX
0045903E  C7 83 59 04 00 00 7B 00 00 00  MOV dword ptr [EBX + 0x459],0x7b
00459048  E8 EB 88 FA FF            CALL 0x00401938
0045904D  8B F8                     MOV EDI,EAX
0045904F  83 FF FF                  CMP EDI,-0x1
00459052  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459055  0F 85 00 FC FF FF         JNZ 0x00458c5b
0045905B  68 78 10 00 00            PUSH 0x1078
00459060  E9 E1 FB FF FF            JMP 0x00458c46
switchD_00458c18::caseD_b:
00459065  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
0045906B  56                        PUSH ESI
0045906C  8B CB                     MOV ECX,EBX
0045906E  C7 83 59 04 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x459],0x6f
00459078  E8 C9 C5 FA FF            CALL 0x00405646
0045907D  8B F8                     MOV EDI,EAX
0045907F  83 FF FF                  CMP EDI,-0x1
00459082  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459085  0F 85 D0 FB FF FF         JNZ 0x00458c5b
0045908B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00459091  68 7D 10 00 00            PUSH 0x107d
00459096  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045909B  51                        PUSH ECX
0045909C  E9 B0 FB FF FF            JMP 0x00458c51
switchD_00458c18::caseD_8:
004590A1  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004590A7  56                        PUSH ESI
004590A8  8B CB                     MOV ECX,EBX
004590AA  C7 83 59 04 00 00 6C 00 00 00  MOV dword ptr [EBX + 0x459],0x6c
004590B4  E8 D4 92 FA FF            CALL 0x0040238d
004590B9  8B F8                     MOV EDI,EAX
004590BB  83 FF FF                  CMP EDI,-0x1
004590BE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004590C1  0F 85 94 FB FF FF         JNZ 0x00458c5b
004590C7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004590CD  68 82 10 00 00            PUSH 0x1082
004590D2  68 3C 9D 7A 00            PUSH 0x7a9d3c
004590D7  52                        PUSH EDX
004590D8  E9 74 FB FF FF            JMP 0x00458c51
switchD_00458c18::caseD_e:
004590DD  89 B3 5D 04 00 00         MOV dword ptr [EBX + 0x45d],ESI
004590E3  56                        PUSH ESI
004590E4  8B CB                     MOV ECX,EBX
004590E6  C7 83 59 04 00 00 72 00 00 00  MOV dword ptr [EBX + 0x459],0x72
004590F0  E8 44 BE FA FF            CALL 0x00404f39
004590F5  8B F8                     MOV EDI,EAX
004590F7  83 FF FF                  CMP EDI,-0x1
004590FA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004590FD  0F 85 58 FB FF FF         JNZ 0x00458c5b
00459103  68 87 10 00 00            PUSH 0x1087
00459108  E9 39 FB FF FF            JMP 0x00458c46
LAB_0045910d:
0045910D  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00459113  48                        DEC EAX
00459114  83 F8 16                  CMP EAX,0x16
00459117  0F 87 D0 1D 00 00         JA 0x0045aeed
switchD_0045911d::switchD:
0045911D  FF 24 85 4C BA 45 00      JMP dword ptr [EAX*0x4 + 0x45ba4c]
switchD_0045911d::caseD_1:
00459124  6A 02                     PUSH 0x2
00459126  8B CB                     MOV ECX,EBX
00459128  E8 2B 81 FA FF            CALL 0x00401258
0045912D  8B F8                     MOV EDI,EAX
0045912F  83 FF FF                  CMP EDI,-0x1
00459132  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459135  75 1B                     JNZ 0x00459152
00459137  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045913D  68 94 10 00 00            PUSH 0x1094
00459142  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459147  51                        PUSH ECX
00459148  68 FF FF 00 00            PUSH 0xffff
0045914D  E8 EE CC 24 00            CALL 0x006a5e40
LAB_00459152:
00459152  3B FE                     CMP EDI,ESI
00459154  75 34                     JNZ 0x0045918a
00459156  56                        PUSH ESI
00459157  8B CB                     MOV ECX,EBX
00459159  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459163  E8 C3 A8 FA FF            CALL 0x00403a2b
00459168  83 F8 FF                  CMP EAX,-0x1
0045916B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0045916E  0F 85 79 1D 00 00         JNZ 0x0045aeed
00459174  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045917A  68 99 10 00 00            PUSH 0x1099
0045917F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459184  52                        PUSH EDX
00459185  E9 59 1D 00 00            JMP 0x0045aee3
LAB_0045918a:
0045918A  83 FF 03                  CMP EDI,0x3
0045918D  0F 85 5A 1D 00 00         JNZ 0x0045aeed
00459193  39 B3 B3 00 00 00         CMP dword ptr [EBX + 0xb3],ESI
00459199  0F 85 89 00 00 00         JNZ 0x00459228
0045919F  0F BF 4B 5B               MOVSX ECX,word ptr [EBX + 0x5b]
004591A3  8B 83 BB 00 00 00         MOV EAX,dword ptr [EBX + 0xbb]
004591A9  2B C1                     SUB EAX,ECX
004591AB  99                        CDQ
004591AC  33 C2                     XOR EAX,EDX
004591AE  2B C2                     SUB EAX,EDX
004591B0  83 F8 01                  CMP EAX,0x1
004591B3  7F 73                     JG 0x00459228
004591B5  0F BF 53 5D               MOVSX EDX,word ptr [EBX + 0x5d]
004591B9  8B 83 BF 00 00 00         MOV EAX,dword ptr [EBX + 0xbf]
004591BF  2B C2                     SUB EAX,EDX
004591C1  99                        CDQ
004591C2  33 C2                     XOR EAX,EDX
004591C4  2B C2                     SUB EAX,EDX
004591C6  83 F8 01                  CMP EAX,0x1
004591C9  7F 5D                     JG 0x00459228
004591CB  0F BF 4B 5F               MOVSX ECX,word ptr [EBX + 0x5f]
004591CF  8B 83 C3 00 00 00         MOV EAX,dword ptr [EBX + 0xc3]
004591D5  2B C1                     SUB EAX,ECX
004591D7  99                        CDQ
004591D8  33 C2                     XOR EAX,EDX
004591DA  2B C2                     SUB EAX,EDX
004591DC  83 F8 01                  CMP EAX,0x1
004591DF  7F 47                     JG 0x00459228
004591E1  66 8B 83 C3 00 00 00      MOV AX,word ptr [EBX + 0xc3]
004591E8  66 8B 8B BF 00 00 00      MOV CX,word ptr [EBX + 0xbf]
004591EF  8B 13                     MOV EDX,dword ptr [EBX]
004591F1  50                        PUSH EAX
004591F2  66 8B 83 BB 00 00 00      MOV AX,word ptr [EBX + 0xbb]
004591F9  51                        PUSH ECX
004591FA  50                        PUSH EAX
004591FB  8B CB                     MOV ECX,EBX
004591FD  FF 52 18                  CALL dword ptr [EDX + 0x18]
00459200  85 C0                     TEST EAX,EAX
00459202  75 24                     JNZ 0x00459228
00459204  56                        PUSH ESI
00459205  8B CB                     MOV ECX,EBX
00459207  89 BB 5D 04 00 00         MOV dword ptr [EBX + 0x45d],EDI
0045920D  E8 19 A8 FA FF            CALL 0x00403a2b
00459212  83 F8 FF                  CMP EAX,-0x1
00459215  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459218  0F 85 CF 1C 00 00         JNZ 0x0045aeed
0045921E  68 AD 10 00 00            PUSH 0x10ad
00459223  E9 AF 1C 00 00            JMP 0x0045aed7
LAB_00459228:
00459228  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0045922B  33 D2                     XOR EDX,EDX
0045922D  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
00459231  56                        PUSH ESI
00459232  52                        PUSH EDX
00459233  E8 EE 98 FA FF            CALL 0x00402b26
00459238  83 F8 FC                  CMP EAX,-0x4
0045923B  75 33                     JNZ 0x00459270
0045923D  56                        PUSH ESI
0045923E  8B CB                     MOV ECX,EBX
00459240  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045924A  E8 DC A7 FA FF            CALL 0x00403a2b
0045924F  83 F8 FF                  CMP EAX,-0x1
00459252  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459255  0F 85 92 1C 00 00         JNZ 0x0045aeed
0045925B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459260  68 B3 10 00 00            PUSH 0x10b3
00459265  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045926A  50                        PUSH EAX
0045926B  E9 73 1C 00 00            JMP 0x0045aee3
LAB_00459270:
00459270  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00459273  33 D2                     XOR EDX,EDX
00459275  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0045927B  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00459281  B9 1F 00 00 00            MOV ECX,0x1f
00459286  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00459289  C1 E8 10                  SHR EAX,0x10
0045928C  F7 F1                     DIV ECX
0045928E  83 C2 1E                  ADD EDX,0x1e
00459291  33 C0                     XOR EAX,EAX
00459293  66 89 93 F8 00 00 00      MOV word ptr [EBX + 0xf8],DX
0045929A  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
004592A0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004592A6  5F                        POP EDI
004592A7  5E                        POP ESI
004592A8  5B                        POP EBX
004592A9  8B E5                     MOV ESP,EBP
004592AB  5D                        POP EBP
004592AC  C2 04 00                  RET 0x4
switchD_0045911d::caseD_3:
004592AF  6A 02                     PUSH 0x2
004592B1  8B CB                     MOV ECX,EBX
004592B3  E8 73 A7 FA FF            CALL 0x00403a2b
004592B8  83 F8 FF                  CMP EAX,-0x1
004592BB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004592BE  0F 85 29 1C 00 00         JNZ 0x0045aeed
004592C4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004592CA  68 BB 10 00 00            PUSH 0x10bb
004592CF  68 3C 9D 7A 00            PUSH 0x7a9d3c
004592D4  52                        PUSH EDX
004592D5  E9 09 1C 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_2:
004592DA  6A 02                     PUSH 0x2
004592DC  8B CB                     MOV ECX,EBX
004592DE  E8 6F BC FA FF            CALL 0x00404f52
004592E3  8B F8                     MOV EDI,EAX
004592E5  83 FF FF                  CMP EDI,-0x1
004592E8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004592EB  75 1A                     JNZ 0x00459307
004592ED  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004592F2  68 BE 10 00 00            PUSH 0x10be
004592F7  68 3C 9D 7A 00            PUSH 0x7a9d3c
004592FC  50                        PUSH EAX
004592FD  68 FF FF 00 00            PUSH 0xffff
00459302  E8 39 CB 24 00            CALL 0x006a5e40
LAB_00459307:
00459307  3B FE                     CMP EDI,ESI
00459309  75 66                     JNZ 0x00459371
0045930B  66 8B 8B F2 07 00 00      MOV CX,word ptr [EBX + 0x7f2]
00459312  66 89 4D BE               MOV word ptr [EBP + -0x42],CX
00459316  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
0045931A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0045931D  66 89 55 BC               MOV word ptr [EBP + -0x44],DX
00459321  8D 55 BC                  LEA EDX,[EBP + -0x44]
00459324  66 C7 83 16 08 00 00 05 00  MOV word ptr [EBX + 0x816],0x5
0045932D  8B 01                     MOV EAX,dword ptr [ECX]
0045932F  52                        PUSH EDX
00459330  6A 67                     PUSH 0x67
00459332  FF 50 08                  CALL dword ptr [EAX + 0x8]
00459335  66 C7 83 F2 07 00 00 FF FF  MOV word ptr [EBX + 0x7f2],0xffff
0045933E  56                        PUSH ESI
0045933F  8B CB                     MOV ECX,EBX
00459341  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045934B  E8 DB A6 FA FF            CALL 0x00403a2b
00459350  83 F8 FF                  CMP EAX,-0x1
00459353  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459356  0F 85 91 1B 00 00         JNZ 0x0045aeed
0045935C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459361  68 C8 10 00 00            PUSH 0x10c8
00459366  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045936B  50                        PUSH EAX
0045936C  E9 72 1B 00 00            JMP 0x0045aee3
LAB_00459371:
00459371  83 FF 03                  CMP EDI,0x3
00459374  75 49                     JNZ 0x004593bf
00459376  33 C9                     XOR ECX,ECX
00459378  56                        PUSH ESI
00459379  66 8B 4B 32               MOV CX,word ptr [EBX + 0x32]
0045937D  51                        PUSH ECX
0045937E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00459381  E8 A0 97 FA FF            CALL 0x00402b26
00459386  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00459389  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0045938F  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00459395  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00459398  C1 E8 10                  SHR EAX,0x10
0045939B  83 E0 0F                  AND EAX,0xf
0045939E  83 C0 0F                  ADD EAX,0xf
004593A1  66 89 83 F8 00 00 00      MOV word ptr [EBX + 0xf8],AX
004593A8  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
004593AE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004593B4  33 C0                     XOR EAX,EAX
004593B6  5F                        POP EDI
004593B7  5E                        POP ESI
004593B8  5B                        POP EBX
004593B9  8B E5                     MOV ESP,EBP
004593BB  5D                        POP EBP
004593BC  C2 04 00                  RET 0x4
LAB_004593bf:
004593BF  83 FF 04                  CMP EDI,0x4
004593C2  75 25                     JNZ 0x004593e9
004593C4  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004593C7  83 C3 32                  ADD EBX,0x32
004593CA  53                        PUSH EBX
004593CB  6A 66                     PUSH 0x66
004593CD  8B 01                     MOV EAX,dword ptr [ECX]
004593CF  FF 50 08                  CALL dword ptr [EAX + 0x8]
004593D2  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
004593D8  33 C0                     XOR EAX,EAX
004593DA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004593E0  5F                        POP EDI
004593E1  5E                        POP ESI
004593E2  5B                        POP EBX
004593E3  8B E5                     MOV ESP,EBP
004593E5  5D                        POP EBP
004593E6  C2 04 00                  RET 0x4
LAB_004593e9:
004593E9  83 FF 06                  CMP EDI,0x6
004593EC  75 25                     JNZ 0x00459413
004593EE  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004593F1  83 C3 32                  ADD EBX,0x32
004593F4  53                        PUSH EBX
004593F5  6A 68                     PUSH 0x68
004593F7  8B 11                     MOV EDX,dword ptr [ECX]
004593F9  FF 52 08                  CALL dword ptr [EDX + 0x8]
004593FC  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
00459402  33 C0                     XOR EAX,EAX
00459404  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045940A  5F                        POP EDI
0045940B  5E                        POP ESI
0045940C  5B                        POP EBX
0045940D  8B E5                     MOV ESP,EBP
0045940F  5D                        POP EBP
00459410  C2 04 00                  RET 0x4
LAB_00459413:
00459413  83 FF 07                  CMP EDI,0x7
00459416  0F 85 D1 1A 00 00         JNZ 0x0045aeed
0045941C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0045941F  83 C3 32                  ADD EBX,0x32
00459422  53                        PUSH EBX
00459423  6A 69                     PUSH 0x69
00459425  8B 01                     MOV EAX,dword ptr [ECX]
00459427  FF 50 08                  CALL dword ptr [EAX + 0x8]
0045942A  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
00459430  33 C0                     XOR EAX,EAX
00459432  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00459438  5F                        POP EDI
00459439  5E                        POP ESI
0045943A  5B                        POP EBX
0045943B  8B E5                     MOV ESP,EBP
0045943D  5D                        POP EBP
0045943E  C2 04 00                  RET 0x4
switchD_0045911d::caseD_6:
00459441  6A 02                     PUSH 0x2
00459443  8B CB                     MOV ECX,EBX
00459445  E8 AB AE FA FF            CALL 0x004042f5
0045944A  8B F8                     MOV EDI,EAX
0045944C  83 FF FF                  CMP EDI,-0x1
0045944F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459452  75 1B                     JNZ 0x0045946f
00459454  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045945A  68 E8 10 00 00            PUSH 0x10e8
0045945F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459464  51                        PUSH ECX
00459465  68 FF FF 00 00            PUSH 0xffff
0045946A  E8 D1 C9 24 00            CALL 0x006a5e40
LAB_0045946f:
0045946F  3B FE                     CMP EDI,ESI
00459471  0F 85 76 1A 00 00         JNZ 0x0045aeed
00459477  56                        PUSH ESI
00459478  8B CB                     MOV ECX,EBX
0045947A  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459484  E8 A2 A5 FA FF            CALL 0x00403a2b
00459489  83 F8 FF                  CMP EAX,-0x1
0045948C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0045948F  0F 85 58 1A 00 00         JNZ 0x0045aeed
00459495  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045949B  68 ED 10 00 00            PUSH 0x10ed
004594A0  68 3C 9D 7A 00            PUSH 0x7a9d3c
004594A5  52                        PUSH EDX
004594A6  E9 38 1A 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_c:
004594AB  6A 02                     PUSH 0x2
004594AD  8B CB                     MOV ECX,EBX
004594AF  E8 80 BF FA FF            CALL 0x00405434
004594B4  8B F8                     MOV EDI,EAX
004594B6  83 FF FF                  CMP EDI,-0x1
004594B9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004594BC  75 1A                     JNZ 0x004594d8
004594BE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004594C3  68 F2 10 00 00            PUSH 0x10f2
004594C8  68 3C 9D 7A 00            PUSH 0x7a9d3c
004594CD  50                        PUSH EAX
004594CE  68 FF FF 00 00            PUSH 0xffff
004594D3  E8 68 C9 24 00            CALL 0x006a5e40
LAB_004594d8:
004594D8  3B FE                     CMP EDI,ESI
004594DA  0F 85 0D 1A 00 00         JNZ 0x0045aeed
004594E0  56                        PUSH ESI
004594E1  8B CB                     MOV ECX,EBX
004594E3  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
004594ED  E8 39 A5 FA FF            CALL 0x00403a2b
004594F2  83 F8 FF                  CMP EAX,-0x1
004594F5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004594F8  0F 85 EF 19 00 00         JNZ 0x0045aeed
004594FE  68 F7 10 00 00            PUSH 0x10f7
00459503  E9 CF 19 00 00            JMP 0x0045aed7
switchD_0045911d::caseD_11:
00459508  6A 02                     PUSH 0x2
0045950A  8B CB                     MOV ECX,EBX
0045950C  E8 32 B0 FA FF            CALL 0x00404543
00459511  8B F8                     MOV EDI,EAX
00459513  83 FF FF                  CMP EDI,-0x1
00459516  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459519  75 1B                     JNZ 0x00459536
0045951B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459521  68 FC 10 00 00            PUSH 0x10fc
00459526  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045952B  52                        PUSH EDX
0045952C  68 FF FF 00 00            PUSH 0xffff
00459531  E8 0A C9 24 00            CALL 0x006a5e40
LAB_00459536:
00459536  3B FE                     CMP EDI,ESI
00459538  0F 85 AF 19 00 00         JNZ 0x0045aeed
0045953E  56                        PUSH ESI
0045953F  8B CB                     MOV ECX,EBX
00459541  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045954B  E8 DB A4 FA FF            CALL 0x00403a2b
00459550  83 F8 FF                  CMP EAX,-0x1
00459553  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459556  0F 85 91 19 00 00         JNZ 0x0045aeed
0045955C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459561  68 01 11 00 00            PUSH 0x1101
00459566  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045956B  50                        PUSH EAX
0045956C  E9 72 19 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_13:
00459571  6A 02                     PUSH 0x2
00459573  8B CB                     MOV ECX,EBX
00459575  E8 57 7C FA FF            CALL 0x004011d1
0045957A  8B F8                     MOV EDI,EAX
0045957C  83 FF FF                  CMP EDI,-0x1
0045957F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459582  75 1B                     JNZ 0x0045959f
00459584  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045958A  68 06 11 00 00            PUSH 0x1106
0045958F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459594  51                        PUSH ECX
00459595  68 FF FF 00 00            PUSH 0xffff
0045959A  E8 A1 C8 24 00            CALL 0x006a5e40
LAB_0045959f:
0045959F  3B FE                     CMP EDI,ESI
004595A1  0F 85 46 19 00 00         JNZ 0x0045aeed
004595A7  56                        PUSH ESI
004595A8  8B CB                     MOV ECX,EBX
004595AA  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
004595B4  E8 72 A4 FA FF            CALL 0x00403a2b
004595B9  83 F8 FF                  CMP EAX,-0x1
004595BC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004595BF  0F 85 28 19 00 00         JNZ 0x0045aeed
004595C5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004595CB  68 0B 11 00 00            PUSH 0x110b
004595D0  68 3C 9D 7A 00            PUSH 0x7a9d3c
004595D5  52                        PUSH EDX
004595D6  E9 08 19 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_d:
004595DB  6A 02                     PUSH 0x2
004595DD  8B CB                     MOV ECX,EBX
004595DF  E8 AD B6 FA FF            CALL 0x00404c91
004595E4  8B F8                     MOV EDI,EAX
004595E6  83 FF FF                  CMP EDI,-0x1
004595E9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004595EC  75 1A                     JNZ 0x00459608
004595EE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004595F3  68 10 11 00 00            PUSH 0x1110
004595F8  68 3C 9D 7A 00            PUSH 0x7a9d3c
004595FD  50                        PUSH EAX
004595FE  68 FF FF 00 00            PUSH 0xffff
00459603  E8 38 C8 24 00            CALL 0x006a5e40
LAB_00459608:
00459608  3B FE                     CMP EDI,ESI
0045960A  0F 85 DD 18 00 00         JNZ 0x0045aeed
00459610  56                        PUSH ESI
00459611  8B CB                     MOV ECX,EBX
00459613  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045961D  E8 09 A4 FA FF            CALL 0x00403a2b
00459622  83 F8 FF                  CMP EAX,-0x1
00459625  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459628  0F 85 BF 18 00 00         JNZ 0x0045aeed
0045962E  68 15 11 00 00            PUSH 0x1115
00459633  E9 9F 18 00 00            JMP 0x0045aed7
switchD_0045911d::caseD_4:
00459638  6A 02                     PUSH 0x2
0045963A  8B CB                     MOV ECX,EBX
0045963C  E8 77 A8 FA FF            CALL 0x00403eb8
00459641  8B F8                     MOV EDI,EAX
00459643  83 FF FF                  CMP EDI,-0x1
00459646  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459649  75 1B                     JNZ 0x00459666
0045964B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459651  68 1A 11 00 00            PUSH 0x111a
00459656  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045965B  52                        PUSH EDX
0045965C  68 FF FF 00 00            PUSH 0xffff
00459661  E8 DA C7 24 00            CALL 0x006a5e40
LAB_00459666:
00459666  3B FE                     CMP EDI,ESI
00459668  0F 85 7F 18 00 00         JNZ 0x0045aeed
0045966E  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00459671  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00459677  50                        PUSH EAX
00459678  E8 48 87 FA FF            CALL 0x00401dc5
0045967D  3B C6                     CMP EAX,ESI
0045967F  74 33                     JZ 0x004596b4
00459681  C7 85 78 FF FF FF 94 5D 00 00  MOV dword ptr [EBP + 0xffffff78],0x5d94
0045968B  66 8B 4B 24               MOV CX,word ptr [EBX + 0x24]
0045968F  66 89 8D 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],CX
00459696  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
0045969A  66 89 95 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],DX
004596A1  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004596A4  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
004596A7  8B 10                     MOV EDX,dword ptr [EAX]
004596A9  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
004596AF  51                        PUSH ECX
004596B0  8B C8                     MOV ECX,EAX
004596B2  FF 12                     CALL dword ptr [EDX]
LAB_004596b4:
004596B4  56                        PUSH ESI
004596B5  8B CB                     MOV ECX,EBX
004596B7  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
004596C1  E8 65 A3 FA FF            CALL 0x00403a2b
004596C6  83 F8 FF                  CMP EAX,-0x1
004596C9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004596CC  0F 85 1B 18 00 00         JNZ 0x0045aeed
004596D2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004596D8  68 27 11 00 00            PUSH 0x1127
004596DD  68 3C 9D 7A 00            PUSH 0x7a9d3c
004596E2  52                        PUSH EDX
004596E3  E9 FB 17 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_5:
004596E8  6A 02                     PUSH 0x2
004596EA  8B CB                     MOV ECX,EBX
004596EC  E8 DB B6 FA FF            CALL 0x00404dcc
004596F1  8B F8                     MOV EDI,EAX
004596F3  83 FF FF                  CMP EDI,-0x1
004596F6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004596F9  75 1A                     JNZ 0x00459715
004596FB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459700  68 2C 11 00 00            PUSH 0x112c
00459705  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045970A  50                        PUSH EAX
0045970B  68 FF FF 00 00            PUSH 0xffff
00459710  E8 2B C7 24 00            CALL 0x006a5e40
LAB_00459715:
00459715  3B FE                     CMP EDI,ESI
00459717  0F 85 D0 17 00 00         JNZ 0x0045aeed
0045971D  56                        PUSH ESI
0045971E  8B CB                     MOV ECX,EBX
00459720  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045972A  E8 FC A2 FA FF            CALL 0x00403a2b
0045972F  83 F8 FF                  CMP EAX,-0x1
00459732  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459735  0F 85 B2 17 00 00         JNZ 0x0045aeed
0045973B  68 31 11 00 00            PUSH 0x1131
00459740  E9 92 17 00 00            JMP 0x0045aed7
switchD_0045911d::caseD_f:
00459745  6A 02                     PUSH 0x2
00459747  8B CB                     MOV ECX,EBX
00459749  E8 CE B6 FA FF            CALL 0x00404e1c
0045974E  8B F8                     MOV EDI,EAX
00459750  83 FF FF                  CMP EDI,-0x1
00459753  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459756  75 1B                     JNZ 0x00459773
00459758  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045975E  68 36 11 00 00            PUSH 0x1136
00459763  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459768  52                        PUSH EDX
00459769  68 FF FF 00 00            PUSH 0xffff
0045976E  E8 CD C6 24 00            CALL 0x006a5e40
LAB_00459773:
00459773  3B FE                     CMP EDI,ESI
00459775  0F 85 72 17 00 00         JNZ 0x0045aeed
0045977B  56                        PUSH ESI
0045977C  8B CB                     MOV ECX,EBX
0045977E  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459788  E8 9E A2 FA FF            CALL 0x00403a2b
0045978D  83 F8 FF                  CMP EAX,-0x1
00459790  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459793  0F 85 54 17 00 00         JNZ 0x0045aeed
00459799  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0045979E  68 3B 11 00 00            PUSH 0x113b
004597A3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004597A8  50                        PUSH EAX
004597A9  E9 35 17 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_14:
004597AE  6A 02                     PUSH 0x2
004597B0  8B CB                     MOV ECX,EBX
004597B2  E8 51 B6 FA FF            CALL 0x00404e08
004597B7  8B F8                     MOV EDI,EAX
004597B9  83 FF FF                  CMP EDI,-0x1
004597BC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004597BF  75 1B                     JNZ 0x004597dc
004597C1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004597C7  68 40 11 00 00            PUSH 0x1140
004597CC  68 3C 9D 7A 00            PUSH 0x7a9d3c
004597D1  51                        PUSH ECX
004597D2  68 FF FF 00 00            PUSH 0xffff
004597D7  E8 64 C6 24 00            CALL 0x006a5e40
LAB_004597dc:
004597DC  3B FE                     CMP EDI,ESI
004597DE  0F 85 09 17 00 00         JNZ 0x0045aeed
004597E4  56                        PUSH ESI
004597E5  8B CB                     MOV ECX,EBX
004597E7  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
004597F1  E8 35 A2 FA FF            CALL 0x00403a2b
004597F6  83 F8 FF                  CMP EAX,-0x1
004597F9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004597FC  0F 85 EB 16 00 00         JNZ 0x0045aeed
00459802  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459808  68 45 11 00 00            PUSH 0x1145
0045980D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459812  52                        PUSH EDX
00459813  E9 CB 16 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_10:
00459818  6A 02                     PUSH 0x2
0045981A  8B CB                     MOV ECX,EBX
0045981C  E8 8D 79 FA FF            CALL 0x004011ae
00459821  8B F8                     MOV EDI,EAX
00459823  83 FF FF                  CMP EDI,-0x1
00459826  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459829  75 1A                     JNZ 0x00459845
0045982B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459830  68 4A 11 00 00            PUSH 0x114a
00459835  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045983A  50                        PUSH EAX
0045983B  68 FF FF 00 00            PUSH 0xffff
00459840  E8 FB C5 24 00            CALL 0x006a5e40
LAB_00459845:
00459845  3B FE                     CMP EDI,ESI
00459847  0F 85 A0 16 00 00         JNZ 0x0045aeed
0045984D  56                        PUSH ESI
0045984E  8B CB                     MOV ECX,EBX
00459850  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045985A  E8 CC A1 FA FF            CALL 0x00403a2b
0045985F  83 F8 FF                  CMP EAX,-0x1
00459862  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459865  0F 85 82 16 00 00         JNZ 0x0045aeed
0045986B  68 4F 11 00 00            PUSH 0x114f
00459870  E9 62 16 00 00            JMP 0x0045aed7
switchD_0045911d::caseD_7:
00459875  6A 02                     PUSH 0x2
00459877  8B CB                     MOV ECX,EBX
00459879  E8 95 AF FA FF            CALL 0x00404813
0045987E  8B F8                     MOV EDI,EAX
00459880  83 FF FF                  CMP EDI,-0x1
00459883  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459886  75 1B                     JNZ 0x004598a3
00459888  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045988E  68 54 11 00 00            PUSH 0x1154
00459893  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459898  52                        PUSH EDX
00459899  68 FF FF 00 00            PUSH 0xffff
0045989E  E8 9D C5 24 00            CALL 0x006a5e40
LAB_004598a3:
004598A3  3B FE                     CMP EDI,ESI
004598A5  0F 85 42 16 00 00         JNZ 0x0045aeed
004598AB  56                        PUSH ESI
004598AC  8B CB                     MOV ECX,EBX
004598AE  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
004598B8  E8 6E A1 FA FF            CALL 0x00403a2b
004598BD  83 F8 FF                  CMP EAX,-0x1
004598C0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004598C3  0F 85 24 16 00 00         JNZ 0x0045aeed
004598C9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004598CE  68 59 11 00 00            PUSH 0x1159
004598D3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004598D8  50                        PUSH EAX
004598D9  E9 05 16 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_a:
004598DE  6A 02                     PUSH 0x2
004598E0  8B CB                     MOV ECX,EBX
004598E2  E8 01 AD FA FF            CALL 0x004045e8
004598E7  8B F8                     MOV EDI,EAX
004598E9  83 FF FF                  CMP EDI,-0x1
004598EC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004598EF  75 1B                     JNZ 0x0045990c
004598F1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004598F7  68 5E 11 00 00            PUSH 0x115e
004598FC  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459901  51                        PUSH ECX
00459902  68 FF FF 00 00            PUSH 0xffff
00459907  E8 34 C5 24 00            CALL 0x006a5e40
LAB_0045990c:
0045990C  3B FE                     CMP EDI,ESI
0045990E  0F 85 D9 15 00 00         JNZ 0x0045aeed
00459914  56                        PUSH ESI
00459915  8B CB                     MOV ECX,EBX
00459917  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459921  E8 05 A1 FA FF            CALL 0x00403a2b
00459926  83 F8 FF                  CMP EAX,-0x1
00459929  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0045992C  0F 85 BB 15 00 00         JNZ 0x0045aeed
00459932  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459938  68 63 11 00 00            PUSH 0x1163
0045993D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459942  52                        PUSH EDX
00459943  E9 9B 15 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_9:
00459948  6A 02                     PUSH 0x2
0045994A  8B CB                     MOV ECX,EBX
0045994C  E8 73 BC FA FF            CALL 0x004055c4
00459951  8B F8                     MOV EDI,EAX
00459953  83 FF FF                  CMP EDI,-0x1
00459956  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459959  75 1A                     JNZ 0x00459975
0045995B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459960  68 68 11 00 00            PUSH 0x1168
00459965  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045996A  50                        PUSH EAX
0045996B  68 FF FF 00 00            PUSH 0xffff
00459970  E8 CB C4 24 00            CALL 0x006a5e40
LAB_00459975:
00459975  3B FE                     CMP EDI,ESI
00459977  0F 85 70 15 00 00         JNZ 0x0045aeed
0045997D  56                        PUSH ESI
0045997E  8B CB                     MOV ECX,EBX
00459980  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
0045998A  E8 9C A0 FA FF            CALL 0x00403a2b
0045998F  83 F8 FF                  CMP EAX,-0x1
00459992  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459995  0F 85 52 15 00 00         JNZ 0x0045aeed
0045999B  68 6D 11 00 00            PUSH 0x116d
004599A0  E9 32 15 00 00            JMP 0x0045aed7
switchD_0045911d::caseD_16:
004599A5  6A 02                     PUSH 0x2
004599A7  8B CB                     MOV ECX,EBX
004599A9  E8 7A 94 FA FF            CALL 0x00402e28
004599AE  8B F8                     MOV EDI,EAX
004599B0  83 FF FF                  CMP EDI,-0x1
004599B3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004599B6  75 1B                     JNZ 0x004599d3
004599B8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004599BE  68 72 11 00 00            PUSH 0x1172
004599C3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004599C8  52                        PUSH EDX
004599C9  68 FF FF 00 00            PUSH 0xffff
004599CE  E8 6D C4 24 00            CALL 0x006a5e40
LAB_004599d3:
004599D3  3B FE                     CMP EDI,ESI
004599D5  0F 85 12 15 00 00         JNZ 0x0045aeed
004599DB  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004599DE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004599E4  50                        PUSH EAX
004599E5  E8 DB 83 FA FF            CALL 0x00401dc5
004599EA  3B C6                     CMP EAX,ESI
004599EC  74 33                     JZ 0x00459a21
004599EE  C7 85 78 FF FF FF 94 5D 00 00  MOV dword ptr [EBP + 0xffffff78],0x5d94
004599F8  66 8B 4B 24               MOV CX,word ptr [EBX + 0x24]
004599FC  66 89 8D 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],CX
00459A03  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
00459A07  66 89 95 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],DX
00459A0E  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00459A11  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
00459A14  8B 10                     MOV EDX,dword ptr [EAX]
00459A16  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
00459A1C  51                        PUSH ECX
00459A1D  8B C8                     MOV ECX,EAX
00459A1F  FF 12                     CALL dword ptr [EDX]
LAB_00459a21:
00459A21  56                        PUSH ESI
00459A22  8B CB                     MOV ECX,EBX
00459A24  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459A2E  E8 F8 9F FA FF            CALL 0x00403a2b
00459A33  83 F8 FF                  CMP EAX,-0x1
00459A36  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459A39  0F 85 AE 14 00 00         JNZ 0x0045aeed
00459A3F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459A45  68 7F 11 00 00            PUSH 0x117f
00459A4A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459A4F  52                        PUSH EDX
00459A50  E9 8E 14 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_15:
00459A55  6A 02                     PUSH 0x2
00459A57  8B CB                     MOV ECX,EBX
00459A59  E8 22 BE FA FF            CALL 0x00405880
00459A5E  8B F8                     MOV EDI,EAX
00459A60  83 FF FF                  CMP EDI,-0x1
00459A63  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459A66  75 1A                     JNZ 0x00459a82
00459A68  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459A6D  68 84 11 00 00            PUSH 0x1184
00459A72  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459A77  50                        PUSH EAX
00459A78  68 FF FF 00 00            PUSH 0xffff
00459A7D  E8 BE C3 24 00            CALL 0x006a5e40
LAB_00459a82:
00459A82  3B FE                     CMP EDI,ESI
00459A84  0F 85 63 14 00 00         JNZ 0x0045aeed
00459A8A  56                        PUSH ESI
00459A8B  8B CB                     MOV ECX,EBX
00459A8D  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459A97  E8 8F 9F FA FF            CALL 0x00403a2b
00459A9C  83 F8 FF                  CMP EAX,-0x1
00459A9F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459AA2  0F 85 45 14 00 00         JNZ 0x0045aeed
00459AA8  68 89 11 00 00            PUSH 0x1189
00459AAD  E9 25 14 00 00            JMP 0x0045aed7
switchD_0045911d::caseD_17:
00459AB2  6A 02                     PUSH 0x2
00459AB4  8B CB                     MOV ECX,EBX
00459AB6  E8 53 AD FA FF            CALL 0x0040480e
00459ABB  8B F8                     MOV EDI,EAX
00459ABD  83 FF FF                  CMP EDI,-0x1
00459AC0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459AC3  75 1B                     JNZ 0x00459ae0
00459AC5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459ACB  68 8E 11 00 00            PUSH 0x118e
00459AD0  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459AD5  52                        PUSH EDX
00459AD6  68 FF FF 00 00            PUSH 0xffff
00459ADB  E8 60 C3 24 00            CALL 0x006a5e40
LAB_00459ae0:
00459AE0  3B FE                     CMP EDI,ESI
00459AE2  0F 85 05 14 00 00         JNZ 0x0045aeed
00459AE8  56                        PUSH ESI
00459AE9  8B CB                     MOV ECX,EBX
00459AEB  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459AF5  E8 31 9F FA FF            CALL 0x00403a2b
00459AFA  83 F8 FF                  CMP EAX,-0x1
00459AFD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459B00  0F 85 E7 13 00 00         JNZ 0x0045aeed
00459B06  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459B0B  68 93 11 00 00            PUSH 0x1193
00459B10  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459B15  50                        PUSH EAX
00459B16  E9 C8 13 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_b:
00459B1B  6A 02                     PUSH 0x2
00459B1D  8B CB                     MOV ECX,EBX
00459B1F  E8 D7 79 FA FF            CALL 0x004014fb
00459B24  8B F8                     MOV EDI,EAX
00459B26  83 FF FF                  CMP EDI,-0x1
00459B29  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459B2C  75 1B                     JNZ 0x00459b49
00459B2E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00459B34  68 98 11 00 00            PUSH 0x1198
00459B39  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459B3E  51                        PUSH ECX
00459B3F  68 FF FF 00 00            PUSH 0xffff
00459B44  E8 F7 C2 24 00            CALL 0x006a5e40
LAB_00459b49:
00459B49  3B FE                     CMP EDI,ESI
00459B4B  0F 85 9C 13 00 00         JNZ 0x0045aeed
00459B51  56                        PUSH ESI
00459B52  8B CB                     MOV ECX,EBX
00459B54  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459B5E  E8 C8 9E FA FF            CALL 0x00403a2b
00459B63  83 F8 FF                  CMP EAX,-0x1
00459B66  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459B69  0F 85 7E 13 00 00         JNZ 0x0045aeed
00459B6F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459B75  68 9D 11 00 00            PUSH 0x119d
00459B7A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459B7F  52                        PUSH EDX
00459B80  E9 5E 13 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_12:
00459B85  6A 02                     PUSH 0x2
00459B87  8B CB                     MOV ECX,EBX
00459B89  E8 91 A0 FA FF            CALL 0x00403c1f
00459B8E  8B F8                     MOV EDI,EAX
00459B90  83 FF FF                  CMP EDI,-0x1
00459B93  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459B96  75 1A                     JNZ 0x00459bb2
00459B98  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459B9D  68 A2 11 00 00            PUSH 0x11a2
00459BA2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459BA7  50                        PUSH EAX
00459BA8  68 FF FF 00 00            PUSH 0xffff
00459BAD  E8 8E C2 24 00            CALL 0x006a5e40
LAB_00459bb2:
00459BB2  3B FE                     CMP EDI,ESI
00459BB4  0F 85 33 13 00 00         JNZ 0x0045aeed
00459BBA  56                        PUSH ESI
00459BBB  8B CB                     MOV ECX,EBX
00459BBD  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459BC7  E8 5F 9E FA FF            CALL 0x00403a2b
00459BCC  83 F8 FF                  CMP EAX,-0x1
00459BCF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459BD2  0F 85 15 13 00 00         JNZ 0x0045aeed
00459BD8  68 A7 11 00 00            PUSH 0x11a7
00459BDD  E9 F5 12 00 00            JMP 0x0045aed7
switchD_0045911d::caseD_8:
00459BE2  6A 02                     PUSH 0x2
00459BE4  8B CB                     MOV ECX,EBX
00459BE6  E8 14 B1 FA FF            CALL 0x00404cff
00459BEB  8B F8                     MOV EDI,EAX
00459BED  83 FF FF                  CMP EDI,-0x1
00459BF0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459BF3  75 1B                     JNZ 0x00459c10
00459BF5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459BFB  68 AC 11 00 00            PUSH 0x11ac
00459C00  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459C05  52                        PUSH EDX
00459C06  68 FF FF 00 00            PUSH 0xffff
00459C0B  E8 30 C2 24 00            CALL 0x006a5e40
LAB_00459c10:
00459C10  3B FE                     CMP EDI,ESI
00459C12  0F 85 D5 12 00 00         JNZ 0x0045aeed
00459C18  56                        PUSH ESI
00459C19  8B CB                     MOV ECX,EBX
00459C1B  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459C25  E8 01 9E FA FF            CALL 0x00403a2b
00459C2A  83 F8 FF                  CMP EAX,-0x1
00459C2D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459C30  0F 85 B7 12 00 00         JNZ 0x0045aeed
00459C36  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00459C3B  68 B1 11 00 00            PUSH 0x11b1
00459C40  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459C45  50                        PUSH EAX
00459C46  E9 98 12 00 00            JMP 0x0045aee3
switchD_0045911d::caseD_e:
00459C4B  6A 02                     PUSH 0x2
00459C4D  8B CB                     MOV ECX,EBX
00459C4F  E8 53 A9 FA FF            CALL 0x004045a7
00459C54  8B F8                     MOV EDI,EAX
00459C56  83 FF FF                  CMP EDI,-0x1
00459C59  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00459C5C  75 1B                     JNZ 0x00459c79
00459C5E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00459C64  68 B6 11 00 00            PUSH 0x11b6
00459C69  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459C6E  51                        PUSH ECX
00459C6F  68 FF FF 00 00            PUSH 0xffff
00459C74  E8 C7 C1 24 00            CALL 0x006a5e40
LAB_00459c79:
00459C79  3B FE                     CMP EDI,ESI
00459C7B  0F 85 6C 12 00 00         JNZ 0x0045aeed
00459C81  56                        PUSH ESI
00459C82  8B CB                     MOV ECX,EBX
00459C84  C7 83 5D 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x45d],0x3
00459C8E  E8 98 9D FA FF            CALL 0x00403a2b
00459C93  83 F8 FF                  CMP EAX,-0x1
00459C96  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00459C99  0F 85 4E 12 00 00         JNZ 0x0045aeed
00459C9F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00459CA5  68 BB 11 00 00            PUSH 0x11bb
00459CAA  68 3C 9D 7A 00            PUSH 0x7a9d3c
00459CAF  52                        PUSH EDX
00459CB0  E9 2E 12 00 00            JMP 0x0045aee3
LAB_00459cb5:
00459CB5  2D 0F 01 00 00            SUB EAX,0x10f
00459CBA  0F 84 B0 09 00 00         JZ 0x0045a670
00459CC0  48                        DEC EAX
00459CC1  0F 85 26 12 00 00         JNZ 0x0045aeed
00459CC7  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
00459CCA  8B 8B 42 07 00 00         MOV ECX,dword ptr [EBX + 0x742]
00459CD0  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00459CD3  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00459CD6  8B 07                     MOV EAX,dword ptr [EDI]
00459CD8  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
00459CDB  B8 01 00 00 00            MOV EAX,0x1
00459CE0  3B C8                     CMP ECX,EAX
00459CE2  0F 84 05 12 00 00         JZ 0x0045aeed
00459CE8  83 BB 5D 04 00 00 08      CMP dword ptr [EBX + 0x45d],0x8
00459CEF  75 0F                     JNZ 0x00459d00
00459CF1  83 BB E7 06 00 00 02      CMP dword ptr [EBX + 0x6e7],0x2
00459CF8  74 06                     JZ 0x00459d00
00459CFA  89 83 E7 06 00 00         MOV dword ptr [EBX + 0x6e7],EAX
LAB_00459d00:
00459D00  8B 83 86 07 00 00         MOV EAX,dword ptr [EBX + 0x786]
00459D06  3B C6                     CMP EAX,ESI
00459D08  7E 21                     JLE 0x00459d2b
00459D0A  83 F8 64                  CMP EAX,0x64
00459D0D  7F 1C                     JG 0x00459d2b
00459D0F  8B 0F                     MOV ECX,dword ptr [EDI]
00459D11  0F AF C1                  IMUL EAX,ECX
00459D14  8B D0                     MOV EDX,EAX
00459D16  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00459D1B  F7 EA                     IMUL EDX
00459D1D  C1 FA 05                  SAR EDX,0x5
00459D20  8B C2                     MOV EAX,EDX
00459D22  C1 E8 1F                  SHR EAX,0x1f
00459D25  03 D0                     ADD EDX,EAX
00459D27  2B CA                     SUB ECX,EDX
00459D29  89 0F                     MOV dword ptr [EDI],ECX
LAB_00459d2b:
00459D2B  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00459D2E  83 F8 65                  CMP EAX,0x65
00459D31  0F 84 22 02 00 00         JZ 0x00459f59
00459D37  83 F8 42                  CMP EAX,0x42
00459D3A  0F 85 80 00 00 00         JNZ 0x00459dc0
00459D40  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00459D46  83 F8 09                  CMP EAX,0x9
00459D49  0F 84 9E 11 00 00         JZ 0x0045aeed
00459D4F  83 F8 15                  CMP EAX,0x15
00459D52  0F 84 95 11 00 00         JZ 0x0045aeed
00459D58  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
00459D5B  51                        PUSH ECX
00459D5C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00459D62  E8 50 AC FA FF            CALL 0x004049b7
00459D67  25 FF 00 00 00            AND EAX,0xff
00459D6C  48                        DEC EAX
00459D6D  74 16                     JZ 0x00459d85
00459D6F  48                        DEC EAX
00459D70  74 0B                     JZ 0x00459d7d
00459D72  48                        DEC EAX
00459D73  75 24                     JNZ 0x00459d99
00459D75  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00459D78  6A 6A                     PUSH 0x6a
00459D7A  52                        PUSH EDX
00459D7B  EB 0E                     JMP 0x00459d8b
LAB_00459d7d:
00459D7D  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00459D80  6A 2D                     PUSH 0x2d
00459D82  50                        PUSH EAX
00459D83  EB 06                     JMP 0x00459d8b
LAB_00459d85:
00459D85  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00459D88  6A 2D                     PUSH 0x2d
00459D8A  51                        PUSH ECX
LAB_00459d8b:
00459D8B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00459D91  E8 D5 7A FA FF            CALL 0x0040186b
00459D96  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00459d99:
00459D99  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00459D9C  33 C9                     XOR ECX,ECX
00459D9E  48                        DEC EAX
00459D9F  75 18                     JNZ 0x00459db9
00459DA1  8B 0F                     MOV ECX,dword ptr [EDI]
00459DA3  B8 67 66 66 66            MOV EAX,0x66666667
00459DA8  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
00459DAB  F7 EA                     IMUL EDX
00459DAD  C1 FA 02                  SAR EDX,0x2
00459DB0  8B C2                     MOV EAX,EDX
00459DB2  C1 E8 1F                  SHR EAX,0x1f
00459DB5  03 D0                     ADD EDX,EAX
00459DB7  2B CA                     SUB ECX,EDX
LAB_00459db9:
00459DB9  29 0F                     SUB dword ptr [EDI],ECX
00459DBB  E9 99 01 00 00            JMP 0x00459f59
LAB_00459dc0:
00459DC0  05 65 FF FF FF            ADD EAX,0xffffff65
00459DC5  83 F8 24                  CMP EAX,0x24
00459DC8  77 71                     JA 0x00459e3b
00459DCA  33 C9                     XOR ECX,ECX
00459DCC  8A 88 B0 BA 45 00         MOV CL,byte ptr [EAX + 0x45bab0]
switchD_00459dd2::switchD:
00459DD2  FF 24 8D A8 BA 45 00      JMP dword ptr [ECX*0x4 + 0x45baa8]
switchD_00459dd2::caseD_9b:
00459DD9  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00459DDC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00459DE2  6A 67                     PUSH 0x67
00459DE4  52                        PUSH EDX
00459DE5  E8 81 7A FA FF            CALL 0x0040186b
00459DEA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00459DED  33 C9                     XOR ECX,ECX
00459DEF  48                        DEC EAX
00459DF0  74 2F                     JZ 0x00459e21
00459DF2  48                        DEC EAX
00459DF3  74 17                     JZ 0x00459e0c
00459DF5  48                        DEC EAX
00459DF6  75 41                     JNZ 0x00459e39
00459DF8  8B 0F                     MOV ECX,dword ptr [EDI]
00459DFA  B8 67 66 66 66            MOV EAX,0x66666667
00459DFF  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
00459E06  F7 EA                     IMUL EDX
00459E08  D1 FA                     SAR EDX,0x1
00459E0A  EB 24                     JMP 0x00459e30
LAB_00459e0c:
00459E0C  8B 0F                     MOV ECX,dword ptr [EDI]
00459E0E  B8 67 66 66 66            MOV EAX,0x66666667
00459E13  8B D1                     MOV EDX,ECX
00459E15  C1 E2 04                  SHL EDX,0x4
00459E18  03 D1                     ADD EDX,ECX
00459E1A  F7 EA                     IMUL EDX
00459E1C  C1 FA 03                  SAR EDX,0x3
00459E1F  EB 0F                     JMP 0x00459e30
LAB_00459e21:
00459E21  8B 0F                     MOV ECX,dword ptr [EDI]
00459E23  B8 67 66 66 66            MOV EAX,0x66666667
00459E28  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
00459E2B  F7 EA                     IMUL EDX
00459E2D  C1 FA 02                  SAR EDX,0x2
LAB_00459e30:
00459E30  8B C2                     MOV EAX,EDX
00459E32  C1 E8 1F                  SHR EAX,0x1f
00459E35  03 D0                     ADD EDX,EAX
00459E37  2B CA                     SUB ECX,EDX
LAB_00459e39:
00459E39  29 0F                     SUB dword ptr [EDI],ECX
switchD_00459dd2::caseD_a1:
00459E3B  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
00459E3E  51                        PUSH ECX
00459E3F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00459E45  E8 6D AB FA FF            CALL 0x004049b7
00459E4A  25 FF 00 00 00            AND EAX,0xff
00459E4F  48                        DEC EAX
00459E50  74 19                     JZ 0x00459e6b
00459E52  48                        DEC EAX
00459E53  74 0B                     JZ 0x00459e60
00459E55  48                        DEC EAX
00459E56  75 27                     JNZ 0x00459e7f
00459E58  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00459E5B  6A 65                     PUSH 0x65
00459E5D  52                        PUSH EDX
00459E5E  EB 11                     JMP 0x00459e71
LAB_00459e60:
00459E60  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00459E63  68 81 00 00 00            PUSH 0x81
00459E68  50                        PUSH EAX
00459E69  EB 06                     JMP 0x00459e71
LAB_00459e6b:
00459E6B  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00459E6E  6A 04                     PUSH 0x4
00459E70  51                        PUSH ECX
LAB_00459e71:
00459E71  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00459E77  E8 EF 79 FA FF            CALL 0x0040186b
00459E7C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00459e7f:
00459E7F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00459E82  33 C9                     XOR ECX,ECX
00459E84  48                        DEC EAX
00459E85  74 1A                     JZ 0x00459ea1
00459E87  48                        DEC EAX
00459E88  74 0E                     JZ 0x00459e98
00459E8A  48                        DEC EAX
00459E8B  75 30                     JNZ 0x00459ebd
00459E8D  8B 0F                     MOV ECX,dword ptr [EDI]
00459E8F  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
00459E96  EB 12                     JMP 0x00459eaa
LAB_00459e98:
00459E98  8B 0F                     MOV ECX,dword ptr [EDI]
00459E9A  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00459E9D  D1 E2                     SHL EDX,0x1
00459E9F  EB 09                     JMP 0x00459eaa
LAB_00459ea1:
00459EA1  8B 0F                     MOV ECX,dword ptr [EDI]
00459EA3  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
LAB_00459eaa:
00459EAA  B8 67 66 66 66            MOV EAX,0x66666667
00459EAF  F7 EA                     IMUL EDX
00459EB1  C1 FA 02                  SAR EDX,0x2
00459EB4  8B C2                     MOV EAX,EDX
00459EB6  C1 E8 1F                  SHR EAX,0x1f
00459EB9  03 D0                     ADD EDX,EAX
00459EBB  2B CA                     SUB ECX,EDX
LAB_00459ebd:
00459EBD  8B 17                     MOV EDX,dword ptr [EDI]
00459EBF  2B D1                     SUB EDX,ECX
00459EC1  89 17                     MOV dword ptr [EDI],EDX
00459EC3  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00459EC6  3D 9A 00 00 00            CMP EAX,0x9a
00459ECB  75 58                     JNZ 0x00459f25
00459ECD  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00459ED0  89 83 72 07 00 00         MOV dword ptr [EBX + 0x772],EAX
00459ED6  8B 8B 76 07 00 00         MOV ECX,dword ptr [EBX + 0x776]
00459EDC  83 F9 02                  CMP ECX,0x2
00459EDF  7D 1F                     JGE 0x00459f00
00459EE1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00459EE7  68 93 00 00 00            PUSH 0x93
00459EEC  50                        PUSH EAX
00459EED  E8 79 79 FA FF            CALL 0x0040186b
00459EF2  85 C0                     TEST EAX,EAX
00459EF4  7E 0A                     JLE 0x00459f00
00459EF6  C7 83 76 07 00 00 02 00 00 00  MOV dword ptr [EBX + 0x776],0x2
LAB_00459f00:
00459F00  39 B3 6E 07 00 00         CMP dword ptr [EBX + 0x76e],ESI
00459F06  7D 06                     JGE 0x00459f0e
00459F08  89 B3 6E 07 00 00         MOV dword ptr [EBX + 0x76e],ESI
LAB_00459f0e:
00459F0E  8B 13                     MOV EDX,dword ptr [EBX]
00459F10  8B CB                     MOV ECX,EBX
00459F12  FF 52 0C                  CALL dword ptr [EDX + 0xc]
00459F15  83 F8 03                  CMP EAX,0x3
00459F18  75 0B                     JNZ 0x00459f25
00459F1A  8B 03                     MOV EAX,dword ptr [EBX]
00459F1C  56                        PUSH ESI
00459F1D  8B CB                     MOV ECX,EBX
00459F1F  FF 90 C8 00 00 00         CALL dword ptr [EAX + 0xc8]
LAB_00459f25:
00459F25  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00459F28  3D AD 00 00 00            CMP EAX,0xad
00459F2D  74 07                     JZ 0x00459f36
00459F2F  3D A1 00 00 00            CMP EAX,0xa1
00459F34  75 23                     JNZ 0x00459f59
LAB_00459f36:
00459F36  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00459F3C  83 F8 09                  CMP EAX,0x9
00459F3F  0F 84 A8 0F 00 00         JZ 0x0045aeed
00459F45  83 F8 15                  CMP EAX,0x15
00459F48  0F 84 9F 0F 00 00         JZ 0x0045aeed
00459F4E  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
00459F51  51                        PUSH ECX
00459F52  8B CB                     MOV ECX,EBX
00459F54  E8 BB 9D FA FF            CALL 0x00403d14
LAB_00459f59:
00459F59  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00459F5C  8B 0F                     MOV ECX,dword ptr [EDI]
00459F5E  8B D0                     MOV EDX,EAX
00459F60  2B D1                     SUB EDX,ECX
00459F62  81 FA C8 00 00 00         CMP EDX,0xc8
00459F68  7E 07                     JLE 0x00459f71
00459F6A  05 38 FF FF FF            ADD EAX,0xffffff38
00459F6F  89 07                     MOV dword ptr [EDI],EAX
LAB_00459f71:
00459F71  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
00459F77  3B C6                     CMP EAX,ESI
00459F79  0F 8E 6E 0F 00 00         JLE 0x0045aeed
00459F7F  2B 07                     SUB EAX,dword ptr [EDI]
00459F81  89 83 16 07 00 00         MOV dword ptr [EBX + 0x716],EAX
00459F87  A1 98 17 81 00            MOV EAX,[0x00811798]
00459F8C  3B C6                     CMP EAX,ESI
00459F8E  74 39                     JZ 0x00459fc9
00459F90  81 7F 08 FF 00 00 00      CMP dword ptr [EDI + 0x8],0xff
00459F97  74 30                     JZ 0x00459fc9
00459F99  8B CB                     MOV ECX,EBX
00459F9B  E8 9C 7A FA FF            CALL 0x00401a3c
00459FA0  85 C0                     TEST EAX,EAX
00459FA2  74 25                     JZ 0x00459fc9
00459FA4  39 77 14                  CMP dword ptr [EDI + 0x14],ESI
00459FA7  75 20                     JNZ 0x00459fc9
00459FA9  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00459FAF  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00459FB2  0F BF 53 5D               MOVSX EDX,word ptr [EBX + 0x5d]
00459FB6  50                        PUSH EAX
00459FB7  51                        PUSH ECX
00459FB8  0F BF 43 5B               MOVSX EAX,word ptr [EBX + 0x5b]
00459FBC  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
00459FC2  52                        PUSH EDX
00459FC3  50                        PUSH EAX
00459FC4  E8 FB 88 FA FF            CALL 0x004028c4
LAB_00459fc9:
00459FC9  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
00459FCF  3B CE                     CMP ECX,ESI
00459FD1  74 45                     JZ 0x0045a018
00459FD3  3B FE                     CMP EDI,ESI
00459FD5  74 41                     JZ 0x0045a018
00459FD7  C7 85 78 FF FF FF D5 5D 00 00  MOV dword ptr [EBP + 0xffffff78],0x5dd5
00459FE1  66 8B 53 24               MOV DX,word ptr [EBX + 0x24]
00459FE5  66 89 95 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],DX
00459FEC  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
00459FF0  66 89 85 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],AX
00459FF7  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
00459FFB  66 89 55 80               MOV word ptr [EBP + -0x80],DX
00459FFF  66 8B 47 0C               MOV AX,word ptr [EDI + 0xc]
0045A003  66 89 45 82               MOV word ptr [EBP + -0x7e],AX
0045A007  8B 11                     MOV EDX,dword ptr [ECX]
0045A009  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
0045A00F  50                        PUSH EAX
0045A010  FF 12                     CALL dword ptr [EDX]
0045A012  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
LAB_0045a018:
0045A018  39 B3 16 07 00 00         CMP dword ptr [EBX + 0x716],ESI
0045A01E  0F 8F BF 04 00 00         JG 0x0045a4e3
0045A024  3B CE                     CMP ECX,ESI
0045A026  74 47                     JZ 0x0045a06f
0045A028  3B FE                     CMP EDI,ESI
0045A02A  74 43                     JZ 0x0045a06f
0045A02C  81 3F 10 27 00 00         CMP dword ptr [EDI],0x2710
0045A032  74 3B                     JZ 0x0045a06f
0045A034  C7 85 78 FF FF FF D1 5D 00 00  MOV dword ptr [EBP + 0xffffff78],0x5dd1
0045A03E  66 8B 53 24               MOV DX,word ptr [EBX + 0x24]
0045A042  66 89 95 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],DX
0045A049  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
0045A04D  66 89 85 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],AX
0045A054  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
0045A058  66 89 55 80               MOV word ptr [EBP + -0x80],DX
0045A05C  66 8B 47 0C               MOV AX,word ptr [EDI + 0xc]
0045A060  66 89 45 82               MOV word ptr [EBP + -0x7e],AX
0045A064  8B 11                     MOV EDX,dword ptr [ECX]
0045A066  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
0045A06C  50                        PUSH EAX
0045A06D  FF 12                     CALL dword ptr [EDX]
LAB_0045a06f:
0045A06F  C7 83 C0 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x2c0],0x1
0045A079  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0045A07F  48                        DEC EAX
0045A080  83 F8 27                  CMP EAX,0x27
0045A083  0F 87 61 01 00 00         JA 0x0045a1ea
switchD_0045a089::switchD:
0045A089  FF 24 85 D8 BA 45 00      JMP dword ptr [EAX*0x4 + 0x45bad8]
switchD_0045a089::caseD_1:
0045A090  B8 CB 00 00 00            MOV EAX,0xcb
0045A095  E9 52 01 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_2:
0045A09A  B8 D1 00 00 00            MOV EAX,0xd1
0045A09F  E9 48 01 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_3:
0045A0A4  B8 D7 00 00 00            MOV EAX,0xd7
0045A0A9  E9 3E 01 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_4:
0045A0AE  B8 DD 00 00 00            MOV EAX,0xdd
0045A0B3  E9 34 01 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_5:
0045A0B8  B8 E3 00 00 00            MOV EAX,0xe3
0045A0BD  E9 2A 01 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_6:
0045A0C2  B8 EA 00 00 00            MOV EAX,0xea
0045A0C7  E9 20 01 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_7:
0045A0CC  B8 F1 00 00 00            MOV EAX,0xf1
0045A0D1  E9 16 01 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_8:
0045A0D6  B8 F8 00 00 00            MOV EAX,0xf8
0045A0DB  E9 0C 01 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_9:
0045A0E0  B8 00 01 00 00            MOV EAX,0x100
0045A0E5  E9 02 01 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_a:
0045A0EA  B8 05 01 00 00            MOV EAX,0x105
0045A0EF  E9 F8 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_b:
0045A0F4  B8 0B 01 00 00            MOV EAX,0x10b
0045A0F9  E9 EE 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_c:
0045A0FE  B8 11 01 00 00            MOV EAX,0x111
0045A103  E9 E4 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_d:
0045A108  B8 2F 01 00 00            MOV EAX,0x12f
0045A10D  E9 DA 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_e:
0045A112  B8 35 01 00 00            MOV EAX,0x135
0045A117  E9 D0 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_f:
0045A11C  B8 3B 01 00 00            MOV EAX,0x13b
0045A121  E9 C6 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_10:
0045A126  B8 41 01 00 00            MOV EAX,0x141
0045A12B  E9 BC 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_11:
0045A130  B8 47 01 00 00            MOV EAX,0x147
0045A135  E9 B2 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_12:
0045A13A  B8 4E 01 00 00            MOV EAX,0x14e
0045A13F  E9 A8 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_13:
0045A144  B8 55 01 00 00            MOV EAX,0x155
0045A149  E9 9E 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_14:
0045A14E  B8 5C 01 00 00            MOV EAX,0x15c
0045A153  E9 94 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_15:
0045A158  B8 64 01 00 00            MOV EAX,0x164
0045A15D  E9 8A 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_16:
0045A162  B8 69 01 00 00            MOV EAX,0x169
0045A167  E9 80 00 00 00            JMP 0x0045a1ec
switchD_0045a089::caseD_17:
0045A16C  B8 71 01 00 00            MOV EAX,0x171
0045A171  EB 79                     JMP 0x0045a1ec
switchD_0045a089::caseD_18:
0045A173  B8 77 01 00 00            MOV EAX,0x177
0045A178  EB 72                     JMP 0x0045a1ec
switchD_0045a089::caseD_19:
0045A17A  B8 93 01 00 00            MOV EAX,0x193
0045A17F  EB 6B                     JMP 0x0045a1ec
switchD_0045a089::caseD_1a:
0045A181  B8 9B 01 00 00            MOV EAX,0x19b
0045A186  EB 64                     JMP 0x0045a1ec
switchD_0045a089::caseD_1b:
0045A188  B8 A3 01 00 00            MOV EAX,0x1a3
0045A18D  EB 5D                     JMP 0x0045a1ec
switchD_0045a089::caseD_1c:
0045A18F  B8 A9 01 00 00            MOV EAX,0x1a9
0045A194  EB 56                     JMP 0x0045a1ec
switchD_0045a089::caseD_1d:
0045A196  B8 AF 01 00 00            MOV EAX,0x1af
0045A19B  EB 4F                     JMP 0x0045a1ec
switchD_0045a089::caseD_1e:
0045A19D  B8 B6 01 00 00            MOV EAX,0x1b6
0045A1A2  EB 48                     JMP 0x0045a1ec
switchD_0045a089::caseD_1f:
0045A1A4  B8 BC 01 00 00            MOV EAX,0x1bc
0045A1A9  EB 41                     JMP 0x0045a1ec
switchD_0045a089::caseD_20:
0045A1AB  B8 C2 01 00 00            MOV EAX,0x1c2
0045A1B0  EB 3A                     JMP 0x0045a1ec
switchD_0045a089::caseD_21:
0045A1B2  B8 C8 01 00 00            MOV EAX,0x1c8
0045A1B7  EB 33                     JMP 0x0045a1ec
switchD_0045a089::caseD_22:
0045A1B9  B8 CF 01 00 00            MOV EAX,0x1cf
0045A1BE  EB 2C                     JMP 0x0045a1ec
switchD_0045a089::caseD_23:
0045A1C0  B8 D6 01 00 00            MOV EAX,0x1d6
0045A1C5  EB 25                     JMP 0x0045a1ec
switchD_0045a089::caseD_24:
0045A1C7  B8 DC 01 00 00            MOV EAX,0x1dc
0045A1CC  EB 1E                     JMP 0x0045a1ec
switchD_0045a089::caseD_25:
0045A1CE  B8 7D 01 00 00            MOV EAX,0x17d
0045A1D3  EB 17                     JMP 0x0045a1ec
switchD_0045a089::caseD_26:
0045A1D5  B8 17 01 00 00            MOV EAX,0x117
0045A1DA  EB 10                     JMP 0x0045a1ec
switchD_0045a089::caseD_27:
0045A1DC  B8 83 01 00 00            MOV EAX,0x183
0045A1E1  EB 09                     JMP 0x0045a1ec
switchD_0045a089::caseD_28:
0045A1E3  B8 E2 01 00 00            MOV EAX,0x1e2
0045A1E8  EB 02                     JMP 0x0045a1ec
switchD_0045a089::default:
0045A1EA  33 C0                     XOR EAX,EAX
LAB_0045a1ec:
0045A1EC  8B 13                     MOV EDX,dword ptr [EBX]
0045A1EE  50                        PUSH EAX
0045A1EF  6A 02                     PUSH 0x2
0045A1F1  8B CB                     MOV ECX,EBX
0045A1F3  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
0045A1F9  8B CB                     MOV ECX,EBX
0045A1FB  E8 0B 9A FA FF            CALL 0x00403c0b
0045A200  8B CB                     MOV ECX,EBX
0045A202  E8 C7 81 FA FF            CALL 0x004023ce
0045A207  66 8B 83 71 06 00 00      MOV AX,word ptr [EBX + 0x671]
0045A20E  66 8B 8B 73 06 00 00      MOV CX,word ptr [EBX + 0x673]
0045A215  66 89 45 88               MOV word ptr [EBP + -0x78],AX
0045A219  66 8B 83 6F 06 00 00      MOV AX,word ptr [EBX + 0x66f]
0045A220  66 3B C6                  CMP AX,SI
0045A223  7C 57                     JL 0x0045a27c
0045A225  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0045A22C  7D 4E                     JGE 0x0045a27c
0045A22E  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0045A231  66 3B D6                  CMP DX,SI
0045A234  7C 46                     JL 0x0045a27c
0045A236  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0045A23D  7D 3D                     JGE 0x0045a27c
0045A23F  66 3B CE                  CMP CX,SI
0045A242  7C 38                     JL 0x0045a27c
0045A244  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0045A24B  7D 2F                     JGE 0x0045a27c
0045A24D  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0045A254  0F BF C9                  MOVSX ECX,CX
0045A257  0F AF F9                  IMUL EDI,ECX
0045A25A  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0045A261  0F BF D2                  MOVSX EDX,DX
0045A264  0F AF CA                  IMUL ECX,EDX
0045A267  0F BF C0                  MOVSX EAX,AX
0045A26A  03 F9                     ADD EDI,ECX
0045A26C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0045A272  03 F8                     ADD EDI,EAX
0045A274  8B 0C F9                  MOV ECX,dword ptr [ECX + EDI*0x8]
0045A277  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0045A27A  EB 02                     JMP 0x0045a27e
LAB_0045a27c:
0045A27C  33 C9                     XOR ECX,ECX
LAB_0045a27e:
0045A27E  3B CE                     CMP ECX,ESI
0045A280  74 25                     JZ 0x0045a2a7
0045A282  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0045A285  8B 83 79 06 00 00         MOV EAX,dword ptr [EBX + 0x679]
0045A28B  3B D0                     CMP EDX,EAX
0045A28D  75 18                     JNZ 0x0045a2a7
0045A28F  83 BB 75 06 00 00 63      CMP dword ptr [EBX + 0x675],0x63
0045A296  75 0F                     JNZ 0x0045a2a7
0045A298  81 79 20 E8 03 00 00      CMP dword ptr [ECX + 0x20],0x3e8
0045A29F  75 06                     JNZ 0x0045a2a7
0045A2A1  53                        PUSH EBX
0045A2A2  E8 9C 84 FA FF            CALL 0x00402743
LAB_0045a2a7:
0045A2A7  8B CB                     MOV ECX,EBX
0045A2A9  E8 F2 9F FA FF            CALL 0x004042a0
0045A2AE  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
0045A2B2  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0045A2B5  6A 01                     PUSH 0x1
0045A2B7  50                        PUSH EAX
0045A2B8  51                        PUSH ECX
0045A2B9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045A2BF  E8 64 6D FA FF            CALL 0x00401028
0045A2C4  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
0045A2C8  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0045A2CB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045A2D1  56                        PUSH ESI
0045A2D2  52                        PUSH EDX
0045A2D3  50                        PUSH EAX
0045A2D4  E8 4F 6D FA FF            CALL 0x00401028
0045A2D9  8B CB                     MOV ECX,EBX
0045A2DB  E8 EA 84 FA FF            CALL 0x004027ca
0045A2E0  8B 83 CA 07 00 00         MOV EAX,dword ptr [EBX + 0x7ca]
0045A2E6  3B C6                     CMP EAX,ESI
0045A2E8  0F 84 96 00 00 00         JZ 0x0045a384
0045A2EE  8D 4D AC                  LEA ECX,[EBP + -0x54]
0045A2F1  51                        PUSH ECX
0045A2F2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045A2F8  50                        PUSH EAX
0045A2F9  E8 D2 BF 28 00            CALL 0x006e62d0
0045A2FE  83 F8 FC                  CMP EAX,-0x4
0045A301  75 3E                     JNZ 0x0045a341
0045A303  68 3C 9F 7A 00            PUSH 0x7a9f3c
0045A308  68 CC 4C 7A 00            PUSH 0x7a4ccc
0045A30D  56                        PUSH ESI
0045A30E  56                        PUSH ESI
0045A30F  68 96 12 00 00            PUSH 0x1296
0045A314  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045A319  E8 B2 31 25 00            CALL 0x006ad4d0
0045A31E  83 C4 18                  ADD ESP,0x18
0045A321  85 C0                     TEST EAX,EAX
0045A323  74 01                     JZ 0x0045a326
0045A325  CC                        INT3
LAB_0045a326:
0045A326  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045A32C  68 97 12 00 00            PUSH 0x1297
0045A331  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045A336  52                        PUSH EDX
0045A337  68 FF FF 00 00            PUSH 0xffff
0045A33C  E8 FF BA 24 00            CALL 0x006a5e40
LAB_0045a341:
0045A341  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0045A344  B9 07 00 00 00            MOV ECX,0x7
0045A349  8D BD E0 FE FF FF         LEA EDI,[EBP + 0xfffffee0]
0045A34F  8D 85 E0 FE FF FF         LEA EAX,[EBP + 0xfffffee0]
0045A355  F3 A5                     MOVSD.REP ES:EDI,ESI
0045A357  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0045A35A  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0045A360  C7 85 E0 FE FF FF 6B 71 01 00  MOV dword ptr [EBP + 0xfffffee0],0x1716b
0045A36A  C7 85 78 FF FF FF 10 01 00 00  MOV dword ptr [EBP + 0xffffff78],0x110
0045A374  8B 11                     MOV EDX,dword ptr [ECX]
0045A376  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
0045A37C  50                        PUSH EAX
0045A37D  FF 12                     CALL dword ptr [EDX]
0045A37F  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0045A382  33 F6                     XOR ESI,ESI
LAB_0045a384:
0045A384  8B CB                     MOV ECX,EBX
0045A386  E8 84 85 FA FF            CALL 0x0040290f
0045A38B  8B CB                     MOV ECX,EBX
0045A38D  E8 5A B7 FA FF            CALL 0x00405aec
0045A392  8B CB                     MOV ECX,EBX
0045A394  E8 58 9E FA FF            CALL 0x004041f1
0045A399  66 8B 83 A9 06 00 00      MOV AX,word ptr [EBX + 0x6a9]
0045A3A0  66 8B 8B AD 06 00 00      MOV CX,word ptr [EBX + 0x6ad]
0045A3A7  66 8B 93 AB 06 00 00      MOV DX,word ptr [EBX + 0x6ab]
0045A3AE  66 3B C6                  CMP AX,SI
0045A3B1  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
0045A3B4  7C 52                     JL 0x0045a408
0045A3B6  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0045A3BD  7D 49                     JGE 0x0045a408
0045A3BF  66 3B D6                  CMP DX,SI
0045A3C2  7C 44                     JL 0x0045a408
0045A3C4  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0045A3CB  7D 3B                     JGE 0x0045a408
0045A3CD  66 3B CE                  CMP CX,SI
0045A3D0  7C 36                     JL 0x0045a408
0045A3D2  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0045A3D9  7D 2D                     JGE 0x0045a408
0045A3DB  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0045A3E2  0F BF C9                  MOVSX ECX,CX
0045A3E5  0F AF C1                  IMUL EAX,ECX
0045A3E8  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0045A3EF  0F BF D2                  MOVSX EDX,DX
0045A3F2  0F AF CA                  IMUL ECX,EDX
0045A3F5  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0045A3FB  03 C1                     ADD EAX,ECX
0045A3FD  0F BF 4D 88               MOVSX ECX,word ptr [EBP + -0x78]
0045A401  03 C1                     ADD EAX,ECX
0045A403  8B 0C C2                  MOV ECX,dword ptr [EDX + EAX*0x8]
0045A406  EB 02                     JMP 0x0045a40a
LAB_0045a408:
0045A408  33 C9                     XOR ECX,ECX
LAB_0045a40a:
0045A40A  3B CE                     CMP ECX,ESI
0045A40C  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0045A40F  74 16                     JZ 0x0045a427
0045A411  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0045A414  8B 93 AF 06 00 00         MOV EDX,dword ptr [EBX + 0x6af]
0045A41A  3B C2                     CMP EAX,EDX
0045A41C  75 09                     JNZ 0x0045a427
0045A41E  E8 F7 6F FA FF            CALL 0x0040141a
0045A423  85 C0                     TEST EAX,EAX
0045A425  75 16                     JNZ 0x0045a43d
LAB_0045a427:
0045A427  8B 93 AF 06 00 00         MOV EDX,dword ptr [EBX + 0x6af]
0045A42D  8D 4D DC                  LEA ECX,[EBP + -0x24]
0045A430  51                        PUSH ECX
0045A431  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045A437  52                        PUSH EDX
0045A438  E8 93 BE 28 00            CALL 0x006e62d0
LAB_0045a43d:
0045A43D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0045A440  3B CE                     CMP ECX,ESI
0045A442  74 25                     JZ 0x0045a469
0045A444  81 79 20 E8 03 00 00      CMP dword ptr [ECX + 0x20],0x3e8
0045A44B  75 1C                     JNZ 0x0045a469
0045A44D  53                        PUSH EBX
0045A44E  E8 EB B9 FA FF            CALL 0x00405e3e
0045A453  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0045A456  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0045A459  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
0045A45F  3B CA                     CMP ECX,EDX
0045A461  75 06                     JNZ 0x0045a469
0045A463  89 B0 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],ESI
LAB_0045a469:
0045A469  83 BB 5D 04 00 00 13      CMP dword ptr [EBX + 0x45d],0x13
0045A470  75 2B                     JNZ 0x0045a49d
0045A472  8B 83 24 05 00 00         MOV EAX,dword ptr [EBX + 0x524]
0045A478  3B C6                     CMP EAX,ESI
0045A47A  74 21                     JZ 0x0045a49d
0045A47C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045A482  8D 55 DC                  LEA EDX,[EBP + -0x24]
0045A485  52                        PUSH EDX
0045A486  50                        PUSH EAX
0045A487  E8 44 BE 28 00            CALL 0x006e62d0
0045A48C  83 F8 FC                  CMP EAX,-0x4
0045A48F  74 0C                     JZ 0x0045a49d
0045A491  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0045A494  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0045A497  50                        PUSH EAX
0045A498  E8 3C 8D FA FF            CALL 0x004031d9
LAB_0045a49d:
0045A49D  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0045A4A0  33 D2                     XOR EDX,EDX
0045A4A2  66 8B 53 18               MOV DX,word ptr [EBX + 0x18]
0045A4A6  C1 E9 10                  SHR ECX,0x10
0045A4A9  81 E1 FF 00 00 00         AND ECX,0xff
0045A4AF  80 CD 02                  OR CH,0x2
0045A4B2  C1 E1 10                  SHL ECX,0x10
0045A4B5  0B CA                     OR ECX,EDX
0045A4B7  51                        PUSH ECX
0045A4B8  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0045A4BE  E8 BD C2 28 00            CALL 0x006e6780
0045A4C3  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0045A4C6  89 83 26 08 00 00         MOV dword ptr [EBX + 0x826],EAX
0045A4CC  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045A4D2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045A4D8  33 C0                     XOR EAX,EAX
0045A4DA  5F                        POP EDI
0045A4DB  5E                        POP ESI
0045A4DC  5B                        POP EBX
0045A4DD  8B E5                     MOV ESP,EBP
0045A4DF  5D                        POP EBP
0045A4E0  C2 04 00                  RET 0x4
LAB_0045a4e3:
0045A4E3  83 BB 5D 04 00 00 04      CMP dword ptr [EBX + 0x45d],0x4
0045A4EA  0F 85 C0 00 00 00         JNZ 0x0045a5b0
0045A4F0  83 BB 80 05 00 00 05      CMP dword ptr [EBX + 0x580],0x5
0045A4F7  0F 85 B3 00 00 00         JNZ 0x0045a5b0
0045A4FD  66 8B 83 54 05 00 00      MOV AX,word ptr [EBX + 0x554]
0045A504  66 8B 8B 58 05 00 00      MOV CX,word ptr [EBX + 0x558]
0045A50B  66 8B 93 56 05 00 00      MOV DX,word ptr [EBX + 0x556]
0045A512  66 3B C6                  CMP AX,SI
0045A515  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
0045A518  7C 52                     JL 0x0045a56c
0045A51A  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0045A521  7D 49                     JGE 0x0045a56c
0045A523  66 3B D6                  CMP DX,SI
0045A526  7C 44                     JL 0x0045a56c
0045A528  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0045A52F  7D 3B                     JGE 0x0045a56c
0045A531  66 3B CE                  CMP CX,SI
0045A534  7C 36                     JL 0x0045a56c
0045A536  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0045A53D  7D 2D                     JGE 0x0045a56c
0045A53F  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0045A546  0F BF C9                  MOVSX ECX,CX
0045A549  0F AF C1                  IMUL EAX,ECX
0045A54C  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0045A553  0F BF D2                  MOVSX EDX,DX
0045A556  0F AF CA                  IMUL ECX,EDX
0045A559  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0045A55F  03 C1                     ADD EAX,ECX
0045A561  0F BF 4D 88               MOVSX ECX,word ptr [EBP + -0x78]
0045A565  03 C1                     ADD EAX,ECX
0045A567  8B 0C C2                  MOV ECX,dword ptr [EDX + EAX*0x8]
0045A56A  EB 02                     JMP 0x0045a56e
LAB_0045a56c:
0045A56C  33 C9                     XOR ECX,ECX
LAB_0045a56e:
0045A56E  3B CE                     CMP ECX,ESI
0045A570  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0045A573  74 3B                     JZ 0x0045a5b0
0045A575  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0045A578  8B 93 5A 05 00 00         MOV EDX,dword ptr [EBX + 0x55a]
0045A57E  3B C2                     CMP EAX,EDX
0045A580  75 2E                     JNZ 0x0045a5b0
0045A582  8B 93 16 07 00 00         MOV EDX,dword ptr [EBX + 0x716]
0045A588  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0045A58B  52                        PUSH EDX
0045A58C  8B 93 68 05 00 00         MOV EDX,dword ptr [EBX + 0x568]
0045A592  50                        PUSH EAX
0045A593  52                        PUSH EDX
0045A594  E8 3E B1 FA FF            CALL 0x004056d7
0045A599  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045A59F  33 C0                     XOR EAX,EAX
0045A5A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045A5A7  5F                        POP EDI
0045A5A8  5E                        POP ESI
0045A5A9  5B                        POP EBX
0045A5AA  8B E5                     MOV ESP,EBP
0045A5AC  5D                        POP EBP
0045A5AD  C2 04 00                  RET 0x4
LAB_0045a5b0:
0045A5B0  81 7F 08 FF 00 00 00      CMP dword ptr [EDI + 0x8],0xff
0045A5B7  0F 84 30 09 00 00         JZ 0x0045aeed
0045A5BD  66 8B 47 0C               MOV AX,word ptr [EDI + 0xc]
0045A5C1  8A 4F 08                  MOV CL,byte ptr [EDI + 0x8]
0045A5C4  6A 01                     PUSH 0x1
0045A5C6  50                        PUSH EAX
0045A5C7  51                        PUSH ECX
0045A5C8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045A5CE  E8 E7 82 FA FF            CALL 0x004028ba
0045A5D3  3B C6                     CMP EAX,ESI
0045A5D5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0045A5D8  0F 84 0F 09 00 00         JZ 0x0045aeed
0045A5DE  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
0045A5E5  0F 85 02 09 00 00         JNZ 0x0045aeed
0045A5EB  8D 55 F2                  LEA EDX,[EBP + -0xe]
0045A5EE  8D 4D F0                  LEA ECX,[EBP + -0x10]
0045A5F1  52                        PUSH EDX
0045A5F2  8D 55 EE                  LEA EDX,[EBP + -0x12]
0045A5F5  51                        PUSH ECX
0045A5F6  52                        PUSH EDX
0045A5F7  8B C8                     MOV ECX,EAX
0045A5F9  E8 0D B9 FA FF            CALL 0x00405f0b
0045A5FE  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
0045A602  0F BF 4D EE               MOVSX ECX,word ptr [EBP + -0x12]
0045A606  2B C1                     SUB EAX,ECX
0045A608  99                        CDQ
0045A609  33 C2                     XOR EAX,EDX
0045A60B  2B C2                     SUB EAX,EDX
0045A60D  83 F8 06                  CMP EAX,0x6
0045A610  0F 8F D7 08 00 00         JG 0x0045aeed
0045A616  0F BF 43 49               MOVSX EAX,word ptr [EBX + 0x49]
0045A61A  0F BF 55 F0               MOVSX EDX,word ptr [EBP + -0x10]
0045A61E  2B C2                     SUB EAX,EDX
0045A620  99                        CDQ
0045A621  33 C2                     XOR EAX,EDX
0045A623  2B C2                     SUB EAX,EDX
0045A625  83 F8 06                  CMP EAX,0x6
0045A628  0F 8F BF 08 00 00         JG 0x0045aeed
0045A62E  0F BF 43 4B               MOVSX EAX,word ptr [EBX + 0x4b]
0045A632  0F BF 4D F2               MOVSX ECX,word ptr [EBP + -0xe]
0045A636  2B C1                     SUB EAX,ECX
0045A638  99                        CDQ
0045A639  33 C2                     XOR EAX,EDX
0045A63B  2B C2                     SUB EAX,EDX
0045A63D  83 F8 02                  CMP EAX,0x2
0045A640  0F 8F A7 08 00 00         JG 0x0045aeed
0045A646  8B 17                     MOV EDX,dword ptr [EDI]
0045A648  66 8B 47 0C               MOV AX,word ptr [EDI + 0xc]
0045A64C  8A 4F 08                  MOV CL,byte ptr [EDI + 0x8]
0045A64F  52                        PUSH EDX
0045A650  50                        PUSH EAX
0045A651  51                        PUSH ECX
0045A652  8B CB                     MOV ECX,EBX
0045A654  E8 17 77 FA FF            CALL 0x00401d70
0045A659  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045A65F  33 C0                     XOR EAX,EAX
0045A661  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045A667  5F                        POP EDI
0045A668  5E                        POP ESI
0045A669  5B                        POP EBX
0045A66A  8B E5                     MOV ESP,EBP
0045A66C  5D                        POP EBP
0045A66D  C2 04 00                  RET 0x4
LAB_0045a670:
0045A670  8D 55 CC                  LEA EDX,[EBP + -0x34]
0045A673  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0045A679  52                        PUSH EDX
0045A67A  E8 55 72 FA FF            CALL 0x004018d4
0045A67F  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0045A682  8D 45 D8                  LEA EAX,[EBP + -0x28]
0045A685  50                        PUSH EAX
0045A686  8B CB                     MOV ECX,EBX
0045A688  E8 0D 6B FA FF            CALL 0x0040119a
0045A68D  8D 4D D0                  LEA ECX,[EBP + -0x30]
0045A690  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0045A693  51                        PUSH ECX
0045A694  8B CB                     MOV ECX,EBX
0045A696  E8 7A 72 FA FF            CALL 0x00401915
0045A69B  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0045A69E  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0045A6A1  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0045A6A4  03 C2                     ADD EAX,EDX
0045A6A6  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0045A6A9  03 C2                     ADD EAX,EDX
0045A6AB  50                        PUSH EAX
0045A6AC  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
0045A6AF  E8 BC 05 25 00            CALL 0x006aac70
0045A6B4  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0045A6B7  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
0045A6BA  8B D1                     MOV EDX,ECX
0045A6BC  8B F8                     MOV EDI,EAX
0045A6BE  C1 E9 02                  SHR ECX,0x2
0045A6C1  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0045A6C4  F3 A5                     MOVSD.REP ES:EDI,ESI
0045A6C6  8B CA                     MOV ECX,EDX
0045A6C8  83 E1 03                  AND ECX,0x3
0045A6CB  F3 A4                     MOVSB.REP ES:EDI,ESI
0045A6CD  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0045A6D0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0045A6D3  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0045A6D6  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
0045A6D9  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
0045A6DC  8B D1                     MOV EDX,ECX
0045A6DE  C1 E9 02                  SHR ECX,0x2
0045A6E1  F3 A5                     MOVSD.REP ES:EDI,ESI
0045A6E3  8B CA                     MOV ECX,EDX
0045A6E5  83 E1 03                  AND ECX,0x3
0045A6E8  F3 A4                     MOVSB.REP ES:EDI,ESI
0045A6EA  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0045A6ED  89 81 FE 05 00 00         MOV dword ptr [ECX + 0x5fe],EAX
0045A6F3  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0045A6F6  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0045A6F9  89 91 02 06 00 00         MOV dword ptr [ECX + 0x602],EDX
0045A6FF  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
0045A702  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0045A705  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0045A708  03 C6                     ADD EAX,ESI
0045A70A  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
0045A70D  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
0045A710  8B D1                     MOV EDX,ECX
0045A712  C1 E9 02                  SHR ECX,0x2
0045A715  F3 A5                     MOVSD.REP ES:EDI,ESI
0045A717  8B CA                     MOV ECX,EDX
0045A719  83 E1 03                  AND ECX,0x3
0045A71C  F3 A4                     MOVSB.REP ES:EDI,ESI
0045A71E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0045A721  89 81 F6 05 00 00         MOV dword ptr [ECX + 0x5f6],EAX
0045A727  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0045A72A  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0045A72D  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
0045A730  89 82 FA 05 00 00         MOV dword ptr [EDX + 0x5fa],EAX
0045A736  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0045A739  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0045A73C  51                        PUSH ECX
0045A73D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045A743  52                        PUSH EDX
0045A744  50                        PUSH EAX
0045A745  E8 AF 7E FA FF            CALL 0x004025f9
0045A74A  8D 4D C0                  LEA ECX,[EBP + -0x40]
0045A74D  51                        PUSH ECX
0045A74E  E8 0D 09 25 00            CALL 0x006ab060
0045A753  8D 55 C8                  LEA EDX,[EBP + -0x38]
0045A756  52                        PUSH EDX
0045A757  E8 04 09 25 00            CALL 0x006ab060
0045A75C  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0045A75F  50                        PUSH EAX
0045A760  E8 FB 08 25 00            CALL 0x006ab060
0045A765  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0045A768  51                        PUSH ECX
0045A769  E8 F2 08 25 00            CALL 0x006ab060
0045A76E  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045A774  33 C0                     XOR EAX,EAX
0045A776  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045A77C  5F                        POP EDI
0045A77D  5E                        POP ESI
0045A77E  5B                        POP EBX
0045A77F  8B E5                     MOV ESP,EBP
0045A781  5D                        POP EBP
0045A782  C2 04 00                  RET 0x4
LAB_0045a785:
0045A785  3D 28 01 00 00            CMP EAX,0x128
0045A78A  0F 87 57 06 00 00         JA 0x0045ade7
0045A790  0F 84 EB 00 00 00         JZ 0x0045a881
0045A796  2D 21 01 00 00            SUB EAX,0x121
0045A79B  74 40                     JZ 0x0045a7dd
0045A79D  48                        DEC EAX
0045A79E  0F 85 49 07 00 00         JNZ 0x0045aeed
0045A7A4  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
0045A7A7  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0045A7AA  8B 07                     MOV EAX,dword ptr [EDI]
0045A7AC  3B C1                     CMP EAX,ECX
0045A7AE  0F 85 39 07 00 00         JNZ 0x0045aeed
0045A7B4  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0045A7B7  33 C0                     XOR EAX,EAX
0045A7B9  89 8B 82 07 00 00         MOV dword ptr [EBX + 0x782],ECX
0045A7BF  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0045A7C2  89 93 86 07 00 00         MOV dword ptr [EBX + 0x786],EDX
0045A7C8  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045A7CE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045A7D4  5F                        POP EDI
0045A7D5  5E                        POP ESI
0045A7D6  5B                        POP EBX
0045A7D7  8B E5                     MOV ESP,EBP
0045A7D9  5D                        POP EBP
0045A7DA  C2 04 00                  RET 0x4
LAB_0045a7dd:
0045A7DD  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0045A7E3  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
0045A7E6  83 F8 23                  CMP EAX,0x23
0045A7E9  75 4B                     JNZ 0x0045a836
0045A7EB  83 BB 22 07 00 00 14      CMP dword ptr [EBX + 0x722],0x14
0045A7F2  0F 85 F5 06 00 00         JNZ 0x0045aeed
0045A7F8  39 B3 2E 07 00 00         CMP dword ptr [EBX + 0x72e],ESI
0045A7FE  0F 85 E9 06 00 00         JNZ 0x0045aeed
0045A804  C7 83 2E 07 00 00 01 00 00 00  MOV dword ptr [EBX + 0x72e],0x1
0045A80E  8B 03                     MOV EAX,dword ptr [EBX]
0045A810  68 6C 01 00 00            PUSH 0x16c
0045A815  6A 03                     PUSH 0x3
0045A817  8B CB                     MOV ECX,EBX
0045A819  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
0045A81F  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045A825  33 C0                     XOR EAX,EAX
0045A827  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045A82D  5F                        POP EDI
0045A82E  5E                        POP ESI
0045A82F  5B                        POP EBX
0045A830  8B E5                     MOV ESP,EBP
0045A832  5D                        POP EBP
0045A833  C2 04 00                  RET 0x4
LAB_0045a836:
0045A836  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0045A839  89 8B 36 07 00 00         MOV dword ptr [EBX + 0x736],ECX
0045A83F  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
0045A845  83 F8 03                  CMP EAX,0x3
0045A848  0F 84 9F 06 00 00         JZ 0x0045aeed
0045A84E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0045A854  8D 4D B0                  LEA ECX,[EBP + -0x50]
0045A857  51                        PUSH ECX
0045A858  6A 03                     PUSH 0x3
0045A85A  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0045A860  8B CB                     MOV ECX,EBX
0045A862  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0045A865  E8 BC 78 FA FF            CALL 0x00402126
0045A86A  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045A870  33 C0                     XOR EAX,EAX
0045A872  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045A878  5F                        POP EDI
0045A879  5E                        POP ESI
0045A87A  5B                        POP EBX
0045A87B  8B E5                     MOV ESP,EBP
0045A87D  5D                        POP EBP
0045A87E  C2 04 00                  RET 0x4
LAB_0045a881:
0045A881  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
0045A887  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
0045A88A  3B CE                     CMP ECX,ESI
0045A88C  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0045A88F  0F 84 90 00 00 00         JZ 0x0045a925
0045A895  3B FE                     CMP EDI,ESI
0045A897  74 41                     JZ 0x0045a8da
0045A899  C7 85 78 FF FF FF D5 5D 00 00  MOV dword ptr [EBP + 0xffffff78],0x5dd5
0045A8A3  66 8B 53 24               MOV DX,word ptr [EBX + 0x24]
0045A8A7  66 89 95 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],DX
0045A8AE  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
0045A8B2  66 89 85 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],AX
0045A8B9  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
0045A8BD  66 89 55 80               MOV word ptr [EBP + -0x80],DX
0045A8C1  66 8B 47 0C               MOV AX,word ptr [EDI + 0xc]
0045A8C5  66 89 45 82               MOV word ptr [EBP + -0x7e],AX
0045A8C9  8B 11                     MOV EDX,dword ptr [ECX]
0045A8CB  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
0045A8D1  50                        PUSH EAX
0045A8D2  FF 12                     CALL dword ptr [EDX]
0045A8D4  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
LAB_0045a8da:
0045A8DA  3B CE                     CMP ECX,ESI
0045A8DC  74 47                     JZ 0x0045a925
0045A8DE  3B FE                     CMP EDI,ESI
0045A8E0  74 43                     JZ 0x0045a925
0045A8E2  81 3F 10 27 00 00         CMP dword ptr [EDI],0x2710
0045A8E8  74 3B                     JZ 0x0045a925
0045A8EA  C7 85 78 FF FF FF D1 5D 00 00  MOV dword ptr [EBP + 0xffffff78],0x5dd1
0045A8F4  66 8B 53 24               MOV DX,word ptr [EBX + 0x24]
0045A8F8  66 89 95 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],DX
0045A8FF  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
0045A903  66 89 85 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],AX
0045A90A  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
0045A90E  66 89 55 80               MOV word ptr [EBP + -0x80],DX
0045A912  66 8B 47 0C               MOV AX,word ptr [EDI + 0xc]
0045A916  66 89 45 82               MOV word ptr [EBP + -0x7e],AX
0045A91A  8B 11                     MOV EDX,dword ptr [ECX]
0045A91C  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
0045A922  50                        PUSH EAX
0045A923  FF 12                     CALL dword ptr [EDX]
LAB_0045a925:
0045A925  8B 83 CA 07 00 00         MOV EAX,dword ptr [EBX + 0x7ca]
0045A92B  3B C6                     CMP EAX,ESI
0045A92D  0F 84 8C 00 00 00         JZ 0x0045a9bf
0045A933  8D 4D B8                  LEA ECX,[EBP + -0x48]
0045A936  51                        PUSH ECX
0045A937  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045A93D  50                        PUSH EAX
0045A93E  E8 8D B9 28 00            CALL 0x006e62d0
0045A943  83 F8 FC                  CMP EAX,-0x4
0045A946  75 3E                     JNZ 0x0045a986
0045A948  68 F8 9E 7A 00            PUSH 0x7a9ef8
0045A94D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0045A952  56                        PUSH ESI
0045A953  56                        PUSH ESI
0045A954  68 F7 12 00 00            PUSH 0x12f7
0045A959  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045A95E  E8 6D 2B 25 00            CALL 0x006ad4d0
0045A963  83 C4 18                  ADD ESP,0x18
0045A966  85 C0                     TEST EAX,EAX
0045A968  74 01                     JZ 0x0045a96b
0045A96A  CC                        INT3
LAB_0045a96b:
0045A96B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045A971  68 F8 12 00 00            PUSH 0x12f8
0045A976  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045A97B  52                        PUSH EDX
0045A97C  68 FF FF 00 00            PUSH 0xffff
0045A981  E8 BA B4 24 00            CALL 0x006a5e40
LAB_0045a986:
0045A986  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0045A989  B9 07 00 00 00            MOV ECX,0x7
0045A98E  8D BD C4 FE FF FF         LEA EDI,[EBP + 0xfffffec4]
0045A994  8D 85 C4 FE FF FF         LEA EAX,[EBP + 0xfffffec4]
0045A99A  F3 A5                     MOVSD.REP ES:EDI,ESI
0045A99C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0045A99F  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0045A9A5  C7 85 78 FF FF FF 28 01 00 00  MOV dword ptr [EBP + 0xffffff78],0x128
0045A9AF  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
0045A9B5  8B 11                     MOV EDX,dword ptr [ECX]
0045A9B7  50                        PUSH EAX
0045A9B8  FF 12                     CALL dword ptr [EDX]
0045A9BA  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0045A9BD  33 F6                     XOR ESI,ESI
LAB_0045a9bf:
0045A9BF  83 BB 5D 04 00 00 14      CMP dword ptr [EBX + 0x45d],0x14
0045A9C6  74 0D                     JZ 0x0045a9d5
0045A9C8  6A 14                     PUSH 0x14
0045A9CA  8B CB                     MOV ECX,EBX
0045A9CC  E8 28 A4 FA FF            CALL 0x00404df9
0045A9D1  85 C0                     TEST EAX,EAX
0045A9D3  74 27                     JZ 0x0045a9fc
LAB_0045a9d5:
0045A9D5  8B 93 A2 05 00 00         MOV EDX,dword ptr [EBX + 0x5a2]
0045A9DB  8D 4D F4                  LEA ECX,[EBP + -0xc]
0045A9DE  51                        PUSH ECX
0045A9DF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045A9E5  52                        PUSH EDX
0045A9E6  E8 E5 B8 28 00            CALL 0x006e62d0
0045A9EB  83 F8 FC                  CMP EAX,-0x4
0045A9EE  74 0C                     JZ 0x0045a9fc
0045A9F0  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0045A9F3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0045A9F6  50                        PUSH EAX
0045A9F7  E8 71 80 FA FF            CALL 0x00402a6d
LAB_0045a9fc:
0045A9FC  8B CB                     MOV ECX,EBX
0045A9FE  C7 83 55 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x455],0x1
0045AA08  E8 FE 91 FA FF            CALL 0x00403c0b
0045AA0D  8B CB                     MOV ECX,EBX
0045AA0F  E8 BA 79 FA FF            CALL 0x004023ce
0045AA14  66 8B 83 6F 06 00 00      MOV AX,word ptr [EBX + 0x66f]
0045AA1B  66 8B 8B 73 06 00 00      MOV CX,word ptr [EBX + 0x673]
0045AA22  66 8B 93 71 06 00 00      MOV DX,word ptr [EBX + 0x671]
0045AA29  66 3B C6                  CMP AX,SI
0045AA2C  7C 57                     JL 0x0045aa85
0045AA2E  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0045AA35  7D 4B                     JGE 0x0045aa82
0045AA37  66 3B D6                  CMP DX,SI
0045AA3A  7C 46                     JL 0x0045aa82
0045AA3C  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0045AA43  7D 3D                     JGE 0x0045aa82
0045AA45  66 3B CE                  CMP CX,SI
0045AA48  7C 38                     JL 0x0045aa82
0045AA4A  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0045AA51  7D 2F                     JGE 0x0045aa82
0045AA53  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0045AA5A  0F BF C9                  MOVSX ECX,CX
0045AA5D  0F AF F9                  IMUL EDI,ECX
0045AA60  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0045AA67  0F BF D2                  MOVSX EDX,DX
0045AA6A  0F AF CA                  IMUL ECX,EDX
0045AA6D  0F BF C0                  MOVSX EAX,AX
0045AA70  03 F9                     ADD EDI,ECX
0045AA72  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0045AA78  03 F8                     ADD EDI,EAX
0045AA7A  8B 0C F9                  MOV ECX,dword ptr [ECX + EDI*0x8]
0045AA7D  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0045AA80  EB 05                     JMP 0x0045aa87
LAB_0045aa82:
0045AA82  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0045aa85:
0045AA85  33 C9                     XOR ECX,ECX
LAB_0045aa87:
0045AA87  3B CE                     CMP ECX,ESI
0045AA89  74 25                     JZ 0x0045aab0
0045AA8B  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0045AA8E  8B 83 79 06 00 00         MOV EAX,dword ptr [EBX + 0x679]
0045AA94  3B D0                     CMP EDX,EAX
0045AA96  75 18                     JNZ 0x0045aab0
0045AA98  83 BB 75 06 00 00 63      CMP dword ptr [EBX + 0x675],0x63
0045AA9F  75 0F                     JNZ 0x0045aab0
0045AAA1  81 79 20 E8 03 00 00      CMP dword ptr [ECX + 0x20],0x3e8
0045AAA8  75 06                     JNZ 0x0045aab0
0045AAAA  53                        PUSH EBX
0045AAAB  E8 93 7C FA FF            CALL 0x00402743
LAB_0045aab0:
0045AAB0  8B CB                     MOV ECX,EBX
0045AAB2  E8 E9 97 FA FF            CALL 0x004042a0
0045AAB7  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
0045AABB  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0045AABE  6A 01                     PUSH 0x1
0045AAC0  50                        PUSH EAX
0045AAC1  51                        PUSH ECX
0045AAC2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045AAC8  E8 5B 65 FA FF            CALL 0x00401028
0045AACD  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
0045AAD1  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0045AAD4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045AADA  56                        PUSH ESI
0045AADB  52                        PUSH EDX
0045AADC  50                        PUSH EAX
0045AADD  E8 46 65 FA FF            CALL 0x00401028
0045AAE2  8B CB                     MOV ECX,EBX
0045AAE4  E8 E1 7C FA FF            CALL 0x004027ca
0045AAE9  8B CB                     MOV ECX,EBX
0045AAEB  E8 1F 7E FA FF            CALL 0x0040290f
0045AAF0  8B CB                     MOV ECX,EBX
0045AAF2  E8 F5 AF FA FF            CALL 0x00405aec
0045AAF7  8B CB                     MOV ECX,EBX
0045AAF9  E8 F3 96 FA FF            CALL 0x004041f1
0045AAFE  66 8B 83 A9 06 00 00      MOV AX,word ptr [EBX + 0x6a9]
0045AB05  66 8B 8B AD 06 00 00      MOV CX,word ptr [EBX + 0x6ad]
0045AB0C  66 8B 93 AB 06 00 00      MOV DX,word ptr [EBX + 0x6ab]
0045AB13  66 3B C6                  CMP AX,SI
0045AB16  7C 57                     JL 0x0045ab6f
0045AB18  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0045AB1F  7D 4B                     JGE 0x0045ab6c
0045AB21  66 3B D6                  CMP DX,SI
0045AB24  7C 46                     JL 0x0045ab6c
0045AB26  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0045AB2D  7D 3D                     JGE 0x0045ab6c
0045AB2F  66 3B CE                  CMP CX,SI
0045AB32  7C 38                     JL 0x0045ab6c
0045AB34  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0045AB3B  7D 2F                     JGE 0x0045ab6c
0045AB3D  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0045AB44  0F BF C9                  MOVSX ECX,CX
0045AB47  0F AF F9                  IMUL EDI,ECX
0045AB4A  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0045AB51  0F BF D2                  MOVSX EDX,DX
0045AB54  0F AF CA                  IMUL ECX,EDX
0045AB57  0F BF C0                  MOVSX EAX,AX
0045AB5A  03 F9                     ADD EDI,ECX
0045AB5C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0045AB62  03 F8                     ADD EDI,EAX
0045AB64  8B 0C F9                  MOV ECX,dword ptr [ECX + EDI*0x8]
0045AB67  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0045AB6A  EB 05                     JMP 0x0045ab71
LAB_0045ab6c:
0045AB6C  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0045ab6f:
0045AB6F  33 C9                     XOR ECX,ECX
LAB_0045ab71:
0045AB71  3B CE                     CMP ECX,ESI
0045AB73  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0045AB76  74 16                     JZ 0x0045ab8e
0045AB78  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0045AB7B  8B 83 AF 06 00 00         MOV EAX,dword ptr [EBX + 0x6af]
0045AB81  3B D0                     CMP EDX,EAX
0045AB83  75 09                     JNZ 0x0045ab8e
0045AB85  E8 90 68 FA FF            CALL 0x0040141a
0045AB8A  85 C0                     TEST EAX,EAX
0045AB8C  75 16                     JNZ 0x0045aba4
LAB_0045ab8e:
0045AB8E  8B 8B AF 06 00 00         MOV ECX,dword ptr [EBX + 0x6af]
0045AB94  8D 45 E0                  LEA EAX,[EBP + -0x20]
0045AB97  50                        PUSH EAX
0045AB98  51                        PUSH ECX
0045AB99  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045AB9F  E8 2C B7 28 00            CALL 0x006e62d0
LAB_0045aba4:
0045ABA4  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0045ABA7  3B CE                     CMP ECX,ESI
0045ABA9  74 25                     JZ 0x0045abd0
0045ABAB  81 79 20 E8 03 00 00      CMP dword ptr [ECX + 0x20],0x3e8
0045ABB2  75 1C                     JNZ 0x0045abd0
0045ABB4  53                        PUSH EBX
0045ABB5  E8 84 B2 FA FF            CALL 0x00405e3e
0045ABBA  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0045ABBD  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0045ABC0  8B 90 B0 04 00 00         MOV EDX,dword ptr [EAX + 0x4b0]
0045ABC6  3B D1                     CMP EDX,ECX
0045ABC8  75 06                     JNZ 0x0045abd0
0045ABCA  89 B0 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],ESI
LAB_0045abd0:
0045ABD0  83 BB 5D 04 00 00 13      CMP dword ptr [EBX + 0x45d],0x13
0045ABD7  75 2B                     JNZ 0x0045ac04
0045ABD9  8B 83 24 05 00 00         MOV EAX,dword ptr [EBX + 0x524]
0045ABDF  3B C6                     CMP EAX,ESI
0045ABE1  74 21                     JZ 0x0045ac04
0045ABE3  8D 4D E0                  LEA ECX,[EBP + -0x20]
0045ABE6  51                        PUSH ECX
0045ABE7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045ABED  50                        PUSH EAX
0045ABEE  E8 DD B6 28 00            CALL 0x006e62d0
0045ABF3  83 F8 FC                  CMP EAX,-0x4
0045ABF6  74 0C                     JZ 0x0045ac04
0045ABF8  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0045ABFB  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0045ABFE  52                        PUSH EDX
0045ABFF  E8 D5 85 FA FF            CALL 0x004031d9
LAB_0045ac04:
0045AC04  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0045AC07  33 C9                     XOR ECX,ECX
0045AC09  66 8B 4B 18               MOV CX,word ptr [EBX + 0x18]
0045AC0D  C1 E8 10                  SHR EAX,0x10
0045AC10  25 FF 00 00 00            AND EAX,0xff
0045AC15  80 CC 02                  OR AH,0x2
0045AC18  C1 E0 10                  SHL EAX,0x10
0045AC1B  0B C1                     OR EAX,ECX
0045AC1D  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0045AC23  50                        PUSH EAX
0045AC24  E8 57 BB 28 00            CALL 0x006e6780
0045AC29  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0045AC2C  8B CB                     MOV ECX,EBX
0045AC2E  89 93 26 08 00 00         MOV dword ptr [EBX + 0x826],EDX
0045AC34  8B 03                     MOV EAX,dword ptr [EBX]
0045AC36  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0045AC39  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0045AC3C  50                        PUSH EAX
0045AC3D  51                        PUSH ECX
0045AC3E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045AC44  E8 C5 82 FA FF            CALL 0x00402f0e
0045AC49  8B 53 10                  MOV EDX,dword ptr [EBX + 0x10]
0045AC4C  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0045AC4F  33 C0                     XOR EAX,EAX
0045AC51  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
0045AC57  3B C8                     CMP ECX,EAX
0045AC59  75 0C                     JNZ 0x0045ac67
0045AC5B  51                        PUSH ECX
0045AC5C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045AC62  E8 26 9F FA FF            CALL 0x00404b8d
LAB_0045ac67:
0045AC67  83 7F 18 02               CMP dword ptr [EDI + 0x18],0x2
0045AC6B  74 75                     JZ 0x0045ace2
0045AC6D  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
0045AC73  6A 0F                     PUSH 0xf
0045AC75  8B CF                     MOV ECX,EDI
0045AC77  E8 E8 95 FA FF            CALL 0x00404264
0045AC7C  56                        PUSH ESI
0045AC7D  8B CF                     MOV ECX,EDI
0045AC7F  E8 E0 95 FA FF            CALL 0x00404264
0045AC84  6A 01                     PUSH 0x1
0045AC86  8B CF                     MOV ECX,EDI
0045AC88  E8 D7 95 FA FF            CALL 0x00404264
0045AC8D  6A 0E                     PUSH 0xe
0045AC8F  8B CF                     MOV ECX,EDI
0045AC91  E8 CE 95 FA FF            CALL 0x00404264
0045AC96  6A 0D                     PUSH 0xd
0045AC98  8B CF                     MOV ECX,EDI
0045AC9A  E8 C5 95 FA FF            CALL 0x00404264
0045AC9F  6A 0C                     PUSH 0xc
0045ACA1  8B CF                     MOV ECX,EDI
0045ACA3  E8 BC 95 FA FF            CALL 0x00404264
0045ACA8  6A 08                     PUSH 0x8
0045ACAA  8B CF                     MOV ECX,EDI
0045ACAC  E8 B3 95 FA FF            CALL 0x00404264
0045ACB1  6A 0B                     PUSH 0xb
0045ACB3  8B CF                     MOV ECX,EDI
0045ACB5  E8 AA 95 FA FF            CALL 0x00404264
0045ACBA  66 8B 53 30               MOV DX,word ptr [EBX + 0x30]
0045ACBE  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0045ACC1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045ACC7  52                        PUSH EDX
0045ACC8  50                        PUSH EAX
0045ACC9  E8 2B B0 FA FF            CALL 0x00405cf9
0045ACCE  3B C6                     CMP EAX,ESI
0045ACD0  74 0D                     JZ 0x0045acdf
0045ACD2  8B 10                     MOV EDX,dword ptr [EAX]
0045ACD4  8D 4B 32                  LEA ECX,[EBX + 0x32]
0045ACD7  51                        PUSH ECX
0045ACD8  6A 6A                     PUSH 0x6a
0045ACDA  8B C8                     MOV ECX,EAX
0045ACDC  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_0045acdf:
0045ACDF  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0045ace2:
0045ACE2  8B 8B 65 04 00 00         MOV ECX,dword ptr [EBX + 0x465]
0045ACE8  3B CE                     CMP ECX,ESI
0045ACEA  74 1A                     JZ 0x0045ad06
0045ACEC  E8 FD 9C FA FF            CALL 0x004049ee
0045ACF1  8B 83 65 04 00 00         MOV EAX,dword ptr [EBX + 0x465]
0045ACF7  50                        PUSH EAX
0045ACF8  E8 B3 35 2D 00            CALL 0x0072e2b0
0045ACFD  83 C4 04                  ADD ESP,0x4
0045AD00  89 B3 65 04 00 00         MOV dword ptr [EBX + 0x465],ESI
LAB_0045ad06:
0045AD06  81 7F 04 A8 00 00 00      CMP dword ptr [EDI + 0x4],0xa8
0045AD0D  74 0C                     JZ 0x0045ad1b
0045AD0F  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0045AD12  3B C6                     CMP EAX,ESI
0045AD14  74 05                     JZ 0x0045ad1b
0045AD16  83 F8 04                  CMP EAX,0x4
0045AD19  75 33                     JNZ 0x0045ad4e
LAB_0045ad1b:
0045AD1B  56                        PUSH ESI
0045AD1C  6A FF                     PUSH -0x1
0045AD1E  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0045AD24  E8 A3 A5 FA FF            CALL 0x004052cc
0045AD29  0F BF 4B 6C               MOVSX ECX,word ptr [EBX + 0x6c]
0045AD2D  8B 93 F7 06 00 00         MOV EDX,dword ptr [EBX + 0x6f7]
0045AD33  50                        PUSH EAX
0045AD34  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
0045AD38  51                        PUSH ECX
0045AD39  53                        PUSH EBX
0045AD3A  0F BF 4B 43               MOVSX ECX,word ptr [EBX + 0x43]
0045AD3E  52                        PUSH EDX
0045AD3F  50                        PUSH EAX
0045AD40  0F BF 53 41               MOVSX EDX,word ptr [EBX + 0x41]
0045AD44  51                        PUSH ECX
0045AD45  52                        PUSH EDX
0045AD46  E8 F3 74 FA FF            CALL 0x0040223e
0045AD4B  83 C4 24                  ADD ESP,0x24
LAB_0045ad4e:
0045AD4E  83 7F 18 03               CMP dword ptr [EDI + 0x18],0x3
0045AD52  75 21                     JNZ 0x0045ad75
0045AD54  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
0045AD58  0F BF 4B 43               MOVSX ECX,word ptr [EBX + 0x43]
0045AD5C  0F BF 53 41               MOVSX EDX,word ptr [EBX + 0x41]
0045AD60  6A 12                     PUSH 0x12
0045AD62  50                        PUSH EAX
0045AD63  8B 83 ED 01 00 00         MOV EAX,dword ptr [EBX + 0x1ed]
0045AD69  51                        PUSH ECX
0045AD6A  52                        PUSH EDX
0045AD6B  56                        PUSH ESI
0045AD6C  50                        PUSH EAX
0045AD6D  E8 33 A4 FA FF            CALL 0x004051a5
0045AD72  83 C4 18                  ADD ESP,0x18
LAB_0045ad75:
0045AD75  83 7F 18 02               CMP dword ptr [EDI + 0x18],0x2
0045AD79  74 4B                     JZ 0x0045adc6
LAB_0045ad7b:
0045AD7B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045AD81  C7 85 78 FF FF FF 0A 00 00 00  MOV dword ptr [EBP + 0xffffff78],0xa
0045AD8B  89 B5 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ESI
0045AD91  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0045AD94  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
0045AD9A  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0045AD9D  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
0045ADA3  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0045ADA9  52                        PUSH EDX
0045ADAA  E8 61 AA 28 00            CALL 0x006e5810
0045ADAF  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045ADB5  33 C0                     XOR EAX,EAX
0045ADB7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045ADBD  5F                        POP EDI
0045ADBE  5E                        POP ESI
0045ADBF  5B                        POP EBX
0045ADC0  8B E5                     MOV ESP,EBP
0045ADC2  5D                        POP EBP
0045ADC3  C2 04 00                  RET 0x4
LAB_0045adc6:
0045ADC6  C7 83 C0 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x2c0],0x1
0045ADD0  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045ADD6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045ADDC  33 C0                     XOR EAX,EAX
0045ADDE  5F                        POP EDI
0045ADDF  5E                        POP ESI
0045ADE0  5B                        POP EBX
0045ADE1  8B E5                     MOV ESP,EBP
0045ADE3  5D                        POP EBP
0045ADE4  C2 04 00                  RET 0x4
LAB_0045ade7:
0045ADE7  3D 29 01 00 00            CMP EAX,0x129
0045ADEC  74 30                     JZ 0x0045ae1e
0045ADEE  3D 05 44 00 00            CMP EAX,0x4405
0045ADF3  0F 85 F4 00 00 00         JNZ 0x0045aeed
0045ADF9  8B 83 0A 07 00 00         MOV EAX,dword ptr [EBX + 0x70a]
0045ADFF  8B CB                     MOV ECX,EBX
0045AE01  50                        PUSH EAX
0045AE02  E8 9A 75 FA FF            CALL 0x004023a1
0045AE07  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045AE0D  33 C0                     XOR EAX,EAX
0045AE0F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0045AE15  5F                        POP EDI
0045AE16  5E                        POP ESI
0045AE17  5B                        POP EBX
0045AE18  8B E5                     MOV ESP,EBP
0045AE1A  5D                        POP EBP
0045AE1B  C2 04 00                  RET 0x4
LAB_0045ae1e:
0045AE1E  83 BB 5D 04 00 00 14      CMP dword ptr [EBX + 0x45d],0x14
0045AE25  0F 85 C2 00 00 00         JNZ 0x0045aeed
0045AE2B  83 BB C0 05 00 00 03      CMP dword ptr [EBX + 0x5c0],0x3
0045AE32  0F 85 B5 00 00 00         JNZ 0x0045aeed
0045AE38  39 B3 C2 07 00 00         CMP dword ptr [EBX + 0x7c2],ESI
0045AE3E  0F 84 A9 00 00 00         JZ 0x0045aeed
0045AE44  8B 83 A6 05 00 00         MOV EAX,dword ptr [EBX + 0x5a6]
0045AE4A  8D BB A6 05 00 00         LEA EDI,[EBX + 0x5a6]
0045AE50  3B C6                     CMP EAX,ESI
0045AE52  75 33                     JNZ 0x0045ae87
0045AE54  8B 8B A2 05 00 00         MOV ECX,dword ptr [EBX + 0x5a2]
0045AE5A  57                        PUSH EDI
0045AE5B  51                        PUSH ECX
0045AE5C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0045AE62  E8 69 B4 28 00            CALL 0x006e62d0
0045AE67  83 F8 FC                  CMP EAX,-0x4
0045AE6A  75 1B                     JNZ 0x0045ae87
0045AE6C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0045AE72  68 72 13 00 00            PUSH 0x1372
0045AE77  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045AE7C  52                        PUSH EDX
0045AE7D  68 FF FF 00 00            PUSH 0xffff
0045AE82  E8 B9 AF 24 00            CALL 0x006a5e40
LAB_0045ae87:
0045AE87  8A 4B 63                  MOV CL,byte ptr [EBX + 0x63]
0045AE8A  8B 37                     MOV ESI,dword ptr [EDI]
0045AE8C  8A 43 61                  MOV AL,byte ptr [EBX + 0x61]
0045AE8F  8A 53 62                  MOV DL,byte ptr [EBX + 0x62]
0045AE92  88 8D 67 FF FF FF         MOV byte ptr [EBP + 0xffffff67],CL
0045AE98  83 C6 34                  ADD ESI,0x34
0045AE9B  8D 7B 34                  LEA EDI,[EBX + 0x34]
0045AE9E  B9 17 00 00 00            MOV ECX,0x17
0045AEA3  F3 A5                     MOVSD.REP ES:EDI,ESI
0045AEA5  66 A5                     MOVSW ES:EDI,ESI
0045AEA7  A4                        MOVSB ES:EDI,ESI
0045AEA8  C7 43 76 00 00 00 00      MOV dword ptr [EBX + 0x76],0x0
0045AEAF  66 C7 43 6E 2F 00         MOV word ptr [EBX + 0x6e],0x2f
0045AEB5  88 43 61                  MOV byte ptr [EBX + 0x61],AL
0045AEB8  88 53 62                  MOV byte ptr [EBX + 0x62],DL
0045AEBB  8A 95 67 FF FF FF         MOV DL,byte ptr [EBP + 0xffffff67]
0045AEC1  8B CB                     MOV ECX,EBX
0045AEC3  88 53 63                  MOV byte ptr [EBX + 0x63],DL
0045AEC6  8B 03                     MOV EAX,dword ptr [EBX]
0045AEC8  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0045AECE  85 C0                     TEST EAX,EAX
0045AED0  74 1B                     JZ 0x0045aeed
0045AED2  68 77 13 00 00            PUSH 0x1377
LAB_0045aed7:
0045AED7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0045AEDD  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045AEE2  51                        PUSH ECX
LAB_0045aee3:
0045AEE3  68 FF FF 00 00            PUSH 0xffff
0045AEE8  E8 53 AF 24 00            CALL 0x006a5e40
switchD_0045189e::default:
0045AEED  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
0045AEF3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0045aef9:
0045AEF9  33 C0                     XOR EAX,EAX
0045AEFB  5F                        POP EDI
0045AEFC  5E                        POP ESI
0045AEFD  5B                        POP EBX
0045AEFE  8B E5                     MOV ESP,EBP
0045AF00  5D                        POP EBP
0045AF01  C2 04 00                  RET 0x4
LAB_0045af04:
0045AF04  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
0045AF0A  81 FB 09 00 FE AF         CMP EBX,0xaffe0009
0045AF10  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0045AF15  74 E2                     JZ 0x0045aef9
0045AF17  B9 3F 00 00 00            MOV ECX,0x3f
0045AF1C  33 C0                     XOR EAX,EAX
0045AF1E  8D BD 81 FD FF FF         LEA EDI,[EBP + 0xfffffd81]
0045AF24  C6 85 80 FD FF FF 00      MOV byte ptr [EBP + 0xfffffd80],0x0
0045AF2B  F3 AB                     STOSD.REP ES:EDI
0045AF2D  66 AB                     STOSW ES:EDI
0045AF2F  8B 85 18 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff18]
0045AF35  33 C9                     XOR ECX,ECX
0045AF37  33 D2                     XOR EDX,EDX
0045AF39  66 8B 48 30               MOV CX,word ptr [EAX + 0x30]
0045AF3D  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
0045AF41  51                        PUSH ECX
0045AF42  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
0045AF45  52                        PUSH EDX
0045AF46  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
0045AF49  51                        PUSH ECX
0045AF4A  52                        PUSH EDX
0045AF4B  8D 85 80 FD FF FF         LEA EAX,[EBP + 0xfffffd80]
0045AF51  68 AC 9E 7A 00            PUSH 0x7a9eac
0045AF56  50                        PUSH EAX
0045AF57  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0045AF5D  8D 8D 80 FD FF FF         LEA ECX,[EBP + 0xfffffd80]
0045AF63  51                        PUSH ECX
0045AF64  68 CC 4C 7A 00            PUSH 0x7a4ccc
0045AF69  53                        PUSH EBX
0045AF6A  56                        PUSH ESI
0045AF6B  68 80 13 00 00            PUSH 0x1380
0045AF70  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045AF75  E8 56 25 25 00            CALL 0x006ad4d0
0045AF7A  83 C4 30                  ADD ESP,0x30
0045AF7D  85 C0                     TEST EAX,EAX
0045AF7F  74 01                     JZ 0x0045af82
0045AF81  CC                        INT3
LAB_0045af82:
0045AF82  68 81 13 00 00            PUSH 0x1381
0045AF87  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045AF8C  56                        PUSH ESI
0045AF8D  53                        PUSH EBX
0045AF8E  E8 AD AE 24 00            CALL 0x006a5e40
0045AF93  5F                        POP EDI
0045AF94  5E                        POP ESI
0045AF95  B8 FF FF 00 00            MOV EAX,0xffff
0045AF9A  5B                        POP EBX
0045AF9B  8B E5                     MOV ESP,EBP
0045AF9D  5D                        POP EBP
0045AF9E  C2 04 00                  RET 0x4
