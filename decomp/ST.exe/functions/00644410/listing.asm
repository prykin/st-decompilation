FUN_00644410:
00644410  55                        PUSH EBP
00644411  8B EC                     MOV EBP,ESP
00644413  83 EC 44                  SUB ESP,0x44
00644416  53                        PUSH EBX
00644417  56                        PUSH ESI
00644418  8B F1                     MOV ESI,ECX
0064441A  57                        PUSH EDI
0064441B  33 FF                     XOR EDI,EDI
0064441D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00644420  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
00644424  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00644428  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0064442C  8A 9E 7D 02 00 00         MOV BL,byte ptr [ESI + 0x27d]
00644432  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00644435  80 FB 02                  CMP BL,0x2
00644438  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0064443B  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
0064443E  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
00644441  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00644444  73 1D                     JNC 0x00644463
00644446  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00644449  89 0E                     MOV dword ptr [ESI],ECX
0064444B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064444E  89 11                     MOV dword ptr [ECX],EDX
00644450  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00644453  89 02                     MOV dword ptr [EDX],EAX
00644455  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00644458  89 38                     MOV dword ptr [EAX],EDI
0064445A  5F                        POP EDI
0064445B  5E                        POP ESI
0064445C  5B                        POP EBX
0064445D  8B E5                     MOV ESP,EBP
0064445F  5D                        POP EBP
00644460  C2 10 00                  RET 0x10
LAB_00644463:
00644463  50                        PUSH EAX
00644464  52                        PUSH EDX
00644465  0F BF 96 6A 02 00 00      MOVSX EDX,word ptr [ESI + 0x26a]
0064446C  0F BF 86 68 02 00 00      MOVSX EAX,word ptr [ESI + 0x268]
00644473  51                        PUSH ECX
00644474  0F BF 8E 6C 02 00 00      MOVSX ECX,word ptr [ESI + 0x26c]
0064447B  51                        PUSH ECX
0064447C  52                        PUSH EDX
0064447D  50                        PUSH EAX
0064447E  E8 4D 69 06 00            CALL 0x006aadd0
00644483  8B C8                     MOV ECX,EAX
00644485  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0064448A  F7 E9                     IMUL ECX
0064448C  C1 FA 04                  SAR EDX,0x4
0064448F  8B CA                     MOV ECX,EDX
00644491  BB 01 00 00 00            MOV EBX,0x1
00644496  C1 E9 1F                  SHR ECX,0x1f
00644499  03 D1                     ADD EDX,ECX
0064449B  3B D3                     CMP EDX,EBX
0064449D  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006444A0  7D 03                     JGE 0x006444a5
006444A2  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
LAB_006444a5:
006444A5  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006444A8  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
006444AB  3B C3                     CMP EAX,EBX
006444AD  0F 8C 71 03 00 00         JL 0x00644824
LAB_006444b3:
006444B3  0F BF 8E 68 02 00 00      MOVSX ECX,word ptr [ESI + 0x268]
006444BA  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006444BD  2B C1                     SUB EAX,ECX
006444BF  0F AF C3                  IMUL EAX,EBX
006444C2  99                        CDQ
006444C3  F7 7D D8                  IDIV dword ptr [EBP + -0x28]
006444C6  8B F8                     MOV EDI,EAX
006444C8  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006444CB  03 F9                     ADD EDI,ECX
006444CD  0F BF 8E 6A 02 00 00      MOVSX ECX,word ptr [ESI + 0x26a]
006444D4  2B C1                     SUB EAX,ECX
006444D6  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006444D9  0F AF C3                  IMUL EAX,EBX
006444DC  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006444DF  99                        CDQ
006444E0  F7 FB                     IDIV EBX
006444E2  03 C1                     ADD EAX,ECX
006444E4  0F BF 8E 6C 02 00 00      MOVSX ECX,word ptr [ESI + 0x26c]
006444EB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006444EE  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006444F1  2B C1                     SUB EAX,ECX
006444F3  0F AF 45 CC               IMUL EAX,dword ptr [EBP + -0x34]
006444F7  99                        CDQ
006444F8  F7 FB                     IDIV EBX
006444FA  03 C1                     ADD EAX,ECX
006444FC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006444FF  B8 79 19 8C 02            MOV EAX,0x28c1979
00644504  85 FF                     TEST EDI,EDI
00644506  7C 13                     JL 0x0064451b
00644508  F7 EF                     IMUL EDI
0064450A  D1 FA                     SAR EDX,0x1
0064450C  8B C2                     MOV EAX,EDX
0064450E  C1 E8 1F                  SHR EAX,0x1f
00644511  03 D0                     ADD EDX,EAX
00644513  0F BF CA                  MOVSX ECX,DX
00644516  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00644519  EB 12                     JMP 0x0064452d
LAB_0064451b:
0064451B  F7 EF                     IMUL EDI
0064451D  D1 FA                     SAR EDX,0x1
0064451F  8B C2                     MOV EAX,EDX
00644521  C1 E8 1F                  SHR EAX,0x1f
00644524  03 D0                     ADD EDX,EAX
00644526  0F BF C2                  MOVSX EAX,DX
00644529  48                        DEC EAX
0064452A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0064452d:
0064452D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00644530  B8 79 19 8C 02            MOV EAX,0x28c1979
00644535  85 C9                     TEST ECX,ECX
00644537  7C 10                     JL 0x00644549
00644539  F7 E9                     IMUL ECX
0064453B  D1 FA                     SAR EDX,0x1
0064453D  8B CA                     MOV ECX,EDX
0064453F  C1 E9 1F                  SHR ECX,0x1f
00644542  03 D1                     ADD EDX,ECX
00644544  0F BF CA                  MOVSX ECX,DX
00644547  EB 0F                     JMP 0x00644558
LAB_00644549:
00644549  F7 E9                     IMUL ECX
0064454B  D1 FA                     SAR EDX,0x1
0064454D  8B C2                     MOV EAX,EDX
0064454F  C1 E8 1F                  SHR EAX,0x1f
00644552  03 D0                     ADD EDX,EAX
00644554  0F BF CA                  MOVSX ECX,DX
00644557  49                        DEC ECX
LAB_00644558:
00644558  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0064455B  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0064455E  85 D2                     TEST EDX,EDX
00644560  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00644565  7C 11                     JL 0x00644578
00644567  F7 EA                     IMUL EDX
00644569  C1 FA 06                  SAR EDX,0x6
0064456C  8B C2                     MOV EAX,EDX
0064456E  C1 E8 1F                  SHR EAX,0x1f
00644571  03 D0                     ADD EDX,EAX
00644573  0F BF D2                  MOVSX EDX,DX
00644576  EB 10                     JMP 0x00644588
LAB_00644578:
00644578  F7 EA                     IMUL EDX
0064457A  C1 FA 06                  SAR EDX,0x6
0064457D  8B C2                     MOV EAX,EDX
0064457F  C1 E8 1F                  SHR EAX,0x1f
00644582  03 D0                     ADD EDX,EAX
00644584  0F BF D2                  MOVSX EDX,DX
00644587  4A                        DEC EDX
LAB_00644588:
00644588  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064458B  8D 5A FF                  LEA EBX,[EDX + -0x1]
0064458E  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00644591  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
00644594  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0064459A  8D 42 01                  LEA EAX,[EDX + 0x1]
0064459D  3B D8                     CMP EBX,EAX
0064459F  0F 8F 6D 02 00 00         JG 0x00644812
006445A5  EB 03                     JMP 0x006445aa
LAB_006445a7:
006445A7  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
LAB_006445aa:
006445AA  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
006445B1  48                        DEC EAX
006445B2  3B D8                     CMP EBX,EAX
006445B4  0F 8F 46 02 00 00         JG 0x00644800
006445BA  8D 41 FF                  LEA EAX,[ECX + -0x1]
006445BD  8D 59 01                  LEA EBX,[ECX + 0x1]
006445C0  3B C3                     CMP EAX,EBX
006445C2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006445C5  0F 8F 35 02 00 00         JG 0x00644800
LAB_006445cb:
006445CB  85 C0                     TEST EAX,EAX
006445CD  0F 8C 1A 02 00 00         JL 0x006447ed
006445D3  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
006445DA  49                        DEC ECX
006445DB  3B C1                     CMP EAX,ECX
006445DD  0F 8F 0A 02 00 00         JG 0x006447ed
006445E3  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006445E6  8D 59 FF                  LEA EBX,[ECX + -0x1]
006445E9  41                        INC ECX
006445EA  3B D9                     CMP EBX,ECX
006445EC  0F 8F FB 01 00 00         JG 0x006447ed
LAB_006445f2:
006445F2  85 DB                     TEST EBX,EBX
006445F4  0F 8C D8 01 00 00         JL 0x006447d2
006445FA  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00644601  8D 51 FF                  LEA EDX,[ECX + -0x1]
00644604  3B DA                     CMP EBX,EDX
00644606  0F 8F C6 01 00 00         JG 0x006447d2
0064460C  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
0064460F  85 FF                     TEST EDI,EDI
00644611  7D 25                     JGE 0x00644638
00644613  3B 7D D4                  CMP EDI,dword ptr [EBP + -0x2c]
00644616  0F 85 B6 01 00 00         JNZ 0x006447d2
0064461C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0064461F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00644622  3B C8                     CMP ECX,EAX
00644624  0F 85 A8 01 00 00         JNZ 0x006447d2
0064462A  3B 5D E0                  CMP EBX,dword ptr [EBP + -0x20]
0064462D  0F 84 0F 02 00 00         JZ 0x00644842
00644633  E9 9A 01 00 00            JMP 0x006447d2
LAB_00644638:
00644638  66 85 DB                  TEST BX,BX
0064463B  7C 4C                     JL 0x00644689
0064463D  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
00644644  7D 43                     JGE 0x00644689
00644646  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00644649  66 85 C0                  TEST AX,AX
0064464C  7C 3B                     JL 0x00644689
0064464E  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
00644655  7D 32                     JGE 0x00644689
00644657  66 85 FF                  TEST DI,DI
0064465A  7C 2D                     JL 0x00644689
0064465C  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00644663  7D 24                     JGE 0x00644689
00644665  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
0064466C  0F BF D7                  MOVSX EDX,DI
0064466F  0F BF C0                  MOVSX EAX,AX
00644672  0F AF D6                  IMUL EDX,ESI
00644675  0F AF C1                  IMUL EAX,ECX
00644678  03 D0                     ADD EDX,EAX
0064467A  0F BF C3                  MOVSX EAX,BX
0064467D  03 D0                     ADD EDX,EAX
0064467F  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00644684  8B 34 D0                  MOV ESI,dword ptr [EAX + EDX*0x8]
00644687  EB 02                     JMP 0x0064468b
LAB_00644689:
00644689  33 F6                     XOR ESI,ESI
LAB_0064468b:
0064468B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064468E  8A 82 87 02 00 00         MOV AL,byte ptr [EDX + 0x287]
00644694  84 C0                     TEST AL,AL
00644696  74 7D                     JZ 0x00644715
00644698  85 F6                     TEST ESI,ESI
0064469A  75 79                     JNZ 0x00644715
0064469C  66 85 DB                  TEST BX,BX
0064469F  7C 72                     JL 0x00644713
006446A1  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
006446A8  7D 69                     JGE 0x00644713
006446AA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006446AD  66 85 C0                  TEST AX,AX
006446B0  7C 61                     JL 0x00644713
006446B2  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
006446B9  7D 58                     JGE 0x00644713
006446BB  66 85 FF                  TEST DI,DI
006446BE  7C 53                     JL 0x00644713
006446C0  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
006446C7  7D 4A                     JGE 0x00644713
006446C9  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
006446D0  0F BF D7                  MOVSX EDX,DI
006446D3  0F BF C0                  MOVSX EAX,AX
006446D6  0F AF D6                  IMUL EDX,ESI
006446D9  0F AF C1                  IMUL EAX,ECX
006446DC  0F BF CB                  MOVSX ECX,BX
006446DF  03 D0                     ADD EDX,EAX
006446E1  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
006446E6  03 D1                     ADD EDX,ECX
006446E8  8B 74 D0 04               MOV ESI,dword ptr [EAX + EDX*0x8 + 0x4]
006446EC  85 F6                     TEST ESI,ESI
006446EE  74 25                     JZ 0x00644715
006446F0  8B 16                     MOV EDX,dword ptr [ESI]
006446F2  8B CE                     MOV ECX,ESI
006446F4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006446F7  3D A6 00 00 00            CMP EAX,0xa6
006446FC  74 17                     JZ 0x00644715
006446FE  3D A7 00 00 00            CMP EAX,0xa7
00644703  74 10                     JZ 0x00644715
00644705  3D BD 00 00 00            CMP EAX,0xbd
0064470A  74 09                     JZ 0x00644715
0064470C  3D AF 00 00 00            CMP EAX,0xaf
00644711  74 02                     JZ 0x00644715
LAB_00644713:
00644713  33 F6                     XOR ESI,ESI
LAB_00644715:
00644715  3B 7D D4                  CMP EDI,dword ptr [EBP + -0x2c]
00644718  75 3E                     JNZ 0x00644758
0064471A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0064471D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00644720  3B C1                     CMP EAX,ECX
00644722  75 34                     JNZ 0x00644758
00644724  3B 5D E0                  CMP EBX,dword ptr [EBP + -0x20]
00644727  75 2F                     JNZ 0x00644758
00644729  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
00644730  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
00644737  0F AF C8                  IMUL ECX,EAX
0064473A  0F AF D7                  IMUL EDX,EDI
0064473D  8B C3                     MOV EAX,EBX
0064473F  03 C1                     ADD EAX,ECX
00644741  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
00644747  03 D0                     ADD EDX,EAX
00644749  66 83 3C 51 00            CMP word ptr [ECX + EDX*0x2],0x0
0064474E  7D 08                     JGE 0x00644758
00644750  85 F6                     TEST ESI,ESI
00644752  0F 84 82 01 00 00         JZ 0x006448da
LAB_00644758:
00644758  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0064475F  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
00644766  0F AF 55 E8               IMUL EDX,dword ptr [EBP + -0x18]
0064476A  0F AF C7                  IMUL EAX,EDI
0064476D  8B CB                     MOV ECX,EBX
0064476F  03 CA                     ADD ECX,EDX
00644771  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
00644777  03 C1                     ADD EAX,ECX
00644779  66 83 3C 42 00            CMP word ptr [EDX + EAX*0x2],0x0
0064477E  7D 06                     JGE 0x00644786
00644780  85 F6                     TEST ESI,ESI
00644782  74 4E                     JZ 0x006447d2
00644784  EB 04                     JMP 0x0064478a
LAB_00644786:
00644786  85 F6                     TEST ESI,ESI
00644788  74 48                     JZ 0x006447d2
LAB_0064478a:
0064478A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064478D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00644790  3B 81 5E 02 00 00         CMP EAX,dword ptr [ECX + 0x25e]
00644796  74 3A                     JZ 0x006447d2
00644798  8B C1                     MOV EAX,ECX
0064479A  8B 16                     MOV EDX,dword ptr [ESI]
0064479C  66 8B 88 4F 02 00 00      MOV CX,word ptr [EAX + 0x24f]
006447A3  51                        PUSH ECX
006447A4  66 8B 88 4D 02 00 00      MOV CX,word ptr [EAX + 0x24d]
006447AB  66 8B 80 4B 02 00 00      MOV AX,word ptr [EAX + 0x24b]
006447B2  51                        PUSH ECX
006447B3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006447B6  50                        PUSH EAX
006447B7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006447BA  51                        PUSH ECX
006447BB  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006447BE  50                        PUSH EAX
006447BF  51                        PUSH ECX
006447C0  8B CE                     MOV ECX,ESI
006447C2  FF 92 DC 00 00 00         CALL dword ptr [EDX + 0xdc]
006447C8  8B F8                     MOV EDI,EAX
006447CA  85 FF                     TEST EDI,EDI
006447CC  0F 8D EA 04 00 00         JGE 0x00644cbc
LAB_006447d2:
006447D2  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006447D5  43                        INC EBX
006447D6  8D 42 01                  LEA EAX,[EDX + 0x1]
006447D9  3B D8                     CMP EBX,EAX
006447DB  0F 8E 11 FE FF FF         JLE 0x006445f2
006447E1  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006447E4  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006447E7  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006447EA  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006447ed:
006447ED  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006447F0  40                        INC EAX
006447F1  41                        INC ECX
006447F2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006447F5  3B C1                     CMP EAX,ECX
006447F7  0F 8E CE FD FF FF         JLE 0x006445cb
006447FD  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
LAB_00644800:
00644800  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
00644803  8D 42 01                  LEA EAX,[EDX + 0x1]
00644806  43                        INC EBX
00644807  3B D8                     CMP EBX,EAX
00644809  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
0064480C  0F 8E 95 FD FF FF         JLE 0x006445a7
LAB_00644812:
00644812  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
00644815  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00644818  43                        INC EBX
00644819  3B D8                     CMP EBX,EAX
0064481B  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
0064481E  0F 8E 8F FC FF FF         JLE 0x006444b3
LAB_00644824:
00644824  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00644827  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0064482A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0064482D  89 39                     MOV dword ptr [ECX],EDI
0064482F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00644832  89 02                     MOV dword ptr [EDX],EAX
00644834  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00644837  89 11                     MOV dword ptr [ECX],EDX
LAB_00644839:
00644839  5F                        POP EDI
0064483A  5E                        POP ESI
0064483B  5B                        POP EBX
0064483C  8B E5                     MOV ESP,EBP
0064483E  5D                        POP EBP
0064483F  C2 10 00                  RET 0x10
LAB_00644842:
00644842  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00644845  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00644848  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0064484B  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
00644851  C7 86 70 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x270],0x0
0064485B  0F BF 8E 6C 02 00 00      MOVSX ECX,word ptr [ESI + 0x26c]
00644862  DB 45 EC                  FILD dword ptr [EBP + -0x14]
00644865  2B C1                     SUB EAX,ECX
00644867  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0064486A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0064486D  DB 45 08                  FILD dword ptr [EBP + 0x8]
00644870  0F BF 96 68 02 00 00      MOVSX EDX,word ptr [ESI + 0x268]
00644877  DE F9                     FDIVP
00644879  2B C2                     SUB EAX,EDX
0064487B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0064487E  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
00644881  DB 45 08                  FILD dword ptr [EBP + 0x8]
00644884  D8 CA                     FMUL ST2
00644886  DE E9                     FSUBP
00644888  E8 FB 99 0E 00            CALL 0x0072e288
0064488D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00644890  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00644893  89 01                     MOV dword ptr [ECX],EAX
00644895  66 89 46 41               MOV word ptr [ESI + 0x41],AX
00644899  0F BF 8E 6A 02 00 00      MOVSX ECX,word ptr [ESI + 0x26a]
006448A0  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006448A3  2B C1                     SUB EAX,ECX
006448A5  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006448A8  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006448AB  D8 CA                     FMUL ST2
006448AD  DE E9                     FSUBP
006448AF  E8 D4 99 0E 00            CALL 0x0072e288
006448B4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006448B7  66 8B D0                  MOV DX,AX
006448BA  5F                        POP EDI
006448BB  89 01                     MOV dword ptr [ECX],EAX
006448BD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006448C0  66 89 56 43               MOV word ptr [ESI + 0x43],DX
006448C4  C7 00 05 00 00 00         MOV dword ptr [EAX],0x5
006448CA  66 C7 46 45 05 00         MOV word ptr [ESI + 0x45],0x5
006448D0  5E                        POP ESI
006448D1  5B                        POP EBX
006448D2  DD D8                     FSTP ST0
006448D4  8B E5                     MOV ESP,EBP
006448D6  5D                        POP EBP
006448D7  C2 10 00                  RET 0x10
LAB_006448da:
006448DA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006448DD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006448E0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006448E3  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006448E6  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006448E9  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
006448EF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006448F2  C7 82 70 02 00 00 00 00 00 00  MOV dword ptr [EDX + 0x270],0x0
006448FC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006448FF  89 38                     MOV dword ptr [EAX],EDI
00644901  89 31                     MOV dword ptr [ECX],ESI
00644903  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00644906  85 C9                     TEST ECX,ECX
00644908  89 0A                     MOV dword ptr [EDX],ECX
0064490A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0064490F  7C 11                     JL 0x00644922
00644911  F7 E9                     IMUL ECX
00644913  C1 FA 06                  SAR EDX,0x6
00644916  8B C2                     MOV EAX,EDX
00644918  C1 E8 1F                  SHR EAX,0x1f
0064491B  03 D0                     ADD EDX,EAX
0064491D  0F BF CA                  MOVSX ECX,DX
00644920  EB 10                     JMP 0x00644932
LAB_00644922:
00644922  F7 E9                     IMUL ECX
00644924  C1 FA 06                  SAR EDX,0x6
00644927  8B CA                     MOV ECX,EDX
00644929  C1 E9 1F                  SHR ECX,0x1f
0064492C  03 D1                     ADD EDX,ECX
0064492E  0F BF CA                  MOVSX ECX,DX
00644931  49                        DEC ECX
LAB_00644932:
00644932  85 F6                     TEST ESI,ESI
00644934  B8 79 19 8C 02            MOV EAX,0x28c1979
00644939  7C 10                     JL 0x0064494b
0064493B  F7 EE                     IMUL ESI
0064493D  D1 FA                     SAR EDX,0x1
0064493F  8B C2                     MOV EAX,EDX
00644941  C1 E8 1F                  SHR EAX,0x1f
00644944  03 D0                     ADD EDX,EAX
00644946  0F BF F2                  MOVSX ESI,DX
00644949  EB 0F                     JMP 0x0064495a
LAB_0064494b:
0064494B  F7 EE                     IMUL ESI
0064494D  D1 FA                     SAR EDX,0x1
0064494F  8B C2                     MOV EAX,EDX
00644951  C1 E8 1F                  SHR EAX,0x1f
00644954  03 D0                     ADD EDX,EAX
00644956  0F BF F2                  MOVSX ESI,DX
00644959  4E                        DEC ESI
LAB_0064495a:
0064495A  85 FF                     TEST EDI,EDI
0064495C  B8 79 19 8C 02            MOV EAX,0x28c1979
00644961  7C 10                     JL 0x00644973
00644963  F7 EF                     IMUL EDI
00644965  D1 FA                     SAR EDX,0x1
00644967  8B C2                     MOV EAX,EDX
00644969  C1 E8 1F                  SHR EAX,0x1f
0064496C  03 D0                     ADD EDX,EAX
0064496E  0F BF C2                  MOVSX EAX,DX
00644971  EB 0F                     JMP 0x00644982
LAB_00644973:
00644973  F7 EF                     IMUL EDI
00644975  D1 FA                     SAR EDX,0x1
00644977  8B C2                     MOV EAX,EDX
00644979  C1 E8 1F                  SHR EAX,0x1f
0064497C  03 D0                     ADD EDX,EAX
0064497E  0F BF C2                  MOVSX EAX,DX
00644981  48                        DEC EAX
LAB_00644982:
00644982  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
00644989  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
00644990  0F AF F7                  IMUL ESI,EDI
00644993  0F AF CB                  IMUL ECX,EBX
00644996  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0064499C  03 C6                     ADD EAX,ESI
0064499E  03 C8                     ADD ECX,EAX
006449A0  0F BF 04 4A               MOVSX EAX,word ptr [EDX + ECX*0x2]
006449A4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006449A7  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006449AA  66 8B 81 6C 02 00 00      MOV AX,word ptr [ECX + 0x26c]
006449B1  0F BF C8                  MOVSX ECX,AX
006449B4  66 85 C0                  TEST AX,AX
006449B7  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006449BA  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006449BF  7C 11                     JL 0x006449d2
006449C1  F7 E9                     IMUL ECX
006449C3  C1 FA 06                  SAR EDX,0x6
006449C6  8B C2                     MOV EAX,EDX
006449C8  C1 E8 1F                  SHR EAX,0x1f
006449CB  03 D0                     ADD EDX,EAX
006449CD  0F BF CA                  MOVSX ECX,DX
006449D0  EB 10                     JMP 0x006449e2
LAB_006449d2:
006449D2  F7 E9                     IMUL ECX
006449D4  C1 FA 06                  SAR EDX,0x6
006449D7  8B CA                     MOV ECX,EDX
006449D9  C1 E9 1F                  SHR ECX,0x1f
006449DC  03 D1                     ADD EDX,ECX
006449DE  0F BF CA                  MOVSX ECX,DX
006449E1  49                        DEC ECX
LAB_006449e2:
006449E2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006449E5  66 8B 82 6A 02 00 00      MOV AX,word ptr [EDX + 0x26a]
006449EC  0F BF D0                  MOVSX EDX,AX
006449EF  66 85 C0                  TEST AX,AX
006449F2  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006449F5  B8 79 19 8C 02            MOV EAX,0x28c1979
006449FA  7C 10                     JL 0x00644a0c
006449FC  F7 EA                     IMUL EDX
006449FE  D1 FA                     SAR EDX,0x1
00644A00  8B C2                     MOV EAX,EDX
00644A02  C1 E8 1F                  SHR EAX,0x1f
00644A05  03 D0                     ADD EDX,EAX
00644A07  0F BF F2                  MOVSX ESI,DX
00644A0A  EB 0F                     JMP 0x00644a1b
LAB_00644a0c:
00644A0C  F7 EA                     IMUL EDX
00644A0E  D1 FA                     SAR EDX,0x1
00644A10  8B C2                     MOV EAX,EDX
00644A12  C1 E8 1F                  SHR EAX,0x1f
00644A15  03 D0                     ADD EDX,EAX
00644A17  0F BF F2                  MOVSX ESI,DX
00644A1A  4E                        DEC ESI
LAB_00644a1b:
00644A1B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00644A1E  66 8B 82 68 02 00 00      MOV AX,word ptr [EDX + 0x268]
00644A25  0F BF D0                  MOVSX EDX,AX
00644A28  66 85 C0                  TEST AX,AX
00644A2B  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00644A2E  B8 79 19 8C 02            MOV EAX,0x28c1979
00644A33  7C 10                     JL 0x00644a45
00644A35  F7 EA                     IMUL EDX
00644A37  D1 FA                     SAR EDX,0x1
00644A39  8B C2                     MOV EAX,EDX
00644A3B  C1 E8 1F                  SHR EAX,0x1f
00644A3E  03 D0                     ADD EDX,EAX
00644A40  0F BF C2                  MOVSX EAX,DX
00644A43  EB 0F                     JMP 0x00644a54
LAB_00644a45:
00644A45  F7 EA                     IMUL EDX
00644A47  D1 FA                     SAR EDX,0x1
00644A49  8B C2                     MOV EAX,EDX
00644A4B  C1 E8 1F                  SHR EAX,0x1f
00644A4E  03 D0                     ADD EDX,EAX
00644A50  0F BF C2                  MOVSX EAX,DX
00644A53  48                        DEC EAX
LAB_00644a54:
00644A54  0F AF F7                  IMUL ESI,EDI
00644A57  0F AF CB                  IMUL ECX,EBX
00644A5A  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
00644A60  03 C6                     ADD EAX,ESI
00644A62  03 C8                     ADD ECX,EAX
00644A64  0F BF 04 4A               MOVSX EAX,word ptr [EDX + ECX*0x2]
00644A68  85 C0                     TEST EAX,EAX
00644A6A  7D 12                     JGE 0x00644a7e
00644A6C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00644A6F  5F                        POP EDI
00644A70  5E                        POP ESI
00644A71  5B                        POP EBX
00644A72  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00644A78  8B E5                     MOV ESP,EBP
00644A7A  5D                        POP EBP
00644A7B  C2 10 00                  RET 0x10
LAB_00644a7e:
00644A7E  39 45 C0                  CMP dword ptr [EBP + -0x40],EAX
00644A81  0F 84 B2 FD FF FF         JZ 0x00644839
00644A87  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00644A8A  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00644A8D  2B C3                     SUB EAX,EBX
00644A8F  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00644A92  99                        CDQ
00644A93  2B C2                     SUB EAX,EDX
00644A95  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00644A98  8B C8                     MOV ECX,EAX
00644A9A  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00644A9D  2B C6                     SUB EAX,ESI
00644A9F  C7 45 E4 03 00 00 00      MOV dword ptr [EBP + -0x1c],0x3
00644AA6  99                        CDQ
00644AA7  2B C2                     SUB EAX,EDX
00644AA9  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00644AAC  8B F8                     MOV EDI,EAX
00644AAE  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00644AB1  2B C2                     SUB EAX,EDX
00644AB3  99                        CDQ
00644AB4  2B C2                     SUB EAX,EDX
00644AB6  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00644AB9  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00644ABC  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00644ABF  D1 FF                     SAR EDI,0x1
00644AC1  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00644AC4  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00644AC7  03 FE                     ADD EDI,ESI
00644AC9  8B F0                     MOV ESI,EAX
00644ACB  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00644ACE  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00644AD1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00644AD4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00644AD7  D1 F9                     SAR ECX,0x1
00644AD9  D1 FE                     SAR ESI,0x1
00644ADB  03 CB                     ADD ECX,EBX
00644ADD  03 F0                     ADD ESI,EAX
00644ADF  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_00644ae2:
00644AE2  85 F6                     TEST ESI,ESI
00644AE4  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00644AE9  7C 14                     JL 0x00644aff
00644AEB  F7 EE                     IMUL ESI
00644AED  C1 FA 06                  SAR EDX,0x6
00644AF0  8B C2                     MOV EAX,EDX
00644AF2  C1 E8 1F                  SHR EAX,0x1f
00644AF5  03 D0                     ADD EDX,EAX
00644AF7  0F BF D2                  MOVSX EDX,DX
00644AFA  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00644AFD  EB 13                     JMP 0x00644b12
LAB_00644aff:
00644AFF  F7 EE                     IMUL ESI
00644B01  C1 FA 06                  SAR EDX,0x6
00644B04  8B C2                     MOV EAX,EDX
00644B06  C1 E8 1F                  SHR EAX,0x1f
00644B09  03 D0                     ADD EDX,EAX
00644B0B  0F BF C2                  MOVSX EAX,DX
00644B0E  48                        DEC EAX
00644B0F  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_00644b12:
00644B12  85 FF                     TEST EDI,EDI
00644B14  B8 79 19 8C 02            MOV EAX,0x28c1979
00644B19  7C 10                     JL 0x00644b2b
00644B1B  F7 EF                     IMUL EDI
00644B1D  D1 FA                     SAR EDX,0x1
00644B1F  8B C2                     MOV EAX,EDX
00644B21  C1 E8 1F                  SHR EAX,0x1f
00644B24  03 D0                     ADD EDX,EAX
00644B26  0F BF DA                  MOVSX EBX,DX
00644B29  EB 0F                     JMP 0x00644b3a
LAB_00644b2b:
00644B2B  F7 EF                     IMUL EDI
00644B2D  D1 FA                     SAR EDX,0x1
00644B2F  8B C2                     MOV EAX,EDX
00644B31  C1 E8 1F                  SHR EAX,0x1f
00644B34  03 D0                     ADD EDX,EAX
00644B36  0F BF DA                  MOVSX EBX,DX
00644B39  4B                        DEC EBX
LAB_00644b3a:
00644B3A  85 C9                     TEST ECX,ECX
00644B3C  B8 79 19 8C 02            MOV EAX,0x28c1979
00644B41  7C 10                     JL 0x00644b53
00644B43  F7 E9                     IMUL ECX
00644B45  D1 FA                     SAR EDX,0x1
00644B47  8B C2                     MOV EAX,EDX
00644B49  C1 E8 1F                  SHR EAX,0x1f
00644B4C  03 D0                     ADD EDX,EAX
00644B4E  0F BF C2                  MOVSX EAX,DX
00644B51  EB 0F                     JMP 0x00644b62
LAB_00644b53:
00644B53  F7 E9                     IMUL ECX
00644B55  D1 FA                     SAR EDX,0x1
00644B57  8B C2                     MOV EAX,EDX
00644B59  C1 E8 1F                  SHR EAX,0x1f
00644B5C  03 D0                     ADD EDX,EAX
00644B5E  0F BF C2                  MOVSX EAX,DX
00644B61  48                        DEC EAX
LAB_00644b62:
00644B62  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
00644B69  0F AF DA                  IMUL EBX,EDX
00644B6C  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00644B6F  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
00644B72  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
00644B79  0F AF D3                  IMUL EDX,EBX
00644B7C  03 45 C0                  ADD EAX,dword ptr [EBP + -0x40]
00644B7F  03 D0                     ADD EDX,EAX
00644B81  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
00644B86  66 83 3C 50 00            CMP word ptr [EAX + EDX*0x2],0x0
00644B8B  7D 0D                     JGE 0x00644b9a
00644B8D  8B D9                     MOV EBX,ECX
00644B8F  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
00644B92  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00644B95  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00644B98  EB 0C                     JMP 0x00644ba6
LAB_00644b9a:
00644B9A  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
00644B9D  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00644BA0  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
00644BA3  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
LAB_00644ba6:
00644BA6  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00644BA9  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
00644BAC  2B C3                     SUB EAX,EBX
00644BAE  99                        CDQ
00644BAF  2B C2                     SUB EAX,EDX
00644BB1  8B C8                     MOV ECX,EAX
00644BB3  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00644BB6  2B C6                     SUB EAX,ESI
00644BB8  99                        CDQ
00644BB9  D1 F9                     SAR ECX,0x1
00644BBB  2B C2                     SUB EAX,EDX
00644BBD  03 CB                     ADD ECX,EBX
00644BBF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00644BC2  8B F8                     MOV EDI,EAX
00644BC4  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00644BC7  2B C3                     SUB EAX,EBX
00644BC9  99                        CDQ
00644BCA  D1 FF                     SAR EDI,0x1
00644BCC  2B C2                     SUB EAX,EDX
00644BCE  03 FE                     ADD EDI,ESI
00644BD0  8B F0                     MOV ESI,EAX
00644BD2  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00644BD5  D1 FE                     SAR ESI,0x1
00644BD7  8B D3                     MOV EDX,EBX
00644BD9  03 F2                     ADD ESI,EDX
00644BDB  48                        DEC EAX
00644BDC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00644BDF  0F 85 FD FE FF FF         JNZ 0x00644ae2
00644BE5  85 F6                     TEST ESI,ESI
00644BE7  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00644BEC  7C 14                     JL 0x00644c02
00644BEE  F7 EE                     IMUL ESI
00644BF0  C1 FA 06                  SAR EDX,0x6
00644BF3  8B C2                     MOV EAX,EDX
00644BF5  C1 E8 1F                  SHR EAX,0x1f
00644BF8  03 D0                     ADD EDX,EAX
00644BFA  0F BF D2                  MOVSX EDX,DX
00644BFD  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00644C00  EB 13                     JMP 0x00644c15
LAB_00644c02:
00644C02  F7 EE                     IMUL ESI
00644C04  C1 FA 06                  SAR EDX,0x6
00644C07  8B C2                     MOV EAX,EDX
00644C09  C1 E8 1F                  SHR EAX,0x1f
00644C0C  03 D0                     ADD EDX,EAX
00644C0E  0F BF C2                  MOVSX EAX,DX
00644C11  48                        DEC EAX
00644C12  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00644c15:
00644C15  85 FF                     TEST EDI,EDI
00644C17  B8 79 19 8C 02            MOV EAX,0x28c1979
00644C1C  7C 10                     JL 0x00644c2e
00644C1E  F7 EF                     IMUL EDI
00644C20  D1 FA                     SAR EDX,0x1
00644C22  8B C2                     MOV EAX,EDX
00644C24  C1 E8 1F                  SHR EAX,0x1f
00644C27  03 D0                     ADD EDX,EAX
00644C29  0F BF DA                  MOVSX EBX,DX
00644C2C  EB 0F                     JMP 0x00644c3d
LAB_00644c2e:
00644C2E  F7 EF                     IMUL EDI
00644C30  D1 FA                     SAR EDX,0x1
00644C32  8B C2                     MOV EAX,EDX
00644C34  C1 E8 1F                  SHR EAX,0x1f
00644C37  03 D0                     ADD EDX,EAX
00644C39  0F BF DA                  MOVSX EBX,DX
00644C3C  4B                        DEC EBX
LAB_00644c3d:
00644C3D  85 C9                     TEST ECX,ECX
00644C3F  B8 79 19 8C 02            MOV EAX,0x28c1979
00644C44  7C 10                     JL 0x00644c56
00644C46  F7 E9                     IMUL ECX
00644C48  D1 FA                     SAR EDX,0x1
00644C4A  8B C2                     MOV EAX,EDX
00644C4C  C1 E8 1F                  SHR EAX,0x1f
00644C4F  03 D0                     ADD EDX,EAX
00644C51  0F BF C2                  MOVSX EAX,DX
00644C54  EB 0F                     JMP 0x00644c65
LAB_00644c56:
00644C56  F7 E9                     IMUL ECX
00644C58  D1 FA                     SAR EDX,0x1
00644C5A  8B C2                     MOV EAX,EDX
00644C5C  C1 E8 1F                  SHR EAX,0x1f
00644C5F  03 D0                     ADD EDX,EAX
00644C61  0F BF C2                  MOVSX EAX,DX
00644C64  48                        DEC EAX
LAB_00644c65:
00644C65  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
00644C6C  0F AF DA                  IMUL EBX,EDX
00644C6F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00644C72  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
00644C75  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
00644C7C  0F AF D3                  IMUL EDX,EBX
00644C7F  03 45 C0                  ADD EAX,dword ptr [EBP + -0x40]
00644C82  03 D0                     ADD EDX,EAX
00644C84  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
00644C89  66 83 3C 50 00            CMP word ptr [EAX + EDX*0x2],0x0
00644C8E  7D 09                     JGE 0x00644c99
00644C90  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00644C93  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
00644C96  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
LAB_00644c99:
00644C99  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00644C9C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00644C9F  89 0A                     MOV dword ptr [EDX],ECX
00644CA1  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00644CA4  89 38                     MOV dword ptr [EAX],EDI
00644CA6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00644CA9  89 32                     MOV dword ptr [EDX],ESI
00644CAB  5F                        POP EDI
00644CAC  66 89 70 45               MOV word ptr [EAX + 0x45],SI
00644CB0  5E                        POP ESI
00644CB1  66 89 48 41               MOV word ptr [EAX + 0x41],CX
00644CB5  5B                        POP EBX
00644CB6  8B E5                     MOV ESP,EBP
00644CB8  5D                        POP EBP
00644CB9  C2 10 00                  RET 0x10
LAB_00644cbc:
00644CBC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00644CBF  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00644CC2  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
00644CC8  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00644CCE  3D 9C 00 00 00            CMP EAX,0x9c
00644CD3  74 19                     JZ 0x00644cee
00644CD5  3D 9D 00 00 00            CMP EAX,0x9d
00644CDA  74 12                     JZ 0x00644cee
00644CDC  3D 9E 00 00 00            CMP EAX,0x9e
00644CE1  74 0B                     JZ 0x00644cee
00644CE3  3D 9B 00 00 00            CMP EAX,0x9b
00644CE8  0F 85 81 00 00 00         JNZ 0x00644d6f
LAB_00644cee:
00644CEE  8A 83 85 02 00 00         MOV AL,byte ptr [EBX + 0x285]
00644CF4  84 C0                     TEST AL,AL
00644CF6  75 77                     JNZ 0x00644d6f
00644CF8  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00644CFB  51                        PUSH ECX
00644CFC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00644D02  E8 B0 FC DB FF            CALL 0x004049b7
00644D07  3C 03                     CMP AL,0x3
00644D09  74 64                     JZ 0x00644d6f
00644D0B  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00644D0E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00644D14  6A 1B                     PUSH 0x1b
00644D16  52                        PUSH EDX
00644D17  E8 4F CB DB FF            CALL 0x0040186b
00644D1C  85 C0                     TEST EAX,EAX
00644D1E  74 4F                     JZ 0x00644d6f
00644D20  8B 06                     MOV EAX,dword ptr [ESI]
00644D22  8D 4D BC                  LEA ECX,[EBP + -0x44]
00644D25  8D 55 FA                  LEA EDX,[EBP + -0x6]
00644D28  51                        PUSH ECX
00644D29  52                        PUSH EDX
00644D2A  8D 4D FC                  LEA ECX,[EBP + -0x4]
00644D2D  8D 55 FE                  LEA EDX,[EBP + -0x2]
00644D30  51                        PUSH ECX
00644D31  52                        PUSH EDX
00644D32  57                        PUSH EDI
00644D33  8B CE                     MOV ECX,ESI
00644D35  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
00644D3B  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
00644D3F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00644D42  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
00644D46  89 01                     MOV dword ptr [ECX],EAX
00644D48  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00644D4B  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
00644D4F  89 11                     MOV dword ptr [ECX],EDX
00644D51  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00644D54  50                        PUSH EAX
00644D55  89 02                     MOV dword ptr [EDX],EAX
00644D57  8B 01                     MOV EAX,dword ptr [ECX]
00644D59  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00644D5C  50                        PUSH EAX
00644D5D  8B 11                     MOV EDX,dword ptr [ECX]
00644D5F  8B CB                     MOV ECX,EBX
00644D61  52                        PUSH EDX
00644D62  56                        PUSH ESI
00644D63  E8 F1 C3 DB FF            CALL 0x00401159
00644D68  C6 83 85 02 00 00 02      MOV byte ptr [EBX + 0x285],0x2
LAB_00644d6f:
00644D6F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00644D72  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00644D75  C7 83 70 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x270],0x1
00644D7F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00644D82  89 83 74 02 00 00         MOV dword ptr [EBX + 0x274],EAX
00644D88  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00644D8B  89 BB 78 02 00 00         MOV dword ptr [EBX + 0x278],EDI
00644D91  89 0A                     MOV dword ptr [EDX],ECX
00644D93  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00644D96  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00644D99  5F                        POP EDI
00644D9A  5E                        POP ESI
00644D9B  89 01                     MOV dword ptr [ECX],EAX
00644D9D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00644DA0  5B                        POP EBX
00644DA1  89 10                     MOV dword ptr [EAX],EDX
00644DA3  8B E5                     MOV ESP,EBP
00644DA5  5D                        POP EBP
00644DA6  C2 10 00                  RET 0x10
