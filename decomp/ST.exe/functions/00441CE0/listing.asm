FUN_00441ce0:
00441CE0  55                        PUSH EBP
00441CE1  8B EC                     MOV EBP,ESP
00441CE3  81 EC E4 00 00 00         SUB ESP,0xe4
00441CE9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00441CEE  53                        PUSH EBX
00441CEF  56                        PUSH ESI
00441CF0  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00441CF3  57                        PUSH EDI
00441CF4  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
00441CFA  8D 8D 1C FF FF FF         LEA ECX,[EBP + 0xffffff1c]
00441D00  6A 00                     PUSH 0x0
00441D02  52                        PUSH EDX
00441D03  C7 45 E0 04 00 00 00      MOV dword ptr [EBP + -0x20],0x4
00441D0A  C7 45 84 38 00 00 00      MOV dword ptr [EBP + -0x7c],0x38
00441D11  C7 45 88 39 00 00 00      MOV dword ptr [EBP + -0x78],0x39
00441D18  C7 45 8C 4F 00 00 00      MOV dword ptr [EBP + -0x74],0x4f
00441D1F  C7 45 90 5E 00 00 00      MOV dword ptr [EBP + -0x70],0x5e
00441D26  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
00441D2C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00441D32  E8 B9 BA 2E 00            CALL 0x0072d7f0
00441D37  8B F0                     MOV ESI,EAX
00441D39  83 C4 08                  ADD ESP,0x8
00441D3C  85 F6                     TEST ESI,ESI
00441D3E  0F 85 28 04 00 00         JNZ 0x0044216c
00441D44  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00441D47  0F BE 75 08               MOVSX ESI,byte ptr [EBP + 0x8]
00441D4B  85 DB                     TEST EBX,EBX
00441D4D  7E 36                     JLE 0x00441d85
00441D4F  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00441D52  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00441D55  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
00441D58  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
00441D5B  C1 E2 04                  SHL EDX,0x4
00441D5E  03 D6                     ADD EDX,ESI
00441D60  8D 3C 55 2F 4E 7F 00      LEA EDI,[EDX*0x2 + 0x7f4e2f]
LAB_00441d67:
00441D67  8B 07                     MOV EAX,dword ptr [EDI]
00441D69  85 C0                     TEST EAX,EAX
00441D6B  74 0C                     JZ 0x00441d79
00441D6D  50                        PUSH EAX
00441D6E  E8 9D C3 26 00            CALL 0x006ae110
00441D73  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_00441d79:
00441D79  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00441D7C  83 C7 04                  ADD EDI,0x4
00441D7F  48                        DEC EAX
00441D80  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00441D83  75 E2                     JNZ 0x00441d67
LAB_00441d85:
00441D85  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
00441D88  33 C0                     XOR EAX,EAX
00441D8A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00441D8D  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00441D90  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
00441D93  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00441D96  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00441D99  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00441D9C  8D 0C 56                  LEA ECX,[ESI + EDX*0x2]
00441D9F  C1 E1 04                  SHL ECX,0x4
00441DA2  03 CE                     ADD ECX,ESI
00441DA4  D1 E1                     SHL ECX,0x1
00441DA6  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00441DA9  8A 91 20 4E 7F 00         MOV DL,byte ptr [ECX + 0x7f4e20]
00441DAF  84 D2                     TEST DL,DL
00441DB1  0F 84 A0 03 00 00         JZ 0x00442157
00441DB7  3B D8                     CMP EBX,EAX
00441DB9  7E 20                     JLE 0x00441ddb
00441DBB  8D B1 2F 4E 7F 00         LEA ESI,[ECX + 0x7f4e2f]
00441DC1  8B FB                     MOV EDI,EBX
LAB_00441dc3:
00441DC3  6A 01                     PUSH 0x1
00441DC5  6A 24                     PUSH 0x24
00441DC7  6A 00                     PUSH 0x0
00441DC9  6A 00                     PUSH 0x0
00441DCB  E8 C0 C4 26 00            CALL 0x006ae290
00441DD0  89 06                     MOV dword ptr [ESI],EAX
00441DD2  83 C6 04                  ADD ESI,0x4
00441DD5  4F                        DEC EDI
00441DD6  75 EB                     JNZ 0x00441dc3
00441DD8  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_00441ddb:
00441DDB  8B 81 29 4E 7F 00         MOV EAX,dword ptr [ECX + 0x7f4e29]
00441DE1  85 C0                     TEST EAX,EAX
00441DE3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00441DE6  0F 84 B6 00 00 00         JZ 0x00441ea2
00441DEC  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00441DEF  85 C0                     TEST EAX,EAX
00441DF1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00441DF4  0F 86 A8 00 00 00         JBE 0x00441ea2
00441DFA  6A 01                     PUSH 0x1
00441DFC  6A 04                     PUSH 0x4
00441DFE  6A 00                     PUSH 0x0
00441E00  6A 00                     PUSH 0x0
00441E02  E8 89 C4 26 00            CALL 0x006ae290
00441E07  85 DB                     TEST EBX,EBX
00441E09  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00441E0C  7E 1A                     JLE 0x00441e28
00441E0E  8D 75 A4                  LEA ESI,[EBP + -0x5c]
00441E11  8B FB                     MOV EDI,EBX
LAB_00441e13:
00441E13  6A 01                     PUSH 0x1
00441E15  6A 04                     PUSH 0x4
00441E17  6A 00                     PUSH 0x0
00441E19  6A 00                     PUSH 0x0
00441E1B  E8 70 C4 26 00            CALL 0x006ae290
00441E20  89 06                     MOV dword ptr [ESI],EAX
00441E22  83 C6 04                  ADD ESI,0x4
00441E25  4F                        DEC EDI
00441E26  75 EB                     JNZ 0x00441e13
LAB_00441e28:
00441E28  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00441E2B  33 FF                     XOR EDI,EDI
00441E2D  85 C0                     TEST EAX,EAX
00441E2F  7E 6E                     JLE 0x00441e9f
LAB_00441e31:
00441E31  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00441E34  8D 45 FC                  LEA EAX,[EBP + -0x4]
00441E37  50                        PUSH EAX
00441E38  8B D7                     MOV EDX,EDI
00441E3A  E8 31 AE 26 00            CALL 0x006acc70
00441E3F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00441E42  85 C9                     TEST ECX,ECX
00441E44  74 51                     JZ 0x00441e97
00441E46  8B 11                     MOV EDX,dword ptr [ECX]
00441E48  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00441E4B  83 F8 3B                  CMP EAX,0x3b
00441E4E  74 3A                     JZ 0x00441e8a
00441E50  83 F8 60                  CMP EAX,0x60
00441E53  74 35                     JZ 0x00441e8a
00441E55  33 F6                     XOR ESI,ESI
00441E57  85 DB                     TEST EBX,EBX
00441E59  7E 3C                     JLE 0x00441e97
00441E5B  8D 4D 84                  LEA ECX,[EBP + -0x7c]
LAB_00441e5e:
00441E5E  3B 01                     CMP EAX,dword ptr [ECX]
00441E60  74 0A                     JZ 0x00441e6c
00441E62  46                        INC ESI
00441E63  83 C1 04                  ADD ECX,0x4
00441E66  3B F3                     CMP ESI,EBX
00441E68  7C F4                     JL 0x00441e5e
00441E6A  EB 2B                     JMP 0x00441e97
LAB_00441e6c:
00441E6C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00441E6F  8D 55 B8                  LEA EDX,[EBP + -0x48]
00441E72  52                        PUSH EDX
00441E73  8B 01                     MOV EAX,dword ptr [ECX]
00441E75  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
00441E7B  85 C0                     TEST EAX,EAX
00441E7D  7E 18                     JLE 0x00441e97
00441E7F  8B 4C B5 A4               MOV ECX,dword ptr [EBP + ESI*0x4 + -0x5c]
00441E83  8D 45 FC                  LEA EAX,[EBP + -0x4]
00441E86  50                        PUSH EAX
00441E87  51                        PUSH ECX
00441E88  EB 08                     JMP 0x00441e92
LAB_00441e8a:
00441E8A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00441E8D  8D 55 FC                  LEA EDX,[EBP + -0x4]
00441E90  52                        PUSH EDX
00441E91  50                        PUSH EAX
LAB_00441e92:
00441E92  E8 29 C3 26 00            CALL 0x006ae1c0
LAB_00441e97:
00441E97  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00441E9A  47                        INC EDI
00441E9B  3B F8                     CMP EDI,EAX
00441E9D  7C 92                     JL 0x00441e31
LAB_00441e9f:
00441E9F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_00441ea2:
00441EA2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00441EA5  85 C0                     TEST EAX,EAX
00441EA7  0F 84 5F 02 00 00         JZ 0x0044210c
00441EAD  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00441EB0  85 C0                     TEST EAX,EAX
00441EB2  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00441EB5  0F 86 51 02 00 00         JBE 0x0044210c
00441EBB  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00441EC2  0F 8E 6F 02 00 00         JLE 0x00442137
00441EC8  8B 5D B4                  MOV EBX,dword ptr [EBP + -0x4c]
LAB_00441ecb:
00441ECB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00441ECE  8D 4D FC                  LEA ECX,[EBP + -0x4]
00441ED1  51                        PUSH ECX
00441ED2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00441ED5  E8 96 AD 26 00            CALL 0x006acc70
00441EDA  8D 55 C8                  LEA EDX,[EBP + -0x38]
00441EDD  8D 45 C6                  LEA EAX,[EBP + -0x3a]
00441EE0  52                        PUSH EDX
00441EE1  8D 4D C4                  LEA ECX,[EBP + -0x3c]
00441EE4  50                        PUSH EAX
00441EE5  51                        PUSH ECX
00441EE6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00441EE9  E8 D7 F9 FB FF            CALL 0x004018c5
00441EEE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00441EF1  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
00441EF7  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
00441EFE  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
00441F02  8B 3D 38 B2 7F 00         MOV EDI,dword ptr [0x007fb238]
00441F08  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
00441F0F  0F AF CA                  IMUL ECX,EDX
00441F12  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
00441F16  6A FF                     PUSH -0x1
00441F18  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00441F1F  0F AF C8                  IMUL ECX,EAX
00441F22  D1 E1                     SHL ECX,0x1
00441F24  8B D1                     MOV EDX,ECX
00441F26  6A FF                     PUSH -0x1
00441F28  C1 E9 02                  SHR ECX,0x2
00441F2B  F3 A5                     MOVSD.REP ES:EDI,ESI
00441F2D  8B CA                     MOV ECX,EDX
00441F2F  6A FF                     PUSH -0x1
00441F31  83 E1 03                  AND ECX,0x3
00441F34  F3 A4                     MOVSB.REP ES:EDI,ESI
00441F36  0F BF 45 C8               MOVSX EAX,word ptr [EBP + -0x38]
00441F3A  0F BF 4D C6               MOVSX ECX,word ptr [EBP + -0x3a]
00441F3E  0F BF 55 C4               MOVSX EDX,word ptr [EBP + -0x3c]
00441F42  50                        PUSH EAX
00441F43  51                        PUSH ECX
00441F44  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
00441F4B  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
00441F52  52                        PUSH EDX
00441F53  50                        PUSH EAX
00441F54  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
00441F5B  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
00441F60  51                        PUSH ECX
00441F61  52                        PUSH EDX
00441F62  50                        PUSH EAX
00441F63  E8 28 91 26 00            CALL 0x006ab090
00441F68  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00441F6B  85 C0                     TEST EAX,EAX
00441F6D  0F 8E 82 01 00 00         JLE 0x004420f5
00441F73  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00441F76  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00441F79  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00441F7C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00441F7F  8D 8A 2F 4E 7F 00         LEA ECX,[EDX + 0x7f4e2f]
00441F85  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00441f88:
00441F88  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00441F8B  8B 32                     MOV ESI,dword ptr [EDX]
00441F8D  85 F6                     TEST ESI,ESI
00441F8F  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
00441F92  0F 84 0F 01 00 00         JZ 0x004420a7
00441F98  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00441F9B  85 C0                     TEST EAX,EAX
00441F9D  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00441FA0  0F 86 01 01 00 00         JBE 0x004420a7
00441FA6  33 FF                     XOR EDI,EDI
00441FA8  85 C0                     TEST EAX,EAX
00441FAA  0F 8E 23 01 00 00         JLE 0x004420d3
LAB_00441fb0:
00441FB0  8D 45 FC                  LEA EAX,[EBP + -0x4]
00441FB3  8B D7                     MOV EDX,EDI
00441FB5  50                        PUSH EAX
00441FB6  8B CE                     MOV ECX,ESI
00441FB8  E8 B3 AC 26 00            CALL 0x006acc70
00441FBD  8D 4D C0                  LEA ECX,[EBP + -0x40]
00441FC0  8D 55 BE                  LEA EDX,[EBP + -0x42]
00441FC3  51                        PUSH ECX
00441FC4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00441FC7  8D 45 BC                  LEA EAX,[EBP + -0x44]
00441FCA  52                        PUSH EDX
00441FCB  50                        PUSH EAX
00441FCC  E8 F4 F8 FB FF            CALL 0x004018c5
00441FD1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00441FD4  0F BF 45 C0               MOVSX EAX,word ptr [EBP + -0x40]
00441FD8  66 8B 51 32               MOV DX,word ptr [ECX + 0x32]
00441FDC  40                        INC EAX
00441FDD  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
00441FE4  66 89 55 C2               MOV word ptr [EBP + -0x3e],DX
00441FE8  0F AF C1                  IMUL EAX,ECX
00441FEB  0F BF 55 BE               MOVSX EDX,word ptr [EBP + -0x42]
00441FEF  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
00441FF6  0F AF D1                  IMUL EDX,ECX
00441FF9  8B 0D 38 B2 7F 00         MOV ECX,dword ptr [0x007fb238]
00441FFF  03 C2                     ADD EAX,EDX
00442001  0F BF 55 BC               MOVSX EDX,word ptr [EBP + -0x44]
00442005  03 C2                     ADD EAX,EDX
00442007  0F BF 04 41               MOVSX EAX,word ptr [ECX + EAX*0x2]
0044200B  85 C0                     TEST EAX,EAX
0044200D  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00442010  74 66                     JZ 0x00442078
00442012  6A 08                     PUSH 0x8
00442014  8B CB                     MOV ECX,EBX
00442016  E8 93 05 FC FF            CALL 0x004025ae
0044201B  8A D0                     MOV DL,AL
0044201D  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00442020  81 E2 FF 00 00 00         AND EDX,0xff
00442026  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00442029  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
0044202C  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0044202F  8D 34 C8                  LEA ESI,[EAX + ECX*0x8]
00442032  B8 56 55 55 55            MOV EAX,0x55555556
00442037  F7 EE                     IMUL ESI
00442039  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0044203C  8B C2                     MOV EAX,EDX
0044203E  C1 EA 1F                  SHR EDX,0x1f
00442041  03 C2                     ADD EAX,EDX
00442043  8B 75 9C                  MOV ESI,dword ptr [EBP + -0x64]
00442046  99                        CDQ
00442047  F7 F9                     IDIV ECX
00442049  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0044204C  B8 67 66 66 66            MOV EAX,0x66666667
00442051  C1 E1 02                  SHL ECX,0x2
00442054  F7 E9                     IMUL ECX
00442056  C1 FA 02                  SAR EDX,0x2
00442059  8B C2                     MOV EAX,EDX
0044205B  C1 E8 1F                  SHR EAX,0x1f
0044205E  8D 8C 02 20 03 00 00      LEA ECX,[EDX + EAX*0x1 + 0x320]
00442065  B8 40 9C 00 00            MOV EAX,0x9c40
0044206A  99                        CDQ
0044206B  F7 F9                     IDIV ECX
0044206D  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00442070  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00442073  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00442076  EB 12                     JMP 0x0044208a
LAB_00442078:
00442078  B8 64 00 00 00            MOV EAX,0x64
0044207D  C7 45 CC 40 42 0F 00      MOV dword ptr [EBP + -0x34],0xf4240
00442084  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00442087  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_0044208a:
0044208A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0044208D  8D 4D BC                  LEA ECX,[EBP + -0x44]
00442090  51                        PUSH ECX
00442091  8B 02                     MOV EAX,dword ptr [EDX]
00442093  50                        PUSH EAX
00442094  E8 27 C1 26 00            CALL 0x006ae1c0
00442099  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
0044209C  47                        INC EDI
0044209D  3B F8                     CMP EDI,EAX
0044209F  0F 8C 0B FF FF FF         JL 0x00441fb0
004420A5  EB 2C                     JMP 0x004420d3
LAB_004420a7:
004420A7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004420AA  8B 01                     MOV EAX,dword ptr [ECX]
004420AC  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004420AF  85 C9                     TEST ECX,ECX
004420B1  75 20                     JNZ 0x004420d3
004420B3  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
004420B9  B9 FF FF 00 00            MOV ECX,0xffff
004420BE  52                        PUSH EDX
004420BF  50                        PUSH EAX
004420C0  66 89 8D 6E FF FF FF      MOV word ptr [EBP + 0xffffff6e],CX
004420C7  66 89 8D 66 FF FF FF      MOV word ptr [EBP + 0xffffff66],CX
004420CE  E8 ED C0 26 00            CALL 0x006ae1c0
LAB_004420d3:
004420D3  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004420D6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004420D9  B8 04 00 00 00            MOV EAX,0x4
004420DE  03 D0                     ADD EDX,EAX
004420E0  03 C8                     ADD ECX,EAX
004420E2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004420E5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004420E8  48                        DEC EAX
004420E9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004420EC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004420EF  0F 85 93 FE FF FF         JNZ 0x00441f88
LAB_004420f5:
004420F5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004420F8  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004420FB  40                        INC EAX
004420FC  3B C1                     CMP EAX,ECX
004420FE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00442101  0F 8C C4 FD FF FF         JL 0x00441ecb
00442107  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0044210A  EB 2B                     JMP 0x00442137
LAB_0044210c:
0044210C  B8 FF FF 00 00            MOV EAX,0xffff
00442111  85 DB                     TEST EBX,EBX
00442113  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
00442117  66 89 45 C2               MOV word ptr [EBP + -0x3e],AX
0044211B  7E 1A                     JLE 0x00442137
0044211D  8D B1 2F 4E 7F 00         LEA ESI,[ECX + 0x7f4e2f]
00442123  8B FB                     MOV EDI,EBX
LAB_00442125:
00442125  8B 0E                     MOV ECX,dword ptr [ESI]
00442127  8D 45 BC                  LEA EAX,[EBP + -0x44]
0044212A  50                        PUSH EAX
0044212B  51                        PUSH ECX
0044212C  E8 8F C0 26 00            CALL 0x006ae1c0
00442131  83 C6 04                  ADD ESI,0x4
00442134  4F                        DEC EDI
00442135  75 EE                     JNZ 0x00442125
LAB_00442137:
00442137  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044213A  52                        PUSH EDX
0044213B  E8 D0 BF 26 00            CALL 0x006ae110
00442140  85 DB                     TEST EBX,EBX
00442142  7E 13                     JLE 0x00442157
00442144  8D 75 A4                  LEA ESI,[EBP + -0x5c]
00442147  8B FB                     MOV EDI,EBX
LAB_00442149:
00442149  8B 06                     MOV EAX,dword ptr [ESI]
0044214B  50                        PUSH EAX
0044214C  E8 BF BF 26 00            CALL 0x006ae110
00442151  83 C6 04                  ADD ESI,0x4
00442154  4F                        DEC EDI
00442155  75 F2                     JNZ 0x00442149
LAB_00442157:
00442157  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
0044215D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00442163  5F                        POP EDI
00442164  5E                        POP ESI
00442165  5B                        POP EBX
00442166  8B E5                     MOV ESP,EBP
00442168  5D                        POP EBP
00442169  C2 04 00                  RET 0x4
LAB_0044216c:
0044216C  8B 95 1C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff1c]
00442172  68 98 80 7A 00            PUSH 0x7a8098
00442177  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044217C  56                        PUSH ESI
0044217D  6A 00                     PUSH 0x0
0044217F  68 C5 23 00 00            PUSH 0x23c5
00442184  68 04 60 7A 00            PUSH 0x7a6004
00442189  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0044218F  E8 3C B3 26 00            CALL 0x006ad4d0
00442194  83 C4 18                  ADD ESP,0x18
00442197  85 C0                     TEST EAX,EAX
00442199  74 01                     JZ 0x0044219c
0044219B  CC                        INT3
LAB_0044219c:
0044219C  68 C6 23 00 00            PUSH 0x23c6
004421A1  68 04 60 7A 00            PUSH 0x7a6004
004421A6  6A 00                     PUSH 0x0
004421A8  56                        PUSH ESI
004421A9  E8 92 3C 26 00            CALL 0x006a5e40
004421AE  5F                        POP EDI
004421AF  5E                        POP ESI
004421B0  5B                        POP EBX
004421B1  8B E5                     MOV ESP,EBP
004421B3  5D                        POP EBP
004421B4  C2 04 00                  RET 0x4
