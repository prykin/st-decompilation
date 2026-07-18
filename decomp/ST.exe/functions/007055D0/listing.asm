FUN_007055d0:
007055D0  55                        PUSH EBP
007055D1  8B EC                     MOV EBP,ESP
007055D3  83 EC 0C                  SUB ESP,0xc
007055D6  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
007055D9  53                        PUSH EBX
007055DA  48                        DEC EAX
007055DB  56                        PUSH ESI
007055DC  57                        PUSH EDI
007055DD  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
007055E7  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
007055EA  0F 88 11 03 00 00         JS 0x00705901
007055F0  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007055F3  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
007055F6  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_007055f9:
007055F9  83 7D 28 01               CMP dword ptr [EBP + 0x28],0x1
007055FD  75 49                     JNZ 0x00705648
007055FF  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00705602  48                        DEC EAX
00705603  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
00705606  0F 88 F5 02 00 00         JS 0x00705901
0070560C  33 C0                     XOR EAX,EAX
0070560E  8A 07                     MOV AL,byte ptr [EDI]
00705610  47                        INC EDI
00705611  85 C0                     TEST EAX,EAX
00705613  74 2C                     JZ 0x00705641
00705615  8B CE                     MOV ECX,ESI
LAB_00705617:
00705617  A8 80                     TEST AL,0x80
00705619  74 16                     JZ 0x00705631
0070561B  A8 40                     TEST AL,0x40
0070561D  74 06                     JZ 0x00705625
0070561F  47                        INC EDI
00705620  83 E0 3F                  AND EAX,0x3f
00705623  EB 0F                     JMP 0x00705634
LAB_00705625:
00705625  8B D0                     MOV EDX,EAX
00705627  83 E2 3F                  AND EDX,0x3f
0070562A  03 FA                     ADD EDI,EDX
0070562C  83 E0 3F                  AND EAX,0x3f
0070562F  EB 03                     JMP 0x00705634
LAB_00705631:
00705631  83 E0 7F                  AND EAX,0x7f
LAB_00705634:
00705634  2B C8                     SUB ECX,EAX
00705636  85 C9                     TEST ECX,ECX
00705638  7E 07                     JLE 0x00705641
0070563A  33 C0                     XOR EAX,EAX
0070563C  8A 07                     MOV AL,byte ptr [EDI]
0070563E  47                        INC EDI
0070563F  EB D6                     JMP 0x00705617
LAB_00705641:
00705641  C7 45 28 02 00 00 00      MOV dword ptr [EBP + 0x28],0x2
LAB_00705648:
00705648  33 D2                     XOR EDX,EDX
0070564A  8A 17                     MOV DL,byte ptr [EDI]
0070564C  47                        INC EDI
0070564D  85 D2                     TEST EDX,EDX
0070564F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00705652  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00705655  0F 84 7B 02 00 00         JZ 0x007058d6
0070565B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070565E  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00705661  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00705664:
00705664  F6 C2 80                  TEST DL,0x80
00705667  8B C2                     MOV EAX,EDX
00705669  74 21                     JZ 0x0070568c
0070566B  83 E0 3F                  AND EAX,0x3f
0070566E  3B C3                     CMP EAX,EBX
00705670  7F 2A                     JG 0x0070569c
00705672  F6 C2 40                  TEST DL,0x40
00705675  74 0A                     JZ 0x00705681
00705677  47                        INC EDI
00705678  33 D2                     XOR EDX,EDX
0070567A  2B D8                     SUB EBX,EAX
0070567C  8A 17                     MOV DL,byte ptr [EDI]
0070567E  47                        INC EDI
0070567F  EB E3                     JMP 0x00705664
LAB_00705681:
00705681  03 F8                     ADD EDI,EAX
00705683  33 D2                     XOR EDX,EDX
00705685  2B D8                     SUB EBX,EAX
00705687  8A 17                     MOV DL,byte ptr [EDI]
00705689  47                        INC EDI
0070568A  EB D8                     JMP 0x00705664
LAB_0070568c:
0070568C  83 E0 7F                  AND EAX,0x7f
0070568F  3B C3                     CMP EAX,EBX
00705691  7F 09                     JG 0x0070569c
00705693  33 D2                     XOR EDX,EDX
00705695  2B D8                     SUB EBX,EAX
00705697  8A 17                     MOV DL,byte ptr [EDI]
00705699  47                        INC EDI
0070569A  EB C8                     JMP 0x00705664
LAB_0070569c:
0070569C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070569F  2B C3                     SUB EAX,EBX
007056A1  8B DA                     MOV EBX,EDX
007056A3  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
007056A6  81 E3 C0 00 00 00         AND EBX,0xc0
007056AC  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007056AF  80 FB 80                  CMP BL,0x80
007056B2  75 06                     JNZ 0x007056ba
007056B4  03 7D FC                  ADD EDI,dword ptr [EBP + -0x4]
007056B7  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
LAB_007056ba:
007056BA  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007056BD  3B C3                     CMP EAX,EBX
007056BF  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007056C2  0F 8F 61 01 00 00         JG 0x00705829
007056C8  8B DA                     MOV EBX,EDX
007056CA  81 E3 80 00 00 00         AND EBX,0x80
007056D0  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_007056d3:
007056D3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007056D6  2B D8                     SUB EBX,EAX
007056D8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007056DB  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
007056DE  85 DB                     TEST EBX,EBX
007056E0  0F 84 1D 01 00 00         JZ 0x00705803
007056E6  F6 C2 40                  TEST DL,0x40
007056E9  74 68                     JZ 0x00705753
007056EB  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
007056EE  33 D2                     XOR EDX,EDX
007056F0  8A 17                     MOV DL,byte ptr [EDI]
007056F2  8B FA                     MOV EDI,EDX
007056F4  33 D2                     XOR EDX,EDX
007056F6  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
007056F9  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007056FC  47                        INC EDI
007056FD  85 F6                     TEST ESI,ESI
007056FF  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00705702  7E 15                     JLE 0x00705719
00705704  83 FE 01                  CMP ESI,0x1
00705707  75 06                     JNZ 0x0070570f
00705709  BE 02 00 00 00            MOV ESI,0x2
0070570E  48                        DEC EAX
LAB_0070570f:
0070570F  85 C0                     TEST EAX,EAX
00705711  7E 38                     JLE 0x0070574b
00705713  88 11                     MOV byte ptr [ECX],DL
00705715  41                        INC ECX
00705716  33 F6                     XOR ESI,ESI
00705718  48                        DEC EAX
LAB_00705719:
00705719  85 C0                     TEST EAX,EAX
0070571B  7E 2E                     JLE 0x0070574b
0070571D  88 11                     MOV byte ptr [ECX],DL
0070571F  41                        INC ECX
00705720  48                        DEC EAX
00705721  BE 01 00 00 00            MOV ESI,0x1
00705726  85 C0                     TEST EAX,EAX
00705728  7E 21                     JLE 0x0070574b
LAB_0070572a:
0070572A  48                        DEC EAX
0070572B  BE 02 00 00 00            MOV ESI,0x2
00705730  85 C0                     TEST EAX,EAX
00705732  7E 17                     JLE 0x0070574b
00705734  88 11                     MOV byte ptr [ECX],DL
00705736  41                        INC ECX
00705737  33 F6                     XOR ESI,ESI
00705739  48                        DEC EAX
0070573A  85 C0                     TEST EAX,EAX
0070573C  7E 0D                     JLE 0x0070574b
0070573E  88 11                     MOV byte ptr [ECX],DL
00705740  41                        INC ECX
00705741  48                        DEC EAX
00705742  BE 01 00 00 00            MOV ESI,0x1
00705747  85 C0                     TEST EAX,EAX
00705749  7F DF                     JG 0x0070572a
LAB_0070574b:
0070574B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0070574E  E9 89 00 00 00            JMP 0x007057dc
LAB_00705753:
00705753  85 F6                     TEST ESI,ESI
00705755  7E 28                     JLE 0x0070577f
00705757  83 FE 01                  CMP ESI,0x1
0070575A  75 0A                     JNZ 0x00705766
0070575C  47                        INC EDI
0070575D  BE 02 00 00 00            MOV ESI,0x2
00705762  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00705765  48                        DEC EAX
LAB_00705766:
00705766  85 C0                     TEST EAX,EAX
00705768  7E 72                     JLE 0x007057dc
0070576A  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
0070576D  33 DB                     XOR EBX,EBX
0070576F  8A 1F                     MOV BL,byte ptr [EDI]
00705771  41                        INC ECX
00705772  47                        INC EDI
00705773  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00705776  33 F6                     XOR ESI,ESI
00705778  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
0070577B  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0070577E  48                        DEC EAX
LAB_0070577f:
0070577F  85 C0                     TEST EAX,EAX
00705781  7E 59                     JLE 0x007057dc
00705783  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00705786  33 DB                     XOR EBX,EBX
00705788  8A 1F                     MOV BL,byte ptr [EDI]
0070578A  41                        INC ECX
0070578B  47                        INC EDI
0070578C  48                        DEC EAX
0070578D  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00705790  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00705793  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
00705796  BE 01 00 00 00            MOV ESI,0x1
0070579B  85 C0                     TEST EAX,EAX
0070579D  7E 3D                     JLE 0x007057dc
LAB_0070579f:
0070579F  47                        INC EDI
007057A0  48                        DEC EAX
007057A1  85 C0                     TEST EAX,EAX
007057A3  BE 02 00 00 00            MOV ESI,0x2
007057A8  7E 2F                     JLE 0x007057d9
007057AA  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
007057AD  33 DB                     XOR EBX,EBX
007057AF  8A 1F                     MOV BL,byte ptr [EDI]
007057B1  41                        INC ECX
007057B2  47                        INC EDI
007057B3  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
007057B6  33 F6                     XOR ESI,ESI
007057B8  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
007057BB  48                        DEC EAX
007057BC  85 C0                     TEST EAX,EAX
007057BE  7E 19                     JLE 0x007057d9
007057C0  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
007057C3  33 DB                     XOR EBX,EBX
007057C5  8A 1F                     MOV BL,byte ptr [EDI]
007057C7  41                        INC ECX
007057C8  47                        INC EDI
007057C9  48                        DEC EAX
007057CA  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
007057CD  BE 01 00 00 00            MOV ESI,0x1
007057D2  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
007057D5  85 C0                     TEST EAX,EAX
007057D7  7F C6                     JG 0x0070579f
LAB_007057d9:
007057D9  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
LAB_007057dc:
007057DC  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007057DF  85 DB                     TEST EBX,EBX
007057E1  7E 44                     JLE 0x00705827
007057E3  33 D2                     XOR EDX,EDX
007057E5  8A 17                     MOV DL,byte ptr [EDI]
007057E7  8B C2                     MOV EAX,EDX
007057E9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007057EC  25 80 00 00 00            AND EAX,0x80
007057F1  47                        INC EDI
007057F2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007057F5  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
007057F8  85 C0                     TEST EAX,EAX
007057FA  8B C2                     MOV EAX,EDX
007057FC  74 1C                     JZ 0x0070581a
007057FE  83 E0 3F                  AND EAX,0x3f
00705801  EB 1A                     JMP 0x0070581d
LAB_00705803:
00705803  48                        DEC EAX
00705804  78 D6                     JS 0x007057dc
00705806  40                        INC EAX
LAB_00705807:
00705807  83 FE 01                  CMP ESI,0x1
0070580A  74 01                     JZ 0x0070580d
0070580C  41                        INC ECX
LAB_0070580d:
0070580D  46                        INC ESI
0070580E  83 FE 02                  CMP ESI,0x2
00705811  7E 02                     JLE 0x00705815
00705813  33 F6                     XOR ESI,ESI
LAB_00705815:
00705815  48                        DEC EAX
00705816  75 EF                     JNZ 0x00705807
00705818  EB C2                     JMP 0x007057dc
LAB_0070581a:
0070581A  83 E0 7F                  AND EAX,0x7f
LAB_0070581d:
0070581D  3B C3                     CMP EAX,EBX
0070581F  0F 8E AE FE FF FF         JLE 0x007056d3
00705825  EB 02                     JMP 0x00705829
LAB_00705827:
00705827  33 C0                     XOR EAX,EAX
LAB_00705829:
00705829  2B C3                     SUB EAX,EBX
0070582B  85 DB                     TEST EBX,EBX
0070582D  7E 5E                     JLE 0x0070588d
0070582F  F6 C2 80                  TEST DL,0x80
00705832  74 59                     JZ 0x0070588d
00705834  F6 C2 40                  TEST DL,0x40
00705837  0F 84 CD 00 00 00         JZ 0x0070590a
0070583D  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00705840  33 D2                     XOR EDX,EDX
00705842  8A 17                     MOV DL,byte ptr [EDI]
00705844  8B FA                     MOV EDI,EDX
00705846  33 D2                     XOR EDX,EDX
00705848  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
0070584B  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0070584E  47                        INC EDI
0070584F  85 F6                     TEST ESI,ESI
00705851  7E 13                     JLE 0x00705866
00705853  83 FE 01                  CMP ESI,0x1
00705856  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00705859  75 01                     JNZ 0x0070585c
0070585B  4E                        DEC ESI
LAB_0070585c:
0070585C  85 F6                     TEST ESI,ESI
0070585E  7E 2A                     JLE 0x0070588a
00705860  88 11                     MOV byte ptr [ECX],DL
00705862  41                        INC ECX
00705863  4E                        DEC ESI
00705864  EB 03                     JMP 0x00705869
LAB_00705866:
00705866  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00705869:
00705869  85 F6                     TEST ESI,ESI
0070586B  7E 1D                     JLE 0x0070588a
0070586D  88 11                     MOV byte ptr [ECX],DL
0070586F  41                        INC ECX
00705870  4E                        DEC ESI
00705871  85 F6                     TEST ESI,ESI
00705873  7E 15                     JLE 0x0070588a
LAB_00705875:
00705875  4E                        DEC ESI
00705876  85 F6                     TEST ESI,ESI
00705878  7E 10                     JLE 0x0070588a
0070587A  88 11                     MOV byte ptr [ECX],DL
0070587C  41                        INC ECX
0070587D  4E                        DEC ESI
0070587E  85 F6                     TEST ESI,ESI
00705880  7E 08                     JLE 0x0070588a
00705882  88 11                     MOV byte ptr [ECX],DL
00705884  41                        INC ECX
00705885  4E                        DEC ESI
00705886  85 F6                     TEST ESI,ESI
00705888  7F EB                     JG 0x00705875
LAB_0070588a:
0070588A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0070588d:
0070588D  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00705890  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00705893  8B CE                     MOV ECX,ESI
00705895  2B CB                     SUB ECX,EBX
00705897  2B 4D 1C                  SUB ECX,dword ptr [EBP + 0x1c]
0070589A  3B C1                     CMP EAX,ECX
0070589C  7D 2B                     JGE 0x007058c9
LAB_0070589e:
0070589E  81 E2 C0 00 00 00         AND EDX,0xc0
007058A4  2B C8                     SUB ECX,EAX
007058A6  80 FA 80                  CMP DL,0x80
007058A9  75 02                     JNZ 0x007058ad
007058AB  03 F8                     ADD EDI,EAX
LAB_007058ad:
007058AD  33 D2                     XOR EDX,EDX
007058AF  8A 17                     MOV DL,byte ptr [EDI]
007058B1  8B C2                     MOV EAX,EDX
007058B3  24 80                     AND AL,0x80
007058B5  47                        INC EDI
007058B6  84 C0                     TEST AL,AL
007058B8  8B C2                     MOV EAX,EDX
007058BA  74 09                     JZ 0x007058c5
007058BC  83 E0 3F                  AND EAX,0x3f
007058BF  F6 C2 40                  TEST DL,0x40
007058C2  74 01                     JZ 0x007058c5
007058C4  47                        INC EDI
LAB_007058c5:
007058C5  3B C1                     CMP EAX,ECX
007058C7  7C D5                     JL 0x0070589e
LAB_007058c9:
007058C9  81 E2 C0 00 00 00         AND EDX,0xc0
007058CF  80 FA 80                  CMP DL,0x80
007058D2  75 02                     JNZ 0x007058d6
007058D4  03 F9                     ADD EDI,ECX
LAB_007058d6:
007058D6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007058D9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007058DC  03 C1                     ADD EAX,ECX
007058DE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007058E1  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
007058E4  40                        INC EAX
007058E5  83 F8 02                  CMP EAX,0x2
007058E8  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
007058EB  7E 07                     JLE 0x007058f4
007058ED  C7 45 28 00 00 00 00      MOV dword ptr [EBP + 0x28],0x0
LAB_007058f4:
007058F4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
007058F7  48                        DEC EAX
007058F8  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
007058FB  0F 89 F8 FC FF FF         JNS 0x007055f9
LAB_00705901:
00705901  5F                        POP EDI
00705902  5E                        POP ESI
00705903  5B                        POP EBX
00705904  8B E5                     MOV ESP,EBP
00705906  5D                        POP EBP
00705907  C2 28 00                  RET 0x28
LAB_0070590a:
0070590A  85 F6                     TEST ESI,ESI
0070590C  7E 28                     JLE 0x00705936
0070590E  83 FE 01                  CMP ESI,0x1
00705911  75 05                     JNZ 0x00705918
00705913  47                        INC EDI
00705914  4B                        DEC EBX
00705915  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00705918:
00705918  85 DB                     TEST EBX,EBX
0070591A  0F 8E 6D FF FF FF         JLE 0x0070588d
00705920  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00705923  33 DB                     XOR EBX,EBX
00705925  8A 1F                     MOV BL,byte ptr [EDI]
00705927  41                        INC ECX
00705928  47                        INC EDI
00705929  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
0070592C  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
0070592F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00705932  4B                        DEC EBX
00705933  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00705936:
00705936  85 DB                     TEST EBX,EBX
00705938  0F 8E 4F FF FF FF         JLE 0x0070588d
0070593E  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00705941  33 DB                     XOR EBX,EBX
00705943  8A 1F                     MOV BL,byte ptr [EDI]
00705945  41                        INC ECX
00705946  47                        INC EDI
00705947  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
0070594A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0070594D  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
00705950  4E                        DEC ESI
00705951  85 F6                     TEST ESI,ESI
00705953  0F 8E 34 FF FF FF         JLE 0x0070588d
LAB_00705959:
00705959  47                        INC EDI
0070595A  4E                        DEC ESI
0070595B  85 F6                     TEST ESI,ESI
0070595D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00705960  0F 8E 27 FF FF FF         JLE 0x0070588d
00705966  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00705969  33 DB                     XOR EBX,EBX
0070596B  8A 1F                     MOV BL,byte ptr [EDI]
0070596D  41                        INC ECX
0070596E  47                        INC EDI
0070596F  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00705972  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00705975  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
00705978  4E                        DEC ESI
00705979  85 F6                     TEST ESI,ESI
0070597B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0070597E  0F 8E 09 FF FF FF         JLE 0x0070588d
00705984  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00705987  33 DB                     XOR EBX,EBX
00705989  8A 1F                     MOV BL,byte ptr [EDI]
0070598B  41                        INC ECX
0070598C  47                        INC EDI
0070598D  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00705990  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00705993  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
00705996  4E                        DEC ESI
00705997  85 F6                     TEST ESI,ESI
00705999  7F BE                     JG 0x00705959
0070599B  E9 ED FE FF FF            JMP 0x0070588d
