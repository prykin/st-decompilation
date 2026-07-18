FUN_00649ff0:
00649FF0  55                        PUSH EBP
00649FF1  8B EC                     MOV EBP,ESP
00649FF3  81 EC 2C 03 00 00         SUB ESP,0x32c
00649FF9  53                        PUSH EBX
00649FFA  56                        PUSH ESI
00649FFB  57                        PUSH EDI
00649FFC  B9 41 00 00 00            MOV ECX,0x41
0064A001  33 C0                     XOR EAX,EAX
0064A003  BF C0 17 81 00            MOV EDI,0x8117c0
0064A008  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0064A00E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0064A011  F3 AB                     STOSD.REP ES:EDI
0064A013  B9 C6 00 00 00            MOV ECX,0xc6
0064A018  8D BD D4 FC FF FF         LEA EDI,[EBP + 0xfffffcd4]
0064A01E  F3 AB                     STOSD.REP ES:EDI
0064A020  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064A023  A1 D5 7D 80 00            MOV EAX,[0x00807dd5]
0064A028  33 C9                     XOR ECX,ECX
0064A02A  8B D8                     MOV EBX,EAX
0064A02C  8A 0D D7 7D 80 00         MOV CL,byte ptr [0x00807dd7]
0064A032  25 FF FF 00 00            AND EAX,0xffff
0064A037  52                        PUSH EDX
0064A038  6A 64                     PUSH 0x64
0064A03A  C1 EB 18                  SHR EBX,0x18
0064A03D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0064A040  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0064A043  E8 F8 60 06 00            CALL 0x006b0140
0064A048  8B F8                     MOV EDI,EAX
0064A04A  83 C9 FF                  OR ECX,0xffffffff
0064A04D  33 C0                     XOR EAX,EAX
0064A04F  8D 95 D8 FD FF FF         LEA EDX,[EBP + 0xfffffdd8]
0064A055  F2 AE                     SCASB.REPNE ES:EDI
0064A057  F7 D1                     NOT ECX
0064A059  2B F9                     SUB EDI,ECX
0064A05B  8B C1                     MOV EAX,ECX
0064A05D  8B F7                     MOV ESI,EDI
0064A05F  C1 E9 02                  SHR ECX,0x2
0064A062  BF C0 17 81 00            MOV EDI,0x8117c0
0064A067  F3 A5                     MOVSD.REP ES:EDI,ESI
0064A069  8B C8                     MOV ECX,EAX
0064A06B  33 C0                     XOR EAX,EAX
0064A06D  83 E1 03                  AND ECX,0x3
0064A070  F3 A4                     MOVSB.REP ES:EDI,ESI
0064A072  BF 80 76 80 00            MOV EDI,0x807680
0064A077  83 C9 FF                  OR ECX,0xffffffff
0064A07A  F2 AE                     SCASB.REPNE ES:EDI
0064A07C  F7 D1                     NOT ECX
0064A07E  2B F9                     SUB EDI,ECX
0064A080  8B C1                     MOV EAX,ECX
0064A082  8B F7                     MOV ESI,EDI
0064A084  8B FA                     MOV EDI,EDX
0064A086  8D 95 D8 FD FF FF         LEA EDX,[EBP + 0xfffffdd8]
0064A08C  C1 E9 02                  SHR ECX,0x2
0064A08F  F3 A5                     MOVSD.REP ES:EDI,ESI
0064A091  8B C8                     MOV ECX,EAX
0064A093  33 C0                     XOR EAX,EAX
0064A095  83 E1 03                  AND ECX,0x3
0064A098  F3 A4                     MOVSB.REP ES:EDI,ESI
0064A09A  8B 3D 5C D6 79 00         MOV EDI,dword ptr [0x0079d65c]
0064A0A0  83 C9 FF                  OR ECX,0xffffffff
0064A0A3  F2 AE                     SCASB.REPNE ES:EDI
0064A0A5  F7 D1                     NOT ECX
0064A0A7  2B F9                     SUB EDI,ECX
0064A0A9  8B F7                     MOV ESI,EDI
0064A0AB  8B FA                     MOV EDI,EDX
0064A0AD  8B D1                     MOV EDX,ECX
0064A0AF  83 C9 FF                  OR ECX,0xffffffff
0064A0B2  F2 AE                     SCASB.REPNE ES:EDI
0064A0B4  8B CA                     MOV ECX,EDX
0064A0B6  4F                        DEC EDI
0064A0B7  C1 E9 02                  SHR ECX,0x2
0064A0BA  F3 A5                     MOVSD.REP ES:EDI,ESI
0064A0BC  8B CA                     MOV ECX,EDX
0064A0BE  8D 95 D4 FC FF FF         LEA EDX,[EBP + 0xfffffcd4]
0064A0C4  83 E1 03                  AND ECX,0x3
0064A0C7  F3 A4                     MOVSB.REP ES:EDI,ESI
0064A0C9  BF 80 76 80 00            MOV EDI,0x807680
0064A0CE  83 C9 FF                  OR ECX,0xffffffff
0064A0D1  F2 AE                     SCASB.REPNE ES:EDI
0064A0D3  F7 D1                     NOT ECX
0064A0D5  2B F9                     SUB EDI,ECX
0064A0D7  8B F7                     MOV ESI,EDI
0064A0D9  8B C1                     MOV EAX,ECX
0064A0DB  8B FA                     MOV EDI,EDX
0064A0DD  C1 E9 02                  SHR ECX,0x2
0064A0E0  F3 A5                     MOVSD.REP ES:EDI,ESI
0064A0E2  8B C8                     MOV ECX,EAX
0064A0E4  8D 95 D4 FC FF FF         LEA EDX,[EBP + 0xfffffcd4]
0064A0EA  83 E1 03                  AND ECX,0x3
0064A0ED  F3 A4                     MOVSB.REP ES:EDI,ESI
0064A0EF  8D 8D D4 FC FF FF         LEA ECX,[EBP + 0xfffffcd4]
0064A0F5  51                        PUSH ECX
0064A0F6  52                        PUSH EDX
0064A0F7  E8 C4 D7 06 00            CALL 0x006b78c0
0064A0FC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064A0FF  6A 00                     PUSH 0x0
0064A101  8D 4D F0                  LEA ECX,[EBP + -0x10]
0064A104  50                        PUSH EAX
0064A105  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064A108  8D 95 D4 FC FF FF         LEA EDX,[EBP + 0xfffffcd4]
0064A10E  51                        PUSH ECX
0064A10F  52                        PUSH EDX
0064A110  50                        PUSH EAX
0064A111  E8 ED A2 DB FF            CALL 0x00404403
0064A116  83 C4 14                  ADD ESP,0x14
0064A119  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064A11C  85 C0                     TEST EAX,EAX
0064A11E  0F 84 35 02 00 00         JZ 0x0064a359
0064A124  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0064A127  83 F9 0A                  CMP ECX,0xa
0064A12A  74 16                     JZ 0x0064a142
0064A12C  51                        PUSH ECX
0064A12D  8D 4D FC                  LEA ECX,[EBP + -0x4]
0064A130  51                        PUSH ECX
0064A131  E8 81 71 DB FF            CALL 0x004012b7
0064A136  83 C4 08                  ADD ESP,0x8
0064A139  33 C0                     XOR EAX,EAX
0064A13B  5F                        POP EDI
0064A13C  5E                        POP ESI
0064A13D  5B                        POP EBX
0064A13E  8B E5                     MOV ESP,EBP
0064A140  5D                        POP EBP
0064A141  C3                        RET
LAB_0064a142:
0064A142  8B F8                     MOV EDI,EAX
0064A144  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0064A14B  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0064A14E  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0064A151  85 C0                     TEST EAX,EAX
0064A153  0F 84 FA 01 00 00         JZ 0x0064a353
0064A159  48                        DEC EAX
0064A15A  85 C0                     TEST EAX,EAX
0064A15C  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0064A15F  7C 46                     JL 0x0064a1a7
LAB_0064a161:
0064A161  3B 47 0C                  CMP EAX,dword ptr [EDI + 0xc]
0064A164  73 0D                     JNC 0x0064a173
0064A166  8B 77 08                  MOV ESI,dword ptr [EDI + 0x8]
0064A169  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0064A16C  0F AF F0                  IMUL ESI,EAX
0064A16F  03 F1                     ADD ESI,ECX
0064A171  EB 02                     JMP 0x0064a175
LAB_0064a173:
0064A173  33 F6                     XOR ESI,ESI
LAB_0064a175:
0064A175  80 3E 00                  CMP byte ptr [ESI],0x0
0064A178  74 15                     JZ 0x0064a18f
0064A17A  56                        PUSH ESI
0064A17B  68 C0 17 81 00            PUSH 0x8117c0
0064A180  E8 9B 44 0E 00            CALL 0x0072e620
0064A185  83 C4 08                  ADD ESP,0x8
0064A188  85 C0                     TEST EAX,EAX
0064A18A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064A18D  75 08                     JNZ 0x0064a197
LAB_0064a18f:
0064A18F  3B 9E 04 01 00 00         CMP EBX,dword ptr [ESI + 0x104]
0064A195  74 0A                     JZ 0x0064a1a1
LAB_0064a197:
0064A197  50                        PUSH EAX
0064A198  57                        PUSH EDI
0064A199  E8 D2 6A 06 00            CALL 0x006b0c70
0064A19E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_0064a1a1:
0064A1A1  48                        DEC EAX
0064A1A2  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0064A1A5  79 BA                     JNS 0x0064a161
LAB_0064a1a7:
0064A1A7  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0064A1AA  85 C0                     TEST EAX,EAX
0064A1AC  0F 84 A1 01 00 00         JZ 0x0064a353
0064A1B2  83 CB FF                  OR EBX,0xffffffff
0064A1B5  33 C9                     XOR ECX,ECX
0064A1B7  85 C0                     TEST EAX,EAX
0064A1B9  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0064A1BC  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
0064A1BF  0F 8E B5 00 00 00         JLE 0x0064a27a
0064A1C5  3B C8                     CMP ECX,EAX
LAB_0064a1c7:
0064A1C7  73 44                     JNC 0x0064a20d
0064A1C9  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0064A1CC  8B 77 1C                  MOV ESI,dword ptr [EDI + 0x1c]
0064A1CF  0F AF C1                  IMUL EAX,ECX
0064A1D2  03 C6                     ADD EAX,ESI
0064A1D4  85 C0                     TEST EAX,EAX
0064A1D6  74 35                     JZ 0x0064a20d
0064A1D8  8B 90 08 01 00 00         MOV EDX,dword ptr [EAX + 0x108]
0064A1DE  85 D2                     TEST EDX,EDX
0064A1E0  7D 2B                     JGE 0x0064a20d
0064A1E2  8B 90 10 01 00 00         MOV EDX,dword ptr [EAX + 0x110]
0064A1E8  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0064A1EB  3B D6                     CMP EDX,ESI
0064A1ED  7C 1E                     JL 0x0064a20d
0064A1EF  8B 80 0C 01 00 00         MOV EAX,dword ptr [EAX + 0x10c]
0064A1F5  3B C6                     CMP EAX,ESI
0064A1F7  7F 14                     JG 0x0064a20d
0064A1F9  3B 45 14                  CMP EAX,dword ptr [EBP + 0x14]
0064A1FC  7E 05                     JLE 0x0064a203
0064A1FE  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0064A201  8B D9                     MOV EBX,ECX
LAB_0064a203:
0064A203  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
0064A206  7E 05                     JLE 0x0064a20d
0064A208  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0064A20B  8B D9                     MOV EBX,ECX
LAB_0064a20d:
0064A20D  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0064A210  41                        INC ECX
0064A211  3B C8                     CMP ECX,EAX
0064A213  7C B2                     JL 0x0064a1c7
0064A215  85 DB                     TEST EBX,EBX
0064A217  7C 5E                     JL 0x0064a277
0064A219  3B D8                     CMP EBX,EAX
0064A21B  73 5A                     JNC 0x0064a277
0064A21D  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0064A220  8B 77 1C                  MOV ESI,dword ptr [EDI + 0x1c]
0064A223  0F AF D3                  IMUL EDX,EBX
0064A226  03 D6                     ADD EDX,ESI
0064A228  85 D2                     TEST EDX,EDX
0064A22A  74 4B                     JZ 0x0064a277
0064A22C  8D BA 14 01 00 00         LEA EDI,[EDX + 0x114]
0064A232  83 C9 FF                  OR ECX,0xffffffff
0064A235  33 C0                     XOR EAX,EAX
0064A237  F2 AE                     SCASB.REPNE ES:EDI
0064A239  F7 D1                     NOT ECX
0064A23B  2B F9                     SUB EDI,ECX
0064A23D  8B C1                     MOV EAX,ECX
0064A23F  8B F7                     MOV ESI,EDI
0064A241  BF C0 17 81 00            MOV EDI,0x8117c0
0064A246  C1 E9 02                  SHR ECX,0x2
0064A249  F3 A5                     MOVSD.REP ES:EDI,ESI
0064A24B  8B C8                     MOV ECX,EAX
0064A24D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0064A250  83 E1 03                  AND ECX,0x3
0064A253  85 C0                     TEST EAX,EAX
0064A255  F3 A4                     MOVSB.REP ES:EDI,ESI
0064A257  74 08                     JZ 0x0064a261
0064A259  8B 8A 18 02 00 00         MOV ECX,dword ptr [EDX + 0x218]
0064A25F  89 08                     MOV dword ptr [EAX],ECX
LAB_0064a261:
0064A261  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064A264  85 C0                     TEST EAX,EAX
0064A266  0F 84 CA 00 00 00         JZ 0x0064a336
0064A26C  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
0064A272  E9 BF 00 00 00            JMP 0x0064a336
LAB_0064a277:
0064A277  83 CB FF                  OR EBX,0xffffffff
LAB_0064a27a:
0064A27A  33 C9                     XOR ECX,ECX
0064A27C  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0064A27F  85 C0                     TEST EAX,EAX
0064A281  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
0064A284  0F 8E C5 00 00 00         JLE 0x0064a34f
0064A28A  3B C8                     CMP ECX,EAX
LAB_0064a28c:
0064A28C  73 47                     JNC 0x0064a2d5
0064A28E  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0064A291  8B 77 1C                  MOV ESI,dword ptr [EDI + 0x1c]
0064A294  0F AF C1                  IMUL EAX,ECX
0064A297  03 C6                     ADD EAX,ESI
0064A299  85 C0                     TEST EAX,EAX
0064A29B  74 38                     JZ 0x0064a2d5
0064A29D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0064A2A0  8B B0 08 01 00 00         MOV ESI,dword ptr [EAX + 0x108]
0064A2A6  3B F2                     CMP ESI,EDX
0064A2A8  75 2B                     JNZ 0x0064a2d5
0064A2AA  8B 90 10 01 00 00         MOV EDX,dword ptr [EAX + 0x110]
0064A2B0  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0064A2B3  3B D6                     CMP EDX,ESI
0064A2B5  7C 1E                     JL 0x0064a2d5
0064A2B7  8B 80 0C 01 00 00         MOV EAX,dword ptr [EAX + 0x10c]
0064A2BD  3B C6                     CMP EAX,ESI
0064A2BF  7F 14                     JG 0x0064a2d5
0064A2C1  3B 45 14                  CMP EAX,dword ptr [EBP + 0x14]
0064A2C4  7E 05                     JLE 0x0064a2cb
0064A2C6  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0064A2C9  8B D9                     MOV EBX,ECX
LAB_0064a2cb:
0064A2CB  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
0064A2CE  7E 05                     JLE 0x0064a2d5
0064A2D0  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0064A2D3  8B D9                     MOV EBX,ECX
LAB_0064a2d5:
0064A2D5  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0064A2D8  41                        INC ECX
0064A2D9  3B C8                     CMP ECX,EAX
0064A2DB  7C AF                     JL 0x0064a28c
0064A2DD  85 DB                     TEST EBX,EBX
0064A2DF  7C 6E                     JL 0x0064a34f
0064A2E1  3B D8                     CMP EBX,EAX
0064A2E3  73 6A                     JNC 0x0064a34f
0064A2E5  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0064A2E8  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0064A2EB  0F AF D3                  IMUL EDX,EBX
0064A2EE  03 D1                     ADD EDX,ECX
0064A2F0  85 D2                     TEST EDX,EDX
0064A2F2  74 5B                     JZ 0x0064a34f
0064A2F4  8D BA 14 01 00 00         LEA EDI,[EDX + 0x114]
0064A2FA  83 C9 FF                  OR ECX,0xffffffff
0064A2FD  33 C0                     XOR EAX,EAX
0064A2FF  F2 AE                     SCASB.REPNE ES:EDI
0064A301  F7 D1                     NOT ECX
0064A303  2B F9                     SUB EDI,ECX
0064A305  8B C1                     MOV EAX,ECX
0064A307  8B F7                     MOV ESI,EDI
0064A309  BF C0 17 81 00            MOV EDI,0x8117c0
0064A30E  C1 E9 02                  SHR ECX,0x2
0064A311  F3 A5                     MOVSD.REP ES:EDI,ESI
0064A313  8B C8                     MOV ECX,EAX
0064A315  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0064A318  83 E1 03                  AND ECX,0x3
0064A31B  85 C0                     TEST EAX,EAX
0064A31D  F3 A4                     MOVSB.REP ES:EDI,ESI
0064A31F  74 08                     JZ 0x0064a329
0064A321  8B 8A 18 02 00 00         MOV ECX,dword ptr [EDX + 0x218]
0064A327  89 08                     MOV dword ptr [EAX],ECX
LAB_0064a329:
0064A329  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064A32C  85 C0                     TEST EAX,EAX
0064A32E  74 06                     JZ 0x0064a336
0064A330  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
LAB_0064a336:
0064A336  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064A339  85 C0                     TEST EAX,EAX
0064A33B  74 06                     JZ 0x0064a343
0064A33D  50                        PUSH EAX
0064A33E  E8 CD 3D 06 00            CALL 0x006ae110
LAB_0064a343:
0064A343  5F                        POP EDI
0064A344  5E                        POP ESI
0064A345  B8 C0 17 81 00            MOV EAX,0x8117c0
0064A34A  5B                        POP EBX
0064A34B  8B E5                     MOV ESP,EBP
0064A34D  5D                        POP EBP
0064A34E  C3                        RET
LAB_0064a34f:
0064A34F  85 FF                     TEST EDI,EDI
0064A351  74 06                     JZ 0x0064a359
LAB_0064a353:
0064A353  57                        PUSH EDI
0064A354  E8 B7 3D 06 00            CALL 0x006ae110
LAB_0064a359:
0064A359  5F                        POP EDI
0064A35A  5E                        POP ESI
0064A35B  33 C0                     XOR EAX,EAX
0064A35D  5B                        POP EBX
0064A35E  8B E5                     MOV ESP,EBP
0064A360  5D                        POP EBP
0064A361  C3                        RET
