FUN_006fa280:
006FA280  55                        PUSH EBP
006FA281  8B EC                     MOV EBP,ESP
006FA283  83 EC 10                  SUB ESP,0x10
006FA286  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FA289  53                        PUSH EBX
006FA28A  48                        DEC EAX
006FA28B  56                        PUSH ESI
006FA28C  57                        PUSH EDI
006FA28D  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FA297  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FA29A  0F 88 12 04 00 00         JS 0x006fa6b2
006FA2A0  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006FA2A3  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
LAB_006fa2a6:
006FA2A6  83 7D 34 01               CMP dword ptr [EBP + 0x34],0x1
006FA2AA  75 49                     JNZ 0x006fa2f5
006FA2AC  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FA2AF  48                        DEC EAX
006FA2B0  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FA2B3  0F 88 F9 03 00 00         JS 0x006fa6b2
006FA2B9  33 C0                     XOR EAX,EAX
006FA2BB  8A 03                     MOV AL,byte ptr [EBX]
006FA2BD  43                        INC EBX
006FA2BE  85 C0                     TEST EAX,EAX
006FA2C0  74 2C                     JZ 0x006fa2ee
006FA2C2  8B CE                     MOV ECX,ESI
LAB_006fa2c4:
006FA2C4  A8 80                     TEST AL,0x80
006FA2C6  74 16                     JZ 0x006fa2de
006FA2C8  A8 40                     TEST AL,0x40
006FA2CA  74 06                     JZ 0x006fa2d2
006FA2CC  43                        INC EBX
006FA2CD  83 E0 3F                  AND EAX,0x3f
006FA2D0  EB 0F                     JMP 0x006fa2e1
LAB_006fa2d2:
006FA2D2  8B D0                     MOV EDX,EAX
006FA2D4  83 E2 3F                  AND EDX,0x3f
006FA2D7  03 DA                     ADD EBX,EDX
006FA2D9  83 E0 3F                  AND EAX,0x3f
006FA2DC  EB 03                     JMP 0x006fa2e1
LAB_006fa2de:
006FA2DE  83 E0 7F                  AND EAX,0x7f
LAB_006fa2e1:
006FA2E1  2B C8                     SUB ECX,EAX
006FA2E3  85 C9                     TEST ECX,ECX
006FA2E5  7E 07                     JLE 0x006fa2ee
006FA2E7  33 C0                     XOR EAX,EAX
006FA2E9  8A 03                     MOV AL,byte ptr [EBX]
006FA2EB  43                        INC EBX
006FA2EC  EB D6                     JMP 0x006fa2c4
LAB_006fa2ee:
006FA2EE  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
LAB_006fa2f5:
006FA2F5  33 D2                     XOR EDX,EDX
006FA2F7  8A 13                     MOV DL,byte ptr [EBX]
006FA2F9  43                        INC EBX
006FA2FA  85 D2                     TEST EDX,EDX
006FA2FC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006FA2FF  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA302  0F 84 74 03 00 00         JZ 0x006fa67c
006FA308  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006FA30B  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006FA30E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006FA311  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006FA314  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006FA317  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006fa31a:
006FA31A  F6 C2 80                  TEST DL,0x80
006FA31D  8B C2                     MOV EAX,EDX
006FA31F  74 36                     JZ 0x006fa357
006FA321  83 E0 3F                  AND EAX,0x3f
006FA324  3B C3                     CMP EAX,EBX
006FA326  7F 45                     JG 0x006fa36d
006FA328  F6 C2 40                  TEST DL,0x40
006FA32B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FA32E  74 13                     JZ 0x006fa343
006FA330  42                        INC EDX
006FA331  2B D8                     SUB EBX,EAX
006FA333  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006FA336  33 D2                     XOR EDX,EDX
006FA338  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FA33B  8A 10                     MOV DL,byte ptr [EAX]
006FA33D  40                        INC EAX
006FA33E  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FA341  EB D7                     JMP 0x006fa31a
LAB_006fa343:
006FA343  03 D0                     ADD EDX,EAX
006FA345  2B D8                     SUB EBX,EAX
006FA347  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006FA34A  33 D2                     XOR EDX,EDX
006FA34C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FA34F  8A 10                     MOV DL,byte ptr [EAX]
006FA351  40                        INC EAX
006FA352  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FA355  EB C3                     JMP 0x006fa31a
LAB_006fa357:
006FA357  83 E0 7F                  AND EAX,0x7f
006FA35A  3B C3                     CMP EAX,EBX
006FA35C  7F 0F                     JG 0x006fa36d
006FA35E  2B D8                     SUB EBX,EAX
006FA360  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FA363  33 D2                     XOR EDX,EDX
006FA365  8A 10                     MOV DL,byte ptr [EAX]
006FA367  40                        INC EAX
006FA368  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FA36B  EB AD                     JMP 0x006fa31a
LAB_006fa36d:
006FA36D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FA370  2B C3                     SUB EAX,EBX
006FA372  8B DA                     MOV EBX,EDX
006FA374  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006FA377  81 E3 C0 00 00 00         AND EBX,0xc0
006FA37D  80 FB 80                  CMP BL,0x80
006FA380  75 06                     JNZ 0x006fa388
006FA382  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FA385  01 5D 1C                  ADD dword ptr [EBP + 0x1c],EBX
LAB_006fa388:
006FA388  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006FA38B  3B C3                     CMP EAX,EBX
006FA38D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FA390  0F 8F DC 01 00 00         JG 0x006fa572
006FA396  8B DA                     MOV EBX,EDX
006FA398  81 E3 80 00 00 00         AND EBX,0x80
006FA39E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_006fa3a1:
006FA3A1  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FA3A4  2B D8                     SUB EBX,EAX
006FA3A6  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FA3A9  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FA3AC  85 DB                     TEST EBX,EBX
006FA3AE  0F 84 8C 01 00 00         JZ 0x006fa540
006FA3B4  F6 C2 40                  TEST DL,0x40
006FA3B7  0F 84 9A 00 00 00         JZ 0x006fa457
006FA3BD  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FA3C0  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FA3C3  33 D2                     XOR EDX,EDX
006FA3C5  8A 17                     MOV DL,byte ptr [EDI]
006FA3C7  8B FA                     MOV EDI,EDX
006FA3C9  33 D2                     XOR EDX,EDX
006FA3CB  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006FA3CE  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA3D1  43                        INC EBX
006FA3D2  85 C9                     TEST ECX,ECX
006FA3D4  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA3D7  7E 30                     JLE 0x006fa409
006FA3D9  83 F9 01                  CMP ECX,0x1
006FA3DC  75 06                     JNZ 0x006fa3e4
006FA3DE  B9 02 00 00 00            MOV ECX,0x2
006FA3E3  48                        DEC EAX
LAB_006fa3e4:
006FA3E4  85 C0                     TEST EAX,EAX
006FA3E6  0F 8E 6E 01 00 00         JLE 0x006fa55a
006FA3EC  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006FA3EF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA3F2  33 C9                     XOR ECX,ECX
006FA3F4  66 8B 0F                  MOV CX,word ptr [EDI]
006FA3F7  3B D9                     CMP EBX,ECX
006FA3F9  77 02                     JA 0x006fa3fd
006FA3FB  88 16                     MOV byte ptr [ESI],DL
LAB_006fa3fd:
006FA3FD  83 C7 02                  ADD EDI,0x2
006FA400  46                        INC ESI
006FA401  33 C9                     XOR ECX,ECX
006FA403  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006FA406  48                        DEC EAX
006FA407  EB 06                     JMP 0x006fa40f
LAB_006fa409:
006FA409  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA40C  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006fa40f:
006FA40F  85 C0                     TEST EAX,EAX
006FA411  7E 3C                     JLE 0x006fa44f
LAB_006fa413:
006FA413  33 C9                     XOR ECX,ECX
006FA415  66 8B 0F                  MOV CX,word ptr [EDI]
006FA418  3B D9                     CMP EBX,ECX
006FA41A  77 02                     JA 0x006fa41e
006FA41C  88 16                     MOV byte ptr [ESI],DL
LAB_006fa41e:
006FA41E  83 C7 02                  ADD EDI,0x2
006FA421  46                        INC ESI
006FA422  48                        DEC EAX
006FA423  B9 01 00 00 00            MOV ECX,0x1
006FA428  85 C0                     TEST EAX,EAX
006FA42A  7E 20                     JLE 0x006fa44c
006FA42C  48                        DEC EAX
006FA42D  B9 02 00 00 00            MOV ECX,0x2
006FA432  85 C0                     TEST EAX,EAX
006FA434  7E 16                     JLE 0x006fa44c
006FA436  33 C9                     XOR ECX,ECX
006FA438  66 8B 0F                  MOV CX,word ptr [EDI]
006FA43B  3B D9                     CMP EBX,ECX
006FA43D  77 02                     JA 0x006fa441
006FA43F  88 16                     MOV byte ptr [ESI],DL
LAB_006fa441:
006FA441  83 C7 02                  ADD EDI,0x2
006FA444  46                        INC ESI
006FA445  33 C9                     XOR ECX,ECX
006FA447  48                        DEC EAX
006FA448  85 C0                     TEST EAX,EAX
006FA44A  7F C7                     JG 0x006fa413
LAB_006fa44c:
006FA44C  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_006fa44f:
006FA44F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006FA452  E9 BF 00 00 00            JMP 0x006fa516
LAB_006fa457:
006FA457  85 C9                     TEST ECX,ECX
006FA459  7E 46                     JLE 0x006fa4a1
006FA45B  83 F9 01                  CMP ECX,0x1
006FA45E  75 0D                     JNZ 0x006fa46d
006FA460  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FA463  41                        INC ECX
006FA464  48                        DEC EAX
006FA465  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FA468  B9 02 00 00 00            MOV ECX,0x2
LAB_006fa46d:
006FA46D  85 C0                     TEST EAX,EAX
006FA46F  0F 8E A1 00 00 00         JLE 0x006fa516
006FA475  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA478  33 C9                     XOR ECX,ECX
006FA47A  66 8B 0F                  MOV CX,word ptr [EDI]
006FA47D  3B D9                     CMP EBX,ECX
006FA47F  77 0F                     JA 0x006fa490
006FA481  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA484  33 C9                     XOR ECX,ECX
006FA486  8A 0B                     MOV CL,byte ptr [EBX]
006FA488  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FA48B  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FA48E  88 0E                     MOV byte ptr [ESI],CL
LAB_006fa490:
006FA490  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FA493  83 C7 02                  ADD EDI,0x2
006FA496  46                        INC ESI
006FA497  41                        INC ECX
006FA498  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FA49B  33 C9                     XOR ECX,ECX
006FA49D  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006FA4A0  48                        DEC EAX
LAB_006fa4a1:
006FA4A1  85 C0                     TEST EAX,EAX
006FA4A3  7E 71                     JLE 0x006fa516
LAB_006fa4a5:
006FA4A5  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA4A8  33 C9                     XOR ECX,ECX
006FA4AA  66 8B 0F                  MOV CX,word ptr [EDI]
006FA4AD  3B D9                     CMP EBX,ECX
006FA4AF  77 0F                     JA 0x006fa4c0
006FA4B1  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA4B4  33 C9                     XOR ECX,ECX
006FA4B6  8A 0B                     MOV CL,byte ptr [EBX]
006FA4B8  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FA4BB  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FA4BE  88 0E                     MOV byte ptr [ESI],CL
LAB_006fa4c0:
006FA4C0  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FA4C3  83 C7 02                  ADD EDI,0x2
006FA4C6  46                        INC ESI
006FA4C7  41                        INC ECX
006FA4C8  48                        DEC EAX
006FA4C9  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FA4CC  85 C0                     TEST EAX,EAX
006FA4CE  B9 01 00 00 00            MOV ECX,0x1
006FA4D3  7E 3E                     JLE 0x006fa513
006FA4D5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FA4D8  41                        INC ECX
006FA4D9  48                        DEC EAX
006FA4DA  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FA4DD  B9 02 00 00 00            MOV ECX,0x2
006FA4E2  85 C0                     TEST EAX,EAX
006FA4E4  7E 2D                     JLE 0x006fa513
006FA4E6  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA4E9  33 C9                     XOR ECX,ECX
006FA4EB  66 8B 0F                  MOV CX,word ptr [EDI]
006FA4EE  3B D9                     CMP EBX,ECX
006FA4F0  77 0F                     JA 0x006fa501
006FA4F2  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA4F5  33 C9                     XOR ECX,ECX
006FA4F7  8A 0B                     MOV CL,byte ptr [EBX]
006FA4F9  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FA4FC  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FA4FF  88 0E                     MOV byte ptr [ESI],CL
LAB_006fa501:
006FA501  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FA504  83 C7 02                  ADD EDI,0x2
006FA507  46                        INC ESI
006FA508  41                        INC ECX
006FA509  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FA50C  33 C9                     XOR ECX,ECX
006FA50E  48                        DEC EAX
006FA50F  85 C0                     TEST EAX,EAX
006FA511  7F 92                     JG 0x006fa4a5
LAB_006fa513:
006FA513  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_006fa516:
006FA516  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006FA519  85 C0                     TEST EAX,EAX
006FA51B  7E 53                     JLE 0x006fa570
006FA51D  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA520  33 D2                     XOR EDX,EDX
006FA522  8A 13                     MOV DL,byte ptr [EBX]
006FA524  8B C2                     MOV EAX,EDX
006FA526  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006FA529  25 80 00 00 00            AND EAX,0x80
006FA52E  43                        INC EBX
006FA52F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006FA532  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA535  85 C0                     TEST EAX,EAX
006FA537  8B C2                     MOV EAX,EDX
006FA539  74 27                     JZ 0x006fa562
006FA53B  83 E0 3F                  AND EAX,0x3f
006FA53E  EB 25                     JMP 0x006fa565
LAB_006fa540:
006FA540  48                        DEC EAX
006FA541  78 D3                     JS 0x006fa516
006FA543  40                        INC EAX
LAB_006fa544:
006FA544  83 F9 01                  CMP ECX,0x1
006FA547  74 04                     JZ 0x006fa54d
006FA549  46                        INC ESI
006FA54A  83 C7 02                  ADD EDI,0x2
LAB_006fa54d:
006FA54D  41                        INC ECX
006FA54E  83 F9 02                  CMP ECX,0x2
006FA551  7E 02                     JLE 0x006fa555
006FA553  33 C9                     XOR ECX,ECX
LAB_006fa555:
006FA555  48                        DEC EAX
006FA556  75 EC                     JNZ 0x006fa544
006FA558  EB B9                     JMP 0x006fa513
LAB_006fa55a:
006FA55A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006FA55D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006FA560  EB B4                     JMP 0x006fa516
LAB_006fa562:
006FA562  83 E0 7F                  AND EAX,0x7f
LAB_006fa565:
006FA565  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
006FA568  0F 8E 33 FE FF FF         JLE 0x006fa3a1
006FA56E  EB 02                     JMP 0x006fa572
LAB_006fa570:
006FA570  33 C0                     XOR EAX,EAX
LAB_006fa572:
006FA572  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FA575  2B C3                     SUB EAX,EBX
006FA577  85 DB                     TEST EBX,EBX
006FA579  0F 8E AF 00 00 00         JLE 0x006fa62e
006FA57F  F6 C2 80                  TEST DL,0x80
006FA582  0F 84 A6 00 00 00         JZ 0x006fa62e
006FA588  F6 C2 40                  TEST DL,0x40
006FA58B  0F 84 2A 01 00 00         JZ 0x006fa6bb
006FA591  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FA594  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FA597  33 D2                     XOR EDX,EDX
006FA599  8A 17                     MOV DL,byte ptr [EDI]
006FA59B  8B FA                     MOV EDI,EDX
006FA59D  33 D2                     XOR EDX,EDX
006FA59F  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006FA5A2  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA5A5  43                        INC EBX
006FA5A6  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006FA5A9  85 C9                     TEST ECX,ECX
006FA5AB  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA5AE  7E 2F                     JLE 0x006fa5df
006FA5B0  83 F9 01                  CMP ECX,0x1
006FA5B3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA5B6  75 01                     JNZ 0x006fa5b9
006FA5B8  49                        DEC ECX
LAB_006fa5b9:
006FA5B9  85 C9                     TEST ECX,ECX
006FA5BB  0F 8E D1 01 00 00         JLE 0x006fa792
006FA5C1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006FA5C4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FA5C7  33 DB                     XOR EBX,EBX
006FA5C9  66 8B 1F                  MOV BX,word ptr [EDI]
006FA5CC  3B D3                     CMP EDX,EBX
006FA5CE  77 05                     JA 0x006fa5d5
006FA5D0  8A 5D F0                  MOV BL,byte ptr [EBP + -0x10]
006FA5D3  88 1E                     MOV byte ptr [ESI],BL
LAB_006fa5d5:
006FA5D5  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA5D8  83 C7 02                  ADD EDI,0x2
006FA5DB  46                        INC ESI
006FA5DC  49                        DEC ECX
006FA5DD  EB 09                     JMP 0x006fa5e8
LAB_006fa5df:
006FA5DF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FA5E2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA5E5  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006fa5e8:
006FA5E8  85 C9                     TEST ECX,ECX
006FA5EA  0F 8E A2 01 00 00         JLE 0x006fa792
LAB_006fa5f0:
006FA5F0  33 DB                     XOR EBX,EBX
006FA5F2  66 8B 1F                  MOV BX,word ptr [EDI]
006FA5F5  3B D3                     CMP EDX,EBX
006FA5F7  77 05                     JA 0x006fa5fe
006FA5F9  8A 5D F0                  MOV BL,byte ptr [EBP + -0x10]
006FA5FC  88 1E                     MOV byte ptr [ESI],BL
LAB_006fa5fe:
006FA5FE  83 C7 02                  ADD EDI,0x2
006FA601  46                        INC ESI
006FA602  49                        DEC ECX
006FA603  85 C9                     TEST ECX,ECX
006FA605  0F 8E 84 01 00 00         JLE 0x006fa78f
006FA60B  49                        DEC ECX
006FA60C  85 C9                     TEST ECX,ECX
006FA60E  0F 8E 7B 01 00 00         JLE 0x006fa78f
006FA614  33 DB                     XOR EBX,EBX
006FA616  66 8B 1F                  MOV BX,word ptr [EDI]
006FA619  3B D3                     CMP EDX,EBX
006FA61B  77 05                     JA 0x006fa622
006FA61D  8A 5D F0                  MOV BL,byte ptr [EBP + -0x10]
006FA620  88 1E                     MOV byte ptr [ESI],BL
LAB_006fa622:
006FA622  83 C7 02                  ADD EDI,0x2
006FA625  46                        INC ESI
006FA626  49                        DEC ECX
006FA627  85 C9                     TEST ECX,ECX
006FA629  7F C5                     JG 0x006fa5f0
006FA62B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_006fa62e:
006FA62E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
LAB_006fa631:
006FA631  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006FA634  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006FA637  8B CE                     MOV ECX,ESI
006FA639  2B CF                     SUB ECX,EDI
006FA63B  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006FA63E  2B CF                     SUB ECX,EDI
006FA640  3B C1                     CMP EAX,ECX
006FA642  7D 2B                     JGE 0x006fa66f
LAB_006fa644:
006FA644  81 E2 C0 00 00 00         AND EDX,0xc0
006FA64A  2B C8                     SUB ECX,EAX
006FA64C  80 FA 80                  CMP DL,0x80
006FA64F  75 02                     JNZ 0x006fa653
006FA651  03 D8                     ADD EBX,EAX
LAB_006fa653:
006FA653  33 D2                     XOR EDX,EDX
006FA655  8A 13                     MOV DL,byte ptr [EBX]
006FA657  8B C2                     MOV EAX,EDX
006FA659  24 80                     AND AL,0x80
006FA65B  43                        INC EBX
006FA65C  84 C0                     TEST AL,AL
006FA65E  8B C2                     MOV EAX,EDX
006FA660  74 09                     JZ 0x006fa66b
006FA662  83 E0 3F                  AND EAX,0x3f
006FA665  F6 C2 40                  TEST DL,0x40
006FA668  74 01                     JZ 0x006fa66b
006FA66A  43                        INC EBX
LAB_006fa66b:
006FA66B  3B C1                     CMP EAX,ECX
006FA66D  7C D5                     JL 0x006fa644
LAB_006fa66f:
006FA66F  81 E2 C0 00 00 00         AND EDX,0xc0
006FA675  80 FA 80                  CMP DL,0x80
006FA678  75 02                     JNZ 0x006fa67c
006FA67A  03 D9                     ADD EBX,ECX
LAB_006fa67c:
006FA67C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006FA67F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FA682  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006FA685  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006FA688  03 C1                     ADD EAX,ECX
006FA68A  03 FA                     ADD EDI,EDX
006FA68C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006FA68F  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FA692  40                        INC EAX
006FA693  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006FA696  83 F8 02                  CMP EAX,0x2
006FA699  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006FA69C  7E 07                     JLE 0x006fa6a5
006FA69E  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006fa6a5:
006FA6A5  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FA6A8  48                        DEC EAX
006FA6A9  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FA6AC  0F 89 F4 FB FF FF         JNS 0x006fa2a6
LAB_006fa6b2:
006FA6B2  5F                        POP EDI
006FA6B3  5E                        POP ESI
006FA6B4  5B                        POP EBX
006FA6B5  8B E5                     MOV ESP,EBP
006FA6B7  5D                        POP EBP
006FA6B8  C2 34 00                  RET 0x34
LAB_006fa6bb:
006FA6BB  85 C9                     TEST ECX,ECX
006FA6BD  7E 4D                     JLE 0x006fa70c
006FA6BF  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA6C2  83 F9 01                  CMP ECX,0x1
006FA6C5  75 0B                     JNZ 0x006fa6d2
006FA6C7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA6CA  43                        INC EBX
006FA6CB  49                        DEC ECX
006FA6CC  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA6CF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fa6d2:
006FA6D2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA6D5  85 C9                     TEST ECX,ECX
006FA6D7  0F 8E 54 FF FF FF         JLE 0x006fa631
006FA6DD  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA6E0  33 C9                     XOR ECX,ECX
006FA6E2  66 8B 0F                  MOV CX,word ptr [EDI]
006FA6E5  3B D9                     CMP EBX,ECX
006FA6E7  77 0F                     JA 0x006fa6f8
006FA6E9  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA6EC  33 C9                     XOR ECX,ECX
006FA6EE  8A 0B                     MOV CL,byte ptr [EBX]
006FA6F0  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FA6F3  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FA6F6  88 0E                     MOV byte ptr [ESI],CL
LAB_006fa6f8:
006FA6F8  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA6FB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA6FE  83 C7 02                  ADD EDI,0x2
006FA701  46                        INC ESI
006FA702  43                        INC EBX
006FA703  49                        DEC ECX
006FA704  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA707  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FA70A  EB 03                     JMP 0x006fa70f
LAB_006fa70c:
006FA70C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
LAB_006fa70f:
006FA70F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA712  85 C9                     TEST ECX,ECX
006FA714  0F 8E 17 FF FF FF         JLE 0x006fa631
LAB_006fa71a:
006FA71A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA71D  33 C9                     XOR ECX,ECX
006FA71F  66 8B 0F                  MOV CX,word ptr [EDI]
006FA722  3B D9                     CMP EBX,ECX
006FA724  77 0F                     JA 0x006fa735
006FA726  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA729  33 C9                     XOR ECX,ECX
006FA72B  8A 0B                     MOV CL,byte ptr [EBX]
006FA72D  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FA730  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FA733  88 0E                     MOV byte ptr [ESI],CL
LAB_006fa735:
006FA735  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA738  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA73B  83 C7 02                  ADD EDI,0x2
006FA73E  46                        INC ESI
006FA73F  43                        INC EBX
006FA740  49                        DEC ECX
006FA741  85 C9                     TEST ECX,ECX
006FA743  0F 8E E8 FE FF FF         JLE 0x006fa631
006FA749  43                        INC EBX
006FA74A  49                        DEC ECX
006FA74B  85 C9                     TEST ECX,ECX
006FA74D  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA750  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FA753  0F 8E D8 FE FF FF         JLE 0x006fa631
006FA759  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA75C  33 C9                     XOR ECX,ECX
006FA75E  66 8B 0F                  MOV CX,word ptr [EDI]
006FA761  3B D9                     CMP EBX,ECX
006FA763  77 0F                     JA 0x006fa774
006FA765  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA768  33 C9                     XOR ECX,ECX
006FA76A  8A 0B                     MOV CL,byte ptr [EBX]
006FA76C  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FA76F  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FA772  88 0E                     MOV byte ptr [ESI],CL
LAB_006fa774:
006FA774  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA777  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA77A  83 C7 02                  ADD EDI,0x2
006FA77D  46                        INC ESI
006FA77E  43                        INC EBX
006FA77F  49                        DEC ECX
006FA780  85 C9                     TEST ECX,ECX
006FA782  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA785  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FA788  7F 90                     JG 0x006fa71a
006FA78A  E9 A2 FE FF FF            JMP 0x006fa631
LAB_006fa78f:
006FA78F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
LAB_006fa792:
006FA792  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006FA795  E9 97 FE FF FF            JMP 0x006fa631
