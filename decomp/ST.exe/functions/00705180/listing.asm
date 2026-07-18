FUN_00705180:
00705180  55                        PUSH EBP
00705181  8B EC                     MOV EBP,ESP
00705183  51                        PUSH ECX
00705184  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00705187  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00705191  48                        DEC EAX
00705192  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
00705195  0F 88 E0 03 00 00         JS 0x0070557b
0070519B  53                        PUSH EBX
0070519C  56                        PUSH ESI
0070519D  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007051A0  57                        PUSH EDI
007051A1  33 FF                     XOR EDI,EDI
007051A3  EB 02                     JMP 0x007051a7
LAB_007051a5:
007051A5  33 FF                     XOR EDI,EDI
LAB_007051a7:
007051A7  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
007051AA  F6 C2 01                  TEST DL,0x1
007051AD  75 52                     JNZ 0x00705201
LAB_007051af:
007051AF  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
007051B2  48                        DEC EAX
007051B3  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
007051B6  78 49                     JS 0x00705201
007051B8  33 C0                     XOR EAX,EAX
007051BA  8A 06                     MOV AL,byte ptr [ESI]
007051BC  46                        INC ESI
007051BD  3B C7                     CMP EAX,EDI
007051BF  74 2D                     JZ 0x007051ee
007051C1  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
LAB_007051c4:
007051C4  A8 80                     TEST AL,0x80
007051C6  74 16                     JZ 0x007051de
007051C8  A8 40                     TEST AL,0x40
007051CA  74 06                     JZ 0x007051d2
007051CC  46                        INC ESI
007051CD  83 E0 3F                  AND EAX,0x3f
007051D0  EB 0F                     JMP 0x007051e1
LAB_007051d2:
007051D2  8B D8                     MOV EBX,EAX
007051D4  83 E3 3F                  AND EBX,0x3f
007051D7  03 F3                     ADD ESI,EBX
007051D9  83 E0 3F                  AND EAX,0x3f
007051DC  EB 03                     JMP 0x007051e1
LAB_007051de:
007051DE  83 E0 7F                  AND EAX,0x7f
LAB_007051e1:
007051E1  2B C8                     SUB ECX,EAX
007051E3  3B CF                     CMP ECX,EDI
007051E5  7E 07                     JLE 0x007051ee
007051E7  33 C0                     XOR EAX,EAX
007051E9  8A 06                     MOV AL,byte ptr [ESI]
007051EB  46                        INC ESI
007051EC  EB D6                     JMP 0x007051c4
LAB_007051ee:
007051EE  42                        INC EDX
007051EF  83 FA 04                  CMP EDX,0x4
007051F2  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
007051F5  7E 05                     JLE 0x007051fc
007051F7  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
007051FA  8B D7                     MOV EDX,EDI
LAB_007051fc:
007051FC  F6 C2 01                  TEST DL,0x1
007051FF  74 AE                     JZ 0x007051af
LAB_00705201:
00705201  33 DB                     XOR EBX,EBX
00705203  8A 1E                     MOV BL,byte ptr [ESI]
00705205  46                        INC ESI
00705206  3B DF                     CMP EBX,EDI
00705208  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
0070520B  0F 84 3F 03 00 00         JZ 0x00705550
00705211  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00705214  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00705217  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
LAB_0070521a:
0070521A  F6 C3 80                  TEST BL,0x80
0070521D  8B C3                     MOV EAX,EBX
0070521F  74 21                     JZ 0x00705242
00705221  83 E0 3F                  AND EAX,0x3f
00705224  3B C2                     CMP EAX,EDX
00705226  7F 2A                     JG 0x00705252
00705228  F6 C3 40                  TEST BL,0x40
0070522B  74 0A                     JZ 0x00705237
0070522D  46                        INC ESI
0070522E  33 DB                     XOR EBX,EBX
00705230  2B D0                     SUB EDX,EAX
00705232  8A 1E                     MOV BL,byte ptr [ESI]
00705234  46                        INC ESI
00705235  EB E3                     JMP 0x0070521a
LAB_00705237:
00705237  03 F0                     ADD ESI,EAX
00705239  33 DB                     XOR EBX,EBX
0070523B  2B D0                     SUB EDX,EAX
0070523D  8A 1E                     MOV BL,byte ptr [ESI]
0070523F  46                        INC ESI
00705240  EB D8                     JMP 0x0070521a
LAB_00705242:
00705242  83 E0 7F                  AND EAX,0x7f
00705245  3B C2                     CMP EAX,EDX
00705247  7F 09                     JG 0x00705252
00705249  33 DB                     XOR EBX,EBX
0070524B  2B D0                     SUB EDX,EAX
0070524D  8A 1E                     MOV BL,byte ptr [ESI]
0070524F  46                        INC ESI
00705250  EB C8                     JMP 0x0070521a
LAB_00705252:
00705252  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00705255  81 E3 C0 00 00 00         AND EBX,0xc0
0070525B  2B C2                     SUB EAX,EDX
0070525D  80 FB 80                  CMP BL,0x80
00705260  75 02                     JNZ 0x00705264
00705262  03 F2                     ADD ESI,EDX
LAB_00705264:
00705264  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00705267  3B C3                     CMP EAX,EBX
00705269  0F 8F B2 01 00 00         JG 0x00705421
0070526F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00705272  81 E2 80 00 00 00         AND EDX,0x80
LAB_00705278:
00705278  2B D8                     SUB EBX,EAX
0070527A  85 D2                     TEST EDX,EDX
0070527C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070527F  0F 84 51 01 00 00         JZ 0x007053d6
00705285  F6 45 10 40               TEST byte ptr [EBP + 0x10],0x40
00705289  0F 84 AE 00 00 00         JZ 0x0070533d
0070528F  33 D2                     XOR EDX,EDX
00705291  8A 16                     MOV DL,byte ptr [ESI]
00705293  46                        INC ESI
00705294  85 C9                     TEST ECX,ECX
00705296  7E 45                     JLE 0x007052dd
00705298  8D 59 FF                  LEA EBX,[ECX + -0x1]
0070529B  83 FB 03                  CMP EBX,0x3
0070529E  77 3A                     JA 0x007052da
switchD_007052a0::switchD:
007052A0  FF 24 9D 84 55 70 00      JMP dword ptr [EBX*0x4 + 0x705584]
switchD_007052a0::caseD_1:
007052A7  88 17                     MOV byte ptr [EDI],DL
007052A9  47                        INC EDI
007052AA  48                        DEC EAX
007052AB  B9 02 00 00 00            MOV ECX,0x2
007052B0  85 C0                     TEST EAX,EAX
007052B2  0F 8E 3A 01 00 00         JLE 0x007053f2
switchD_007052a0::caseD_2:
007052B8  48                        DEC EAX
007052B9  B9 03 00 00 00            MOV ECX,0x3
007052BE  85 C0                     TEST EAX,EAX
007052C0  0F 8E 2C 01 00 00         JLE 0x007053f2
switchD_007052a0::caseD_3:
007052C6  88 17                     MOV byte ptr [EDI],DL
007052C8  47                        INC EDI
007052C9  48                        DEC EAX
007052CA  B9 04 00 00 00            MOV ECX,0x4
007052CF  85 C0                     TEST EAX,EAX
007052D1  0F 8E 1B 01 00 00         JLE 0x007053f2
switchD_007052a0::caseD_4:
007052D7  33 C9                     XOR ECX,ECX
007052D9  48                        DEC EAX
LAB_007052da:
007052DA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
switchD_007052a0::default:
007052DD  85 C0                     TEST EAX,EAX
007052DF  0F 8E 10 01 00 00         JLE 0x007053f5
007052E5  48                        DEC EAX
007052E6  B9 01 00 00 00            MOV ECX,0x1
007052EB  85 C0                     TEST EAX,EAX
007052ED  0F 8E 02 01 00 00         JLE 0x007053f5
LAB_007052f3:
007052F3  88 17                     MOV byte ptr [EDI],DL
007052F5  47                        INC EDI
007052F6  48                        DEC EAX
007052F7  B9 02 00 00 00            MOV ECX,0x2
007052FC  85 C0                     TEST EAX,EAX
007052FE  0F 8E F1 00 00 00         JLE 0x007053f5
00705304  48                        DEC EAX
00705305  B9 03 00 00 00            MOV ECX,0x3
0070530A  85 C0                     TEST EAX,EAX
0070530C  0F 8E E3 00 00 00         JLE 0x007053f5
00705312  88 17                     MOV byte ptr [EDI],DL
00705314  47                        INC EDI
00705315  48                        DEC EAX
00705316  B9 04 00 00 00            MOV ECX,0x4
0070531B  85 C0                     TEST EAX,EAX
0070531D  0F 8E D2 00 00 00         JLE 0x007053f5
00705323  33 C9                     XOR ECX,ECX
00705325  48                        DEC EAX
00705326  85 C0                     TEST EAX,EAX
00705328  0F 8E C7 00 00 00         JLE 0x007053f5
0070532E  48                        DEC EAX
0070532F  B9 01 00 00 00            MOV ECX,0x1
00705334  85 C0                     TEST EAX,EAX
00705336  7F BB                     JG 0x007052f3
00705338  E9 B8 00 00 00            JMP 0x007053f5
LAB_0070533d:
0070533D  85 C9                     TEST ECX,ECX
0070533F  7E 46                     JLE 0x00705387
00705341  8D 51 FF                  LEA EDX,[ECX + -0x1]
00705344  83 FA 03                  CMP EDX,0x3
00705347  77 3E                     JA 0x00705387
switchD_00705349::switchD:
00705349  FF 24 95 94 55 70 00      JMP dword ptr [EDX*0x4 + 0x705594]
switchD_00705349::caseD_1:
00705350  8A 0E                     MOV CL,byte ptr [ESI]
00705352  88 0F                     MOV byte ptr [EDI],CL
00705354  47                        INC EDI
00705355  46                        INC ESI
00705356  48                        DEC EAX
00705357  85 C0                     TEST EAX,EAX
00705359  B9 02 00 00 00            MOV ECX,0x2
0070535E  0F 8E 91 00 00 00         JLE 0x007053f5
switchD_00705349::caseD_2:
00705364  46                        INC ESI
00705365  48                        DEC EAX
00705366  85 C0                     TEST EAX,EAX
00705368  B9 03 00 00 00            MOV ECX,0x3
0070536D  0F 8E 82 00 00 00         JLE 0x007053f5
switchD_00705349::caseD_3:
00705373  8A 16                     MOV DL,byte ptr [ESI]
00705375  B9 04 00 00 00            MOV ECX,0x4
0070537A  88 17                     MOV byte ptr [EDI],DL
0070537C  47                        INC EDI
0070537D  46                        INC ESI
0070537E  48                        DEC EAX
0070537F  85 C0                     TEST EAX,EAX
00705381  7E 72                     JLE 0x007053f5
switchD_00705349::caseD_4:
00705383  46                        INC ESI
00705384  33 C9                     XOR ECX,ECX
00705386  48                        DEC EAX
switchD_00705349::default:
00705387  85 C0                     TEST EAX,EAX
00705389  7E 6A                     JLE 0x007053f5
0070538B  46                        INC ESI
0070538C  48                        DEC EAX
0070538D  85 C0                     TEST EAX,EAX
0070538F  B9 01 00 00 00            MOV ECX,0x1
00705394  7E 5F                     JLE 0x007053f5
LAB_00705396:
00705396  8A 0E                     MOV CL,byte ptr [ESI]
00705398  88 0F                     MOV byte ptr [EDI],CL
0070539A  47                        INC EDI
0070539B  46                        INC ESI
0070539C  48                        DEC EAX
0070539D  85 C0                     TEST EAX,EAX
0070539F  B9 02 00 00 00            MOV ECX,0x2
007053A4  7E 4F                     JLE 0x007053f5
007053A6  46                        INC ESI
007053A7  48                        DEC EAX
007053A8  85 C0                     TEST EAX,EAX
007053AA  B9 03 00 00 00            MOV ECX,0x3
007053AF  7E 44                     JLE 0x007053f5
007053B1  8A 16                     MOV DL,byte ptr [ESI]
007053B3  B9 04 00 00 00            MOV ECX,0x4
007053B8  88 17                     MOV byte ptr [EDI],DL
007053BA  47                        INC EDI
007053BB  46                        INC ESI
007053BC  48                        DEC EAX
007053BD  85 C0                     TEST EAX,EAX
007053BF  7E 34                     JLE 0x007053f5
007053C1  46                        INC ESI
007053C2  33 C9                     XOR ECX,ECX
007053C4  48                        DEC EAX
007053C5  85 C0                     TEST EAX,EAX
007053C7  7E 2C                     JLE 0x007053f5
007053C9  46                        INC ESI
007053CA  48                        DEC EAX
007053CB  85 C0                     TEST EAX,EAX
007053CD  B9 01 00 00 00            MOV ECX,0x1
007053D2  7F C2                     JG 0x00705396
007053D4  EB 1F                     JMP 0x007053f5
LAB_007053d6:
007053D6  48                        DEC EAX
007053D7  78 1C                     JS 0x007053f5
007053D9  40                        INC EAX
LAB_007053da:
007053DA  8B D1                     MOV EDX,ECX
007053DC  83 E2 01                  AND EDX,0x1
007053DF  80 FA 01                  CMP DL,0x1
007053E2  75 01                     JNZ 0x007053e5
007053E4  47                        INC EDI
LAB_007053e5:
007053E5  41                        INC ECX
007053E6  83 F9 04                  CMP ECX,0x4
007053E9  7E 02                     JLE 0x007053ed
007053EB  33 C9                     XOR ECX,ECX
LAB_007053ed:
007053ED  48                        DEC EAX
007053EE  75 EA                     JNZ 0x007053da
007053F0  EB 03                     JMP 0x007053f5
LAB_007053f2:
007053F2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_007053f5:
007053F5  85 DB                     TEST EBX,EBX
007053F7  7E 26                     JLE 0x0070541f
007053F9  33 C0                     XOR EAX,EAX
007053FB  8A 06                     MOV AL,byte ptr [ESI]
007053FD  8B D0                     MOV EDX,EAX
007053FF  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00705402  81 E2 80 00 00 00         AND EDX,0x80
00705408  46                        INC ESI
00705409  85 D2                     TEST EDX,EDX
0070540B  74 05                     JZ 0x00705412
0070540D  83 E0 3F                  AND EAX,0x3f
00705410  EB 03                     JMP 0x00705415
LAB_00705412:
00705412  83 E0 7F                  AND EAX,0x7f
LAB_00705415:
00705415  3B C3                     CMP EAX,EBX
00705417  0F 8E 5B FE FF FF         JLE 0x00705278
0070541D  EB 02                     JMP 0x00705421
LAB_0070541f:
0070541F  33 C0                     XOR EAX,EAX
LAB_00705421:
00705421  2B C3                     SUB EAX,EBX
00705423  85 DB                     TEST EBX,EBX
00705425  0F 8E D2 00 00 00         JLE 0x007054fd
0070542B  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
0070542E  F6 C2 80                  TEST DL,0x80
00705431  0F 84 C6 00 00 00         JZ 0x007054fd
00705437  F6 C2 40                  TEST DL,0x40
0070543A  74 60                     JZ 0x0070549c
0070543C  33 D2                     XOR EDX,EDX
0070543E  8A 16                     MOV DL,byte ptr [ESI]
00705440  46                        INC ESI
00705441  85 C9                     TEST ECX,ECX
00705443  7E 2F                     JLE 0x00705474
00705445  49                        DEC ECX
00705446  83 F9 03                  CMP ECX,0x3
00705449  77 29                     JA 0x00705474
switchD_0070544b::switchD:
0070544B  FF 24 8D A4 55 70 00      JMP dword ptr [ECX*0x4 + 0x7055a4]
switchD_0070544b::caseD_1:
00705452  88 17                     MOV byte ptr [EDI],DL
00705454  47                        INC EDI
00705455  4B                        DEC EBX
00705456  85 DB                     TEST EBX,EBX
00705458  0F 8E 9F 00 00 00         JLE 0x007054fd
switchD_0070544b::caseD_2:
0070545E  4B                        DEC EBX
0070545F  85 DB                     TEST EBX,EBX
00705461  0F 8E 96 00 00 00         JLE 0x007054fd
switchD_0070544b::caseD_3:
00705467  88 17                     MOV byte ptr [EDI],DL
00705469  47                        INC EDI
0070546A  4B                        DEC EBX
0070546B  85 DB                     TEST EBX,EBX
0070546D  0F 8E 8A 00 00 00         JLE 0x007054fd
switchD_0070544b::caseD_4:
00705473  4B                        DEC EBX
switchD_0070544b::default:
00705474  85 DB                     TEST EBX,EBX
00705476  0F 8E 81 00 00 00         JLE 0x007054fd
0070547C  4B                        DEC EBX
0070547D  85 DB                     TEST EBX,EBX
0070547F  7E 7C                     JLE 0x007054fd
LAB_00705481:
00705481  88 17                     MOV byte ptr [EDI],DL
00705483  83 EB 02                  SUB EBX,0x2
00705486  47                        INC EDI
00705487  85 DB                     TEST EBX,EBX
00705489  7E 72                     JLE 0x007054fd
0070548B  88 17                     MOV byte ptr [EDI],DL
0070548D  83 EB 02                  SUB EBX,0x2
00705490  47                        INC EDI
00705491  85 DB                     TEST EBX,EBX
00705493  7E 68                     JLE 0x007054fd
00705495  4B                        DEC EBX
00705496  85 DB                     TEST EBX,EBX
00705498  7F E7                     JG 0x00705481
0070549A  EB 61                     JMP 0x007054fd
LAB_0070549c:
0070549C  85 C9                     TEST ECX,ECX
0070549E  7E 2B                     JLE 0x007054cb
007054A0  49                        DEC ECX
007054A1  83 F9 03                  CMP ECX,0x3
007054A4  77 25                     JA 0x007054cb
switchD_007054a6::switchD:
007054A6  FF 24 8D B4 55 70 00      JMP dword ptr [ECX*0x4 + 0x7055b4]
switchD_007054a6::caseD_1:
007054AD  8A 0E                     MOV CL,byte ptr [ESI]
007054AF  88 0F                     MOV byte ptr [EDI],CL
007054B1  47                        INC EDI
007054B2  46                        INC ESI
007054B3  4B                        DEC EBX
007054B4  85 DB                     TEST EBX,EBX
007054B6  7E 45                     JLE 0x007054fd
switchD_007054a6::caseD_2:
007054B8  46                        INC ESI
007054B9  4B                        DEC EBX
007054BA  85 DB                     TEST EBX,EBX
007054BC  7E 3F                     JLE 0x007054fd
switchD_007054a6::caseD_3:
007054BE  8A 16                     MOV DL,byte ptr [ESI]
007054C0  88 17                     MOV byte ptr [EDI],DL
007054C2  47                        INC EDI
007054C3  46                        INC ESI
007054C4  4B                        DEC EBX
007054C5  85 DB                     TEST EBX,EBX
007054C7  7E 34                     JLE 0x007054fd
switchD_007054a6::caseD_4:
007054C9  46                        INC ESI
007054CA  4B                        DEC EBX
switchD_007054a6::default:
007054CB  85 DB                     TEST EBX,EBX
007054CD  7E 2E                     JLE 0x007054fd
007054CF  46                        INC ESI
007054D0  4B                        DEC EBX
007054D1  85 DB                     TEST EBX,EBX
007054D3  7E 28                     JLE 0x007054fd
LAB_007054d5:
007054D5  8A 0E                     MOV CL,byte ptr [ESI]
007054D7  88 0F                     MOV byte ptr [EDI],CL
007054D9  47                        INC EDI
007054DA  46                        INC ESI
007054DB  4B                        DEC EBX
007054DC  85 DB                     TEST EBX,EBX
007054DE  7E 1D                     JLE 0x007054fd
007054E0  46                        INC ESI
007054E1  4B                        DEC EBX
007054E2  85 DB                     TEST EBX,EBX
007054E4  7E 17                     JLE 0x007054fd
007054E6  8A 16                     MOV DL,byte ptr [ESI]
007054E8  88 17                     MOV byte ptr [EDI],DL
007054EA  47                        INC EDI
007054EB  46                        INC ESI
007054EC  4B                        DEC EBX
007054ED  85 DB                     TEST EBX,EBX
007054EF  7E 0C                     JLE 0x007054fd
007054F1  46                        INC ESI
007054F2  4B                        DEC EBX
007054F3  85 DB                     TEST EBX,EBX
007054F5  7E 06                     JLE 0x007054fd
007054F7  46                        INC ESI
007054F8  4B                        DEC EBX
007054F9  85 DB                     TEST EBX,EBX
007054FB  7F D8                     JG 0x007054d5
LAB_007054fd:
007054FD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00705500  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00705503  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00705506  2B CB                     SUB ECX,EBX
00705508  2B CF                     SUB ECX,EDI
0070550A  3B C1                     CMP EAX,ECX
0070550C  7D 31                     JGE 0x0070553f
LAB_0070550e:
0070550E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00705511  2B C8                     SUB ECX,EAX
00705513  81 E2 C0 00 00 00         AND EDX,0xc0
00705519  80 FA 80                  CMP DL,0x80
0070551C  75 02                     JNZ 0x00705520
0070551E  03 F0                     ADD ESI,EAX
LAB_00705520:
00705520  33 D2                     XOR EDX,EDX
00705522  8A 16                     MOV DL,byte ptr [ESI]
00705524  8B C2                     MOV EAX,EDX
00705526  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00705529  24 80                     AND AL,0x80
0070552B  46                        INC ESI
0070552C  84 C0                     TEST AL,AL
0070552E  8B C2                     MOV EAX,EDX
00705530  74 09                     JZ 0x0070553b
00705532  83 E0 3F                  AND EAX,0x3f
00705535  F6 C2 40                  TEST DL,0x40
00705538  74 01                     JZ 0x0070553b
0070553A  46                        INC ESI
LAB_0070553b:
0070553B  3B C1                     CMP EAX,ECX
0070553D  7C CF                     JL 0x0070550e
LAB_0070553f:
0070553F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00705542  25 C0 00 00 00            AND EAX,0xc0
00705547  3C 80                     CMP AL,0x80
00705549  75 02                     JNZ 0x0070554d
0070554B  03 F1                     ADD ESI,ECX
LAB_0070554d:
0070554D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
LAB_00705550:
00705550  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00705553  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00705556  03 F9                     ADD EDI,ECX
00705558  42                        INC EDX
00705559  83 FA 04                  CMP EDX,0x4
0070555C  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0070555F  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
00705562  7E 07                     JLE 0x0070556b
00705564  C7 45 28 00 00 00 00      MOV dword ptr [EBP + 0x28],0x0
LAB_0070556b:
0070556B  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0070556E  48                        DEC EAX
0070556F  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
00705572  0F 89 2D FC FF FF         JNS 0x007051a5
00705578  5F                        POP EDI
00705579  5E                        POP ESI
0070557A  5B                        POP EBX
LAB_0070557b:
0070557B  8B E5                     MOV ESP,EBP
0070557D  5D                        POP EBP
0070557E  C2 24 00                  RET 0x24
