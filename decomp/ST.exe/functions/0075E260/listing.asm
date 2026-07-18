FUN_0075e260:
0075E260  55                        PUSH EBP
0075E261  8B EC                     MOV EBP,ESP
0075E263  83 EC 20                  SUB ESP,0x20
0075E266  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075E269  53                        PUSH EBX
0075E26A  56                        PUSH ESI
0075E26B  57                        PUSH EDI
0075E26C  8B 8A B2 01 00 00         MOV ECX,dword ptr [EDX + 0x1b2]
0075E272  8B 82 32 01 00 00         MOV EAX,dword ptr [EDX + 0x132]
0075E278  8B 52 68                  MOV EDX,dword ptr [EDX + 0x68]
0075E27B  8B 71 10                  MOV ESI,dword ptr [ECX + 0x10]
0075E27E  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0075E281  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
0075E284  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0075E287  8B 71 18                  MOV ESI,dword ptr [ECX + 0x18]
0075E28A  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
0075E28D  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0075E290  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0075E293  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075E296  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075E299  D1 EA                     SHR EDX,0x1
0075E29B  8B 39                     MOV EDI,dword ptr [ECX]
0075E29D  8B 1C F7                  MOV EBX,dword ptr [EDI + ESI*0x8]
0075E2A0  8D 3C F7                  LEA EDI,[EDI + ESI*0x8]
0075E2A3  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075E2A6  8B 7F 04                  MOV EDI,dword ptr [EDI + 0x4]
0075E2A9  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0075E2AC  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
0075E2AF  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0075E2B2  8B 3C B7                  MOV EDI,dword ptr [EDI + ESI*0x4]
0075E2B5  8B 1C B1                  MOV EBX,dword ptr [ECX + ESI*0x4]
0075E2B8  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0075E2BB  8B 0E                     MOV ECX,dword ptr [ESI]
0075E2BD  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
0075E2C0  0F 84 03 01 00 00         JZ 0x0075e3c9
0075E2C6  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
LAB_0075e2c9:
0075E2C9  33 D2                     XOR EDX,EDX
0075E2CB  83 C1 03                  ADD ECX,0x3
0075E2CE  8A 17                     MOV DL,byte ptr [EDI]
0075E2D0  47                        INC EDI
0075E2D1  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075E2D4  33 D2                     XOR EDX,EDX
0075E2D6  8A 13                     MOV DL,byte ptr [EBX]
0075E2D8  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0075E2DB  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0075E2DE  43                        INC EBX
0075E2DF  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0075E2E2  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E2E5  8B 3C 97                  MOV EDI,dword ptr [EDI + EDX*0x4]
0075E2E8  83 C1 03                  ADD ECX,0x3
0075E2EB  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
0075E2EE  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0075E2F1  83 C6 03                  ADD ESI,0x3
0075E2F4  8B 3C 9F                  MOV EDI,dword ptr [EDI + EBX*0x4]
0075E2F7  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0075E2FA  03 3C 93                  ADD EDI,dword ptr [EBX + EDX*0x4]
0075E2FD  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0075E300  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E303  C1 FF 10                  SAR EDI,0x10
0075E306  8B 14 9A                  MOV EDX,dword ptr [EDX + EBX*0x4]
0075E309  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075E30C  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075E30F  33 D2                     XOR EDX,EDX
0075E311  8A 13                     MOV DL,byte ptr [EBX]
0075E313  43                        INC EBX
0075E314  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075E317  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075E31A  03 DA                     ADD EBX,EDX
0075E31C  8A 1C 03                  MOV BL,byte ptr [EBX + EAX*0x1]
0075E31F  88 59 FC                  MOV byte ptr [ECX + -0x4],BL
0075E322  8D 1C 3A                  LEA EBX,[EDX + EDI*0x1]
0075E325  8A 1C 03                  MOV BL,byte ptr [EBX + EAX*0x1]
0075E328  88 59 FB                  MOV byte ptr [ECX + -0x5],BL
0075E32B  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E32E  03 D3                     ADD EDX,EBX
0075E330  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075E333  8A 14 02                  MOV DL,byte ptr [EDX + EAX*0x1]
0075E336  88 51 FA                  MOV byte ptr [ECX + -0x6],DL
0075E339  33 D2                     XOR EDX,EDX
0075E33B  8A 13                     MOV DL,byte ptr [EBX]
0075E33D  43                        INC EBX
0075E33E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075E341  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075E344  03 DA                     ADD EBX,EDX
0075E346  8A 1C 03                  MOV BL,byte ptr [EBX + EAX*0x1]
0075E349  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
0075E34C  8D 1C 3A                  LEA EBX,[EDX + EDI*0x1]
0075E34F  8A 1C 03                  MOV BL,byte ptr [EBX + EAX*0x1]
0075E352  88 59 FE                  MOV byte ptr [ECX + -0x2],BL
0075E355  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E358  03 D3                     ADD EDX,EBX
0075E35A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075E35D  8A 14 02                  MOV DL,byte ptr [EDX + EAX*0x1]
0075E360  88 51 FD                  MOV byte ptr [ECX + -0x3],DL
0075E363  33 D2                     XOR EDX,EDX
0075E365  8A 13                     MOV DL,byte ptr [EBX]
0075E367  43                        INC EBX
0075E368  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0075E36B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075E36E  03 DA                     ADD EBX,EDX
0075E370  8A 1C 03                  MOV BL,byte ptr [EBX + EAX*0x1]
0075E373  88 5E FF                  MOV byte ptr [ESI + -0x1],BL
0075E376  8D 1C 3A                  LEA EBX,[EDX + EDI*0x1]
0075E379  8A 1C 03                  MOV BL,byte ptr [EBX + EAX*0x1]
0075E37C  88 5E FE                  MOV byte ptr [ESI + -0x2],BL
0075E37F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E382  03 D3                     ADD EDX,EBX
0075E384  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075E387  8A 14 02                  MOV DL,byte ptr [EDX + EAX*0x1]
0075E38A  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
0075E38D  33 D2                     XOR EDX,EDX
0075E38F  8A 13                     MOV DL,byte ptr [EBX]
0075E391  43                        INC EBX
0075E392  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0075E395  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075E398  03 DA                     ADD EBX,EDX
0075E39A  8A 1C 03                  MOV BL,byte ptr [EBX + EAX*0x1]
0075E39D  03 FA                     ADD EDI,EDX
0075E39F  88 5E 02                  MOV byte ptr [ESI + 0x2],BL
0075E3A2  83 C6 03                  ADD ESI,0x3
0075E3A5  8A 1C 07                  MOV BL,byte ptr [EDI + EAX*0x1]
0075E3A8  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075E3AB  03 D7                     ADD EDX,EDI
0075E3AD  88 5E FE                  MOV byte ptr [ESI + -0x2],BL
0075E3B0  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0075E3B3  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0075E3B6  8A 14 02                  MOV DL,byte ptr [EDX + EAX*0x1]
0075E3B9  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
0075E3BC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075E3BF  4A                        DEC EDX
0075E3C0  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0075E3C3  0F 85 00 FF FF FF         JNZ 0x0075e2c9
LAB_0075e3c9:
0075E3C9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075E3CC  F6 42 68 01               TEST byte ptr [EDX + 0x68],0x1
0075E3D0  74 78                     JZ 0x0075e44a
0075E3D2  33 D2                     XOR EDX,EDX
0075E3D4  8A 17                     MOV DL,byte ptr [EDI]
0075E3D6  8B FA                     MOV EDI,EDX
0075E3D8  33 D2                     XOR EDX,EDX
0075E3DA  8A 13                     MOV DL,byte ptr [EBX]
0075E3DC  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0075E3DF  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0075E3E2  8B 1C 93                  MOV EBX,dword ptr [EBX + EDX*0x4]
0075E3E5  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0075E3E8  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0075E3EB  8B 3C BB                  MOV EDI,dword ptr [EBX + EDI*0x4]
0075E3EE  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0075E3F1  03 3C 93                  ADD EDI,dword ptr [EBX + EDX*0x4]
0075E3F4  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0075E3F7  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E3FA  C1 FF 10                  SAR EDI,0x10
0075E3FD  8B 14 9A                  MOV EDX,dword ptr [EDX + EBX*0x4]
0075E400  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075E403  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075E406  33 D2                     XOR EDX,EDX
0075E408  8A 13                     MOV DL,byte ptr [EBX]
0075E40A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075E40D  03 DA                     ADD EBX,EDX
0075E40F  8A 1C 03                  MOV BL,byte ptr [EBX + EAX*0x1]
0075E412  88 59 02                  MOV byte ptr [ECX + 0x2],BL
0075E415  8D 1C 3A                  LEA EBX,[EDX + EDI*0x1]
0075E418  8A 1C 03                  MOV BL,byte ptr [EBX + EAX*0x1]
0075E41B  88 59 01                  MOV byte ptr [ECX + 0x1],BL
0075E41E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E421  03 D3                     ADD EDX,EBX
0075E423  8A 14 02                  MOV DL,byte ptr [EDX + EAX*0x1]
0075E426  88 11                     MOV byte ptr [ECX],DL
0075E428  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075E42B  33 C9                     XOR ECX,ECX
0075E42D  8A 0A                     MOV CL,byte ptr [EDX]
0075E42F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075E432  03 D1                     ADD EDX,ECX
0075E434  8A 14 02                  MOV DL,byte ptr [EDX + EAX*0x1]
0075E437  88 56 02                  MOV byte ptr [ESI + 0x2],DL
0075E43A  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
0075E43D  03 CB                     ADD ECX,EBX
0075E43F  8A 14 02                  MOV DL,byte ptr [EDX + EAX*0x1]
0075E442  88 56 01                  MOV byte ptr [ESI + 0x1],DL
0075E445  8A 04 01                  MOV AL,byte ptr [ECX + EAX*0x1]
0075E448  88 06                     MOV byte ptr [ESI],AL
LAB_0075e44a:
0075E44A  5F                        POP EDI
0075E44B  5E                        POP ESI
0075E44C  5B                        POP EBX
0075E44D  8B E5                     MOV ESP,EBP
0075E44F  5D                        POP EBP
0075E450  C2 10 00                  RET 0x10
