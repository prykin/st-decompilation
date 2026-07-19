FUN_00410dc0:
00410DC0  55                        PUSH EBP
00410DC1  8B EC                     MOV EBP,ESP
00410DC3  83 EC 20                  SUB ESP,0x20
00410DC6  8B 0D 20 4D 7F 00         MOV ECX,dword ptr [0x007f4d20]
00410DCC  53                        PUSH EBX
00410DCD  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00410DD0  56                        PUSH ESI
00410DD1  57                        PUSH EDI
00410DD2  3B 0C DD 20 4C 7A 00      CMP ECX,dword ptr [EBX*0x8 + 0x7a4c20]
00410DD9  7F 21                     JG 0x00410dfc
00410DDB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00410DDE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00410DE1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00410DE4  6A 00                     PUSH 0x0
00410DE6  53                        PUSH EBX
00410DE7  50                        PUSH EAX
00410DE8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00410DEB  51                        PUSH ECX
00410DEC  52                        PUSH EDX
00410DED  50                        PUSH EAX
00410DEE  E8 50 05 FF FF            CALL 0x00401343
00410DF3  5F                        POP EDI
00410DF4  5E                        POP ESI
00410DF5  5B                        POP EBX
00410DF6  8B E5                     MOV ESP,EBP
00410DF8  5D                        POP EBP
00410DF9  C2 14 00                  RET 0x14
LAB_00410dfc:
00410DFC  81 F9 C8 00 00 00         CMP ECX,0xc8
00410E02  0F 8F 56 03 00 00         JG 0x0041115e
00410E08  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00410E0B  85 F6                     TEST ESI,ESI
00410E0D  0F 8C 4B 03 00 00         JL 0x0041115e
00410E13  3B 35 2C 4D 7F 00         CMP ESI,dword ptr [0x007f4d2c]
00410E19  0F 8D 3F 03 00 00         JGE 0x0041115e
00410E1F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00410E22  85 D2                     TEST EDX,EDX
00410E24  0F 8C 34 03 00 00         JL 0x0041115e
00410E2A  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
00410E2F  3B D0                     CMP EDX,EAX
00410E31  0F 8D 27 03 00 00         JGE 0x0041115e
00410E37  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00410E3A  85 D2                     TEST EDX,EDX
00410E3C  0F 8C 1C 03 00 00         JL 0x0041115e
00410E42  3B 15 34 4D 7F 00         CMP EDX,dword ptr [0x007f4d34]
00410E48  0F 8D 10 03 00 00         JGE 0x0041115e
00410E4E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00410E51  85 D2                     TEST EDX,EDX
00410E53  7E 25                     JLE 0x00410e7a
00410E55  8B 3D 38 4D 7F 00         MOV EDI,dword ptr [0x007f4d38]
00410E5B  0F AF FA                  IMUL EDI,EDX
00410E5E  C1 FF 10                  SAR EDI,0x10
00410E61  2B F7                     SUB ESI,EDI
00410E63  8B 3D 28 4D 7F 00         MOV EDI,dword ptr [0x007f4d28]
00410E69  0F AF FA                  IMUL EDI,EDX
00410E6C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00410E6F  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00410E72  C1 FF 10                  SAR EDI,0x10
00410E75  03 D7                     ADD EDX,EDI
00410E77  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_00410e7a:
00410E7A  0F AF 05 2C 4D 7F 00      IMUL EAX,dword ptr [0x007f4d2c]
00410E81  8B 3C DD 24 4C 7A 00      MOV EDI,dword ptr [EBX*0x8 + 0x7a4c24]
00410E88  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00410E8B  8B C1                     MOV EAX,ECX
00410E8D  C7 05 14 4D 7F 00 00 00 00 00  MOV dword ptr [0x007f4d14],0x0
00410E97  99                        CDQ
00410E98  F7 FF                     IDIV EDI
00410E9A  83 C0 02                  ADD EAX,0x2
00410E9D  3B C1                     CMP EAX,ECX
00410E9F  7E 02                     JLE 0x00410ea3
00410EA1  8B C1                     MOV EAX,ECX
LAB_00410ea3:
00410EA3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00410EA6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00410EA9  50                        PUSH EAX
00410EAA  53                        PUSH EBX
00410EAB  6A 00                     PUSH 0x0
00410EAD  51                        PUSH ECX
00410EAE  52                        PUSH EDX
00410EAF  56                        PUSH ESI
00410EB0  E8 8E 04 FF FF            CALL 0x00401343
00410EB5  85 C0                     TEST EAX,EAX
00410EB7  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00410EBA  0F 85 A3 02 00 00         JNZ 0x00411163
00410EC0  83 E7 FE                  AND EDI,0xfffffffe
00410EC3  BB 01 00 00 00            MOV EBX,0x1
00410EC8  8B C7                     MOV EAX,EDI
00410ECA  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
00410ECD  99                        CDQ
00410ECE  2B C2                     SUB EAX,EDX
00410ED0  D1 F8                     SAR EAX,0x1
00410ED2  3B C3                     CMP EAX,EBX
00410ED4  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00410ED7  0F 8C 15 01 00 00         JL 0x00410ff2
00410EDD  4F                        DEC EDI
00410EDE  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00410EE1  EB 03                     JMP 0x00410ee6
LAB_00410ee3:
00410EE3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_00410ee6:
00410EE6  8B 15 14 4D 7F 00         MOV EDX,dword ptr [0x007f4d14]
00410EEC  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
00410EF1  3B D0                     CMP EDX,EAX
00410EF3  0F 8D 0C 01 00 00         JGE 0x00411005
00410EF9  8B 3D 38 4D 7F 00         MOV EDI,dword ptr [0x007f4d38]
00410EFF  8B CF                     MOV ECX,EDI
00410F01  0F AF CB                  IMUL ECX,EBX
00410F04  C1 F9 10                  SAR ECX,0x10
00410F07  03 CE                     ADD ECX,ESI
00410F09  8B 35 28 4D 7F 00         MOV ESI,dword ptr [0x007f4d28]
00410F0F  8B C6                     MOV EAX,ESI
00410F11  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00410F14  0F AF C3                  IMUL EAX,EBX
00410F17  C1 F8 10                  SAR EAX,0x10
00410F1A  8B D8                     MOV EBX,EAX
00410F1C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00410F1F  2B C3                     SUB EAX,EBX
00410F21  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00410F24  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
00410F29  2B C2                     SUB EAX,EDX
00410F2B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00410F2E  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00410F31  8D 5A 01                  LEA EBX,[EDX + 0x1]
00410F34  99                        CDQ
00410F35  F7 FB                     IDIV EBX
00410F37  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00410F3A  3B C2                     CMP EAX,EDX
00410F3C  7E 02                     JLE 0x00410f40
00410F3E  8B C2                     MOV EAX,EDX
LAB_00410f40:
00410F40  85 C0                     TEST EAX,EAX
00410F42  7E 2C                     JLE 0x00410f70
00410F44  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00410F47  50                        PUSH EAX
00410F48  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00410F4B  50                        PUSH EAX
00410F4C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00410F4F  6A 00                     PUSH 0x0
00410F51  52                        PUSH EDX
00410F52  50                        PUSH EAX
00410F53  51                        PUSH ECX
00410F54  E8 EA 03 FF FF            CALL 0x00401343
00410F59  85 C0                     TEST EAX,EAX
00410F5B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00410F5E  0F 85 FF 01 00 00         JNZ 0x00411163
00410F64  8B 3D 38 4D 7F 00         MOV EDI,dword ptr [0x007f4d38]
00410F6A  8B 35 28 4D 7F 00         MOV ESI,dword ptr [0x007f4d28]
LAB_00410f70:
00410F70  8B 15 14 4D 7F 00         MOV EDX,dword ptr [0x007f4d14]
00410F76  8B 0D 20 4D 7F 00         MOV ECX,dword ptr [0x007f4d20]
00410F7C  3B D1                     CMP EDX,ECX
00410F7E  0F 8D 81 00 00 00         JGE 0x00411005
00410F84  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00410F87  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00410F8A  0F AF FB                  IMUL EDI,EBX
00410F8D  0F AF F3                  IMUL ESI,EBX
00410F90  C1 FF 10                  SAR EDI,0x10
00410F93  2B C7                     SUB EAX,EDI
00410F95  2B CA                     SUB ECX,EDX
00410F97  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00410F9A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00410F9D  C1 FE 10                  SAR ESI,0x10
00410FA0  03 F0                     ADD ESI,EAX
00410FA2  8B C1                     MOV EAX,ECX
00410FA4  99                        CDQ
00410FA5  F7 7D F0                  IDIV dword ptr [EBP + -0x10]
00410FA8  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00410FAB  3B C1                     CMP EAX,ECX
00410FAD  7E 02                     JLE 0x00410fb1
00410FAF  8B C1                     MOV EAX,ECX
LAB_00410fb1:
00410FB1  85 C0                     TEST EAX,EAX
00410FB3  7F 05                     JG 0x00410fba
00410FB5  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
LAB_00410fba:
00410FBA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00410FBD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00410FC0  50                        PUSH EAX
00410FC1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00410FC4  51                        PUSH ECX
00410FC5  6A 00                     PUSH 0x0
00410FC7  52                        PUSH EDX
00410FC8  56                        PUSH ESI
00410FC9  50                        PUSH EAX
00410FCA  E8 74 03 FF FF            CALL 0x00401343
00410FCF  85 C0                     TEST EAX,EAX
00410FD1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00410FD4  0F 85 89 01 00 00         JNZ 0x00411163
00410FDA  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00410FDD  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00410FE0  43                        INC EBX
00410FE1  83 E9 02                  SUB ECX,0x2
00410FE4  3B D8                     CMP EBX,EAX
00410FE6  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
00410FE9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00410FEC  0F 8E F1 FE FF FF         JLE 0x00410ee3
LAB_00410ff2:
00410FF2  8B 15 14 4D 7F 00         MOV EDX,dword ptr [0x007f4d14]
00410FF8  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
00410FFD  3B D0                     CMP EDX,EAX
00410FFF  0F 8C 59 01 00 00         JL 0x0041115e
FUN_00410dc0::cf_break_loop_00411005:
00411005  33 FF                     XOR EDI,EDI
00411007  3B D7                     CMP EDX,EDI
00411009  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
0041100C  0F 8E 0E 01 00 00         JLE 0x00411120
00411012  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
LAB_00411018:
00411018  8B 04 0F                  MOV EAX,dword ptr [EDI + ECX*0x1]
0041101B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0041101E  8B 74 0F 04               MOV ESI,dword ptr [EDI + ECX*0x1 + 0x4]
00411022  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00411025  8B 4C 0F 08               MOV ECX,dword ptr [EDI + ECX*0x1 + 0x8]
00411029  85 C0                     TEST EAX,EAX
0041102B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0041102E  7C 31                     JL 0x00411061
00411030  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
00411036  3B C3                     CMP EAX,EBX
00411038  7D 27                     JGE 0x00411061
0041103A  85 F6                     TEST ESI,ESI
0041103C  7C 23                     JL 0x00411061
0041103E  3B 35 30 4D 7F 00         CMP ESI,dword ptr [0x007f4d30]
00411044  7D 1B                     JGE 0x00411061
00411046  0F AF 4D E8               IMUL ECX,dword ptr [EBP + -0x18]
0041104A  0F AF DE                  IMUL EBX,ESI
0041104D  03 C3                     ADD EAX,EBX
0041104F  03 C8                     ADD ECX,EAX
00411051  A1 F0 4C 7F 00            MOV EAX,[0x007f4cf0]
00411056  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
0041105B  0F 84 A7 00 00 00         JZ 0x00411108
LAB_00411061:
00411061  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00411064  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00411067  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041106A  C1 F9 02                  SAR ECX,0x2
0041106D  C1 FA 02                  SAR EDX,0x2
00411070  51                        PUSH ECX
00411071  8B 0D 1C 4D 7F 00         MOV ECX,dword ptr [0x007f4d1c]
00411077  C1 F8 02                  SAR EAX,0x2
0041107A  52                        PUSH EDX
0041107B  8B 15 10 4D 7F 00         MOV EDX,dword ptr [0x007f4d10]
00411081  50                        PUSH EAX
00411082  A1 0C 4D 7F 00            MOV EAX,[0x007f4d0c]
00411087  C1 F9 02                  SAR ECX,0x2
0041108A  C1 FA 02                  SAR EDX,0x2
0041108D  51                        PUSH ECX
0041108E  52                        PUSH EDX
0041108F  C1 F8 02                  SAR EAX,0x2
00411092  8D 4D F4                  LEA ECX,[EBP + -0xc]
00411095  50                        PUSH EAX
00411096  8D 55 F8                  LEA EDX,[EBP + -0x8]
00411099  51                        PUSH ECX
0041109A  8D 45 FC                  LEA EAX,[EBP + -0x4]
0041109D  52                        PUSH EDX
0041109E  50                        PUSH EAX
0041109F  E8 CC E1 FF FF            CALL 0x0040f270
004110A4  85 C0                     TEST EAX,EAX
004110A6  0F 85 B2 00 00 00         JNZ 0x0041115e
004110AC  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
004110B2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004110B5  0F AF 4D F8               IMUL ECX,dword ptr [EBP + -0x8]
004110B9  0F AF 55 E8               IMUL EDX,dword ptr [EBP + -0x18]
004110BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004110C0  03 C1                     ADD EAX,ECX
004110C2  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004110C8  03 D0                     ADD EDX,EAX
004110CA  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004110CD  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
004110D0  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004110D3  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004110D6  80 F2 07                  XOR DL,0x7
004110D9  0F AB 11                  BTS [ECX],EDX
004110DC  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004110E2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004110E5  89 04 17                  MOV dword ptr [EDI + EDX*0x1],EAX
004110E8  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
004110EE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004110F1  89 54 0F 04               MOV dword ptr [EDI + ECX*0x1 + 0x4],EDX
004110F5  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
004110FB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004110FE  89 44 0F 08               MOV dword ptr [EDI + ECX*0x1 + 0x8],EAX
00411102  8B 15 14 4D 7F 00         MOV EDX,dword ptr [0x007f4d14]
LAB_00411108:
00411108  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0041110B  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00411111  40                        INC EAX
00411112  83 C7 14                  ADD EDI,0x14
00411115  3B C2                     CMP EAX,EDX
00411117  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0041111A  0F 8C F8 FE FF FF         JL 0x00411018
LAB_00411120:
00411120  E8 6B DA FF FF            CALL 0x0040eb90
00411125  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00411128  85 F6                     TEST ESI,ESI
0041112A  74 27                     JZ 0x00411153
0041112C  83 FE FC                  CMP ESI,-0x4
0041112F  74 2D                     JZ 0x0041115e
00411131  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00411137  68 A6 0A 00 00            PUSH 0xaa6
0041113C  68 A8 4C 7A 00            PUSH 0x7a4ca8
00411141  52                        PUSH EDX
00411142  56                        PUSH ESI
00411143  E8 F8 4C 29 00            CALL 0x006a5e40
00411148  8B C6                     MOV EAX,ESI
0041114A  5F                        POP EDI
0041114B  5E                        POP ESI
0041114C  5B                        POP EBX
0041114D  8B E5                     MOV ESP,EBP
0041114F  5D                        POP EBP
00411150  C2 14 00                  RET 0x14
LAB_00411153:
00411153  5F                        POP EDI
00411154  5E                        POP ESI
00411155  33 C0                     XOR EAX,EAX
00411157  5B                        POP EBX
00411158  8B E5                     MOV ESP,EBP
0041115A  5D                        POP EBP
0041115B  C2 14 00                  RET 0x14
LAB_0041115e:
0041115E  B8 FC FF FF FF            MOV EAX,0xfffffffc
LAB_00411163:
00411163  5F                        POP EDI
00411164  5E                        POP ESI
00411165  5B                        POP EBX
00411166  8B E5                     MOV ESP,EBP
00411168  5D                        POP EBP
00411169  C2 14 00                  RET 0x14
