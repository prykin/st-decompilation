FUN_005623c0:
005623C0  55                        PUSH EBP
005623C1  8B EC                     MOV EBP,ESP
005623C3  83 EC 44                  SUB ESP,0x44
005623C6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005623C9  8B 0D 0C 33 80 00         MOV ECX,dword ptr [0x0080330c]
005623CF  53                        PUSH EBX
005623D0  56                        PUSH ESI
005623D1  3B C1                     CMP EAX,ECX
005623D3  57                        PUSH EDI
005623D4  75 26                     JNZ 0x005623fc
005623D6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005623D9  8B 0D F4 32 80 00         MOV ECX,dword ptr [0x008032f4]
005623DF  8B 15 FC 32 80 00         MOV EDX,dword ptr [0x008032fc]
005623E5  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
005623E8  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
005623EF  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005623F2  8B 0C 10                  MOV ECX,dword ptr [EAX + EDX*0x1]
005623F5  A1 14 33 80 00            MOV EAX,[0x00803314]
005623FA  EB 24                     JMP 0x00562420
LAB_005623fc:
005623FC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005623FF  8B 0D F8 32 80 00         MOV ECX,dword ptr [0x008032f8]
00562405  8B 15 B8 33 80 00         MOV EDX,dword ptr [0x008033b8]
0056240B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0056240E  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
00562415  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00562418  8B 0C 10                  MOV ECX,dword ptr [EAX + EDX*0x1]
0056241B  A1 7C 33 80 00            MOV EAX,[0x0080337c]
LAB_00562420:
00562420  A3 98 33 80 00            MOV [0x00803398],EAX
00562425  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00562428  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0056242B  C1 E0 03                  SHL EAX,0x3
0056242E  99                        CDQ
0056242F  83 E2 0F                  AND EDX,0xf
00562432  03 C2                     ADD EAX,EDX
00562434  C1 F8 04                  SAR EAX,0x4
00562437  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0056243A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0056243D  2B C6                     SUB EAX,ESI
0056243F  99                        CDQ
00562440  33 C2                     XOR EAX,EDX
00562442  2B C2                     SUB EAX,EDX
00562444  83 F8 08                  CMP EAX,0x8
00562447  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0056244A  7E 0A                     JLE 0x00562456
0056244C  BA 10 00 00 00            MOV EDX,0x10
00562451  2B D0                     SUB EDX,EAX
00562453  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
LAB_00562456:
00562456  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00562459  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0056245C  03 C2                     ADD EAX,EDX
0056245E  8B 35 80 33 80 00         MOV ESI,dword ptr [0x00803380]
00562464  8B D0                     MOV EDX,EAX
00562466  33 FF                     XOR EDI,EDI
00562468  0F AF 15 A4 33 80 00      IMUL EDX,dword ptr [0x008033a4]
0056246F  33 DB                     XOR EBX,EBX
00562471  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00562474  8D 14 56                  LEA EDX,[ESI + EDX*0x2]
00562477  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0056247A  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0056247D  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00562480  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00562483  3B D7                     CMP EDX,EDI
00562485  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00562488  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0056248B  0F 8E CF 00 00 00         JLE 0x00562560
00562491  83 C1 14                  ADD ECX,0x14
00562494  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00562497  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0056249a:
0056249A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0056249D  85 C0                     TEST EAX,EAX
0056249F  0F 8C 90 00 00 00         JL 0x00562535
005624A5  3B 05 A8 33 80 00         CMP EAX,dword ptr [0x008033a8]
005624AB  0F 8D 84 00 00 00         JGE 0x00562535
005624B1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005624B4  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005624B7  8B 09                     MOV ECX,dword ptr [ECX]
005624B9  03 C2                     ADD EAX,EDX
005624BB  03 CA                     ADD ECX,EDX
005624BD  3B C8                     CMP ECX,EAX
005624BF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005624C2  7F 71                     JG 0x00562535
005624C4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005624C7  8D 34 4A                  LEA ESI,[EDX + ECX*0x2]
LAB_005624ca:
005624CA  85 C9                     TEST ECX,ECX
005624CC  7C 5C                     JL 0x0056252a
005624CE  3B 0D A4 33 80 00         CMP ECX,dword ptr [0x008033a4]
005624D4  7D 54                     JGE 0x0056252a
005624D6  8A 06                     MOV AL,byte ptr [ESI]
005624D8  8A D0                     MOV DL,AL
005624DA  80 E2 07                  AND DL,0x7
005624DD  80 FA 03                  CMP DL,0x3
005624E0  73 1B                     JNC 0x005624fd
005624E2  25 FF 00 00 00            AND EAX,0xff
005624E7  8B D0                     MOV EDX,EAX
005624E9  83 E0 07                  AND EAX,0x7
005624EC  C1 EA 04                  SHR EDX,0x4
005624EF  D1 E2                     SHL EDX,0x1
005624F1  2B C2                     SUB EAX,EDX
005624F3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005624F6  03 D0                     ADD EDX,EAX
005624F8  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005624FB  EB 19                     JMP 0x00562516
LAB_005624fd:
005624FD  25 FF 00 00 00            AND EAX,0xff
00562502  BA 05 00 00 00            MOV EDX,0x5
00562507  C1 E8 04                  SHR EAX,0x4
0056250A  D1 E0                     SHL EAX,0x1
0056250C  2B D0                     SUB EDX,EAX
0056250E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00562511  03 C2                     ADD EAX,EDX
00562513  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00562516:
00562516  33 C0                     XOR EAX,EAX
00562518  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0056251B  3B D8                     CMP EBX,EAX
0056251D  7D 08                     JGE 0x00562527
0056251F  8B D8                     MOV EBX,EAX
00562521  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00562524  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_00562527:
00562527  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_0056252a:
0056252A  41                        INC ECX
0056252B  83 C6 02                  ADD ESI,0x2
0056252E  3B C8                     CMP ECX,EAX
00562530  7E 98                     JLE 0x005624ca
00562532  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_00562535:
00562535  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00562538  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0056253B  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0056253E  83 C1 08                  ADD ECX,0x8
00562541  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00562544  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0056254A  47                        INC EDI
0056254B  46                        INC ESI
0056254C  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
0056254F  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00562552  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00562555  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00562558  3B F8                     CMP EDI,EAX
0056255A  0F 8C 3A FF FF FF         JL 0x0056249a
LAB_00562560:
00562560  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00562563  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00562566  A1 08 33 80 00            MOV EAX,[0x00803308]
0056256B  51                        PUSH ECX
0056256C  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00562572  52                        PUSH EDX
00562573  50                        PUSH EAX
00562574  51                        PUSH ECX
00562575  E8 2F 1E EA FF            CALL 0x004043a9
0056257A  8B 15 84 33 80 00         MOV EDX,dword ptr [0x00803384]
00562580  8D 4A 02                  LEA ECX,[EDX + 0x2]
00562583  0F AF 0D 20 33 80 00      IMUL ECX,dword ptr [0x00803320]
0056258A  3B C1                     CMP EAX,ECX
0056258C  7D 02                     JGE 0x00562590
0056258E  8B C1                     MOV EAX,ECX
LAB_00562590:
00562590  0F AF C3                  IMUL EAX,EBX
00562593  99                        CDQ
00562594  F7 3D 90 33 80 00         IDIV dword ptr [0x00803390]
0056259A  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0056259D  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
005625A0  57                        PUSH EDI
005625A1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005625A4  A1 B0 33 80 00            MOV EAX,[0x008033b0]
005625A9  8B 14 01                  MOV EDX,dword ptr [ECX + EAX*0x1]
005625AC  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005625AF  E8 1C 91 17 00            CALL 0x006db6d0
005625B4  8B F0                     MOV ESI,EAX
005625B6  57                        PUSH EDI
005625B7  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
005625BA  E8 81 90 17 00            CALL 0x006db640
005625BF  8B F8                     MOV EDI,EAX
005625C1  A1 54 33 80 00            MOV EAX,[0x00803354]
005625C6  F7 DF                     NEG EDI
005625C8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005625CB  8B C8                     MOV ECX,EAX
005625CD  0F AF C7                  IMUL EAX,EDI
005625D0  0F AF CE                  IMUL ECX,ESI
005625D3  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005625D6  8B 15 08 33 80 00         MOV EDX,dword ptr [0x00803308]
005625DC  C1 E6 10                  SHL ESI,0x10
005625DF  C1 E3 10                  SHL EBX,0x10
005625E2  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
005625E5  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
005625E8  2B F0                     SUB ESI,EAX
005625EA  A1 04 33 80 00            MOV EAX,[0x00803304]
005625EF  2B D9                     SUB EBX,ECX
005625F1  52                        PUSH EDX
005625F2  C1 FE 10                  SAR ESI,0x10
005625F5  C1 FB 10                  SAR EBX,0x10
005625F8  50                        PUSH EAX
005625F9  56                        PUSH ESI
005625FA  53                        PUSH EBX
005625FB  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
005625FE  E8 8D A9 14 00            CALL 0x006acf90
00562603  3B 05 58 33 80 00         CMP EAX,dword ptr [0x00803358]
00562609  0F 8C 02 01 00 00         JL 0x00562711
0056260F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00562612  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00562619  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0056261C  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
0056261F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00562622  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
00562625  8B 35 80 33 80 00         MOV ESI,dword ptr [0x00803380]
0056262B  8B D0                     MOV EDX,EAX
0056262D  0F AF 15 A4 33 80 00      IMUL EDX,dword ptr [0x008033a4]
00562634  8D 14 56                  LEA EDX,[ESI + EDX*0x2]
00562637  33 F6                     XOR ESI,ESI
00562639  85 C9                     TEST ECX,ECX
0056263B  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0056263E  0F 8E 87 00 00 00         JLE 0x005626cb
00562644  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00562647  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0056264A  83 C1 14                  ADD ECX,0x14
0056264D  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_00562650:
00562650  85 C0                     TEST EAX,EAX
00562652  7C 53                     JL 0x005626a7
00562654  3B 05 A8 33 80 00         CMP EAX,dword ptr [0x008033a8]
0056265A  7D 4B                     JGE 0x005626a7
0056265C  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
0056265F  8B C3                     MOV EAX,EBX
00562661  03 01                     ADD EAX,dword ptr [ECX]
00562663  03 FB                     ADD EDI,EBX
00562665  3B C7                     CMP EAX,EDI
00562667  7F 3E                     JG 0x005626a7
00562669  8D 54 42 01               LEA EDX,[EDX + EAX*0x2 + 0x1]
0056266D  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
LAB_00562670:
00562670  85 C0                     TEST EAX,EAX
00562672  7C 1F                     JL 0x00562693
00562674  3B 05 A4 33 80 00         CMP EAX,dword ptr [0x008033a4]
0056267A  7D 17                     JGE 0x00562693
0056267C  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0056267F  33 C9                     XOR ECX,ECX
00562681  8A 0A                     MOV CL,byte ptr [EDX]
00562683  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00562686  3B D1                     CMP EDX,ECX
00562688  7D 09                     JGE 0x00562693
0056268A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0056268D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00562690  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_00562693:
00562693  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00562696  40                        INC EAX
00562697  83 C2 02                  ADD EDX,0x2
0056269A  3B C7                     CMP EAX,EDI
0056269C  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0056269F  7E CF                     JLE 0x00562670
005626A1  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005626A4  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
LAB_005626a7:
005626A7  8B 3D A4 33 80 00         MOV EDI,dword ptr [0x008033a4]
005626AD  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
005626B0  46                        INC ESI
005626B1  40                        INC EAX
005626B2  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
005626B5  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
005626B8  83 C1 08                  ADD ECX,0x8
005626BB  3B F7                     CMP ESI,EDI
005626BD  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005626C0  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
005626C3  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005626C6  7C 88                     JL 0x00562650
005626C8  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
LAB_005626cb:
005626CB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005626CE  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005626D1  8B 15 08 33 80 00         MOV EDX,dword ptr [0x00803308]
005626D7  50                        PUSH EAX
005626D8  A1 04 33 80 00            MOV EAX,[0x00803304]
005626DD  51                        PUSH ECX
005626DE  52                        PUSH EDX
005626DF  50                        PUSH EAX
005626E0  E8 C4 1C EA FF            CALL 0x004043a9
005626E5  8B 15 84 33 80 00         MOV EDX,dword ptr [0x00803384]
005626EB  8B C8                     MOV ECX,EAX
005626ED  8D 42 02                  LEA EAX,[EDX + 0x2]
005626F0  0F AF 05 20 33 80 00      IMUL EAX,dword ptr [0x00803320]
005626F7  3B C8                     CMP ECX,EAX
005626F9  7D 02                     JGE 0x005626fd
005626FB  8B C8                     MOV ECX,EAX
LAB_005626fd:
005626FD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00562700  0F AF C1                  IMUL EAX,ECX
00562703  99                        CDQ
00562704  F7 3D 90 33 80 00         IDIV dword ptr [0x00803390]
0056270A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056270D  03 C8                     ADD ECX,EAX
0056270F  EB 06                     JMP 0x00562717
LAB_00562711:
00562711  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00562714  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
LAB_00562717:
00562717  A1 54 33 80 00            MOV EAX,[0x00803354]
0056271C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0056271F  8B C8                     MOV ECX,EAX
00562721  0F AF C7                  IMUL EAX,EDI
00562724  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00562727  0F AF 4D C4               IMUL ECX,dword ptr [EBP + -0x3c]
0056272B  03 C2                     ADD EAX,EDX
0056272D  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00562730  C1 F8 10                  SAR EAX,0x10
00562733  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00562736  8B 3D 80 33 80 00         MOV EDI,dword ptr [0x00803380]
0056273C  03 C6                     ADD EAX,ESI
0056273E  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
00562741  8B F0                     MOV ESI,EAX
00562743  8B 52 10                  MOV EDX,dword ptr [EDX + 0x10]
00562746  0F AF 35 A4 33 80 00      IMUL ESI,dword ptr [0x008033a4]
0056274D  03 CB                     ADD ECX,EBX
0056274F  33 DB                     XOR EBX,EBX
00562751  8D 34 77                  LEA ESI,[EDI + ESI*0x2]
00562754  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00562757  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
0056275A  33 F6                     XOR ESI,ESI
0056275C  C1 F9 10                  SAR ECX,0x10
0056275F  85 D2                     TEST EDX,EDX
00562761  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00562764  0F 8E 9C 00 00 00         JLE 0x00562806
0056276A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0056276D  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00562770  83 C2 14                  ADD EDX,0x14
00562773  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00562776  8B FA                     MOV EDI,EDX
LAB_00562778:
00562778  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0056277B  85 C0                     TEST EAX,EAX
0056277D  7C 60                     JL 0x005627df
0056277F  3B 05 A8 33 80 00         CMP EAX,dword ptr [0x008033a8]
00562785  7D 58                     JGE 0x005627df
00562787  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
0056278A  8B 07                     MOV EAX,dword ptr [EDI]
0056278C  03 D1                     ADD EDX,ECX
0056278E  03 C1                     ADD EAX,ECX
00562790  3B C2                     CMP EAX,EDX
00562792  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00562795  7F 48                     JG 0x005627df
00562797  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0056279A  8D 7C 47 01               LEA EDI,[EDI + EAX*0x2 + 0x1]
LAB_0056279e:
0056279E  85 C0                     TEST EAX,EAX
005627A0  7C 32                     JL 0x005627d4
005627A2  3B 05 A4 33 80 00         CMP EAX,dword ptr [0x008033a4]
005627A8  7D 2A                     JGE 0x005627d4
005627AA  33 D2                     XOR EDX,EDX
005627AC  8A 17                     MOV DL,byte ptr [EDI]
005627AE  3B DA                     CMP EBX,EDX
005627B0  7D 09                     JGE 0x005627bb
005627B2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005627B5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005627B8  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_005627bb:
005627BB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005627BE  33 D2                     XOR EDX,EDX
005627C0  8A 57 FF                  MOV DL,byte ptr [EDI + -0x1]
005627C3  C1 EA 04                  SHR EDX,0x4
005627C6  F7 DA                     NEG EDX
005627C8  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
005627CB  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005627CE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005627D1  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
LAB_005627d4:
005627D4  40                        INC EAX
005627D5  83 C7 02                  ADD EDI,0x2
005627D8  3B C2                     CMP EAX,EDX
005627DA  7E C2                     JLE 0x0056279e
005627DC  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
LAB_005627df:
005627DF  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
005627E2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005627E5  46                        INC ESI
005627E6  40                        INC EAX
005627E7  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005627EA  A1 A4 33 80 00            MOV EAX,[0x008033a4]
005627EF  83 C7 08                  ADD EDI,0x8
005627F2  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
005627F5  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
005627F8  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
005627FB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005627FE  3B F0                     CMP ESI,EAX
00562800  0F 8C 72 FF FF FF         JL 0x00562778
LAB_00562806:
00562806  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00562809  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0056280C  A1 08 33 80 00            MOV EAX,[0x00803308]
00562811  51                        PUSH ECX
00562812  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00562818  52                        PUSH EDX
00562819  50                        PUSH EAX
0056281A  51                        PUSH ECX
0056281B  E8 89 1B EA FF            CALL 0x004043a9
00562820  8B 15 84 33 80 00         MOV EDX,dword ptr [0x00803384]
00562826  8B C8                     MOV ECX,EAX
00562828  8D 42 02                  LEA EAX,[EDX + 0x2]
0056282B  0F AF 05 20 33 80 00      IMUL EAX,dword ptr [0x00803320]
00562832  3B C8                     CMP ECX,EAX
00562834  7D 02                     JGE 0x00562838
00562836  8B C8                     MOV ECX,EAX
LAB_00562838:
00562838  8B C3                     MOV EAX,EBX
0056283A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0056283D  0F AF C1                  IMUL EAX,ECX
00562840  99                        CDQ
00562841  F7 3D 90 33 80 00         IDIV dword ptr [0x00803390]
00562847  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0056284A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0056284D  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00562853  56                        PUSH ESI
00562854  57                        PUSH EDI
00562855  03 D8                     ADD EBX,EAX
00562857  A1 08 33 80 00            MOV EAX,[0x00803308]
0056285C  50                        PUSH EAX
0056285D  51                        PUSH ECX
0056285E  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00562861  E8 43 1B EA FF            CALL 0x004043a9
00562866  8B 15 A4 33 80 00         MOV EDX,dword ptr [0x008033a4]
0056286C  8B 0D B4 33 80 00         MOV ECX,dword ptr [0x008033b4]
00562872  0F AF D6                  IMUL EDX,ESI
00562875  03 D7                     ADD EDX,EDI
00562877  33 F6                     XOR ESI,ESI
00562879  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
0056287C  66 8B 09                  MOV CX,word ptr [ECX]
0056287F  66 85 C9                  TEST CX,CX
00562882  74 1B                     JZ 0x0056289f
00562884  66 83 F9 FF               CMP CX,-0x1
00562888  74 15                     JZ 0x0056289f
0056288A  8B 35 9C 33 80 00         MOV ESI,dword ptr [0x0080339c]
00562890  0F AF 35 20 33 80 00      IMUL ESI,dword ptr [0x00803320]
00562897  0F BF D1                  MOVSX EDX,CX
0056289A  03 F2                     ADD ESI,EDX
0056289C  2B F0                     SUB ESI,EAX
0056289E  4E                        DEC ESI
LAB_0056289f:
0056289F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005628A2  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005628A5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005628A8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005628AB  99                        CDQ
005628AC  F7 39                     IDIV dword ptr [ECX]
005628AE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005628B1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005628B4  52                        PUSH EDX
005628B5  8B F8                     MOV EDI,EAX
005628B7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005628BA  50                        PUSH EAX
005628BB  51                        PUSH ECX
005628BC  E8 0F 04 00 00            CALL 0x00562cd0
005628C1  8B 1D 88 33 80 00         MOV EBX,dword ptr [0x00803388]
005628C7  8B 15 3C 33 80 00         MOV EDX,dword ptr [0x0080333c]
005628CD  0F AF 1D 40 33 80 00      IMUL EBX,dword ptr [0x00803340]
005628D4  0F AF D6                  IMUL EDX,ESI
005628D7  8B 0D 38 33 80 00         MOV ECX,dword ptr [0x00803338]
005628DD  2B DA                     SUB EBX,EDX
005628DF  0F AF 4D CC               IMUL ECX,dword ptr [EBP + -0x34]
005628E3  8B 15 34 33 80 00         MOV EDX,dword ptr [0x00803334]
005628E9  2B D9                     SUB EBX,ECX
005628EB  8B 0D 2C 33 80 00         MOV ECX,dword ptr [0x0080332c]
005628F1  0F AF D0                  IMUL EDX,EAX
005628F4  A1 30 33 80 00            MOV EAX,[0x00803330]
005628F9  0F AF CF                  IMUL ECX,EDI
005628FC  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
00562900  03 DA                     ADD EBX,EDX
00562902  03 D8                     ADD EBX,EAX
00562904  03 D9                     ADD EBX,ECX
00562906  79 02                     JNS 0x0056290a
00562908  33 DB                     XOR EBX,EBX
LAB_0056290a:
0056290A  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
00562910  33 FF                     XOR EDI,EDI
00562912  85 C9                     TEST ECX,ECX
00562914  C7 45 D0 64 00 00 00      MOV dword ptr [EBP + -0x30],0x64
0056291B  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0056291E  0F 8E 1D 01 00 00         JLE 0x00562a41
00562924  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00562927  8D 72 0C                  LEA ESI,[EDX + 0xc]
LAB_0056292a:
0056292A  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
0056292D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00562930  2B C2                     SUB EAX,EDX
00562932  99                        CDQ
00562933  33 C2                     XOR EAX,EDX
00562935  2B C2                     SUB EAX,EDX
00562937  85 C0                     TEST EAX,EAX
00562939  7F 35                     JG 0x00562970
0056293B  8B 46 F8                  MOV EAX,dword ptr [ESI + -0x8]
0056293E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00562941  2B C2                     SUB EAX,EDX
00562943  99                        CDQ
00562944  33 C2                     XOR EAX,EDX
00562946  2B C2                     SUB EAX,EDX
00562948  85 C0                     TEST EAX,EAX
0056294A  7F 24                     JG 0x00562970
0056294C  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
0056294F  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00562952  2B C2                     SUB EAX,EDX
00562954  99                        CDQ
00562955  33 C2                     XOR EAX,EDX
00562957  2B C2                     SUB EAX,EDX
00562959  83 F8 17                  CMP EAX,0x17
0056295C  7E 07                     JLE 0x00562965
0056295E  3D 51 01 00 00            CMP EAX,0x151
00562963  7C 0B                     JL 0x00562970
LAB_00562965:
00562965  3B 1E                     CMP EBX,dword ptr [ESI]
00562967  0F 8E B9 00 00 00         JLE 0x00562a26
0056296D  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
LAB_00562970:
00562970  3B 1E                     CMP EBX,dword ptr [ESI]
00562972  7F 17                     JG 0x0056298b
00562974  3B CF                     CMP ECX,EDI
00562976  74 16                     JZ 0x0056298e
00562978  39 7D D0                  CMP dword ptr [EBP + -0x30],EDI
0056297B  74 11                     JZ 0x0056298e
0056297D  47                        INC EDI
0056297E  83 C6 14                  ADD ESI,0x14
00562981  3B F9                     CMP EDI,ECX
00562983  0F 8D B8 00 00 00         JGE 0x00562a41
00562989  EB 9F                     JMP 0x0056292a
LAB_0056298b:
0056298B  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
LAB_0056298e:
0056298E  47                        INC EDI
0056298F  3B F9                     CMP EDI,ECX
00562991  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00562994  0F 8D A7 00 00 00         JGE 0x00562a41
0056299A  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0056299D  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
005629A0  8D 74 82 08               LEA ESI,[EDX + EAX*0x4 + 0x8]
005629A4  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
LAB_005629a7:
005629A7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005629AA  8D 46 F8                  LEA EAX,[ESI + -0x8]
005629AD  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005629B0  8B 00                     MOV EAX,dword ptr [EAX]
005629B2  2B C2                     SUB EAX,EDX
005629B4  99                        CDQ
005629B5  33 C2                     XOR EAX,EDX
005629B7  2B C2                     SUB EAX,EDX
005629B9  85 C0                     TEST EAX,EAX
005629BB  7F 72                     JG 0x00562a2f
005629BD  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
005629C0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005629C3  2B C2                     SUB EAX,EDX
005629C5  99                        CDQ
005629C6  33 C2                     XOR EAX,EDX
005629C8  2B C2                     SUB EAX,EDX
005629CA  85 C0                     TEST EAX,EAX
005629CC  7F 61                     JG 0x00562a2f
005629CE  8B 06                     MOV EAX,dword ptr [ESI]
005629D0  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
005629D3  2B C2                     SUB EAX,EDX
005629D5  99                        CDQ
005629D6  33 C2                     XOR EAX,EDX
005629D8  2B C2                     SUB EAX,EDX
005629DA  83 F8 17                  CMP EAX,0x17
005629DD  7E 07                     JLE 0x005629e6
005629DF  3D 51 01 00 00            CMP EAX,0x151
005629E4  7C 49                     JL 0x00562a2f
LAB_005629e6:
005629E6  8D 41 FF                  LEA EAX,[ECX + -0x1]
005629E9  3B F8                     CMP EDI,EAX
005629EB  7D 30                     JGE 0x00562a1d
005629ED  8B C1                     MOV EAX,ECX
005629EF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005629F2  2B C1                     SUB EAX,ECX
005629F4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005629F7  48                        DEC EAX
005629F8  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
005629FB  8D 72 0C                  LEA ESI,[EDX + 0xc]
005629FE  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00562A01  C1 E1 02                  SHL ECX,0x2
00562A04  8B C1                     MOV EAX,ECX
00562A06  C1 E9 02                  SHR ECX,0x2
00562A09  F3 A5                     MOVSD.REP ES:EDI,ESI
00562A0B  8B C8                     MOV ECX,EAX
00562A0D  83 E1 03                  AND ECX,0x3
00562A10  F3 A4                     MOVSB.REP ES:EDI,ESI
00562A12  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
00562A18  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00562A1B  8B F2                     MOV ESI,EDX
LAB_00562a1d:
00562A1D  49                        DEC ECX
00562A1E  89 0D 98 33 80 00         MOV dword ptr [0x00803398],ECX
00562A24  EB 13                     JMP 0x00562a39
LAB_00562a26:
00562A26  C7 45 D4 64 00 00 00      MOV dword ptr [EBP + -0x2c],0x64
00562A2D  EB 12                     JMP 0x00562a41
LAB_00562a2f:
00562A2F  47                        INC EDI
00562A30  83 C6 14                  ADD ESI,0x14
00562A33  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00562A36  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
LAB_00562a39:
00562A39  3B F9                     CMP EDI,ECX
00562A3B  0F 8C 66 FF FF FF         JL 0x005629a7
LAB_00562a41:
00562A41  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00562A44  3B C1                     CMP EAX,ECX
00562A46  8B F0                     MOV ESI,EAX
00562A48  7C 03                     JL 0x00562a4d
00562A4A  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
LAB_00562a4d:
00562A4D  83 FE 64                  CMP ESI,0x64
00562A50  7D 6F                     JGE 0x00562ac1
00562A52  3B C1                     CMP EAX,ECX
00562A54  7C 46                     JL 0x00562a9c
00562A56  83 F9 64                  CMP ECX,0x64
00562A59  7C 0B                     JL 0x00562a66
00562A5B  B9 63 00 00 00            MOV ECX,0x63
00562A60  89 0D 98 33 80 00         MOV dword ptr [0x00803398],ECX
LAB_00562a66:
00562A66  3B F1                     CMP ESI,ECX
00562A68  7D 2B                     JGE 0x00562a95
00562A6A  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00562A6D  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00562A70  C1 E0 02                  SHL EAX,0x2
00562A73  C1 E1 02                  SHL ECX,0x2
00562A76  2B C8                     SUB ECX,EAX
00562A78  8D 54 B6 05               LEA EDX,[ESI + ESI*0x4 + 0x5]
00562A7C  51                        PUSH ECX
00562A7D  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00562A80  03 C1                     ADD EAX,ECX
00562A82  50                        PUSH EAX
00562A83  8D 04 91                  LEA EAX,[ECX + EDX*0x4]
00562A86  50                        PUSH EAX
00562A87  E8 E4 AF 1C 00            CALL 0x0072da70
00562A8C  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
00562A92  83 C4 0C                  ADD ESP,0xc
LAB_00562a95:
00562A95  41                        INC ECX
00562A96  89 0D 98 33 80 00         MOV dword ptr [0x00803398],ECX
LAB_00562a9c:
00562A9C  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00562A9F  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
00562AA2  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
00562AA5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00562AA8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00562AAB  89 08                     MOV dword ptr [EAX],ECX
00562AAD  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00562AB0  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00562AB3  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00562AB6  89 58 0C                  MOV dword ptr [EAX + 0xc],EBX
00562AB9  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
00562ABF  EB 03                     JMP 0x00562ac4
LAB_00562ac1:
00562AC1  83 CB FF                  OR EBX,0xffffffff
LAB_00562ac4:
00562AC4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00562AC7  A1 0C 33 80 00            MOV EAX,[0x0080330c]
00562ACC  3B D0                     CMP EDX,EAX
00562ACE  75 11                     JNZ 0x00562ae1
00562AD0  5F                        POP EDI
00562AD1  8B C3                     MOV EAX,EBX
00562AD3  5E                        POP ESI
00562AD4  89 0D 14 33 80 00         MOV dword ptr [0x00803314],ECX
00562ADA  5B                        POP EBX
00562ADB  8B E5                     MOV ESP,EBP
00562ADD  5D                        POP EBP
00562ADE  C2 14 00                  RET 0x14
LAB_00562ae1:
00562AE1  5F                        POP EDI
00562AE2  8B C3                     MOV EAX,EBX
00562AE4  5E                        POP ESI
00562AE5  89 0D 7C 33 80 00         MOV dword ptr [0x0080337c],ECX
00562AEB  5B                        POP EBX
00562AEC  8B E5                     MOV ESP,EBP
00562AEE  5D                        POP EBP
00562AEF  C2 14 00                  RET 0x14
