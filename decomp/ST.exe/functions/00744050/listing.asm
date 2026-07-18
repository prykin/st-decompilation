FUN_00744050:
00744050  55                        PUSH EBP
00744051  8B EC                     MOV EBP,ESP
00744053  83 EC 20                  SUB ESP,0x20
00744056  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744059  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
0074405F  73 1F                     JNC 0x00744080
00744061  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744064  C1 F9 05                  SAR ECX,0x5
00744067  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074406A  83 E2 1F                  AND EDX,0x1f
0074406D  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
00744074  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
00744079  83 E1 01                  AND ECX,0x1
0074407C  85 C9                     TEST ECX,ECX
0074407E  75 1C                     JNZ 0x0074409c
LAB_00744080:
00744080  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
0074408A  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
00744094  83 C8 FF                  OR EAX,0xffffffff
00744097  E9 04 04 00 00            JMP 0x007444a0
LAB_0074409c:
0074409C  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
007440A3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007440A6  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
007440A9  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
007440AD  74 1F                     JZ 0x007440ce
007440AF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007440B2  C1 F8 05                  SAR EAX,0x5
007440B5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007440B8  83 E1 1F                  AND ECX,0x1f
007440BB  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
007440C2  0F BE 44 CA 04            MOVSX EAX,byte ptr [EDX + ECX*0x8 + 0x4]
007440C7  83 E0 02                  AND EAX,0x2
007440CA  85 C0                     TEST EAX,EAX
007440CC  74 07                     JZ 0x007440d5
LAB_007440ce:
007440CE  33 C0                     XOR EAX,EAX
007440D0  E9 CB 03 00 00            JMP 0x007444a0
LAB_007440d5:
007440D5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007440D8  C1 F9 05                  SAR ECX,0x5
007440DB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007440DE  83 E2 1F                  AND EDX,0x1f
007440E1  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
007440E8  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
007440ED  83 E1 48                  AND ECX,0x48
007440F0  85 C9                     TEST ECX,ECX
007440F2  74 6C                     JZ 0x00744160
007440F4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007440F7  C1 FA 05                  SAR EDX,0x5
007440FA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007440FD  83 E0 1F                  AND EAX,0x1f
00744100  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00744107  0F BE 54 C1 05            MOVSX EDX,byte ptr [ECX + EAX*0x8 + 0x5]
0074410C  83 FA 0A                  CMP EDX,0xa
0074410F  74 4F                     JZ 0x00744160
00744111  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744114  C1 F8 05                  SAR EAX,0x5
00744117  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074411A  83 E1 1F                  AND ECX,0x1f
0074411D  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
00744124  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00744127  8A 4C CA 05               MOV CL,byte ptr [EDX + ECX*0x8 + 0x5]
0074412B  88 08                     MOV byte ptr [EAX],CL
0074412D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00744130  83 C2 01                  ADD EDX,0x1
00744133  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00744136  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00744139  83 C0 01                  ADD EAX,0x1
0074413C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0074413F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744142  83 E9 01                  SUB ECX,0x1
00744145  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00744148  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074414B  C1 FA 05                  SAR EDX,0x5
0074414E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744151  83 E0 1F                  AND EAX,0x1f
00744154  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
0074415B  C6 44 C1 05 0A            MOV byte ptr [ECX + EAX*0x8 + 0x5],0xa
LAB_00744160:
00744160  6A 00                     PUSH 0x0
00744162  8D 55 F0                  LEA EDX,[EBP + -0x10]
00744165  52                        PUSH EDX
00744166  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744169  50                        PUSH EAX
0074416A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0074416D  51                        PUSH ECX
0074416E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744171  C1 FA 05                  SAR EDX,0x5
00744174  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744177  83 E0 1F                  AND EAX,0x1f
0074417A  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00744181  8B 14 C1                  MOV EDX,dword ptr [ECX + EAX*0x8]
00744184  52                        PUSH EDX
00744185  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
0074418B  85 C0                     TEST EAX,EAX
0074418D  75 4A                     JNZ 0x007441d9
0074418F  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
00744195  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00744198  83 7D F8 05               CMP dword ptr [EBP + -0x8],0x5
0074419C  75 1A                     JNZ 0x007441b8
0074419E  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
007441A8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007441AB  A3 4C 71 85 00            MOV [0x0085714c],EAX
007441B0  83 C8 FF                  OR EAX,0xffffffff
007441B3  E9 E8 02 00 00            JMP 0x007444a0
LAB_007441b8:
007441B8  83 7D F8 6D               CMP dword ptr [EBP + -0x8],0x6d
007441BC  75 07                     JNZ 0x007441c5
007441BE  33 C0                     XOR EAX,EAX
007441C0  E9 DB 02 00 00            JMP 0x007444a0
LAB_007441c5:
007441C5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007441C8  51                        PUSH ECX
007441C9  E8 22 CA FF FF            CALL 0x00740bf0
007441CE  83 C4 04                  ADD ESP,0x4
007441D1  83 C8 FF                  OR EAX,0xffffffff
007441D4  E9 C7 02 00 00            JMP 0x007444a0
LAB_007441d9:
007441D9  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007441DC  03 55 F0                  ADD EDX,dword ptr [EBP + -0x10]
007441DF  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
007441E2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007441E5  C1 F8 05                  SAR EAX,0x5
007441E8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007441EB  83 E1 1F                  AND ECX,0x1f
007441EE  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
007441F5  0F BE 44 CA 04            MOVSX EAX,byte ptr [EDX + ECX*0x8 + 0x4]
007441FA  25 80 00 00 00            AND EAX,0x80
007441FF  85 C0                     TEST EAX,EAX
00744201  0F 84 96 02 00 00         JZ 0x0074449d
00744207  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
0074420B  74 3D                     JZ 0x0074424a
0074420D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00744210  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00744213  83 FA 0A                  CMP EDX,0xa
00744216  75 32                     JNZ 0x0074424a
00744218  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074421B  C1 F8 05                  SAR EAX,0x5
0074421E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744221  83 E1 1F                  AND ECX,0x1f
00744224  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
0074422B  8A 44 CA 04               MOV AL,byte ptr [EDX + ECX*0x8 + 0x4]
0074422F  0C 04                     OR AL,0x4
00744231  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744234  C1 F9 05                  SAR ECX,0x5
00744237  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074423A  83 E2 1F                  AND EDX,0x1f
0074423D  8B 0C 8D A0 A1 85 00      MOV ECX,dword ptr [ECX*0x4 + 0x85a1a0]
00744244  88 44 D1 04               MOV byte ptr [ECX + EDX*0x8 + 0x4],AL
00744248  EB 31                     JMP 0x0074427b
LAB_0074424a:
0074424A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074424D  C1 FA 05                  SAR EDX,0x5
00744250  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744253  83 E0 1F                  AND EAX,0x1f
00744256  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
0074425D  8A 54 C1 04               MOV DL,byte ptr [ECX + EAX*0x8 + 0x4]
00744261  80 E2 FB                  AND DL,0xfb
00744264  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744267  C1 F8 05                  SAR EAX,0x5
0074426A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074426D  83 E1 1F                  AND ECX,0x1f
00744270  8B 04 85 A0 A1 85 00      MOV EAX,dword ptr [EAX*0x4 + 0x85a1a0]
00744277  88 54 C8 04               MOV byte ptr [EAX + ECX*0x8 + 0x4],DL
LAB_0074427b:
0074427B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0074427E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00744281  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00744284  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00744287:
00744287  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074428A  03 45 E8                  ADD EAX,dword ptr [EBP + -0x18]
0074428D  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
00744290  0F 83 FE 01 00 00         JNC 0x00744494
00744296  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00744299  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0074429C  83 FA 1A                  CMP EDX,0x1a
0074429F  75 55                     JNZ 0x007442f6
007442A1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007442A4  C1 F8 05                  SAR EAX,0x5
007442A7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007442AA  83 E1 1F                  AND ECX,0x1f
007442AD  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
007442B4  0F BE 44 CA 04            MOVSX EAX,byte ptr [EDX + ECX*0x8 + 0x4]
007442B9  83 E0 40                  AND EAX,0x40
007442BC  85 C0                     TEST EAX,EAX
007442BE  75 31                     JNZ 0x007442f1
007442C0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007442C3  C1 F9 05                  SAR ECX,0x5
007442C6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007442C9  83 E2 1F                  AND EDX,0x1f
007442CC  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
007442D3  8A 4C D0 04               MOV CL,byte ptr [EAX + EDX*0x8 + 0x4]
007442D7  80 C9 02                  OR CL,0x2
007442DA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007442DD  C1 FA 05                  SAR EDX,0x5
007442E0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007442E3  83 E0 1F                  AND EAX,0x1f
007442E6  8B 14 95 A0 A1 85 00      MOV EDX,dword ptr [EDX*0x4 + 0x85a1a0]
007442ED  88 4C C2 04               MOV byte ptr [EDX + EAX*0x8 + 0x4],CL
LAB_007442f1:
007442F1  E9 9E 01 00 00            JMP 0x00744494
LAB_007442f6:
007442F6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007442F9  0F BE 08                  MOVSX ECX,byte ptr [EAX]
007442FC  83 F9 0D                  CMP ECX,0xd
007442FF  74 21                     JZ 0x00744322
00744301  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00744304  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00744307  8A 08                     MOV CL,byte ptr [EAX]
00744309  88 0A                     MOV byte ptr [EDX],CL
0074430B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0074430E  83 C2 01                  ADD EDX,0x1
00744311  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00744314  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00744317  83 C0 01                  ADD EAX,0x1
0074431A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074431D  E9 6D 01 00 00            JMP 0x0074448f
LAB_00744322:
00744322  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00744325  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00744328  8D 44 0A FF               LEA EAX,[EDX + ECX*0x1 + -0x1]
0074432C  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
0074432F  73 47                     JNC 0x00744378
00744331  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00744334  0F BE 51 01               MOVSX EDX,byte ptr [ECX + 0x1]
00744338  83 FA 0A                  CMP EDX,0xa
0074433B  75 1A                     JNZ 0x00744357
0074433D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00744340  83 C0 02                  ADD EAX,0x2
00744343  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00744346  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00744349  C6 01 0A                  MOV byte ptr [ECX],0xa
0074434C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0074434F  83 C2 01                  ADD EDX,0x1
00744352  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00744355  EB 1C                     JMP 0x00744373
LAB_00744357:
00744357  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074435A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074435D  8A 11                     MOV DL,byte ptr [ECX]
0074435F  88 10                     MOV byte ptr [EAX],DL
00744361  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00744364  83 C0 01                  ADD EAX,0x1
00744367  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0074436A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074436D  83 C1 01                  ADD ECX,0x1
00744370  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00744373:
00744373  E9 17 01 00 00            JMP 0x0074448f
LAB_00744378:
00744378  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074437B  83 C2 01                  ADD EDX,0x1
0074437E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00744381  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00744388  6A 00                     PUSH 0x0
0074438A  8D 45 F0                  LEA EAX,[EBP + -0x10]
0074438D  50                        PUSH EAX
0074438E  6A 01                     PUSH 0x1
00744390  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00744393  51                        PUSH ECX
00744394  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744397  C1 FA 05                  SAR EDX,0x5
0074439A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074439D  83 E0 1F                  AND EAX,0x1f
007443A0  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
007443A7  8B 14 C1                  MOV EDX,dword ptr [ECX + EAX*0x8]
007443AA  52                        PUSH EDX
007443AB  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
007443B1  85 C0                     TEST EAX,EAX
007443B3  75 09                     JNZ 0x007443be
007443B5  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
007443BB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_007443be:
007443BE  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
007443C2  75 06                     JNZ 0x007443ca
007443C4  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
007443C8  75 14                     JNZ 0x007443de
LAB_007443ca:
007443CA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007443CD  C6 00 0D                  MOV byte ptr [EAX],0xd
007443D0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007443D3  83 C1 01                  ADD ECX,0x1
007443D6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007443D9  E9 B1 00 00 00            JMP 0x0074448f
LAB_007443de:
007443DE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007443E1  C1 FA 05                  SAR EDX,0x5
007443E4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007443E7  83 E0 1F                  AND EAX,0x1f
007443EA  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
007443F1  0F BE 54 C1 04            MOVSX EDX,byte ptr [ECX + EAX*0x8 + 0x4]
007443F6  83 E2 48                  AND EDX,0x48
007443F9  85 D2                     TEST EDX,EDX
007443FB  74 45                     JZ 0x00744442
007443FD  0F BE 45 E4               MOVSX EAX,byte ptr [EBP + -0x1c]
00744401  83 F8 0A                  CMP EAX,0xa
00744404  75 11                     JNZ 0x00744417
00744406  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00744409  C6 01 0A                  MOV byte ptr [ECX],0xa
0074440C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0074440F  83 C2 01                  ADD EDX,0x1
00744412  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00744415  EB 29                     JMP 0x00744440
LAB_00744417:
00744417  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074441A  C6 00 0D                  MOV byte ptr [EAX],0xd
0074441D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00744420  83 C1 01                  ADD ECX,0x1
00744423  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00744426  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744429  C1 FA 05                  SAR EDX,0x5
0074442C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074442F  83 E0 1F                  AND EAX,0x1f
00744432  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00744439  8A 55 E4                  MOV DL,byte ptr [EBP + -0x1c]
0074443C  88 54 C1 05               MOV byte ptr [ECX + EAX*0x8 + 0x5],DL
LAB_00744440:
00744440  EB 4D                     JMP 0x0074448f
LAB_00744442:
00744442  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00744445  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
00744448  75 1A                     JNZ 0x00744464
0074444A  0F BE 4D E4               MOVSX ECX,byte ptr [EBP + -0x1c]
0074444E  83 F9 0A                  CMP ECX,0xa
00744451  75 11                     JNZ 0x00744464
00744453  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00744456  C6 02 0A                  MOV byte ptr [EDX],0xa
00744459  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074445C  83 C0 01                  ADD EAX,0x1
0074445F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00744462  EB 2B                     JMP 0x0074448f
LAB_00744464:
00744464  6A 01                     PUSH 0x1
00744466  6A FF                     PUSH -0x1
00744468  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074446B  51                        PUSH ECX
0074446C  E8 DF E8 FF FF            CALL 0x00742d50
00744471  83 C4 0C                  ADD ESP,0xc
00744474  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00744477  0F BE 55 E4               MOVSX EDX,byte ptr [EBP + -0x1c]
0074447B  83 FA 0A                  CMP EDX,0xa
0074447E  74 0F                     JZ 0x0074448f
00744480  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00744483  C6 00 0D                  MOV byte ptr [EAX],0xd
00744486  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00744489  83 C1 01                  ADD ECX,0x1
0074448C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0074448f:
0074448F  E9 F3 FD FF FF            JMP 0x00744287
LAB_00744494:
00744494  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00744497  2B 55 0C                  SUB EDX,dword ptr [EBP + 0xc]
0074449A  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_0074449d:
0074449D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_007444a0:
007444A0  8B E5                     MOV ESP,EBP
007444A2  5D                        POP EBP
007444A3  C3                        RET
