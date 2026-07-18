FUN_00704e70:
00704E70  55                        PUSH EBP
00704E71  8B EC                     MOV EBP,ESP
00704E73  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00704E76  53                        PUSH EBX
00704E77  48                        DEC EAX
00704E78  56                        PUSH ESI
00704E79  57                        PUSH EDI
00704E7A  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00704E84  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
00704E87  0F 88 E9 02 00 00         JS 0x00705176
00704E8D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00704E90  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
LAB_00704e93:
00704E93  83 F8 01                  CMP EAX,0x1
00704E96  75 4A                     JNZ 0x00704ee2
00704E98  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00704E9B  48                        DEC EAX
00704E9C  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
00704E9F  0F 88 D1 02 00 00         JS 0x00705176
00704EA5  33 C0                     XOR EAX,EAX
00704EA7  8A 07                     MOV AL,byte ptr [EDI]
00704EA9  47                        INC EDI
00704EAA  85 C0                     TEST EAX,EAX
00704EAC  74 2D                     JZ 0x00704edb
00704EAE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
LAB_00704eb1:
00704EB1  A8 80                     TEST AL,0x80
00704EB3  74 16                     JZ 0x00704ecb
00704EB5  A8 40                     TEST AL,0x40
00704EB7  74 06                     JZ 0x00704ebf
00704EB9  47                        INC EDI
00704EBA  83 E0 3F                  AND EAX,0x3f
00704EBD  EB 0F                     JMP 0x00704ece
LAB_00704ebf:
00704EBF  8B D0                     MOV EDX,EAX
00704EC1  83 E2 3F                  AND EDX,0x3f
00704EC4  03 FA                     ADD EDI,EDX
00704EC6  83 E0 3F                  AND EAX,0x3f
00704EC9  EB 03                     JMP 0x00704ece
LAB_00704ecb:
00704ECB  83 E0 7F                  AND EAX,0x7f
LAB_00704ece:
00704ECE  2B C8                     SUB ECX,EAX
00704ED0  85 C9                     TEST ECX,ECX
00704ED2  7E 07                     JLE 0x00704edb
00704ED4  33 C0                     XOR EAX,EAX
00704ED6  8A 07                     MOV AL,byte ptr [EDI]
00704ED8  47                        INC EDI
00704ED9  EB D6                     JMP 0x00704eb1
LAB_00704edb:
00704EDB  C7 45 28 02 00 00 00      MOV dword ptr [EBP + 0x28],0x2
LAB_00704ee2:
00704EE2  33 DB                     XOR EBX,EBX
00704EE4  8A 1F                     MOV BL,byte ptr [EDI]
00704EE6  47                        INC EDI
00704EE7  85 DB                     TEST EBX,EBX
00704EE9  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00704EEC  0F 84 5B 02 00 00         JZ 0x0070514d
00704EF2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00704EF5  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00704EF8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
LAB_00704efb:
00704EFB  F6 C3 80                  TEST BL,0x80
00704EFE  8B C3                     MOV EAX,EBX
00704F00  74 21                     JZ 0x00704f23
00704F02  83 E0 3F                  AND EAX,0x3f
00704F05  3B C2                     CMP EAX,EDX
00704F07  7F 2A                     JG 0x00704f33
00704F09  F6 C3 40                  TEST BL,0x40
00704F0C  74 0A                     JZ 0x00704f18
00704F0E  47                        INC EDI
00704F0F  33 DB                     XOR EBX,EBX
00704F11  2B D0                     SUB EDX,EAX
00704F13  8A 1F                     MOV BL,byte ptr [EDI]
00704F15  47                        INC EDI
00704F16  EB E3                     JMP 0x00704efb
LAB_00704f18:
00704F18  03 F8                     ADD EDI,EAX
00704F1A  33 DB                     XOR EBX,EBX
00704F1C  2B D0                     SUB EDX,EAX
00704F1E  8A 1F                     MOV BL,byte ptr [EDI]
00704F20  47                        INC EDI
00704F21  EB D8                     JMP 0x00704efb
LAB_00704f23:
00704F23  83 E0 7F                  AND EAX,0x7f
00704F26  3B C2                     CMP EAX,EDX
00704F28  7F 09                     JG 0x00704f33
00704F2A  33 DB                     XOR EBX,EBX
00704F2C  2B D0                     SUB EDX,EAX
00704F2E  8A 1F                     MOV BL,byte ptr [EDI]
00704F30  47                        INC EDI
00704F31  EB C8                     JMP 0x00704efb
LAB_00704f33:
00704F33  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00704F36  81 E3 C0 00 00 00         AND EBX,0xc0
00704F3C  2B C2                     SUB EAX,EDX
00704F3E  80 FB 80                  CMP BL,0x80
00704F41  75 02                     JNZ 0x00704f45
00704F43  03 FA                     ADD EDI,EDX
LAB_00704f45:
00704F45  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00704F48  3B C3                     CMP EAX,EBX
00704F4A  0F 8F 17 01 00 00         JG 0x00705067
00704F50  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00704F53  81 E2 80 00 00 00         AND EDX,0x80
LAB_00704f59:
00704F59  2B D8                     SUB EBX,EAX
00704F5B  85 D2                     TEST EDX,EDX
00704F5D  0F 84 C3 00 00 00         JZ 0x00705026
00704F63  F6 45 10 40               TEST byte ptr [EBP + 0x10],0x40
00704F67  74 62                     JZ 0x00704fcb
00704F69  33 D2                     XOR EDX,EDX
00704F6B  8A 17                     MOV DL,byte ptr [EDI]
00704F6D  47                        INC EDI
00704F6E  85 F6                     TEST ESI,ESI
00704F70  7E 19                     JLE 0x00704f8b
00704F72  83 FE 01                  CMP ESI,0x1
00704F75  75 06                     JNZ 0x00704f7d
00704F77  BE 02 00 00 00            MOV ESI,0x2
00704F7C  48                        DEC EAX
LAB_00704f7d:
00704F7D  85 C0                     TEST EAX,EAX
00704F7F  0F 8E B6 00 00 00         JLE 0x0070503b
00704F85  88 11                     MOV byte ptr [ECX],DL
00704F87  41                        INC ECX
00704F88  33 F6                     XOR ESI,ESI
00704F8A  48                        DEC EAX
LAB_00704f8b:
00704F8B  85 C0                     TEST EAX,EAX
00704F8D  0F 8E A8 00 00 00         JLE 0x0070503b
00704F93  88 11                     MOV byte ptr [ECX],DL
00704F95  41                        INC ECX
00704F96  48                        DEC EAX
00704F97  BE 01 00 00 00            MOV ESI,0x1
00704F9C  85 C0                     TEST EAX,EAX
00704F9E  0F 8E 97 00 00 00         JLE 0x0070503b
LAB_00704fa4:
00704FA4  48                        DEC EAX
00704FA5  BE 02 00 00 00            MOV ESI,0x2
00704FAA  85 C0                     TEST EAX,EAX
00704FAC  0F 8E 89 00 00 00         JLE 0x0070503b
00704FB2  88 11                     MOV byte ptr [ECX],DL
00704FB4  41                        INC ECX
00704FB5  33 F6                     XOR ESI,ESI
00704FB7  48                        DEC EAX
00704FB8  85 C0                     TEST EAX,EAX
00704FBA  7E 7F                     JLE 0x0070503b
00704FBC  88 11                     MOV byte ptr [ECX],DL
00704FBE  41                        INC ECX
00704FBF  48                        DEC EAX
00704FC0  BE 01 00 00 00            MOV ESI,0x1
00704FC5  85 C0                     TEST EAX,EAX
00704FC7  7F DB                     JG 0x00704fa4
00704FC9  EB 70                     JMP 0x0070503b
LAB_00704fcb:
00704FCB  85 F6                     TEST ESI,ESI
00704FCD  7E 19                     JLE 0x00704fe8
00704FCF  83 FE 01                  CMP ESI,0x1
00704FD2  75 07                     JNZ 0x00704fdb
00704FD4  47                        INC EDI
00704FD5  BE 02 00 00 00            MOV ESI,0x2
00704FDA  48                        DEC EAX
LAB_00704fdb:
00704FDB  85 C0                     TEST EAX,EAX
00704FDD  7E 5C                     JLE 0x0070503b
00704FDF  8A 17                     MOV DL,byte ptr [EDI]
00704FE1  33 F6                     XOR ESI,ESI
00704FE3  88 11                     MOV byte ptr [ECX],DL
00704FE5  41                        INC ECX
00704FE6  47                        INC EDI
00704FE7  48                        DEC EAX
LAB_00704fe8:
00704FE8  85 C0                     TEST EAX,EAX
00704FEA  7E 4F                     JLE 0x0070503b
00704FEC  8A 17                     MOV DL,byte ptr [EDI]
00704FEE  BE 01 00 00 00            MOV ESI,0x1
00704FF3  88 11                     MOV byte ptr [ECX],DL
00704FF5  41                        INC ECX
00704FF6  47                        INC EDI
00704FF7  48                        DEC EAX
00704FF8  85 C0                     TEST EAX,EAX
00704FFA  7E 3F                     JLE 0x0070503b
LAB_00704ffc:
00704FFC  47                        INC EDI
00704FFD  48                        DEC EAX
00704FFE  85 C0                     TEST EAX,EAX
00705000  BE 02 00 00 00            MOV ESI,0x2
00705005  7E 34                     JLE 0x0070503b
00705007  8A 17                     MOV DL,byte ptr [EDI]
00705009  33 F6                     XOR ESI,ESI
0070500B  88 11                     MOV byte ptr [ECX],DL
0070500D  41                        INC ECX
0070500E  47                        INC EDI
0070500F  48                        DEC EAX
00705010  85 C0                     TEST EAX,EAX
00705012  7E 27                     JLE 0x0070503b
00705014  8A 17                     MOV DL,byte ptr [EDI]
00705016  BE 01 00 00 00            MOV ESI,0x1
0070501B  88 11                     MOV byte ptr [ECX],DL
0070501D  41                        INC ECX
0070501E  47                        INC EDI
0070501F  48                        DEC EAX
00705020  85 C0                     TEST EAX,EAX
00705022  7F D8                     JG 0x00704ffc
00705024  EB 15                     JMP 0x0070503b
LAB_00705026:
00705026  48                        DEC EAX
00705027  78 12                     JS 0x0070503b
00705029  40                        INC EAX
LAB_0070502a:
0070502A  83 FE 01                  CMP ESI,0x1
0070502D  74 01                     JZ 0x00705030
0070502F  41                        INC ECX
LAB_00705030:
00705030  46                        INC ESI
00705031  83 FE 02                  CMP ESI,0x2
00705034  7E 02                     JLE 0x00705038
00705036  33 F6                     XOR ESI,ESI
LAB_00705038:
00705038  48                        DEC EAX
00705039  75 EF                     JNZ 0x0070502a
LAB_0070503b:
0070503B  85 DB                     TEST EBX,EBX
0070503D  7E 26                     JLE 0x00705065
0070503F  33 C0                     XOR EAX,EAX
00705041  8A 07                     MOV AL,byte ptr [EDI]
00705043  8B D0                     MOV EDX,EAX
00705045  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00705048  81 E2 80 00 00 00         AND EDX,0x80
0070504E  47                        INC EDI
0070504F  85 D2                     TEST EDX,EDX
00705051  74 05                     JZ 0x00705058
00705053  83 E0 3F                  AND EAX,0x3f
00705056  EB 03                     JMP 0x0070505b
LAB_00705058:
00705058  83 E0 7F                  AND EAX,0x7f
LAB_0070505b:
0070505B  3B C3                     CMP EAX,EBX
0070505D  0F 8E F6 FE FF FF         JLE 0x00704f59
00705063  EB 02                     JMP 0x00705067
LAB_00705065:
00705065  33 C0                     XOR EAX,EAX
LAB_00705067:
00705067  2B C3                     SUB EAX,EBX
00705069  85 DB                     TEST EBX,EBX
0070506B  0F 8E 8C 00 00 00         JLE 0x007050fd
00705071  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
00705074  F6 C2 80                  TEST DL,0x80
00705077  0F 84 80 00 00 00         JZ 0x007050fd
0070507D  F6 C2 40                  TEST DL,0x40
00705080  74 3A                     JZ 0x007050bc
00705082  33 D2                     XOR EDX,EDX
00705084  8A 17                     MOV DL,byte ptr [EDI]
00705086  47                        INC EDI
00705087  85 F6                     TEST ESI,ESI
00705089  7E 0E                     JLE 0x00705099
0070508B  83 FE 01                  CMP ESI,0x1
0070508E  75 01                     JNZ 0x00705091
00705090  4B                        DEC EBX
LAB_00705091:
00705091  85 DB                     TEST EBX,EBX
00705093  7E 68                     JLE 0x007050fd
00705095  88 11                     MOV byte ptr [ECX],DL
00705097  41                        INC ECX
00705098  4B                        DEC EBX
LAB_00705099:
00705099  85 DB                     TEST EBX,EBX
0070509B  7E 60                     JLE 0x007050fd
0070509D  88 11                     MOV byte ptr [ECX],DL
0070509F  41                        INC ECX
007050A0  4B                        DEC EBX
007050A1  85 DB                     TEST EBX,EBX
007050A3  7E 58                     JLE 0x007050fd
LAB_007050a5:
007050A5  4B                        DEC EBX
007050A6  85 DB                     TEST EBX,EBX
007050A8  7E 53                     JLE 0x007050fd
007050AA  88 11                     MOV byte ptr [ECX],DL
007050AC  41                        INC ECX
007050AD  4B                        DEC EBX
007050AE  85 DB                     TEST EBX,EBX
007050B0  7E 4B                     JLE 0x007050fd
007050B2  88 11                     MOV byte ptr [ECX],DL
007050B4  41                        INC ECX
007050B5  4B                        DEC EBX
007050B6  85 DB                     TEST EBX,EBX
007050B8  7F EB                     JG 0x007050a5
007050BA  EB 41                     JMP 0x007050fd
LAB_007050bc:
007050BC  85 F6                     TEST ESI,ESI
007050BE  7E 12                     JLE 0x007050d2
007050C0  83 FE 01                  CMP ESI,0x1
007050C3  75 02                     JNZ 0x007050c7
007050C5  47                        INC EDI
007050C6  4B                        DEC EBX
LAB_007050c7:
007050C7  85 DB                     TEST EBX,EBX
007050C9  7E 32                     JLE 0x007050fd
007050CB  8A 17                     MOV DL,byte ptr [EDI]
007050CD  88 11                     MOV byte ptr [ECX],DL
007050CF  41                        INC ECX
007050D0  47                        INC EDI
007050D1  4B                        DEC EBX
LAB_007050d2:
007050D2  85 DB                     TEST EBX,EBX
007050D4  7E 27                     JLE 0x007050fd
007050D6  8A 17                     MOV DL,byte ptr [EDI]
007050D8  88 11                     MOV byte ptr [ECX],DL
007050DA  41                        INC ECX
007050DB  47                        INC EDI
007050DC  4B                        DEC EBX
007050DD  85 DB                     TEST EBX,EBX
007050DF  7E 1C                     JLE 0x007050fd
LAB_007050e1:
007050E1  47                        INC EDI
007050E2  4B                        DEC EBX
007050E3  85 DB                     TEST EBX,EBX
007050E5  7E 16                     JLE 0x007050fd
007050E7  8A 17                     MOV DL,byte ptr [EDI]
007050E9  88 11                     MOV byte ptr [ECX],DL
007050EB  41                        INC ECX
007050EC  47                        INC EDI
007050ED  4B                        DEC EBX
007050EE  85 DB                     TEST EBX,EBX
007050F0  7E 0B                     JLE 0x007050fd
007050F2  8A 17                     MOV DL,byte ptr [EDI]
007050F4  88 11                     MOV byte ptr [ECX],DL
007050F6  41                        INC ECX
007050F7  47                        INC EDI
007050F8  4B                        DEC EBX
007050F9  85 DB                     TEST EBX,EBX
007050FB  7F E4                     JG 0x007050e1
LAB_007050fd:
007050FD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00705100  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00705103  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00705106  2B CB                     SUB ECX,EBX
00705108  2B CE                     SUB ECX,ESI
0070510A  3B C1                     CMP EAX,ECX
0070510C  7D 31                     JGE 0x0070513f
LAB_0070510e:
0070510E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00705111  2B C8                     SUB ECX,EAX
00705113  81 E2 C0 00 00 00         AND EDX,0xc0
00705119  80 FA 80                  CMP DL,0x80
0070511C  75 02                     JNZ 0x00705120
0070511E  03 F8                     ADD EDI,EAX
LAB_00705120:
00705120  33 D2                     XOR EDX,EDX
00705122  8A 17                     MOV DL,byte ptr [EDI]
00705124  8B C2                     MOV EAX,EDX
00705126  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00705129  24 80                     AND AL,0x80
0070512B  47                        INC EDI
0070512C  84 C0                     TEST AL,AL
0070512E  8B C2                     MOV EAX,EDX
00705130  74 09                     JZ 0x0070513b
00705132  83 E0 3F                  AND EAX,0x3f
00705135  F6 C2 40                  TEST DL,0x40
00705138  74 01                     JZ 0x0070513b
0070513A  47                        INC EDI
LAB_0070513b:
0070513B  3B C1                     CMP EAX,ECX
0070513D  7C CF                     JL 0x0070510e
LAB_0070513f:
0070513F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00705142  25 C0 00 00 00            AND EAX,0xc0
00705147  3C 80                     CMP AL,0x80
00705149  75 02                     JNZ 0x0070514d
0070514B  03 F9                     ADD EDI,ECX
LAB_0070514d:
0070514D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00705150  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00705153  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00705156  03 F1                     ADD ESI,ECX
00705158  40                        INC EAX
00705159  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0070515C  83 F8 02                  CMP EAX,0x2
0070515F  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
00705162  7E 05                     JLE 0x00705169
00705164  33 C0                     XOR EAX,EAX
00705166  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
LAB_00705169:
00705169  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0070516C  49                        DEC ECX
0070516D  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
00705170  0F 89 1D FD FF FF         JNS 0x00704e93
LAB_00705176:
00705176  5F                        POP EDI
00705177  5E                        POP ESI
00705178  5B                        POP EBX
00705179  5D                        POP EBP
0070517A  C2 24 00                  RET 0x24
