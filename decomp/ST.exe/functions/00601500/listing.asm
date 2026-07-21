SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500:
00601500  55                        PUSH EBP
00601501  8B EC                     MOV EBP,ESP
00601503  83 EC 24                  SUB ESP,0x24
00601506  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00601509  53                        PUSH EBX
0060150A  56                        PUSH ESI
0060150B  57                        PUSH EDI
0060150C  85 D2                     TEST EDX,EDX
0060150E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00601511  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00601518  B8 79 19 8C 02            MOV EAX,0x28c1979
0060151D  7C 10                     JL 0x0060152f
0060151F  F7 EA                     IMUL EDX
00601521  D1 FA                     SAR EDX,0x1
00601523  8B C2                     MOV EAX,EDX
00601525  C1 E8 1F                  SHR EAX,0x1f
00601528  03 D0                     ADD EDX,EAX
0060152A  0F BF FA                  MOVSX EDI,DX
0060152D  EB 0F                     JMP 0x0060153e
LAB_0060152f:
0060152F  F7 EA                     IMUL EDX
00601531  D1 FA                     SAR EDX,0x1
00601533  8B C2                     MOV EAX,EDX
00601535  C1 E8 1F                  SHR EAX,0x1f
00601538  03 D0                     ADD EDX,EAX
0060153A  0F BF FA                  MOVSX EDI,DX
0060153D  4F                        DEC EDI
LAB_0060153e:
0060153E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00601541  B8 79 19 8C 02            MOV EAX,0x28c1979
00601546  85 D2                     TEST EDX,EDX
00601548  7C 10                     JL 0x0060155a
0060154A  F7 EA                     IMUL EDX
0060154C  D1 FA                     SAR EDX,0x1
0060154E  8B C2                     MOV EAX,EDX
00601550  C1 E8 1F                  SHR EAX,0x1f
00601553  03 D0                     ADD EDX,EAX
00601555  0F BF DA                  MOVSX EBX,DX
00601558  EB 0F                     JMP 0x00601569
LAB_0060155a:
0060155A  F7 EA                     IMUL EDX
0060155C  D1 FA                     SAR EDX,0x1
0060155E  8B C2                     MOV EAX,EDX
00601560  C1 E8 1F                  SHR EAX,0x1f
00601563  03 D0                     ADD EDX,EAX
00601565  0F BF DA                  MOVSX EBX,DX
00601568  4B                        DEC EBX
LAB_00601569:
00601569  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0060156C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00601571  85 F6                     TEST ESI,ESI
00601573  7C 11                     JL 0x00601586
00601575  F7 EE                     IMUL ESI
00601577  C1 FA 06                  SAR EDX,0x6
0060157A  8B C2                     MOV EAX,EDX
0060157C  C1 E8 1F                  SHR EAX,0x1f
0060157F  03 D0                     ADD EDX,EAX
00601581  0F BF C2                  MOVSX EAX,DX
00601584  EB 10                     JMP 0x00601596
LAB_00601586:
00601586  F7 EE                     IMUL ESI
00601588  C1 FA 06                  SAR EDX,0x6
0060158B  8B C2                     MOV EAX,EDX
0060158D  C1 E8 1F                  SHR EAX,0x1f
00601590  03 D0                     ADD EDX,EAX
00601592  0F BF C2                  MOVSX EAX,DX
00601595  48                        DEC EAX
LAB_00601596:
00601596  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00601599  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060159C  85 D2                     TEST EDX,EDX
0060159E  7D 0C                     JGE 0x006015ac
006015A0  33 FF                     XOR EDI,EDI
006015A2  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
006015A9  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_006015ac:
006015AC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006015AF  85 D2                     TEST EDX,EDX
006015B1  7D 13                     JGE 0x006015c6
006015B3  BA 01 00 00 00            MOV EDX,0x1
006015B8  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
006015BF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006015C2  33 FF                     XOR EDI,EDI
006015C4  EB 03                     JMP 0x006015c9
LAB_006015c6:
006015C6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_006015c9:
006015C9  83 FE 14                  CMP ESI,0x14
006015CC  7D 13                     JGE 0x006015e1
006015CE  BE 14 00 00 00            MOV ESI,0x14
006015D3  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
006015DA  33 C0                     XOR EAX,EAX
006015DC  E9 57 05 00 00            JMP 0x00601b38
LAB_006015e1:
006015E1  85 D2                     TEST EDX,EDX
006015E3  0F 85 4A 05 00 00         JNZ 0x00601b33
006015E9  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006015EC  3D A8 00 00 00            CMP EAX,0xa8
006015F1  0F 84 8F 01 00 00         JZ 0x00601786
006015F7  3D B1 00 00 00            CMP EAX,0xb1
006015FC  0F 84 84 01 00 00         JZ 0x00601786
00601602  3D 4E 01 00 00            CMP EAX,0x14e
00601607  0F 84 79 01 00 00         JZ 0x00601786
0060160D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00601610  85 C0                     TEST EAX,EAX
00601612  B8 79 19 8C 02            MOV EAX,0x28c1979
00601617  7C 11                     JL 0x0060162a
00601619  F7 6D 14                  IMUL dword ptr [EBP + 0x14]
0060161C  D1 FA                     SAR EDX,0x1
0060161E  8B CA                     MOV ECX,EDX
00601620  C1 E9 1F                  SHR ECX,0x1f
00601623  03 D1                     ADD EDX,ECX
00601625  0F BF F2                  MOVSX ESI,DX
00601628  EB 10                     JMP 0x0060163a
LAB_0060162a:
0060162A  F7 6D 14                  IMUL dword ptr [EBP + 0x14]
0060162D  D1 FA                     SAR EDX,0x1
0060162F  8B C2                     MOV EAX,EDX
00601631  C1 E8 1F                  SHR EAX,0x1f
00601634  03 D0                     ADD EDX,EAX
00601636  0F BF F2                  MOVSX ESI,DX
00601639  4E                        DEC ESI
LAB_0060163a:
0060163A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060163D  85 C0                     TEST EAX,EAX
0060163F  B8 79 19 8C 02            MOV EAX,0x28c1979
00601644  7C 11                     JL 0x00601657
00601646  F7 6D 18                  IMUL dword ptr [EBP + 0x18]
00601649  D1 FA                     SAR EDX,0x1
0060164B  8B CA                     MOV ECX,EDX
0060164D  C1 E9 1F                  SHR ECX,0x1f
00601650  03 D1                     ADD EDX,ECX
00601652  0F BF CA                  MOVSX ECX,DX
00601655  EB 10                     JMP 0x00601667
LAB_00601657:
00601657  F7 6D 18                  IMUL dword ptr [EBP + 0x18]
0060165A  D1 FA                     SAR EDX,0x1
0060165C  8B C2                     MOV EAX,EDX
0060165E  C1 E8 1F                  SHR EAX,0x1f
00601661  03 D0                     ADD EDX,EAX
00601663  0F BF CA                  MOVSX ECX,DX
00601666  49                        DEC ECX
LAB_00601667:
00601667  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0060166A  85 C0                     TEST EAX,EAX
0060166C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00601671  7C 12                     JL 0x00601685
00601673  F7 6D 1C                  IMUL dword ptr [EBP + 0x1c]
00601676  C1 FA 06                  SAR EDX,0x6
00601679  8B C2                     MOV EAX,EDX
0060167B  C1 E8 1F                  SHR EAX,0x1f
0060167E  03 D0                     ADD EDX,EAX
00601680  0F BF D2                  MOVSX EDX,DX
00601683  EB 11                     JMP 0x00601696
LAB_00601685:
00601685  F7 6D 1C                  IMUL dword ptr [EBP + 0x1c]
00601688  C1 FA 06                  SAR EDX,0x6
0060168B  8B C2                     MOV EAX,EDX
0060168D  C1 E8 1F                  SHR EAX,0x1f
00601690  03 D0                     ADD EDX,EAX
00601692  0F BF D2                  MOVSX EDX,DX
00601695  4A                        DEC EDX
LAB_00601696:
00601696  3B FE                     CMP EDI,ESI
00601698  75 0D                     JNZ 0x006016a7
0060169A  3B D9                     CMP EBX,ECX
0060169C  75 09                     JNZ 0x006016a7
0060169E  39 55 FC                  CMP dword ptr [EBP + -0x4],EDX
006016A1  0F 84 DF 00 00 00         JZ 0x00601786
LAB_006016a7:
006016A7  85 FF                     TEST EDI,EDI
006016A9  0F 8C 15 02 00 00         JL 0x006018c4
006016AF  85 DB                     TEST EBX,EBX
006016B1  0F 8C CF 00 00 00         JL 0x00601786
006016B7  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
006016BE  3B F8                     CMP EDI,EAX
006016C0  0F 8D C0 00 00 00         JGE 0x00601786
006016C6  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
006016CD  3B D9                     CMP EBX,ECX
006016CF  0F 8D B1 00 00 00         JGE 0x00601786
006016D5  0F AF C3                  IMUL EAX,EBX
006016D8  8B 0D 6C B2 7F 00         MOV ECX,dword ptr [0x007fb26c]
006016DE  03 C8                     ADD ECX,EAX
006016E0  80 3C 39 00               CMP byte ptr [ECX + EDI*0x1],0x0
006016E4  0F 86 9C 00 00 00         JBE 0x00601786
006016EA  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006016ED  8B 0C B5 4C B2 7F 00      MOV ECX,dword ptr [ESI*0x4 + 0x7fb24c]
006016F4  85 C9                     TEST ECX,ECX
006016F6  74 0C                     JZ 0x00601704
006016F8  03 C8                     ADD ECX,EAX
006016FA  80 3C 39 00               CMP byte ptr [ECX + EDI*0x1],0x0
006016FE  0F 87 82 00 00 00         JA 0x00601786
LAB_00601704:
00601704  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00601707  8A 48 2C                  MOV CL,byte ptr [EAX + 0x2c]
0060170A  84 C9                     TEST CL,CL
0060170C  75 74                     JNZ 0x00601782
0060170E  83 FA 05                  CMP EDX,0x5
00601711  7D 6F                     JGE 0x00601782
00601713  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00601716  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0060171C  52                        PUSH EDX
0060171D  6A 01                     PUSH 0x1
0060171F  56                        PUSH ESI
00601720  53                        PUSH EBX
00601721  57                        PUSH EDI
00601722  E8 3F 24 E0 FF            CALL 0x00403b66
00601727  85 C0                     TEST EAX,EAX
00601729  7C 5B                     JL 0x00601786
0060172B  8D 4D E8                  LEA ECX,[EBP + -0x18]
0060172E  8D 55 EC                  LEA EDX,[EBP + -0x14]
00601731  51                        PUSH ECX
00601732  8D 4D F0                  LEA ECX,[EBP + -0x10]
00601735  52                        PUSH EDX
00601736  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00601739  51                        PUSH ECX
0060173A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0060173D  50                        PUSH EAX
0060173E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00601741  52                        PUSH EDX
00601742  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00601745  50                        PUSH EAX
00601746  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00601749  51                        PUSH ECX
0060174A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0060174D  52                        PUSH EDX
0060174E  50                        PUSH EAX
0060174F  51                        PUSH ECX
00601750  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00601756  C7 45 F8 05 00 00 00      MOV dword ptr [EBP + -0x8],0x5
0060175D  E8 E9 34 E0 FF            CALL 0x00404c4b
00601762  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00601765  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00601768  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0060176B  52                        PUSH EDX
0060176C  50                        PUSH EAX
0060176D  51                        PUSH ECX
0060176E  E8 0F 44 E0 FF            CALL 0x00405b82
00601773  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00601776  83 C4 0C                  ADD ESP,0xc
00601779  5F                        POP EDI
0060177A  5E                        POP ESI
0060177B  5B                        POP EBX
0060177C  8B E5                     MOV ESP,EBP
0060177E  5D                        POP EBP
0060177F  C2 34 00                  RET 0x34
LAB_00601782:
00601782  C6 40 2C 01               MOV byte ptr [EAX + 0x2c],0x1
LAB_00601786:
00601786  85 FF                     TEST EDI,EDI
00601788  0F 8C 36 01 00 00         JL 0x006018c4
0060178E  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
00601795  3B FA                     CMP EDI,EDX
00601797  0F 8D 27 01 00 00         JGE 0x006018c4
0060179D  85 DB                     TEST EBX,EBX
0060179F  0F 8C 1F 01 00 00         JL 0x006018c4
006017A5  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
006017AC  3B D8                     CMP EBX,EAX
006017AE  0F 8D 10 01 00 00         JGE 0x006018c4
006017B4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006017B7  85 F6                     TEST ESI,ESI
006017B9  0F 8C 08 01 00 00         JL 0x006018c7
006017BF  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
006017C6  3B F1                     CMP ESI,ECX
006017C8  0F 8D F9 00 00 00         JGE 0x006018c7
006017CE  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006017D4  56                        PUSH ESI
006017D5  53                        PUSH EBX
006017D6  57                        PUSH EDI
006017D7  E8 5F 35 E0 FF            CALL 0x00404d3b
006017DC  85 C0                     TEST EAX,EAX
006017DE  0F 85 E3 00 00 00         JNZ 0x006018c7
006017E4  66 85 FF                  TEST DI,DI
006017E7  7C 51                     JL 0x0060183a
006017E9  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
006017EF  66 3B F8                  CMP DI,AX
006017F2  7D 46                     JGE 0x0060183a
006017F4  66 85 DB                  TEST BX,BX
006017F7  7C 41                     JL 0x0060183a
006017F9  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
00601800  7D 38                     JGE 0x0060183a
00601802  66 85 F6                  TEST SI,SI
00601805  7C 33                     JL 0x0060183a
00601807  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
0060180E  7D 2A                     JGE 0x0060183a
00601810  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00601817  0F BF CE                  MOVSX ECX,SI
0060181A  0F AF D1                  IMUL EDX,ECX
0060181D  0F BF C0                  MOVSX EAX,AX
00601820  0F BF CB                  MOVSX ECX,BX
00601823  0F AF C1                  IMUL EAX,ECX
00601826  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0060182C  03 D0                     ADD EDX,EAX
0060182E  0F BF C7                  MOVSX EAX,DI
00601831  03 D0                     ADD EDX,EAX
00601833  8B 34 D1                  MOV ESI,dword ptr [ECX + EDX*0x8]
00601836  85 F6                     TEST ESI,ESI
00601838  75 15                     JNZ 0x0060184f
LAB_0060183a:
0060183A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060183D  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00601840  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00601843  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0060184A  E9 E9 02 00 00            JMP 0x00601b38
LAB_0060184f:
0060184F  8B 16                     MOV EDX,dword ptr [ESI]
00601851  8B CE                     MOV ECX,ESI
00601853  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00601859  85 C0                     TEST EAX,EAX
0060185B  0F 84 F5 02 00 00         JZ 0x00601b56
00601861  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00601864  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00601867  3B C8                     CMP ECX,EAX
00601869  0F 84 E7 02 00 00         JZ 0x00601b56
0060186F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00601872  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00601875  8B 16                     MOV EDX,dword ptr [ESI]
00601877  50                        PUSH EAX
00601878  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060187B  51                        PUSH ECX
0060187C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0060187F  50                        PUSH EAX
00601880  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00601883  51                        PUSH ECX
00601884  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00601887  50                        PUSH EAX
00601888  51                        PUSH ECX
00601889  8B CE                     MOV ECX,ESI
0060188B  FF 92 DC 00 00 00         CALL dword ptr [EDX + 0xdc]
00601891  85 C0                     TEST EAX,EAX
00601893  7E 2F                     JLE 0x006018c4
00601895  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00601898  85 C9                     TEST ECX,ECX
0060189A  74 0E                     JZ 0x006018aa
0060189C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0060189F  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
006018A2  3B CA                     CMP ECX,EDX
006018A4  0F 84 AC 02 00 00         JZ 0x00601b56
LAB_006018aa:
006018AA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006018AD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006018B0  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
006018B7  89 39                     MOV dword ptr [ECX],EDI
006018B9  89 59 04                  MOV dword ptr [ECX + 0x4],EBX
006018BC  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
006018BF  E9 27 02 00 00            JMP 0x00601aeb
LAB_006018c4:
006018C4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006018c7:
006018C7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006018CA  B9 C9 00 00 00            MOV ECX,0xc9
006018CF  99                        CDQ
006018D0  F7 F9                     IDIV ECX
006018D2  83 FA 64                  CMP EDX,0x64
006018D5  7F 16                     JG 0x006018ed
006018D7  8D 47 FF                  LEA EAX,[EDI + -0x1]
006018DA  85 C0                     TEST EAX,EAX
006018DC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006018DF  7D 07                     JGE 0x006018e8
006018E1  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_006018e8:
006018E8  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006018EB  EB 18                     JMP 0x00601905
LAB_006018ed:
006018ED  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
006018F4  8D 4F 01                  LEA ECX,[EDI + 0x1]
006018F7  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006018FA  3B C8                     CMP ECX,EAX
006018FC  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006018FF  7C 04                     JL 0x00601905
00601901  48                        DEC EAX
00601902  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_00601905:
00601905  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00601908  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060190B  85 C0                     TEST EAX,EAX
0060190D  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00601913  7C 0A                     JL 0x0060191f
00601915  E8 6E C9 12 00            CALL 0x0072e288
0060191A  0F BF C0                  MOVSX EAX,AX
0060191D  EB 09                     JMP 0x00601928
LAB_0060191f:
0060191F  E8 64 C9 12 00            CALL 0x0072e288
00601924  0F BF C0                  MOVSX EAX,AX
00601927  48                        DEC EAX
LAB_00601928:
00601928  83 F8 64                  CMP EAX,0x64
0060192B  7F 16                     JG 0x00601943
0060192D  8D 43 FF                  LEA EAX,[EBX + -0x1]
00601930  85 C0                     TEST EAX,EAX
00601932  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00601935  7D 07                     JGE 0x0060193e
00601937  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0060193e:
0060193E  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00601941  EB 18                     JMP 0x0060195b
LAB_00601943:
00601943  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0060194A  8D 4B 01                  LEA ECX,[EBX + 0x1]
0060194D  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00601950  3B C8                     CMP ECX,EAX
00601952  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00601955  7C 04                     JL 0x0060195b
00601957  48                        DEC EAX
00601958  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0060195b:
0060195B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0060195E  B9 C8 00 00 00            MOV ECX,0xc8
00601963  99                        CDQ
00601964  F7 F9                     IDIV ECX
00601966  83 FA 64                  CMP EDX,0x64
00601969  7F 14                     JG 0x0060197f
0060196B  8D 4E FF                  LEA ECX,[ESI + -0x1]
0060196E  85 C9                     TEST ECX,ECX
00601970  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00601973  7D 05                     JGE 0x0060197a
00601975  33 C9                     XOR ECX,ECX
00601977  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_0060197a:
0060197A  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0060197D  EB 17                     JMP 0x00601996
LAB_0060197f:
0060197F  8D 46 01                  LEA EAX,[ESI + 0x1]
00601982  8B CE                     MOV ECX,ESI
00601984  83 F8 05                  CMP EAX,0x5
00601987  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0060198A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0060198D  7C 07                     JL 0x00601996
0060198F  C7 45 E4 04 00 00 00      MOV dword ptr [EBP + -0x1c],0x4
LAB_00601996:
00601996  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00601999  39 38                     CMP dword ptr [EAX],EDI
0060199B  75 0A                     JNZ 0x006019a7
0060199D  39 58 04                  CMP dword ptr [EAX + 0x4],EBX
006019A0  75 05                     JNZ 0x006019a7
006019A2  39 70 08                  CMP dword ptr [EAX + 0x8],ESI
006019A5  74 0F                     JZ 0x006019b6
LAB_006019a7:
006019A7  89 38                     MOV dword ptr [EAX],EDI
006019A9  89 58 04                  MOV dword ptr [EAX + 0x4],EBX
006019AC  89 70 08                  MOV dword ptr [EAX + 0x8],ESI
006019AF  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
LAB_006019b6:
006019B6  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006019B9  85 D2                     TEST EDX,EDX
006019BB  0F 85 95 01 00 00         JNZ 0x00601b56
006019C1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006019C4  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006019C7  3B C2                     CMP EAX,EDX
006019C9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006019CC  0F 8F 84 01 00 00         JG 0x00601b56
006019D2  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_006019d5:
006019D5  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006019D8  3B D8                     CMP EBX,EAX
006019DA  0F 8F D8 00 00 00         JG 0x00601ab8
LAB_006019e0:
006019E0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006019E3  8B F9                     MOV EDI,ECX
006019E5  3B CA                     CMP ECX,EDX
006019E7  0F 8F C2 00 00 00         JG 0x00601aaf
LAB_006019ed:
006019ED  66 83 7D FC 00            CMP word ptr [EBP + -0x4],0x0
006019F2  0F 8C A8 00 00 00         JL 0x00601aa0
006019F8  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
006019FC  66 3B 15 40 B2 7F 00      CMP DX,word ptr [0x007fb240]
00601A03  0F 8D 97 00 00 00         JGE 0x00601aa0
00601A09  66 85 DB                  TEST BX,BX
00601A0C  0F 8C 8E 00 00 00         JL 0x00601aa0
00601A12  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
00601A19  0F 8D 81 00 00 00         JGE 0x00601aa0
00601A1F  66 85 FF                  TEST DI,DI
00601A22  7C 7C                     JL 0x00601aa0
00601A24  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00601A2B  7D 73                     JGE 0x00601aa0
00601A2D  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
00601A34  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
00601A3B  0F BF C3                  MOVSX EAX,BX
00601A3E  0F AF C2                  IMUL EAX,EDX
00601A41  0F BF D7                  MOVSX EDX,DI
00601A44  0F AF D6                  IMUL EDX,ESI
00601A47  03 C2                     ADD EAX,EDX
00601A49  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
00601A4D  03 C2                     ADD EAX,EDX
00601A4F  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00601A55  8B 34 C2                  MOV ESI,dword ptr [EDX + EAX*0x8]
00601A58  85 F6                     TEST ESI,ESI
00601A5A  74 44                     JZ 0x00601aa0
00601A5C  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00601A5F  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00601A62  3B C2                     CMP EAX,EDX
00601A64  74 3A                     JZ 0x00601aa0
00601A66  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00601A69  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00601A6C  8B 16                     MOV EDX,dword ptr [ESI]
00601A6E  50                        PUSH EAX
00601A6F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00601A72  51                        PUSH ECX
00601A73  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00601A76  50                        PUSH EAX
00601A77  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00601A7A  51                        PUSH ECX
00601A7B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00601A7E  50                        PUSH EAX
00601A7F  51                        PUSH ECX
00601A80  8B CE                     MOV ECX,ESI
00601A82  FF 92 DC 00 00 00         CALL dword ptr [EDX + 0xdc]
00601A88  85 C0                     TEST EAX,EAX
00601A8A  7E 11                     JLE 0x00601a9d
00601A8C  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00601A8F  85 C9                     TEST ECX,ECX
00601A91  74 43                     JZ 0x00601ad6
00601A93  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00601A96  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00601A99  3B CA                     CMP ECX,EDX
00601A9B  75 39                     JNZ 0x00601ad6
LAB_00601a9d:
00601A9D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_00601aa0:
00601AA0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00601AA3  47                        INC EDI
00601AA4  3B F8                     CMP EDI,EAX
00601AA6  0F 8E 41 FF FF FF         JLE 0x006019ed
00601AAC  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_00601aaf:
00601AAF  43                        INC EBX
00601AB0  3B D8                     CMP EBX,EAX
00601AB2  0F 8E 28 FF FF FF         JLE 0x006019e0
LAB_00601ab8:
00601AB8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00601ABB  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
00601ABE  42                        INC EDX
00601ABF  3B D6                     CMP EDX,ESI
00601AC1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00601AC4  0F 8E 0B FF FF FF         JLE 0x006019d5
00601ACA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00601ACD  5F                        POP EDI
00601ACE  5E                        POP ESI
00601ACF  5B                        POP EBX
00601AD0  8B E5                     MOV ESP,EBP
00601AD2  5D                        POP EBP
00601AD3  C2 34 00                  RET 0x34
LAB_00601ad6:
00601AD6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00601AD9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00601ADC  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
00601AE3  89 11                     MOV dword ptr [ECX],EDX
00601AE5  89 59 04                  MOV dword ptr [ECX + 0x4],EBX
00601AE8  89 79 08                  MOV dword ptr [ECX + 0x8],EDI
LAB_00601aeb:
00601AEB  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00601AEE  89 41 18                  MOV dword ptr [ECX + 0x18],EAX
00601AF1  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00601AF4  89 51 10                  MOV dword ptr [ECX + 0x10],EDX
00601AF7  85 C0                     TEST EAX,EAX
00601AF9  89 71 14                  MOV dword ptr [ECX + 0x14],ESI
00601AFC  C7 41 0C 01 00 00 00      MOV dword ptr [ECX + 0xc],0x1
00601B03  75 51                     JNZ 0x00601b56
00601B05  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
00601B08  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00601B0B  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00601B0E  68 10 01 00 00            PUSH 0x110
00601B13  50                        PUSH EAX
00601B14  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00601B17  51                        PUSH ECX
00601B18  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00601B1B  52                        PUSH EDX
00601B1C  56                        PUSH ESI
00601B1D  50                        PUSH EAX
00601B1E  51                        PUSH ECX
00601B1F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00601B22  E8 FB 22 E0 FF            CALL 0x00403e22
00601B27  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00601B2A  5F                        POP EDI
00601B2B  5E                        POP ESI
00601B2C  5B                        POP EBX
00601B2D  8B E5                     MOV ESP,EBP
00601B2F  5D                        POP EBP
00601B30  C2 34 00                  RET 0x34
LAB_00601b33:
00601B33  83 FA 01                  CMP EDX,0x1
00601B36  75 1E                     JNZ 0x00601b56
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500::cf_common_exit_00601B38:
00601B38  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00601B3B  89 71 28                  MOV dword ptr [ECX + 0x28],ESI
00601B3E  89 51 20                  MOV dword ptr [ECX + 0x20],EDX
00601B41  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00601B44  89 51 24                  MOV dword ptr [ECX + 0x24],EDX
00601B47  89 39                     MOV dword ptr [ECX],EDI
00601B49  89 59 04                  MOV dword ptr [ECX + 0x4],EBX
00601B4C  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00601B4F  C7 41 14 00 00 00 00      MOV dword ptr [ECX + 0x14],0x0
LAB_00601b56:
00601B56  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00601B59  5F                        POP EDI
00601B5A  5E                        POP ESI
00601B5B  5B                        POP EBX
00601B5C  8B E5                     MOV ESP,EBP
00601B5E  5D                        POP EBP
00601B5F  C2 34 00                  RET 0x34
