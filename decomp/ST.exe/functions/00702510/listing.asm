FUN_00702510:
00702510  55                        PUSH EBP
00702511  8B EC                     MOV EBP,ESP
00702513  83 EC 0C                  SUB ESP,0xc
00702516  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00702519  53                        PUSH EBX
0070251A  48                        DEC EAX
0070251B  56                        PUSH ESI
0070251C  57                        PUSH EDI
0070251D  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00702527  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
0070252A  0F 88 F7 04 00 00         JS 0x00702a27
00702530  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
LAB_00702533:
00702533  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
00702536  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702539  83 F8 01                  CMP EAX,0x1
0070253C  75 49                     JNZ 0x00702587
0070253E  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00702541  48                        DEC EAX
00702542  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00702545  0F 88 DC 04 00 00         JS 0x00702a27
0070254B  33 C0                     XOR EAX,EAX
0070254D  8A 01                     MOV AL,byte ptr [ECX]
0070254F  41                        INC ECX
00702550  85 C0                     TEST EAX,EAX
00702552  74 2C                     JZ 0x00702580
00702554  8B D6                     MOV EDX,ESI
LAB_00702556:
00702556  A8 80                     TEST AL,0x80
00702558  74 16                     JZ 0x00702570
0070255A  A8 40                     TEST AL,0x40
0070255C  74 06                     JZ 0x00702564
0070255E  41                        INC ECX
0070255F  83 E0 3F                  AND EAX,0x3f
00702562  EB 0F                     JMP 0x00702573
LAB_00702564:
00702564  8B F8                     MOV EDI,EAX
00702566  83 E7 3F                  AND EDI,0x3f
00702569  03 CF                     ADD ECX,EDI
0070256B  83 E0 3F                  AND EAX,0x3f
0070256E  EB 03                     JMP 0x00702573
LAB_00702570:
00702570  83 E0 7F                  AND EAX,0x7f
LAB_00702573:
00702573  2B D0                     SUB EDX,EAX
00702575  85 D2                     TEST EDX,EDX
00702577  7E 07                     JLE 0x00702580
00702579  33 C0                     XOR EAX,EAX
0070257B  8A 01                     MOV AL,byte ptr [ECX]
0070257D  41                        INC ECX
0070257E  EB D6                     JMP 0x00702556
LAB_00702580:
00702580  C7 45 3C 02 00 00 00      MOV dword ptr [EBP + 0x3c],0x2
LAB_00702587:
00702587  33 C0                     XOR EAX,EAX
00702589  8A 01                     MOV AL,byte ptr [ECX]
0070258B  41                        INC ECX
0070258C  85 C0                     TEST EAX,EAX
0070258E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00702591  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702594  0F 84 4C 04 00 00         JZ 0x007029e6
0070259A  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
0070259D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007025A0  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007025A3  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
007025A6  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
007025A9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_007025ac:
007025AC  A8 80                     TEST AL,0x80
007025AE  74 20                     JZ 0x007025d0
007025B0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007025B3  83 E0 3F                  AND EAX,0x3f
007025B6  3B C3                     CMP EAX,EBX
007025B8  7F 38                     JG 0x007025f2
007025BA  F6 45 F8 40               TEST byte ptr [EBP + -0x8],0x40
007025BE  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007025C1  74 06                     JZ 0x007025c9
007025C3  43                        INC EBX
007025C4  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
007025C7  EB 11                     JMP 0x007025da
LAB_007025c9:
007025C9  03 D8                     ADD EBX,EAX
007025CB  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
007025CE  EB 0A                     JMP 0x007025da
LAB_007025d0:
007025D0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007025D3  83 E0 7F                  AND EAX,0x7f
007025D6  3B C3                     CMP EAX,EBX
007025D8  7F 18                     JG 0x007025f2
LAB_007025da:
007025DA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007025DD  2B D8                     SUB EBX,EAX
007025DF  33 C0                     XOR EAX,EAX
007025E1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007025E4  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007025E7  8A 03                     MOV AL,byte ptr [EBX]
007025E9  43                        INC EBX
007025EA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007025ED  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
007025F0  EB BA                     JMP 0x007025ac
LAB_007025f2:
007025F2  2B C3                     SUB EAX,EBX
007025F4  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
007025F7  81 E3 C0 00 00 00         AND EBX,0xc0
007025FD  80 FB 80                  CMP BL,0x80
00702600  75 06                     JNZ 0x00702608
00702602  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702605  01 5D 24                  ADD dword ptr [EBP + 0x24],EBX
LAB_00702608:
00702608  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
0070260B  3B C3                     CMP EAX,EBX
0070260D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00702610  0F 8F E2 01 00 00         JG 0x007027f8
00702616  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00702619  81 E3 80 00 00 00         AND EBX,0x80
0070261F  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_00702622:
00702622  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702625  2B D8                     SUB EBX,EAX
00702627  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070262A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0070262D  85 DB                     TEST EBX,EBX
0070262F  0F 84 6B 01 00 00         JZ 0x007027a0
00702635  F6 45 F8 40               TEST byte ptr [EBP + -0x8],0x40
00702639  0F 84 A8 00 00 00         JZ 0x007026e7
0070263F  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702642  43                        INC EBX
00702643  85 C9                     TEST ECX,ECX
00702645  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702648  7E 33                     JLE 0x0070267d
0070264A  83 F9 01                  CMP ECX,0x1
0070264D  75 06                     JNZ 0x00702655
0070264F  B9 02 00 00 00            MOV ECX,0x2
00702654  48                        DEC EAX
LAB_00702655:
00702655  85 C0                     TEST EAX,EAX
00702657  0F 8E 5C 01 00 00         JLE 0x007027b9
0070265D  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702660  33 C9                     XOR ECX,ECX
00702662  66 8B 0A                  MOV CX,word ptr [EDX]
00702665  3B D9                     CMP EBX,ECX
00702667  77 0C                     JA 0x00702675
00702669  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
0070266C  33 C9                     XOR ECX,ECX
0070266E  8A 0F                     MOV CL,byte ptr [EDI]
00702670  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702673  88 0E                     MOV byte ptr [ESI],CL
LAB_00702675:
00702675  83 C2 02                  ADD EDX,0x2
00702678  46                        INC ESI
00702679  47                        INC EDI
0070267A  33 C9                     XOR ECX,ECX
0070267C  48                        DEC EAX
LAB_0070267d:
0070267D  85 C0                     TEST EAX,EAX
0070267F  0F 8E 34 01 00 00         JLE 0x007027b9
LAB_00702685:
00702685  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702688  33 C9                     XOR ECX,ECX
0070268A  66 8B 0A                  MOV CX,word ptr [EDX]
0070268D  3B D9                     CMP EBX,ECX
0070268F  77 0C                     JA 0x0070269d
00702691  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702694  33 C9                     XOR ECX,ECX
00702696  8A 0F                     MOV CL,byte ptr [EDI]
00702698  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070269B  88 0E                     MOV byte ptr [ESI],CL
LAB_0070269d:
0070269D  83 C2 02                  ADD EDX,0x2
007026A0  46                        INC ESI
007026A1  47                        INC EDI
007026A2  48                        DEC EAX
007026A3  85 C0                     TEST EAX,EAX
007026A5  B9 01 00 00 00            MOV ECX,0x1
007026AA  0F 8E 09 01 00 00         JLE 0x007027b9
007026B0  48                        DEC EAX
007026B1  B9 02 00 00 00            MOV ECX,0x2
007026B6  85 C0                     TEST EAX,EAX
007026B8  0F 8E FB 00 00 00         JLE 0x007027b9
007026BE  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
007026C1  33 C9                     XOR ECX,ECX
007026C3  66 8B 0A                  MOV CX,word ptr [EDX]
007026C6  3B D9                     CMP EBX,ECX
007026C8  77 0C                     JA 0x007026d6
007026CA  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
007026CD  33 C9                     XOR ECX,ECX
007026CF  8A 0F                     MOV CL,byte ptr [EDI]
007026D1  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007026D4  88 0E                     MOV byte ptr [ESI],CL
LAB_007026d6:
007026D6  83 C2 02                  ADD EDX,0x2
007026D9  46                        INC ESI
007026DA  47                        INC EDI
007026DB  33 C9                     XOR ECX,ECX
007026DD  48                        DEC EAX
007026DE  85 C0                     TEST EAX,EAX
007026E0  7F A3                     JG 0x00702685
007026E2  E9 D2 00 00 00            JMP 0x007027b9
LAB_007026e7:
007026E7  85 C9                     TEST ECX,ECX
007026E9  7E 41                     JLE 0x0070272c
007026EB  83 F9 01                  CMP ECX,0x1
007026EE  75 0D                     JNZ 0x007026fd
007026F0  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
007026F3  41                        INC ECX
007026F4  48                        DEC EAX
007026F5  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
007026F8  B9 02 00 00 00            MOV ECX,0x2
LAB_007026fd:
007026FD  85 C0                     TEST EAX,EAX
007026FF  0F 8E B4 00 00 00         JLE 0x007027b9
00702705  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702708  33 C9                     XOR ECX,ECX
0070270A  66 8B 0A                  MOV CX,word ptr [EDX]
0070270D  3B D9                     CMP EBX,ECX
0070270F  77 0C                     JA 0x0070271d
00702711  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702714  33 C9                     XOR ECX,ECX
00702716  8A 0F                     MOV CL,byte ptr [EDI]
00702718  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070271B  88 0E                     MOV byte ptr [ESI],CL
LAB_0070271d:
0070271D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702720  83 C2 02                  ADD EDX,0x2
00702723  46                        INC ESI
00702724  47                        INC EDI
00702725  41                        INC ECX
00702726  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702729  33 C9                     XOR ECX,ECX
0070272B  48                        DEC EAX
LAB_0070272c:
0070272C  85 C0                     TEST EAX,EAX
0070272E  0F 8E 85 00 00 00         JLE 0x007027b9
LAB_00702734:
00702734  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702737  33 C9                     XOR ECX,ECX
00702739  66 8B 0A                  MOV CX,word ptr [EDX]
0070273C  3B D9                     CMP EBX,ECX
0070273E  77 0C                     JA 0x0070274c
00702740  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702743  33 C9                     XOR ECX,ECX
00702745  8A 0F                     MOV CL,byte ptr [EDI]
00702747  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070274A  88 0E                     MOV byte ptr [ESI],CL
LAB_0070274c:
0070274C  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0070274F  83 C2 02                  ADD EDX,0x2
00702752  46                        INC ESI
00702753  47                        INC EDI
00702754  41                        INC ECX
00702755  48                        DEC EAX
00702756  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702759  B9 01 00 00 00            MOV ECX,0x1
0070275E  85 C0                     TEST EAX,EAX
00702760  7E 57                     JLE 0x007027b9
00702762  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702765  41                        INC ECX
00702766  48                        DEC EAX
00702767  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
0070276A  B9 02 00 00 00            MOV ECX,0x2
0070276F  85 C0                     TEST EAX,EAX
00702771  7E 46                     JLE 0x007027b9
00702773  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702776  33 C9                     XOR ECX,ECX
00702778  66 8B 0A                  MOV CX,word ptr [EDX]
0070277B  3B D9                     CMP EBX,ECX
0070277D  77 0C                     JA 0x0070278b
0070277F  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702782  33 C9                     XOR ECX,ECX
00702784  8A 0F                     MOV CL,byte ptr [EDI]
00702786  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702789  88 0E                     MOV byte ptr [ESI],CL
LAB_0070278b:
0070278B  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0070278E  83 C2 02                  ADD EDX,0x2
00702791  46                        INC ESI
00702792  47                        INC EDI
00702793  41                        INC ECX
00702794  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702797  33 C9                     XOR ECX,ECX
00702799  48                        DEC EAX
0070279A  85 C0                     TEST EAX,EAX
0070279C  7F 96                     JG 0x00702734
0070279E  EB 19                     JMP 0x007027b9
LAB_007027a0:
007027A0  48                        DEC EAX
007027A1  78 16                     JS 0x007027b9
007027A3  40                        INC EAX
LAB_007027a4:
007027A4  83 F9 01                  CMP ECX,0x1
007027A7  74 05                     JZ 0x007027ae
007027A9  46                        INC ESI
007027AA  47                        INC EDI
007027AB  83 C2 02                  ADD EDX,0x2
LAB_007027ae:
007027AE  41                        INC ECX
007027AF  83 F9 02                  CMP ECX,0x2
007027B2  7E 02                     JLE 0x007027b6
007027B4  33 C9                     XOR ECX,ECX
LAB_007027b6:
007027B6  48                        DEC EAX
007027B7  75 EB                     JNZ 0x007027a4
LAB_007027b9:
007027B9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007027BC  85 C0                     TEST EAX,EAX
007027BE  7E 36                     JLE 0x007027f6
007027C0  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007027C3  33 C0                     XOR EAX,EAX
007027C5  8A 03                     MOV AL,byte ptr [EBX]
007027C7  8B D8                     MOV EBX,EAX
007027C9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007027CC  81 E3 80 00 00 00         AND EBX,0x80
007027D2  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
007027D5  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007027D8  43                        INC EBX
007027D9  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
007027DC  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
007027DF  85 DB                     TEST EBX,EBX
007027E1  74 05                     JZ 0x007027e8
007027E3  83 E0 3F                  AND EAX,0x3f
007027E6  EB 03                     JMP 0x007027eb
LAB_007027e8:
007027E8  83 E0 7F                  AND EAX,0x7f
LAB_007027eb:
007027EB  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
007027EE  0F 8E 2E FE FF FF         JLE 0x00702622
007027F4  EB 02                     JMP 0x007027f8
LAB_007027f6:
007027F6  33 C0                     XOR EAX,EAX
LAB_007027f8:
007027F8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007027FB  2B C3                     SUB EAX,EBX
007027FD  85 DB                     TEST EBX,EBX
007027FF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00702802  0F 8E 85 01 00 00         JLE 0x0070298d
00702808  F6 C3 80                  TEST BL,0x80
0070280B  0F 84 7C 01 00 00         JZ 0x0070298d
00702811  F6 C3 40                  TEST BL,0x40
00702814  0F 84 AF 00 00 00         JZ 0x007028c9
0070281A  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0070281D  43                        INC EBX
0070281E  85 C9                     TEST ECX,ECX
00702820  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702823  7E 37                     JLE 0x0070285c
00702825  83 F9 01                  CMP ECX,0x1
00702828  75 03                     JNZ 0x0070282d
0070282A  FF 4D FC                  DEC dword ptr [EBP + -0x4]
LAB_0070282d:
0070282D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702830  85 C9                     TEST ECX,ECX
00702832  0F 8E 52 01 00 00         JLE 0x0070298a
00702838  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0070283B  33 C9                     XOR ECX,ECX
0070283D  66 8B 0A                  MOV CX,word ptr [EDX]
00702840  3B D9                     CMP EBX,ECX
00702842  77 0C                     JA 0x00702850
00702844  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702847  33 C9                     XOR ECX,ECX
00702849  8A 0F                     MOV CL,byte ptr [EDI]
0070284B  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070284E  88 0E                     MOV byte ptr [ESI],CL
LAB_00702850:
00702850  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702853  83 C2 02                  ADD EDX,0x2
00702856  46                        INC ESI
00702857  47                        INC EDI
00702858  49                        DEC ECX
00702859  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0070285c:
0070285C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070285F  85 C9                     TEST ECX,ECX
00702861  0F 8E 23 01 00 00         JLE 0x0070298a
LAB_00702867:
00702867  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0070286A  33 C9                     XOR ECX,ECX
0070286C  66 8B 0A                  MOV CX,word ptr [EDX]
0070286F  3B D9                     CMP EBX,ECX
00702871  77 0C                     JA 0x0070287f
00702873  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702876  33 C9                     XOR ECX,ECX
00702878  8A 0F                     MOV CL,byte ptr [EDI]
0070287A  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070287D  88 0E                     MOV byte ptr [ESI],CL
LAB_0070287f:
0070287F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702882  83 C2 02                  ADD EDX,0x2
00702885  46                        INC ESI
00702886  47                        INC EDI
00702887  49                        DEC ECX
00702888  85 C9                     TEST ECX,ECX
0070288A  0F 8E FA 00 00 00         JLE 0x0070298a
00702890  49                        DEC ECX
00702891  85 C9                     TEST ECX,ECX
00702893  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00702896  0F 8E EE 00 00 00         JLE 0x0070298a
0070289C  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0070289F  33 C9                     XOR ECX,ECX
007028A1  66 8B 0A                  MOV CX,word ptr [EDX]
007028A4  3B D9                     CMP EBX,ECX
007028A6  77 0C                     JA 0x007028b4
007028A8  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
007028AB  33 C9                     XOR ECX,ECX
007028AD  8A 0F                     MOV CL,byte ptr [EDI]
007028AF  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007028B2  88 0E                     MOV byte ptr [ESI],CL
LAB_007028b4:
007028B4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007028B7  83 C2 02                  ADD EDX,0x2
007028BA  46                        INC ESI
007028BB  47                        INC EDI
007028BC  49                        DEC ECX
007028BD  85 C9                     TEST ECX,ECX
007028BF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007028C2  7F A3                     JG 0x00702867
007028C4  E9 C1 00 00 00            JMP 0x0070298a
LAB_007028c9:
007028C9  85 C9                     TEST ECX,ECX
007028CB  7E 4C                     JLE 0x00702919
007028CD  83 F9 01                  CMP ECX,0x1
007028D0  75 0E                     JNZ 0x007028e0
007028D2  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
007028D5  41                        INC ECX
007028D6  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
007028D9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007028DC  49                        DEC ECX
007028DD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_007028e0:
007028E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007028E3  85 C9                     TEST ECX,ECX
007028E5  0F 8E A2 00 00 00         JLE 0x0070298d
007028EB  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
007028EE  33 C9                     XOR ECX,ECX
007028F0  66 8B 0A                  MOV CX,word ptr [EDX]
007028F3  3B D9                     CMP EBX,ECX
007028F5  77 0C                     JA 0x00702903
007028F7  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
007028FA  33 C9                     XOR ECX,ECX
007028FC  8A 0F                     MOV CL,byte ptr [EDI]
007028FE  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702901  88 0E                     MOV byte ptr [ESI],CL
LAB_00702903:
00702903  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702906  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702909  83 C2 02                  ADD EDX,0x2
0070290C  46                        INC ESI
0070290D  47                        INC EDI
0070290E  43                        INC EBX
0070290F  49                        DEC ECX
00702910  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702913  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00702916  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00702919:
00702919  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070291C  85 C9                     TEST ECX,ECX
0070291E  7E 6D                     JLE 0x0070298d
LAB_00702920:
00702920  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702923  33 C9                     XOR ECX,ECX
00702925  66 8B 0A                  MOV CX,word ptr [EDX]
00702928  3B D9                     CMP EBX,ECX
0070292A  77 0C                     JA 0x00702938
0070292C  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
0070292F  33 C9                     XOR ECX,ECX
00702931  8A 0F                     MOV CL,byte ptr [EDI]
00702933  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702936  88 0E                     MOV byte ptr [ESI],CL
LAB_00702938:
00702938  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0070293B  83 C2 02                  ADD EDX,0x2
0070293E  46                        INC ESI
0070293F  47                        INC EDI
00702940  41                        INC ECX
00702941  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702944  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702947  49                        DEC ECX
00702948  85 C9                     TEST ECX,ECX
0070294A  7E 3E                     JLE 0x0070298a
0070294C  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0070294F  43                        INC EBX
00702950  49                        DEC ECX
00702951  85 C9                     TEST ECX,ECX
00702953  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702956  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00702959  7E 2F                     JLE 0x0070298a
0070295B  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0070295E  33 C9                     XOR ECX,ECX
00702960  66 8B 0A                  MOV CX,word ptr [EDX]
00702963  3B D9                     CMP EBX,ECX
00702965  77 0C                     JA 0x00702973
00702967  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
0070296A  33 C9                     XOR ECX,ECX
0070296C  8A 0F                     MOV CL,byte ptr [EDI]
0070296E  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702971  88 0E                     MOV byte ptr [ESI],CL
LAB_00702973:
00702973  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702976  83 C2 02                  ADD EDX,0x2
00702979  46                        INC ESI
0070297A  47                        INC EDI
0070297B  41                        INC ECX
0070297C  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
0070297F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702982  49                        DEC ECX
00702983  85 C9                     TEST ECX,ECX
00702985  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00702988  7F 96                     JG 0x00702920
LAB_0070298a:
0070298A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0070298d:
0070298D  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
00702990  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
00702993  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
00702996  8B CE                     MOV ECX,ESI
00702998  2B CA                     SUB ECX,EDX
0070299A  2B CF                     SUB ECX,EDI
0070299C  3B C1                     CMP EAX,ECX
0070299E  7D 38                     JGE 0x007029d8
LAB_007029a0:
007029A0  81 E3 C0 00 00 00         AND EBX,0xc0
007029A6  2B C8                     SUB ECX,EAX
007029A8  80 FB 80                  CMP BL,0x80
007029AB  75 03                     JNZ 0x007029b0
007029AD  01 45 24                  ADD dword ptr [EBP + 0x24],EAX
LAB_007029b0:
007029B0  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
007029B3  33 DB                     XOR EBX,EBX
007029B5  8A 1F                     MOV BL,byte ptr [EDI]
007029B7  8B D3                     MOV EDX,EBX
007029B9  8B C3                     MOV EAX,EBX
007029BB  80 E2 80                  AND DL,0x80
007029BE  47                        INC EDI
007029BF  84 D2                     TEST DL,DL
007029C1  89 7D 24                  MOV dword ptr [EBP + 0x24],EDI
007029C4  74 0E                     JZ 0x007029d4
007029C6  83 E0 3F                  AND EAX,0x3f
007029C9  F6 C3 40                  TEST BL,0x40
007029CC  74 06                     JZ 0x007029d4
007029CE  8B D7                     MOV EDX,EDI
007029D0  42                        INC EDX
007029D1  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
LAB_007029d4:
007029D4  3B C1                     CMP EAX,ECX
007029D6  7C C8                     JL 0x007029a0
LAB_007029d8:
007029D8  81 E3 C0 00 00 00         AND EBX,0xc0
007029DE  80 FB 80                  CMP BL,0x80
007029E1  75 03                     JNZ 0x007029e6
007029E3  01 4D 24                  ADD dword ptr [EBP + 0x24],ECX
LAB_007029e6:
007029E6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007029E9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007029EC  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
007029EF  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007029F2  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
007029F5  03 C8                     ADD ECX,EAX
007029F7  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
007029FA  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
007029FD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00702A00  03 FA                     ADD EDI,EDX
00702A02  03 D9                     ADD EBX,ECX
00702A04  40                        INC EAX
00702A05  83 F8 02                  CMP EAX,0x2
00702A08  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00702A0B  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
00702A0E  89 45 3C                  MOV dword ptr [EBP + 0x3c],EAX
00702A11  7E 07                     JLE 0x00702a1a
00702A13  C7 45 3C 00 00 00 00      MOV dword ptr [EBP + 0x3c],0x0
LAB_00702a1a:
00702A1A  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00702A1D  48                        DEC EAX
00702A1E  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00702A21  0F 89 0C FB FF FF         JNS 0x00702533
LAB_00702a27:
00702A27  5F                        POP EDI
00702A28  5E                        POP ESI
00702A29  5B                        POP EBX
00702A2A  8B E5                     MOV ESP,EBP
00702A2C  5D                        POP EBP
00702A2D  C2 3C 00                  RET 0x3c
