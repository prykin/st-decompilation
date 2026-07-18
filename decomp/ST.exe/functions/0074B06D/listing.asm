FUN_0074b06d:
0074B06D  55                        PUSH EBP
0074B06E  8B EC                     MOV EBP,ESP
0074B070  83 EC 24                  SUB ESP,0x24
0074B073  53                        PUSH EBX
0074B074  56                        PUSH ESI
0074B075  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0074B078  57                        PUSH EDI
0074B079  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0074B07C  8B F1                     MOV ESI,ECX
0074B07E  BA 80 38 01 00            MOV EDX,0x13880
0074B083  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0074B086  8B 0F                     MOV ECX,dword ptr [EDI]
0074B088  85 C0                     TEST EAX,EAX
0074B08A  7C 1A                     JL 0x0074b0a6
0074B08C  7F 04                     JG 0x0074b092
0074B08E  3B CA                     CMP ECX,EDX
0074B090  72 14                     JC 0x0074b0a6
LAB_0074b092:
0074B092  2B CA                     SUB ECX,EDX
0074B094  83 D8 00                  SBB EAX,0x0
0074B097  89 0F                     MOV dword ptr [EDI],ECX
0074B099  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0074B09C  81 03 80 C7 FE FF         ADD dword ptr [EBX],0xfffec780
0074B0A2  83 53 04 FF               ADC dword ptr [EBX + 0x4],-0x1
LAB_0074b0a6:
0074B0A6  8B 07                     MOV EAX,dword ptr [EDI]
0074B0A8  8D 55 EC                  LEA EDX,[EBP + -0x14]
0074B0AB  89 86 00 01 00 00         MOV dword ptr [ESI + 0x100],EAX
0074B0B1  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0074B0B4  89 86 04 01 00 00         MOV dword ptr [ESI + 0x104],EAX
0074B0BA  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0074B0BD  52                        PUSH EDX
0074B0BE  50                        PUSH EAX
0074B0BF  8B 08                     MOV ECX,dword ptr [EAX]
0074B0C1  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074B0C4  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0074B0C7  BA 00 9B 32 E2            MOV EDX,0xe2329b00
0074B0CC  29 45 EC                  SUB dword ptr [EBP + -0x14],EAX
0074B0CF  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0074B0D2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0074B0D5  19 45 F0                  SBB dword ptr [EBP + -0x10],EAX
0074B0D8  2B 0F                     SUB ECX,dword ptr [EDI]
0074B0DA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0074B0DD  1B 47 04                  SBB EAX,dword ptr [EDI + 0x4]
0074B0E0  83 F8 FF                  CMP EAX,-0x1
0074B0E3  7F 0B                     JG 0x0074b0f0
0074B0E5  7C 04                     JL 0x0074b0eb
0074B0E7  3B CA                     CMP ECX,EDX
0074B0E9  73 05                     JNC 0x0074b0f0
LAB_0074b0eb:
0074B0EB  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0074B0EE  EB 1A                     JMP 0x0074b10a
LAB_0074b0f0:
0074B0F0  85 C0                     TEST EAX,EAX
0074B0F2  7C 13                     JL 0x0074b107
0074B0F4  7F 08                     JG 0x0074b0fe
0074B0F6  81 F9 00 65 CD 1D         CMP ECX,0x1dcd6500
0074B0FC  76 09                     JBE 0x0074b107
LAB_0074b0fe:
0074B0FE  C7 45 0C 00 65 CD 1D      MOV dword ptr [EBP + 0xc],0x1dcd6500
0074B105  EB 03                     JMP 0x0074b10a
LAB_0074b107:
0074B107  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_0074b10a:
0074B10A  FF 75 F0                  PUSH dword ptr [EBP + -0x10]
0074B10D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074B110  8B 0E                     MOV ECX,dword ptr [ESI]
0074B112  FF 75 EC                  PUSH dword ptr [EBP + -0x14]
0074B115  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0074B118  99                        CDQ
0074B119  52                        PUSH EDX
0074B11A  50                        PUSH EAX
0074B11B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074B11E  8B CE                     MOV ECX,ESI
0074B120  FF 90 C0 00 00 00         CALL dword ptr [EAX + 0xc0]
0074B126  33 C9                     XOR ECX,ECX
0074B128  6A 20                     PUSH 0x20
0074B12A  85 C0                     TEST EAX,EAX
0074B12C  0F 94 C1                  SETZ CL
0074B12F  90                        NOP
0074B130  8B C1                     MOV EAX,ECX
0074B132  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074B135  89 86 D4 00 00 00         MOV dword ptr [ESI + 0xd4],EAX
0074B13B  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0074B141  8B 0B                     MOV ECX,dword ptr [EBX]
0074B143  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074B146  5B                        POP EBX
0074B147  99                        CDQ
0074B148  F7 FB                     IDIV EBX
0074B14A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0074B14D  2B 0F                     SUB ECX,dword ptr [EDI]
0074B14F  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0074B152  8D 1C 10                  LEA EBX,[EAX + EDX*0x1]
0074B155  3B CB                     CMP ECX,EBX
0074B157  7F 06                     JG 0x0074b15f
0074B159  2B D0                     SUB EDX,EAX
0074B15B  3B CA                     CMP ECX,EDX
0074B15D  7D 0C                     JGE 0x0074b16b
LAB_0074b15f:
0074B15F  89 8E F4 00 00 00         MOV dword ptr [ESI + 0xf4],ECX
0074B165  89 8E F8 00 00 00         MOV dword ptr [ESI + 0xf8],ECX
LAB_0074b16b:
0074B16B  33 DB                     XOR EBX,EBX
0074B16D  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
0074B170  74 0D                     JZ 0x0074b17f
0074B172  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074B175  50                        PUSH EAX
0074B176  8B 08                     MOV ECX,dword ptr [EAX]
0074B178  FF 51 3C                  CALL dword ptr [ECX + 0x3c]
0074B17B  85 C0                     TEST EAX,EAX
0074B17D  74 0C                     JZ 0x0074b18b
LAB_0074b17f:
0074B17F  83 BE D0 00 00 00 FF      CMP dword ptr [ESI + 0xd0],-0x1
0074B186  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0074B189  75 07                     JNZ 0x0074b192
LAB_0074b18b:
0074B18B  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_0074b192:
0074B192  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074B195  3B D3                     CMP EDX,EBX
0074B197  7E 08                     JLE 0x0074b1a1
0074B199  89 9E E8 00 00 00         MOV dword ptr [ESI + 0xe8],EBX
0074B19F  EB 2A                     JMP 0x0074b1cb
LAB_0074b1a1:
0074B1A1  8B 8E E8 00 00 00         MOV ECX,dword ptr [ESI + 0xe8]
0074B1A7  3B D1                     CMP EDX,ECX
0074B1A9  7D 1A                     JGE 0x0074b1c5
0074B1AB  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
0074B1AE  75 15                     JNZ 0x0074b1c5
0074B1B0  8B C1                     MOV EAX,ECX
0074B1B2  6A 08                     PUSH 0x8
0074B1B4  99                        CDQ
0074B1B5  5B                        POP EBX
0074B1B6  F7 FB                     IDIV EBX
0074B1B8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074B1BB  2B C8                     SUB ECX,EAX
0074B1BD  89 8E E8 00 00 00         MOV dword ptr [ESI + 0xe8],ECX
0074B1C3  EB 06                     JMP 0x0074b1cb
LAB_0074b1c5:
0074B1C5  89 96 E8 00 00 00         MOV dword ptr [ESI + 0xe8],EDX
LAB_0074b1cb:
0074B1CB  85 D2                     TEST EDX,EDX
0074B1CD  7D 04                     JGE 0x0074b1d3
0074B1CF  F7 DA                     NEG EDX
0074B1D1  EB 02                     JMP 0x0074b1d5
LAB_0074b1d3:
0074B1D3  33 D2                     XOR EDX,EDX
LAB_0074b1d5:
0074B1D5  8B 8E F0 00 00 00         MOV ECX,dword ptr [ESI + 0xf0]
0074B1DB  6A 04                     PUSH 0x4
0074B1DD  5B                        POP EBX
0074B1DE  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0074B1E1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0074B1E4  03 C2                     ADD EAX,EDX
0074B1E6  99                        CDQ
0074B1E7  F7 FB                     IDIV EBX
0074B1E9  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0074B1EC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074B1EF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0074B1F2  2B 86 20 01 00 00         SUB EAX,dword ptr [ESI + 0x120]
0074B1F8  1B 96 24 01 00 00         SBB EDX,dword ptr [ESI + 0x124]
0074B1FE  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0074B201  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0074B204  B8 80 96 98 00            MOV EAX,0x989680
0074B209  85 D2                     TEST EDX,EDX
0074B20B  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0074B20E  7C 0E                     JL 0x0074b21e
0074B210  7F 05                     JG 0x0074b217
0074B212  39 45 E4                  CMP dword ptr [EBP + -0x1c],EAX
0074B215  76 07                     JBE 0x0074b21e
LAB_0074b217:
0074B217  83 65 E8 00               AND dword ptr [EBP + -0x18],0x0
0074B21B  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0074b21e:
0074B21E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0074B221  8B 96 F4 00 00 00         MOV EDX,dword ptr [ESI + 0xf4]
0074B227  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0074B22A  8B 86 DC 00 00 00         MOV EAX,dword ptr [ESI + 0xdc]
0074B230  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0074B233  3B C2                     CMP EAX,EDX
0074B235  7E 5E                     JLE 0x0074b295
0074B237  83 BE D4 00 00 00 00      CMP dword ptr [ESI + 0xd4],0x0
0074B23E  74 10                     JZ 0x0074b250
0074B240  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074B243  33 D2                     XOR EDX,EDX
0074B245  C1 E0 02                  SHL EAX,0x2
0074B248  39 45 0C                  CMP dword ptr [EBP + 0xc],EAX
0074B24B  0F 9E C2                  SETLE DL
0074B24E  EB 0D                     JMP 0x0074b25d
LAB_0074b250:
0074B250  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074B253  33 D2                     XOR EDX,EDX
0074B255  03 C0                     ADD EAX,EAX
0074B257  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
0074B25A  0F 9C C2                  SETL DL
LAB_0074b25d:
0074B25D  8B C2                     MOV EAX,EDX
0074B25F  85 C0                     TEST EAX,EAX
0074B261  75 32                     JNZ 0x0074b295
0074B263  81 F9 80 38 01 00         CMP ECX,0x13880
0074B269  7F 2A                     JG 0x0074b295
0074B26B  39 55 E0                  CMP dword ptr [EBP + -0x20],EDX
0074B26E  7F 25                     JG 0x0074b295
0074B270  7C 09                     JL 0x0074b27b
0074B272  81 7D DC 80 96 98 00      CMP dword ptr [EBP + -0x24],0x989680
0074B279  77 1A                     JA 0x0074b295
LAB_0074b27b:
0074B27B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074B27E  83 8E D0 00 00 00 FF      OR dword ptr [ESI + 0xd0],0xffffffff
0074B285  89 86 F0 00 00 00         MOV dword ptr [ESI + 0xf0],EAX
0074B28B  B8 05 40 00 80            MOV EAX,0x80004005
0074B290  E9 75 01 00 00            JMP 0x0074b40a
LAB_0074b295:
0074B295  33 C9                     XOR ECX,ECX
0074B297  39 4D FC                  CMP dword ptr [EBP + -0x4],ECX
0074B29A  0F 84 71 01 00 00         JZ 0x0074b411
0074B2A0  6A 01                     PUSH 0x1
0074B2A2  59                        POP ECX
LAB_0074b2a3:
0074B2A3  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0074b2a6:
0074B2A6  81 FB C0 AB 76 FF         CMP EBX,0xff76abc0
0074B2AC  7D 02                     JGE 0x0074b2b0
0074B2AE  33 C9                     XOR ECX,ECX
LAB_0074b2b0:
0074B2B0  85 C9                     TEST ECX,ECX
0074B2B2  74 62                     JZ 0x0074b316
0074B2B4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074B2B7  6A 04                     PUSH 0x4
0074B2B9  99                        CDQ
0074B2BA  59                        POP ECX
0074B2BB  83 A6 D0 00 00 00 00      AND dword ptr [ESI + 0xd0],0x0
0074B2C2  F7 F9                     IDIV ECX
0074B2C4  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0074B2C7  6A 04                     PUSH 0x4
0074B2C9  5F                        POP EDI
0074B2CA  51                        PUSH ECX
0074B2CB  53                        PUSH EBX
0074B2CC  89 86 F0 00 00 00         MOV dword ptr [ESI + 0xf0],EAX
0074B2D2  8B 86 F4 00 00 00         MOV EAX,dword ptr [ESI + 0xf4]
0074B2D8  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
0074B2DB  8B CE                     MOV ECX,ESI
0074B2DD  03 C2                     ADD EAX,EDX
0074B2DF  99                        CDQ
0074B2E0  F7 FF                     IDIV EDI
0074B2E2  89 86 F4 00 00 00         MOV dword ptr [ESI + 0xf4],EAX
0074B2E8  E8 5C FA FF FF            CALL 0x0074ad49
0074B2ED  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0074B2F0  39 9E E8 00 00 00         CMP dword ptr [ESI + 0xe8],EBX
0074B2F6  89 86 20 01 00 00         MOV dword ptr [ESI + 0x120],EAX
0074B2FC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0074B2FF  89 86 24 01 00 00         MOV dword ptr [ESI + 0x124],EAX
0074B305  7E 06                     JLE 0x0074b30d
0074B307  89 9E E8 00 00 00         MOV dword ptr [ESI + 0xe8],EBX
LAB_0074b30d:
0074B30D  83 65 10 00               AND dword ptr [EBP + 0x10],0x0
0074B311  E9 F1 00 00 00            JMP 0x0074b407
LAB_0074b316:
0074B316  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074B319  8B 86 E8 00 00 00         MOV EAX,dword ptr [ESI + 0xe8]
0074B31F  FF 86 D0 00 00 00         INC dword ptr [ESI + 0xd0]
0074B325  89 8E F4 00 00 00         MOV dword ptr [ESI + 0xf4],ECX
0074B32B  F7 D9                     NEG ECX
0074B32D  3B C1                     CMP EAX,ECX
0074B32F  7D 02                     JGE 0x0074b333
0074B331  8B C1                     MOV EAX,ECX
LAB_0074b333:
0074B333  99                        CDQ
0074B334  01 07                     ADD dword ptr [EDI],EAX
0074B336  11 57 04                  ADC dword ptr [EDI + 0x4],EDX
0074B339  8B D3                     MOV EDX,EBX
0074B33B  F7 DA                     NEG EDX
0074B33D  33 C0                     XOR EAX,EAX
0074B33F  85 D2                     TEST EDX,EDX
0074B341  0F 9F C0                  SETG AL
0074B344  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0074B347  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074B34A  83 7D 10 01               CMP dword ptr [EBP + 0x10],0x1
0074B34E  89 86 F0 00 00 00         MOV dword ptr [ESI + 0xf0],EAX
0074B354  75 53                     JNZ 0x0074b3a9
0074B356  8B 1F                     MOV EBX,dword ptr [EDI]
0074B358  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0074B35B  8B CB                     MOV ECX,EBX
0074B35D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0074B360  2B 8E 20 01 00 00         SUB ECX,dword ptr [ESI + 0x120]
0074B366  1B 86 24 01 00 00         SBB EAX,dword ptr [ESI + 0x124]
0074B36C  83 F8 FF                  CMP EAX,-0x1
0074B36F  7F 13                     JG 0x0074b384
0074B371  7C 08                     JL 0x0074b37b
0074B373  81 F9 00 9B 32 E2         CMP ECX,0xe2329b00
0074B379  73 09                     JNC 0x0074b384
LAB_0074b37b:
0074B37B  C7 45 08 00 9B 32 E2      MOV dword ptr [EBP + 0x8],0xe2329b00
0074B382  EB 1A                     JMP 0x0074b39e
LAB_0074b384:
0074B384  85 C0                     TEST EAX,EAX
0074B386  7C 13                     JL 0x0074b39b
0074B388  7F 08                     JG 0x0074b392
0074B38A  81 F9 00 65 CD 1D         CMP ECX,0x1dcd6500
0074B390  76 09                     JBE 0x0074b39b
LAB_0074b392:
0074B392  C7 45 08 00 65 CD 1D      MOV dword ptr [EBP + 0x8],0x1dcd6500
0074B399  EB 03                     JMP 0x0074b39e
LAB_0074b39b:
0074B39B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0074b39e:
0074B39E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0074B3A1  89 9E 20 01 00 00         MOV dword ptr [ESI + 0x120],EBX
0074B3A7  EB 0C                     JMP 0x0074b3b5
LAB_0074b3a9:
0074B3A9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0074B3AC  89 86 20 01 00 00         MOV dword ptr [ESI + 0x120],EAX
0074B3B2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_0074b3b5:
0074B3B5  85 D2                     TEST EDX,EDX
0074B3B7  89 86 24 01 00 00         MOV dword ptr [ESI + 0x124],EAX
0074B3BD  7E 3A                     JLE 0x0074b3f9
0074B3BF  8B 07                     MOV EAX,dword ptr [EDI]
0074B3C1  8B 7F 04                  MOV EDI,dword ptr [EDI + 0x4]
0074B3C4  2B 86 00 01 00 00         SUB EAX,dword ptr [ESI + 0x100]
0074B3CA  1B BE 04 01 00 00         SBB EDI,dword ptr [ESI + 0x104]
0074B3D0  83 FF FF                  CMP EDI,-0x1
0074B3D3  7F 10                     JG 0x0074b3e5
0074B3D5  7C 07                     JL 0x0074b3de
0074B3D7  3D 00 9B 32 E2            CMP EAX,0xe2329b00
0074B3DC  73 07                     JNC 0x0074b3e5
LAB_0074b3de:
0074B3DE  B8 00 9B 32 E2            MOV EAX,0xe2329b00
0074B3E3  EB 17                     JMP 0x0074b3fc
LAB_0074b3e5:
0074B3E5  85 FF                     TEST EDI,EDI
0074B3E7  7C 13                     JL 0x0074b3fc
0074B3E9  7F 07                     JG 0x0074b3f2
0074B3EB  3D 00 65 CD 1D            CMP EAX,0x1dcd6500
0074B3F0  76 0A                     JBE 0x0074b3fc
LAB_0074b3f2:
0074B3F2  B8 00 65 CD 1D            MOV EAX,0x1dcd6500
0074B3F7  EB 03                     JMP 0x0074b3fc
LAB_0074b3f9:
0074B3F9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0074b3fc:
0074B3FC  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074B3FF  8B CE                     MOV ECX,ESI
0074B401  50                        PUSH EAX
0074B402  E8 42 F9 FF FF            CALL 0x0074ad49
LAB_0074b407:
0074B407  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_0074b40a:
0074B40A  5F                        POP EDI
0074B40B  5E                        POP ESI
0074B40C  5B                        POP EBX
0074B40D  C9                        LEAVE
0074B40E  C2 0C 00                  RET 0xc
LAB_0074b411:
0074B411  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074B414  6A 10                     PUSH 0x10
0074B416  99                        CDQ
0074B417  5B                        POP EBX
0074B418  F7 FB                     IDIV EBX
0074B41A  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
0074B41D  39 86 F4 00 00 00         CMP dword ptr [ESI + 0xf4],EAX
0074B423  0F 8E 7A FE FF FF         JLE 0x0074b2a3
0074B429  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074B42C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0074B42F  6B C0 F6                  IMUL EAX,EAX,-0xa
0074B432  3B D8                     CMP EBX,EAX
0074B434  0F 8E 69 FE FF FF         JLE 0x0074b2a3
0074B43A  6A 01                     PUSH 0x1
0074B43C  59                        POP ECX
0074B43D  E9 64 FE FF FF            JMP 0x0074b2a6
