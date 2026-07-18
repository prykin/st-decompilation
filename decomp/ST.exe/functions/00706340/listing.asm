FUN_00706340:
00706340  55                        PUSH EBP
00706341  8B EC                     MOV EBP,ESP
00706343  83 EC 08                  SUB ESP,0x8
00706346  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00706349  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00706353  48                        DEC EAX
00706354  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
00706357  0F 88 20 05 00 00         JS 0x0070687d
0070635D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00706360  53                        PUSH EBX
00706361  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
00706364  56                        PUSH ESI
00706365  57                        PUSH EDI
00706366  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_00706369:
00706369  F6 C3 01                  TEST BL,0x1
0070636C  75 4E                     JNZ 0x007063bc
LAB_0070636e:
0070636E  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00706371  48                        DEC EAX
00706372  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
00706375  78 42                     JS 0x007063b9
00706377  33 C0                     XOR EAX,EAX
00706379  8A 02                     MOV AL,byte ptr [EDX]
0070637B  42                        INC EDX
0070637C  85 C0                     TEST EAX,EAX
0070637E  74 2C                     JZ 0x007063ac
00706380  8B CF                     MOV ECX,EDI
LAB_00706382:
00706382  A8 80                     TEST AL,0x80
00706384  74 16                     JZ 0x0070639c
00706386  A8 40                     TEST AL,0x40
00706388  74 06                     JZ 0x00706390
0070638A  42                        INC EDX
0070638B  83 E0 3F                  AND EAX,0x3f
0070638E  EB 0F                     JMP 0x0070639f
LAB_00706390:
00706390  8B F0                     MOV ESI,EAX
00706392  83 E6 3F                  AND ESI,0x3f
00706395  03 D6                     ADD EDX,ESI
00706397  83 E0 3F                  AND EAX,0x3f
0070639A  EB 03                     JMP 0x0070639f
LAB_0070639c:
0070639C  83 E0 7F                  AND EAX,0x7f
LAB_0070639f:
0070639F  2B C8                     SUB ECX,EAX
007063A1  85 C9                     TEST ECX,ECX
007063A3  7E 07                     JLE 0x007063ac
007063A5  33 C0                     XOR EAX,EAX
007063A7  8A 02                     MOV AL,byte ptr [EDX]
007063A9  42                        INC EDX
007063AA  EB D6                     JMP 0x00706382
LAB_007063ac:
007063AC  43                        INC EBX
007063AD  83 FB 04                  CMP EBX,0x4
007063B0  7E 02                     JLE 0x007063b4
007063B2  33 DB                     XOR EBX,EBX
LAB_007063b4:
007063B4  F6 C3 01                  TEST BL,0x1
007063B7  74 B5                     JZ 0x0070636e
LAB_007063b9:
007063B9  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
LAB_007063bc:
007063BC  33 C0                     XOR EAX,EAX
007063BE  8A 02                     MOV AL,byte ptr [EDX]
007063C0  42                        INC EDX
007063C1  85 C0                     TEST EAX,EAX
007063C3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007063C6  0F 84 7D 04 00 00         JZ 0x00706849
007063CC  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
007063CF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007063D2  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007063D5  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
007063D8  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
LAB_007063db:
007063DB  A8 80                     TEST AL,0x80
007063DD  74 34                     JZ 0x00706413
007063DF  83 E0 3F                  AND EAX,0x3f
007063E2  3B C3                     CMP EAX,EBX
007063E4  7F 43                     JG 0x00706429
007063E6  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
007063EA  74 13                     JZ 0x007063ff
007063EC  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007063EF  42                        INC EDX
007063F0  2B D8                     SUB EBX,EAX
007063F2  33 C0                     XOR EAX,EAX
007063F4  8A 02                     MOV AL,byte ptr [EDX]
007063F6  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
007063F9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007063FC  42                        INC EDX
007063FD  EB DC                     JMP 0x007063db
LAB_007063ff:
007063FF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00706402  03 D0                     ADD EDX,EAX
00706404  2B D8                     SUB EBX,EAX
00706406  33 C0                     XOR EAX,EAX
00706408  8A 02                     MOV AL,byte ptr [EDX]
0070640A  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
0070640D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00706410  42                        INC EDX
00706411  EB C8                     JMP 0x007063db
LAB_00706413:
00706413  83 E0 7F                  AND EAX,0x7f
00706416  3B C3                     CMP EAX,EBX
00706418  7F 0F                     JG 0x00706429
0070641A  2B D8                     SUB EBX,EAX
0070641C  33 C0                     XOR EAX,EAX
0070641E  8A 02                     MOV AL,byte ptr [EDX]
00706420  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
00706423  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00706426  42                        INC EDX
00706427  EB B2                     JMP 0x007063db
LAB_00706429:
00706429  2B C3                     SUB EAX,EBX
0070642B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070642E  81 E3 C0 00 00 00         AND EBX,0xc0
00706434  80 FB 80                  CMP BL,0x80
00706437  75 03                     JNZ 0x0070643c
00706439  03 55 18                  ADD EDX,dword ptr [EBP + 0x18]
LAB_0070643c:
0070643C  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0070643F  3B C3                     CMP EAX,EBX
00706441  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
00706444  0F 8F 09 02 00 00         JG 0x00706653
0070644A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070644D  81 E3 80 00 00 00         AND EBX,0x80
00706453  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00706456:
00706456  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00706459  2B D8                     SUB EBX,EAX
0070645B  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
0070645E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00706461  85 DB                     TEST EBX,EBX
00706463  0F 84 9C 01 00 00         JZ 0x00706605
00706469  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
0070646D  0F 84 D4 00 00 00         JZ 0x00706547
00706473  42                        INC EDX
00706474  85 C9                     TEST ECX,ECX
00706476  7E 5A                     JLE 0x007064d2
00706478  8D 59 FF                  LEA EBX,[ECX + -0x1]
0070647B  83 FB 03                  CMP EBX,0x3
0070647E  77 52                     JA 0x007064d2
switchD_00706480::switchD:
00706480  FF 24 9D 84 68 70 00      JMP dword ptr [EBX*0x4 + 0x706884]
switchD_00706480::caseD_1:
00706487  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
0070648A  33 C9                     XOR ECX,ECX
0070648C  8A 0F                     MOV CL,byte ptr [EDI]
0070648E  46                        INC ESI
0070648F  47                        INC EDI
00706490  48                        DEC EAX
00706491  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00706494  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
00706497  B9 02 00 00 00            MOV ECX,0x2
0070649C  85 C0                     TEST EAX,EAX
0070649E  0F 8E 7C 01 00 00         JLE 0x00706620
switchD_00706480::caseD_2:
007064A4  48                        DEC EAX
007064A5  B9 03 00 00 00            MOV ECX,0x3
007064AA  85 C0                     TEST EAX,EAX
007064AC  0F 8E 6E 01 00 00         JLE 0x00706620
switchD_00706480::caseD_3:
007064B2  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
007064B5  33 C9                     XOR ECX,ECX
007064B7  8A 0F                     MOV CL,byte ptr [EDI]
007064B9  46                        INC ESI
007064BA  47                        INC EDI
007064BB  48                        DEC EAX
007064BC  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007064BF  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
007064C2  B9 04 00 00 00            MOV ECX,0x4
007064C7  85 C0                     TEST EAX,EAX
007064C9  0F 8E 51 01 00 00         JLE 0x00706620
switchD_00706480::caseD_4:
007064CF  33 C9                     XOR ECX,ECX
007064D1  48                        DEC EAX
switchD_00706480::default:
007064D2  85 C0                     TEST EAX,EAX
007064D4  0F 8E 46 01 00 00         JLE 0x00706620
007064DA  48                        DEC EAX
007064DB  B9 01 00 00 00            MOV ECX,0x1
007064E0  85 C0                     TEST EAX,EAX
007064E2  0F 8E 38 01 00 00         JLE 0x00706620
007064E8  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
LAB_007064eb:
007064EB  33 C9                     XOR ECX,ECX
007064ED  46                        INC ESI
007064EE  8A 0F                     MOV CL,byte ptr [EDI]
007064F0  47                        INC EDI
007064F1  48                        DEC EAX
007064F2  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007064F5  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
007064F8  B9 02 00 00 00            MOV ECX,0x2
007064FD  85 C0                     TEST EAX,EAX
007064FF  0F 8E 1B 01 00 00         JLE 0x00706620
00706505  48                        DEC EAX
00706506  B9 03 00 00 00            MOV ECX,0x3
0070650B  85 C0                     TEST EAX,EAX
0070650D  0F 8E 0D 01 00 00         JLE 0x00706620
00706513  33 C9                     XOR ECX,ECX
00706515  46                        INC ESI
00706516  8A 0F                     MOV CL,byte ptr [EDI]
00706518  47                        INC EDI
00706519  48                        DEC EAX
0070651A  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070651D  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
00706520  B9 04 00 00 00            MOV ECX,0x4
00706525  85 C0                     TEST EAX,EAX
00706527  0F 8E F3 00 00 00         JLE 0x00706620
0070652D  33 C9                     XOR ECX,ECX
0070652F  48                        DEC EAX
00706530  85 C0                     TEST EAX,EAX
00706532  0F 8E E8 00 00 00         JLE 0x00706620
00706538  48                        DEC EAX
00706539  B9 01 00 00 00            MOV ECX,0x1
0070653E  85 C0                     TEST EAX,EAX
00706540  7F A9                     JG 0x007064eb
00706542  E9 D9 00 00 00            JMP 0x00706620
LAB_00706547:
00706547  85 C9                     TEST ECX,ECX
00706549  7E 5A                     JLE 0x007065a5
0070654B  8D 59 FF                  LEA EBX,[ECX + -0x1]
0070654E  83 FB 03                  CMP EBX,0x3
00706551  77 52                     JA 0x007065a5
switchD_00706553::switchD:
00706553  FF 24 9D 94 68 70 00      JMP dword ptr [EBX*0x4 + 0x706894]
switchD_00706553::caseD_1:
0070655A  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
0070655D  33 C9                     XOR ECX,ECX
0070655F  8A 0F                     MOV CL,byte ptr [EDI]
00706561  46                        INC ESI
00706562  47                        INC EDI
00706563  42                        INC EDX
00706564  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00706567  48                        DEC EAX
00706568  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
0070656B  B9 02 00 00 00            MOV ECX,0x2
00706570  85 C0                     TEST EAX,EAX
00706572  0F 8E A8 00 00 00         JLE 0x00706620
switchD_00706553::caseD_2:
00706578  42                        INC EDX
00706579  48                        DEC EAX
0070657A  85 C0                     TEST EAX,EAX
0070657C  B9 03 00 00 00            MOV ECX,0x3
00706581  0F 8E 99 00 00 00         JLE 0x00706620
switchD_00706553::caseD_3:
00706587  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
0070658A  33 C9                     XOR ECX,ECX
0070658C  8A 0F                     MOV CL,byte ptr [EDI]
0070658E  46                        INC ESI
0070658F  47                        INC EDI
00706590  42                        INC EDX
00706591  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00706594  48                        DEC EAX
00706595  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
00706598  B9 04 00 00 00            MOV ECX,0x4
0070659D  85 C0                     TEST EAX,EAX
0070659F  7E 7F                     JLE 0x00706620
switchD_00706553::caseD_4:
007065A1  42                        INC EDX
007065A2  33 C9                     XOR ECX,ECX
007065A4  48                        DEC EAX
switchD_00706553::default:
007065A5  85 C0                     TEST EAX,EAX
007065A7  7E 77                     JLE 0x00706620
007065A9  42                        INC EDX
007065AA  48                        DEC EAX
007065AB  85 C0                     TEST EAX,EAX
007065AD  B9 01 00 00 00            MOV ECX,0x1
007065B2  7E 6C                     JLE 0x00706620
007065B4  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
LAB_007065b7:
007065B7  33 C9                     XOR ECX,ECX
007065B9  46                        INC ESI
007065BA  8A 0F                     MOV CL,byte ptr [EDI]
007065BC  47                        INC EDI
007065BD  42                        INC EDX
007065BE  48                        DEC EAX
007065BF  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007065C2  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
007065C5  B9 02 00 00 00            MOV ECX,0x2
007065CA  85 C0                     TEST EAX,EAX
007065CC  7E 52                     JLE 0x00706620
007065CE  42                        INC EDX
007065CF  48                        DEC EAX
007065D0  85 C0                     TEST EAX,EAX
007065D2  B9 03 00 00 00            MOV ECX,0x3
007065D7  7E 47                     JLE 0x00706620
007065D9  33 C9                     XOR ECX,ECX
007065DB  46                        INC ESI
007065DC  8A 0F                     MOV CL,byte ptr [EDI]
007065DE  47                        INC EDI
007065DF  42                        INC EDX
007065E0  48                        DEC EAX
007065E1  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007065E4  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
007065E7  B9 04 00 00 00            MOV ECX,0x4
007065EC  85 C0                     TEST EAX,EAX
007065EE  7E 30                     JLE 0x00706620
007065F0  42                        INC EDX
007065F1  33 C9                     XOR ECX,ECX
007065F3  48                        DEC EAX
007065F4  85 C0                     TEST EAX,EAX
007065F6  7E 28                     JLE 0x00706620
007065F8  42                        INC EDX
007065F9  48                        DEC EAX
007065FA  85 C0                     TEST EAX,EAX
007065FC  B9 01 00 00 00            MOV ECX,0x1
00706601  7F B4                     JG 0x007065b7
00706603  EB 1B                     JMP 0x00706620
LAB_00706605:
00706605  48                        DEC EAX
00706606  78 18                     JS 0x00706620
00706608  40                        INC EAX
LAB_00706609:
00706609  8B D9                     MOV EBX,ECX
0070660B  83 E3 01                  AND EBX,0x1
0070660E  80 FB 01                  CMP BL,0x1
00706611  75 02                     JNZ 0x00706615
00706613  46                        INC ESI
00706614  47                        INC EDI
LAB_00706615:
00706615  41                        INC ECX
00706616  83 F9 04                  CMP ECX,0x4
00706619  7E 02                     JLE 0x0070661d
0070661B  33 C9                     XOR ECX,ECX
LAB_0070661d:
0070661D  48                        DEC EAX
0070661E  75 E9                     JNZ 0x00706609
LAB_00706620:
00706620  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00706623  85 C0                     TEST EAX,EAX
00706625  7E 2A                     JLE 0x00706651
00706627  33 C0                     XOR EAX,EAX
00706629  8A 02                     MOV AL,byte ptr [EDX]
0070662B  8B D8                     MOV EBX,EAX
0070662D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00706630  81 E3 80 00 00 00         AND EBX,0x80
00706636  42                        INC EDX
00706637  85 DB                     TEST EBX,EBX
00706639  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0070663C  74 05                     JZ 0x00706643
0070663E  83 E0 3F                  AND EAX,0x3f
00706641  EB 03                     JMP 0x00706646
LAB_00706643:
00706643  83 E0 7F                  AND EAX,0x7f
LAB_00706646:
00706646  3B 45 18                  CMP EAX,dword ptr [EBP + 0x18]
00706649  0F 8E 07 FE FF FF         JLE 0x00706456
0070664F  EB 02                     JMP 0x00706653
LAB_00706651:
00706651  33 C0                     XOR EAX,EAX
LAB_00706653:
00706653  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00706656  2B C3                     SUB EAX,EBX
00706658  85 DB                     TEST EBX,EBX
0070665A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070665D  0F 8E 98 01 00 00         JLE 0x007067fb
00706663  F6 C3 80                  TEST BL,0x80
00706666  0F 84 8F 01 00 00         JZ 0x007067fb
0070666C  F6 C3 40                  TEST BL,0x40
0070666F  0F 84 C6 00 00 00         JZ 0x0070673b
00706675  42                        INC EDX
00706676  85 C9                     TEST ECX,ECX
00706678  7E 63                     JLE 0x007066dd
0070667A  49                        DEC ECX
0070667B  83 F9 03                  CMP ECX,0x3
0070667E  77 5D                     JA 0x007066dd
switchD_00706680::switchD:
00706680  FF 24 8D A4 68 70 00      JMP dword ptr [ECX*0x4 + 0x7068a4]
switchD_00706680::caseD_1:
00706687  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
0070668A  33 C9                     XOR ECX,ECX
0070668C  8A 0F                     MOV CL,byte ptr [EDI]
0070668E  46                        INC ESI
0070668F  47                        INC EDI
00706690  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00706693  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
00706696  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00706699  49                        DEC ECX
0070669A  85 C9                     TEST ECX,ECX
0070669C  0F 8E 56 01 00 00         JLE 0x007067f8
007066A2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_007066a5:
007066A5  49                        DEC ECX
007066A6  85 C9                     TEST ECX,ECX
007066A8  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
007066AB  0F 8E 4A 01 00 00         JLE 0x007067fb
switchD_00706680::caseD_3:
007066B1  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
007066B4  33 C9                     XOR ECX,ECX
007066B6  8A 0F                     MOV CL,byte ptr [EDI]
007066B8  46                        INC ESI
007066B9  47                        INC EDI
007066BA  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007066BD  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
007066C0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007066C3  49                        DEC ECX
007066C4  85 C9                     TEST ECX,ECX
007066C6  0F 8E 2C 01 00 00         JLE 0x007067f8
007066CC  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007066CF  49                        DEC ECX
007066D0  EB 0E                     JMP 0x007066e0
switchD_00706680::caseD_2:
007066D2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007066D5  EB CE                     JMP 0x007066a5
switchD_00706680::caseD_4:
007066D7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007066DA  49                        DEC ECX
007066DB  EB 03                     JMP 0x007066e0
LAB_007066dd:
007066DD  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
switchD_00706680::default:
007066E0  85 C9                     TEST ECX,ECX
007066E2  0F 8E 13 01 00 00         JLE 0x007067fb
007066E8  49                        DEC ECX
007066E9  85 C9                     TEST ECX,ECX
007066EB  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
007066EE  0F 8E 07 01 00 00         JLE 0x007067fb
007066F4  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
LAB_007066f7:
007066F7  33 C9                     XOR ECX,ECX
007066F9  46                        INC ESI
007066FA  8A 0F                     MOV CL,byte ptr [EDI]
007066FC  47                        INC EDI
007066FD  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00706700  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
00706703  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00706706  83 E9 02                  SUB ECX,0x2
00706709  85 C9                     TEST ECX,ECX
0070670B  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
0070670E  0F 8E E4 00 00 00         JLE 0x007067f8
00706714  33 C9                     XOR ECX,ECX
00706716  46                        INC ESI
00706717  8A 0F                     MOV CL,byte ptr [EDI]
00706719  47                        INC EDI
0070671A  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0070671D  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
00706720  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00706723  83 E9 02                  SUB ECX,0x2
00706726  85 C9                     TEST ECX,ECX
00706728  0F 8E CA 00 00 00         JLE 0x007067f8
0070672E  49                        DEC ECX
0070672F  85 C9                     TEST ECX,ECX
00706731  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
00706734  7F C1                     JG 0x007066f7
00706736  E9 BD 00 00 00            JMP 0x007067f8
LAB_0070673b:
0070673B  85 C9                     TEST ECX,ECX
0070673D  7E 64                     JLE 0x007067a3
0070673F  49                        DEC ECX
00706740  83 F9 03                  CMP ECX,0x3
00706743  77 5E                     JA 0x007067a3
switchD_00706745::switchD:
00706745  FF 24 8D B4 68 70 00      JMP dword ptr [ECX*0x4 + 0x7068b4]
switchD_00706745::caseD_1:
0070674C  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
0070674F  33 C9                     XOR ECX,ECX
00706751  8A 0F                     MOV CL,byte ptr [EDI]
00706753  46                        INC ESI
00706754  47                        INC EDI
00706755  42                        INC EDX
00706756  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00706759  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
0070675C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070675F  49                        DEC ECX
00706760  85 C9                     TEST ECX,ECX
00706762  0F 8E 90 00 00 00         JLE 0x007067f8
00706768  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0070676b:
0070676B  42                        INC EDX
0070676C  49                        DEC ECX
0070676D  85 C9                     TEST ECX,ECX
0070676F  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
00706772  0F 8E 83 00 00 00         JLE 0x007067fb
switchD_00706745::caseD_3:
00706778  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
0070677B  33 C9                     XOR ECX,ECX
0070677D  8A 0F                     MOV CL,byte ptr [EDI]
0070677F  46                        INC ESI
00706780  47                        INC EDI
00706781  42                        INC EDX
00706782  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00706785  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
00706788  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070678B  49                        DEC ECX
0070678C  85 C9                     TEST ECX,ECX
0070678E  7E 68                     JLE 0x007067f8
00706790  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00706793  42                        INC EDX
00706794  49                        DEC ECX
00706795  EB 0F                     JMP 0x007067a6
switchD_00706745::caseD_2:
00706797  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070679A  EB CF                     JMP 0x0070676b
switchD_00706745::caseD_4:
0070679C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070679F  42                        INC EDX
007067A0  49                        DEC ECX
007067A1  EB 03                     JMP 0x007067a6
LAB_007067a3:
007067A3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
switchD_00706745::default:
007067A6  85 C9                     TEST ECX,ECX
007067A8  7E 51                     JLE 0x007067fb
007067AA  42                        INC EDX
007067AB  49                        DEC ECX
007067AC  85 C9                     TEST ECX,ECX
007067AE  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
007067B1  7E 48                     JLE 0x007067fb
007067B3  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
LAB_007067b6:
007067B6  33 C9                     XOR ECX,ECX
007067B8  46                        INC ESI
007067B9  8A 0F                     MOV CL,byte ptr [EDI]
007067BB  47                        INC EDI
007067BC  42                        INC EDX
007067BD  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007067C0  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
007067C3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007067C6  49                        DEC ECX
007067C7  85 C9                     TEST ECX,ECX
007067C9  7E 2D                     JLE 0x007067f8
007067CB  42                        INC EDX
007067CC  49                        DEC ECX
007067CD  85 C9                     TEST ECX,ECX
007067CF  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
007067D2  7E 24                     JLE 0x007067f8
007067D4  33 C9                     XOR ECX,ECX
007067D6  46                        INC ESI
007067D7  8A 0F                     MOV CL,byte ptr [EDI]
007067D9  47                        INC EDI
007067DA  42                        INC EDX
007067DB  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007067DE  88 4E FF                  MOV byte ptr [ESI + -0x1],CL
007067E1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007067E4  49                        DEC ECX
007067E5  85 C9                     TEST ECX,ECX
007067E7  7E 0F                     JLE 0x007067f8
007067E9  42                        INC EDX
007067EA  49                        DEC ECX
007067EB  85 C9                     TEST ECX,ECX
007067ED  7E 09                     JLE 0x007067f8
007067EF  42                        INC EDX
007067F0  49                        DEC ECX
007067F1  85 C9                     TEST ECX,ECX
007067F3  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
007067F6  7F BE                     JG 0x007067b6
LAB_007067f8:
007067F8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_007067fb:
007067FB  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
007067FE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00706801  8B F7                     MOV ESI,EDI
00706803  2B F1                     SUB ESI,ECX
00706805  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00706808  2B F1                     SUB ESI,ECX
0070680A  3B C6                     CMP EAX,ESI
0070680C  7D 2B                     JGE 0x00706839
LAB_0070680e:
0070680E  81 E3 C0 00 00 00         AND EBX,0xc0
00706814  2B F0                     SUB ESI,EAX
00706816  80 FB 80                  CMP BL,0x80
00706819  75 02                     JNZ 0x0070681d
0070681B  03 D0                     ADD EDX,EAX
LAB_0070681d:
0070681D  33 DB                     XOR EBX,EBX
0070681F  8A 1A                     MOV BL,byte ptr [EDX]
00706821  8B C3                     MOV EAX,EBX
00706823  24 80                     AND AL,0x80
00706825  42                        INC EDX
00706826  84 C0                     TEST AL,AL
00706828  8B C3                     MOV EAX,EBX
0070682A  74 09                     JZ 0x00706835
0070682C  83 E0 3F                  AND EAX,0x3f
0070682F  F6 C3 40                  TEST BL,0x40
00706832  74 01                     JZ 0x00706835
00706834  42                        INC EDX
LAB_00706835:
00706835  3B C6                     CMP EAX,ESI
00706837  7C D5                     JL 0x0070680e
LAB_00706839:
00706839  81 E3 C0 00 00 00         AND EBX,0xc0
0070683F  80 FB 80                  CMP BL,0x80
00706842  75 02                     JNZ 0x00706846
00706844  03 D6                     ADD EDX,ESI
LAB_00706846:
00706846  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
LAB_00706849:
00706849  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070684C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070684F  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00706852  03 C1                     ADD EAX,ECX
00706854  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00706857  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070685A  03 F0                     ADD ESI,EAX
0070685C  43                        INC EBX
0070685D  83 FB 04                  CMP EBX,0x4
00706860  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
00706863  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
00706866  7E 05                     JLE 0x0070686d
00706868  33 DB                     XOR EBX,EBX
0070686A  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
LAB_0070686d:
0070686D  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00706870  48                        DEC EAX
00706871  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
00706874  0F 89 EF FA FF FF         JNS 0x00706369
0070687A  5F                        POP EDI
0070687B  5E                        POP ESI
0070687C  5B                        POP EBX
LAB_0070687d:
0070687D  8B E5                     MOV ESP,EBP
0070687F  5D                        POP EBP
LAB_00706880:
00706880  C2 30 00                  RET 0x30
