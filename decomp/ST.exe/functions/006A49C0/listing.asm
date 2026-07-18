FUN_006a49c0:
006A49C0  55                        PUSH EBP
006A49C1  8B EC                     MOV EBP,ESP
006A49C3  81 EC 84 00 00 00         SUB ESP,0x84
006A49C9  F6 05 78 C1 7E 00 04      TEST byte ptr [0x007ec178],0x4
006A49D0  74 29                     JZ 0x006a49fb
006A49D2  E8 3C 03 D6 FF            CALL 0x00404d13
006A49D7  85 C0                     TEST EAX,EAX
006A49D9  75 20                     JNZ 0x006a49fb
006A49DB  68 BC C2 7E 00            PUSH 0x7ec2bc
006A49E0  50                        PUSH EAX
006A49E1  68 52 04 00 00            PUSH 0x452
006A49E6  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A49EB  6A 02                     PUSH 0x2
006A49ED  E8 AE C5 08 00            CALL 0x00730fa0
006A49F2  83 C4 14                  ADD ESP,0x14
006A49F5  83 F8 01                  CMP EAX,0x1
006A49F8  75 01                     JNZ 0x006a49fb
006A49FA  CC                        INT3
LAB_006a49fb:
006A49FB  53                        PUSH EBX
006A49FC  56                        PUSH ESI
006A49FD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A4A00  57                        PUSH EDI
006A4A01  85 F6                     TEST ESI,ESI
006A4A03  0F 84 C9 03 00 00         JZ 0x006a4dd2
006A4A09  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A4A0C  6A 00                     PUSH 0x0
006A4A0E  6A 00                     PUSH 0x0
006A4A10  6A 00                     PUSH 0x0
006A4A12  53                        PUSH EBX
006A4A13  6A 00                     PUSH 0x0
006A4A15  56                        PUSH ESI
006A4A16  6A 03                     PUSH 0x3
006A4A18  FF 15 98 14 7F 00         CALL dword ptr [0x007f1498]
006A4A1E  83 C4 1C                  ADD ESP,0x1c
006A4A21  85 C0                     TEST EAX,EAX
006A4A23  75 27                     JNZ 0x006a4a4c
006A4A25  68 14 C6 7E 00            PUSH 0x7ec614
006A4A2A  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A4A2F  50                        PUSH EAX
006A4A30  50                        PUSH EAX
006A4A31  50                        PUSH EAX
006A4A32  50                        PUSH EAX
006A4A33  E8 68 C5 08 00            CALL 0x00730fa0
006A4A38  83 C4 18                  ADD ESP,0x18
006A4A3B  83 F8 01                  CMP EAX,0x1
006A4A3E  0F 85 8E 03 00 00         JNZ 0x006a4dd2
006A4A44  CC                        INT3
LAB_006a4a4c:
006A4A4C  56                        PUSH ESI
006A4A4D  E8 1C 07 D6 FF            CALL 0x0040516e
006A4A52  83 C4 04                  ADD ESP,0x4
006A4A55  85 C0                     TEST EAX,EAX
006A4A57  75 3A                     JNZ 0x006a4a93
006A4A59  6A 02                     PUSH 0x2
006A4A5B  E8 5E E4 D5 FF            CALL 0x00402ebe
006A4A60  50                        PUSH EAX
006A4A61  56                        PUSH ESI
006A4A62  68 F8 C5 7E 00            PUSH 0x7ec5f8
006A4A67  6A 00                     PUSH 0x0
006A4A69  6A 00                     PUSH 0x0
006A4A6B  68 65 04 00 00            PUSH 0x465
006A4A70  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4A75  E8 56 8A 00 00            CALL 0x006ad4d0
006A4A7A  83 C4 1C                  ADD ESP,0x1c
006A4A7D  85 C0                     TEST EAX,EAX
006A4A7F  74 01                     JZ 0x006a4a82
006A4A81  CC                        INT3
LAB_006a4a82:
006A4A82  5F                        POP EDI
006A4A83  5E                        POP ESI
006A4A84  C7 05 4C 4A 85 00 01 00 00 00  MOV dword ptr [0x00854a4c],0x1
006A4A8E  5B                        POP EBX
006A4A8F  8B E5                     MOV ESP,EBP
006A4A91  5D                        POP EBP
006A4A92  C3                        RET
LAB_006a4a93:
006A4A93  8B 4E F4                  MOV ECX,dword ptr [ESI + -0xc]
006A4A96  83 C6 E0                  ADD ESI,-0x20
006A4A99  8B C1                     MOV EAX,ECX
006A4A9B  25 FF FF 00 00            AND EAX,0xffff
006A4AA0  83 F8 04                  CMP EAX,0x4
006A4AA3  74 6C                     JZ 0x006a4b11
006A4AA5  83 F9 01                  CMP ECX,0x1
006A4AA8  74 67                     JZ 0x006a4b11
006A4AAA  83 F8 02                  CMP EAX,0x2
006A4AAD  74 62                     JZ 0x006a4b11
006A4AAF  83 F9 03                  CMP ECX,0x3
006A4AB2  74 5D                     JZ 0x006a4b11
006A4AB4  6A 02                     PUSH 0x2
006A4AB6  E8 03 E4 D5 FF            CALL 0x00402ebe
006A4ABB  50                        PUSH EAX
006A4ABC  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006A4ABF  50                        PUSH EAX
006A4AC0  56                        PUSH ESI
006A4AC1  E8 2A FD FF FF            CALL 0x006a47f0
006A4AC6  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006A4AC9  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006A4ACC  50                        PUSH EAX
006A4ACD  51                        PUSH ECX
006A4ACE  52                        PUSH EDX
006A4ACF  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
006A4AD5  68 D0 C5 7E 00            PUSH 0x7ec5d0
006A4ADA  50                        PUSH EAX
006A4ADB  E8 60 C1 08 00            CALL 0x00730c40
006A4AE0  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
006A4AE6  51                        PUSH ECX
006A4AE7  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A4AEC  6A 00                     PUSH 0x0
006A4AEE  6A 00                     PUSH 0x0
006A4AF0  68 72 04 00 00            PUSH 0x472
006A4AF5  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4AFA  E8 D1 89 00 00            CALL 0x006ad4d0
006A4AFF  83 C4 34                  ADD ESP,0x34
006A4B02  85 C0                     TEST EAX,EAX
006A4B04  74 01                     JZ 0x006a4b07
006A4B06  CC                        INT3
LAB_006a4b07:
006A4B07  C7 05 4C 4A 85 00 01 00 00 00  MOV dword ptr [0x00854a4c],0x1
LAB_006a4b11:
006A4B11  F6 05 78 C1 7E 00 04      TEST byte ptr [0x007ec178],0x4
006A4B18  0F 85 F3 00 00 00         JNZ 0x006a4c11
006A4B1E  8A 15 84 C1 7E 00         MOV DL,byte ptr [0x007ec184]
006A4B24  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
006A4B27  6A 04                     PUSH 0x4
006A4B29  52                        PUSH EDX
006A4B2A  57                        PUSH EDI
006A4B2B  E8 00 06 00 00            CALL 0x006a5130
006A4B30  83 C4 0C                  ADD ESP,0xc
006A4B33  85 C0                     TEST EAX,EAX
006A4B35  75 5C                     JNZ 0x006a4b93
006A4B37  6A 02                     PUSH 0x2
006A4B39  E8 80 E3 D5 FF            CALL 0x00402ebe
006A4B3E  50                        PUSH EAX
006A4B3F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006A4B42  50                        PUSH EAX
006A4B43  56                        PUSH ESI
006A4B44  E8 A7 FC FF FF            CALL 0x006a47f0
006A4B49  8B 0F                     MOV ECX,dword ptr [EDI]
006A4B4B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006A4B4E  50                        PUSH EAX
006A4B4F  51                        PUSH ECX
006A4B50  52                        PUSH EDX
006A4B51  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
006A4B57  68 94 C5 7E 00            PUSH 0x7ec594
006A4B5C  50                        PUSH EAX
006A4B5D  E8 DE C0 08 00            CALL 0x00730c40
006A4B62  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
006A4B68  51                        PUSH ECX
006A4B69  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A4B6E  6A 00                     PUSH 0x0
006A4B70  6A 00                     PUSH 0x0
006A4B72  68 7E 04 00 00            PUSH 0x47e
006A4B77  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4B7C  E8 4F 89 00 00            CALL 0x006ad4d0
006A4B81  83 C4 34                  ADD ESP,0x34
006A4B84  85 C0                     TEST EAX,EAX
006A4B86  74 01                     JZ 0x006a4b89
006A4B88  CC                        INT3
LAB_006a4b89:
006A4B89  C7 05 4C 4A 85 00 01 00 00 00  MOV dword ptr [0x00854a4c],0x1
LAB_006a4b93:
006A4B93  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006A4B96  8A 15 84 C1 7E 00         MOV DL,byte ptr [0x007ec184]
006A4B9C  6A 04                     PUSH 0x4
006A4B9E  52                        PUSH EDX
006A4B9F  8D 4C 30 20               LEA ECX,[EAX + ESI*0x1 + 0x20]
006A4BA3  51                        PUSH ECX
006A4BA4  E8 87 05 00 00            CALL 0x006a5130
006A4BA9  83 C4 0C                  ADD ESP,0xc
006A4BAC  85 C0                     TEST EAX,EAX
006A4BAE  75 61                     JNZ 0x006a4c11
006A4BB0  6A 02                     PUSH 0x2
006A4BB2  E8 07 E3 D5 FF            CALL 0x00402ebe
006A4BB7  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006A4BBA  50                        PUSH EAX
006A4BBB  52                        PUSH EDX
006A4BBC  56                        PUSH ESI
006A4BBD  E8 2E FC FF FF            CALL 0x006a47f0
006A4BC2  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006A4BC5  50                        PUSH EAX
006A4BC6  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006A4BC9  8B 4C 30 20               MOV ECX,dword ptr [EAX + ESI*0x1 + 0x20]
006A4BCD  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
006A4BD3  51                        PUSH ECX
006A4BD4  52                        PUSH EDX
006A4BD5  68 58 C5 7E 00            PUSH 0x7ec558
006A4BDA  50                        PUSH EAX
006A4BDB  E8 60 C0 08 00            CALL 0x00730c40
006A4BE0  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
006A4BE6  51                        PUSH ECX
006A4BE7  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A4BEC  6A 00                     PUSH 0x0
006A4BEE  6A 00                     PUSH 0x0
006A4BF0  68 86 04 00 00            PUSH 0x486
006A4BF5  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4BFA  E8 D1 88 00 00            CALL 0x006ad4d0
006A4BFF  83 C4 34                  ADD ESP,0x34
006A4C02  85 C0                     TEST EAX,EAX
006A4C04  74 01                     JZ 0x006a4c07
006A4C06  CC                        INT3
LAB_006a4c07:
006A4C07  C7 05 4C 4A 85 00 01 00 00 00  MOV dword ptr [0x00854a4c],0x1
LAB_006a4c11:
006A4C11  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006A4C14  83 F8 03                  CMP EAX,0x3
006A4C17  75 6A                     JNZ 0x006a4c83
006A4C19  81 7E 0C BC BA DC FE      CMP dword ptr [ESI + 0xc],0xfedcbabc
006A4C20  75 07                     JNZ 0x006a4c29
006A4C22  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006A4C25  85 C0                     TEST EAX,EAX
006A4C27  74 21                     JZ 0x006a4c4a
LAB_006a4c29:
006A4C29  68 0C C5 7E 00            PUSH 0x7ec50c
006A4C2E  6A 00                     PUSH 0x0
006A4C30  68 9A 04 00 00            PUSH 0x49a
006A4C35  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4C3A  6A 02                     PUSH 0x2
006A4C3C  E8 5F C3 08 00            CALL 0x00730fa0
006A4C41  83 C4 14                  ADD ESP,0x14
006A4C44  83 F8 01                  CMP EAX,0x1
006A4C47  75 01                     JNZ 0x006a4c4a
006A4C49  CC                        INT3
LAB_006a4c4a:
006A4C4A  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006A4C4D  33 C0                     XOR EAX,EAX
006A4C4F  A0 85 C1 7E 00            MOV AL,[0x007ec185]
006A4C54  83 C1 24                  ADD ECX,0x24
006A4C57  8A D8                     MOV BL,AL
006A4C59  8B D1                     MOV EDX,ECX
006A4C5B  8A FB                     MOV BH,BL
006A4C5D  8B FE                     MOV EDI,ESI
006A4C5F  8B C3                     MOV EAX,EBX
006A4C61  56                        PUSH ESI
006A4C62  C1 E0 10                  SHL EAX,0x10
006A4C65  66 8B C3                  MOV AX,BX
006A4C68  C1 E9 02                  SHR ECX,0x2
006A4C6B  F3 AB                     STOSD.REP ES:EDI
006A4C6D  8B CA                     MOV ECX,EDX
006A4C6F  83 E1 03                  AND ECX,0x3
006A4C72  F3 AA                     STOSB.REP ES:EDI
006A4C74  E8 27 CC 08 00            CALL 0x007318a0
006A4C79  83 C4 04                  ADD ESP,0x4
006A4C7C  5F                        POP EDI
006A4C7D  5E                        POP ESI
006A4C7E  5B                        POP EBX
006A4C7F  8B E5                     MOV ESP,EBP
006A4C81  5D                        POP EBP
006A4C82  C3                        RET
LAB_006a4c83:
006A4C83  83 F8 02                  CMP EAX,0x2
006A4C86  75 07                     JNZ 0x006a4c8f
006A4C88  83 FB 01                  CMP EBX,0x1
006A4C8B  75 02                     JNZ 0x006a4c8f
006A4C8D  8B D8                     MOV EBX,EAX
LAB_006a4c8f:
006A4C8F  3B C3                     CMP EAX,EBX
006A4C91  74 60                     JZ 0x006a4cf3
006A4C93  6A 02                     PUSH 0x2
006A4C95  E8 24 E2 D5 FF            CALL 0x00402ebe
006A4C9A  50                        PUSH EAX
006A4C9B  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006A4C9E  50                        PUSH EAX
006A4C9F  56                        PUSH ESI
006A4CA0  E8 4B FB FF FF            CALL 0x006a47f0
006A4CA5  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006A4CA8  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006A4CAB  81 E2 FF FF 00 00         AND EDX,0xffff
006A4CB1  50                        PUSH EAX
006A4CB2  51                        PUSH ECX
006A4CB3  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
006A4CB9  8B 04 95 88 C1 7E 00      MOV EAX,dword ptr [EDX*0x4 + 0x7ec188]
006A4CC0  50                        PUSH EAX
006A4CC1  68 E4 C4 7E 00            PUSH 0x7ec4e4
006A4CC6  51                        PUSH ECX
006A4CC7  E8 74 BF 08 00            CALL 0x00730c40
006A4CCC  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
006A4CD2  52                        PUSH EDX
006A4CD3  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A4CD8  6A 00                     PUSH 0x0
006A4CDA  6A 00                     PUSH 0x0
006A4CDC  68 AB 04 00 00            PUSH 0x4ab
006A4CE1  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4CE6  E8 E5 87 00 00            CALL 0x006ad4d0
006A4CEB  83 C4 34                  ADD ESP,0x34
006A4CEE  85 C0                     TEST EAX,EAX
006A4CF0  74 01                     JZ 0x006a4cf3
006A4CF2  CC                        INT3
LAB_006a4cf3:
006A4CF3  A1 4C 4A 85 00            MOV EAX,[0x00854a4c]
006A4CF8  85 C0                     TEST EAX,EAX
006A4CFA  0F 85 D2 00 00 00         JNZ 0x006a4dd2
006A4D00  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006A4D03  8B 0D 44 4A 85 00         MOV ECX,dword ptr [0x00854a44]
006A4D09  2B C8                     SUB ECX,EAX
006A4D0B  A0 78 C1 7E 00            MOV AL,[0x007ec178]
006A4D10  A8 02                     TEST AL,0x2
006A4D12  89 0D 44 4A 85 00         MOV dword ptr [0x00854a44],ECX
006A4D18  0F 85 86 00 00 00         JNZ 0x006a4da4
006A4D1E  8B 06                     MOV EAX,dword ptr [ESI]
006A4D20  85 C0                     TEST EAX,EAX
006A4D22  74 08                     JZ 0x006a4d2c
006A4D24  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006A4D27  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006A4D2A  EB 32                     JMP 0x006a4d5e
LAB_006a4d2c:
006A4D2C  39 35 64 49 85 00         CMP dword ptr [0x00854964],ESI
006A4D32  74 21                     JZ 0x006a4d55
006A4D34  68 C8 C4 7E 00            PUSH 0x7ec4c8
006A4D39  6A 00                     PUSH 0x0
006A4D3B  68 BC 04 00 00            PUSH 0x4bc
006A4D40  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4D45  6A 02                     PUSH 0x2
006A4D47  E8 54 C2 08 00            CALL 0x00730fa0
006A4D4C  83 C4 14                  ADD ESP,0x14
006A4D4F  83 F8 01                  CMP EAX,0x1
006A4D52  75 01                     JNZ 0x006a4d55
006A4D54  CC                        INT3
LAB_006a4d55:
006A4D55  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006A4D58  89 15 64 49 85 00         MOV dword ptr [0x00854964],EDX
LAB_006a4d5e:
006A4D5E  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006A4D61  85 C0                     TEST EAX,EAX
006A4D63  74 09                     JZ 0x006a4d6e
006A4D65  8B 0E                     MOV ECX,dword ptr [ESI]
006A4D67  89 08                     MOV dword ptr [EAX],ECX
006A4D69  E9 DC FE FF FF            JMP 0x006a4c4a
LAB_006a4d6e:
006A4D6E  39 35 6C 49 85 00         CMP dword ptr [0x0085496c],ESI
006A4D74  74 21                     JZ 0x006a4d97
006A4D76  68 AC C4 7E 00            PUSH 0x7ec4ac
006A4D7B  6A 00                     PUSH 0x0
006A4D7D  68 C6 04 00 00            PUSH 0x4c6
006A4D82  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4D87  6A 02                     PUSH 0x2
006A4D89  E8 12 C2 08 00            CALL 0x00730fa0
006A4D8E  83 C4 14                  ADD ESP,0x14
006A4D91  83 F8 01                  CMP EAX,0x1
006A4D94  75 01                     JNZ 0x006a4d97
006A4D96  CC                        INT3
LAB_006a4d97:
006A4D97  8B 16                     MOV EDX,dword ptr [ESI]
006A4D99  89 15 6C 49 85 00         MOV dword ptr [0x0085496c],EDX
006A4D9F  E9 A6 FE FF FF            JMP 0x006a4c4a
LAB_006a4da4:
006A4DA4  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006A4DA7  33 C0                     XOR EAX,EAX
006A4DA9  C7 46 14 00 00 00 00      MOV dword ptr [ESI + 0x14],0x0
006A4DB0  A0 85 C1 7E 00            MOV AL,[0x007ec185]
006A4DB5  8A D8                     MOV BL,AL
006A4DB7  8B D1                     MOV EDX,ECX
006A4DB9  8A FB                     MOV BH,BL
006A4DBB  8D 7E 20                  LEA EDI,[ESI + 0x20]
006A4DBE  8B C3                     MOV EAX,EBX
006A4DC0  C1 E0 10                  SHL EAX,0x10
006A4DC3  66 8B C3                  MOV AX,BX
006A4DC6  C1 E9 02                  SHR ECX,0x2
006A4DC9  F3 AB                     STOSD.REP ES:EDI
006A4DCB  8B CA                     MOV ECX,EDX
006A4DCD  83 E1 03                  AND ECX,0x3
006A4DD0  F3 AA                     STOSB.REP ES:EDI
LAB_006a4dd2:
006A4DD2  5F                        POP EDI
006A4DD3  5E                        POP ESI
006A4DD4  5B                        POP EBX
006A4DD5  8B E5                     MOV ESP,EBP
006A4DD7  5D                        POP EBP
006A4DD8  C3                        RET
