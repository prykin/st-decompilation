FUN_00632030:
00632030  55                        PUSH EBP
00632031  8B EC                     MOV EBP,ESP
00632033  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00632036  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00632039  83 C1 E7                  ADD ECX,-0x19
0063203C  83 F9 5A                  CMP ECX,0x5a
0063203F  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00632045  0F 87 A9 02 00 00         JA 0x006322f4
0063204B  33 D2                     XOR EDX,EDX
0063204D  8A 91 68 23 63 00         MOV DL,byte ptr [ECX + 0x632368]
switchD_00632053::switchD:
00632053  FF 24 95 1C 23 63 00      JMP dword ptr [EDX*0x4 + 0x63231c]
switchD_00632053::caseD_19:
0063205A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0063205D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00632060  C7 01 96 00 00 00         MOV dword ptr [ECX],0x96
00632066  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00632069  C7 02 96 00 00 00         MOV dword ptr [EDX],0x96
0063206F  C7 01 BE 00 00 00         MOV dword ptr [ECX],0xbe
00632075  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
0063207B  5D                        POP EBP
0063207C  C2 14 00                  RET 0x14
switchD_00632053::caseD_55:
0063207F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00632082  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00632085  C7 02 96 00 00 00         MOV dword ptr [EDX],0x96
0063208B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0063208E  C7 01 96 00 00 00         MOV dword ptr [ECX],0x96
00632094  C7 02 D2 00 00 00         MOV dword ptr [EDX],0xd2
0063209A  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
006320A0  5D                        POP EBP
006320A1  C2 14 00                  RET 0x14
switchD_00632053::caseD_54:
006320A4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006320A7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006320AA  C7 01 8C 00 00 00         MOV dword ptr [ECX],0x8c
006320B0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006320B3  C7 02 8C 00 00 00         MOV dword ptr [EDX],0x8c
006320B9  C7 01 6E 00 00 00         MOV dword ptr [ECX],0x6e
006320BF  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
006320C5  5D                        POP EBP
006320C6  C2 14 00                  RET 0x14
switchD_00632053::caseD_5a:
006320C9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006320CC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006320CF  C7 02 8C 00 00 00         MOV dword ptr [EDX],0x8c
006320D5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006320D8  C7 01 AA 00 00 00         MOV dword ptr [ECX],0xaa
006320DE  C7 02 B4 00 00 00         MOV dword ptr [EDX],0xb4
006320E4  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
006320EA  5D                        POP EBP
006320EB  C2 14 00                  RET 0x14
switchD_00632053::caseD_66:
006320EE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006320F1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006320F4  C7 01 AF 00 00 00         MOV dword ptr [ECX],0xaf
006320FA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006320FD  C7 02 AF 00 00 00         MOV dword ptr [EDX],0xaf
00632103  C7 01 D2 00 00 00         MOV dword ptr [ECX],0xd2
00632109  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
0063210F  5D                        POP EBP
00632110  C2 14 00                  RET 0x14
switchD_00632053::caseD_67:
00632113  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00632116  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00632119  C7 02 AA 00 00 00         MOV dword ptr [EDX],0xaa
0063211F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00632122  C7 01 AA 00 00 00         MOV dword ptr [ECX],0xaa
00632128  C7 02 D2 00 00 00         MOV dword ptr [EDX],0xd2
0063212E  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
00632134  5D                        POP EBP
00632135  C2 14 00                  RET 0x14
switchD_00632053::caseD_5e:
00632138  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0063213B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0063213E  C7 02 AA 00 00 00         MOV dword ptr [EDX],0xaa
00632144  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00632147  C7 01 AA 00 00 00         MOV dword ptr [ECX],0xaa
0063214D  C7 02 E6 00 00 00         MOV dword ptr [EDX],0xe6
00632153  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
00632159  5D                        POP EBP
0063215A  C2 14 00                  RET 0x14
switchD_00632053::caseD_65:
0063215D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00632160  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00632163  C7 01 96 00 00 00         MOV dword ptr [ECX],0x96
00632169  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0063216C  C7 02 96 00 00 00         MOV dword ptr [EDX],0x96
00632172  C7 01 D2 00 00 00         MOV dword ptr [ECX],0xd2
00632178  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
0063217E  5D                        POP EBP
0063217F  C2 14 00                  RET 0x14
switchD_00632053::caseD_53:
00632182  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00632185  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00632188  C7 02 0E 01 00 00         MOV dword ptr [EDX],0x10e
0063218E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00632191  C7 01 0E 01 00 00         MOV dword ptr [ECX],0x10e
00632197  C7 02 DC 00 00 00         MOV dword ptr [EDX],0xdc
0063219D  C7 00 C9 FF FF FF         MOV dword ptr [EAX],0xffffffc9
006321A3  5D                        POP EBP
006321A4  C2 14 00                  RET 0x14
switchD_00632053::caseD_5b:
006321A7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006321AA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006321AD  C7 01 E6 00 00 00         MOV dword ptr [ECX],0xe6
006321B3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006321B6  C7 02 E6 00 00 00         MOV dword ptr [EDX],0xe6
006321BC  C7 01 DC 00 00 00         MOV dword ptr [ECX],0xdc
006321C2  C7 00 DD FF FF FF         MOV dword ptr [EAX],0xffffffdd
006321C8  5D                        POP EBP
006321C9  C2 14 00                  RET 0x14
switchD_00632053::caseD_5d:
006321CC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006321CF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006321D2  C7 02 E6 00 00 00         MOV dword ptr [EDX],0xe6
006321D8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006321DB  C7 01 E6 00 00 00         MOV dword ptr [ECX],0xe6
006321E1  C7 02 8C 00 00 00         MOV dword ptr [EDX],0x8c
006321E7  C7 00 DD FF FF FF         MOV dword ptr [EAX],0xffffffdd
006321ED  5D                        POP EBP
006321EE  C2 14 00                  RET 0x14
switchD_00632053::caseD_62:
006321F1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006321F4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006321F7  C7 01 F2 00 00 00         MOV dword ptr [ECX],0xf2
006321FD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00632200  C7 02 F2 00 00 00         MOV dword ptr [EDX],0xf2
00632206  C7 01 C3 00 00 00         MOV dword ptr [ECX],0xc3
0063220C  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
00632212  5D                        POP EBP
00632213  C2 14 00                  RET 0x14
switchD_00632053::caseD_64:
00632216  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00632219  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0063221C  C7 02 27 01 00 00         MOV dword ptr [EDX],0x127
00632222  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00632225  C7 01 0E 01 00 00         MOV dword ptr [ECX],0x10e
0063222B  C7 02 D2 00 00 00         MOV dword ptr [EDX],0xd2
00632231  C7 00 BF FF FF FF         MOV dword ptr [EAX],0xffffffbf
00632237  5D                        POP EBP
00632238  C2 14 00                  RET 0x14
switchD_00632053::caseD_6e:
0063223B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0063223E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00632241  C7 01 E6 00 00 00         MOV dword ptr [ECX],0xe6
00632247  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0063224A  C7 02 E6 00 00 00         MOV dword ptr [EDX],0xe6
00632250  C7 01 CD 00 00 00         MOV dword ptr [ECX],0xcd
00632256  C7 00 AB FF FF FF         MOV dword ptr [EAX],0xffffffab
0063225C  5D                        POP EBP
0063225D  C2 14 00                  RET 0x14
switchD_00632053::caseD_6c:
00632260  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00632263  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00632266  C7 02 F0 00 00 00         MOV dword ptr [EDX],0xf0
0063226C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0063226F  C7 01 F0 00 00 00         MOV dword ptr [ECX],0xf0
00632275  C7 02 73 00 00 00         MOV dword ptr [EDX],0x73
0063227B  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
00632281  5D                        POP EBP
00632282  C2 14 00                  RET 0x14
switchD_00632053::caseD_63:
00632285  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00632288  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0063228B  C7 01 DC 00 00 00         MOV dword ptr [ECX],0xdc
00632291  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00632294  C7 02 DC 00 00 00         MOV dword ptr [EDX],0xdc
0063229A  C7 01 73 00 00 00         MOV dword ptr [ECX],0x73
006322A0  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
006322A6  5D                        POP EBP
006322A7  C2 14 00                  RET 0x14
switchD_00632053::caseD_5c:
006322AA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006322AD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006322B0  C7 02 0E 01 00 00         MOV dword ptr [EDX],0x10e
006322B6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006322B9  C7 01 0E 01 00 00         MOV dword ptr [ECX],0x10e
006322BF  C7 02 E6 00 00 00         MOV dword ptr [EDX],0xe6
006322C5  C7 00 A6 FF FF FF         MOV dword ptr [EAX],0xffffffa6
006322CB  5D                        POP EBP
006322CC  C2 14 00                  RET 0x14
switchD_00632053::caseD_5f:
006322CF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006322D2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006322D5  C7 01 40 01 00 00         MOV dword ptr [ECX],0x140
006322DB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006322DE  C7 02 40 01 00 00         MOV dword ptr [EDX],0x140
006322E4  C7 01 D2 00 00 00         MOV dword ptr [ECX],0xd2
006322EA  C7 00 E2 FF FF FF         MOV dword ptr [EAX],0xffffffe2
006322F0  5D                        POP EBP
006322F1  C2 14 00                  RET 0x14
switchD_00632053::caseD_26:
006322F4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006322F7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006322FA  C7 02 96 00 00 00         MOV dword ptr [EDX],0x96
00632300  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00632303  C7 01 96 00 00 00         MOV dword ptr [ECX],0x96
00632309  C7 02 96 00 00 00         MOV dword ptr [EDX],0x96
0063230F  C7 00 E2 FF FF FF         MOV dword ptr [EAX],0xffffffe2
00632315  5D                        POP EBP
00632316  C2 14 00                  RET 0x14
