FUN_006d8260:
006D8260  55                        PUSH EBP
006D8261  8B EC                     MOV EBP,ESP
006D8263  6A FF                     PUSH -0x1
006D8265  68 28 DF 79 00            PUSH 0x79df28
006D826A  68 64 D9 72 00            PUSH 0x72d964
006D826F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006D8275  50                        PUSH EAX
006D8276  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006D827D  81 EC A0 00 00 00         SUB ESP,0xa0
006D8283  53                        PUSH EBX
006D8284  56                        PUSH ESI
006D8285  57                        PUSH EDI
006D8286  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D8289  33 F6                     XOR ESI,ESI
006D828B  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
006D828E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D8291  83 F8 03                  CMP EAX,0x3
006D8294  7D 19                     JGE 0x006d82af
006D8296  6A 34                     PUSH 0x34
006D8298  68 E8 E2 7E 00            PUSH 0x7ee2e8
006D829D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D82A2  50                        PUSH EAX
006D82A3  6A CC                     PUSH -0x34
006D82A5  E8 96 DB FC FF            CALL 0x006a5e40
006D82AA  E9 0D 04 00 00            JMP 0x006d86bc
LAB_006d82af:
006D82AF  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006D82B2  C1 E0 03                  SHL EAX,0x3
006D82B5  83 C0 03                  ADD EAX,0x3
006D82B8  24 FC                     AND AL,0xfc
006D82BA  E8 81 57 05 00            CALL 0x0072da40
006D82BF  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D82C2  8B C4                     MOV EAX,ESP
006D82C4  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006D82C7  83 C8 FF                  OR EAX,0xffffffff
006D82CA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D82CD  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006D82D3  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
006D82D9  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
006D82DF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006D82E5  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
006D82EB  50                        PUSH EAX
006D82EC  68 21 DA 72 00            PUSH 0x72da21
006D82F1  6A 02                     PUSH 0x2
006D82F3  51                        PUSH ECX
006D82F4  E8 F7 54 05 00            CALL 0x0072d7f0
006D82F9  83 C4 10                  ADD ESP,0x10
006D82FC  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D82FF  3B C6                     CMP EAX,ESI
006D8301  0F 85 4A 03 00 00         JNZ 0x006d8651
006D8307  33 DB                     XOR EBX,EBX
006D8309  C7 45 A4 FF FF FF 7F      MOV dword ptr [EBP + -0x5c],0x7fffffff
006D8310  C7 45 D8 01 00 00 80      MOV dword ptr [EBP + -0x28],0x80000001
006D8317  89 75 B8                  MOV dword ptr [EBP + -0x48],ESI
006D831A  33 FF                     XOR EDI,EDI
006D831C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D831F  85 C0                     TEST EAX,EAX
006D8321  0F 8E 0D 01 00 00         JLE 0x006d8434
006D8327  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D832A  89 95 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDX
LAB_006d8330:
006D8330  6A 28                     PUSH 0x28
006D8332  E8 D9 28 FD FF            CALL 0x006aac10
006D8337  8B F0                     MOV ESI,EAX
006D8339  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
006D833F  8B 08                     MOV ECX,dword ptr [EAX]
006D8341  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
006D8344  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006D8347  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
006D834A  47                        INC EDI
006D834B  89 BD 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDI
006D8351  8B C7                     MOV EAX,EDI
006D8353  99                        CDQ
006D8354  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
006D8357  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D835A  8B 0C D0                  MOV ECX,dword ptr [EAX + EDX*0x8]
006D835D  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
006D8360  8B 44 D0 04               MOV EAX,dword ptr [EAX + EDX*0x8 + 0x4]
006D8364  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
006D8367  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006D836A  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006D836D  3B CA                     CMP ECX,EDX
006D836F  75 10                     JNZ 0x006d8381
006D8371  39 46 0C                  CMP dword ptr [ESI + 0xc],EAX
006D8374  75 0B                     JNZ 0x006d8381
006D8376  56                        PUSH ESI
006D8377  E8 14 DB FC FF            CALL 0x006a5e90
006D837C  E9 A0 00 00 00            JMP 0x006d8421
LAB_006d8381:
006D8381  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
006D8384  3B F8                     CMP EDI,EAX
006D8386  7F 14                     JG 0x006d839c
006D8388  75 04                     JNZ 0x006d838e
006D838A  3B CA                     CMP ECX,EDX
006D838C  7F 0E                     JG 0x006d839c
LAB_006d838e:
006D838E  3B F8                     CMP EDI,EAX
006D8390  7D 16                     JGE 0x006d83a8
006D8392  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006D8395  0C 04                     OR AL,0x4
006D8397  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006D839A  EB 0C                     JMP 0x006d83a8
LAB_006d839c:
006D839C  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006D839F  89 7E 14                  MOV dword ptr [ESI + 0x14],EDI
006D83A2  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
006D83A5  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
LAB_006d83a8:
006D83A8  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
006D83AB  39 7D A4                  CMP dword ptr [EBP + -0x5c],EDI
006D83AE  7E 03                     JLE 0x006d83b3
006D83B0  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
LAB_006d83b3:
006D83B3  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006D83B6  39 45 D8                  CMP dword ptr [EBP + -0x28],EAX
006D83B9  7D 03                     JGE 0x006d83be
006D83BB  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006d83be:
006D83BE  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006D83C1  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006D83C4  3B D0                     CMP EDX,EAX
006D83C6  7D 07                     JGE 0x006d83cf
006D83C8  B9 01 00 00 00            MOV ECX,0x1
006D83CD  EB 08                     JMP 0x006d83d7
LAB_006d83cf:
006D83CF  8B CA                     MOV ECX,EDX
006D83D1  2B C8                     SUB ECX,EAX
006D83D3  F7 D9                     NEG ECX
006D83D5  1B C9                     SBB ECX,ECX
LAB_006d83d7:
006D83D7  89 4E 24                  MOV dword ptr [ESI + 0x24],ECX
006D83DA  2B C2                     SUB EAX,EDX
006D83DC  99                        CDQ
006D83DD  33 C2                     XOR EAX,EDX
006D83DF  2B C2                     SUB EAX,EDX
006D83E1  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006D83E4  2B CF                     SUB ECX,EDI
006D83E6  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006D83E9  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
006D83EC  8D 3C 09                  LEA EDI,[ECX + ECX*0x1]
006D83EF  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
006D83F2  2B D1                     SUB EDX,ECX
006D83F4  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
006D83F7  3B C8                     CMP ECX,EAX
006D83F9  7C 08                     JL 0x006d8403
006D83FB  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006D83FE  0C 01                     OR AL,0x1
006D8400  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_006d8403:
006D8403  85 C9                     TEST ECX,ECX
006D8405  75 08                     JNZ 0x006d840f
006D8407  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006D840A  0C 02                     OR AL,0x2
006D840C  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_006d840f:
006D840F  56                        PUSH ESI
006D8410  8D 55 B8                  LEA EDX,[EBP + -0x48]
006D8413  52                        PUSH EDX
006D8414  E8 F7 14 FE FF            CALL 0x006b9910
006D8419  8B DE                     MOV EBX,ESI
006D841B  8B BD 50 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff50]
LAB_006d8421:
006D8421  83 85 54 FF FF FF 08      ADD dword ptr [EBP + 0xffffff54],0x8
006D8428  3B 7D 0C                  CMP EDI,dword ptr [EBP + 0xc]
006D842B  0F 8C FF FE FF FF         JL 0x006d8330
006D8431  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
LAB_006d8434:
006D8434  8B CE                     MOV ECX,ESI
006D8436  85 F6                     TEST ESI,ESI
006D8438  74 25                     JZ 0x006d845f
LAB_006d843a:
006D843A  F6 43 04 04               TEST byte ptr [EBX + 0x4],0x4
006D843E  74 17                     JZ 0x006d8457
006D8440  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006D8443  A8 06                     TEST AL,0x6
006D8445  75 10                     JNZ 0x006d8457
006D8447  0C 08                     OR AL,0x8
006D8449  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
006D844C  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006D844F  0C 08                     OR AL,0x8
006D8451  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006D8454  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
LAB_006d8457:
006D8457  8B D9                     MOV EBX,ECX
006D8459  8B 09                     MOV ECX,dword ptr [ECX]
006D845B  85 C9                     TEST ECX,ECX
006D845D  75 DB                     JNZ 0x006d843a
LAB_006d845f:
006D845F  33 FF                     XOR EDI,EDI
006D8461  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006D8464  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006D8467  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006D846A  3B 55 D8                  CMP EDX,dword ptr [EBP + -0x28]
006D846D  0F 8F CD 01 00 00         JG 0x006d8640
006D8473  EB 06                     JMP 0x006d847b
LAB_006d8475:
006D8475  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
006D8478  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_006d847b:
006D847B  3B 55 A4                  CMP EDX,dword ptr [EBP + -0x5c]
006D847E  75 37                     JNZ 0x006d84b7
006D8480  8D 4D B8                  LEA ECX,[EBP + -0x48]
006D8483  8B C6                     MOV EAX,ESI
006D8485  C7 45 A4 FF FF FF 7F      MOV dword ptr [EBP + -0x5c],0x7fffffff
006D848C  85 F6                     TEST ESI,ESI
006D848E  74 27                     JZ 0x006d84b7
LAB_006d8490:
006D8490  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
006D8493  3B F2                     CMP ESI,EDX
006D8495  7F 10                     JG 0x006d84a7
006D8497  8B 30                     MOV ESI,dword ptr [EAX]
006D8499  89 31                     MOV dword ptr [ECX],ESI
006D849B  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006D849E  89 30                     MOV dword ptr [EAX],ESI
006D84A0  8B F8                     MOV EDI,EAX
006D84A2  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006D84A5  EB 0A                     JMP 0x006d84b1
LAB_006d84a7:
006D84A7  39 75 A4                  CMP dword ptr [EBP + -0x5c],ESI
006D84AA  7E 03                     JLE 0x006d84af
006D84AC  89 75 A4                  MOV dword ptr [EBP + -0x5c],ESI
LAB_006d84af:
006D84AF  8B C8                     MOV ECX,EAX
LAB_006d84b1:
006D84B1  8B 01                     MOV EAX,dword ptr [ECX]
006D84B3  85 C0                     TEST EAX,EAX
006D84B5  75 D9                     JNZ 0x006d8490
LAB_006d84b7:
006D84B7  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
006D84BE  8D 45 E4                  LEA EAX,[EBP + -0x1c]
006D84C1  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006D84C4  8B F7                     MOV ESI,EDI
006D84C6  85 FF                     TEST EDI,EDI
006D84C8  0F 84 0D 01 00 00         JZ 0x006d85db
LAB_006d84ce:
006D84CE  3B 56 14                  CMP EDX,dword ptr [ESI + 0x14]
006D84D1  75 0A                     JNZ 0x006d84dd
006D84D3  F6 46 04 0A               TEST byte ptr [ESI + 0x4],0xa
006D84D7  0F 84 D9 00 00 00         JZ 0x006d85b6
LAB_006d84dd:
006D84DD  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006D84E0  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006D84E3  8B DA                     MOV EBX,EDX
006D84E5  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006D84E8  85 C0                     TEST EAX,EAX
006D84EA  7E 44                     JLE 0x006d8530
006D84EC  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
006D84EF  85 C0                     TEST EAX,EAX
006D84F1  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006D84F4  7C 1E                     JL 0x006d8514
LAB_006d84f6:
006D84F6  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
006D84F9  2B D9                     SUB EBX,ECX
006D84FB  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
006D84FE  8B C3                     MOV EAX,EBX
006D8500  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
006D8503  8D 7B 01                  LEA EDI,[EBX + 0x1]
006D8506  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
006D8509  85 C0                     TEST EAX,EAX
006D850B  7E 23                     JLE 0x006d8530
006D850D  3B 5E 10                  CMP EBX,dword ptr [ESI + 0x10]
006D8510  7C E4                     JL 0x006d84f6
006D8512  EB 1C                     JMP 0x006d8530
LAB_006d8514:
006D8514  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
006D8517  2B D9                     SUB EBX,ECX
006D8519  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
006D851C  8B C3                     MOV EAX,EBX
006D851E  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
006D8521  8D 7B FF                  LEA EDI,[EBX + -0x1]
006D8524  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
006D8527  85 C0                     TEST EAX,EAX
006D8529  7E 05                     JLE 0x006d8530
006D852B  3B 5E 10                  CMP EBX,dword ptr [ESI + 0x10]
006D852E  7F E4                     JG 0x006d8514
LAB_006d8530:
006D8530  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
006D8533  33 C0                     XOR EAX,EAX
006D8535  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D8538  85 C9                     TEST ECX,ECX
006D853A  7E 4E                     JLE 0x006d858a
LAB_006d853c:
006D853C  8B 0F                     MOV ECX,dword ptr [EDI]
006D853E  3B D1                     CMP EDX,ECX
006D8540  7C 12                     JL 0x006d8554
006D8542  75 05                     JNZ 0x006d8549
006D8544  3B 5F 04                  CMP EBX,dword ptr [EDI + 0x4]
006D8547  7C 0B                     JL 0x006d8554
LAB_006d8549:
006D8549  40                        INC EAX
006D854A  83 C7 08                  ADD EDI,0x8
006D854D  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
006D8550  7C EA                     JL 0x006d853c
006D8552  EB 36                     JMP 0x006d858a
LAB_006d8554:
006D8554  F6 46 04 02               TEST byte ptr [ESI + 0x4],0x2
006D8558  8B C8                     MOV ECX,EAX
006D855A  74 12                     JZ 0x006d856e
006D855C  C1 E1 1D                  SHL ECX,0x1d
006D855F  2B C8                     SUB ECX,EAX
006D8561  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
006D8564  C1 E1 03                  SHL ECX,0x3
006D8567  51                        PUSH ECX
006D8568  57                        PUSH EDI
006D8569  8D 57 10                  LEA EDX,[EDI + 0x10]
006D856C  EB 10                     JMP 0x006d857e
LAB_006d856e:
006D856E  C1 E1 1D                  SHL ECX,0x1d
006D8571  2B C8                     SUB ECX,EAX
006D8573  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
006D8576  C1 E1 03                  SHL ECX,0x3
006D8579  51                        PUSH ECX
006D857A  57                        PUSH EDI
006D857B  8D 57 08                  LEA EDX,[EDI + 0x8]
LAB_006d857e:
006D857E  52                        PUSH EDX
006D857F  E8 EC 54 05 00            CALL 0x0072da70
006D8584  83 C4 0C                  ADD ESP,0xc
006D8587  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
LAB_006d858a:
006D858A  89 17                     MOV dword ptr [EDI],EDX
006D858C  89 5F 04                  MOV dword ptr [EDI + 0x4],EBX
006D858F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D8592  41                        INC ECX
006D8593  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006D8596  F6 46 04 02               TEST byte ptr [ESI + 0x4],0x2
006D859A  74 0E                     JZ 0x006d85aa
006D859C  83 C7 08                  ADD EDI,0x8
006D859F  89 17                     MOV dword ptr [EDI],EDX
006D85A1  89 5F 04                  MOV dword ptr [EDI + 0x4],EBX
006D85A4  8B C1                     MOV EAX,ECX
006D85A6  40                        INC EAX
006D85A7  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006d85aa:
006D85AA  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006D85AD  01 46 18                  ADD dword ptr [ESI + 0x18],EAX
006D85B0  FF 46 0C                  INC dword ptr [ESI + 0xc]
006D85B3  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
LAB_006d85b6:
006D85B6  3B 56 14                  CMP EDX,dword ptr [ESI + 0x14]
006D85B9  75 13                     JNZ 0x006d85ce
006D85BB  8B 0E                     MOV ECX,dword ptr [ESI]
006D85BD  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006D85C0  89 0A                     MOV dword ptr [EDX],ECX
006D85C2  56                        PUSH ESI
006D85C3  E8 C8 D8 FC FF            CALL 0x006a5e90
006D85C8  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
006D85CB  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
LAB_006d85ce:
006D85CE  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
006D85D1  8B 36                     MOV ESI,dword ptr [ESI]
006D85D3  85 F6                     TEST ESI,ESI
006D85D5  0F 85 F3 FE FF FF         JNZ 0x006d84ce
LAB_006d85db:
006D85DB  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
006D85DE  8B 06                     MOV EAX,dword ptr [ESI]
006D85E0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D85E3  49                        DEC ECX
006D85E4  85 C9                     TEST ECX,ECX
006D85E6  7E 4B                     JLE 0x006d8633
006D85E8  83 C6 0C                  ADD ESI,0xc
006D85EB  8D 79 01                  LEA EDI,[ECX + 0x1]
006D85EE  D1 EF                     SHR EDI,0x1
LAB_006d85f0:
006D85F0  8B 4E F4                  MOV ECX,dword ptr [ESI + -0xc]
006D85F3  3B C1                     CMP EAX,ECX
006D85F5  7D 02                     JGE 0x006d85f9
006D85F7  8B C1                     MOV EAX,ECX
LAB_006d85f9:
006D85F9  8B 0E                     MOV ECX,dword ptr [ESI]
006D85FB  3B C1                     CMP EAX,ECX
006D85FD  7F 2E                     JG 0x006d862d
006D85FF  52                        PUSH EDX
006D8600  51                        PUSH ECX
006D8601  52                        PUSH EDX
006D8602  50                        PUSH EAX
006D8603  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D8606  52                        PUSH EDX
006D8607  FF 55 10                  CALL dword ptr [EBP + 0x10]
006D860A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006D860D  85 C0                     TEST EAX,EAX
006D860F  74 17                     JZ 0x006d8628
006D8611  68 D5 00 00 00            PUSH 0xd5
006D8616  68 E8 E2 7E 00            PUSH 0x7ee2e8
006D861B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006D8621  51                        PUSH ECX
006D8622  50                        PUSH EAX
006D8623  E8 18 D8 FC FF            CALL 0x006a5e40
LAB_006d8628:
006D8628  8B 06                     MOV EAX,dword ptr [ESI]
006D862A  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
LAB_006d862d:
006D862D  83 C6 10                  ADD ESI,0x10
006D8630  4F                        DEC EDI
006D8631  75 BD                     JNZ 0x006d85f0
LAB_006d8633:
006D8633  42                        INC EDX
006D8634  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006D8637  3B 55 D8                  CMP EDX,dword ptr [EBP + -0x28]
006D863A  0F 8E 35 FE FF FF         JLE 0x006d8475
LAB_006d8640:
006D8640  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
006D8646  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006D864C  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
006D864F  EB 11                     JMP 0x006d8662
LAB_006d8651:
006D8651  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
006D8657  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006D865D  8B F0                     MOV ESI,EAX
006D865F  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
LAB_006d8662:
006D8662  8D 55 B8                  LEA EDX,[EBP + -0x48]
006D8665  52                        PUSH EDX
006D8666  E8 25 12 FE FF            CALL 0x006b9890
006D866B  8D 45 E4                  LEA EAX,[EBP + -0x1c]
006D866E  50                        PUSH EAX
006D866F  E8 1C 12 FE FF            CALL 0x006b9890
006D8674  85 F6                     TEST ESI,ESI
006D8676  74 1B                     JZ 0x006d8693
006D8678  68 E8 00 00 00            PUSH 0xe8
006D867D  68 E8 E2 7E 00            PUSH 0x7ee2e8
006D8682  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006D8688  51                        PUSH ECX
006D8689  56                        PUSH ESI
006D868A  E8 B1 D7 FC FF            CALL 0x006a5e40
006D868F  8B C6                     MOV EAX,ESI
006D8691  EB 29                     JMP 0x006d86bc
LAB_006d8693:
006D8693  33 C0                     XOR EAX,EAX
006D8695  EB 25                     JMP 0x006d86bc
LAB_006d86bc:
006D86BC  8D A5 44 FF FF FF         LEA ESP,[EBP + 0xffffff44]
006D86C2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D86C5  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D86CC  5F                        POP EDI
006D86CD  5E                        POP ESI
006D86CE  5B                        POP EBX
006D86CF  8B E5                     MOV ESP,EBP
006D86D1  5D                        POP EBP
006D86D2  C2 10 00                  RET 0x10
