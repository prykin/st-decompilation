FUN_00442300:
00442300  55                        PUSH EBP
00442301  8B EC                     MOV EBP,ESP
00442303  81 EC D0 00 00 00         SUB ESP,0xd0
00442309  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044230C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044230F  53                        PUSH EBX
00442310  56                        PUSH ESI
00442311  57                        PUSH EDI
00442312  6A 01                     PUSH 0x1
00442314  50                        PUSH EAX
00442315  52                        PUSH EDX
00442316  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00442319  C7 45 B8 04 00 00 00      MOV dword ptr [EBP + -0x48],0x4
00442320  C7 45 98 38 00 00 00      MOV dword ptr [EBP + -0x68],0x38
00442327  C7 45 9C 39 00 00 00      MOV dword ptr [EBP + -0x64],0x39
0044232E  C7 45 A0 4F 00 00 00      MOV dword ptr [EBP + -0x60],0x4f
00442335  C7 45 A4 5E 00 00 00      MOV dword ptr [EBP + -0x5c],0x5e
0044233C  E8 79 05 FC FF            CALL 0x004028ba
00442341  8B 10                     MOV EDX,dword ptr [EAX]
00442343  8B C8                     MOV ECX,EAX
00442345  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00442348  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044234B  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0044234E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00442353  8D 95 34 FF FF FF         LEA EDX,[EBP + 0xffffff34]
00442359  8D 8D 30 FF FF FF         LEA ECX,[EBP + 0xffffff30]
0044235F  6A 00                     PUSH 0x0
00442361  52                        PUSH EDX
00442362  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00442369  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
0044236F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00442375  E8 76 B4 2E 00            CALL 0x0072d7f0
0044237A  8B F0                     MOV ESI,EAX
0044237C  83 C4 08                  ADD ESP,0x8
0044237F  85 F6                     TEST ESI,ESI
00442381  0F 85 A7 05 00 00         JNZ 0x0044292e
00442387  8B 5D B8                  MOV EBX,dword ptr [EBP + -0x48]
0044238A  85 DB                     TEST EBX,EBX
0044238C  7E 41                     JLE 0x004423cf
0044238E  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
00442392  8B FB                     MOV EDI,EBX
00442394  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00442397  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044239A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044239D  C1 E1 04                  SHL ECX,0x4
004423A0  03 C8                     ADD ECX,EAX
004423A2  8D 34 4D 2F 4E 7F 00      LEA ESI,[ECX*0x2 + 0x7f4e2f]
LAB_004423a9:
004423A9  83 3E 00                  CMP dword ptr [ESI],0x0
004423AC  75 1B                     JNZ 0x004423c9
004423AE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004423B4  68 DD 23 00 00            PUSH 0x23dd
004423B9  68 04 60 7A 00            PUSH 0x7a6004
004423BE  52                        PUSH EDX
004423BF  68 09 00 FE AF            PUSH 0xaffe0009
004423C4  E8 77 3A 26 00            CALL 0x006a5e40
LAB_004423c9:
004423C9  83 C6 04                  ADD ESI,0x4
004423CC  4F                        DEC EDI
004423CD  75 DA                     JNZ 0x004423a9
LAB_004423cf:
004423CF  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
004423D2  83 FF 3B                  CMP EDI,0x3b
004423D5  0F 84 B8 02 00 00         JZ 0x00442693
004423DB  83 FF 60                  CMP EDI,0x60
004423DE  0F 84 AF 02 00 00         JZ 0x00442693
004423E4  33 F6                     XOR ESI,ESI
004423E6  85 DB                     TEST EBX,EBX
004423E8  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
004423EB  0F 8E 25 05 00 00         JLE 0x00442916
004423F1  8B 5D A8                  MOV EBX,dword ptr [EBP + -0x58]
LAB_004423f4:
004423F4  3B 7C B5 98               CMP EDI,dword ptr [EBP + ESI*0x4 + -0x68]
004423F8  0F 85 6E 02 00 00         JNZ 0x0044266c
004423FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00442401  8B CB                     MOV ECX,EBX
00442403  50                        PUSH EAX
00442404  E8 AE 25 FC FF            CALL 0x004049b7
00442409  3C 03                     CMP AL,0x3
0044240B  6A FF                     PUSH -0x1
0044240D  6A 00                     PUSH 0x0
0044240F  74 08                     JZ 0x00442419
00442411  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00442414  6A 3B                     PUSH 0x3b
00442416  51                        PUSH ECX
00442417  EB 06                     JMP 0x0044241f
LAB_00442419:
00442419  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044241C  6A 60                     PUSH 0x60
0044241E  52                        PUSH EDX
LAB_0044241f:
0044241F  8B CB                     MOV ECX,EBX
00442421  E8 EF EF FB FF            CALL 0x00401415
00442426  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00442429  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044242C  85 C0                     TEST EAX,EAX
0044242E  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00442431  0F 86 2C 02 00 00         JBE 0x00442663
00442437  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
0044243A  8D 4D C8                  LEA ECX,[EBP + -0x38]
0044243D  8D 55 C6                  LEA EDX,[EBP + -0x3a]
00442440  51                        PUSH ECX
00442441  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00442444  52                        PUSH EDX
00442445  50                        PUSH EAX
00442446  8B CE                     MOV ECX,ESI
00442448  E8 78 F4 FB FF            CALL 0x004018c5
0044244D  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00442451  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
00442457  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0044245E  66 89 4D CA               MOV word ptr [EBP + -0x36],CX
00442462  8B 3D 38 B2 7F 00         MOV EDI,dword ptr [0x007fb238]
00442468  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0044246F  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00442476  0F AF CA                  IMUL ECX,EDX
00442479  0F AF C8                  IMUL ECX,EAX
0044247C  D1 E1                     SHL ECX,0x1
0044247E  8B D1                     MOV EDX,ECX
00442480  6A FF                     PUSH -0x1
00442482  C1 E9 02                  SHR ECX,0x2
00442485  F3 A5                     MOVSD.REP ES:EDI,ESI
00442487  8B CA                     MOV ECX,EDX
00442489  6A FF                     PUSH -0x1
0044248B  83 E1 03                  AND ECX,0x3
0044248E  6A FF                     PUSH -0x1
00442490  F3 A4                     MOVSB.REP ES:EDI,ESI
00442492  0F BF 45 C8               MOVSX EAX,word ptr [EBP + -0x38]
00442496  0F BF 4D C6               MOVSX ECX,word ptr [EBP + -0x3a]
0044249A  0F BF 55 C4               MOVSX EDX,word ptr [EBP + -0x3c]
0044249E  50                        PUSH EAX
0044249F  51                        PUSH ECX
004424A0  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
004424A7  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
004424AE  52                        PUSH EDX
004424AF  50                        PUSH EAX
004424B0  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
004424B7  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
004424BC  51                        PUSH ECX
004424BD  52                        PUSH EDX
004424BE  50                        PUSH EAX
004424BF  E8 CC 8B 26 00            CALL 0x006ab090
004424C4  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004424C8  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
004424CF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004424D2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004424D5  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004424D8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004424DB  C1 E1 04                  SHL ECX,0x4
004424DE  03 C8                     ADD ECX,EAX
004424E0  8D 04 95 00 00 00 00      LEA EAX,[EDX*0x4 + 0x0]
004424E7  8B 84 48 2F 4E 7F 00      MOV EAX,dword ptr [EAX + ECX*0x2 + 0x7f4e2f]
004424EE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004424F1  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004424F4  85 C0                     TEST EAX,EAX
004424F6  0F 8E 61 01 00 00         JLE 0x0044265d
LAB_004424fc:
004424FC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004424FF  8D 4D E8                  LEA ECX,[EBP + -0x18]
00442502  51                        PUSH ECX
00442503  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00442506  E8 65 A7 26 00            CALL 0x006acc70
0044250B  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0044250E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00442511  6A 01                     PUSH 0x1
00442513  52                        PUSH EDX
00442514  50                        PUSH EAX
00442515  8B CB                     MOV ECX,EBX
00442517  E8 9E 03 FC FF            CALL 0x004028ba
0044251C  8D 4D D0                  LEA ECX,[EBP + -0x30]
0044251F  8B F0                     MOV ESI,EAX
00442521  8D 55 CE                  LEA EDX,[EBP + -0x32]
00442524  51                        PUSH ECX
00442525  8D 45 CC                  LEA EAX,[EBP + -0x34]
00442528  52                        PUSH EDX
00442529  50                        PUSH EAX
0044252A  8B CE                     MOV ECX,ESI
0044252C  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
0044252F  E8 91 F3 FB FF            CALL 0x004018c5
00442534  0F BF 55 D0               MOVSX EDX,word ptr [EBP + -0x30]
00442538  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
0044253F  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00442543  42                        INC EDX
00442544  66 89 4D D2               MOV word ptr [EBP + -0x2e],CX
00442548  0F AF D0                  IMUL EDX,EAX
0044254B  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
00442552  0F BF 45 CE               MOVSX EAX,word ptr [EBP + -0x32]
00442556  0F AF C8                  IMUL ECX,EAX
00442559  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
0044255E  03 D1                     ADD EDX,ECX
00442560  0F BF 4D CC               MOVSX ECX,word ptr [EBP + -0x34]
00442564  03 D1                     ADD EDX,ECX
00442566  0F BF 04 50               MOVSX EAX,word ptr [EAX + EDX*0x2]
0044256A  85 C0                     TEST EAX,EAX
0044256C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0044256F  74 63                     JZ 0x004425d4
00442571  6A 08                     PUSH 0x8
00442573  8B CB                     MOV ECX,EBX
00442575  E8 34 00 FC FF            CALL 0x004025ae
0044257A  8A D0                     MOV DL,AL
0044257C  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0044257F  81 E2 FF 00 00 00         AND EDX,0xff
00442585  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00442588  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
0044258B  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0044258E  8D 34 C8                  LEA ESI,[EAX + ECX*0x8]
00442591  B8 56 55 55 55            MOV EAX,0x55555556
00442596  F7 EE                     IMUL ESI
00442598  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0044259B  8B C2                     MOV EAX,EDX
0044259D  C1 EA 1F                  SHR EDX,0x1f
004425A0  03 C2                     ADD EAX,EDX
004425A2  99                        CDQ
004425A3  F7 F9                     IDIV ECX
004425A5  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004425A8  B8 67 66 66 66            MOV EAX,0x66666667
004425AD  C1 E1 02                  SHL ECX,0x2
004425B0  F7 E9                     IMUL ECX
004425B2  C1 FA 02                  SAR EDX,0x2
004425B5  8B C2                     MOV EAX,EDX
004425B7  C1 E8 1F                  SHR EAX,0x1f
004425BA  8D 8C 02 20 03 00 00      LEA ECX,[EDX + EAX*0x1 + 0x320]
004425C1  B8 40 9C 00 00            MOV EAX,0x9c40
004425C6  99                        CDQ
004425C7  F7 F9                     IDIV ECX
004425C9  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
004425CC  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004425CF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004425D2  EB 12                     JMP 0x004425e6
LAB_004425d4:
004425D4  B8 64 00 00 00            MOV EAX,0x64
004425D9  C7 45 D4 40 42 0F 00      MOV dword ptr [EBP + -0x2c],0xf4240
004425E0  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004425E3  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_004425e6:
004425E6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004425E9  33 F6                     XOR ESI,ESI
004425EB  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
004425EE  85 FF                     TEST EDI,EDI
004425F0  7E 41                     JLE 0x00442633
LAB_004425f2:
004425F2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004425F5  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
004425FB  52                        PUSH EDX
004425FC  8B D6                     MOV EDX,ESI
004425FE  E8 6D A6 26 00            CALL 0x006acc70
00442603  B8 FF FF 00 00            MOV EAX,0xffff
00442608  66 39 85 7A FF FF FF      CMP word ptr [EBP + 0xffffff7a],AX
0044260F  75 06                     JNZ 0x00442617
00442611  66 39 45 82               CMP word ptr [EBP + -0x7e],AX
00442615  74 07                     JZ 0x0044261e
LAB_00442617:
00442617  46                        INC ESI
00442618  3B F7                     CMP ESI,EDI
0044261A  7C D6                     JL 0x004425f2
0044261C  EB 15                     JMP 0x00442633
LAB_0044261e:
0044261E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00442621  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00442624  50                        PUSH EAX
00442625  56                        PUSH ESI
00442626  51                        PUSH ECX
00442627  E8 14 BB 26 00            CALL 0x006ae140
0044262C  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_00442633:
00442633  3B F7                     CMP ESI,EDI
00442635  75 14                     JNZ 0x0044264b
00442637  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044263A  8D 55 C4                  LEA EDX,[EBP + -0x3c]
0044263D  52                        PUSH EDX
0044263E  50                        PUSH EAX
0044263F  E8 7C BB 26 00            CALL 0x006ae1c0
00442644  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_0044264b:
0044264B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0044264E  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00442651  40                        INC EAX
00442652  3B C1                     CMP EAX,ECX
00442654  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00442657  0F 8C 9F FE FF FF         JL 0x004424fc
LAB_0044265d:
0044265D  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
00442660  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_00442663:
00442663  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00442666  51                        PUSH ECX
00442667  E8 A4 BA 26 00            CALL 0x006ae110
LAB_0044266c:
0044266C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0044266F  46                        INC ESI
00442670  3B F0                     CMP ESI,EAX
00442672  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00442675  0F 8C 79 FD FF FF         JL 0x004423f4
0044267B  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
00442681  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00442684  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044268A  5F                        POP EDI
0044268B  5E                        POP ESI
0044268C  5B                        POP EBX
0044268D  8B E5                     MOV ESP,EBP
0044268F  5D                        POP EBP
00442690  C2 08 00                  RET 0x8
LAB_00442693:
00442693  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
00442696  8D 55 D0                  LEA EDX,[EBP + -0x30]
00442699  8D 45 CE                  LEA EAX,[EBP + -0x32]
0044269C  52                        PUSH EDX
0044269D  8D 4D CC                  LEA ECX,[EBP + -0x34]
004426A0  50                        PUSH EAX
004426A1  51                        PUSH ECX
004426A2  8B CE                     MOV ECX,ESI
004426A4  E8 1C F2 FB FF            CALL 0x004018c5
004426A9  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
004426B0  0F BF 05 7A B2 7F 00      MOVSX EAX,word ptr [0x007fb27a]
004426B7  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004426BB  0F AF C8                  IMUL ECX,EAX
004426BE  66 89 55 D2               MOV word ptr [EBP + -0x2e],DX
004426C2  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
004426C8  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
004426CF  0F AF CA                  IMUL ECX,EDX
004426D2  8B 3D 38 B2 7F 00         MOV EDI,dword ptr [0x007fb238]
004426D8  6A FF                     PUSH -0x1
004426DA  D1 E1                     SHL ECX,0x1
004426DC  8B C1                     MOV EAX,ECX
004426DE  6A FF                     PUSH -0x1
004426E0  C1 E9 02                  SHR ECX,0x2
004426E3  F3 A5                     MOVSD.REP ES:EDI,ESI
004426E5  8B C8                     MOV ECX,EAX
004426E7  6A FF                     PUSH -0x1
004426E9  83 E1 03                  AND ECX,0x3
004426EC  F3 A4                     MOVSB.REP ES:EDI,ESI
004426EE  0F BF 4D D0               MOVSX ECX,word ptr [EBP + -0x30]
004426F2  0F BF 55 CE               MOVSX EDX,word ptr [EBP + -0x32]
004426F6  0F BF 45 CC               MOVSX EAX,word ptr [EBP + -0x34]
004426FA  51                        PUSH ECX
004426FB  52                        PUSH EDX
004426FC  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
00442703  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0044270A  50                        PUSH EAX
0044270B  51                        PUSH ECX
0044270C  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00442713  8B 0D 38 B2 7F 00         MOV ECX,dword ptr [0x007fb238]
00442719  52                        PUSH EDX
0044271A  50                        PUSH EAX
0044271B  51                        PUSH ECX
0044271C  E8 6F 89 26 00            CALL 0x006ab090
00442721  33 C0                     XOR EAX,EAX
00442723  85 DB                     TEST EBX,EBX
00442725  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00442728  0F 8E E8 01 00 00         JLE 0x00442916
0044272E  8B 5D A8                  MOV EBX,dword ptr [EBP + -0x58]
LAB_00442731:
00442731  8D 34 85 00 00 00 00      LEA ESI,[EAX*0x4 + 0x0]
00442738  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044273B  6A FF                     PUSH -0x1
0044273D  6A 00                     PUSH 0x0
0044273F  8B 54 35 98               MOV EDX,dword ptr [EBP + ESI*0x1 + -0x68]
00442743  8B CB                     MOV ECX,EBX
00442745  52                        PUSH EDX
00442746  50                        PUSH EAX
00442747  E8 C9 EC FB FF            CALL 0x00401415
0044274C  8B C8                     MOV ECX,EAX
0044274E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00442751  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00442754  85 D2                     TEST EDX,EDX
00442756  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00442759  0F 86 9F 01 00 00         JBE 0x004428fe
0044275F  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
00442763  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
00442766  8D 3C F8                  LEA EDI,[EAX + EDI*0x8]
00442769  8D 3C 78                  LEA EDI,[EAX + EDI*0x2]
0044276C  C1 E7 04                  SHL EDI,0x4
0044276F  03 F8                     ADD EDI,EAX
00442771  8B 84 7E 2F 4E 7F 00      MOV EAX,dword ptr [ESI + EDI*0x2 + 0x7f4e2f]
00442778  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0044277B  33 C0                     XOR EAX,EAX
0044277D  85 D2                     TEST EDX,EDX
0044277F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00442782  0F 8E 76 01 00 00         JLE 0x004428fe
LAB_00442788:
00442788  8D 55 E8                  LEA EDX,[EBP + -0x18]
0044278B  52                        PUSH EDX
0044278C  8B D0                     MOV EDX,EAX
0044278E  E8 DD A4 26 00            CALL 0x006acc70
00442793  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00442796  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00442799  6A 01                     PUSH 0x1
0044279B  50                        PUSH EAX
0044279C  51                        PUSH ECX
0044279D  8B CB                     MOV ECX,EBX
0044279F  E8 16 01 FC FF            CALL 0x004028ba
004427A4  8B F0                     MOV ESI,EAX
004427A6  8D 45 B0                  LEA EAX,[EBP + -0x50]
004427A9  50                        PUSH EAX
004427AA  8B CE                     MOV ECX,ESI
004427AC  8B 16                     MOV EDX,dword ptr [ESI]
004427AE  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
004427B1  FF 92 88 00 00 00         CALL dword ptr [EDX + 0x88]
004427B7  85 C0                     TEST EAX,EAX
004427B9  0F 8E 2A 01 00 00         JLE 0x004428e9
004427BF  8D 4D C8                  LEA ECX,[EBP + -0x38]
004427C2  8D 55 C6                  LEA EDX,[EBP + -0x3a]
004427C5  51                        PUSH ECX
004427C6  8D 45 C4                  LEA EAX,[EBP + -0x3c]
004427C9  52                        PUSH EDX
004427CA  50                        PUSH EAX
004427CB  8B CE                     MOV ECX,ESI
004427CD  E8 F3 F0 FB FF            CALL 0x004018c5
004427D2  0F BF 55 C8               MOVSX EDX,word ptr [EBP + -0x38]
004427D6  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
004427DD  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004427E1  42                        INC EDX
004427E2  66 89 4D CA               MOV word ptr [EBP + -0x36],CX
004427E6  0F AF D0                  IMUL EDX,EAX
004427E9  0F BF 4D C6               MOVSX ECX,word ptr [EBP + -0x3a]
004427ED  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
004427F4  0F AF C8                  IMUL ECX,EAX
004427F7  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
004427FC  03 D1                     ADD EDX,ECX
004427FE  0F BF 4D C4               MOVSX ECX,word ptr [EBP + -0x3c]
00442802  03 D1                     ADD EDX,ECX
00442804  0F BF 04 50               MOVSX EAX,word ptr [EAX + EDX*0x2]
00442808  85 C0                     TEST EAX,EAX
0044280A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0044280D  74 63                     JZ 0x00442872
0044280F  6A 08                     PUSH 0x8
00442811  8B CB                     MOV ECX,EBX
00442813  E8 96 FD FB FF            CALL 0x004025ae
00442818  8A D0                     MOV DL,AL
0044281A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0044281D  81 E2 FF 00 00 00         AND EDX,0xff
00442823  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00442826  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00442829  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0044282C  8D 34 C8                  LEA ESI,[EAX + ECX*0x8]
0044282F  B8 56 55 55 55            MOV EAX,0x55555556
00442834  F7 EE                     IMUL ESI
00442836  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00442839  8B C2                     MOV EAX,EDX
0044283B  C1 EA 1F                  SHR EDX,0x1f
0044283E  03 C2                     ADD EAX,EDX
00442840  99                        CDQ
00442841  F7 F9                     IDIV ECX
00442843  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00442846  B8 67 66 66 66            MOV EAX,0x66666667
0044284B  C1 E1 02                  SHL ECX,0x2
0044284E  F7 E9                     IMUL ECX
00442850  C1 FA 02                  SAR EDX,0x2
00442853  8B C2                     MOV EAX,EDX
00442855  C1 E8 1F                  SHR EAX,0x1f
00442858  8D 8C 02 20 03 00 00      LEA ECX,[EDX + EAX*0x1 + 0x320]
0044285F  B8 40 9C 00 00            MOV EAX,0x9c40
00442864  99                        CDQ
00442865  F7 F9                     IDIV ECX
00442867  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0044286A  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0044286D  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00442870  EB 12                     JMP 0x00442884
LAB_00442872:
00442872  B8 64 00 00 00            MOV EAX,0x64
00442877  C7 45 D4 40 42 0F 00      MOV dword ptr [EBP + -0x2c],0xf4240
0044287E  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00442881  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_00442884:
00442884  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00442887  33 F6                     XOR ESI,ESI
00442889  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
0044288C  85 FF                     TEST EDI,EDI
0044288E  7E 41                     JLE 0x004428d1
LAB_00442890:
00442890  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00442893  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
00442899  52                        PUSH EDX
0044289A  8B D6                     MOV EDX,ESI
0044289C  E8 CF A3 26 00            CALL 0x006acc70
004428A1  B8 FF FF 00 00            MOV EAX,0xffff
004428A6  66 39 85 7A FF FF FF      CMP word ptr [EBP + 0xffffff7a],AX
004428AD  75 06                     JNZ 0x004428b5
004428AF  66 39 45 82               CMP word ptr [EBP + -0x7e],AX
004428B3  74 07                     JZ 0x004428bc
LAB_004428b5:
004428B5  46                        INC ESI
004428B6  3B F7                     CMP ESI,EDI
004428B8  7C D6                     JL 0x00442890
004428BA  EB 15                     JMP 0x004428d1
LAB_004428bc:
004428BC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004428BF  8D 45 C4                  LEA EAX,[EBP + -0x3c]
004428C2  50                        PUSH EAX
004428C3  56                        PUSH ESI
004428C4  51                        PUSH ECX
004428C5  E8 76 B8 26 00            CALL 0x006ae140
004428CA  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_004428d1:
004428D1  3B F7                     CMP ESI,EDI
004428D3  75 14                     JNZ 0x004428e9
004428D5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004428D8  8D 55 C4                  LEA EDX,[EBP + -0x3c]
004428DB  52                        PUSH EDX
004428DC  50                        PUSH EAX
004428DD  E8 DE B8 26 00            CALL 0x006ae1c0
004428E2  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_004428e9:
004428E9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004428EC  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004428EF  40                        INC EAX
004428F0  3B C1                     CMP EAX,ECX
004428F2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004428F5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004428F8  0F 8C 8A FE FF FF         JL 0x00442788
LAB_004428fe:
004428FE  51                        PUSH ECX
004428FF  E8 0C B8 26 00            CALL 0x006ae110
00442904  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00442907  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0044290A  40                        INC EAX
0044290B  3B C1                     CMP EAX,ECX
0044290D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00442910  0F 8C 1B FE FF FF         JL 0x00442731
LAB_00442916:
00442916  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
0044291C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044291F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00442925  5F                        POP EDI
00442926  5E                        POP ESI
00442927  5B                        POP EBX
00442928  8B E5                     MOV ESP,EBP
0044292A  5D                        POP EBP
0044292B  C2 08 00                  RET 0x8
LAB_0044292e:
0044292E  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
00442934  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0044293A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00442940  74 36                     JZ 0x00442978
00442942  68 BC 80 7A 00            PUSH 0x7a80bc
00442947  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044294C  56                        PUSH ESI
0044294D  6A 00                     PUSH 0x0
0044294F  68 54 24 00 00            PUSH 0x2454
00442954  68 04 60 7A 00            PUSH 0x7a6004
00442959  E8 72 AB 26 00            CALL 0x006ad4d0
0044295E  83 C4 18                  ADD ESP,0x18
00442961  85 C0                     TEST EAX,EAX
00442963  74 01                     JZ 0x00442966
00442965  CC                        INT3
LAB_00442966:
00442966  68 55 24 00 00            PUSH 0x2455
0044296B  68 04 60 7A 00            PUSH 0x7a6004
00442970  6A 00                     PUSH 0x0
00442972  56                        PUSH ESI
00442973  E8 C8 34 26 00            CALL 0x006a5e40
LAB_00442978:
00442978  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044297B  5F                        POP EDI
0044297C  5E                        POP ESI
0044297D  5B                        POP EBX
0044297E  8B E5                     MOV ESP,EBP
00442980  5D                        POP EBP
00442981  C2 08 00                  RET 0x8
