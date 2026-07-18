FUN_00555040:
00555040  55                        PUSH EBP
00555041  8B EC                     MOV EBP,ESP
00555043  81 EC 4C 04 00 00         SUB ESP,0x44c
00555049  53                        PUSH EBX
0055504A  56                        PUSH ESI
0055504B  8B F1                     MOV ESI,ECX
0055504D  57                        PUSH EDI
0055504E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00555051  E8 45 D4 EA FF            CALL 0x0040249b
00555056  83 7E 3C FF               CMP dword ptr [ESI + 0x3c],-0x1
0055505A  0F 8C E3 03 00 00         JL 0x00555443
00555060  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00555065  8D 55 B8                  LEA EDX,[EBP + -0x48]
00555068  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0055506B  6A 00                     PUSH 0x0
0055506D  52                        PUSH EDX
0055506E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00555071  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00555077  E8 74 87 1D 00            CALL 0x0072d7f0
0055507C  8B F0                     MOV ESI,EAX
0055507E  83 C4 08                  ADD ESP,0x8
00555081  85 F6                     TEST ESI,ESI
00555083  0F 85 7C 03 00 00         JNZ 0x00555405
00555089  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055508C  83 F8 03                  CMP EAX,0x3
0055508F  0F 87 4B 03 00 00         JA 0x005553e0
switchD_00555095::switchD:
00555095  FF 24 85 4C 54 55 00      JMP dword ptr [EAX*0x4 + 0x55544c]
switchD_00555095::caseD_0:
0055509C  A1 18 76 80 00            MOV EAX,[0x00807618]
005550A1  50                        PUSH EAX
005550A2  68 7A 26 00 00            PUSH 0x267a
005550A7  E8 94 B0 15 00            CALL 0x006b0140
005550AC  8B F8                     MOV EDI,EAX
005550AE  83 C9 FF                  OR ECX,0xffffffff
005550B1  33 C0                     XOR EAX,EAX
005550B3  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
005550B9  F2 AE                     SCASB.REPNE ES:EDI
005550BB  F7 D1                     NOT ECX
005550BD  2B F9                     SUB EDI,ECX
005550BF  8B C1                     MOV EAX,ECX
005550C1  8B F7                     MOV ESI,EDI
005550C3  8B FA                     MOV EDI,EDX
005550C5  C1 E9 02                  SHR ECX,0x2
005550C8  F3 A5                     MOVSD.REP ES:EDI,ESI
005550CA  8B C8                     MOV ECX,EAX
005550CC  83 E1 03                  AND ECX,0x3
005550CF  F3 A4                     MOVSB.REP ES:EDI,ESI
005550D1  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005550D7  51                        PUSH ECX
005550D8  68 7E 26 00 00            PUSH 0x267e
005550DD  E8 5E B0 15 00            CALL 0x006b0140
005550E2  8B F8                     MOV EDI,EAX
005550E4  83 C9 FF                  OR ECX,0xffffffff
005550E7  33 C0                     XOR EAX,EAX
005550E9  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
005550EF  F2 AE                     SCASB.REPNE ES:EDI
005550F1  F7 D1                     NOT ECX
005550F3  2B F9                     SUB EDI,ECX
005550F5  8B F7                     MOV ESI,EDI
005550F7  8B D9                     MOV EBX,ECX
005550F9  8B FA                     MOV EDI,EDX
005550FB  83 C9 FF                  OR ECX,0xffffffff
005550FE  F2 AE                     SCASB.REPNE ES:EDI
00555100  8B CB                     MOV ECX,EBX
00555102  4F                        DEC EDI
00555103  C1 E9 02                  SHR ECX,0x2
00555106  F3 A5                     MOVSD.REP ES:EDI,ESI
00555108  8B CB                     MOV ECX,EBX
0055510A  8D 85 B4 FB FF FF         LEA EAX,[EBP + 0xfffffbb4]
00555110  83 E1 03                  AND ECX,0x3
00555113  50                        PUSH EAX
00555114  F3 A4                     MOVSB.REP ES:EDI,ESI
00555116  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00555119  E8 63 F2 EA FF            CALL 0x00404381
0055511E  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00555121  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00555127  5F                        POP EDI
00555128  5E                        POP ESI
00555129  5B                        POP EBX
0055512A  8B E5                     MOV ESP,EBP
0055512C  5D                        POP EBP
0055512D  C2 0C 00                  RET 0xc
switchD_00555095::caseD_1:
00555130  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00555136  51                        PUSH ECX
00555137  68 7A 26 00 00            PUSH 0x267a
0055513C  E8 FF AF 15 00            CALL 0x006b0140
00555141  8B F8                     MOV EDI,EAX
00555143  83 C9 FF                  OR ECX,0xffffffff
00555146  33 C0                     XOR EAX,EAX
00555148  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
0055514E  F2 AE                     SCASB.REPNE ES:EDI
00555150  F7 D1                     NOT ECX
00555152  2B F9                     SUB EDI,ECX
00555154  8B C1                     MOV EAX,ECX
00555156  8B F7                     MOV ESI,EDI
00555158  8B FA                     MOV EDI,EDX
0055515A  C1 E9 02                  SHR ECX,0x2
0055515D  F3 A5                     MOVSD.REP ES:EDI,ESI
0055515F  8B C8                     MOV ECX,EAX
00555161  83 E1 03                  AND ECX,0x3
00555164  F3 A4                     MOVSB.REP ES:EDI,ESI
00555166  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0055516C  51                        PUSH ECX
0055516D  68 7B 26 00 00            PUSH 0x267b
00555172  E8 C9 AF 15 00            CALL 0x006b0140
00555177  8B F8                     MOV EDI,EAX
00555179  83 C9 FF                  OR ECX,0xffffffff
0055517C  33 C0                     XOR EAX,EAX
0055517E  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
00555184  F2 AE                     SCASB.REPNE ES:EDI
00555186  F7 D1                     NOT ECX
00555188  2B F9                     SUB EDI,ECX
0055518A  8B F7                     MOV ESI,EDI
0055518C  8B D9                     MOV EBX,ECX
0055518E  8B FA                     MOV EDI,EDX
00555190  83 C9 FF                  OR ECX,0xffffffff
00555193  F2 AE                     SCASB.REPNE ES:EDI
00555195  8B CB                     MOV ECX,EBX
00555197  4F                        DEC EDI
00555198  C1 E9 02                  SHR ECX,0x2
0055519B  F3 A5                     MOVSD.REP ES:EDI,ESI
0055519D  8B CB                     MOV ECX,EBX
0055519F  83 E1 03                  AND ECX,0x3
005551A2  F3 A4                     MOVSB.REP ES:EDI,ESI
005551A4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005551A7  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
005551AA  85 C0                     TEST EAX,EAX
005551AC  75 15                     JNZ 0x005551c3
005551AE  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
005551B1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005551B4  3B C1                     CMP EAX,ECX
005551B6  76 05                     JBE 0x005551bd
005551B8  8B C1                     MOV EAX,ECX
005551BA  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_005551bd:
005551BD  85 C0                     TEST EAX,EAX
005551BF  75 1F                     JNZ 0x005551e0
005551C1  EB 18                     JMP 0x005551db
LAB_005551c3:
005551C3  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005551C9  8B 7E 44                  MOV EDI,dword ptr [ESI + 0x44]
005551CC  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
005551CF  2B C7                     SUB EAX,EDI
005551D1  3B C1                     CMP EAX,ECX
005551D3  76 02                     JBE 0x005551d7
005551D5  8B C1                     MOV EAX,ECX
LAB_005551d7:
005551D7  85 C0                     TEST EAX,EAX
005551D9  75 05                     JNZ 0x005551e0
LAB_005551db:
005551DB  B8 01 00 00 00            MOV EAX,0x1
LAB_005551e0:
005551E0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005551E3  33 D2                     XOR EDX,EDX
005551E5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005551E8  C1 E0 02                  SHL EAX,0x2
005551EB  F7 F1                     DIV ECX
005551ED  8B D8                     MOV EBX,EAX
005551EF  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
005551F2  3B D8                     CMP EBX,EAX
005551F4  74 66                     JZ 0x0055525c
005551F6  85 DB                     TEST EBX,EBX
005551F8  7E 3F                     JLE 0x00555239
005551FA  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_005551fd:
005551FD  BF EC 8F 7C 00            MOV EDI,0x7c8fec
00555202  83 C9 FF                  OR ECX,0xffffffff
00555205  33 C0                     XOR EAX,EAX
00555207  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
0055520D  F2 AE                     SCASB.REPNE ES:EDI
0055520F  F7 D1                     NOT ECX
00555211  2B F9                     SUB EDI,ECX
00555213  8B F7                     MOV ESI,EDI
00555215  8B FA                     MOV EDI,EDX
00555217  8B D1                     MOV EDX,ECX
00555219  83 C9 FF                  OR ECX,0xffffffff
0055521C  F2 AE                     SCASB.REPNE ES:EDI
0055521E  8B CA                     MOV ECX,EDX
00555220  4F                        DEC EDI
00555221  C1 E9 02                  SHR ECX,0x2
00555224  F3 A5                     MOVSD.REP ES:EDI,ESI
00555226  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00555229  8B CA                     MOV ECX,EDX
0055522B  83 E1 03                  AND ECX,0x3
0055522E  48                        DEC EAX
0055522F  F3 A4                     MOVSB.REP ES:EDI,ESI
00555231  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00555234  75 C7                     JNZ 0x005551fd
00555236  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00555239:
00555239  8D 85 B4 FB FF FF         LEA EAX,[EBP + 0xfffffbb4]
0055523F  8B CE                     MOV ECX,ESI
00555241  50                        PUSH EAX
00555242  E8 3A F1 EA FF            CALL 0x00404381
00555247  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0055524A  89 5E 50                  MOV dword ptr [ESI + 0x50],EBX
0055524D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00555253  5F                        POP EDI
00555254  5E                        POP ESI
00555255  5B                        POP EBX
00555256  8B E5                     MOV ESP,EBP
00555258  5D                        POP EBP
00555259  C2 0C 00                  RET 0xc
LAB_0055525c:
0055525C  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
0055525F  85 C0                     TEST EAX,EAX
00555261  0F 84 8C 01 00 00         JZ 0x005553f3
00555267  8B 4E 54                  MOV ECX,dword ptr [ESI + 0x54]
0055526A  51                        PUSH ECX
0055526B  FF D0                     CALL EAX
0055526D  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00555270  83 C4 04                  ADD ESP,0x4
00555273  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00555279  5F                        POP EDI
0055527A  5E                        POP ESI
0055527B  5B                        POP EBX
0055527C  8B E5                     MOV ESP,EBP
0055527E  5D                        POP EBP
0055527F  C2 0C 00                  RET 0xc
switchD_00555095::caseD_2:
00555282  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00555285  C7 43 3C FF FF FF FF      MOV dword ptr [EBX + 0x3c],0xffffffff
0055528C  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00555292  52                        PUSH EDX
00555293  68 7A 26 00 00            PUSH 0x267a
00555298  E8 A3 AE 15 00            CALL 0x006b0140
0055529D  8B F8                     MOV EDI,EAX
0055529F  83 C9 FF                  OR ECX,0xffffffff
005552A2  33 C0                     XOR EAX,EAX
005552A4  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
005552AA  F2 AE                     SCASB.REPNE ES:EDI
005552AC  F7 D1                     NOT ECX
005552AE  2B F9                     SUB EDI,ECX
005552B0  8B C1                     MOV EAX,ECX
005552B2  8B F7                     MOV ESI,EDI
005552B4  8B FA                     MOV EDI,EDX
005552B6  C1 E9 02                  SHR ECX,0x2
005552B9  F3 A5                     MOVSD.REP ES:EDI,ESI
005552BB  8B C8                     MOV ECX,EAX
005552BD  83 E1 03                  AND ECX,0x3
005552C0  F3 A4                     MOVSB.REP ES:EDI,ESI
005552C2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005552C8  51                        PUSH ECX
005552C9  68 7C 26 00 00            PUSH 0x267c
005552CE  E8 6D AE 15 00            CALL 0x006b0140
005552D3  8B F8                     MOV EDI,EAX
005552D5  83 C9 FF                  OR ECX,0xffffffff
005552D8  33 C0                     XOR EAX,EAX
005552DA  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
005552E0  F2 AE                     SCASB.REPNE ES:EDI
005552E2  F7 D1                     NOT ECX
005552E4  2B F9                     SUB EDI,ECX
005552E6  8B F7                     MOV ESI,EDI
005552E8  8B FA                     MOV EDI,EDX
005552EA  8B D1                     MOV EDX,ECX
005552EC  83 C9 FF                  OR ECX,0xffffffff
005552EF  F2 AE                     SCASB.REPNE ES:EDI
005552F1  8B CA                     MOV ECX,EDX
005552F3  4F                        DEC EDI
005552F4  C1 E9 02                  SHR ECX,0x2
005552F7  F3 A5                     MOVSD.REP ES:EDI,ESI
005552F9  8B CA                     MOV ECX,EDX
005552FB  83 E1 03                  AND ECX,0x3
005552FE  F3 A4                     MOVSB.REP ES:EDI,ESI
00555300  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00555303  85 FF                     TEST EDI,EDI
00555305  0F 84 B5 00 00 00         JZ 0x005553c0
0055530B  E9 85 00 00 00            JMP 0x00555395
switchD_00555095::caseD_3:
00555310  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00555313  C7 43 3C FF FF FF FF      MOV dword ptr [EBX + 0x3c],0xffffffff
0055531A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00555320  51                        PUSH ECX
00555321  68 7A 26 00 00            PUSH 0x267a
00555326  E8 15 AE 15 00            CALL 0x006b0140
0055532B  8B F8                     MOV EDI,EAX
0055532D  83 C9 FF                  OR ECX,0xffffffff
00555330  33 C0                     XOR EAX,EAX
00555332  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
00555338  F2 AE                     SCASB.REPNE ES:EDI
0055533A  F7 D1                     NOT ECX
0055533C  2B F9                     SUB EDI,ECX
0055533E  8B C1                     MOV EAX,ECX
00555340  8B F7                     MOV ESI,EDI
00555342  8B FA                     MOV EDI,EDX
00555344  C1 E9 02                  SHR ECX,0x2
00555347  F3 A5                     MOVSD.REP ES:EDI,ESI
00555349  8B C8                     MOV ECX,EAX
0055534B  83 E1 03                  AND ECX,0x3
0055534E  F3 A4                     MOVSB.REP ES:EDI,ESI
00555350  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00555356  51                        PUSH ECX
00555357  68 7D 26 00 00            PUSH 0x267d
0055535C  E8 DF AD 15 00            CALL 0x006b0140
00555361  8B F8                     MOV EDI,EAX
00555363  83 C9 FF                  OR ECX,0xffffffff
00555366  33 C0                     XOR EAX,EAX
00555368  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
0055536E  F2 AE                     SCASB.REPNE ES:EDI
00555370  F7 D1                     NOT ECX
00555372  2B F9                     SUB EDI,ECX
00555374  8B F7                     MOV ESI,EDI
00555376  8B FA                     MOV EDI,EDX
00555378  8B D1                     MOV EDX,ECX
0055537A  83 C9 FF                  OR ECX,0xffffffff
0055537D  F2 AE                     SCASB.REPNE ES:EDI
0055537F  8B CA                     MOV ECX,EDX
00555381  4F                        DEC EDI
00555382  C1 E9 02                  SHR ECX,0x2
00555385  F3 A5                     MOVSD.REP ES:EDI,ESI
00555387  8B CA                     MOV ECX,EDX
00555389  83 E1 03                  AND ECX,0x3
0055538C  F3 A4                     MOVSB.REP ES:EDI,ESI
0055538E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00555391  85 FF                     TEST EDI,EDI
00555393  74 2B                     JZ 0x005553c0
LAB_00555395:
00555395  83 C9 FF                  OR ECX,0xffffffff
00555398  33 C0                     XOR EAX,EAX
0055539A  F2 AE                     SCASB.REPNE ES:EDI
0055539C  F7 D1                     NOT ECX
0055539E  2B F9                     SUB EDI,ECX
005553A0  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
005553A6  8B F7                     MOV ESI,EDI
005553A8  8B FA                     MOV EDI,EDX
005553AA  8B D1                     MOV EDX,ECX
005553AC  83 C9 FF                  OR ECX,0xffffffff
005553AF  F2 AE                     SCASB.REPNE ES:EDI
005553B1  8B CA                     MOV ECX,EDX
005553B3  4F                        DEC EDI
005553B4  C1 E9 02                  SHR ECX,0x2
005553B7  F3 A5                     MOVSD.REP ES:EDI,ESI
005553B9  8B CA                     MOV ECX,EDX
005553BB  83 E1 03                  AND ECX,0x3
005553BE  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005553c0:
005553C0  8D 85 B4 FB FF FF         LEA EAX,[EBP + 0xfffffbb4]
005553C6  8B CB                     MOV ECX,EBX
005553C8  50                        PUSH EAX
005553C9  E8 62 BE EA FF            CALL 0x00401230
005553CE  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005553D1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005553D7  5F                        POP EDI
005553D8  5E                        POP ESI
005553D9  5B                        POP EBX
005553DA  8B E5                     MOV ESP,EBP
005553DC  5D                        POP EBP
005553DD  C2 0C 00                  RET 0xc
switchD_00555095::default:
005553E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005553E3  8B 41 58                  MOV EAX,dword ptr [ECX + 0x58]
005553E6  85 C0                     TEST EAX,EAX
005553E8  74 09                     JZ 0x005553f3
005553EA  8B 49 54                  MOV ECX,dword ptr [ECX + 0x54]
005553ED  51                        PUSH ECX
005553EE  FF D0                     CALL EAX
005553F0  83 C4 04                  ADD ESP,0x4
LAB_005553f3:
005553F3  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005553F6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005553FC  5F                        POP EDI
005553FD  5E                        POP ESI
005553FE  5B                        POP EBX
005553FF  8B E5                     MOV ESP,EBP
00555401  5D                        POP EBP
00555402  C2 0C 00                  RET 0xc
LAB_00555405:
00555405  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00555408  68 D0 8F 7C 00            PUSH 0x7c8fd0
0055540D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00555412  56                        PUSH ESI
00555413  6A 00                     PUSH 0x0
00555415  68 4A 01 00 00            PUSH 0x14a
0055541A  68 0C 8F 7C 00            PUSH 0x7c8f0c
0055541F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00555424  E8 A7 80 15 00            CALL 0x006ad4d0
00555429  83 C4 18                  ADD ESP,0x18
0055542C  85 C0                     TEST EAX,EAX
0055542E  74 01                     JZ 0x00555431
00555430  CC                        INT3
LAB_00555431:
00555431  68 4B 01 00 00            PUSH 0x14b
00555436  68 0C 8F 7C 00            PUSH 0x7c8f0c
0055543B  6A 00                     PUSH 0x0
0055543D  56                        PUSH ESI
0055543E  E8 FD 09 15 00            CALL 0x006a5e40
LAB_00555443:
00555443  5F                        POP EDI
00555444  5E                        POP ESI
00555445  5B                        POP EBX
00555446  8B E5                     MOV ESP,EBP
00555448  5D                        POP EBP
00555449  C2 0C 00                  RET 0xc
