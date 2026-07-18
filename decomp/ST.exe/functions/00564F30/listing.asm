FUN_00564f30:
00564F30  55                        PUSH EBP
00564F31  8B EC                     MOV EBP,ESP
00564F33  83 EC 44                  SUB ESP,0x44
00564F36  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00564F39  8B 0D 0C 33 80 00         MOV ECX,dword ptr [0x0080330c]
00564F3F  3B C1                     CMP EAX,ECX
00564F41  53                        PUSH EBX
00564F42  75 21                     JNZ 0x00564f65
00564F44  8B 0D F4 32 80 00         MOV ECX,dword ptr [0x008032f4]
00564F4A  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00564F4D  8B 15 FC 32 80 00         MOV EDX,dword ptr [0x008032fc]
00564F53  A1 14 33 80 00            MOV EAX,[0x00803314]
00564F58  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00564F5B  8B 0C 9A                  MOV ECX,dword ptr [EDX + EBX*0x4]
00564F5E  A3 98 33 80 00            MOV [0x00803398],EAX
00564F63  EB 23                     JMP 0x00564f88
LAB_00564f65:
00564F65  8B 0D F8 32 80 00         MOV ECX,dword ptr [0x008032f8]
00564F6B  8B 15 B8 33 80 00         MOV EDX,dword ptr [0x008033b8]
00564F71  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00564F74  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00564F77  8B D8                     MOV EBX,EAX
00564F79  8B 0C 82                  MOV ECX,dword ptr [EDX + EAX*0x4]
00564F7C  8B 15 7C 33 80 00         MOV EDX,dword ptr [0x0080337c]
00564F82  89 15 98 33 80 00         MOV dword ptr [0x00803398],EDX
LAB_00564f88:
00564F88  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
00564F8B  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00564F8E  C1 E0 03                  SHL EAX,0x3
00564F91  99                        CDQ
00564F92  83 E2 0F                  AND EDX,0xf
00564F95  03 C2                     ADD EAX,EDX
00564F97  C1 F8 04                  SAR EAX,0x4
00564F9A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00564F9D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00564FA0  2B C3                     SUB EAX,EBX
00564FA2  99                        CDQ
00564FA3  33 C2                     XOR EAX,EDX
00564FA5  2B C2                     SUB EAX,EDX
00564FA7  83 F8 08                  CMP EAX,0x8
00564FAA  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00564FAD  7E 0A                     JLE 0x00564fb9
00564FAF  BA 10 00 00 00            MOV EDX,0x10
00564FB4  2B D0                     SUB EDX,EAX
00564FB6  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
LAB_00564fb9:
00564FB9  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00564FBC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00564FBF  03 C2                     ADD EAX,EDX
00564FC1  56                        PUSH ESI
00564FC2  8B D0                     MOV EDX,EAX
00564FC4  57                        PUSH EDI
00564FC5  0F AF 15 A4 33 80 00      IMUL EDX,dword ptr [0x008033a4]
00564FCC  8B 3D 80 33 80 00         MOV EDI,dword ptr [0x00803380]
00564FD2  33 F6                     XOR ESI,ESI
00564FD4  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
00564FD7  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00564FDA  8D 14 57                  LEA EDX,[EDI + EDX*0x2]
00564FDD  33 FF                     XOR EDI,EDI
00564FDF  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00564FE2  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00564FE5  85 D2                     TEST EDX,EDX
00564FE7  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00564FEA  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00564FED  0F 8E A2 00 00 00         JLE 0x00565095
00564FF3  83 C1 14                  ADD ECX,0x14
00564FF6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00564FF9  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_00564ffc:
00564FFC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00564FFF  85 C0                     TEST EAX,EAX
00565001  7C 67                     JL 0x0056506a
00565003  3B 05 A8 33 80 00         CMP EAX,dword ptr [0x008033a8]
00565009  7D 5F                     JGE 0x0056506a
0056500B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0056500E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00565011  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00565014  8B 09                     MOV ECX,dword ptr [ECX]
00565016  03 C2                     ADD EAX,EDX
00565018  03 CA                     ADD ECX,EDX
0056501A  3B C8                     CMP ECX,EAX
0056501C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0056501F  7F 49                     JG 0x0056506a
00565021  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00565024  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
LAB_00565027:
00565027  85 C9                     TEST ECX,ECX
00565029  7C 34                     JL 0x0056505f
0056502B  3B 0D A4 33 80 00         CMP ECX,dword ptr [0x008033a4]
00565031  7D 2C                     JGE 0x0056505f
00565033  33 C0                     XOR EAX,EAX
00565035  8A 02                     MOV AL,byte ptr [EDX]
00565037  8B D8                     MOV EBX,EAX
00565039  83 E0 07                  AND EAX,0x7
0056503C  C1 EB 04                  SHR EBX,0x4
0056503F  D1 E3                     SHL EBX,0x1
00565041  2B C3                     SUB EAX,EBX
00565043  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
00565046  03 D8                     ADD EBX,EAX
00565048  33 C0                     XOR EAX,EAX
0056504A  8A 42 01                  MOV AL,byte ptr [EDX + 0x1]
0056504D  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
00565050  3B F0                     CMP ESI,EAX
00565052  7D 08                     JGE 0x0056505c
00565054  8B F0                     MOV ESI,EAX
00565056  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00565059  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0056505c:
0056505C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0056505f:
0056505F  41                        INC ECX
00565060  83 C2 02                  ADD EDX,0x2
00565063  3B C8                     CMP ECX,EAX
00565065  7E C0                     JLE 0x00565027
00565067  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
LAB_0056506a:
0056506A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0056506D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00565070  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00565073  83 C1 08                  ADD ECX,0x8
00565076  47                        INC EDI
00565077  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0056507A  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
00565080  42                        INC EDX
00565081  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00565084  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00565087  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0056508A  3B F8                     CMP EDI,EAX
0056508C  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0056508F  0F 8C 67 FF FF FF         JL 0x00564ffc
LAB_00565095:
00565095  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00565098  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0056509B  8B 15 08 33 80 00         MOV EDX,dword ptr [0x00803308]
005650A1  50                        PUSH EAX
005650A2  A1 04 33 80 00            MOV EAX,[0x00803304]
005650A7  51                        PUSH ECX
005650A8  52                        PUSH EDX
005650A9  50                        PUSH EAX
005650AA  E8 FA F2 E9 FF            CALL 0x004043a9
005650AF  8B 0D 84 33 80 00         MOV ECX,dword ptr [0x00803384]
005650B5  83 C1 02                  ADD ECX,0x2
005650B8  0F AF 0D 20 33 80 00      IMUL ECX,dword ptr [0x00803320]
005650BF  3B C1                     CMP EAX,ECX
005650C1  7D 02                     JGE 0x005650c5
005650C3  8B C1                     MOV EAX,ECX
LAB_005650c5:
005650C5  0F AF C6                  IMUL EAX,ESI
005650C8  99                        CDQ
005650C9  F7 3D 90 33 80 00         IDIV dword ptr [0x00803390]
005650CF  8B 15 B0 33 80 00         MOV EDX,dword ptr [0x008033b0]
005650D5  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
005650D8  57                        PUSH EDI
005650D9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005650DC  8B 04 9A                  MOV EAX,dword ptr [EDX + EBX*0x4]
005650DF  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005650E2  E8 E9 65 17 00            CALL 0x006db6d0
005650E7  8B F0                     MOV ESI,EAX
005650E9  57                        PUSH EDI
005650EA  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
005650ED  E8 4E 65 17 00            CALL 0x006db640
005650F2  8B D8                     MOV EBX,EAX
005650F4  A1 54 33 80 00            MOV EAX,[0x00803354]
005650F9  F7 DB                     NEG EBX
005650FB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005650FE  8B C8                     MOV ECX,EAX
00565100  0F AF C3                  IMUL EAX,EBX
00565103  0F AF CE                  IMUL ECX,ESI
00565106  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00565109  8B 15 08 33 80 00         MOV EDX,dword ptr [0x00803308]
0056510F  C1 E6 10                  SHL ESI,0x10
00565112  C1 E7 10                  SHL EDI,0x10
00565115  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
00565118  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
0056511B  2B F0                     SUB ESI,EAX
0056511D  A1 04 33 80 00            MOV EAX,[0x00803304]
00565122  2B F9                     SUB EDI,ECX
00565124  52                        PUSH EDX
00565125  C1 FE 10                  SAR ESI,0x10
00565128  C1 FF 10                  SAR EDI,0x10
0056512B  50                        PUSH EAX
0056512C  56                        PUSH ESI
0056512D  57                        PUSH EDI
0056512E  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
00565131  E8 5A 7E 14 00            CALL 0x006acf90
00565136  3B 05 58 33 80 00         CMP EAX,dword ptr [0x00803358]
0056513C  0F 8C 00 01 00 00         JL 0x00565242
00565142  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00565145  33 DB                     XOR EBX,EBX
00565147  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
0056514A  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0056514D  03 F2                     ADD ESI,EDX
0056514F  8B 15 80 33 80 00         MOV EDX,dword ptr [0x00803380]
00565155  8B C6                     MOV EAX,ESI
00565157  0F AF 05 A4 33 80 00      IMUL EAX,dword ptr [0x008033a4]
0056515E  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00565161  33 D2                     XOR EDX,EDX
00565163  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00565166  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00565169  85 C0                     TEST EAX,EAX
0056516B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0056516E  0F 8E 88 00 00 00         JLE 0x005651fc
00565174  83 C1 14                  ADD ECX,0x14
00565177  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0056517A  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_0056517d:
0056517D  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00565180  85 C0                     TEST EAX,EAX
00565182  7C 55                     JL 0x005651d9
00565184  3B 05 A8 33 80 00         CMP EAX,dword ptr [0x008033a8]
0056518A  7D 4D                     JGE 0x005651d9
0056518C  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
0056518F  8B C7                     MOV EAX,EDI
00565191  03 01                     ADD EAX,dword ptr [ECX]
00565193  03 F7                     ADD ESI,EDI
00565195  3B C6                     CMP EAX,ESI
00565197  7F 40                     JG 0x005651d9
00565199  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0056519C  8D 4C 41 01               LEA ECX,[ECX + EAX*0x2 + 0x1]
005651A0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_005651a3:
005651A3  85 C0                     TEST EAX,EAX
005651A5  7C 21                     JL 0x005651c8
005651A7  3B 05 A4 33 80 00         CMP EAX,dword ptr [0x008033a4]
005651AD  7D 19                     JGE 0x005651c8
005651AF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005651B2  33 C9                     XOR ECX,ECX
005651B4  8A 0B                     MOV CL,byte ptr [EBX]
005651B6  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
005651B9  3B D9                     CMP EBX,ECX
005651BB  7D 0B                     JGE 0x005651c8
005651BD  8B D9                     MOV EBX,ECX
005651BF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005651C2  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
005651C5  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_005651c8:
005651C8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005651CB  40                        INC EAX
005651CC  83 C1 02                  ADD ECX,0x2
005651CF  3B C6                     CMP EAX,ESI
005651D1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005651D4  7E CD                     JLE 0x005651a3
005651D6  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
LAB_005651d9:
005651D9  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005651DC  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005651DF  42                        INC EDX
005651E0  40                        INC EAX
005651E1  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005651E4  A1 A4 33 80 00            MOV EAX,[0x008033a4]
005651E9  83 C1 08                  ADD ECX,0x8
005651EC  8D 04 46                  LEA EAX,[ESI + EAX*0x2]
005651EF  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
005651F2  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
005651F5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005651F8  3B D0                     CMP EDX,EAX
005651FA  7C 81                     JL 0x0056517d
LAB_005651fc:
005651FC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005651FF  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00565202  A1 08 33 80 00            MOV EAX,[0x00803308]
00565207  51                        PUSH ECX
00565208  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
0056520E  52                        PUSH EDX
0056520F  50                        PUSH EAX
00565210  51                        PUSH ECX
00565211  E8 93 F1 E9 FF            CALL 0x004043a9
00565216  8B 15 84 33 80 00         MOV EDX,dword ptr [0x00803384]
0056521C  8B C8                     MOV ECX,EAX
0056521E  8D 42 02                  LEA EAX,[EDX + 0x2]
00565221  0F AF 05 20 33 80 00      IMUL EAX,dword ptr [0x00803320]
00565228  3B C8                     CMP ECX,EAX
0056522A  7D 02                     JGE 0x0056522e
0056522C  8B C8                     MOV ECX,EAX
LAB_0056522e:
0056522E  8B C3                     MOV EAX,EBX
00565230  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
00565233  0F AF C1                  IMUL EAX,ECX
00565236  99                        CDQ
00565237  F7 3D 90 33 80 00         IDIV dword ptr [0x00803390]
0056523D  01 45 FC                  ADD dword ptr [EBP + -0x4],EAX
00565240  EB 09                     JMP 0x0056524b
LAB_00565242:
00565242  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00565245  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
00565248  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0056524b:
0056524B  A1 54 33 80 00            MOV EAX,[0x00803354]
00565250  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00565253  8B C8                     MOV ECX,EAX
00565255  0F AF C3                  IMUL EAX,EBX
00565258  0F AF 4D C4               IMUL ECX,dword ptr [EBP + -0x3c]
0056525C  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
0056525F  03 CA                     ADD ECX,EDX
00565261  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00565264  03 C6                     ADD EAX,ESI
00565266  C1 F8 10                  SAR EAX,0x10
00565269  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
0056526C  8B 1D 80 33 80 00         MOV EBX,dword ptr [0x00803380]
00565272  03 C6                     ADD EAX,ESI
00565274  8B 52 10                  MOV EDX,dword ptr [EDX + 0x10]
00565277  8B F0                     MOV ESI,EAX
00565279  33 FF                     XOR EDI,EDI
0056527B  0F AF 35 A4 33 80 00      IMUL ESI,dword ptr [0x008033a4]
00565282  C1 F9 10                  SAR ECX,0x10
00565285  8D 34 73                  LEA ESI,[EBX + ESI*0x2]
00565288  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0056528B  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
0056528E  33 F6                     XOR ESI,ESI
00565290  85 D2                     TEST EDX,EDX
00565292  7E 7F                     JLE 0x00565313
00565294  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00565297  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0056529A  8D 5A 14                  LEA EBX,[EDX + 0x14]
0056529D  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
LAB_005652a0:
005652A0  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005652A3  85 C0                     TEST EAX,EAX
005652A5  7C 49                     JL 0x005652f0
005652A7  3B 05 A8 33 80 00         CMP EAX,dword ptr [0x008033a8]
005652AD  7D 41                     JGE 0x005652f0
005652AF  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
005652B2  8B C1                     MOV EAX,ECX
005652B4  03 03                     ADD EAX,dword ptr [EBX]
005652B6  03 D1                     ADD EDX,ECX
005652B8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005652BB  3B C2                     CMP EAX,EDX
005652BD  7F 31                     JG 0x005652f0
005652BF  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
005652C2  8D 5C 43 01               LEA EBX,[EBX + EAX*0x2 + 0x1]
LAB_005652c6:
005652C6  85 C0                     TEST EAX,EAX
005652C8  7C 1B                     JL 0x005652e5
005652CA  3B 05 A4 33 80 00         CMP EAX,dword ptr [0x008033a4]
005652D0  7D 13                     JGE 0x005652e5
005652D2  33 D2                     XOR EDX,EDX
005652D4  8A 13                     MOV DL,byte ptr [EBX]
005652D6  3B FA                     CMP EDI,EDX
005652D8  7D 08                     JGE 0x005652e2
005652DA  8B FA                     MOV EDI,EDX
005652DC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005652DF  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_005652e2:
005652E2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_005652e5:
005652E5  40                        INC EAX
005652E6  83 C3 02                  ADD EBX,0x2
005652E9  3B C2                     CMP EAX,EDX
005652EB  7E D9                     JLE 0x005652c6
005652ED  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
LAB_005652f0:
005652F0  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005652F3  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005652F6  46                        INC ESI
005652F7  40                        INC EAX
005652F8  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005652FB  A1 A4 33 80 00            MOV EAX,[0x008033a4]
00565300  83 C3 08                  ADD EBX,0x8
00565303  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00565306  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
00565309  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0056530C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0056530F  3B F0                     CMP ESI,EAX
00565311  7C 8D                     JL 0x005652a0
LAB_00565313:
00565313  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00565316  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00565319  A1 08 33 80 00            MOV EAX,[0x00803308]
0056531E  51                        PUSH ECX
0056531F  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00565325  52                        PUSH EDX
00565326  50                        PUSH EAX
00565327  51                        PUSH ECX
00565328  E8 7C F0 E9 FF            CALL 0x004043a9
0056532D  8B 35 84 33 80 00         MOV ESI,dword ptr [0x00803384]
00565333  8B C8                     MOV ECX,EAX
00565335  8D 46 02                  LEA EAX,[ESI + 0x2]
00565338  0F AF 05 20 33 80 00      IMUL EAX,dword ptr [0x00803320]
0056533F  3B C8                     CMP ECX,EAX
00565341  7D 02                     JGE 0x00565345
00565343  8B C8                     MOV ECX,EAX
LAB_00565345:
00565345  8B C7                     MOV EAX,EDI
00565347  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0056534A  0F AF C1                  IMUL EAX,ECX
0056534D  99                        CDQ
0056534E  F7 3D 90 33 80 00         IDIV dword ptr [0x00803390]
00565354  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00565357  8B 0A                     MOV ECX,dword ptr [EDX]
00565359  03 F8                     ADD EDI,EAX
0056535B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0056535E  2B C6                     SUB EAX,ESI
00565360  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00565363  0F AF C1                  IMUL EAX,ECX
00565366  8D 3C 89                  LEA EDI,[ECX + ECX*0x4]
00565369  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0056536C  B8 67 66 66 66            MOV EAX,0x66666667
00565371  F7 E9                     IMUL ECX
00565373  8B CA                     MOV ECX,EDX
00565375  C1 F9 02                  SAR ECX,0x2
00565378  8B C1                     MOV EAX,ECX
0056537A  C1 E8 1F                  SHR EAX,0x1f
0056537D  03 C8                     ADD ECX,EAX
0056537F  B8 56 55 55 55            MOV EAX,0x55555556
00565384  F7 EF                     IMUL EDI
00565386  8B F2                     MOV ESI,EDX
00565388  03 D1                     ADD EDX,ECX
0056538A  C1 EE 1F                  SHR ESI,0x1f
0056538D  03 F2                     ADD ESI,EDX
0056538F  85 F6                     TEST ESI,ESI
00565391  7E 25                     JLE 0x005653b8
00565393  3B F7                     CMP ESI,EDI
00565395  7E 02                     JLE 0x00565399
00565397  8B F7                     MOV ESI,EDI
LAB_00565399:
00565399  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0056539C  2B C6                     SUB EAX,ESI
0056539E  99                        CDQ
0056539F  33 C2                     XOR EAX,EDX
005653A1  2B C2                     SUB EAX,EDX
005653A3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005653A6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005653A9  C1 E0 02                  SHL EAX,0x2
005653AC  99                        CDQ
005653AD  F7 FF                     IDIV EDI
005653AF  BF 64 00 00 00            MOV EDI,0x64
005653B4  2B F8                     SUB EDI,EAX
005653B6  EB 02                     JMP 0x005653ba
LAB_005653b8:
005653B8  33 FF                     XOR EDI,EDI
LAB_005653ba:
005653BA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005653BD  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005653C0  8B 0D 08 33 80 00         MOV ECX,dword ptr [0x00803308]
005653C6  8B 15 04 33 80 00         MOV EDX,dword ptr [0x00803304]
005653CC  56                        PUSH ESI
005653CD  53                        PUSH EBX
005653CE  51                        PUSH ECX
005653CF  52                        PUSH EDX
005653D0  E8 D4 EF E9 FF            CALL 0x004043a9
005653D5  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
005653DB  8B 15 B4 33 80 00         MOV EDX,dword ptr [0x008033b4]
005653E1  0F AF CE                  IMUL ECX,ESI
005653E4  03 CB                     ADD ECX,EBX
005653E6  33 F6                     XOR ESI,ESI
005653E8  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
005653EB  66 8B 09                  MOV CX,word ptr [ECX]
005653EE  66 85 C9                  TEST CX,CX
005653F1  74 1B                     JZ 0x0056540e
005653F3  66 83 F9 FF               CMP CX,-0x1
005653F7  74 15                     JZ 0x0056540e
005653F9  8B 35 9C 33 80 00         MOV ESI,dword ptr [0x0080339c]
005653FF  0F AF 35 20 33 80 00      IMUL ESI,dword ptr [0x00803320]
00565406  0F BF C9                  MOVSX ECX,CX
00565409  03 F1                     ADD ESI,ECX
0056540B  2B F0                     SUB ESI,EAX
0056540D  4E                        DEC ESI
LAB_0056540e:
0056540E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00565411  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00565414  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00565417  52                        PUSH EDX
00565418  50                        PUSH EAX
00565419  51                        PUSH ECX
0056541A  E8 B1 D8 FF FF            CALL 0x00562cd0
0056541F  8B 1D 88 33 80 00         MOV EBX,dword ptr [0x00803388]
00565425  8B 15 3C 33 80 00         MOV EDX,dword ptr [0x0080333c]
0056542B  0F AF 1D 40 33 80 00      IMUL EBX,dword ptr [0x00803340]
00565432  0F AF D6                  IMUL EDX,ESI
00565435  8B 0D 38 33 80 00         MOV ECX,dword ptr [0x00803338]
0056543B  2B DA                     SUB EBX,EDX
0056543D  0F AF 4D CC               IMUL ECX,dword ptr [EBP + -0x34]
00565441  8B 15 34 33 80 00         MOV EDX,dword ptr [0x00803334]
00565447  2B D9                     SUB EBX,ECX
00565449  8B 0D 2C 33 80 00         MOV ECX,dword ptr [0x0080332c]
0056544F  0F AF D0                  IMUL EDX,EAX
00565452  A1 30 33 80 00            MOV EAX,[0x00803330]
00565457  0F AF CF                  IMUL ECX,EDI
0056545A  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0056545E  03 DA                     ADD EBX,EDX
00565460  03 D8                     ADD EBX,EAX
00565462  03 D9                     ADD EBX,ECX
00565464  79 02                     JNS 0x00565468
00565466  33 DB                     XOR EBX,EBX
LAB_00565468:
00565468  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
0056546E  33 FF                     XOR EDI,EDI
00565470  85 C9                     TEST ECX,ECX
00565472  C7 45 1C 64 00 00 00      MOV dword ptr [EBP + 0x1c],0x64
00565479  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0056547C  0F 8E 1D 01 00 00         JLE 0x0056559f
00565482  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00565485  8D 72 0C                  LEA ESI,[EDX + 0xc]
LAB_00565488:
00565488  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
0056548B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0056548E  2B C2                     SUB EAX,EDX
00565490  99                        CDQ
00565491  33 C2                     XOR EAX,EDX
00565493  2B C2                     SUB EAX,EDX
00565495  85 C0                     TEST EAX,EAX
00565497  7F 35                     JG 0x005654ce
00565499  8B 46 F8                  MOV EAX,dword ptr [ESI + -0x8]
0056549C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0056549F  2B C2                     SUB EAX,EDX
005654A1  99                        CDQ
005654A2  33 C2                     XOR EAX,EDX
005654A4  2B C2                     SUB EAX,EDX
005654A6  85 C0                     TEST EAX,EAX
005654A8  7F 24                     JG 0x005654ce
005654AA  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
005654AD  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005654B0  2B C2                     SUB EAX,EDX
005654B2  99                        CDQ
005654B3  33 C2                     XOR EAX,EDX
005654B5  2B C2                     SUB EAX,EDX
005654B7  83 F8 17                  CMP EAX,0x17
005654BA  7E 07                     JLE 0x005654c3
005654BC  3D 51 01 00 00            CMP EAX,0x151
005654C1  7C 0B                     JL 0x005654ce
LAB_005654c3:
005654C3  3B 1E                     CMP EBX,dword ptr [ESI]
005654C5  0F 8E B9 00 00 00         JLE 0x00565584
005654CB  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_005654ce:
005654CE  3B 1E                     CMP EBX,dword ptr [ESI]
005654D0  7F 17                     JG 0x005654e9
005654D2  3B CF                     CMP ECX,EDI
005654D4  74 16                     JZ 0x005654ec
005654D6  39 7D 1C                  CMP dword ptr [EBP + 0x1c],EDI
005654D9  74 11                     JZ 0x005654ec
005654DB  47                        INC EDI
005654DC  83 C6 14                  ADD ESI,0x14
005654DF  3B F9                     CMP EDI,ECX
005654E1  0F 8D B8 00 00 00         JGE 0x0056559f
005654E7  EB 9F                     JMP 0x00565488
LAB_005654e9:
005654E9  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
LAB_005654ec:
005654EC  47                        INC EDI
005654ED  3B F9                     CMP EDI,ECX
005654EF  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
005654F2  0F 8D A7 00 00 00         JGE 0x0056559f
005654F8  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005654FB  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
005654FE  8D 74 82 08               LEA ESI,[EDX + EAX*0x4 + 0x8]
00565502  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
LAB_00565505:
00565505  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00565508  8D 46 F8                  LEA EAX,[ESI + -0x8]
0056550B  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0056550E  8B 00                     MOV EAX,dword ptr [EAX]
00565510  2B C2                     SUB EAX,EDX
00565512  99                        CDQ
00565513  33 C2                     XOR EAX,EDX
00565515  2B C2                     SUB EAX,EDX
00565517  85 C0                     TEST EAX,EAX
00565519  7F 72                     JG 0x0056558d
0056551B  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
0056551E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00565521  2B C2                     SUB EAX,EDX
00565523  99                        CDQ
00565524  33 C2                     XOR EAX,EDX
00565526  2B C2                     SUB EAX,EDX
00565528  85 C0                     TEST EAX,EAX
0056552A  7F 61                     JG 0x0056558d
0056552C  8B 06                     MOV EAX,dword ptr [ESI]
0056552E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00565531  2B C2                     SUB EAX,EDX
00565533  99                        CDQ
00565534  33 C2                     XOR EAX,EDX
00565536  2B C2                     SUB EAX,EDX
00565538  83 F8 17                  CMP EAX,0x17
0056553B  7E 07                     JLE 0x00565544
0056553D  3D 51 01 00 00            CMP EAX,0x151
00565542  7C 49                     JL 0x0056558d
LAB_00565544:
00565544  8D 41 FF                  LEA EAX,[ECX + -0x1]
00565547  3B F8                     CMP EDI,EAX
00565549  7D 30                     JGE 0x0056557b
0056554B  8B C1                     MOV EAX,ECX
0056554D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00565550  2B C1                     SUB EAX,ECX
00565552  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00565555  48                        DEC EAX
00565556  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
00565559  8D 72 0C                  LEA ESI,[EDX + 0xc]
0056555C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0056555F  C1 E1 02                  SHL ECX,0x2
00565562  8B C1                     MOV EAX,ECX
00565564  C1 E9 02                  SHR ECX,0x2
00565567  F3 A5                     MOVSD.REP ES:EDI,ESI
00565569  8B C8                     MOV ECX,EAX
0056556B  83 E1 03                  AND ECX,0x3
0056556E  F3 A4                     MOVSB.REP ES:EDI,ESI
00565570  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
00565576  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00565579  8B F2                     MOV ESI,EDX
LAB_0056557b:
0056557B  49                        DEC ECX
0056557C  89 0D 98 33 80 00         MOV dword ptr [0x00803398],ECX
00565582  EB 13                     JMP 0x00565597
LAB_00565584:
00565584  C7 45 D8 64 00 00 00      MOV dword ptr [EBP + -0x28],0x64
0056558B  EB 12                     JMP 0x0056559f
LAB_0056558d:
0056558D  47                        INC EDI
0056558E  83 C6 14                  ADD ESI,0x14
00565591  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00565594  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
LAB_00565597:
00565597  3B F9                     CMP EDI,ECX
00565599  0F 8C 66 FF FF FF         JL 0x00565505
LAB_0056559f:
0056559F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005655A2  3B C1                     CMP EAX,ECX
005655A4  8B F0                     MOV ESI,EAX
005655A6  7C 03                     JL 0x005655ab
005655A8  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
LAB_005655ab:
005655AB  83 FE 64                  CMP ESI,0x64
005655AE  7D 6F                     JGE 0x0056561f
005655B0  3B C1                     CMP EAX,ECX
005655B2  7C 46                     JL 0x005655fa
005655B4  83 F9 64                  CMP ECX,0x64
005655B7  7C 0B                     JL 0x005655c4
005655B9  B9 63 00 00 00            MOV ECX,0x63
005655BE  89 0D 98 33 80 00         MOV dword ptr [0x00803398],ECX
LAB_005655c4:
005655C4  3B F1                     CMP ESI,ECX
005655C6  7D 2B                     JGE 0x005655f3
005655C8  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
005655CB  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005655CE  C1 E0 02                  SHL EAX,0x2
005655D1  C1 E1 02                  SHL ECX,0x2
005655D4  2B C8                     SUB ECX,EAX
005655D6  8D 54 B6 05               LEA EDX,[ESI + ESI*0x4 + 0x5]
005655DA  51                        PUSH ECX
005655DB  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005655DE  03 C1                     ADD EAX,ECX
005655E0  50                        PUSH EAX
005655E1  8D 04 91                  LEA EAX,[ECX + EDX*0x4]
005655E4  50                        PUSH EAX
005655E5  E8 86 84 1C 00            CALL 0x0072da70
005655EA  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
005655F0  83 C4 0C                  ADD ESP,0xc
LAB_005655f3:
005655F3  41                        INC ECX
005655F4  89 0D 98 33 80 00         MOV dword ptr [0x00803398],ECX
LAB_005655fa:
005655FA  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005655FD  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
00565600  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
00565603  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00565606  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00565609  89 08                     MOV dword ptr [EAX],ECX
0056560B  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0056560E  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00565611  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00565614  89 58 0C                  MOV dword ptr [EAX + 0xc],EBX
00565617  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
0056561D  EB 03                     JMP 0x00565622
LAB_0056561f:
0056561F  83 CB FF                  OR EBX,0xffffffff
LAB_00565622:
00565622  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00565625  A1 0C 33 80 00            MOV EAX,[0x0080330c]
0056562A  5F                        POP EDI
0056562B  3B D0                     CMP EDX,EAX
0056562D  5E                        POP ESI
0056562E  75 0F                     JNZ 0x0056563f
00565630  8B C3                     MOV EAX,EBX
00565632  89 0D 14 33 80 00         MOV dword ptr [0x00803314],ECX
00565638  5B                        POP EBX
00565639  8B E5                     MOV ESP,EBP
0056563B  5D                        POP EBP
0056563C  C2 18 00                  RET 0x18
LAB_0056563f:
0056563F  8B C3                     MOV EAX,EBX
00565641  89 0D 7C 33 80 00         MOV dword ptr [0x0080337c],ECX
00565647  5B                        POP EBX
00565648  8B E5                     MOV ESP,EBP
0056564A  5D                        POP EBP
0056564B  C2 18 00                  RET 0x18
