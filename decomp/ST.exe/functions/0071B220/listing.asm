FUN_0071b220:
0071B220  55                        PUSH EBP
0071B221  8B EC                     MOV EBP,ESP
0071B223  81 EC 84 00 00 00         SUB ESP,0x84
0071B229  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071B22E  53                        PUSH EBX
0071B22F  56                        PUSH ESI
0071B230  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0071B233  57                        PUSH EDI
0071B234  8D 55 80                  LEA EDX,[EBP + -0x80]
0071B237  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
0071B23D  6A 00                     PUSH 0x0
0071B23F  52                        PUSH EDX
0071B240  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0071B246  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071B24C  E8 9F 25 01 00            CALL 0x0072d7f0
0071B251  8B F0                     MOV ESI,EAX
0071B253  83 C4 08                  ADD ESP,0x8
0071B256  85 F6                     TEST ESI,ESI
0071B258  0F 85 7B 02 00 00         JNZ 0x0071b4d9
0071B25E  8B 0D 78 6D 85 00         MOV ECX,dword ptr [0x00856d78]
0071B264  8D 45 EC                  LEA EAX,[EBP + -0x14]
0071B267  50                        PUSH EAX
0071B268  51                        PUSH ECX
0071B269  FF 15 58 BE 85 00         CALL dword ptr [0x0085be58]
0071B26F  85 C0                     TEST EAX,EAX
0071B271  75 1A                     JNZ 0x0071b28d
0071B273  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071B279  6A 30                     PUSH 0x30
0071B27B  68 2C 09 7F 00            PUSH 0x7f092c
0071B280  52                        PUSH EDX
0071B281  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0071B287  50                        PUSH EAX
0071B288  E8 B3 AB F8 FF            CALL 0x006a5e40
LAB_0071b28d:
0071B28D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0071B290  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0071B293  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0071B296  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0071B299  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0071B29C  2B D0                     SUB EDX,EAX
0071B29E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0071B2A1  8D 5E 18                  LEA EBX,[ESI + 0x18]
0071B2A4  2B C1                     SUB EAX,ECX
0071B2A6  89 4E 38                  MOV dword ptr [ESI + 0x38],ECX
0071B2A9  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
0071B2AC  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
0071B2AF  8B 0D 70 6D 85 00         MOV ECX,dword ptr [0x00856d70]
0071B2B5  6A 00                     PUSH 0x0
0071B2B7  53                        PUSH EBX
0071B2B8  68 00 07 00 00            PUSH 0x700
0071B2BD  51                        PUSH ECX
0071B2BE  E8 DD 23 01 00            CALL 0x0072d6a0
0071B2C3  85 C0                     TEST EAX,EAX
0071B2C5  74 14                     JZ 0x0071b2db
0071B2C7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071B2CD  6A 32                     PUSH 0x32
0071B2CF  68 2C 09 7F 00            PUSH 0x7f092c
0071B2D4  52                        PUSH EDX
0071B2D5  50                        PUSH EAX
0071B2D6  E8 65 AB F8 FF            CALL 0x006a5e40
LAB_0071b2db:
0071B2DB  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0071B2DE  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
0071B2E1  99                        CDQ
0071B2E2  2B C2                     SUB EAX,EDX
0071B2E4  8B 7E 38                  MOV EDI,dword ptr [ESI + 0x38]
0071B2E7  D1 F8                     SAR EAX,0x1
0071B2E9  03 C1                     ADD EAX,ECX
0071B2EB  6A 00                     PUSH 0x0
0071B2ED  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0071B2F0  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0071B2F3  99                        CDQ
0071B2F4  2B C2                     SUB EAX,EDX
0071B2F6  D1 F8                     SAR EAX,0x1
0071B2F8  03 C7                     ADD EAX,EDI
0071B2FA  8D 7E 20                  LEA EDI,[ESI + 0x20]
0071B2FD  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0071B300  8B 03                     MOV EAX,dword ptr [EBX]
0071B302  57                        PUSH EDI
0071B303  68 B8 EE 79 00            PUSH 0x79eeb8
0071B308  8B 08                     MOV ECX,dword ptr [EAX]
0071B30A  50                        PUSH EAX
0071B30B  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0071B30E  85 C0                     TEST EAX,EAX
0071B310  74 14                     JZ 0x0071b326
0071B312  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071B318  6A 36                     PUSH 0x36
0071B31A  68 2C 09 7F 00            PUSH 0x7f092c
0071B31F  52                        PUSH EDX
0071B320  50                        PUSH EAX
0071B321  E8 1A AB F8 FF            CALL 0x006a5e40
LAB_0071b326:
0071B326  8B 07                     MOV EAX,dword ptr [EDI]
0071B328  8B 15 78 6D 85 00         MOV EDX,dword ptr [0x00856d78]
0071B32E  6A 05                     PUSH 0x5
0071B330  52                        PUSH EDX
0071B331  8B 08                     MOV ECX,dword ptr [EAX]
0071B333  50                        PUSH EAX
0071B334  FF 51 34                  CALL dword ptr [ECX + 0x34]
0071B337  85 C0                     TEST EAX,EAX
0071B339  74 14                     JZ 0x0071b34f
0071B33B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0071B341  6A 3C                     PUSH 0x3c
0071B343  68 2C 09 7F 00            PUSH 0x7f092c
0071B348  51                        PUSH ECX
0071B349  50                        PUSH EAX
0071B34A  E8 F1 AA F8 FF            CALL 0x006a5e40
LAB_0071b34f:
0071B34F  8B 07                     MOV EAX,dword ptr [EDI]
0071B351  68 90 E3 79 00            PUSH 0x79e390
0071B356  50                        PUSH EAX
0071B357  8B 10                     MOV EDX,dword ptr [EAX]
0071B359  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0071B35C  85 C0                     TEST EAX,EAX
0071B35E  74 14                     JZ 0x0071b374
0071B360  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0071B366  6A 3E                     PUSH 0x3e
0071B368  68 2C 09 7F 00            PUSH 0x7f092c
0071B36D  51                        PUSH ECX
0071B36E  50                        PUSH EAX
0071B36F  E8 CC AA F8 FF            CALL 0x006a5e40
LAB_0071b374:
0071B374  8B 3F                     MOV EDI,dword ptr [EDI]
0071B376  8D 45 C0                  LEA EAX,[EBP + -0x40]
0071B379  C7 45 C0 2C 00 00 00      MOV dword ptr [EBP + -0x40],0x2c
0071B380  50                        PUSH EAX
0071B381  8B 17                     MOV EDX,dword ptr [EDI]
0071B383  57                        PUSH EDI
0071B384  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0071B387  85 C0                     TEST EAX,EAX
0071B389  74 14                     JZ 0x0071b39f
0071B38B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0071B391  6A 42                     PUSH 0x42
0071B393  68 2C 09 7F 00            PUSH 0x7f092c
0071B398  51                        PUSH ECX
0071B399  50                        PUSH EAX
0071B39A  E8 A1 AA F8 FF            CALL 0x006a5e40
LAB_0071b39f:
0071B39F  8A 4D C4                  MOV CL,byte ptr [EBP + -0x3c]
0071B3A2  B8 01 00 00 00            MOV EAX,0x1
0071B3A7  84 C8                     TEST AL,CL
0071B3A9  74 06                     JZ 0x0071b3b1
0071B3AB  83 7D CC 02               CMP dword ptr [EBP + -0x34],0x2
0071B3AF  77 02                     JA 0x0071b3b3
LAB_0071b3b1:
0071B3B1  33 C0                     XOR EAX,EAX
LAB_0071b3b3:
0071B3B3  85 C0                     TEST EAX,EAX
0071B3B5  89 46 5C                  MOV dword ptr [ESI + 0x5c],EAX
0071B3B8  74 07                     JZ 0x0071b3c1
0071B3BA  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0071B3BD  4A                        DEC EDX
0071B3BE  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
LAB_0071b3c1:
0071B3C1  8B 03                     MOV EAX,dword ptr [EBX]
0071B3C3  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
0071B3C6  6A 00                     PUSH 0x0
0071B3C8  57                        PUSH EDI
0071B3C9  8B 08                     MOV ECX,dword ptr [EAX]
0071B3CB  68 A8 EE 79 00            PUSH 0x79eea8
0071B3D0  50                        PUSH EAX
0071B3D1  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0071B3D4  85 C0                     TEST EAX,EAX
0071B3D6  74 14                     JZ 0x0071b3ec
0071B3D8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071B3DE  6A 48                     PUSH 0x48
0071B3E0  68 2C 09 7F 00            PUSH 0x7f092c
0071B3E5  52                        PUSH EDX
0071B3E6  50                        PUSH EAX
0071B3E7  E8 54 AA F8 FF            CALL 0x006a5e40
LAB_0071b3ec:
0071B3EC  8B 07                     MOV EAX,dword ptr [EDI]
0071B3EE  68 78 E3 79 00            PUSH 0x79e378
0071B3F3  50                        PUSH EAX
0071B3F4  8B 08                     MOV ECX,dword ptr [EAX]
0071B3F6  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0071B3F9  85 C0                     TEST EAX,EAX
0071B3FB  74 14                     JZ 0x0071b411
0071B3FD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071B403  6A 49                     PUSH 0x49
0071B405  68 2C 09 7F 00            PUSH 0x7f092c
0071B40A  52                        PUSH EDX
0071B40B  50                        PUSH EAX
0071B40C  E8 2F AA F8 FF            CALL 0x006a5e40
LAB_0071b411:
0071B411  8B 3F                     MOV EDI,dword ptr [EDI]
0071B413  8B 0D 78 6D 85 00         MOV ECX,dword ptr [0x00856d78]
0071B419  6A 06                     PUSH 0x6
0071B41B  51                        PUSH ECX
0071B41C  8B 07                     MOV EAX,dword ptr [EDI]
0071B41E  57                        PUSH EDI
0071B41F  FF 50 34                  CALL dword ptr [EAX + 0x34]
0071B422  85 C0                     TEST EAX,EAX
0071B424  74 14                     JZ 0x0071b43a
0071B426  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071B42C  6A 4A                     PUSH 0x4a
0071B42E  68 2C 09 7F 00            PUSH 0x7f092c
0071B433  52                        PUSH EDX
0071B434  50                        PUSH EAX
0071B435  E8 06 AA F8 FF            CALL 0x006a5e40
LAB_0071b43a:
0071B43A  8D 5E 68                  LEA EBX,[ESI + 0x68]
0071B43D  6A 00                     PUSH 0x0
0071B43F  53                        PUSH EBX
0071B440  6A 00                     PUSH 0x0
0071B442  6A 16                     PUSH 0x16
0071B444  FF 15 68 BE 85 00         CALL dword ptr [0x0085be68]
0071B44A  85 C0                     TEST EAX,EAX
0071B44C  75 19                     JNZ 0x0071b467
0071B44E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071B453  6A 4D                     PUSH 0x4d
0071B455  68 2C 09 7F 00            PUSH 0x7f092c
0071B45A  50                        PUSH EAX
0071B45B  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0071B461  50                        PUSH EAX
0071B462  E8 D9 A9 F8 FF            CALL 0x006a5e40
LAB_0071b467:
0071B467  8D 7E 6C                  LEA EDI,[ESI + 0x6c]
0071B46A  6A 00                     PUSH 0x0
0071B46C  57                        PUSH EDI
0071B46D  6A 00                     PUSH 0x0
0071B46F  6A 0A                     PUSH 0xa
0071B471  FF 15 68 BE 85 00         CALL dword ptr [0x0085be68]
0071B477  85 C0                     TEST EAX,EAX
0071B479  75 1A                     JNZ 0x0071b495
0071B47B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0071B481  6A 4E                     PUSH 0x4e
0071B483  68 2C 09 7F 00            PUSH 0x7f092c
0071B488  51                        PUSH ECX
0071B489  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0071B48F  50                        PUSH EAX
0071B490  E8 AB A9 F8 FF            CALL 0x006a5e40
LAB_0071b495:
0071B495  8B 03                     MOV EAX,dword ptr [EBX]
0071B497  8B 0F                     MOV ECX,dword ptr [EDI]
0071B499  40                        INC EAX
0071B49A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0071B49D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0071B4A0  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0071B4A3  B8 E8 03 00 00            MOV EAX,0x3e8
0071B4A8  D1 E2                     SHL EDX,0x1
0071B4AA  89 13                     MOV dword ptr [EBX],EDX
0071B4AC  41                        INC ECX
0071B4AD  33 D2                     XOR EDX,EDX
0071B4AF  F7 F1                     DIV ECX
0071B4B1  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0071B4B4  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0071B4B7  52                        PUSH EDX
0071B4B8  6A 02                     PUSH 0x2
0071B4BA  6A 04                     PUSH 0x4
0071B4BC  6A 06                     PUSH 0x6
0071B4BE  89 07                     MOV dword ptr [EDI],EAX
0071B4C0  E8 CB 8D FC FF            CALL 0x006e4290
0071B4C5  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0071B4CB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071B4D0  33 C0                     XOR EAX,EAX
0071B4D2  5F                        POP EDI
0071B4D3  5E                        POP ESI
0071B4D4  5B                        POP EBX
0071B4D5  8B E5                     MOV ESP,EBP
0071B4D7  5D                        POP EBP
0071B4D8  C3                        RET
LAB_0071b4d9:
0071B4D9  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
0071B4DF  68 10 09 7F 00            PUSH 0x7f0910
0071B4E4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071B4E9  56                        PUSH ESI
0071B4EA  6A 00                     PUSH 0x0
0071B4EC  6A 57                     PUSH 0x57
0071B4EE  68 2C 09 7F 00            PUSH 0x7f092c
0071B4F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071B4F9  E8 D2 1F F9 FF            CALL 0x006ad4d0
0071B4FE  83 C4 18                  ADD ESP,0x18
0071B501  85 C0                     TEST EAX,EAX
0071B503  74 01                     JZ 0x0071b506
0071B505  CC                        INT3
LAB_0071b506:
0071B506  6A 58                     PUSH 0x58
0071B508  68 2C 09 7F 00            PUSH 0x7f092c
0071B50D  6A 00                     PUSH 0x0
0071B50F  56                        PUSH ESI
0071B510  E8 2B A9 F8 FF            CALL 0x006a5e40
0071B515  8B C6                     MOV EAX,ESI
0071B517  5F                        POP EDI
0071B518  5E                        POP ESI
0071B519  5B                        POP EBX
0071B51A  8B E5                     MOV ESP,EBP
0071B51C  5D                        POP EBP
0071B51D  C3                        RET
