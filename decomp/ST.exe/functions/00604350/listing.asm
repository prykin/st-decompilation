FUN_00604350:
00604350  55                        PUSH EBP
00604351  8B EC                     MOV EBP,ESP
00604353  83 EC 1C                  SUB ESP,0x1c
00604356  8B 91 F1 01 00 00         MOV EDX,dword ptr [ECX + 0x1f1]
0060435C  53                        PUSH EBX
0060435D  56                        PUSH ESI
0060435E  57                        PUSH EDI
0060435F  85 D2                     TEST EDX,EDX
00604361  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00604364  B8 79 19 8C 02            MOV EAX,0x28c1979
00604369  7C 13                     JL 0x0060437e
0060436B  F7 EA                     IMUL EDX
0060436D  D1 FA                     SAR EDX,0x1
0060436F  8B C2                     MOV EAX,EDX
00604371  C1 E8 1F                  SHR EAX,0x1f
00604374  03 D0                     ADD EDX,EAX
00604376  0F BF DA                  MOVSX EBX,DX
00604379  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0060437C  EB 14                     JMP 0x00604392
LAB_0060437e:
0060437E  F7 EA                     IMUL EDX
00604380  D1 FA                     SAR EDX,0x1
00604382  8B C2                     MOV EAX,EDX
00604384  C1 E8 1F                  SHR EAX,0x1f
00604387  03 D0                     ADD EDX,EAX
00604389  0F BF DA                  MOVSX EBX,DX
0060438C  8D 53 FF                  LEA EDX,[EBX + -0x1]
0060438F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00604392:
00604392  8B B9 F5 01 00 00         MOV EDI,dword ptr [ECX + 0x1f5]
00604398  B8 79 19 8C 02            MOV EAX,0x28c1979
0060439D  85 FF                     TEST EDI,EDI
0060439F  7C 13                     JL 0x006043b4
006043A1  F7 EF                     IMUL EDI
006043A3  D1 FA                     SAR EDX,0x1
006043A5  8B C2                     MOV EAX,EDX
006043A7  C1 E8 1F                  SHR EAX,0x1f
006043AA  03 D0                     ADD EDX,EAX
006043AC  0F BF F2                  MOVSX ESI,DX
006043AF  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006043B2  EB 14                     JMP 0x006043c8
LAB_006043b4:
006043B4  F7 EF                     IMUL EDI
006043B6  D1 FA                     SAR EDX,0x1
006043B8  8B C2                     MOV EAX,EDX
006043BA  C1 E8 1F                  SHR EAX,0x1f
006043BD  03 D0                     ADD EDX,EAX
006043BF  0F BF F2                  MOVSX ESI,DX
006043C2  8D 56 FF                  LEA EDX,[ESI + -0x1]
006043C5  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_006043c8:
006043C8  8B 89 F9 01 00 00         MOV ECX,dword ptr [ECX + 0x1f9]
006043CE  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006043D3  85 C9                     TEST ECX,ECX
006043D5  7C 14                     JL 0x006043eb
006043D7  F7 E9                     IMUL ECX
006043D9  C1 FA 06                  SAR EDX,0x6
006043DC  8B C2                     MOV EAX,EDX
006043DE  C1 E8 1F                  SHR EAX,0x1f
006043E1  03 D0                     ADD EDX,EAX
006043E3  0F BF CA                  MOVSX ECX,DX
006043E6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006043E9  EB 13                     JMP 0x006043fe
LAB_006043eb:
006043EB  F7 E9                     IMUL ECX
006043ED  C1 FA 06                  SAR EDX,0x6
006043F0  8B C2                     MOV EAX,EDX
006043F2  C1 E8 1F                  SHR EAX,0x1f
006043F5  03 D0                     ADD EDX,EAX
006043F7  0F BF C2                  MOVSX EAX,DX
006043FA  48                        DEC EAX
006043FB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006043fe:
006043FE  85 FF                     TEST EDI,EDI
00604400  7D 01                     JGE 0x00604403
00604402  4E                        DEC ESI
LAB_00604403:
00604403  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00604406  85 C0                     TEST EAX,EAX
00604408  8B C3                     MOV EAX,EBX
0060440A  7D 03                     JGE 0x0060440f
0060440C  8D 43 FF                  LEA EAX,[EBX + -0x1]
LAB_0060440f:
0060440F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00604415  8D 50 03                  LEA EDX,[EAX + 0x3]
00604418  3B 51 48                  CMP EDX,dword ptr [ECX + 0x48]
0060441B  0F 8C E7 02 00 00         JL 0x00604708
00604421  8B 79 58                  MOV EDI,dword ptr [ECX + 0x58]
00604424  8D 50 FD                  LEA EDX,[EAX + -0x3]
00604427  3B D7                     CMP EDX,EDI
00604429  0F 8F D9 02 00 00         JG 0x00604708
0060442F  8B 79 44                  MOV EDI,dword ptr [ECX + 0x44]
00604432  8D 56 03                  LEA EDX,[ESI + 0x3]
00604435  3B D7                     CMP EDX,EDI
00604437  0F 8C CB 02 00 00         JL 0x00604708
0060443D  8B 79 54                  MOV EDI,dword ptr [ECX + 0x54]
00604440  8D 56 FD                  LEA EDX,[ESI + -0x3]
00604443  3B D7                     CMP EDX,EDI
00604445  0F 8F BD 02 00 00         JG 0x00604708
0060444B  6A 03                     PUSH 0x3
0060444D  56                        PUSH ESI
0060444E  50                        PUSH EAX
0060444F  E8 7C 97 0D 00            CALL 0x006ddbd0
00604454  85 C0                     TEST EAX,EAX
00604456  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00604459  0F 84 B7 02 00 00         JZ 0x00604716
0060445F  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
00604465  85 F6                     TEST ESI,ESI
00604467  0F 84 A9 02 00 00         JZ 0x00604716
0060446D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00604470  8D 7A FD                  LEA EDI,[EDX + -0x3]
00604473  85 FF                     TEST EDI,EDI
00604475  7D 02                     JGE 0x00604479
00604477  33 FF                     XOR EDI,EDI
LAB_00604479:
00604479  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0060447C  8D 41 FD                  LEA EAX,[ECX + -0x3]
0060447F  85 C0                     TEST EAX,EAX
00604481  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00604484  7D 07                     JGE 0x0060448d
00604486  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0060448d:
0060448D  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
00604494  8D 5A 04                  LEA EBX,[EDX + 0x4]
00604497  3B D8                     CMP EBX,EAX
00604499  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0060449C  7E 03                     JLE 0x006044a1
0060449E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006044a1:
006044A1  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
006044A8  8D 59 04                  LEA EBX,[ECX + 0x4]
006044AB  3B D8                     CMP EBX,EAX
006044AD  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006044B0  7E 03                     JLE 0x006044b5
006044B2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006044b5:
006044B5  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
006044BC  0F 84 38 02 00 00         JZ 0x006046fa
006044C2  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
006044C8  85 C0                     TEST EAX,EAX
006044CA  0F 84 2A 02 00 00         JZ 0x006046fa
006044D0  8D 45 E8                  LEA EAX,[EBP + -0x18]
006044D3  50                        PUSH EAX
006044D4  8D 45 EC                  LEA EAX,[EBP + -0x14]
006044D7  50                        PUSH EAX
006044D8  52                        PUSH EDX
006044D9  51                        PUSH ECX
006044DA  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
006044E0  51                        PUSH ECX
006044E1  8B CE                     MOV ECX,ESI
006044E3  E8 6B FA DF FF            CALL 0x00403f53
006044E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006044EB  85 C0                     TEST EAX,EAX
006044ED  0F 8C 07 02 00 00         JL 0x006046fa
006044F3  83 F8 05                  CMP EAX,0x5
006044F6  0F 8D FE 01 00 00         JGE 0x006046fa
006044FC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006044FF  85 D2                     TEST EDX,EDX
00604501  0F 8C F3 01 00 00         JL 0x006046fa
00604507  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0060450A  3B D1                     CMP EDX,ECX
0060450C  0F 8D E8 01 00 00         JGE 0x006046fa
00604512  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
00604519  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0060451C  03 C3                     ADD EAX,EBX
0060451E  85 C0                     TEST EAX,EAX
00604520  0F 8C D4 01 00 00         JL 0x006046fa
00604526  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
00604529  0F 8D CB 01 00 00         JGE 0x006046fa
0060452F  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
00604532  85 F6                     TEST ESI,ESI
00604534  0F 84 C0 01 00 00         JZ 0x006046fa
0060453A  0F AF C1                  IMUL EAX,ECX
0060453D  03 C6                     ADD EAX,ESI
0060453F  33 C9                     XOR ECX,ECX
00604541  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00604544  8B C1                     MOV EAX,ECX
00604546  85 C0                     TEST EAX,EAX
00604548  0F 85 AC 01 00 00         JNZ 0x006046fa
0060454E  A0 4D 87 80 00            MOV AL,[0x0080874d]
00604553  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
00604559  3C FF                     CMP AL,0xff
0060455B  0F 84 99 01 00 00         JZ 0x006046fa
00604561  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
00604567  85 C0                     TEST EAX,EAX
00604569  0F 84 8B 01 00 00         JZ 0x006046fa
0060456F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00604572  8D 55 EC                  LEA EDX,[EBP + -0x14]
00604575  8D 45 E8                  LEA EAX,[EBP + -0x18]
00604578  52                        PUSH EDX
00604579  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
0060457F  50                        PUSH EAX
00604580  57                        PUSH EDI
00604581  51                        PUSH ECX
00604582  52                        PUSH EDX
00604583  8B CE                     MOV ECX,ESI
00604585  E8 C9 F9 DF FF            CALL 0x00403f53
0060458A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0060458D  85 C9                     TEST ECX,ECX
0060458F  0F 8C 65 01 00 00         JL 0x006046fa
00604595  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
00604598  3B CA                     CMP ECX,EDX
0060459A  0F 8D 5A 01 00 00         JGE 0x006046fa
006045A0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006045A3  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006045A6  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
006045AD  03 C3                     ADD EAX,EBX
006045AF  85 C0                     TEST EAX,EAX
006045B1  0F 8C 43 01 00 00         JL 0x006046fa
006045B7  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
006045BA  0F 8D 3A 01 00 00         JGE 0x006046fa
006045C0  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
006045C3  85 F6                     TEST ESI,ESI
006045C5  0F 84 2F 01 00 00         JZ 0x006046fa
006045CB  0F AF C2                  IMUL EAX,EDX
006045CE  03 C6                     ADD EAX,ESI
006045D0  33 D2                     XOR EDX,EDX
006045D2  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
006045D5  8B C2                     MOV EAX,EDX
006045D7  85 C0                     TEST EAX,EAX
006045D9  0F 85 1B 01 00 00         JNZ 0x006046fa
006045DF  A0 4D 87 80 00            MOV AL,[0x0080874d]
006045E4  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
006045EA  3C FF                     CMP AL,0xff
006045EC  0F 84 08 01 00 00         JZ 0x006046fa
006045F2  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
006045F8  85 C0                     TEST EAX,EAX
006045FA  0F 84 FA 00 00 00         JZ 0x006046fa
00604600  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00604603  8D 45 EC                  LEA EAX,[EBP + -0x14]
00604606  8D 4D E8                  LEA ECX,[EBP + -0x18]
00604609  50                        PUSH EAX
0060460A  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
00604610  51                        PUSH ECX
00604611  57                        PUSH EDI
00604612  52                        PUSH EDX
00604613  50                        PUSH EAX
00604614  8B CE                     MOV ECX,ESI
00604616  E8 38 F9 DF FF            CALL 0x00403f53
0060461B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0060461E  85 C9                     TEST ECX,ECX
00604620  0F 8C D4 00 00 00         JL 0x006046fa
00604626  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
00604629  3B CA                     CMP ECX,EDX
0060462B  0F 8D C9 00 00 00         JGE 0x006046fa
00604631  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00604634  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00604637  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0060463E  03 C7                     ADD EAX,EDI
00604640  85 C0                     TEST EAX,EAX
00604642  0F 8C B2 00 00 00         JL 0x006046fa
00604648  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0060464B  0F 8D A9 00 00 00         JGE 0x006046fa
00604651  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
00604654  85 F6                     TEST ESI,ESI
00604656  0F 84 9E 00 00 00         JZ 0x006046fa
0060465C  0F AF C2                  IMUL EAX,EDX
0060465F  03 C6                     ADD EAX,ESI
00604661  33 D2                     XOR EDX,EDX
00604663  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
00604666  8B C2                     MOV EAX,EDX
00604668  85 C0                     TEST EAX,EAX
0060466A  0F 85 8A 00 00 00         JNZ 0x006046fa
00604670  A0 4D 87 80 00            MOV AL,[0x0080874d]
00604675  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0060467B  3C FF                     CMP AL,0xff
0060467D  74 7B                     JZ 0x006046fa
0060467F  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
00604685  85 C0                     TEST EAX,EAX
00604687  74 71                     JZ 0x006046fa
00604689  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0060468C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0060468F  8D 45 EC                  LEA EAX,[EBP + -0x14]
00604692  8D 4D E8                  LEA ECX,[EBP + -0x18]
00604695  50                        PUSH EAX
00604696  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0060469C  51                        PUSH ECX
0060469D  57                        PUSH EDI
0060469E  52                        PUSH EDX
0060469F  50                        PUSH EAX
006046A0  8B CE                     MOV ECX,ESI
006046A2  E8 AC F8 DF FF            CALL 0x00403f53
006046A7  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006046AA  85 C9                     TEST ECX,ECX
006046AC  7C 4C                     JL 0x006046fa
006046AE  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
006046B1  3B CA                     CMP ECX,EDX
006046B3  7D 45                     JGE 0x006046fa
006046B5  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
006046BC  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006046BF  03 C3                     ADD EAX,EBX
006046C1  85 C0                     TEST EAX,EAX
006046C3  7C 35                     JL 0x006046fa
006046C5  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
006046C8  7D 30                     JGE 0x006046fa
006046CA  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
006046CD  85 F6                     TEST ESI,ESI
006046CF  74 29                     JZ 0x006046fa
006046D1  0F AF C2                  IMUL EAX,EDX
006046D4  03 C6                     ADD EAX,ESI
006046D6  33 D2                     XOR EDX,EDX
006046D8  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
006046DB  8B C2                     MOV EAX,EDX
006046DD  85 C0                     TEST EAX,EAX
006046DF  75 19                     JNZ 0x006046fa
006046E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006046E4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006046E7  50                        PUSH EAX
006046E8  57                        PUSH EDI
006046E9  51                        PUSH ECX
006046EA  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
006046F0  E8 68 07 E0 FF            CALL 0x00404e5d
006046F5  83 F8 01                  CMP EAX,0x1
006046F8  75 19                     JNZ 0x00604713
LAB_006046fa:
006046FA  5F                        POP EDI
006046FB  5E                        POP ESI
006046FC  B8 01 00 00 00            MOV EAX,0x1
00604701  5B                        POP EBX
00604702  8B E5                     MOV ESP,EBP
00604704  5D                        POP EBP
00604705  C2 04 00                  RET 0x4
LAB_00604708:
00604708  5F                        POP EDI
00604709  5E                        POP ESI
0060470A  33 C0                     XOR EAX,EAX
0060470C  5B                        POP EBX
0060470D  8B E5                     MOV ESP,EBP
0060470F  5D                        POP EBP
00604710  C2 04 00                  RET 0x4
LAB_00604713:
00604713  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_00604716:
00604716  5F                        POP EDI
00604717  5E                        POP ESI
00604718  5B                        POP EBX
00604719  8B E5                     MOV ESP,EBP
0060471B  5D                        POP EBP
0060471C  C2 04 00                  RET 0x4
