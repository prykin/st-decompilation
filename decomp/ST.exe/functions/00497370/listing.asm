FUN_00497370:
00497370  55                        PUSH EBP
00497371  8B EC                     MOV EBP,ESP
00497373  6A FF                     PUSH -0x1
00497375  68 18 07 79 00            PUSH 0x790718
0049737A  68 64 D9 72 00            PUSH 0x72d964
0049737F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00497385  50                        PUSH EAX
00497386  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0049738D  83 EC 50                  SUB ESP,0x50
00497390  53                        PUSH EBX
00497391  56                        PUSH ESI
00497392  57                        PUSH EDI
00497393  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00497396  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00497399  C7 45 DC FF FF FF FF      MOV dword ptr [EBP + -0x24],0xffffffff
004973A0  8B 3D 70 B2 7F 00         MOV EDI,dword ptr [0x007fb270]
004973A6  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
004973A9  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
004973AC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004973B3  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
004973B6  C1 E0 03                  SHL EAX,0x3
004973B9  83 C0 03                  ADD EAX,0x3
004973BC  24 FC                     AND AL,0xfc
004973BE  E8 7D 66 29 00            CALL 0x0072da40
004973C3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004973C6  8B C4                     MOV EAX,ESP
004973C8  8B D8                     MOV EBX,EAX
004973CA  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
004973CD  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
004973D4  83 C0 03                  ADD EAX,0x3
004973D7  24 FC                     AND AL,0xfc
004973D9  E8 62 66 29 00            CALL 0x0072da40
004973DE  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004973E1  8B C4                     MOV EAX,ESP
004973E3  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004973E6  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
004973ED  33 C0                     XOR EAX,EAX
004973EF  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004973F2  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004973F5  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004973F8  3B F0                     CMP ESI,EAX
004973FA  0F 8E 5E 01 00 00         JLE 0x0049755e
00497400  83 C3 10                  ADD EBX,0x10
LAB_00497403:
00497403  3B 47 0C                  CMP EAX,dword ptr [EDI + 0xc]
00497406  73 0B                     JNC 0x00497413
00497408  8B 77 08                  MOV ESI,dword ptr [EDI + 0x8]
0049740B  0F AF F0                  IMUL ESI,EAX
0049740E  03 77 1C                  ADD ESI,dword ptr [EDI + 0x1c]
00497411  EB 02                     JMP 0x00497415
LAB_00497413:
00497413  33 F6                     XOR ESI,ESI
LAB_00497415:
00497415  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00497418  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0049741B  3B C2                     CMP EAX,EDX
0049741D  0F 84 2B 01 00 00         JZ 0x0049754e
00497423  88 45 A8                  MOV byte ptr [EBP + -0x58],AL
00497426  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0049742C  84 C9                     TEST CL,CL
0049742E  74 2C                     JZ 0x0049745c
00497430  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00497433  25 FF 00 00 00            AND EAX,0xff
00497438  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0049743B  8B C2                     MOV EAX,EDX
0049743D  25 FF 00 00 00            AND EAX,0xff
00497442  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00497445  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0049744C  33 D2                     XOR EDX,EDX
0049744E  3A 84 C9 EA 87 80 00      CMP AL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00497455  0F 95 C2                  SETNZ DL
00497458  8B C2                     MOV EAX,EDX
0049745A  EB 79                     JMP 0x004974d5
LAB_0049745c:
0049745C  3A C2                     CMP AL,DL
0049745E  74 6A                     JZ 0x004974ca
00497460  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00497463  25 FF 00 00 00            AND EAX,0xff
00497468  8B CA                     MOV ECX,EDX
0049746A  81 E1 FF 00 00 00         AND ECX,0xff
00497470  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00497477  84 D2                     TEST DL,DL
00497479  75 10                     JNZ 0x0049748b
0049747B  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00497482  75 07                     JNZ 0x0049748b
00497484  B8 FE FF FF FF            MOV EAX,0xfffffffe
00497489  EB 41                     JMP 0x004974cc
LAB_0049748b:
0049748B  80 FA 01                  CMP DL,0x1
0049748E  75 0F                     JNZ 0x0049749f
00497490  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00497498  75 05                     JNZ 0x0049749f
0049749A  83 C8 FF                  OR EAX,0xffffffff
0049749D  EB 2D                     JMP 0x004974cc
LAB_0049749f:
0049749F  84 D2                     TEST DL,DL
004974A1  75 11                     JNZ 0x004974b4
004974A3  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004974AB  75 07                     JNZ 0x004974b4
004974AD  B8 01 00 00 00            MOV EAX,0x1
004974B2  EB 18                     JMP 0x004974cc
LAB_004974b4:
004974B4  80 FA 01                  CMP DL,0x1
004974B7  75 11                     JNZ 0x004974ca
004974B9  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004974C1  75 07                     JNZ 0x004974ca
004974C3  B8 02 00 00 00            MOV EAX,0x2
004974C8  EB 02                     JMP 0x004974cc
LAB_004974ca:
004974CA  33 C0                     XOR EAX,EAX
LAB_004974cc:
004974CC  33 C9                     XOR ECX,ECX
004974CE  85 C0                     TEST EAX,EAX
004974D0  0F 9C C1                  SETL CL
004974D3  8B C1                     MOV EAX,ECX
LAB_004974d5:
004974D5  85 C0                     TEST EAX,EAX
004974D7  74 75                     JZ 0x0049754e
004974D9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004974DC  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004974DF  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004974E2  8D 44 D1 64               LEA EAX,[ECX + EDX*0x8 + 0x64]
004974E6  50                        PUSH EAX
004974E7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004974EA  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004974ED  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004974F0  8D 44 D1 64               LEA EAX,[ECX + EDX*0x8 + 0x64]
004974F4  50                        PUSH EAX
004974F5  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
004974F8  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004974FB  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004974FE  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
00497502  52                        PUSH EDX
00497503  8B 06                     MOV EAX,dword ptr [ESI]
00497505  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00497508  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0049750B  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
0049750F  52                        PUSH EDX
00497510  E8 C3 59 21 00            CALL 0x006aced8
00497515  83 C4 10                  ADD ESP,0x10
00497518  3D C7 0B 00 00            CMP EAX,0xbc7
0049751D  7D 29                     JGE 0x00497548
0049751F  B9 06 00 00 00            MOV ECX,0x6
00497524  8D 7B F0                  LEA EDI,[EBX + -0x10]
00497527  F3 A5                     MOVSD.REP ES:EDI,ESI
00497529  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
0049752C  E8 93 B8 F6 FF            CALL 0x00402dc4
00497531  33 C9                     XOR ECX,ECX
00497533  85 C0                     TEST EAX,EAX
00497535  0F 9C C1                  SETL CL
00497538  49                        DEC ECX
00497539  23 C8                     AND ECX,EAX
0049753B  89 0B                     MOV dword ptr [EBX],ECX
0049753D  8B D1                     MOV EDX,ECX
0049753F  01 55 C4                  ADD dword ptr [EBP + -0x3c],EDX
00497542  FF 45 D4                  INC dword ptr [EBP + -0x2c]
00497545  83 C3 18                  ADD EBX,0x18
LAB_00497548:
00497548  8B 3D 70 B2 7F 00         MOV EDI,dword ptr [0x007fb270]
LAB_0049754e:
0049754E  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00497551  40                        INC EAX
00497552  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00497555  3B 45 C0                  CMP EAX,dword ptr [EBP + -0x40]
00497558  0F 8C A5 FE FF FF         JL 0x00497403
LAB_0049755e:
0049755E  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00497561  85 C0                     TEST EAX,EAX
00497563  0F 84 15 01 00 00         JZ 0x0049767e
00497569  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0049756C  E8 53 B8 F6 FF            CALL 0x00402dc4
00497571  8B F0                     MOV ESI,EAX
00497573  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00497576  8B D9                     MOV EBX,ECX
00497578  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0049757B  99                        CDQ
0049757C  F7 F9                     IDIV ECX
0049757E  8B F8                     MOV EDI,EAX
00497580  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00497583  3B C6                     CMP EAX,ESI
00497585  7F 21                     JG 0x004975a8
00497587  2B F0                     SUB ESI,EAX
00497589  85 DB                     TEST EBX,EBX
0049758B  0F 8E 9D 00 00 00         JLE 0x0049762e
00497591  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00497594  83 C0 10                  ADD EAX,0x10
LAB_00497597:
00497597  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0049759D  83 C0 18                  ADD EAX,0x18
004975A0  49                        DEC ECX
004975A1  75 F4                     JNZ 0x00497597
004975A3  E9 86 00 00 00            JMP 0x0049762e
LAB_004975a8:
004975A8  33 C0                     XOR EAX,EAX
004975AA  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
004975AD  85 D2                     TEST EDX,EDX
004975AF  7E 0D                     JLE 0x004975be
004975B1  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
LAB_004975b4:
004975B4  89 01                     MOV dword ptr [ECX],EAX
004975B6  40                        INC EAX
004975B7  83 C1 04                  ADD ECX,0x4
004975BA  3B C2                     CMP EAX,EDX
004975BC  7C F6                     JL 0x004975b4
LAB_004975be:
004975BE  52                        PUSH EDX
004975BF  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
004975C2  51                        PUSH ECX
004975C3  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
004975C6  52                        PUSH EDX
004975C7  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004975CA  E8 98 B5 F6 FF            CALL 0x00402b67
004975CF  85 F6                     TEST ESI,ESI
004975D1  7E 58                     JLE 0x0049762b
LAB_004975d3:
004975D3  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
004975D6  8B C2                     MOV EAX,EDX
004975D8  2B C3                     SUB EAX,EBX
004975DA  3B C2                     CMP EAX,EDX
004975DC  7D 34                     JGE 0x00497612
004975DE  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004975E1  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
004975E4  8D 4C CB 10               LEA ECX,[EBX + ECX*0x8 + 0x10]
004975E8  2B D0                     SUB EDX,EAX
LAB_004975ea:
004975EA  8B 01                     MOV EAX,dword ptr [ECX]
004975EC  3B C7                     CMP EAX,EDI
004975EE  7D 10                     JGE 0x00497600
004975F0  2B F0                     SUB ESI,EAX
004975F2  29 45 C4                  SUB dword ptr [EBP + -0x3c],EAX
004975F5  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
004975FB  FF 4D E4                  DEC dword ptr [EBP + -0x1c]
004975FE  EB 09                     JMP 0x00497609
LAB_00497600:
00497600  2B C7                     SUB EAX,EDI
00497602  89 01                     MOV dword ptr [ECX],EAX
00497604  29 7D C4                  SUB dword ptr [EBP + -0x3c],EDI
00497607  2B F7                     SUB ESI,EDI
LAB_00497609:
00497609  83 C1 18                  ADD ECX,0x18
0049760C  4A                        DEC EDX
0049760D  75 DB                     JNZ 0x004975ea
0049760F  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_00497612:
00497612  85 F6                     TEST ESI,ESI
00497614  7E 0F                     JLE 0x00497625
00497616  85 DB                     TEST EBX,EBX
00497618  7E 0B                     JLE 0x00497625
0049761A  8B C6                     MOV EAX,ESI
0049761C  99                        CDQ
0049761D  F7 FB                     IDIV EBX
0049761F  8B F8                     MOV EDI,EAX
00497621  85 FF                     TEST EDI,EDI
00497623  75 02                     JNZ 0x00497627
LAB_00497625:
00497625  33 F6                     XOR ESI,ESI
LAB_00497627:
00497627  85 F6                     TEST ESI,ESI
00497629  7F A8                     JG 0x004975d3
LAB_0049762b:
0049762B  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
LAB_0049762e:
0049762E  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00497631  8B CF                     MOV ECX,EDI
00497633  E8 8C B7 F6 FF            CALL 0x00402dc4
00497638  2B C6                     SUB EAX,ESI
0049763A  50                        PUSH EAX
0049763B  8B CF                     MOV ECX,EDI
0049763D  E8 7B B4 F6 FF            CALL 0x00402abd
00497642  85 DB                     TEST EBX,EBX
00497644  7E 38                     JLE 0x0049767e
00497646  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00497649  8D 7A 10                  LEA EDI,[EDX + 0x10]
LAB_0049764c:
0049764C  8B 77 04                  MOV ESI,dword ptr [EDI + 0x4]
0049764F  8B CE                     MOV ECX,ESI
00497651  E8 6E B7 F6 FF            CALL 0x00402dc4
00497656  3B 07                     CMP EAX,dword ptr [EDI]
00497658  74 1E                     JZ 0x00497678
0049765A  8B CE                     MOV ECX,ESI
0049765C  E8 63 B7 F6 FF            CALL 0x00402dc4
00497661  2B 07                     SUB EAX,dword ptr [EDI]
00497663  50                        PUSH EAX
00497664  8B CE                     MOV ECX,ESI
00497666  E8 52 B4 F6 FF            CALL 0x00402abd
0049766B  56                        PUSH ESI
0049766C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0049766F  50                        PUSH EAX
00497670  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00497673  E8 6E B8 F6 FF            CALL 0x00402ee6
LAB_00497678:
00497678  83 C7 18                  ADD EDI,0x18
0049767B  4B                        DEC EBX
0049767C  75 CE                     JNZ 0x0049764c
LAB_0049767e:
0049767E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00497681  E8 3E B7 F6 FF            CALL 0x00402dc4
00497686  85 C0                     TEST EAX,EAX
00497688  7E 07                     JLE 0x00497691
0049768A  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
LAB_00497691:
00497691  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00497694  EB 2A                     JMP 0x004976c0
LAB_004976c0:
004976C0  8D 65 94                  LEA ESP,[EBP + -0x6c]
004976C3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004976C6  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
004976CD  5F                        POP EDI
004976CE  5E                        POP ESI
004976CF  5B                        POP EBX
004976D0  8B E5                     MOV ESP,EBP
004976D2  5D                        POP EBP
004976D3  C2 14 00                  RET 0x14
