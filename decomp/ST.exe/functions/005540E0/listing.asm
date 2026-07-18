FUN_005540e0:
005540E0  55                        PUSH EBP
005540E1  8B EC                     MOV EBP,ESP
005540E3  81 EC 58 06 00 00         SUB ESP,0x658
005540E9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005540EE  53                        PUSH EBX
005540EF  56                        PUSH ESI
005540F0  57                        PUSH EDI
005540F1  33 FF                     XOR EDI,EDI
005540F3  8D 55 B8                  LEA EDX,[EBP + -0x48]
005540F6  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005540F9  57                        PUSH EDI
005540FA  52                        PUSH EDX
005540FB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005540FE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00554101  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00554107  E8 E4 96 1D 00            CALL 0x0072d7f0
0055410C  8B F0                     MOV ESI,EAX
0055410E  83 C4 08                  ADD ESP,0x8
00554111  3B F7                     CMP ESI,EDI
00554113  0F 85 74 02 00 00         JNZ 0x0055438d
00554119  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055411C  50                        PUSH EAX
0055411D  E8 EE 6A 15 00            CALL 0x006aac10
00554122  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00554125  33 C0                     XOR EAX,EAX
00554127  A0 4E 87 80 00            MOV AL,[0x0080874e]
0055412C  48                        DEC EAX
0055412D  0F 84 39 01 00 00         JZ 0x0055426c
00554133  48                        DEC EAX
00554134  0F 84 9E 00 00 00         JZ 0x005541d8
0055413A  48                        DEC EAX
0055413B  74 1A                     JZ 0x00554157
0055413D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00554143  6A 2F                     PUSH 0x2f
00554145  68 0C 8F 7C 00            PUSH 0x7c8f0c
0055414A  51                        PUSH ECX
0055414B  6A FF                     PUSH -0x1
0055414D  E8 EE 1C 15 00            CALL 0x006a5e40
00554152  E9 CD 01 00 00            JMP 0x00554324
LAB_00554157:
00554157  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055415A  BF 00 8F 7C 00            MOV EDI,0x7c8f00
0055415F  83 C9 FF                  OR ECX,0xffffffff
00554162  33 C0                     XOR EAX,EAX
00554164  F2 AE                     SCASB.REPNE ES:EDI
00554166  F7 D1                     NOT ECX
00554168  2B F9                     SUB EDI,ECX
0055416A  8D 95 AD FB FF FF         LEA EDX,[EBP + 0xfffffbad]
00554170  8B C1                     MOV EAX,ECX
00554172  8B F7                     MOV ESI,EDI
00554174  8B FA                     MOV EDI,EDX
00554176  C6 85 AC FB FF FF 01      MOV byte ptr [EBP + 0xfffffbac],0x1
0055417D  C1 E9 02                  SHR ECX,0x2
00554180  F3 A5                     MOVSD.REP ES:EDI,ESI
00554182  8B 1D 80 67 80 00         MOV EBX,dword ptr [0x00806780]
00554188  8B C8                     MOV ECX,EAX
0055418A  83 E1 03                  AND ECX,0x3
0055418D  F3 A4                     MOVSB.REP ES:EDI,ESI
0055418F  8D 8D AC FB FF FF         LEA ECX,[EBP + 0xfffffbac]
00554195  51                        PUSH ECX
00554196  68 10 2D 6F 00            PUSH 0x6f2d10
0055419B  8B CB                     MOV ECX,EBX
0055419D  E8 0E D1 19 00            CALL 0x006f12b0
005541A2  8B CB                     MOV ECX,EBX
005541A4  E8 E7 E5 19 00            CALL 0x006f2790
005541A9  85 C0                     TEST EAX,EAX
005541AB  74 12                     JZ 0x005541bf
LAB_005541ad:
005541AD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005541B0  8B CB                     MOV ECX,EBX
005541B2  42                        INC EDX
005541B3  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005541B6  E8 D5 E5 19 00            CALL 0x006f2790
005541BB  85 C0                     TEST EAX,EAX
005541BD  75 EE                     JNZ 0x005541ad
LAB_005541bf:
005541BF  6A 01                     PUSH 0x1
005541C1  6A 00                     PUSH 0x0
005541C3  E8 F8 A4 1D 00            CALL 0x0072e6c0
005541C8  33 D2                     XOR EDX,EDX
005541CA  F7 75 F8                  DIV dword ptr [EBP + -0x8]
005541CD  42                        INC EDX
005541CE  52                        PUSH EDX
005541CF  6A 01                     PUSH 0x1
005541D1  68 00 8F 7C 00            PUSH 0x7c8f00
005541D6  EB 7F                     JMP 0x00554257
LAB_005541d8:
005541D8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005541DB  BF F4 8E 7C 00            MOV EDI,0x7c8ef4
005541E0  83 C9 FF                  OR ECX,0xffffffff
005541E3  33 C0                     XOR EAX,EAX
005541E5  F2 AE                     SCASB.REPNE ES:EDI
005541E7  F7 D1                     NOT ECX
005541E9  2B F9                     SUB EDI,ECX
005541EB  8D 95 B1 FD FF FF         LEA EDX,[EBP + 0xfffffdb1]
005541F1  8B C1                     MOV EAX,ECX
005541F3  8B F7                     MOV ESI,EDI
005541F5  8B FA                     MOV EDI,EDX
005541F7  C6 85 B0 FD FF FF 01      MOV byte ptr [EBP + 0xfffffdb0],0x1
005541FE  C1 E9 02                  SHR ECX,0x2
00554201  F3 A5                     MOVSD.REP ES:EDI,ESI
00554203  8B 1D 80 67 80 00         MOV EBX,dword ptr [0x00806780]
00554209  8B C8                     MOV ECX,EAX
0055420B  83 E1 03                  AND ECX,0x3
0055420E  F3 A4                     MOVSB.REP ES:EDI,ESI
00554210  8D 8D B0 FD FF FF         LEA ECX,[EBP + 0xfffffdb0]
00554216  51                        PUSH ECX
00554217  68 10 2D 6F 00            PUSH 0x6f2d10
0055421C  8B CB                     MOV ECX,EBX
0055421E  E8 8D D0 19 00            CALL 0x006f12b0
00554223  8B CB                     MOV ECX,EBX
00554225  E8 66 E5 19 00            CALL 0x006f2790
0055422A  85 C0                     TEST EAX,EAX
0055422C  74 12                     JZ 0x00554240
LAB_0055422e:
0055422E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00554231  8B CB                     MOV ECX,EBX
00554233  42                        INC EDX
00554234  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00554237  E8 54 E5 19 00            CALL 0x006f2790
0055423C  85 C0                     TEST EAX,EAX
0055423E  75 EE                     JNZ 0x0055422e
LAB_00554240:
00554240  6A 01                     PUSH 0x1
00554242  6A 00                     PUSH 0x0
00554244  E8 77 A4 1D 00            CALL 0x0072e6c0
00554249  33 D2                     XOR EDX,EDX
0055424B  F7 75 F8                  DIV dword ptr [EBP + -0x8]
0055424E  42                        INC EDX
0055424F  52                        PUSH EDX
00554250  6A 01                     PUSH 0x1
00554252  68 F4 8E 7C 00            PUSH 0x7c8ef4
LAB_00554257:
00554257  E8 A4 E9 19 00            CALL 0x006f2c00
0055425C  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
00554262  83 C4 0C                  ADD ESP,0xc
00554265  50                        PUSH EAX
00554266  52                        PUSH EDX
00554267  E9 A9 00 00 00            JMP 0x00554315
LAB_0055426c:
0055426C  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055426F  BF E8 8E 7C 00            MOV EDI,0x7c8ee8
00554274  83 C9 FF                  OR ECX,0xffffffff
00554277  33 C0                     XOR EAX,EAX
00554279  F2 AE                     SCASB.REPNE ES:EDI
0055427B  F7 D1                     NOT ECX
0055427D  2B F9                     SUB EDI,ECX
0055427F  8D 95 A9 F9 FF FF         LEA EDX,[EBP + 0xfffff9a9]
00554285  8B C1                     MOV EAX,ECX
00554287  8B F7                     MOV ESI,EDI
00554289  8B FA                     MOV EDI,EDX
0055428B  C6 85 A8 F9 FF FF 01      MOV byte ptr [EBP + 0xfffff9a8],0x1
00554292  C1 E9 02                  SHR ECX,0x2
00554295  F3 A5                     MOVSD.REP ES:EDI,ESI
00554297  8B 1D 80 67 80 00         MOV EBX,dword ptr [0x00806780]
0055429D  8B C8                     MOV ECX,EAX
0055429F  83 E1 03                  AND ECX,0x3
005542A2  F3 A4                     MOVSB.REP ES:EDI,ESI
005542A4  8D 8D A8 F9 FF FF         LEA ECX,[EBP + 0xfffff9a8]
005542AA  51                        PUSH ECX
005542AB  68 10 2D 6F 00            PUSH 0x6f2d10
005542B0  8B CB                     MOV ECX,EBX
005542B2  E8 F9 CF 19 00            CALL 0x006f12b0
005542B7  8B CB                     MOV ECX,EBX
005542B9  E8 D2 E4 19 00            CALL 0x006f2790
005542BE  85 C0                     TEST EAX,EAX
005542C0  74 12                     JZ 0x005542d4
LAB_005542c2:
005542C2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005542C5  8B CB                     MOV ECX,EBX
005542C7  42                        INC EDX
005542C8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005542CB  E8 C0 E4 19 00            CALL 0x006f2790
005542D0  85 C0                     TEST EAX,EAX
005542D2  75 EE                     JNZ 0x005542c2
LAB_005542d4:
005542D4  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005542D7  85 F6                     TEST ESI,ESI
005542D9  75 15                     JNZ 0x005542f0
005542DB  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
005542E1  6A 24                     PUSH 0x24
005542E3  68 0C 8F 7C 00            PUSH 0x7c8f0c
005542E8  52                        PUSH EDX
005542E9  6A FF                     PUSH -0x1
005542EB  E8 50 1B 15 00            CALL 0x006a5e40
LAB_005542f0:
005542F0  6A 01                     PUSH 0x1
005542F2  6A 00                     PUSH 0x0
005542F4  E8 C7 A3 1D 00            CALL 0x0072e6c0
005542F9  33 D2                     XOR EDX,EDX
005542FB  F7 F6                     DIV ESI
005542FD  42                        INC EDX
005542FE  52                        PUSH EDX
005542FF  6A 01                     PUSH 0x1
00554301  68 E8 8E 7C 00            PUSH 0x7c8ee8
00554306  E8 F5 E8 19 00            CALL 0x006f2c00
0055430B  83 C4 0C                  ADD ESP,0xc
0055430E  50                        PUSH EAX
0055430F  A1 80 67 80 00            MOV EAX,[0x00806780]
00554314  50                        PUSH EAX
LAB_00554315:
00554315  E8 D6 66 1B 00            CALL 0x0070a9f0
0055431A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055431D  83 C4 10                  ADD ESP,0x10
00554320  33 FF                     XOR EDI,EDI
00554322  89 01                     MOV dword ptr [ECX],EAX
LAB_00554324:
00554324  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00554327  8A 15 D9 7D 80 00         MOV DL,byte ptr [0x00807dd9]
0055432D  52                        PUSH EDX
0055432E  57                        PUSH EDI
0055432F  8B 08                     MOV ECX,dword ptr [EAX]
00554331  51                        PUSH ECX
00554332  E8 9C 08 EB FF            CALL 0x00404bd3
00554337  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055433A  83 C4 0C                  ADD ESP,0xc
0055433D  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
00554340  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00554343  6A 01                     PUSH 0x1
00554345  57                        PUSH EDI
00554346  8B 08                     MOV ECX,dword ptr [EAX]
00554348  57                        PUSH EDI
00554349  57                        PUSH EDI
0055434A  57                        PUSH EDI
0055434B  57                        PUSH EDI
0055434C  51                        PUSH ECX
0055434D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00554350  E8 4B C8 1B 00            CALL 0x00710ba0
00554355  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00554358  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0055435B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055435E  3B C7                     CMP EAX,EDI
00554360  74 0F                     JZ 0x00554371
00554362  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00554365  50                        PUSH EAX
00554366  E8 DB 03 EB FF            CALL 0x00404746
0055436B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055436E  89 41 4C                  MOV dword ptr [ECX + 0x4c],EAX
LAB_00554371:
00554371  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00554374  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00554377  89 42 48                  MOV dword ptr [EDX + 0x48],EAX
0055437A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0055437D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00554380  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00554386  5F                        POP EDI
00554387  5E                        POP ESI
00554388  5B                        POP EBX
00554389  8B E5                     MOV ESP,EBP
0055438B  5D                        POP EBP
0055438C  C3                        RET
LAB_0055438d:
0055438D  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00554390  68 D4 8E 7C 00            PUSH 0x7c8ed4
00554395  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055439A  56                        PUSH ESI
0055439B  57                        PUSH EDI
0055439C  6A 3A                     PUSH 0x3a
0055439E  68 0C 8F 7C 00            PUSH 0x7c8f0c
005543A3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005543A9  E8 22 91 15 00            CALL 0x006ad4d0
005543AE  83 C4 18                  ADD ESP,0x18
005543B1  85 C0                     TEST EAX,EAX
005543B3  74 01                     JZ 0x005543b6
005543B5  CC                        INT3
LAB_005543b6:
005543B6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005543B9  3B C7                     CMP EAX,EDI
005543BB  74 2E                     JZ 0x005543eb
005543BD  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005543C3  50                        PUSH EAX
005543C4  E8 17 DD 19 00            CALL 0x006f20e0
005543C9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005543CC  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005543CF  3B C7                     CMP EAX,EDI
005543D1  74 0F                     JZ 0x005543e2
005543D3  50                        PUSH EAX
005543D4  E8 87 C1 1B 00            CALL 0x00710560
005543D9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005543DC  83 C4 04                  ADD ESP,0x4
005543DF  89 79 08                  MOV dword ptr [ECX + 0x8],EDI
LAB_005543e2:
005543E2  8D 55 FC                  LEA EDX,[EBP + -0x4]
005543E5  52                        PUSH EDX
005543E6  E8 75 6C 15 00            CALL 0x006ab060
LAB_005543eb:
005543EB  6A 41                     PUSH 0x41
005543ED  68 0C 8F 7C 00            PUSH 0x7c8f0c
005543F2  57                        PUSH EDI
005543F3  56                        PUSH ESI
005543F4  E8 47 1A 15 00            CALL 0x006a5e40
005543F9  5F                        POP EDI
005543FA  5E                        POP ESI
005543FB  33 C0                     XOR EAX,EAX
005543FD  5B                        POP EBX
005543FE  8B E5                     MOV ESP,EBP
00554400  5D                        POP EBP
00554401  C3                        RET
