FUN_00704460:
00704460  55                        PUSH EBP
00704461  8B EC                     MOV EBP,ESP
00704463  83 EC 14                  SUB ESP,0x14
00704466  8B 45 4C                  MOV EAX,dword ptr [EBP + 0x4c]
00704469  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
0070446C  C1 F8 03                  SAR EAX,0x3
0070446F  03 C8                     ADD ECX,EAX
00704471  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00704474  48                        DEC EAX
00704475  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
0070447F  89 4D 44                  MOV dword ptr [EBP + 0x44],ECX
00704482  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00704485  0F 88 B3 07 00 00         JS 0x00704c3e
0070448B  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
0070448E  53                        PUSH EBX
0070448F  56                        PUSH ESI
00704490  57                        PUSH EDI
00704491  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
00704494  EB 03                     JMP 0x00704499
LAB_00704496:
00704496  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
LAB_00704499:
00704499  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
0070449C  F6 C2 01                  TEST DL,0x1
0070449F  75 4E                     JNZ 0x007044ef
LAB_007044a1:
007044A1  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
007044A4  48                        DEC EAX
007044A5  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
007044A8  78 42                     JS 0x007044ec
007044AA  33 C0                     XOR EAX,EAX
007044AC  8A 06                     MOV AL,byte ptr [ESI]
007044AE  46                        INC ESI
007044AF  85 C0                     TEST EAX,EAX
007044B1  74 2C                     JZ 0x007044df
007044B3  8B CF                     MOV ECX,EDI
LAB_007044b5:
007044B5  A8 80                     TEST AL,0x80
007044B7  74 16                     JZ 0x007044cf
007044B9  A8 40                     TEST AL,0x40
007044BB  74 06                     JZ 0x007044c3
007044BD  46                        INC ESI
007044BE  83 E0 3F                  AND EAX,0x3f
007044C1  EB 0F                     JMP 0x007044d2
LAB_007044c3:
007044C3  8B D8                     MOV EBX,EAX
007044C5  83 E3 3F                  AND EBX,0x3f
007044C8  03 F3                     ADD ESI,EBX
007044CA  83 E0 3F                  AND EAX,0x3f
007044CD  EB 03                     JMP 0x007044d2
LAB_007044cf:
007044CF  83 E0 7F                  AND EAX,0x7f
LAB_007044d2:
007044D2  2B C8                     SUB ECX,EAX
007044D4  85 C9                     TEST ECX,ECX
007044D6  7E 07                     JLE 0x007044df
007044D8  33 C0                     XOR EAX,EAX
007044DA  8A 06                     MOV AL,byte ptr [ESI]
007044DC  46                        INC ESI
007044DD  EB D6                     JMP 0x007044b5
LAB_007044df:
007044DF  42                        INC EDX
007044E0  83 FA 04                  CMP EDX,0x4
007044E3  7E 02                     JLE 0x007044e7
007044E5  33 D2                     XOR EDX,EDX
LAB_007044e7:
007044E7  F6 C2 01                  TEST DL,0x1
007044EA  74 B5                     JZ 0x007044a1
LAB_007044ec:
007044EC  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
LAB_007044ef:
007044EF  33 DB                     XOR EBX,EBX
007044F1  8A 1E                     MOV BL,byte ptr [ESI]
007044F3  46                        INC ESI
007044F4  85 DB                     TEST EBX,EBX
007044F6  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
007044F9  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
007044FC  0F 84 F2 06 00 00         JZ 0x00704bf4
00704502  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
00704505  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00704508  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0070450B  8B 4D 4C                  MOV ECX,dword ptr [EBP + 0x4c]
0070450E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00704511  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00704514  83 E1 07                  AND ECX,0x7
00704517  BA 80 00 00 00            MOV EDX,0x80
0070451C  D3 FA                     SAR EDX,CL
0070451E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00704521  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00704524  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00704527  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
LAB_0070452a:
0070452A  F6 C3 80                  TEST BL,0x80
0070452D  8B C3                     MOV EAX,EBX
0070452F  74 36                     JZ 0x00704567
00704531  83 E0 3F                  AND EAX,0x3f
00704534  3B C6                     CMP EAX,ESI
00704536  7F 45                     JG 0x0070457d
00704538  F6 C3 40                  TEST BL,0x40
0070453B  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0070453E  74 13                     JZ 0x00704553
00704540  43                        INC EBX
00704541  2B F0                     SUB ESI,EAX
00704543  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00704546  33 DB                     XOR EBX,EBX
00704548  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0070454B  8A 18                     MOV BL,byte ptr [EAX]
0070454D  40                        INC EAX
0070454E  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
00704551  EB D7                     JMP 0x0070452a
LAB_00704553:
00704553  03 D8                     ADD EBX,EAX
00704555  2B F0                     SUB ESI,EAX
00704557  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
0070455A  33 DB                     XOR EBX,EBX
0070455C  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0070455F  8A 18                     MOV BL,byte ptr [EAX]
00704561  40                        INC EAX
00704562  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
00704565  EB C3                     JMP 0x0070452a
LAB_00704567:
00704567  83 E0 7F                  AND EAX,0x7f
0070456A  3B C6                     CMP EAX,ESI
0070456C  7F 0F                     JG 0x0070457d
0070456E  2B F0                     SUB ESI,EAX
00704570  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00704573  33 DB                     XOR EBX,EBX
00704575  8A 18                     MOV BL,byte ptr [EAX]
00704577  40                        INC EAX
00704578  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
0070457B  EB AD                     JMP 0x0070452a
LAB_0070457d:
0070457D  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00704580  81 E3 C0 00 00 00         AND EBX,0xc0
00704586  2B C6                     SUB EAX,ESI
00704588  80 FB 80                  CMP BL,0x80
0070458B  75 03                     JNZ 0x00704590
0070458D  01 75 24                  ADD dword ptr [EBP + 0x24],ESI
LAB_00704590:
00704590  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
00704593  3B C6                     CMP EAX,ESI
00704595  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00704598  0F 8F 3A 04 00 00         JG 0x007049d8
0070459E  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
007045A1  81 E6 80 00 00 00         AND ESI,0x80
LAB_007045a7:
007045A7  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
007045AA  2B D8                     SUB EBX,EAX
007045AC  85 F6                     TEST ESI,ESI
007045AE  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
007045B1  0F 84 D4 03 00 00         JZ 0x0070498b
007045B7  F6 45 EC 40               TEST byte ptr [EBP + -0x14],0x40
007045BB  0F 84 C3 01 00 00         JZ 0x00704784
007045C1  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007045C4  43                        INC EBX
007045C5  85 C9                     TEST ECX,ECX
007045C7  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
007045CA  0F 8E CB 00 00 00         JLE 0x0070469b
007045D0  8D 71 FF                  LEA ESI,[ECX + -0x1]
007045D3  83 FE 03                  CMP ESI,0x3
007045D6  0F 87 BF 00 00 00         JA 0x0070469b
switchD_007045dc::switchD:
007045DC  FF 24 B5 30 4E 70 00      JMP dword ptr [ESI*0x4 + 0x704e30]
switchD_007045dc::caseD_1:
007045E3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007045E6  84 11                     TEST byte ptr [ECX],DL
007045E8  75 1E                     JNZ 0x00704608
007045EA  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007045ED  33 C9                     XOR ECX,ECX
007045EF  66 8B 0E                  MOV CX,word ptr [ESI]
007045F2  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
007045F5  3B F1                     CMP ESI,ECX
007045F7  77 0F                     JA 0x00704608
007045F9  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
007045FC  33 C9                     XOR ECX,ECX
007045FE  8A 0E                     MOV CL,byte ptr [ESI]
00704600  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00704603  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00704606  88 0F                     MOV byte ptr [EDI],CL
LAB_00704608:
00704608  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070460B  B9 02 00 00 00            MOV ECX,0x2
00704610  03 D9                     ADD EBX,ECX
00704612  47                        INC EDI
00704613  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704616  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00704619  43                        INC EBX
0070461A  D1 EA                     SHR EDX,0x1
0070461C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0070461F  75 0C                     JNZ 0x0070462d
00704621  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00704624  BA 80 00 00 00            MOV EDX,0x80
00704629  46                        INC ESI
0070462A  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_0070462d:
0070462D  48                        DEC EAX
0070462E  85 C0                     TEST EAX,EAX
00704630  0F 8E 2F 03 00 00         JLE 0x00704965
switchD_007045dc::caseD_2:
00704636  48                        DEC EAX
00704637  B9 03 00 00 00            MOV ECX,0x3
0070463C  85 C0                     TEST EAX,EAX
0070463E  0F 8E 21 03 00 00         JLE 0x00704965
switchD_007045dc::caseD_3:
00704644  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704647  84 11                     TEST byte ptr [ECX],DL
00704649  75 1E                     JNZ 0x00704669
0070464B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070464E  33 C9                     XOR ECX,ECX
00704650  66 8B 0E                  MOV CX,word ptr [ESI]
00704653  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00704656  3B F1                     CMP ESI,ECX
00704658  77 0F                     JA 0x00704669
0070465A  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0070465D  33 C9                     XOR ECX,ECX
0070465F  8A 0E                     MOV CL,byte ptr [ESI]
00704661  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00704664  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00704667  88 0F                     MOV byte ptr [EDI],CL
LAB_00704669:
00704669  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070466C  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0070466F  83 C1 02                  ADD ECX,0x2
00704672  47                        INC EDI
00704673  46                        INC ESI
00704674  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00704677  D1 EA                     SHR EDX,0x1
00704679  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0070467C  75 0C                     JNZ 0x0070468a
0070467E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704681  BA 80 00 00 00            MOV EDX,0x80
00704686  41                        INC ECX
00704687  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0070468a:
0070468A  48                        DEC EAX
0070468B  B9 04 00 00 00            MOV ECX,0x4
00704690  85 C0                     TEST EAX,EAX
00704692  0F 8E CD 02 00 00         JLE 0x00704965
switchD_007045dc::caseD_4:
00704698  33 C9                     XOR ECX,ECX
0070469A  48                        DEC EAX
switchD_007045dc::default:
0070469B  85 C0                     TEST EAX,EAX
0070469D  0F 8E C2 02 00 00         JLE 0x00704965
007046A3  48                        DEC EAX
007046A4  B9 01 00 00 00            MOV ECX,0x1
007046A9  85 C0                     TEST EAX,EAX
007046AB  0F 8E B4 02 00 00         JLE 0x00704965
LAB_007046b1:
007046B1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007046B4  84 11                     TEST byte ptr [ECX],DL
007046B6  75 1E                     JNZ 0x007046d6
007046B8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007046BB  33 C9                     XOR ECX,ECX
007046BD  66 8B 0E                  MOV CX,word ptr [ESI]
007046C0  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
007046C3  3B F1                     CMP ESI,ECX
007046C5  77 0F                     JA 0x007046d6
007046C7  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
007046CA  33 C9                     XOR ECX,ECX
007046CC  8A 0E                     MOV CL,byte ptr [ESI]
007046CE  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007046D1  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007046D4  88 0F                     MOV byte ptr [EDI],CL
LAB_007046d6:
007046D6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007046D9  B9 02 00 00 00            MOV ECX,0x2
007046DE  03 D9                     ADD EBX,ECX
007046E0  47                        INC EDI
007046E1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007046E4  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
007046E7  43                        INC EBX
007046E8  D1 EA                     SHR EDX,0x1
007046EA  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
007046ED  75 0C                     JNZ 0x007046fb
007046EF  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007046F2  BA 80 00 00 00            MOV EDX,0x80
007046F7  46                        INC ESI
007046F8  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_007046fb:
007046FB  48                        DEC EAX
007046FC  85 C0                     TEST EAX,EAX
007046FE  0F 8E 61 02 00 00         JLE 0x00704965
00704704  48                        DEC EAX
00704705  B9 03 00 00 00            MOV ECX,0x3
0070470A  85 C0                     TEST EAX,EAX
0070470C  0F 8E 53 02 00 00         JLE 0x00704965
00704712  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704715  84 11                     TEST byte ptr [ECX],DL
00704717  75 1E                     JNZ 0x00704737
00704719  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070471C  33 C9                     XOR ECX,ECX
0070471E  66 8B 0E                  MOV CX,word ptr [ESI]
00704721  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00704724  3B F1                     CMP ESI,ECX
00704726  77 0F                     JA 0x00704737
00704728  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0070472B  33 C9                     XOR ECX,ECX
0070472D  8A 0E                     MOV CL,byte ptr [ESI]
0070472F  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00704732  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00704735  88 0F                     MOV byte ptr [EDI],CL
LAB_00704737:
00704737  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070473A  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0070473D  83 C1 02                  ADD ECX,0x2
00704740  47                        INC EDI
00704741  46                        INC ESI
00704742  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00704745  D1 EA                     SHR EDX,0x1
00704747  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0070474A  75 0C                     JNZ 0x00704758
0070474C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070474F  BA 80 00 00 00            MOV EDX,0x80
00704754  41                        INC ECX
00704755  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00704758:
00704758  48                        DEC EAX
00704759  B9 04 00 00 00            MOV ECX,0x4
0070475E  85 C0                     TEST EAX,EAX
00704760  0F 8E FF 01 00 00         JLE 0x00704965
00704766  33 C9                     XOR ECX,ECX
00704768  48                        DEC EAX
00704769  85 C0                     TEST EAX,EAX
0070476B  0F 8E F4 01 00 00         JLE 0x00704965
00704771  48                        DEC EAX
00704772  B9 01 00 00 00            MOV ECX,0x1
00704777  85 C0                     TEST EAX,EAX
00704779  0F 8F 32 FF FF FF         JG 0x007046b1
0070477F  E9 E1 01 00 00            JMP 0x00704965
LAB_00704784:
00704784  85 C9                     TEST ECX,ECX
00704786  0F 8E F6 00 00 00         JLE 0x00704882
0070478C  8D 71 FF                  LEA ESI,[ECX + -0x1]
0070478F  83 FE 03                  CMP ESI,0x3
00704792  0F 87 EA 00 00 00         JA 0x00704882
switchD_00704798::switchD:
00704798  FF 24 B5 40 4E 70 00      JMP dword ptr [ESI*0x4 + 0x704e40]
switchD_00704798::caseD_1:
0070479F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007047A2  84 11                     TEST byte ptr [ECX],DL
007047A4  75 1E                     JNZ 0x007047c4
007047A6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007047A9  33 C9                     XOR ECX,ECX
007047AB  66 8B 0E                  MOV CX,word ptr [ESI]
007047AE  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
007047B1  3B F1                     CMP ESI,ECX
007047B3  77 0F                     JA 0x007047c4
007047B5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
007047B8  33 C9                     XOR ECX,ECX
007047BA  8A 0E                     MOV CL,byte ptr [ESI]
007047BC  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007047BF  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007047C2  88 0F                     MOV byte ptr [EDI],CL
LAB_007047c4:
007047C4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007047C7  B9 02 00 00 00            MOV ECX,0x2
007047CC  03 D9                     ADD EBX,ECX
007047CE  47                        INC EDI
007047CF  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007047D2  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
007047D5  43                        INC EBX
007047D6  D1 EA                     SHR EDX,0x1
007047D8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
007047DB  75 0C                     JNZ 0x007047e9
007047DD  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007047E0  BA 80 00 00 00            MOV EDX,0x80
007047E5  46                        INC ESI
007047E6  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_007047e9:
007047E9  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
007047EC  46                        INC ESI
007047ED  48                        DEC EAX
007047EE  85 C0                     TEST EAX,EAX
007047F0  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
007047F3  0F 8E 6C 01 00 00         JLE 0x00704965
007047F9  EB 03                     JMP 0x007047fe
switchD_00704798::caseD_2:
007047FB  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
LAB_007047fe:
007047FE  46                        INC ESI
007047FF  48                        DEC EAX
00704800  85 C0                     TEST EAX,EAX
00704802  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
00704805  B9 03 00 00 00            MOV ECX,0x3
0070480A  0F 8E 55 01 00 00         JLE 0x00704965
00704810  EB 03                     JMP 0x00704815
switchD_00704798::caseD_3:
00704812  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
LAB_00704815:
00704815  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704818  84 11                     TEST byte ptr [ECX],DL
0070481A  75 1E                     JNZ 0x0070483a
0070481C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070481F  33 C9                     XOR ECX,ECX
00704821  66 8B 0B                  MOV CX,word ptr [EBX]
00704824  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00704827  3B D9                     CMP EBX,ECX
00704829  77 0F                     JA 0x0070483a
0070482B  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0070482E  33 C9                     XOR ECX,ECX
00704830  8A 0B                     MOV CL,byte ptr [EBX]
00704832  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00704835  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00704838  88 0F                     MOV byte ptr [EDI],CL
LAB_0070483a:
0070483A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070483D  83 C3 02                  ADD EBX,0x2
00704840  47                        INC EDI
00704841  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704844  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00704847  43                        INC EBX
00704848  D1 EA                     SHR EDX,0x1
0070484A  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0070484D  75 0C                     JNZ 0x0070485b
0070484F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704852  BA 80 00 00 00            MOV EDX,0x80
00704857  41                        INC ECX
00704858  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0070485b:
0070485B  46                        INC ESI
0070485C  48                        DEC EAX
0070485D  85 C0                     TEST EAX,EAX
0070485F  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
00704862  B9 04 00 00 00            MOV ECX,0x4
00704867  0F 8E F8 00 00 00         JLE 0x00704965
0070486D  46                        INC ESI
0070486E  33 C9                     XOR ECX,ECX
00704870  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
00704873  48                        DEC EAX
00704874  EB 0F                     JMP 0x00704885
switchD_00704798::caseD_4:
00704876  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00704879  33 C9                     XOR ECX,ECX
0070487B  46                        INC ESI
0070487C  48                        DEC EAX
0070487D  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
00704880  EB 03                     JMP 0x00704885
LAB_00704882:
00704882  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
switchD_00704798::default:
00704885  85 C0                     TEST EAX,EAX
00704887  0F 8E D8 00 00 00         JLE 0x00704965
0070488D  46                        INC ESI
0070488E  48                        DEC EAX
0070488F  85 C0                     TEST EAX,EAX
00704891  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
00704894  B9 01 00 00 00            MOV ECX,0x1
00704899  0F 8E C6 00 00 00         JLE 0x00704965
LAB_0070489f:
0070489F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007048A2  84 11                     TEST byte ptr [ECX],DL
007048A4  75 1E                     JNZ 0x007048c4
007048A6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007048A9  33 C9                     XOR ECX,ECX
007048AB  66 8B 0B                  MOV CX,word ptr [EBX]
007048AE  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
007048B1  3B D9                     CMP EBX,ECX
007048B3  77 0F                     JA 0x007048c4
007048B5  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
007048B8  33 C9                     XOR ECX,ECX
007048BA  8A 0B                     MOV CL,byte ptr [EBX]
007048BC  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
007048BF  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007048C2  88 0F                     MOV byte ptr [EDI],CL
LAB_007048c4:
007048C4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007048C7  B9 02 00 00 00            MOV ECX,0x2
007048CC  03 D9                     ADD EBX,ECX
007048CE  47                        INC EDI
007048CF  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007048D2  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
007048D5  43                        INC EBX
007048D6  D1 EA                     SHR EDX,0x1
007048D8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
007048DB  75 0C                     JNZ 0x007048e9
007048DD  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
007048E0  BA 80 00 00 00            MOV EDX,0x80
007048E5  43                        INC EBX
007048E6  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_007048e9:
007048E9  46                        INC ESI
007048EA  48                        DEC EAX
007048EB  85 C0                     TEST EAX,EAX
007048ED  7E 73                     JLE 0x00704962
007048EF  46                        INC ESI
007048F0  48                        DEC EAX
007048F1  85 C0                     TEST EAX,EAX
007048F3  B9 03 00 00 00            MOV ECX,0x3
007048F8  7E 68                     JLE 0x00704962
007048FA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007048FD  84 11                     TEST byte ptr [ECX],DL
007048FF  75 1E                     JNZ 0x0070491f
00704901  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704904  33 C9                     XOR ECX,ECX
00704906  66 8B 0B                  MOV CX,word ptr [EBX]
00704909  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0070490C  3B D9                     CMP EBX,ECX
0070490E  77 0F                     JA 0x0070491f
00704910  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00704913  33 C9                     XOR ECX,ECX
00704915  8A 0B                     MOV CL,byte ptr [EBX]
00704917  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
0070491A  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070491D  88 0F                     MOV byte ptr [EDI],CL
LAB_0070491f:
0070491F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704922  83 C3 02                  ADD EBX,0x2
00704925  47                        INC EDI
00704926  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704929  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0070492C  43                        INC EBX
0070492D  D1 EA                     SHR EDX,0x1
0070492F  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00704932  75 0C                     JNZ 0x00704940
00704934  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704937  BA 80 00 00 00            MOV EDX,0x80
0070493C  41                        INC ECX
0070493D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00704940:
00704940  46                        INC ESI
00704941  48                        DEC EAX
00704942  85 C0                     TEST EAX,EAX
00704944  B9 04 00 00 00            MOV ECX,0x4
00704949  7E 17                     JLE 0x00704962
0070494B  46                        INC ESI
0070494C  33 C9                     XOR ECX,ECX
0070494E  48                        DEC EAX
0070494F  85 C0                     TEST EAX,EAX
00704951  7E 0F                     JLE 0x00704962
00704953  46                        INC ESI
00704954  48                        DEC EAX
00704955  85 C0                     TEST EAX,EAX
00704957  B9 01 00 00 00            MOV ECX,0x1
0070495C  0F 8F 3D FF FF FF         JG 0x0070489f
LAB_00704962:
00704962  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
LAB_00704965:
00704965  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00704968  85 C0                     TEST EAX,EAX
0070496A  7E 6A                     JLE 0x007049d6
0070496C  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0070496F  33 C0                     XOR EAX,EAX
00704971  8A 03                     MOV AL,byte ptr [EBX]
00704973  8B F0                     MOV ESI,EAX
00704975  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00704978  81 E6 80 00 00 00         AND ESI,0x80
0070497E  43                        INC EBX
0070497F  85 F6                     TEST ESI,ESI
00704981  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00704984  74 42                     JZ 0x007049c8
00704986  83 E0 3F                  AND EAX,0x3f
00704989  EB 40                     JMP 0x007049cb
LAB_0070498b:
0070498B  48                        DEC EAX
0070498C  78 D7                     JS 0x00704965
0070498E  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_00704991:
00704991  8B C1                     MOV EAX,ECX
00704993  83 E0 01                  AND EAX,0x1
00704996  3C 01                     CMP AL,0x1
00704998  75 21                     JNZ 0x007049bb
0070499A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070499D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007049A0  47                        INC EDI
007049A1  40                        INC EAX
007049A2  83 C3 02                  ADD EBX,0x2
007049A5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007049A8  D1 EA                     SHR EDX,0x1
007049AA  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007049AD  75 0C                     JNZ 0x007049bb
007049AF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007049B2  BA 80 00 00 00            MOV EDX,0x80
007049B7  40                        INC EAX
007049B8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_007049bb:
007049BB  41                        INC ECX
007049BC  83 F9 04                  CMP ECX,0x4
007049BF  7E 02                     JLE 0x007049c3
007049C1  33 C9                     XOR ECX,ECX
LAB_007049c3:
007049C3  4E                        DEC ESI
007049C4  75 CB                     JNZ 0x00704991
007049C6  EB 9D                     JMP 0x00704965
LAB_007049c8:
007049C8  83 E0 7F                  AND EAX,0x7f
LAB_007049cb:
007049CB  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
007049CE  0F 8E D3 FB FF FF         JLE 0x007045a7
007049D4  EB 02                     JMP 0x007049d8
LAB_007049d6:
007049D6  33 C0                     XOR EAX,EAX
LAB_007049d8:
007049D8  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
007049DB  2B C6                     SUB EAX,ESI
007049DD  85 F6                     TEST ESI,ESI
007049DF  0F 8E B7 01 00 00         JLE 0x00704b9c
007049E5  8A 5D EC                  MOV BL,byte ptr [EBP + -0x14]
007049E8  F6 C3 80                  TEST BL,0x80
007049EB  0F 84 AB 01 00 00         JZ 0x00704b9c
007049F1  F6 C3 40                  TEST BL,0x40
007049F4  0F 84 4A 02 00 00         JZ 0x00704c44
007049FA  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007049FD  43                        INC EBX
007049FE  85 C9                     TEST ECX,ECX
00704A00  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00704A03  0F 8E D9 00 00 00         JLE 0x00704ae2
00704A09  49                        DEC ECX
00704A0A  83 F9 03                  CMP ECX,0x3
00704A0D  0F 87 CF 00 00 00         JA 0x00704ae2
switchD_00704a13::switchD:
00704A13  FF 24 8D 50 4E 70 00      JMP dword ptr [ECX*0x4 + 0x704e50]
switchD_00704a13::caseD_1:
00704A1A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704A1D  84 11                     TEST byte ptr [ECX],DL
00704A1F  75 20                     JNZ 0x00704a41
00704A21  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00704A24  33 C9                     XOR ECX,ECX
00704A26  66 8B 0E                  MOV CX,word ptr [ESI]
00704A29  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00704A2C  3B F1                     CMP ESI,ECX
00704A2E  77 11                     JA 0x00704a41
00704A30  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00704A33  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00704A36  33 C9                     XOR ECX,ECX
00704A38  8A 0E                     MOV CL,byte ptr [ESI]
00704A3A  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00704A3D  88 0F                     MOV byte ptr [EDI],CL
00704A3F  EB 03                     JMP 0x00704a44
LAB_00704a41:
00704A41  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_00704a44:
00704A44  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704A47  83 C3 02                  ADD EBX,0x2
00704A4A  47                        INC EDI
00704A4B  46                        INC ESI
00704A4C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704A4F  D1 EA                     SHR EDX,0x1
00704A51  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00704A54  75 0C                     JNZ 0x00704a62
00704A56  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704A59  BA 80 00 00 00            MOV EDX,0x80
00704A5E  41                        INC ECX
00704A5F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00704a62:
00704A62  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00704A65  49                        DEC ECX
00704A66  85 C9                     TEST ECX,ECX
00704A68  0F 8E 2E 01 00 00         JLE 0x00704b9c
00704A6E  EB 06                     JMP 0x00704a76
switchD_00704a13::caseD_2:
00704A70  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00704A73  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_00704a76:
00704A76  49                        DEC ECX
00704A77  85 C9                     TEST ECX,ECX
00704A79  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00704A7C  0F 8E 1A 01 00 00         JLE 0x00704b9c
00704A82  EB 06                     JMP 0x00704a8a
switchD_00704a13::caseD_3:
00704A84  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00704A87  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_00704a8a:
00704A8A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00704A8D  84 13                     TEST byte ptr [EBX],DL
00704A8F  75 1E                     JNZ 0x00704aaf
00704A91  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704A94  33 C9                     XOR ECX,ECX
00704A96  66 8B 0B                  MOV CX,word ptr [EBX]
00704A99  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00704A9C  3B D9                     CMP EBX,ECX
00704A9E  77 0C                     JA 0x00704aac
00704AA0  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00704AA3  33 C9                     XOR ECX,ECX
00704AA5  8A 0E                     MOV CL,byte ptr [ESI]
00704AA7  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00704AAA  88 0F                     MOV byte ptr [EDI],CL
LAB_00704aac:
00704AAC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_00704aaf:
00704AAF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704AB2  83 C3 02                  ADD EBX,0x2
00704AB5  47                        INC EDI
00704AB6  46                        INC ESI
00704AB7  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704ABA  D1 EA                     SHR EDX,0x1
00704ABC  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00704ABF  75 0C                     JNZ 0x00704acd
00704AC1  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00704AC4  BA 80 00 00 00            MOV EDX,0x80
00704AC9  43                        INC EBX
00704ACA  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00704acd:
00704ACD  49                        DEC ECX
00704ACE  85 C9                     TEST ECX,ECX
00704AD0  0F 8E C6 00 00 00         JLE 0x00704b9c
00704AD6  49                        DEC ECX
00704AD7  EB 0F                     JMP 0x00704ae8
switchD_00704a13::caseD_4:
00704AD9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00704ADC  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00704ADF  49                        DEC ECX
00704AE0  EB 06                     JMP 0x00704ae8
LAB_00704ae2:
00704AE2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00704AE5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
switchD_00704a13::default:
00704AE8  85 C9                     TEST ECX,ECX
00704AEA  0F 8E AC 00 00 00         JLE 0x00704b9c
00704AF0  49                        DEC ECX
00704AF1  85 C9                     TEST ECX,ECX
00704AF3  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00704AF6  0F 8E A0 00 00 00         JLE 0x00704b9c
LAB_00704afc:
00704AFC  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00704AFF  84 13                     TEST byte ptr [EBX],DL
00704B01  75 1E                     JNZ 0x00704b21
00704B03  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704B06  33 C9                     XOR ECX,ECX
00704B08  66 8B 0B                  MOV CX,word ptr [EBX]
00704B0B  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00704B0E  3B D9                     CMP EBX,ECX
00704B10  77 0C                     JA 0x00704b1e
00704B12  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00704B15  33 C9                     XOR ECX,ECX
00704B17  8A 0E                     MOV CL,byte ptr [ESI]
00704B19  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00704B1C  88 0F                     MOV byte ptr [EDI],CL
LAB_00704b1e:
00704B1E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_00704b21:
00704B21  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704B24  83 C3 02                  ADD EBX,0x2
00704B27  47                        INC EDI
00704B28  46                        INC ESI
00704B29  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704B2C  D1 EA                     SHR EDX,0x1
00704B2E  75 0C                     JNZ 0x00704b3c
00704B30  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00704B33  BA 80 00 00 00            MOV EDX,0x80
00704B38  43                        INC EBX
00704B39  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00704b3c:
00704B3C  83 E9 02                  SUB ECX,0x2
00704B3F  85 C9                     TEST ECX,ECX
00704B41  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00704B44  7E 53                     JLE 0x00704b99
00704B46  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00704B49  84 13                     TEST byte ptr [EBX],DL
00704B4B  75 1E                     JNZ 0x00704b6b
00704B4D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704B50  33 C9                     XOR ECX,ECX
00704B52  66 8B 0B                  MOV CX,word ptr [EBX]
00704B55  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00704B58  3B D9                     CMP EBX,ECX
00704B5A  77 0C                     JA 0x00704b68
00704B5C  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00704B5F  33 C9                     XOR ECX,ECX
00704B61  8A 0E                     MOV CL,byte ptr [ESI]
00704B63  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00704B66  88 0F                     MOV byte ptr [EDI],CL
LAB_00704b68:
00704B68  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_00704b6b:
00704B6B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704B6E  83 C3 02                  ADD EBX,0x2
00704B71  47                        INC EDI
00704B72  46                        INC ESI
00704B73  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704B76  D1 EA                     SHR EDX,0x1
00704B78  75 0C                     JNZ 0x00704b86
00704B7A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00704B7D  BA 80 00 00 00            MOV EDX,0x80
00704B82  43                        INC EBX
00704B83  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00704b86:
00704B86  83 E9 02                  SUB ECX,0x2
00704B89  85 C9                     TEST ECX,ECX
00704B8B  7E 0C                     JLE 0x00704b99
00704B8D  49                        DEC ECX
00704B8E  85 C9                     TEST ECX,ECX
00704B90  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00704B93  0F 8F 63 FF FF FF         JG 0x00704afc
LAB_00704b99:
00704B99  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_00704b9c:
00704B9C  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
00704B9F  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
00704BA2  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
00704BA5  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00704BA8  2B CF                     SUB ECX,EDI
00704BAA  2B CE                     SUB ECX,ESI
00704BAC  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00704BAF  3B C1                     CMP EAX,ECX
00704BB1  7D 2E                     JGE 0x00704be1
LAB_00704bb3:
00704BB3  81 E2 C0 00 00 00         AND EDX,0xc0
00704BB9  2B C8                     SUB ECX,EAX
00704BBB  80 FA 80                  CMP DL,0x80
00704BBE  75 02                     JNZ 0x00704bc2
00704BC0  03 F0                     ADD ESI,EAX
LAB_00704bc2:
00704BC2  33 D2                     XOR EDX,EDX
00704BC4  8A 16                     MOV DL,byte ptr [ESI]
00704BC6  8B C2                     MOV EAX,EDX
00704BC8  24 80                     AND AL,0x80
00704BCA  46                        INC ESI
00704BCB  84 C0                     TEST AL,AL
00704BCD  8B C2                     MOV EAX,EDX
00704BCF  74 09                     JZ 0x00704bda
00704BD1  83 E0 3F                  AND EAX,0x3f
00704BD4  F6 C2 40                  TEST DL,0x40
00704BD7  74 01                     JZ 0x00704bda
00704BD9  46                        INC ESI
LAB_00704bda:
00704BDA  3B C1                     CMP EAX,ECX
00704BDC  7C D5                     JL 0x00704bb3
00704BDE  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
LAB_00704be1:
00704BE1  81 E2 C0 00 00 00         AND EDX,0xc0
00704BE7  80 FA 80                  CMP DL,0x80
00704BEA  75 05                     JNZ 0x00704bf1
00704BEC  03 F1                     ADD ESI,ECX
00704BEE  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
LAB_00704bf1:
00704BF1  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
LAB_00704bf4:
00704BF4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00704BF7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00704BFA  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00704BFD  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00704C00  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
00704C03  03 C1                     ADD EAX,ECX
00704C05  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00704C08  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00704C0B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00704C0E  03 F9                     ADD EDI,ECX
00704C10  03 D8                     ADD EBX,EAX
00704C12  8B 45 48                  MOV EAX,dword ptr [EBP + 0x48]
00704C15  03 F0                     ADD ESI,EAX
00704C17  42                        INC EDX
00704C18  83 FA 04                  CMP EDX,0x4
00704C1B  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00704C1E  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
00704C21  89 75 44                  MOV dword ptr [EBP + 0x44],ESI
00704C24  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
00704C27  7E 05                     JLE 0x00704c2e
00704C29  33 D2                     XOR EDX,EDX
00704C2B  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
LAB_00704c2e:
00704C2E  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00704C31  48                        DEC EAX
00704C32  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00704C35  0F 89 5B F8 FF FF         JNS 0x00704496
00704C3B  5F                        POP EDI
00704C3C  5E                        POP ESI
00704C3D  5B                        POP EBX
LAB_00704c3e:
00704C3E  8B E5                     MOV ESP,EBP
00704C40  5D                        POP EBP
00704C41  C2 48 00                  RET 0x48
LAB_00704c44:
00704C44  85 C9                     TEST ECX,ECX
00704C46  0F 8E F0 00 00 00         JLE 0x00704d3c
00704C4C  49                        DEC ECX
00704C4D  83 F9 03                  CMP ECX,0x3
00704C50  0F 87 E6 00 00 00         JA 0x00704d3c
switchD_00704c56::switchD:
00704C56  FF 24 8D 60 4E 70 00      JMP dword ptr [ECX*0x4 + 0x704e60]
switchD_00704c56::caseD_1:
00704C5D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704C60  84 11                     TEST byte ptr [ECX],DL
00704C62  75 1E                     JNZ 0x00704c82
00704C64  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00704C67  33 C9                     XOR ECX,ECX
00704C69  66 8B 0E                  MOV CX,word ptr [ESI]
00704C6C  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00704C6F  3B F1                     CMP ESI,ECX
00704C71  77 0F                     JA 0x00704c82
00704C73  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00704C76  33 C9                     XOR ECX,ECX
00704C78  8A 0E                     MOV CL,byte ptr [ESI]
00704C7A  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00704C7D  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00704C80  88 0F                     MOV byte ptr [EDI],CL
LAB_00704c82:
00704C82  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00704C85  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00704C88  83 C1 02                  ADD ECX,0x2
00704C8B  47                        INC EDI
00704C8C  46                        INC ESI
00704C8D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00704C90  D1 EA                     SHR EDX,0x1
00704C92  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00704C95  75 0C                     JNZ 0x00704ca3
00704C97  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704C9A  BA 80 00 00 00            MOV EDX,0x80
00704C9F  41                        INC ECX
00704CA0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00704ca3:
00704CA3  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00704CA6  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00704CA9  41                        INC ECX
00704CAA  4E                        DEC ESI
00704CAB  85 F6                     TEST ESI,ESI
00704CAD  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704CB0  0F 8E E6 FE FF FF         JLE 0x00704b9c
00704CB6  EB 03                     JMP 0x00704cbb
switchD_00704c56::caseD_2:
00704CB8  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_00704cbb:
00704CBB  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00704CBE  41                        INC ECX
00704CBF  4E                        DEC ESI
00704CC0  85 F6                     TEST ESI,ESI
00704CC2  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704CC5  0F 8E D1 FE FF FF         JLE 0x00704b9c
00704CCB  EB 03                     JMP 0x00704cd0
switchD_00704c56::caseD_3:
00704CCD  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_00704cd0:
00704CD0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704CD3  84 11                     TEST byte ptr [ECX],DL
00704CD5  75 1E                     JNZ 0x00704cf5
00704CD7  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704CDA  33 C9                     XOR ECX,ECX
00704CDC  66 8B 0B                  MOV CX,word ptr [EBX]
00704CDF  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00704CE2  3B D9                     CMP EBX,ECX
00704CE4  77 0F                     JA 0x00704cf5
00704CE6  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00704CE9  33 C9                     XOR ECX,ECX
00704CEB  8A 0B                     MOV CL,byte ptr [EBX]
00704CED  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00704CF0  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00704CF3  88 0F                     MOV byte ptr [EDI],CL
LAB_00704cf5:
00704CF5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704CF8  83 C3 02                  ADD EBX,0x2
00704CFB  47                        INC EDI
00704CFC  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704CFF  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00704D02  43                        INC EBX
00704D03  D1 EA                     SHR EDX,0x1
00704D05  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00704D08  75 0C                     JNZ 0x00704d16
00704D0A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704D0D  BA 80 00 00 00            MOV EDX,0x80
00704D12  41                        INC ECX
00704D13  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00704d16:
00704D16  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00704D19  41                        INC ECX
00704D1A  4E                        DEC ESI
00704D1B  85 F6                     TEST ESI,ESI
00704D1D  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704D20  0F 8E 76 FE FF FF         JLE 0x00704b9c
00704D26  8B D9                     MOV EBX,ECX
00704D28  43                        INC EBX
00704D29  4E                        DEC ESI
00704D2A  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00704D2D  EB 10                     JMP 0x00704d3f
switchD_00704c56::caseD_4:
00704D2F  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00704D32  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00704D35  43                        INC EBX
00704D36  4E                        DEC ESI
00704D37  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00704D3A  EB 03                     JMP 0x00704d3f
LAB_00704d3c:
00704D3C  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
switchD_00704c56::default:
00704D3F  85 F6                     TEST ESI,ESI
00704D41  0F 8E 55 FE FF FF         JLE 0x00704b9c
00704D47  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00704D4A  41                        INC ECX
00704D4B  4E                        DEC ESI
00704D4C  85 F6                     TEST ESI,ESI
00704D4E  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704D51  0F 8E 45 FE FF FF         JLE 0x00704b9c
LAB_00704d57:
00704D57  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704D5A  84 11                     TEST byte ptr [ECX],DL
00704D5C  75 1E                     JNZ 0x00704d7c
00704D5E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704D61  33 C9                     XOR ECX,ECX
00704D63  66 8B 0B                  MOV CX,word ptr [EBX]
00704D66  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00704D69  3B D9                     CMP EBX,ECX
00704D6B  77 0F                     JA 0x00704d7c
00704D6D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00704D70  33 C9                     XOR ECX,ECX
00704D72  8A 0B                     MOV CL,byte ptr [EBX]
00704D74  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00704D77  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00704D7A  88 0F                     MOV byte ptr [EDI],CL
LAB_00704d7c:
00704D7C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704D7F  83 C3 02                  ADD EBX,0x2
00704D82  47                        INC EDI
00704D83  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704D86  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00704D89  43                        INC EBX
00704D8A  D1 EA                     SHR EDX,0x1
00704D8C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00704D8F  75 0C                     JNZ 0x00704d9d
00704D91  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704D94  BA 80 00 00 00            MOV EDX,0x80
00704D99  41                        INC ECX
00704D9A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00704d9d:
00704D9D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00704DA0  41                        INC ECX
00704DA1  4E                        DEC ESI
00704DA2  85 F6                     TEST ESI,ESI
00704DA4  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704DA7  0F 8E EF FD FF FF         JLE 0x00704b9c
00704DAD  41                        INC ECX
00704DAE  4E                        DEC ESI
00704DAF  85 F6                     TEST ESI,ESI
00704DB1  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704DB4  0F 8E E2 FD FF FF         JLE 0x00704b9c
00704DBA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704DBD  84 11                     TEST byte ptr [ECX],DL
00704DBF  75 1E                     JNZ 0x00704ddf
00704DC1  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704DC4  33 C9                     XOR ECX,ECX
00704DC6  66 8B 0B                  MOV CX,word ptr [EBX]
00704DC9  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00704DCC  3B D9                     CMP EBX,ECX
00704DCE  77 0F                     JA 0x00704ddf
00704DD0  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00704DD3  33 C9                     XOR ECX,ECX
00704DD5  8A 0B                     MOV CL,byte ptr [EBX]
00704DD7  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00704DDA  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00704DDD  88 0F                     MOV byte ptr [EDI],CL
LAB_00704ddf:
00704DDF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00704DE2  83 C3 02                  ADD EBX,0x2
00704DE5  47                        INC EDI
00704DE6  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00704DE9  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00704DEC  43                        INC EBX
00704DED  D1 EA                     SHR EDX,0x1
00704DEF  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00704DF2  75 0C                     JNZ 0x00704e00
00704DF4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00704DF7  BA 80 00 00 00            MOV EDX,0x80
00704DFC  41                        INC ECX
00704DFD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00704e00:
00704E00  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00704E03  41                        INC ECX
00704E04  4E                        DEC ESI
00704E05  85 F6                     TEST ESI,ESI
00704E07  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704E0A  0F 8E 8C FD FF FF         JLE 0x00704b9c
00704E10  41                        INC ECX
00704E11  4E                        DEC ESI
00704E12  85 F6                     TEST ESI,ESI
00704E14  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704E17  0F 8E 7F FD FF FF         JLE 0x00704b9c
00704E1D  41                        INC ECX
00704E1E  4E                        DEC ESI
00704E1F  85 F6                     TEST ESI,ESI
00704E21  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00704E24  0F 8F 2D FF FF FF         JG 0x00704d57
00704E2A  E9 6D FD FF FF            JMP 0x00704b9c
