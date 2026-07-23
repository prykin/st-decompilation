CGenerate::sub_006991C0:
006991C0  55                        PUSH EBP
006991C1  8B EC                     MOV EBP,ESP
006991C3  6A FF                     PUSH -0x1
006991C5  68 B8 D7 79 00            PUSH 0x79d7b8
006991CA  68 64 D9 72 00            PUSH 0x72d964
006991CF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006991D5  50                        PUSH EAX
006991D6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006991DD  81 EC 48 01 00 00         SUB ESP,0x148
006991E3  53                        PUSH EBX
006991E4  56                        PUSH ESI
006991E5  57                        PUSH EDI
006991E6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006991E9  8B D9                     MOV EBX,ECX
006991EB  89 9D BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EBX
006991F1  33 C0                     XOR EAX,EAX
006991F3  89 85 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],EAX
006991F9  89 85 EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EAX
006991FF  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
00699205  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
0069920B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0069920E  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
00699212  89 BD 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDI
00699218  8D B3 4B 58 00 00         LEA ESI,[EBX + 0x584b]
0069921E  56                        PUSH ESI
0069921F  E8 3C 1E 01 00            CALL 0x006ab060
00699224  57                        PUSH EDI
00699225  E8 46 1A 01 00            CALL 0x006aac70
0069922A  8B F8                     MOV EDI,EAX
0069922C  89 3E                     MOV dword ptr [ESI],EDI
0069922E  8B 8B 2F 58 00 00         MOV ECX,dword ptr [EBX + 0x582f]
00699234  33 C0                     XOR EAX,EAX
00699236  8B D1                     MOV EDX,ECX
00699238  C1 E9 02                  SHR ECX,0x2
0069923B  F3 AB                     STOSD.REP ES:EDI
0069923D  8B CA                     MOV ECX,EDX
0069923F  83 E1 03                  AND ECX,0x3
00699242  F3 AA                     STOSB.REP ES:EDI
00699244  8B 83 33 58 00 00         MOV EAX,dword ptr [EBX + 0x5833]
0069924A  50                        PUSH EAX
0069924B  8B CB                     MOV ECX,EBX
0069924D  E8 F9 C3 D6 FF            CALL 0x0040564b
00699252  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00699259  B8 CC 08 00 00            MOV EAX,0x8cc
0069925E  E8 DD 47 09 00            CALL 0x0072da40
00699263  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00699266  8B C4                     MOV EAX,ESP
00699268  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
0069926E  8B BD 30 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff30]
00699274  8D 34 BF                  LEA ESI,[EDI + EDI*0x4]
00699277  D1 E6                     SHL ESI,0x1
00699279  8B C6                     MOV EAX,ESI
0069927B  83 C0 03                  ADD EAX,0x3
0069927E  24 FC                     AND AL,0xfc
00699280  E8 BB 47 09 00            CALL 0x0072da40
00699285  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00699288  8B C4                     MOV EAX,ESP
0069928A  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
00699290  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00699293  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
0069929A  83 C0 03                  ADD EAX,0x3
0069929D  24 FC                     AND AL,0xfc
0069929F  E8 9C 47 09 00            CALL 0x0072da40
006992A4  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006992A7  8B C4                     MOV EAX,ESP
006992A9  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
006992AF  8B C6                     MOV EAX,ESI
006992B1  83 C0 03                  ADD EAX,0x3
006992B4  24 FC                     AND AL,0xfc
006992B6  E8 85 47 09 00            CALL 0x0072da40
006992BB  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006992BE  8B C4                     MOV EAX,ESP
006992C0  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006992C3  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006992CA  33 F6                     XOR ESI,ESI
006992CC  89 B5 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ESI
006992D2  85 FF                     TEST EDI,EDI
006992D4  0F 8E B3 01 00 00         JLE 0x0069948d
LAB_006992da:
006992DA  8B C6                     MOV EAX,ESI
006992DC  99                        CDQ
006992DD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006992E0  F7 FF                     IDIV EDI
006992E2  8B CA                     MOV ECX,EDX
006992E4  8B C6                     MOV EAX,ESI
006992E6  99                        CDQ
006992E7  F7 FF                     IDIV EDI
006992E9  85 C9                     TEST ECX,ECX
006992EB  0F 8E 83 01 00 00         JLE 0x00699474
006992F1  85 C0                     TEST EAX,EAX
006992F3  0F 8E 7B 01 00 00         JLE 0x00699474
006992F9  8B 93 33 58 00 00         MOV EDX,dword ptr [EBX + 0x5833]
006992FF  4A                        DEC EDX
00699300  3B CA                     CMP ECX,EDX
00699302  0F 8D 6C 01 00 00         JGE 0x00699474
00699308  8B 8B 37 58 00 00         MOV ECX,dword ptr [EBX + 0x5837]
0069930E  49                        DEC ECX
0069930F  3B C1                     CMP EAX,ECX
00699311  0F 8D 5D 01 00 00         JGE 0x00699474
00699317  8D 55 84                  LEA EDX,[EBP + -0x7c]
0069931A  52                        PUSH EDX
0069931B  56                        PUSH ESI
0069931C  8B CB                     MOV ECX,EBX
0069931E  E8 68 8D D6 FF            CALL 0x0040208b
00699323  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
00699329  C7 85 C4 FE FF FF FF FF FF FF  MOV dword ptr [EBP + 0xfffffec4],0xffffffff
00699333  33 C0                     XOR EAX,EAX
00699335  33 F6                     XOR ESI,ESI
00699337  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0069933A  85 C9                     TEST ECX,ECX
0069933C  7E 56                     JLE 0x00699394
LAB_0069933e:
0069933E  8B 8D C4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec4]
00699344  85 C9                     TEST ECX,ECX
00699346  7F 4C                     JG 0x00699394
00699348  B8 01 00 00 00            MOV EAX,0x1
0069934D  33 D2                     XOR EDX,EDX
0069934F  8B 8D C0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec0]
00699355  85 C9                     TEST ECX,ECX
00699357  7E 29                     JLE 0x00699382
LAB_00699359:
00699359  8B 8B 2F 58 00 00         MOV ECX,dword ptr [EBX + 0x582f]
0069935F  0F AF CE                  IMUL ECX,ESI
00699362  8B 7C 95 84               MOV EDI,dword ptr [EBP + EDX*0x4 + -0x7c]
00699366  03 F9                     ADD EDI,ECX
00699368  8B 8B 4F 58 00 00         MOV ECX,dword ptr [EBX + 0x584f]
0069936E  66 83 3C 79 00            CMP word ptr [ECX + EDI*0x2],0x0
00699373  7E 0B                     JLE 0x00699380
00699375  42                        INC EDX
00699376  3B 95 C0 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffec0]
0069937C  7C DB                     JL 0x00699359
0069937E  EB 02                     JMP 0x00699382
LAB_00699380:
00699380  33 C0                     XOR EAX,EAX
LAB_00699382:
00699382  85 C0                     TEST EAX,EAX
00699384  75 08                     JNZ 0x0069938e
00699386  46                        INC ESI
00699387  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
0069938A  7C B2                     JL 0x0069933e
0069938C  EB 06                     JMP 0x00699394
LAB_0069938e:
0069938E  89 B5 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ESI
LAB_00699394:
00699394  85 C0                     TEST EAX,EAX
00699396  0F 84 D8 00 00 00         JZ 0x00699474
0069939C  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
006993A2  85 C0                     TEST EAX,EAX
006993A4  0F 8C CA 00 00 00         JL 0x00699474
006993AA  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
006993B0  8B C1                     MOV EAX,ECX
006993B2  99                        CDQ
006993B3  F7 7D 08                  IDIV dword ptr [EBP + 0x8]
006993B6  8B FA                     MOV EDI,EDX
006993B8  8B C1                     MOV EAX,ECX
006993BA  99                        CDQ
006993BB  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
006993BE  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
006993C4  85 D2                     TEST EDX,EDX
006993C6  75 0A                     JNZ 0x006993d2
006993C8  8B 93 4B 58 00 00         MOV EDX,dword ptr [EBX + 0x584b]
006993CE  C6 04 0A 01               MOV byte ptr [EDX + ECX*0x1],0x1
LAB_006993d2:
006993D2  8B 8D 14 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff14]
006993D8  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
006993DB  8B B5 68 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff68]
006993E1  8D 34 56                  LEA ESI,[ESI + EDX*0x2]
006993E4  66 89 3E                  MOV word ptr [ESI],DI
006993E7  66 89 46 02               MOV word ptr [ESI + 0x2],AX
006993EB  66 8B 85 C4 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec4]
006993F2  66 89 46 04               MOV word ptr [ESI + 0x4],AX
006993F6  8B 9D 30 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff30]
006993FC  33 FF                     XOR EDI,EDI
006993FE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00699401  85 D2                     TEST EDX,EDX
00699403  7E 3B                     JLE 0x00699440
LAB_00699405:
00699405  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00699408  0F BF 4C B8 02            MOVSX ECX,word ptr [EAX + EDI*0x4 + 0x2]
0069940D  51                        PUSH ECX
0069940E  0F BF 14 B8               MOVSX EDX,word ptr [EAX + EDI*0x4]
00699412  52                        PUSH EDX
00699413  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
00699417  50                        PUSH EAX
00699418  0F BF 0E                  MOVSX ECX,word ptr [ESI]
0069941B  51                        PUSH ECX
0069941C  E8 6F 3B 01 00            CALL 0x006acf90
00699421  3B C3                     CMP EAX,EBX
00699423  7D 02                     JGE 0x00699427
00699425  8B D8                     MOV EBX,EAX
LAB_00699427:
00699427  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0069942D  89 04 BA                  MOV dword ptr [EDX + EDI*0x4],EAX
00699430  47                        INC EDI
00699431  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00699434  3B F8                     CMP EDI,EAX
00699436  7C CD                     JL 0x00699405
00699438  8B 8D 14 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff14]
0069943E  8B D0                     MOV EDX,EAX
LAB_00699440:
00699440  33 F6                     XOR ESI,ESI
00699442  33 C0                     XOR EAX,EAX
00699444  85 D2                     TEST EDX,EDX
00699446  7E 12                     JLE 0x0069945a
LAB_00699448:
00699448  8B BD 70 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff70]
0069944E  8B 3C 87                  MOV EDI,dword ptr [EDI + EAX*0x4]
00699451  2B FB                     SUB EDI,EBX
00699453  03 F7                     ADD ESI,EDI
00699455  40                        INC EAX
00699456  3B C2                     CMP EAX,EDX
00699458  7C EE                     JL 0x00699448
LAB_0069945a:
0069945A  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0069945D  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
00699463  89 74 42 06               MOV dword ptr [EDX + EAX*0x2 + 0x6],ESI
00699467  41                        INC ECX
00699468  89 8D 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],ECX
0069946E  8B 9D BC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffebc]
LAB_00699474:
00699474  8B B5 28 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff28]
0069947A  46                        INC ESI
0069947B  89 B5 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ESI
00699481  3B B5 30 FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff30]
00699487  0F 8C 4D FE FF FF         JL 0x006992da
LAB_0069948d:
0069948D  8B 85 14 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff14]
00699493  85 C0                     TEST EAX,EAX
00699495  0F 84 A1 11 00 00         JZ 0x0069a63c
0069949B  33 C0                     XOR EAX,EAX
0069949D  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
006994A3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006994A6  85 C9                     TEST ECX,ECX
006994A8  0F 8E 3E 03 00 00         JLE 0x006997ec
006994AE  EB 06                     JMP 0x006994b6
LAB_006994b0:
006994B0  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
LAB_006994b6:
006994B6  8B 9D BC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffebc]
006994BC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006994BF  0F BF 34 82               MOVSX ESI,word ptr [EDX + EAX*0x4]
006994C3  8D 4E F9                  LEA ECX,[ESI + -0x7]
006994C6  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006994C9  33 FF                     XOR EDI,EDI
006994CB  3B CF                     CMP ECX,EDI
006994CD  7D 03                     JGE 0x006994d2
006994CF  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
LAB_006994d2:
006994D2  0F BF 4C 82 02            MOVSX ECX,word ptr [EDX + EAX*0x4 + 0x2]
006994D7  8D 51 F9                  LEA EDX,[ECX + -0x7]
006994DA  3B D7                     CMP EDX,EDI
006994DC  7D 02                     JGE 0x006994e0
006994DE  33 D2                     XOR EDX,EDX
LAB_006994e0:
006994E0  83 C6 08                  ADD ESI,0x8
006994E3  89 B5 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],ESI
006994E9  8B 83 33 58 00 00         MOV EAX,dword ptr [EBX + 0x5833]
006994EF  3B F0                     CMP ESI,EAX
006994F1  7E 08                     JLE 0x006994fb
006994F3  8B F0                     MOV ESI,EAX
006994F5  89 B5 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],ESI
LAB_006994fb:
006994FB  83 C1 08                  ADD ECX,0x8
006994FE  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00699501  8B 83 37 58 00 00         MOV EAX,dword ptr [EBX + 0x5837]
00699507  3B C8                     CMP ECX,EAX
00699509  7E 05                     JLE 0x00699510
0069950B  8B C8                     MOV ECX,EAX
0069950D  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
LAB_00699510:
00699510  3B D1                     CMP EDX,ECX
00699512  7D 41                     JGE 0x00699555
LAB_00699514:
00699514  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00699517  3B CE                     CMP ECX,ESI
00699519  7D 34                     JGE 0x0069954f
LAB_0069951b:
0069951B  8B 83 33 58 00 00         MOV EAX,dword ptr [EBX + 0x5833]
00699521  0F AF C2                  IMUL EAX,EDX
00699524  03 83 4B 58 00 00         ADD EAX,dword ptr [EBX + 0x584b]
0069952A  80 3C 08 00               CMP byte ptr [EAX + ECX*0x1],0x0
0069952E  74 1A                     JZ 0x0069954a
00699530  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00699533  8B B5 50 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff50]
00699539  8D 04 46                  LEA EAX,[ESI + EAX*0x2]
0069953C  66 89 08                  MOV word ptr [EAX],CX
0069953F  66 89 50 02               MOV word ptr [EAX + 0x2],DX
00699543  47                        INC EDI
00699544  8B B5 E8 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffee8]
LAB_0069954a:
0069954A  41                        INC ECX
0069954B  3B CE                     CMP ECX,ESI
0069954D  7C CC                     JL 0x0069951b
LAB_0069954f:
0069954F  42                        INC EDX
00699550  3B 55 B4                  CMP EDX,dword ptr [EBP + -0x4c]
00699553  7C BF                     JL 0x00699514
LAB_00699555:
00699555  83 FF 01                  CMP EDI,0x1
00699558  0F 8E DE 10 00 00         JLE 0x0069a63c
0069955E  C7 85 04 FF FF FF 64 00 00 00  MOV dword ptr [EBP + 0xffffff04],0x64
00699568  33 C0                     XOR EAX,EAX
0069956A  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
00699570  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00699573  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_00699576:
00699576  E8 45 51 09 00            CALL 0x0072e6c0
0069957B  99                        CDQ
0069957C  F7 FF                     IDIV EDI
0069957E  8B DA                     MOV EBX,EDX
00699580  E8 3B 51 09 00            CALL 0x0072e6c0
00699585  99                        CDQ
00699586  F7 FF                     IDIV EDI
00699588  8B F2                     MOV ESI,EDX
0069958A  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
0069958D  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
00699593  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00699596  8D 14 9B                  LEA EDX,[EBX + EBX*0x4]
00699599  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
0069959C  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
006995A0  52                        PUSH EDX
006995A1  0F BF 00                  MOVSX EAX,word ptr [EAX]
006995A4  50                        PUSH EAX
006995A5  0F BF 51 02               MOVSX EDX,word ptr [ECX + 0x2]
006995A9  52                        PUSH EDX
006995AA  0F BF 01                  MOVSX EAX,word ptr [ECX]
006995AD  50                        PUSH EAX
006995AE  E8 DD 39 01 00            CALL 0x006acf90
006995B3  3B DE                     CMP EBX,ESI
006995B5  74 1B                     JZ 0x006995d2
006995B7  83 F8 02                  CMP EAX,0x2
006995BA  7E 16                     JLE 0x006995d2
006995BC  33 C9                     XOR ECX,ECX
006995BE  3B C1                     CMP EAX,ECX
006995C0  7E 06                     JLE 0x006995c8
006995C2  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
006995C5  89 75 AC                  MOV dword ptr [EBP + -0x54],ESI
LAB_006995c8:
006995C8  C7 85 44 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff44],0x1
LAB_006995d2:
006995D2  8B 85 04 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff04]
006995D8  48                        DEC EAX
006995D9  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
006995DF  85 C0                     TEST EAX,EAX
006995E1  7F 93                     JG 0x00699576
006995E3  33 C9                     XOR ECX,ECX
006995E5  89 8D D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],ECX
006995EB  89 8D D4 FE FF FF         MOV dword ptr [EBP + 0xfffffed4],ECX
006995F1  89 8D D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],ECX
006995F7  66 89 8D DC FE FF FF      MOV word ptr [EBP + 0xfffffedc],CX
006995FE  88 8D DE FE FF FF         MOV byte ptr [EBP + 0xfffffede],CL
00699604  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0069960A  85 C0                     TEST EAX,EAX
0069960C  0F 84 2A 10 00 00         JZ 0x0069a63c
00699612  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00699615  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00699618  8B BD 50 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff50]
0069961E  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
00699621  66 8B 08                  MOV CX,word ptr [EAX]
00699624  66 89 8D D0 FE FF FF      MOV word ptr [EBP + 0xfffffed0],CX
0069962B  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
0069962F  66 89 95 D2 FE FF FF      MOV word ptr [EBP + 0xfffffed2],DX
00699636  33 DB                     XOR EBX,EBX
00699638  66 89 9D D4 FE FF FF      MOV word ptr [EBP + 0xfffffed4],BX
0069963F  C7 85 DA FE FF FF DE 00 00 00  MOV dword ptr [EBP + 0xfffffeda],0xde
00699649  88 9D DE FE FF FF         MOV byte ptr [EBP + 0xfffffede],BL
0069964F  8D 85 D0 FE FF FF         LEA EAX,[EBP + 0xfffffed0]
00699655  50                        PUSH EAX
00699656  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00699659  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0069965C  51                        PUSH ECX
0069965D  E8 5E 4B 01 00            CALL 0x006ae1c0
00699662  FF 85 78 FF FF FF         INC dword ptr [EBP + 0xffffff78]
00699668  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0069966B  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0069966E  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
00699671  66 8B 08                  MOV CX,word ptr [EAX]
00699674  66 89 8D D0 FE FF FF      MOV word ptr [EBP + 0xfffffed0],CX
0069967B  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
0069967F  66 89 95 D2 FE FF FF      MOV word ptr [EBP + 0xfffffed2],DX
00699686  66 89 9D D4 FE FF FF      MOV word ptr [EBP + 0xfffffed4],BX
0069968D  C7 85 DA FE FF FF DD 00 00 00  MOV dword ptr [EBP + 0xfffffeda],0xdd
00699697  88 9D DE FE FF FF         MOV byte ptr [EBP + 0xfffffede],BL
0069969D  8D 85 D0 FE FF FF         LEA EAX,[EBP + 0xfffffed0]
006996A3  50                        PUSH EAX
006996A4  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006996A7  51                        PUSH ECX
006996A8  E8 13 4B 01 00            CALL 0x006ae1c0
006996AD  83 85 EC FE FF FF 02      ADD dword ptr [EBP + 0xfffffeec],0x2
006996B4  FF 85 C8 FE FF FF         INC dword ptr [EBP + 0xfffffec8]
006996BA  89 9D 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EBX
LAB_006996c0:
006996C0  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
006996C6  83 E8 00                  SUB EAX,0x0
006996C9  74 08                     JZ 0x006996d3
006996CB  48                        DEC EAX
006996CC  75 08                     JNZ 0x006996d6
006996CE  8B 5D AC                  MOV EBX,dword ptr [EBP + -0x54]
006996D1  EB 03                     JMP 0x006996d6
LAB_006996d3:
006996D3  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
LAB_006996d6:
006996D6  8D 14 9B                  LEA EDX,[EBX + EBX*0x4]
006996D9  8B 85 50 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff50]
006996DF  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006996E2  0F BF 10                  MOVSX EDX,word ptr [EAX]
006996E5  8D 4A F9                  LEA ECX,[EDX + -0x7]
006996E8  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006996EB  85 C9                     TEST ECX,ECX
006996ED  7D 05                     JGE 0x006996f4
006996EF  33 C9                     XOR ECX,ECX
006996F1  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_006996f4:
006996F4  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
006996F8  8D 78 F9                  LEA EDI,[EAX + -0x7]
006996FB  85 FF                     TEST EDI,EDI
006996FD  7D 02                     JGE 0x00699701
006996FF  33 FF                     XOR EDI,EDI
LAB_00699701:
00699701  8D 72 08                  LEA ESI,[EDX + 0x8]
00699704  89 B5 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],ESI
0069970A  8B 95 BC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffebc]
00699710  8B 92 33 58 00 00         MOV EDX,dword ptr [EDX + 0x5833]
00699716  3B F2                     CMP ESI,EDX
00699718  7E 08                     JLE 0x00699722
0069971A  8B F2                     MOV ESI,EDX
0069971C  89 B5 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],ESI
LAB_00699722:
00699722  83 C0 08                  ADD EAX,0x8
00699725  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00699728  8B 95 BC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffebc]
0069972E  8B 92 37 58 00 00         MOV EDX,dword ptr [EDX + 0x5837]
00699734  3B C2                     CMP EAX,EDX
00699736  7E 05                     JLE 0x0069973d
00699738  8B C2                     MOV EAX,EDX
0069973A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
LAB_0069973d:
0069973D  3B F8                     CMP EDI,EAX
0069973F  7D 7F                     JGE 0x006997c0
LAB_00699741:
00699741  3B CE                     CMP ECX,ESI
00699743  7D 76                     JGE 0x006997bb
LAB_00699745:
00699745  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
0069974B  8B 90 33 58 00 00         MOV EDX,dword ptr [EAX + 0x5833]
00699751  0F AF D7                  IMUL EDX,EDI
00699754  03 90 4B 58 00 00         ADD EDX,dword ptr [EAX + 0x584b]
0069975A  C6 04 0A 00               MOV byte ptr [EDX + ECX*0x1],0x0
0069975E  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
00699761  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
00699767  8D 34 42                  LEA ESI,[EDX + EAX*0x2]
0069976A  0F BF 16                  MOVSX EDX,word ptr [ESI]
0069976D  8B C1                     MOV EAX,ECX
0069976F  2B C2                     SUB EAX,EDX
00699771  99                        CDQ
00699772  33 C2                     XOR EAX,EDX
00699774  2B C2                     SUB EAX,EDX
00699776  83 F8 02                  CMP EAX,0x2
00699779  7E 12                     JLE 0x0069978d
0069977B  0F BF 56 02               MOVSX EDX,word ptr [ESI + 0x2]
0069977F  8B C7                     MOV EAX,EDI
00699781  2B C2                     SUB EAX,EDX
00699783  99                        CDQ
00699784  33 C2                     XOR EAX,EDX
00699786  2B C2                     SUB EAX,EDX
00699788  83 F8 02                  CMP EAX,0x2
0069978B  7F 19                     JG 0x006997a6
LAB_0069978d:
0069978D  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00699793  8B 90 33 58 00 00         MOV EDX,dword ptr [EAX + 0x5833]
00699799  0F AF D7                  IMUL EDX,EDI
0069979C  03 90 4B 58 00 00         ADD EDX,dword ptr [EAX + 0x584b]
006997A2  C6 04 0A 00               MOV byte ptr [EDX + ECX*0x1],0x0
LAB_006997a6:
006997A6  41                        INC ECX
006997A7  3B 8D E8 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffee8]
006997AD  7C 96                     JL 0x00699745
006997AF  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006997B2  8B B5 E8 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffee8]
006997B8  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
LAB_006997bb:
006997BB  47                        INC EDI
006997BC  3B F8                     CMP EDI,EAX
006997BE  7C 81                     JL 0x00699741
LAB_006997c0:
006997C0  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
006997C6  40                        INC EAX
006997C7  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
006997CD  83 F8 02                  CMP EAX,0x2
006997D0  0F 8C EA FE FF FF         JL 0x006996c0
006997D6  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
006997DC  40                        INC EAX
006997DD  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
006997E3  3B 45 18                  CMP EAX,dword ptr [EBP + 0x18]
006997E6  0F 8C C4 FC FF FF         JL 0x006994b0
LAB_006997ec:
006997EC  8B 85 EC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeec]
006997F2  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006997F5  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006997F8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006997FB  85 C0                     TEST EAX,EAX
006997FD  0F 8E F6 08 00 00         JLE 0x0069a0f9
00699803  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0069980A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0069980D  8B F3                     MOV ESI,EBX
0069980F  0F AF F3                  IMUL ESI,EBX
00699812  C1 E6 02                  SHL ESI,0x2
00699815  8B C6                     MOV EAX,ESI
00699817  83 C0 03                  ADD EAX,0x3
0069981A  24 FC                     AND AL,0xfc
0069981C  E8 1F 42 09 00            CALL 0x0072da40
00699821  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00699824  8B C4                     MOV EAX,ESP
00699826  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0069982C  8B C6                     MOV EAX,ESI
0069982E  83 C0 03                  ADD EAX,0x3
00699831  24 FC                     AND AL,0xfc
00699833  E8 08 42 09 00            CALL 0x0072da40
00699838  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069983B  8B C4                     MOV EAX,ESP
0069983D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00699840  8D 34 DD 00 00 00 00      LEA ESI,[EBX*0x8 + 0x0]
00699847  8B C6                     MOV EAX,ESI
00699849  83 C0 03                  ADD EAX,0x3
0069984C  24 FC                     AND AL,0xfc
0069984E  E8 ED 41 09 00            CALL 0x0072da40
00699853  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00699856  8B C4                     MOV EAX,ESP
00699858  89 85 F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EAX
0069985E  8B C6                     MOV EAX,ESI
00699860  83 C0 03                  ADD EAX,0x3
00699863  24 FC                     AND AL,0xfc
00699865  E8 D6 41 09 00            CALL 0x0072da40
0069986A  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069986D  8B C4                     MOV EAX,ESP
0069986F  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
00699875  B8 E4 04 00 00            MOV EAX,0x4e4
0069987A  E8 C1 41 09 00            CALL 0x0072da40
0069987F  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00699882  8B F4                     MOV ESI,ESP
00699884  89 B5 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],ESI
0069988A  B8 F4 01 00 00            MOV EAX,0x1f4
0069988F  E8 AC 41 09 00            CALL 0x0072da40
00699894  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00699897  8B C4                     MOV EAX,ESP
00699899  89 85 FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],EAX
0069989F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006998A6  C7 85 28 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff28],0x0
006998B0  85 DB                     TEST EBX,EBX
006998B2  0F 8E 0B 01 00 00         JLE 0x006999c3
LAB_006998b8:
006998B8  33 FF                     XOR EDI,EDI
006998BA  89 BD 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EDI
006998C0  85 DB                     TEST EBX,EBX
006998C2  0F 8E E6 00 00 00         JLE 0x006999ae
LAB_006998c8:
006998C8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006998CB  0F BF 54 B8 02            MOVSX EDX,word ptr [EAX + EDI*0x4 + 0x2]
006998D0  52                        PUSH EDX
006998D1  0F BF 0C B8               MOVSX ECX,word ptr [EAX + EDI*0x4]
006998D5  51                        PUSH ECX
006998D6  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
006998DC  0F BF 54 88 02            MOVSX EDX,word ptr [EAX + ECX*0x4 + 0x2]
006998E1  52                        PUSH EDX
006998E2  0F BF 04 88               MOVSX EAX,word ptr [EAX + ECX*0x4]
006998E6  50                        PUSH EAX
006998E7  E8 EC 35 01 00            CALL 0x006aced8
006998EC  83 C4 10                  ADD ESP,0x10
006998EF  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006998F2  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
006998F8  0F AF CB                  IMUL ECX,EBX
006998FB  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
006998FE  8B 9D 5C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff5c]
00699904  89 04 93                  MOV dword ptr [EBX + EDX*0x4],EAX
00699907  33 D2                     XOR EDX,EDX
00699909  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
0069990F  33 DB                     XOR EBX,EBX
00699911  89 9D 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],EBX
00699917  85 FF                     TEST EDI,EDI
00699919  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0069991C  7E 75                     JLE 0x00699993
LAB_0069991e:
0069991E  8D 14 19                  LEA EDX,[ECX + EBX*0x1]
00699921  8B 04 90                  MOV EAX,dword ptr [EAX + EDX*0x4]
00699924  03 C1                     ADD EAX,ECX
00699926  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00699929  8B 9D 5C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff5c]
0069992F  3B 14 83                  CMP EDX,dword ptr [EBX + EAX*0x4]
00699932  7D 41                     JGE 0x00699975
00699934  8D 57 FF                  LEA EDX,[EDI + -0x1]
00699937  8B 9D 00 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff00]
0069993D  3B D3                     CMP EDX,EBX
0069993F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00699942  7C 1E                     JL 0x00699962
LAB_00699944:
00699944  8D 3C 11                  LEA EDI,[ECX + EDX*0x1]
00699947  8D 1C 11                  LEA EBX,[ECX + EDX*0x1]
0069994A  8B 3C B8                  MOV EDI,dword ptr [EAX + EDI*0x4]
0069994D  89 7C 98 04               MOV dword ptr [EAX + EBX*0x4 + 0x4],EDI
00699951  4A                        DEC EDX
00699952  8B 9D 00 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff00]
00699958  3B D3                     CMP EDX,EBX
0069995A  7D E8                     JGE 0x00699944
0069995C  8B BD 10 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff10]
LAB_00699962:
00699962  8D 14 19                  LEA EDX,[ECX + EBX*0x1]
00699965  89 3C 90                  MOV dword ptr [EAX + EDX*0x4],EDI
00699968  BA 01 00 00 00            MOV EDX,0x1
0069996D  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
00699973  EB 0F                     JMP 0x00699984
LAB_00699975:
00699975  8B 9D 00 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff00]
0069997B  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
00699981  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_00699984:
00699984  85 D2                     TEST EDX,EDX
00699986  75 14                     JNZ 0x0069999c
00699988  43                        INC EBX
00699989  89 9D 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],EBX
0069998F  3B DF                     CMP EBX,EDI
00699991  7C 8B                     JL 0x0069991e
LAB_00699993:
00699993  85 D2                     TEST EDX,EDX
00699995  75 05                     JNZ 0x0069999c
00699997  03 CF                     ADD ECX,EDI
00699999  89 3C 88                  MOV dword ptr [EAX + ECX*0x4],EDI
LAB_0069999c:
0069999C  47                        INC EDI
0069999D  89 BD 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EDI
006999A3  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006999A6  3B FB                     CMP EDI,EBX
006999A8  0F 8C 1A FF FF FF         JL 0x006998c8
LAB_006999ae:
006999AE  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
006999B4  40                        INC EAX
006999B5  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
006999BB  3B C3                     CMP EAX,EBX
006999BD  0F 8C F5 FE FF FF         JL 0x006998b8
LAB_006999c3:
006999C3  8D 0C DD 00 00 00 00      LEA ECX,[EBX*0x8 + 0x0]
006999CA  83 C8 FF                  OR EAX,0xffffffff
006999CD  8B BD F8 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffef8]
006999D3  8B D1                     MOV EDX,ECX
006999D5  C1 E9 02                  SHR ECX,0x2
006999D8  F3 AB                     STOSD.REP ES:EDI
006999DA  8B CA                     MOV ECX,EDX
006999DC  83 E1 03                  AND ECX,0x3
006999DF  F3 AA                     STOSB.REP ES:EDI
006999E1  8D 0C DD 00 00 00 00      LEA ECX,[EBX*0x8 + 0x0]
006999E8  83 C8 FF                  OR EAX,0xffffffff
006999EB  8B BD 20 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff20]
006999F1  8B D1                     MOV EDX,ECX
006999F3  C1 E9 02                  SHR ECX,0x2
006999F6  F3 AB                     STOSD.REP ES:EDI
006999F8  8B CA                     MOV ECX,EDX
006999FA  83 E1 03                  AND ECX,0x3
006999FD  F3 AA                     STOSB.REP ES:EDI
006999FF  33 C0                     XOR EAX,EAX
00699A01  89 85 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EAX
00699A07  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
00699A0D  3B D8                     CMP EBX,EAX
00699A0F  0F 8E E4 06 00 00         JLE 0x0069a0f9
LAB_00699a15:
00699A15  33 C0                     XOR EAX,EAX
00699A17  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00699A1D  33 FF                     XOR EDI,EDI
00699A1F  89 BD 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EDI
00699A25  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00699A28  85 D2                     TEST EDX,EDX
00699A2A  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00699A30  7E 4B                     JLE 0x00699a7d
LAB_00699a32:
00699A32  8B C1                     MOV EAX,ECX
00699A34  0F AF C2                  IMUL EAX,EDX
00699A37  03 C7                     ADD EAX,EDI
00699A39  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00699A3C  8B 04 83                  MOV EAX,dword ptr [EBX + EAX*0x4]
00699A3F  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00699A45  3B C1                     CMP EAX,ECX
00699A47  74 1A                     JZ 0x00699a63
00699A49  8B 9D F8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffef8]
00699A4F  83 3C 83 00               CMP dword ptr [EBX + EAX*0x4],0x0
00699A53  7D 0E                     JGE 0x00699a63
00699A55  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
00699A58  39 0C BB                  CMP dword ptr [EBX + EDI*0x4],ECX
00699A5B  75 13                     JNZ 0x00699a70
00699A5D  8B BD 10 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff10]
LAB_00699a63:
00699A63  47                        INC EDI
00699A64  89 BD 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EDI
00699A6A  3B FA                     CMP EDI,EDX
00699A6C  7C C4                     JL 0x00699a32
00699A6E  EB 0D                     JMP 0x00699a7d
LAB_00699a70:
00699A70  C7 04 83 01 00 00 00      MOV dword ptr [EBX + EAX*0x4],0x1
00699A77  8D 3C 11                  LEA EDI,[ECX + EDX*0x1]
00699A7A  89 04 BB                  MOV dword ptr [EBX + EDI*0x4],EAX
LAB_00699a7d:
00699A7D  0F AF CA                  IMUL ECX,EDX
00699A80  03 C8                     ADD ECX,EAX
00699A82  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00699A88  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
00699A8B  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
00699A91  83 38 00                  CMP dword ptr [EAX],0x0
00699A94  0F 84 49 06 00 00         JZ 0x0069a0e3
00699A9A  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00699AA0  85 C0                     TEST EAX,EAX
00699AA2  0F 8C 3B 06 00 00         JL 0x0069a0e3
00699AA8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00699AAB  39 85 7C FF FF FF         CMP dword ptr [EBP + 0xffffff7c],EAX
00699AB1  0F 8D 2C 06 00 00         JGE 0x0069a0e3
00699AB7  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00699ABA  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00699AC0  0F BF 1C 8F               MOVSX EBX,word ptr [EDI + ECX*0x4]
00699AC4  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
00699ACA  0F BF 0C 97               MOVSX ECX,word ptr [EDI + EDX*0x4]
00699ACE  2B CB                     SUB ECX,EBX
00699AD0  C1 E1 02                  SHL ECX,0x2
00699AD3  B8 39 8E E3 38            MOV EAX,0x38e38e39
00699AD8  F7 E9                     IMUL ECX
00699ADA  D1 FA                     SAR EDX,0x1
00699ADC  8B C2                     MOV EAX,EDX
00699ADE  C1 E8 1F                  SHR EAX,0x1f
00699AE1  03 D0                     ADD EDX,EAX
00699AE3  03 D3                     ADD EDX,EBX
00699AE5  89 95 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EDX
00699AEB  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
00699AF1  8D 44 8F 02               LEA EAX,[EDI + ECX*0x4 + 0x2]
00699AF5  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
00699AFB  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
00699B01  8D 4C 97 02               LEA ECX,[EDI + EDX*0x4 + 0x2]
00699B05  89 8D B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],ECX
00699B0B  0F BF 11                  MOVSX EDX,word ptr [ECX]
00699B0E  0F BF 08                  MOVSX ECX,word ptr [EAX]
00699B11  2B CA                     SUB ECX,EDX
00699B13  C1 E1 02                  SHL ECX,0x2
00699B16  B8 39 8E E3 38            MOV EAX,0x38e38e39
00699B1B  F7 E9                     IMUL ECX
00699B1D  D1 FA                     SAR EDX,0x1
00699B1F  8B C2                     MOV EAX,EDX
00699B21  C1 E8 1F                  SHR EAX,0x1f
00699B24  03 D0                     ADD EDX,EAX
00699B26  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00699B2C  0F BF 01                  MOVSX EAX,word ptr [ECX]
00699B2F  03 D0                     ADD EDX,EAX
00699B31  89 95 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EDX
00699B37  50                        PUSH EAX
00699B38  53                        PUSH EBX
00699B39  52                        PUSH EDX
00699B3A  8B 95 24 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff24]
00699B40  52                        PUSH EDX
00699B41  E8 92 33 01 00            CALL 0x006aced8
00699B46  83 C4 10                  ADD ESP,0x10
00699B49  83 F8 1E                  CMP EAX,0x1e
00699B4C  7E 58                     JLE 0x00699ba6
00699B4E  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
00699B54  0F BF 0C 87               MOVSX ECX,word ptr [EDI + EAX*0x4]
00699B58  8B 95 B8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb8]
00699B5E  8B 1A                     MOV EBX,dword ptr [EDX]
00699B60  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00699B66  0F BF 04 87               MOVSX EAX,word ptr [EDI + EAX*0x4]
00699B6A  2B C1                     SUB EAX,ECX
00699B6C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00699B6F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00699B72  D1 E0                     SHL EAX,0x1
00699B74  99                        CDQ
00699B75  F7 FB                     IDIV EBX
00699B77  03 C1                     ADD EAX,ECX
00699B79  89 85 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EAX
00699B7F  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00699B85  0F BF 09                  MOVSX ECX,word ptr [ECX]
00699B88  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00699B8E  0F BF 02                  MOVSX EAX,word ptr [EDX]
00699B91  2B C1                     SUB EAX,ECX
00699B93  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00699B96  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00699B99  D1 E0                     SHL EAX,0x1
00699B9B  99                        CDQ
00699B9C  F7 FB                     IDIV EBX
00699B9E  03 C1                     ADD EAX,ECX
00699BA0  89 85 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EAX
LAB_00699ba6:
00699BA6  33 DB                     XOR EBX,EBX
00699BA8  89 9D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EBX
00699BAE  C7 85 04 FF FF FF 03 00 00 00  MOV dword ptr [EBP + 0xffffff04],0x3
00699BB8  C7 45 C0 05 00 00 00      MOV dword ptr [EBP + -0x40],0x5
LAB_00699bbf:
00699BBF  C7 85 10 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x0
00699BC9  8B 85 14 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff14]
00699BCF  85 C0                     TEST EAX,EAX
00699BD1  0F 8E 89 00 00 00         JLE 0x00699c60
LAB_00699bd7:
00699BD7  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
00699BDD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00699BE0  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
00699BE6  8D 3C 41                  LEA EDI,[ECX + EAX*0x2]
00699BE9  8B 47 06                  MOV EAX,dword ptr [EDI + 0x6]
00699BEC  85 C0                     TEST EAX,EAX
00699BEE  76 57                     JBE 0x00699c47
00699BF0  8B 95 E0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee0]
00699BF6  52                        PUSH EDX
00699BF7  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00699BFD  50                        PUSH EAX
00699BFE  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
00699C02  51                        PUSH ECX
00699C03  0F BF 17                  MOVSX EDX,word ptr [EDI]
00699C06  52                        PUSH EDX
00699C07  E8 CC 32 01 00            CALL 0x006aced8
00699C0C  83 C4 10                  ADD ESP,0x10
00699C0F  3B 45 C0                  CMP EAX,dword ptr [EBP + -0x40]
00699C12  7F 33                     JG 0x00699c47
00699C14  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
00699C17  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
00699C1A  8B 17                     MOV EDX,dword ptr [EDI]
00699C1C  89 11                     MOV dword ptr [ECX],EDX
00699C1E  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00699C21  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00699C24  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
00699C28  66 89 51 08               MOV word ptr [ECX + 0x8],DX
00699C2C  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
00699C32  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
00699C38  89 04 99                  MOV dword ptr [ECX + EBX*0x4],EAX
00699C3B  43                        INC EBX
00699C3C  89 9D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EBX
00699C42  83 FB 7B                  CMP EBX,0x7b
00699C45  74 19                     JZ 0x00699c60
LAB_00699c47:
00699C47  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
00699C4D  40                        INC EAX
00699C4E  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
00699C54  3B 85 14 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff14]
00699C5A  0F 8C 77 FF FF FF         JL 0x00699bd7
LAB_00699c60:
00699C60  83 FB 0A                  CMP EBX,0xa
00699C63  7E 0C                     JLE 0x00699c71
00699C65  C7 85 04 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff04],0x0
00699C6F  EB 0A                     JMP 0x00699c7b
LAB_00699c71:
00699C71  FF 8D 04 FF FF FF         DEC dword ptr [EBP + 0xffffff04]
00699C77  83 45 C0 02               ADD dword ptr [EBP + -0x40],0x2
LAB_00699c7b:
00699C7B  8B 85 04 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff04]
00699C81  85 C0                     TEST EAX,EAX
00699C83  0F 8F 36 FF FF FF         JG 0x00699bbf
00699C89  85 DB                     TEST EBX,EBX
00699C8B  0F 8E 52 04 00 00         JLE 0x0069a0e3
00699C91  C7 85 04 FF FF FF 46 00 00 00  MOV dword ptr [EBP + 0xffffff04],0x46
00699C9B  33 C0                     XOR EAX,EAX
00699C9D  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
00699CA3  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00699CA6  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_00699ca9:
00699CA9  E8 12 4A 09 00            CALL 0x0072e6c0
00699CAE  99                        CDQ
00699CAF  8B BD C0 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffec0]
00699CB5  F7 FF                     IDIV EDI
00699CB7  8B DA                     MOV EBX,EDX
00699CB9  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
00699CBC  E8 FF 49 09 00            CALL 0x0072e6c0
00699CC1  99                        CDQ
00699CC2  F7 FF                     IDIV EDI
00699CC4  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
00699CC7  8D 3C 92                  LEA EDI,[EDX + EDX*0x4]
00699CCA  D1 E7                     SHL EDI,0x1
00699CCC  8D 1C 9B                  LEA EBX,[EBX + EBX*0x4]
00699CCF  D1 E3                     SHL EBX,0x1
00699CD1  89 9D AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EBX
00699CD7  0F BF 54 37 02            MOVSX EDX,word ptr [EDI + ESI*0x1 + 0x2]
00699CDC  52                        PUSH EDX
00699CDD  0F BF 04 37               MOVSX EAX,word ptr [EDI + ESI*0x1]
00699CE1  50                        PUSH EAX
00699CE2  0F BF 4C 33 02            MOVSX ECX,word ptr [EBX + ESI*0x1 + 0x2]
00699CE7  51                        PUSH ECX
00699CE8  0F BF 14 33               MOVSX EDX,word ptr [EBX + ESI*0x1]
00699CEC  52                        PUSH EDX
00699CED  E8 E6 31 01 00            CALL 0x006aced8
00699CF2  83 C4 10                  ADD ESP,0x10
00699CF5  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00699CF8  39 4D B8                  CMP dword ptr [EBP + -0x48],ECX
00699CFB  0F 84 25 02 00 00         JZ 0x00699f26
00699D01  BA 02 00 00 00            MOV EDX,0x2
00699D06  3B C2                     CMP EAX,EDX
00699D08  0F 8C 18 02 00 00         JL 0x00699f26
00699D0E  89 95 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EDX
00699D14  C7 85 10 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x0
00699D1E  8B 85 F0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef0]
00699D24  85 C0                     TEST EAX,EAX
00699D26  0F 8E 9B 00 00 00         JLE 0x00699dc7
LAB_00699d2c:
00699D2C  8B 95 20 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff20]
00699D32  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
00699D38  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
00699D3B  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00699D3E  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
00699D44  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00699D47  0F BF 4C 0B 02            MOVSX ECX,word ptr [EBX + ECX*0x1 + 0x2]
00699D4C  51                        PUSH ECX
00699D4D  0F BF 14 33               MOVSX EDX,word ptr [EBX + ESI*0x1]
00699D51  52                        PUSH EDX
00699D52  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
00699D56  51                        PUSH ECX
00699D57  0F BF 10                  MOVSX EDX,word ptr [EAX]
00699D5A  52                        PUSH EDX
00699D5B  E8 30 32 01 00            CALL 0x006acf90
00699D60  89 85 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EAX
00699D66  8B 85 20 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff20]
00699D6C  8B 8D 10 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff10]
00699D72  8B 04 88                  MOV EAX,dword ptr [EAX + ECX*0x4]
00699D75  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00699D78  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
00699D7E  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00699D81  0F BF 4C 0F 02            MOVSX ECX,word ptr [EDI + ECX*0x1 + 0x2]
00699D86  51                        PUSH ECX
00699D87  0F BF 14 37               MOVSX EDX,word ptr [EDI + ESI*0x1]
00699D8B  52                        PUSH EDX
00699D8C  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
00699D90  51                        PUSH ECX
00699D91  0F BF 10                  MOVSX EDX,word ptr [EAX]
00699D94  52                        PUSH EDX
00699D95  E8 F6 31 01 00            CALL 0x006acf90
00699D9A  8B D0                     MOV EDX,EAX
00699D9C  83 BD 18 FF FF FF 02      CMP dword ptr [EBP + 0xffffff18],0x2
00699DA3  0F 8C 7D 01 00 00         JL 0x00699f26
00699DA9  83 FA 02                  CMP EDX,0x2
00699DAC  7C 19                     JL 0x00699dc7
00699DAE  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
00699DB4  40                        INC EAX
00699DB5  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
00699DBB  3B 85 F0 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffef0]
00699DC1  0F 8C 65 FF FF FF         JL 0x00699d2c
LAB_00699dc7:
00699DC7  83 BD 18 FF FF FF 02      CMP dword ptr [EBP + 0xffffff18],0x2
00699DCE  0F 8C 52 01 00 00         JL 0x00699f26
00699DD4  83 FA 02                  CMP EDX,0x2
00699DD7  0F 8C 49 01 00 00         JL 0x00699f26
00699DDD  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
00699DE3  0F AF 45 18               IMUL EAX,dword ptr [EBP + 0x18]
00699DE7  03 85 7C FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff7c]
00699DED  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00699DF3  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
00699DF6  0F AF C2                  IMUL EAX,EDX
00699DF9  99                        CDQ
00699DFA  2B C2                     SUB EAX,EDX
00699DFC  D1 F8                     SAR EAX,0x1
00699DFE  89 85 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EAX
00699E04  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00699E07  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
00699E0D  8D 4C 90 02               LEA ECX,[EAX + EDX*0x4 + 0x2]
00699E11  89 8D B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],ECX
00699E17  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
00699E1D  8D 44 90 02               LEA EAX,[EAX + EDX*0x4 + 0x2]
00699E21  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
00699E27  0F BF 4C 37 02            MOVSX ECX,word ptr [EDI + ESI*0x1 + 0x2]
00699E2C  51                        PUSH ECX
00699E2D  0F BF 14 37               MOVSX EDX,word ptr [EDI + ESI*0x1]
00699E31  52                        PUSH EDX
00699E32  0F BF 44 33 02            MOVSX EAX,word ptr [EBX + ESI*0x1 + 0x2]
00699E37  50                        PUSH EAX
00699E38  0F BF 0C 33               MOVSX ECX,word ptr [EBX + ESI*0x1]
00699E3C  51                        PUSH ECX
00699E3D  E8 96 30 01 00            CALL 0x006aced8
00699E42  8B D8                     MOV EBX,EAX
00699E44  0F BF 54 37 02            MOVSX EDX,word ptr [EDI + ESI*0x1 + 0x2]
00699E49  52                        PUSH EDX
00699E4A  0F BF 04 37               MOVSX EAX,word ptr [EDI + ESI*0x1]
00699E4E  50                        PUSH EAX
00699E4F  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00699E55  0F BF 11                  MOVSX EDX,word ptr [ECX]
00699E58  52                        PUSH EDX
00699E59  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00699E5C  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
00699E62  0F BF 14 88               MOVSX EDX,word ptr [EAX + ECX*0x4]
00699E66  52                        PUSH EDX
00699E67  E8 6C 30 01 00            CALL 0x006aced8
00699E6C  03 D8                     ADD EBX,EAX
00699E6E  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00699E74  0F BF 4C 30 02            MOVSX ECX,word ptr [EAX + ESI*0x1 + 0x2]
00699E79  51                        PUSH ECX
00699E7A  0F BF 14 30               MOVSX EDX,word ptr [EAX + ESI*0x1]
00699E7E  52                        PUSH EDX
00699E7F  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00699E85  0F BF 08                  MOVSX ECX,word ptr [EAX]
00699E88  51                        PUSH ECX
00699E89  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00699E8C  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00699E92  0F BF 0C 82               MOVSX ECX,word ptr [EDX + EAX*0x4]
00699E96  51                        PUSH ECX
00699E97  E8 3C 30 01 00            CALL 0x006aced8
00699E9C  03 D8                     ADD EBX,EAX
00699E9E  0F BF 54 37 02            MOVSX EDX,word ptr [EDI + ESI*0x1 + 0x2]
00699EA3  52                        PUSH EDX
00699EA4  0F BF 04 37               MOVSX EAX,word ptr [EDI + ESI*0x1]
00699EA8  50                        PUSH EAX
00699EA9  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00699EAF  0F BF 11                  MOVSX EDX,word ptr [ECX]
00699EB2  52                        PUSH EDX
00699EB3  8B BD 28 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff28]
00699EB9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00699EBC  0F BF 0C B8               MOVSX ECX,word ptr [EAX + EDI*0x4]
00699EC0  51                        PUSH ECX
00699EC1  E8 12 30 01 00            CALL 0x006aced8
00699EC6  83 C4 40                  ADD ESP,0x40
00699EC9  89 9D A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EBX
00699ECF  8B D8                     MOV EBX,EAX
00699ED1  03 9D 18 FF FF FF         ADD EBX,dword ptr [EBP + 0xffffff18]
00699ED7  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00699EDD  0F BF 54 30 02            MOVSX EDX,word ptr [EAX + ESI*0x1 + 0x2]
00699EE2  52                        PUSH EDX
00699EE3  0F BF 04 30               MOVSX EAX,word ptr [EAX + ESI*0x1]
00699EE7  50                        PUSH EAX
00699EE8  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00699EEE  0F BF 11                  MOVSX EDX,word ptr [ECX]
00699EF1  52                        PUSH EDX
00699EF2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00699EF5  0F BF 0C B8               MOVSX ECX,word ptr [EAX + EDI*0x4]
00699EF9  51                        PUSH ECX
00699EFA  E8 D9 2F 01 00            CALL 0x006aced8
00699EFF  83 C4 10                  ADD ESP,0x10
00699F02  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00699F08  03 DA                     ADD EBX,EDX
00699F0A  03 C3                     ADD EAX,EBX
00699F0C  3B 85 54 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff54]
00699F12  7E 12                     JLE 0x00699f26
00699F14  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00699F17  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00699F1A  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00699F1D  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00699F20  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
LAB_00699f26:
00699F26  8B 85 04 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff04]
00699F2C  48                        DEC EAX
00699F2D  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
00699F33  85 C0                     TEST EAX,EAX
00699F35  0F 8F 6E FD FF FF         JG 0x00699ca9
00699F3B  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00699F3E  39 45 BC                  CMP dword ptr [EBP + -0x44],EAX
00699F41  0F 84 9C 01 00 00         JZ 0x0069a0e3
00699F47  33 C9                     XOR ECX,ECX
00699F49  89 8D D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],ECX
00699F4F  89 8D D4 FE FF FF         MOV dword ptr [EBP + 0xfffffed4],ECX
00699F55  89 8D D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],ECX
00699F5B  66 89 8D DC FE FF FF      MOV word ptr [EBP + 0xfffffedc],CX
00699F62  88 8D DE FE FF FF         MOV byte ptr [EBP + 0xfffffede],CL
00699F68  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
00699F6B  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
00699F6E  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
00699F71  66 8B 08                  MOV CX,word ptr [EAX]
00699F74  66 89 8D D0 FE FF FF      MOV word ptr [EBP + 0xfffffed0],CX
00699F7B  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
00699F7F  66 89 95 D2 FE FF FF      MOV word ptr [EBP + 0xfffffed2],DX
00699F86  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00699F8A  66 89 85 D4 FE FF FF      MOV word ptr [EBP + 0xfffffed4],AX
00699F91  0F BF D2                  MOVSX EDX,DX
00699F94  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00699F9A  0F AF 90 33 58 00 00      IMUL EDX,dword ptr [EAX + 0x5833]
00699FA1  0F BF C9                  MOVSX ECX,CX
00699FA4  03 D1                     ADD EDX,ECX
00699FA6  8B 80 4B 58 00 00         MOV EAX,dword ptr [EAX + 0x584b]
00699FAC  C6 04 02 00               MOV byte ptr [EDX + EAX*0x1],0x0
00699FB0  C7 85 DA FE FF FF DD 00 00 00  MOV dword ptr [EBP + 0xfffffeda],0xdd
00699FBA  C6 85 DE FE FF FF 01      MOV byte ptr [EBP + 0xfffffede],0x1
00699FC1  8D 8D D0 FE FF FF         LEA ECX,[EBP + 0xfffffed0]
00699FC7  51                        PUSH ECX
00699FC8  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00699FCB  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
00699FCE  50                        PUSH EAX
00699FCF  E8 EC 41 01 00            CALL 0x006ae1c0
00699FD4  FF 85 EC FE FF FF         INC dword ptr [EBP + 0xfffffeec]
00699FDA  FF 85 C8 FE FF FF         INC dword ptr [EBP + 0xfffffec8]
00699FE0  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
00699FE6  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
00699FE9  8B 95 20 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff20]
00699FEF  8B 8D F0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffef0]
00699FF5  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
00699FF8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00699FFB  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
0069A001  C7 44 42 06 00 00 00 00   MOV dword ptr [EDX + EAX*0x2 + 0x6],0x0
0069A009  41                        INC ECX
0069A00A  89 8D F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],ECX
0069A010  83 7D 14 01               CMP dword ptr [EBP + 0x14],0x1
0069A014  0F 8E C9 00 00 00         JLE 0x0069a0e3
0069A01A  33 C0                     XOR EAX,EAX
0069A01C  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
0069A022  89 85 D4 FE FF FF         MOV dword ptr [EBP + 0xfffffed4],EAX
0069A028  89 85 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EAX
0069A02E  66 89 85 DC FE FF FF      MOV word ptr [EBP + 0xfffffedc],AX
0069A035  88 85 DE FE FF FF         MOV byte ptr [EBP + 0xfffffede],AL
0069A03B  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
0069A03E  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
0069A041  8D 04 4E                  LEA EAX,[ESI + ECX*0x2]
0069A044  66 8B 08                  MOV CX,word ptr [EAX]
0069A047  66 89 8D D0 FE FF FF      MOV word ptr [EBP + 0xfffffed0],CX
0069A04E  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
0069A052  66 89 95 D2 FE FF FF      MOV word ptr [EBP + 0xfffffed2],DX
0069A059  0F BF DA                  MOVSX EBX,DX
0069A05C  8B 95 BC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffebc]
0069A062  0F AF 9A 33 58 00 00      IMUL EBX,dword ptr [EDX + 0x5833]
0069A069  0F BF C9                  MOVSX ECX,CX
0069A06C  03 D9                     ADD EBX,ECX
0069A06E  8B 92 4B 58 00 00         MOV EDX,dword ptr [EDX + 0x584b]
0069A074  C6 04 13 00               MOV byte ptr [EBX + EDX*0x1],0x0
0069A078  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0069A07C  66 89 85 D4 FE FF FF      MOV word ptr [EBP + 0xfffffed4],AX
0069A083  C7 85 DA FE FF FF DE 00 00 00  MOV dword ptr [EBP + 0xfffffeda],0xde
0069A08D  C6 85 DE FE FF FF 01      MOV byte ptr [EBP + 0xfffffede],0x1
0069A094  8D 8D D0 FE FF FF         LEA ECX,[EBP + 0xfffffed0]
0069A09A  51                        PUSH ECX
0069A09B  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0069A09E  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0069A0A1  50                        PUSH EAX
0069A0A2  E8 19 41 01 00            CALL 0x006ae1c0
0069A0A7  FF 85 EC FE FF FF         INC dword ptr [EBP + 0xfffffeec]
0069A0AD  FF 85 78 FF FF FF         INC dword ptr [EBP + 0xffffff78]
0069A0B3  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
0069A0B9  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
0069A0BC  8B 95 20 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff20]
0069A0C2  8B 8D F0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffef0]
0069A0C8  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
0069A0CB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069A0CE  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
0069A0D4  C7 44 42 06 00 00 00 00   MOV dword ptr [EDX + EAX*0x2 + 0x6],0x0
0069A0DC  41                        INC ECX
0069A0DD  89 8D F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],ECX
LAB_0069a0e3:
0069A0E3  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
0069A0E9  40                        INC EAX
0069A0EA  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
0069A0F0  3B 45 18                  CMP EAX,dword ptr [EBP + 0x18]
0069A0F3  0F 8C 1C F9 FF FF         JL 0x00699a15
LAB_0069a0f9:
0069A0F9  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069A0FC  2B 85 EC FE FF FF         SUB EAX,dword ptr [EBP + 0xfffffeec]
0069A102  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
0069A108  85 C0                     TEST EAX,EAX
0069A10A  0F 8E 2C 05 00 00         JLE 0x0069a63c
0069A110  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0069A117  8B 8D 14 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff14]
0069A11D  8D 34 8D 00 00 00 00      LEA ESI,[ECX*0x4 + 0x0]
0069A124  8B C6                     MOV EAX,ESI
0069A126  83 C0 03                  ADD EAX,0x3
0069A129  24 FC                     AND AL,0xfc
0069A12B  E8 10 39 09 00            CALL 0x0072da40
0069A130  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069A133  8B C4                     MOV EAX,ESP
0069A135  8B D8                     MOV EBX,EAX
0069A137  89 9D E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],EBX
0069A13D  8B C6                     MOV EAX,ESI
0069A13F  83 C0 03                  ADD EAX,0x3
0069A142  24 FC                     AND AL,0xfc
0069A144  E8 F7 38 09 00            CALL 0x0072da40
0069A149  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069A14C  8B C4                     MOV EAX,ESP
0069A14E  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0069A154  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
0069A15A  8D 34 95 00 00 00 00      LEA ESI,[EDX*0x4 + 0x0]
0069A161  8B C6                     MOV EAX,ESI
0069A163  83 C0 03                  ADD EAX,0x3
0069A166  24 FC                     AND AL,0xfc
0069A168  E8 D3 38 09 00            CALL 0x0072da40
0069A16D  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069A170  8B C4                     MOV EAX,ESP
0069A172  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
0069A175  8B C6                     MOV EAX,ESI
0069A177  83 C0 03                  ADD EAX,0x3
0069A17A  24 FC                     AND AL,0xfc
0069A17C  E8 BF 38 09 00            CALL 0x0072da40
0069A181  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069A184  8B C4                     MOV EAX,ESP
0069A186  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0069A189  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0069A190  33 FF                     XOR EDI,EDI
0069A192  89 BD 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDI
0069A198  33 F6                     XOR ESI,ESI
0069A19A  8B 85 14 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff14]
0069A1A0  85 C0                     TEST EAX,EAX
0069A1A2  7E 4E                     JLE 0x0069a1f2
LAB_0069a1a4:
0069A1A4  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0069A1A7  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
0069A1AD  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0069A1B0  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0069A1B3  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
0069A1B6  51                        PUSH ECX
0069A1B7  6A 0F                     PUSH 0xf
0069A1B9  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
0069A1BD  52                        PUSH EDX
0069A1BE  0F BF 00                  MOVSX EAX,word ptr [EAX]
0069A1C1  50                        PUSH EAX
0069A1C2  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
0069A1C8  E8 58 9E D6 FF            CALL 0x00404025
0069A1CD  83 F8 0F                  CMP EAX,0xf
0069A1D0  7E 17                     JLE 0x0069a1e9
0069A1D2  C1 E0 10                  SHL EAX,0x10
0069A1D5  8B CE                     MOV ECX,ESI
0069A1D7  81 E1 FF FF 00 00         AND ECX,0xffff
0069A1DD  0B C1                     OR EAX,ECX
0069A1DF  89 04 BB                  MOV dword ptr [EBX + EDI*0x4],EAX
0069A1E2  47                        INC EDI
0069A1E3  89 BD 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDI
LAB_0069a1e9:
0069A1E9  46                        INC ESI
0069A1EA  3B B5 14 FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff14]
0069A1F0  7C B2                     JL 0x0069a1a4
LAB_0069a1f2:
0069A1F2  85 FF                     TEST EDI,EDI
0069A1F4  0F 8E 42 04 00 00         JLE 0x0069a63c
0069A1FA  C7 85 04 FF FF FF 82 00 00 00  MOV dword ptr [EBP + 0xffffff04],0x82
0069A204  33 DB                     XOR EBX,EBX
0069A206  89 9D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EBX
LAB_0069a20c:
0069A20C  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
0069A212  8B B5 E4 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffee4]
0069A218  8B BD 64 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff64]
0069A21E  F3 A5                     MOVSD.REP ES:EDI,ESI
0069A220  33 D2                     XOR EDX,EDX
0069A222  89 95 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EDX
0069A228  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0069A22B  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
0069A231  33 C0                     XOR EAX,EAX
0069A233  8B 7D 80                  MOV EDI,dword ptr [EBP + -0x80]
0069A236  F3 AB                     STOSD.REP ES:EDI
0069A238  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
LAB_0069a23e:
0069A23E  E8 7D 44 09 00            CALL 0x0072e6c0
0069A243  99                        CDQ
0069A244  F7 BD 4C FF FF FF         IDIV dword ptr [EBP + 0xffffff4c]
0069A24A  8B B5 64 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff64]
0069A250  8B 04 96                  MOV EAX,dword ptr [ESI + EDX*0x4]
0069A253  C1 E8 10                  SHR EAX,0x10
0069A256  85 C0                     TEST EAX,EAX
0069A258  0F 8E C6 00 00 00         JLE 0x0069a324
0069A25E  8B 7D 80                  MOV EDI,dword ptr [EBP + -0x80]
0069A261  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
0069A267  89 14 8F                  MOV dword ptr [EDI + ECX*0x4],EDX
0069A26A  01 45 DC                  ADD dword ptr [EBP + -0x24],EAX
0069A26D  41                        INC ECX
0069A26E  89 8D 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],ECX
0069A274  3B 8D 48 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff48]
0069A27A  0F 8D BC 00 00 00         JGE 0x0069a33c
0069A280  33 FF                     XOR EDI,EDI
0069A282  66 8B 3C 96               MOV DI,word ptr [ESI + EDX*0x4]
0069A286  85 FF                     TEST EDI,EDI
0069A288  0F 8C 96 00 00 00         JL 0x0069a324
0069A28E  3B BD 14 FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff14]
0069A294  0F 8D 8A 00 00 00         JGE 0x0069a324
0069A29A  C7 85 10 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x0
0069A2A4  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
0069A2AA  85 C0                     TEST EAX,EAX
0069A2AC  7E 76                     JLE 0x0069a324
LAB_0069a2ae:
0069A2AE  33 F6                     XOR ESI,ESI
0069A2B0  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0069A2B6  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
0069A2BC  66 8B 34 82               MOV SI,word ptr [EDX + EAX*0x4]
0069A2C0  85 F6                     TEST ESI,ESI
0069A2C2  7C 4B                     JL 0x0069a30f
0069A2C4  3B B5 14 FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff14]
0069A2CA  7D 43                     JGE 0x0069a30f
0069A2CC  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
0069A2CF  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
0069A2D5  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0069A2D8  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
0069A2DB  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
0069A2DE  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
0069A2E2  52                        PUSH EDX
0069A2E3  0F BF 00                  MOVSX EAX,word ptr [EAX]
0069A2E6  50                        PUSH EAX
0069A2E7  0F BF 51 02               MOVSX EDX,word ptr [ECX + 0x2]
0069A2EB  52                        PUSH EDX
0069A2EC  0F BF 01                  MOVSX EAX,word ptr [ECX]
0069A2EF  50                        PUSH EAX
0069A2F0  E8 9B 2C 01 00            CALL 0x006acf90
0069A2F5  83 F8 0F                  CMP EAX,0xf
0069A2F8  7D 15                     JGE 0x0069a30f
0069A2FA  81 E6 FF FF 00 00         AND ESI,0xffff
0069A300  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0069A306  8B 95 10 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff10]
0069A30C  89 34 91                  MOV dword ptr [ECX + EDX*0x4],ESI
LAB_0069a30f:
0069A30F  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
0069A315  40                        INC EAX
0069A316  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
0069A31C  3B 85 4C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff4c]
0069A322  7C 8A                     JL 0x0069a2ae
LAB_0069a324:
0069A324  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
0069A32A  40                        INC EAX
0069A32B  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
0069A331  3D 82 00 00 00            CMP EAX,0x82
0069A336  0F 8C 02 FF FF FF         JL 0x0069a23e
LAB_0069a33c:
0069A33C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0069A33F  39 85 54 FF FF FF         CMP dword ptr [EBP + 0xffffff54],EAX
0069A345  7D 18                     JGE 0x0069a35f
0069A347  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
0069A34D  8B D9                     MOV EBX,ECX
0069A34F  8B 75 80                  MOV ESI,dword ptr [EBP + -0x80]
0069A352  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0069A355  F3 A5                     MOVSD.REP ES:EDI,ESI
0069A357  8B C8                     MOV ECX,EAX
0069A359  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
LAB_0069a35f:
0069A35F  8B 85 04 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff04]
0069A365  48                        DEC EAX
0069A366  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
0069A36C  85 C0                     TEST EAX,EAX
0069A36E  0F 8F 98 FE FF FF         JG 0x0069a20c
0069A374  85 DB                     TEST EBX,EBX
0069A376  0F 84 C0 02 00 00         JZ 0x0069a63c
0069A37C  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
0069A383  8D 34 9D 00 00 00 00      LEA ESI,[EBX*0x4 + 0x0]
0069A38A  8B C6                     MOV EAX,ESI
0069A38C  83 C0 03                  ADD EAX,0x3
0069A38F  24 FC                     AND AL,0xfc
0069A391  E8 AA 36 09 00            CALL 0x0072da40
0069A396  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069A399  8B C4                     MOV EAX,ESP
0069A39B  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
0069A3A1  8B C6                     MOV EAX,ESI
0069A3A3  83 C0 03                  ADD EAX,0x3
0069A3A6  24 FC                     AND AL,0xfc
0069A3A8  E8 93 36 09 00            CALL 0x0072da40
0069A3AD  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069A3B0  8B C4                     MOV EAX,ESP
0069A3B2  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
0069A3B8  8B C3                     MOV EAX,EBX
0069A3BA  0F AF C3                  IMUL EAX,EBX
0069A3BD  C1 E0 02                  SHL EAX,0x2
0069A3C0  83 C0 03                  ADD EAX,0x3
0069A3C3  24 FC                     AND AL,0xfc
0069A3C5  E8 76 36 09 00            CALL 0x0072da40
0069A3CA  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069A3CD  8B C4                     MOV EAX,ESP
0069A3CF  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
0069A3D5  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0069A3DC  33 C9                     XOR ECX,ECX
0069A3DE  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
0069A3E4  85 DB                     TEST EBX,EBX
0069A3E6  7E 73                     JLE 0x0069a45b
LAB_0069a3e8:
0069A3E8  8B F1                     MOV ESI,ECX
0069A3EA  3B CB                     CMP ECX,EBX
0069A3EC  7D 62                     JGE 0x0069a450
LAB_0069a3ee:
0069A3EE  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0069A3F1  8B 0C 8F                  MOV ECX,dword ptr [EDI + ECX*0x4]
0069A3F4  33 C0                     XOR EAX,EAX
0069A3F6  8B 95 E4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee4]
0069A3FC  66 8B 04 8A               MOV AX,word ptr [EDX + ECX*0x4]
0069A400  8B 3C B7                  MOV EDI,dword ptr [EDI + ESI*0x4]
0069A403  33 C9                     XOR ECX,ECX
0069A405  66 8B 0C BA               MOV CX,word ptr [EDX + EDI*0x4]
0069A409  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0069A40C  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
0069A412  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
0069A415  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069A418  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
0069A41B  0F BF 51 02               MOVSX EDX,word ptr [ECX + 0x2]
0069A41F  52                        PUSH EDX
0069A420  0F BF 09                  MOVSX ECX,word ptr [ECX]
0069A423  51                        PUSH ECX
0069A424  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
0069A428  52                        PUSH EDX
0069A429  0F BF 00                  MOVSX EAX,word ptr [EAX]
0069A42C  50                        PUSH EAX
0069A42D  E8 A6 2A 01 00            CALL 0x006aced8
0069A432  83 C4 10                  ADD ESP,0x10
0069A435  8B D3                     MOV EDX,EBX
0069A437  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
0069A43D  0F AF D1                  IMUL EDX,ECX
0069A440  03 D6                     ADD EDX,ESI
0069A442  8B BD 1C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff1c]
0069A448  89 04 97                  MOV dword ptr [EDI + EDX*0x4],EAX
0069A44B  46                        INC ESI
0069A44C  3B F3                     CMP ESI,EBX
0069A44E  7C 9E                     JL 0x0069a3ee
LAB_0069a450:
0069A450  41                        INC ECX
0069A451  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
0069A457  3B CB                     CMP ECX,EBX
0069A459  7C 8D                     JL 0x0069a3e8
LAB_0069a45b:
0069A45B  8B C3                     MOV EAX,EBX
0069A45D  99                        CDQ
0069A45E  2B C2                     SUB EAX,EDX
0069A460  D1 F8                     SAR EAX,0x1
0069A462  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
0069A468  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
0069A46E  8B CB                     MOV ECX,EBX
0069A470  81 E1 01 00 00 80         AND ECX,0x80000001
0069A476  79 05                     JNS 0x0069a47d
0069A478  49                        DEC ECX
0069A479  83 C9 FE                  OR ECX,0xfffffffe
0069A47C  41                        INC ECX
LAB_0069a47d:
0069A47D  74 07                     JZ 0x0069a486
0069A47F  40                        INC EAX
0069A480  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
LAB_0069a486:
0069A486  C7 85 04 FF FF FF 64 00 00 00  MOV dword ptr [EBP + 0xffffff04],0x64
0069A490  C7 85 54 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff54],0x0
0069A49A  8B B5 58 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff58]
LAB_0069a4a0:
0069A4A0  8B CB                     MOV ECX,EBX
0069A4A2  33 C0                     XOR EAX,EAX
0069A4A4  8B FE                     MOV EDI,ESI
0069A4A6  F3 AB                     STOSD.REP ES:EDI
0069A4A8  33 FF                     XOR EDI,EDI
0069A4AA  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
0069A4AD  39 BD C8 FE FF FF         CMP dword ptr [EBP + 0xfffffec8],EDI
0069A4B3  7E 56                     JLE 0x0069a50b
LAB_0069a4b5:
0069A4B5  E8 06 42 09 00            CALL 0x0072e6c0
0069A4BA  99                        CDQ
0069A4BB  F7 FB                     IDIV EBX
0069A4BD  83 3C 96 00               CMP dword ptr [ESI + EDX*0x4],0x0
0069A4C1  75 1C                     JNZ 0x0069a4df
0069A4C3  C7 04 96 DD 00 00 00      MOV dword ptr [ESI + EDX*0x4],0xdd
0069A4CA  EB 36                     JMP 0x0069a502
LAB_0069a4df:
0069A4DF  33 C9                     XOR ECX,ECX
0069A4E1  85 DB                     TEST EBX,EBX
0069A4E3  7E 1D                     JLE 0x0069a502
LAB_0069a4e5:
0069A4E5  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
0069A4E8  3B C3                     CMP EAX,EBX
0069A4EA  7C 02                     JL 0x0069a4ee
0069A4EC  2B C3                     SUB EAX,EBX
LAB_0069a4ee:
0069A4EE  83 3C 86 00               CMP dword ptr [ESI + EAX*0x4],0x0
0069A4F2  74 07                     JZ 0x0069a4fb
0069A4F4  41                        INC ECX
0069A4F5  3B CB                     CMP ECX,EBX
0069A4F7  7C EC                     JL 0x0069a4e5
0069A4F9  EB 07                     JMP 0x0069a502
LAB_0069a4fb:
0069A4FB  C7 04 86 DD 00 00 00      MOV dword ptr [ESI + EAX*0x4],0xdd
LAB_0069a502:
0069A502  47                        INC EDI
0069A503  3B BD C8 FE FF FF         CMP EDI,dword ptr [EBP + 0xfffffec8]
0069A509  7C AA                     JL 0x0069a4b5
LAB_0069a50b:
0069A50B  33 FF                     XOR EDI,EDI
0069A50D  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
0069A513  85 C0                     TEST EAX,EAX
0069A515  7E 43                     JLE 0x0069a55a
LAB_0069a517:
0069A517  E8 A4 41 09 00            CALL 0x0072e6c0
0069A51C  99                        CDQ
0069A51D  F7 FB                     IDIV EBX
0069A51F  83 3C 96 00               CMP dword ptr [ESI + EDX*0x4],0x0
0069A523  75 09                     JNZ 0x0069a52e
0069A525  C7 04 96 DE 00 00 00      MOV dword ptr [ESI + EDX*0x4],0xde
0069A52C  EB 23                     JMP 0x0069a551
LAB_0069a52e:
0069A52E  33 C9                     XOR ECX,ECX
0069A530  85 DB                     TEST EBX,EBX
0069A532  7E 1D                     JLE 0x0069a551
LAB_0069a534:
0069A534  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
0069A537  3B C3                     CMP EAX,EBX
0069A539  7C 02                     JL 0x0069a53d
0069A53B  2B C3                     SUB EAX,EBX
LAB_0069a53d:
0069A53D  83 3C 86 00               CMP dword ptr [ESI + EAX*0x4],0x0
0069A541  74 07                     JZ 0x0069a54a
0069A543  41                        INC ECX
0069A544  3B CB                     CMP ECX,EBX
0069A546  7C EC                     JL 0x0069a534
0069A548  EB 07                     JMP 0x0069a551
LAB_0069a54a:
0069A54A  C7 04 86 DE 00 00 00      MOV dword ptr [ESI + EAX*0x4],0xde
LAB_0069a551:
0069A551  47                        INC EDI
0069A552  3B BD 74 FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff74]
0069A558  7C BD                     JL 0x0069a517
LAB_0069a55a:
0069A55A  33 C9                     XOR ECX,ECX
0069A55C  85 DB                     TEST EBX,EBX
0069A55E  7E 31                     JLE 0x0069a591
0069A560  8B 95 1C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff1c]
LAB_0069a566:
0069A566  8B C1                     MOV EAX,ECX
0069A568  3B CB                     CMP ECX,EBX
0069A56A  7D 20                     JGE 0x0069a58c
LAB_0069a56c:
0069A56C  8B 3C 86                  MOV EDI,dword ptr [ESI + EAX*0x4]
0069A56F  3B 3C 8E                  CMP EDI,dword ptr [ESI + ECX*0x4]
0069A572  75 13                     JNZ 0x0069a587
0069A574  8B F3                     MOV ESI,EBX
0069A576  0F AF F1                  IMUL ESI,ECX
0069A579  03 F0                     ADD ESI,EAX
0069A57B  8B 34 B2                  MOV ESI,dword ptr [EDX + ESI*0x4]
0069A57E  01 75 CC                  ADD dword ptr [EBP + -0x34],ESI
0069A581  8B B5 58 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff58]
LAB_0069a587:
0069A587  40                        INC EAX
0069A588  3B C3                     CMP EAX,EBX
0069A58A  7C E0                     JL 0x0069a56c
LAB_0069a58c:
0069A58C  41                        INC ECX
0069A58D  3B CB                     CMP ECX,EBX
0069A58F  7C D5                     JL 0x0069a566
LAB_0069a591:
0069A591  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0069A594  3B 85 54 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff54]
0069A59A  7C 1C                     JL 0x0069a5b8
0069A59C  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0069A5A2  8B CB                     MOV ECX,EBX
0069A5A4  8B B5 58 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff58]
0069A5AA  8B BD CC FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffecc]
0069A5B0  F3 A5                     MOVSD.REP ES:EDI,ESI
0069A5B2  8B B5 58 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff58]
LAB_0069a5b8:
0069A5B8  FF 8D 04 FF FF FF         DEC dword ptr [EBP + 0xffffff04]
0069A5BE  0F 89 DC FE FF FF         JNS 0x0069a4a0
0069A5C4  33 F6                     XOR ESI,ESI
0069A5C6  85 DB                     TEST EBX,EBX
0069A5C8  7E 72                     JLE 0x0069a63c
LAB_0069a5ca:
0069A5CA  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
0069A5D0  8B 04 B2                  MOV EAX,dword ptr [EDX + ESI*0x4]
0069A5D3  89 85 DA FE FF FF         MOV dword ptr [EBP + 0xfffffeda],EAX
0069A5D9  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0069A5DC  8B 14 B1                  MOV EDX,dword ptr [ECX + ESI*0x4]
0069A5DF  33 C0                     XOR EAX,EAX
0069A5E1  8B 8D E4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee4]
0069A5E7  66 8B 04 91               MOV AX,word ptr [ECX + EDX*0x4]
0069A5EB  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0069A5EE  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
0069A5F4  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0069A5F7  66 8B 08                  MOV CX,word ptr [EAX]
0069A5FA  66 89 8D D0 FE FF FF      MOV word ptr [EBP + 0xfffffed0],CX
0069A601  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
0069A605  66 89 95 D2 FE FF FF      MOV word ptr [EBP + 0xfffffed2],DX
0069A60C  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0069A610  66 89 85 D4 FE FF FF      MOV word ptr [EBP + 0xfffffed4],AX
0069A617  C6 85 DE FE FF FF 02      MOV byte ptr [EBP + 0xfffffede],0x2
0069A61E  8D 8D D0 FE FF FF         LEA ECX,[EBP + 0xfffffed0]
0069A624  51                        PUSH ECX
0069A625  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0069A628  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0069A62B  50                        PUSH EAX
0069A62C  E8 8F 3B 01 00            CALL 0x006ae1c0
0069A631  FF 85 EC FE FF FF         INC dword ptr [EBP + 0xfffffeec]
0069A637  46                        INC ESI
0069A638  3B F3                     CMP ESI,EBX
0069A63A  7C 8E                     JL 0x0069a5ca
LAB_0069a63c:
0069A63C  8B 85 EC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeec]
0069A642  EB 64                     JMP 0x0069a6a8
LAB_0069a6a8:
0069A6A8  8D A5 9C FE FF FF         LEA ESP,[EBP + 0xfffffe9c]
0069A6AE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0069A6B1  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0069A6B8  5F                        POP EDI
0069A6B9  5E                        POP ESI
0069A6BA  5B                        POP EBX
0069A6BB  8B E5                     MOV ESP,EBP
0069A6BD  5D                        POP EBP
0069A6BE  C2 20 00                  RET 0x20
