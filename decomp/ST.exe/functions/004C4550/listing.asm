TLOBaseTy::sub_004C4550:
004C4550  55                        PUSH EBP
004C4551  8B EC                     MOV EBP,ESP
004C4553  81 EC BC 00 00 00         SUB ESP,0xbc
004C4559  53                        PUSH EBX
004C455A  56                        PUSH ESI
004C455B  8B F1                     MOV ESI,ECX
004C455D  57                        PUSH EDI
004C455E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004C4561  33 D2                     XOR EDX,EDX
004C4563  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C4569  33 DB                     XOR EBX,EBX
004C456B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004C456E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004C4571  8D 0C 47                  LEA ECX,[EDI + EAX*0x2]
004C4574  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
004C4577  8B 04 8D 90 2A 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x792a90]
004C457E  48                        DEC EAX
004C457F  0F 84 26 06 00 00         JZ 0x004c4bab
004C4585  48                        DEC EAX
004C4586  0F 84 78 02 00 00         JZ 0x004c4804
004C458C  48                        DEC EAX
004C458D  0F 85 A9 0A 00 00         JNZ 0x004c503c
004C4593  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
004C4596  8B 04 8D A0 2C 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x792ca0]
004C459D  3D BC 00 00 00            CMP EAX,0xbc
004C45A2  0F 85 CF 01 00 00         JNZ 0x004c4777
004C45A8  8D 45 F8                  LEA EAX,[EBP + -0x8]
004C45AB  85 C0                     TEST EAX,EAX
004C45AD  74 08                     JZ 0x004c45b7
004C45AF  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004C45B3  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
LAB_004c45b7:
004C45B7  8D 45 FC                  LEA EAX,[EBP + -0x4]
004C45BA  85 C0                     TEST EAX,EAX
004C45BC  74 08                     JZ 0x004c45c6
004C45BE  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
004C45C2  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
LAB_004c45c6:
004C45C6  8D 45 F4                  LEA EAX,[EBP + -0xc]
004C45C9  85 C0                     TEST EAX,EAX
004C45CB  74 04                     JZ 0x004c45d1
004C45CD  66 8B 5E 45               MOV BX,word ptr [ESI + 0x45]
LAB_004c45d1:
004C45D1  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004C45D7  3B C2                     CMP EAX,EDX
004C45D9  0F 84 5D 0A 00 00         JZ 0x004c503c
004C45DF  8D 4D E0                  LEA ECX,[EBP + -0x20]
004C45E2  51                        PUSH ECX
004C45E3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C45E9  50                        PUSH EAX
004C45EA  E8 E1 1C 22 00            CALL 0x006e62d0
004C45EF  85 C0                     TEST EAX,EAX
004C45F1  0F 85 5D 01 00 00         JNZ 0x004c4754
004C45F7  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004C45FD  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
004C4600  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C4603  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
004C4606  D1 E1                     SHL ECX,0x1
004C4608  0F BF C3                  MOVSX EAX,BX
004C460B  0F BF 91 D8 32 79 00      MOVSX EDX,word ptr [ECX + 0x7932d8]
004C4612  03 D0                     ADD EDX,EAX
004C4614  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C4619  85 D2                     TEST EDX,EDX
004C461B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004C461E  7C 14                     JL 0x004c4634
004C4620  F7 EA                     IMUL EDX
004C4622  C1 FA 06                  SAR EDX,0x6
004C4625  8B C2                     MOV EAX,EDX
004C4627  C1 E8 1F                  SHR EAX,0x1f
004C462A  03 D0                     ADD EDX,EAX
004C462C  0F BF D2                  MOVSX EDX,DX
004C462F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004C4632  EB 13                     JMP 0x004c4647
LAB_004c4634:
004C4634  F7 EA                     IMUL EDX
004C4636  C1 FA 06                  SAR EDX,0x6
004C4639  8B C2                     MOV EAX,EDX
004C463B  C1 E8 1F                  SHR EAX,0x1f
004C463E  03 D0                     ADD EDX,EAX
004C4640  0F BF C2                  MOVSX EAX,DX
004C4643  48                        DEC EAX
004C4644  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_004c4647:
004C4647  0F BF 91 D6 32 79 00      MOVSX EDX,word ptr [ECX + 0x7932d6]
004C464E  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004C4652  03 C2                     ADD EAX,EDX
004C4654  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004C4657  85 C0                     TEST EAX,EAX
004C4659  B8 79 19 8C 02            MOV EAX,0x28c1979
004C465E  7C 11                     JL 0x004c4671
004C4660  F7 6D 08                  IMUL dword ptr [EBP + 0x8]
004C4663  D1 FA                     SAR EDX,0x1
004C4665  8B C2                     MOV EAX,EDX
004C4667  C1 E8 1F                  SHR EAX,0x1f
004C466A  03 D0                     ADD EDX,EAX
004C466C  0F BF DA                  MOVSX EBX,DX
004C466F  EB 10                     JMP 0x004c4681
LAB_004c4671:
004C4671  F7 6D 08                  IMUL dword ptr [EBP + 0x8]
004C4674  D1 FA                     SAR EDX,0x1
004C4676  8B C2                     MOV EAX,EDX
004C4678  C1 E8 1F                  SHR EAX,0x1f
004C467B  03 D0                     ADD EDX,EAX
004C467D  0F BF DA                  MOVSX EBX,DX
004C4680  4B                        DEC EBX
LAB_004c4681:
004C4681  0F BF 89 D4 32 79 00      MOVSX ECX,word ptr [ECX + 0x7932d4]
004C4688  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
004C468C  03 CA                     ADD ECX,EDX
004C468E  B8 79 19 8C 02            MOV EAX,0x28c1979
004C4693  85 C9                     TEST ECX,ECX
004C4695  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004C4698  7C 10                     JL 0x004c46aa
004C469A  F7 E9                     IMUL ECX
004C469C  D1 FA                     SAR EDX,0x1
004C469E  8B C2                     MOV EAX,EDX
004C46A0  C1 E8 1F                  SHR EAX,0x1f
004C46A3  03 D0                     ADD EDX,EAX
004C46A5  0F BF C2                  MOVSX EAX,DX
004C46A8  EB 0F                     JMP 0x004c46b9
LAB_004c46aa:
004C46AA  F7 E9                     IMUL ECX
004C46AC  D1 FA                     SAR EDX,0x1
004C46AE  8B C2                     MOV EAX,EDX
004C46B0  C1 E8 1F                  SHR EAX,0x1f
004C46B3  03 D0                     ADD EDX,EAX
004C46B5  0F BF C2                  MOVSX EAX,DX
004C46B8  48                        DEC EAX
LAB_004c46b9:
004C46B9  66 85 C0                  TEST AX,AX
004C46BC  7C 5E                     JL 0x004c471c
004C46BE  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004C46C5  7D 55                     JGE 0x004c471c
004C46C7  66 85 DB                  TEST BX,BX
004C46CA  7C 50                     JL 0x004c471c
004C46CC  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
004C46D3  7D 47                     JGE 0x004c471c
004C46D5  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004C46D8  66 85 D2                  TEST DX,DX
004C46DB  7C 3F                     JL 0x004c471c
004C46DD  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004C46E4  7D 36                     JGE 0x004c471c
004C46E6  0F BF CB                  MOVSX ECX,BX
004C46E9  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
004C46F0  0F AF CB                  IMUL ECX,EBX
004C46F3  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004C46FA  0F BF D2                  MOVSX EDX,DX
004C46FD  0F AF D3                  IMUL EDX,EBX
004C4700  0F BF C0                  MOVSX EAX,AX
004C4703  03 CA                     ADD ECX,EDX
004C4705  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004C470B  03 C8                     ADD ECX,EAX
004C470D  8B 44 CA 04               MOV EAX,dword ptr [EDX + ECX*0x8 + 0x4]
004C4711  85 C0                     TEST EAX,EAX
004C4713  0F 85 23 09 00 00         JNZ 0x004c503c
004C4719  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_004c471c:
004C471C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004C471F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004C4722  50                        PUSH EAX
004C4723  52                        PUSH EDX
004C4724  51                        PUSH ECX
004C4725  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004C4728  E8 C9 04 F4 FF            CALL 0x00404bf6
004C472D  C1 E7 07                  SHL EDI,0x7
004C4730  03 F7                     ADD ESI,EDI
004C4732  C7 86 9D 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x29d],0x1
004C473C  8B 86 C5 02 00 00         MOV EAX,dword ptr [ESI + 0x2c5]
004C4742  48                        DEC EAX
004C4743  89 86 C5 02 00 00         MOV dword ptr [ESI + 0x2c5],EAX
004C4749  33 C0                     XOR EAX,EAX
004C474B  5F                        POP EDI
004C474C  5E                        POP ESI
004C474D  5B                        POP EBX
004C474E  8B E5                     MOV ESP,EBP
004C4750  5D                        POP EBP
004C4751  C2 04 00                  RET 0x4
LAB_004c4754:
004C4754  C1 E7 07                  SHL EDI,0x7
004C4757  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
004C4761  33 C0                     XOR EAX,EAX
004C4763  C7 84 37 9D 02 00 00 01 00 00 00  MOV dword ptr [EDI + ESI*0x1 + 0x29d],0x1
004C476E  5F                        POP EDI
004C476F  5E                        POP ESI
004C4770  5B                        POP EBX
004C4771  8B E5                     MOV ESP,EBP
004C4773  5D                        POP EBP
004C4774  C2 04 00                  RET 0x4
LAB_004c4777:
004C4777  3D B3 00 00 00            CMP EAX,0xb3
004C477C  0F 85 BA 08 00 00         JNZ 0x004c503c
004C4782  8B 86 EC 04 00 00         MOV EAX,dword ptr [ESI + 0x4ec]
004C4788  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004C478B  3B C2                     CMP EAX,EDX
004C478D  0F 84 A9 08 00 00         JZ 0x004c503c
004C4793  8D 4D 08                  LEA ECX,[EBP + 0x8]
004C4796  51                        PUSH ECX
004C4797  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C479D  50                        PUSH EAX
004C479E  E8 2D 1B 22 00            CALL 0x006e62d0
004C47A3  85 C0                     TEST EAX,EAX
004C47A5  0F 85 91 08 00 00         JNZ 0x004c503c
004C47AB  8B 96 FC 04 00 00         MOV EDX,dword ptr [ESI + 0x4fc]
004C47B1  8B 86 F8 04 00 00         MOV EAX,dword ptr [ESI + 0x4f8]
004C47B7  8B 8E F4 04 00 00         MOV ECX,dword ptr [ESI + 0x4f4]
004C47BD  52                        PUSH EDX
004C47BE  C1 E7 07                  SHL EDI,0x7
004C47C1  03 FE                     ADD EDI,ESI
004C47C3  50                        PUSH EAX
004C47C4  51                        PUSH ECX
004C47C5  8B 97 AD 02 00 00         MOV EDX,dword ptr [EDI + 0x2ad]
004C47CB  8B 87 A9 02 00 00         MOV EAX,dword ptr [EDI + 0x2a9]
004C47D1  8B 8F A5 02 00 00         MOV ECX,dword ptr [EDI + 0x2a5]
004C47D7  52                        PUSH EDX
004C47D8  50                        PUSH EAX
004C47D9  51                        PUSH ECX
004C47DA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004C47DD  E8 DE D5 F3 FF            CALL 0x00401dc0
004C47E2  C7 87 9D 02 00 00 01 00 00 00  MOV dword ptr [EDI + 0x29d],0x1
004C47EC  8B 87 C5 02 00 00         MOV EAX,dword ptr [EDI + 0x2c5]
004C47F2  48                        DEC EAX
004C47F3  89 87 C5 02 00 00         MOV dword ptr [EDI + 0x2c5],EAX
004C47F9  33 C0                     XOR EAX,EAX
004C47FB  5F                        POP EDI
004C47FC  5E                        POP ESI
004C47FD  5B                        POP EBX
004C47FE  8B E5                     MOV ESP,EBP
004C4800  5D                        POP EBP
004C4801  C2 04 00                  RET 0x4
LAB_004c4804:
004C4804  8B C7                     MOV EAX,EDI
004C4806  C1 E0 07                  SHL EAX,0x7
004C4809  8D 1C 30                  LEA EBX,[EAX + ESI*0x1]
004C480C  C7 83 9D 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x29d],0x1
004C4816  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004C481C  8D 3C 4F                  LEA EDI,[EDI + ECX*0x2]
004C481F  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
004C4822  8B 04 85 A0 2C 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x792ca0]
004C4829  05 5D FF FF FF            ADD EAX,0xffffff5d
004C482E  83 F8 1B                  CMP EAX,0x1b
004C4831  0F 87 05 08 00 00         JA 0x004c503c
004C4837  33 C9                     XOR ECX,ECX
004C4839  8A 88 5C 50 4C 00         MOV CL,byte ptr [EAX + 0x4c505c]
switchD_004c483f::switchD:
004C483F  FF 24 8D 48 50 4C 00      JMP dword ptr [ECX*0x4 + 0x4c5048]
switchD_004c483f::caseD_a8:
004C4846  8D BB A9 02 00 00         LEA EDI,[EBX + 0x2a9]
004C484C  8D 83 A5 02 00 00         LEA EAX,[EBX + 0x2a5]
004C4852  8D 55 E8                  LEA EDX,[EBP + -0x18]
004C4855  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C485B  81 C3 AD 02 00 00         ADD EBX,0x2ad
004C4861  52                        PUSH EDX
004C4862  53                        PUSH EBX
004C4863  57                        PUSH EDI
004C4864  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004C4867  50                        PUSH EAX
004C4868  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C486B  68 A8 00 00 00            PUSH 0xa8
004C4870  50                        PUSH EAX
004C4871  E8 93 F0 F3 FF            CALL 0x00403909
004C4876  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004C4879  8B 07                     MOV EAX,dword ptr [EDI]
004C487B  51                        PUSH ECX
004C487C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C487F  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004C4882  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004C4885  8D 44 D0 64               LEA EAX,[EAX + EDX*0x8 + 0x64]
004C4889  50                        PUSH EAX
004C488A  8B 01                     MOV EAX,dword ptr [ECX]
004C488C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C488F  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004C4892  8B 8E E8 04 00 00         MOV ECX,dword ptr [ESI + 0x4e8]
004C4898  8D 44 D0 64               LEA EAX,[EAX + EDX*0x8 + 0x64]
004C489C  8B 96 E4 04 00 00         MOV EDX,dword ptr [ESI + 0x4e4]
004C48A2  50                        PUSH EAX
004C48A3  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004C48A9  51                        PUSH ECX
004C48AA  33 C9                     XOR ECX,ECX
004C48AC  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004C48B0  52                        PUSH EDX
004C48B1  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004C48B4  50                        PUSH EAX
004C48B5  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C48B8  51                        PUSH ECX
004C48B9  52                        PUSH EDX
004C48BA  50                        PUSH EAX
004C48BB  68 A8 00 00 00            PUSH 0xa8
004C48C0  E8 06 FC F3 FF            CALL 0x004044cb
004C48C5  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004C48CB  83 C4 28                  ADD ESP,0x28
004C48CE  51                        PUSH ECX
004C48CF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C48D5  E8 DD 00 F4 FF            CALL 0x004049b7
004C48DA  25 FF 00 00 00            AND EAX,0xff
004C48DF  48                        DEC EAX
004C48E0  74 42                     JZ 0x004c4924
004C48E2  48                        DEC EAX
004C48E3  74 23                     JZ 0x004c4908
004C48E5  48                        DEC EAX
004C48E6  0F 85 50 07 00 00         JNZ 0x004c503c
004C48EC  8B 16                     MOV EDX,dword ptr [ESI]
004C48EE  68 9A 00 00 00            PUSH 0x9a
004C48F3  6A 06                     PUSH 0x6
004C48F5  8B CE                     MOV ECX,ESI
004C48F7  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004C48FD  33 C0                     XOR EAX,EAX
004C48FF  5F                        POP EDI
004C4900  5E                        POP ESI
004C4901  5B                        POP EBX
004C4902  8B E5                     MOV ESP,EBP
004C4904  5D                        POP EBP
004C4905  C2 04 00                  RET 0x4
LAB_004c4908:
004C4908  8B 06                     MOV EAX,dword ptr [ESI]
004C490A  68 99 00 00 00            PUSH 0x99
004C490F  6A 06                     PUSH 0x6
004C4911  8B CE                     MOV ECX,ESI
004C4913  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004C4919  33 C0                     XOR EAX,EAX
004C491B  5F                        POP EDI
004C491C  5E                        POP ESI
004C491D  5B                        POP EBX
004C491E  8B E5                     MOV ESP,EBP
004C4920  5D                        POP EBP
004C4921  C2 04 00                  RET 0x4
LAB_004c4924:
004C4924  8B 16                     MOV EDX,dword ptr [ESI]
004C4926  68 98 00 00 00            PUSH 0x98
004C492B  6A 06                     PUSH 0x6
004C492D  8B CE                     MOV ECX,ESI
004C492F  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004C4935  33 C0                     XOR EAX,EAX
004C4937  5F                        POP EDI
004C4938  5E                        POP ESI
004C4939  5B                        POP EBX
004C493A  8B E5                     MOV ESP,EBP
004C493C  5D                        POP EBP
004C493D  C2 04 00                  RET 0x4
switchD_004c483f::caseD_be:
004C4940  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004C4943  8D BB A9 02 00 00         LEA EDI,[EBX + 0x2a9]
004C4949  8D 83 A5 02 00 00         LEA EAX,[EBX + 0x2a5]
004C494F  8D 4D E8                  LEA ECX,[EBP + -0x18]
004C4952  81 C3 AD 02 00 00         ADD EBX,0x2ad
004C4958  51                        PUSH ECX
004C4959  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C495F  53                        PUSH EBX
004C4960  57                        PUSH EDI
004C4961  50                        PUSH EAX
004C4962  68 A8 00 00 00            PUSH 0xa8
004C4967  52                        PUSH EDX
004C4968  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004C496B  E8 99 EF F3 FF            CALL 0x00403909
004C4970  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004C4973  50                        PUSH EAX
004C4974  8B 07                     MOV EAX,dword ptr [EDI]
004C4976  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C4979  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C497C  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
004C4980  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C4983  52                        PUSH EDX
004C4984  8B 00                     MOV EAX,dword ptr [EAX]
004C4986  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C4989  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C498C  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
004C4990  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004C4996  8B 8E E4 04 00 00         MOV ECX,dword ptr [ESI + 0x4e4]
004C499C  52                        PUSH EDX
004C499D  8B 96 E0 04 00 00         MOV EDX,dword ptr [ESI + 0x4e0]
004C49A3  50                        PUSH EAX
004C49A4  33 C0                     XOR EAX,EAX
004C49A6  51                        PUSH ECX
004C49A7  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004C49AB  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004C49AE  52                        PUSH EDX
004C49AF  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004C49B2  50                        PUSH EAX
004C49B3  51                        PUSH ECX
004C49B4  52                        PUSH EDX
004C49B5  68 BE 00 00 00            PUSH 0xbe
004C49BA  E8 0C FB F3 FF            CALL 0x004044cb
004C49BF  A0 4D 87 80 00            MOV AL,[0x0080874d]
004C49C4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C49CA  83 C4 28                  ADD ESP,0x28
004C49CD  50                        PUSH EAX
004C49CE  E8 E4 FF F3 FF            CALL 0x004049b7
004C49D3  25 FF 00 00 00            AND EAX,0xff
004C49D8  48                        DEC EAX
004C49D9  74 42                     JZ 0x004c4a1d
004C49DB  48                        DEC EAX
004C49DC  74 23                     JZ 0x004c4a01
004C49DE  48                        DEC EAX
004C49DF  0F 85 57 06 00 00         JNZ 0x004c503c
004C49E5  8B 16                     MOV EDX,dword ptr [ESI]
004C49E7  68 9D 00 00 00            PUSH 0x9d
004C49EC  6A 06                     PUSH 0x6
004C49EE  8B CE                     MOV ECX,ESI
004C49F0  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004C49F6  33 C0                     XOR EAX,EAX
004C49F8  5F                        POP EDI
004C49F9  5E                        POP ESI
004C49FA  5B                        POP EBX
004C49FB  8B E5                     MOV ESP,EBP
004C49FD  5D                        POP EBP
004C49FE  C2 04 00                  RET 0x4
LAB_004c4a01:
004C4A01  8B 06                     MOV EAX,dword ptr [ESI]
004C4A03  68 9C 00 00 00            PUSH 0x9c
004C4A08  6A 06                     PUSH 0x6
004C4A0A  8B CE                     MOV ECX,ESI
004C4A0C  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004C4A12  33 C0                     XOR EAX,EAX
004C4A14  5F                        POP EDI
004C4A15  5E                        POP ESI
004C4A16  5B                        POP EBX
004C4A17  8B E5                     MOV ESP,EBP
004C4A19  5D                        POP EBP
004C4A1A  C2 04 00                  RET 0x4
LAB_004c4a1d:
004C4A1D  8B 16                     MOV EDX,dword ptr [ESI]
004C4A1F  68 9B 00 00 00            PUSH 0x9b
004C4A24  6A 06                     PUSH 0x6
004C4A26  8B CE                     MOV ECX,ESI
004C4A28  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004C4A2E  33 C0                     XOR EAX,EAX
004C4A30  5F                        POP EDI
004C4A31  5E                        POP ESI
004C4A32  5B                        POP EBX
004C4A33  8B E5                     MOV ESP,EBP
004C4A35  5D                        POP EBP
004C4A36  C2 04 00                  RET 0x4
switchD_004c483f::caseD_a3:
004C4A39  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004C4A3C  8D BB A9 02 00 00         LEA EDI,[EBX + 0x2a9]
004C4A42  8D 83 A5 02 00 00         LEA EAX,[EBX + 0x2a5]
004C4A48  8D 4D E8                  LEA ECX,[EBP + -0x18]
004C4A4B  81 C3 AD 02 00 00         ADD EBX,0x2ad
004C4A51  51                        PUSH ECX
004C4A52  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C4A58  53                        PUSH EBX
004C4A59  57                        PUSH EDI
004C4A5A  50                        PUSH EAX
004C4A5B  68 A8 00 00 00            PUSH 0xa8
004C4A60  52                        PUSH EDX
004C4A61  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004C4A64  E8 A0 EE F3 FF            CALL 0x00403909
004C4A69  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004C4A6C  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004C4A6F  33 C0                     XOR EAX,EAX
004C4A71  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004C4A75  50                        PUSH EAX
004C4A76  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C4A79  51                        PUSH ECX
004C4A7A  52                        PUSH EDX
004C4A7B  50                        PUSH EAX
004C4A7C  8B 07                     MOV EAX,dword ptr [EDI]
004C4A7E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C4A81  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C4A84  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
004C4A88  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C4A8B  52                        PUSH EDX
004C4A8C  8B 00                     MOV EAX,dword ptr [EAX]
004C4A8E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C4A91  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C4A94  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
004C4A98  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004C4A9E  8B 8E E4 04 00 00         MOV ECX,dword ptr [ESI + 0x4e4]
004C4AA4  52                        PUSH EDX
004C4AA5  8B 96 E0 04 00 00         MOV EDX,dword ptr [ESI + 0x4e0]
004C4AAB  50                        PUSH EAX
004C4AAC  51                        PUSH ECX
004C4AAD  52                        PUSH EDX
004C4AAE  E8 5C E3 F3 FF            CALL 0x00402e0f
004C4AB3  A0 4D 87 80 00            MOV AL,[0x0080874d]
004C4AB8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C4ABE  83 C4 24                  ADD ESP,0x24
004C4AC1  50                        PUSH EAX
004C4AC2  E8 F0 FE F3 FF            CALL 0x004049b7
004C4AC7  25 FF 00 00 00            AND EAX,0xff
004C4ACC  48                        DEC EAX
004C4ACD  74 42                     JZ 0x004c4b11
004C4ACF  48                        DEC EAX
004C4AD0  74 23                     JZ 0x004c4af5
004C4AD2  48                        DEC EAX
004C4AD3  0F 85 63 05 00 00         JNZ 0x004c503c
004C4AD9  8B 16                     MOV EDX,dword ptr [ESI]
004C4ADB  68 A0 00 00 00            PUSH 0xa0
004C4AE0  6A 06                     PUSH 0x6
004C4AE2  8B CE                     MOV ECX,ESI
004C4AE4  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004C4AEA  33 C0                     XOR EAX,EAX
004C4AEC  5F                        POP EDI
004C4AED  5E                        POP ESI
004C4AEE  5B                        POP EBX
004C4AEF  8B E5                     MOV ESP,EBP
004C4AF1  5D                        POP EBP
004C4AF2  C2 04 00                  RET 0x4
LAB_004c4af5:
004C4AF5  8B 06                     MOV EAX,dword ptr [ESI]
004C4AF7  68 9F 00 00 00            PUSH 0x9f
004C4AFC  6A 06                     PUSH 0x6
004C4AFE  8B CE                     MOV ECX,ESI
004C4B00  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004C4B06  33 C0                     XOR EAX,EAX
004C4B08  5F                        POP EDI
004C4B09  5E                        POP ESI
004C4B0A  5B                        POP EBX
004C4B0B  8B E5                     MOV ESP,EBP
004C4B0D  5D                        POP EBP
004C4B0E  C2 04 00                  RET 0x4
LAB_004c4b11:
004C4B11  8B 16                     MOV EDX,dword ptr [ESI]
004C4B13  68 9E 00 00 00            PUSH 0x9e
004C4B18  6A 06                     PUSH 0x6
004C4B1A  8B CE                     MOV ECX,ESI
004C4B1C  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004C4B22  33 C0                     XOR EAX,EAX
004C4B24  5F                        POP EDI
004C4B25  5E                        POP ESI
004C4B26  5B                        POP EBX
004C4B27  8B E5                     MOV ESP,EBP
004C4B29  5D                        POP EBP
004C4B2A  C2 04 00                  RET 0x4
switchD_004c483f::caseD_b2:
004C4B2D  83 BE AC 05 00 00 70      CMP dword ptr [ESI + 0x5ac],0x70
004C4B34  0F 85 02 05 00 00         JNZ 0x004c503c
004C4B3A  39 96 F0 04 00 00         CMP dword ptr [ESI + 0x4f0],EDX
004C4B40  0F 85 F6 04 00 00         JNZ 0x004c503c
004C4B46  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004C4B49  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004C4B4C  33 C0                     XOR EAX,EAX
004C4B4E  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004C4B52  50                        PUSH EAX
004C4B53  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004C4B59  51                        PUSH ECX
004C4B5A  8B 8E E4 04 00 00         MOV ECX,dword ptr [ESI + 0x4e4]
004C4B60  52                        PUSH EDX
004C4B61  8B 96 E0 04 00 00         MOV EDX,dword ptr [ESI + 0x4e0]
004C4B67  50                        PUSH EAX
004C4B68  51                        PUSH ECX
004C4B69  52                        PUSH EDX
004C4B6A  E8 E9 CB F3 FF            CALL 0x00401758
004C4B6F  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004C4B72  83 C4 18                  ADD ESP,0x18
004C4B75  89 8E F0 04 00 00         MOV dword ptr [ESI + 0x4f0],ECX
004C4B7B  8B 8B A5 02 00 00         MOV ECX,dword ptr [EBX + 0x2a5]
004C4B81  85 C9                     TEST ECX,ECX
004C4B83  0F 8C B3 04 00 00         JL 0x004c503c
004C4B89  8B 9B A9 02 00 00         MOV EBX,dword ptr [EBX + 0x2a9]
004C4B8F  85 DB                     TEST EBX,EBX
004C4B91  0F 8C A5 04 00 00         JL 0x004c503c
004C4B97  53                        PUSH EBX
004C4B98  51                        PUSH ECX
004C4B99  8B C8                     MOV ECX,EAX
004C4B9B  E8 53 D6 F3 FF            CALL 0x004021f3
004C4BA0  33 C0                     XOR EAX,EAX
004C4BA2  5F                        POP EDI
004C4BA3  5E                        POP ESI
004C4BA4  5B                        POP EBX
004C4BA5  8B E5                     MOV ESP,EBP
004C4BA7  5D                        POP EBP
004C4BA8  C2 04 00                  RET 0x4
LAB_004c4bab:
004C4BAB  C1 E7 07                  SHL EDI,0x7
004C4BAE  8B 84 37 91 02 00 00      MOV EAX,dword ptr [EDI + ESI*0x1 + 0x291]
004C4BB5  8D 1C 37                  LEA EBX,[EDI + ESI*0x1]
004C4BB8  3B C2                     CMP EAX,EDX
004C4BBA  0F 84 7C 04 00 00         JZ 0x004c503c
004C4BC0  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
004C4BC3  81 3C 95 A0 2C 79 00 B1 00 00 00  CMP dword ptr [EDX*0x4 + 0x792ca0],0xb1
004C4BCE  0F 85 DB 00 00 00         JNZ 0x004c4caf
004C4BD4  B9 0A 00 00 00            MOV ECX,0xa
004C4BD9  33 C0                     XOR EAX,EAX
004C4BDB  8D BD 54 FF FF FF         LEA EDI,[EBP + 0xffffff54]
004C4BE1  BA 01 00 00 00            MOV EDX,0x1
004C4BE6  F3 AB                     STOSD.REP ES:EDI
004C4BE8  89 93 9D 02 00 00         MOV dword ptr [EBX + 0x29d],EDX
004C4BEE  8D 4D F8                  LEA ECX,[EBP + -0x8]
004C4BF1  66 AB                     STOSW ES:EDI
004C4BF3  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C4BF6  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
004C4BFC  85 C9                     TEST ECX,ECX
004C4BFE  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
004C4C04  C7 85 54 FF FF FF 68 01 00 00  MOV dword ptr [EBP + 0xffffff54],0x168
004C4C0E  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
004C4C14  74 08                     JZ 0x004c4c1e
004C4C16  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
004C4C1A  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
LAB_004c4c1e:
004C4C1E  8D 45 FC                  LEA EAX,[EBP + -0x4]
004C4C21  85 C0                     TEST EAX,EAX
004C4C23  74 08                     JZ 0x004c4c2d
004C4C25  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
004C4C29  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
LAB_004c4c2d:
004C4C2D  8D 55 F4                  LEA EDX,[EBP + -0xc]
004C4C30  85 D2                     TEST EDX,EDX
004C4C32  74 08                     JZ 0x004c4c3c
004C4C34  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
004C4C38  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
LAB_004c4c3c:
004C4C3C  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
004C4C40  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
004C4C44  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
004C4C48  66 89 8D 68 FF FF FF      MOV word ptr [EBP + 0xffffff68],CX
004C4C4F  66 8B 8B A5 02 00 00      MOV CX,word ptr [EBX + 0x2a5]
004C4C56  6A 00                     PUSH 0x0
004C4C58  66 89 8D 6E FF FF FF      MOV word ptr [EBP + 0xffffff6e],CX
004C4C5F  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
004C4C65  51                        PUSH ECX
004C4C66  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C4C6C  66 89 95 6A FF FF FF      MOV word ptr [EBP + 0xffffff6a],DX
004C4C73  66 8B 93 A9 02 00 00      MOV DX,word ptr [EBX + 0x2a9]
004C4C7A  66 89 85 6C FF FF FF      MOV word ptr [EBP + 0xffffff6c],AX
004C4C81  66 8B 83 AD 02 00 00      MOV AX,word ptr [EBX + 0x2ad]
004C4C88  6A 00                     PUSH 0x0
004C4C8A  6A 00                     PUSH 0x0
004C4C8C  68 68 01 00 00            PUSH 0x168
004C4C91  66 89 95 70 FF FF FF      MOV word ptr [EBP + 0xffffff70],DX
004C4C98  66 89 85 72 FF FF FF      MOV word ptr [EBP + 0xffffff72],AX
004C4C9F  E8 1E CF F3 FF            CALL 0x00401bc2
004C4CA4  33 C0                     XOR EAX,EAX
004C4CA6  5F                        POP EDI
004C4CA7  5E                        POP ESI
004C4CA8  5B                        POP EBX
004C4CA9  8B E5                     MOV ESP,EBP
004C4CAB  5D                        POP EBP
004C4CAC  C2 04 00                  RET 0x4
LAB_004c4caf:
004C4CAF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004C4CB2  B9 16 00 00 00            MOV ECX,0x16
004C4CB7  33 C0                     XOR EAX,EAX
004C4CB9  8D 7D 80                  LEA EDI,[EBP + -0x80]
004C4CBC  C7 83 9D 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x29d],0x1
004C4CC6  F3 AB                     STOSD.REP ES:EDI
004C4CC8  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C4CCE  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004C4CD1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C4CD4  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
004C4CD7  8B 04 45 D0 32 79 00      MOV EAX,dword ptr [EAX*0x2 + 0x7932d0]
004C4CDE  85 C0                     TEST EAX,EAX
004C4CE0  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004C4CE3  75 37                     JNZ 0x004c4d1c
004C4CE5  8D 4D 9A                  LEA ECX,[EBP + -0x66]
004C4CE8  B8 01 00 00 00            MOV EAX,0x1
004C4CED  85 C9                     TEST ECX,ECX
004C4CEF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004C4CF2  74 08                     JZ 0x004c4cfc
004C4CF4  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004C4CF8  66 89 4D 9A               MOV word ptr [EBP + -0x66],CX
LAB_004c4cfc:
004C4CFC  8D 4D 9C                  LEA ECX,[EBP + -0x64]
004C4CFF  85 C9                     TEST ECX,ECX
004C4D01  74 08                     JZ 0x004c4d0b
004C4D03  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
004C4D07  66 89 4D 9C               MOV word ptr [EBP + -0x64],CX
LAB_004c4d0b:
004C4D0B  8D 4D 9E                  LEA ECX,[EBP + -0x62]
004C4D0E  85 C9                     TEST ECX,ECX
004C4D10  74 37                     JZ 0x004c4d49
004C4D12  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004C4D16  66 89 4D 9E               MOV word ptr [EBP + -0x62],CX
004C4D1A  EB 2D                     JMP 0x004c4d49
LAB_004c4d1c:
004C4D1C  8D 4D F8                  LEA ECX,[EBP + -0x8]
004C4D1F  85 C9                     TEST ECX,ECX
004C4D21  74 08                     JZ 0x004c4d2b
004C4D23  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004C4D27  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
LAB_004c4d2b:
004C4D2B  8D 4D FC                  LEA ECX,[EBP + -0x4]
004C4D2E  85 C9                     TEST ECX,ECX
004C4D30  74 08                     JZ 0x004c4d3a
004C4D32  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
004C4D36  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
LAB_004c4d3a:
004C4D3A  8D 4D F4                  LEA ECX,[EBP + -0xc]
004C4D3D  85 C9                     TEST ECX,ECX
004C4D3F  74 08                     JZ 0x004c4d49
004C4D41  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004C4D45  66 89 4D F4               MOV word ptr [EBP + -0xc],CX
LAB_004c4d49:
004C4D49  66 8B 8B A5 02 00 00      MOV CX,word ptr [EBX + 0x2a5]
004C4D50  C6 45 AC 00               MOV byte ptr [EBP + -0x54],0x0
004C4D54  66 89 4D A0               MOV word ptr [EBP + -0x60],CX
004C4D58  66 8B 8B A9 02 00 00      MOV CX,word ptr [EBX + 0x2a9]
004C4D5F  66 89 4D A2               MOV word ptr [EBP + -0x5e],CX
004C4D63  66 8B 8B AD 02 00 00      MOV CX,word ptr [EBX + 0x2ad]
004C4D6A  66 89 4D A4               MOV word ptr [EBP + -0x5c],CX
004C4D6E  66 8B 8E 59 02 00 00      MOV CX,word ptr [ESI + 0x259]
004C4D75  66 89 4D A6               MOV word ptr [EBP + -0x5a],CX
004C4D79  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004C4D7C  89 4D AD                  MOV dword ptr [EBP + -0x53],ECX
004C4D7F  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004C4D83  66 89 4D B1               MOV word ptr [EBP + -0x4f],CX
004C4D87  8B 8B 8D 02 00 00         MOV ECX,dword ptr [EBX + 0x28d]
004C4D8D  89 4D C3                  MOV dword ptr [EBP + -0x3d],ECX
004C4D90  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C4D93  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
004C4D96  33 C9                     XOR ECX,ECX
004C4D98  85 C0                     TEST EAX,EAX
004C4D9A  C7 45 8C 01 00 00 00      MOV dword ptr [EBP + -0x74],0x1
004C4DA1  C7 45 80 28 00 00 00      MOV dword ptr [EBP + -0x80],0x28
004C4DA8  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004C4DAB  0F 8E 6A 02 00 00         JLE 0x004c501b
004C4DB1  33 FF                     XOR EDI,EDI
LAB_004c4db3:
004C4DB3  85 D2                     TEST EDX,EDX
004C4DB5  7E 0C                     JLE 0x004c4dc3
004C4DB7  3B 8B C1 02 00 00         CMP ECX,dword ptr [EBX + 0x2c1]
004C4DBD  0F 85 49 02 00 00         JNZ 0x004c500c
LAB_004c4dc3:
004C4DC3  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C4DC9  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004C4DCC  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004C4DCF  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
004C4DD2  D1 E0                     SHL EAX,0x1
004C4DD4  8B 90 D0 32 79 00         MOV EDX,dword ptr [EAX + 0x7932d0]
004C4DDA  85 D2                     TEST EDX,EDX
004C4DDC  0F 84 F5 00 00 00         JZ 0x004c4ed7
004C4DE2  66 8B 8E 59 02 00 00      MOV CX,word ptr [ESI + 0x259]
004C4DE9  8D 94 07 D4 32 79 00      LEA EDX,[EDI + EAX*0x1 + 0x7932d4]
004C4DF0  66 F7 D9                  NEG CX
004C4DF3  51                        PUSH ECX
004C4DF4  8B 0A                     MOV ECX,dword ptr [EDX]
004C4DF6  83 EC 08                  SUB ESP,0x8
004C4DF9  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
004C4DFD  8B C4                     MOV EAX,ESP
004C4DFF  89 08                     MOV dword ptr [EAX],ECX
004C4E01  8B CE                     MOV ECX,ESI
004C4E03  66 89 50 04               MOV word ptr [EAX + 0x4],DX
004C4E07  8D 85 4C FF FF FF         LEA EAX,[EBP + 0xffffff4c]
004C4E0D  50                        PUSH EAX
004C4E0E  E8 19 E6 F3 FF            CALL 0x0040342c
004C4E13  8B C8                     MOV ECX,EAX
004C4E15  8B 01                     MOV EAX,dword ptr [ECX]
004C4E17  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004C4E1A  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
004C4E1E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004C4E21  03 C1                     ADD EAX,ECX
004C4E23  66 89 55 DC               MOV word ptr [EBP + -0x24],DX
004C4E27  8B 55 DA                  MOV EDX,dword ptr [EBP + -0x26]
004C4E2A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004C4E2D  66 89 45 9A               MOV word ptr [EBP + -0x66],AX
004C4E31  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C4E34  03 D0                     ADD EDX,EAX
004C4E36  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C4E3C  66 89 55 9C               MOV word ptr [EBP + -0x64],DX
004C4E40  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004C4E43  03 CA                     ADD ECX,EDX
004C4E45  66 89 4D 9E               MOV word ptr [EBP + -0x62],CX
004C4E49  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004C4E4C  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
004C4E4F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004C4E52  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
004C4E55  8D 8C 47 D4 32 79 00      LEA ECX,[EDI + EAX*0x2 + 0x7932d4]
004C4E5C  8B 94 47 D4 32 79 00      MOV EDX,dword ptr [EDI + EAX*0x2 + 0x7932d4]
004C4E63  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004C4E66  66 8B 41 04               MOV AX,word ptr [ECX + 0x4]
004C4E6A  66 8B 8E 59 02 00 00      MOV CX,word ptr [ESI + 0x259]
004C4E71  66 F7 D9                  NEG CX
004C4E74  51                        PUSH ECX
004C4E75  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
004C4E79  33 C0                     XOR EAX,EAX
004C4E7B  83 EC 08                  SUB ESP,0x8
004C4E7E  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
004C4E82  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004C4E85  8B D4                     MOV EDX,ESP
004C4E87  89 0A                     MOV dword ptr [EDX],ECX
004C4E89  8B CE                     MOV ECX,ESI
004C4E8B  66 89 42 04               MOV word ptr [EDX + 0x4],AX
004C4E8F  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
004C4E95  52                        PUSH EDX
004C4E96  E8 91 E5 F3 FF            CALL 0x0040342c
004C4E9B  8B 08                     MOV ECX,dword ptr [EAX]
004C4E9D  66 8B D1                  MOV DX,CX
004C4EA0  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
004C4EA3  66 03 93 A5 02 00 00      ADD DX,word ptr [EBX + 0x2a5]
004C4EAA  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
004C4EAE  66 8B 8B A9 02 00 00      MOV CX,word ptr [EBX + 0x2a9]
004C4EB5  66 03 4D DA               ADD CX,word ptr [EBP + -0x26]
004C4EB9  66 89 55 A0               MOV word ptr [EBP + -0x60],DX
004C4EBD  66 8B 93 AD 02 00 00      MOV DX,word ptr [EBX + 0x2ad]
004C4EC4  66 03 D0                  ADD DX,AX
004C4EC7  66 89 4D A2               MOV word ptr [EBP + -0x5e],CX
004C4ECB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004C4ECE  66 89 55 A4               MOV word ptr [EBP + -0x5c],DX
004C4ED2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004C4ED5  EB 03                     JMP 0x004c4eda
LAB_004c4ed7:
004C4ED7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_004c4eda:
004C4EDA  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C4EE0  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004C4EE3  83 3C 85 28 3E 79 00 00   CMP dword ptr [EAX*0x4 + 0x793e28],0x0
004C4EEB  74 0D                     JZ 0x004c4efa
004C4EED  83 BB C5 02 00 00 00      CMP dword ptr [EBX + 0x2c5],0x0
004C4EF4  0F 84 0F 01 00 00         JZ 0x004c5009
LAB_004c4efa:
004C4EFA  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
004C4EFD  03 C1                     ADD EAX,ECX
004C4EFF  8B 04 85 A0 2C 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x792ca0]
004C4F06  3D AB 00 00 00            CMP EAX,0xab
004C4F0B  75 52                     JNZ 0x004c4f5f
004C4F0D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004C4F10  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C4F13  33 D2                     XOR EDX,EDX
004C4F15  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004C4F19  52                        PUSH EDX
004C4F1A  8B 93 8D 02 00 00         MOV EDX,dword ptr [EBX + 0x28d]
004C4F20  50                        PUSH EAX
004C4F21  51                        PUSH ECX
004C4F22  0F BF 45 9E               MOVSX EAX,word ptr [EBP + -0x62]
004C4F26  0F BF 4D 9C               MOVSX ECX,word ptr [EBP + -0x64]
004C4F2A  52                        PUSH EDX
004C4F2B  50                        PUSH EAX
004C4F2C  0F BF 55 9A               MOVSX EDX,word ptr [EBP + -0x66]
004C4F30  51                        PUSH ECX
004C4F31  52                        PUSH EDX
004C4F32  E8 00 E9 F3 FF            CALL 0x00403837
004C4F37  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004C4F3D  83 C4 1C                  ADD ESP,0x1c
004C4F40  83 F8 47                  CMP EAX,0x47
004C4F43  0F 85 96 00 00 00         JNZ 0x004c4fdf
004C4F49  8B 06                     MOV EAX,dword ptr [ESI]
004C4F4B  68 15 03 00 00            PUSH 0x315
004C4F50  6A 04                     PUSH 0x4
004C4F52  8B CE                     MOV ECX,ESI
004C4F54  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004C4F5A  E9 80 00 00 00            JMP 0x004c4fdf
LAB_004c4f5f:
004C4F5F  66 8B 4D 9A               MOV CX,word ptr [EBP + -0x66]
004C4F63  66 8B 55 9C               MOV DX,word ptr [EBP + -0x64]
004C4F67  66 89 4D 94               MOV word ptr [EBP + -0x6c],CX
004C4F6B  66 8B 4D 9E               MOV CX,word ptr [EBP + -0x62]
004C4F6F  3D B0 00 00 00            CMP EAX,0xb0
004C4F74  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004C4F77  66 89 55 96               MOV word ptr [EBP + -0x6a],DX
004C4F7B  66 89 4D 98               MOV word ptr [EBP + -0x68],CX
004C4F7F  75 47                     JNZ 0x004c4fc8
004C4F81  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004C4F87  C7 45 80 5E 01 00 00      MOV dword ptr [EBP + -0x80],0x15e
004C4F8E  83 F8 68                  CMP EAX,0x68
004C4F91  75 18                     JNZ 0x004c4fab
004C4F93  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004C4F99  C7 45 A8 01 00 00 00      MOV dword ptr [EBP + -0x58],0x1
004C4FA0  83 C0 F6                  ADD EAX,-0xa
004C4FA3  89 86 D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EAX
004C4FA9  EB 0C                     JMP 0x004c4fb7
LAB_004c4fab:
004C4FAB  83 F8 71                  CMP EAX,0x71
004C4FAE  75 07                     JNZ 0x004c4fb7
004C4FB0  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
LAB_004c4fb7:
004C4FB7  8D 55 80                  LEA EDX,[EBP + -0x80]
004C4FBA  6A 00                     PUSH 0x0
004C4FBC  52                        PUSH EDX
004C4FBD  6A 00                     PUSH 0x0
004C4FBF  6A 00                     PUSH 0x0
004C4FC1  68 5E 01 00 00            PUSH 0x15e
004C4FC6  EB 0C                     JMP 0x004c4fd4
LAB_004c4fc8:
004C4FC8  8D 45 80                  LEA EAX,[EBP + -0x80]
004C4FCB  6A 00                     PUSH 0x0
004C4FCD  50                        PUSH EAX
004C4FCE  6A 00                     PUSH 0x0
004C4FD0  6A 00                     PUSH 0x0
004C4FD2  6A 28                     PUSH 0x28
LAB_004c4fd4:
004C4FD4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C4FDA  E8 E3 CB F3 FF            CALL 0x00401bc2
LAB_004c4fdf:
004C4FDF  8B 83 C5 02 00 00         MOV EAX,dword ptr [EBX + 0x2c5]
004C4FE5  48                        DEC EAX
004C4FE6  89 83 C5 02 00 00         MOV dword ptr [EBX + 0x2c5],EAX
004C4FEC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C4FF2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004C4FF5  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004C4FFB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004C4FFE  89 93 C9 02 00 00         MOV dword ptr [EBX + 0x2c9],EDX
004C5004  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004C5007  EB 03                     JMP 0x004c500c
LAB_004c5009:
004C5009  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_004c500c:
004C500C  41                        INC ECX
004C500D  83 C7 06                  ADD EDI,0x6
004C5010  3B C8                     CMP ECX,EAX
004C5012  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004C5015  0F 8C 98 FD FF FF         JL 0x004c4db3
LAB_004c501b:
004C501B  85 D2                     TEST EDX,EDX
004C501D  7E 1D                     JLE 0x004c503c
004C501F  8B 93 C1 02 00 00         MOV EDX,dword ptr [EBX + 0x2c1]
004C5025  42                        INC EDX
004C5026  8B CA                     MOV ECX,EDX
004C5028  89 93 C1 02 00 00         MOV dword ptr [EBX + 0x2c1],EDX
004C502E  3B C8                     CMP ECX,EAX
004C5030  7C 0A                     JL 0x004c503c
004C5032  C7 83 C1 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2c1],0x0
switchD_004c483f::caseD_a4:
004C503C  5F                        POP EDI
004C503D  5E                        POP ESI
004C503E  33 C0                     XOR EAX,EAX
004C5040  5B                        POP EBX
004C5041  8B E5                     MOV ESP,EBP
004C5043  5D                        POP EBP
004C5044  C2 04 00                  RET 0x4
