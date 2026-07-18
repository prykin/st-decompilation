FUN_006f6330:
006F6330  55                        PUSH EBP
006F6331  8B EC                     MOV EBP,ESP
006F6333  83 EC 08                  SUB ESP,0x8
006F6336  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6339  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006F633C  03 C8                     ADD ECX,EAX
006F633E  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F6341  8B D1                     MOV EDX,ECX
006F6343  56                        PUSH ESI
006F6344  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F6347  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006F634A  C1 FA 03                  SAR EDX,0x3
006F634D  03 F2                     ADD ESI,EDX
006F634F  48                        DEC EAX
006F6350  89 75 30                  MOV dword ptr [EBP + 0x30],ESI
006F6353  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F635D  0F 88 49 03 00 00         JS 0x006f66ac
006F6363  53                        PUSH EBX
006F6364  40                        INC EAX
006F6365  57                        PUSH EDI
006F6366  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F6369  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006f636c:
006F636C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F636F  33 D2                     XOR EDX,EDX
006F6371  8A 10                     MOV DL,byte ptr [EAX]
006F6373  40                        INC EAX
006F6374  85 D2                     TEST EDX,EDX
006F6376  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6379  0F 84 03 03 00 00         JZ 0x006f6682
006F637F  83 E1 07                  AND ECX,0x7
006F6382  BB 80 00 00 00            MOV EBX,0x80
006F6387  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006F638A  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F638D  D3 FB                     SAR EBX,CL
LAB_006f638f:
006F638F  F6 C2 80                  TEST DL,0x80
006F6392  8B C2                     MOV EAX,EDX
006F6394  74 34                     JZ 0x006f63ca
006F6396  83 E0 3F                  AND EAX,0x3f
006F6399  3B C6                     CMP EAX,ESI
006F639B  7F 43                     JG 0x006f63e0
006F639D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F63A0  F6 C2 40                  TEST DL,0x40
006F63A3  74 12                     JZ 0x006f63b7
006F63A5  41                        INC ECX
006F63A6  2B F0                     SUB ESI,EAX
006F63A8  8B C1                     MOV EAX,ECX
006F63AA  33 D2                     XOR EDX,EDX
006F63AC  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F63AF  8A 10                     MOV DL,byte ptr [EAX]
006F63B1  40                        INC EAX
006F63B2  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F63B5  EB D8                     JMP 0x006f638f
LAB_006f63b7:
006F63B7  03 C8                     ADD ECX,EAX
006F63B9  2B F0                     SUB ESI,EAX
006F63BB  8B C1                     MOV EAX,ECX
006F63BD  33 D2                     XOR EDX,EDX
006F63BF  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F63C2  8A 10                     MOV DL,byte ptr [EAX]
006F63C4  40                        INC EAX
006F63C5  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F63C8  EB C5                     JMP 0x006f638f
LAB_006f63ca:
006F63CA  83 E0 7F                  AND EAX,0x7f
006F63CD  3B C6                     CMP EAX,ESI
006F63CF  7F 0F                     JG 0x006f63e0
006F63D1  2B F0                     SUB ESI,EAX
006F63D3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F63D6  33 D2                     XOR EDX,EDX
006F63D8  8A 10                     MOV DL,byte ptr [EAX]
006F63DA  40                        INC EAX
006F63DB  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F63DE  EB AF                     JMP 0x006f638f
LAB_006f63e0:
006F63E0  8B CA                     MOV ECX,EDX
006F63E2  2B C6                     SUB EAX,ESI
006F63E4  81 E1 C0 00 00 00         AND ECX,0xc0
006F63EA  80 F9 80                  CMP CL,0x80
006F63ED  75 03                     JNZ 0x006f63f2
006F63EF  01 75 1C                  ADD dword ptr [EBP + 0x1c],ESI
LAB_006f63f2:
006F63F2  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F63F5  3B C6                     CMP EAX,ESI
006F63F7  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F63FA  0F 8F 3E 01 00 00         JG 0x006f653e
006F6400  8B CA                     MOV ECX,EDX
006F6402  81 E1 80 00 00 00         AND ECX,0x80
LAB_006f6408:
006F6408  2B F0                     SUB ESI,EAX
006F640A  85 C9                     TEST ECX,ECX
006F640C  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F640F  0F 84 C5 00 00 00         JZ 0x006f64da
006F6415  F6 C2 40                  TEST DL,0x40
006F6418  74 7A                     JZ 0x006f6494
006F641A  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F641D  33 C9                     XOR ECX,ECX
006F641F  8A 0E                     MOV CL,byte ptr [ESI]
006F6421  46                        INC ESI
006F6422  48                        DEC EAX
006F6423  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F6426  78 3C                     JS 0x006f6464
006F6428  40                        INC EAX
006F6429  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006f642c:
006F642C  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F642F  84 18                     TEST byte ptr [EAX],BL
006F6431  75 11                     JNZ 0x006f6444
006F6433  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F6436  33 C0                     XOR EAX,EAX
006F6438  66 8B 06                  MOV AX,word ptr [ESI]
006F643B  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F643E  3B F0                     CMP ESI,EAX
006F6440  77 02                     JA 0x006f6444
006F6442  88 0F                     MOV byte ptr [EDI],CL
LAB_006f6444:
006F6444  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F6447  83 C0 02                  ADD EAX,0x2
006F644A  47                        INC EDI
006F644B  D0 EB                     SHR BL,0x1
006F644D  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F6450  75 09                     JNZ 0x006f645b
006F6452  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6455  B3 80                     MOV BL,0x80
006F6457  40                        INC EAX
006F6458  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
LAB_006f645b:
006F645B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F645E  48                        DEC EAX
006F645F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006F6462  75 C8                     JNZ 0x006f642c
LAB_006f6464:
006F6464  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
LAB_006f6467:
006F6467  85 F6                     TEST ESI,ESI
006F6469  0F 8E CA 00 00 00         JLE 0x006f6539
006F646F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F6472  33 D2                     XOR EDX,EDX
006F6474  8A 10                     MOV DL,byte ptr [EAX]
006F6476  8B CA                     MOV ECX,EDX
006F6478  81 E1 80 00 00 00         AND ECX,0x80
006F647E  40                        INC EAX
006F647F  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6482  8B C2                     MOV EAX,EDX
006F6484  85 C9                     TEST ECX,ECX
006F6486  0F 84 9D 00 00 00         JZ 0x006f6529
006F648C  83 E0 3F                  AND EAX,0x3f
006F648F  E9 98 00 00 00            JMP 0x006f652c
LAB_006f6494:
006F6494  48                        DEC EAX
006F6495  78 D0                     JS 0x006f6467
006F6497  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006f649a:
006F649A  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F649D  84 19                     TEST byte ptr [ECX],BL
006F649F  75 16                     JNZ 0x006f64b7
006F64A1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F64A4  33 C0                     XOR EAX,EAX
006F64A6  66 8B 01                  MOV AX,word ptr [ECX]
006F64A9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F64AC  3B C8                     CMP ECX,EAX
006F64AE  77 07                     JA 0x006f64b7
006F64B0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F64B3  8A 08                     MOV CL,byte ptr [EAX]
006F64B5  88 0F                     MOV byte ptr [EDI],CL
LAB_006f64b7:
006F64B7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F64BA  83 C1 02                  ADD ECX,0x2
006F64BD  47                        INC EDI
006F64BE  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F64C1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F64C4  41                        INC ECX
006F64C5  D0 EB                     SHR BL,0x1
006F64C7  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F64CA  75 09                     JNZ 0x006f64d5
006F64CC  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F64CF  B3 80                     MOV BL,0x80
006F64D1  40                        INC EAX
006F64D2  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
LAB_006f64d5:
006F64D5  4E                        DEC ESI
006F64D6  75 C2                     JNZ 0x006f649a
006F64D8  EB 8A                     JMP 0x006f6464
LAB_006f64da:
006F64DA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F64DD  03 F8                     ADD EDI,EAX
006F64DF  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006F64E2  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F64E5  33 C9                     XOR ECX,ECX
006F64E7  8A EB                     MOV CH,BL
006F64E9  8B D9                     MOV EBX,ECX
006F64EB  8B C8                     MOV ECX,EAX
006F64ED  83 E1 07                  AND ECX,0x7
006F64F0  D3 EB                     SHR EBX,CL
006F64F2  8B CB                     MOV ECX,EBX
006F64F4  81 F9 80 00 00 00         CMP ECX,0x80
006F64FA  77 19                     JA 0x006f6515
006F64FC  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006F64FF  43                        INC EBX
006F6500  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
006F6503  8A D9                     MOV BL,CL
006F6505  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F6508  C1 F8 03                  SAR EAX,0x3
006F650B  03 C8                     ADD ECX,EAX
006F650D  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006F6510  E9 52 FF FF FF            JMP 0x006f6467
LAB_006f6515:
006F6515  33 DB                     XOR EBX,EBX
006F6517  8A DD                     MOV BL,CH
006F6519  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F651C  C1 F8 03                  SAR EAX,0x3
006F651F  03 C8                     ADD ECX,EAX
006F6521  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006F6524  E9 3E FF FF FF            JMP 0x006f6467
LAB_006f6529:
006F6529  83 E0 7F                  AND EAX,0x7f
LAB_006f652c:
006F652C  3B C6                     CMP EAX,ESI
006F652E  0F 8E D4 FE FF FF         JLE 0x006f6408
006F6534  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6537  EB 05                     JMP 0x006f653e
LAB_006f6539:
006F6539  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F653C  33 C0                     XOR EAX,EAX
LAB_006f653e:
006F653E  2B C6                     SUB EAX,ESI
006F6540  F6 C2 80                  TEST DL,0x80
006F6543  0F 84 B8 00 00 00         JZ 0x006f6601
006F6549  F6 C2 40                  TEST DL,0x40
006F654C  74 64                     JZ 0x006f65b2
006F654E  85 F6                     TEST ESI,ESI
006F6550  0F 8E B6 00 00 00         JLE 0x006f660c
006F6556  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F6559  33 C9                     XOR ECX,ECX
006F655B  8A 0E                     MOV CL,byte ptr [ESI]
006F655D  46                        INC ESI
006F655E  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F6561  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F6564  4E                        DEC ESI
006F6565  0F 88 A1 00 00 00         JS 0x006f660c
006F656B  46                        INC ESI
006F656C  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
LAB_006f656f:
006F656F  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006F6572  84 1E                     TEST byte ptr [ESI],BL
006F6574  75 17                     JNZ 0x006f658d
006F6576  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F6579  33 F6                     XOR ESI,ESI
006F657B  66 8B 37                  MOV SI,word ptr [EDI]
006F657E  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F6581  3B FE                     CMP EDI,ESI
006F6583  77 05                     JA 0x006f658a
006F6585  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F6588  88 0E                     MOV byte ptr [ESI],CL
LAB_006f658a:
006F658A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006f658d:
006F658D  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F6590  83 C6 02                  ADD ESI,0x2
006F6593  47                        INC EDI
006F6594  D0 EB                     SHR BL,0x1
006F6596  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006F6599  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F659C  75 09                     JNZ 0x006f65a7
006F659E  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006F65A1  B3 80                     MOV BL,0x80
006F65A3  46                        INC ESI
006F65A4  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
LAB_006f65a7:
006F65A7  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F65AA  4E                        DEC ESI
006F65AB  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F65AE  75 BF                     JNZ 0x006f656f
006F65B0  EB 5A                     JMP 0x006f660c
LAB_006f65b2:
006F65B2  4E                        DEC ESI
006F65B3  78 57                     JS 0x006f660c
006F65B5  46                        INC ESI
LAB_006f65b6:
006F65B6  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F65B9  84 19                     TEST byte ptr [ECX],BL
006F65BB  75 1E                     JNZ 0x006f65db
006F65BD  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F65C0  33 C9                     XOR ECX,ECX
006F65C2  66 8B 0F                  MOV CX,word ptr [EDI]
006F65C5  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F65C8  3B F9                     CMP EDI,ECX
006F65CA  77 0C                     JA 0x006f65d8
006F65CC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F65CF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F65D2  8A 09                     MOV CL,byte ptr [ECX]
006F65D4  88 0F                     MOV byte ptr [EDI],CL
006F65D6  EB 03                     JMP 0x006f65db
LAB_006f65d8:
006F65D8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006f65db:
006F65DB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F65DE  83 C1 02                  ADD ECX,0x2
006F65E1  47                        INC EDI
006F65E2  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F65E5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F65E8  41                        INC ECX
006F65E9  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F65EC  D0 EB                     SHR BL,0x1
006F65EE  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F65F1  75 09                     JNZ 0x006f65fc
006F65F3  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F65F6  B3 80                     MOV BL,0x80
006F65F8  41                        INC ECX
006F65F9  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
LAB_006f65fc:
006F65FC  4E                        DEC ESI
006F65FD  75 B7                     JNZ 0x006f65b6
006F65FF  EB 0B                     JMP 0x006f660c
LAB_006f6601:
006F6601  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6604  03 FE                     ADD EDI,ESI
006F6606  8D 0C 71                  LEA ECX,[ECX + ESI*0x2]
006F6609  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006f660c:
006F660C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006F660F  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F6612  2B CE                     SUB ECX,ESI
006F6614  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F6617  2B CE                     SUB ECX,ESI
006F6619  3B C1                     CMP EAX,ECX
006F661B  7D 35                     JGE 0x006f6652
LAB_006f661d:
006F661D  81 E2 C0 00 00 00         AND EDX,0xc0
006F6623  2B C8                     SUB ECX,EAX
006F6625  80 FA 80                  CMP DL,0x80
006F6628  75 03                     JNZ 0x006f662d
006F662A  01 45 1C                  ADD dword ptr [EBP + 0x1c],EAX
LAB_006f662d:
006F662D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F6630  33 D2                     XOR EDX,EDX
006F6632  8A 10                     MOV DL,byte ptr [EAX]
006F6634  8B DA                     MOV EBX,EDX
006F6636  80 E3 80                  AND BL,0x80
006F6639  40                        INC EAX
006F663A  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F663D  8B C2                     MOV EAX,EDX
006F663F  84 DB                     TEST BL,BL
006F6641  74 0B                     JZ 0x006f664e
006F6643  83 E0 3F                  AND EAX,0x3f
006F6646  F6 C2 40                  TEST DL,0x40
006F6649  74 03                     JZ 0x006f664e
006F664B  FF 45 1C                  INC dword ptr [EBP + 0x1c]
LAB_006f664e:
006F664E  3B C1                     CMP EAX,ECX
006F6650  7C CB                     JL 0x006f661d
LAB_006f6652:
006F6652  81 E2 C0 00 00 00         AND EDX,0xc0
006F6658  80 FA 80                  CMP DL,0x80
006F665B  75 03                     JNZ 0x006f6660
006F665D  01 4D 1C                  ADD dword ptr [EBP + 0x1c],ECX
LAB_006f6660:
006F6660  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F6663  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F6666  8D 04 36                  LEA EAX,[ESI + ESI*0x1]
006F6669  2B D6                     SUB EDX,ESI
006F666B  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F666E  2B C8                     SUB ECX,EAX
006F6670  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F6673  03 FA                     ADD EDI,EDX
006F6675  03 C1                     ADD EAX,ECX
006F6677  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006F667A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F667D  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F6680  EB 13                     JMP 0x006f6695
LAB_006f6682:
006F6682  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F6685  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F6688  03 FA                     ADD EDI,EDX
006F668A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006F668D  03 C2                     ADD EAX,EDX
006F668F  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6692  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006f6695:
006F6695  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F6698  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F669B  03 F2                     ADD ESI,EDX
006F669D  48                        DEC EAX
006F669E  89 75 30                  MOV dword ptr [EBP + 0x30],ESI
006F66A1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F66A4  0F 85 C2 FC FF FF         JNZ 0x006f636c
006F66AA  5F                        POP EDI
006F66AB  5B                        POP EBX
LAB_006f66ac:
006F66AC  5E                        POP ESI
006F66AD  8B E5                     MOV ESP,EBP
006F66AF  5D                        POP EBP
006F66B0  C2 34 00                  RET 0x34
