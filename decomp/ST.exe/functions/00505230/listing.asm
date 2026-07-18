CPanelTy::PaintMunition:
00505230  55                        PUSH EBP
00505231  8B EC                     MOV EBP,ESP
00505233  83 EC 6C                  SUB ESP,0x6c
00505236  A0 4E 87 80 00            MOV AL,[0x0080874e]
0050523B  8A 91 D4 09 00 00         MOV DL,byte ptr [ECX + 0x9d4]
00505241  53                        PUSH EBX
00505242  56                        PUSH ESI
00505243  3C 01                     CMP AL,0x1
00505245  57                        PUSH EDI
00505246  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00505249  75 0E                     JNZ 0x00505259
0050524B  80 FA 01                  CMP DL,0x1
0050524E  0F 95 C0                  SETNZ AL
00505251  83 C0 05                  ADD EAX,0x5
00505254  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
00505257  EB 0C                     JMP 0x00505265
LAB_00505259:
00505259  80 FA 01                  CMP DL,0x1
0050525C  0F 94 C1                  SETZ CL
0050525F  83 C1 05                  ADD ECX,0x5
00505262  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
LAB_00505265:
00505265  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0050526B  8D 4D 98                  LEA ECX,[EBP + -0x68]
0050526E  8D 45 94                  LEA EAX,[EBP + -0x6c]
00505271  6A 00                     PUSH 0x0
00505273  51                        PUSH ECX
00505274  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
00505277  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050527C  E8 6F 85 22 00            CALL 0x0072d7f0
00505281  8B F0                     MOV ESI,EAX
00505283  83 C4 08                  ADD ESP,0x8
00505286  85 F6                     TEST ESI,ESI
00505288  0F 85 B2 04 00 00         JNZ 0x00505740
0050528E  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
00505291  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00505294  8B 96 F9 09 00 00         MOV EDX,dword ptr [ESI + 0x9f9]
0050529A  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
005052A0  52                        PUSH EDX
005052A1  6A 01                     PUSH 0x1
005052A3  6A 36                     PUSH 0x36
005052A5  50                        PUSH EAX
005052A6  51                        PUSH ECX
005052A7  E8 7D DF EF FF            CALL 0x00403229
005052AC  83 C4 14                  ADD ESP,0x14
005052AF  32 C9                     XOR CL,CL
005052B1  83 CA FF                  OR EDX,0xffffffff
005052B4  8D BE 11 0C 00 00         LEA EDI,[ESI + 0xc11]
005052BA  88 4D FE                  MOV byte ptr [EBP + -0x2],CL
005052BD  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005052C0  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
LAB_005052c3:
005052C3  8A 5D FF                  MOV BL,byte ptr [EBP + -0x1]
005052C6  33 C0                     XOR EAX,EAX
005052C8  80 FB 05                  CMP BL,0x5
005052CB  75 1E                     JNZ 0x005052eb
005052CD  8D 5A FE                  LEA EBX,[EDX + -0x2]
005052D0  83 FB 06                  CMP EBX,0x6
005052D3  77 34                     JA 0x00505309
005052D5  8D 5A FE                  LEA EBX,[EDX + -0x2]
switchD_005052d8::switchD:
005052D8  FF 24 9D 88 57 50 00      JMP dword ptr [EBX*0x4 + 0x505788]
switchD_005052d8::caseD_4:
005052DF  C6 45 F0 03               MOV byte ptr [EBP + -0x10],0x3
005052E3  EB 27                     JMP 0x0050530c
switchD_005052d8::caseD_5:
005052E5  C6 45 F0 04               MOV byte ptr [EBP + -0x10],0x4
005052E9  EB 21                     JMP 0x0050530c
LAB_005052eb:
005052EB  83 FA 08                  CMP EDX,0x8
005052EE  77 19                     JA 0x00505309
switchD_005052f0::switchD:
005052F0  FF 24 95 A4 57 50 00      JMP dword ptr [EDX*0x4 + 0x5057a4]
switchD_005052f0::caseD_2:
005052F7  C6 45 F0 01               MOV byte ptr [EBP + -0x10],0x1
005052FB  EB 0F                     JMP 0x0050530c
switchD_005052f0::caseD_7:
005052FD  C6 45 F0 05               MOV byte ptr [EBP + -0x10],0x5
00505301  EB 09                     JMP 0x0050530c
switchD_005052f0::caseD_8:
00505303  C6 45 F0 02               MOV byte ptr [EBP + -0x10],0x2
00505307  EB 03                     JMP 0x0050530c
switchD_005052d8::default:
00505309  88 4D F0                  MOV byte ptr [EBP + -0x10],CL
LAB_0050530c:
0050530C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00505312  85 C9                     TEST ECX,ECX
00505314  0F 84 76 02 00 00         JZ 0x00505590
0050531A  42                        INC EDX
0050531B  83 FA 09                  CMP EDX,0x9
0050531E  0F 87 6C 02 00 00         JA 0x00505590
switchD_00505324::switchD:
00505324  FF 24 95 C8 57 50 00      JMP dword ptr [EDX*0x4 + 0x5057c8]
switchD_00505324::caseD_ffffffff:
0050532B  33 C0                     XOR EAX,EAX
0050532D  C7 45 F4 0F 00 00 00      MOV dword ptr [EBP + -0xc],0xf
00505334  A0 4E 87 80 00            MOV AL,[0x0080874e]
00505339  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
00505340  48                        DEC EAX
00505341  74 30                     JZ 0x00505373
00505343  48                        DEC EAX
00505344  74 0E                     JZ 0x00505354
00505346  8B 96 92 02 00 00         MOV EDX,dword ptr [ESI + 0x292]
0050534C  6A 00                     PUSH 0x0
0050534E  52                        PUSH EDX
0050534F  E9 34 02 00 00            JMP 0x00505588
LAB_00505354:
00505354  33 C0                     XOR EAX,EAX
00505356  68 83 00 00 00            PUSH 0x83
0050535B  A0 4D 87 80 00            MOV AL,[0x0080874d]
00505360  50                        PUSH EAX
00505361  E8 05 C5 EF FF            CALL 0x0040186b
00505366  8B 8E 8E 02 00 00         MOV ECX,dword ptr [ESI + 0x28e]
0050536C  50                        PUSH EAX
0050536D  51                        PUSH ECX
0050536E  E9 15 02 00 00            JMP 0x00505588
LAB_00505373:
00505373  33 D2                     XOR EDX,EDX
00505375  6A 06                     PUSH 0x6
00505377  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0050537D  52                        PUSH EDX
0050537E  E8 E8 C4 EF FF            CALL 0x0040186b
00505383  50                        PUSH EAX
00505384  8B 86 8E 02 00 00         MOV EAX,dword ptr [ESI + 0x28e]
0050538A  E9 F8 01 00 00            JMP 0x00505587
switchD_00505324::caseD_0:
0050538F  8A 07                     MOV AL,byte ptr [EDI]
00505391  C7 45 F4 0F 00 00 00      MOV dword ptr [EBP + -0xc],0xf
00505398  84 C0                     TEST AL,AL
0050539A  C7 45 F8 0E 00 00 00      MOV dword ptr [EBP + -0x8],0xe
005053A1  74 0D                     JZ 0x005053b0
005053A3  33 C0                     XOR EAX,EAX
005053A5  A0 4E 87 80 00            MOV AL,[0x0080874e]
005053AA  48                        DEC EAX
005053AB  74 18                     JZ 0x005053c5
005053AD  48                        DEC EAX
005053AE  74 0E                     JZ 0x005053be
LAB_005053b0:
005053B0  8B 8E 92 02 00 00         MOV ECX,dword ptr [ESI + 0x292]
005053B6  6A 01                     PUSH 0x1
005053B8  51                        PUSH ECX
005053B9  E9 CA 01 00 00            JMP 0x00505588
LAB_005053be:
005053BE  68 83 00 00 00            PUSH 0x83
005053C3  EB 02                     JMP 0x005053c7
LAB_005053c5:
005053C5  6A 06                     PUSH 0x6
LAB_005053c7:
005053C7  33 D2                     XOR EDX,EDX
005053C9  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005053CF  52                        PUSH EDX
005053D0  E8 96 C4 EF FF            CALL 0x0040186b
005053D5  83 C0 05                  ADD EAX,0x5
005053D8  50                        PUSH EAX
005053D9  8B 86 8E 02 00 00         MOV EAX,dword ptr [ESI + 0x28e]
005053DF  E9 A3 01 00 00            JMP 0x00505587
switchD_00505324::caseD_1:
005053E4  8A 07                     MOV AL,byte ptr [EDI]
005053E6  C7 45 F4 0F 00 00 00      MOV dword ptr [EBP + -0xc],0xf
005053ED  84 C0                     TEST AL,AL
005053EF  C7 45 F8 1A 00 00 00      MOV dword ptr [EBP + -0x8],0x1a
005053F6  74 5C                     JZ 0x00505454
005053F8  33 C0                     XOR EAX,EAX
005053FA  A0 4E 87 80 00            MOV AL,[0x0080874e]
005053FF  48                        DEC EAX
00505400  74 33                     JZ 0x00505435
00505402  48                        DEC EAX
00505403  74 0E                     JZ 0x00505413
00505405  8B 96 92 02 00 00         MOV EDX,dword ptr [ESI + 0x292]
0050540B  6A 02                     PUSH 0x2
0050540D  52                        PUSH EDX
0050540E  E9 75 01 00 00            JMP 0x00505588
LAB_00505413:
00505413  33 C0                     XOR EAX,EAX
00505415  68 83 00 00 00            PUSH 0x83
0050541A  A0 4D 87 80 00            MOV AL,[0x0080874d]
0050541F  50                        PUSH EAX
00505420  E8 46 C4 EF FF            CALL 0x0040186b
00505425  8B 8E 8E 02 00 00         MOV ECX,dword ptr [ESI + 0x28e]
0050542B  83 C0 0A                  ADD EAX,0xa
0050542E  50                        PUSH EAX
0050542F  51                        PUSH ECX
00505430  E9 53 01 00 00            JMP 0x00505588
LAB_00505435:
00505435  33 D2                     XOR EDX,EDX
00505437  6A 06                     PUSH 0x6
00505439  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0050543F  52                        PUSH EDX
00505440  E8 26 C4 EF FF            CALL 0x0040186b
00505445  83 C0 0A                  ADD EAX,0xa
00505448  50                        PUSH EAX
00505449  8B 86 8E 02 00 00         MOV EAX,dword ptr [ESI + 0x28e]
0050544F  E9 33 01 00 00            JMP 0x00505587
LAB_00505454:
00505454  8B 8E 92 02 00 00         MOV ECX,dword ptr [ESI + 0x292]
0050545A  6A 02                     PUSH 0x2
0050545C  51                        PUSH ECX
0050545D  E9 26 01 00 00            JMP 0x00505588
switchD_00505324::caseD_2:
00505462  8A 07                     MOV AL,byte ptr [EDI]
00505464  C7 45 F4 16 00 00 00      MOV dword ptr [EBP + -0xc],0x16
0050546B  84 C0                     TEST AL,AL
0050546D  C7 45 F8 0F 00 00 00      MOV dword ptr [EBP + -0x8],0xf
00505474  74 0E                     JZ 0x00505484
00505476  8B 96 8E 02 00 00         MOV EDX,dword ptr [ESI + 0x28e]
0050547C  6A 1D                     PUSH 0x1d
0050547E  52                        PUSH EDX
0050547F  E9 04 01 00 00            JMP 0x00505588
LAB_00505484:
00505484  6A 09                     PUSH 0x9
00505486  E9 F6 00 00 00            JMP 0x00505581
switchD_00505324::caseD_3:
0050548B  8A 07                     MOV AL,byte ptr [EDI]
0050548D  C7 45 F4 1D 00 00 00      MOV dword ptr [EBP + -0xc],0x1d
00505494  84 C0                     TEST AL,AL
00505496  C7 45 F8 31 00 00 00      MOV dword ptr [EBP + -0x8],0x31
0050549D  74 0E                     JZ 0x005054ad
0050549F  8B 8E 8E 02 00 00         MOV ECX,dword ptr [ESI + 0x28e]
005054A5  6A 10                     PUSH 0x10
005054A7  51                        PUSH ECX
005054A8  E9 DB 00 00 00            JMP 0x00505588
LAB_005054ad:
005054AD  8B 96 92 02 00 00         MOV EDX,dword ptr [ESI + 0x292]
005054B3  6A 04                     PUSH 0x4
005054B5  52                        PUSH EDX
005054B6  E9 CD 00 00 00            JMP 0x00505588
switchD_00505324::caseD_4:
005054BB  8A 07                     MOV AL,byte ptr [EDI]
005054BD  C7 45 F4 1B 00 00 00      MOV dword ptr [EBP + -0xc],0x1b
005054C4  84 C0                     TEST AL,AL
005054C6  C7 45 F8 25 00 00 00      MOV dword ptr [EBP + -0x8],0x25
005054CD  74 0D                     JZ 0x005054dc
005054CF  8B 86 8E 02 00 00         MOV EAX,dword ptr [ESI + 0x28e]
005054D5  6A 17                     PUSH 0x17
005054D7  E9 AB 00 00 00            JMP 0x00505587
LAB_005054dc:
005054DC  8B 8E 92 02 00 00         MOV ECX,dword ptr [ESI + 0x292]
005054E2  6A 06                     PUSH 0x6
005054E4  51                        PUSH ECX
005054E5  E9 9E 00 00 00            JMP 0x00505588
switchD_00505324::caseD_5:
005054EA  8A 07                     MOV AL,byte ptr [EDI]
005054EC  C7 45 F4 28 00 00 00      MOV dword ptr [EBP + -0xc],0x28
005054F3  84 C0                     TEST AL,AL
005054F5  C7 45 F8 32 00 00 00      MOV dword ptr [EBP + -0x8],0x32
005054FC  74 0B                     JZ 0x00505509
005054FE  8B 96 8E 02 00 00         MOV EDX,dword ptr [ESI + 0x28e]
00505504  6A 19                     PUSH 0x19
00505506  52                        PUSH EDX
00505507  EB 7F                     JMP 0x00505588
LAB_00505509:
00505509  6A 05                     PUSH 0x5
0050550B  EB 74                     JMP 0x00505581
switchD_00505324::caseD_6:
0050550D  8A 07                     MOV AL,byte ptr [EDI]
0050550F  C7 45 F4 1F 00 00 00      MOV dword ptr [EBP + -0xc],0x1f
00505516  84 C0                     TEST AL,AL
00505518  C7 45 F8 22 00 00 00      MOV dword ptr [EBP + -0x8],0x22
0050551F  74 0B                     JZ 0x0050552c
00505521  8B 8E 8E 02 00 00         MOV ECX,dword ptr [ESI + 0x28e]
00505527  6A 18                     PUSH 0x18
00505529  51                        PUSH ECX
0050552A  EB 5C                     JMP 0x00505588
LAB_0050552c:
0050552C  8B 96 92 02 00 00         MOV EDX,dword ptr [ESI + 0x292]
00505532  6A 07                     PUSH 0x7
00505534  52                        PUSH EDX
00505535  EB 51                     JMP 0x00505588
switchD_00505324::caseD_7:
00505537  8A 07                     MOV AL,byte ptr [EDI]
00505539  C7 45 F4 1E 00 00 00      MOV dword ptr [EBP + -0xc],0x1e
00505540  84 C0                     TEST AL,AL
00505542  C7 45 F8 3B 00 00 00      MOV dword ptr [EBP + -0x8],0x3b
00505549  74 0A                     JZ 0x00505555
0050554B  8B 86 8E 02 00 00         MOV EAX,dword ptr [ESI + 0x28e]
00505551  6A 16                     PUSH 0x16
00505553  EB 32                     JMP 0x00505587
LAB_00505555:
00505555  8B 8E 92 02 00 00         MOV ECX,dword ptr [ESI + 0x292]
0050555B  6A 08                     PUSH 0x8
0050555D  51                        PUSH ECX
0050555E  EB 28                     JMP 0x00505588
switchD_00505324::caseD_8:
00505560  8A 07                     MOV AL,byte ptr [EDI]
00505562  C7 45 F4 28 00 00 00      MOV dword ptr [EBP + -0xc],0x28
00505569  84 C0                     TEST AL,AL
0050556B  C7 45 F8 19 00 00 00      MOV dword ptr [EBP + -0x8],0x19
00505572  74 0B                     JZ 0x0050557f
00505574  8B 96 8E 02 00 00         MOV EDX,dword ptr [ESI + 0x28e]
0050557A  6A 0F                     PUSH 0xf
0050557C  52                        PUSH EDX
0050557D  EB 09                     JMP 0x00505588
LAB_0050557f:
0050557F  6A 03                     PUSH 0x3
LAB_00505581:
00505581  8B 86 92 02 00 00         MOV EAX,dword ptr [ESI + 0x292]
LAB_00505587:
00505587  50                        PUSH EAX
LAB_00505588:
00505588  E8 13 5E 20 00            CALL 0x0070b3a0
0050558D  83 C4 08                  ADD ESP,0x8
switchD_00505324::default:
00505590  85 C0                     TEST EAX,EAX
00505592  74 24                     JZ 0x005055b8
00505594  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00505597  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0050559A  50                        PUSH EAX
0050559B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0050559E  83 C1 36                  ADD ECX,0x36
005055A1  6A 06                     PUSH 0x6
005055A3  51                        PUSH ECX
005055A4  8D 4C 02 0F               LEA ECX,[EDX + EAX*0x1 + 0xf]
005055A8  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
005055AE  51                        PUSH ECX
005055AF  52                        PUSH EDX
005055B0  E8 74 DC EF FF            CALL 0x00403229
005055B5  83 C4 14                  ADD ESP,0x14
LAB_005055b8:
005055B8  80 3F 00                  CMP byte ptr [EDI],0x0
005055BB  74 1A                     JZ 0x005055d7
005055BD  33 C0                     XOR EAX,EAX
005055BF  33 C9                     XOR ECX,ECX
005055C1  66 8B 47 02               MOV AX,word ptr [EDI + 0x2]
005055C5  66 8B 4F 04               MOV CX,word ptr [EDI + 0x4]
005055C9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005055CC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005055CF  99                        CDQ
005055D0  F7 F9                     IDIV ECX
005055D2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005055D5  EB 07                     JMP 0x005055de
LAB_005055d7:
005055D7  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_005055de:
005055DE  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005055E1  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005055E4  85 C0                     TEST EAX,EAX
005055E6  C6 45 EC 00               MOV byte ptr [EBP + -0x14],0x0
005055EA  76 57                     JBE 0x00505643
005055EC  8B C3                     MOV EAX,EBX
005055EE  25 FF 00 00 00            AND EAX,0xff
005055F3  33 FF                     XOR EDI,EDI
005055F5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005055F8  8D 44 50 3B               LEA EAX,[EAX + EDX*0x2 + 0x3b]
005055FC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_005055ff:
005055FF  8B 8E B6 02 00 00         MOV ECX,dword ptr [ESI + 0x2b6]
00505605  6A 03                     PUSH 0x3
00505607  51                        PUSH ECX
00505608  E8 93 5D 20 00            CALL 0x0070b3a0
0050560D  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00505610  50                        PUSH EAX
00505611  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00505614  6A 01                     PUSH 0x1
00505616  52                        PUSH EDX
00505617  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
0050561D  8D 4C B8 4D               LEA ECX,[EAX + EDI*0x4 + 0x4d]
00505621  51                        PUSH ECX
00505622  52                        PUSH EDX
00505623  E8 01 DC EF FF            CALL 0x00403229
00505628  8A 55 EC                  MOV DL,byte ptr [EBP + -0x14]
0050562B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0050562E  83 C4 1C                  ADD ESP,0x1c
00505631  FE C2                     INC DL
00505633  88 55 EC                  MOV byte ptr [EBP + -0x14],DL
00505636  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00505639  81 E7 FF 00 00 00         AND EDI,0xff
0050563F  3B F8                     CMP EDI,EAX
00505641  72 BC                     JC 0x005055ff
LAB_00505643:
00505643  80 7D EC 0F               CMP byte ptr [EBP + -0x14],0xf
00505647  73 5E                     JNC 0x005056a7
00505649  8B C3                     MOV EAX,EBX
0050564B  BF 0F 00 00 00            MOV EDI,0xf
00505650  25 FF 00 00 00            AND EAX,0xff
00505655  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00505658  8D 54 48 3B               LEA EDX,[EAX + ECX*0x2 + 0x3b]
0050565C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0050565F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00505662  25 FF 00 00 00            AND EAX,0xff
00505667  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0050566A  2B F8                     SUB EDI,EAX
0050566C  8D 54 81 4D               LEA EDX,[ECX + EAX*0x4 + 0x4d]
00505670  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_00505673:
00505673  8B 86 B6 02 00 00         MOV EAX,dword ptr [ESI + 0x2b6]
00505679  6A 00                     PUSH 0x0
0050567B  50                        PUSH EAX
0050567C  E8 1F 5D 20 00            CALL 0x0070b3a0
00505681  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00505684  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00505687  50                        PUSH EAX
00505688  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
0050568E  6A 01                     PUSH 0x1
00505690  51                        PUSH ECX
00505691  52                        PUSH EDX
00505692  50                        PUSH EAX
00505693  E8 91 DB EF FF            CALL 0x00403229
00505698  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0050569B  83 C4 1C                  ADD ESP,0x1c
0050569E  83 C1 04                  ADD ECX,0x4
005056A1  4F                        DEC EDI
005056A2  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005056A5  75 CC                     JNZ 0x00505673
LAB_005056a7:
005056A7  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005056AA  33 C9                     XOR ECX,ECX
005056AC  8D BE E1 01 00 00         LEA EDI,[ESI + 0x1e1]
005056B2  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
005056B6  51                        PUSH ECX
005056B7  68 90 18 7C 00            PUSH 0x7c1890
005056BC  57                        PUSH EDI
005056BD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005056C3  81 E3 FF 00 00 00         AND EBX,0xff
005056C9  83 C4 0C                  ADD ESP,0xc
005056CC  8B C3                     MOV EAX,EBX
005056CE  6A 0C                     PUSH 0xc
005056D0  6A 23                     PUSH 0x23
005056D2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005056D5  8D 54 48 39               LEA EDX,[EAX + ECX*0x2 + 0x39]
005056D9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005056DC  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
005056E2  05 8F 00 00 00            ADD EAX,0x8f
005056E7  52                        PUSH EDX
005056E8  50                        PUSH EAX
005056E9  6A 00                     PUSH 0x0
005056EB  51                        PUSH ECX
005056EC  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
005056F2  E8 99 B3 20 00            CALL 0x00710a90
005056F7  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
005056FD  6A FF                     PUSH -0x1
005056FF  6A FF                     PUSH -0x1
00505701  6A 00                     PUSH 0x0
00505703  6A FF                     PUSH -0x1
00505705  6A FD                     PUSH -0x3
00505707  57                        PUSH EDI
00505708  E8 63 C4 20 00            CALL 0x00711b70
0050570D  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00505710  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00505713  8A 4D FE                  MOV CL,byte ptr [EBP + -0x2]
switchD_005052d8::caseD_2:
00505716  FE C1                     INC CL
00505718  42                        INC EDX
00505719  83 C7 06                  ADD EDI,0x6
0050571C  80 F9 0A                  CMP CL,0xa
0050571F  88 4D FE                  MOV byte ptr [EBP + -0x2],CL
00505722  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00505725  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
00505728  0F 82 95 FB FF FF         JC 0x005052c3
0050572E  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00505731  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00505737  5F                        POP EDI
00505738  5E                        POP ESI
00505739  5B                        POP EBX
0050573A  8B E5                     MOV ESP,EBP
0050573C  5D                        POP EBP
0050573D  C2 04 00                  RET 0x4
LAB_00505740:
00505740  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00505743  68 EC 27 7C 00            PUSH 0x7c27ec
00505748  68 CC 4C 7A 00            PUSH 0x7a4ccc
0050574D  56                        PUSH ESI
0050574E  6A 00                     PUSH 0x0
00505750  68 53 01 00 00            PUSH 0x153
00505755  68 00 27 7C 00            PUSH 0x7c2700
0050575A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050575F  E8 6C 7D 1A 00            CALL 0x006ad4d0
00505764  83 C4 18                  ADD ESP,0x18
00505767  85 C0                     TEST EAX,EAX
00505769  74 01                     JZ 0x0050576c
0050576B  CC                        INT3
LAB_0050576c:
0050576C  68 53 01 00 00            PUSH 0x153
00505771  68 00 27 7C 00            PUSH 0x7c2700
00505776  6A 00                     PUSH 0x0
00505778  56                        PUSH ESI
00505779  E8 C2 06 1A 00            CALL 0x006a5e40
0050577E  5F                        POP EDI
0050577F  5E                        POP ESI
00505780  5B                        POP EBX
00505781  8B E5                     MOV ESP,EBP
00505783  5D                        POP EBP
00505784  C2 04 00                  RET 0x4
