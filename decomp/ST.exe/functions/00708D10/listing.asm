FUN_00708d10:
00708D10  55                        PUSH EBP
00708D11  8B EC                     MOV EBP,ESP
00708D13  83 EC 64                  SUB ESP,0x64
00708D16  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00708D19  53                        PUSH EBX
00708D1A  56                        PUSH ESI
00708D1B  57                        PUSH EDI
00708D1C  8B F9                     MOV EDI,ECX
00708D1E  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00708D25  85 C0                     TEST EAX,EAX
00708D27  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00708D2A  74 3C                     JZ 0x00708d68
00708D2C  8B 8F 6C 01 00 00         MOV ECX,dword ptr [EDI + 0x16c]
00708D32  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00708D35  8B B7 78 02 00 00         MOV ESI,dword ptr [EDI + 0x278]
00708D3B  2B C1                     SUB EAX,ECX
00708D3D  0F AF C6                  IMUL EAX,ESI
00708D40  8B 9F 70 01 00 00         MOV EBX,dword ptr [EDI + 0x170]
00708D46  99                        CDQ
00708D47  2B D9                     SUB EBX,ECX
00708D49  F7 FB                     IDIV EBX
00708D4B  85 C0                     TEST EAX,EAX
00708D4D  7D 04                     JGE 0x00708d53
00708D4F  33 C0                     XOR EAX,EAX
00708D51  EB 07                     JMP 0x00708d5a
LAB_00708d53:
00708D53  3B C6                     CMP EAX,ESI
00708D55  7C 03                     JL 0x00708d5a
00708D57  8D 46 FF                  LEA EAX,[ESI + -0x1]
LAB_00708d5a:
00708D5A  8B 8F 7C 02 00 00         MOV ECX,dword ptr [EDI + 0x27c]
00708D60  C1 E0 08                  SHL EAX,0x8
00708D63  03 C8                     ADD ECX,EAX
00708D65  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_00708d68:
00708D68  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
00708D6B  8B 57 38                  MOV EDX,dword ptr [EDI + 0x38]
00708D6E  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
00708D71  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00708D74  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00708D77  2B D0                     SUB EDX,EAX
00708D79  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
00708D7C  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00708D7F  2B C1                     SUB EAX,ECX
00708D81  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
00708D84  0F BF 4B 12               MOVSX ECX,word ptr [EBX + 0x12]
00708D88  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00708D8B  B9 01 00 00 00            MOV ECX,0x1
00708D90  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00708D93  89 0D 08 70 85 00         MOV dword ptr [0x00857008],ECX
00708D99  89 0D C8 6F 85 00         MOV dword ptr [0x00856fc8],ECX
00708D9F  8B 87 F0 02 00 00         MOV EAX,dword ptr [EDI + 0x2f0]
00708DA5  83 F8 64                  CMP EAX,0x64
00708DA8  74 30                     JZ 0x00708dda
00708DAA  83 F8 43                  CMP EAX,0x43
00708DAD  75 11                     JNZ 0x00708dc0
00708DAF  C7 05 C8 6F 85 00 02 00 00 00  MOV dword ptr [0x00856fc8],0x2
00708DB9  B9 03 00 00 00            MOV ECX,0x3
00708DBE  EB 14                     JMP 0x00708dd4
LAB_00708dc0:
00708DC0  83 F8 28                  CMP EAX,0x28
00708DC3  75 15                     JNZ 0x00708dda
00708DC5  C7 05 C8 6F 85 00 02 00 00 00  MOV dword ptr [0x00856fc8],0x2
00708DCF  B9 05 00 00 00            MOV ECX,0x5
LAB_00708dd4:
00708DD4  89 0D 08 70 85 00         MOV dword ptr [0x00857008],ECX
LAB_00708dda:
00708DDA  0F BF 73 10               MOVSX ESI,word ptr [EBX + 0x10]
00708DDE  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00708DE1  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
00708DE4  85 C0                     TEST EAX,EAX
00708DE6  74 0F                     JZ 0x00708df7
00708DE8  0F BF 43 14               MOVSX EAX,word ptr [EBX + 0x14]
00708DEC  40                        INC EAX
00708DED  99                        CDQ
00708DEE  2B C2                     SUB EAX,EDX
00708DF0  D1 F8                     SAR EAX,0x1
00708DF2  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00708DF5  EB 07                     JMP 0x00708dfe
LAB_00708df7:
00708DF7  0F BF 53 14               MOVSX EDX,word ptr [EBX + 0x14]
00708DFB  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
LAB_00708dfe:
00708DFE  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
LAB_00708e05:
00708E05  83 7D D4 01               CMP dword ptr [EBP + -0x2c],0x1
00708E09  75 0B                     JNZ 0x00708e16
00708E0B  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00708E0E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00708E11  03 D0                     ADD EDX,EAX
00708E13  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_00708e16:
00708E16  39 0D C8 6F 85 00         CMP dword ptr [0x00856fc8],ECX
00708E1C  0F 84 D5 00 00 00         JZ 0x00708ef7
00708E22  8B C6                     MOV EAX,ESI
00708E24  99                        CDQ
00708E25  F7 F9                     IDIV ECX
00708E27  8B D8                     MOV EBX,EAX
00708E29  8B C6                     MOV EAX,ESI
00708E2B  99                        CDQ
00708E2C  F7 F9                     IDIV ECX
00708E2E  D1 E3                     SHL EBX,0x1
00708E30  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00708E33  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00708E36  03 F2                     ADD ESI,EDX
00708E38  8B C6                     MOV EAX,ESI
00708E3A  99                        CDQ
00708E3B  F7 F9                     IDIV ECX
00708E3D  D1 E0                     SHL EAX,0x1
00708E3F  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00708E42  8B C6                     MOV EAX,ESI
00708E44  99                        CDQ
00708E45  F7 F9                     IDIV ECX
00708E47  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00708E4A  0F BF 40 0E               MOVSX EAX,word ptr [EAX + 0xe]
00708E4E  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00708E51  99                        CDQ
00708E52  F7 F9                     IDIV ECX
00708E54  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00708E57  8B F0                     MOV ESI,EAX
00708E59  0F BF 42 0E               MOVSX EAX,word ptr [EDX + 0xe]
00708E5D  99                        CDQ
00708E5E  F7 F9                     IDIV ECX
00708E60  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00708E63  D1 E6                     SHL ESI,0x1
00708E65  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00708E68  0F BF 50 12               MOVSX EDX,word ptr [EAX + 0x12]
00708E6C  0F BF 40 0E               MOVSX EAX,word ptr [EAX + 0xe]
00708E70  03 C2                     ADD EAX,EDX
00708E72  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00708E75  99                        CDQ
00708E76  F7 F9                     IDIV ECX
00708E78  D1 E0                     SHL EAX,0x1
00708E7A  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00708E7D  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00708E80  99                        CDQ
00708E81  F7 F9                     IDIV ECX
00708E83  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00708E86  83 F9 05                  CMP ECX,0x5
00708E89  75 24                     JNZ 0x00708eaf
00708E8B  D1 F8                     SAR EAX,0x1
00708E8D  03 F0                     ADD ESI,EAX
00708E8F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00708E92  D1 F8                     SAR EAX,0x1
00708E94  03 D8                     ADD EBX,EAX
00708E96  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00708E99  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00708E9C  D1 FA                     SAR EDX,0x1
00708E9E  03 C2                     ADD EAX,EDX
00708EA0  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00708EA3  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00708EA6  D1 F8                     SAR EAX,0x1
00708EA8  03 C8                     ADD ECX,EAX
00708EAA  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
00708EAD  EB 26                     JMP 0x00708ed5
LAB_00708eaf:
00708EAF  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00708EB2  40                        INC EAX
00708EB3  D1 F8                     SAR EAX,0x1
00708EB5  03 F0                     ADD ESI,EAX
00708EB7  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00708EBA  41                        INC ECX
00708EBB  D1 F9                     SAR ECX,0x1
00708EBD  03 D9                     ADD EBX,ECX
00708EBF  42                        INC EDX
00708EC0  D1 FA                     SAR EDX,0x1
00708EC2  03 C2                     ADD EAX,EDX
00708EC4  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00708EC7  42                        INC EDX
00708EC8  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00708ECB  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00708ECE  D1 FA                     SAR EDX,0x1
00708ED0  03 C2                     ADD EAX,EDX
00708ED2  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_00708ed5:
00708ED5  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00708ED8  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00708EDB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00708EDE  2B C6                     SUB EAX,ESI
00708EE0  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00708EE3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00708EE6  2B D3                     SUB EDX,EBX
00708EE8  03 F1                     ADD ESI,ECX
00708EEA  03 D8                     ADD EBX,EAX
00708EEC  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00708EEF  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
00708EF2  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
00708EF5  EB 21                     JMP 0x00708f18
LAB_00708ef7:
00708EF7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00708EFA  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00708EFD  0F BF 53 0E               MOVSX EDX,word ptr [EBX + 0xe]
00708F01  03 F0                     ADD ESI,EAX
00708F03  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00708F06  03 D0                     ADD EDX,EAX
00708F08  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
00708F0B  0F BF 43 12               MOVSX EAX,word ptr [EBX + 0x12]
00708F0F  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
00708F12  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00708F15  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_00708f18:
00708F18  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00708F1B  8D 55 BC                  LEA EDX,[EBP + -0x44]
00708F1E  51                        PUSH ECX
00708F1F  8D 4D AC                  LEA ECX,[EBP + -0x54]
00708F22  E8 39 75 FA FF            CALL 0x006b0460
00708F27  85 C0                     TEST EAX,EAX
00708F29  0F 84 F8 04 00 00         JZ 0x00709427
00708F2F  8B 5D AC                  MOV EBX,dword ptr [EBP + -0x54]
00708F32  8B 8F C8 02 00 00         MOV ECX,dword ptr [EDI + 0x2c8]
00708F38  8B B7 C0 02 00 00         MOV ESI,dword ptr [EDI + 0x2c0]
00708F3E  8B C3                     MOV EAX,EBX
00708F40  2B C1                     SUB EAX,ECX
00708F42  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
00708F49  99                        CDQ
00708F4A  F7 FE                     IDIV ESI
00708F4C  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00708F4F  2B D1                     SUB EDX,ECX
00708F51  8B 8F C4 02 00 00         MOV ECX,dword ptr [EDI + 0x2c4]
00708F57  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00708F5A  8D 44 1A FF               LEA EAX,[EDX + EBX*0x1 + -0x1]
00708F5E  99                        CDQ
00708F5F  F7 FE                     IDIV ESI
00708F61  8B 9F CC 02 00 00         MOV EBX,dword ptr [EDI + 0x2cc]
00708F67  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00708F6A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00708F6D  2B C3                     SUB EAX,EBX
00708F6F  99                        CDQ
00708F70  F7 F9                     IDIV ECX
00708F72  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00708F75  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00708F78  8B F0                     MOV ESI,EAX
00708F7A  8B C1                     MOV EAX,ECX
00708F7C  2B C3                     SUB EAX,EBX
00708F7E  8B 9F B0 02 00 00         MOV EBX,dword ptr [EDI + 0x2b0]
00708F84  8D 44 10 FF               LEA EAX,[EAX + EDX*0x1 + -0x1]
00708F88  99                        CDQ
00708F89  F7 BF C4 02 00 00         IDIV dword ptr [EDI + 0x2c4]
00708F8F  8B 97 B8 02 00 00         MOV EDX,dword ptr [EDI + 0x2b8]
00708F95  0F AF D6                  IMUL EDX,ESI
00708F98  8D 1C 53                  LEA EBX,[EBX + EDX*0x2]
00708F9B  3B F0                     CMP ESI,EAX
00708F9D  7F 45                     JG 0x00708fe4
00708F9F  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00708FA2  2B C6                     SUB EAX,ESI
00708FA4  40                        INC EAX
00708FA5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00708FA8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_00708fab:
00708FAB  3B C2                     CMP EAX,EDX
00708FAD  7F 23                     JG 0x00708fd2
00708FAF  2B D0                     SUB EDX,EAX
00708FB1  8D 34 43                  LEA ESI,[EBX + EAX*0x2]
00708FB4  42                        INC EDX
LAB_00708fb5:
00708FB5  33 C0                     XOR EAX,EAX
00708FB7  66 8B 06                  MOV AX,word ptr [ESI]
00708FBA  3B 45 1C                  CMP EAX,dword ptr [EBP + 0x1c]
00708FBD  7D 07                     JGE 0x00708fc6
00708FBF  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_00708fc6:
00708FC6  83 C6 02                  ADD ESI,0x2
00708FC9  4A                        DEC EDX
00708FCA  75 E9                     JNZ 0x00708fb5
00708FCC  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00708FCF  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_00708fd2:
00708FD2  8B B7 B8 02 00 00         MOV ESI,dword ptr [EDI + 0x2b8]
00708FD8  8D 1C 73                  LEA EBX,[EBX + ESI*0x2]
00708FDB  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00708FDE  4E                        DEC ESI
00708FDF  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00708FE2  75 C7                     JNZ 0x00708fab
LAB_00708fe4:
00708FE4  8B 5D B0                  MOV EBX,dword ptr [EBP + -0x50]
00708FE7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00708FEA  0F AF DE                  IMUL EBX,ESI
00708FED  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00708FF0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00708FF3  03 D8                     ADD EBX,EAX
00708FF5  03 DA                     ADD EBX,EDX
00708FF7  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
00708FFA  0F AF 55 B0               IMUL EDX,dword ptr [EBP + -0x50]
00708FFE  03 D0                     ADD EDX,EAX
00709000  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00709003  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00709006  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00709009  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0070900C  8B C2                     MOV EAX,EDX
0070900E  2B 45 BC                  SUB EAX,dword ptr [EBP + -0x44]
00709011  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00709014  A1 08 70 85 00            MOV EAX,[0x00857008]
00709019  39 05 C8 6F 85 00         CMP dword ptr [0x00856fc8],EAX
0070901F  0F 85 41 01 00 00         JNZ 0x00709166
00709025  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00709028  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070902B  0F BF 52 10               MOVSX EDX,word ptr [EDX + 0x10]
0070902F  2B C2                     SUB EAX,EDX
00709031  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709034  2B C2                     SUB EAX,EDX
00709036  85 C0                     TEST EAX,EAX
00709038  7E 12                     JLE 0x0070904c
0070903A  50                        PUSH EAX
0070903B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070903E  50                        PUSH EAX
0070903F  E8 CC 6D FC FF            CALL 0x006cfe10
00709044  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00709047  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070904A  EB 12                     JMP 0x0070905e
LAB_0070904c:
0070904C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070904F  8A 50 0D                  MOV DL,byte ptr [EAX + 0xd]
00709052  D1 EA                     SHR EDX,0x1
00709054  83 E2 0E                  AND EDX,0xe
00709057  8D 44 02 16               LEA EAX,[EDX + EAX*0x1 + 0x16]
0070905B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0070905e:
0070905E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00709061  85 C0                     TEST EAX,EAX
00709063  0F 84 85 00 00 00         JZ 0x007090ee
00709069  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0070906C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0070906F  3B C2                     CMP EAX,EDX
00709071  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00709074  75 38                     JNZ 0x007090ae
00709076  85 D2                     TEST EDX,EDX
00709078  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0070907B  52                        PUSH EDX
0070907C  51                        PUSH ECX
0070907D  50                        PUSH EAX
0070907E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00709081  50                        PUSH EAX
00709082  74 0E                     JZ 0x00709092
00709084  56                        PUSH ESI
00709085  53                        PUSH EBX
00709086  56                        PUSH ESI
00709087  53                        PUSH EBX
00709088  E8 13 F5 FE FF            CALL 0x006f85a0
0070908D  E9 95 03 00 00            JMP 0x00709427
LAB_00709092:
00709092  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
00709095  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00709098  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0070909B  51                        PUSH ECX
0070909C  D1 E2                     SHL EDX,0x1
0070909E  52                        PUSH EDX
0070909F  50                        PUSH EAX
007090A0  56                        PUSH ESI
007090A1  53                        PUSH EBX
007090A2  56                        PUSH ESI
007090A3  53                        PUSH EBX
007090A4  E8 B7 CB FE FF            CALL 0x006f5c60
007090A9  E9 79 03 00 00            JMP 0x00709427
LAB_007090ae:
007090AE  85 D2                     TEST EDX,EDX
007090B0  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007090B3  52                        PUSH EDX
007090B4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007090B7  51                        PUSH ECX
007090B8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007090BB  50                        PUSH EAX
007090BC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007090BF  50                        PUSH EAX
007090C0  51                        PUSH ECX
007090C1  52                        PUSH EDX
007090C2  74 0E                     JZ 0x007090d2
007090C4  56                        PUSH ESI
007090C5  53                        PUSH EBX
007090C6  56                        PUSH ESI
007090C7  53                        PUSH EBX
007090C8  E8 D3 F7 FE FF            CALL 0x006f88a0
007090CD  E9 55 03 00 00            JMP 0x00709427
LAB_007090d2:
007090D2  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
007090D5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007090D8  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
007090DB  50                        PUSH EAX
007090DC  D1 E1                     SHL ECX,0x1
007090DE  51                        PUSH ECX
007090DF  52                        PUSH EDX
007090E0  56                        PUSH ESI
007090E1  53                        PUSH EBX
007090E2  56                        PUSH ESI
007090E3  53                        PUSH EBX
007090E4  E8 27 EC FE FF            CALL 0x006f7d10
007090E9  E9 39 03 00 00            JMP 0x00709427
LAB_007090ee:
007090EE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007090F1  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
007090F4  3B C2                     CMP EAX,EDX
007090F6  75 37                     JNZ 0x0070912f
007090F8  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
007090FB  51                        PUSH ECX
007090FC  85 D2                     TEST EDX,EDX
007090FE  50                        PUSH EAX
007090FF  74 10                     JZ 0x00709111
00709101  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00709104  50                        PUSH EAX
00709105  56                        PUSH ESI
00709106  53                        PUSH EBX
00709107  E8 D4 94 FC FF            CALL 0x006d25e0
0070910C  E9 16 03 00 00            JMP 0x00709427
LAB_00709111:
00709111  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00709114  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
00709117  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0070911A  51                        PUSH ECX
0070911B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070911E  52                        PUSH EDX
0070911F  D1 E0                     SHL EAX,0x1
00709121  50                        PUSH EAX
00709122  51                        PUSH ECX
00709123  56                        PUSH ESI
00709124  53                        PUSH EBX
00709125  E8 46 BD FE FF            CALL 0x006f4e70
0070912A  E9 F8 02 00 00            JMP 0x00709427
LAB_0070912f:
0070912F  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
00709133  51                        PUSH ECX
00709134  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00709137  50                        PUSH EAX
00709138  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0070913B  50                        PUSH EAX
0070913C  52                        PUSH EDX
0070913D  51                        PUSH ECX
0070913E  74 0C                     JZ 0x0070914c
00709140  56                        PUSH ESI
00709141  53                        PUSH EBX
00709142  E8 89 95 FC FF            CALL 0x006d26d0
00709147  E9 DB 02 00 00            JMP 0x00709427
LAB_0070914c:
0070914C  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
0070914F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00709152  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00709155  52                        PUSH EDX
00709156  D1 E0                     SHL EAX,0x1
00709158  50                        PUSH EAX
00709159  51                        PUSH ECX
0070915A  56                        PUSH ESI
0070915B  53                        PUSH EBX
0070915C  E8 DF C0 FE FF            CALL 0x006f5240
00709161  E9 C1 02 00 00            JMP 0x00709427
LAB_00709166:
00709166  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00709169  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0070916C  2B C6                     SUB EAX,ESI
0070916E  03 C2                     ADD EAX,EDX
00709170  8B C8                     MOV ECX,EAX
00709172  99                        CDQ
00709173  2B C2                     SUB EAX,EDX
00709175  8B F8                     MOV EDI,EAX
00709177  A1 08 70 85 00            MOV EAX,[0x00857008]
0070917C  D1 FF                     SAR EDI,0x1
0070917E  0F AF F8                  IMUL EDI,EAX
00709181  83 F8 03                  CMP EAX,0x3
00709184  75 05                     JNZ 0x0070918b
00709186  83 E1 01                  AND ECX,0x1
00709189  EB 0B                     JMP 0x00709196
LAB_0070918b:
0070918B  80 E1 01                  AND CL,0x1
0070918E  F6 D9                     NEG CL
00709190  1B C9                     SBB ECX,ECX
00709192  83 E1 03                  AND ECX,0x3
00709195  49                        DEC ECX
LAB_00709196:
00709196  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00709199  8B C1                     MOV EAX,ECX
0070919B  0F BF 4A 0E               MOVSX ECX,word ptr [EDX + 0xe]
0070919F  2B C1                     SUB EAX,ECX
007091A1  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
007091A4  03 F8                     ADD EDI,EAX
007091A6  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
007091A9  2B C6                     SUB EAX,ESI
007091AB  8B F0                     MOV ESI,EAX
007091AD  99                        CDQ
007091AE  2B C2                     SUB EAX,EDX
007091B0  8B C8                     MOV ECX,EAX
007091B2  A1 08 70 85 00            MOV EAX,[0x00857008]
007091B7  D1 F9                     SAR ECX,0x1
007091B9  0F AF C8                  IMUL ECX,EAX
007091BC  83 F8 03                  CMP EAX,0x3
007091BF  75 07                     JNZ 0x007091c8
007091C1  83 E6 01                  AND ESI,0x1
007091C4  D1 E6                     SHL ESI,0x1
007091C6  EB 08                     JMP 0x007091d0
LAB_007091c8:
007091C8  83 E6 01                  AND ESI,0x1
007091CB  D1 E6                     SHL ESI,0x1
007091CD  83 CE 01                  OR ESI,0x1
LAB_007091d0:
007091D0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
007091D3  8B C6                     MOV EAX,ESI
007091D5  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
007091D8  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
007091DB  2B C6                     SUB EAX,ESI
007091DD  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
007091E0  03 C8                     ADD ECX,EAX
007091E2  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
007091E5  2B C6                     SUB EAX,ESI
007091E7  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
007091EA  03 C2                     ADD EAX,EDX
007091EC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007091EF  99                        CDQ
007091F0  2B C2                     SUB EAX,EDX
007091F2  8B F0                     MOV ESI,EAX
007091F4  A1 08 70 85 00            MOV EAX,[0x00857008]
007091F9  D1 FE                     SAR ESI,0x1
007091FB  0F AF F0                  IMUL ESI,EAX
007091FE  83 F8 03                  CMP EAX,0x3
00709201  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00709204  75 05                     JNZ 0x0070920b
00709206  83 E0 01                  AND EAX,0x1
00709209  EB 0A                     JMP 0x00709215
LAB_0070920b:
0070920B  24 01                     AND AL,0x1
0070920D  F6 D8                     NEG AL
0070920F  1B C0                     SBB EAX,EAX
00709211  83 E0 03                  AND EAX,0x3
00709214  48                        DEC EAX
LAB_00709215:
00709215  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00709218  0F BF 52 10               MOVSX EDX,word ptr [EDX + 0x10]
0070921C  2B C2                     SUB EAX,EDX
0070921E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709221  03 F0                     ADD ESI,EAX
00709223  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00709226  2B C2                     SUB EAX,EDX
00709228  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0070922B  99                        CDQ
0070922C  2B C2                     SUB EAX,EDX
0070922E  8B 15 08 70 85 00         MOV EDX,dword ptr [0x00857008]
00709234  D1 F8                     SAR EAX,0x1
00709236  0F AF C2                  IMUL EAX,EDX
00709239  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0070923C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0070923F  83 FA 03                  CMP EDX,0x3
00709242  75 07                     JNZ 0x0070924b
00709244  83 E0 01                  AND EAX,0x1
00709247  D1 E0                     SHL EAX,0x1
00709249  EB 07                     JMP 0x00709252
LAB_0070924b:
0070924B  83 E0 01                  AND EAX,0x1
0070924E  D1 E0                     SHL EAX,0x1
00709250  0C 01                     OR AL,0x1
LAB_00709252:
00709252  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00709255  8B D0                     MOV EDX,EAX
00709257  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070925A  0F BF 40 10               MOVSX EAX,word ptr [EAX + 0x10]
0070925E  2B D0                     SUB EDX,EAX
00709260  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00709263  03 C2                     ADD EAX,EDX
00709265  85 C0                     TEST EAX,EAX
00709267  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0070926A  7E 18                     JLE 0x00709284
0070926C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070926F  50                        PUSH EAX
00709270  51                        PUSH ECX
00709271  E8 9A 6B FC FF            CALL 0x006cfe10
00709276  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00709279  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0070927C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070927F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00709282  EB 18                     JMP 0x0070929c
LAB_00709284:
00709284  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00709287  8A 50 0D                  MOV DL,byte ptr [EAX + 0xd]
0070928A  D1 EA                     SHR EDX,0x1
0070928C  83 E2 0E                  AND EDX,0xe
0070928F  8D 44 02 16               LEA EAX,[EDX + EAX*0x1 + 0x16]
00709293  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00709296  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00709299  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_0070929c:
0070929C  83 7D 24 00               CMP dword ptr [EBP + 0x24],0x0
007092A0  0F 84 D0 00 00 00         JZ 0x00709376
007092A6  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
007092A9  85 C0                     TEST EAX,EAX
007092AB  A1 08 70 85 00            MOV EAX,[0x00857008]
007092B0  74 51                     JZ 0x00709303
007092B2  83 F8 03                  CMP EAX,0x3
007092B5  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007092B8  50                        PUSH EAX
007092B9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007092BC  50                        PUSH EAX
007092BD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007092C0  50                        PUSH EAX
007092C1  75 20                     JNZ 0x007092e3
007092C3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007092C6  2B F2                     SUB ESI,EDX
007092C8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007092CB  2B F9                     SUB EDI,ECX
007092CD  56                        PUSH ESI
007092CE  57                        PUSH EDI
007092CF  51                        PUSH ECX
007092D0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007092D3  51                        PUSH ECX
007092D4  52                        PUSH EDX
007092D5  50                        PUSH EAX
007092D6  53                        PUSH EBX
007092D7  50                        PUSH EAX
007092D8  53                        PUSH EBX
007092D9  E8 F2 CB FF FF            CALL 0x00705ed0
007092DE  E9 41 01 00 00            JMP 0x00709424
LAB_007092e3:
007092E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007092E6  2B F2                     SUB ESI,EDX
007092E8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007092EB  2B F9                     SUB EDI,ECX
007092ED  56                        PUSH ESI
007092EE  57                        PUSH EDI
007092EF  51                        PUSH ECX
007092F0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007092F3  51                        PUSH ECX
007092F4  52                        PUSH EDX
007092F5  50                        PUSH EAX
007092F6  53                        PUSH EBX
007092F7  50                        PUSH EAX
007092F8  53                        PUSH EBX
007092F9  E8 42 D0 FF FF            CALL 0x00706340
007092FE  E9 21 01 00 00            JMP 0x00709424
LAB_00709303:
00709303  83 F8 03                  CMP EAX,0x3
00709306  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00709309  50                        PUSH EAX
0070930A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0070930D  50                        PUSH EAX
0070930E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00709311  50                        PUSH EAX
00709312  75 31                     JNZ 0x00709345
00709314  2B F2                     SUB ESI,EDX
00709316  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00709319  2B F9                     SUB EDI,ECX
0070931B  56                        PUSH ESI
0070931C  57                        PUSH EDI
0070931D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00709320  51                        PUSH ECX
00709321  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00709324  51                        PUSH ECX
00709325  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00709328  52                        PUSH EDX
00709329  50                        PUSH EAX
0070932A  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
0070932D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00709330  D1 E2                     SHL EDX,0x1
00709332  52                        PUSH EDX
00709333  50                        PUSH EAX
00709334  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00709337  50                        PUSH EAX
00709338  53                        PUSH EBX
00709339  50                        PUSH EAX
0070933A  53                        PUSH EBX
0070933B  E8 D0 91 FF FF            CALL 0x00702510
00709340  E9 DF 00 00 00            JMP 0x00709424
LAB_00709345:
00709345  2B F2                     SUB ESI,EDX
00709347  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070934A  2B F9                     SUB EDI,ECX
0070934C  56                        PUSH ESI
0070934D  57                        PUSH EDI
0070934E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00709351  51                        PUSH ECX
00709352  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00709355  51                        PUSH ECX
00709356  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00709359  52                        PUSH EDX
0070935A  50                        PUSH EAX
0070935B  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
0070935E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00709361  D1 E2                     SHL EDX,0x1
00709363  52                        PUSH EDX
00709364  50                        PUSH EAX
00709365  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00709368  50                        PUSH EAX
00709369  53                        PUSH EBX
0070936A  50                        PUSH EAX
0070936B  53                        PUSH EBX
0070936C  E8 BF 96 FF FF            CALL 0x00702a30
00709371  E9 AE 00 00 00            JMP 0x00709424
LAB_00709376:
00709376  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
0070937A  74 44                     JZ 0x007093c0
0070937C  83 3D 08 70 85 00 03      CMP dword ptr [0x00857008],0x3
00709383  50                        PUSH EAX
00709384  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00709387  50                        PUSH EAX
00709388  75 1B                     JNZ 0x007093a5
0070938A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070938D  2B F2                     SUB ESI,EDX
0070938F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00709392  2B F9                     SUB EDI,ECX
00709394  56                        PUSH ESI
00709395  57                        PUSH EDI
00709396  51                        PUSH ECX
00709397  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070939A  51                        PUSH ECX
0070939B  52                        PUSH EDX
0070939C  50                        PUSH EAX
0070939D  53                        PUSH EBX
0070939E  E8 CD BA FF FF            CALL 0x00704e70
007093A3  EB 7F                     JMP 0x00709424
LAB_007093a5:
007093A5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007093A8  2B F2                     SUB ESI,EDX
007093AA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007093AD  2B F9                     SUB EDI,ECX
007093AF  56                        PUSH ESI
007093B0  57                        PUSH EDI
007093B1  51                        PUSH ECX
007093B2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007093B5  51                        PUSH ECX
007093B6  52                        PUSH EDX
007093B7  50                        PUSH EAX
007093B8  53                        PUSH EBX
007093B9  E8 C2 BD FF FF            CALL 0x00705180
007093BE  EB 64                     JMP 0x00709424
LAB_007093c0:
007093C0  83 3D 08 70 85 00 03      CMP dword ptr [0x00857008],0x3
007093C7  50                        PUSH EAX
007093C8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007093CB  50                        PUSH EAX
007093CC  75 2C                     JNZ 0x007093fa
007093CE  2B F2                     SUB ESI,EDX
007093D0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007093D3  2B F9                     SUB EDI,ECX
007093D5  56                        PUSH ESI
007093D6  57                        PUSH EDI
007093D7  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007093DA  51                        PUSH ECX
007093DB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007093DE  51                        PUSH ECX
007093DF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007093E2  52                        PUSH EDX
007093E3  50                        PUSH EAX
007093E4  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
007093E7  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007093EA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007093ED  D1 E2                     SHL EDX,0x1
007093EF  52                        PUSH EDX
007093F0  50                        PUSH EAX
007093F1  51                        PUSH ECX
007093F2  53                        PUSH EBX
007093F3  E8 B8 F6 FE FF            CALL 0x006f8ab0
007093F8  EB 2A                     JMP 0x00709424
LAB_007093fa:
007093FA  2B F2                     SUB ESI,EDX
007093FC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007093FF  2B F9                     SUB EDI,ECX
00709401  56                        PUSH ESI
00709402  57                        PUSH EDI
00709403  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00709406  51                        PUSH ECX
00709407  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070940A  51                        PUSH ECX
0070940B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0070940E  52                        PUSH EDX
0070940F  50                        PUSH EAX
00709410  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
00709413  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00709416  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00709419  D1 E2                     SHL EDX,0x1
0070941B  52                        PUSH EDX
0070941C  50                        PUSH EAX
0070941D  51                        PUSH ECX
0070941E  53                        PUSH EBX
0070941F  E8 AC 00 FF FF            CALL 0x006f94d0
LAB_00709424:
00709424  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_00709427:
00709427  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0070942A  85 C0                     TEST EAX,EAX
0070942C  74 30                     JZ 0x0070945e
0070942E  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00709431  85 C0                     TEST EAX,EAX
00709433  75 29                     JNZ 0x0070945e
00709435  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00709438  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
0070943B  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070943E  8B 0D 08 70 85 00         MOV ECX,dword ptr [0x00857008]
00709444  0F BF 53 14               MOVSX EDX,word ptr [EBX + 0x14]
00709448  03 F0                     ADD ESI,EAX
0070944A  2B D0                     SUB EDX,EAX
0070944C  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
0070944F  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00709452  C7 45 D4 01 00 00 00      MOV dword ptr [EBP + -0x2c],0x1
00709459  E9 A7 F9 FF FF            JMP 0x00708e05
LAB_0070945e:
0070945E  5F                        POP EDI
0070945F  5E                        POP ESI
00709460  5B                        POP EBX
00709461  8B E5                     MOV ESP,EBP
00709463  5D                        POP EBP
00709464  C2 20 00                  RET 0x20
