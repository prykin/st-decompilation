STOctopusC::sub_0058B190:
0058B190  55                        PUSH EBP
0058B191  8B EC                     MOV EBP,ESP
0058B193  83 EC 14                  SUB ESP,0x14
0058B196  53                        PUSH EBX
0058B197  56                        PUSH ESI
0058B198  57                        PUSH EDI
0058B199  8B F1                     MOV ESI,ECX
0058B19B  33 FF                     XOR EDI,EDI
0058B19D  33 DB                     XOR EBX,EBX
0058B19F  89 BE 81 02 00 00         MOV dword ptr [ESI + 0x281],EDI
0058B1A5  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0058B1A8  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0058B1AF  48                        DEC EAX
0058B1B0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0058B1B3  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0058B1BA  48                        DEC EAX
0058B1BB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058B1BE  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0058B1C2  66 3B C7                  CMP AX,DI
0058B1C5  0F BF C8                  MOVSX ECX,AX
0058B1C8  B8 79 19 8C 02            MOV EAX,0x28c1979
0058B1CD  7C 13                     JL 0x0058b1e2
0058B1CF  F7 E9                     IMUL ECX
0058B1D1  D1 FA                     SAR EDX,0x1
0058B1D3  8B C2                     MOV EAX,EDX
0058B1D5  C1 E8 1F                  SHR EAX,0x1f
0058B1D8  03 D0                     ADD EDX,EAX
0058B1DA  0F BF CA                  MOVSX ECX,DX
0058B1DD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0058B1E0  EB 12                     JMP 0x0058b1f4
LAB_0058b1e2:
0058B1E2  F7 E9                     IMUL ECX
0058B1E4  D1 FA                     SAR EDX,0x1
0058B1E6  8B C2                     MOV EAX,EDX
0058B1E8  C1 E8 1F                  SHR EAX,0x1f
0058B1EB  03 D0                     ADD EDX,EAX
0058B1ED  0F BF C2                  MOVSX EAX,DX
0058B1F0  48                        DEC EAX
0058B1F1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0058b1f4:
0058B1F4  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
0058B1F8  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0058B1FC  66 89 4E 47               MOV word ptr [ESI + 0x47],CX
0058B200  66 85 C0                  TEST AX,AX
0058B203  0F BF C8                  MOVSX ECX,AX
0058B206  B8 79 19 8C 02            MOV EAX,0x28c1979
0058B20B  7C 10                     JL 0x0058b21d
0058B20D  F7 E9                     IMUL ECX
0058B20F  D1 FA                     SAR EDX,0x1
0058B211  8B C2                     MOV EAX,EDX
0058B213  C1 E8 1F                  SHR EAX,0x1f
0058B216  03 D0                     ADD EDX,EAX
0058B218  0F BF CA                  MOVSX ECX,DX
0058B21B  EB 0F                     JMP 0x0058b22c
LAB_0058b21d:
0058B21D  F7 E9                     IMUL ECX
0058B21F  D1 FA                     SAR EDX,0x1
0058B221  8B CA                     MOV ECX,EDX
0058B223  C1 E9 1F                  SHR ECX,0x1f
0058B226  03 D1                     ADD EDX,ECX
0058B228  0F BF CA                  MOVSX ECX,DX
0058B22B  49                        DEC ECX
LAB_0058b22c:
0058B22C  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0058B230  66 89 4E 49               MOV word ptr [ESI + 0x49],CX
0058B234  66 85 C0                  TEST AX,AX
0058B237  0F BF D0                  MOVSX EDX,AX
0058B23A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058B23F  7C 11                     JL 0x0058b252
0058B241  F7 EA                     IMUL EDX
0058B243  C1 FA 06                  SAR EDX,0x6
0058B246  8B C2                     MOV EAX,EDX
0058B248  C1 E8 1F                  SHR EAX,0x1f
0058B24B  03 D0                     ADD EDX,EAX
0058B24D  0F BF C2                  MOVSX EAX,DX
0058B250  EB 10                     JMP 0x0058b262
LAB_0058b252:
0058B252  F7 EA                     IMUL EDX
0058B254  C1 FA 06                  SAR EDX,0x6
0058B257  8B C2                     MOV EAX,EDX
0058B259  C1 E8 1F                  SHR EAX,0x1f
0058B25C  03 D0                     ADD EDX,EAX
0058B25E  0F BF C2                  MOVSX EAX,DX
0058B261  48                        DEC EAX
LAB_0058b262:
0058B262  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058B265  66 89 46 4B               MOV word ptr [ESI + 0x4b],AX
0058B269  33 C0                     XOR EAX,EAX
0058B26B  66 39 45 F0               CMP word ptr [EBP + -0x10],AX
0058B26F  7D 04                     JGE 0x0058b275
0058B271  66 89 46 47               MOV word ptr [ESI + 0x47],AX
LAB_0058b275:
0058B275  66 3B C8                  CMP CX,AX
0058B278  7D 04                     JGE 0x0058b27e
0058B27A  66 89 46 49               MOV word ptr [ESI + 0x49],AX
LAB_0058b27e:
0058B27E  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0058B282  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058B285  3B C8                     CMP ECX,EAX
0058B287  7E 04                     JLE 0x0058b28d
0058B289  66 89 46 47               MOV word ptr [ESI + 0x47],AX
LAB_0058b28d:
0058B28D  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0058B291  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0058B294  3B D0                     CMP EDX,EAX
0058B296  7E 04                     JLE 0x0058b29c
0058B298  66 89 46 49               MOV word ptr [ESI + 0x49],AX
LAB_0058b29c:
0058B29C  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0058B2A0  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0058B2A3  8D 41 FF                  LEA EAX,[ECX + -0x1]
0058B2A6  85 C0                     TEST EAX,EAX
0058B2A8  7D 07                     JGE 0x0058b2b1
0058B2AA  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_0058b2b1:
0058B2B1  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
0058B2B5  8D 50 FF                  LEA EDX,[EAX + -0x1]
0058B2B8  85 D2                     TEST EDX,EDX
0058B2BA  7D 03                     JGE 0x0058b2bf
0058B2BC  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_0058b2bf:
0058B2BF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058B2C2  41                        INC ECX
0058B2C3  3B CA                     CMP ECX,EDX
0058B2C5  7E 03                     JLE 0x0058b2ca
0058B2C7  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_0058b2ca:
0058B2CA  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0058B2CD  8D 48 01                  LEA ECX,[EAX + 0x1]
0058B2D0  3B CA                     CMP ECX,EDX
0058B2D2  7E 03                     JLE 0x0058b2d7
0058B2D4  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_0058b2d7:
0058B2D7  8B 8E A5 02 00 00         MOV ECX,dword ptr [ESI + 0x2a5]
0058B2DD  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0058B2E3  81 F9 F8 00 00 00         CMP ECX,0xf8
0058B2E9  74 08                     JZ 0x0058b2f3
0058B2EB  81 F9 F9 00 00 00         CMP ECX,0xf9
0058B2F1  75 52                     JNZ 0x0058b345
LAB_0058b2f3:
0058B2F3  66 83 7D EC 04            CMP word ptr [EBP + -0x14],0x4
0058B2F8  7D 4B                     JGE 0x0058b345
0058B2FA  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
0058B300  83 E1 07                  AND ECX,0x7
0058B303  80 F9 01                  CMP CL,0x1
0058B306  75 3D                     JNZ 0x0058b345
0058B308  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058B30B  8B F8                     MOV EDI,EAX
0058B30D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058B313  B9 66 00 00 00            MOV ECX,0x66
0058B318  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0058B31B  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058B321  33 D2                     XOR EDX,EDX
0058B323  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058B326  C7 86 81 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x281],0x1
0058B330  C1 E8 10                  SHR EAX,0x10
0058B333  F7 F1                     DIV ECX
0058B335  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0058B339  8D 4C 02 64               LEA ECX,[EDX + EAX*0x1 + 0x64]
0058B33D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0058B340  E9 67 02 00 00            JMP 0x0058b5ac
LAB_0058b345:
0058B345  F6 82 E4 00 00 00 03      TEST byte ptr [EDX + 0xe4],0x3
0058B34C  75 5D                     JNZ 0x0058b3ab
0058B34E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0058B351  8B F8                     MOV EDI,EAX
0058B353  8B 86 51 02 00 00         MOV EAX,dword ptr [ESI + 0x251]
0058B359  85 C0                     TEST EAX,EAX
0058B35B  8B C8                     MOV ECX,EAX
0058B35D  7D 02                     JGE 0x0058b361
0058B35F  F7 D9                     NEG ECX
LAB_0058b361:
0058B361  83 F9 1E                  CMP ECX,0x1e
0058B364  7C 0E                     JL 0x0058b374
0058B366  33 C9                     XOR ECX,ECX
0058B368  85 C0                     TEST EAX,EAX
0058B36A  0F 9D C1                  SETGE CL
0058B36D  49                        DEC ECX
0058B36E  83 E1 FE                  AND ECX,0xfffffffe
0058B371  41                        INC ECX
0058B372  03 D9                     ADD EBX,ECX
LAB_0058b374:
0058B374  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
0058B37A  85 C0                     TEST EAX,EAX
0058B37C  8B C8                     MOV ECX,EAX
0058B37E  7D 02                     JGE 0x0058b382
0058B380  F7 D9                     NEG ECX
LAB_0058b382:
0058B382  83 F9 1E                  CMP ECX,0x1e
0058B385  7C 0E                     JL 0x0058b395
0058B387  33 D2                     XOR EDX,EDX
0058B389  85 C0                     TEST EAX,EAX
0058B38B  0F 9D C2                  SETGE DL
0058B38E  4A                        DEC EDX
0058B38F  83 E2 FE                  AND EDX,0xfffffffe
0058B392  42                        INC EDX
0058B393  03 FA                     ADD EDI,EDX
LAB_0058b395:
0058B395  3B 5D FC                  CMP EBX,dword ptr [EBP + -0x4]
0058B398  7F 11                     JG 0x0058b3ab
0058B39A  85 DB                     TEST EBX,EBX
0058B39C  7C 0D                     JL 0x0058b3ab
0058B39E  3B 7D F4                  CMP EDI,dword ptr [EBP + -0xc]
0058B3A1  7D 08                     JGE 0x0058b3ab
0058B3A3  85 FF                     TEST EDI,EDI
0058B3A5  0F 8D EE 00 00 00         JGE 0x0058b499
LAB_0058b3ab:
0058B3AB  83 7D F8 02               CMP dword ptr [EBP + -0x8],0x2
0058B3AF  7D 27                     JGE 0x0058b3d8
0058B3B1  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058B3B4  33 D2                     XOR EDX,EDX
0058B3B6  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058B3BC  05 39 30 00 00            ADD EAX,0x3039
0058B3C1  B9 03 00 00 00            MOV ECX,0x3
0058B3C6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058B3C9  C1 E8 10                  SHR EAX,0x10
0058B3CC  F7 F1                     DIV ECX
0058B3CE  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
0058B3D2  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
0058B3D6  EB 26                     JMP 0x0058b3fe
LAB_0058b3d8:
0058B3D8  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0058B3DB  33 D2                     XOR EDX,EDX
0058B3DD  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0058B3E3  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0058B3E9  B9 05 00 00 00            MOV ECX,0x5
0058B3EE  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058B3F1  C1 E8 10                  SHR EAX,0x10
0058B3F4  F7 F1                     DIV ECX
0058B3F6  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
0058B3FA  8D 44 02 FE               LEA EAX,[EDX + EAX*0x1 + -0x2]
LAB_0058b3fe:
0058B3FE  83 F8 08                  CMP EAX,0x8
0058B401  7C 05                     JL 0x0058b408
0058B403  83 E8 08                  SUB EAX,0x8
0058B406  EB 07                     JMP 0x0058b40f
LAB_0058b408:
0058B408  85 C0                     TEST EAX,EAX
0058B40A  7D 03                     JGE 0x0058b40f
0058B40C  83 C0 08                  ADD EAX,0x8
LAB_0058b40f:
0058B40F  83 F8 07                  CMP EAX,0x7
0058B412  77 57                     JA 0x0058b46b
switchD_0058b414::switchD:
0058B414  FF 24 85 B8 B7 58 00      JMP dword ptr [EAX*0x4 + 0x58b7b8]
switchD_0058b414::caseD_0:
0058B41B  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B41F  0F BF 7E 49               MOVSX EDI,word ptr [ESI + 0x49]
0058B423  43                        INC EBX
0058B424  EB 45                     JMP 0x0058b46b
switchD_0058b414::caseD_1:
0058B426  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B42A  0F BF 7E 49               MOVSX EDI,word ptr [ESI + 0x49]
0058B42E  43                        INC EBX
0058B42F  4F                        DEC EDI
0058B430  EB 39                     JMP 0x0058b46b
switchD_0058b414::caseD_2:
0058B432  0F BF 7E 49               MOVSX EDI,word ptr [ESI + 0x49]
0058B436  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B43A  4F                        DEC EDI
0058B43B  EB 2E                     JMP 0x0058b46b
switchD_0058b414::caseD_3:
0058B43D  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B441  0F BF 7E 49               MOVSX EDI,word ptr [ESI + 0x49]
0058B445  4B                        DEC EBX
0058B446  4F                        DEC EDI
0058B447  EB 22                     JMP 0x0058b46b
switchD_0058b414::caseD_4:
0058B449  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B44D  0F BF 7E 49               MOVSX EDI,word ptr [ESI + 0x49]
0058B451  4B                        DEC EBX
0058B452  EB 17                     JMP 0x0058b46b
switchD_0058b414::caseD_5:
0058B454  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B458  4B                        DEC EBX
0058B459  EB 0B                     JMP 0x0058b466
switchD_0058b414::caseD_6:
0058B45B  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B45F  EB 05                     JMP 0x0058b466
switchD_0058b414::caseD_7:
0058B461  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B465  43                        INC EBX
LAB_0058b466:
0058B466  0F BF 7E 49               MOVSX EDI,word ptr [ESI + 0x49]
0058B46A  47                        INC EDI
switchD_0058b414::default:
0058B46B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058B46E  3B D8                     CMP EBX,EAX
0058B470  7E 06                     JLE 0x0058b478
0058B472  0F BF 7E 49               MOVSX EDI,word ptr [ESI + 0x49]
0058B476  8B D8                     MOV EBX,EAX
LAB_0058b478:
0058B478  85 DB                     TEST EBX,EBX
0058B47A  7D 06                     JGE 0x0058b482
0058B47C  0F BF 7E 49               MOVSX EDI,word ptr [ESI + 0x49]
0058B480  33 DB                     XOR EBX,EBX
LAB_0058b482:
0058B482  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0058B485  3B F8                     CMP EDI,EAX
0058B487  7C 06                     JL 0x0058b48f
0058B489  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B48D  8B F8                     MOV EDI,EAX
LAB_0058b48f:
0058B48F  85 FF                     TEST EDI,EDI
0058B491  7D 06                     JGE 0x0058b499
0058B493  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
0058B497  33 FF                     XOR EDI,EDI
LAB_0058b499:
0058B499  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058B49C  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058B4A2  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
0058B4A6  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058B4AC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0058B4AF  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058B4B2  33 D2                     XOR EDX,EDX
0058B4B4  C1 E8 10                  SHR EAX,0x10
0058B4B7  B9 65 00 00 00            MOV ECX,0x65
0058B4BC  F7 F1                     DIV ECX
0058B4BE  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0058B4C2  03 C2                     ADD EAX,EDX
0058B4C4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0058B4C7  3D 84 03 00 00            CMP EAX,0x384
0058B4CC  7C 0A                     JL 0x0058b4d8
0058B4CE  F7 DA                     NEG EDX
0058B4D0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0058B4D3  E9 C7 00 00 00            JMP 0x0058b59f
LAB_0058b4d8:
0058B4D8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058B4DB  2B CA                     SUB ECX,EDX
0058B4DD  83 F9 32                  CMP ECX,0x32
0058B4E0  0F 8C B9 00 00 00         JL 0x0058b59f
0058B4E6  85 C9                     TEST ECX,ECX
0058B4E8  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058B4ED  7C 11                     JL 0x0058b500
0058B4EF  F7 E9                     IMUL ECX
0058B4F1  C1 FA 06                  SAR EDX,0x6
0058B4F4  8B CA                     MOV ECX,EDX
0058B4F6  C1 E9 1F                  SHR ECX,0x1f
0058B4F9  03 D1                     ADD EDX,ECX
0058B4FB  0F BF C2                  MOVSX EAX,DX
0058B4FE  EB 10                     JMP 0x0058b510
LAB_0058b500:
0058B500  F7 E9                     IMUL ECX
0058B502  C1 FA 06                  SAR EDX,0x6
0058B505  8B C2                     MOV EAX,EDX
0058B507  C1 E8 1F                  SHR EAX,0x1f
0058B50A  03 D0                     ADD EDX,EAX
0058B50C  0F BF C2                  MOVSX EAX,DX
0058B50F  48                        DEC EAX
LAB_0058b510:
0058B510  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058B516  50                        PUSH EAX
0058B517  57                        PUSH EDI
0058B518  53                        PUSH EBX
0058B519  E8 20 95 E7 FF            CALL 0x00404a3e
0058B51E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058B521  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058B524  03 CA                     ADD ECX,EDX
0058B526  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058B529  85 C9                     TEST ECX,ECX
0058B52B  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058B530  7C 11                     JL 0x0058b543
0058B532  F7 E9                     IMUL ECX
0058B534  C1 FA 06                  SAR EDX,0x6
0058B537  8B C2                     MOV EAX,EDX
0058B539  C1 E8 1F                  SHR EAX,0x1f
0058B53C  03 D0                     ADD EDX,EAX
0058B53E  0F BF C2                  MOVSX EAX,DX
0058B541  EB 10                     JMP 0x0058b553
LAB_0058b543:
0058B543  F7 E9                     IMUL ECX
0058B545  C1 FA 06                  SAR EDX,0x6
0058B548  8B CA                     MOV ECX,EDX
0058B54A  C1 E9 1F                  SHR ECX,0x1f
0058B54D  03 D1                     ADD EDX,ECX
0058B54F  0F BF C2                  MOVSX EAX,DX
0058B552  48                        DEC EAX
LAB_0058b553:
0058B553  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058B559  50                        PUSH EAX
0058B55A  57                        PUSH EDI
0058B55B  53                        PUSH EBX
0058B55C  E8 DD 94 E7 FF            CALL 0x00404a3e
0058B561  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0058B564  85 C9                     TEST ECX,ECX
0058B566  7D 14                     JGE 0x0058b57c
0058B568  85 C0                     TEST EAX,EAX
0058B56A  7D 10                     JGE 0x0058b57c
0058B56C  F6 45 FC 01               TEST byte ptr [EBP + -0x4],0x1
0058B570  74 2D                     JZ 0x0058b59f
0058B572  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058B575  F7 DA                     NEG EDX
0058B577  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0058B57A  EB 23                     JMP 0x0058b59f
LAB_0058b57c:
0058B57C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058B57F  85 C9                     TEST ECX,ECX
0058B581  7E 0B                     JLE 0x0058b58e
0058B583  85 C0                     TEST EAX,EAX
0058B585  7C 05                     JL 0x0058b58c
0058B587  F7 D9                     NEG ECX
0058B589  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0058b58c:
0058B58C  85 C9                     TEST ECX,ECX
LAB_0058b58e:
0058B58E  7D 0F                     JGE 0x0058b59f
0058B590  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0058B593  85 C0                     TEST EAX,EAX
0058B595  7C 08                     JL 0x0058b59f
0058B597  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058B59A  F7 D8                     NEG EAX
0058B59C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0058b59f:
0058B59F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058B5A2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058B5A5  03 C1                     ADD EAX,ECX
0058B5A7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0058B5AA  8B C8                     MOV ECX,EAX
LAB_0058b5ac:
0058B5AC  85 C9                     TEST ECX,ECX
0058B5AE  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058B5B3  7C 14                     JL 0x0058b5c9
0058B5B5  F7 E9                     IMUL ECX
0058B5B7  C1 FA 06                  SAR EDX,0x6
0058B5BA  8B C2                     MOV EAX,EDX
0058B5BC  C1 E8 1F                  SHR EAX,0x1f
0058B5BF  03 D0                     ADD EDX,EAX
0058B5C1  0F BF CA                  MOVSX ECX,DX
0058B5C4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0058B5C7  EB 13                     JMP 0x0058b5dc
LAB_0058b5c9:
0058B5C9  F7 E9                     IMUL ECX
0058B5CB  C1 FA 06                  SAR EDX,0x6
0058B5CE  8B C2                     MOV EAX,EDX
0058B5D0  C1 E8 1F                  SHR EAX,0x1f
0058B5D3  03 D0                     ADD EDX,EAX
0058B5D5  0F BF C2                  MOVSX EAX,DX
0058B5D8  48                        DEC EAX
0058B5D9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0058b5dc:
0058B5DC  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0058b5e3:
0058B5E3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058B5E6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0058B5E9  8D 41 05                  LEA EAX,[ECX + 0x5]
0058B5EC  3B C8                     CMP ECX,EAX
0058B5EE  0F 8D A3 00 00 00         JGE 0x0058b697
LAB_0058b5f4:
0058B5F4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0058B5F7  83 F8 05                  CMP EAX,0x5
0058B5FA  7C 03                     JL 0x0058b5ff
0058B5FC  83 C0 FB                  ADD EAX,-0x5
LAB_0058b5ff:
0058B5FF  8B C8                     MOV ECX,EAX
0058B601  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058B604  51                        PUSH ECX
0058B605  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058B60B  57                        PUSH EDI
0058B60C  53                        PUSH EBX
0058B60D  E8 29 97 E7 FF            CALL 0x00404d3b
0058B612  85 C0                     TEST EAX,EAX
0058B614  74 6C                     JZ 0x0058b682
0058B616  66 85 DB                  TEST BX,BX
0058B619  0F 8C B0 00 00 00         JL 0x0058b6cf
0058B61F  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
0058B626  66 3B D9                  CMP BX,CX
0058B629  0F 8D A0 00 00 00         JGE 0x0058b6cf
0058B62F  66 85 FF                  TEST DI,DI
0058B632  0F 8C 97 00 00 00         JL 0x0058b6cf
0058B638  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
0058B63F  0F 8D 8A 00 00 00         JGE 0x0058b6cf
0058B645  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058B648  66 85 C0                  TEST AX,AX
0058B64B  0F 8C 81 00 00 00         JL 0x0058b6d2
0058B651  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0058B658  7D 78                     JGE 0x0058b6d2
0058B65A  0F BF D7                  MOVSX EDX,DI
0058B65D  0F BF C9                  MOVSX ECX,CX
0058B660  0F AF D1                  IMUL EDX,ECX
0058B663  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0058B66A  0F BF C0                  MOVSX EAX,AX
0058B66D  0F AF C8                  IMUL ECX,EAX
0058B670  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0058B675  03 D1                     ADD EDX,ECX
0058B677  0F BF CB                  MOVSX ECX,BX
0058B67A  03 D1                     ADD EDX,ECX
0058B67C  83 3C D0 00               CMP dword ptr [EAX + EDX*0x8],0x0
0058B680  74 4D                     JZ 0x0058b6cf
LAB_0058b682:
0058B682  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0058B685  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058B688  40                        INC EAX
0058B689  83 C1 05                  ADD ECX,0x5
0058B68C  3B C1                     CMP EAX,ECX
0058B68E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058B691  0F 8C 5D FF FF FF         JL 0x0058b5f4
LAB_0058b697:
0058B697  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0058B69B  8B C3                     MOV EAX,EBX
0058B69D  2B C2                     SUB EAX,EDX
0058B69F  85 C0                     TEST EAX,EAX
0058B6A1  7E 08                     JLE 0x0058b6ab
0058B6A3  4B                        DEC EBX
0058B6A4  78 4D                     JS 0x0058b6f3
0058B6A6  E9 38 FF FF FF            JMP 0x0058b5e3
LAB_0058b6ab:
0058B6AB  7D 06                     JGE 0x0058b6b3
0058B6AD  43                        INC EBX
0058B6AE  E9 30 FF FF FF            JMP 0x0058b5e3
LAB_0058b6b3:
0058B6B3  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0058B6B7  8B C7                     MOV EAX,EDI
0058B6B9  2B C1                     SUB EAX,ECX
0058B6BB  85 C0                     TEST EAX,EAX
0058B6BD  7E 08                     JLE 0x0058b6c7
0058B6BF  4F                        DEC EDI
0058B6C0  78 31                     JS 0x0058b6f3
0058B6C2  E9 1C FF FF FF            JMP 0x0058b5e3
LAB_0058b6c7:
0058B6C7  7D 2A                     JGE 0x0058b6f3
0058B6C9  47                        INC EDI
0058B6CA  E9 14 FF FF FF            JMP 0x0058b5e3
LAB_0058b6cf:
0058B6CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0058b6d2:
0058B6D2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058B6D5  3B C8                     CMP ECX,EAX
0058B6D7  74 13                     JZ 0x0058b6ec
0058B6D9  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0058B6DC  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0058B6DF  8D 04 D5 64 00 00 00      LEA EAX,[EDX*0x8 + 0x64]
0058B6E6  0F BF C8                  MOVSX ECX,AX
0058B6E9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0058b6ec:
0058B6EC  B9 01 00 00 00            MOV ECX,0x1
0058B6F1  EB 03                     JMP 0x0058b6f6
LAB_0058b6f3:
0058B6F3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_0058b6f6:
0058B6F6  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0058B6F9  85 C9                     TEST ECX,ECX
0058B6FB  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0058B6FE  8D 44 D3 64               LEA EAX,[EBX + EDX*0x8 + 0x64]
0058B702  0F BF D8                  MOVSX EBX,AX
0058B705  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0058B708  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0058B70B  8D 44 D7 64               LEA EAX,[EDI + EDX*0x8 + 0x64]
0058B70F  0F BF F8                  MOVSX EDI,AX
0058B712  74 7E                     JZ 0x0058b792
0058B714  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0058B718  3B CB                     CMP ECX,EBX
0058B71A  75 11                     JNZ 0x0058b72d
0058B71C  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0058B720  3B D7                     CMP EDX,EDI
0058B722  75 09                     JNZ 0x0058b72d
0058B724  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0058B728  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
0058B72B  74 65                     JZ 0x0058b792
LAB_0058b72d:
0058B72D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0058B730  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0058B733  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058B736  66 89 19                  MOV word ptr [ECX],BX
0058B739  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0058B73C  66 89 3A                  MOV word ptr [EDX],DI
0058B73F  50                        PUSH EAX
0058B740  66 89 01                  MOV word ptr [ECX],AX
0058B743  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0058B747  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0058B74B  8B 16                     MOV EDX,dword ptr [ESI]
0058B74D  57                        PUSH EDI
0058B74E  53                        PUSH EBX
0058B74F  50                        PUSH EAX
0058B750  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0058B754  51                        PUSH ECX
0058B755  50                        PUSH EAX
0058B756  8B CE                     MOV ECX,ESI
0058B758  FF 52 10                  CALL dword ptr [EDX + 0x10]
0058B75B  0F BF C8                  MOVSX ECX,AX
0058B75E  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0058B763  F7 E9                     IMUL ECX
0058B765  03 D1                     ADD EDX,ECX
0058B767  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0058B76A  C1 FA 05                  SAR EDX,0x5
0058B76D  8B CA                     MOV ECX,EDX
0058B76F  C1 E9 1F                  SHR ECX,0x1f
0058B772  03 D1                     ADD EDX,ECX
0058B774  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058B777  51                        PUSH ECX
0058B778  57                        PUSH EDI
0058B779  53                        PUSH EBX
0058B77A  8B CE                     MOV ECX,ESI
0058B77C  66 89 10                  MOV word ptr [EAX],DX
0058B77F  E8 71 6D E7 FF            CALL 0x004024f5
0058B784  5F                        POP EDI
0058B785  5E                        POP ESI
0058B786  B8 01 00 00 00            MOV EAX,0x1
0058B78B  5B                        POP EBX
0058B78C  8B E5                     MOV ESP,EBP
0058B78E  5D                        POP EBP
0058B78F  C2 10 00                  RET 0x10
LAB_0058b792:
0058B792  0F BF 56 6C               MOVSX EDX,word ptr [ESI + 0x6c]
0058B796  42                        INC EDX
0058B797  81 E2 07 00 00 80         AND EDX,0x80000007
0058B79D  79 05                     JNS 0x0058b7a4
0058B79F  4A                        DEC EDX
0058B7A0  83 CA F8                  OR EDX,0xfffffff8
0058B7A3  42                        INC EDX
LAB_0058b7a4:
0058B7A4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0058B7A7  5F                        POP EDI
0058B7A8  5E                        POP ESI
0058B7A9  5B                        POP EBX
0058B7AA  66 89 10                  MOV word ptr [EAX],DX
0058B7AD  33 C0                     XOR EAX,EAX
0058B7AF  8B E5                     MOV ESP,EBP
0058B7B1  5D                        POP EBP
0058B7B2  C2 10 00                  RET 0x10
