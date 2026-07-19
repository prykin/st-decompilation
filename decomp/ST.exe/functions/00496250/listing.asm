FUN_00496250:
00496250  55                        PUSH EBP
00496251  8B EC                     MOV EBP,ESP
00496253  83 EC 1C                  SUB ESP,0x1c
00496256  53                        PUSH EBX
00496257  56                        PUSH ESI
00496258  57                        PUSH EDI
00496259  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0049625C  83 FF 0A                  CMP EDI,0xa
0049625F  0F 8C 45 04 00 00         JL 0x004966aa
00496265  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00496268  B8 79 19 8C 02            MOV EAX,0x28c1979
0049626D  85 C9                     TEST ECX,ECX
0049626F  7C 10                     JL 0x00496281
00496271  F7 E9                     IMUL ECX
00496273  D1 FA                     SAR EDX,0x1
00496275  8B C2                     MOV EAX,EDX
00496277  C1 E8 1F                  SHR EAX,0x1f
0049627A  03 D0                     ADD EDX,EAX
0049627C  0F BF F2                  MOVSX ESI,DX
0049627F  EB 0F                     JMP 0x00496290
LAB_00496281:
00496281  F7 E9                     IMUL ECX
00496283  D1 FA                     SAR EDX,0x1
00496285  8B CA                     MOV ECX,EDX
00496287  C1 E9 1F                  SHR ECX,0x1f
0049628A  03 D1                     ADD EDX,ECX
0049628C  0F BF F2                  MOVSX ESI,DX
0049628F  4E                        DEC ESI
LAB_00496290:
00496290  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00496293  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00496296  85 C9                     TEST ECX,ECX
00496298  B8 79 19 8C 02            MOV EAX,0x28c1979
0049629D  7C 10                     JL 0x004962af
0049629F  F7 E9                     IMUL ECX
004962A1  D1 FA                     SAR EDX,0x1
004962A3  8B C2                     MOV EAX,EDX
004962A5  C1 E8 1F                  SHR EAX,0x1f
004962A8  03 D0                     ADD EDX,EAX
004962AA  0F BF CA                  MOVSX ECX,DX
004962AD  EB 0F                     JMP 0x004962be
LAB_004962af:
004962AF  F7 E9                     IMUL ECX
004962B1  D1 FA                     SAR EDX,0x1
004962B3  8B CA                     MOV ECX,EDX
004962B5  C1 E9 1F                  SHR ECX,0x1f
004962B8  03 D1                     ADD EDX,ECX
004962BA  0F BF CA                  MOVSX ECX,DX
004962BD  49                        DEC ECX
LAB_004962be:
004962BE  85 FF                     TEST EDI,EDI
004962C0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004962C3  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004962C8  7C 11                     JL 0x004962db
004962CA  F7 EF                     IMUL EDI
004962CC  C1 FA 06                  SAR EDX,0x6
004962CF  8B C2                     MOV EAX,EDX
004962D1  C1 E8 1F                  SHR EAX,0x1f
004962D4  03 D0                     ADD EDX,EAX
004962D6  0F BF DA                  MOVSX EBX,DX
004962D9  EB 10                     JMP 0x004962eb
LAB_004962db:
004962DB  F7 EF                     IMUL EDI
004962DD  C1 FA 06                  SAR EDX,0x6
004962E0  8B C2                     MOV EAX,EDX
004962E2  C1 E8 1F                  SHR EAX,0x1f
004962E5  03 D0                     ADD EDX,EAX
004962E7  0F BF DA                  MOVSX EBX,DX
004962EA  4B                        DEC EBX
LAB_004962eb:
004962EB  85 F6                     TEST ESI,ESI
004962ED  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004962F0  0F 8C DC 00 00 00         JL 0x004963d2
004962F6  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004962FD  3B F2                     CMP ESI,EDX
004962FF  0F 8F CD 00 00 00         JG 0x004963d2
00496305  85 C9                     TEST ECX,ECX
00496307  0F 8C C5 00 00 00         JL 0x004963d2
0049630D  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
00496314  3B C8                     CMP ECX,EAX
00496316  0F 8F B6 00 00 00         JG 0x004963d2
0049631C  85 DB                     TEST EBX,EBX
0049631E  0F 8C AE 00 00 00         JL 0x004963d2
00496324  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
0049632B  3B DA                     CMP EBX,EDX
0049632D  0F 8F 9F 00 00 00         JG 0x004963d2
00496333  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
0049633A  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
00496341  0F AF C3                  IMUL EAX,EBX
00496344  0F AF D1                  IMUL EDX,ECX
00496347  03 F0                     ADD ESI,EAX
00496349  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
0049634E  03 D6                     ADD EDX,ESI
00496350  0F BF 04 50               MOVSX EAX,word ptr [EAX + EDX*0x2]
00496354  85 C0                     TEST EAX,EAX
00496356  74 7A                     JZ 0x004963d2
00496358  83 F8 FF                  CMP EAX,-0x1
0049635B  0F 84 49 03 00 00         JZ 0x004966aa
00496361  83 F8 FE                  CMP EAX,-0x2
00496364  74 07                     JZ 0x0049636d
00496366  3D FF BF FF FF            CMP EAX,0xffffbfff
0049636B  75 65                     JNZ 0x004963d2
LAB_0049636d:
0049636D  8B 35 50 67 80 00         MOV ESI,dword ptr [0x00806750]
00496373  0F BF 3E                  MOVSX EDI,word ptr [ESI]
00496376  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
0049637A  0F AF C7                  IMUL EAX,EDI
0049637D  99                        CDQ
0049637E  83 E2 03                  AND EDX,0x3
00496381  03 C2                     ADD EAX,EDX
00496383  8B C8                     MOV ECX,EAX
00496385  8B C7                     MOV EAX,EDI
00496387  99                        CDQ
00496388  2B C2                     SUB EAX,EDX
0049638A  8D 53 01                  LEA EDX,[EBX + 0x1]
0049638D  C1 F9 02                  SAR ECX,0x2
00496390  D1 F8                     SAR EAX,0x1
00496392  83 FA 05                  CMP EDX,0x5
00496395  7F 3B                     JG 0x004963d2
00496397  8D 3C 8D 00 00 00 00      LEA EDI,[ECX*0x4 + 0x0]
0049639E  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
004963A1  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004963A4  D1 FF                     SAR EDI,0x1
004963A6  0F AF F8                  IMUL EDI,EAX
004963A9  8B C2                     MOV EAX,EDX
004963AB  0F AF C1                  IMUL EAX,ECX
004963AE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004963B1  03 F8                     ADD EDI,EAX
004963B3  D1 F9                     SAR ECX,0x1
004963B5  03 F9                     ADD EDI,ECX
004963B7  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004963BA  8D B4 BE 59 04 00 00      LEA ESI,[ESI + EDI*0x4 + 0x459]
LAB_004963c1:
004963C1  8B 06                     MOV EAX,dword ptr [ESI]
004963C3  85 C0                     TEST EAX,EAX
004963C5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004963C8  75 14                     JNZ 0x004963de
004963CA  42                        INC EDX
004963CB  03 F1                     ADD ESI,ECX
004963CD  83 FA 05                  CMP EDX,0x5
004963D0  7E EF                     JLE 0x004963c1
switchD_0049655f::default:
004963D2  5F                        POP EDI
004963D3  5E                        POP ESI
004963D4  83 C8 FF                  OR EAX,0xffffffff
004963D7  5B                        POP EBX
004963D8  8B E5                     MOV ESP,EBP
004963DA  5D                        POP EBP
004963DB  C2 0C 00                  RET 0xc
LAB_004963de:
004963DE  66 8B 78 08               MOV DI,word ptr [EAX + 0x8]
004963E2  33 D2                     XOR EDX,EDX
004963E4  8A 50 48                  MOV DL,byte ptr [EAX + 0x48]
004963E7  0F BF F7                  MOVSX ESI,DI
004963EA  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004963ED  2B F2                     SUB ESI,EDX
004963EF  3B DE                     CMP EBX,ESI
004963F1  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
004963F4  7C DC                     JL 0x004963d2
004963F6  66 8B 40 4E               MOV AX,word ptr [EAX + 0x4e]
004963FA  F6 C4 40                  TEST AH,0x40
004963FD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00496400  0F 85 A4 02 00 00         JNZ 0x004966aa
00496406  A1 98 75 80 00            MOV EAX,[0x00807598]
0049640B  8B 88 80 03 00 00         MOV ECX,dword ptr [EAX + 0x380]
00496411  B8 79 19 8C 02            MOV EAX,0x28c1979
00496416  8B D1                     MOV EDX,ECX
00496418  0F AF 55 08               IMUL EDX,dword ptr [EBP + 0x8]
0049641C  F7 EA                     IMUL EDX
0049641E  8B C2                     MOV EAX,EDX
00496420  8D 34 09                  LEA ESI,[ECX + ECX*0x1]
00496423  D1 F8                     SAR EAX,0x1
00496425  8B D0                     MOV EDX,EAX
00496427  C1 EA 1F                  SHR EDX,0x1f
0049642A  03 C2                     ADD EAX,EDX
0049642C  99                        CDQ
0049642D  F7 FE                     IDIV ESI
0049642F  B8 79 19 8C 02            MOV EAX,0x28c1979
00496434  8B DA                     MOV EBX,EDX
00496436  8B D1                     MOV EDX,ECX
00496438  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
0049643C  F7 EA                     IMUL EDX
0049643E  8B C2                     MOV EAX,EDX
00496440  D1 F8                     SAR EAX,0x1
00496442  8B D0                     MOV EDX,EAX
00496444  C1 EA 1F                  SHR EDX,0x1f
00496447  03 C2                     ADD EAX,EDX
00496449  99                        CDQ
0049644A  F7 FE                     IDIV ESI
0049644C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0049644F  8B F2                     MOV ESI,EDX
00496451  8D 90 90 01 00 00         LEA EDX,[EAX + 0x190]
00496457  C1 E2 08                  SHL EDX,0x8
0049645A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0049645F  F7 EA                     IMUL EDX
00496461  C1 FA 09                  SAR EDX,0x9
00496464  8B C2                     MOV EAX,EDX
00496466  C1 E8 1F                  SHR EAX,0x1f
00496469  03 D0                     ADD EDX,EAX
0049646B  66 85 FF                  TEST DI,DI
0049646E  75 04                     JNZ 0x00496474
00496470  33 FF                     XOR EDI,EDI
00496472  EB 0F                     JMP 0x00496483
LAB_00496474:
00496474  A1 98 75 80 00            MOV EAX,[0x00807598]
00496479  8B B8 84 03 00 00         MOV EDI,dword ptr [EAX + 0x384]
0049647F  0F AF 7D E4               IMUL EDI,dword ptr [EBP + -0x1c]
LAB_00496483:
00496483  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00496486  0F AF CE                  IMUL ECX,ESI
00496489  8B 40 40                  MOV EAX,dword ptr [EAX + 0x40]
0049648C  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0049648F  33 C0                     XOR EAX,EAX
00496491  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
00496494  8D 4C 38 04               LEA ECX,[EAX + EDI*0x1 + 0x4]
00496498  3B D1                     CMP EDX,ECX
0049649A  0F 8F 32 FF FF FF         JG 0x004963d2
004964A0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004964A3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004964A6  83 E1 FE                  AND ECX,0xfffffffe
004964A9  8B C1                     MOV EAX,ECX
004964AB  C1 E0 04                  SHL EAX,0x4
004964AE  03 C1                     ADD EAX,ECX
004964B0  C1 E0 02                  SHL EAX,0x2
004964B3  2B C1                     SUB EAX,ECX
004964B5  F7 D8                     NEG EAX
004964B7  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
004964BA  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
004964BD  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004964C2  F7 E9                     IMUL ECX
004964C4  C1 FA 05                  SAR EDX,0x5
004964C7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004964CA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004964CD  8B C2                     MOV EAX,EDX
004964CF  83 E1 FE                  AND ECX,0xfffffffe
004964D2  C1 E8 1F                  SHR EAX,0x1f
004964D5  03 D0                     ADD EDX,EAX
004964D7  8B C1                     MOV EAX,ECX
004964D9  C1 E0 04                  SHL EAX,0x4
004964DC  03 C1                     ADD EAX,ECX
004964DE  8B F2                     MOV ESI,EDX
004964E0  C1 E0 02                  SHL EAX,0x2
004964E3  2B C1                     SUB EAX,ECX
004964E5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004964E8  F7 D8                     NEG EAX
004964EA  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004964ED  8D 0C 42                  LEA ECX,[EDX + EAX*0x2]
004964F0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004964F5  F7 E9                     IMUL ECX
004964F7  C1 FA 05                  SAR EDX,0x5
004964FA  8B C2                     MOV EAX,EDX
004964FC  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004964FF  C1 E8 1F                  SHR EAX,0x1f
00496502  03 D0                     ADD EDX,EAX
00496504  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00496507  F6 C4 20                  TEST AH,0x20
0049650A  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0049650D  0F 84 3B 02 00 00         JZ 0x0049674e
00496513  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00496516  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00496519  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0049651C  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0049651F  2B C8                     SUB ECX,EAX
00496521  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00496524  83 E0 01                  AND EAX,0x1
00496527  83 E7 01                  AND EDI,0x1
0049652A  49                        DEC ECX
0049652B  8D 14 47                  LEA EDX,[EDI + EAX*0x2]
0049652E  8B 54 93 2C               MOV EDX,dword ptr [EBX + EDX*0x4 + 0x2c]
00496532  BB 08 00 00 00            MOV EBX,0x8
00496537  D3 FB                     SAR EBX,CL
00496539  85 DA                     TEST EDX,EBX
0049653B  0F 84 91 FE FF FF         JZ 0x004963d2
00496541  BB 80 00 00 00            MOV EBX,0x80
00496546  D3 FB                     SAR EBX,CL
00496548  85 DA                     TEST EDX,EBX
0049654A  0F 85 5A 01 00 00         JNZ 0x004966aa
00496550  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00496553  83 E1 0F                  AND ECX,0xf
00496556  83 F9 0E                  CMP ECX,0xe
00496559  0F 87 73 FE FF FF         JA 0x004963d2
switchD_0049655f::switchD:
0049655F  FF 24 8D D4 67 49 00      JMP dword ptr [ECX*0x4 + 0x4967d4]
switchD_0049655f::caseD_1:
00496566  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00496569  3B F0                     CMP ESI,EAX
0049656B  75 0E                     JNZ 0x0049657b
0049656D  5F                        POP EDI
0049656E  5E                        POP ESI
0049656F  B8 03 00 00 00            MOV EAX,0x3
00496574  5B                        POP EBX
00496575  8B E5                     MOV ESP,EBP
00496577  5D                        POP EBP
00496578  C2 0C 00                  RET 0xc
LAB_0049657b:
0049657B  83 FE 03                  CMP ESI,0x3
0049657E  7C 0E                     JL 0x0049658e
00496580  5F                        POP EDI
00496581  5E                        POP ESI
00496582  B8 02 00 00 00            MOV EAX,0x2
00496587  5B                        POP EBX
00496588  8B E5                     MOV ESP,EBP
0049658A  5D                        POP EBP
0049658B  C2 0C 00                  RET 0xc
LAB_0049658e:
0049658E  33 C9                     XOR ECX,ECX
00496590  83 F8 03                  CMP EAX,0x3
00496593  0F 9D C1                  SETGE CL
00496596  83 C1 03                  ADD ECX,0x3
00496599  5F                        POP EDI
0049659A  5E                        POP ESI
0049659B  8B C1                     MOV EAX,ECX
0049659D  5B                        POP EBX
0049659E  8B E5                     MOV ESP,EBP
004965A0  5D                        POP EBP
004965A1  C2 0C 00                  RET 0xc
switchD_0049655f::caseD_2:
004965A4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004965A7  BA 03 00 00 00            MOV EDX,0x3
004965AC  2B D6                     SUB EDX,ESI
004965AE  3B D0                     CMP EDX,EAX
004965B0  75 0E                     JNZ 0x004965c0
004965B2  5F                        POP EDI
004965B3  5E                        POP ESI
004965B4  B8 05 00 00 00            MOV EAX,0x5
004965B9  5B                        POP EBX
004965BA  8B E5                     MOV ESP,EBP
004965BC  5D                        POP EBP
004965BD  C2 0C 00                  RET 0xc
LAB_004965c0:
004965C0  83 FE 03                  CMP ESI,0x3
004965C3  7C 0E                     JL 0x004965d3
004965C5  5F                        POP EDI
004965C6  5E                        POP ESI
004965C7  B8 06 00 00 00            MOV EAX,0x6
004965CC  5B                        POP EBX
004965CD  8B E5                     MOV ESP,EBP
004965CF  5D                        POP EBP
004965D0  C2 0C 00                  RET 0xc
LAB_004965d3:
004965D3  33 C9                     XOR ECX,ECX
004965D5  5F                        POP EDI
004965D6  85 C0                     TEST EAX,EAX
004965D8  0F 95 C1                  SETNZ CL
004965DB  83 C1 04                  ADD ECX,0x4
004965DE  5E                        POP ESI
004965DF  8B C1                     MOV EAX,ECX
004965E1  5B                        POP EBX
004965E2  8B E5                     MOV ESP,EBP
004965E4  5D                        POP EBP
004965E5  C2 0C 00                  RET 0xc
switchD_0049655f::caseD_3:
004965E8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004965EB  3B F0                     CMP ESI,EAX
004965ED  75 0E                     JNZ 0x004965fd
FUN_00496250::cf_common_exit_004965EF:
004965EF  5F                        POP EDI
004965F0  5E                        POP ESI
004965F1  B8 07 00 00 00            MOV EAX,0x7
004965F6  5B                        POP EBX
004965F7  8B E5                     MOV ESP,EBP
004965F9  5D                        POP EBP
004965FA  C2 0C 00                  RET 0xc
LAB_004965fd:
004965FD  85 F6                     TEST ESI,ESI
004965FF  75 0E                     JNZ 0x0049660f
switchD_0049655f::caseD_6:
00496601  5F                        POP EDI
00496602  5E                        POP ESI
00496603  B8 06 00 00 00            MOV EAX,0x6
00496608  5B                        POP EBX
00496609  8B E5                     MOV ESP,EBP
0049660B  5D                        POP EBP
0049660C  C2 0C 00                  RET 0xc
LAB_0049660f:
0049660F  F7 D8                     NEG EAX
00496611  1B C0                     SBB EAX,EAX
00496613  5F                        POP EDI
00496614  5E                        POP ESI
00496615  83 E0 07                  AND EAX,0x7
00496618  5B                        POP EBX
00496619  8B E5                     MOV ESP,EBP
0049661B  5D                        POP EBP
0049661C  C2 0C 00                  RET 0xc
switchD_0049655f::caseD_4:
0049661F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00496622  BA 03 00 00 00            MOV EDX,0x3
00496627  2B D0                     SUB EDX,EAX
00496629  3B F2                     CMP ESI,EDX
0049662B  75 0E                     JNZ 0x0049663b
switchD_00496785::caseD_2:
0049662D  5F                        POP EDI
0049662E  5E                        POP ESI
0049662F  B8 01 00 00 00            MOV EAX,0x1
00496634  5B                        POP EBX
00496635  8B E5                     MOV ESP,EBP
00496637  5D                        POP EBP
00496638  C2 0C 00                  RET 0xc
LAB_0049663b:
0049663B  85 F6                     TEST ESI,ESI
0049663D  75 0E                     JNZ 0x0049664d
switchD_0049655f::caseD_8:
0049663F  5F                        POP EDI
00496640  5E                        POP ESI
00496641  B8 02 00 00 00            MOV EAX,0x2
00496646  5B                        POP EBX
00496647  8B E5                     MOV ESP,EBP
00496649  5D                        POP EBP
0049664A  C2 0C 00                  RET 0xc
LAB_0049664d:
0049664D  33 C9                     XOR ECX,ECX
0049664F  83 F8 03                  CMP EAX,0x3
00496652  0F 9C C1                  SETL CL
00496655  5F                        POP EDI
00496656  5E                        POP ESI
00496657  8B C1                     MOV EAX,ECX
00496659  5B                        POP EBX
0049665A  8B E5                     MOV ESP,EBP
0049665C  5D                        POP EBP
0049665D  C2 0C 00                  RET 0xc
switchD_0049655f::caseD_9:
00496660  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00496663  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00496666  3B CA                     CMP ECX,EDX
00496668  0F 85 00 01 00 00         JNZ 0x0049676e
0049666E  85 FF                     TEST EDI,EDI
00496670  0F 84 F8 00 00 00         JZ 0x0049676e
00496676  85 C0                     TEST EAX,EAX
00496678  0F 84 F0 00 00 00         JZ 0x0049676e
0049667E  5F                        POP EDI
0049667F  5E                        POP ESI
00496680  B8 7F 00 00 00            MOV EAX,0x7f
00496685  5B                        POP EBX
00496686  8B E5                     MOV ESP,EBP
00496688  5D                        POP EBP
00496689  C2 0C 00                  RET 0xc
switchD_0049655f::caseD_a:
0049668C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0049668F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00496692  3B D1                     CMP EDX,ECX
00496694  0F 85 2B 01 00 00         JNZ 0x004967c5
0049669A  85 FF                     TEST EDI,EDI
0049669C  0F 84 23 01 00 00         JZ 0x004967c5
004966A2  85 C0                     TEST EAX,EAX
004966A4  0F 85 1B 01 00 00         JNZ 0x004967c5
switchD_0049655f::caseD_0:
004966AA  5F                        POP EDI
004966AB  5E                        POP ESI
004966AC  B8 7F 00 00 00            MOV EAX,0x7f
004966B1  5B                        POP EBX
004966B2  8B E5                     MOV ESP,EBP
004966B4  5D                        POP EBP
004966B5  C2 0C 00                  RET 0xc
switchD_0049655f::caseD_b:
004966B8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004966BB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004966BE  3B CA                     CMP ECX,EDX
004966C0  0F 85 29 FF FF FF         JNZ 0x004965ef
004966C6  85 FF                     TEST EDI,EDI
004966C8  0F 85 21 FF FF FF         JNZ 0x004965ef
004966CE  85 C0                     TEST EAX,EAX
004966D0  0F 85 19 FF FF FF         JNZ 0x004965ef
004966D6  5F                        POP EDI
004966D7  5E                        POP ESI
004966D8  B8 7F 00 00 00            MOV EAX,0x7f
004966DD  5B                        POP EBX
004966DE  8B E5                     MOV ESP,EBP
004966E0  5D                        POP EBP
004966E1  C2 0C 00                  RET 0xc
switchD_0049655f::caseD_c:
004966E4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004966E7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004966EA  3B D1                     CMP EDX,ECX
004966EC  0F 85 3B FF FF FF         JNZ 0x0049662d
004966F2  85 FF                     TEST EDI,EDI
004966F4  0F 85 33 FF FF FF         JNZ 0x0049662d
004966FA  85 C0                     TEST EAX,EAX
004966FC  0F 84 2B FF FF FF         JZ 0x0049662d
00496702  5F                        POP EDI
00496703  5E                        POP ESI
00496704  B8 7F 00 00 00            MOV EAX,0x7f
00496709  5B                        POP EBX
0049670A  8B E5                     MOV ESP,EBP
0049670C  5D                        POP EBP
0049670D  C2 0C 00                  RET 0xc
switchD_0049655f::caseD_d:
00496710  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00496713  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00496716  BA 92 01 00 00            MOV EDX,0x192
0049671B  33 C0                     XOR EAX,EAX
0049671D  2B D3                     SUB EDX,EBX
0049671F  3B FA                     CMP EDI,EDX
00496721  5F                        POP EDI
00496722  0F 9D C0                  SETGE AL
00496725  48                        DEC EAX
00496726  5E                        POP ESI
00496727  24 FC                     AND AL,0xfc
00496729  5B                        POP EBX
0049672A  83 C0 07                  ADD EAX,0x7
0049672D  8B E5                     MOV ESP,EBP
0049672F  5D                        POP EBP
00496730  C2 0C 00                  RET 0xc
switchD_0049655f::caseD_e:
00496733  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00496736  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00496739  33 C0                     XOR EAX,EAX
0049673B  3B F9                     CMP EDI,ECX
0049673D  0F 9D C0                  SETGE AL
00496740  48                        DEC EAX
00496741  5F                        POP EDI
00496742  83 E0 04                  AND EAX,0x4
00496745  5E                        POP ESI
00496746  40                        INC EAX
00496747  5B                        POP EBX
00496748  8B E5                     MOV ESP,EBP
0049674A  5D                        POP EBP
0049674B  C2 0C 00                  RET 0xc
LAB_0049674e:
0049674E  83 FA 03                  CMP EDX,0x3
00496751  0F 87 7B FC FF FF         JA 0x004963d2
switchD_00496757::switchD:
00496757  FF 24 95 10 68 49 00      JMP dword ptr [EDX*0x4 + 0x496810]
switchD_00496757::caseD_0:
0049675E  83 FE 03                  CMP ESI,0x3
00496761  0F 87 6B FC FF FF         JA 0x004963d2
switchD_00496767::switchD:
00496767  FF 24 B5 20 68 49 00      JMP dword ptr [ESI*0x4 + 0x496820]
switchD_00496785::caseD_1:
0049676E  5F                        POP EDI
0049676F  5E                        POP ESI
00496770  B8 03 00 00 00            MOV EAX,0x3
00496775  5B                        POP EBX
00496776  8B E5                     MOV ESP,EBP
00496778  5D                        POP EBP
00496779  C2 0C 00                  RET 0xc
switchD_00496757::caseD_1:
0049677C  83 FE 03                  CMP ESI,0x3
0049677F  0F 87 4D FC FF FF         JA 0x004963d2
switchD_00496785::switchD:
00496785  FF 24 B5 30 68 49 00      JMP dword ptr [ESI*0x4 + 0x496830]
switchD_00496757::caseD_2:
0049678C  83 FE 03                  CMP ESI,0x3
0049678F  0F 87 3D FC FF FF         JA 0x004963d2
switchD_00496795::switchD:
00496795  FF 24 B5 40 68 49 00      JMP dword ptr [ESI*0x4 + 0x496840]
FUN_00496250::cf_common_exit_0049679C:
0049679C  5F                        POP EDI
0049679D  5E                        POP ESI
0049679E  B8 04 00 00 00            MOV EAX,0x4
004967A3  5B                        POP EBX
004967A4  8B E5                     MOV ESP,EBP
004967A6  5D                        POP EBP
004967A7  C2 0C 00                  RET 0xc
FUN_00496250::cf_common_exit_004967AA:
004967AA  5F                        POP EDI
004967AB  5E                        POP ESI
004967AC  33 C0                     XOR EAX,EAX
004967AE  5B                        POP EBX
004967AF  8B E5                     MOV ESP,EBP
004967B1  5D                        POP EBP
004967B2  C2 0C 00                  RET 0xc
switchD_00496757::caseD_3:
004967B5  83 FE 03                  CMP ESI,0x3
004967B8  0F 87 14 FC FF FF         JA 0x004963d2
switchD_004967be::switchD:
004967BE  FF 24 B5 50 68 49 00      JMP dword ptr [ESI*0x4 + 0x496850]
switchD_004967be::caseD_0:
004967C5  5F                        POP EDI
004967C6  5E                        POP ESI
004967C7  B8 05 00 00 00            MOV EAX,0x5
004967CC  5B                        POP EBX
004967CD  8B E5                     MOV ESP,EBP
004967CF  5D                        POP EBP
004967D0  C2 0C 00                  RET 0xc
