FUN_006f81d0:
006F81D0  55                        PUSH EBP
006F81D1  8B EC                     MOV EBP,ESP
006F81D3  51                        PUSH ECX
006F81D4  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
006F81D7  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006F81DA  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006F81DD  03 C8                     ADD ECX,EAX
006F81DF  8B C1                     MOV EAX,ECX
006F81E1  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F81EB  C1 F8 03                  SAR EAX,0x3
006F81EE  03 D0                     ADD EDX,EAX
006F81F0  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006F81F3  48                        DEC EAX
006F81F4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F81F7  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
006F81FA  0F 88 8F 03 00 00         JS 0x006f858f
006F8200  53                        PUSH EBX
006F8201  56                        PUSH ESI
006F8202  40                        INC EAX
006F8203  57                        PUSH EDI
006F8204  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F8207  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
LAB_006f820a:
006F820A  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006F820D  33 DB                     XOR EBX,EBX
006F820F  8A 18                     MOV BL,byte ptr [EAX]
006F8211  40                        INC EAX
006F8212  85 DB                     TEST EBX,EBX
006F8214  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006F8217  0F 84 3C 03 00 00         JZ 0x006f8559
006F821D  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F8220  89 55 44                  MOV dword ptr [EBP + 0x44],EDX
006F8223  83 E1 07                  AND ECX,0x7
006F8226  BA 80 00 00 00            MOV EDX,0x80
006F822B  D3 FA                     SAR EDX,CL
LAB_006f822d:
006F822D  F6 C3 80                  TEST BL,0x80
006F8230  8B C3                     MOV EAX,EBX
006F8232  74 34                     JZ 0x006f8268
006F8234  83 E0 3F                  AND EAX,0x3f
006F8237  3B C6                     CMP EAX,ESI
006F8239  7F 43                     JG 0x006f827e
006F823B  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006F823E  F6 C3 40                  TEST BL,0x40
006F8241  74 12                     JZ 0x006f8255
006F8243  41                        INC ECX
006F8244  2B F0                     SUB ESI,EAX
006F8246  8B C1                     MOV EAX,ECX
006F8248  33 DB                     XOR EBX,EBX
006F824A  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006F824D  8A 18                     MOV BL,byte ptr [EAX]
006F824F  40                        INC EAX
006F8250  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006F8253  EB D8                     JMP 0x006f822d
LAB_006f8255:
006F8255  03 C8                     ADD ECX,EAX
006F8257  2B F0                     SUB ESI,EAX
006F8259  8B C1                     MOV EAX,ECX
006F825B  33 DB                     XOR EBX,EBX
006F825D  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006F8260  8A 18                     MOV BL,byte ptr [EAX]
006F8262  40                        INC EAX
006F8263  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006F8266  EB C5                     JMP 0x006f822d
LAB_006f8268:
006F8268  83 E0 7F                  AND EAX,0x7f
006F826B  3B C6                     CMP EAX,ESI
006F826D  7F 0F                     JG 0x006f827e
006F826F  2B F0                     SUB ESI,EAX
006F8271  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006F8274  33 DB                     XOR EBX,EBX
006F8276  8A 18                     MOV BL,byte ptr [EAX]
006F8278  40                        INC EAX
006F8279  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006F827C  EB AF                     JMP 0x006f822d
LAB_006f827e:
006F827E  8B CB                     MOV ECX,EBX
006F8280  2B C6                     SUB EAX,ESI
006F8282  81 E1 C0 00 00 00         AND ECX,0xc0
006F8288  80 F9 80                  CMP CL,0x80
006F828B  75 03                     JNZ 0x006f8290
006F828D  01 75 24                  ADD dword ptr [EBP + 0x24],ESI
LAB_006f8290:
006F8290  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F8293  3B C6                     CMP EAX,ESI
006F8295  0F 8F 51 01 00 00         JG 0x006f83ec
006F829B  8B CB                     MOV ECX,EBX
006F829D  81 E1 80 00 00 00         AND ECX,0x80
LAB_006f82a3:
006F82A3  2B F0                     SUB ESI,EAX
006F82A5  85 C9                     TEST ECX,ECX
006F82A7  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006F82AA  0F 84 C1 00 00 00         JZ 0x006f8371
006F82B0  F6 C3 40                  TEST BL,0x40
006F82B3  74 5F                     JZ 0x006f8314
006F82B5  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006F82B8  41                        INC ECX
006F82B9  48                        DEC EAX
006F82BA  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006F82BD  0F 88 F2 00 00 00         JS 0x006f83b5
006F82C3  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006f82c6:
006F82C6  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
006F82C9  84 10                     TEST byte ptr [EAX],DL
006F82CB  75 1E                     JNZ 0x006f82eb
006F82CD  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F82D0  33 C9                     XOR ECX,ECX
006F82D2  66 8B 08                  MOV CX,word ptr [EAX]
006F82D5  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006F82D8  3B C1                     CMP EAX,ECX
006F82DA  77 0F                     JA 0x006f82eb
006F82DC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F82DF  33 C9                     XOR ECX,ECX
006F82E1  8A 08                     MOV CL,byte ptr [EAX]
006F82E3  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F82E6  8A 0C 01                  MOV CL,byte ptr [ECX + EAX*0x1]
006F82E9  88 0F                     MOV byte ptr [EDI],CL
LAB_006f82eb:
006F82EB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F82EE  83 C1 02                  ADD ECX,0x2
006F82F1  47                        INC EDI
006F82F2  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006F82F5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F82F8  41                        INC ECX
006F82F9  D0 EA                     SHR DL,0x1
006F82FB  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F82FE  75 09                     JNZ 0x006f8309
006F8300  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
006F8303  B2 80                     MOV DL,0x80
006F8305  40                        INC EAX
006F8306  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
LAB_006f8309:
006F8309  4E                        DEC ESI
006F830A  75 BA                     JNZ 0x006f82c6
006F830C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F830F  E9 A1 00 00 00            JMP 0x006f83b5
LAB_006f8314:
006F8314  48                        DEC EAX
006F8315  0F 88 9A 00 00 00         JS 0x006f83b5
006F831B  8D 70 01                  LEA ESI,[EAX + 0x1]
006F831E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006F8321  03 C6                     ADD EAX,ESI
006F8323  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
LAB_006f8326:
006F8326  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
006F8329  84 10                     TEST byte ptr [EAX],DL
006F832B  75 1E                     JNZ 0x006f834b
006F832D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F8330  33 C9                     XOR ECX,ECX
006F8332  66 8B 08                  MOV CX,word ptr [EAX]
006F8335  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006F8338  3B C1                     CMP EAX,ECX
006F833A  77 0F                     JA 0x006f834b
006F833C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F833F  33 C9                     XOR ECX,ECX
006F8341  8A 08                     MOV CL,byte ptr [EAX]
006F8343  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F8346  8A 0C 01                  MOV CL,byte ptr [ECX + EAX*0x1]
006F8349  88 0F                     MOV byte ptr [EDI],CL
LAB_006f834b:
006F834B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F834E  83 C1 02                  ADD ECX,0x2
006F8351  47                        INC EDI
006F8352  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006F8355  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F8358  41                        INC ECX
006F8359  D0 EA                     SHR DL,0x1
006F835B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F835E  75 09                     JNZ 0x006f8369
006F8360  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
006F8363  B2 80                     MOV DL,0x80
006F8365  40                        INC EAX
006F8366  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
LAB_006f8369:
006F8369  4E                        DEC ESI
006F836A  75 BA                     JNZ 0x006f8326
006F836C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F836F  EB 44                     JMP 0x006f83b5
LAB_006f8371:
006F8371  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F8374  03 F8                     ADD EDI,EAX
006F8376  03 C8                     ADD ECX,EAX
006F8378  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F837B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F837E  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006F8381  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006F8384  33 C9                     XOR ECX,ECX
006F8386  8A EA                     MOV CH,DL
006F8388  8B D1                     MOV EDX,ECX
006F838A  8B C8                     MOV ECX,EAX
006F838C  83 E1 07                  AND ECX,0x7
006F838F  D3 EA                     SHR EDX,CL
006F8391  8B CA                     MOV ECX,EDX
006F8393  81 F9 80 00 00 00         CMP ECX,0x80
006F8399  77 0B                     JA 0x006f83a6
006F839B  8B 55 44                  MOV EDX,dword ptr [EBP + 0x44]
006F839E  42                        INC EDX
006F839F  89 55 44                  MOV dword ptr [EBP + 0x44],EDX
006F83A2  8A D1                     MOV DL,CL
006F83A4  EB 04                     JMP 0x006f83aa
LAB_006f83a6:
006F83A6  33 D2                     XOR EDX,EDX
006F83A8  8A D5                     MOV DL,CH
LAB_006f83aa:
006F83AA  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006F83AD  C1 F8 03                  SAR EAX,0x3
006F83B0  03 C8                     ADD ECX,EAX
006F83B2  89 4D 44                  MOV dword ptr [EBP + 0x44],ECX
LAB_006f83b5:
006F83B5  85 F6                     TEST ESI,ESI
006F83B7  7E 2E                     JLE 0x006f83e7
006F83B9  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006F83BC  33 DB                     XOR EBX,EBX
006F83BE  8A 18                     MOV BL,byte ptr [EAX]
006F83C0  8B CB                     MOV ECX,EBX
006F83C2  81 E1 80 00 00 00         AND ECX,0x80
006F83C8  40                        INC EAX
006F83C9  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006F83CC  8B C3                     MOV EAX,EBX
006F83CE  85 C9                     TEST ECX,ECX
006F83D0  74 05                     JZ 0x006f83d7
006F83D2  83 E0 3F                  AND EAX,0x3f
006F83D5  EB 03                     JMP 0x006f83da
LAB_006f83d7:
006F83D7  83 E0 7F                  AND EAX,0x7f
LAB_006f83da:
006F83DA  3B C6                     CMP EAX,ESI
006F83DC  0F 8E C1 FE FF FF         JLE 0x006f82a3
006F83E2  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F83E5  EB 05                     JMP 0x006f83ec
LAB_006f83e7:
006F83E7  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F83EA  33 C0                     XOR EAX,EAX
LAB_006f83ec:
006F83EC  2B C6                     SUB EAX,ESI
006F83EE  F6 C3 80                  TEST BL,0x80
006F83F1  0F 84 CC 00 00 00         JZ 0x006f84c3
006F83F7  F6 C3 40                  TEST BL,0x40
006F83FA  74 68                     JZ 0x006f8464
006F83FC  85 F6                     TEST ESI,ESI
006F83FE  0F 8E D2 00 00 00         JLE 0x006f84d6
006F8404  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006F8407  41                        INC ECX
006F8408  4E                        DEC ESI
006F8409  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006F840C  0F 88 C4 00 00 00         JS 0x006f84d6
006F8412  46                        INC ESI
006F8413  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_006f8416:
006F8416  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006F8419  84 11                     TEST byte ptr [ECX],DL
006F841B  75 1E                     JNZ 0x006f843b
006F841D  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F8420  33 C9                     XOR ECX,ECX
006F8422  66 8B 0E                  MOV CX,word ptr [ESI]
006F8425  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006F8428  3B F1                     CMP ESI,ECX
006F842A  77 0F                     JA 0x006f843b
006F842C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F842F  33 C9                     XOR ECX,ECX
006F8431  8A 0E                     MOV CL,byte ptr [ESI]
006F8433  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006F8436  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006F8439  88 0F                     MOV byte ptr [EDI],CL
LAB_006f843b:
006F843B  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F843E  83 C6 02                  ADD ESI,0x2
006F8441  47                        INC EDI
006F8442  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
006F8445  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F8448  46                        INC ESI
006F8449  D0 EA                     SHR DL,0x1
006F844B  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006F844E  75 09                     JNZ 0x006f8459
006F8450  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006F8453  B2 80                     MOV DL,0x80
006F8455  41                        INC ECX
006F8456  89 4D 44                  MOV dword ptr [EBP + 0x44],ECX
LAB_006f8459:
006F8459  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F845C  49                        DEC ECX
006F845D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006F8460  75 B4                     JNZ 0x006f8416
006F8462  EB 72                     JMP 0x006f84d6
LAB_006f8464:
006F8464  4E                        DEC ESI
006F8465  78 6F                     JS 0x006f84d6
006F8467  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006F846A  46                        INC ESI
006F846B  03 CE                     ADD ECX,ESI
006F846D  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
LAB_006f8470:
006F8470  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006F8473  84 11                     TEST byte ptr [ECX],DL
006F8475  75 26                     JNZ 0x006f849d
006F8477  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F847A  33 C9                     XOR ECX,ECX
006F847C  66 8B 0F                  MOV CX,word ptr [EDI]
006F847F  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006F8482  3B F9                     CMP EDI,ECX
006F8484  77 14                     JA 0x006f849a
006F8486  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F8489  33 C9                     XOR ECX,ECX
006F848B  8A 0F                     MOV CL,byte ptr [EDI]
006F848D  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006F8490  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006F8493  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F8496  88 0F                     MOV byte ptr [EDI],CL
006F8498  EB 03                     JMP 0x006f849d
LAB_006f849a:
006F849A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006f849d:
006F849D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F84A0  83 C1 02                  ADD ECX,0x2
006F84A3  47                        INC EDI
006F84A4  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006F84A7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F84AA  41                        INC ECX
006F84AB  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F84AE  D0 EA                     SHR DL,0x1
006F84B0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F84B3  75 09                     JNZ 0x006f84be
006F84B5  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006F84B8  B2 80                     MOV DL,0x80
006F84BA  41                        INC ECX
006F84BB  89 4D 44                  MOV dword ptr [EBP + 0x44],ECX
LAB_006f84be:
006F84BE  4E                        DEC ESI
006F84BF  75 AF                     JNZ 0x006f8470
006F84C1  EB 13                     JMP 0x006f84d6
LAB_006f84c3:
006F84C3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F84C6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F84C9  03 FE                     ADD EDI,ESI
006F84CB  03 CE                     ADD ECX,ESI
006F84CD  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F84D0  8D 0C 72                  LEA ECX,[EDX + ESI*0x2]
006F84D3  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006f84d6:
006F84D6  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006F84D9  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F84DC  2B CE                     SUB ECX,ESI
006F84DE  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F84E1  2B CE                     SUB ECX,ESI
006F84E3  3B C1                     CMP EAX,ECX
006F84E5  7D 35                     JGE 0x006f851c
LAB_006f84e7:
006F84E7  81 E3 C0 00 00 00         AND EBX,0xc0
006F84ED  2B C8                     SUB ECX,EAX
006F84EF  80 FB 80                  CMP BL,0x80
006F84F2  75 03                     JNZ 0x006f84f7
006F84F4  01 45 24                  ADD dword ptr [EBP + 0x24],EAX
LAB_006f84f7:
006F84F7  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006F84FA  33 DB                     XOR EBX,EBX
006F84FC  8A 18                     MOV BL,byte ptr [EAX]
006F84FE  8B D3                     MOV EDX,EBX
006F8500  80 E2 80                  AND DL,0x80
006F8503  40                        INC EAX
006F8504  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006F8507  8B C3                     MOV EAX,EBX
006F8509  84 D2                     TEST DL,DL
006F850B  74 0B                     JZ 0x006f8518
006F850D  83 E0 3F                  AND EAX,0x3f
006F8510  F6 C3 40                  TEST BL,0x40
006F8513  74 03                     JZ 0x006f8518
006F8515  FF 45 24                  INC dword ptr [EBP + 0x24]
LAB_006f8518:
006F8518  3B C1                     CMP EAX,ECX
006F851A  7C CB                     JL 0x006f84e7
LAB_006f851c:
006F851C  81 E3 C0 00 00 00         AND EBX,0xc0
006F8522  80 FB 80                  CMP BL,0x80
006F8525  75 03                     JNZ 0x006f852a
006F8527  01 4D 24                  ADD dword ptr [EBP + 0x24],ECX
LAB_006f852a:
006F852A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F852D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F8530  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F8533  2B C6                     SUB EAX,ESI
006F8535  03 F8                     ADD EDI,EAX
006F8537  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F853A  2B CE                     SUB ECX,ESI
006F853C  8D 14 36                  LEA EDX,[ESI + ESI*0x1]
006F853F  03 D9                     ADD EBX,ECX
006F8541  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F8544  2B C2                     SUB EAX,EDX
006F8546  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006F8549  03 C8                     ADD ECX,EAX
006F854B  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F854E  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006F8551  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F8554  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006F8557  EB 1E                     JMP 0x006f8577
LAB_006f8559:
006F8559  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F855C  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F855F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F8562  03 F8                     ADD EDI,EAX
006F8564  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F8567  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F856A  03 D8                     ADD EBX,EAX
006F856C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F856F  03 F0                     ADD ESI,EAX
006F8571  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006F8574  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
LAB_006f8577:
006F8577  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F857A  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006F857D  03 D6                     ADD EDX,ESI
006F857F  48                        DEC EAX
006F8580  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
006F8583  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006F8586  0F 85 7E FC FF FF         JNZ 0x006f820a
006F858C  5F                        POP EDI
006F858D  5E                        POP ESI
006F858E  5B                        POP EBX
LAB_006f858f:
006F858F  8B E5                     MOV ESP,EBP
006F8591  5D                        POP EBP
006F8592  C2 40 00                  RET 0x40
