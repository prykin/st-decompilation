FUN_005682c0:
005682C0  55                        PUSH EBP
005682C1  8B EC                     MOV EBP,ESP
005682C3  83 EC 68                  SUB ESP,0x68
005682C6  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
005682CC  53                        PUSH EBX
005682CD  56                        PUSH ESI
005682CE  57                        PUSH EDI
005682CF  85 C0                     TEST EAX,EAX
005682D1  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005682D4  0F 84 FE 02 00 00         JZ 0x005685d8
005682DA  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005682DF  8D 55 9C                  LEA EDX,[EBP + -0x64]
005682E2  8D 4D 98                  LEA ECX,[EBP + -0x68]
005682E5  6A 00                     PUSH 0x0
005682E7  52                        PUSH EDX
005682E8  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
005682EB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005682F1  E8 FA 54 1C 00            CALL 0x0072d7f0
005682F6  83 C4 08                  ADD ESP,0x8
005682F9  85 C0                     TEST EAX,EAX
005682FB  0F 85 CF 02 00 00         JNZ 0x005685d0
00568301  A0 63 73 80 00            MOV AL,[0x00807363]
00568306  84 C0                     TEST AL,AL
00568308  74 27                     JZ 0x00568331
0056830A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0056830D  BE 02 00 00 00            MOV ESI,0x2
LAB_00568312:
00568312  57                        PUSH EDI
00568313  56                        PUSH ESI
00568314  E8 C7 99 15 00            CALL 0x006c1ce0
00568319  46                        INC ESI
0056831A  83 FE 20                  CMP ESI,0x20
0056831D  7C F3                     JL 0x00568312
0056831F  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00568322  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00568328  5F                        POP EDI
00568329  5E                        POP ESI
0056832A  5B                        POP EBX
0056832B  8B E5                     MOV ESP,EBP
0056832D  5D                        POP EBP
0056832E  C2 04 00                  RET 0x4
LAB_00568331:
00568331  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
00568334  BB 02 00 00 00            MOV EBX,0x2
00568339  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0056833C  8D B7 27 0E 00 00         LEA ESI,[EDI + 0xe27]
00568342  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
LAB_00568345:
00568345  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00568348  6A 00                     PUSH 0x0
0056834A  50                        PUSH EAX
0056834B  53                        PUSH EBX
0056834C  E8 AF 9B 15 00            CALL 0x006c1f00
00568351  83 7D E4 01               CMP dword ptr [EBP + -0x1c],0x1
00568355  0F 85 50 02 00 00         JNZ 0x005685ab
0056835B  83 FB 04                  CMP EBX,0x4
0056835E  7C 05                     JL 0x00568365
00568360  83 FB 0A                  CMP EBX,0xa
00568363  7E 1C                     JLE 0x00568381
LAB_00568365:
00568365  83 FB 12                  CMP EBX,0x12
00568368  7C 05                     JL 0x0056836f
0056836A  83 FB 14                  CMP EBX,0x14
0056836D  7E 12                     JLE 0x00568381
LAB_0056836f:
0056836F  83 FB 0B                  CMP EBX,0xb
00568372  0F 8C 29 02 00 00         JL 0x005685a1
00568378  83 FB 11                  CMP EBX,0x11
0056837B  0F 8F 20 02 00 00         JG 0x005685a1
LAB_00568381:
00568381  8B 8F E1 10 00 00         MOV ECX,dword ptr [EDI + 0x10e1]
00568387  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0056838A  C1 E1 04                  SHL ECX,0x4
0056838D  8D 82 A0 0F 00 00         LEA EAX,[EDX + 0xfa0]
00568393  8B 5E FC                  MOV EBX,dword ptr [ESI + -0x4]
00568396  8B 91 94 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9794]
0056839C  8B 36                     MOV ESI,dword ptr [ESI]
0056839E  0F AF D0                  IMUL EDX,EAX
005683A1  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005683A6  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005683A9  F7 EA                     IMUL EDX
005683AB  C1 FA 05                  SAR EDX,0x5
005683AE  8B C2                     MOV EAX,EDX
005683B0  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
005683B3  C1 E8 1F                  SHR EAX,0x1f
005683B6  8D 94 02 60 F0 FF FF      LEA EDX,[EDX + EAX*0x1 + 0xfffff060]
005683BD  8B 87 DD 10 00 00         MOV EAX,dword ptr [EDI + 0x10dd]
005683C3  2B C6                     SUB EAX,ESI
005683C5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005683C8  99                        CDQ
005683C9  8B F0                     MOV ESI,EAX
005683CB  8B 87 D9 10 00 00         MOV EAX,dword ptr [EDI + 0x10d9]
005683D1  33 F2                     XOR ESI,EDX
005683D3  2B C3                     SUB EAX,EBX
005683D5  2B F2                     SUB ESI,EDX
005683D7  99                        CDQ
005683D8  33 C2                     XOR EAX,EDX
005683DA  2B C2                     SUB EAX,EDX
005683DC  3B C6                     CMP EAX,ESI
005683DE  8D 50 01                  LEA EDX,[EAX + 0x1]
005683E1  7F 03                     JG 0x005683e6
005683E3  8D 56 01                  LEA EDX,[ESI + 0x1]
LAB_005683e6:
005683E6  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
005683EC  8B 99 88 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9788]
005683F2  3B D3                     CMP EDX,EBX
005683F4  7E 02                     JLE 0x005683f8
005683F6  8B D3                     MOV EDX,EBX
LAB_005683f8:
005683F8  3B 91 90 97 7C 00         CMP EDX,dword ptr [ECX + 0x7c9790]
005683FE  7F 08                     JG 0x00568408
00568400  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00568403  E9 B5 00 00 00            JMP 0x005684bd
LAB_00568408:
00568408  3B C6                     CMP EAX,ESI
0056840A  8D 50 01                  LEA EDX,[EAX + 0x1]
0056840D  7F 03                     JG 0x00568412
0056840F  8D 56 01                  LEA EDX,[ESI + 0x1]
LAB_00568412:
00568412  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
00568418  8B 99 88 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9788]
0056841E  3B D3                     CMP EDX,EBX
00568420  7E 02                     JLE 0x00568424
00568422  8B D3                     MOV EDX,EBX
LAB_00568424:
00568424  3B 91 8C 97 7C 00         CMP EDX,dword ptr [ECX + 0x7c978c]
0056842A  7F 79                     JG 0x005684a5
0056842C  3B C6                     CMP EAX,ESI
0056842E  7E 03                     JLE 0x00568433
00568430  40                        INC EAX
00568431  EB 03                     JMP 0x00568436
LAB_00568433:
00568433  8D 46 01                  LEA EAX,[ESI + 0x1]
LAB_00568436:
00568436  89 87 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EAX
0056843C  8B 91 88 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9788]
00568442  3B C2                     CMP EAX,EDX
00568444  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00568447  7F 03                     JG 0x0056844c
00568449  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0056844c:
0056844C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0056844F  BA A0 0F 00 00            MOV EDX,0xfa0
00568454  2B D3                     SUB EDX,EBX
00568456  B8 56 55 55 55            MOV EAX,0x55555556
0056845B  D1 E2                     SHL EDX,0x1
0056845D  F7 EA                     IMUL EDX
0056845F  8B C2                     MOV EAX,EDX
00568461  8B B1 8C 97 7C 00         MOV ESI,dword ptr [ECX + 0x7c978c]
00568467  C1 E8 1F                  SHR EAX,0x1f
0056846A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0056846D  8B C2                     MOV EAX,EDX
0056846F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00568472  03 C2                     ADD EAX,EDX
00568474  8B D6                     MOV EDX,ESI
00568476  03 C3                     ADD EAX,EBX
00568478  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0056847B  2B D3                     SUB EDX,EBX
0056847D  0F AF C2                  IMUL EAX,EDX
00568480  2B B1 90 97 7C 00         SUB ESI,dword ptr [ECX + 0x7c9790]
00568486  99                        CDQ
00568487  F7 FE                     IDIV ESI
00568489  8B F0                     MOV ESI,EAX
0056848B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056848E  8D 8C 00 C0 E0 FF FF      LEA ECX,[EAX + EAX*0x1 + 0xffffe0c0]
00568495  B8 56 55 55 55            MOV EAX,0x55555556
0056849A  F7 E9                     IMUL ECX
0056849C  8B C2                     MOV EAX,EDX
0056849E  C1 E8 1F                  SHR EAX,0x1f
005684A1  03 D6                     ADD EDX,ESI
005684A3  EB 16                     JMP 0x005684bb
LAB_005684a5:
005684A5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005684A8  B8 56 55 55 55            MOV EAX,0x55555556
005684AD  8D 8C 09 C0 E0 FF FF      LEA ECX,[ECX + ECX*0x1 + 0xffffe0c0]
005684B4  F7 E9                     IMUL ECX
005684B6  8B C2                     MOV EAX,EDX
005684B8  C1 EA 1F                  SHR EDX,0x1f
LAB_005684bb:
005684BB  03 C2                     ADD EAX,EDX
LAB_005684bd:
005684BD  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005684C0  50                        PUSH EAX
005684C1  53                        PUSH EBX
005684C2  E8 19 98 15 00            CALL 0x006c1ce0
005684C7  8B 87 E9 10 00 00         MOV EAX,dword ptr [EDI + 0x10e9]
005684CD  8B 8F ED 10 00 00         MOV ECX,dword ptr [EDI + 0x10ed]
005684D3  0F AF 45 DC               IMUL EAX,dword ptr [EBP + -0x24]
005684D7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005684DA  8D 34 08                  LEA ESI,[EAX + ECX*0x1]
005684DD  8B C6                     MOV EAX,ESI
005684DF  2B C2                     SUB EAX,EDX
005684E1  99                        CDQ
005684E2  33 C2                     XOR EAX,EDX
005684E4  2B C2                     SUB EAX,EDX
005684E6  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005684ED  2B C8                     SUB ECX,EAX
005684EF  B8 67 66 66 66            MOV EAX,0x66666667
005684F4  F7 E9                     IMUL ECX
005684F6  8B 8F E1 10 00 00         MOV ECX,dword ptr [EDI + 0x10e1]
005684FC  C1 FA 02                  SAR EDX,0x2
005684FF  8B C2                     MOV EAX,EDX
00568501  C1 E8 1F                  SHR EAX,0x1f
00568504  03 D0                     ADD EDX,EAX
00568506  C1 E1 04                  SHL ECX,0x4
00568509  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
0056850F  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
00568515  3B D0                     CMP EDX,EAX
00568517  7F 02                     JG 0x0056851b
00568519  8B C2                     MOV EAX,EDX
LAB_0056851b:
0056851B  3B 81 90 97 7C 00         CMP EAX,dword ptr [ECX + 0x7c9790]
00568521  7D 28                     JGE 0x0056854b
00568523  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
00568529  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
0056852F  3B D0                     CMP EDX,EAX
00568531  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00568534  7F 03                     JG 0x00568539
00568536  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00568539:
00568539  B8 E8 03 00 00            MOV EAX,0x3e8
0056853E  99                        CDQ
0056853F  F7 B9 90 97 7C 00         IDIV dword ptr [ECX + 0x7c9790]
00568545  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
00568549  EB 05                     JMP 0x00568550
LAB_0056854b:
0056854B  B8 E8 03 00 00            MOV EAX,0x3e8
LAB_00568550:
00568550  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00568553  89 B7 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],ESI
00568559  3B F2                     CMP ESI,EDX
0056855B  75 11                     JNZ 0x0056856e
0056855D  33 C9                     XOR ECX,ECX
0056855F  0F AF C8                  IMUL ECX,EAX
00568562  51                        PUSH ECX
00568563  53                        PUSH EBX
00568564  E8 17 98 15 00            CALL 0x006c1d80
00568569  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0056856C  EB 3D                     JMP 0x005685ab
LAB_0056856e:
0056856E  8B 8F E5 10 00 00         MOV ECX,dword ptr [EDI + 0x10e5]
00568574  85 C9                     TEST ECX,ECX
00568576  74 0E                     JZ 0x00568586
00568578  83 F9 03                  CMP ECX,0x3
0056857B  74 09                     JZ 0x00568586
0056857D  33 C9                     XOR ECX,ECX
0056857F  3B D6                     CMP EDX,ESI
00568581  0F 9E C1                  SETLE CL
00568584  EB 07                     JMP 0x0056858d
LAB_00568586:
00568586  33 C9                     XOR ECX,ECX
00568588  3B D6                     CMP EDX,ESI
0056858A  0F 9D C1                  SETGE CL
LAB_0056858d:
0056858D  49                        DEC ECX
0056858E  83 E1 02                  AND ECX,0x2
00568591  49                        DEC ECX
00568592  0F AF C8                  IMUL ECX,EAX
00568595  51                        PUSH ECX
00568596  53                        PUSH EBX
00568597  E8 E4 97 15 00            CALL 0x006c1d80
0056859C  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0056859F  EB 0A                     JMP 0x005685ab
LAB_005685a1:
005685A1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005685A4  51                        PUSH ECX
005685A5  53                        PUSH EBX
005685A6  E8 35 97 15 00            CALL 0x006c1ce0
LAB_005685ab:
005685AB  43                        INC EBX
005685AC  83 C6 0C                  ADD ESI,0xc
005685AF  83 FB 20                  CMP EBX,0x20
005685B2  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
005685B5  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
005685B8  0F 8C 87 FD FF FF         JL 0x00568345
005685BE  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005685C1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005685C7  5F                        POP EDI
005685C8  5E                        POP ESI
005685C9  5B                        POP EBX
005685CA  8B E5                     MOV ESP,EBP
005685CC  5D                        POP EBP
005685CD  C2 04 00                  RET 0x4
LAB_005685d0:
005685D0  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
005685D3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_005685d8:
005685D8  5F                        POP EDI
005685D9  5E                        POP ESI
005685DA  5B                        POP EBX
005685DB  8B E5                     MOV ESP,EBP
005685DD  5D                        POP EBP
005685DE  C2 04 00                  RET 0x4
