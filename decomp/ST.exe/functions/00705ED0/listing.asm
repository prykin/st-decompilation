FUN_00705ed0:
00705ED0  55                        PUSH EBP
00705ED1  8B EC                     MOV EBP,ESP
00705ED3  83 EC 08                  SUB ESP,0x8
00705ED6  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00705ED9  53                        PUSH EBX
00705EDA  48                        DEC EAX
00705EDB  56                        PUSH ESI
00705EDC  57                        PUSH EDI
00705EDD  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00705EE7  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
00705EEA  0F 88 41 04 00 00         JS 0x00706331
00705EF0  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00705EF3  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
LAB_00705ef6:
00705EF6  83 7D 30 01               CMP dword ptr [EBP + 0x30],0x1
00705EFA  75 49                     JNZ 0x00705f45
00705EFC  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00705EFF  48                        DEC EAX
00705F00  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
00705F03  0F 88 28 04 00 00         JS 0x00706331
00705F09  33 C0                     XOR EAX,EAX
00705F0B  8A 02                     MOV AL,byte ptr [EDX]
00705F0D  42                        INC EDX
00705F0E  85 C0                     TEST EAX,EAX
00705F10  74 2C                     JZ 0x00705f3e
00705F12  8B CF                     MOV ECX,EDI
LAB_00705f14:
00705F14  A8 80                     TEST AL,0x80
00705F16  74 16                     JZ 0x00705f2e
00705F18  A8 40                     TEST AL,0x40
00705F1A  74 06                     JZ 0x00705f22
00705F1C  42                        INC EDX
00705F1D  83 E0 3F                  AND EAX,0x3f
00705F20  EB 0F                     JMP 0x00705f31
LAB_00705f22:
00705F22  8B F0                     MOV ESI,EAX
00705F24  83 E6 3F                  AND ESI,0x3f
00705F27  03 D6                     ADD EDX,ESI
00705F29  83 E0 3F                  AND EAX,0x3f
00705F2C  EB 03                     JMP 0x00705f31
LAB_00705f2e:
00705F2E  83 E0 7F                  AND EAX,0x7f
LAB_00705f31:
00705F31  2B C8                     SUB ECX,EAX
00705F33  85 C9                     TEST ECX,ECX
00705F35  7E 07                     JLE 0x00705f3e
00705F37  33 C0                     XOR EAX,EAX
00705F39  8A 02                     MOV AL,byte ptr [EDX]
00705F3B  42                        INC EDX
00705F3C  EB D6                     JMP 0x00705f14
LAB_00705f3e:
00705F3E  C7 45 30 02 00 00 00      MOV dword ptr [EBP + 0x30],0x2
LAB_00705f45:
00705F45  33 C0                     XOR EAX,EAX
00705F47  8A 02                     MOV AL,byte ptr [EDX]
00705F49  42                        INC EDX
00705F4A  85 C0                     TEST EAX,EAX
00705F4C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00705F4F  0F 84 A6 03 00 00         JZ 0x007062fb
00705F55  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00705F58  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00705F5B  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00705F5E  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
00705F61  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
LAB_00705f64:
00705F64  A8 80                     TEST AL,0x80
00705F66  74 34                     JZ 0x00705f9c
00705F68  83 E0 3F                  AND EAX,0x3f
00705F6B  3B C3                     CMP EAX,EBX
00705F6D  7F 43                     JG 0x00705fb2
00705F6F  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
00705F73  74 13                     JZ 0x00705f88
00705F75  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00705F78  42                        INC EDX
00705F79  2B D8                     SUB EBX,EAX
00705F7B  33 C0                     XOR EAX,EAX
00705F7D  8A 02                     MOV AL,byte ptr [EDX]
00705F7F  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
00705F82  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00705F85  42                        INC EDX
00705F86  EB DC                     JMP 0x00705f64
LAB_00705f88:
00705F88  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00705F8B  03 D0                     ADD EDX,EAX
00705F8D  2B D8                     SUB EBX,EAX
00705F8F  33 C0                     XOR EAX,EAX
00705F91  8A 02                     MOV AL,byte ptr [EDX]
00705F93  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
00705F96  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00705F99  42                        INC EDX
00705F9A  EB C8                     JMP 0x00705f64
LAB_00705f9c:
00705F9C  83 E0 7F                  AND EAX,0x7f
00705F9F  3B C3                     CMP EAX,EBX
00705FA1  7F 0F                     JG 0x00705fb2
00705FA3  2B D8                     SUB EBX,EAX
00705FA5  33 C0                     XOR EAX,EAX
00705FA7  8A 02                     MOV AL,byte ptr [EDX]
00705FA9  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
00705FAC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00705FAF  42                        INC EDX
00705FB0  EB B2                     JMP 0x00705f64
LAB_00705fb2:
00705FB2  2B C3                     SUB EAX,EBX
00705FB4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00705FB7  81 E3 C0 00 00 00         AND EBX,0xc0
00705FBD  80 FB 80                  CMP BL,0x80
00705FC0  75 03                     JNZ 0x00705fc5
00705FC2  03 55 18                  ADD EDX,dword ptr [EBP + 0x18]
LAB_00705fc5:
00705FC5  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00705FC8  3B C3                     CMP EAX,EBX
00705FCA  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
00705FCD  0F 8F 8E 01 00 00         JG 0x00706161
00705FD3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00705FD6  81 E3 80 00 00 00         AND EBX,0x80
00705FDC  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00705fdf:
00705FDF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00705FE2  2B D8                     SUB EBX,EAX
00705FE4  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
00705FE7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00705FEA  85 DB                     TEST EBX,EBX
00705FEC  0F 84 26 01 00 00         JZ 0x00706118
00705FF2  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
00705FF6  0F 84 95 00 00 00         JZ 0x00706091
00705FFC  42                        INC EDX
00705FFD  85 FF                     TEST EDI,EDI
00705FFF  7E 25                     JLE 0x00706026
00706001  83 FF 01                  CMP EDI,0x1
00706004  75 06                     JNZ 0x0070600c
00706006  BF 02 00 00 00            MOV EDI,0x2
0070600B  48                        DEC EAX
LAB_0070600c:
0070600C  85 C0                     TEST EAX,EAX
0070600E  0F 8E 1A 01 00 00         JLE 0x0070612e
00706014  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
00706017  33 DB                     XOR EBX,EBX
00706019  8A 1E                     MOV BL,byte ptr [ESI]
0070601B  41                        INC ECX
0070601C  46                        INC ESI
0070601D  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706020  33 FF                     XOR EDI,EDI
00706022  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
00706025  48                        DEC EAX
LAB_00706026:
00706026  85 C0                     TEST EAX,EAX
00706028  0F 8E 00 01 00 00         JLE 0x0070612e
0070602E  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
00706031  33 DB                     XOR EBX,EBX
00706033  8A 1E                     MOV BL,byte ptr [ESI]
00706035  41                        INC ECX
00706036  46                        INC ESI
00706037  48                        DEC EAX
00706038  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
0070603B  BF 01 00 00 00            MOV EDI,0x1
00706040  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
00706043  85 C0                     TEST EAX,EAX
00706045  0F 8E E3 00 00 00         JLE 0x0070612e
LAB_0070604b:
0070604B  48                        DEC EAX
0070604C  BF 02 00 00 00            MOV EDI,0x2
00706051  85 C0                     TEST EAX,EAX
00706053  0F 8E D5 00 00 00         JLE 0x0070612e
00706059  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
0070605C  33 DB                     XOR EBX,EBX
0070605E  8A 1E                     MOV BL,byte ptr [ESI]
00706060  41                        INC ECX
00706061  46                        INC ESI
00706062  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706065  33 FF                     XOR EDI,EDI
00706067  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
0070606A  48                        DEC EAX
0070606B  85 C0                     TEST EAX,EAX
0070606D  0F 8E BB 00 00 00         JLE 0x0070612e
00706073  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
00706076  33 DB                     XOR EBX,EBX
00706078  8A 1E                     MOV BL,byte ptr [ESI]
0070607A  41                        INC ECX
0070607B  46                        INC ESI
0070607C  48                        DEC EAX
0070607D  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706080  BF 01 00 00 00            MOV EDI,0x1
00706085  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
00706088  85 C0                     TEST EAX,EAX
0070608A  7F BF                     JG 0x0070604b
0070608C  E9 9D 00 00 00            JMP 0x0070612e
LAB_00706091:
00706091  85 FF                     TEST EDI,EDI
00706093  7E 27                     JLE 0x007060bc
00706095  83 FF 01                  CMP EDI,0x1
00706098  75 07                     JNZ 0x007060a1
0070609A  42                        INC EDX
0070609B  BF 02 00 00 00            MOV EDI,0x2
007060A0  48                        DEC EAX
LAB_007060a1:
007060A1  85 C0                     TEST EAX,EAX
007060A3  0F 8E 85 00 00 00         JLE 0x0070612e
007060A9  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
007060AC  33 DB                     XOR EBX,EBX
007060AE  8A 1E                     MOV BL,byte ptr [ESI]
007060B0  41                        INC ECX
007060B1  46                        INC ESI
007060B2  42                        INC EDX
007060B3  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
007060B6  33 FF                     XOR EDI,EDI
007060B8  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
007060BB  48                        DEC EAX
LAB_007060bc:
007060BC  85 C0                     TEST EAX,EAX
007060BE  7E 6E                     JLE 0x0070612e
007060C0  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
007060C3  33 DB                     XOR EBX,EBX
007060C5  8A 1E                     MOV BL,byte ptr [ESI]
007060C7  41                        INC ECX
007060C8  46                        INC ESI
007060C9  42                        INC EDX
007060CA  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
007060CD  48                        DEC EAX
007060CE  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
007060D1  BF 01 00 00 00            MOV EDI,0x1
007060D6  85 C0                     TEST EAX,EAX
007060D8  7E 54                     JLE 0x0070612e
LAB_007060da:
007060DA  42                        INC EDX
007060DB  48                        DEC EAX
007060DC  85 C0                     TEST EAX,EAX
007060DE  BF 02 00 00 00            MOV EDI,0x2
007060E3  7E 49                     JLE 0x0070612e
007060E5  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
007060E8  33 DB                     XOR EBX,EBX
007060EA  8A 1E                     MOV BL,byte ptr [ESI]
007060EC  41                        INC ECX
007060ED  46                        INC ESI
007060EE  42                        INC EDX
007060EF  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
007060F2  33 FF                     XOR EDI,EDI
007060F4  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
007060F7  48                        DEC EAX
007060F8  85 C0                     TEST EAX,EAX
007060FA  7E 32                     JLE 0x0070612e
007060FC  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
007060FF  33 DB                     XOR EBX,EBX
00706101  8A 1E                     MOV BL,byte ptr [ESI]
00706103  41                        INC ECX
00706104  46                        INC ESI
00706105  42                        INC EDX
00706106  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706109  48                        DEC EAX
0070610A  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
0070610D  BF 01 00 00 00            MOV EDI,0x1
00706112  85 C0                     TEST EAX,EAX
00706114  7F C4                     JG 0x007060da
00706116  EB 16                     JMP 0x0070612e
LAB_00706118:
00706118  48                        DEC EAX
00706119  78 13                     JS 0x0070612e
0070611B  40                        INC EAX
LAB_0070611c:
0070611C  83 FF 01                  CMP EDI,0x1
0070611F  74 02                     JZ 0x00706123
00706121  41                        INC ECX
00706122  46                        INC ESI
LAB_00706123:
00706123  47                        INC EDI
00706124  83 FF 02                  CMP EDI,0x2
00706127  7E 02                     JLE 0x0070612b
00706129  33 FF                     XOR EDI,EDI
LAB_0070612b:
0070612B  48                        DEC EAX
0070612C  75 EE                     JNZ 0x0070611c
LAB_0070612e:
0070612E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00706131  85 C0                     TEST EAX,EAX
00706133  7E 2A                     JLE 0x0070615f
00706135  33 C0                     XOR EAX,EAX
00706137  8A 02                     MOV AL,byte ptr [EDX]
00706139  8B D8                     MOV EBX,EAX
0070613B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070613E  81 E3 80 00 00 00         AND EBX,0x80
00706144  42                        INC EDX
00706145  85 DB                     TEST EBX,EBX
00706147  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0070614A  74 05                     JZ 0x00706151
0070614C  83 E0 3F                  AND EAX,0x3f
0070614F  EB 03                     JMP 0x00706154
LAB_00706151:
00706151  83 E0 7F                  AND EAX,0x7f
LAB_00706154:
00706154  3B 45 18                  CMP EAX,dword ptr [EBP + 0x18]
00706157  0F 8E 82 FE FF FF         JLE 0x00705fdf
0070615D  EB 02                     JMP 0x00706161
LAB_0070615f:
0070615F  33 C0                     XOR EAX,EAX
LAB_00706161:
00706161  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00706164  2B C3                     SUB EAX,EBX
00706166  85 DB                     TEST EBX,EBX
00706168  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070616B  0F 8E 3F 01 00 00         JLE 0x007062b0
00706171  F6 C3 80                  TEST BL,0x80
00706174  0F 84 36 01 00 00         JZ 0x007062b0
0070617A  F6 C3 40                  TEST BL,0x40
0070617D  0F 84 9D 00 00 00         JZ 0x00706220
00706183  42                        INC EDX
00706184  85 FF                     TEST EDI,EDI
00706186  7E 2C                     JLE 0x007061b4
00706188  83 FF 01                  CMP EDI,0x1
0070618B  75 03                     JNZ 0x00706190
0070618D  FF 4D 18                  DEC dword ptr [EBP + 0x18]
LAB_00706190:
00706190  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00706193  85 FF                     TEST EDI,EDI
00706195  0F 8E 15 01 00 00         JLE 0x007062b0
0070619B  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
0070619E  33 DB                     XOR EBX,EBX
007061A0  8A 1E                     MOV BL,byte ptr [ESI]
007061A2  41                        INC ECX
007061A3  46                        INC ESI
007061A4  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
007061A7  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
007061AA  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
007061AD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007061B0  4F                        DEC EDI
007061B1  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
LAB_007061b4:
007061B4  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
007061B7  85 FF                     TEST EDI,EDI
007061B9  0F 8E F1 00 00 00         JLE 0x007062b0
007061BF  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
007061C2  33 DB                     XOR EBX,EBX
007061C4  8A 1E                     MOV BL,byte ptr [ESI]
007061C6  41                        INC ECX
007061C7  46                        INC ESI
007061C8  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
007061CB  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
007061CE  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
007061D1  4F                        DEC EDI
007061D2  85 FF                     TEST EDI,EDI
007061D4  0F 8E D3 00 00 00         JLE 0x007062ad
LAB_007061da:
007061DA  4F                        DEC EDI
007061DB  85 FF                     TEST EDI,EDI
007061DD  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
007061E0  0F 8E C7 00 00 00         JLE 0x007062ad
007061E6  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
007061E9  33 DB                     XOR EBX,EBX
007061EB  8A 1E                     MOV BL,byte ptr [ESI]
007061ED  41                        INC ECX
007061EE  46                        INC ESI
007061EF  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
007061F2  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
007061F5  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
007061F8  4F                        DEC EDI
007061F9  85 FF                     TEST EDI,EDI
007061FB  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
007061FE  0F 8E A9 00 00 00         JLE 0x007062ad
00706204  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
00706207  33 DB                     XOR EBX,EBX
00706209  8A 1E                     MOV BL,byte ptr [ESI]
0070620B  41                        INC ECX
0070620C  46                        INC ESI
0070620D  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706210  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00706213  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
00706216  4F                        DEC EDI
00706217  85 FF                     TEST EDI,EDI
00706219  7F BF                     JG 0x007061da
0070621B  E9 8D 00 00 00            JMP 0x007062ad
LAB_00706220:
00706220  85 FF                     TEST EDI,EDI
00706222  7E 2E                     JLE 0x00706252
00706224  83 FF 01                  CMP EDI,0x1
00706227  75 08                     JNZ 0x00706231
00706229  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0070622C  42                        INC EDX
0070622D  4F                        DEC EDI
0070622E  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
LAB_00706231:
00706231  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00706234  85 FF                     TEST EDI,EDI
00706236  7E 78                     JLE 0x007062b0
00706238  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
0070623B  33 DB                     XOR EBX,EBX
0070623D  8A 1E                     MOV BL,byte ptr [ESI]
0070623F  41                        INC ECX
00706240  46                        INC ESI
00706241  42                        INC EDX
00706242  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706245  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00706248  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
0070624B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070624E  4F                        DEC EDI
0070624F  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
LAB_00706252:
00706252  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00706255  85 FF                     TEST EDI,EDI
00706257  7E 57                     JLE 0x007062b0
00706259  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
0070625C  33 DB                     XOR EBX,EBX
0070625E  8A 1E                     MOV BL,byte ptr [ESI]
00706260  41                        INC ECX
00706261  46                        INC ESI
00706262  42                        INC EDX
00706263  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706266  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00706269  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
0070626C  4F                        DEC EDI
0070626D  85 FF                     TEST EDI,EDI
0070626F  7E 3C                     JLE 0x007062ad
LAB_00706271:
00706271  42                        INC EDX
00706272  4F                        DEC EDI
00706273  85 FF                     TEST EDI,EDI
00706275  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
00706278  7E 33                     JLE 0x007062ad
0070627A  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
0070627D  33 DB                     XOR EBX,EBX
0070627F  8A 1E                     MOV BL,byte ptr [ESI]
00706281  41                        INC ECX
00706282  46                        INC ESI
00706283  42                        INC EDX
00706284  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706287  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0070628A  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
0070628D  4F                        DEC EDI
0070628E  85 FF                     TEST EDI,EDI
00706290  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
00706293  7E 18                     JLE 0x007062ad
00706295  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
00706298  33 DB                     XOR EBX,EBX
0070629A  8A 1E                     MOV BL,byte ptr [ESI]
0070629C  41                        INC ECX
0070629D  46                        INC ESI
0070629E  42                        INC EDX
0070629F  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
007062A2  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
007062A5  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
007062A8  4F                        DEC EDI
007062A9  85 FF                     TEST EDI,EDI
007062AB  7F C4                     JG 0x00706271
LAB_007062ad:
007062AD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_007062b0:
007062B0  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
007062B3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
007062B6  8B F7                     MOV ESI,EDI
007062B8  2B F1                     SUB ESI,ECX
007062BA  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
007062BD  2B F1                     SUB ESI,ECX
007062BF  3B C6                     CMP EAX,ESI
007062C1  7D 2B                     JGE 0x007062ee
LAB_007062c3:
007062C3  81 E3 C0 00 00 00         AND EBX,0xc0
007062C9  2B F0                     SUB ESI,EAX
007062CB  80 FB 80                  CMP BL,0x80
007062CE  75 02                     JNZ 0x007062d2
007062D0  03 D0                     ADD EDX,EAX
LAB_007062d2:
007062D2  33 DB                     XOR EBX,EBX
007062D4  8A 1A                     MOV BL,byte ptr [EDX]
007062D6  8B C3                     MOV EAX,EBX
007062D8  24 80                     AND AL,0x80
007062DA  42                        INC EDX
007062DB  84 C0                     TEST AL,AL
007062DD  8B C3                     MOV EAX,EBX
007062DF  74 09                     JZ 0x007062ea
007062E1  83 E0 3F                  AND EAX,0x3f
007062E4  F6 C3 40                  TEST BL,0x40
007062E7  74 01                     JZ 0x007062ea
007062E9  42                        INC EDX
LAB_007062ea:
007062EA  3B C6                     CMP EAX,ESI
007062EC  7C D5                     JL 0x007062c3
LAB_007062ee:
007062EE  81 E3 C0 00 00 00         AND EBX,0xc0
007062F4  80 FB 80                  CMP BL,0x80
007062F7  75 02                     JNZ 0x007062fb
007062F9  03 D6                     ADD EDX,ESI
LAB_007062fb:
007062FB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007062FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00706301  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00706304  03 C1                     ADD EAX,ECX
00706306  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00706309  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070630C  03 D8                     ADD EBX,EAX
0070630E  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
00706311  40                        INC EAX
00706312  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00706315  83 F8 02                  CMP EAX,0x2
00706318  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
0070631B  7E 07                     JLE 0x00706324
0070631D  C7 45 30 00 00 00 00      MOV dword ptr [EBP + 0x30],0x0
LAB_00706324:
00706324  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00706327  48                        DEC EAX
00706328  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
0070632B  0F 89 C5 FB FF FF         JNS 0x00705ef6
LAB_00706331:
00706331  5F                        POP EDI
00706332  5E                        POP ESI
00706333  5B                        POP EBX
00706334  8B E5                     MOV ESP,EBP
00706336  5D                        POP EBP
00706337  C2 30 00                  RET 0x30
