FUN_00486e20:
00486E20  55                        PUSH EBP
00486E21  8B EC                     MOV EBP,ESP
00486E23  51                        PUSH ECX
00486E24  53                        PUSH EBX
00486E25  56                        PUSH ESI
00486E26  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00486E29  8B D9                     MOV EBX,ECX
00486E2B  57                        PUSH EDI
00486E2C  B9 17 00 00 00            MOV ECX,0x17
00486E31  33 C0                     XOR EAX,EAX
00486E33  8B FE                     MOV EDI,ESI
00486E35  F3 AB                     STOSD.REP ES:EDI
00486E37  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00486E3D  89 06                     MOV dword ptr [ESI],EAX
00486E3F  8B 8B F7 06 00 00         MOV ECX,dword ptr [EBX + 0x6f7]
00486E45  51                        PUSH ECX
00486E46  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00486E4C  E8 09 B1 F7 FF            CALL 0x00401f5a
00486E51  8B CB                     MOV ECX,EBX
00486E53  88 46 04                  MOV byte ptr [ESI + 0x4],AL
00486E56  C6 46 06 01               MOV byte ptr [ESI + 0x6],0x1
00486E5A  E8 0C B4 F7 FF            CALL 0x0040226b
00486E5F  85 C0                     TEST EAX,EAX
00486E61  74 06                     JZ 0x00486e69
00486E63  C6 46 07 00               MOV byte ptr [ESI + 0x7],0x0
00486E67  EB 04                     JMP 0x00486e6d
LAB_00486e69:
00486E69  C6 46 07 01               MOV byte ptr [ESI + 0x7],0x1
LAB_00486e6d:
00486E6D  8B 13                     MOV EDX,dword ptr [EBX]
00486E6F  8B CB                     MOV ECX,EBX
00486E71  FF 52 08                  CALL dword ptr [EDX + 0x8]
00486E74  BF 01 00 00 00            MOV EDI,0x1
00486E79  3B C7                     CMP EAX,EDI
00486E7B  75 06                     JNZ 0x00486e83
00486E7D  C6 46 08 01               MOV byte ptr [ESI + 0x8],0x1
00486E81  EB 04                     JMP 0x00486e87
LAB_00486e83:
00486E83  C6 46 08 00               MOV byte ptr [ESI + 0x8],0x0
LAB_00486e87:
00486E87  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
00486E8A  33 C9                     XOR ECX,ECX
00486E8C  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
00486E92  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00486E95  3B C1                     CMP EAX,ECX
00486E97  75 3A                     JNZ 0x00486ed3
00486E99  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
00486E9C  BA 02 00 00 00            MOV EDX,0x2
00486EA1  84 C0                     TEST AL,AL
00486EA3  76 53                     JBE 0x00486ef8
00486EA5  3A C2                     CMP AL,DL
00486EA7  76 37                     JBE 0x00486ee0
00486EA9  3C 03                     CMP AL,0x3
00486EAB  75 4B                     JNZ 0x00486ef8
00486EAD  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
00486EB0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00486EB6  52                        PUSH EDX
00486EB7  E8 FB DA F7 FF            CALL 0x004049b7
00486EBC  3C 01                     CMP AL,0x1
00486EBE  74 13                     JZ 0x00486ed3
00486EC0  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00486EC3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00486EC9  50                        PUSH EAX
00486ECA  E8 E8 DA F7 FF            CALL 0x004049b7
00486ECF  3C 02                     CMP AL,0x2
00486ED1  75 20                     JNZ 0x00486ef3
LAB_00486ed3:
00486ED3  C6 46 05 03               MOV byte ptr [ESI + 0x5],0x3
00486ED7  5F                        POP EDI
00486ED8  5E                        POP ESI
00486ED9  5B                        POP EBX
00486EDA  8B E5                     MOV ESP,EBP
00486EDC  5D                        POP EBP
00486EDD  C2 04 00                  RET 0x4
LAB_00486ee0:
00486EE0  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
00486EE3  51                        PUSH ECX
00486EE4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00486EEA  E8 C8 DA F7 FF            CALL 0x004049b7
00486EEF  3C 03                     CMP AL,0x3
00486EF1  74 E0                     JZ 0x00486ed3
LAB_00486ef3:
00486EF3  BA 02 00 00 00            MOV EDX,0x2
LAB_00486ef8:
00486EF8  C6 46 05 01               MOV byte ptr [ESI + 0x5],0x1
00486EFC  C6 46 39 01               MOV byte ptr [ESI + 0x39],0x1
00486F00  C6 46 38 01               MOV byte ptr [ESI + 0x38],0x1
00486F04  C6 46 37 01               MOV byte ptr [ESI + 0x37],0x1
00486F08  C6 46 36 01               MOV byte ptr [ESI + 0x36],0x1
00486F0C  8B 83 EE 07 00 00         MOV EAX,dword ptr [EBX + 0x7ee]
00486F12  C6 44 30 36 03            MOV byte ptr [EAX + ESI*0x1 + 0x36],0x3
00486F17  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00486F1D  48                        DEC EAX
00486F1E  83 F8 27                  CMP EAX,0x27
00486F21  0F 87 92 12 00 00         JA 0x004881b9
switchD_00486f27::switchD:
00486F27  FF 24 85 70 82 48 00      JMP dword ptr [EAX*0x4 + 0x488270]
switchD_00486f27::caseD_1:
00486F2E  B8 04 00 00 00            MOV EAX,0x4
00486F33  B9 06 00 00 00            MOV ECX,0x6
00486F38  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00486F3C  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
00486F40  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
00486F44  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
00486F47  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00486F4B  88 4E 0E                  MOV byte ptr [ESI + 0xe],CL
00486F4E  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00486F54  74 0F                     JZ 0x00486f65
00486F56  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00486F5D  74 06                     JZ 0x00486f65
00486F5F  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00486F63  EB 04                     JMP 0x00486f69
LAB_00486f65:
00486F65  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00486f69:
00486F69  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00486F6F  74 0F                     JZ 0x00486f80
00486F71  83 BB 59 04 00 00 66      CMP dword ptr [EBX + 0x459],0x66
00486F78  74 06                     JZ 0x00486f80
00486F7A  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00486F7E  EB 04                     JMP 0x00486f84
LAB_00486f80:
00486F80  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00486f84:
00486F84  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00486F8B  74 0F                     JZ 0x00486f9c
00486F8D  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00486F94  74 06                     JZ 0x00486f9c
00486F96  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00486F9A  EB 04                     JMP 0x00486fa0
LAB_00486f9c:
00486F9C  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00486fa0:
00486FA0  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
00486FA6  74 42                     JZ 0x00486fea
00486FA8  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
00486FAF  74 39                     JZ 0x00486fea
00486FB1  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00486FB5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00486FB8  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00486FBB  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00486FBE  C1 E2 04                  SHL EDX,0x4
00486FC1  03 D0                     ADD EDX,EAX
00486FC3  66 83 3C 55 7B 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7b],0x0
00486FCC  74 16                     JZ 0x00486fe4
00486FCE  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
00486FD4  8B 93 12 07 00 00         MOV EDX,dword ptr [EBX + 0x712]
00486FDA  3B C2                     CMP EAX,EDX
00486FDC  74 06                     JZ 0x00486fe4
00486FDE  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
00486FE2  EB 0A                     JMP 0x00486fee
LAB_00486fe4:
00486FE4  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00486FE8  EB 04                     JMP 0x00486fee
LAB_00486fea:
00486FEA  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_00486fee:
00486FEE  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00486FF2  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00486FF8  3B C1                     CMP EAX,ECX
00486FFA  0F 84 C4 0E 00 00         JZ 0x00487ec4
00487000  83 BB 59 04 00 00 6A      CMP dword ptr [EBX + 0x459],0x6a
00487007  0F 84 B7 0E 00 00         JZ 0x00487ec4
0048700D  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
00487011  E9 A3 11 00 00            JMP 0x004881b9
switchD_00486f27::caseD_6:
00487016  B8 04 00 00 00            MOV EAX,0x4
0048701B  33 C9                     XOR ECX,ECX
0048701D  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487021  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
00487025  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
00487029  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
0048702C  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00487030  C6 46 0E 07               MOV byte ptr [ESI + 0xe],0x7
00487034  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0048703A  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
0048703D  0F 85 76 11 00 00         JNZ 0x004881b9
00487043  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00487049  74 0F                     JZ 0x0048705a
0048704B  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487052  74 06                     JZ 0x0048705a
00487054  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00487058  EB 04                     JMP 0x0048705e
LAB_0048705a:
0048705A  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_0048705e:
0048705E  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00487064  74 0F                     JZ 0x00487075
00487066  83 BB 59 04 00 00 66      CMP dword ptr [EBX + 0x459],0x66
0048706D  74 06                     JZ 0x00487075
0048706F  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487073  EB 04                     JMP 0x00487079
LAB_00487075:
00487075  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00487079:
00487079  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00487080  74 0F                     JZ 0x00487091
00487082  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487089  74 06                     JZ 0x00487091
0048708B  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
0048708F  EB 04                     JMP 0x00487095
LAB_00487091:
00487091  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487095:
00487095  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
0048709B  0F 84 08 0A 00 00         JZ 0x00487aa9
004870A1  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
004870A8  0F 84 FB 09 00 00         JZ 0x00487aa9
004870AE  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
004870B2  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004870B5  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004870B8  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004870BB  C1 E2 04                  SHL EDX,0x4
004870BE  03 D0                     ADD EDX,EAX
004870C0  66 83 3C 55 7B 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7b],0x0
004870C9  0F 84 D4 09 00 00         JZ 0x00487aa3
004870CF  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
004870D5  8B 8B 12 07 00 00         MOV ECX,dword ptr [EBX + 0x712]
004870DB  3B C1                     CMP EAX,ECX
004870DD  E9 B9 09 00 00            JMP 0x00487a9b
switchD_00486f27::caseD_5:
004870E2  B8 04 00 00 00            MOV EAX,0x4
004870E7  33 C9                     XOR ECX,ECX
004870E9  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
004870ED  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
004870F1  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
004870F5  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
004870F8  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
004870FC  C6 46 0E 08               MOV byte ptr [ESI + 0xe],0x8
00487100  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00487106  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
00487109  0F 85 AA 10 00 00         JNZ 0x004881b9
0048710F  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00487115  74 0F                     JZ 0x00487126
00487117  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
0048711E  74 06                     JZ 0x00487126
00487120  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00487124  EB 04                     JMP 0x0048712a
LAB_00487126:
00487126  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_0048712a:
0048712A  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00487130  74 0F                     JZ 0x00487141
00487132  83 BB 59 04 00 00 66      CMP dword ptr [EBX + 0x459],0x66
00487139  74 06                     JZ 0x00487141
0048713B  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
0048713F  EB 04                     JMP 0x00487145
LAB_00487141:
00487141  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00487145:
00487145  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
0048714C  74 0F                     JZ 0x0048715d
0048714E  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487155  74 06                     JZ 0x0048715d
00487157  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
0048715B  EB 04                     JMP 0x00487161
LAB_0048715d:
0048715D  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487161:
00487161  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
00487167  74 42                     JZ 0x004871ab
00487169  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
00487170  74 39                     JZ 0x004871ab
00487172  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487176  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00487179  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0048717C  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0048717F  C1 E2 04                  SHL EDX,0x4
00487182  03 D0                     ADD EDX,EAX
00487184  66 83 3C 55 7B 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7b],0x0
0048718D  74 16                     JZ 0x004871a5
0048718F  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
00487195  8B 8B 12 07 00 00         MOV ECX,dword ptr [EBX + 0x712]
0048719B  3B C1                     CMP EAX,ECX
0048719D  74 06                     JZ 0x004871a5
0048719F  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
004871A3  EB 0A                     JMP 0x004871af
LAB_004871a5:
004871A5  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
004871A9  EB 04                     JMP 0x004871af
LAB_004871ab:
004871AB  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_004871af:
004871AF  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
004871B3  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
004871B9  83 F8 07                  CMP EAX,0x7
004871BC  0F 84 02 0D 00 00         JZ 0x00487ec4
004871C2  83 BB 59 04 00 00 6B      CMP dword ptr [EBX + 0x459],0x6b
004871C9  0F 84 F5 0C 00 00         JZ 0x00487ec4
004871CF  8B 83 BE 07 00 00         MOV EAX,dword ptr [EBX + 0x7be]
004871D5  E9 A1 07 00 00            JMP 0x0048797b
switchD_00486f27::caseD_17:
004871DA  B8 04 00 00 00            MOV EAX,0x4
004871DF  33 C9                     XOR ECX,ECX
004871E1  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
004871E5  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
004871E9  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
004871ED  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
004871F0  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
004871F4  C6 46 0E 0A               MOV byte ptr [ESI + 0xe],0xa
004871F8  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004871FE  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
00487201  0F 85 B2 0F 00 00         JNZ 0x004881b9
00487207  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
0048720D  74 0F                     JZ 0x0048721e
0048720F  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487216  74 06                     JZ 0x0048721e
00487218  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
0048721C  EB 04                     JMP 0x00487222
LAB_0048721e:
0048721E  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487222:
00487222  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00487228  B9 66 00 00 00            MOV ECX,0x66
0048722D  74 08                     JZ 0x00487237
0048722F  39 8B 59 04 00 00         CMP dword ptr [EBX + 0x459],ECX
00487235  75 0F                     JNZ 0x00487246
LAB_00487237:
00487237  83 BB DE 07 00 00 00      CMP dword ptr [EBX + 0x7de],0x0
0048723E  75 06                     JNZ 0x00487246
00487240  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
00487244  EB 04                     JMP 0x0048724a
LAB_00487246:
00487246  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
LAB_0048724a:
0048724A  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00487251  74 0F                     JZ 0x00487262
00487253  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
0048725A  74 06                     JZ 0x00487262
0048725C  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00487260  EB 04                     JMP 0x00487266
LAB_00487262:
00487262  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487266:
00487266  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
0048726C  74 4C                     JZ 0x004872ba
0048726E  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
00487275  74 43                     JZ 0x004872ba
00487277  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
0048727B  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0048727E  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00487281  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00487284  C1 E2 04                  SHL EDX,0x4
00487287  03 D0                     ADD EDX,EAX
00487289  66 83 3C 55 7B 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7b],0x0
00487292  74 1B                     JZ 0x004872af
00487294  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
0048729A  8B 93 12 07 00 00         MOV EDX,dword ptr [EBX + 0x712]
004872A0  3B C2                     CMP EAX,EDX
004872A2  74 0B                     JZ 0x004872af
004872A4  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
004872A8  BA 02 00 00 00            MOV EDX,0x2
004872AD  EB 0F                     JMP 0x004872be
LAB_004872af:
004872AF  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
004872B3  BA 02 00 00 00            MOV EDX,0x2
004872B8  EB 04                     JMP 0x004872be
LAB_004872ba:
004872BA  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_004872be:
004872BE  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
004872C2  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
004872C8  3B C2                     CMP EAX,EDX
004872CA  74 0C                     JZ 0x004872d8
004872CC  39 8B 59 04 00 00         CMP dword ptr [EBX + 0x459],ECX
004872D2  0F 85 F7 08 00 00         JNZ 0x00487bcf
LAB_004872d8:
004872D8  39 BB DE 07 00 00         CMP dword ptr [EBX + 0x7de],EDI
004872DE  0F 85 EB 08 00 00         JNZ 0x00487bcf
004872E4  C6 46 14 03               MOV byte ptr [ESI + 0x14],0x3
004872E8  E9 CC 0E 00 00            JMP 0x004881b9
switchD_00486f27::caseD_16:
004872ED  B8 04 00 00 00            MOV EAX,0x4
004872F2  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
004872F6  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
004872FA  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
004872FE  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
00487301  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00487305  39 BB 32 07 00 00         CMP dword ptr [EBX + 0x732],EDI
0048730B  75 06                     JNZ 0x00487313
0048730D  C6 46 0E 0C               MOV byte ptr [ESI + 0xe],0xc
00487311  EB 04                     JMP 0x00487317
LAB_00487313:
00487313  C6 46 0E 0B               MOV byte ptr [ESI + 0xe],0xb
LAB_00487317:
00487317  33 C9                     XOR ECX,ECX
00487319  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0048731F  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
00487322  0F 85 91 0E 00 00         JNZ 0x004881b9
00487328  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
0048732E  74 0F                     JZ 0x0048733f
00487330  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487337  74 06                     JZ 0x0048733f
00487339  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
0048733D  EB 04                     JMP 0x00487343
LAB_0048733f:
0048733F  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487343:
00487343  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00487349  74 0F                     JZ 0x0048735a
0048734B  83 BB 59 04 00 00 66      CMP dword ptr [EBX + 0x459],0x66
00487352  74 06                     JZ 0x0048735a
00487354  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487358  EB 04                     JMP 0x0048735e
LAB_0048735a:
0048735A  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_0048735e:
0048735E  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00487365  74 0F                     JZ 0x00487376
00487367  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
0048736E  74 06                     JZ 0x00487376
00487370  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00487374  EB 04                     JMP 0x0048737a
LAB_00487376:
00487376  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_0048737a:
0048737A  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
00487380  74 42                     JZ 0x004873c4
00487382  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
00487389  74 39                     JZ 0x004873c4
0048738B  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
0048738F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00487392  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00487395  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00487398  C1 E2 04                  SHL EDX,0x4
0048739B  03 D0                     ADD EDX,EAX
0048739D  66 83 3C 55 7B 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7b],0x0
004873A6  74 16                     JZ 0x004873be
004873A8  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
004873AE  8B 8B 12 07 00 00         MOV ECX,dword ptr [EBX + 0x712]
004873B4  3B C1                     CMP EAX,ECX
004873B6  74 06                     JZ 0x004873be
004873B8  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
004873BC  EB 0A                     JMP 0x004873c8
LAB_004873be:
004873BE  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
004873C2  EB 04                     JMP 0x004873c8
LAB_004873c4:
004873C4  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_004873c8:
004873C8  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
004873CC  8B 83 32 07 00 00         MOV EAX,dword ptr [EBX + 0x732]
004873D2  3B C7                     CMP EAX,EDI
004873D4  0F 85 9B 05 00 00         JNZ 0x00487975
004873DA  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
004873DE  E9 D6 0D 00 00            JMP 0x004881b9
switchD_00486f27::caseD_4:
004873E3  B8 04 00 00 00            MOV EAX,0x4
004873E8  33 C9                     XOR ECX,ECX
004873EA  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
004873EE  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
004873F2  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
004873F6  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
004873F9  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
004873FD  C6 46 0E 09               MOV byte ptr [ESI + 0xe],0x9
00487401  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00487407  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
0048740A  0F 85 A9 0D 00 00         JNZ 0x004881b9
00487410  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00487416  74 0F                     JZ 0x00487427
00487418  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
0048741F  74 06                     JZ 0x00487427
00487421  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00487425  EB 04                     JMP 0x0048742b
LAB_00487427:
00487427  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_0048742b:
0048742B  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00487431  74 0F                     JZ 0x00487442
00487433  83 BB 59 04 00 00 66      CMP dword ptr [EBX + 0x459],0x66
0048743A  74 06                     JZ 0x00487442
0048743C  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487440  EB 04                     JMP 0x00487446
LAB_00487442:
00487442  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00487446:
00487446  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
0048744D  74 0F                     JZ 0x0048745e
0048744F  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487456  74 06                     JZ 0x0048745e
00487458  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
0048745C  EB 04                     JMP 0x00487462
LAB_0048745e:
0048745E  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487462:
00487462  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
00487468  74 42                     JZ 0x004874ac
0048746A  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
00487471  74 39                     JZ 0x004874ac
00487473  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487477  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0048747A  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0048747D  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00487480  C1 E2 04                  SHL EDX,0x4
00487483  03 D0                     ADD EDX,EAX
00487485  66 83 3C 55 7B 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7b],0x0
0048748E  74 16                     JZ 0x004874a6
00487490  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
00487496  8B 8B 12 07 00 00         MOV ECX,dword ptr [EBX + 0x712]
0048749C  3B C1                     CMP EAX,ECX
0048749E  74 06                     JZ 0x004874a6
004874A0  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
004874A4  EB 0A                     JMP 0x004874b0
LAB_004874a6:
004874A6  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
004874AA  EB 04                     JMP 0x004874b0
LAB_004874ac:
004874AC  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_004874b0:
004874B0  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
004874B4  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
004874BA  83 F8 0A                  CMP EAX,0xa
004874BD  0F 84 01 0A 00 00         JZ 0x00487ec4
004874C3  83 BB 59 04 00 00 6E      CMP dword ptr [EBX + 0x459],0x6e
004874CA  0F 84 F4 09 00 00         JZ 0x00487ec4
004874D0  8B 83 BE 07 00 00         MOV EAX,dword ptr [EBX + 0x7be]
004874D6  85 C0                     TEST EAX,EAX
004874D8  0F 8E D7 0C 00 00         JLE 0x004881b5
004874DE  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
004874E2  E9 D2 0C 00 00            JMP 0x004881b9
switchD_00486f27::caseD_9:
004874E7  33 C9                     XOR ECX,ECX
004874E9  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
004874ED  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
004874F1  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
004874F5  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
004874F9  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004874FF  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
00487502  0F 85 B1 0C 00 00         JNZ 0x004881b9
00487508  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
0048750E  74 0F                     JZ 0x0048751f
00487510  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487517  74 06                     JZ 0x0048751f
00487519  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
0048751D  EB 04                     JMP 0x00487523
LAB_0048751f:
0048751F  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487523:
00487523  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00487529  74 0F                     JZ 0x0048753a
0048752B  83 BB 59 04 00 00 66      CMP dword ptr [EBX + 0x459],0x66
00487532  74 06                     JZ 0x0048753a
00487534  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487538  EB 04                     JMP 0x0048753e
LAB_0048753a:
0048753A  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_0048753e:
0048753E  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00487545  74 16                     JZ 0x0048755d
00487547  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
0048754E  74 0D                     JZ 0x0048755d
00487550  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00487554  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00487558  E9 5C 0C 00 00            JMP 0x004881b9
LAB_0048755d:
0048755D  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
00487561  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00487565  E9 4F 0C 00 00            JMP 0x004881b9
switchD_00486f27::caseD_8:
0048756A  B8 04 00 00 00            MOV EAX,0x4
0048756F  33 D2                     XOR EDX,EDX
00487571  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487575  C6 46 0A 11               MOV byte ptr [ESI + 0xa],0x11
00487579  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
0048757D  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
00487580  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00487584  C6 46 0E 12               MOV byte ptr [ESI + 0xe],0x12
00487588  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0048758E  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00487591  3B CA                     CMP ECX,EDX
00487593  0F 85 20 0C 00 00         JNZ 0x004881b9
00487599  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
0048759F  74 0F                     JZ 0x004875b0
004875A1  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
004875A8  74 06                     JZ 0x004875b0
004875AA  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
004875AE  EB 04                     JMP 0x004875b4
LAB_004875b0:
004875B0  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_004875b4:
004875B4  83 BB 5D 04 00 00 0C      CMP dword ptr [EBX + 0x45d],0xc
004875BB  74 0F                     JZ 0x004875cc
004875BD  83 BB 59 04 00 00 70      CMP dword ptr [EBX + 0x459],0x70
004875C4  74 06                     JZ 0x004875cc
004875C6  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
004875CA  EB 04                     JMP 0x004875d0
LAB_004875cc:
004875CC  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_004875d0:
004875D0  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
004875D7  74 0F                     JZ 0x004875e8
004875D9  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
004875E0  74 06                     JZ 0x004875e8
004875E2  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
004875E6  EB 04                     JMP 0x004875ec
LAB_004875e8:
004875E8  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_004875ec:
004875EC  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
004875F2  0F 84 B3 05 00 00         JZ 0x00487bab
004875F8  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
004875FF  0F 84 A6 05 00 00         JZ 0x00487bab
00487605  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487609  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0048760C  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0048760F  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00487612  C1 E1 04                  SHL ECX,0x4
00487615  03 C8                     ADD ECX,EAX
00487617  66 83 3C 4D 7B 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7b],0x0
00487620  0F 84 7F 05 00 00         JZ 0x00487ba5
00487626  8B 93 16 07 00 00         MOV EDX,dword ptr [EBX + 0x716]
0048762C  8B 83 12 07 00 00         MOV EAX,dword ptr [EBX + 0x712]
00487632  3B D0                     CMP EDX,EAX
00487634  E9 64 05 00 00            JMP 0x00487b9d
switchD_00486f27::caseD_7:
00487639  B8 04 00 00 00            MOV EAX,0x4
0048763E  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487642  C6 46 0A 0D               MOV byte ptr [ESI + 0xa],0xd
00487646  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
0048764A  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
0048764D  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00487651  8B 8B CA 07 00 00         MOV ECX,dword ptr [EBX + 0x7ca]
00487657  85 C9                     TEST ECX,ECX
00487659  75 06                     JNZ 0x00487661
0048765B  C6 46 0E 13               MOV byte ptr [ESI + 0xe],0x13
0048765F  EB 04                     JMP 0x00487665
LAB_00487661:
00487661  C6 46 0E 14               MOV byte ptr [ESI + 0xe],0x14
LAB_00487665:
00487665  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00487668  33 C9                     XOR ECX,ECX
0048766A  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00487670  3B D1                     CMP EDX,ECX
00487672  0F 85 41 0B 00 00         JNZ 0x004881b9
00487678  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
0048767E  74 0F                     JZ 0x0048768f
00487680  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487687  74 06                     JZ 0x0048768f
00487689  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
0048768D  EB 04                     JMP 0x00487693
LAB_0048768f:
0048768F  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487693:
00487693  83 BB 5D 04 00 00 0E      CMP dword ptr [EBX + 0x45d],0xe
0048769A  74 0F                     JZ 0x004876ab
0048769C  83 BB 59 04 00 00 72      CMP dword ptr [EBX + 0x459],0x72
004876A3  74 06                     JZ 0x004876ab
004876A5  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
004876A9  EB 04                     JMP 0x004876af
LAB_004876ab:
004876AB  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_004876af:
004876AF  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
004876B6  74 0F                     JZ 0x004876c7
004876B8  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
004876BF  74 06                     JZ 0x004876c7
004876C1  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
004876C5  EB 04                     JMP 0x004876cb
LAB_004876c7:
004876C7  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_004876cb:
004876CB  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
004876D1  74 42                     JZ 0x00487715
004876D3  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
004876DA  74 39                     JZ 0x00487715
004876DC  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
004876E0  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004876E3  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004876E6  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004876E9  C1 E2 04                  SHL EDX,0x4
004876EC  03 D0                     ADD EDX,EAX
004876EE  66 83 3C 55 7B 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7b],0x0
004876F7  74 16                     JZ 0x0048770f
004876F9  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
004876FF  8B 8B 12 07 00 00         MOV ECX,dword ptr [EBX + 0x712]
00487705  3B C1                     CMP EAX,ECX
00487707  74 06                     JZ 0x0048770f
00487709  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
0048770D  EB 0A                     JMP 0x00487719
LAB_0048770f:
0048770F  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00487713  EB 04                     JMP 0x00487719
LAB_00487715:
00487715  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_00487719:
00487719  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
0048771D  8B 83 CA 07 00 00         MOV EAX,dword ptr [EBX + 0x7ca]
00487723  85 C0                     TEST EAX,EAX
00487725  75 18                     JNZ 0x0048773f
00487727  83 BB 5D 04 00 00 0F      CMP dword ptr [EBX + 0x45d],0xf
0048772E  74 52                     JZ 0x00487782
00487730  83 BB 59 04 00 00 73      CMP dword ptr [EBX + 0x459],0x73
00487737  74 49                     JZ 0x00487782
00487739  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
0048773D  EB 47                     JMP 0x00487786
LAB_0048773f:
0048773F  8D 4D 0A                  LEA ECX,[EBP + 0xa]
00487742  8D 55 FE                  LEA EDX,[EBP + -0x2]
00487745  51                        PUSH ECX
00487746  66 8B 4B 5F               MOV CX,word ptr [EBX + 0x5f]
0048774A  8D 45 FC                  LEA EAX,[EBP + -0x4]
0048774D  52                        PUSH EDX
0048774E  66 8B 53 5D               MOV DX,word ptr [EBX + 0x5d]
00487752  50                        PUSH EAX
00487753  66 8B 43 5B               MOV AX,word ptr [EBX + 0x5b]
00487757  51                        PUSH ECX
00487758  52                        PUSH EDX
00487759  50                        PUSH EAX
0048775A  8B CB                     MOV ECX,EBX
0048775C  E8 0A C9 F7 FF            CALL 0x0040406b
00487761  85 C0                     TEST EAX,EAX
00487763  75 05                     JNZ 0x0048776a
00487765  88 46 14                  MOV byte ptr [ESI + 0x14],AL
00487768  EB 1C                     JMP 0x00487786
LAB_0048776a:
0048776A  83 BB 5D 04 00 00 10      CMP dword ptr [EBX + 0x45d],0x10
00487771  74 0F                     JZ 0x00487782
00487773  83 BB 59 04 00 00 74      CMP dword ptr [EBX + 0x459],0x74
0048777A  74 06                     JZ 0x00487782
0048777C  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
00487780  EB 04                     JMP 0x00487786
LAB_00487782:
00487782  C6 46 14 03               MOV byte ptr [ESI + 0x14],0x3
LAB_00487786:
00487786  8B 83 CA 07 00 00         MOV EAX,dword ptr [EBX + 0x7ca]
0048778C  85 C0                     TEST EAX,EAX
0048778E  0F 84 25 0A 00 00         JZ 0x004881b9
00487794  C6 46 10 00               MOV byte ptr [ESI + 0x10],0x0
00487798  E9 1C 0A 00 00            JMP 0x004881b9
switchD_00486f27::caseD_c:
0048779D  B8 04 00 00 00            MOV EAX,0x4
004877A2  33 C9                     XOR ECX,ECX
004877A4  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
004877A8  C6 46 0A 0E               MOV byte ptr [ESI + 0xa],0xe
004877AC  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
004877B0  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
004877B3  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
004877B7  C6 46 0E 10               MOV byte ptr [ESI + 0xe],0x10
004877BB  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004877C1  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004877C4  3B D1                     CMP EDX,ECX
004877C6  0F 85 ED 09 00 00         JNZ 0x004881b9
004877CC  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
004877D2  74 0F                     JZ 0x004877e3
004877D4  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
004877DB  74 06                     JZ 0x004877e3
004877DD  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
004877E1  EB 04                     JMP 0x004877e7
LAB_004877e3:
004877E3  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_004877e7:
004877E7  83 BB 5D 04 00 00 11      CMP dword ptr [EBX + 0x45d],0x11
004877EE  74 0F                     JZ 0x004877ff
004877F0  83 BB 59 04 00 00 75      CMP dword ptr [EBX + 0x459],0x75
004877F7  74 06                     JZ 0x004877ff
004877F9  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
004877FD  EB 04                     JMP 0x00487803
LAB_004877ff:
004877FF  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00487803:
00487803  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
0048780A  74 0F                     JZ 0x0048781b
0048780C  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487813  74 06                     JZ 0x0048781b
00487815  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00487819  EB 04                     JMP 0x0048781f
LAB_0048781b:
0048781B  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_0048781f:
0048781F  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
00487825  74 42                     JZ 0x00487869
00487827  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
0048782E  74 39                     JZ 0x00487869
00487830  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487834  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00487837  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0048783A  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0048783D  C1 E2 04                  SHL EDX,0x4
00487840  03 D0                     ADD EDX,EAX
00487842  66 83 3C 55 7B 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7b],0x0
0048784B  74 16                     JZ 0x00487863
0048784D  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
00487853  8B 8B 12 07 00 00         MOV ECX,dword ptr [EBX + 0x712]
00487859  3B C1                     CMP EAX,ECX
0048785B  74 06                     JZ 0x00487863
0048785D  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
00487861  EB 0A                     JMP 0x0048786d
LAB_00487863:
00487863  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00487867  EB 04                     JMP 0x0048786d
LAB_00487869:
00487869  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_0048786d:
0048786D  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00487871  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00487877  83 F8 12                  CMP EAX,0x12
0048787A  0F 84 44 06 00 00         JZ 0x00487ec4
00487880  83 BB 59 04 00 00 76      CMP dword ptr [EBX + 0x459],0x76
00487887  0F 84 37 06 00 00         JZ 0x00487ec4
0048788D  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
00487891  E9 23 09 00 00            JMP 0x004881b9
switchD_00486f27::caseD_25:
00487896  B8 04 00 00 00            MOV EAX,0x4
0048789B  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
0048789F  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
004878A3  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
004878A7  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
004878AA  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
004878AE  39 BB 32 07 00 00         CMP dword ptr [EBX + 0x732],EDI
004878B4  75 06                     JNZ 0x004878bc
004878B6  C6 46 0E 0C               MOV byte ptr [ESI + 0xe],0xc
004878BA  EB 04                     JMP 0x004878c0
LAB_004878bc:
004878BC  C6 46 0E 0B               MOV byte ptr [ESI + 0xe],0xb
LAB_004878c0:
004878C0  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004878C3  33 C9                     XOR ECX,ECX
004878C5  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004878CB  3B D1                     CMP EDX,ECX
004878CD  0F 85 E6 08 00 00         JNZ 0x004881b9
004878D3  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
004878D9  74 0F                     JZ 0x004878ea
004878DB  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
004878E2  74 06                     JZ 0x004878ea
004878E4  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
004878E8  EB 04                     JMP 0x004878ee
LAB_004878ea:
004878EA  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_004878ee:
004878EE  C6 46 10 00               MOV byte ptr [ESI + 0x10],0x0
004878F2  8B 8B 5D 04 00 00         MOV ECX,dword ptr [EBX + 0x45d]
004878F8  83 F9 03                  CMP ECX,0x3
004878FB  74 0F                     JZ 0x0048790c
004878FD  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487904  74 06                     JZ 0x0048790c
00487906  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
0048790A  EB 04                     JMP 0x00487910
LAB_0048790c:
0048790C  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487910:
00487910  39 83 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EAX
00487916  74 42                     JZ 0x0048795a
00487918  83 BB 59 04 00 00 68      CMP dword ptr [EBX + 0x459],0x68
0048791F  74 39                     JZ 0x0048795a
00487921  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487925  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00487928  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0048792B  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0048792E  C1 E2 04                  SHL EDX,0x4
00487931  03 D0                     ADD EDX,EAX
00487933  66 83 3C 55 7B 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7b],0x0
0048793C  74 16                     JZ 0x00487954
0048793E  8B 83 16 07 00 00         MOV EAX,dword ptr [EBX + 0x716]
00487944  8B 8B 12 07 00 00         MOV ECX,dword ptr [EBX + 0x712]
0048794A  3B C1                     CMP EAX,ECX
0048794C  74 06                     JZ 0x00487954
0048794E  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
00487952  EB 0A                     JMP 0x0048795e
LAB_00487954:
00487954  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00487958  EB 04                     JMP 0x0048795e
LAB_0048795a:
0048795A  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_0048795e:
0048795E  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00487962  8B 83 32 07 00 00         MOV EAX,dword ptr [EBX + 0x732]
00487968  3B C7                     CMP EAX,EDI
0048796A  75 09                     JNZ 0x00487975
0048796C  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
00487970  E9 44 08 00 00            JMP 0x004881b9
LAB_00487975:
00487975  8B 83 26 07 00 00         MOV EAX,dword ptr [EBX + 0x726]
LAB_0048797b:
0048797B  85 C0                     TEST EAX,EAX
0048797D  0F 8E 32 08 00 00         JLE 0x004881b5
00487983  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
00487987  E9 2D 08 00 00            JMP 0x004881b9
switchD_00486f27::caseD_1e:
0048798C  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487990  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
00487994  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
00487998  C6 46 0C 48               MOV byte ptr [ESI + 0xc],0x48
0048799C  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
LAB_004879a0:
004879A0  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004879A3  33 C9                     XOR ECX,ECX
004879A5  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004879AB  3B C1                     CMP EAX,ECX
004879AD  0F 85 06 08 00 00         JNZ 0x004881b9
004879B3  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
004879B9  0F 84 50 06 00 00         JZ 0x0048800f
004879BF  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
004879C6  0F 84 43 06 00 00         JZ 0x0048800f
004879CC  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
004879D0  E9 3E 06 00 00            JMP 0x00488013
switchD_00486f27::caseD_22:
004879D5  33 C9                     XOR ECX,ECX
004879D7  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
004879DB  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
004879DF  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
004879E3  C6 46 0C 48               MOV byte ptr [ESI + 0xc],0x48
004879E7  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
004879EB  C6 46 0E 07               MOV byte ptr [ESI + 0xe],0x7
004879EF  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004879F5  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
004879F8  0F 85 BB 07 00 00         JNZ 0x004881b9
004879FE  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00487A04  74 0F                     JZ 0x00487a15
00487A06  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487A0D  74 06                     JZ 0x00487a15
00487A0F  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00487A13  EB 04                     JMP 0x00487a19
LAB_00487a15:
00487A15  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487a19:
00487A19  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00487A1F  74 0F                     JZ 0x00487a30
00487A21  83 BB 59 04 00 00 66      CMP dword ptr [EBX + 0x459],0x66
00487A28  74 06                     JZ 0x00487a30
00487A2A  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487A2E  EB 04                     JMP 0x00487a34
LAB_00487a30:
00487A30  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00487a34:
00487A34  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00487A3B  74 0F                     JZ 0x00487a4c
00487A3D  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487A44  74 06                     JZ 0x00487a4c
00487A46  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00487A4A  EB 04                     JMP 0x00487a50
LAB_00487a4c:
00487A4C  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487a50:
00487A50  83 BB 5D 04 00 00 16      CMP dword ptr [EBX + 0x45d],0x16
00487A57  74 50                     JZ 0x00487aa9
00487A59  83 BB 59 04 00 00 7A      CMP dword ptr [EBX + 0x459],0x7a
00487A60  74 47                     JZ 0x00487aa9
00487A62  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487A66  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00487A69  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00487A6C  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00487A6F  C1 E2 04                  SHL EDX,0x4
00487A72  03 D0                     ADD EDX,EAX
00487A74  66 83 3C 55 7F 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7f],0x0
00487A7D  74 24                     JZ 0x00487aa3
00487A7F  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00487A82  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00487A88  50                        PUSH EAX
00487A89  E8 19 BC F7 FF            CALL 0x004036a7
00487A8E  85 C0                     TEST EAX,EAX
00487A90  74 11                     JZ 0x00487aa3
00487A92  8B CB                     MOV ECX,EBX
00487A94  E8 FB BA F7 FF            CALL 0x00403594
00487A99  85 C0                     TEST EAX,EAX
LAB_00487a9b:
00487A9B  74 06                     JZ 0x00487aa3
00487A9D  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
00487AA1  EB 0A                     JMP 0x00487aad
LAB_00487aa3:
00487AA3  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00487AA7  EB 04                     JMP 0x00487aad
LAB_00487aa9:
00487AA9  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_00487aad:
00487AAD  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00487AB1  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00487AB7  83 F8 09                  CMP EAX,0x9
00487ABA  0F 84 04 04 00 00         JZ 0x00487ec4
00487AC0  83 BB 59 04 00 00 6D      CMP dword ptr [EBX + 0x459],0x6d
00487AC7  0F 84 F7 03 00 00         JZ 0x00487ec4
00487ACD  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
00487AD1  E9 E3 06 00 00            JMP 0x004881b9
switchD_00486f27::caseD_1a:
00487AD6  33 C9                     XOR ECX,ECX
00487AD8  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487ADC  C6 46 0A 11               MOV byte ptr [ESI + 0xa],0x11
00487AE0  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
00487AE4  C6 46 0C 48               MOV byte ptr [ESI + 0xc],0x48
00487AE8  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00487AEC  C6 46 0E 12               MOV byte ptr [ESI + 0xe],0x12
00487AF0  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00487AF6  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
00487AF9  0F 85 BA 06 00 00         JNZ 0x004881b9
00487AFF  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00487B05  74 0F                     JZ 0x00487b16
00487B07  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487B0E  74 06                     JZ 0x00487b16
00487B10  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00487B14  EB 04                     JMP 0x00487b1a
LAB_00487b16:
00487B16  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487b1a:
00487B1A  83 BB 5D 04 00 00 0C      CMP dword ptr [EBX + 0x45d],0xc
00487B21  74 0F                     JZ 0x00487b32
00487B23  83 BB 59 04 00 00 70      CMP dword ptr [EBX + 0x459],0x70
00487B2A  74 06                     JZ 0x00487b32
00487B2C  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487B30  EB 04                     JMP 0x00487b36
LAB_00487b32:
00487B32  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00487b36:
00487B36  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00487B3D  74 0F                     JZ 0x00487b4e
00487B3F  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487B46  74 06                     JZ 0x00487b4e
00487B48  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00487B4C  EB 04                     JMP 0x00487b52
LAB_00487b4e:
00487B4E  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487b52:
00487B52  83 BB 5D 04 00 00 16      CMP dword ptr [EBX + 0x45d],0x16
00487B59  74 50                     JZ 0x00487bab
00487B5B  83 BB 59 04 00 00 7A      CMP dword ptr [EBX + 0x459],0x7a
00487B62  74 47                     JZ 0x00487bab
00487B64  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487B68  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00487B6B  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00487B6E  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00487B71  C1 E2 04                  SHL EDX,0x4
00487B74  03 D0                     ADD EDX,EAX
00487B76  66 83 3C 55 7F 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7f],0x0
00487B7F  74 24                     JZ 0x00487ba5
00487B81  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00487B84  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00487B8A  50                        PUSH EAX
00487B8B  E8 17 BB F7 FF            CALL 0x004036a7
00487B90  85 C0                     TEST EAX,EAX
00487B92  74 11                     JZ 0x00487ba5
00487B94  8B CB                     MOV ECX,EBX
00487B96  E8 F9 B9 F7 FF            CALL 0x00403594
00487B9B  85 C0                     TEST EAX,EAX
LAB_00487b9d:
00487B9D  74 06                     JZ 0x00487ba5
00487B9F  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
00487BA3  EB 0A                     JMP 0x00487baf
LAB_00487ba5:
00487BA5  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00487BA9  EB 04                     JMP 0x00487baf
LAB_00487bab:
00487BAB  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_00487baf:
00487BAF  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00487BB3  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00487BB9  83 F8 0D                  CMP EAX,0xd
00487BBC  0F 84 02 03 00 00         JZ 0x00487ec4
00487BC2  83 BB 59 04 00 00 71      CMP dword ptr [EBX + 0x459],0x71
00487BC9  0F 84 F5 02 00 00         JZ 0x00487ec4
LAB_00487bcf:
00487BCF  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
00487BD3  E9 E1 05 00 00            JMP 0x004881b9
switchD_00486f27::caseD_19:
00487BD8  33 C9                     XOR ECX,ECX
00487BDA  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487BDE  C6 46 0A 0E               MOV byte ptr [ESI + 0xa],0xe
00487BE2  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
00487BE6  C6 46 0C 48               MOV byte ptr [ESI + 0xc],0x48
00487BEA  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00487BEE  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00487BF4  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00487BF7  3B C1                     CMP EAX,ECX
00487BF9  0F 85 BA 05 00 00         JNZ 0x004881b9
00487BFF  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00487C05  74 0F                     JZ 0x00487c16
00487C07  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487C0E  74 06                     JZ 0x00487c16
00487C10  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00487C14  EB 04                     JMP 0x00487c1a
LAB_00487c16:
00487C16  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487c1a:
00487C1A  83 BB 5D 04 00 00 11      CMP dword ptr [EBX + 0x45d],0x11
00487C21  0F 84 03 04 00 00         JZ 0x0048802a
00487C27  83 BB 59 04 00 00 75      CMP dword ptr [EBX + 0x459],0x75
00487C2E  0F 84 F6 03 00 00         JZ 0x0048802a
00487C34  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487C38  E9 F1 03 00 00            JMP 0x0048802e
switchD_00486f27::caseD_1d:
00487C3D  33 C9                     XOR ECX,ECX
00487C3F  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487C43  C6 46 0A 10               MOV byte ptr [ESI + 0xa],0x10
00487C47  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
00487C4B  C6 46 0C 48               MOV byte ptr [ESI + 0xc],0x48
00487C4F  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00487C53  C6 46 0E 18               MOV byte ptr [ESI + 0xe],0x18
00487C57  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00487C5D  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
00487C60  0F 85 53 05 00 00         JNZ 0x004881b9
00487C66  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00487C6C  74 0F                     JZ 0x00487c7d
00487C6E  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487C75  74 06                     JZ 0x00487c7d
00487C77  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00487C7B  EB 04                     JMP 0x00487c81
LAB_00487c7d:
00487C7D  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487c81:
00487C81  83 BB 5D 04 00 00 12      CMP dword ptr [EBX + 0x45d],0x12
00487C88  74 0F                     JZ 0x00487c99
00487C8A  83 BB 59 04 00 00 76      CMP dword ptr [EBX + 0x459],0x76
00487C91  74 06                     JZ 0x00487c99
00487C93  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487C97  EB 04                     JMP 0x00487c9d
LAB_00487c99:
00487C99  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00487c9d:
00487C9D  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00487CA4  74 0F                     JZ 0x00487cb5
00487CA6  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487CAD  74 06                     JZ 0x00487cb5
00487CAF  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00487CB3  EB 04                     JMP 0x00487cb9
LAB_00487cb5:
00487CB5  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487cb9:
00487CB9  83 BB 5D 04 00 00 16      CMP dword ptr [EBX + 0x45d],0x16
00487CC0  74 50                     JZ 0x00487d12
00487CC2  83 BB 59 04 00 00 7A      CMP dword ptr [EBX + 0x459],0x7a
00487CC9  74 47                     JZ 0x00487d12
00487CCB  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487CCF  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00487CD2  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00487CD5  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00487CD8  C1 E2 04                  SHL EDX,0x4
00487CDB  03 D0                     ADD EDX,EAX
00487CDD  66 83 3C 55 7F 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7f],0x0
00487CE6  74 24                     JZ 0x00487d0c
00487CE8  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00487CEB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00487CF1  50                        PUSH EAX
00487CF2  E8 B0 B9 F7 FF            CALL 0x004036a7
00487CF7  85 C0                     TEST EAX,EAX
00487CF9  74 11                     JZ 0x00487d0c
00487CFB  8B CB                     MOV ECX,EBX
00487CFD  E8 92 B8 F7 FF            CALL 0x00403594
00487D02  85 C0                     TEST EAX,EAX
00487D04  74 06                     JZ 0x00487d0c
00487D06  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
00487D0A  EB 0A                     JMP 0x00487d16
LAB_00487d0c:
00487D0C  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00487D10  EB 04                     JMP 0x00487d16
LAB_00487d12:
00487D12  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_00487d16:
00487D16  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00487D1A  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00487D1D  6A 5F                     PUSH 0x5f
00487D1F  51                        PUSH ECX
00487D20  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00487D26  E8 40 9B F7 FF            CALL 0x0040186b
00487D2B  85 C0                     TEST EAX,EAX
00487D2D  0F 8E 82 04 00 00         JLE 0x004881b5
00487D33  83 BB 5D 04 00 00 15      CMP dword ptr [EBX + 0x45d],0x15
00487D3A  0F 85 8D 01 00 00         JNZ 0x00487ecd
00487D40  83 BB 35 06 00 00 02      CMP dword ptr [EBX + 0x635],0x2
00487D47  0F 85 80 01 00 00         JNZ 0x00487ecd
00487D4D  E9 65 01 00 00            JMP 0x00487eb7
switchD_00486f27::caseD_1b:
00487D52  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487D56  8B 83 CA 07 00 00         MOV EAX,dword ptr [EBX + 0x7ca]
00487D5C  85 C0                     TEST EAX,EAX
00487D5E  75 06                     JNZ 0x00487d66
00487D60  C6 46 0A 13               MOV byte ptr [ESI + 0xa],0x13
00487D64  EB 04                     JMP 0x00487d6a
LAB_00487d66:
00487D66  C6 46 0A 14               MOV byte ptr [ESI + 0xa],0x14
LAB_00487d6a:
00487D6A  33 D2                     XOR EDX,EDX
00487D6C  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
00487D70  C6 46 0C 48               MOV byte ptr [ESI + 0xc],0x48
00487D74  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00487D78  C6 46 0E 18               MOV byte ptr [ESI + 0xe],0x18
00487D7C  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00487D82  39 53 24                  CMP dword ptr [EBX + 0x24],EDX
00487D85  0F 85 2E 04 00 00         JNZ 0x004881b9
00487D8B  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00487D91  74 0F                     JZ 0x00487da2
00487D93  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487D9A  74 06                     JZ 0x00487da2
00487D9C  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00487DA0  EB 04                     JMP 0x00487da6
LAB_00487da2:
00487DA2  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487da6:
00487DA6  8B 83 CA 07 00 00         MOV EAX,dword ptr [EBX + 0x7ca]
00487DAC  85 C0                     TEST EAX,EAX
00487DAE  75 18                     JNZ 0x00487dc8
00487DB0  83 BB 5D 04 00 00 0F      CMP dword ptr [EBX + 0x45d],0xf
00487DB7  74 52                     JZ 0x00487e0b
00487DB9  83 BB 59 04 00 00 73      CMP dword ptr [EBX + 0x459],0x73
00487DC0  74 49                     JZ 0x00487e0b
00487DC2  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487DC6  EB 47                     JMP 0x00487e0f
LAB_00487dc8:
00487DC8  8D 45 0A                  LEA EAX,[EBP + 0xa]
00487DCB  8D 4D FC                  LEA ECX,[EBP + -0x4]
00487DCE  50                        PUSH EAX
00487DCF  66 8B 43 5F               MOV AX,word ptr [EBX + 0x5f]
00487DD3  8D 55 FE                  LEA EDX,[EBP + -0x2]
00487DD6  51                        PUSH ECX
00487DD7  66 8B 4B 5D               MOV CX,word ptr [EBX + 0x5d]
00487DDB  52                        PUSH EDX
00487DDC  66 8B 53 5B               MOV DX,word ptr [EBX + 0x5b]
00487DE0  50                        PUSH EAX
00487DE1  51                        PUSH ECX
00487DE2  52                        PUSH EDX
00487DE3  8B CB                     MOV ECX,EBX
00487DE5  E8 81 C2 F7 FF            CALL 0x0040406b
00487DEA  85 C0                     TEST EAX,EAX
00487DEC  75 05                     JNZ 0x00487df3
00487DEE  88 46 10                  MOV byte ptr [ESI + 0x10],AL
00487DF1  EB 1C                     JMP 0x00487e0f
LAB_00487df3:
00487DF3  83 BB 5D 04 00 00 10      CMP dword ptr [EBX + 0x45d],0x10
00487DFA  74 0F                     JZ 0x00487e0b
00487DFC  83 BB 59 04 00 00 74      CMP dword ptr [EBX + 0x459],0x74
00487E03  74 06                     JZ 0x00487e0b
00487E05  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487E09  EB 04                     JMP 0x00487e0f
LAB_00487e0b:
00487E0B  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00487e0f:
00487E0F  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00487E16  74 0F                     JZ 0x00487e27
00487E18  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487E1F  74 06                     JZ 0x00487e27
00487E21  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00487E25  EB 04                     JMP 0x00487e2b
LAB_00487e27:
00487E27  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487e2b:
00487E2B  83 BB 5D 04 00 00 16      CMP dword ptr [EBX + 0x45d],0x16
00487E32  74 50                     JZ 0x00487e84
00487E34  83 BB 59 04 00 00 7A      CMP dword ptr [EBX + 0x459],0x7a
00487E3B  74 47                     JZ 0x00487e84
00487E3D  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487E41  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00487E44  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00487E47  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00487E4A  C1 E1 04                  SHL ECX,0x4
00487E4D  03 C8                     ADD ECX,EAX
00487E4F  66 83 3C 4D 7F 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7f],0x0
00487E58  74 24                     JZ 0x00487e7e
00487E5A  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00487E5D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00487E63  52                        PUSH EDX
00487E64  E8 3E B8 F7 FF            CALL 0x004036a7
00487E69  85 C0                     TEST EAX,EAX
00487E6B  74 11                     JZ 0x00487e7e
00487E6D  8B CB                     MOV ECX,EBX
00487E6F  E8 20 B7 F7 FF            CALL 0x00403594
00487E74  85 C0                     TEST EAX,EAX
00487E76  74 06                     JZ 0x00487e7e
00487E78  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
00487E7C  EB 0A                     JMP 0x00487e88
LAB_00487e7e:
00487E7E  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00487E82  EB 04                     JMP 0x00487e88
LAB_00487e84:
00487E84  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_00487e88:
00487E88  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00487E8C  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00487E8F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00487E95  6A 5F                     PUSH 0x5f
00487E97  50                        PUSH EAX
00487E98  E8 CE 99 F7 FF            CALL 0x0040186b
00487E9D  85 C0                     TEST EAX,EAX
00487E9F  0F 8E 10 03 00 00         JLE 0x004881b5
00487EA5  83 BB 5D 04 00 00 15      CMP dword ptr [EBX + 0x45d],0x15
00487EAC  75 1F                     JNZ 0x00487ecd
00487EAE  83 BB 35 06 00 00 02      CMP dword ptr [EBX + 0x635],0x2
00487EB5  75 16                     JNZ 0x00487ecd
LAB_00487eb7:
00487EB7  83 BB 1E 07 00 00 0A      CMP dword ptr [EBX + 0x71e],0xa
00487EBE  0F 8C F1 02 00 00         JL 0x004881b5
LAB_00487ec4:
00487EC4  C6 46 14 03               MOV byte ptr [ESI + 0x14],0x3
00487EC8  E9 EC 02 00 00            JMP 0x004881b9
LAB_00487ecd:
00487ECD  83 BB 1E 07 00 00 0A      CMP dword ptr [EBX + 0x71e],0xa
00487ED4  0F 8C DB 02 00 00         JL 0x004881b5
00487EDA  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
00487EDE  E9 D6 02 00 00            JMP 0x004881b9
switchD_00486f27::caseD_21:
00487EE3  33 C9                     XOR ECX,ECX
00487EE5  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487EE9  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
00487EED  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
00487EF1  C6 46 0C 48               MOV byte ptr [ESI + 0xc],0x48
00487EF5  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00487EF9  C6 46 0E 08               MOV byte ptr [ESI + 0xe],0x8
00487EFD  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00487F03  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
00487F06  0F 85 AD 02 00 00         JNZ 0x004881b9
00487F0C  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
00487F12  74 0F                     JZ 0x00487f23
00487F14  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
00487F1B  74 06                     JZ 0x00487f23
00487F1D  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
00487F21  EB 04                     JMP 0x00487f27
LAB_00487f23:
00487F23  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00487f27:
00487F27  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00487F2D  74 0F                     JZ 0x00487f3e
00487F2F  83 BB 59 04 00 00 66      CMP dword ptr [EBX + 0x459],0x66
00487F36  74 06                     JZ 0x00487f3e
00487F38  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00487F3C  EB 04                     JMP 0x00487f42
LAB_00487f3e:
00487F3E  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_00487f42:
00487F42  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00487F49  74 0F                     JZ 0x00487f5a
00487F4B  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00487F52  74 06                     JZ 0x00487f5a
00487F54  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00487F58  EB 04                     JMP 0x00487f5e
LAB_00487f5a:
00487F5A  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00487f5e:
00487F5E  83 BB 5D 04 00 00 16      CMP dword ptr [EBX + 0x45d],0x16
00487F65  74 50                     JZ 0x00487fb7
00487F67  83 BB 59 04 00 00 7A      CMP dword ptr [EBX + 0x459],0x7a
00487F6E  74 47                     JZ 0x00487fb7
00487F70  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00487F74  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00487F77  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00487F7A  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00487F7D  C1 E2 04                  SHL EDX,0x4
00487F80  03 D0                     ADD EDX,EAX
00487F82  66 83 3C 55 7F 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7f],0x0
00487F8B  74 24                     JZ 0x00487fb1
00487F8D  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00487F90  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00487F96  50                        PUSH EAX
00487F97  E8 0B B7 F7 FF            CALL 0x004036a7
00487F9C  85 C0                     TEST EAX,EAX
00487F9E  74 11                     JZ 0x00487fb1
00487FA0  8B CB                     MOV ECX,EBX
00487FA2  E8 ED B5 F7 FF            CALL 0x00403594
00487FA7  85 C0                     TEST EAX,EAX
00487FA9  74 06                     JZ 0x00487fb1
00487FAB  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
00487FAF  EB 0A                     JMP 0x00487fbb
LAB_00487fb1:
00487FB1  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00487FB5  EB 04                     JMP 0x00487fbb
LAB_00487fb7:
00487FB7  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_00487fbb:
00487FBB  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
00487FBF  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00487FC5  83 F8 07                  CMP EAX,0x7
00487FC8  0F 84 F6 FE FF FF         JZ 0x00487ec4
00487FCE  83 BB 59 04 00 00 6B      CMP dword ptr [EBX + 0x459],0x6b
00487FD5  0F 84 E9 FE FF FF         JZ 0x00487ec4
00487FDB  8B 83 BE 07 00 00         MOV EAX,dword ptr [EBX + 0x7be]
00487FE1  85 C0                     TEST EAX,EAX
00487FE3  0F 8E CC 01 00 00         JLE 0x004881b5
00487FE9  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
00487FED  E9 C7 01 00 00            JMP 0x004881b9
switchD_00486f27::caseD_1c:
00487FF2  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
00487FF6  C6 46 0A 03               MOV byte ptr [ESI + 0xa],0x3
00487FFA  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
00487FFE  C6 46 0C 48               MOV byte ptr [ESI + 0xc],0x48
00488002  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
00488006  C6 46 0E 00               MOV byte ptr [ESI + 0xe],0x0
0048800A  E9 91 F9 FF FF            JMP 0x004879a0
LAB_0048800f:
0048800F  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00488013:
00488013  39 93 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDX
00488019  74 0F                     JZ 0x0048802a
0048801B  83 BB 59 04 00 00 66      CMP dword ptr [EBX + 0x459],0x66
00488022  74 06                     JZ 0x0048802a
00488024  C6 46 10 01               MOV byte ptr [ESI + 0x10],0x1
00488028  EB 04                     JMP 0x0048802e
LAB_0048802a:
0048802A  C6 46 10 03               MOV byte ptr [ESI + 0x10],0x3
LAB_0048802e:
0048802E  83 BB 5D 04 00 00 03      CMP dword ptr [EBX + 0x45d],0x3
00488035  74 0F                     JZ 0x00488046
00488037  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
0048803E  74 06                     JZ 0x00488046
00488040  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
00488044  EB 04                     JMP 0x0048804a
LAB_00488046:
00488046  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_0048804a:
0048804A  83 BB 5D 04 00 00 16      CMP dword ptr [EBX + 0x45d],0x16
00488051  74 5E                     JZ 0x004880b1
00488053  83 BB 59 04 00 00 7A      CMP dword ptr [EBX + 0x459],0x7a
0048805A  74 55                     JZ 0x004880b1
0048805C  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
00488060  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00488063  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00488066  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00488069  C1 E2 04                  SHL EDX,0x4
0048806C  03 D0                     ADD EDX,EAX
0048806E  66 83 3C 55 7F 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7f],0x0
00488077  74 2B                     JZ 0x004880a4
00488079  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0048807C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488082  50                        PUSH EAX
00488083  E8 1F B6 F7 FF            CALL 0x004036a7
00488088  85 C0                     TEST EAX,EAX
0048808A  74 18                     JZ 0x004880a4
0048808C  8B CB                     MOV ECX,EBX
0048808E  E8 01 B5 F7 FF            CALL 0x00403594
00488093  85 C0                     TEST EAX,EAX
00488095  74 0D                     JZ 0x004880a4
00488097  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
0048809B  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
0048809F  E9 15 01 00 00            JMP 0x004881b9
LAB_004880a4:
004880A4  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
004880A8  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
004880AC  E9 08 01 00 00            JMP 0x004881b9
LAB_004880b1:
004880B1  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
004880B5  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
004880B9  E9 FB 00 00 00            JMP 0x004881b9
switchD_00486f27::caseD_24:
004880BE  33 C9                     XOR ECX,ECX
004880C0  C6 46 09 02               MOV byte ptr [ESI + 0x9],0x2
004880C4  C6 46 0A 00               MOV byte ptr [ESI + 0xa],0x0
004880C8  C6 46 0B 01               MOV byte ptr [ESI + 0xb],0x1
004880CC  C6 46 0C 48               MOV byte ptr [ESI + 0xc],0x48
004880D0  C6 46 0D 2F               MOV byte ptr [ESI + 0xd],0x2f
004880D4  C6 46 0E 18               MOV byte ptr [ESI + 0xe],0x18
004880D8  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004880DE  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
004880E1  0F 85 D2 00 00 00         JNZ 0x004881b9
004880E7  39 BB 5D 04 00 00         CMP dword ptr [EBX + 0x45d],EDI
004880ED  74 0F                     JZ 0x004880fe
004880EF  83 BB 59 04 00 00 65      CMP dword ptr [EBX + 0x459],0x65
004880F6  74 06                     JZ 0x004880fe
004880F8  C6 46 0F 01               MOV byte ptr [ESI + 0xf],0x1
004880FC  EB 04                     JMP 0x00488102
LAB_004880fe:
004880FE  C6 46 0F 03               MOV byte ptr [ESI + 0xf],0x3
LAB_00488102:
00488102  C6 46 10 00               MOV byte ptr [ESI + 0x10],0x0
00488106  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
0048810C  83 F8 03                  CMP EAX,0x3
0048810F  74 0F                     JZ 0x00488120
00488111  83 BB 59 04 00 00 67      CMP dword ptr [EBX + 0x459],0x67
00488118  74 06                     JZ 0x00488120
0048811A  C6 46 11 01               MOV byte ptr [ESI + 0x11],0x1
0048811E  EB 04                     JMP 0x00488124
LAB_00488120:
00488120  C6 46 11 03               MOV byte ptr [ESI + 0x11],0x3
LAB_00488124:
00488124  83 BB 5D 04 00 00 16      CMP dword ptr [EBX + 0x45d],0x16
0048812B  74 5A                     JZ 0x00488187
0048812D  83 BB 59 04 00 00 7A      CMP dword ptr [EBX + 0x459],0x7a
00488134  74 51                     JZ 0x00488187
00488136  0F BE 43 24               MOVSX EAX,byte ptr [EBX + 0x24]
0048813A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0048813D  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00488140  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00488143  C1 E2 04                  SHL EDX,0x4
00488146  03 D0                     ADD EDX,EAX
00488148  66 83 3C 55 7F 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7f],0x0
00488151  74 29                     JZ 0x0048817c
00488153  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00488156  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048815C  50                        PUSH EAX
0048815D  E8 45 B5 F7 FF            CALL 0x004036a7
00488162  85 C0                     TEST EAX,EAX
00488164  74 16                     JZ 0x0048817c
00488166  8B CB                     MOV ECX,EBX
00488168  E8 27 B4 F7 FF            CALL 0x00403594
0048816D  85 C0                     TEST EAX,EAX
0048816F  74 0B                     JZ 0x0048817c
00488171  C6 46 12 01               MOV byte ptr [ESI + 0x12],0x1
00488175  BA 02 00 00 00            MOV EDX,0x2
0048817A  EB 0F                     JMP 0x0048818b
LAB_0048817c:
0048817C  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
00488180  BA 02 00 00 00            MOV EDX,0x2
00488185  EB 04                     JMP 0x0048818b
LAB_00488187:
00488187  C6 46 12 03               MOV byte ptr [ESI + 0x12],0x3
LAB_0048818b:
0048818B  C6 46 13 01               MOV byte ptr [ESI + 0x13],0x1
0048818F  8B 83 5D 04 00 00         MOV EAX,dword ptr [EBX + 0x45d]
00488195  83 F8 15                  CMP EAX,0x15
00488198  75 0C                     JNZ 0x004881a6
0048819A  39 93 35 06 00 00         CMP dword ptr [EBX + 0x635],EDX
004881A0  0F 84 11 FD FF FF         JZ 0x00487eb7
LAB_004881a6:
004881A6  83 BB 1E 07 00 00 0A      CMP dword ptr [EBX + 0x71e],0xa
004881AD  7C 06                     JL 0x004881b5
004881AF  C6 46 14 01               MOV byte ptr [ESI + 0x14],0x1
004881B3  EB 04                     JMP 0x004881b9
LAB_004881b5:
004881B5  C6 46 14 00               MOV byte ptr [ESI + 0x14],0x0
switchD_00486f27::default:
004881B9  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004881BC  51                        PUSH ECX
004881BD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004881C3  E8 FD 9B F7 FF            CALL 0x00401dc5
004881C8  85 C0                     TEST EAX,EAX
004881CA  75 05                     JNZ 0x004881d1
004881CC  88 46 15                  MOV byte ptr [ESI + 0x15],AL
004881CF  EB 2E                     JMP 0x004881ff
LAB_004881d1:
004881D1  66 8B 53 30               MOV DX,word ptr [EBX + 0x30]
004881D5  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004881D8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004881DE  52                        PUSH EDX
004881DF  50                        PUSH EAX
004881E0  E8 14 DB F7 FF            CALL 0x00405cf9
004881E5  85 C0                     TEST EAX,EAX
004881E7  75 05                     JNZ 0x004881ee
004881E9  88 46 15                  MOV byte ptr [ESI + 0x15],AL
004881EC  EB 11                     JMP 0x004881ff
LAB_004881ee:
004881EE  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
004881F1  85 C9                     TEST ECX,ECX
004881F3  74 06                     JZ 0x004881fb
004881F5  C6 46 15 03               MOV byte ptr [ESI + 0x15],0x3
004881F9  EB 04                     JMP 0x004881ff
LAB_004881fb:
004881FB  C6 46 15 01               MOV byte ptr [ESI + 0x15],0x1
LAB_004881ff:
004881FF  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00488205  83 C0 EA                  ADD EAX,-0x16
00488208  83 F8 0F                  CMP EAX,0xf
0048820B  77 3B                     JA 0x00488248
0048820D  33 C9                     XOR ECX,ECX
0048820F  8A 88 24 83 48 00         MOV CL,byte ptr [EAX + 0x488324]
switchD_00488215::switchD:
00488215  FF 24 8D 10 83 48 00      JMP dword ptr [ECX*0x4 + 0x488310]
switchD_00488215::caseD_1b:
0048821C  8A 93 1E 07 00 00         MOV DL,byte ptr [EBX + 0x71e]
00488222  88 56 34                  MOV byte ptr [ESI + 0x34],DL
00488225  EB 25                     JMP 0x0048824c
switchD_00488215::caseD_23:
00488227  8A 83 22 07 00 00         MOV AL,byte ptr [EBX + 0x722]
0048822D  88 46 34                  MOV byte ptr [ESI + 0x34],AL
00488230  EB 1A                     JMP 0x0048824c
switchD_00488215::caseD_16:
00488232  8A 8B 26 07 00 00         MOV CL,byte ptr [EBX + 0x726]
00488238  88 4E 34                  MOV byte ptr [ESI + 0x34],CL
0048823B  EB 0F                     JMP 0x0048824c
switchD_00488215::caseD_17:
0048823D  8A 93 2A 07 00 00         MOV DL,byte ptr [EBX + 0x72a]
00488243  88 56 34                  MOV byte ptr [ESI + 0x34],DL
00488246  EB 04                     JMP 0x0048824c
switchD_00488215::caseD_18:
00488248  C6 46 34 00               MOV byte ptr [ESI + 0x34],0x0
LAB_0048824c:
0048824C  8A 83 D2 07 00 00         MOV AL,byte ptr [EBX + 0x7d2]
00488252  5F                        POP EDI
00488253  88 46 1C                  MOV byte ptr [ESI + 0x1c],AL
00488256  8A 8B D6 07 00 00         MOV CL,byte ptr [EBX + 0x7d6]
0048825C  88 4E 1D                  MOV byte ptr [ESI + 0x1d],CL
0048825F  8A 93 DA 07 00 00         MOV DL,byte ptr [EBX + 0x7da]
00488265  88 56 1E                  MOV byte ptr [ESI + 0x1e],DL
00488268  5E                        POP ESI
00488269  5B                        POP EBX
0048826A  8B E5                     MOV ESP,EBP
0048826C  5D                        POP EBP
0048826D  C2 04 00                  RET 0x4
