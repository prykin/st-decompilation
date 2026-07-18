FUN_007012f0:
007012F0  55                        PUSH EBP
007012F1  8B EC                     MOV EBP,ESP
007012F3  83 EC 24                  SUB ESP,0x24
007012F6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
007012F9  53                        PUSH EBX
007012FA  48                        DEC EAX
007012FB  56                        PUSH ESI
007012FC  57                        PUSH EDI
007012FD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00701304  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
0070130E  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00701311  0F 88 AB 07 00 00         JS 0x00701ac2
00701317  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0070131A  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_0070131d:
0070131D  83 7D 34 01               CMP dword ptr [EBP + 0x34],0x1
00701321  0F 85 8A 00 00 00         JNZ 0x007013b1
00701327  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0070132A  48                        DEC EAX
0070132B  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
0070132E  0F 88 8E 07 00 00         JS 0x00701ac2
00701334  33 C0                     XOR EAX,EAX
00701336  8A 07                     MOV AL,byte ptr [EDI]
00701338  47                        INC EDI
00701339  85 C0                     TEST EAX,EAX
0070133B  74 2C                     JZ 0x00701369
0070133D  8B CA                     MOV ECX,EDX
LAB_0070133f:
0070133F  A8 80                     TEST AL,0x80
00701341  74 16                     JZ 0x00701359
00701343  A8 40                     TEST AL,0x40
00701345  74 06                     JZ 0x0070134d
00701347  47                        INC EDI
00701348  83 E0 3F                  AND EAX,0x3f
0070134B  EB 0F                     JMP 0x0070135c
LAB_0070134d:
0070134D  8B F0                     MOV ESI,EAX
0070134F  83 E6 3F                  AND ESI,0x3f
00701352  03 FE                     ADD EDI,ESI
00701354  83 E0 3F                  AND EAX,0x3f
00701357  EB 03                     JMP 0x0070135c
LAB_00701359:
00701359  83 E0 7F                  AND EAX,0x7f
LAB_0070135c:
0070135C  2B C8                     SUB ECX,EAX
0070135E  85 C9                     TEST ECX,ECX
00701360  7E 07                     JLE 0x00701369
00701362  33 C0                     XOR EAX,EAX
00701364  8A 07                     MOV AL,byte ptr [EDI]
00701366  47                        INC EDI
00701367  EB D6                     JMP 0x0070133f
LAB_00701369:
00701369  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
0070136C  33 C0                     XOR EAX,EAX
0070136E  8A 06                     MOV AL,byte ptr [ESI]
00701370  46                        INC ESI
00701371  85 C0                     TEST EAX,EAX
00701373  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
00701376  74 30                     JZ 0x007013a8
00701378  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
LAB_0070137b:
0070137B  A8 80                     TEST AL,0x80
0070137D  74 16                     JZ 0x00701395
0070137F  A8 40                     TEST AL,0x40
00701381  74 06                     JZ 0x00701389
00701383  46                        INC ESI
00701384  83 E0 3F                  AND EAX,0x3f
00701387  EB 0F                     JMP 0x00701398
LAB_00701389:
00701389  8B D8                     MOV EBX,EAX
0070138B  83 E3 3F                  AND EBX,0x3f
0070138E  03 F3                     ADD ESI,EBX
00701390  83 E0 3F                  AND EAX,0x3f
00701393  EB 03                     JMP 0x00701398
LAB_00701395:
00701395  83 E0 7F                  AND EAX,0x7f
LAB_00701398:
00701398  2B C8                     SUB ECX,EAX
0070139A  85 C9                     TEST ECX,ECX
0070139C  7E 07                     JLE 0x007013a5
0070139E  33 C0                     XOR EAX,EAX
007013A0  8A 06                     MOV AL,byte ptr [ESI]
007013A2  46                        INC ESI
007013A3  EB D6                     JMP 0x0070137b
LAB_007013a5:
007013A5  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
LAB_007013a8:
007013A8  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
007013AF  EB 03                     JMP 0x007013b4
LAB_007013b1:
007013B1  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
LAB_007013b4:
007013B4  33 C0                     XOR EAX,EAX
007013B6  8A 07                     MOV AL,byte ptr [EDI]
007013B8  47                        INC EDI
007013B9  85 C0                     TEST EAX,EAX
007013BB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007013BE  0F 84 C8 06 00 00         JZ 0x00701a8c
007013C4  8B C8                     MOV ECX,EAX
007013C6  81 E1 C0 00 00 00         AND ECX,0xc0
007013CC  81 F9 C0 00 00 00         CMP ECX,0xc0
007013D2  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
007013D5  75 12                     JNZ 0x007013e9
007013D7  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007013DA  33 C9                     XOR ECX,ECX
007013DC  8A 0F                     MOV CL,byte ptr [EDI]
007013DE  8B D1                     MOV EDX,ECX
007013E0  33 C9                     XOR ECX,ECX
007013E2  47                        INC EDI
007013E3  8A 0C 1A                  MOV CL,byte ptr [EDX + EBX*0x1]
007013E6  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_007013e9:
007013E9  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
007013EC  33 C9                     XOR ECX,ECX
007013EE  8A 0E                     MOV CL,byte ptr [ESI]
007013F0  46                        INC ESI
007013F1  F6 C1 80                  TEST CL,0x80
007013F4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007013F7  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
007013FA  8B D1                     MOV EDX,ECX
007013FC  74 15                     JZ 0x00701413
007013FE  83 E2 3F                  AND EDX,0x3f
00701401  F6 C1 40                  TEST CL,0x40
00701404  74 06                     JZ 0x0070140c
00701406  46                        INC ESI
00701407  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
0070140A  EB 0A                     JMP 0x00701416
LAB_0070140c:
0070140C  03 F2                     ADD ESI,EDX
0070140E  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
00701411  EB 03                     JMP 0x00701416
LAB_00701413:
00701413  83 E2 7F                  AND EDX,0x7f
LAB_00701416:
00701416  3B 55 40                  CMP EDX,dword ptr [EBP + 0x40]
00701419  7F 2A                     JG 0x00701445
LAB_0070141b:
0070141B  33 C9                     XOR ECX,ECX
0070141D  2B DA                     SUB EBX,EDX
0070141F  8A 0E                     MOV CL,byte ptr [ESI]
00701421  46                        INC ESI
00701422  F6 C1 80                  TEST CL,0x80
00701425  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00701428  8B D1                     MOV EDX,ECX
0070142A  74 0F                     JZ 0x0070143b
0070142C  83 E2 3F                  AND EDX,0x3f
0070142F  F6 C1 40                  TEST CL,0x40
00701432  74 03                     JZ 0x00701437
00701434  46                        INC ESI
00701435  EB 07                     JMP 0x0070143e
LAB_00701437:
00701437  03 F2                     ADD ESI,EDX
00701439  EB 03                     JMP 0x0070143e
LAB_0070143b:
0070143B  83 E2 7F                  AND EDX,0x7f
LAB_0070143e:
0070143E  3B D3                     CMP EDX,EBX
00701440  7E D9                     JLE 0x0070141b
00701442  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
LAB_00701445:
00701445  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00701448  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070144B  2B D3                     SUB EDX,EBX
0070144D  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00701450  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00701453  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
00701456  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00701459  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_0070145c:
0070145C  A8 80                     TEST AL,0x80
0070145E  74 17                     JZ 0x00701477
00701460  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00701463  83 E0 3F                  AND EAX,0x3f
00701466  3B C3                     CMP EAX,EBX
00701468  7F 52                     JG 0x007014bc
0070146A  81 7D 1C 80 00 00 00      CMP dword ptr [EBP + 0x1c],0x80
00701471  75 0E                     JNZ 0x00701481
00701473  03 F8                     ADD EDI,EAX
00701475  EB 0A                     JMP 0x00701481
LAB_00701477:
00701477  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070147A  83 E0 7F                  AND EAX,0x7f
0070147D  3B C3                     CMP EAX,EBX
0070147F  7F 3B                     JG 0x007014bc
LAB_00701481:
00701481  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00701484  2B D8                     SUB EBX,EAX
00701486  33 C0                     XOR EAX,EAX
00701488  8A 07                     MOV AL,byte ptr [EDI]
0070148A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070148D  8B D8                     MOV EBX,EAX
0070148F  47                        INC EDI
00701490  81 E3 C0 00 00 00         AND EBX,0xc0
00701496  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00701499  81 FB C0 00 00 00         CMP EBX,0xc0
0070149F  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007014A2  75 B8                     JNZ 0x0070145c
007014A4  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007014A7  33 D2                     XOR EDX,EDX
007014A9  8A 17                     MOV DL,byte ptr [EDI]
007014AB  33 C0                     XOR EAX,EAX
007014AD  47                        INC EDI
007014AE  8A 04 1A                  MOV AL,byte ptr [EDX + EBX*0x1]
007014B1  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007014B4  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007014B7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007014BA  EB A0                     JMP 0x0070145c
LAB_007014bc:
007014BC  2B C3                     SUB EAX,EBX
007014BE  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
007014C1  81 E3 C0 00 00 00         AND EBX,0xc0
007014C7  80 FB 80                  CMP BL,0x80
007014CA  75 03                     JNZ 0x007014cf
007014CC  03 7D FC                  ADD EDI,dword ptr [EBP + -0x4]
LAB_007014cf:
007014CF  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
007014D2  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
007014D9  85 DB                     TEST EBX,EBX
007014DB  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
007014DE  0F 8E 16 05 00 00         JLE 0x007019fa
LAB_007014e4:
007014E4  3B D3                     CMP EDX,EBX
007014E6  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007014E9  7D 7A                     JGE 0x00701565
007014EB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007014EE  81 E2 80 00 00 00         AND EDX,0x80
007014F4  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_007014f7:
007014F7  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007014FA  33 D2                     XOR EDX,EDX
007014FC  8A 13                     MOV DL,byte ptr [EBX]
007014FE  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00701501  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00701504  81 E2 80 00 00 00         AND EDX,0x80
0070150A  33 D3                     XOR EDX,EBX
0070150C  75 57                     JNZ 0x00701565
0070150E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00701511  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00701514  2B DA                     SUB EBX,EDX
00701516  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
00701519  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0070151C  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0070151F  42                        INC EDX
00701520  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00701523  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
00701526  8B D3                     MOV EDX,EBX
00701528  81 E2 80 00 00 00         AND EDX,0x80
0070152E  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
00701531  8B D3                     MOV EDX,EBX
00701533  74 1B                     JZ 0x00701550
00701535  83 E2 3F                  AND EDX,0x3f
00701538  F6 C3 40                  TEST BL,0x40
0070153B  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
0070153E  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00701541  74 06                     JZ 0x00701549
00701543  43                        INC EBX
00701544  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
00701547  EB 0D                     JMP 0x00701556
LAB_00701549:
00701549  03 DA                     ADD EBX,EDX
0070154B  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
0070154E  EB 06                     JMP 0x00701556
LAB_00701550:
00701550  83 E2 7F                  AND EDX,0x7f
00701553  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_00701556:
00701556  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00701559  03 DA                     ADD EBX,EDX
0070155B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070155E  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00701561  3B D3                     CMP EDX,EBX
00701563  7C 92                     JL 0x007014f7
LAB_00701565:
00701565  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00701568  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0070156B  03 DA                     ADD EBX,EDX
0070156D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00701570  3B DA                     CMP EBX,EDX
00701572  7E 05                     JLE 0x00701579
00701574  2B 55 E0                  SUB EDX,dword ptr [EBP + -0x20]
00701577  EB 03                     JMP 0x0070157c
LAB_00701579:
00701579  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0070157c:
0070157C  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0070157F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00701582  03 DA                     ADD EBX,EDX
00701584  3B C2                     CMP EAX,EDX
00701586  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00701589  0F 8F 14 02 00 00         JG 0x007017a3
0070158F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00701592  81 E2 80 00 00 00         AND EDX,0x80
00701598  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0070159B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0070159e:
0070159E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007015A1  2B D8                     SUB EBX,EAX
007015A3  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007015A6  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
007015A9  85 DB                     TEST EBX,EBX
007015AB  0F 84 81 01 00 00         JZ 0x00701732
007015B1  F6 45 F0 40               TEST byte ptr [EBP + -0x10],0x40
007015B5  0F 84 BA 00 00 00         JZ 0x00701675
007015BB  85 C9                     TEST ECX,ECX
007015BD  7E 45                     JLE 0x00701604
007015BF  83 F9 01                  CMP ECX,0x1
007015C2  75 06                     JNZ 0x007015ca
007015C4  B9 02 00 00 00            MOV ECX,0x2
007015C9  48                        DEC EAX
LAB_007015ca:
007015CA  85 C0                     TEST EAX,EAX
007015CC  0F 8E 7B 01 00 00         JLE 0x0070174d
007015D2  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
007015D6  74 1D                     JZ 0x007015f5
007015D8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007015DB  33 C9                     XOR ECX,ECX
007015DD  66 8B 0A                  MOV CX,word ptr [EDX]
007015E0  3B D9                     CMP EBX,ECX
007015E2  77 14                     JA 0x007015f8
007015E4  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
007015E7  83 C2 02                  ADD EDX,0x2
007015EA  88 0E                     MOV byte ptr [ESI],CL
007015EC  46                        INC ESI
007015ED  33 C9                     XOR ECX,ECX
007015EF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007015F2  48                        DEC EAX
007015F3  EB 12                     JMP 0x00701607
LAB_007015f5:
007015F5  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_007015f8:
007015F8  83 C2 02                  ADD EDX,0x2
007015FB  46                        INC ESI
007015FC  33 C9                     XOR ECX,ECX
007015FE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00701601  48                        DEC EAX
00701602  EB 03                     JMP 0x00701607
LAB_00701604:
00701604  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_00701607:
00701607  85 C0                     TEST EAX,EAX
00701609  0F 8E 3E 01 00 00         JLE 0x0070174d
0070160F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00701612  81 E1 80 00 00 00         AND ECX,0x80
00701618  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_0070161b:
0070161B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070161E  85 C9                     TEST ECX,ECX
00701620  74 0E                     JZ 0x00701630
00701622  33 C9                     XOR ECX,ECX
00701624  66 8B 0A                  MOV CX,word ptr [EDX]
00701627  3B D9                     CMP EBX,ECX
00701629  77 05                     JA 0x00701630
0070162B  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
0070162E  88 0E                     MOV byte ptr [ESI],CL
LAB_00701630:
00701630  83 C2 02                  ADD EDX,0x2
00701633  46                        INC ESI
00701634  48                        DEC EAX
00701635  B9 01 00 00 00            MOV ECX,0x1
0070163A  85 C0                     TEST EAX,EAX
0070163C  0F 8E 08 01 00 00         JLE 0x0070174a
00701642  48                        DEC EAX
00701643  B9 02 00 00 00            MOV ECX,0x2
00701648  85 C0                     TEST EAX,EAX
0070164A  0F 8E FA 00 00 00         JLE 0x0070174a
00701650  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00701653  85 C9                     TEST ECX,ECX
00701655  74 0E                     JZ 0x00701665
00701657  33 C9                     XOR ECX,ECX
00701659  66 8B 0A                  MOV CX,word ptr [EDX]
0070165C  3B D9                     CMP EBX,ECX
0070165E  77 05                     JA 0x00701665
00701660  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
00701663  88 0E                     MOV byte ptr [ESI],CL
LAB_00701665:
00701665  83 C2 02                  ADD EDX,0x2
00701668  46                        INC ESI
00701669  33 C9                     XOR ECX,ECX
0070166B  48                        DEC EAX
0070166C  85 C0                     TEST EAX,EAX
0070166E  7F AB                     JG 0x0070161b
00701670  E9 D5 00 00 00            JMP 0x0070174a
LAB_00701675:
00701675  85 C9                     TEST ECX,ECX
00701677  7E 3D                     JLE 0x007016b6
00701679  83 F9 01                  CMP ECX,0x1
0070167C  75 07                     JNZ 0x00701685
0070167E  47                        INC EDI
0070167F  B9 02 00 00 00            MOV ECX,0x2
00701684  48                        DEC EAX
LAB_00701685:
00701685  85 C0                     TEST EAX,EAX
00701687  0F 8E C0 00 00 00         JLE 0x0070174d
0070168D  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
00701691  74 18                     JZ 0x007016ab
00701693  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701696  33 C9                     XOR ECX,ECX
00701698  66 8B 0A                  MOV CX,word ptr [EDX]
0070169B  3B D9                     CMP EBX,ECX
0070169D  77 0C                     JA 0x007016ab
0070169F  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007016A2  33 C9                     XOR ECX,ECX
007016A4  8A 0F                     MOV CL,byte ptr [EDI]
007016A6  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007016A9  88 0E                     MOV byte ptr [ESI],CL
LAB_007016ab:
007016AB  83 C2 02                  ADD EDX,0x2
007016AE  46                        INC ESI
007016AF  47                        INC EDI
007016B0  33 C9                     XOR ECX,ECX
007016B2  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007016B5  48                        DEC EAX
LAB_007016b6:
007016B6  85 C0                     TEST EAX,EAX
007016B8  0F 8E 8F 00 00 00         JLE 0x0070174d
007016BE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007016C1  81 E1 80 00 00 00         AND ECX,0x80
007016C7  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
007016CA  EB 03                     JMP 0x007016cf
LAB_007016cc:
007016CC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_007016cf:
007016CF  85 C9                     TEST ECX,ECX
007016D1  74 18                     JZ 0x007016eb
007016D3  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007016D6  33 C9                     XOR ECX,ECX
007016D8  66 8B 0A                  MOV CX,word ptr [EDX]
007016DB  3B D9                     CMP EBX,ECX
007016DD  77 0C                     JA 0x007016eb
007016DF  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007016E2  33 C9                     XOR ECX,ECX
007016E4  8A 0F                     MOV CL,byte ptr [EDI]
007016E6  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007016E9  88 0E                     MOV byte ptr [ESI],CL
LAB_007016eb:
007016EB  83 C2 02                  ADD EDX,0x2
007016EE  46                        INC ESI
007016EF  47                        INC EDI
007016F0  48                        DEC EAX
007016F1  85 C0                     TEST EAX,EAX
007016F3  B9 01 00 00 00            MOV ECX,0x1
007016F8  7E 50                     JLE 0x0070174a
007016FA  47                        INC EDI
007016FB  48                        DEC EAX
007016FC  85 C0                     TEST EAX,EAX
007016FE  B9 02 00 00 00            MOV ECX,0x2
00701703  7E 45                     JLE 0x0070174a
00701705  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00701708  85 C9                     TEST ECX,ECX
0070170A  74 18                     JZ 0x00701724
0070170C  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070170F  33 C9                     XOR ECX,ECX
00701711  66 8B 0A                  MOV CX,word ptr [EDX]
00701714  3B D9                     CMP EBX,ECX
00701716  77 0C                     JA 0x00701724
00701718  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
0070171B  33 C9                     XOR ECX,ECX
0070171D  8A 0F                     MOV CL,byte ptr [EDI]
0070171F  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00701722  88 0E                     MOV byte ptr [ESI],CL
LAB_00701724:
00701724  83 C2 02                  ADD EDX,0x2
00701727  46                        INC ESI
00701728  47                        INC EDI
00701729  33 C9                     XOR ECX,ECX
0070172B  48                        DEC EAX
0070172C  85 C0                     TEST EAX,EAX
0070172E  7F 9C                     JG 0x007016cc
00701730  EB 18                     JMP 0x0070174a
LAB_00701732:
00701732  48                        DEC EAX
00701733  78 18                     JS 0x0070174d
00701735  40                        INC EAX
LAB_00701736:
00701736  83 F9 01                  CMP ECX,0x1
00701739  74 04                     JZ 0x0070173f
0070173B  46                        INC ESI
0070173C  83 C2 02                  ADD EDX,0x2
LAB_0070173f:
0070173F  41                        INC ECX
00701740  83 F9 02                  CMP ECX,0x2
00701743  7E 02                     JLE 0x00701747
00701745  33 C9                     XOR ECX,ECX
LAB_00701747:
00701747  48                        DEC EAX
00701748  75 EC                     JNZ 0x00701736
LAB_0070174a:
0070174A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0070174d:
0070174D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00701750  85 C0                     TEST EAX,EAX
00701752  7E 4B                     JLE 0x0070179f
00701754  33 DB                     XOR EBX,EBX
00701756  8A 1F                     MOV BL,byte ptr [EDI]
00701758  8B C3                     MOV EAX,EBX
0070175A  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0070175D  25 80 00 00 00            AND EAX,0x80
00701762  47                        INC EDI
00701763  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00701766  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00701769  85 C0                     TEST EAX,EAX
0070176B  8B C3                     MOV EAX,EBX
0070176D  74 22                     JZ 0x00701791
0070176F  83 E0 3F                  AND EAX,0x3f
00701772  F6 C3 40                  TEST BL,0x40
00701775  74 1D                     JZ 0x00701794
00701777  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
0070177A  33 D2                     XOR EDX,EDX
0070177C  8A 17                     MOV DL,byte ptr [EDI]
0070177E  8B FA                     MOV EDI,EDX
00701780  33 D2                     XOR EDX,EDX
00701782  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
00701785  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00701788  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0070178B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0070178E  47                        INC EDI
0070178F  EB 03                     JMP 0x00701794
LAB_00701791:
00701791  83 E0 7F                  AND EAX,0x7f
LAB_00701794:
00701794  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
00701797  0F 8E 01 FE FF FF         JLE 0x0070159e
0070179D  EB 07                     JMP 0x007017a6
LAB_0070179f:
0070179F  33 C0                     XOR EAX,EAX
007017A1  EB 03                     JMP 0x007017a6
LAB_007017a3:
007017A3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_007017a6:
007017A6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007017A9  2B C3                     SUB EAX,EBX
007017AB  85 DB                     TEST EBX,EBX
007017AD  0F 8E D6 01 00 00         JLE 0x00701989
007017B3  8A 5D F0                  MOV BL,byte ptr [EBP + -0x10]
007017B6  F6 C3 80                  TEST BL,0x80
007017B9  0F 84 AC 01 00 00         JZ 0x0070196b
007017BF  F6 C3 40                  TEST BL,0x40
007017C2  0F 84 C8 00 00 00         JZ 0x00701890
007017C8  85 C9                     TEST ECX,ECX
007017CA  7E 3F                     JLE 0x0070180b
007017CC  83 F9 01                  CMP ECX,0x1
007017CF  75 03                     JNZ 0x007017d4
007017D1  FF 4D FC                  DEC dword ptr [EBP + -0x4]
LAB_007017d4:
007017D4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007017D7  B9 02 00 00 00            MOV ECX,0x2
007017DC  85 DB                     TEST EBX,EBX
007017DE  0F 8E A5 01 00 00         JLE 0x00701989
007017E4  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
007017E8  74 11                     JZ 0x007017fb
007017EA  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007017ED  33 C9                     XOR ECX,ECX
007017EF  66 8B 0A                  MOV CX,word ptr [EDX]
007017F2  3B D9                     CMP EBX,ECX
007017F4  77 05                     JA 0x007017fb
007017F6  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
007017F9  88 0E                     MOV byte ptr [ESI],CL
LAB_007017fb:
007017FB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007017FE  83 C2 02                  ADD EDX,0x2
00701801  46                        INC ESI
00701802  33 C9                     XOR ECX,ECX
00701804  4B                        DEC EBX
00701805  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00701808  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_0070180b:
0070180B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070180E  85 DB                     TEST EBX,EBX
00701810  0F 8E 73 01 00 00         JLE 0x00701989
00701816  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00701819  81 E1 80 00 00 00         AND ECX,0x80
0070181F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00701822  EB 03                     JMP 0x00701827
LAB_00701824:
00701824  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_00701827:
00701827  85 C9                     TEST ECX,ECX
00701829  74 11                     JZ 0x0070183c
0070182B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070182E  33 C9                     XOR ECX,ECX
00701830  66 8B 0A                  MOV CX,word ptr [EDX]
00701833  3B D9                     CMP EBX,ECX
00701835  77 05                     JA 0x0070183c
00701837  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
0070183A  88 0E                     MOV byte ptr [ESI],CL
LAB_0070183c:
0070183C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070183F  83 C2 02                  ADD EDX,0x2
00701842  46                        INC ESI
00701843  4B                        DEC EBX
00701844  85 DB                     TEST EBX,EBX
00701846  B9 01 00 00 00            MOV ECX,0x1
0070184B  0F 8E 35 01 00 00         JLE 0x00701986
00701851  4B                        DEC EBX
00701852  B9 02 00 00 00            MOV ECX,0x2
00701857  85 DB                     TEST EBX,EBX
00701859  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070185C  0F 8E 24 01 00 00         JLE 0x00701986
00701862  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00701865  85 C9                     TEST ECX,ECX
00701867  74 11                     JZ 0x0070187a
00701869  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070186C  33 C9                     XOR ECX,ECX
0070186E  66 8B 0A                  MOV CX,word ptr [EDX]
00701871  3B D9                     CMP EBX,ECX
00701873  77 05                     JA 0x0070187a
00701875  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
00701878  88 0E                     MOV byte ptr [ESI],CL
LAB_0070187a:
0070187A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070187D  83 C2 02                  ADD EDX,0x2
00701880  46                        INC ESI
00701881  33 C9                     XOR ECX,ECX
00701883  4B                        DEC EBX
00701884  85 DB                     TEST EBX,EBX
00701886  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00701889  7F 99                     JG 0x00701824
0070188B  E9 F6 00 00 00            JMP 0x00701986
LAB_00701890:
00701890  85 C9                     TEST ECX,ECX
00701892  7E 4C                     JLE 0x007018e0
00701894  83 F9 01                  CMP ECX,0x1
00701897  75 0D                     JNZ 0x007018a6
00701899  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070189C  47                        INC EDI
0070189D  4B                        DEC EBX
0070189E  B9 02 00 00 00            MOV ECX,0x2
007018A3  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_007018a6:
007018A6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007018A9  85 DB                     TEST EBX,EBX
007018AB  0F 8E D8 00 00 00         JLE 0x00701989
007018B1  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
007018B5  74 18                     JZ 0x007018cf
007018B7  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007018BA  33 C9                     XOR ECX,ECX
007018BC  66 8B 0A                  MOV CX,word ptr [EDX]
007018BF  3B D9                     CMP EBX,ECX
007018C1  77 0C                     JA 0x007018cf
007018C3  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007018C6  33 C9                     XOR ECX,ECX
007018C8  8A 0F                     MOV CL,byte ptr [EDI]
007018CA  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007018CD  88 0E                     MOV byte ptr [ESI],CL
LAB_007018cf:
007018CF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007018D2  83 C2 02                  ADD EDX,0x2
007018D5  46                        INC ESI
007018D6  47                        INC EDI
007018D7  33 C9                     XOR ECX,ECX
007018D9  4B                        DEC EBX
007018DA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007018DD  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_007018e0:
007018E0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007018E3  85 DB                     TEST EBX,EBX
007018E5  0F 8E 9E 00 00 00         JLE 0x00701989
007018EB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007018EE  81 E1 80 00 00 00         AND ECX,0x80
007018F4  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
007018F7  EB 03                     JMP 0x007018fc
LAB_007018f9:
007018F9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_007018fc:
007018FC  85 C9                     TEST ECX,ECX
007018FE  74 18                     JZ 0x00701918
00701900  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701903  33 C9                     XOR ECX,ECX
00701905  66 8B 0A                  MOV CX,word ptr [EDX]
00701908  3B D9                     CMP EBX,ECX
0070190A  77 0C                     JA 0x00701918
0070190C  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
0070190F  33 C9                     XOR ECX,ECX
00701911  8A 0F                     MOV CL,byte ptr [EDI]
00701913  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00701916  88 0E                     MOV byte ptr [ESI],CL
LAB_00701918:
00701918  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070191B  83 C2 02                  ADD EDX,0x2
0070191E  46                        INC ESI
0070191F  47                        INC EDI
00701920  4B                        DEC EBX
00701921  B9 01 00 00 00            MOV ECX,0x1
00701926  85 DB                     TEST EBX,EBX
00701928  7E 5C                     JLE 0x00701986
0070192A  47                        INC EDI
0070192B  4B                        DEC EBX
0070192C  85 DB                     TEST EBX,EBX
0070192E  B9 02 00 00 00            MOV ECX,0x2
00701933  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00701936  7E 4E                     JLE 0x00701986
00701938  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070193B  85 C9                     TEST ECX,ECX
0070193D  74 18                     JZ 0x00701957
0070193F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00701942  33 C9                     XOR ECX,ECX
00701944  66 8B 0A                  MOV CX,word ptr [EDX]
00701947  3B D9                     CMP EBX,ECX
00701949  77 0C                     JA 0x00701957
0070194B  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
0070194E  33 C9                     XOR ECX,ECX
00701950  8A 0F                     MOV CL,byte ptr [EDI]
00701952  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00701955  88 0E                     MOV byte ptr [ESI],CL
LAB_00701957:
00701957  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070195A  83 C2 02                  ADD EDX,0x2
0070195D  46                        INC ESI
0070195E  47                        INC EDI
0070195F  33 C9                     XOR ECX,ECX
00701961  4B                        DEC EBX
00701962  85 DB                     TEST EBX,EBX
00701964  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00701967  7F 90                     JG 0x007018f9
00701969  EB 1B                     JMP 0x00701986
LAB_0070196b:
0070196B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070196E  4B                        DEC EBX
0070196F  78 18                     JS 0x00701989
00701971  43                        INC EBX
LAB_00701972:
00701972  83 F9 01                  CMP ECX,0x1
00701975  74 04                     JZ 0x0070197b
00701977  46                        INC ESI
00701978  83 C2 02                  ADD EDX,0x2
LAB_0070197b:
0070197B  41                        INC ECX
0070197C  83 F9 02                  CMP ECX,0x2
0070197F  7E 02                     JLE 0x00701983
00701981  33 C9                     XOR ECX,ECX
LAB_00701983:
00701983  4B                        DEC EBX
00701984  75 EC                     JNZ 0x00701972
LAB_00701986:
00701986  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00701989:
00701989  85 C0                     TEST EAX,EAX
0070198B  7F 41                     JG 0x007019ce
0070198D  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00701990  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00701993  3B D3                     CMP EDX,EBX
00701995  7D 37                     JGE 0x007019ce
00701997  33 D2                     XOR EDX,EDX
00701999  8A 17                     MOV DL,byte ptr [EDI]
0070199B  8B C2                     MOV EAX,EDX
0070199D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
007019A0  24 80                     AND AL,0x80
007019A2  47                        INC EDI
007019A3  84 C0                     TEST AL,AL
007019A5  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
007019A8  8B C2                     MOV EAX,EDX
007019AA  74 1F                     JZ 0x007019cb
007019AC  83 E0 3F                  AND EAX,0x3f
007019AF  F6 C2 40                  TEST DL,0x40
007019B2  74 1A                     JZ 0x007019ce
007019B4  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007019B7  33 D2                     XOR EDX,EDX
007019B9  8A 17                     MOV DL,byte ptr [EDI]
007019BB  8B FA                     MOV EDI,EDX
007019BD  33 D2                     XOR EDX,EDX
007019BF  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
007019C2  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
007019C5  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
007019C8  47                        INC EDI
007019C9  EB 03                     JMP 0x007019ce
LAB_007019cb:
007019CB  83 E0 7F                  AND EAX,0x7f
LAB_007019ce:
007019CE  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007019D1  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
007019D4  3B D3                     CMP EDX,EBX
007019D6  7D 20                     JGE 0x007019f8
007019D8  2B DA                     SUB EBX,EDX
007019DA  33 D2                     XOR EDX,EDX
007019DC  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
007019DF  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007019E2  8A 13                     MOV DL,byte ptr [EBX]
007019E4  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
007019E7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
007019EA  33 D2                     XOR EDX,EDX
007019EC  85 DB                     TEST EBX,EBX
007019EE  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
007019F1  7E 07                     JLE 0x007019fa
007019F3  E9 EC FA FF FF            JMP 0x007014e4
LAB_007019f8:
007019F8  2B D3                     SUB EDX,EBX
LAB_007019fa:
007019FA  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
007019FD  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
00701A00  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00701A03  2B F1                     SUB ESI,ECX
00701A05  2B 75 40                  SUB ESI,dword ptr [EBP + 0x40]
00701A08  3B D6                     CMP EDX,ESI
00701A0A  7D 35                     JGE 0x00701a41
LAB_00701a0c:
00701A0C  2B F2                     SUB ESI,EDX
00701A0E  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
00701A11  33 C9                     XOR ECX,ECX
00701A13  8A 0A                     MOV CL,byte ptr [EDX]
00701A15  42                        INC EDX
00701A16  F6 C1 80                  TEST CL,0x80
00701A19  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
00701A1C  74 1A                     JZ 0x00701a38
00701A1E  8B D1                     MOV EDX,ECX
00701A20  83 E2 3F                  AND EDX,0x3f
00701A23  F6 C1 40                  TEST CL,0x40
00701A26  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00701A29  74 06                     JZ 0x00701a31
00701A2B  41                        INC ECX
00701A2C  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
00701A2F  EB 0C                     JMP 0x00701a3d
LAB_00701a31:
00701A31  03 CA                     ADD ECX,EDX
00701A33  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
00701A36  EB 05                     JMP 0x00701a3d
LAB_00701a38:
00701A38  83 E1 7F                  AND ECX,0x7f
00701A3B  8B D1                     MOV EDX,ECX
LAB_00701a3d:
00701A3D  3B D6                     CMP EDX,ESI
00701A3F  7C CB                     JL 0x00701a0c
LAB_00701a41:
00701A41  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00701A44  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00701A47  8B CA                     MOV ECX,EDX
00701A49  2B CE                     SUB ECX,ESI
00701A4B  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
00701A4E  2B CE                     SUB ECX,ESI
00701A50  3B C1                     CMP EAX,ECX
00701A52  7D 2B                     JGE 0x00701a7f
LAB_00701a54:
00701A54  81 E3 C0 00 00 00         AND EBX,0xc0
00701A5A  2B C8                     SUB ECX,EAX
00701A5C  80 FB 80                  CMP BL,0x80
00701A5F  75 02                     JNZ 0x00701a63
00701A61  03 F8                     ADD EDI,EAX
LAB_00701a63:
00701A63  33 DB                     XOR EBX,EBX
00701A65  8A 1F                     MOV BL,byte ptr [EDI]
00701A67  8B C3                     MOV EAX,EBX
00701A69  24 80                     AND AL,0x80
00701A6B  47                        INC EDI
00701A6C  84 C0                     TEST AL,AL
00701A6E  8B C3                     MOV EAX,EBX
00701A70  74 09                     JZ 0x00701a7b
00701A72  83 E0 3F                  AND EAX,0x3f
00701A75  F6 C3 40                  TEST BL,0x40
00701A78  74 01                     JZ 0x00701a7b
00701A7A  47                        INC EDI
LAB_00701a7b:
00701A7B  3B C1                     CMP EAX,ECX
00701A7D  7C D5                     JL 0x00701a54
LAB_00701a7f:
00701A7F  81 E3 C0 00 00 00         AND EBX,0xc0
00701A85  80 FB 80                  CMP BL,0x80
00701A88  75 02                     JNZ 0x00701a8c
00701A8A  03 F9                     ADD EDI,ECX
LAB_00701a8c:
00701A8C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00701A8F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00701A92  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00701A95  03 C1                     ADD EAX,ECX
00701A97  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00701A9A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00701A9D  03 D8                     ADD EBX,EAX
00701A9F  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00701AA2  40                        INC EAX
00701AA3  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00701AA6  83 F8 02                  CMP EAX,0x2
00701AA9  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00701AAC  7E 07                     JLE 0x00701ab5
00701AAE  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_00701ab5:
00701AB5  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00701AB8  48                        DEC EAX
00701AB9  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00701ABC  0F 89 5B F8 FF FF         JNS 0x0070131d
LAB_00701ac2:
00701AC2  5F                        POP EDI
00701AC3  5E                        POP ESI
00701AC4  5B                        POP EBX
00701AC5  8B E5                     MOV ESP,EBP
00701AC7  5D                        POP EBP
00701AC8  C2 40 00                  RET 0x40
