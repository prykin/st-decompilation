FUN_0044e260:
0044E260  55                        PUSH EBP
0044E261  8B EC                     MOV EBP,ESP
0044E263  83 EC 34                  SUB ESP,0x34
0044E266  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044E269  53                        PUSH EBX
0044E26A  8B D9                     MOV EBX,ECX
0044E26C  56                        PUSH ESI
0044E26D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044E270  57                        PUSH EDI
0044E271  50                        PUSH EAX
0044E272  51                        PUSH ECX
0044E273  8B CB                     MOV ECX,EBX
0044E275  E8 7F 7A FB FF            CALL 0x00405cf9
0044E27A  85 C0                     TEST EAX,EAX
0044E27C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0044E27F  0F 84 F3 02 00 00         JZ 0x0044e578
0044E285  8B C8                     MOV ECX,EAX
0044E287  E8 29 4B FB FF            CALL 0x00402db5
0044E28C  8B F8                     MOV EDI,EAX
0044E28E  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0044E291  85 C0                     TEST EAX,EAX
0044E293  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044E296  0F 84 DC 02 00 00         JZ 0x0044e578
0044E29C  6A 01                     PUSH 0x1
0044E29E  6A 04                     PUSH 0x4
0044E2A0  50                        PUSH EAX
0044E2A1  6A 00                     PUSH 0x0
0044E2A3  E8 E8 FF 25 00            CALL 0x006ae290
0044E2A8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0044E2AB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044E2AE  33 F6                     XOR ESI,ESI
0044E2B0  85 C0                     TEST EAX,EAX
0044E2B2  7E 5A                     JLE 0x0044e30e
LAB_0044e2b4:
0044E2B4  8D 55 D8                  LEA EDX,[EBP + -0x28]
0044E2B7  8B CF                     MOV ECX,EDI
0044E2B9  52                        PUSH EDX
0044E2BA  8B D6                     MOV EDX,ESI
0044E2BC  E8 AF E9 25 00            CALL 0x006acc70
0044E2C1  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0044E2C4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044E2C7  6A 01                     PUSH 0x1
0044E2C9  50                        PUSH EAX
0044E2CA  51                        PUSH ECX
0044E2CB  8B CB                     MOV ECX,EBX
0044E2CD  E8 E8 45 FB FF            CALL 0x004028ba
0044E2D2  85 C0                     TEST EAX,EAX
0044E2D4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0044E2D7  74 1E                     JZ 0x0044e2f7
0044E2D9  8B 10                     MOV EDX,dword ptr [EAX]
0044E2DB  8B C8                     MOV ECX,EAX
0044E2DD  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0044E2E3  85 C0                     TEST EAX,EAX
0044E2E5  74 10                     JZ 0x0044e2f7
0044E2E7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0044E2EA  8D 45 F0                  LEA EAX,[EBP + -0x10]
0044E2ED  50                        PUSH EAX
0044E2EE  56                        PUSH ESI
0044E2EF  51                        PUSH ECX
0044E2F0  E8 4B FE 25 00            CALL 0x006ae140
0044E2F5  EB 0F                     JMP 0x0044e306
LAB_0044e2f7:
0044E2F7  56                        PUSH ESI
0044E2F8  57                        PUSH EDI
0044E2F9  E8 72 29 26 00            CALL 0x006b0c70
0044E2FE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044E301  49                        DEC ECX
0044E302  4E                        DEC ESI
0044E303  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_0044e306:
0044E306  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044E309  46                        INC ESI
0044E30A  3B F0                     CMP ESI,EAX
0044E30C  7C A6                     JL 0x0044e2b4
LAB_0044e30e:
0044E30E  57                        PUSH EDI
0044E30F  E8 FC FD 25 00            CALL 0x006ae110
0044E314  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0044E317  33 D2                     XOR EDX,EDX
0044E319  3B DA                     CMP EBX,EDX
0044E31B  0F 84 4E 02 00 00         JZ 0x0044e56f
0044E321  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0044E324  B9 10 27 00 00            MOV ECX,0x2710
0044E329  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0044E32C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0044E32F  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0044E332  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0044E335  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0044E338  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0044E33B  7E 5A                     JLE 0x0044e397
0044E33D  8B F8                     MOV EDI,EAX
LAB_0044e33f:
0044E33F  8B 17                     MOV EDX,dword ptr [EDI]
0044E341  0F BF 72 5B               MOVSX ESI,word ptr [EDX + 0x5b]
0044E345  8B 8A 01 01 00 00         MOV ECX,dword ptr [EDX + 0x101]
0044E34B  8B C6                     MOV EAX,ESI
0044E34D  2B C1                     SUB EAX,ECX
0044E34F  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
0044E352  7D 03                     JGE 0x0044e357
0044E354  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0044e357:
0044E357  8D 04 31                  LEA EAX,[ECX + ESI*0x1]
0044E35A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0044E35D  3B C6                     CMP EAX,ESI
0044E35F  7E 03                     JLE 0x0044e364
0044E361  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0044e364:
0044E364  0F BF 52 5D               MOVSX EDX,word ptr [EDX + 0x5d]
0044E368  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0044E36B  8B C2                     MOV EAX,EDX
0044E36D  2B C1                     SUB EAX,ECX
0044E36F  3B C6                     CMP EAX,ESI
0044E371  7D 03                     JGE 0x0044e376
0044E373  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0044e376:
0044E376  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
0044E379  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044E37C  3B C1                     CMP EAX,ECX
0044E37E  7E 03                     JLE 0x0044e383
0044E380  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0044e383:
0044E383  83 C7 04                  ADD EDI,0x4
0044E386  4B                        DEC EBX
0044E387  75 B6                     JNZ 0x0044e33f
0044E389  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044E38C  85 C0                     TEST EAX,EAX
0044E38E  7D 07                     JGE 0x0044e397
0044E390  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0044e397:
0044E397  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0044E39E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044E3A1  8D 48 FF                  LEA ECX,[EAX + -0x1]
0044E3A4  3B D1                     CMP EDX,ECX
0044E3A6  7E 03                     JLE 0x0044e3ab
0044E3A8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0044e3ab:
0044E3AB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044E3AE  85 C9                     TEST ECX,ECX
0044E3B0  7D 07                     JGE 0x0044e3b9
0044E3B2  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_0044e3b9:
0044E3B9  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
0044E3C0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044E3C3  49                        DEC ECX
0044E3C4  3B D1                     CMP EDX,ECX
0044E3C6  7E 03                     JLE 0x0044e3cb
0044E3C8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0044e3cb:
0044E3CB  0F AF 45 08               IMUL EAX,dword ptr [EBP + 0x8]
0044E3CF  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0044E3D6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044E3D9  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0044E3DC  2B C1                     SUB EAX,ECX
0044E3DE  C7 45 DC 05 00 00 00      MOV dword ptr [EBP + -0x24],0x5
0044E3E5  03 C2                     ADD EAX,EDX
0044E3E7  8B C8                     MOV ECX,EAX
0044E3E9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044E3EC  EB 03                     JMP 0x0044e3f1
LAB_0044e3ee:
0044E3EE  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
LAB_0044e3f1:
0044E3F1  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
0044E3F8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0044E3FB  03 CE                     ADD ECX,ESI
0044E3FD  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
0044E404  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0044E407  2B CE                     SUB ECX,ESI
0044E409  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0044E40C  3B DE                     CMP EBX,ESI
0044E40E  0F 8F 4E 01 00 00         JG 0x0044e562
0044E414  2B F3                     SUB ESI,EBX
0044E416  46                        INC ESI
0044E417  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
LAB_0044e41a:
0044E41A  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
0044E421  03 CB                     ADD ECX,EBX
0044E423  3B D0                     CMP EDX,EAX
0044E425  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0044E428  0F 8F 2A 01 00 00         JG 0x0044e558
0044E42E  2B C2                     SUB EAX,EDX
0044E430  8D 0C CD F8 FF FF FF      LEA ECX,[ECX*0x8 + 0xfffffff8]
0044E437  40                        INC EAX
0044E438  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0044E43B  EB 03                     JMP 0x0044e440
LAB_0044e43d:
0044E43D  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
LAB_0044e440:
0044E440  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0044E446  83 C1 08                  ADD ECX,0x8
0044E449  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0044E44C  8B 34 11                  MOV ESI,dword ptr [ECX + EDX*0x1]
0044E44F  85 F6                     TEST ESI,ESI
0044E451  0F 84 E8 00 00 00         JZ 0x0044e53f
0044E457  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0044E45A  83 F8 14                  CMP EAX,0x14
0044E45D  74 12                     JZ 0x0044e471
0044E45F  3D E8 03 00 00            CMP EAX,0x3e8
0044E464  74 0B                     JZ 0x0044e471
0044E466  3D E9 03 00 00            CMP EAX,0x3e9
0044E46B  0F 85 CE 00 00 00         JNZ 0x0044e53f
LAB_0044e471:
0044E471  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0044E474  B8 01 00 00 00            MOV EAX,0x1
0044E479  D3 E0                     SHL EAX,CL
0044E47B  85 45 10                  TEST dword ptr [EBP + 0x10],EAX
0044E47E  0F 84 BB 00 00 00         JZ 0x0044e53f
0044E484  8B 16                     MOV EDX,dword ptr [ESI]
0044E486  8B CE                     MOV ECX,ESI
0044E488  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0044E48E  85 C0                     TEST EAX,EAX
0044E490  0F 84 A9 00 00 00         JZ 0x0044e53f
0044E496  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044E499  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0044E4A0  85 C0                     TEST EAX,EAX
0044E4A2  0F 8E 97 00 00 00         JLE 0x0044e53f
0044E4A8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0044E4AB  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_0044e4ae:
0044E4AE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0044E4B1  0F BF 46 5B               MOVSX EAX,word ptr [ESI + 0x5b]
0044E4B5  8B 09                     MOV ECX,dword ptr [ECX]
0044E4B7  0F BF 51 5B               MOVSX EDX,word ptr [ECX + 0x5b]
0044E4BB  2B C2                     SUB EAX,EDX
0044E4BD  8B 91 01 01 00 00         MOV EDX,dword ptr [ECX + 0x101]
0044E4C3  85 C0                     TEST EAX,EAX
0044E4C5  7E 06                     JLE 0x0044e4cd
0044E4C7  3B C2                     CMP EAX,EDX
0044E4C9  7E 3D                     JLE 0x0044e508
0044E4CB  EB 08                     JMP 0x0044e4d5
LAB_0044e4cd:
0044E4CD  8B DA                     MOV EBX,EDX
0044E4CF  F7 DB                     NEG EBX
0044E4D1  3B C3                     CMP EAX,EBX
0044E4D3  7D 33                     JGE 0x0044e508
LAB_0044e4d5:
0044E4D5  0F BF 49 5D               MOVSX ECX,word ptr [ECX + 0x5d]
0044E4D9  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0044E4DD  2B C1                     SUB EAX,ECX
0044E4DF  85 C0                     TEST EAX,EAX
0044E4E1  7E 06                     JLE 0x0044e4e9
0044E4E3  3B C2                     CMP EAX,EDX
0044E4E5  7E 21                     JLE 0x0044e508
0044E4E7  EB 06                     JMP 0x0044e4ef
LAB_0044e4e9:
0044E4E9  F7 DA                     NEG EDX
0044E4EB  3B C2                     CMP EAX,EDX
0044E4ED  7D 24                     JGE 0x0044e513
LAB_0044e4ef:
0044E4EF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0044E4F2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0044E4F5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044E4F8  40                        INC EAX
0044E4F9  83 C2 04                  ADD EDX,0x4
0044E4FC  3B C1                     CMP EAX,ECX
0044E4FE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0044E501  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0044E504  7C A8                     JL 0x0044e4ae
0044E506  EB 37                     JMP 0x0044e53f
LAB_0044e508:
0044E508  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0044E50B  83 3C 97 00               CMP dword ptr [EDI + EDX*0x4],0x0
0044E50F  75 1E                     JNZ 0x0044e52f
0044E511  EB 09                     JMP 0x0044e51c
LAB_0044e513:
0044E513  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0044E516  83 3C 97 00               CMP dword ptr [EDI + EDX*0x4],0x0
0044E51A  75 13                     JNZ 0x0044e52f
LAB_0044e51c:
0044E51C  6A 01                     PUSH 0x1
0044E51E  6A 02                     PUSH 0x2
0044E520  6A 01                     PUSH 0x1
0044E522  6A 00                     PUSH 0x0
0044E524  E8 67 FD 25 00            CALL 0x006ae290
0044E529  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0044E52C  89 04 8F                  MOV dword ptr [EDI + ECX*0x4],EAX
LAB_0044e52f:
0044E52F  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0044E532  8D 56 32                  LEA EDX,[ESI + 0x32]
0044E535  52                        PUSH EDX
0044E536  8B 0C 87                  MOV ECX,dword ptr [EDI + EAX*0x4]
0044E539  51                        PUSH ECX
0044E53A  E8 81 FC 25 00            CALL 0x006ae1c0
LAB_0044e53f:
0044E53F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0044E542  48                        DEC EAX
0044E543  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0044E546  0F 85 F1 FE FF FF         JNZ 0x0044e43d
0044E54C  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0044E54F  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0044E552  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044E555  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0044e558:
0044E558  4E                        DEC ESI
0044E559  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0044E55C  0F 85 B8 FE FF FF         JNZ 0x0044e41a
LAB_0044e562:
0044E562  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0044E565  49                        DEC ECX
0044E566  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0044E569  0F 85 7F FE FF FF         JNZ 0x0044e3ee
LAB_0044e56f:
0044E56F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0044E572  52                        PUSH EDX
0044E573  E8 98 FB 25 00            CALL 0x006ae110
LAB_0044e578:
0044E578  5F                        POP EDI
0044E579  5E                        POP ESI
0044E57A  5B                        POP EBX
0044E57B  8B E5                     MOV ESP,EBP
0044E57D  5D                        POP EBP
0044E57E  C2 10 00                  RET 0x10
