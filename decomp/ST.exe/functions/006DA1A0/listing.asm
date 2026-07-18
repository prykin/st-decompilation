FUN_006da1a0:
006DA1A0  55                        PUSH EBP
006DA1A1  8B EC                     MOV EBP,ESP
006DA1A3  81 EC 88 00 00 00         SUB ESP,0x88
006DA1A9  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006DA1AC  53                        PUSH EBX
006DA1AD  56                        PUSH ESI
006DA1AE  83 F8 02                  CMP EAX,0x2
006DA1B1  57                        PUSH EDI
006DA1B2  0F 8E 25 03 00 00         JLE 0x006da4dd
006DA1B8  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006DA1BB  83 FA 02                  CMP EDX,0x2
006DA1BE  0F 8E 19 03 00 00         JLE 0x006da4dd
006DA1C4  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006DA1C7  BE 03 00 00 00            MOV ESI,0x3
006DA1CC  8D 4C 09 01               LEA ECX,[ECX + ECX*0x1 + 0x1]
006DA1D0  3B C8                     CMP ECX,EAX
006DA1D2  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006DA1D5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006DA1D8  7C 08                     JL 0x006da1e2
006DA1DA  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006DA1DD  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006DA1E0  8B CE                     MOV ECX,ESI
LAB_006da1e2:
006DA1E2  3B CA                     CMP ECX,EDX
006DA1E4  7C 08                     JL 0x006da1ee
006DA1E6  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006DA1E9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006DA1EC  8B CE                     MOV ECX,ESI
LAB_006da1ee:
006DA1EE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006DA1F1  C7 45 F8 1F 00 00 00      MOV dword ptr [EBP + -0x8],0x1f
006DA1F8  8D 42 FF                  LEA EAX,[EDX + -0x1]
006DA1FB  99                        CDQ
006DA1FC  2B C2                     SUB EAX,EDX
006DA1FE  8B F8                     MOV EDI,EAX
006DA200  8D 41 FF                  LEA EAX,[ECX + -0x1]
006DA203  99                        CDQ
006DA204  2B C2                     SUB EAX,EDX
006DA206  8B F0                     MOV ESI,EAX
006DA208  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
006DA20E  D1 FF                     SAR EDI,0x1
006DA210  D1 FE                     SAR ESI,0x1
006DA212  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006da215:
006DA215  E8 A6 44 05 00            CALL 0x0072e6c0
006DA21A  99                        CDQ
006DA21B  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
006DA21E  8B DA                     MOV EBX,EDX
006DA220  2B DF                     SUB EBX,EDI
006DA222  E8 99 44 05 00            CALL 0x0072e6c0
006DA227  99                        CDQ
006DA228  F7 7D 2C                  IDIV dword ptr [EBP + 0x2c]
006DA22B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006DA22E  83 C0 04                  ADD EAX,0x4
006DA231  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006DA234  2B D6                     SUB EDX,ESI
006DA236  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006DA23A  03 D3                     ADD EDX,EBX
006DA23C  89 50 FC                  MOV dword ptr [EAX + -0x4],EDX
006DA23F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006DA242  48                        DEC EAX
006DA243  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006DA246  75 CD                     JNZ 0x006da215
006DA248  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006DA24B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006DA24E  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006DA251  B9 01 00 00 00            MOV ECX,0x1
006DA256  2B CB                     SUB ECX,EBX
006DA258  03 D7                     ADD EDX,EDI
006DA25A  8B DE                     MOV EBX,ESI
006DA25C  03 C6                     ADD EAX,ESI
006DA25E  0F AF 5D 0C               IMUL EBX,dword ptr [EBP + 0xc]
006DA262  0F AF 75 14               IMUL ESI,dword ptr [EBP + 0x14]
006DA266  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006DA269  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006DA26C  03 D1                     ADD EDX,ECX
006DA26E  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006DA271  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006DA274  BA 01 00 00 00            MOV EDX,0x1
006DA279  2B D1                     SUB EDX,ECX
006DA27B  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006DA27E  03 CA                     ADD ECX,EDX
006DA280  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DA283  03 DF                     ADD EBX,EDI
006DA285  03 F7                     ADD ESI,EDI
006DA287  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006DA28A  03 DA                     ADD EBX,EDX
006DA28C  03 F7                     ADD ESI,EDI
006DA28E  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006DA291  85 C0                     TEST EAX,EAX
006DA293  C7 45 20 00 00 00 00      MOV dword ptr [EBP + 0x20],0x0
006DA29A  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006DA29D  7E 11                     JLE 0x006da2b0
006DA29F  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006DA2A2  50                        PUSH EAX
006DA2A3  57                        PUSH EDI
006DA2A4  E8 67 5B FF FF            CALL 0x006cfe10
006DA2A9  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006DA2AC  8B F0                     MOV ESI,EAX
006DA2AE  EB 14                     JMP 0x006da2c4
LAB_006da2b0:
006DA2B0  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006DA2B3  8A 47 0D                  MOV AL,byte ptr [EDI + 0xd]
006DA2B6  D1 E8                     SHR EAX,0x1
006DA2B8  83 E0 0E                  AND EAX,0xe
006DA2BB  8D 54 38 16               LEA EDX,[EAX + EDI*0x1 + 0x16]
006DA2BF  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006DA2C2  8B F2                     MOV ESI,EDX
LAB_006da2c4:
006DA2C4  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
006DA2C8  8B D1                     MOV EDX,ECX
006DA2CA  49                        DEC ECX
006DA2CB  85 D2                     TEST EDX,EDX
006DA2CD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006DA2D0  0F 8E 07 02 00 00         JLE 0x006da4dd
006DA2D6  41                        INC ECX
006DA2D7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006da2da:
006DA2DA  33 D2                     XOR EDX,EDX
006DA2DC  8A 16                     MOV DL,byte ptr [ESI]
006DA2DE  46                        INC ESI
006DA2DF  85 D2                     TEST EDX,EDX
006DA2E1  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006DA2E4  0F 84 D6 01 00 00         JZ 0x006da4c0
006DA2EA  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006da2ed:
006DA2ED  F6 C2 80                  TEST DL,0x80
006DA2F0  8B CA                     MOV ECX,EDX
006DA2F2  74 21                     JZ 0x006da315
006DA2F4  83 E1 3F                  AND ECX,0x3f
006DA2F7  3B CF                     CMP ECX,EDI
006DA2F9  7F 2A                     JG 0x006da325
006DA2FB  F6 C2 40                  TEST DL,0x40
006DA2FE  74 0A                     JZ 0x006da30a
006DA300  46                        INC ESI
006DA301  33 D2                     XOR EDX,EDX
006DA303  2B F9                     SUB EDI,ECX
006DA305  8A 16                     MOV DL,byte ptr [ESI]
006DA307  46                        INC ESI
006DA308  EB E3                     JMP 0x006da2ed
LAB_006da30a:
006DA30A  03 F1                     ADD ESI,ECX
006DA30C  33 D2                     XOR EDX,EDX
006DA30E  2B F9                     SUB EDI,ECX
006DA310  8A 16                     MOV DL,byte ptr [ESI]
006DA312  46                        INC ESI
006DA313  EB D8                     JMP 0x006da2ed
LAB_006da315:
006DA315  83 E1 7F                  AND ECX,0x7f
006DA318  3B CF                     CMP ECX,EDI
006DA31A  7F 09                     JG 0x006da325
006DA31C  33 D2                     XOR EDX,EDX
006DA31E  2B F9                     SUB EDI,ECX
006DA320  8A 16                     MOV DL,byte ptr [ESI]
006DA322  46                        INC ESI
006DA323  EB C8                     JMP 0x006da2ed
LAB_006da325:
006DA325  8B C2                     MOV EAX,EDX
006DA327  2B CF                     SUB ECX,EDI
006DA329  25 C0 00 00 00            AND EAX,0xc0
006DA32E  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006DA331  3C 80                     CMP AL,0x80
006DA333  75 05                     JNZ 0x006da33a
006DA335  03 F7                     ADD ESI,EDI
006DA337  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
LAB_006da33a:
006DA33A  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006DA33D  3B CE                     CMP ECX,ESI
006DA33F  0F 8F A1 00 00 00         JG 0x006da3e6
006DA345  8B FA                     MOV EDI,EDX
006DA347  81 E7 80 00 00 00         AND EDI,0x80
LAB_006da34d:
006DA34D  2B F1                     SUB ESI,ECX
006DA34F  85 FF                     TEST EDI,EDI
006DA351  74 5C                     JZ 0x006da3af
006DA353  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006DA356  F6 C2 40                  TEST DL,0x40
006DA359  74 06                     JZ 0x006da361
006DA35B  40                        INC EAX
006DA35C  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006DA35F  EB 05                     JMP 0x006da366
LAB_006da361:
006DA361  03 C1                     ADD EAX,ECX
006DA363  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
LAB_006da366:
006DA366  8B F9                     MOV EDI,ECX
006DA368  49                        DEC ECX
006DA369  85 FF                     TEST EDI,EDI
006DA36B  7E 4F                     JLE 0x006da3bc
006DA36D  41                        INC ECX
006DA36E  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006da371:
006DA371  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006DA374  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006DA377  8B 8C 8D 78 FF FF FF      MOV ECX,dword ptr [EBP + ECX*0x4 + 0xffffff78]
006DA37E  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006DA381  8A 0F                     MOV CL,byte ptr [EDI]
006DA383  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006DA386  88 0C 1F                  MOV byte ptr [EDI + EBX*0x1],CL
006DA389  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006DA38C  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006DA38F  41                        INC ECX
006DA390  43                        INC EBX
006DA391  47                        INC EDI
006DA392  83 F9 1F                  CMP ECX,0x1f
006DA395  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006DA398  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006DA39B  7C 07                     JL 0x006da3a4
006DA39D  C7 45 20 00 00 00 00      MOV dword ptr [EBP + 0x20],0x0
LAB_006da3a4:
006DA3A4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DA3A7  49                        DEC ECX
006DA3A8  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006DA3AB  75 C4                     JNZ 0x006da371
006DA3AD  EB 0D                     JMP 0x006da3bc
LAB_006da3af:
006DA3AF  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006DA3B2  03 D9                     ADD EBX,ECX
006DA3B4  03 C1                     ADD EAX,ECX
006DA3B6  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006DA3B9  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
LAB_006da3bc:
006DA3BC  85 F6                     TEST ESI,ESI
006DA3BE  7E 3C                     JLE 0x006da3fc
006DA3C0  33 D2                     XOR EDX,EDX
006DA3C2  8A 10                     MOV DL,byte ptr [EAX]
006DA3C4  8B FA                     MOV EDI,EDX
006DA3C6  8B CA                     MOV ECX,EDX
006DA3C8  81 E7 80 00 00 00         AND EDI,0x80
006DA3CE  40                        INC EAX
006DA3CF  85 FF                     TEST EDI,EDI
006DA3D1  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006DA3D4  74 05                     JZ 0x006da3db
006DA3D6  83 E1 3F                  AND ECX,0x3f
006DA3D9  EB 03                     JMP 0x006da3de
LAB_006da3db:
006DA3DB  83 E1 7F                  AND ECX,0x7f
LAB_006da3de:
006DA3DE  3B CE                     CMP ECX,ESI
006DA3E0  0F 8E 67 FF FF FF         JLE 0x006da34d
LAB_006da3e6:
006DA3E6  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
LAB_006da3e9:
006DA3E9  2B CE                     SUB ECX,ESI
006DA3EB  F6 C2 80                  TEST DL,0x80
006DA3EE  74 5A                     JZ 0x006da44a
006DA3F0  F6 C2 40                  TEST DL,0x40
006DA3F3  74 0B                     JZ 0x006da400
006DA3F5  85 F6                     TEST ESI,ESI
006DA3F7  7E 0C                     JLE 0x006da405
006DA3F9  40                        INC EAX
006DA3FA  EB 06                     JMP 0x006da402
LAB_006da3fc:
006DA3FC  33 C9                     XOR ECX,ECX
006DA3FE  EB E9                     JMP 0x006da3e9
LAB_006da400:
006DA400  03 C6                     ADD EAX,ESI
LAB_006da402:
006DA402  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
LAB_006da405:
006DA405  8B FE                     MOV EDI,ESI
006DA407  4E                        DEC ESI
006DA408  85 FF                     TEST EDI,EDI
006DA40A  7E 48                     JLE 0x006da454
006DA40C  8D 7E 01                  LEA EDI,[ESI + 0x1]
LAB_006da40f:
006DA40F  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006DA412  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006DA415  8B 84 85 78 FF FF FF      MOV EAX,dword ptr [EBP + EAX*0x4 + 0xffffff78]
006DA41C  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006DA41F  8A 06                     MOV AL,byte ptr [ESI]
006DA421  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006DA424  88 04 1E                  MOV byte ptr [ESI + EBX*0x1],AL
006DA427  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006DA42A  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006DA42D  40                        INC EAX
006DA42E  43                        INC EBX
006DA42F  46                        INC ESI
006DA430  83 F8 1F                  CMP EAX,0x1f
006DA433  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006DA436  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006DA439  7C 07                     JL 0x006da442
006DA43B  C7 45 20 00 00 00 00      MOV dword ptr [EBP + 0x20],0x0
LAB_006da442:
006DA442  4F                        DEC EDI
006DA443  75 CA                     JNZ 0x006da40f
006DA445  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006DA448  EB 0A                     JMP 0x006da454
LAB_006da44a:
006DA44A  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006DA44D  03 DE                     ADD EBX,ESI
006DA44F  03 FE                     ADD EDI,ESI
006DA451  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
LAB_006da454:
006DA454  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006DA457  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006DA45A  2B FE                     SUB EDI,ESI
006DA45C  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006DA45F  2B FE                     SUB EDI,ESI
006DA461  3B CF                     CMP ECX,EDI
006DA463  7D 32                     JGE 0x006da497
LAB_006da465:
006DA465  81 E2 C0 00 00 00         AND EDX,0xc0
006DA46B  2B F9                     SUB EDI,ECX
006DA46D  80 FA 80                  CMP DL,0x80
006DA470  75 02                     JNZ 0x006da474
006DA472  03 C1                     ADD EAX,ECX
LAB_006da474:
006DA474  33 D2                     XOR EDX,EDX
006DA476  8A 10                     MOV DL,byte ptr [EAX]
006DA478  8B CA                     MOV ECX,EDX
006DA47A  80 E1 80                  AND CL,0x80
006DA47D  40                        INC EAX
006DA47E  84 C9                     TEST CL,CL
006DA480  8B CA                     MOV ECX,EDX
006DA482  74 09                     JZ 0x006da48d
006DA484  83 E1 3F                  AND ECX,0x3f
006DA487  F6 C2 40                  TEST DL,0x40
006DA48A  74 01                     JZ 0x006da48d
006DA48C  40                        INC EAX
LAB_006da48d:
006DA48D  3B CF                     CMP ECX,EDI
006DA48F  7C D4                     JL 0x006da465
006DA491  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006DA494  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
LAB_006da497:
006DA497  81 E2 C0 00 00 00         AND EDX,0xc0
006DA49D  80 FA 80                  CMP DL,0x80
006DA4A0  75 05                     JNZ 0x006da4a7
006DA4A2  03 C7                     ADD EAX,EDI
006DA4A4  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
LAB_006da4a7:
006DA4A7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DA4AA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DA4AD  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006DA4B0  2B D6                     SUB EDX,ESI
006DA4B2  2B C6                     SUB EAX,ESI
006DA4B4  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006DA4B7  03 DA                     ADD EBX,EDX
006DA4B9  03 C8                     ADD ECX,EAX
006DA4BB  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006DA4BE  EB 10                     JMP 0x006da4d0
LAB_006da4c0:
006DA4C0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006DA4C3  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006DA4C6  03 D9                     ADD EBX,ECX
006DA4C8  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006DA4CB  03 C1                     ADD EAX,ECX
006DA4CD  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
LAB_006da4d0:
006DA4D0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DA4D3  48                        DEC EAX
006DA4D4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006DA4D7  0F 85 FD FD FF FF         JNZ 0x006da2da
LAB_006da4dd:
006DA4DD  5F                        POP EDI
006DA4DE  5E                        POP ESI
006DA4DF  5B                        POP EBX
006DA4E0  8B E5                     MOV ESP,EBP
006DA4E2  5D                        POP EBP
006DA4E3  C2 28 00                  RET 0x28
