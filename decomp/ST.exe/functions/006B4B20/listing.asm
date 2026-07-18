FUN_006b4b20:
006B4B20  55                        PUSH EBP
006B4B21  8B EC                     MOV EBP,ESP
006B4B23  83 EC 44                  SUB ESP,0x44
006B4B26  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B4B29  56                        PUSH ESI
006B4B2A  57                        PUSH EDI
006B4B2B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B4B2E  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006B4B34  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B4B37  85 C0                     TEST EAX,EAX
006B4B39  75 09                     JNZ 0x006b4b44
006B4B3B  57                        PUSH EDI
006B4B3C  E8 5F 04 00 00            CALL 0x006b4fa0
006B4B41  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006b4b44:
006B4B44  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006B4B47  33 F6                     XOR ESI,ESI
006B4B49  66 8B 77 0E               MOV SI,word ptr [EDI + 0xe]
006B4B4D  8B 7F 08                  MOV EDI,dword ptr [EDI + 0x8]
006B4B50  0F AF F0                  IMUL ESI,EAX
006B4B53  83 C6 1F                  ADD ESI,0x1f
006B4B56  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B4B59  C1 EE 03                  SHR ESI,0x3
006B4B5C  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006B4B62  40                        INC EAX
006B4B63  0F AF C7                  IMUL EAX,EDI
006B4B66  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
006B4B69  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006B4B6C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006B4B6F  99                        CDQ
006B4B70  2B C2                     SUB EAX,EDX
006B4B72  D1 F8                     SAR EAX,0x1
006B4B74  83 C0 16                  ADD EAX,0x16
006B4B77  50                        PUSH EAX
006B4B78  E8 F3 60 FF FF            CALL 0x006aac70
006B4B7D  8B F8                     MOV EDI,EAX
006B4B7F  85 FF                     TEST EDI,EDI
006B4B81  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
006B4B84  75 0D                     JNZ 0x006b4b93
006B4B86  5F                        POP EDI
006B4B87  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B4B8C  5E                        POP ESI
006B4B8D  8B E5                     MOV ESP,EBP
006B4B8F  5D                        POP EBP
006B4B90  C2 10 00                  RET 0x10
LAB_006b4b93:
006B4B93  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006B4B96  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006B4B99  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006B4B9C  33 D2                     XOR EDX,EDX
006B4B9E  8D 41 FF                  LEA EAX,[ECX + -0x1]
006B4BA1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B4BA4  0F AF C6                  IMUL EAX,ESI
006B4BA7  03 C1                     ADD EAX,ECX
006B4BA9  83 C9 FF                  OR ECX,0xffffffff
006B4BAC  33 F6                     XOR ESI,ESI
006B4BAE  39 55 DC                  CMP dword ptr [EBP + -0x24],EDX
006B4BB1  53                        PUSH EBX
006B4BB2  8D 5F 16                  LEA EBX,[EDI + 0x16]
006B4BB5  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006B4BB8  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
006B4BBB  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006B4BBE  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006B4BC1  7E 76                     JLE 0x006b4c39
LAB_006b4bc3:
006B4BC3  33 F6                     XOR ESI,ESI
LAB_006b4bc5:
006B4BC5  8A 4D 14                  MOV CL,byte ptr [EBP + 0x14]
006B4BC8  8A 10                     MOV DL,byte ptr [EAX]
006B4BCA  3A D1                     CMP DL,CL
006B4BCC  75 0F                     JNZ 0x006b4bdd
LAB_006b4bce:
006B4BCE  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006B4BD1  3B F2                     CMP ESI,EDX
006B4BD3  7D 46                     JGE 0x006b4c1b
006B4BD5  40                        INC EAX
006B4BD6  46                        INC ESI
006B4BD7  38 08                     CMP byte ptr [EAX],CL
006B4BD9  74 F3                     JZ 0x006b4bce
006B4BDB  EB 03                     JMP 0x006b4be0
LAB_006b4bdd:
006B4BDD  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
LAB_006b4be0:
006B4BE0  3B F2                     CMP ESI,EDX
006B4BE2  7D 37                     JGE 0x006b4c1b
006B4BE4  83 7D E8 FF               CMP dword ptr [EBP + -0x18],-0x1
006B4BE8  75 06                     JNZ 0x006b4bf0
006B4BEA  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B4BED  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_006b4bf0:
006B4BF0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B4BF3  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006B4BF6  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006B4BF9  3B D6                     CMP EDX,ESI
006B4BFB  7E 03                     JLE 0x006b4c00
006B4BFD  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
LAB_006b4c00:
006B4C00  38 08                     CMP byte ptr [EAX],CL
006B4C02  74 0D                     JZ 0x006b4c11
006B4C04  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
LAB_006b4c07:
006B4C07  3B F2                     CMP ESI,EDX
006B4C09  7D 06                     JGE 0x006b4c11
006B4C0B  40                        INC EAX
006B4C0C  46                        INC ESI
006B4C0D  38 08                     CMP byte ptr [EAX],CL
006B4C0F  75 F6                     JNZ 0x006b4c07
LAB_006b4c11:
006B4C11  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
006B4C14  7D AF                     JGE 0x006b4bc5
006B4C16  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
006B4C19  EB AA                     JMP 0x006b4bc5
LAB_006b4c1b:
006B4C1B  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006B4C1E  03 D1                     ADD EDX,ECX
006B4C20  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B4C23  2B C2                     SUB EAX,EDX
006B4C25  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006B4C28  41                        INC ECX
006B4C29  3B CA                     CMP ECX,EDX
006B4C2B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006B4C2E  7C 93                     JL 0x006b4bc3
006B4C30  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B4C33  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006B4C36  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_006b4c39:
006B4C39  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006B4C3C  2B F0                     SUB ESI,EAX
006B4C3E  83 F9 FF                  CMP ECX,-0x1
006B4C41  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006B4C44  0F 84 ED 02 00 00         JZ 0x006b4f37
006B4C4A  42                        INC EDX
006B4C4B  8B C2                     MOV EAX,EDX
006B4C4D  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006B4C50  2B C1                     SUB EAX,ECX
006B4C52  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006B4C55  99                        CDQ
006B4C56  83 E2 0F                  AND EDX,0xf
006B4C59  03 C2                     ADD EAX,EDX
006B4C5B  8B C8                     MOV ECX,EAX
006B4C5D  C1 F9 04                  SAR ECX,0x4
006B4C60  83 F9 07                  CMP ECX,0x7
006B4C63  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006B4C66  7E 0A                     JLE 0x006b4c72
006B4C68  C7 45 F4 07 00 00 00      MOV dword ptr [EBP + -0xc],0x7
006B4C6F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_006b4c72:
006B4C72  8B C1                     MOV EAX,ECX
006B4C74  0F AF C6                  IMUL EAX,ESI
006B4C77  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006B4C7A  99                        CDQ
006B4C7B  2B C2                     SUB EAX,EDX
006B4C7D  D1 F8                     SAR EAX,0x1
006B4C7F  3D FF FF 00 00            CMP EAX,0xffff
006B4C84  7E 10                     JLE 0x006b4c96
006B4C86  B8 FE FF 01 00            MOV EAX,0x1fffe
006B4C8B  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
006B4C8E  99                        CDQ
006B4C8F  F7 F9                     IDIV ECX
006B4C91  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006B4C94  8B C8                     MOV ECX,EAX
LAB_006b4c96:
006B4C96  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
006B4C99  8D 47 16                  LEA EAX,[EDI + 0x16]
006B4C9C  33 D2                     XOR EDX,EDX
006B4C9E  8D 1C 48                  LEA EBX,[EAX + ECX*0x2]
006B4CA1  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006B4CA4  66 89 53 FE               MOV word ptr [EBX + -0x2],DX
006B4CA8  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006B4CAB  2B F2                     SUB ESI,EDX
006B4CAD  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006B4CB0  4E                        DEC ESI
006B4CB1  0F AF 75 CC               IMUL ESI,dword ptr [EBP + -0x34]
006B4CB5  03 F2                     ADD ESI,EDX
006B4CB7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B4CBA  03 F2                     ADD ESI,EDX
006B4CBC  33 D2                     XOR EDX,EDX
006B4CBE  39 55 C0                  CMP dword ptr [EBP + -0x40],EDX
006B4CC1  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006B4CC4  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006B4CC7  0F 8E 79 02 00 00         JLE 0x006b4f46
006B4CCD  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_006b4cd0:
006B4CD0  33 FF                     XOR EDI,EDI
006B4CD2  85 D2                     TEST EDX,EDX
006B4CD4  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B4CD7  74 31                     JZ 0x006b4d0a
006B4CD9  81 E2 0F 00 00 80         AND EDX,0x8000000f
006B4CDF  79 05                     JNS 0x006b4ce6
006B4CE1  4A                        DEC EDX
006B4CE2  83 CA F0                  OR EDX,0xfffffff0
006B4CE5  42                        INC EDX
LAB_006b4ce6:
006B4CE6  75 22                     JNZ 0x006b4d0a
006B4CE8  39 4D D0                  CMP dword ptr [EBP + -0x30],ECX
006B4CEB  7D 1D                     JGE 0x006b4d0a
006B4CED  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006B4CF0  8B D3                     MOV EDX,EBX
006B4CF2  83 C0 16                  ADD EAX,0x16
006B4CF5  2B D0                     SUB EDX,EAX
006B4CF7  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006B4CFA  66 89 10                  MOV word ptr [EAX],DX
006B4CFD  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006B4D00  42                        INC EDX
006B4D01  83 C0 02                  ADD EAX,0x2
006B4D04  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006B4D07  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_006b4d0a:
006B4D0A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B4D0D  8A 06                     MOV AL,byte ptr [ESI]
006B4D0F  33 C9                     XOR ECX,ECX
006B4D11  3A C2                     CMP AL,DL
006B4D13  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006B4D16  75 6A                     JNZ 0x006b4d82
LAB_006b4d18:
006B4D18  3B 7D F8                  CMP EDI,dword ptr [EBP + -0x8]
006B4D1B  7D 0A                     JGE 0x006b4d27
006B4D1D  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006B4D20  41                        INC ECX
006B4D21  46                        INC ESI
006B4D22  47                        INC EDI
006B4D23  3A C2                     CMP AL,DL
006B4D25  74 F1                     JZ 0x006b4d18
LAB_006b4d27:
006B4D27  83 F9 7F                  CMP ECX,0x7f
006B4D2A  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B4D2D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006B4D30  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006B4D33  7E 43                     JLE 0x006b4d78
006B4D35  49                        DEC ECX
006B4D36  B8 11 08 04 02            MOV EAX,0x2040811
006B4D3B  F7 E1                     MUL ECX
006B4D3D  2B CA                     SUB ECX,EDX
006B4D3F  B8 7F 7F 7F 7F            MOV EAX,0x7f7f7f7f
006B4D44  D1 E9                     SHR ECX,0x1
006B4D46  03 CA                     ADD ECX,EDX
006B4D48  8B FB                     MOV EDI,EBX
006B4D4A  C1 E9 06                  SHR ECX,0x6
006B4D4D  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006B4D50  8B D1                     MOV EDX,ECX
006B4D52  C1 E9 02                  SHR ECX,0x2
006B4D55  F3 AB                     STOSD.REP ES:EDI
006B4D57  8B CA                     MOV ECX,EDX
006B4D59  83 E1 03                  AND ECX,0x3
006B4D5C  F3 AA                     STOSB.REP ES:EDI
006B4D5E  8B C2                     MOV EAX,EDX
006B4D60  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B4D63  8B C8                     MOV ECX,EAX
006B4D65  03 D8                     ADD EBX,EAX
006B4D67  C1 E1 07                  SHL ECX,0x7
006B4D6A  2B C8                     SUB ECX,EAX
006B4D6C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B4D6F  F7 D9                     NEG ECX
006B4D71  03 C1                     ADD EAX,ECX
006B4D73  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B4D76  8B C8                     MOV ECX,EAX
LAB_006b4d78:
006B4D78  85 C9                     TEST ECX,ECX
006B4D7A  7E 03                     JLE 0x006b4d7f
006B4D7C  88 0B                     MOV byte ptr [EBX],CL
006B4D7E  43                        INC EBX
LAB_006b4d7f:
006B4D7F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
LAB_006b4d82:
006B4D82  8B C2                     MOV EAX,EDX
006B4D84  33 C9                     XOR ECX,ECX
006B4D86  25 FF 00 00 00            AND EAX,0xff
006B4D8B  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006B4D8E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006B4D91  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B4D94  3B F8                     CMP EDI,EAX
006B4D96  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006B4D99  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
006B4D9C  0F 8D 5B 01 00 00         JGE 0x006b4efd
006B4DA2  EB 03                     JMP 0x006b4da7
LAB_006b4da4:
006B4DA4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
LAB_006b4da7:
006B4DA7  8A 06                     MOV AL,byte ptr [ESI]
006B4DA9  3A C2                     CMP AL,DL
006B4DAB  74 37                     JZ 0x006b4de4
006B4DAD  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B4DB0  25 FF 00 00 00            AND EAX,0xff
006B4DB5  3B C2                     CMP EAX,EDX
006B4DB7  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B4DBA  75 1B                     JNZ 0x006b4dd7
006B4DBC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B4DBF  4A                        DEC EDX
006B4DC0  3B FA                     CMP EDI,EDX
006B4DC2  7D 13                     JGE 0x006b4dd7
006B4DC4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B4DC7  33 C0                     XOR EAX,EAX
006B4DC9  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006B4DCC  3B C2                     CMP EAX,EDX
006B4DCE  0F 84 50 01 00 00         JZ 0x006b4f24
006B4DD4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_006b4dd7:
006B4DD7  41                        INC ECX
006B4DD8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006B4DDB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B4DDE  46                        INC ESI
006B4DDF  47                        INC EDI
006B4DE0  3B F8                     CMP EDI,EAX
006B4DE2  7C C0                     JL 0x006b4da4
LAB_006b4de4:
006B4DE4  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B4DE7  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006b4dea:
006B4DEA  83 F9 3F                  CMP ECX,0x3f
006B4DED  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006B4DF0  7E 4E                     JLE 0x006b4e40
006B4DF2  8D 71 FF                  LEA ESI,[ECX + -0x1]
006B4DF5  B8 05 41 10 04            MOV EAX,0x4104105
006B4DFA  F7 E6                     MUL ESI
006B4DFC  2B F2                     SUB ESI,EDX
006B4DFE  D1 EE                     SHR ESI,0x1
006B4E00  03 F2                     ADD ESI,EDX
006B4E02  C1 EE 05                  SHR ESI,0x5
006B4E05  8B C6                     MOV EAX,ESI
006B4E07  8B D0                     MOV EDX,EAX
006B4E09  C1 E2 06                  SHL EDX,0x6
006B4E0C  2B D0                     SUB EDX,EAX
006B4E0E  F7 DA                     NEG EDX
006B4E10  03 CA                     ADD ECX,EDX
006B4E12  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006b4e15:
006B4E15  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
006B4E18  C6 03 BF                  MOV byte ptr [EBX],0xbf
006B4E1B  43                        INC EBX
006B4E1C  B9 0F 00 00 00            MOV ECX,0xf
006B4E21  8B FB                     MOV EDI,EBX
006B4E23  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006B4E26  F3 A5                     MOVSD.REP ES:EDI,ESI
006B4E28  66 A5                     MOVSW ES:EDI,ESI
006B4E2A  83 C3 3F                  ADD EBX,0x3f
006B4E2D  83 C2 3F                  ADD EDX,0x3f
006B4E30  48                        DEC EAX
006B4E31  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006B4E34  A4                        MOVSB ES:EDI,ESI
006B4E35  75 DE                     JNZ 0x006b4e15
006B4E37  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006B4E3A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B4E3D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_006b4e40:
006B4E40  85 C9                     TEST ECX,ECX
006B4E42  7E 25                     JLE 0x006b4e69
006B4E44  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
006B4E47  8A C1                     MOV AL,CL
006B4E49  0C 80                     OR AL,0x80
006B4E4B  8B D1                     MOV EDX,ECX
006B4E4D  88 03                     MOV byte ptr [EBX],AL
006B4E4F  43                        INC EBX
006B4E50  8B FB                     MOV EDI,EBX
006B4E52  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B4E55  C1 E9 02                  SHR ECX,0x2
006B4E58  F3 A5                     MOVSD.REP ES:EDI,ESI
006B4E5A  8B CA                     MOV ECX,EDX
006B4E5C  83 E1 03                  AND ECX,0x3
006B4E5F  03 D8                     ADD EBX,EAX
006B4E61  F3 A4                     MOVSB.REP ES:EDI,ESI
006B4E63  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006B4E66  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_006b4e69:
006B4E69  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006B4E6C  85 C0                     TEST EAX,EAX
006B4E6E  0F 84 80 00 00 00         JZ 0x006b4ef4
006B4E74  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B4E77  83 C7 02                  ADD EDI,0x2
006B4E7A  B9 03 00 00 00            MOV ECX,0x3
006B4E7F  83 C6 02                  ADD ESI,0x2
006B4E82  3B F8                     CMP EDI,EAX
006B4E84  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006B4E87  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006B4E8A  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B4E8D  7D 59                     JGE 0x006b4ee8
LAB_006b4e8f:
006B4E8F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B4E92  33 C0                     XOR EAX,EAX
006B4E94  8A 06                     MOV AL,byte ptr [ESI]
006B4E96  3B C2                     CMP EAX,EDX
006B4E98  75 0A                     JNZ 0x006b4ea4
006B4E9A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B4E9D  41                        INC ECX
006B4E9E  46                        INC ESI
006B4E9F  47                        INC EDI
006B4EA0  3B F8                     CMP EDI,EAX
006B4EA2  7C EB                     JL 0x006b4e8f
LAB_006b4ea4:
006B4EA4  83 F9 3F                  CMP ECX,0x3f
006B4EA7  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B4EAA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006B4EAD  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006B4EB0  7E 32                     JLE 0x006b4ee4
006B4EB2  49                        DEC ECX
006B4EB3  B8 05 41 10 04            MOV EAX,0x4104105
006B4EB8  F7 E1                     MUL ECX
006B4EBA  2B CA                     SUB ECX,EDX
006B4EBC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B4EBF  D1 E9                     SHR ECX,0x1
006B4EC1  03 CA                     ADD ECX,EDX
006B4EC3  C1 E9 05                  SHR ECX,0x5
006B4EC6  8B D1                     MOV EDX,ECX
006B4EC8  C1 E2 06                  SHL EDX,0x6
006B4ECB  2B D1                     SUB EDX,ECX
006B4ECD  F7 DA                     NEG EDX
006B4ECF  03 C2                     ADD EAX,EDX
006B4ED1  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006b4ed4:
006B4ED4  8A 45 EC                  MOV AL,byte ptr [EBP + -0x14]
006B4ED7  C6 03 FF                  MOV byte ptr [EBX],0xff
006B4EDA  43                        INC EBX
006B4EDB  88 03                     MOV byte ptr [EBX],AL
006B4EDD  43                        INC EBX
006B4EDE  49                        DEC ECX
006B4EDF  75 F3                     JNZ 0x006b4ed4
006B4EE1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
LAB_006b4ee4:
006B4EE4  85 C9                     TEST ECX,ECX
006B4EE6  7E 0C                     JLE 0x006b4ef4
LAB_006b4ee8:
006B4EE8  80 C9 C0                  OR CL,0xc0
006B4EEB  88 0B                     MOV byte ptr [EBX],CL
006B4EED  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
006B4EF0  43                        INC EBX
006B4EF1  88 0B                     MOV byte ptr [EBX],CL
006B4EF3  43                        INC EBX
LAB_006b4ef4:
006B4EF4  3B 7D F8                  CMP EDI,dword ptr [EBP + -0x8]
006B4EF7  0F 8C 0D FE FF FF         JL 0x006b4d0a
LAB_006b4efd:
006B4EFD  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006B4F00  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B4F03  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006B4F06  03 C2                     ADD EAX,EDX
006B4F08  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B4F0B  2B F0                     SUB ESI,EAX
006B4F0D  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006B4F10  42                        INC EDX
006B4F11  3B D0                     CMP EDX,EAX
006B4F13  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006B4F16  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006B4F19  0F 8C B1 FD FF FF         JL 0x006b4cd0
006B4F1F  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
006B4F22  EB 22                     JMP 0x006b4f46
LAB_006b4f24:
006B4F24  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B4F27  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006B4F2A  C7 45 C4 01 00 00 00      MOV dword ptr [EBP + -0x3c],0x1
006B4F31  49                        DEC ECX
006B4F32  E9 B3 FE FF FF            JMP 0x006b4dea
LAB_006b4f37:
006B4F37  33 C0                     XOR EAX,EAX
006B4F39  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006B4F3C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006B4F3F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006B4F42  8B C8                     MOV ECX,EAX
006B4F44  EB 03                     JMP 0x006b4f49
LAB_006b4f46:
006B4F46  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
LAB_006b4f49:
006B4F49  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006B4F4C  2B DF                     SUB EBX,EDI
006B4F4E  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
006B4F51  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006B4F54  C0 E1 02                  SHL CL,0x2
006B4F57  88 4F 0D                  MOV byte ptr [EDI + 0xd],CL
006B4F5A  66 8B 4D D8               MOV CX,word ptr [EBP + -0x28]
006B4F5E  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
006B4F61  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006B4F64  66 89 4F 0E               MOV word ptr [EDI + 0xe],CX
006B4F68  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
006B4F6C  2B D0                     SUB EDX,EAX
006B4F6E  53                        PUSH EBX
006B4F6F  57                        PUSH EDI
006B4F70  89 1F                     MOV dword ptr [EDI],EBX
006B4F72  C6 47 0C 80               MOV byte ptr [EDI + 0xc],0x80
006B4F76  66 89 47 10               MOV word ptr [EDI + 0x10],AX
006B4F7A  66 89 4F 12               MOV word ptr [EDI + 0x12],CX
006B4F7E  66 89 57 14               MOV word ptr [EDI + 0x14],DX
006B4F82  E8 C9 AB 00 00            CALL 0x006bfb50
006B4F87  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B4F8A  5B                        POP EBX
006B4F8B  85 C0                     TEST EAX,EAX
006B4F8D  89 01                     MOV dword ptr [ECX],EAX
006B4F8F  75 02                     JNZ 0x006b4f93
006B4F91  89 39                     MOV dword ptr [ECX],EDI
LAB_006b4f93:
006B4F93  5F                        POP EDI
006B4F94  33 C0                     XOR EAX,EAX
006B4F96  5E                        POP ESI
006B4F97  8B E5                     MOV ESP,EBP
006B4F99  5D                        POP EBP
006B4F9A  C2 10 00                  RET 0x10
