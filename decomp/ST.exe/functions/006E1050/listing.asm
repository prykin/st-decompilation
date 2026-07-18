FUN_006e1050:
006E1050  55                        PUSH EBP
006E1051  8B EC                     MOV EBP,ESP
006E1053  83 EC 24                  SUB ESP,0x24
006E1056  53                        PUSH EBX
006E1057  56                        PUSH ESI
006E1058  8B F1                     MOV ESI,ECX
006E105A  57                        PUSH EDI
006E105B  83 EC 08                  SUB ESP,0x8
006E105E  DD 86 D8 00 00 00         FLD double ptr [ESI + 0xd8]
006E1064  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006E106A  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1070  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006E1076  DD 1C 24                  FSTP double ptr [ESP]
006E1079  E8 D2 D0 04 00            CALL 0x0072e150
006E107E  E8 05 D2 04 00            CALL 0x0072e288
006E1083  DD 86 E0 00 00 00         FLD double ptr [ESI + 0xe0]
006E1089  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006E108F  89 86 C0 02 00 00         MOV dword ptr [ESI + 0x2c0],EAX
006E1095  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
006E109B  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E10A1  DD 1C 24                  FSTP double ptr [ESP]
006E10A4  E8 A7 D0 04 00            CALL 0x0072e150
006E10A9  83 C4 08                  ADD ESP,0x8
006E10AC  E8 D7 D1 04 00            CALL 0x0072e288
006E10B1  8B BE C0 02 00 00         MOV EDI,dword ptr [ESI + 0x2c0]
006E10B7  8B C8                     MOV ECX,EAX
006E10B9  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006E10BC  89 8E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],ECX
006E10C2  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006E10C6  99                        CDQ
006E10C7  F7 FF                     IDIV EDI
006E10C9  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
006E10CC  8D 78 01                  LEA EDI,[EAX + 0x1]
006E10CF  8D 44 0A FF               LEA EAX,[EDX + ECX*0x1 + -0x1]
006E10D3  99                        CDQ
006E10D4  F7 F9                     IDIV ECX
006E10D6  8B 8E B4 02 00 00         MOV ECX,dword ptr [ESI + 0x2b4]
006E10DC  89 BE B8 02 00 00         MOV dword ptr [ESI + 0x2b8],EDI
006E10E2  40                        INC EAX
006E10E3  89 86 BC 02 00 00         MOV dword ptr [ESI + 0x2bc],EAX
006E10E9  0F AF C7                  IMUL EAX,EDI
006E10EC  3B C1                     CMP EAX,ECX
006E10EE  7E 1B                     JLE 0x006e110b
006E10F0  8B 8E B0 02 00 00         MOV ECX,dword ptr [ESI + 0x2b0]
006E10F6  89 86 B4 02 00 00         MOV dword ptr [ESI + 0x2b4],EAX
006E10FC  03 C0                     ADD EAX,EAX
006E10FE  50                        PUSH EAX
006E10FF  51                        PUSH ECX
006E1100  E8 4B BE FC FF            CALL 0x006acf50
006E1105  89 86 B0 02 00 00         MOV dword ptr [ESI + 0x2b0],EAX
LAB_006e110b:
006E110B  DD 86 98 00 00 00         FLD double ptr [ESI + 0x98]
006E1111  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006E1117  83 EC 08                  SUB ESP,0x8
006E111A  DD 1C 24                  FSTP double ptr [ESP]
006E111D  E8 2E D0 04 00            CALL 0x0072e150
006E1122  E8 61 D1 04 00            CALL 0x0072e288
006E1127  DD 86 A0 00 00 00         FLD double ptr [ESI + 0xa0]
006E112D  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006E1133  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E1136  DD 1C 24                  FSTP double ptr [ESP]
006E1139  E8 12 D0 04 00            CALL 0x0072e150
006E113E  83 C4 08                  ADD ESP,0x8
006E1141  E8 42 D1 04 00            CALL 0x0072e288
006E1146  DB 45 FC                  FILD dword ptr [EBP + -0x4]
006E1149  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006E114C  33 FF                     XOR EDI,EDI
006E114E  6A 01                     PUSH 0x1
006E1150  57                        PUSH EDI
006E1151  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006E1157  57                        PUSH EDI
006E1158  57                        PUSH EDI
006E1159  57                        PUSH EDI
006E115A  57                        PUSH EDI
006E115B  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006E1161  8D 55 EC                  LEA EDX,[EBP + -0x14]
006E1164  57                        PUSH EDI
006E1165  8D 45 DC                  LEA EAX,[EBP + -0x24]
006E1168  52                        PUSH EDX
006E1169  50                        PUSH EAX
006E116A  8B CE                     MOV ECX,ESI
006E116C  D9 5D EC                  FSTP float ptr [EBP + -0x14]
006E116F  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006E1172  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006E1179  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006E117F  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006E1185  D9 5D F0                  FSTP float ptr [EBP + -0x10]
006E1188  E8 43 14 00 00            CALL 0x006e25d0
006E118D  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006E1190  8B 8E C0 02 00 00         MOV ECX,dword ptr [ESI + 0x2c0]
006E1196  C1 F8 10                  SAR EAX,0x10
006E1199  99                        CDQ
006E119A  F7 F9                     IDIV ECX
006E119C  3B D7                     CMP EDX,EDI
006E119E  89 96 C8 02 00 00         MOV dword ptr [ESI + 0x2c8],EDX
006E11A4  74 08                     JZ 0x006e11ae
006E11A6  2B D1                     SUB EDX,ECX
006E11A8  89 96 C8 02 00 00         MOV dword ptr [ESI + 0x2c8],EDX
LAB_006e11ae:
006E11AE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E11B1  8B 8E C4 02 00 00         MOV ECX,dword ptr [ESI + 0x2c4]
006E11B7  C1 F8 10                  SAR EAX,0x10
006E11BA  99                        CDQ
006E11BB  F7 F9                     IDIV ECX
006E11BD  3B D7                     CMP EDX,EDI
006E11BF  89 96 CC 02 00 00         MOV dword ptr [ESI + 0x2cc],EDX
006E11C5  74 08                     JZ 0x006e11cf
006E11C7  2B D1                     SUB EDX,ECX
006E11C9  89 96 CC 02 00 00         MOV dword ptr [ESI + 0x2cc],EDX
LAB_006e11cf:
006E11CF  8B 8E B4 02 00 00         MOV ECX,dword ptr [ESI + 0x2b4]
006E11D5  8B 96 B0 02 00 00         MOV EDX,dword ptr [ESI + 0x2b0]
006E11DB  68 30 75 00 00            PUSH 0x7530
006E11E0  51                        PUSH ECX
006E11E1  52                        PUSH EDX
006E11E2  E8 D9 D4 FE FF            CALL 0x006ce6c0
006E11E7  8B CE                     MOV ECX,ESI
006E11E9  E8 D2 D7 FF FF            CALL 0x006de9c0
006E11EE  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006E11F4  3B C7                     CMP EAX,EDI
006E11F6  0F 84 10 01 00 00         JZ 0x006e130c
006E11FC  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006E1202  89 88 80 02 00 00         MOV dword ptr [EAX + 0x280],ECX
006E1208  8B BE 58 03 00 00         MOV EDI,dword ptr [ESI + 0x358]
006E120E  DD 47 60                  FLD double ptr [EDI + 0x60]
006E1211  DC 86 98 00 00 00         FADD double ptr [ESI + 0x98]
006E1217  DC B6 68 03 00 00         FDIV double ptr [ESI + 0x368]
006E121D  E8 66 D0 04 00            CALL 0x0072e288
006E1222  DD 86 A0 00 00 00         FLD double ptr [ESI + 0xa0]
006E1228  DC 67 78                  FSUB double ptr [EDI + 0x78]
006E122B  8B D8                     MOV EBX,EAX
006E122D  DC B6 68 03 00 00         FDIV double ptr [ESI + 0x368]
006E1233  E8 50 D0 04 00            CALL 0x0072e288
006E1238  39 9E 74 03 00 00         CMP dword ptr [ESI + 0x374],EBX
006E123E  75 18                     JNZ 0x006e1258
006E1240  39 86 78 03 00 00         CMP dword ptr [ESI + 0x378],EAX
006E1246  75 10                     JNZ 0x006e1258
006E1248  8B 97 34 01 00 00         MOV EDX,dword ptr [EDI + 0x134]
006E124E  33 C9                     XOR ECX,ECX
006E1250  3B D1                     CMP EDX,ECX
006E1252  0F 84 A1 00 00 00         JZ 0x006e12f9
LAB_006e1258:
006E1258  89 9E 74 03 00 00         MOV dword ptr [ESI + 0x374],EBX
006E125E  89 86 78 03 00 00         MOV dword ptr [ESI + 0x378],EAX
006E1264  89 9F 74 03 00 00         MOV dword ptr [EDI + 0x374],EBX
006E126A  8B 96 58 03 00 00         MOV EDX,dword ptr [ESI + 0x358]
006E1270  83 EC 08                  SUB ESP,0x8
006E1273  89 82 78 03 00 00         MOV dword ptr [EDX + 0x378],EAX
006E1279  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006E127F  DB 86 78 03 00 00         FILD dword ptr [ESI + 0x378]
006E1285  83 EC 08                  SUB ESP,0x8
006E1288  DC 05 68 B1 79 00         FADD double ptr [0x0079b168]
006E128E  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
006E1294  DC 41 78                  FADD double ptr [ECX + 0x78]
006E1297  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
006E129B  DB 86 74 03 00 00         FILD dword ptr [ESI + 0x374]
006E12A1  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
006E12A7  DC 61 60                  FSUB double ptr [ECX + 0x60]
006E12AA  DD 86 68 03 00 00         FLD double ptr [ESI + 0x368]
006E12B0  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
006E12B6  DE C1                     FADDP
006E12B8  DD 1C 24                  FSTP double ptr [ESP]
006E12BB  6A 04                     PUSH 0x4
006E12BD  E8 4E C3 FF FF            CALL 0x006dd610
006E12C2  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006E12C8  E8 13 C9 FF FF            CALL 0x006ddbe0
006E12CD  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006E12D3  E8 E8 D6 FF FF            CALL 0x006de9c0
006E12D8  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006E12DE  33 C0                     XOR EAX,EAX
006E12E0  5F                        POP EDI
006E12E1  89 81 34 01 00 00         MOV dword ptr [ECX + 0x134],EAX
006E12E7  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
006E12ED  89 86 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EAX
006E12F3  5E                        POP ESI
006E12F4  5B                        POP EBX
006E12F5  8B E5                     MOV ESP,EBP
006E12F7  5D                        POP EBP
006E12F8  C3                        RET
LAB_006e12f9:
006E12F9  89 8E 40 01 00 00         MOV dword ptr [ESI + 0x140],ECX
006E12FF  89 8E 3C 01 00 00         MOV dword ptr [ESI + 0x13c],ECX
006E1305  5F                        POP EDI
006E1306  5E                        POP ESI
006E1307  5B                        POP EBX
006E1308  8B E5                     MOV ESP,EBP
006E130A  5D                        POP EBP
006E130B  C3                        RET
LAB_006e130c:
006E130C  89 BE 40 01 00 00         MOV dword ptr [ESI + 0x140],EDI
006E1312  89 BE 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EDI
006E1318  5F                        POP EDI
006E1319  5E                        POP ESI
006E131A  5B                        POP EBX
006E131B  8B E5                     MOV ESP,EBP
006E131D  5D                        POP EBP
006E131E  C3                        RET
