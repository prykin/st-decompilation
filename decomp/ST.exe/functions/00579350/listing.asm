FUN_00579350:
00579350  53                        PUSH EBX
00579351  56                        PUSH ESI
00579352  8B F1                     MOV ESI,ECX
00579354  57                        PUSH EDI
00579355  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
00579359  66 85 C0                  TEST AX,AX
0057935C  0F BF C8                  MOVSX ECX,AX
0057935F  B8 79 19 8C 02            MOV EAX,0x28c1979
00579364  7C 10                     JL 0x00579376
00579366  F7 E9                     IMUL ECX
00579368  D1 FA                     SAR EDX,0x1
0057936A  8B C2                     MOV EAX,EDX
0057936C  C1 E8 1F                  SHR EAX,0x1f
0057936F  03 D0                     ADD EDX,EAX
00579371  0F BF C2                  MOVSX EAX,DX
00579374  EB 0F                     JMP 0x00579385
LAB_00579376:
00579376  F7 E9                     IMUL ECX
00579378  D1 FA                     SAR EDX,0x1
0057937A  8B CA                     MOV ECX,EDX
0057937C  C1 E9 1F                  SHR ECX,0x1f
0057937F  03 D1                     ADD EDX,ECX
00579381  0F BF C2                  MOVSX EAX,DX
00579384  48                        DEC EAX
LAB_00579385:
00579385  66 89 46 47               MOV word ptr [ESI + 0x47],AX
00579389  66 89 46 5B               MOV word ptr [ESI + 0x5b],AX
0057938D  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00579391  66 85 C0                  TEST AX,AX
00579394  0F BF C8                  MOVSX ECX,AX
00579397  B8 79 19 8C 02            MOV EAX,0x28c1979
0057939C  7C 10                     JL 0x005793ae
0057939E  F7 E9                     IMUL ECX
005793A0  D1 FA                     SAR EDX,0x1
005793A2  8B C2                     MOV EAX,EDX
005793A4  C1 E8 1F                  SHR EAX,0x1f
005793A7  03 D0                     ADD EDX,EAX
005793A9  0F BF C2                  MOVSX EAX,DX
005793AC  EB 0F                     JMP 0x005793bd
LAB_005793ae:
005793AE  F7 E9                     IMUL ECX
005793B0  D1 FA                     SAR EDX,0x1
005793B2  8B CA                     MOV ECX,EDX
005793B4  C1 E9 1F                  SHR ECX,0x1f
005793B7  03 D1                     ADD EDX,ECX
005793B9  0F BF C2                  MOVSX EAX,DX
005793BC  48                        DEC EAX
LAB_005793bd:
005793BD  66 89 46 49               MOV word ptr [ESI + 0x49],AX
005793C1  66 89 46 5D               MOV word ptr [ESI + 0x5d],AX
005793C5  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
005793C9  66 85 C0                  TEST AX,AX
005793CC  0F BF C8                  MOVSX ECX,AX
005793CF  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005793D4  7C 11                     JL 0x005793e7
005793D6  F7 E9                     IMUL ECX
005793D8  C1 FA 06                  SAR EDX,0x6
005793DB  8B C2                     MOV EAX,EDX
005793DD  C1 E8 1F                  SHR EAX,0x1f
005793E0  03 D0                     ADD EDX,EAX
005793E2  0F BF C2                  MOVSX EAX,DX
005793E5  EB 10                     JMP 0x005793f7
LAB_005793e7:
005793E7  F7 E9                     IMUL ECX
005793E9  C1 FA 06                  SAR EDX,0x6
005793EC  8B CA                     MOV ECX,EDX
005793EE  C1 E9 1F                  SHR ECX,0x1f
005793F1  03 D1                     ADD EDX,ECX
005793F3  0F BF C2                  MOVSX EAX,DX
005793F6  48                        DEC EAX
LAB_005793f7:
005793F7  8B CE                     MOV ECX,ESI
005793F9  66 89 46 4B               MOV word ptr [ESI + 0x4b],AX
005793FD  66 89 46 5F               MOV word ptr [ESI + 0x5f],AX
00579401  E8 36 86 E8 FF            CALL 0x00401a3c
00579406  85 C0                     TEST EAX,EAX
00579408  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
0057940E  74 19                     JZ 0x00579429
00579410  6A 01                     PUSH 0x1
00579412  8B CB                     MOV ECX,EBX
00579414  E8 B3 BE E8 FF            CALL 0x004052cc
00579419  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0057941F  50                        PUSH EAX
00579420  E8 CB 17 17 00            CALL 0x006eabf0
00579425  6A 01                     PUSH 0x1
00579427  EB 26                     JMP 0x0057944f
LAB_00579429:
00579429  6A 00                     PUSH 0x0
0057942B  8B CB                     MOV ECX,EBX
0057942D  E8 9A BE E8 FF            CALL 0x004052cc
00579432  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00579438  50                        PUSH EAX
00579439  E8 B2 17 17 00            CALL 0x006eabf0
0057943E  8B CE                     MOV ECX,ESI
00579440  E8 93 BC E8 FF            CALL 0x004050d8
00579445  83 F8 01                  CMP EAX,0x1
00579448  75 03                     JNZ 0x0057944d
0057944A  50                        PUSH EAX
0057944B  EB 02                     JMP 0x0057944f
LAB_0057944d:
0057944D  6A 00                     PUSH 0x0
LAB_0057944f:
0057944F  8B CB                     MOV ECX,EBX
00579451  E8 76 BE E8 FF            CALL 0x004052cc
00579456  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0057945C  50                        PUSH EAX
0057945D  E8 0E D4 16 00            CALL 0x006e6870
00579462  8B 86 79 02 00 00         MOV EAX,dword ptr [ESI + 0x279]
00579468  3D F6 00 00 00            CMP EAX,0xf6
0057946D  74 3F                     JZ 0x005794ae
0057946F  3D F7 00 00 00            CMP EAX,0xf7
00579474  74 38                     JZ 0x005794ae
00579476  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0057947A  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0057947E  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
00579482  52                        PUSH EDX
00579483  50                        PUSH EAX
00579484  51                        PUSH ECX
00579485  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0057948B  E8 AE B5 E8 FF            CALL 0x00404a3e
00579490  85 C0                     TEST EAX,EAX
00579492  7D 13                     JGE 0x005794a7
00579494  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00579498  66 3D 28 00               CMP AX,0x28
0057949C  7C 43                     JL 0x005794e1
0057949E  83 C0 FE                  ADD EAX,-0x2
005794A1  66 89 46 45               MOV word ptr [ESI + 0x45],AX
005794A5  EB 3A                     JMP 0x005794e1
LAB_005794a7:
005794A7  66 83 46 45 02            ADD word ptr [ESI + 0x45],0x2
005794AC  EB 33                     JMP 0x005794e1
LAB_005794ae:
005794AE  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
005794B2  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
005794B6  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
005794BA  52                        PUSH EDX
005794BB  50                        PUSH EAX
005794BC  51                        PUSH ECX
005794BD  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005794C3  E8 76 B5 E8 FF            CALL 0x00404a3e
005794C8  85 C0                     TEST EAX,EAX
005794CA  7D 11                     JGE 0x005794dd
005794CC  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
005794D0  66 3D 82 00               CMP AX,0x82
005794D4  7C 0B                     JL 0x005794e1
005794D6  48                        DEC EAX
005794D7  66 89 46 45               MOV word ptr [ESI + 0x45],AX
005794DB  EB 04                     JMP 0x005794e1
LAB_005794dd:
005794DD  66 FF 46 45               INC word ptr [ESI + 0x45]
LAB_005794e1:
005794E1  83 BE 39 02 00 00 01      CMP dword ptr [ESI + 0x239],0x1
005794E8  0F 85 8F 00 00 00         JNZ 0x0057957d
005794EE  0F BF 4E 4E               MOVSX ECX,word ptr [ESI + 0x4e]
005794F2  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
005794F6  8D 56 4E                  LEA EDX,[ESI + 0x4e]
005794F9  2B C1                     SUB EAX,ECX
005794FB  79 02                     JNS 0x005794ff
005794FD  F7 D8                     NEG EAX
LAB_005794ff:
005794FF  83 F8 07                  CMP EAX,0x7
00579502  7F 1D                     JG 0x00579521
00579504  0F BF 7E 50               MOVSX EDI,word ptr [ESI + 0x50]
00579508  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0057950C  8D 4E 50                  LEA ECX,[ESI + 0x50]
0057950F  2B C7                     SUB EAX,EDI
00579511  79 02                     JNS 0x00579515
00579513  F7 D8                     NEG EAX
LAB_00579515:
00579515  83 F8 07                  CMP EAX,0x7
00579518  7F 07                     JG 0x00579521
0057951A  8D 46 6C                  LEA EAX,[ESI + 0x6c]
0057951D  50                        PUSH EAX
0057951E  51                        PUSH ECX
0057951F  EB 70                     JMP 0x00579591
LAB_00579521:
00579521  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
00579527  8B 96 41 02 00 00         MOV EDX,dword ptr [ESI + 0x241]
0057952D  03 D1                     ADD EDX,ECX
0057952F  8B 8E 49 02 00 00         MOV ECX,dword ptr [ESI + 0x249]
00579535  89 96 41 02 00 00         MOV dword ptr [ESI + 0x241],EDX
0057953B  8B C2                     MOV EAX,EDX
0057953D  8B 96 4D 02 00 00         MOV EDX,dword ptr [ESI + 0x24d]
00579543  03 CA                     ADD ECX,EDX
00579545  99                        CDQ
00579546  81 E2 FF 00 00 00         AND EDX,0xff
0057954C  89 8E 49 02 00 00         MOV dword ptr [ESI + 0x249],ECX
00579552  03 C2                     ADD EAX,EDX
00579554  C1 F8 08                  SAR EAX,0x8
00579557  66 03 86 51 02 00 00      ADD AX,word ptr [ESI + 0x251]
0057955E  66 89 46 41               MOV word ptr [ESI + 0x41],AX
00579562  8B C1                     MOV EAX,ECX
00579564  99                        CDQ
00579565  81 E2 FF 00 00 00         AND EDX,0xff
0057956B  03 C2                     ADD EAX,EDX
0057956D  C1 F8 08                  SAR EAX,0x8
00579570  66 03 86 55 02 00 00      ADD AX,word ptr [ESI + 0x255]
00579577  66 89 46 43               MOV word ptr [ESI + 0x43],AX
0057957B  EB 2C                     JMP 0x005795a9
LAB_0057957d:
0057957D  83 BE 3D 02 00 00 0F      CMP dword ptr [ESI + 0x23d],0xf
00579584  76 23                     JBE 0x005795a9
00579586  8D 46 6C                  LEA EAX,[ESI + 0x6c]
00579589  8D 4E 50                  LEA ECX,[ESI + 0x50]
0057958C  50                        PUSH EAX
0057958D  51                        PUSH ECX
0057958E  8D 56 4E                  LEA EDX,[ESI + 0x4e]
LAB_00579591:
00579591  52                        PUSH EDX
00579592  8B CE                     MOV ECX,ESI
00579594  E8 B2 7A E8 FF            CALL 0x0040104b
00579599  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
0057959F  C7 86 3D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x23d],0x0
LAB_005795a9:
005795A9  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005795AE  8B BE 35 02 00 00         MOV EDI,dword ptr [ESI + 0x235]
005795B4  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005795BA  8B C8                     MOV ECX,EAX
005795BC  2B CF                     SUB ECX,EDI
005795BE  83 F9 02                  CMP ECX,0x2
005795C1  76 46                     JBE 0x00579609
005795C3  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
005795C9  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
005795CD  66 3D 07 00               CMP AX,0x7
005795D1  74 21                     JZ 0x005795f4
005795D3  66 3D 03 00               CMP AX,0x3
005795D7  7C 1B                     JL 0x005795f4
005795D9  8B 86 31 02 00 00         MOV EAX,dword ptr [ESI + 0x231]
005795DF  48                        DEC EAX
005795E0  89 86 31 02 00 00         MOV dword ptr [ESI + 0x231],EAX
005795E6  79 21                     JNS 0x00579609
005795E8  C7 86 31 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x231],0x5
005795F2  EB 15                     JMP 0x00579609
LAB_005795f4:
005795F4  8B 86 31 02 00 00         MOV EAX,dword ptr [ESI + 0x231]
005795FA  B9 06 00 00 00            MOV ECX,0x6
005795FF  40                        INC EAX
00579600  99                        CDQ
00579601  F7 F9                     IDIV ECX
00579603  89 96 31 02 00 00         MOV dword ptr [ESI + 0x231],EDX
LAB_00579609:
00579609  8B 8E 79 02 00 00         MOV ECX,dword ptr [ESI + 0x279]
0057960F  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
00579613  81 F9 F7 00 00 00         CMP ECX,0xf7
00579619  74 08                     JZ 0x00579623
0057961B  81 F9 F6 00 00 00         CMP ECX,0xf6
00579621  75 0F                     JNZ 0x00579632
LAB_00579623:
00579623  83 C0 04                  ADD EAX,0x4
00579626  25 07 00 00 80            AND EAX,0x80000007
0057962B  79 05                     JNS 0x00579632
0057962D  48                        DEC EAX
0057962E  83 C8 F8                  OR EAX,0xfffffff8
00579631  40                        INC EAX
LAB_00579632:
00579632  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00579635  8B 3D FC 73 80 00         MOV EDI,dword ptr [0x008073fc]
0057963B  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0057963E  B8 89 88 88 88            MOV EAX,0x88888889
00579643  F7 E9                     IMUL ECX
00579645  03 D1                     ADD EDX,ECX
00579647  B9 18 00 00 00            MOV ECX,0x18
0057964C  C1 FA 03                  SAR EDX,0x3
0057964F  8B C2                     MOV EAX,EDX
00579651  C1 E8 1F                  SHR EAX,0x1f
00579654  03 D0                     ADD EDX,EAX
00579656  B8 18 00 00 00            MOV EAX,0x18
0057965B  2B C2                     SUB EAX,EDX
0057965D  99                        CDQ
0057965E  F7 F9                     IDIV ECX
00579660  B8 04 00 00 00            MOV EAX,0x4
00579665  2B C7                     SUB EAX,EDI
00579667  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0057966A  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
0057966D  99                        CDQ
0057966E  F7 F9                     IDIV ECX
00579670  B8 56 55 55 55            MOV EAX,0x55555556
00579675  8B CB                     MOV ECX,EBX
00579677  F7 EA                     IMUL EDX
00579679  8B C2                     MOV EAX,EDX
0057967B  C1 E8 1F                  SHR EAX,0x1f
0057967E  03 D0                     ADD EDX,EAX
00579680  8B FA                     MOV EDI,EDX
00579682  57                        PUSH EDI
00579683  6A 0D                     PUSH 0xd
00579685  E8 DA 79 E8 FF            CALL 0x00401064
0057968A  6A 0D                     PUSH 0xd
0057968C  8B CB                     MOV ECX,EBX
0057968E  E8 29 9A E8 FF            CALL 0x004030bc
00579693  8B 96 31 02 00 00         MOV EDX,dword ptr [ESI + 0x231]
00579699  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
0057969C  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
0057969F  8B CB                     MOV ECX,EBX
005796A1  50                        PUSH EAX
005796A2  6A 0E                     PUSH 0xe
005796A4  E8 BB 79 E8 FF            CALL 0x00401064
005796A9  6A 0E                     PUSH 0xe
005796AB  8B CB                     MOV ECX,EBX
005796AD  E8 0A 9A E8 FF            CALL 0x004030bc
005796B2  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
005796B8  8B 16                     MOV EDX,dword ptr [ESI]
005796BA  40                        INC EAX
005796BB  8B CE                     MOV ECX,ESI
005796BD  89 86 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EAX
005796C3  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
005796C9  5F                        POP EDI
005796CA  5E                        POP ESI
005796CB  5B                        POP EBX
005796CC  C3                        RET
