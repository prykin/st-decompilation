FUN_00706e30:
00706E30  55                        PUSH EBP
00706E31  8B EC                     MOV EBP,ESP
00706E33  83 EC 7C                  SUB ESP,0x7c
00706E36  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
00706E39  53                        PUSH EBX
00706E3A  56                        PUSH ESI
00706E3B  83 F8 02                  CMP EAX,0x2
00706E3E  57                        PUSH EDI
00706E3F  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00706E49  0F 8E B4 09 00 00         JLE 0x00707803
00706E4F  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
00706E52  83 F9 02                  CMP ECX,0x2
00706E55  0F 8E A8 09 00 00         JLE 0x00707803
00706E5B  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00706E5E  8D 72 01                  LEA ESI,[EDX + 0x1]
00706E61  BA 03 00 00 00            MOV EDX,0x3
00706E66  3B F0                     CMP ESI,EAX
00706E68  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
00706E6B  7C 05                     JL 0x00706e72
00706E6D  8B F2                     MOV ESI,EDX
00706E6F  89 55 40                  MOV dword ptr [EBP + 0x40],EDX
LAB_00706e72:
00706E72  3B F1                     CMP ESI,ECX
00706E74  7C 05                     JL 0x00706e7b
00706E76  8B F2                     MOV ESI,EDX
00706E78  89 55 40                  MOV dword ptr [EBP + 0x40],EDX
LAB_00706e7b:
00706E7B  8D 7D 84                  LEA EDI,[EBP + -0x7c]
00706E7E  C7 45 44 1F 00 00 00      MOV dword ptr [EBP + 0x44],0x1f
LAB_00706e85:
00706E85  E8 36 78 02 00            CALL 0x0072e6c0
00706E8A  99                        CDQ
00706E8B  F7 7D 40                  IDIV dword ptr [EBP + 0x40]
00706E8E  8B DA                     MOV EBX,EDX
00706E90  E8 2B 78 02 00            CALL 0x0072e6c0
00706E95  99                        CDQ
00706E96  F7 FE                     IDIV ESI
00706E98  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
00706E9B  83 C7 04                  ADD EDI,0x4
00706E9E  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
00706EA2  03 D3                     ADD EDX,EBX
00706EA4  48                        DEC EAX
00706EA5  89 57 FC                  MOV dword ptr [EDI + -0x4],EDX
00706EA8  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
00706EAB  75 D8                     JNZ 0x00706e85
00706EAD  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00706EB0  33 FF                     XOR EDI,EDI
00706EB2  48                        DEC EAX
00706EB3  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00706EB6  0F 88 47 09 00 00         JS 0x00707803
00706EBC  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
LAB_00706ebf:
00706EBF  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
00706EC2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00706EC5  83 F8 01                  CMP EAX,0x1
00706EC8  75 49                     JNZ 0x00706f13
00706ECA  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00706ECD  48                        DEC EAX
00706ECE  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00706ED1  0F 88 2C 09 00 00         JS 0x00707803
00706ED7  33 C0                     XOR EAX,EAX
00706ED9  8A 01                     MOV AL,byte ptr [ECX]
00706EDB  41                        INC ECX
00706EDC  85 C0                     TEST EAX,EAX
00706EDE  74 2C                     JZ 0x00706f0c
00706EE0  8B D6                     MOV EDX,ESI
LAB_00706ee2:
00706EE2  A8 80                     TEST AL,0x80
00706EE4  74 16                     JZ 0x00706efc
00706EE6  A8 40                     TEST AL,0x40
00706EE8  74 06                     JZ 0x00706ef0
00706EEA  41                        INC ECX
00706EEB  83 E0 3F                  AND EAX,0x3f
00706EEE  EB 0F                     JMP 0x00706eff
LAB_00706ef0:
00706EF0  8B D8                     MOV EBX,EAX
00706EF2  83 E3 3F                  AND EBX,0x3f
00706EF5  03 CB                     ADD ECX,EBX
00706EF7  83 E0 3F                  AND EAX,0x3f
00706EFA  EB 03                     JMP 0x00706eff
LAB_00706efc:
00706EFC  83 E0 7F                  AND EAX,0x7f
LAB_00706eff:
00706EFF  2B D0                     SUB EDX,EAX
00706F01  85 D2                     TEST EDX,EDX
00706F03  7E 07                     JLE 0x00706f0c
00706F05  33 C0                     XOR EAX,EAX
00706F07  8A 01                     MOV AL,byte ptr [ECX]
00706F09  41                        INC ECX
00706F0A  EB D6                     JMP 0x00706ee2
LAB_00706f0c:
00706F0C  C7 45 3C 02 00 00 00      MOV dword ptr [EBP + 0x3c],0x2
LAB_00706f13:
00706F13  33 C0                     XOR EAX,EAX
00706F15  8A 01                     MOV AL,byte ptr [ECX]
00706F17  41                        INC ECX
00706F18  85 C0                     TEST EAX,EAX
00706F1A  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
00706F1D  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00706F20  0F 84 A7 08 00 00         JZ 0x007077cd
00706F26  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00706F29  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00706F2C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00706F2F  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00706F32  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
LAB_00706f35:
00706F35  A8 80                     TEST AL,0x80
00706F37  74 20                     JZ 0x00706f59
00706F39  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00706F3C  83 E0 3F                  AND EAX,0x3f
00706F3F  3B C3                     CMP EAX,EBX
00706F41  7F 38                     JG 0x00706f7b
00706F43  F6 45 44 40               TEST byte ptr [EBP + 0x44],0x40
00706F47  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706F4A  74 06                     JZ 0x00706f52
00706F4C  43                        INC EBX
00706F4D  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00706F50  EB 11                     JMP 0x00706f63
LAB_00706f52:
00706F52  03 D8                     ADD EBX,EAX
00706F54  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00706F57  EB 0A                     JMP 0x00706f63
LAB_00706f59:
00706F59  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00706F5C  83 E0 7F                  AND EAX,0x7f
00706F5F  3B C3                     CMP EAX,EBX
00706F61  7F 18                     JG 0x00706f7b
LAB_00706f63:
00706F63  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00706F66  2B D8                     SUB EBX,EAX
00706F68  33 C0                     XOR EAX,EAX
00706F6A  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
00706F6D  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706F70  8A 03                     MOV AL,byte ptr [EBX]
00706F72  43                        INC EBX
00706F73  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
00706F76  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00706F79  EB BA                     JMP 0x00706f35
LAB_00706f7b:
00706F7B  2B C3                     SUB EAX,EBX
00706F7D  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00706F80  81 E3 C0 00 00 00         AND EBX,0xc0
00706F86  80 FB 80                  CMP BL,0x80
00706F89  75 06                     JNZ 0x00706f91
00706F8B  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00706F8E  01 5D 1C                  ADD dword ptr [EBP + 0x1c],EBX
LAB_00706f91:
00706F91  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
00706F94  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
00706F97  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00706F9A  85 DB                     TEST EBX,EBX
00706F9C  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
00706F9F  0F 84 24 04 00 00         JZ 0x007073c9
00706FA5  3B C3                     CMP EAX,EBX
00706FA7  0F 8F 2D 02 00 00         JG 0x007071da
00706FAD  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00706FB0  81 E3 80 00 00 00         AND EBX,0x80
00706FB6  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
LAB_00706fb9:
00706FB9  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00706FBC  2B D8                     SUB EBX,EAX
00706FBE  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
00706FC1  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00706FC4  85 DB                     TEST EBX,EBX
00706FC6  0F 84 B7 01 00 00         JZ 0x00707183
00706FCC  F6 45 44 40               TEST byte ptr [EBP + 0x44],0x40
00706FD0  0F 84 CC 00 00 00         JZ 0x007070a2
00706FD6  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706FD9  43                        INC EBX
00706FDA  85 F6                     TEST ESI,ESI
00706FDC  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00706FDF  7E 3F                     JLE 0x00707020
00706FE1  83 FE 01                  CMP ESI,0x1
00706FE4  75 06                     JNZ 0x00706fec
00706FE6  BE 02 00 00 00            MOV ESI,0x2
00706FEB  48                        DEC EAX
LAB_00706fec:
00706FEC  85 C0                     TEST EAX,EAX
00706FEE  0F 8E A7 01 00 00         JLE 0x0070719b
00706FF4  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00706FF7  33 F6                     XOR ESI,ESI
00706FF9  66 8B 32                  MOV SI,word ptr [EDX]
00706FFC  3B DE                     CMP EBX,ESI
00706FFE  77 19                     JA 0x00707019
00707000  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707004  33 DB                     XOR EBX,EBX
00707006  47                        INC EDI
00707007  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0070700A  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
0070700D  83 FF 1F                  CMP EDI,0x1f
00707010  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00707013  88 19                     MOV byte ptr [ECX],BL
00707015  7C 02                     JL 0x00707019
00707017  33 FF                     XOR EDI,EDI
LAB_00707019:
00707019  83 C2 02                  ADD EDX,0x2
0070701C  41                        INC ECX
0070701D  33 F6                     XOR ESI,ESI
0070701F  48                        DEC EAX
LAB_00707020:
00707020  85 C0                     TEST EAX,EAX
00707022  0F 8E 73 01 00 00         JLE 0x0070719b
LAB_00707028:
00707028  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070702B  33 F6                     XOR ESI,ESI
0070702D  66 8B 32                  MOV SI,word ptr [EDX]
00707030  3B DE                     CMP EBX,ESI
00707032  77 19                     JA 0x0070704d
00707034  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707038  33 DB                     XOR EBX,EBX
0070703A  47                        INC EDI
0070703B  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0070703E  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00707041  83 FF 1F                  CMP EDI,0x1f
00707044  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00707047  88 19                     MOV byte ptr [ECX],BL
00707049  7C 02                     JL 0x0070704d
0070704B  33 FF                     XOR EDI,EDI
LAB_0070704d:
0070704D  83 C2 02                  ADD EDX,0x2
00707050  41                        INC ECX
00707051  48                        DEC EAX
00707052  BE 01 00 00 00            MOV ESI,0x1
00707057  85 C0                     TEST EAX,EAX
00707059  0F 8E 3C 01 00 00         JLE 0x0070719b
0070705F  48                        DEC EAX
00707060  BE 02 00 00 00            MOV ESI,0x2
00707065  85 C0                     TEST EAX,EAX
00707067  0F 8E 2E 01 00 00         JLE 0x0070719b
0070706D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707070  33 F6                     XOR ESI,ESI
00707072  66 8B 32                  MOV SI,word ptr [EDX]
00707075  3B DE                     CMP EBX,ESI
00707077  77 19                     JA 0x00707092
00707079  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
0070707D  33 DB                     XOR EBX,EBX
0070707F  47                        INC EDI
00707080  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707083  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00707086  83 FF 1F                  CMP EDI,0x1f
00707089  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
0070708C  88 19                     MOV byte ptr [ECX],BL
0070708E  7C 02                     JL 0x00707092
00707090  33 FF                     XOR EDI,EDI
LAB_00707092:
00707092  83 C2 02                  ADD EDX,0x2
00707095  41                        INC ECX
00707096  33 F6                     XOR ESI,ESI
00707098  48                        DEC EAX
00707099  85 C0                     TEST EAX,EAX
0070709B  7F 8B                     JG 0x00707028
0070709D  E9 F9 00 00 00            JMP 0x0070719b
LAB_007070a2:
007070A2  85 F6                     TEST ESI,ESI
007070A4  7E 4D                     JLE 0x007070f3
007070A6  83 FE 01                  CMP ESI,0x1
007070A9  75 0D                     JNZ 0x007070b8
007070AB  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007070AE  46                        INC ESI
007070AF  48                        DEC EAX
007070B0  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
007070B3  BE 02 00 00 00            MOV ESI,0x2
LAB_007070b8:
007070B8  85 C0                     TEST EAX,EAX
007070BA  0F 8E DB 00 00 00         JLE 0x0070719b
007070C0  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007070C3  33 F6                     XOR ESI,ESI
007070C5  66 8B 32                  MOV SI,word ptr [EDX]
007070C8  3B DE                     CMP EBX,ESI
007070CA  77 19                     JA 0x007070e5
007070CC  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
007070D0  33 DB                     XOR EBX,EBX
007070D2  47                        INC EDI
007070D3  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
007070D6  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
007070D9  83 FF 1F                  CMP EDI,0x1f
007070DC  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
007070DF  88 19                     MOV byte ptr [ECX],BL
007070E1  7C 02                     JL 0x007070e5
007070E3  33 FF                     XOR EDI,EDI
LAB_007070e5:
007070E5  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007070E8  83 C2 02                  ADD EDX,0x2
007070EB  41                        INC ECX
007070EC  46                        INC ESI
007070ED  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
007070F0  33 F6                     XOR ESI,ESI
007070F2  48                        DEC EAX
LAB_007070f3:
007070F3  85 C0                     TEST EAX,EAX
007070F5  0F 8E A0 00 00 00         JLE 0x0070719b
LAB_007070fb:
007070FB  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007070FE  33 F6                     XOR ESI,ESI
00707100  66 8B 32                  MOV SI,word ptr [EDX]
00707103  3B DE                     CMP EBX,ESI
00707105  77 19                     JA 0x00707120
00707107  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
0070710B  33 DB                     XOR EBX,EBX
0070710D  47                        INC EDI
0070710E  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707111  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00707114  83 FF 1F                  CMP EDI,0x1f
00707117  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
0070711A  88 19                     MOV byte ptr [ECX],BL
0070711C  7C 02                     JL 0x00707120
0070711E  33 FF                     XOR EDI,EDI
LAB_00707120:
00707120  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00707123  83 C2 02                  ADD EDX,0x2
00707126  41                        INC ECX
00707127  46                        INC ESI
00707128  48                        DEC EAX
00707129  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0070712C  85 C0                     TEST EAX,EAX
0070712E  BE 01 00 00 00            MOV ESI,0x1
00707133  7E 66                     JLE 0x0070719b
00707135  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00707138  46                        INC ESI
00707139  48                        DEC EAX
0070713A  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0070713D  BE 02 00 00 00            MOV ESI,0x2
00707142  85 C0                     TEST EAX,EAX
00707144  7E 55                     JLE 0x0070719b
00707146  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707149  33 F6                     XOR ESI,ESI
0070714B  66 8B 32                  MOV SI,word ptr [EDX]
0070714E  3B DE                     CMP EBX,ESI
00707150  77 19                     JA 0x0070716b
00707152  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707156  33 DB                     XOR EBX,EBX
00707158  47                        INC EDI
00707159  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0070715C  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
0070715F  83 FF 1F                  CMP EDI,0x1f
00707162  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00707165  88 19                     MOV byte ptr [ECX],BL
00707167  7C 02                     JL 0x0070716b
00707169  33 FF                     XOR EDI,EDI
LAB_0070716b:
0070716B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0070716E  83 C2 02                  ADD EDX,0x2
00707171  41                        INC ECX
00707172  46                        INC ESI
00707173  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00707176  33 F6                     XOR ESI,ESI
00707178  48                        DEC EAX
00707179  85 C0                     TEST EAX,EAX
0070717B  0F 8F 7A FF FF FF         JG 0x007070fb
00707181  EB 18                     JMP 0x0070719b
LAB_00707183:
00707183  48                        DEC EAX
00707184  78 15                     JS 0x0070719b
00707186  40                        INC EAX
LAB_00707187:
00707187  83 FE 01                  CMP ESI,0x1
0070718A  74 04                     JZ 0x00707190
0070718C  41                        INC ECX
0070718D  83 C2 02                  ADD EDX,0x2
LAB_00707190:
00707190  46                        INC ESI
00707191  83 FE 02                  CMP ESI,0x2
00707194  7E 02                     JLE 0x00707198
00707196  33 F6                     XOR ESI,ESI
LAB_00707198:
00707198  48                        DEC EAX
00707199  75 EC                     JNZ 0x00707187
LAB_0070719b:
0070719B  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
0070719E  85 C0                     TEST EAX,EAX
007071A0  7E 36                     JLE 0x007071d8
007071A2  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007071A5  33 C0                     XOR EAX,EAX
007071A7  8A 03                     MOV AL,byte ptr [EBX]
007071A9  8B D8                     MOV EBX,EAX
007071AB  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
007071AE  81 E3 80 00 00 00         AND EBX,0x80
007071B4  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
007071B7  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007071BA  43                        INC EBX
007071BB  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007071BE  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
007071C1  85 DB                     TEST EBX,EBX
007071C3  74 05                     JZ 0x007071ca
007071C5  83 E0 3F                  AND EAX,0x3f
007071C8  EB 03                     JMP 0x007071cd
LAB_007071ca:
007071CA  83 E0 7F                  AND EAX,0x7f
LAB_007071cd:
007071CD  3B 45 40                  CMP EAX,dword ptr [EBP + 0x40]
007071D0  0F 8E E3 FD FF FF         JLE 0x00706fb9
007071D6  EB 02                     JMP 0x007071da
LAB_007071d8:
007071D8  33 C0                     XOR EAX,EAX
LAB_007071da:
007071DA  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
007071DD  2B C3                     SUB EAX,EBX
007071DF  85 DB                     TEST EBX,EBX
007071E1  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007071E4  0F 8E 8D 05 00 00         JLE 0x00707777
007071EA  F6 C3 80                  TEST BL,0x80
007071ED  0F 84 84 05 00 00         JZ 0x00707777
007071F3  F6 C3 40                  TEST BL,0x40
007071F6  0F 84 D3 00 00 00         JZ 0x007072cf
007071FC  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007071FF  43                        INC EBX
00707200  85 F6                     TEST ESI,ESI
00707202  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707205  7E 43                     JLE 0x0070724a
00707207  83 FE 01                  CMP ESI,0x1
0070720A  75 03                     JNZ 0x0070720f
0070720C  FF 4D 40                  DEC dword ptr [EBP + 0x40]
LAB_0070720f:
0070720F  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00707212  85 F6                     TEST ESI,ESI
00707214  0F 8E 5A 05 00 00         JLE 0x00707774
0070721A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070721D  33 F6                     XOR ESI,ESI
0070721F  66 8B 32                  MOV SI,word ptr [EDX]
00707222  3B DE                     CMP EBX,ESI
00707224  77 19                     JA 0x0070723f
00707226  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
0070722A  33 DB                     XOR EBX,EBX
0070722C  47                        INC EDI
0070722D  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707230  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00707233  83 FF 1F                  CMP EDI,0x1f
00707236  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00707239  88 19                     MOV byte ptr [ECX],BL
0070723B  7C 02                     JL 0x0070723f
0070723D  33 FF                     XOR EDI,EDI
LAB_0070723f:
0070723F  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00707242  83 C2 02                  ADD EDX,0x2
00707245  41                        INC ECX
00707246  4E                        DEC ESI
00707247  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
LAB_0070724a:
0070724A  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
0070724D  85 F6                     TEST ESI,ESI
0070724F  0F 8E 1F 05 00 00         JLE 0x00707774
LAB_00707255:
00707255  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707258  33 F6                     XOR ESI,ESI
0070725A  66 8B 32                  MOV SI,word ptr [EDX]
0070725D  3B DE                     CMP EBX,ESI
0070725F  77 19                     JA 0x0070727a
00707261  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707265  33 DB                     XOR EBX,EBX
00707267  47                        INC EDI
00707268  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0070726B  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
0070726E  83 FF 1F                  CMP EDI,0x1f
00707271  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00707274  88 19                     MOV byte ptr [ECX],BL
00707276  7C 02                     JL 0x0070727a
00707278  33 FF                     XOR EDI,EDI
LAB_0070727a:
0070727A  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
0070727D  83 C2 02                  ADD EDX,0x2
00707280  41                        INC ECX
00707281  4E                        DEC ESI
00707282  85 F6                     TEST ESI,ESI
00707284  0F 8E EA 04 00 00         JLE 0x00707774
0070728A  4E                        DEC ESI
0070728B  85 F6                     TEST ESI,ESI
0070728D  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
00707290  0F 8E DE 04 00 00         JLE 0x00707774
00707296  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707299  33 F6                     XOR ESI,ESI
0070729B  66 8B 32                  MOV SI,word ptr [EDX]
0070729E  3B DE                     CMP EBX,ESI
007072A0  77 19                     JA 0x007072bb
007072A2  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
007072A6  33 DB                     XOR EBX,EBX
007072A8  47                        INC EDI
007072A9  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
007072AC  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
007072AF  83 FF 1F                  CMP EDI,0x1f
007072B2  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
007072B5  88 19                     MOV byte ptr [ECX],BL
007072B7  7C 02                     JL 0x007072bb
007072B9  33 FF                     XOR EDI,EDI
LAB_007072bb:
007072BB  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007072BE  83 C2 02                  ADD EDX,0x2
007072C1  41                        INC ECX
007072C2  4E                        DEC ESI
007072C3  85 F6                     TEST ESI,ESI
007072C5  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
007072C8  7F 8B                     JG 0x00707255
007072CA  E9 A5 04 00 00            JMP 0x00707774
LAB_007072cf:
007072CF  85 F6                     TEST ESI,ESI
007072D1  7E 58                     JLE 0x0070732b
007072D3  83 FE 01                  CMP ESI,0x1
007072D6  75 0E                     JNZ 0x007072e6
007072D8  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007072DB  46                        INC ESI
007072DC  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
007072DF  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007072E2  4E                        DEC ESI
007072E3  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
LAB_007072e6:
007072E6  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007072E9  85 F6                     TEST ESI,ESI
007072EB  0F 8E 86 04 00 00         JLE 0x00707777
007072F1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007072F4  33 F6                     XOR ESI,ESI
007072F6  66 8B 32                  MOV SI,word ptr [EDX]
007072F9  3B DE                     CMP EBX,ESI
007072FB  77 19                     JA 0x00707316
007072FD  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707301  33 DB                     XOR EBX,EBX
00707303  47                        INC EDI
00707304  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707307  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
0070730A  83 FF 1F                  CMP EDI,0x1f
0070730D  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00707310  88 19                     MOV byte ptr [ECX],BL
00707312  7C 02                     JL 0x00707316
00707314  33 FF                     XOR EDI,EDI
LAB_00707316:
00707316  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707319  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
0070731C  83 C2 02                  ADD EDX,0x2
0070731F  41                        INC ECX
00707320  43                        INC EBX
00707321  4E                        DEC ESI
00707322  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707325  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00707328  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
LAB_0070732b:
0070732B  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
0070732E  85 F6                     TEST ESI,ESI
00707330  0F 8E 41 04 00 00         JLE 0x00707777
LAB_00707336:
00707336  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707339  33 F6                     XOR ESI,ESI
0070733B  66 8B 32                  MOV SI,word ptr [EDX]
0070733E  3B DE                     CMP EBX,ESI
00707340  77 19                     JA 0x0070735b
00707342  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707346  33 DB                     XOR EBX,EBX
00707348  47                        INC EDI
00707349  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0070734C  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
0070734F  83 FF 1F                  CMP EDI,0x1f
00707352  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00707355  88 19                     MOV byte ptr [ECX],BL
00707357  7C 02                     JL 0x0070735b
00707359  33 FF                     XOR EDI,EDI
LAB_0070735b:
0070735B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0070735E  83 C2 02                  ADD EDX,0x2
00707361  41                        INC ECX
00707362  46                        INC ESI
00707363  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00707366  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00707369  4E                        DEC ESI
0070736A  85 F6                     TEST ESI,ESI
0070736C  0F 8E 02 04 00 00         JLE 0x00707774
00707372  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707375  43                        INC EBX
00707376  4E                        DEC ESI
00707377  85 F6                     TEST ESI,ESI
00707379  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070737C  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
0070737F  0F 8E EF 03 00 00         JLE 0x00707774
00707385  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707388  33 F6                     XOR ESI,ESI
0070738A  66 8B 32                  MOV SI,word ptr [EDX]
0070738D  3B DE                     CMP EBX,ESI
0070738F  77 19                     JA 0x007073aa
00707391  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707395  33 DB                     XOR EBX,EBX
00707397  47                        INC EDI
00707398  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0070739B  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
0070739E  83 FF 1F                  CMP EDI,0x1f
007073A1  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
007073A4  88 19                     MOV byte ptr [ECX],BL
007073A6  7C 02                     JL 0x007073aa
007073A8  33 FF                     XOR EDI,EDI
LAB_007073aa:
007073AA  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007073AD  83 C2 02                  ADD EDX,0x2
007073B0  41                        INC ECX
007073B1  46                        INC ESI
007073B2  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
007073B5  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007073B8  4E                        DEC ESI
007073B9  85 F6                     TEST ESI,ESI
007073BB  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
007073BE  0F 8F 72 FF FF FF         JG 0x00707336
007073C4  E9 AB 03 00 00            JMP 0x00707774
LAB_007073c9:
007073C9  3B C3                     CMP EAX,EBX
007073CB  0F 8F F9 01 00 00         JG 0x007075ca
007073D1  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007073D4  81 E3 80 00 00 00         AND EBX,0x80
007073DA  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
LAB_007073dd:
007073DD  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
007073E0  2B D8                     SUB EBX,EAX
007073E2  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
007073E5  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
007073E8  85 DB                     TEST EBX,EBX
007073EA  0F 84 83 01 00 00         JZ 0x00707573
007073F0  F6 45 44 40               TEST byte ptr [EBP + 0x44],0x40
007073F4  0F 84 B4 00 00 00         JZ 0x007074ae
007073FA  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007073FD  43                        INC EBX
007073FE  85 F6                     TEST ESI,ESI
00707400  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707403  7E 37                     JLE 0x0070743c
00707405  83 FE 01                  CMP ESI,0x1
00707408  75 06                     JNZ 0x00707410
0070740A  BE 02 00 00 00            MOV ESI,0x2
0070740F  48                        DEC EAX
LAB_00707410:
00707410  85 C0                     TEST EAX,EAX
00707412  0F 8E 73 01 00 00         JLE 0x0070758b
00707418  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070741B  33 F6                     XOR ESI,ESI
0070741D  66 8B 32                  MOV SI,word ptr [EDX]
00707420  3B DE                     CMP EBX,ESI
00707422  77 11                     JA 0x00707435
00707424  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707428  47                        INC EDI
00707429  83 FF 1F                  CMP EDI,0x1f
0070742C  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0070742F  88 19                     MOV byte ptr [ECX],BL
00707431  7C 02                     JL 0x00707435
00707433  33 FF                     XOR EDI,EDI
LAB_00707435:
00707435  83 C2 02                  ADD EDX,0x2
00707438  41                        INC ECX
00707439  33 F6                     XOR ESI,ESI
0070743B  48                        DEC EAX
LAB_0070743c:
0070743C  85 C0                     TEST EAX,EAX
0070743E  0F 8E 47 01 00 00         JLE 0x0070758b
LAB_00707444:
00707444  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707447  33 F6                     XOR ESI,ESI
00707449  66 8B 32                  MOV SI,word ptr [EDX]
0070744C  3B DE                     CMP EBX,ESI
0070744E  77 11                     JA 0x00707461
00707450  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707454  47                        INC EDI
00707455  83 FF 1F                  CMP EDI,0x1f
00707458  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0070745B  88 19                     MOV byte ptr [ECX],BL
0070745D  7C 02                     JL 0x00707461
0070745F  33 FF                     XOR EDI,EDI
LAB_00707461:
00707461  83 C2 02                  ADD EDX,0x2
00707464  41                        INC ECX
00707465  48                        DEC EAX
00707466  BE 01 00 00 00            MOV ESI,0x1
0070746B  85 C0                     TEST EAX,EAX
0070746D  0F 8E 18 01 00 00         JLE 0x0070758b
00707473  48                        DEC EAX
00707474  BE 02 00 00 00            MOV ESI,0x2
00707479  85 C0                     TEST EAX,EAX
0070747B  0F 8E 0A 01 00 00         JLE 0x0070758b
00707481  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707484  33 F6                     XOR ESI,ESI
00707486  66 8B 32                  MOV SI,word ptr [EDX]
00707489  3B DE                     CMP EBX,ESI
0070748B  77 11                     JA 0x0070749e
0070748D  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707491  47                        INC EDI
00707492  83 FF 1F                  CMP EDI,0x1f
00707495  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707498  88 19                     MOV byte ptr [ECX],BL
0070749A  7C 02                     JL 0x0070749e
0070749C  33 FF                     XOR EDI,EDI
LAB_0070749e:
0070749E  83 C2 02                  ADD EDX,0x2
007074A1  41                        INC ECX
007074A2  33 F6                     XOR ESI,ESI
007074A4  48                        DEC EAX
007074A5  85 C0                     TEST EAX,EAX
007074A7  7F 9B                     JG 0x00707444
007074A9  E9 DD 00 00 00            JMP 0x0070758b
LAB_007074ae:
007074AE  85 F6                     TEST ESI,ESI
007074B0  7E 45                     JLE 0x007074f7
007074B2  83 FE 01                  CMP ESI,0x1
007074B5  75 0D                     JNZ 0x007074c4
007074B7  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007074BA  46                        INC ESI
007074BB  48                        DEC EAX
007074BC  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
007074BF  BE 02 00 00 00            MOV ESI,0x2
LAB_007074c4:
007074C4  85 C0                     TEST EAX,EAX
007074C6  0F 8E BF 00 00 00         JLE 0x0070758b
007074CC  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007074CF  33 F6                     XOR ESI,ESI
007074D1  66 8B 32                  MOV SI,word ptr [EDX]
007074D4  3B DE                     CMP EBX,ESI
007074D6  77 11                     JA 0x007074e9
007074D8  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
007074DC  47                        INC EDI
007074DD  83 FF 1F                  CMP EDI,0x1f
007074E0  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
007074E3  88 19                     MOV byte ptr [ECX],BL
007074E5  7C 02                     JL 0x007074e9
007074E7  33 FF                     XOR EDI,EDI
LAB_007074e9:
007074E9  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007074EC  83 C2 02                  ADD EDX,0x2
007074EF  41                        INC ECX
007074F0  46                        INC ESI
007074F1  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
007074F4  33 F6                     XOR ESI,ESI
007074F6  48                        DEC EAX
LAB_007074f7:
007074F7  85 C0                     TEST EAX,EAX
007074F9  0F 8E 8C 00 00 00         JLE 0x0070758b
LAB_007074ff:
007074FF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707502  33 F6                     XOR ESI,ESI
00707504  66 8B 32                  MOV SI,word ptr [EDX]
00707507  3B DE                     CMP EBX,ESI
00707509  77 11                     JA 0x0070751c
0070750B  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
0070750F  47                        INC EDI
00707510  83 FF 1F                  CMP EDI,0x1f
00707513  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707516  88 19                     MOV byte ptr [ECX],BL
00707518  7C 02                     JL 0x0070751c
0070751A  33 FF                     XOR EDI,EDI
LAB_0070751c:
0070751C  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0070751F  83 C2 02                  ADD EDX,0x2
00707522  41                        INC ECX
00707523  46                        INC ESI
00707524  48                        DEC EAX
00707525  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00707528  85 C0                     TEST EAX,EAX
0070752A  BE 01 00 00 00            MOV ESI,0x1
0070752F  7E 5A                     JLE 0x0070758b
00707531  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00707534  46                        INC ESI
00707535  48                        DEC EAX
00707536  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00707539  BE 02 00 00 00            MOV ESI,0x2
0070753E  85 C0                     TEST EAX,EAX
00707540  7E 49                     JLE 0x0070758b
00707542  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707545  33 F6                     XOR ESI,ESI
00707547  66 8B 32                  MOV SI,word ptr [EDX]
0070754A  3B DE                     CMP EBX,ESI
0070754C  77 11                     JA 0x0070755f
0070754E  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707552  47                        INC EDI
00707553  83 FF 1F                  CMP EDI,0x1f
00707556  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707559  88 19                     MOV byte ptr [ECX],BL
0070755B  7C 02                     JL 0x0070755f
0070755D  33 FF                     XOR EDI,EDI
LAB_0070755f:
0070755F  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00707562  83 C2 02                  ADD EDX,0x2
00707565  41                        INC ECX
00707566  46                        INC ESI
00707567  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0070756A  33 F6                     XOR ESI,ESI
0070756C  48                        DEC EAX
0070756D  85 C0                     TEST EAX,EAX
0070756F  7F 8E                     JG 0x007074ff
00707571  EB 18                     JMP 0x0070758b
LAB_00707573:
00707573  48                        DEC EAX
00707574  78 15                     JS 0x0070758b
00707576  40                        INC EAX
LAB_00707577:
00707577  83 FE 01                  CMP ESI,0x1
0070757A  74 04                     JZ 0x00707580
0070757C  41                        INC ECX
0070757D  83 C2 02                  ADD EDX,0x2
LAB_00707580:
00707580  46                        INC ESI
00707581  83 FE 02                  CMP ESI,0x2
00707584  7E 02                     JLE 0x00707588
00707586  33 F6                     XOR ESI,ESI
LAB_00707588:
00707588  48                        DEC EAX
00707589  75 EC                     JNZ 0x00707577
LAB_0070758b:
0070758B  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
0070758E  85 C0                     TEST EAX,EAX
00707590  7E 36                     JLE 0x007075c8
00707592  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707595  33 C0                     XOR EAX,EAX
00707597  8A 03                     MOV AL,byte ptr [EBX]
00707599  8B D8                     MOV EBX,EAX
0070759B  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
0070759E  81 E3 80 00 00 00         AND EBX,0x80
007075A4  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
007075A7  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007075AA  43                        INC EBX
007075AB  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007075AE  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
007075B1  85 DB                     TEST EBX,EBX
007075B3  74 05                     JZ 0x007075ba
007075B5  83 E0 3F                  AND EAX,0x3f
007075B8  EB 03                     JMP 0x007075bd
LAB_007075ba:
007075BA  83 E0 7F                  AND EAX,0x7f
LAB_007075bd:
007075BD  3B 45 40                  CMP EAX,dword ptr [EBP + 0x40]
007075C0  0F 8E 17 FE FF FF         JLE 0x007073dd
007075C6  EB 02                     JMP 0x007075ca
LAB_007075c8:
007075C8  33 C0                     XOR EAX,EAX
LAB_007075ca:
007075CA  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
007075CD  2B C3                     SUB EAX,EBX
007075CF  85 DB                     TEST EBX,EBX
007075D1  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007075D4  0F 8E 9D 01 00 00         JLE 0x00707777
007075DA  F6 C3 80                  TEST BL,0x80
007075DD  0F 84 94 01 00 00         JZ 0x00707777
007075E3  F6 C3 40                  TEST BL,0x40
007075E6  0F 84 BB 00 00 00         JZ 0x007076a7
007075EC  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007075EF  43                        INC EBX
007075F0  85 F6                     TEST ESI,ESI
007075F2  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007075F5  7E 3B                     JLE 0x00707632
007075F7  83 FE 01                  CMP ESI,0x1
007075FA  75 03                     JNZ 0x007075ff
007075FC  FF 4D 40                  DEC dword ptr [EBP + 0x40]
LAB_007075ff:
007075FF  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00707602  85 F6                     TEST ESI,ESI
00707604  0F 8E 6A 01 00 00         JLE 0x00707774
0070760A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070760D  33 F6                     XOR ESI,ESI
0070760F  66 8B 32                  MOV SI,word ptr [EDX]
00707612  3B DE                     CMP EBX,ESI
00707614  77 11                     JA 0x00707627
00707616  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
0070761A  47                        INC EDI
0070761B  83 FF 1F                  CMP EDI,0x1f
0070761E  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707621  88 19                     MOV byte ptr [ECX],BL
00707623  7C 02                     JL 0x00707627
00707625  33 FF                     XOR EDI,EDI
LAB_00707627:
00707627  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
0070762A  83 C2 02                  ADD EDX,0x2
0070762D  41                        INC ECX
0070762E  4E                        DEC ESI
0070762F  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
LAB_00707632:
00707632  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00707635  85 F6                     TEST ESI,ESI
00707637  0F 8E 37 01 00 00         JLE 0x00707774
LAB_0070763d:
0070763D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707640  33 F6                     XOR ESI,ESI
00707642  66 8B 32                  MOV SI,word ptr [EDX]
00707645  3B DE                     CMP EBX,ESI
00707647  77 11                     JA 0x0070765a
00707649  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
0070764D  47                        INC EDI
0070764E  83 FF 1F                  CMP EDI,0x1f
00707651  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707654  88 19                     MOV byte ptr [ECX],BL
00707656  7C 02                     JL 0x0070765a
00707658  33 FF                     XOR EDI,EDI
LAB_0070765a:
0070765A  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
0070765D  83 C2 02                  ADD EDX,0x2
00707660  41                        INC ECX
00707661  4E                        DEC ESI
00707662  85 F6                     TEST ESI,ESI
00707664  0F 8E 0A 01 00 00         JLE 0x00707774
0070766A  4E                        DEC ESI
0070766B  85 F6                     TEST ESI,ESI
0070766D  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
00707670  0F 8E FE 00 00 00         JLE 0x00707774
00707676  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707679  33 F6                     XOR ESI,ESI
0070767B  66 8B 32                  MOV SI,word ptr [EDX]
0070767E  3B DE                     CMP EBX,ESI
00707680  77 11                     JA 0x00707693
00707682  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707686  47                        INC EDI
00707687  83 FF 1F                  CMP EDI,0x1f
0070768A  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0070768D  88 19                     MOV byte ptr [ECX],BL
0070768F  7C 02                     JL 0x00707693
00707691  33 FF                     XOR EDI,EDI
LAB_00707693:
00707693  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00707696  83 C2 02                  ADD EDX,0x2
00707699  41                        INC ECX
0070769A  4E                        DEC ESI
0070769B  85 F6                     TEST ESI,ESI
0070769D  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
007076A0  7F 9B                     JG 0x0070763d
007076A2  E9 CD 00 00 00            JMP 0x00707774
LAB_007076a7:
007076A7  85 F6                     TEST ESI,ESI
007076A9  7E 50                     JLE 0x007076fb
007076AB  83 FE 01                  CMP ESI,0x1
007076AE  75 0E                     JNZ 0x007076be
007076B0  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007076B3  46                        INC ESI
007076B4  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
007076B7  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007076BA  4E                        DEC ESI
007076BB  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
LAB_007076be:
007076BE  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007076C1  85 F6                     TEST ESI,ESI
007076C3  0F 8E AE 00 00 00         JLE 0x00707777
007076C9  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007076CC  33 F6                     XOR ESI,ESI
007076CE  66 8B 32                  MOV SI,word ptr [EDX]
007076D1  3B DE                     CMP EBX,ESI
007076D3  77 11                     JA 0x007076e6
007076D5  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
007076D9  47                        INC EDI
007076DA  83 FF 1F                  CMP EDI,0x1f
007076DD  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
007076E0  88 19                     MOV byte ptr [ECX],BL
007076E2  7C 02                     JL 0x007076e6
007076E4  33 FF                     XOR EDI,EDI
LAB_007076e6:
007076E6  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007076E9  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007076EC  83 C2 02                  ADD EDX,0x2
007076EF  41                        INC ECX
007076F0  43                        INC EBX
007076F1  4E                        DEC ESI
007076F2  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007076F5  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
007076F8  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
LAB_007076fb:
007076FB  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
007076FE  85 F6                     TEST ESI,ESI
00707700  7E 75                     JLE 0x00707777
LAB_00707702:
00707702  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707705  33 F6                     XOR ESI,ESI
00707707  66 8B 32                  MOV SI,word ptr [EDX]
0070770A  3B DE                     CMP EBX,ESI
0070770C  77 11                     JA 0x0070771f
0070770E  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707712  47                        INC EDI
00707713  83 FF 1F                  CMP EDI,0x1f
00707716  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707719  88 19                     MOV byte ptr [ECX],BL
0070771B  7C 02                     JL 0x0070771f
0070771D  33 FF                     XOR EDI,EDI
LAB_0070771f:
0070771F  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00707722  83 C2 02                  ADD EDX,0x2
00707725  41                        INC ECX
00707726  46                        INC ESI
00707727  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0070772A  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
0070772D  4E                        DEC ESI
0070772E  85 F6                     TEST ESI,ESI
00707730  7E 42                     JLE 0x00707774
00707732  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707735  43                        INC EBX
00707736  4E                        DEC ESI
00707737  85 F6                     TEST ESI,ESI
00707739  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070773C  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
0070773F  7E 33                     JLE 0x00707774
00707741  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707744  33 F6                     XOR ESI,ESI
00707746  66 8B 32                  MOV SI,word ptr [EDX]
00707749  3B DE                     CMP EBX,ESI
0070774B  77 11                     JA 0x0070775e
0070774D  8B 74 BD 84               MOV ESI,dword ptr [EBP + EDI*0x4 + -0x7c]
00707751  47                        INC EDI
00707752  83 FF 1F                  CMP EDI,0x1f
00707755  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
00707758  88 19                     MOV byte ptr [ECX],BL
0070775A  7C 02                     JL 0x0070775e
0070775C  33 FF                     XOR EDI,EDI
LAB_0070775e:
0070775E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00707761  83 C2 02                  ADD EDX,0x2
00707764  41                        INC ECX
00707765  46                        INC ESI
00707766  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00707769  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
0070776C  4E                        DEC ESI
0070776D  85 F6                     TEST ESI,ESI
0070776F  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
00707772  7F 8E                     JG 0x00707702
LAB_00707774:
00707774  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
LAB_00707777:
00707777  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
0070777A  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0070777D  8B CE                     MOV ECX,ESI
0070777F  2B CA                     SUB ECX,EDX
00707781  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
00707784  2B CA                     SUB ECX,EDX
00707786  3B C1                     CMP EAX,ECX
00707788  7D 35                     JGE 0x007077bf
LAB_0070778a:
0070778A  81 E3 C0 00 00 00         AND EBX,0xc0
00707790  2B C8                     SUB ECX,EAX
00707792  80 FB 80                  CMP BL,0x80
00707795  75 03                     JNZ 0x0070779a
00707797  01 45 1C                  ADD dword ptr [EBP + 0x1c],EAX
LAB_0070779a:
0070779A  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0070779D  33 DB                     XOR EBX,EBX
0070779F  8A 18                     MOV BL,byte ptr [EAX]
007077A1  8B D3                     MOV EDX,EBX
007077A3  80 E2 80                  AND DL,0x80
007077A6  40                        INC EAX
007077A7  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
007077AA  8B C3                     MOV EAX,EBX
007077AC  84 D2                     TEST DL,DL
007077AE  74 0B                     JZ 0x007077bb
007077B0  83 E0 3F                  AND EAX,0x3f
007077B3  F6 C3 40                  TEST BL,0x40
007077B6  74 03                     JZ 0x007077bb
007077B8  FF 45 1C                  INC dword ptr [EBP + 0x1c]
LAB_007077bb:
007077BB  3B C1                     CMP EAX,ECX
007077BD  7C CB                     JL 0x0070778a
LAB_007077bf:
007077BF  81 E3 C0 00 00 00         AND EBX,0xc0
007077C5  80 FB 80                  CMP BL,0x80
007077C8  75 03                     JNZ 0x007077cd
007077CA  01 4D 1C                  ADD dword ptr [EBP + 0x1c],ECX
LAB_007077cd:
007077CD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007077D0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007077D3  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
007077D6  03 C8                     ADD ECX,EAX
007077D8  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
007077DB  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
007077DE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007077E1  03 D9                     ADD EBX,ECX
007077E3  40                        INC EAX
007077E4  83 F8 02                  CMP EAX,0x2
007077E7  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
007077EA  89 45 3C                  MOV dword ptr [EBP + 0x3c],EAX
007077ED  7E 07                     JLE 0x007077f6
007077EF  C7 45 3C 00 00 00 00      MOV dword ptr [EBP + 0x3c],0x0
LAB_007077f6:
007077F6  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
007077F9  48                        DEC EAX
007077FA  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
007077FD  0F 89 BC F6 FF FF         JNS 0x00706ebf
LAB_00707803:
00707803  5F                        POP EDI
00707804  5E                        POP ESI
00707805  5B                        POP EBX
00707806  8B E5                     MOV ESP,EBP
00707808  5D                        POP EBP
00707809  C2 40 00                  RET 0x40
