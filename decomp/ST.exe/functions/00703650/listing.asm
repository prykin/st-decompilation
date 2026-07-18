FUN_00703650:
00703650  55                        PUSH EBP
00703651  8B EC                     MOV EBP,ESP
00703653  83 EC 08                  SUB ESP,0x8
00703656  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00703659  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00703663  48                        DEC EAX
00703664  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00703667  0F 88 7F 06 00 00         JS 0x00703cec
0070366D  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
00703670  53                        PUSH EBX
00703671  56                        PUSH ESI
00703672  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00703675  57                        PUSH EDI
00703676  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_00703679:
00703679  F6 C2 01                  TEST DL,0x1
0070367C  75 4E                     JNZ 0x007036cc
LAB_0070367e:
0070367E  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00703681  48                        DEC EAX
00703682  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00703685  78 42                     JS 0x007036c9
00703687  33 C0                     XOR EAX,EAX
00703689  8A 07                     MOV AL,byte ptr [EDI]
0070368B  47                        INC EDI
0070368C  85 C0                     TEST EAX,EAX
0070368E  74 2C                     JZ 0x007036bc
00703690  8B CE                     MOV ECX,ESI
LAB_00703692:
00703692  A8 80                     TEST AL,0x80
00703694  74 16                     JZ 0x007036ac
00703696  A8 40                     TEST AL,0x40
00703698  74 06                     JZ 0x007036a0
0070369A  47                        INC EDI
0070369B  83 E0 3F                  AND EAX,0x3f
0070369E  EB 0F                     JMP 0x007036af
LAB_007036a0:
007036A0  8B D8                     MOV EBX,EAX
007036A2  83 E3 3F                  AND EBX,0x3f
007036A5  03 FB                     ADD EDI,EBX
007036A7  83 E0 3F                  AND EAX,0x3f
007036AA  EB 03                     JMP 0x007036af
LAB_007036ac:
007036AC  83 E0 7F                  AND EAX,0x7f
LAB_007036af:
007036AF  2B C8                     SUB ECX,EAX
007036B1  85 C9                     TEST ECX,ECX
007036B3  7E 07                     JLE 0x007036bc
007036B5  33 C0                     XOR EAX,EAX
007036B7  8A 07                     MOV AL,byte ptr [EDI]
007036B9  47                        INC EDI
007036BA  EB D6                     JMP 0x00703692
LAB_007036bc:
007036BC  42                        INC EDX
007036BD  83 FA 04                  CMP EDX,0x4
007036C0  7E 02                     JLE 0x007036c4
007036C2  33 D2                     XOR EDX,EDX
LAB_007036c4:
007036C4  F6 C2 01                  TEST DL,0x1
007036C7  74 B5                     JZ 0x0070367e
LAB_007036c9:
007036C9  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_007036cc:
007036CC  33 C0                     XOR EAX,EAX
007036CE  8A 07                     MOV AL,byte ptr [EDI]
007036D0  47                        INC EDI
007036D1  85 C0                     TEST EAX,EAX
007036D3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007036D6  0F 84 DC 05 00 00         JZ 0x00703cb8
007036DC  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007036DF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007036E2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007036E5  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
007036E8  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_007036eb:
007036EB  A8 80                     TEST AL,0x80
007036ED  74 34                     JZ 0x00703723
007036EF  83 E0 3F                  AND EAX,0x3f
007036F2  3B C3                     CMP EAX,EBX
007036F4  7F 43                     JG 0x00703739
007036F6  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
007036FA  74 13                     JZ 0x0070370f
007036FC  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007036FF  47                        INC EDI
00703700  2B D8                     SUB EBX,EAX
00703702  33 C0                     XOR EAX,EAX
00703704  8A 07                     MOV AL,byte ptr [EDI]
00703706  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00703709  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070370C  47                        INC EDI
0070370D  EB DC                     JMP 0x007036eb
LAB_0070370f:
0070370F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00703712  03 F8                     ADD EDI,EAX
00703714  2B D8                     SUB EBX,EAX
00703716  33 C0                     XOR EAX,EAX
00703718  8A 07                     MOV AL,byte ptr [EDI]
0070371A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070371D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00703720  47                        INC EDI
00703721  EB C8                     JMP 0x007036eb
LAB_00703723:
00703723  83 E0 7F                  AND EAX,0x7f
00703726  3B C3                     CMP EAX,EBX
00703728  7F 0F                     JG 0x00703739
0070372A  2B D8                     SUB EBX,EAX
0070372C  33 C0                     XOR EAX,EAX
0070372E  8A 07                     MOV AL,byte ptr [EDI]
00703730  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00703733  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00703736  47                        INC EDI
00703737  EB B2                     JMP 0x007036eb
LAB_00703739:
00703739  2B C3                     SUB EAX,EBX
0070373B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070373E  81 E3 C0 00 00 00         AND EBX,0xc0
00703744  80 FB 80                  CMP BL,0x80
00703747  75 03                     JNZ 0x0070374c
00703749  03 7D 1C                  ADD EDI,dword ptr [EBP + 0x1c]
LAB_0070374c:
0070374C  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
0070374F  3B C3                     CMP EAX,EBX
00703751  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00703754  0F 8F BC 02 00 00         JG 0x00703a16
0070375A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070375D  81 E3 80 00 00 00         AND EBX,0x80
00703763  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00703766:
00703766  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00703769  2B D8                     SUB EBX,EAX
0070376B  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070376E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00703771  85 DB                     TEST EBX,EBX
00703773  0F 84 4D 02 00 00         JZ 0x007039c6
00703779  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
0070377D  0F 84 3A 01 00 00         JZ 0x007038bd
00703783  33 DB                     XOR EBX,EBX
00703785  8A 1F                     MOV BL,byte ptr [EDI]
00703787  47                        INC EDI
00703788  85 C9                     TEST ECX,ECX
0070378A  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0070378D  0F 8E 84 00 00 00         JLE 0x00703817
00703793  8D 59 FF                  LEA EBX,[ECX + -0x1]
00703796  83 FB 03                  CMP EBX,0x3
00703799  77 7C                     JA 0x00703817
switchD_0070379b::switchD:
0070379B  FF 24 9D F4 3C 70 00      JMP dword ptr [EBX*0x4 + 0x703cf4]
switchD_0070379b::caseD_1:
007037A2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007037A5  33 C9                     XOR ECX,ECX
007037A7  66 8B 0A                  MOV CX,word ptr [EDX]
007037AA  3B D9                     CMP EBX,ECX
007037AC  77 14                     JA 0x007037c2
007037AE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007037B1  33 DB                     XOR EBX,EBX
007037B3  8A 1E                     MOV BL,byte ptr [ESI]
007037B5  C1 E1 08                  SHL ECX,0x8
007037B8  0B CB                     OR ECX,EBX
007037BA  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007037BD  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007037C0  88 0E                     MOV byte ptr [ESI],CL
LAB_007037c2:
007037C2  83 C2 02                  ADD EDX,0x2
007037C5  46                        INC ESI
007037C6  48                        DEC EAX
007037C7  B9 02 00 00 00            MOV ECX,0x2
007037CC  85 C0                     TEST EAX,EAX
007037CE  0F 8E 0F 02 00 00         JLE 0x007039e3
switchD_0070379b::caseD_2:
007037D4  48                        DEC EAX
007037D5  B9 03 00 00 00            MOV ECX,0x3
007037DA  85 C0                     TEST EAX,EAX
007037DC  0F 8E 01 02 00 00         JLE 0x007039e3
switchD_0070379b::caseD_3:
007037E2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007037E5  33 C9                     XOR ECX,ECX
007037E7  66 8B 0A                  MOV CX,word ptr [EDX]
007037EA  3B D9                     CMP EBX,ECX
007037EC  77 14                     JA 0x00703802
007037EE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007037F1  33 DB                     XOR EBX,EBX
007037F3  8A 1E                     MOV BL,byte ptr [ESI]
007037F5  C1 E1 08                  SHL ECX,0x8
007037F8  0B CB                     OR ECX,EBX
007037FA  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007037FD  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703800  88 0E                     MOV byte ptr [ESI],CL
LAB_00703802:
00703802  83 C2 02                  ADD EDX,0x2
00703805  46                        INC ESI
00703806  48                        DEC EAX
00703807  B9 04 00 00 00            MOV ECX,0x4
0070380C  85 C0                     TEST EAX,EAX
0070380E  0F 8E CF 01 00 00         JLE 0x007039e3
switchD_0070379b::caseD_4:
00703814  33 C9                     XOR ECX,ECX
00703816  48                        DEC EAX
switchD_0070379b::default:
00703817  85 C0                     TEST EAX,EAX
00703819  0F 8E C4 01 00 00         JLE 0x007039e3
0070381F  48                        DEC EAX
00703820  B9 01 00 00 00            MOV ECX,0x1
00703825  85 C0                     TEST EAX,EAX
00703827  0F 8E B6 01 00 00         JLE 0x007039e3
LAB_0070382d:
0070382D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703830  33 C9                     XOR ECX,ECX
00703832  66 8B 0A                  MOV CX,word ptr [EDX]
00703835  3B D9                     CMP EBX,ECX
00703837  77 14                     JA 0x0070384d
00703839  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070383C  33 DB                     XOR EBX,EBX
0070383E  8A 1E                     MOV BL,byte ptr [ESI]
00703840  C1 E1 08                  SHL ECX,0x8
00703843  0B CB                     OR ECX,EBX
00703845  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703848  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070384B  88 0E                     MOV byte ptr [ESI],CL
LAB_0070384d:
0070384D  83 C2 02                  ADD EDX,0x2
00703850  46                        INC ESI
00703851  48                        DEC EAX
00703852  B9 02 00 00 00            MOV ECX,0x2
00703857  85 C0                     TEST EAX,EAX
00703859  0F 8E 84 01 00 00         JLE 0x007039e3
0070385F  48                        DEC EAX
00703860  B9 03 00 00 00            MOV ECX,0x3
00703865  85 C0                     TEST EAX,EAX
00703867  0F 8E 76 01 00 00         JLE 0x007039e3
0070386D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703870  33 C9                     XOR ECX,ECX
00703872  66 8B 0A                  MOV CX,word ptr [EDX]
00703875  3B D9                     CMP EBX,ECX
00703877  77 14                     JA 0x0070388d
00703879  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070387C  33 DB                     XOR EBX,EBX
0070387E  8A 1E                     MOV BL,byte ptr [ESI]
00703880  C1 E1 08                  SHL ECX,0x8
00703883  0B CB                     OR ECX,EBX
00703885  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703888  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070388B  88 0E                     MOV byte ptr [ESI],CL
LAB_0070388d:
0070388D  83 C2 02                  ADD EDX,0x2
00703890  46                        INC ESI
00703891  48                        DEC EAX
00703892  B9 04 00 00 00            MOV ECX,0x4
00703897  85 C0                     TEST EAX,EAX
00703899  0F 8E 44 01 00 00         JLE 0x007039e3
0070389F  33 C9                     XOR ECX,ECX
007038A1  48                        DEC EAX
007038A2  85 C0                     TEST EAX,EAX
007038A4  0F 8E 39 01 00 00         JLE 0x007039e3
007038AA  48                        DEC EAX
007038AB  B9 01 00 00 00            MOV ECX,0x1
007038B0  85 C0                     TEST EAX,EAX
007038B2  0F 8F 75 FF FF FF         JG 0x0070382d
007038B8  E9 26 01 00 00            JMP 0x007039e3
LAB_007038bd:
007038BD  85 C9                     TEST ECX,ECX
007038BF  7E 7C                     JLE 0x0070393d
007038C1  8D 59 FF                  LEA EBX,[ECX + -0x1]
007038C4  83 FB 03                  CMP EBX,0x3
007038C7  77 74                     JA 0x0070393d
switchD_007038c9::switchD:
007038C9  FF 24 9D 04 3D 70 00      JMP dword ptr [EBX*0x4 + 0x703d04]
switchD_007038c9::caseD_1:
007038D0  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007038D3  33 C9                     XOR ECX,ECX
007038D5  66 8B 0A                  MOV CX,word ptr [EDX]
007038D8  3B D9                     CMP EBX,ECX
007038DA  77 0E                     JA 0x007038ea
007038DC  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007038DF  33 C9                     XOR ECX,ECX
007038E1  8A 2F                     MOV CH,byte ptr [EDI]
007038E3  8A 0E                     MOV CL,byte ptr [ESI]
007038E5  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007038E8  88 0E                     MOV byte ptr [ESI],CL
LAB_007038ea:
007038EA  83 C2 02                  ADD EDX,0x2
007038ED  46                        INC ESI
007038EE  47                        INC EDI
007038EF  48                        DEC EAX
007038F0  85 C0                     TEST EAX,EAX
007038F2  B9 02 00 00 00            MOV ECX,0x2
007038F7  0F 8E E6 00 00 00         JLE 0x007039e3
switchD_007038c9::caseD_2:
007038FD  47                        INC EDI
007038FE  48                        DEC EAX
007038FF  85 C0                     TEST EAX,EAX
00703901  B9 03 00 00 00            MOV ECX,0x3
00703906  0F 8E D7 00 00 00         JLE 0x007039e3
switchD_007038c9::caseD_3:
0070390C  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070390F  33 C9                     XOR ECX,ECX
00703911  66 8B 0A                  MOV CX,word ptr [EDX]
00703914  3B D9                     CMP EBX,ECX
00703916  77 0E                     JA 0x00703926
00703918  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
0070391B  33 C9                     XOR ECX,ECX
0070391D  8A 2F                     MOV CH,byte ptr [EDI]
0070391F  8A 0E                     MOV CL,byte ptr [ESI]
00703921  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703924  88 0E                     MOV byte ptr [ESI],CL
LAB_00703926:
00703926  83 C2 02                  ADD EDX,0x2
00703929  46                        INC ESI
0070392A  47                        INC EDI
0070392B  48                        DEC EAX
0070392C  85 C0                     TEST EAX,EAX
0070392E  B9 04 00 00 00            MOV ECX,0x4
00703933  0F 8E AA 00 00 00         JLE 0x007039e3
switchD_007038c9::caseD_4:
00703939  47                        INC EDI
0070393A  33 C9                     XOR ECX,ECX
0070393C  48                        DEC EAX
switchD_007038c9::default:
0070393D  85 C0                     TEST EAX,EAX
0070393F  0F 8E 9E 00 00 00         JLE 0x007039e3
00703945  47                        INC EDI
00703946  48                        DEC EAX
00703947  85 C0                     TEST EAX,EAX
00703949  B9 01 00 00 00            MOV ECX,0x1
0070394E  0F 8E 8F 00 00 00         JLE 0x007039e3
LAB_00703954:
00703954  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703957  33 C9                     XOR ECX,ECX
00703959  66 8B 0A                  MOV CX,word ptr [EDX]
0070395C  3B D9                     CMP EBX,ECX
0070395E  77 0E                     JA 0x0070396e
00703960  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703963  33 C9                     XOR ECX,ECX
00703965  8A 2F                     MOV CH,byte ptr [EDI]
00703967  8A 0E                     MOV CL,byte ptr [ESI]
00703969  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070396C  88 0E                     MOV byte ptr [ESI],CL
LAB_0070396e:
0070396E  83 C2 02                  ADD EDX,0x2
00703971  46                        INC ESI
00703972  47                        INC EDI
00703973  48                        DEC EAX
00703974  85 C0                     TEST EAX,EAX
00703976  B9 02 00 00 00            MOV ECX,0x2
0070397B  7E 66                     JLE 0x007039e3
0070397D  47                        INC EDI
0070397E  48                        DEC EAX
0070397F  85 C0                     TEST EAX,EAX
00703981  B9 03 00 00 00            MOV ECX,0x3
00703986  7E 5B                     JLE 0x007039e3
00703988  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070398B  33 C9                     XOR ECX,ECX
0070398D  66 8B 0A                  MOV CX,word ptr [EDX]
00703990  3B D9                     CMP EBX,ECX
00703992  77 0E                     JA 0x007039a2
00703994  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703997  33 C9                     XOR ECX,ECX
00703999  8A 2F                     MOV CH,byte ptr [EDI]
0070399B  8A 0E                     MOV CL,byte ptr [ESI]
0070399D  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007039A0  88 0E                     MOV byte ptr [ESI],CL
LAB_007039a2:
007039A2  83 C2 02                  ADD EDX,0x2
007039A5  46                        INC ESI
007039A6  47                        INC EDI
007039A7  48                        DEC EAX
007039A8  85 C0                     TEST EAX,EAX
007039AA  B9 04 00 00 00            MOV ECX,0x4
007039AF  7E 32                     JLE 0x007039e3
007039B1  47                        INC EDI
007039B2  33 C9                     XOR ECX,ECX
007039B4  48                        DEC EAX
007039B5  85 C0                     TEST EAX,EAX
007039B7  7E 2A                     JLE 0x007039e3
007039B9  47                        INC EDI
007039BA  48                        DEC EAX
007039BB  85 C0                     TEST EAX,EAX
007039BD  B9 01 00 00 00            MOV ECX,0x1
007039C2  7F 90                     JG 0x00703954
007039C4  EB 1D                     JMP 0x007039e3
LAB_007039c6:
007039C6  48                        DEC EAX
007039C7  78 1A                     JS 0x007039e3
007039C9  40                        INC EAX
LAB_007039ca:
007039CA  8B D9                     MOV EBX,ECX
007039CC  83 E3 01                  AND EBX,0x1
007039CF  80 FB 01                  CMP BL,0x1
007039D2  75 04                     JNZ 0x007039d8
007039D4  46                        INC ESI
007039D5  83 C2 02                  ADD EDX,0x2
LAB_007039d8:
007039D8  41                        INC ECX
007039D9  83 F9 04                  CMP ECX,0x4
007039DC  7E 02                     JLE 0x007039e0
007039DE  33 C9                     XOR ECX,ECX
LAB_007039e0:
007039E0  48                        DEC EAX
007039E1  75 E7                     JNZ 0x007039ca
LAB_007039e3:
007039E3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007039E6  85 C0                     TEST EAX,EAX
007039E8  7E 2A                     JLE 0x00703a14
007039EA  33 C0                     XOR EAX,EAX
007039EC  8A 07                     MOV AL,byte ptr [EDI]
007039EE  8B D8                     MOV EBX,EAX
007039F0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007039F3  81 E3 80 00 00 00         AND EBX,0x80
007039F9  47                        INC EDI
007039FA  85 DB                     TEST EBX,EBX
007039FC  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
007039FF  74 05                     JZ 0x00703a06
00703A01  83 E0 3F                  AND EAX,0x3f
00703A04  EB 03                     JMP 0x00703a09
LAB_00703a06:
00703A06  83 E0 7F                  AND EAX,0x7f
LAB_00703a09:
00703A09  3B 45 1C                  CMP EAX,dword ptr [EBP + 0x1c]
00703A0C  0F 8E 54 FD FF FF         JLE 0x00703766
00703A12  EB 02                     JMP 0x00703a16
LAB_00703a14:
00703A14  33 C0                     XOR EAX,EAX
LAB_00703a16:
00703A16  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00703A19  2B C3                     SUB EAX,EBX
00703A1B  85 DB                     TEST EBX,EBX
00703A1D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00703A20  0F 8E 43 02 00 00         JLE 0x00703c69
00703A26  F6 C3 80                  TEST BL,0x80
00703A29  0F 84 3A 02 00 00         JZ 0x00703c69
00703A2F  F6 C3 40                  TEST BL,0x40
00703A32  0F 84 26 01 00 00         JZ 0x00703b5e
00703A38  33 DB                     XOR EBX,EBX
00703A3A  8A 1F                     MOV BL,byte ptr [EDI]
00703A3C  47                        INC EDI
00703A3D  85 C9                     TEST ECX,ECX
00703A3F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00703A42  0F 8E 8B 00 00 00         JLE 0x00703ad3
00703A48  49                        DEC ECX
00703A49  83 F9 03                  CMP ECX,0x3
00703A4C  0F 87 81 00 00 00         JA 0x00703ad3
switchD_00703a52::switchD:
00703A52  FF 24 8D 14 3D 70 00      JMP dword ptr [ECX*0x4 + 0x703d14]
switchD_00703a52::caseD_1:
00703A59  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703A5C  33 C9                     XOR ECX,ECX
00703A5E  66 8B 0A                  MOV CX,word ptr [EDX]
00703A61  3B D9                     CMP EBX,ECX
00703A63  77 14                     JA 0x00703a79
00703A65  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00703A68  33 DB                     XOR EBX,EBX
00703A6A  8A 1E                     MOV BL,byte ptr [ESI]
00703A6C  C1 E1 08                  SHL ECX,0x8
00703A6F  0B CB                     OR ECX,EBX
00703A71  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703A74  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703A77  88 0E                     MOV byte ptr [ESI],CL
LAB_00703a79:
00703A79  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703A7C  83 C2 02                  ADD EDX,0x2
00703A7F  46                        INC ESI
00703A80  49                        DEC ECX
00703A81  85 C9                     TEST ECX,ECX
00703A83  0F 8E DD 01 00 00         JLE 0x00703c66
00703A89  EB 03                     JMP 0x00703a8e
switchD_00703a52::caseD_2:
00703A8B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_00703a8e:
00703A8E  49                        DEC ECX
00703A8F  85 C9                     TEST ECX,ECX
00703A91  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00703A94  0F 8E CC 01 00 00         JLE 0x00703c66
switchD_00703a52::caseD_3:
00703A9A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703A9D  33 C9                     XOR ECX,ECX
00703A9F  66 8B 0A                  MOV CX,word ptr [EDX]
00703AA2  3B D9                     CMP EBX,ECX
00703AA4  77 14                     JA 0x00703aba
00703AA6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00703AA9  33 DB                     XOR EBX,EBX
00703AAB  8A 1E                     MOV BL,byte ptr [ESI]
00703AAD  C1 E1 08                  SHL ECX,0x8
00703AB0  0B CB                     OR ECX,EBX
00703AB2  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703AB5  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703AB8  88 0E                     MOV byte ptr [ESI],CL
LAB_00703aba:
00703ABA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703ABD  83 C2 02                  ADD EDX,0x2
00703AC0  46                        INC ESI
00703AC1  49                        DEC ECX
00703AC2  85 C9                     TEST ECX,ECX
00703AC4  0F 8E 9C 01 00 00         JLE 0x00703c66
00703ACA  49                        DEC ECX
00703ACB  EB 09                     JMP 0x00703ad6
switchD_00703a52::caseD_4:
00703ACD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703AD0  49                        DEC ECX
00703AD1  EB 03                     JMP 0x00703ad6
LAB_00703ad3:
00703AD3  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
switchD_00703a52::default:
00703AD6  85 C9                     TEST ECX,ECX
00703AD8  0F 8E 88 01 00 00         JLE 0x00703c66
00703ADE  49                        DEC ECX
00703ADF  85 C9                     TEST ECX,ECX
00703AE1  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00703AE4  0F 8E 7C 01 00 00         JLE 0x00703c66
LAB_00703aea:
00703AEA  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703AED  33 C9                     XOR ECX,ECX
00703AEF  66 8B 0A                  MOV CX,word ptr [EDX]
00703AF2  3B D9                     CMP EBX,ECX
00703AF4  77 14                     JA 0x00703b0a
00703AF6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00703AF9  33 DB                     XOR EBX,EBX
00703AFB  8A 1E                     MOV BL,byte ptr [ESI]
00703AFD  C1 E1 08                  SHL ECX,0x8
00703B00  0B CB                     OR ECX,EBX
00703B02  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703B05  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703B08  88 0E                     MOV byte ptr [ESI],CL
LAB_00703b0a:
00703B0A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703B0D  83 C2 02                  ADD EDX,0x2
00703B10  83 E9 02                  SUB ECX,0x2
00703B13  46                        INC ESI
00703B14  85 C9                     TEST ECX,ECX
00703B16  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00703B19  0F 8E 47 01 00 00         JLE 0x00703c66
00703B1F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703B22  33 C9                     XOR ECX,ECX
00703B24  66 8B 0A                  MOV CX,word ptr [EDX]
00703B27  3B D9                     CMP EBX,ECX
00703B29  77 14                     JA 0x00703b3f
00703B2B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00703B2E  33 DB                     XOR EBX,EBX
00703B30  8A 1E                     MOV BL,byte ptr [ESI]
00703B32  C1 E1 08                  SHL ECX,0x8
00703B35  0B CB                     OR ECX,EBX
00703B37  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703B3A  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703B3D  88 0E                     MOV byte ptr [ESI],CL
LAB_00703b3f:
00703B3F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703B42  83 C2 02                  ADD EDX,0x2
00703B45  83 E9 02                  SUB ECX,0x2
00703B48  46                        INC ESI
00703B49  85 C9                     TEST ECX,ECX
00703B4B  0F 8E 15 01 00 00         JLE 0x00703c66
00703B51  49                        DEC ECX
00703B52  85 C9                     TEST ECX,ECX
00703B54  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00703B57  7F 91                     JG 0x00703aea
00703B59  E9 08 01 00 00            JMP 0x00703c66
LAB_00703b5e:
00703B5E  85 C9                     TEST ECX,ECX
00703B60  0F 8E 8A 00 00 00         JLE 0x00703bf0
00703B66  49                        DEC ECX
00703B67  83 F9 03                  CMP ECX,0x3
00703B6A  0F 87 80 00 00 00         JA 0x00703bf0
switchD_00703b70::switchD:
00703B70  FF 24 8D 24 3D 70 00      JMP dword ptr [ECX*0x4 + 0x703d24]
switchD_00703b70::caseD_1:
00703B77  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703B7A  33 C9                     XOR ECX,ECX
00703B7C  66 8B 0A                  MOV CX,word ptr [EDX]
00703B7F  3B D9                     CMP EBX,ECX
00703B81  77 0E                     JA 0x00703b91
00703B83  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703B86  33 C9                     XOR ECX,ECX
00703B88  8A 2F                     MOV CH,byte ptr [EDI]
00703B8A  8A 0E                     MOV CL,byte ptr [ESI]
00703B8C  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703B8F  88 0E                     MOV byte ptr [ESI],CL
LAB_00703b91:
00703B91  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703B94  83 C2 02                  ADD EDX,0x2
00703B97  46                        INC ESI
00703B98  47                        INC EDI
00703B99  49                        DEC ECX
00703B9A  85 C9                     TEST ECX,ECX
00703B9C  0F 8E C4 00 00 00         JLE 0x00703c66
00703BA2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00703ba5:
00703BA5  47                        INC EDI
00703BA6  49                        DEC ECX
00703BA7  85 C9                     TEST ECX,ECX
00703BA9  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00703BAC  0F 8E B7 00 00 00         JLE 0x00703c69
switchD_00703b70::caseD_3:
00703BB2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703BB5  33 C9                     XOR ECX,ECX
00703BB7  66 8B 0A                  MOV CX,word ptr [EDX]
00703BBA  3B D9                     CMP EBX,ECX
00703BBC  77 0E                     JA 0x00703bcc
00703BBE  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703BC1  33 C9                     XOR ECX,ECX
00703BC3  8A 2F                     MOV CH,byte ptr [EDI]
00703BC5  8A 0E                     MOV CL,byte ptr [ESI]
00703BC7  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703BCA  88 0E                     MOV byte ptr [ESI],CL
LAB_00703bcc:
00703BCC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703BCF  83 C2 02                  ADD EDX,0x2
00703BD2  46                        INC ESI
00703BD3  47                        INC EDI
00703BD4  49                        DEC ECX
00703BD5  85 C9                     TEST ECX,ECX
00703BD7  0F 8E 89 00 00 00         JLE 0x00703c66
00703BDD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00703BE0  47                        INC EDI
00703BE1  49                        DEC ECX
00703BE2  EB 0F                     JMP 0x00703bf3
switchD_00703b70::caseD_2:
00703BE4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703BE7  EB BC                     JMP 0x00703ba5
switchD_00703b70::caseD_4:
00703BE9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703BEC  47                        INC EDI
00703BED  49                        DEC ECX
00703BEE  EB 03                     JMP 0x00703bf3
LAB_00703bf0:
00703BF0  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
switchD_00703b70::default:
00703BF3  85 C9                     TEST ECX,ECX
00703BF5  7E 72                     JLE 0x00703c69
00703BF7  47                        INC EDI
00703BF8  49                        DEC ECX
00703BF9  85 C9                     TEST ECX,ECX
00703BFB  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00703BFE  7E 69                     JLE 0x00703c69
LAB_00703c00:
00703C00  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703C03  33 C9                     XOR ECX,ECX
00703C05  66 8B 0A                  MOV CX,word ptr [EDX]
00703C08  3B D9                     CMP EBX,ECX
00703C0A  77 0E                     JA 0x00703c1a
00703C0C  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703C0F  33 C9                     XOR ECX,ECX
00703C11  8A 2F                     MOV CH,byte ptr [EDI]
00703C13  8A 0E                     MOV CL,byte ptr [ESI]
00703C15  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703C18  88 0E                     MOV byte ptr [ESI],CL
LAB_00703c1a:
00703C1A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703C1D  83 C2 02                  ADD EDX,0x2
00703C20  46                        INC ESI
00703C21  47                        INC EDI
00703C22  49                        DEC ECX
00703C23  85 C9                     TEST ECX,ECX
00703C25  7E 3F                     JLE 0x00703c66
00703C27  47                        INC EDI
00703C28  49                        DEC ECX
00703C29  85 C9                     TEST ECX,ECX
00703C2B  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00703C2E  7E 36                     JLE 0x00703c66
00703C30  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703C33  33 C9                     XOR ECX,ECX
00703C35  66 8B 0A                  MOV CX,word ptr [EDX]
00703C38  3B D9                     CMP EBX,ECX
00703C3A  77 0E                     JA 0x00703c4a
00703C3C  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703C3F  33 C9                     XOR ECX,ECX
00703C41  8A 2F                     MOV CH,byte ptr [EDI]
00703C43  8A 0E                     MOV CL,byte ptr [ESI]
00703C45  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703C48  88 0E                     MOV byte ptr [ESI],CL
LAB_00703c4a:
00703C4A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00703C4D  83 C2 02                  ADD EDX,0x2
00703C50  46                        INC ESI
00703C51  47                        INC EDI
00703C52  49                        DEC ECX
00703C53  85 C9                     TEST ECX,ECX
00703C55  7E 0F                     JLE 0x00703c66
00703C57  47                        INC EDI
00703C58  49                        DEC ECX
00703C59  85 C9                     TEST ECX,ECX
00703C5B  7E 09                     JLE 0x00703c66
00703C5D  47                        INC EDI
00703C5E  49                        DEC ECX
00703C5F  85 C9                     TEST ECX,ECX
00703C61  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00703C64  7F 9A                     JG 0x00703c00
LAB_00703c66:
00703C66  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00703c69:
00703C69  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00703C6C  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00703C6F  8B CE                     MOV ECX,ESI
00703C71  2B CA                     SUB ECX,EDX
00703C73  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00703C76  2B CA                     SUB ECX,EDX
00703C78  3B C1                     CMP EAX,ECX
00703C7A  7D 2C                     JGE 0x00703ca8
LAB_00703c7c:
00703C7C  81 E3 C0 00 00 00         AND EBX,0xc0
00703C82  2B C8                     SUB ECX,EAX
00703C84  80 FB 80                  CMP BL,0x80
00703C87  75 02                     JNZ 0x00703c8b
00703C89  03 F8                     ADD EDI,EAX
LAB_00703c8b:
00703C8B  33 DB                     XOR EBX,EBX
00703C8D  8A 1F                     MOV BL,byte ptr [EDI]
00703C8F  8B D3                     MOV EDX,EBX
00703C91  8B C3                     MOV EAX,EBX
00703C93  80 E2 80                  AND DL,0x80
00703C96  47                        INC EDI
00703C97  84 D2                     TEST DL,DL
00703C99  74 09                     JZ 0x00703ca4
00703C9B  83 E0 3F                  AND EAX,0x3f
00703C9E  F6 C3 40                  TEST BL,0x40
00703CA1  74 01                     JZ 0x00703ca4
00703CA3  47                        INC EDI
LAB_00703ca4:
00703CA4  3B C1                     CMP EAX,ECX
00703CA6  7C D4                     JL 0x00703c7c
LAB_00703ca8:
00703CA8  81 E3 C0 00 00 00         AND EBX,0xc0
00703CAE  80 FB 80                  CMP BL,0x80
00703CB1  75 02                     JNZ 0x00703cb5
00703CB3  03 F9                     ADD EDI,ECX
LAB_00703cb5:
00703CB5  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
LAB_00703cb8:
00703CB8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00703CBB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00703CBE  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00703CC1  03 C8                     ADD ECX,EAX
00703CC3  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00703CC6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00703CC9  03 D9                     ADD EBX,ECX
00703CCB  42                        INC EDX
00703CCC  83 FA 04                  CMP EDX,0x4
00703CCF  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00703CD2  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
00703CD5  7E 05                     JLE 0x00703cdc
00703CD7  33 D2                     XOR EDX,EDX
00703CD9  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_00703cdc:
00703CDC  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00703CDF  48                        DEC EAX
00703CE0  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00703CE3  0F 89 90 F9 FF FF         JNS 0x00703679
00703CE9  5F                        POP EDI
00703CEA  5E                        POP ESI
00703CEB  5B                        POP EBX
LAB_00703cec:
00703CEC  8B E5                     MOV ESP,EBP
00703CEE  5D                        POP EBP
00703CEF  C2 34 00                  RET 0x34
