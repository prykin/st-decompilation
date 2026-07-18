FUN_00498d20:
00498D20  55                        PUSH EBP
00498D21  8B EC                     MOV EBP,ESP
00498D23  83 EC 0C                  SUB ESP,0xc
00498D26  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00498D29  53                        PUSH EBX
00498D2A  48                        DEC EAX
00498D2B  56                        PUSH ESI
00498D2C  83 F8 69                  CMP EAX,0x69
00498D2F  57                        PUSH EDI
00498D30  8B D9                     MOV EBX,ECX
00498D32  0F 87 CE 06 00 00         JA 0x00499406
00498D38  33 C9                     XOR ECX,ECX
00498D3A  8A 88 80 94 49 00         MOV CL,byte ptr [EAX + 0x499480]
switchD_00498d40::switchD:
00498D40  FF 24 8D 10 94 49 00      JMP dword ptr [ECX*0x4 + 0x499410]
switchD_00498d40::caseD_1:
00498D47  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00498D4A  B8 01 00 00 00            MOV EAX,0x1
00498D4F  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00498D52  89 83 89 00 00 00         MOV dword ptr [EBX + 0x89],EAX
00498D58  81 C3 DD 00 00 00         ADD EBX,0xdd
00498D5E  E9 C6 03 00 00            JMP 0x00499129
switchD_00498d40::caseD_3:
00498D63  B8 01 00 00 00            MOV EAX,0x1
00498D68  5F                        POP EDI
00498D69  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00498D6C  89 83 91 00 00 00         MOV dword ptr [EBX + 0x91],EAX
00498D72  5E                        POP ESI
00498D73  5B                        POP EBX
00498D74  8B E5                     MOV ESP,EBP
00498D76  5D                        POP EBP
00498D77  C2 08 00                  RET 0x8
switchD_00498d40::caseD_2:
00498D7A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00498D7D  BA 01 00 00 00            MOV EDX,0x1
00498D82  8D 83 E7 00 00 00         LEA EAX,[EBX + 0xe7]
00498D88  89 53 65                  MOV dword ptr [EBX + 0x65],EDX
00498D8B  B9 06 00 00 00            MOV ECX,0x6
00498D90  8B F8                     MOV EDI,EAX
00498D92  89 93 8D 00 00 00         MOV dword ptr [EBX + 0x8d],EDX
00498D98  F3 A5                     MOVSD.REP ES:EDI,ESI
00498D9A  83 38 00                  CMP dword ptr [EAX],0x0
00498D9D  0F 85 63 06 00 00         JNZ 0x00499406
00498DA3  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00498DA9  52                        PUSH EDX
00498DAA  6A 04                     PUSH 0x4
00498DAC  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00498DAF  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00498DB2  57                        PUSH EDI
00498DB3  6A 00                     PUSH 0x0
00498DB5  E8 D6 54 21 00            CALL 0x006ae290
00498DBA  33 F6                     XOR ESI,ESI
00498DBC  89 83 EF 00 00 00         MOV dword ptr [EBX + 0xef],EAX
00498DC2  85 FF                     TEST EDI,EDI
00498DC4  0F 8E 3C 06 00 00         JLE 0x00499406
LAB_00498dca:
00498DCA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00498DCD  8D 45 FC                  LEA EAX,[EBP + -0x4]
00498DD0  50                        PUSH EAX
00498DD1  8B D6                     MOV EDX,ESI
00498DD3  E8 98 3E 21 00            CALL 0x006acc70
00498DD8  8B 93 EF 00 00 00         MOV EDX,dword ptr [EBX + 0xef]
00498DDE  8D 4D FC                  LEA ECX,[EBP + -0x4]
00498DE1  51                        PUSH ECX
00498DE2  56                        PUSH ESI
00498DE3  52                        PUSH EDX
00498DE4  E8 57 53 21 00            CALL 0x006ae140
00498DE9  46                        INC ESI
00498DEA  3B F7                     CMP ESI,EDI
00498DEC  7C DC                     JL 0x00498dca
00498DEE  5F                        POP EDI
00498DEF  5E                        POP ESI
00498DF0  5B                        POP EBX
00498DF1  8B E5                     MOV ESP,EBP
00498DF3  5D                        POP EBP
00498DF4  C2 08 00                  RET 0x8
switchD_00498d40::caseD_7:
00498DF7  B8 01 00 00 00            MOV EAX,0x1
00498DFC  5F                        POP EDI
00498DFD  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00498E00  89 83 A1 00 00 00         MOV dword ptr [EBX + 0xa1],EAX
00498E06  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00498E09  81 C3 FF 00 00 00         ADD EBX,0xff
00498E0F  5E                        POP ESI
00498E10  8B 08                     MOV ECX,dword ptr [EAX]
00498E12  89 0B                     MOV dword ptr [EBX],ECX
00498E14  5B                        POP EBX
00498E15  8B E5                     MOV ESP,EBP
00498E17  5D                        POP EBP
00498E18  C2 08 00                  RET 0x8
switchD_00498d40::caseD_6:
00498E1B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00498E1E  B8 01 00 00 00            MOV EAX,0x1
00498E23  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00498E26  89 83 9D 00 00 00         MOV dword ptr [EBX + 0x9d],EAX
00498E2C  8B 32                     MOV ESI,dword ptr [EDX]
00498E2E  81 C3 03 01 00 00         ADD EBX,0x103
00498E34  8B CB                     MOV ECX,EBX
00498E36  50                        PUSH EAX
00498E37  6A 06                     PUSH 0x6
00498E39  50                        PUSH EAX
00498E3A  89 31                     MOV dword ptr [ECX],ESI
00498E3C  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
00498E3F  6A 00                     PUSH 0x0
00498E41  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00498E44  8B 3B                     MOV EDI,dword ptr [EBX]
00498E46  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00498E49  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00498E4C  E8 3F 54 21 00            CALL 0x006ae290
00498E51  89 03                     MOV dword ptr [EBX],EAX
00498E53  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00498E56  33 F6                     XOR ESI,ESI
00498E58  85 C0                     TEST EAX,EAX
00498E5A  0F 8E A6 05 00 00         JLE 0x00499406
LAB_00498e60:
00498E60  3B 77 0C                  CMP ESI,dword ptr [EDI + 0xc]
00498E63  73 0D                     JNC 0x00498e72
00498E65  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00498E68  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
00498E6B  0F AF C6                  IMUL EAX,ESI
00498E6E  03 C1                     ADD EAX,ECX
00498E70  EB 02                     JMP 0x00498e74
LAB_00498e72:
00498E72  33 C0                     XOR EAX,EAX
LAB_00498e74:
00498E74  8B 10                     MOV EDX,dword ptr [EAX]
00498E76  8D 4D F4                  LEA ECX,[EBP + -0xc]
00498E79  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00498E7C  8B 13                     MOV EDX,dword ptr [EBX]
00498E7E  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00498E82  51                        PUSH ECX
00498E83  56                        PUSH ESI
00498E84  52                        PUSH EDX
00498E85  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
00498E89  E8 B2 52 21 00            CALL 0x006ae140
00498E8E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00498E91  46                        INC ESI
00498E92  3B F0                     CMP ESI,EAX
00498E94  7C CA                     JL 0x00498e60
00498E96  5F                        POP EDI
00498E97  5E                        POP ESI
00498E98  5B                        POP EBX
00498E99  8B E5                     MOV ESP,EBP
00498E9B  5D                        POP EBP
00498E9C  C2 08 00                  RET 0x8
switchD_00498d40::caseD_8:
00498E9F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00498EA2  BA 01 00 00 00            MOV EDX,0x1
00498EA7  8D 83 0B 01 00 00         LEA EAX,[EBX + 0x10b]
00498EAD  89 53 65                  MOV dword ptr [EBX + 0x65],EDX
00498EB0  B9 0B 00 00 00            MOV ECX,0xb
00498EB5  8B F8                     MOV EDI,EAX
00498EB7  89 93 A5 00 00 00         MOV dword ptr [EBX + 0xa5],EDX
00498EBD  F3 A5                     MOVSD.REP ES:EDI,ESI
00498EBF  83 38 00                  CMP dword ptr [EAX],0x0
00498EC2  75 47                     JNZ 0x00498f0b
00498EC4  8B 83 0F 01 00 00         MOV EAX,dword ptr [EBX + 0x10f]
00498ECA  52                        PUSH EDX
00498ECB  6A 02                     PUSH 0x2
00498ECD  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00498ED0  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00498ED3  57                        PUSH EDI
00498ED4  6A 00                     PUSH 0x0
00498ED6  E8 B5 53 21 00            CALL 0x006ae290
00498EDB  33 F6                     XOR ESI,ESI
00498EDD  89 83 0F 01 00 00         MOV dword ptr [EBX + 0x10f],EAX
00498EE3  85 FF                     TEST EDI,EDI
00498EE5  7E 24                     JLE 0x00498f0b
LAB_00498ee7:
00498EE7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00498EEA  8D 45 0A                  LEA EAX,[EBP + 0xa]
00498EED  50                        PUSH EAX
00498EEE  8B D6                     MOV EDX,ESI
00498EF0  E8 7B 3D 21 00            CALL 0x006acc70
00498EF5  8B 93 0F 01 00 00         MOV EDX,dword ptr [EBX + 0x10f]
00498EFB  8D 4D 0A                  LEA ECX,[EBP + 0xa]
00498EFE  51                        PUSH ECX
00498EFF  56                        PUSH ESI
00498F00  52                        PUSH EDX
00498F01  E8 3A 52 21 00            CALL 0x006ae140
00498F06  46                        INC ESI
00498F07  3B F7                     CMP ESI,EDI
00498F09  7C DC                     JL 0x00498ee7
LAB_00498f0b:
00498F0B  8B 83 23 01 00 00         MOV EAX,dword ptr [EBX + 0x123]
00498F11  85 C0                     TEST EAX,EAX
00498F13  0F 85 ED 04 00 00         JNZ 0x00499406
00498F19  8B 83 27 01 00 00         MOV EAX,dword ptr [EBX + 0x127]
00498F1F  6A 01                     PUSH 0x1
00498F21  6A 02                     PUSH 0x2
00498F23  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00498F26  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00498F29  57                        PUSH EDI
00498F2A  6A 00                     PUSH 0x0
00498F2C  E8 5F 53 21 00            CALL 0x006ae290
00498F31  33 F6                     XOR ESI,ESI
00498F33  89 83 27 01 00 00         MOV dword ptr [EBX + 0x127],EAX
00498F39  85 FF                     TEST EDI,EDI
00498F3B  0F 8E C5 04 00 00         JLE 0x00499406
LAB_00498f41:
00498F41  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00498F44  8D 45 0A                  LEA EAX,[EBP + 0xa]
00498F47  50                        PUSH EAX
00498F48  8B D6                     MOV EDX,ESI
00498F4A  E8 21 3D 21 00            CALL 0x006acc70
00498F4F  8B 93 27 01 00 00         MOV EDX,dword ptr [EBX + 0x127]
00498F55  8D 4D 0A                  LEA ECX,[EBP + 0xa]
00498F58  51                        PUSH ECX
00498F59  56                        PUSH ESI
00498F5A  52                        PUSH EDX
00498F5B  E8 E0 51 21 00            CALL 0x006ae140
00498F60  46                        INC ESI
00498F61  3B F7                     CMP ESI,EDI
00498F63  7C DC                     JL 0x00498f41
00498F65  5F                        POP EDI
00498F66  5E                        POP ESI
00498F67  5B                        POP EBX
00498F68  8B E5                     MOV ESP,EBP
00498F6A  5D                        POP EBP
00498F6B  C2 08 00                  RET 0x8
switchD_00498d40::caseD_9:
00498F6E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00498F71  B8 01 00 00 00            MOV EAX,0x1
00498F76  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00498F79  B9 07 00 00 00            MOV ECX,0x7
00498F7E  8D BB 37 01 00 00         LEA EDI,[EBX + 0x137]
00498F84  89 83 A9 00 00 00         MOV dword ptr [EBX + 0xa9],EAX
00498F8A  F3 A5                     MOVSD.REP ES:EDI,ESI
00498F8C  66 A5                     MOVSW ES:EDI,ESI
00498F8E  A4                        MOVSB ES:EDI,ESI
00498F8F  5F                        POP EDI
00498F90  5E                        POP ESI
00498F91  5B                        POP EBX
00498F92  8B E5                     MOV ESP,EBP
00498F94  5D                        POP EBP
00498F95  C2 08 00                  RET 0x8
switchD_00498d40::caseD_a:
00498F98  B8 01 00 00 00            MOV EAX,0x1
00498F9D  5F                        POP EDI
00498F9E  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00498FA1  89 83 AD 00 00 00         MOV dword ptr [EBX + 0xad],EAX
00498FA7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00498FAA  81 C3 56 01 00 00         ADD EBX,0x156
00498FB0  5E                        POP ESI
00498FB1  8B 08                     MOV ECX,dword ptr [EAX]
00498FB3  89 0B                     MOV dword ptr [EBX],ECX
00498FB5  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
00498FB9  66 89 53 04               MOV word ptr [EBX + 0x4],DX
00498FBD  5B                        POP EBX
00498FBE  8B E5                     MOV ESP,EBP
00498FC0  5D                        POP EBP
00498FC1  C2 08 00                  RET 0x8
switchD_00498d40::caseD_4:
00498FC4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00498FC7  B9 01 00 00 00            MOV ECX,0x1
00498FCC  8D 83 5C 01 00 00         LEA EAX,[EBX + 0x15c]
00498FD2  89 4B 65                  MOV dword ptr [EBX + 0x65],ECX
00498FD5  89 8B 95 00 00 00         MOV dword ptr [EBX + 0x95],ECX
00498FDB  8B 3A                     MOV EDI,dword ptr [EDX]
00498FDD  8B F0                     MOV ESI,EAX
00498FDF  89 3E                     MOV dword ptr [ESI],EDI
00498FE1  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
00498FE4  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
00498FE7  8B 10                     MOV EDX,dword ptr [EAX]
00498FE9  85 D2                     TEST EDX,EDX
00498FEB  0F 85 15 04 00 00         JNZ 0x00499406
00498FF1  8B 83 60 01 00 00         MOV EAX,dword ptr [EBX + 0x160]
00498FF7  51                        PUSH ECX
00498FF8  6A 02                     PUSH 0x2
00498FFA  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00498FFD  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00499000  57                        PUSH EDI
00499001  6A 00                     PUSH 0x0
00499003  E8 88 52 21 00            CALL 0x006ae290
00499008  33 F6                     XOR ESI,ESI
0049900A  89 83 60 01 00 00         MOV dword ptr [EBX + 0x160],EAX
00499010  85 FF                     TEST EDI,EDI
00499012  0F 8E EE 03 00 00         JLE 0x00499406
LAB_00499018:
00499018  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0049901B  8D 45 0A                  LEA EAX,[EBP + 0xa]
0049901E  50                        PUSH EAX
0049901F  8B D6                     MOV EDX,ESI
00499021  E8 4A 3C 21 00            CALL 0x006acc70
00499026  8B 93 60 01 00 00         MOV EDX,dword ptr [EBX + 0x160]
0049902C  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0049902F  51                        PUSH ECX
00499030  56                        PUSH ESI
00499031  52                        PUSH EDX
00499032  E8 09 51 21 00            CALL 0x006ae140
00499037  46                        INC ESI
00499038  3B F7                     CMP ESI,EDI
0049903A  7C DC                     JL 0x00499018
0049903C  5F                        POP EDI
0049903D  5E                        POP ESI
0049903E  5B                        POP EBX
0049903F  8B E5                     MOV ESP,EBP
00499041  5D                        POP EBP
00499042  C2 08 00                  RET 0x8
switchD_00498d40::caseD_5:
00499045  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00499048  8D 83 64 01 00 00         LEA EAX,[EBX + 0x164]
0049904E  BA 01 00 00 00            MOV EDX,0x1
00499053  B9 05 00 00 00            MOV ECX,0x5
00499058  8B F8                     MOV EDI,EAX
0049905A  89 53 65                  MOV dword ptr [EBX + 0x65],EDX
0049905D  89 93 99 00 00 00         MOV dword ptr [EBX + 0x99],EDX
00499063  F3 A5                     MOVSD.REP ES:EDI,ESI
00499065  83 38 00                  CMP dword ptr [EAX],0x0
00499068  0F 85 98 03 00 00         JNZ 0x00499406
0049906E  8B 83 68 01 00 00         MOV EAX,dword ptr [EBX + 0x168]
00499074  52                        PUSH EDX
00499075  6A 02                     PUSH 0x2
00499077  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0049907A  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0049907D  57                        PUSH EDI
0049907E  6A 00                     PUSH 0x0
00499080  E8 0B 52 21 00            CALL 0x006ae290
00499085  33 F6                     XOR ESI,ESI
00499087  89 83 68 01 00 00         MOV dword ptr [EBX + 0x168],EAX
0049908D  85 FF                     TEST EDI,EDI
0049908F  0F 8E 71 03 00 00         JLE 0x00499406
LAB_00499095:
00499095  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00499098  8D 45 0A                  LEA EAX,[EBP + 0xa]
0049909B  50                        PUSH EAX
0049909C  8B D6                     MOV EDX,ESI
0049909E  E8 CD 3B 21 00            CALL 0x006acc70
004990A3  8B 93 68 01 00 00         MOV EDX,dword ptr [EBX + 0x168]
004990A9  8D 4D 0A                  LEA ECX,[EBP + 0xa]
004990AC  51                        PUSH ECX
004990AD  56                        PUSH ESI
004990AE  52                        PUSH EDX
004990AF  E8 8C 50 21 00            CALL 0x006ae140
004990B4  46                        INC ESI
004990B5  3B F7                     CMP ESI,EDI
004990B7  7C DC                     JL 0x00499095
004990B9  5F                        POP EDI
004990BA  5E                        POP ESI
004990BB  5B                        POP EBX
004990BC  8B E5                     MOV ESP,EBP
004990BE  5D                        POP EBP
004990BF  C2 08 00                  RET 0x8
switchD_00498d40::caseD_b:
004990C2  B8 01 00 00 00            MOV EAX,0x1
004990C7  5F                        POP EDI
004990C8  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
004990CB  89 83 B1 00 00 00         MOV dword ptr [EBX + 0xb1],EAX
004990D1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004990D4  81 C3 78 01 00 00         ADD EBX,0x178
004990DA  5E                        POP ESI
004990DB  8B 08                     MOV ECX,dword ptr [EAX]
004990DD  89 0B                     MOV dword ptr [EBX],ECX
004990DF  5B                        POP EBX
004990E0  8B E5                     MOV ESP,EBP
004990E2  5D                        POP EBP
004990E3  C2 08 00                  RET 0x8
switchD_00498d40::caseD_c:
004990E6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004990E9  B8 01 00 00 00            MOV EAX,0x1
004990EE  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
004990F1  89 83 B5 00 00 00         MOV dword ptr [EBX + 0xb5],EAX
004990F7  8B 02                     MOV EAX,dword ptr [EDX]
004990F9  81 C3 7C 01 00 00         ADD EBX,0x17c
004990FF  5F                        POP EDI
00499100  5E                        POP ESI
00499101  89 03                     MOV dword ptr [EBX],EAX
00499103  66 8B 4A 04               MOV CX,word ptr [EDX + 0x4]
00499107  66 89 4B 04               MOV word ptr [EBX + 0x4],CX
0049910B  5B                        POP EBX
0049910C  8B E5                     MOV ESP,EBP
0049910E  5D                        POP EBP
0049910F  C2 08 00                  RET 0x8
switchD_00498d40::caseD_d:
00499112  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00499115  B8 01 00 00 00            MOV EAX,0x1
0049911A  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
0049911D  89 83 B9 00 00 00         MOV dword ptr [EBX + 0xb9],EAX
00499123  81 C3 82 01 00 00         ADD EBX,0x182
LAB_00499129:
00499129  8B 02                     MOV EAX,dword ptr [EDX]
0049912B  5F                        POP EDI
0049912C  89 03                     MOV dword ptr [EBX],EAX
0049912E  5E                        POP ESI
0049912F  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
00499132  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
00499135  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
00499139  66 89 53 08               MOV word ptr [EBX + 0x8],DX
0049913D  5B                        POP EBX
0049913E  8B E5                     MOV ESP,EBP
00499140  5D                        POP EBP
00499141  C2 08 00                  RET 0x8
switchD_00498d40::caseD_e:
00499144  B8 01 00 00 00            MOV EAX,0x1
00499149  5F                        POP EDI
0049914A  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
0049914D  89 83 BD 00 00 00         MOV dword ptr [EBX + 0xbd],EAX
00499153  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00499156  81 C3 8C 01 00 00         ADD EBX,0x18c
0049915C  5E                        POP ESI
0049915D  8B 08                     MOV ECX,dword ptr [EAX]
0049915F  89 0B                     MOV dword ptr [EBX],ECX
00499161  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
00499165  66 89 53 04               MOV word ptr [EBX + 0x4],DX
00499169  5B                        POP EBX
0049916A  8B E5                     MOV ESP,EBP
0049916C  5D                        POP EBP
0049916D  C2 08 00                  RET 0x8
switchD_00498d40::caseD_f:
00499170  B8 01 00 00 00            MOV EAX,0x1
00499175  5F                        POP EDI
00499176  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00499179  89 83 C1 00 00 00         MOV dword ptr [EBX + 0xc1],EAX
0049917F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00499182  81 C3 92 01 00 00         ADD EBX,0x192
00499188  5E                        POP ESI
00499189  8B 08                     MOV ECX,dword ptr [EAX]
0049918B  89 0B                     MOV dword ptr [EBX],ECX
0049918D  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
00499191  66 89 53 04               MOV word ptr [EBX + 0x4],DX
00499195  8A 40 06                  MOV AL,byte ptr [EAX + 0x6]
00499198  88 43 06                  MOV byte ptr [EBX + 0x6],AL
0049919B  5B                        POP EBX
0049919C  8B E5                     MOV ESP,EBP
0049919E  5D                        POP EBP
0049919F  C2 08 00                  RET 0x8
switchD_00498d40::caseD_11:
004991A2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004991A5  B8 01 00 00 00            MOV EAX,0x1
004991AA  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
004991AD  89 83 C9 00 00 00         MOV dword ptr [EBX + 0xc9],EAX
004991B3  8B 11                     MOV EDX,dword ptr [ECX]
004991B5  81 C3 99 01 00 00         ADD EBX,0x199
004991BB  5F                        POP EDI
004991BC  5E                        POP ESI
004991BD  89 13                     MOV dword ptr [EBX],EDX
004991BF  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
004991C2  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
004991C5  66 8B 49 08               MOV CX,word ptr [ECX + 0x8]
004991C9  66 89 4B 08               MOV word ptr [EBX + 0x8],CX
004991CD  5B                        POP EBX
004991CE  8B E5                     MOV ESP,EBP
004991D0  5D                        POP EBP
004991D1  C2 08 00                  RET 0x8
switchD_00498d40::caseD_10:
004991D4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004991D7  B8 01 00 00 00            MOV EAX,0x1
004991DC  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
004991DF  89 83 C5 00 00 00         MOV dword ptr [EBX + 0xc5],EAX
004991E5  8B 02                     MOV EAX,dword ptr [EDX]
004991E7  81 C3 A3 01 00 00         ADD EBX,0x1a3
004991ED  5F                        POP EDI
004991EE  5E                        POP ESI
004991EF  89 03                     MOV dword ptr [EBX],EAX
004991F1  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
004991F4  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
004991F7  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
004991FA  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
004991FD  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
00499200  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
00499203  5B                        POP EBX
00499204  8B E5                     MOV ESP,EBP
00499206  5D                        POP EBP
00499207  C2 08 00                  RET 0x8
switchD_00498d40::caseD_12:
0049920A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0049920D  B8 01 00 00 00            MOV EAX,0x1
00499212  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00499215  89 83 CD 00 00 00         MOV dword ptr [EBX + 0xcd],EAX
0049921B  8B 02                     MOV EAX,dword ptr [EDX]
0049921D  81 C3 B3 01 00 00         ADD EBX,0x1b3
00499223  5F                        POP EDI
00499224  5E                        POP ESI
00499225  89 03                     MOV dword ptr [EBX],EAX
00499227  66 8B 4A 04               MOV CX,word ptr [EDX + 0x4]
0049922B  66 89 4B 04               MOV word ptr [EBX + 0x4],CX
0049922F  5B                        POP EBX
00499230  8B E5                     MOV ESP,EBP
00499232  5D                        POP EBP
00499233  C2 08 00                  RET 0x8
switchD_00498d40::caseD_13:
00499236  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00499239  B8 01 00 00 00            MOV EAX,0x1
0049923E  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00499241  89 83 D1 00 00 00         MOV dword ptr [EBX + 0xd1],EAX
00499247  8B 02                     MOV EAX,dword ptr [EDX]
00499249  81 C3 B9 01 00 00         ADD EBX,0x1b9
0049924F  5F                        POP EDI
00499250  5E                        POP ESI
00499251  89 03                     MOV dword ptr [EBX],EAX
00499253  66 8B 4A 04               MOV CX,word ptr [EDX + 0x4]
00499257  66 89 4B 04               MOV word ptr [EBX + 0x4],CX
0049925B  5B                        POP EBX
0049925C  8B E5                     MOV ESP,EBP
0049925E  5D                        POP EBP
0049925F  C2 08 00                  RET 0x8
switchD_00498d40::caseD_14:
00499262  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00499265  B8 01 00 00 00            MOV EAX,0x1
0049926A  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
0049926D  89 83 D5 00 00 00         MOV dword ptr [EBX + 0xd5],EAX
00499273  8B 02                     MOV EAX,dword ptr [EDX]
00499275  81 C3 BF 01 00 00         ADD EBX,0x1bf
0049927B  5F                        POP EDI
0049927C  5E                        POP ESI
0049927D  89 03                     MOV dword ptr [EBX],EAX
0049927F  66 8B 4A 04               MOV CX,word ptr [EDX + 0x4]
00499283  66 89 4B 04               MOV word ptr [EBX + 0x4],CX
00499287  5B                        POP EBX
00499288  8B E5                     MOV ESP,EBP
0049928A  5D                        POP EBP
0049928B  C2 08 00                  RET 0x8
switchD_00498d40::caseD_15:
0049928E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00499291  B8 01 00 00 00            MOV EAX,0x1
00499296  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
00499299  89 83 D9 00 00 00         MOV dword ptr [EBX + 0xd9],EAX
0049929F  8B 02                     MOV EAX,dword ptr [EDX]
004992A1  81 C3 C5 01 00 00         ADD EBX,0x1c5
004992A7  5F                        POP EDI
004992A8  5E                        POP ESI
004992A9  89 03                     MOV dword ptr [EBX],EAX
004992AB  5B                        POP EBX
004992AC  8B E5                     MOV ESP,EBP
004992AE  5D                        POP EBP
004992AF  C2 08 00                  RET 0x8
switchD_00498d40::caseD_65:
004992B2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004992B5  B8 01 00 00 00            MOV EAX,0x1
004992BA  89 43 61                  MOV dword ptr [EBX + 0x61],EAX
004992BD  89 43 6D                  MOV dword ptr [EBX + 0x6d],EAX
004992C0  8A 11                     MOV DL,byte ptr [ECX]
004992C2  5F                        POP EDI
004992C3  88 93 C9 01 00 00         MOV byte ptr [EBX + 0x1c9],DL
004992C9  5E                        POP ESI
004992CA  5B                        POP EBX
004992CB  8B E5                     MOV ESP,EBP
004992CD  5D                        POP EBP
004992CE  C2 08 00                  RET 0x8
switchD_00498d40::caseD_66:
004992D1  8B 8B CA 01 00 00         MOV ECX,dword ptr [EBX + 0x1ca]
004992D7  B8 01 00 00 00            MOV EAX,0x1
004992DC  85 C9                     TEST ECX,ECX
004992DE  89 43 61                  MOV dword ptr [EBX + 0x61],EAX
004992E1  89 43 71                  MOV dword ptr [EBX + 0x71],EAX
004992E4  75 11                     JNZ 0x004992f7
004992E6  50                        PUSH EAX
004992E7  6A 02                     PUSH 0x2
004992E9  50                        PUSH EAX
004992EA  6A 00                     PUSH 0x0
004992EC  E8 9F 4F 21 00            CALL 0x006ae290
004992F1  89 83 CA 01 00 00         MOV dword ptr [EBX + 0x1ca],EAX
LAB_004992f7:
004992F7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004992FA  8B 8B CA 01 00 00         MOV ECX,dword ptr [EBX + 0x1ca]
00499300  50                        PUSH EAX
00499301  51                        PUSH ECX
00499302  E8 B9 4E 21 00            CALL 0x006ae1c0
00499307  5F                        POP EDI
00499308  5E                        POP ESI
00499309  5B                        POP EBX
0049930A  8B E5                     MOV ESP,EBP
0049930C  5D                        POP EBP
0049930D  C2 08 00                  RET 0x8
switchD_00498d40::caseD_67:
00499310  8B 8B CE 01 00 00         MOV ECX,dword ptr [EBX + 0x1ce]
00499316  B8 01 00 00 00            MOV EAX,0x1
0049931B  85 C9                     TEST ECX,ECX
0049931D  89 43 61                  MOV dword ptr [EBX + 0x61],EAX
00499320  89 43 75                  MOV dword ptr [EBX + 0x75],EAX
00499323  75 11                     JNZ 0x00499336
00499325  50                        PUSH EAX
00499326  6A 04                     PUSH 0x4
00499328  50                        PUSH EAX
00499329  6A 00                     PUSH 0x0
0049932B  E8 60 4F 21 00            CALL 0x006ae290
00499330  89 83 CE 01 00 00         MOV dword ptr [EBX + 0x1ce],EAX
LAB_00499336:
00499336  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00499339  8B 83 CE 01 00 00         MOV EAX,dword ptr [EBX + 0x1ce]
0049933F  52                        PUSH EDX
00499340  50                        PUSH EAX
00499341  E8 7A 4E 21 00            CALL 0x006ae1c0
00499346  5F                        POP EDI
00499347  5E                        POP ESI
00499348  5B                        POP EBX
00499349  8B E5                     MOV ESP,EBP
0049934B  5D                        POP EBP
0049934C  C2 08 00                  RET 0x8
switchD_00498d40::caseD_68:
0049934F  8B 8B D2 01 00 00         MOV ECX,dword ptr [EBX + 0x1d2]
00499355  B8 01 00 00 00            MOV EAX,0x1
0049935A  85 C9                     TEST ECX,ECX
0049935C  89 43 61                  MOV dword ptr [EBX + 0x61],EAX
0049935F  89 43 79                  MOV dword ptr [EBX + 0x79],EAX
00499362  75 11                     JNZ 0x00499375
00499364  50                        PUSH EAX
00499365  6A 02                     PUSH 0x2
00499367  50                        PUSH EAX
00499368  6A 00                     PUSH 0x0
0049936A  E8 21 4F 21 00            CALL 0x006ae290
0049936F  89 83 D2 01 00 00         MOV dword ptr [EBX + 0x1d2],EAX
LAB_00499375:
00499375  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00499378  8B 93 D2 01 00 00         MOV EDX,dword ptr [EBX + 0x1d2]
0049937E  51                        PUSH ECX
0049937F  52                        PUSH EDX
00499380  E8 3B 4E 21 00            CALL 0x006ae1c0
00499385  5F                        POP EDI
00499386  5E                        POP ESI
00499387  5B                        POP EBX
00499388  8B E5                     MOV ESP,EBP
0049938A  5D                        POP EBP
0049938B  C2 08 00                  RET 0x8
switchD_00498d40::caseD_69:
0049938E  8B 8B D6 01 00 00         MOV ECX,dword ptr [EBX + 0x1d6]
00499394  B8 01 00 00 00            MOV EAX,0x1
00499399  85 C9                     TEST ECX,ECX
0049939B  89 43 61                  MOV dword ptr [EBX + 0x61],EAX
0049939E  89 43 7D                  MOV dword ptr [EBX + 0x7d],EAX
004993A1  75 11                     JNZ 0x004993b4
004993A3  50                        PUSH EAX
004993A4  6A 02                     PUSH 0x2
004993A6  50                        PUSH EAX
004993A7  6A 00                     PUSH 0x0
004993A9  E8 E2 4E 21 00            CALL 0x006ae290
004993AE  89 83 D6 01 00 00         MOV dword ptr [EBX + 0x1d6],EAX
LAB_004993b4:
004993B4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004993B7  8B 8B D6 01 00 00         MOV ECX,dword ptr [EBX + 0x1d6]
004993BD  50                        PUSH EAX
004993BE  51                        PUSH ECX
004993BF  E8 FC 4D 21 00            CALL 0x006ae1c0
004993C4  5F                        POP EDI
004993C5  5E                        POP ESI
004993C6  5B                        POP EBX
004993C7  8B E5                     MOV ESP,EBP
004993C9  5D                        POP EBP
004993CA  C2 08 00                  RET 0x8
switchD_00498d40::caseD_6a:
004993CD  8B 8B DA 01 00 00         MOV ECX,dword ptr [EBX + 0x1da]
004993D3  B8 01 00 00 00            MOV EAX,0x1
004993D8  85 C9                     TEST ECX,ECX
004993DA  89 43 61                  MOV dword ptr [EBX + 0x61],EAX
004993DD  89 83 81 00 00 00         MOV dword ptr [EBX + 0x81],EAX
004993E3  75 11                     JNZ 0x004993f6
004993E5  50                        PUSH EAX
004993E6  6A 02                     PUSH 0x2
004993E8  50                        PUSH EAX
004993E9  6A 00                     PUSH 0x0
004993EB  E8 A0 4E 21 00            CALL 0x006ae290
004993F0  89 83 DA 01 00 00         MOV dword ptr [EBX + 0x1da],EAX
LAB_004993f6:
004993F6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004993F9  8B 83 DA 01 00 00         MOV EAX,dword ptr [EBX + 0x1da]
004993FF  52                        PUSH EDX
00499400  50                        PUSH EAX
00499401  E8 BA 4D 21 00            CALL 0x006ae1c0
switchD_00498d40::caseD_16:
00499406  5F                        POP EDI
00499407  5E                        POP ESI
00499408  5B                        POP EBX
00499409  8B E5                     MOV ESP,EBP
0049940B  5D                        POP EBP
0049940C  C2 08 00                  RET 0x8
