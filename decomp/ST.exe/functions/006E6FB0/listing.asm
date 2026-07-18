FUN_006e6fb0:
006E6FB0  55                        PUSH EBP
006E6FB1  8B EC                     MOV EBP,ESP
006E6FB3  83 EC 48                  SUB ESP,0x48
006E6FB6  53                        PUSH EBX
006E6FB7  8B D9                     MOV EBX,ECX
006E6FB9  83 BB A8 00 00 00 03      CMP dword ptr [EBX + 0xa8],0x3
006E6FC0  0F 8F DC 13 00 00         JG 0x006e83a2
006E6FC6  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
006E6FCC  33 C0                     XOR EAX,EAX
006E6FCE  3B C8                     CMP ECX,EAX
006E6FD0  0F 84 CC 13 00 00         JZ 0x006e83a2
006E6FD6  A3 90 6D 85 00            MOV [0x00856d90],EAX
006E6FDB  A3 94 6D 85 00            MOV [0x00856d94],EAX
006E6FE0  8B 8B DC 03 00 00         MOV ECX,dword ptr [EBX + 0x3dc]
006E6FE6  56                        PUSH ESI
006E6FE7  89 0D 98 6D 85 00         MOV dword ptr [0x00856d98],ECX
006E6FED  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E6FF0  8B 93 DC 03 00 00         MOV EDX,dword ptr [EBX + 0x3dc]
006E6FF6  3B C8                     CMP ECX,EAX
006E6FF8  57                        PUSH EDI
006E6FF9  89 15 9C 6D 85 00         MOV dword ptr [0x00856d9c],EDX
006E6FFF  0F 84 EF 12 00 00         JZ 0x006e82f4
006E7005  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E7008  33 C9                     XOR ECX,ECX
006E700A  50                        PUSH EAX
006E700B  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
006E700F  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006E7012  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
006E7016  83 C1 1F                  ADD ECX,0x1f
006E7019  C1 E9 03                  SHR ECX,0x3
006E701C  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006E7022  89 0D 8C 6D 85 00         MOV dword ptr [0x00856d8c],ECX
006E7028  E8 73 DF FC FF            CALL 0x006b4fa0
006E702D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006E7030  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E7033  2B F7                     SUB ESI,EDI
006E7035  03 D0                     ADD EDX,EAX
006E7037  4E                        DEC ESI
006E7038  0F AF 35 8C 6D 85 00      IMUL ESI,dword ptr [0x00856d8c]
006E703F  03 F2                     ADD ESI,EDX
006E7041  8B FE                     MOV EDI,ESI
006E7043  89 3D 88 6D 85 00         MOV dword ptr [0x00856d88],EDI
006E7049  8B 8B 1C 04 00 00         MOV ECX,dword ptr [EBX + 0x41c]
006E704F  8B 83 10 03 00 00         MOV EAX,dword ptr [EBX + 0x310]
006E7055  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006E7058  3B C8                     CMP ECX,EAX
006E705A  7E 03                     JLE 0x006e705f
006E705C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_006e705f:
006E705F  8B 83 A8 00 00 00         MOV EAX,dword ptr [EBX + 0xa8]
006E7065  8B 8C 83 28 04 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x428]
006E706C  85 C9                     TEST ECX,ECX
006E706E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006E7071  0F 84 AA 03 00 00         JZ 0x006e7421
006E7077  8B 93 66 04 00 00         MOV EDX,dword ptr [EBX + 0x466]
006E707D  85 D2                     TEST EDX,EDX
006E707F  0F 84 DA 02 00 00         JZ 0x006e735f
006E7085  8B 94 83 A2 04 00 00      MOV EDX,dword ptr [EBX + EAX*0x4 + 0x4a2]
006E708C  85 D2                     TEST EDX,EDX
006E708E  0F 84 CB 02 00 00         JZ 0x006e735f
006E7094  8B 83 DC 03 00 00         MOV EAX,dword ptr [EBX + 0x3dc]
006E709A  99                        CDQ
006E709B  2B C2                     SUB EAX,EDX
006E709D  8B F8                     MOV EDI,EAX
006E709F  D1 FF                     SAR EDI,0x1
006E70A1  89 3D 84 6D 85 00         MOV dword ptr [0x00856d84],EDI
006E70A7  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
006E70AD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006E70B0  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
006E70B4  0F BF 30                  MOVSX ESI,word ptr [EAX]
006E70B7  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006E70BA  03 CE                     ADD ECX,ESI
006E70BC  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
006E70BF  C1 E0 04                  SHL EAX,0x4
006E70C2  2B C1                     SUB EAX,ECX
006E70C4  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006E70C7  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
006E70CA  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
006E70CD  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006E70D0  99                        CDQ
006E70D1  F7 BB DC 03 00 00         IDIV dword ptr [EBX + 0x3dc]
006E70D7  8B 15 88 6D 85 00         MOV EDX,dword ptr [0x00856d88]
006E70DD  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006E70E0  8B C8                     MOV ECX,EAX
006E70E2  8B 83 A8 00 00 00         MOV EAX,dword ptr [EBX + 0xa8]
006E70E8  83 F8 03                  CMP EAX,0x3
006E70EB  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006E70EE  0F 87 C3 00 00 00         JA 0x006e71b7
switchD_006e70f4::switchD:
006E70F4  FF 24 85 AC 83 6E 00      JMP dword ptr [EAX*0x4 + 0x6e83ac]
switchD_006e70f4::caseD_0:
006E70FB  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
006E7101  C1 E0 10                  SHL EAX,0x10
006E7104  99                        CDQ
006E7105  2B C2                     SUB EAX,EDX
006E7107  8B F0                     MOV ESI,EAX
006E7109  B8 3C 7C 08 00            MOV EAX,0x87c3c
006E710E  D1 FE                     SAR ESI,0x1
006E7110  E9 A6 00 00 00            JMP 0x006e71bb
switchD_006e70f4::caseD_1:
006E7115  8D 4E 0C                  LEA ECX,[ESI + 0xc]
006E7118  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
006E711B  C1 E0 04                  SHL EAX,0x4
006E711E  2B C1                     SUB EAX,ECX
006E7120  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006E7123  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E7126  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006E7129  8B 83 B6 04 00 00         MOV EAX,dword ptr [EBX + 0x4b6]
006E712F  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006E7132  8D 0C F6                  LEA ECX,[ESI + ESI*0x8]
006E7135  C1 E0 10                  SHL EAX,0x10
006E7138  C1 E1 04                  SHL ECX,0x4
006E713B  99                        CDQ
006E713C  2B CE                     SUB ECX,ESI
006E713E  2B C2                     SUB EAX,EDX
006E7140  D1 F8                     SAR EAX,0x1
006E7142  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
006E7145  8D 34 96                  LEA ESI,[ESI + EDX*0x4]
006E7148  8D 0C F6                  LEA ECX,[ESI + ESI*0x8]
006E714B  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
006E714E  2B C1                     SUB EAX,ECX
006E7150  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006E7153  EB 66                     JMP 0x006e71bb
switchD_006e70f4::caseD_2:
006E7155  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
006E715B  C1 E0 10                  SHL EAX,0x10
006E715E  99                        CDQ
006E715F  2B C2                     SUB EAX,EDX
006E7161  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006E7164  8B F0                     MOV ESI,EAX
006E7166  8B 83 B6 04 00 00         MOV EAX,dword ptr [EBX + 0x4b6]
006E716C  C1 E0 10                  SHL EAX,0x10
006E716F  2B C2                     SUB EAX,EDX
006E7171  D1 FE                     SAR ESI,0x1
006E7173  2D 3C 7C 09 00            SUB EAX,0x97c3c
006E7178  EB 41                     JMP 0x006e71bb
switchD_006e70f4::caseD_3:
006E717A  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006E717D  8B B3 B2 04 00 00         MOV ESI,dword ptr [EBX + 0x4b2]
006E7183  C1 E6 10                  SHL ESI,0x10
006E7186  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
006E7189  C1 E0 04                  SHL EAX,0x4
006E718C  2B C2                     SUB EAX,EDX
006E718E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006E7191  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
006E7194  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006E7197  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006E719A  2B F0                     SUB ESI,EAX
006E719C  8B 83 B6 04 00 00         MOV EAX,dword ptr [EBX + 0x4b6]
006E71A2  81 EE 3C 7C 09 00         SUB ESI,0x97c3c
006E71A8  C1 E0 10                  SHL EAX,0x10
006E71AB  99                        CDQ
006E71AC  2B C2                     SUB EAX,EDX
006E71AE  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006E71B1  D1 F8                     SAR EAX,0x1
006E71B3  2B C2                     SUB EAX,EDX
006E71B5  EB 04                     JMP 0x006e71bb
switchD_006e70f4::default:
006E71B7  33 F6                     XOR ESI,ESI
006E71B9  33 C0                     XOR EAX,EAX
LAB_006e71bb:
006E71BB  85 FF                     TEST EDI,EDI
006E71BD  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
006E71C4  0F 8C BD 00 00 00         JL 0x006e7287
006E71CA  8D 4F 01                  LEA ECX,[EDI + 0x1]
006E71CD  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006E71D0  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_006e71d3:
006E71D3  8B D0                     MOV EDX,EAX
006E71D5  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
006E71DB  C1 FA 10                  SAR EDX,0x10
006E71DE  0F AF 93 B2 04 00 00      IMUL EDX,dword ptr [EBX + 0x4b2]
006E71E5  8B 8C 8B A2 04 00 00      MOV ECX,dword ptr [EBX + ECX*0x4 + 0x4a2]
006E71EC  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
006E71EF  03 CA                     ADD ECX,EDX
006E71F1  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006E71F4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E71F7  3B F9                     CMP EDI,ECX
006E71F9  7F 5E                     JG 0x006e7259
006E71FB  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006E71FE  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
006E7201  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006E7204  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006E7207  2B D1                     SUB EDX,ECX
006E7209  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E720C  2B CF                     SUB ECX,EDI
006E720E  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006E7211  41                        INC ECX
006E7212  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
LAB_006e7215:
006E7215  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006E7218  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006E721B  C1 F9 10                  SAR ECX,0x10
006E721E  80 3C 11 00               CMP byte ptr [ECX + EDX*0x1],0x0
006E7222  74 0D                     JZ 0x006e7231
006E7224  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006E7227  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006E722A  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006E722D  88 11                     MOV byte ptr [ECX],DL
006E722F  EB 0B                     JMP 0x006e723c
LAB_006e7231:
006E7231  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E7234  8A 8B 9E 04 00 00         MOV CL,byte ptr [EBX + 0x49e]
006E723A  88 0A                     MOV byte ptr [EDX],CL
LAB_006e723c:
006E723C  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006E723F  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006E7242  03 D1                     ADD EDX,ECX
006E7244  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006E7247  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E724A  42                        INC EDX
006E724B  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006E724E  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006E7251  4A                        DEC EDX
006E7252  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006E7255  75 BE                     JNZ 0x006e7215
006E7257  EB 03                     JMP 0x006e725c
LAB_006e7259:
006E7259  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
LAB_006e725c:
006E725C  8B 15 8C 6D 85 00         MOV EDX,dword ptr [0x00856d8c]
006E7262  03 C1                     ADD EAX,ECX
006E7264  29 55 D8                  SUB dword ptr [EBP + -0x28],EDX
006E7267  8B 93 24 04 00 00         MOV EDX,dword ptr [EBX + 0x424]
006E726D  01 55 E8                  ADD dword ptr [EBP + -0x18],EDX
006E7270  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E7273  4F                        DEC EDI
006E7274  42                        INC EDX
006E7275  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E7278  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006E727B  2B F1                     SUB ESI,ECX
006E727D  4A                        DEC EDX
006E727E  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006E7281  0F 85 4C FF FF FF         JNZ 0x006e71d3
LAB_006e7287:
006E7287  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E728A  47                        INC EDI
006E728B  4A                        DEC EDX
006E728C  03 F1                     ADD ESI,ECX
006E728E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E7291  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006E7294  3B 93 DC 03 00 00         CMP EDX,dword ptr [EBX + 0x3dc]
006E729A  0F 8D 81 01 00 00         JGE 0x006e7421
LAB_006e72a0:
006E72A0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E72A3  47                        INC EDI
006E72A4  4A                        DEC EDX
006E72A5  03 F1                     ADD ESI,ECX
006E72A7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E72AA  8B D0                     MOV EDX,EAX
006E72AC  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
006E72B2  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
006E72B5  C1 FA 10                  SAR EDX,0x10
006E72B8  0F AF 93 B2 04 00 00      IMUL EDX,dword ptr [EBX + 0x4b2]
006E72BF  8B 8C 8B A2 04 00 00      MOV ECX,dword ptr [EBX + ECX*0x4 + 0x4a2]
006E72C6  03 CA                     ADD ECX,EDX
006E72C8  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006E72CB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E72CE  3B F9                     CMP EDI,ECX
006E72D0  7F 5E                     JG 0x006e7330
006E72D2  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006E72D5  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
006E72D8  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006E72DB  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006E72DE  2B D1                     SUB EDX,ECX
006E72E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E72E3  2B CF                     SUB ECX,EDI
006E72E5  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006E72E8  41                        INC ECX
006E72E9  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
LAB_006e72ec:
006E72EC  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006E72EF  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006E72F2  C1 F9 10                  SAR ECX,0x10
006E72F5  80 3C 11 00               CMP byte ptr [ECX + EDX*0x1],0x0
006E72F9  74 0D                     JZ 0x006e7308
006E72FB  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006E72FE  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006E7301  8A 14 11                  MOV DL,byte ptr [ECX + EDX*0x1]
006E7304  88 11                     MOV byte ptr [ECX],DL
006E7306  EB 0B                     JMP 0x006e7313
LAB_006e7308:
006E7308  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E730B  8A 8B 9E 04 00 00         MOV CL,byte ptr [EBX + 0x49e]
006E7311  88 0A                     MOV byte ptr [EDX],CL
LAB_006e7313:
006E7313  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006E7316  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006E7319  03 D1                     ADD EDX,ECX
006E731B  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006E731E  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E7321  42                        INC EDX
006E7322  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006E7325  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006E7328  4A                        DEC EDX
006E7329  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006E732C  75 BE                     JNZ 0x006e72ec
006E732E  EB 03                     JMP 0x006e7333
LAB_006e7330:
006E7330  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
LAB_006e7333:
006E7333  8B 15 8C 6D 85 00         MOV EDX,dword ptr [0x00856d8c]
006E7339  03 C1                     ADD EAX,ECX
006E733B  29 55 D8                  SUB dword ptr [EBP + -0x28],EDX
006E733E  8B 93 24 04 00 00         MOV EDX,dword ptr [EBX + 0x424]
006E7344  01 55 E8                  ADD dword ptr [EBP + -0x18],EDX
006E7347  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006E734A  42                        INC EDX
006E734B  3B 93 DC 03 00 00         CMP EDX,dword ptr [EBX + 0x3dc]
006E7351  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006E7354  0F 8C 46 FF FF FF         JL 0x006e72a0
006E735A  E9 C2 00 00 00            JMP 0x006e7421
LAB_006e735f:
006E735F  8B 83 DC 03 00 00         MOV EAX,dword ptr [EBX + 0x3dc]
006E7365  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
006E736C  99                        CDQ
006E736D  2B C2                     SUB EAX,EDX
006E736F  D1 F8                     SAR EAX,0x1
006E7371  8B F0                     MOV ESI,EAX
006E7373  A3 84 6D 85 00            MOV [0x00856d84],EAX
006E7378  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006E737B  78 4D                     JS 0x006e73ca
006E737D  8B D0                     MOV EDX,EAX
006E737F  42                        INC EDX
006E7380  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006E7383  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_006e7386:
006E7386  3B C6                     CMP EAX,ESI
006E7388  7F 1F                     JG 0x006e73a9
006E738A  2B CF                     SUB ECX,EDI
006E738C  2B F0                     SUB ESI,EAX
006E738E  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
006E7391  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006E7394  46                        INC ESI
006E7395  EB 03                     JMP 0x006e739a
LAB_006e7397:
006E7397  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_006e739a:
006E739A  8A 0C 0A                  MOV CL,byte ptr [EDX + ECX*0x1]
006E739D  88 0A                     MOV byte ptr [EDX],CL
006E739F  42                        INC EDX
006E73A0  4E                        DEC ESI
006E73A1  75 F4                     JNZ 0x006e7397
006E73A3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006E73A6  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_006e73a9:
006E73A9  8B 15 8C 6D 85 00         MOV EDX,dword ptr [0x00856d8c]
006E73AF  2B FA                     SUB EDI,EDX
006E73B1  8B 93 24 04 00 00         MOV EDX,dword ptr [EBX + 0x424]
006E73B7  03 CA                     ADD ECX,EDX
006E73B9  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006E73BC  48                        DEC EAX
006E73BD  46                        INC ESI
006E73BE  4A                        DEC EDX
006E73BF  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006E73C2  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006E73C5  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006E73C8  75 BC                     JNZ 0x006e7386
LAB_006e73ca:
006E73CA  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006E73CD  40                        INC EAX
006E73CE  4E                        DEC ESI
006E73CF  3B 93 DC 03 00 00         CMP EDX,dword ptr [EBX + 0x3dc]
006E73D5  7D 4A                     JGE 0x006e7421
LAB_006e73d7:
006E73D7  40                        INC EAX
006E73D8  4E                        DEC ESI
006E73D9  3B C6                     CMP EAX,ESI
006E73DB  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006E73DE  7F 1F                     JG 0x006e73ff
006E73E0  2B CF                     SUB ECX,EDI
006E73E2  2B F0                     SUB ESI,EAX
006E73E4  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
006E73E7  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006E73EA  46                        INC ESI
006E73EB  EB 03                     JMP 0x006e73f0
LAB_006e73ed:
006E73ED  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_006e73f0:
006E73F0  8A 0C 0A                  MOV CL,byte ptr [EDX + ECX*0x1]
006E73F3  88 0A                     MOV byte ptr [EDX],CL
006E73F5  42                        INC EDX
006E73F6  4E                        DEC ESI
006E73F7  75 F4                     JNZ 0x006e73ed
006E73F9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006E73FC  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_006e73ff:
006E73FF  8B 15 8C 6D 85 00         MOV EDX,dword ptr [0x00856d8c]
006E7405  2B FA                     SUB EDI,EDX
006E7407  8B 93 24 04 00 00         MOV EDX,dword ptr [EBX + 0x424]
006E740D  03 CA                     ADD ECX,EDX
006E740F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006E7412  42                        INC EDX
006E7413  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006E7416  3B 93 DC 03 00 00         CMP EDX,dword ptr [EBX + 0x3dc]
006E741C  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006E741F  7C B6                     JL 0x006e73d7
LAB_006e7421:
006E7421  8B B3 4A 04 00 00         MOV ESI,dword ptr [EBX + 0x44a]
006E7427  85 F6                     TEST ESI,ESI
006E7429  74 15                     JZ 0x006e7440
LAB_006e742b:
006E742B  8A 46 0C                  MOV AL,byte ptr [ESI + 0xc]
006E742E  84 C0                     TEST AL,AL
006E7430  74 08                     JZ 0x006e743a
006E7432  56                        PUSH ESI
006E7433  8B CB                     MOV ECX,EBX
006E7435  E8 B6 F6 FF FF            CALL 0x006e6af0
LAB_006e743a:
006E743A  8B 36                     MOV ESI,dword ptr [ESI]
006E743C  85 F6                     TEST ESI,ESI
006E743E  75 EB                     JNZ 0x006e742b
LAB_006e7440:
006E7440  8B B3 46 04 00 00         MOV ESI,dword ptr [EBX + 0x446]
006E7446  85 F6                     TEST ESI,ESI
006E7448  74 15                     JZ 0x006e745f
LAB_006e744a:
006E744A  8A 46 0C                  MOV AL,byte ptr [ESI + 0xc]
006E744D  84 C0                     TEST AL,AL
006E744F  74 08                     JZ 0x006e7459
006E7451  56                        PUSH ESI
006E7452  8B CB                     MOV ECX,EBX
006E7454  E8 97 F6 FF FF            CALL 0x006e6af0
LAB_006e7459:
006E7459  8B 36                     MOV ESI,dword ptr [ESI]
006E745B  85 F6                     TEST ESI,ESI
006E745D  75 EB                     JNZ 0x006e744a
LAB_006e745f:
006E745F  8B 83 DC 03 00 00         MOV EAX,dword ptr [EBX + 0x3dc]
006E7465  99                        CDQ
006E7466  2B C2                     SUB EAX,EDX
006E7468  D1 F8                     SAR EAX,0x1
006E746A  A3 84 6D 85 00            MOV [0x00856d84],EAX
006E746F  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
006E7475  0F BF 02                  MOVSX EAX,word ptr [EDX]
006E7478  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006E747B  DB 45 BC                  FILD dword ptr [EBP + -0x44]
006E747E  DC 8B C8 00 00 00         FMUL double ptr [EBX + 0xc8]
006E7484  DC 3D 88 CD 79 00         FDIVR double ptr [0x0079cd88]
006E748A  D9 1D 80 6D 85 00         FSTP float ptr [0x00856d80]
006E7490  8B B3 52 04 00 00         MOV ESI,dword ptr [EBX + 0x452]
006E7496  85 F6                     TEST ESI,ESI
006E7498  0F 84 25 03 00 00         JZ 0x006e77c3
LAB_006e749e:
006E749E  8B 83 A8 00 00 00         MOV EAX,dword ptr [EBX + 0xa8]
006E74A4  83 F8 03                  CMP EAX,0x3
006E74A7  0F 87 0C 03 00 00         JA 0x006e77b9
switchD_006e74ad::switchD:
006E74AD  FF 24 85 BC 83 6E 00      JMP dword ptr [EAX*0x4 + 0x6e83bc]
switchD_006e74ad::caseD_0:
006E74B4  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E74BA  D9 46 08                  FLD float ptr [ESI + 0x8]
006E74BD  D8 66 0C                  FSUB float ptr [ESI + 0xc]
006E74C0  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E74C6  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E74CC  D8 C9                     FMUL ST1
006E74CE  E8 B5 6D 04 00            CALL 0x0072e288
006E74D3  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E74D6  D8 46 08                  FADD float ptr [ESI + 0x8]
006E74D9  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006E74DC  D8 C9                     FMUL ST1
006E74DE  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E74E4  E8 9F 6D 04 00            CALL 0x0072e288
006E74E9  D9 46 10                  FLD float ptr [ESI + 0x10]
006E74EC  D8 66 14                  FSUB float ptr [ESI + 0x14]
006E74EF  8B F8                     MOV EDI,EAX
006E74F1  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E74F7  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E74FD  D8 C9                     FMUL ST1
006E74FF  E8 84 6D 04 00            CALL 0x0072e288
006E7504  D9 46 14                  FLD float ptr [ESI + 0x14]
006E7507  D8 46 10                  FADD float ptr [ESI + 0x10]
006E750A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E750D  D8 C9                     FMUL ST1
006E750F  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7515  E8 6E 6D 04 00            CALL 0x0072e288
006E751A  DD D8                     FSTP ST0
006E751C  E9 77 01 00 00            JMP 0x006e7698
switchD_006e74ad::caseD_1:
006E7521  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E7527  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E752A  D8 46 08                  FADD float ptr [ESI + 0x8]
006E752D  D8 C9                     FMUL ST1
006E752F  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7535  E8 4E 6D 04 00            CALL 0x0072e288
006E753A  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E753D  D8 66 08                  FSUB float ptr [ESI + 0x8]
006E7540  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006E7543  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7549  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E754F  D8 C9                     FMUL ST1
006E7551  E8 32 6D 04 00            CALL 0x0072e288
006E7556  D9 46 14                  FLD float ptr [ESI + 0x14]
006E7559  D8 46 10                  FADD float ptr [ESI + 0x10]
006E755C  8B F8                     MOV EDI,EAX
006E755E  D8 C9                     FMUL ST1
006E7560  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7566  E8 1D 6D 04 00            CALL 0x0072e288
006E756B  D9 46 14                  FLD float ptr [ESI + 0x14]
006E756E  D8 66 10                  FSUB float ptr [ESI + 0x10]
006E7571  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E7574  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E757A  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E7580  D8 C9                     FMUL ST1
006E7582  E8 01 6D 04 00            CALL 0x0072e288
006E7587  DD D8                     FSTP ST0
006E7589  E9 0A 01 00 00            JMP 0x006e7698
switchD_006e74ad::caseD_2:
006E758E  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E7594  D9 46 08                  FLD float ptr [ESI + 0x8]
006E7597  D8 66 0C                  FSUB float ptr [ESI + 0xc]
006E759A  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E75A0  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
006E75A6  D8 C9                     FMUL ST1
006E75A8  E8 DB 6C 04 00            CALL 0x0072e288
006E75AD  DB 83 DC 03 00 00         FILD dword ptr [EBX + 0x3dc]
006E75B3  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E75B6  D8 46 08                  FADD float ptr [ESI + 0x8]
006E75B9  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006E75BC  D8 CA                     FMUL ST2
006E75BE  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E75C4  D8 E9                     FSUBR ST0,ST1
006E75C6  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E75CC  E8 B7 6C 04 00            CALL 0x0072e288
006E75D1  D9 46 10                  FLD float ptr [ESI + 0x10]
006E75D4  D8 66 14                  FSUB float ptr [ESI + 0x14]
006E75D7  8B F8                     MOV EDI,EAX
006E75D9  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E75DF  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
006E75E5  D8 CA                     FMUL ST2
006E75E7  E8 9C 6C 04 00            CALL 0x0072e288
006E75EC  D9 46 14                  FLD float ptr [ESI + 0x14]
006E75EF  D8 46 10                  FADD float ptr [ESI + 0x10]
006E75F2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E75F5  D8 CA                     FMUL ST2
006E75F7  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E75FD  D8 E9                     FSUBR ST0,ST1
006E75FF  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E7605  E8 7E 6C 04 00            CALL 0x0072e288
006E760A  DD D8                     FSTP ST0
006E760C  DD D8                     FSTP ST0
006E760E  E9 85 00 00 00            JMP 0x006e7698
switchD_006e74ad::caseD_3:
006E7613  DB 83 DC 03 00 00         FILD dword ptr [EBX + 0x3dc]
006E7619  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E761F  D9 5D CC                  FSTP float ptr [EBP + -0x34]
006E7622  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E7625  D8 46 08                  FADD float ptr [ESI + 0x8]
006E7628  D8 4D CC                  FMUL float ptr [EBP + -0x34]
006E762B  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7631  D8 E9                     FSUBR ST0,ST1
006E7633  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E7639  E8 4A 6C 04 00            CALL 0x0072e288
006E763E  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E7641  D8 66 08                  FSUB float ptr [ESI + 0x8]
006E7644  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006E7647  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E764D  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
006E7653  D8 4D CC                  FMUL float ptr [EBP + -0x34]
006E7656  E8 2D 6C 04 00            CALL 0x0072e288
006E765B  D9 46 14                  FLD float ptr [ESI + 0x14]
006E765E  D8 46 10                  FADD float ptr [ESI + 0x10]
006E7661  8B F8                     MOV EDI,EAX
006E7663  D8 4D CC                  FMUL float ptr [EBP + -0x34]
006E7666  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E766C  D8 E9                     FSUBR ST0,ST1
006E766E  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E7674  E8 0F 6C 04 00            CALL 0x0072e288
006E7679  DD D8                     FSTP ST0
006E767B  D9 46 14                  FLD float ptr [ESI + 0x14]
006E767E  D8 66 10                  FSUB float ptr [ESI + 0x10]
006E7681  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E7684  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E768A  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
006E7690  D8 4D CC                  FMUL float ptr [EBP + -0x34]
006E7693  E8 F0 6B 04 00            CALL 0x0072e288
LAB_006e7698:
006E7698  83 FF 01                  CMP EDI,0x1
006E769B  7D 05                     JGE 0x006e76a2
006E769D  BF 01 00 00 00            MOV EDI,0x1
LAB_006e76a2:
006E76A2  8B 93 DC 03 00 00         MOV EDX,dword ptr [EBX + 0x3dc]
006E76A8  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006E76AB  8D 4A FE                  LEA ECX,[EDX + -0x2]
006E76AE  3B F9                     CMP EDI,ECX
006E76B0  7C 03                     JL 0x006e76b5
006E76B2  8D 7A FD                  LEA EDI,[EDX + -0x3]
LAB_006e76b5:
006E76B5  8B 0D 84 6D 85 00         MOV ECX,dword ptr [0x00856d84]
006E76BB  3B F9                     CMP EDI,ECX
006E76BD  7F 1D                     JG 0x006e76dc
006E76BF  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006E76C2  2B CF                     SUB ECX,EDI
006E76C4  3B D1                     CMP EDX,ECX
006E76C6  7D 05                     JGE 0x006e76cd
006E76C8  8B D1                     MOV EDX,ECX
006E76CA  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_006e76cd:
006E76CD  8B 0D 84 6D 85 00         MOV ECX,dword ptr [0x00856d84]
006E76D3  03 CF                     ADD ECX,EDI
006E76D5  3B D1                     CMP EDX,ECX
006E76D7  7C 3E                     JL 0x006e7717
006E76D9  49                        DEC ECX
006E76DA  EB 38                     JMP 0x006e7714
LAB_006e76dc:
006E76DC  2B CA                     SUB ECX,EDX
006E76DE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006E76E1  03 CF                     ADD ECX,EDI
006E76E3  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006E76E6  41                        INC ECX
006E76E7  3B D1                     CMP EDX,ECX
006E76E9  7F 09                     JG 0x006e76f4
006E76EB  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006E76EE  83 C2 02                  ADD EDX,0x2
006E76F1  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_006e76f4:
006E76F4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006E76F7  8B 15 84 6D 85 00         MOV EDX,dword ptr [0x00856d84]
006E76FD  2B CF                     SUB ECX,EDI
006E76FF  03 CA                     ADD ECX,EDX
006E7701  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006E7704  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006E7707  83 C1 FE                  ADD ECX,-0x2
006E770A  3B D1                     CMP EDX,ECX
006E770C  7C 09                     JL 0x006e7717
006E770E  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006E7711  83 C1 FD                  ADD ECX,-0x3
LAB_006e7714:
006E7714  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_006e7717:
006E7717  83 F8 01                  CMP EAX,0x1
006E771A  7D 05                     JGE 0x006e7721
006E771C  B8 01 00 00 00            MOV EAX,0x1
LAB_006e7721:
006E7721  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006E7724  8D 4A FE                  LEA ECX,[EDX + -0x2]
006E7727  3B C1                     CMP EAX,ECX
006E7729  7C 03                     JL 0x006e772e
006E772B  8D 42 FD                  LEA EAX,[EDX + -0x3]
LAB_006e772e:
006E772E  8B 0D 84 6D 85 00         MOV ECX,dword ptr [0x00856d84]
006E7734  3B C1                     CMP EAX,ECX
006E7736  7F 1D                     JG 0x006e7755
006E7738  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E773B  2B C8                     SUB ECX,EAX
006E773D  3B D1                     CMP EDX,ECX
006E773F  7D 05                     JGE 0x006e7746
006E7741  8B D1                     MOV EDX,ECX
006E7743  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006e7746:
006E7746  8B 0D 84 6D 85 00         MOV ECX,dword ptr [0x00856d84]
006E774C  03 C8                     ADD ECX,EAX
006E774E  3B D1                     CMP EDX,ECX
006E7750  7C 3E                     JL 0x006e7790
006E7752  49                        DEC ECX
006E7753  EB 38                     JMP 0x006e778d
LAB_006e7755:
006E7755  2B CA                     SUB ECX,EDX
006E7757  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E775A  03 C8                     ADD ECX,EAX
006E775C  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006E775F  41                        INC ECX
006E7760  3B D1                     CMP EDX,ECX
006E7762  7F 09                     JG 0x006e776d
006E7764  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006E7767  83 C2 02                  ADD EDX,0x2
006E776A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006e776d:
006E776D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006E7770  8B 15 84 6D 85 00         MOV EDX,dword ptr [0x00856d84]
006E7776  2B C8                     SUB ECX,EAX
006E7778  03 CA                     ADD ECX,EDX
006E777A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E777D  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006E7780  83 C1 FE                  ADD ECX,-0x2
006E7783  3B D1                     CMP EDX,ECX
006E7785  7C 09                     JL 0x006e7790
006E7787  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006E778A  83 C1 FD                  ADD ECX,-0x3
LAB_006e778d:
006E778D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006e7790:
006E7790  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E7793  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006E7796  6A 0D                     PUSH 0xd
006E7798  03 C1                     ADD EAX,ECX
006E779A  52                        PUSH EDX
006E779B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E779E  50                        PUSH EAX
006E779F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E77A2  03 F9                     ADD EDI,ECX
006E77A4  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006E77A7  03 D0                     ADD EDX,EAX
006E77A9  03 C8                     ADD ECX,EAX
006E77AB  52                        PUSH EDX
006E77AC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E77AF  57                        PUSH EDI
006E77B0  51                        PUSH ECX
006E77B1  6A 00                     PUSH 0x0
006E77B3  52                        PUSH EDX
006E77B4  E8 57 E3 FC FF            CALL 0x006b5b10
switchD_006e74ad::default:
006E77B9  8B 36                     MOV ESI,dword ptr [ESI]
006E77BB  85 F6                     TEST ESI,ESI
006E77BD  0F 85 DB FC FF FF         JNZ 0x006e749e
LAB_006e77c3:
006E77C3  8B 8B 4E 04 00 00         MOV ECX,dword ptr [EBX + 0x44e]
006E77C9  85 C9                     TEST ECX,ECX
006E77CB  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006E77CE  0F 84 51 05 00 00         JZ 0x006e7d25
LAB_006e77d4:
006E77D4  DB 41 08                  FILD dword ptr [ECX + 0x8]
006E77D7  DC 93 C8 00 00 00         FCOM double ptr [EBX + 0xc8]
006E77DD  DF E0                     FNSTSW AX
006E77DF  F6 C4 01                  TEST AH,0x1
006E77E2  0F 85 2E 05 00 00         JNZ 0x006e7d16
006E77E8  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
006E77EE  83 EC 08                  SUB ESP,0x8
006E77F1  DB 83 DC 03 00 00         FILD dword ptr [EBX + 0x3dc]
006E77F7  0F BF 08                  MOVSX ECX,word ptr [EAX]
006E77FA  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E7800  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006E7803  DB 45 BC                  FILD dword ptr [EBP + -0x44]
006E7806  DE F9                     FDIVP
006E7808  D9 C9                     FXCH
006E780A  DC B3 C8 00 00 00         FDIV double ptr [EBX + 0xc8]
006E7810  DE C9                     FMULP
006E7812  DD 1C 24                  FSTP double ptr [ESP]
006E7815  E8 36 8C 04 00            CALL 0x00730450
006E781A  83 C4 08                  ADD ESP,0x8
006E781D  E8 66 6A 04 00            CALL 0x0072e288
006E7822  8B F8                     MOV EDI,EAX
006E7824  8B 83 A8 00 00 00         MOV EAX,dword ptr [EBX + 0xa8]
006E782A  83 F8 03                  CMP EAX,0x3
006E782D  0F 87 19 01 00 00         JA 0x006e794c
switchD_006e7833::switchD:
006E7833  FF 24 85 CC 83 6E 00      JMP dword ptr [EAX*0x4 + 0x6e83cc]
switchD_006e7833::caseD_0:
006E783A  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006E783D  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E7843  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E7846  D8 66 10                  FSUB float ptr [ESI + 0x10]
006E7849  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E784F  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E7855  D8 C9                     FMUL ST1
006E7857  E8 2C 6A 04 00            CALL 0x0072e288
006E785C  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E785F  D8 46 10                  FADD float ptr [ESI + 0x10]
006E7862  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006E7865  D8 C9                     FMUL ST1
006E7867  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E786D  E8 16 6A 04 00            CALL 0x0072e288
006E7872  DD D8                     FSTP ST0
006E7874  E9 D8 00 00 00            JMP 0x006e7951
switchD_006e7833::caseD_1:
006E7879  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006E787C  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E7882  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E7885  D8 46 10                  FADD float ptr [ESI + 0x10]
006E7888  D8 C9                     FMUL ST1
006E788A  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7890  E8 F3 69 04 00            CALL 0x0072e288
006E7895  D9 46 10                  FLD float ptr [ESI + 0x10]
006E7898  D8 66 0C                  FSUB float ptr [ESI + 0xc]
006E789B  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006E789E  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E78A4  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E78AA  D8 C9                     FMUL ST1
006E78AC  E8 D7 69 04 00            CALL 0x0072e288
006E78B1  DD D8                     FSTP ST0
006E78B3  E9 99 00 00 00            JMP 0x006e7951
switchD_006e7833::caseD_2:
006E78B8  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006E78BB  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E78C1  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E78C4  D8 66 10                  FSUB float ptr [ESI + 0x10]
006E78C7  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E78CD  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
006E78D3  D8 C9                     FMUL ST1
006E78D5  E8 AE 69 04 00            CALL 0x0072e288
006E78DA  DB 83 DC 03 00 00         FILD dword ptr [EBX + 0x3dc]
006E78E0  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E78E3  D8 46 10                  FADD float ptr [ESI + 0x10]
006E78E6  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006E78E9  D8 CA                     FMUL ST2
006E78EB  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E78F1  DE E9                     FSUBP
006E78F3  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E78F9  E8 8A 69 04 00            CALL 0x0072e288
006E78FE  DD D8                     FSTP ST0
006E7900  EB 4F                     JMP 0x006e7951
switchD_006e7833::caseD_3:
006E7902  DB 05 84 6D 85 00         FILD dword ptr [0x00856d84]
006E7908  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006E790B  DB 83 DC 03 00 00         FILD dword ptr [EBX + 0x3dc]
006E7911  D9 46 0C                  FLD float ptr [ESI + 0xc]
006E7914  D8 46 10                  FADD float ptr [ESI + 0x10]
006E7917  D8 CA                     FMUL ST2
006E7919  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E791F  DE E9                     FSUBP
006E7921  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E7927  E8 5C 69 04 00            CALL 0x0072e288
006E792C  D9 46 10                  FLD float ptr [ESI + 0x10]
006E792F  D8 66 0C                  FSUB float ptr [ESI + 0xc]
006E7932  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006E7935  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E793B  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
006E7941  D8 C9                     FMUL ST1
006E7943  E8 40 69 04 00            CALL 0x0072e288
006E7948  DD D8                     FSTP ST0
006E794A  EB 05                     JMP 0x006e7951
switchD_006e7833::default:
006E794C  33 C0                     XOR EAX,EAX
006E794E  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006e7951:
006E7951  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006E7954  8B C7                     MOV EAX,EDI
006E7956  0F AF C7                  IMUL EAX,EDI
006E7959  8B F7                     MOV ESI,EDI
006E795B  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006E795E  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006E7961  33 C9                     XOR ECX,ECX
006E7963  F7 DE                     NEG ESI
006E7965  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006E7968  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006E796B  8D 56 01                  LEA EDX,[ESI + 0x1]
006E796E  0F AF D0                  IMUL EDX,EAX
006E7971  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006E7974  99                        CDQ
006E7975  83 E2 03                  AND EDX,0x3
006E7978  03 C2                     ADD EAX,EDX
006E797A  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006E797D  C1 F8 02                  SAR EAX,0x2
006E7980  03 D0                     ADD EDX,EAX
006E7982  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006E7985  0F AF C7                  IMUL EAX,EDI
006E7988  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006E798B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006E798E  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006E7991  8D 14 30                  LEA EDX,[EAX + ESI*0x1]
006E7994  2B C6                     SUB EAX,ESI
006E7996  8B FA                     MOV EDI,EDX
006E7998  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006E799B  0F AF 3D 8C 6D 85 00      IMUL EDI,dword ptr [0x00856d8c]
006E79A2  8B 15 88 6D 85 00         MOV EDX,dword ptr [0x00856d88]
006E79A8  2B D7                     SUB EDX,EDI
006E79AA  8B F8                     MOV EDI,EAX
006E79AC  0F AF 3D 8C 6D 85 00      IMUL EDI,dword ptr [0x00856d8c]
006E79B3  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006E79B6  8B 15 88 6D 85 00         MOV EDX,dword ptr [0x00856d88]
006E79BC  2B D7                     SUB EDX,EDI
006E79BE  8B 3D 84 6D 85 00         MOV EDI,dword ptr [0x00856d84]
006E79C4  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006E79C7  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006E79CA  3B D7                     CMP EDX,EDI
006E79CC  7D 1B                     JGE 0x006e79e9
006E79CE  8B D7                     MOV EDX,EDI
006E79D0  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006E79D3  2B D7                     SUB EDX,EDI
006E79D5  2B D6                     SUB EDX,ESI
006E79D7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E79DA  8B 15 84 6D 85 00         MOV EDX,dword ptr [0x00856d84]
006E79E0  03 FA                     ADD EDI,EDX
006E79E2  03 FE                     ADD EDI,ESI
006E79E4  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006E79E7  EB 35                     JMP 0x006e7a1e
LAB_006e79e9:
006E79E9  8B 93 DC 03 00 00         MOV EDX,dword ptr [EBX + 0x3dc]
006E79EF  8B 3D 84 6D 85 00         MOV EDI,dword ptr [0x00856d84]
006E79F5  2B FA                     SUB EDI,EDX
006E79F7  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006E79FA  8B D7                     MOV EDX,EDI
006E79FC  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006E79FF  03 D7                     ADD EDX,EDI
006E7A01  8D 54 32 01               LEA EDX,[EDX + ESI*0x1 + 0x1]
006E7A05  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E7A08  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006E7A0B  2B D7                     SUB EDX,EDI
006E7A0D  8B 3D 84 6D 85 00         MOV EDI,dword ptr [0x00856d84]
006E7A13  2B D6                     SUB EDX,ESI
006E7A15  8D 54 3A FF               LEA EDX,[EDX + EDI*0x1 + -0x1]
006E7A19  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006E7A1C  8B D7                     MOV EDX,EDI
LAB_006e7a1e:
006E7A1E  3B C2                     CMP EAX,EDX
006E7A20  7D 16                     JGE 0x006e7a38
006E7A22  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006E7A25  2B D7                     SUB EDX,EDI
006E7A27  03 D6                     ADD EDX,ESI
006E7A29  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E7A2C  8B 15 84 6D 85 00         MOV EDX,dword ptr [0x00856d84]
006E7A32  2B D6                     SUB EDX,ESI
006E7A34  03 D7                     ADD EDX,EDI
006E7A36  EB 28                     JMP 0x006e7a60
LAB_006e7a38:
006E7A38  8B BB DC 03 00 00         MOV EDI,dword ptr [EBX + 0x3dc]
006E7A3E  2B D7                     SUB EDX,EDI
006E7A40  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006E7A43  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006E7A46  2B D6                     SUB EDX,ESI
006E7A48  8D 54 3A 01               LEA EDX,[EDX + EDI*0x1 + 0x1]
006E7A4C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E7A4F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006E7A52  2B D7                     SUB EDX,EDI
006E7A54  8B 3D 84 6D 85 00         MOV EDI,dword ptr [0x00856d84]
006E7A5A  03 D7                     ADD EDX,EDI
006E7A5C  8D 54 32 FF               LEA EDX,[EDX + ESI*0x1 + -0x1]
LAB_006e7a60:
006E7A60  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006E7A63  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006E7A66  85 D2                     TEST EDX,EDX
006E7A68  0F 8E 36 01 00 00         JLE 0x006e7ba4
006E7A6E  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006E7A71  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006E7A74  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006E7A77  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006E7A7A  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
LAB_006e7a7d:
006E7A7D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E7A80  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
006E7A83  3B C2                     CMP EAX,EDX
006E7A85  7C 13                     JL 0x006e7a9a
006E7A87  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
006E7A8A  7F 0E                     JG 0x006e7a9a
006E7A8C  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E7A8F  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006E7A92  03 C7                     ADD EAX,EDI
006E7A94  8A 52 14                  MOV DL,byte ptr [EDX + 0x14]
006E7A97  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
LAB_006e7a9a:
006E7A9A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006E7A9D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E7AA0  3B C2                     CMP EAX,EDX
006E7AA2  7C 13                     JL 0x006e7ab7
006E7AA4  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
006E7AA7  7F 0E                     JG 0x006e7ab7
006E7AA9  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E7AAC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006E7AAF  2B C1                     SUB EAX,ECX
006E7AB1  8A 52 14                  MOV DL,byte ptr [EDX + 0x14]
006E7AB4  88 14 38                  MOV byte ptr [EAX + EDI*0x1],DL
LAB_006e7ab7:
006E7AB7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006E7ABA  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
006E7ABD  3B C2                     CMP EAX,EDX
006E7ABF  7C 13                     JL 0x006e7ad4
006E7AC1  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
006E7AC4  7F 0E                     JG 0x006e7ad4
006E7AC6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006E7AC9  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006E7ACC  03 C7                     ADD EAX,EDI
006E7ACE  8A 52 14                  MOV DL,byte ptr [EDX + 0x14]
006E7AD1  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
LAB_006e7ad4:
006E7AD4  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006E7AD7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006E7ADA  3B C2                     CMP EAX,EDX
006E7ADC  7C 13                     JL 0x006e7af1
006E7ADE  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
006E7AE1  7F 0E                     JG 0x006e7af1
006E7AE3  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006E7AE6  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006E7AE9  2B C1                     SUB EAX,ECX
006E7AEB  8A 52 14                  MOV DL,byte ptr [EDX + 0x14]
006E7AEE  88 14 38                  MOV byte ptr [EAX + EDI*0x1],DL
LAB_006e7af1:
006E7AF1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006E7AF4  85 C0                     TEST EAX,EAX
006E7AF6  7E 7C                     JLE 0x006e7b74
006E7AF8  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006E7AFB  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006E7AFE  46                        INC ESI
006E7AFF  42                        INC EDX
006E7B00  48                        DEC EAX
006E7B01  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006E7B04  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006E7B07  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006E7B0A  A1 8C 6D 85 00            MOV EAX,[0x00856d8c]
006E7B0F  2B D0                     SUB EDX,EAX
006E7B11  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006E7B14  8B D0                     MOV EDX,EAX
006E7B16  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006E7B19  03 C2                     ADD EAX,EDX
006E7B1B  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E7B1E  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006E7B21  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006E7B24  2B C2                     SUB EAX,EDX
006E7B26  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006E7B29  2B D0                     SUB EDX,EAX
006E7B2B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006E7B2E  A1 84 6D 85 00            MOV EAX,[0x00856d84]
006E7B33  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006E7B36  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006E7B39  3B D0                     CMP EDX,EAX
006E7B3B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E7B3E  7F 0A                     JG 0x006e7b4a
006E7B40  4A                        DEC EDX
006E7B41  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E7B44  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E7B47  42                        INC EDX
006E7B48  EB 08                     JMP 0x006e7b52
LAB_006e7b4a:
006E7B4A  42                        INC EDX
006E7B4B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E7B4E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E7B51  4A                        DEC EDX
LAB_006e7b52:
006E7B52  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006E7B55  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006E7B58  3B D0                     CMP EDX,EAX
006E7B5A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006E7B5D  7F 0A                     JG 0x006e7b69
006E7B5F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006E7B62  42                        INC EDX
006E7B63  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E7B66  48                        DEC EAX
006E7B67  EB 08                     JMP 0x006e7b71
LAB_006e7b69:
006E7B69  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006E7B6C  4A                        DEC EDX
006E7B6D  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E7B70  40                        INC EAX
LAB_006e7b71:
006E7B71  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006e7b74:
006E7B74  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006E7B77  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E7B7A  41                        INC ECX
006E7B7B  48                        DEC EAX
006E7B7C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006E7B7F  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006E7B82  03 C2                     ADD EAX,EDX
006E7B84  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006E7B87  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006E7B8A  03 C2                     ADD EAX,EDX
006E7B8C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006E7B8F  03 D0                     ADD EDX,EAX
006E7B91  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006E7B94  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006E7B97  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006E7B9A  3B D0                     CMP EDX,EAX
006E7B9C  0F 8C DB FE FF FF         JL 0x006e7a7d
006E7BA2  EB 03                     JMP 0x006e7ba7
LAB_006e7ba4:
006E7BA4  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
LAB_006e7ba7:
006E7BA7  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006E7BAA  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006E7BAD  03 C2                     ADD EAX,EDX
006E7BAF  99                        CDQ
006E7BB0  2B C2                     SUB EAX,EDX
006E7BB2  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006E7BB5  D1 F8                     SAR EAX,0x1
006E7BB7  F7 D8                     NEG EAX
006E7BB9  03 D0                     ADD EDX,EAX
006E7BBB  85 F6                     TEST ESI,ESI
006E7BBD  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006E7BC0  0F 8F 4B 01 00 00         JG 0x006e7d11
006E7BC6  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006E7BC9  8D 14 30                  LEA EDX,[EAX + ESI*0x1]
006E7BCC  2B C6                     SUB EAX,ESI
006E7BCE  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006E7BD1  8B C7                     MOV EAX,EDI
006E7BD3  2B C1                     SUB EAX,ECX
006E7BD5  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006E7BD8  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006E7BDB  B8 01 00 00 00            MOV EAX,0x1
006E7BE0  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
006E7BE3  2B C6                     SUB EAX,ESI
006E7BE5  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006E7BE8  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006E7BEB  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006E7BEE  EB 03                     JMP 0x006e7bf3
LAB_006e7bf0:
006E7BF0  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
LAB_006e7bf3:
006E7BF3  3B 55 FC                  CMP EDX,dword ptr [EBP + -0x4]
006E7BF6  7C 10                     JL 0x006e7c08
006E7BF8  3B 55 F8                  CMP EDX,dword ptr [EBP + -0x8]
006E7BFB  7F 0B                     JG 0x006e7c08
006E7BFD  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E7C00  8A 56 14                  MOV DL,byte ptr [ESI + 0x14]
006E7C03  03 C7                     ADD EAX,EDI
006E7C05  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
LAB_006e7c08:
006E7C08  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006E7C0B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E7C0E  3B C2                     CMP EAX,EDX
006E7C10  7C 10                     JL 0x006e7c22
006E7C12  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
006E7C15  7F 0B                     JG 0x006e7c22
006E7C17  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E7C1A  8A 56 14                  MOV DL,byte ptr [ESI + 0x14]
006E7C1D  2B C1                     SUB EAX,ECX
006E7C1F  88 14 38                  MOV byte ptr [EAX + EDI*0x1],DL
LAB_006e7c22:
006E7C22  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006E7C25  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006E7C28  3B C2                     CMP EAX,EDX
006E7C2A  7C 10                     JL 0x006e7c3c
006E7C2C  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
006E7C2F  7F 0B                     JG 0x006e7c3c
006E7C31  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006E7C34  8A 56 14                  MOV DL,byte ptr [ESI + 0x14]
006E7C37  03 C7                     ADD EAX,EDI
006E7C39  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
LAB_006e7c3c:
006E7C3C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006E7C3F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006E7C42  3B C2                     CMP EAX,EDX
006E7C44  7C 10                     JL 0x006e7c56
006E7C46  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
006E7C49  7F 0B                     JG 0x006e7c56
006E7C4B  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006E7C4E  8A 56 14                  MOV DL,byte ptr [ESI + 0x14]
006E7C51  2B C1                     SUB EAX,ECX
006E7C53  88 14 38                  MOV byte ptr [EAX + EDI*0x1],DL
LAB_006e7c56:
006E7C56  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006E7C59  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006E7C5C  40                        INC EAX
006E7C5D  4A                        DEC EDX
006E7C5E  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006E7C61  8B 15 84 6D 85 00         MOV EDX,dword ptr [0x00856d84]
006E7C67  3B C2                     CMP EAX,EDX
006E7C69  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E7C6C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006E7C6F  7F 0A                     JG 0x006e7c7b
006E7C71  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E7C74  4A                        DEC EDX
006E7C75  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E7C78  40                        INC EAX
006E7C79  EB 08                     JMP 0x006e7c83
LAB_006e7c7b:
006E7C7B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E7C7E  42                        INC EDX
006E7C7F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E7C82  48                        DEC EAX
LAB_006e7c83:
006E7C83  8B 15 84 6D 85 00         MOV EDX,dword ptr [0x00856d84]
006E7C89  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006E7C8C  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006E7C8F  3B C2                     CMP EAX,EDX
006E7C91  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006E7C94  7F 0A                     JG 0x006e7ca0
006E7C96  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006E7C99  42                        INC EDX
006E7C9A  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E7C9D  48                        DEC EAX
006E7C9E  EB 08                     JMP 0x006e7ca8
LAB_006e7ca0:
006E7CA0  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006E7CA3  4A                        DEC EDX
006E7CA4  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E7CA7  40                        INC EAX
LAB_006e7ca8:
006E7CA8  8B 15 8C 6D 85 00         MOV EDX,dword ptr [0x00856d8c]
006E7CAE  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006E7CB1  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E7CB4  2B C2                     SUB EAX,EDX
006E7CB6  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006E7CB9  8B C2                     MOV EAX,EDX
006E7CBB  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006E7CBE  03 D0                     ADD EDX,EAX
006E7CC0  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006E7CC3  85 C0                     TEST EAX,EAX
006E7CC5  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006E7CC8  7D 22                     JGE 0x006e7cec
006E7CCA  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006E7CCD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006E7CD0  41                        INC ECX
006E7CD1  42                        INC EDX
006E7CD2  48                        DEC EAX
006E7CD3  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006E7CD6  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E7CD9  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006E7CDC  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006E7CDF  03 C2                     ADD EAX,EDX
006E7CE1  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006E7CE4  03 D0                     ADD EDX,EAX
006E7CE6  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006E7CE9  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_006e7cec:
006E7CEC  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006E7CEF  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E7CF2  2B C2                     SUB EAX,EDX
006E7CF4  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006E7CF7  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006E7CFA  2B D0                     SUB EDX,EAX
006E7CFC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006E7CFF  03 C2                     ADD EAX,EDX
006E7D01  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006E7D04  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006E7D07  48                        DEC EAX
006E7D08  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006E7D0B  0F 85 DF FE FF FF         JNZ 0x006e7bf0
LAB_006e7d11:
006E7D11  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006E7D14  EB 02                     JMP 0x006e7d18
LAB_006e7d16:
006E7D16  DD D8                     FSTP ST0
LAB_006e7d18:
006E7D18  8B 09                     MOV ECX,dword ptr [ECX]
006E7D1A  85 C9                     TEST ECX,ECX
006E7D1C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006E7D1F  0F 85 AF FA FF FF         JNZ 0x006e77d4
LAB_006e7d25:
006E7D25  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006E7D28  8B B3 1C 03 00 00         MOV ESI,dword ptr [EBX + 0x31c]
006E7D2E  8B BB 20 04 00 00         MOV EDI,dword ptr [EBX + 0x420]
006E7D34  85 C0                     TEST EAX,EAX
006E7D36  0F 8E 24 03 00 00         JLE 0x006e8060
006E7D3C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_006e7d3f:
006E7D3F  F6 47 03 01               TEST byte ptr [EDI + 0x3],0x1
006E7D43  0F 84 01 03 00 00         JZ 0x006e804a
006E7D49  8A 83 18 04 00 00         MOV AL,byte ptr [EBX + 0x418]
006E7D4F  8A 0F                     MOV CL,byte ptr [EDI]
006E7D51  84 C1                     TEST CL,AL
006E7D53  0F 84 F1 02 00 00         JZ 0x006e804a
006E7D59  F7 06 00 00 80 00         TEST dword ptr [ESI],0x800000
006E7D5F  75 0E                     JNZ 0x006e7d6f
006E7D61  8B 83 E0 03 00 00         MOV EAX,dword ptr [EBX + 0x3e0]
006E7D67  85 C0                     TEST EAX,EAX
006E7D69  0F 84 96 02 00 00         JZ 0x006e8005
LAB_006e7d6f:
006E7D6F  D9 46 74                  FLD float ptr [ESI + 0x74]
006E7D72  DC B3 C8 00 00 00         FDIV double ptr [EBX + 0xc8]
006E7D78  83 EC 08                  SUB ESP,0x8
006E7D7B  DD 1C 24                  FSTP double ptr [ESP]
006E7D7E  E8 CD 63 04 00            CALL 0x0072e150
006E7D83  83 C4 08                  ADD ESP,0x8
006E7D86  E8 FD 64 04 00            CALL 0x0072e288
006E7D8B  88 86 10 01 00 00         MOV byte ptr [ESI + 0x110],AL
006E7D91  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
006E7D97  66 33 D2                  XOR DX,DX
006E7D9A  8A D0                     MOV DL,AL
006E7D9C  66 3B 11                  CMP DX,word ptr [ECX]
006E7D9F  7C 0A                     JL 0x006e7dab
006E7DA1  8A 01                     MOV AL,byte ptr [ECX]
006E7DA3  FE C8                     DEC AL
006E7DA5  88 86 10 01 00 00         MOV byte ptr [ESI + 0x110],AL
LAB_006e7dab:
006E7DAB  D9 46 78                  FLD float ptr [ESI + 0x78]
006E7DAE  DC B3 C8 00 00 00         FDIV double ptr [EBX + 0xc8]
006E7DB4  83 EC 08                  SUB ESP,0x8
006E7DB7  DD 1C 24                  FSTP double ptr [ESP]
006E7DBA  E8 91 63 04 00            CALL 0x0072e150
006E7DBF  83 C4 08                  ADD ESP,0x8
006E7DC2  E8 C1 64 04 00            CALL 0x0072e288
006E7DC7  88 86 11 01 00 00         MOV byte ptr [ESI + 0x111],AL
006E7DCD  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
006E7DD3  66 33 D2                  XOR DX,DX
006E7DD6  8A D0                     MOV DL,AL
006E7DD8  66 3B 51 02               CMP DX,word ptr [ECX + 0x2]
006E7DDC  7C 0B                     JL 0x006e7de9
006E7DDE  8A 41 02                  MOV AL,byte ptr [ECX + 0x2]
006E7DE1  FE C8                     DEC AL
006E7DE3  88 86 11 01 00 00         MOV byte ptr [ESI + 0x111],AL
LAB_006e7de9:
006E7DE9  D9 46 7C                  FLD float ptr [ESI + 0x7c]
006E7DEC  DC B3 D0 00 00 00         FDIV double ptr [EBX + 0xd0]
006E7DF2  83 EC 08                  SUB ESP,0x8
006E7DF5  DD 1C 24                  FSTP double ptr [ESP]
006E7DF8  E8 53 63 04 00            CALL 0x0072e150
006E7DFD  83 C4 08                  ADD ESP,0x8
006E7E00  E8 83 64 04 00            CALL 0x0072e288
006E7E05  3C 05                     CMP AL,0x5
006E7E07  88 86 12 01 00 00         MOV byte ptr [ESI + 0x112],AL
006E7E0D  72 07                     JC 0x006e7e16
006E7E0F  C6 86 12 01 00 00 04      MOV byte ptr [ESI + 0x112],0x4
LAB_006e7e16:
006E7E16  8B 83 A8 00 00 00         MOV EAX,dword ptr [EBX + 0xa8]
006E7E1C  83 F8 03                  CMP EAX,0x3
006E7E1F  0F 87 08 01 00 00         JA 0x006e7f2d
switchD_006e7e25::switchD:
006E7E25  FF 24 85 DC 83 6E 00      JMP dword ptr [EAX*0x4 + 0x6e83dc]
switchD_006e7e25::caseD_0:
006E7E2C  D9 46 74                  FLD float ptr [ESI + 0x74]
006E7E2F  D8 66 78                  FSUB float ptr [ESI + 0x78]
006E7E32  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7E38  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E7E3E  DA 0D 84 6D 85 00         FIMUL dword ptr [0x00856d84]
006E7E44  E8 3F 64 04 00            CALL 0x0072e288
006E7E49  D9 46 74                  FLD float ptr [ESI + 0x74]
006E7E4C  D8 46 78                  FADD float ptr [ESI + 0x78]
006E7E4F  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
006E7E55  DA 0D 84 6D 85 00         FIMUL dword ptr [0x00856d84]
006E7E5B  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7E61  E9 BC 00 00 00            JMP 0x006e7f22
switchD_006e7e25::caseD_1:
006E7E66  D9 46 74                  FLD float ptr [ESI + 0x74]
006E7E69  D8 46 78                  FADD float ptr [ESI + 0x78]
006E7E6C  DA 0D 84 6D 85 00         FIMUL dword ptr [0x00856d84]
006E7E72  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7E78  E8 0B 64 04 00            CALL 0x0072e288
006E7E7D  D9 46 78                  FLD float ptr [ESI + 0x78]
006E7E80  D8 66 74                  FSUB float ptr [ESI + 0x74]
006E7E83  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
006E7E89  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7E8F  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
006E7E95  E9 82 00 00 00            JMP 0x006e7f1c
switchD_006e7e25::caseD_2:
006E7E9A  D9 46 74                  FLD float ptr [ESI + 0x74]
006E7E9D  D8 66 78                  FSUB float ptr [ESI + 0x78]
006E7EA0  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7EA6  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
006E7EAC  DA 0D 84 6D 85 00         FIMUL dword ptr [0x00856d84]
006E7EB2  E8 D1 63 04 00            CALL 0x0072e288
006E7EB7  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
006E7EBD  DB 83 DC 03 00 00         FILD dword ptr [EBX + 0x3dc]
006E7EC3  D9 46 74                  FLD float ptr [ESI + 0x74]
006E7EC6  D8 46 78                  FADD float ptr [ESI + 0x78]
006E7EC9  DA 0D 84 6D 85 00         FIMUL dword ptr [0x00856d84]
006E7ECF  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7ED5  DE E9                     FSUBP
006E7ED7  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E7EDD  EB 43                     JMP 0x006e7f22
switchD_006e7e25::caseD_3:
006E7EDF  DB 83 DC 03 00 00         FILD dword ptr [EBX + 0x3dc]
006E7EE5  D9 46 74                  FLD float ptr [ESI + 0x74]
006E7EE8  D8 46 78                  FADD float ptr [ESI + 0x78]
006E7EEB  DA 0D 84 6D 85 00         FIMUL dword ptr [0x00856d84]
006E7EF1  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7EF7  DE E9                     FSUBP
006E7EF9  D8 25 D0 DF 79 00         FSUB float ptr [0x0079dfd0]
006E7EFF  E8 84 63 04 00            CALL 0x0072e288
006E7F04  D9 46 78                  FLD float ptr [ESI + 0x78]
006E7F07  D8 66 74                  FSUB float ptr [ESI + 0x74]
006E7F0A  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
006E7F10  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E7F16  D8 2D D0 DF 79 00         FSUBR float ptr [0x0079dfd0]
LAB_006e7f1c:
006E7F1C  DA 0D 84 6D 85 00         FIMUL dword ptr [0x00856d84]
LAB_006e7f22:
006E7F22  E8 61 63 04 00            CALL 0x0072e288
006E7F27  89 86 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EAX
switchD_006e7e25::default:
006E7F2D  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
006E7F33  B8 01 00 00 00            MOV EAX,0x1
006E7F38  3B C8                     CMP ECX,EAX
006E7F3A  7D 06                     JGE 0x006e7f42
006E7F3C  89 86 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EAX
LAB_006e7f42:
006E7F42  8B 83 DC 03 00 00         MOV EAX,dword ptr [EBX + 0x3dc]
006E7F48  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
006E7F4E  8D 48 FE                  LEA ECX,[EAX + -0x2]
006E7F51  3B D1                     CMP EDX,ECX
006E7F53  7C 09                     JL 0x006e7f5e
006E7F55  83 C0 FD                  ADD EAX,-0x3
006E7F58  89 86 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EAX
LAB_006e7f5e:
006E7F5E  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
006E7F64  A1 84 6D 85 00            MOV EAX,[0x00856d84]
006E7F69  3B C8                     CMP ECX,EAX
006E7F6B  7F 3D                     JG 0x006e7faa
006E7F6D  8B D0                     MOV EDX,EAX
006E7F6F  2B D1                     SUB EDX,ECX
006E7F71  8B 8E 08 01 00 00         MOV ECX,dword ptr [ESI + 0x108]
006E7F77  3B CA                     CMP ECX,EDX
006E7F79  7D 11                     JGE 0x006e7f8c
006E7F7B  2B 86 0C 01 00 00         SUB EAX,dword ptr [ESI + 0x10c]
006E7F81  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
006E7F87  A1 84 6D 85 00            MOV EAX,[0x00856d84]
LAB_006e7f8c:
006E7F8C  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
006E7F92  8B 96 08 01 00 00         MOV EDX,dword ptr [ESI + 0x108]
006E7F98  03 C8                     ADD ECX,EAX
006E7F9A  3B D1                     CMP EDX,ECX
006E7F9C  7C 61                     JL 0x006e7fff
006E7F9E  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
006E7FA4  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
006E7FA8  EB 4F                     JMP 0x006e7ff9
LAB_006e7faa:
006E7FAA  8B 93 DC 03 00 00         MOV EDX,dword ptr [EBX + 0x3dc]
006E7FB0  2B CA                     SUB ECX,EDX
006E7FB2  8D 4C 01 01               LEA ECX,[ECX + EAX*0x1 + 0x1]
006E7FB6  39 8E 08 01 00 00         CMP dword ptr [ESI + 0x108],ECX
006E7FBC  7F 17                     JG 0x006e7fd5
006E7FBE  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
006E7FC4  2B CA                     SUB ECX,EDX
006E7FC6  8D 54 01 02               LEA EDX,[ECX + EAX*0x1 + 0x2]
006E7FCA  89 96 08 01 00 00         MOV dword ptr [ESI + 0x108],EDX
006E7FD0  A1 84 6D 85 00            MOV EAX,[0x00856d84]
LAB_006e7fd5:
006E7FD5  8B 8B DC 03 00 00         MOV ECX,dword ptr [EBX + 0x3dc]
006E7FDB  8B D1                     MOV EDX,ECX
006E7FDD  2B 96 0C 01 00 00         SUB EDX,dword ptr [ESI + 0x10c]
006E7FE3  8D 54 02 FE               LEA EDX,[EDX + EAX*0x1 + -0x2]
006E7FE7  39 96 08 01 00 00         CMP dword ptr [ESI + 0x108],EDX
006E7FED  7C 10                     JL 0x006e7fff
006E7FEF  2B 8E 0C 01 00 00         SUB ECX,dword ptr [ESI + 0x10c]
006E7FF5  8D 44 01 FD               LEA EAX,[ECX + EAX*0x1 + -0x3]
LAB_006e7ff9:
006E7FF9  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
LAB_006e7fff:
006E7FFF  81 26 FF FF 7F FF         AND dword ptr [ESI],0xff7fffff
LAB_006e8005:
006E8005  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
006E800B  8B 86 08 01 00 00         MOV EAX,dword ptr [ESI + 0x108]
006E8011  0F AF 0D 8C 6D 85 00      IMUL ECX,dword ptr [0x00856d8c]
006E8018  8B 15 88 6D 85 00         MOV EDX,dword ptr [0x00856d88]
006E801E  2B C1                     SUB EAX,ECX
006E8020  03 C2                     ADD EAX,EDX
006E8022  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
006E8025  88 10                     MOV byte ptr [EAX],DL
006E8027  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
006E802A  88 48 01                  MOV byte ptr [EAX + 0x1],CL
006E802D  8B 0D 8C 6D 85 00         MOV ECX,dword ptr [0x00856d8c]
006E8033  8B D0                     MOV EDX,EAX
006E8035  2B D1                     SUB EDX,ECX
006E8037  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
006E803A  88 0A                     MOV byte ptr [EDX],CL
006E803C  8B 0D 8C 6D 85 00         MOV ECX,dword ptr [0x00856d8c]
006E8042  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
006E8045  2B C1                     SUB EAX,ECX
006E8047  88 50 01                  MOV byte ptr [EAX + 0x1],DL
LAB_006e804a:
006E804A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006E804D  83 C7 04                  ADD EDI,0x4
006E8050  81 C6 14 01 00 00         ADD ESI,0x114
006E8056  48                        DEC EAX
006E8057  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006E805A  0F 85 DF FC FF FF         JNZ 0x006e7d3f
LAB_006e8060:
006E8060  8B 83 E8 03 00 00         MOV EAX,dword ptr [EBX + 0x3e8]
006E8066  85 C0                     TEST EAX,EAX
006E8068  7E 3C                     JLE 0x006e80a6
006E806A  8B 8B F0 03 00 00         MOV ECX,dword ptr [EBX + 0x3f0]
006E8070  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E8073  8B 93 EC 03 00 00         MOV EDX,dword ptr [EBX + 0x3ec]
006E8079  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006E807C  03 CF                     ADD ECX,EDI
006E807E  03 D7                     ADD EDX,EDI
006E8080  3B D1                     CMP EDX,ECX
006E8082  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006E8085  7D 25                     JGE 0x006e80ac
006E8087  8B 93 E4 03 00 00         MOV EDX,dword ptr [EBX + 0x3e4]
006E808D  03 C6                     ADD EAX,ESI
006E808F  6A 0D                     PUSH 0xd
006E8091  52                        PUSH EDX
006E8092  50                        PUSH EAX
006E8093  51                        PUSH ECX
006E8094  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E8097  50                        PUSH EAX
006E8098  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E809B  50                        PUSH EAX
006E809C  6A 00                     PUSH 0x0
006E809E  51                        PUSH ECX
006E809F  E8 6C DA FC FF            CALL 0x006b5b10
006E80A4  EB 06                     JMP 0x006e80ac
LAB_006e80a6:
006E80A6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006E80A9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_006e80ac:
006E80AC  8B 93 DC 03 00 00         MOV EDX,dword ptr [EBX + 0x3dc]
006E80B2  8B 83 F4 03 00 00         MOV EAX,dword ptr [EBX + 0x3f4]
006E80B8  4A                        DEC EDX
006E80B9  3B C2                     CMP EAX,EDX
006E80BB  7D 34                     JGE 0x006e80f1
006E80BD  8B 8B F8 03 00 00         MOV ECX,dword ptr [EBX + 0x3f8]
006E80C3  8B 93 FC 03 00 00         MOV EDX,dword ptr [EBX + 0x3fc]
006E80C9  3B CA                     CMP ECX,EDX
006E80CB  7D 24                     JGE 0x006e80f1
006E80CD  8B 93 E4 03 00 00         MOV EDX,dword ptr [EBX + 0x3e4]
006E80D3  6A 0D                     PUSH 0xd
006E80D5  52                        PUSH EDX
006E80D6  8B 93 FC 03 00 00         MOV EDX,dword ptr [EBX + 0x3fc]
006E80DC  03 C6                     ADD EAX,ESI
006E80DE  03 D7                     ADD EDX,EDI
006E80E0  50                        PUSH EAX
006E80E1  52                        PUSH EDX
006E80E2  03 CF                     ADD ECX,EDI
006E80E4  50                        PUSH EAX
006E80E5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E80E8  51                        PUSH ECX
006E80E9  6A 00                     PUSH 0x0
006E80EB  50                        PUSH EAX
006E80EC  E8 1F DA FC FF            CALL 0x006b5b10
LAB_006e80f1:
006E80F1  8B 83 00 04 00 00         MOV EAX,dword ptr [EBX + 0x400]
006E80F7  85 C0                     TEST EAX,EAX
006E80F9  7E 34                     JLE 0x006e812f
006E80FB  8B 8B 04 04 00 00         MOV ECX,dword ptr [EBX + 0x404]
006E8101  8B 93 08 04 00 00         MOV EDX,dword ptr [EBX + 0x408]
006E8107  3B CA                     CMP ECX,EDX
006E8109  7D 24                     JGE 0x006e812f
006E810B  8B 93 E4 03 00 00         MOV EDX,dword ptr [EBX + 0x3e4]
006E8111  6A 0D                     PUSH 0xd
006E8113  52                        PUSH EDX
006E8114  8B 93 08 04 00 00         MOV EDX,dword ptr [EBX + 0x408]
006E811A  03 D6                     ADD EDX,ESI
006E811C  03 C7                     ADD EAX,EDI
006E811E  52                        PUSH EDX
006E811F  03 CE                     ADD ECX,ESI
006E8121  50                        PUSH EAX
006E8122  51                        PUSH ECX
006E8123  50                        PUSH EAX
006E8124  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E8127  6A 00                     PUSH 0x0
006E8129  50                        PUSH EAX
006E812A  E8 E1 D9 FC FF            CALL 0x006b5b10
LAB_006e812f:
006E812F  8B 8B DC 03 00 00         MOV ECX,dword ptr [EBX + 0x3dc]
006E8135  8B 93 0C 04 00 00         MOV EDX,dword ptr [EBX + 0x40c]
006E813B  49                        DEC ECX
006E813C  3B D1                     CMP EDX,ECX
006E813E  7D 2E                     JGE 0x006e816e
006E8140  8B 83 10 04 00 00         MOV EAX,dword ptr [EBX + 0x410]
006E8146  8B 8B 14 04 00 00         MOV ECX,dword ptr [EBX + 0x414]
006E814C  3B C1                     CMP EAX,ECX
006E814E  7D 1E                     JGE 0x006e816e
006E8150  03 FA                     ADD EDI,EDX
006E8152  8B 93 E4 03 00 00         MOV EDX,dword ptr [EBX + 0x3e4]
006E8158  6A 0D                     PUSH 0xd
006E815A  03 CE                     ADD ECX,ESI
006E815C  52                        PUSH EDX
006E815D  51                        PUSH ECX
006E815E  03 C6                     ADD EAX,ESI
006E8160  57                        PUSH EDI
006E8161  50                        PUSH EAX
006E8162  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E8165  57                        PUSH EDI
006E8166  6A 00                     PUSH 0x0
006E8168  50                        PUSH EAX
006E8169  E8 A2 D9 FC FF            CALL 0x006b5b10
LAB_006e816e:
006E816E  8B B3 A8 00 00 00         MOV ESI,dword ptr [EBX + 0xa8]
006E8174  F7 DE                     NEG ESI
006E8176  83 E6 03                  AND ESI,0x3
006E8179  8B 8C B3 56 04 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x456]
006E8180  85 C9                     TEST ECX,ECX
006E8182  74 46                     JZ 0x006e81ca
006E8184  0F BF 41 12               MOVSX EAX,word ptr [ECX + 0x12]
006E8188  99                        CDQ
006E8189  2B C2                     SUB EAX,EDX
006E818B  0F BF 51 14               MOVSX EDX,word ptr [ECX + 0x14]
006E818F  8B F8                     MOV EDI,EAX
006E8191  52                        PUSH EDX
006E8192  0F BF 41 12               MOVSX EAX,word ptr [ECX + 0x12]
006E8196  50                        PUSH EAX
006E8197  8A 41 0D                  MOV AL,byte ptr [ECX + 0xd]
006E819A  D1 E8                     SHR EAX,0x1
006E819C  83 E0 0E                  AND EAX,0xe
006E819F  D1 FF                     SAR EDI,0x1
006E81A1  8D 4C 08 16               LEA ECX,[EAX + ECX*0x1 + 0x16]
006E81A5  A1 8C 6D 85 00            MOV EAX,[0x00856d8c]
006E81AA  8B D0                     MOV EDX,EAX
006E81AC  51                        PUSH ECX
006E81AD  F7 DA                     NEG EDX
006E81AF  40                        INC EAX
006E81B0  8B 0D 84 6D 85 00         MOV ECX,dword ptr [0x00856d84]
006E81B6  0F AF C7                  IMUL EAX,EDI
006E81B9  52                        PUSH EDX
006E81BA  8B 15 88 6D 85 00         MOV EDX,dword ptr [0x00856d88]
006E81C0  2B C8                     SUB ECX,EAX
006E81C2  03 CA                     ADD ECX,EDX
006E81C4  51                        PUSH ECX
006E81C5  E8 16 A4 FE FF            CALL 0x006d25e0
LAB_006e81ca:
006E81CA  8D 7E 01                  LEA EDI,[ESI + 0x1]
006E81CD  83 E7 03                  AND EDI,0x3
006E81D0  8B 8C BB 56 04 00 00      MOV ECX,dword ptr [EBX + EDI*0x4 + 0x456]
006E81D7  85 C9                     TEST ECX,ECX
006E81D9  74 47                     JZ 0x006e8222
006E81DB  0F BF 41 14               MOVSX EAX,word ptr [ECX + 0x14]
006E81DF  99                        CDQ
006E81E0  2B C2                     SUB EAX,EDX
006E81E2  8B F0                     MOV ESI,EAX
006E81E4  0F BF 41 14               MOVSX EAX,word ptr [ECX + 0x14]
006E81E8  0F BF 51 12               MOVSX EDX,word ptr [ECX + 0x12]
006E81EC  50                        PUSH EAX
006E81ED  8A 41 0D                  MOV AL,byte ptr [ECX + 0xd]
006E81F0  D1 E8                     SHR EAX,0x1
006E81F2  83 E0 0E                  AND EAX,0xe
006E81F5  52                        PUSH EDX
006E81F6  D1 FE                     SAR ESI,0x1
006E81F8  8D 4C 08 16               LEA ECX,[EAX + ECX*0x1 + 0x16]
006E81FC  A1 8C 6D 85 00            MOV EAX,[0x00856d8c]
006E8201  51                        PUSH ECX
006E8202  8B 0D 84 6D 85 00         MOV ECX,dword ptr [0x00856d84]
006E8208  2B CE                     SUB ECX,ESI
006E820A  8B D0                     MOV EDX,EAX
006E820C  0F AF C8                  IMUL ECX,EAX
006E820F  F7 DA                     NEG EDX
006E8211  52                        PUSH EDX
006E8212  8B 15 88 6D 85 00         MOV EDX,dword ptr [0x00856d88]
006E8218  2B D1                     SUB EDX,ECX
006E821A  03 D6                     ADD EDX,ESI
006E821C  52                        PUSH EDX
006E821D  E8 BE A3 FE FF            CALL 0x006d25e0
LAB_006e8222:
006E8222  47                        INC EDI
006E8223  83 E7 03                  AND EDI,0x3
006E8226  8B 84 BB 56 04 00 00      MOV EAX,dword ptr [EBX + EDI*0x4 + 0x456]
006E822D  85 C0                     TEST EAX,EAX
006E822F  74 5B                     JZ 0x006e828c
006E8231  8A 50 0D                  MOV DL,byte ptr [EAX + 0xd]
006E8234  0F BF 48 14               MOVSX ECX,word ptr [EAX + 0x14]
006E8238  0F BF 70 12               MOVSX ESI,word ptr [EAX + 0x12]
006E823C  D1 EA                     SHR EDX,0x1
006E823E  83 E2 0E                  AND EDX,0xe
006E8241  51                        PUSH ECX
006E8242  56                        PUSH ESI
006E8243  8D 44 02 16               LEA EAX,[EDX + EAX*0x1 + 0x16]
006E8247  8B 15 8C 6D 85 00         MOV EDX,dword ptr [0x00856d8c]
006E824D  50                        PUSH EAX
006E824E  8B C6                     MOV EAX,ESI
006E8250  F7 DA                     NEG EDX
006E8252  52                        PUSH EDX
006E8253  99                        CDQ
006E8254  2B C2                     SUB EAX,EDX
006E8256  8B 93 DC 03 00 00         MOV EDX,dword ptr [EBX + 0x3dc]
006E825C  D1 F8                     SAR EAX,0x1
006E825E  2B D0                     SUB EDX,EAX
006E8260  8B C6                     MOV EAX,ESI
006E8262  2B D1                     SUB EDX,ECX
006E8264  8B 35 84 6D 85 00         MOV ESI,dword ptr [0x00856d84]
006E826A  0F AF 15 8C 6D 85 00      IMUL EDX,dword ptr [0x00856d8c]
006E8271  8B CA                     MOV ECX,EDX
006E8273  99                        CDQ
006E8274  2B C2                     SUB EAX,EDX
006E8276  8B 15 88 6D 85 00         MOV EDX,dword ptr [0x00856d88]
006E827C  D1 F8                     SAR EAX,0x1
006E827E  F7 D8                     NEG EAX
006E8280  2B C1                     SUB EAX,ECX
006E8282  03 C6                     ADD EAX,ESI
006E8284  03 C2                     ADD EAX,EDX
006E8286  50                        PUSH EAX
006E8287  E8 54 A3 FE FF            CALL 0x006d25e0
LAB_006e828c:
006E828C  47                        INC EDI
006E828D  83 E7 03                  AND EDI,0x3
006E8290  8B 84 BB 56 04 00 00      MOV EAX,dword ptr [EBX + EDI*0x4 + 0x456]
006E8297  85 C0                     TEST EAX,EAX
006E8299  74 59                     JZ 0x006e82f4
006E829B  8A 50 0D                  MOV DL,byte ptr [EAX + 0xd]
006E829E  8B 0D 8C 6D 85 00         MOV ECX,dword ptr [0x00856d8c]
006E82A4  0F BF 70 14               MOVSX ESI,word ptr [EAX + 0x14]
006E82A8  0F BF 78 12               MOVSX EDI,word ptr [EAX + 0x12]
006E82AC  D1 EA                     SHR EDX,0x1
006E82AE  83 E2 0E                  AND EDX,0xe
006E82B1  56                        PUSH ESI
006E82B2  57                        PUSH EDI
006E82B3  8D 44 02 16               LEA EAX,[EDX + EAX*0x1 + 0x16]
006E82B7  50                        PUSH EAX
006E82B8  8B C6                     MOV EAX,ESI
006E82BA  99                        CDQ
006E82BB  F7 D9                     NEG ECX
006E82BD  2B C2                     SUB EAX,EDX
006E82BF  51                        PUSH ECX
006E82C0  8B 0D 84 6D 85 00         MOV ECX,dword ptr [0x00856d84]
006E82C6  D1 F8                     SAR EAX,0x1
006E82C8  2B C8                     SUB ECX,EAX
006E82CA  8B C6                     MOV EAX,ESI
006E82CC  0F AF 0D 8C 6D 85 00      IMUL ECX,dword ptr [0x00856d8c]
006E82D3  99                        CDQ
006E82D4  2B C2                     SUB EAX,EDX
006E82D6  8B 35 88 6D 85 00         MOV ESI,dword ptr [0x00856d88]
006E82DC  D1 F8                     SAR EAX,0x1
006E82DE  8B 93 DC 03 00 00         MOV EDX,dword ptr [EBX + 0x3dc]
006E82E4  F7 D8                     NEG EAX
006E82E6  2B C1                     SUB EAX,ECX
006E82E8  2B C7                     SUB EAX,EDI
006E82EA  03 C6                     ADD EAX,ESI
006E82EC  03 C2                     ADD EAX,EDX
006E82EE  50                        PUSH EAX
006E82EF  E8 EC A2 FE FF            CALL 0x006d25e0
LAB_006e82f4:
006E82F4  8B B3 42 04 00 00         MOV ESI,dword ptr [EBX + 0x442]
006E82FA  85 F6                     TEST ESI,ESI
006E82FC  74 53                     JZ 0x006e8351
LAB_006e82fe:
006E82FE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E8301  85 C0                     TEST EAX,EAX
006E8303  74 08                     JZ 0x006e830d
006E8305  56                        PUSH ESI
006E8306  8B CB                     MOV ECX,EBX
006E8308  E8 E3 E7 FF FF            CALL 0x006e6af0
LAB_006e830d:
006E830D  66 FF 4E 14               DEC word ptr [ESI + 0x14]
006E8311  66 83 7E 14 00            CMP word ptr [ESI + 0x14],0x0
006E8316  7F 10                     JG 0x006e8328
006E8318  8A 46 16                  MOV AL,byte ptr [ESI + 0x16]
006E831B  66 8B 56 12               MOV DX,word ptr [ESI + 0x12]
006E831F  FE C0                     INC AL
006E8321  66 89 56 14               MOV word ptr [ESI + 0x14],DX
006E8325  88 46 16                  MOV byte ptr [ESI + 0x16],AL
LAB_006e8328:
006E8328  8A 46 16                  MOV AL,byte ptr [ESI + 0x16]
006E832B  8A 4E 17                  MOV CL,byte ptr [ESI + 0x17]
006E832E  3A C1                     CMP AL,CL
006E8330  72 19                     JC 0x006e834b
006E8332  8B FE                     MOV EDI,ESI
006E8334  8B 36                     MOV ESI,dword ptr [ESI]
006E8336  8D 83 42 04 00 00         LEA EAX,[EBX + 0x442]
006E833C  57                        PUSH EDI
006E833D  50                        PUSH EAX
006E833E  E8 7D 15 FD FF            CALL 0x006b98c0
006E8343  57                        PUSH EDI
006E8344  E8 47 DB FB FF            CALL 0x006a5e90
006E8349  EB 02                     JMP 0x006e834d
LAB_006e834b:
006E834B  8B 36                     MOV ESI,dword ptr [ESI]
LAB_006e834d:
006E834D  85 F6                     TEST ESI,ESI
006E834F  75 AD                     JNZ 0x006e82fe
LAB_006e8351:
006E8351  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E8354  85 C0                     TEST EAX,EAX
006E8356  74 3E                     JZ 0x006e8396
006E8358  8B B3 4A 04 00 00         MOV ESI,dword ptr [EBX + 0x44a]
006E835E  85 F6                     TEST ESI,ESI
006E8360  74 15                     JZ 0x006e8377
LAB_006e8362:
006E8362  8A 46 0C                  MOV AL,byte ptr [ESI + 0xc]
006E8365  84 C0                     TEST AL,AL
006E8367  75 08                     JNZ 0x006e8371
006E8369  56                        PUSH ESI
006E836A  8B CB                     MOV ECX,EBX
006E836C  E8 7F E7 FF FF            CALL 0x006e6af0
LAB_006e8371:
006E8371  8B 36                     MOV ESI,dword ptr [ESI]
006E8373  85 F6                     TEST ESI,ESI
006E8375  75 EB                     JNZ 0x006e8362
LAB_006e8377:
006E8377  8B B3 46 04 00 00         MOV ESI,dword ptr [EBX + 0x446]
006E837D  85 F6                     TEST ESI,ESI
006E837F  74 15                     JZ 0x006e8396
LAB_006e8381:
006E8381  8A 46 0C                  MOV AL,byte ptr [ESI + 0xc]
006E8384  84 C0                     TEST AL,AL
006E8386  75 08                     JNZ 0x006e8390
006E8388  56                        PUSH ESI
006E8389  8B CB                     MOV ECX,EBX
006E838B  E8 60 E7 FF FF            CALL 0x006e6af0
LAB_006e8390:
006E8390  8B 36                     MOV ESI,dword ptr [ESI]
006E8392  85 F6                     TEST ESI,ESI
006E8394  75 EB                     JNZ 0x006e8381
LAB_006e8396:
006E8396  5F                        POP EDI
006E8397  C7 83 E0 03 00 00 00 00 00 00  MOV dword ptr [EBX + 0x3e0],0x0
006E83A1  5E                        POP ESI
LAB_006e83a2:
006E83A2  5B                        POP EBX
006E83A3  8B E5                     MOV ESP,EBP
006E83A5  5D                        POP EBP
006E83A6  C2 10 00                  RET 0x10
