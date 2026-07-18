FUN_00703160:
00703160  55                        PUSH EBP
00703161  8B EC                     MOV EBP,ESP
00703163  83 EC 08                  SUB ESP,0x8
00703166  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00703169  53                        PUSH EBX
0070316A  48                        DEC EAX
0070316B  56                        PUSH ESI
0070316C  57                        PUSH EDI
0070316D  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00703177  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
0070317A  0F 88 BF 04 00 00         JS 0x0070363f
00703180  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
00703183  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_00703186:
00703186  83 7D 34 01               CMP dword ptr [EBP + 0x34],0x1
0070318A  75 49                     JNZ 0x007031d5
0070318C  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0070318F  48                        DEC EAX
00703190  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00703193  0F 88 A6 04 00 00         JS 0x0070363f
00703199  33 C0                     XOR EAX,EAX
0070319B  8A 02                     MOV AL,byte ptr [EDX]
0070319D  42                        INC EDX
0070319E  85 C0                     TEST EAX,EAX
007031A0  74 2C                     JZ 0x007031ce
007031A2  8B CF                     MOV ECX,EDI
LAB_007031a4:
007031A4  A8 80                     TEST AL,0x80
007031A6  74 16                     JZ 0x007031be
007031A8  A8 40                     TEST AL,0x40
007031AA  74 06                     JZ 0x007031b2
007031AC  42                        INC EDX
007031AD  83 E0 3F                  AND EAX,0x3f
007031B0  EB 0F                     JMP 0x007031c1
LAB_007031b2:
007031B2  8B F0                     MOV ESI,EAX
007031B4  83 E6 3F                  AND ESI,0x3f
007031B7  03 D6                     ADD EDX,ESI
007031B9  83 E0 3F                  AND EAX,0x3f
007031BC  EB 03                     JMP 0x007031c1
LAB_007031be:
007031BE  83 E0 7F                  AND EAX,0x7f
LAB_007031c1:
007031C1  2B C8                     SUB ECX,EAX
007031C3  85 C9                     TEST ECX,ECX
007031C5  7E 07                     JLE 0x007031ce
007031C7  33 C0                     XOR EAX,EAX
007031C9  8A 02                     MOV AL,byte ptr [EDX]
007031CB  42                        INC EDX
007031CC  EB D6                     JMP 0x007031a4
LAB_007031ce:
007031CE  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
LAB_007031d5:
007031D5  33 C0                     XOR EAX,EAX
007031D7  8A 02                     MOV AL,byte ptr [EDX]
007031D9  42                        INC EDX
007031DA  85 C0                     TEST EAX,EAX
007031DC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007031DF  0F 84 24 04 00 00         JZ 0x00703609
007031E5  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007031E8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007031EB  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007031EE  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
007031F1  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_007031f4:
007031F4  A8 80                     TEST AL,0x80
007031F6  74 34                     JZ 0x0070322c
007031F8  83 E0 3F                  AND EAX,0x3f
007031FB  3B C3                     CMP EAX,EBX
007031FD  7F 43                     JG 0x00703242
007031FF  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
00703203  74 13                     JZ 0x00703218
00703205  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00703208  42                        INC EDX
00703209  2B D8                     SUB EBX,EAX
0070320B  33 C0                     XOR EAX,EAX
0070320D  8A 02                     MOV AL,byte ptr [EDX]
0070320F  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00703212  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00703215  42                        INC EDX
00703216  EB DC                     JMP 0x007031f4
LAB_00703218:
00703218  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0070321B  03 D0                     ADD EDX,EAX
0070321D  2B D8                     SUB EBX,EAX
0070321F  33 C0                     XOR EAX,EAX
00703221  8A 02                     MOV AL,byte ptr [EDX]
00703223  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00703226  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00703229  42                        INC EDX
0070322A  EB C8                     JMP 0x007031f4
LAB_0070322c:
0070322C  83 E0 7F                  AND EAX,0x7f
0070322F  3B C3                     CMP EAX,EBX
00703231  7F 0F                     JG 0x00703242
00703233  2B D8                     SUB EBX,EAX
00703235  33 C0                     XOR EAX,EAX
00703237  8A 02                     MOV AL,byte ptr [EDX]
00703239  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070323C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070323F  42                        INC EDX
00703240  EB B2                     JMP 0x007031f4
LAB_00703242:
00703242  2B C3                     SUB EAX,EBX
00703244  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00703247  81 E3 C0 00 00 00         AND EBX,0xc0
0070324D  80 FB 80                  CMP BL,0x80
00703250  75 03                     JNZ 0x00703255
00703252  03 55 1C                  ADD EDX,dword ptr [EBP + 0x1c]
LAB_00703255:
00703255  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00703258  3B C3                     CMP EAX,EBX
0070325A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070325D  0F 8F CE 01 00 00         JG 0x00703431
00703263  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00703266  81 E3 80 00 00 00         AND EBX,0x80
0070326C  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_0070326f:
0070326F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00703272  2B D8                     SUB EBX,EAX
00703274  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00703277  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0070327A  85 DB                     TEST EBX,EBX
0070327C  0F 84 62 01 00 00         JZ 0x007033e4
00703282  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
00703286  0F 84 BE 00 00 00         JZ 0x0070334a
0070328C  33 DB                     XOR EBX,EBX
0070328E  8A 1A                     MOV BL,byte ptr [EDX]
00703290  42                        INC EDX
00703291  85 F6                     TEST ESI,ESI
00703293  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00703296  7E 3A                     JLE 0x007032d2
00703298  83 FE 01                  CMP ESI,0x1
0070329B  75 06                     JNZ 0x007032a3
0070329D  BE 02 00 00 00            MOV ESI,0x2
007032A2  48                        DEC EAX
LAB_007032a3:
007032A3  85 C0                     TEST EAX,EAX
007032A5  0F 8E 51 01 00 00         JLE 0x007033fc
007032AB  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007032AE  33 F6                     XOR ESI,ESI
007032B0  66 8B 37                  MOV SI,word ptr [EDI]
007032B3  3B DE                     CMP EBX,ESI
007032B5  77 14                     JA 0x007032cb
007032B7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007032BA  33 DB                     XOR EBX,EBX
007032BC  8A 19                     MOV BL,byte ptr [ECX]
007032BE  C1 E6 08                  SHL ESI,0x8
007032C1  0B F3                     OR ESI,EBX
007032C3  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007032C6  8A 1C 1E                  MOV BL,byte ptr [ESI + EBX*0x1]
007032C9  88 19                     MOV byte ptr [ECX],BL
LAB_007032cb:
007032CB  83 C7 02                  ADD EDI,0x2
007032CE  41                        INC ECX
007032CF  33 F6                     XOR ESI,ESI
007032D1  48                        DEC EAX
LAB_007032d2:
007032D2  85 C0                     TEST EAX,EAX
007032D4  0F 8E 22 01 00 00         JLE 0x007033fc
LAB_007032da:
007032DA  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007032DD  33 F6                     XOR ESI,ESI
007032DF  66 8B 37                  MOV SI,word ptr [EDI]
007032E2  3B DE                     CMP EBX,ESI
007032E4  77 14                     JA 0x007032fa
007032E6  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007032E9  33 DB                     XOR EBX,EBX
007032EB  8A 19                     MOV BL,byte ptr [ECX]
007032ED  C1 E6 08                  SHL ESI,0x8
007032F0  0B F3                     OR ESI,EBX
007032F2  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007032F5  8A 1C 1E                  MOV BL,byte ptr [ESI + EBX*0x1]
007032F8  88 19                     MOV byte ptr [ECX],BL
LAB_007032fa:
007032FA  83 C7 02                  ADD EDI,0x2
007032FD  41                        INC ECX
007032FE  48                        DEC EAX
007032FF  BE 01 00 00 00            MOV ESI,0x1
00703304  85 C0                     TEST EAX,EAX
00703306  0F 8E F0 00 00 00         JLE 0x007033fc
0070330C  48                        DEC EAX
0070330D  BE 02 00 00 00            MOV ESI,0x2
00703312  85 C0                     TEST EAX,EAX
00703314  0F 8E E2 00 00 00         JLE 0x007033fc
0070331A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070331D  33 F6                     XOR ESI,ESI
0070331F  66 8B 37                  MOV SI,word ptr [EDI]
00703322  3B DE                     CMP EBX,ESI
00703324  77 14                     JA 0x0070333a
00703326  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00703329  33 DB                     XOR EBX,EBX
0070332B  8A 19                     MOV BL,byte ptr [ECX]
0070332D  C1 E6 08                  SHL ESI,0x8
00703330  0B F3                     OR ESI,EBX
00703332  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00703335  8A 1C 1E                  MOV BL,byte ptr [ESI + EBX*0x1]
00703338  88 19                     MOV byte ptr [ECX],BL
LAB_0070333a:
0070333A  83 C7 02                  ADD EDI,0x2
0070333D  41                        INC ECX
0070333E  33 F6                     XOR ESI,ESI
00703340  48                        DEC EAX
00703341  85 C0                     TEST EAX,EAX
00703343  7F 95                     JG 0x007032da
00703345  E9 B2 00 00 00            JMP 0x007033fc
LAB_0070334a:
0070334A  85 F6                     TEST ESI,ESI
0070334C  7E 36                     JLE 0x00703384
0070334E  83 FE 01                  CMP ESI,0x1
00703351  75 07                     JNZ 0x0070335a
00703353  42                        INC EDX
00703354  BE 02 00 00 00            MOV ESI,0x2
00703359  48                        DEC EAX
LAB_0070335a:
0070335A  85 C0                     TEST EAX,EAX
0070335C  0F 8E 9A 00 00 00         JLE 0x007033fc
00703362  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703365  33 F6                     XOR ESI,ESI
00703367  66 8B 37                  MOV SI,word ptr [EDI]
0070336A  3B DE                     CMP EBX,ESI
0070336C  77 0E                     JA 0x0070337c
0070336E  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00703371  33 DB                     XOR EBX,EBX
00703373  8A 3A                     MOV BH,byte ptr [EDX]
00703375  8A 19                     MOV BL,byte ptr [ECX]
00703377  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
0070337A  88 19                     MOV byte ptr [ECX],BL
LAB_0070337c:
0070337C  83 C7 02                  ADD EDI,0x2
0070337F  41                        INC ECX
00703380  42                        INC EDX
00703381  33 F6                     XOR ESI,ESI
00703383  48                        DEC EAX
LAB_00703384:
00703384  85 C0                     TEST EAX,EAX
00703386  7E 74                     JLE 0x007033fc
LAB_00703388:
00703388  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070338B  33 F6                     XOR ESI,ESI
0070338D  66 8B 37                  MOV SI,word ptr [EDI]
00703390  3B DE                     CMP EBX,ESI
00703392  77 0E                     JA 0x007033a2
00703394  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00703397  33 DB                     XOR EBX,EBX
00703399  8A 3A                     MOV BH,byte ptr [EDX]
0070339B  8A 19                     MOV BL,byte ptr [ECX]
0070339D  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
007033A0  88 19                     MOV byte ptr [ECX],BL
LAB_007033a2:
007033A2  83 C7 02                  ADD EDI,0x2
007033A5  41                        INC ECX
007033A6  42                        INC EDX
007033A7  48                        DEC EAX
007033A8  85 C0                     TEST EAX,EAX
007033AA  BE 01 00 00 00            MOV ESI,0x1
007033AF  7E 4B                     JLE 0x007033fc
007033B1  42                        INC EDX
007033B2  48                        DEC EAX
007033B3  85 C0                     TEST EAX,EAX
007033B5  BE 02 00 00 00            MOV ESI,0x2
007033BA  7E 40                     JLE 0x007033fc
007033BC  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007033BF  33 F6                     XOR ESI,ESI
007033C1  66 8B 37                  MOV SI,word ptr [EDI]
007033C4  3B DE                     CMP EBX,ESI
007033C6  77 0E                     JA 0x007033d6
007033C8  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
007033CB  33 DB                     XOR EBX,EBX
007033CD  8A 3A                     MOV BH,byte ptr [EDX]
007033CF  8A 19                     MOV BL,byte ptr [ECX]
007033D1  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
007033D4  88 19                     MOV byte ptr [ECX],BL
LAB_007033d6:
007033D6  83 C7 02                  ADD EDI,0x2
007033D9  41                        INC ECX
007033DA  42                        INC EDX
007033DB  33 F6                     XOR ESI,ESI
007033DD  48                        DEC EAX
007033DE  85 C0                     TEST EAX,EAX
007033E0  7F A6                     JG 0x00703388
007033E2  EB 18                     JMP 0x007033fc
LAB_007033e4:
007033E4  48                        DEC EAX
007033E5  78 15                     JS 0x007033fc
007033E7  40                        INC EAX
LAB_007033e8:
007033E8  83 FE 01                  CMP ESI,0x1
007033EB  74 04                     JZ 0x007033f1
007033ED  41                        INC ECX
007033EE  83 C7 02                  ADD EDI,0x2
LAB_007033f1:
007033F1  46                        INC ESI
007033F2  83 FE 02                  CMP ESI,0x2
007033F5  7E 02                     JLE 0x007033f9
007033F7  33 F6                     XOR ESI,ESI
LAB_007033f9:
007033F9  48                        DEC EAX
007033FA  75 EC                     JNZ 0x007033e8
LAB_007033fc:
007033FC  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007033FF  85 DB                     TEST EBX,EBX
00703401  7E 2C                     JLE 0x0070342f
00703403  33 C0                     XOR EAX,EAX
00703405  8A 02                     MOV AL,byte ptr [EDX]
00703407  8B D8                     MOV EBX,EAX
00703409  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070340C  81 E3 80 00 00 00         AND EBX,0x80
00703412  42                        INC EDX
00703413  85 DB                     TEST EBX,EBX
00703415  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00703418  74 05                     JZ 0x0070341f
0070341A  83 E0 3F                  AND EAX,0x3f
0070341D  EB 03                     JMP 0x00703422
LAB_0070341f:
0070341F  83 E0 7F                  AND EAX,0x7f
LAB_00703422:
00703422  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00703425  3B C3                     CMP EAX,EBX
00703427  0F 8E 42 FE FF FF         JLE 0x0070326f
0070342D  EB 02                     JMP 0x00703431
LAB_0070342f:
0070342F  33 C0                     XOR EAX,EAX
LAB_00703431:
00703431  2B C3                     SUB EAX,EBX
00703433  85 DB                     TEST EBX,EBX
00703435  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00703438  0F 8E 80 01 00 00         JLE 0x007035be
0070343E  F6 C3 80                  TEST BL,0x80
00703441  0F 84 77 01 00 00         JZ 0x007035be
00703447  F6 C3 40                  TEST BL,0x40
0070344A  0F 84 C5 00 00 00         JZ 0x00703515
00703450  33 DB                     XOR EBX,EBX
00703452  8A 1A                     MOV BL,byte ptr [EDX]
00703454  42                        INC EDX
00703455  85 F6                     TEST ESI,ESI
00703457  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0070345A  7E 3E                     JLE 0x0070349a
0070345C  83 FE 01                  CMP ESI,0x1
0070345F  75 03                     JNZ 0x00703464
00703461  FF 4D 1C                  DEC dword ptr [EBP + 0x1c]
LAB_00703464:
00703464  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00703467  85 F6                     TEST ESI,ESI
00703469  0F 8E 4C 01 00 00         JLE 0x007035bb
0070346F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703472  33 F6                     XOR ESI,ESI
00703474  66 8B 37                  MOV SI,word ptr [EDI]
00703477  3B DE                     CMP EBX,ESI
00703479  77 14                     JA 0x0070348f
0070347B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0070347E  33 DB                     XOR EBX,EBX
00703480  8A 19                     MOV BL,byte ptr [ECX]
00703482  C1 E6 08                  SHL ESI,0x8
00703485  0B F3                     OR ESI,EBX
00703487  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
0070348A  8A 1C 1E                  MOV BL,byte ptr [ESI + EBX*0x1]
0070348D  88 19                     MOV byte ptr [ECX],BL
LAB_0070348f:
0070348F  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00703492  83 C7 02                  ADD EDI,0x2
00703495  41                        INC ECX
00703496  4E                        DEC ESI
00703497  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_0070349a:
0070349A  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0070349D  85 F6                     TEST ESI,ESI
0070349F  0F 8E 16 01 00 00         JLE 0x007035bb
LAB_007034a5:
007034A5  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007034A8  33 F6                     XOR ESI,ESI
007034AA  66 8B 37                  MOV SI,word ptr [EDI]
007034AD  3B DE                     CMP EBX,ESI
007034AF  77 14                     JA 0x007034c5
007034B1  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007034B4  33 DB                     XOR EBX,EBX
007034B6  8A 19                     MOV BL,byte ptr [ECX]
007034B8  C1 E6 08                  SHL ESI,0x8
007034BB  0B F3                     OR ESI,EBX
007034BD  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007034C0  8A 1C 1E                  MOV BL,byte ptr [ESI + EBX*0x1]
007034C3  88 19                     MOV byte ptr [ECX],BL
LAB_007034c5:
007034C5  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007034C8  83 C7 02                  ADD EDI,0x2
007034CB  41                        INC ECX
007034CC  4E                        DEC ESI
007034CD  85 F6                     TEST ESI,ESI
007034CF  0F 8E E6 00 00 00         JLE 0x007035bb
007034D5  4E                        DEC ESI
007034D6  85 F6                     TEST ESI,ESI
007034D8  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
007034DB  0F 8E DA 00 00 00         JLE 0x007035bb
007034E1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007034E4  33 F6                     XOR ESI,ESI
007034E6  66 8B 37                  MOV SI,word ptr [EDI]
007034E9  3B DE                     CMP EBX,ESI
007034EB  77 14                     JA 0x00703501
007034ED  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
007034F0  33 DB                     XOR EBX,EBX
007034F2  8A 19                     MOV BL,byte ptr [ECX]
007034F4  C1 E6 08                  SHL ESI,0x8
007034F7  0B F3                     OR ESI,EBX
007034F9  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007034FC  8A 1C 1E                  MOV BL,byte ptr [ESI + EBX*0x1]
007034FF  88 19                     MOV byte ptr [ECX],BL
LAB_00703501:
00703501  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00703504  83 C7 02                  ADD EDI,0x2
00703507  41                        INC ECX
00703508  4E                        DEC ESI
00703509  85 F6                     TEST ESI,ESI
0070350B  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0070350E  7F 95                     JG 0x007034a5
00703510  E9 A6 00 00 00            JMP 0x007035bb
LAB_00703515:
00703515  85 F6                     TEST ESI,ESI
00703517  7E 41                     JLE 0x0070355a
00703519  83 FE 01                  CMP ESI,0x1
0070351C  75 08                     JNZ 0x00703526
0070351E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00703521  42                        INC EDX
00703522  4E                        DEC ESI
00703523  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_00703526:
00703526  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00703529  85 F6                     TEST ESI,ESI
0070352B  0F 8E 8D 00 00 00         JLE 0x007035be
00703531  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703534  33 F6                     XOR ESI,ESI
00703536  66 8B 37                  MOV SI,word ptr [EDI]
00703539  3B DE                     CMP EBX,ESI
0070353B  77 0E                     JA 0x0070354b
0070353D  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00703540  33 DB                     XOR EBX,EBX
00703542  8A 3A                     MOV BH,byte ptr [EDX]
00703544  8A 19                     MOV BL,byte ptr [ECX]
00703546  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00703549  88 19                     MOV byte ptr [ECX],BL
LAB_0070354b:
0070354B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0070354E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00703551  83 C7 02                  ADD EDI,0x2
00703554  41                        INC ECX
00703555  42                        INC EDX
00703556  4E                        DEC ESI
00703557  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_0070355a:
0070355A  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0070355D  85 F6                     TEST ESI,ESI
0070355F  7E 5D                     JLE 0x007035be
LAB_00703561:
00703561  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703564  33 F6                     XOR ESI,ESI
00703566  66 8B 37                  MOV SI,word ptr [EDI]
00703569  3B DE                     CMP EBX,ESI
0070356B  77 0E                     JA 0x0070357b
0070356D  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00703570  33 DB                     XOR EBX,EBX
00703572  8A 3A                     MOV BH,byte ptr [EDX]
00703574  8A 19                     MOV BL,byte ptr [ECX]
00703576  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00703579  88 19                     MOV byte ptr [ECX],BL
LAB_0070357b:
0070357B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0070357E  83 C7 02                  ADD EDI,0x2
00703581  41                        INC ECX
00703582  42                        INC EDX
00703583  4E                        DEC ESI
00703584  85 F6                     TEST ESI,ESI
00703586  7E 33                     JLE 0x007035bb
00703588  42                        INC EDX
00703589  4E                        DEC ESI
0070358A  85 F6                     TEST ESI,ESI
0070358C  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0070358F  7E 2A                     JLE 0x007035bb
00703591  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00703594  33 F6                     XOR ESI,ESI
00703596  66 8B 37                  MOV SI,word ptr [EDI]
00703599  3B DE                     CMP EBX,ESI
0070359B  77 0E                     JA 0x007035ab
0070359D  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
007035A0  33 DB                     XOR EBX,EBX
007035A2  8A 3A                     MOV BH,byte ptr [EDX]
007035A4  8A 19                     MOV BL,byte ptr [ECX]
007035A6  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
007035A9  88 19                     MOV byte ptr [ECX],BL
LAB_007035ab:
007035AB  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007035AE  83 C7 02                  ADD EDI,0x2
007035B1  41                        INC ECX
007035B2  42                        INC EDX
007035B3  4E                        DEC ESI
007035B4  85 F6                     TEST ESI,ESI
007035B6  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
007035B9  7F A6                     JG 0x00703561
LAB_007035bb:
007035BB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_007035be:
007035BE  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
007035C1  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
007035C4  8B F7                     MOV ESI,EDI
007035C6  2B F1                     SUB ESI,ECX
007035C8  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
007035CB  2B F1                     SUB ESI,ECX
007035CD  3B C6                     CMP EAX,ESI
007035CF  7D 2B                     JGE 0x007035fc
LAB_007035d1:
007035D1  81 E3 C0 00 00 00         AND EBX,0xc0
007035D7  2B F0                     SUB ESI,EAX
007035D9  80 FB 80                  CMP BL,0x80
007035DC  75 02                     JNZ 0x007035e0
007035DE  03 D0                     ADD EDX,EAX
LAB_007035e0:
007035E0  33 DB                     XOR EBX,EBX
007035E2  8A 1A                     MOV BL,byte ptr [EDX]
007035E4  8B C3                     MOV EAX,EBX
007035E6  24 80                     AND AL,0x80
007035E8  42                        INC EDX
007035E9  84 C0                     TEST AL,AL
007035EB  8B C3                     MOV EAX,EBX
007035ED  74 09                     JZ 0x007035f8
007035EF  83 E0 3F                  AND EAX,0x3f
007035F2  F6 C3 40                  TEST BL,0x40
007035F5  74 01                     JZ 0x007035f8
007035F7  42                        INC EDX
LAB_007035f8:
007035F8  3B C6                     CMP EAX,ESI
007035FA  7C D5                     JL 0x007035d1
LAB_007035fc:
007035FC  81 E3 C0 00 00 00         AND EBX,0xc0
00703602  80 FB 80                  CMP BL,0x80
00703605  75 02                     JNZ 0x00703609
00703607  03 D6                     ADD EDX,ESI
LAB_00703609:
00703609  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070360C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070360F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00703612  03 C1                     ADD EAX,ECX
00703614  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00703617  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070361A  03 D8                     ADD EBX,EAX
0070361C  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
0070361F  40                        INC EAX
00703620  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00703623  83 F8 02                  CMP EAX,0x2
00703626  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00703629  7E 07                     JLE 0x00703632
0070362B  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_00703632:
00703632  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00703635  48                        DEC EAX
00703636  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00703639  0F 89 47 FB FF FF         JNS 0x00703186
LAB_0070363f:
0070363F  5F                        POP EDI
00703640  5E                        POP ESI
00703641  5B                        POP EBX
00703642  8B E5                     MOV ESP,EBP
00703644  5D                        POP EBP
00703645  C2 34 00                  RET 0x34
