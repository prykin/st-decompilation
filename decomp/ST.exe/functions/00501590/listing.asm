CPanelTy::PaintCtrlBoat:
00501590  55                        PUSH EBP
00501591  8B EC                     MOV EBP,ESP
00501593  83 EC 48                  SUB ESP,0x48
00501596  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050159B  56                        PUSH ESI
0050159C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0050159F  57                        PUSH EDI
005015A0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005015A3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005015A6  6A 00                     PUSH 0x0
005015A8  52                        PUSH EDX
005015A9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005015AC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005015B2  E8 39 C2 22 00            CALL 0x0072d7f0
005015B7  8B F0                     MOV ESI,EAX
005015B9  83 C4 08                  ADD ESP,0x8
005015BC  85 F6                     TEST ESI,ESI
005015BE  0F 85 17 02 00 00         JNZ 0x005017db
005015C4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005015C7  8A 86 9E 0B 00 00         MOV AL,byte ptr [ESI + 0xb9e]
005015CD  83 F8 04                  CMP EAX,0x4
005015D0  0F 87 8A 01 00 00         JA 0x00501760
switchD_005015d6::switchD:
005015D6  FF 24 85 20 18 50 00      JMP dword ptr [EAX*0x4 + 0x501820]
switchD_005015d6::caseD_0:
005015DD  8B 86 74 09 00 00         MOV EAX,dword ptr [ESI + 0x974]
005015E3  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
005015E9  50                        PUSH EAX
005015EA  6A 01                     PUSH 0x1
005015EC  6A 00                     PUSH 0x0
005015EE  6A 00                     PUSH 0x0
005015F0  51                        PUSH ECX
005015F1  E9 62 01 00 00            JMP 0x00501758
switchD_005015d6::caseD_3:
005015F6  8B 96 74 09 00 00         MOV EDX,dword ptr [ESI + 0x974]
005015FC  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00501602  52                        PUSH EDX
00501603  6A 01                     PUSH 0x1
00501605  6A 00                     PUSH 0x0
00501607  6A 00                     PUSH 0x0
00501609  50                        PUSH EAX
0050160A  E8 1A 1C F0 FF            CALL 0x00403229
0050160F  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
00501615  83 C4 14                  ADD ESP,0x14
00501618  83 C0 F7                  ADD EAX,-0x9
0050161B  3D B4 00 00 00            CMP EAX,0xb4
00501620  0F 87 12 01 00 00         JA 0x00501738
00501626  33 C9                     XOR ECX,ECX
00501628  8A 88 3C 18 50 00         MOV CL,byte ptr [EAX + 0x50183c]
switchD_0050162e::switchD:
0050162E  FF 24 8D 34 18 50 00      JMP dword ptr [ECX*0x4 + 0x501834]
switchD_005015d6::caseD_1:
00501635  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
0050163B  83 F8 09                  CMP EAX,0x9
0050163E  74 70                     JZ 0x005016b0
00501640  83 F8 15                  CMP EAX,0x15
00501643  74 6B                     JZ 0x005016b0
00501645  8B 96 7C 09 00 00         MOV EDX,dword ptr [ESI + 0x97c]
0050164B  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00501651  52                        PUSH EDX
00501652  6A 01                     PUSH 0x1
00501654  6A 00                     PUSH 0x0
00501656  6A 00                     PUSH 0x0
00501658  50                        PUSH EAX
00501659  E8 CB 1B F0 FF            CALL 0x00403229
0050165E  8B 8E 84 09 00 00         MOV ECX,dword ptr [ESI + 0x984]
00501664  8B BE 8C 01 00 00         MOV EDI,dword ptr [ESI + 0x18c]
0050166A  51                        PUSH ECX
0050166B  6A 01                     PUSH 0x1
0050166D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00501670  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00501673  2B C2                     SUB EAX,EDX
00501675  6A 61                     PUSH 0x61
00501677  99                        CDQ
00501678  2B C2                     SUB EAX,EDX
0050167A  D1 F8                     SAR EAX,0x1
0050167C  50                        PUSH EAX
0050167D  57                        PUSH EDI
0050167E  E8 A6 1B F0 FF            CALL 0x00403229
00501683  8B 8E 88 09 00 00         MOV ECX,dword ptr [ESI + 0x988]
00501689  8B BE 8C 01 00 00         MOV EDI,dword ptr [ESI + 0x18c]
0050168F  51                        PUSH ECX
00501690  6A 01                     PUSH 0x1
00501692  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00501695  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00501698  2B C2                     SUB EAX,EDX
0050169A  6A 7C                     PUSH 0x7c
0050169C  99                        CDQ
0050169D  2B C2                     SUB EAX,EDX
0050169F  D1 F8                     SAR EAX,0x1
005016A1  50                        PUSH EAX
005016A2  57                        PUSH EDI
005016A3  E8 81 1B F0 FF            CALL 0x00403229
005016A8  83 C4 3C                  ADD ESP,0x3c
005016AB  E9 B0 00 00 00            JMP 0x00501760
LAB_005016b0:
005016B0  8B 8E 78 09 00 00         MOV ECX,dword ptr [ESI + 0x978]
005016B6  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
005016BC  51                        PUSH ECX
005016BD  6A 01                     PUSH 0x1
005016BF  6A 00                     PUSH 0x0
005016C1  6A 00                     PUSH 0x0
005016C3  52                        PUSH EDX
005016C4  E9 8F 00 00 00            JMP 0x00501758
switchD_005015d6::caseD_2:
005016C9  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
005016CF  83 F8 09                  CMP EAX,0x9
005016D2  74 48                     JZ 0x0050171c
005016D4  83 F8 15                  CMP EAX,0x15
005016D7  74 43                     JZ 0x0050171c
005016D9  8B 86 7C 09 00 00         MOV EAX,dword ptr [ESI + 0x97c]
005016DF  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
005016E5  50                        PUSH EAX
005016E6  6A 01                     PUSH 0x1
005016E8  6A 00                     PUSH 0x0
005016EA  6A 00                     PUSH 0x0
005016EC  51                        PUSH ECX
005016ED  E8 37 1B F0 FF            CALL 0x00403229
005016F2  8B 8E 88 09 00 00         MOV ECX,dword ptr [ESI + 0x988]
005016F8  8B BE 8C 01 00 00         MOV EDI,dword ptr [ESI + 0x18c]
005016FE  51                        PUSH ECX
005016FF  6A 01                     PUSH 0x1
00501701  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00501704  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00501707  2B C2                     SUB EAX,EDX
00501709  6A 7C                     PUSH 0x7c
0050170B  99                        CDQ
0050170C  2B C2                     SUB EAX,EDX
0050170E  D1 F8                     SAR EAX,0x1
00501710  50                        PUSH EAX
00501711  57                        PUSH EDI
00501712  E8 12 1B F0 FF            CALL 0x00403229
00501717  83 C4 28                  ADD ESP,0x28
0050171A  EB 1C                     JMP 0x00501738
LAB_0050171c:
0050171C  8B 96 78 09 00 00         MOV EDX,dword ptr [ESI + 0x978]
00501722  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00501728  52                        PUSH EDX
00501729  6A 01                     PUSH 0x1
0050172B  6A 00                     PUSH 0x0
0050172D  6A 00                     PUSH 0x0
0050172F  50                        PUSH EAX
00501730  E8 F4 1A F0 FF            CALL 0x00403229
00501735  83 C4 14                  ADD ESP,0x14
switchD_0050162e::caseD_a:
00501738  8B 8E 84 09 00 00         MOV ECX,dword ptr [ESI + 0x984]
0050173E  8B BE 8C 01 00 00         MOV EDI,dword ptr [ESI + 0x18c]
00501744  51                        PUSH ECX
00501745  6A 01                     PUSH 0x1
00501747  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0050174A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0050174D  2B C2                     SUB EAX,EDX
0050174F  6A 61                     PUSH 0x61
00501751  99                        CDQ
00501752  2B C2                     SUB EAX,EDX
00501754  D1 F8                     SAR EAX,0x1
00501756  50                        PUSH EAX
00501757  57                        PUSH EDI
LAB_00501758:
00501758  E8 CC 1A F0 FF            CALL 0x00403229
0050175D  83 C4 14                  ADD ESP,0x14
switchD_005015d6::default:
00501760  33 C0                     XOR EAX,EAX
00501762  8A 86 9E 0B 00 00         MOV AL,byte ptr [ESI + 0xb9e]
00501768  48                        DEC EAX
00501769  74 1A                     JZ 0x00501785
0050176B  83 E8 03                  SUB EAX,0x3
0050176E  75 39                     JNZ 0x005017a9
00501770  81 BE 99 0B 00 00 AF 00 00 00  CMP dword ptr [ESI + 0xb99],0xaf
0050177A  75 2D                     JNZ 0x005017a9
switchD_0050179b::caseD_16:
0050177C  8B CE                     MOV ECX,ESI
0050177E  E8 2C 3F F0 FF            CALL 0x004056af
00501783  EB 24                     JMP 0x005017a9
LAB_00501785:
00501785  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
0050178B  83 C0 F8                  ADD EAX,-0x8
0050178E  83 F8 1D                  CMP EAX,0x1d
00501791  77 16                     JA 0x005017a9
00501793  33 C9                     XOR ECX,ECX
00501795  8A 88 00 19 50 00         MOV CL,byte ptr [EAX + 0x501900]
switchD_0050179b::switchD:
0050179B  FF 24 8D F4 18 50 00      JMP dword ptr [ECX*0x4 + 0x5018f4]
switchD_0050179b::caseD_8:
005017A2  8B CE                     MOV ECX,ESI
005017A4  E8 36 00 F0 FF            CALL 0x004017df
switchD_0050179b::caseD_9:
005017A9  8B 86 54 01 00 00         MOV EAX,dword ptr [ESI + 0x154]
005017AF  85 C0                     TEST EAX,EAX
005017B1  7C 1A                     JL 0x005017cd
005017B3  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
005017B9  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
005017BC  52                        PUSH EDX
005017BD  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005017C3  51                        PUSH ECX
005017C4  6A FF                     PUSH -0x1
005017C6  50                        PUSH EAX
005017C7  52                        PUSH EDX
005017C8  E8 73 1E 1B 00            CALL 0x006b3640
LAB_005017cd:
005017CD  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005017D0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005017D5  5F                        POP EDI
005017D6  5E                        POP ESI
005017D7  8B E5                     MOV ESP,EBP
005017D9  5D                        POP EBP
005017DA  C3                        RET
LAB_005017db:
005017DB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005017DE  68 A4 25 7C 00            PUSH 0x7c25a4
005017E3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005017E8  56                        PUSH ESI
005017E9  6A 00                     PUSH 0x0
005017EB  68 95 00 00 00            PUSH 0x95
005017F0  68 24 25 7C 00            PUSH 0x7c2524
005017F5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005017FB  E8 D0 BC 1A 00            CALL 0x006ad4d0
00501800  83 C4 18                  ADD ESP,0x18
00501803  85 C0                     TEST EAX,EAX
00501805  74 01                     JZ 0x00501808
00501807  CC                        INT3
LAB_00501808:
00501808  68 95 00 00 00            PUSH 0x95
0050180D  68 24 25 7C 00            PUSH 0x7c2524
00501812  6A 00                     PUSH 0x0
00501814  56                        PUSH ESI
00501815  E8 26 46 1A 00            CALL 0x006a5e40
0050181A  5F                        POP EDI
0050181B  5E                        POP ESI
0050181C  8B E5                     MOV ESP,EBP
0050181E  5D                        POP EBP
0050181F  C3                        RET
