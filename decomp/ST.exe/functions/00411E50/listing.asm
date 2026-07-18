FUN_00411e50:
00411E50  55                        PUSH EBP
00411E51  8B EC                     MOV EBP,ESP
00411E53  6A FF                     PUSH -0x1
00411E55  68 80 00 79 00            PUSH 0x790080
00411E5A  68 64 D9 72 00            PUSH 0x72d964
00411E5F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00411E65  50                        PUSH EAX
00411E66  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00411E6D  81 EC A4 00 00 00         SUB ESP,0xa4
00411E73  53                        PUSH EBX
00411E74  56                        PUSH ESI
00411E75  57                        PUSH EDI
00411E76  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00411E79  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
00411E80  8B 3D 20 4D 7F 00         MOV EDI,dword ptr [0x007f4d20]
00411E86  81 FF C8 00 00 00         CMP EDI,0xc8
00411E8C  0F 8F 45 08 00 00         JG 0x004126d7
00411E92  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00411E95  85 DB                     TEST EBX,EBX
00411E97  0F 8C 3A 08 00 00         JL 0x004126d7
00411E9D  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
00411EA3  3B D9                     CMP EBX,ECX
00411EA5  0F 8D 2C 08 00 00         JGE 0x004126d7
00411EAB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00411EAE  85 F6                     TEST ESI,ESI
00411EB0  0F 8C 21 08 00 00         JL 0x004126d7
00411EB6  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
00411EBB  3B F0                     CMP ESI,EAX
00411EBD  0F 8D 14 08 00 00         JGE 0x004126d7
00411EC3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00411EC6  85 D2                     TEST EDX,EDX
00411EC8  0F 8C 09 08 00 00         JL 0x004126d7
00411ECE  3B 15 34 4D 7F 00         CMP EDX,dword ptr [0x007f4d34]
00411ED4  0F 8D FD 07 00 00         JGE 0x004126d7
00411EDA  0F AF C1                  IMUL EAX,ECX
00411EDD  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00411EE0  33 C0                     XOR EAX,EAX
00411EE2  8B 0D 24 4D 7F 00         MOV ECX,dword ptr [0x007f4d24]
00411EE8  85 C9                     TEST ECX,ECX
00411EEA  0F 9F C0                  SETG AL
00411EED  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00411EF0  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
00411EF7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00411EFA  85 C0                     TEST EAX,EAX
00411EFC  7E 22                     JLE 0x00411f20
00411EFE  8B 0D 38 4D 7F 00         MOV ECX,dword ptr [0x007f4d38]
00411F04  0F AF C8                  IMUL ECX,EAX
00411F07  C1 F9 10                  SAR ECX,0x10
00411F0A  2B D9                     SUB EBX,ECX
00411F0C  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00411F0F  8B 0D 28 4D 7F 00         MOV ECX,dword ptr [0x007f4d28]
00411F15  0F AF C8                  IMUL ECX,EAX
00411F18  C1 F9 10                  SAR ECX,0x10
00411F1B  03 F1                     ADD ESI,ECX
00411F1D  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
LAB_00411f20:
00411F20  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
00411F27  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
00411F2A  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00411F2D  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00411F30  F7 DA                     NEG EDX
00411F32  1B D2                     SBB EDX,EDX
00411F34  81 E2 B4 00 00 00         AND EDX,0xb4
00411F3A  83 C2 A6                  ADD EDX,-0x5a
00411F3D  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00411F40  2B F2                     SUB ESI,EDX
00411F42  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00411F45  79 23                     JNS 0x00411f6a
00411F47  B9 67 01 00 00            MOV ECX,0x167
00411F4C  2B CE                     SUB ECX,ESI
00411F4E  B8 6D C1 16 6C            MOV EAX,0x6c16c16d
00411F53  F7 E1                     MUL ECX
00411F55  2B CA                     SUB ECX,EDX
00411F57  D1 E9                     SHR ECX,0x1
00411F59  03 CA                     ADD ECX,EDX
00411F5B  C1 E9 08                  SHR ECX,0x8
00411F5E  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00411F61  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00411F64  8D 34 C6                  LEA ESI,[ESI + EAX*0x8]
00411F67  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_00411f6a:
00411F6A  81 FE 68 01 00 00         CMP ESI,0x168
00411F70  7C 24                     JL 0x00411f96
00411F72  B8 6D C1 16 6C            MOV EAX,0x6c16c16d
00411F77  F7 E6                     MUL ESI
00411F79  8B C6                     MOV EAX,ESI
00411F7B  2B C2                     SUB EAX,EDX
00411F7D  D1 E8                     SHR EAX,0x1
00411F7F  03 C2                     ADD EAX,EDX
00411F81  C1 E8 08                  SHR EAX,0x8
00411F84  8B C8                     MOV ECX,EAX
00411F86  F7 D9                     NEG ECX
00411F88  C1 E1 02                  SHL ECX,0x2
00411F8B  2B C8                     SUB ECX,EAX
00411F8D  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00411F90  8D 34 CE                  LEA ESI,[ESI + ECX*0x8]
00411F93  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_00411f96:
00411F96  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00411F99  8B 1C 95 F8 4B 7A 00      MOV EBX,dword ptr [EDX*0x4 + 0x7a4bf8]
00411FA0  89 5D 9C                  MOV dword ptr [EBP + -0x64],EBX
00411FA3  8B C3                     MOV EAX,EBX
00411FA5  C1 E0 05                  SHL EAX,0x5
00411FA8  50                        PUSH EAX
00411FA9  E8 C2 8C 29 00            CALL 0x006aac70
00411FAE  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00411FB1  53                        PUSH EBX
00411FB2  50                        PUSH EAX
00411FB3  E8 38 FD FF FF            CALL 0x00411cf0
00411FB8  8B D8                     MOV EBX,EAX
00411FBA  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
00411FBD  8B CB                     MOV ECX,EBX
00411FBF  0F AF CE                  IMUL ECX,ESI
00411FC2  81 C1 B4 00 00 00         ADD ECX,0xb4
00411FC8  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
00411FCD  F7 E9                     IMUL ECX
00411FCF  03 D1                     ADD EDX,ECX
00411FD1  C1 FA 08                  SAR EDX,0x8
00411FD4  8B CA                     MOV ECX,EDX
00411FD6  C1 E9 1F                  SHR ECX,0x1f
00411FD9  03 D1                     ADD EDX,ECX
00411FDB  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
00411FDE  3B D3                     CMP EDX,EBX
00411FE0  75 07                     JNZ 0x00411fe9
00411FE2  33 FF                     XOR EDI,EDI
00411FE4  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
00411FE7  EB 02                     JMP 0x00411feb
LAB_00411fe9:
00411FE9  33 FF                     XOR EDI,EDI
LAB_00411feb:
00411FEB  8B C3                     MOV EAX,EBX
00411FED  99                        CDQ
00411FEE  2B C2                     SUB EAX,EDX
00411FF0  8B C8                     MOV ECX,EAX
00411FF2  D1 F9                     SAR ECX,0x1
00411FF4  41                        INC ECX
00411FF5  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00411FF8  8B C1                     MOV EAX,ECX
00411FFA  99                        CDQ
00411FFB  83 E2 07                  AND EDX,0x7
00411FFE  03 C2                     ADD EAX,EDX
00412000  C1 F8 03                  SAR EAX,0x3
00412003  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00412006  75 07                     JNZ 0x0041200f
00412008  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
LAB_0041200f:
0041200F  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
00412012  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00412015  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
00412018  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
LAB_0041201e:
0041201E  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
00412021  3B 4D D8                  CMP ECX,dword ptr [EBP + -0x28]
00412024  0F 8E FB 00 00 00         JLE 0x00412125
0041202A  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0041202D  85 C0                     TEST EAX,EAX
0041202F  0F 84 F0 00 00 00         JZ 0x00412125
00412035  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00412038  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
0041203B  7D 48                     JGE 0x00412085
0041203D  03 C0                     ADD EAX,EAX
0041203F  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00412042  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00412049  83 C0 03                  ADD EAX,0x3
0041204C  24 FC                     AND AL,0xfc
0041204E  E8 ED B9 31 00            CALL 0x0072da40
00412053  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00412056  8B C4                     MOV EAX,ESP
00412058  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0041205B  EB 21                     JMP 0x0041207e
LAB_0041207e:
0041207E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_00412085:
00412085  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00412088  8B CA                     MOV ECX,EDX
0041208A  33 C0                     XOR EAX,EAX
0041208C  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0041208F  8B F1                     MOV ESI,ECX
00412091  C1 E9 02                  SHR ECX,0x2
00412094  F3 AB                     STOSD.REP ES:EDI
00412096  8B CE                     MOV ECX,ESI
00412098  83 E1 03                  AND ECX,0x3
0041209B  F3 AA                     STOSB.REP ES:EDI
0041209D  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
004120A0  33 FF                     XOR EDI,EDI
004120A2  85 D2                     TEST EDX,EDX
004120A4  0F 8E ED 00 00 00         JLE 0x00412197
004120AA  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
LAB_004120b0:
004120B0  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004120B3  0F BE 04 B1               MOVSX EAX,byte ptr [ECX + ESI*0x4]
004120B7  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
004120BA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004120BD  0F BE 4C B1 01            MOVSX ECX,byte ptr [ECX + ESI*0x4 + 0x1]
004120C2  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
004120C5  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004120C8  85 C0                     TEST EAX,EAX
004120CA  7C 48                     JL 0x00412114
004120CC  3B C3                     CMP EAX,EBX
004120CE  7D 44                     JGE 0x00412114
004120D0  85 C9                     TEST ECX,ECX
004120D2  7C 40                     JL 0x00412114
004120D4  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
004120DA  7D 38                     JGE 0x00412114
004120DC  0F AF D9                  IMUL EBX,ECX
004120DF  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004120E2  0F AF 4D C8               IMUL ECX,dword ptr [EBP + -0x38]
004120E6  03 C3                     ADD EAX,EBX
004120E8  03 C8                     ADD ECX,EAX
004120EA  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
004120ED  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
004120F0  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004120F6  80 F2 07                  XOR DL,0x7
004120F9  33 C0                     XOR EAX,EAX
004120FB  0F A3 11                  BT [ECX],EDX
004120FE  D0 D0                     RCL AL,0x1
00412100  85 C0                     TEST EAX,EAX
00412102  74 0A                     JZ 0x0041210e
00412104  FF 45 98                  INC dword ptr [EBP + -0x68]
00412107  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0041210A  C6 04 17 01               MOV byte ptr [EDI + EDX*0x1],0x1
LAB_0041210e:
0041210E  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
LAB_00412114:
00412114  46                        INC ESI
00412115  3B 75 D0                  CMP ESI,dword ptr [EBP + -0x30]
00412118  7C 02                     JL 0x0041211c
0041211A  33 F6                     XOR ESI,ESI
LAB_0041211c:
0041211C  47                        INC EDI
0041211D  3B 7D E0                  CMP EDI,dword ptr [EBP + -0x20]
00412120  7C 8E                     JL 0x004120b0
00412122  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
LAB_00412125:
00412125  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00412128  39 45 E0                  CMP dword ptr [EBP + -0x20],EAX
0041212B  0F 8E 34 02 00 00         JLE 0x00412365
00412131  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00412134  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
00412137  8B C8                     MOV ECX,EAX
00412139  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0041213C  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
0041213F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00412142  3B C2                     CMP EAX,EDX
00412144  0F 8F 23 01 00 00         JG 0x0041226d
0041214A  85 C0                     TEST EAX,EAX
0041214C  0F 8E 13 02 00 00         JLE 0x00412365
00412152  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
00412155  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
00412158  C1 E7 02                  SHL EDI,0x2
0041215B  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
LAB_00412161:
00412161  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00412164  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00412167  0F BE 04 91               MOVSX EAX,byte ptr [ECX + EDX*0x4]
0041216B  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
0041216E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00412171  0F BE 4C 91 01            MOVSX ECX,byte ptr [ECX + EDX*0x4 + 0x1]
00412176  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
00412179  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
0041217C  85 C0                     TEST EAX,EAX
0041217E  7C 22                     JL 0x004121a2
00412180  3B C3                     CMP EAX,EBX
00412182  7D 1E                     JGE 0x004121a2
00412184  85 C9                     TEST ECX,ECX
00412186  7C 1A                     JL 0x004121a2
00412188  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
0041218E  7D 12                     JGE 0x004121a2
00412190  BA 01 00 00 00            MOV EDX,0x1
00412195  EB 0D                     JMP 0x004121a4
LAB_00412197:
00412197  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
0041219A  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
004121A0  EB 83                     JMP 0x00412125
LAB_004121a2:
004121A2  33 D2                     XOR EDX,EDX
LAB_004121a4:
004121A4  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
004121A7  85 D2                     TEST EDX,EDX
004121A9  74 28                     JZ 0x004121d3
004121AB  0F AF D9                  IMUL EBX,ECX
004121AE  0F AF 75 C8               IMUL ESI,dword ptr [EBP + -0x38]
004121B2  03 C3                     ADD EAX,EBX
004121B4  03 F0                     ADD ESI,EAX
004121B6  89 75 80                  MOV dword ptr [EBP + -0x80],ESI
004121B9  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
004121BC  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004121C2  80 F2 07                  XOR DL,0x7
004121C5  33 C0                     XOR EAX,EAX
004121C7  0F A3 11                  BT [ECX],EDX
004121CA  D0 D0                     RCL AL,0x1
004121CC  85 C0                     TEST EAX,EAX
004121CE  75 70                     JNZ 0x00412240
004121D0  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
LAB_004121d3:
004121D3  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
004121D9  89 04 0F                  MOV dword ptr [EDI + ECX*0x1],EAX
004121DC  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004121E2  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004121E5  89 44 17 04               MOV dword ptr [EDI + EDX*0x1 + 0x4],EAX
004121E9  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004121EC  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004121F2  89 4C 17 08               MOV dword ptr [EDI + EDX*0x1 + 0x8],ECX
004121F6  FF 45 D4                  INC dword ptr [EBP + -0x2c]
004121F9  83 C7 14                  ADD EDI,0x14
004121FC  FF 4D D8                  DEC dword ptr [EBP + -0x28]
004121FF  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00412202  85 C0                     TEST EAX,EAX
00412204  74 3A                     JZ 0x00412240
00412206  A1 2C 4D 7F 00            MOV EAX,[0x007f4d2c]
0041220B  0F AF 45 A8               IMUL EAX,dword ptr [EBP + -0x58]
0041220F  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00412212  0F AF 4D C8               IMUL ECX,dword ptr [EBP + -0x38]
00412216  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00412219  03 D0                     ADD EDX,EAX
0041221B  03 CA                     ADD ECX,EDX
0041221D  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
00412223  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
00412228  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
0041222E  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00412234  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
0041223A  80 F2 07                  XOR DL,0x7
0041223D  0F AB 11                  BTS [ECX],EDX
LAB_00412240:
00412240  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00412243  40                        INC EAX
00412244  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00412247  3B 45 D0                  CMP EAX,dword ptr [EBP + -0x30]
0041224A  7C 07                     JL 0x00412253
0041224C  C7 45 C0 00 00 00 00      MOV dword ptr [EBP + -0x40],0x0
LAB_00412253:
00412253  FF 8D 58 FF FF FF         DEC dword ptr [EBP + 0xffffff58]
00412259  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
0041225C  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
00412262  0F 85 F9 FE FF FF         JNZ 0x00412161
00412268  E9 F8 00 00 00            JMP 0x00412365
LAB_0041226d:
0041226D  85 C9                     TEST ECX,ECX
0041226F  0F 8E 36 02 00 00         JLE 0x004124ab
00412275  6A 00                     PUSH 0x0
00412277  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0041227A  51                        PUSH ECX
0041227B  50                        PUSH EAX
0041227C  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0041227F  52                        PUSH EDX
00412280  E8 4B D2 FF FF            CALL 0x0040f4d0
00412285  85 FF                     TEST EDI,EDI
00412287  0F 8E 17 03 00 00         JLE 0x004125a4
0041228D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00412290  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
00412293  C1 E6 02                  SHL ESI,0x2
00412296  89 BD 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDI
0041229C  03 C7                     ADD EAX,EDI
0041229E  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004122A1  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
LAB_004122a4:
004122A4  6A 00                     PUSH 0x0
004122A6  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004122A9  50                        PUSH EAX
004122AA  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004122AD  51                        PUSH ECX
004122AE  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004122B1  52                        PUSH EDX
004122B2  E8 89 D5 FF FF            CALL 0x0040f840
004122B7  03 45 C4                  ADD EAX,dword ptr [EBP + -0x3c]
004122BA  99                        CDQ
004122BB  F7 7D D0                  IDIV dword ptr [EBP + -0x30]
004122BE  0F BE 04 97               MOVSX EAX,byte ptr [EDI + EDX*0x4]
004122C2  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
004122C5  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004122C8  0F BE 4C 97 01            MOVSX ECX,byte ptr [EDI + EDX*0x4 + 0x1]
004122CD  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
004122D0  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004122D3  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004122D9  89 04 16                  MOV dword ptr [ESI + EDX*0x1],EAX
004122DC  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
004122E1  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004122E4  89 4C 06 04               MOV dword ptr [ESI + EAX*0x1 + 0x4],ECX
004122E8  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004122EB  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
004122F0  89 54 06 08               MOV dword ptr [ESI + EAX*0x1 + 0x8],EDX
004122F4  83 C6 14                  ADD ESI,0x14
004122F7  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004122FA  85 C0                     TEST EAX,EAX
004122FC  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
00412302  7C 4B                     JL 0x0041234f
00412304  3B C3                     CMP EAX,EBX
00412306  7D 47                     JGE 0x0041234f
00412308  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0041230B  85 C9                     TEST ECX,ECX
0041230D  7C 40                     JL 0x0041234f
0041230F  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
00412315  7D 38                     JGE 0x0041234f
00412317  0F AF D9                  IMUL EBX,ECX
0041231A  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0041231D  0F AF 4D C8               IMUL ECX,dword ptr [EBP + -0x38]
00412321  03 C3                     ADD EAX,EBX
00412323  03 C8                     ADD ECX,EAX
00412325  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
0041232B  8B 15 FC 4C 7F 00         MOV EDX,dword ptr [0x007f4cfc]
00412331  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
00412337  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0041233D  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
00412343  80 F2 07                  XOR DL,0x7
00412346  0F AB 11                  BTS [ECX],EDX
00412349  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
LAB_0041234f:
0041234F  FF 8D 54 FF FF FF         DEC dword ptr [EBP + 0xffffff54]
00412355  0F 85 49 FF FF FF         JNZ 0x004122a4
LAB_0041235b:
0041235B  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
LAB_0041235e:
0041235E  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
LAB_00412365:
00412365  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00412368  85 C0                     TEST EAX,EAX
0041236A  0F 8F 8B 02 00 00         JG 0x004125fb
00412370  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
00412377  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0041237C  85 C0                     TEST EAX,EAX
0041237E  0F 8E 35 02 00 00         JLE 0x004125b9
00412384  33 F6                     XOR ESI,ESI
00412386  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
0041238C  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
LAB_0041238f:
0041238F  8B 04 0E                  MOV EAX,dword ptr [ESI + ECX*0x1]
00412392  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00412395  8B 54 0E 04               MOV EDX,dword ptr [ESI + ECX*0x1 + 0x4]
00412399  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0041239C  8B 4C 0E 08               MOV ECX,dword ptr [ESI + ECX*0x1 + 0x8]
004123A0  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
004123A3  85 C0                     TEST EAX,EAX
004123A5  7C 31                     JL 0x004123d8
004123A7  3B C3                     CMP EAX,EBX
004123A9  7D 2D                     JGE 0x004123d8
004123AB  85 D2                     TEST EDX,EDX
004123AD  7C 29                     JL 0x004123d8
004123AF  3B 15 30 4D 7F 00         CMP EDX,dword ptr [0x007f4d30]
004123B5  7D 21                     JGE 0x004123d8
004123B7  8B FB                     MOV EDI,EBX
004123B9  0F AF FA                  IMUL EDI,EDX
004123BC  8B D7                     MOV EDX,EDI
004123BE  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
004123C1  0F AF CF                  IMUL ECX,EDI
004123C4  03 C2                     ADD EAX,EDX
004123C6  03 C8                     ADD ECX,EAX
004123C8  A1 F0 4C 7F 00            MOV EAX,[0x007f4cf0]
004123CD  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
004123D2  0F 84 B2 00 00 00         JZ 0x0041248a
LAB_004123d8:
004123D8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004123DB  C1 F9 02                  SAR ECX,0x2
004123DE  51                        PUSH ECX
004123DF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004123E2  C1 FA 02                  SAR EDX,0x2
004123E5  52                        PUSH EDX
004123E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004123E9  C1 F8 02                  SAR EAX,0x2
004123EC  50                        PUSH EAX
004123ED  8B 0D 1C 4D 7F 00         MOV ECX,dword ptr [0x007f4d1c]
004123F3  C1 F9 02                  SAR ECX,0x2
004123F6  51                        PUSH ECX
004123F7  8B 15 10 4D 7F 00         MOV EDX,dword ptr [0x007f4d10]
004123FD  C1 FA 02                  SAR EDX,0x2
00412400  52                        PUSH EDX
00412401  A1 0C 4D 7F 00            MOV EAX,[0x007f4d0c]
00412406  C1 F8 02                  SAR EAX,0x2
00412409  50                        PUSH EAX
0041240A  8D 4D A0                  LEA ECX,[EBP + -0x60]
0041240D  51                        PUSH ECX
0041240E  8D 55 A8                  LEA EDX,[EBP + -0x58]
00412411  52                        PUSH EDX
00412412  8D 45 B0                  LEA EAX,[EBP + -0x50]
00412415  50                        PUSH EAX
00412416  E8 55 CE FF FF            CALL 0x0040f270
0041241B  85 C0                     TEST EAX,EAX
0041241D  0F 85 8F 01 00 00         JNZ 0x004125b2
00412423  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
00412429  0F AF 4D A8               IMUL ECX,dword ptr [EBP + -0x58]
0041242D  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00412430  0F AF D7                  IMUL EDX,EDI
00412433  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00412436  03 C1                     ADD EAX,ECX
00412438  03 D0                     ADD EDX,EAX
0041243A  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
00412440  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
00412446  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0041244C  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00412452  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00412458  80 F2 07                  XOR DL,0x7
0041245B  0F AB 11                  BTS [ECX],EDX
0041245E  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00412464  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00412467  89 04 16                  MOV dword ptr [ESI + EDX*0x1],EAX
0041246A  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00412470  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00412473  89 54 0E 04               MOV dword ptr [ESI + ECX*0x1 + 0x4],EDX
00412477  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0041247A  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00412480  89 44 0E 08               MOV dword ptr [ESI + ECX*0x1 + 0x8],EAX
00412484  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
LAB_0041248a:
0041248A  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00412490  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00412493  40                        INC EAX
00412494  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00412497  83 C6 14                  ADD ESI,0x14
0041249A  3B 05 20 4D 7F 00         CMP EAX,dword ptr [0x007f4d20]
004124A0  0F 8C E9 FE FF FF         JL 0x0041238f
004124A6  E9 0E 01 00 00            JMP 0x004125b9
LAB_004124ab:
004124AB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004124AE  40                        INC EAX
004124AF  C1 E0 10                  SHL EAX,0x10
004124B2  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004124B5  8D 79 01                  LEA EDI,[ECX + 0x1]
004124B8  99                        CDQ
004124B9  F7 FF                     IDIV EDI
004124BB  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
004124BE  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
004124C1  C1 E7 10                  SHL EDI,0x10
004124C4  81 EF 00 00 01 00         SUB EDI,0x10000
004124CA  85 C9                     TEST ECX,ECX
004124CC  0F 8E 8C FE FF FF         JLE 0x0041235e
004124D2  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004124D5  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004124D8  C1 E6 02                  SHL ESI,0x2
004124DB  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
004124E1  03 C1                     ADD EAX,ECX
004124E3  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_004124e6:
004124E6  03 7D 90                  ADD EDI,dword ptr [EBP + -0x70]
004124E9  8B CF                     MOV ECX,EDI
004124EB  C1 F9 10                  SAR ECX,0x10
004124EE  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004124F1  3B C8                     CMP ECX,EAX
004124F3  7C 0A                     JL 0x004124ff
004124F5  C1 E0 10                  SHL EAX,0x10
004124F8  2B F8                     SUB EDI,EAX
004124FA  8B CF                     MOV ECX,EDI
004124FC  C1 F9 10                  SAR ECX,0x10
LAB_004124ff:
004124FF  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00412502  0F BE 14 88               MOVSX EDX,byte ptr [EAX + ECX*0x4]
00412506  03 55 08                  ADD EDX,dword ptr [EBP + 0x8]
00412509  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0041250C  0F BE 4C 88 01            MOVSX ECX,byte ptr [EAX + ECX*0x4 + 0x1]
00412511  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
00412514  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00412517  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
0041251C  89 14 06                  MOV dword ptr [ESI + EAX*0x1],EDX
0041251F  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00412525  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00412528  89 54 0E 04               MOV dword ptr [ESI + ECX*0x1 + 0x4],EDX
0041252C  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0041252F  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00412535  89 44 0E 08               MOV dword ptr [ESI + ECX*0x1 + 0x8],EAX
00412539  83 C6 14                  ADD ESI,0x14
0041253C  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0041253F  85 C9                     TEST ECX,ECX
00412541  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
00412547  7C 4A                     JL 0x00412593
00412549  3B CB                     CMP ECX,EBX
0041254B  7D 46                     JGE 0x00412593
0041254D  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00412550  85 C0                     TEST EAX,EAX
00412552  7C 3F                     JL 0x00412593
00412554  3B 05 30 4D 7F 00         CMP EAX,dword ptr [0x007f4d30]
0041255A  7D 37                     JGE 0x00412593
0041255C  0F AF D8                  IMUL EBX,EAX
0041255F  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00412562  0F AF 55 C8               IMUL EDX,dword ptr [EBP + -0x38]
00412566  03 CB                     ADD ECX,EBX
00412568  03 D1                     ADD EDX,ECX
0041256A  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
00412570  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
00412575  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
0041257B  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
00412581  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00412587  80 F2 07                  XOR DL,0x7
0041258A  0F AB 11                  BTS [ECX],EDX
0041258D  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
LAB_00412593:
00412593  FF 8D 50 FF FF FF         DEC dword ptr [EBP + 0xffffff50]
00412599  0F 85 47 FF FF FF         JNZ 0x004124e6
0041259F  E9 B7 FD FF FF            JMP 0x0041235b
LAB_004125a4:
004125A4  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
004125A7  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
004125AD  E9 AC FD FF FF            JMP 0x0041235e
LAB_004125b2:
004125B2  BE FC FF FF FF            MOV ESI,0xfffffffc
004125B7  EB 08                     JMP 0x004125c1
LAB_004125b9:
004125B9  E8 D2 C5 FF FF            CALL 0x0040eb90
004125BE  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
LAB_004125c1:
004125C1  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004125C4  52                        PUSH EDX
004125C5  E8 C6 38 29 00            CALL 0x006a5e90
004125CA  85 F6                     TEST ESI,ESI
004125CC  74 26                     JZ 0x004125f4
004125CE  83 FE FC                  CMP ESI,-0x4
004125D1  0F 84 00 01 00 00         JZ 0x004126d7
004125D7  68 3A 0C 00 00            PUSH 0xc3a
004125DC  68 A8 4C 7A 00            PUSH 0x7a4ca8
004125E1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004125E6  50                        PUSH EAX
004125E7  56                        PUSH ESI
004125E8  E8 53 38 29 00            CALL 0x006a5e40
004125ED  8B C6                     MOV EAX,ESI
004125EF  E9 E8 00 00 00            JMP 0x004126dc
LAB_004125f4:
004125F4  33 C0                     XOR EAX,EAX
004125F6  E9 E1 00 00 00            JMP 0x004126dc
LAB_004125fb:
004125FB  8B 7D 9C                  MOV EDI,dword ptr [EBP + -0x64]
004125FE  C1 E7 05                  SHL EDI,0x5
00412601  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_00412604:
00412604  41                        INC ECX
00412605  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00412608  83 F9 09                  CMP ECX,0x9
0041260B  7C 76                     JL 0x00412683
0041260D  33 DB                     XOR EBX,EBX
0041260F  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00412612  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00412615  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00412618  8B 75 9C                  MOV ESI,dword ptr [EBP + -0x64]
0041261B  46                        INC ESI
0041261C  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
0041261F  83 C7 20                  ADD EDI,0x20
00412622  57                        PUSH EDI
00412623  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00412626  52                        PUSH EDX
00412627  E8 24 A9 29 00            CALL 0x006acf50
0041262C  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0041262F  56                        PUSH ESI
00412630  50                        PUSH EAX
00412631  E8 BA F6 FF FF            CALL 0x00411cf0
00412636  8B F0                     MOV ESI,EAX
00412638  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
0041263B  8B CE                     MOV ECX,ESI
0041263D  0F AF 4D 1C               IMUL ECX,dword ptr [EBP + 0x1c]
00412641  81 C1 B4 00 00 00         ADD ECX,0xb4
00412647  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0041264C  F7 E9                     IMUL ECX
0041264E  03 D1                     ADD EDX,ECX
00412650  C1 FA 08                  SAR EDX,0x8
00412653  8B C2                     MOV EAX,EDX
00412655  C1 E8 1F                  SHR EAX,0x1f
00412658  03 D0                     ADD EDX,EAX
0041265A  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0041265D  3B D6                     CMP EDX,ESI
0041265F  75 03                     JNZ 0x00412664
00412661  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
LAB_00412664:
00412664  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00412667  99                        CDQ
00412668  2B C2                     SUB EAX,EDX
0041266A  D1 F8                     SAR EAX,0x1
0041266C  40                        INC EAX
0041266D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00412670  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
00412677  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
0041267A  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
00412680  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_00412683:
00412683  8D 41 FF                  LEA EAX,[ECX + -0x1]
00412686  83 F8 07                  CMP EAX,0x7
00412689  77 2E                     JA 0x004126b9
switchD_0041268b::switchD:
0041268B  FF 24 85 F8 26 41 00      JMP dword ptr [EAX*0x4 + 0x4126f8]
switchD_0041268b::caseD_1:
00412692  46                        INC ESI
00412693  EB 21                     JMP 0x004126b6
switchD_0041268b::caseD_2:
00412695  83 EE 02                  SUB ESI,0x2
00412698  EB 1C                     JMP 0x004126b6
switchD_0041268b::caseD_3:
0041269A  83 C6 03                  ADD ESI,0x3
0041269D  EB 17                     JMP 0x004126b6
switchD_0041268b::caseD_4:
0041269F  83 EE 04                  SUB ESI,0x4
004126A2  EB 12                     JMP 0x004126b6
switchD_0041268b::caseD_5:
004126A4  83 C6 05                  ADD ESI,0x5
004126A7  EB 0D                     JMP 0x004126b6
switchD_0041268b::caseD_6:
004126A9  83 EE 06                  SUB ESI,0x6
004126AC  EB 08                     JMP 0x004126b6
switchD_0041268b::caseD_7:
004126AE  83 C6 07                  ADD ESI,0x7
004126B1  EB 03                     JMP 0x004126b6
switchD_0041268b::caseD_8:
004126B3  83 EE 08                  SUB ESI,0x8
LAB_004126b6:
004126B6  89 75 A0                  MOV dword ptr [EBP + -0x60],ESI
switchD_0041268b::default:
004126B9  85 F6                     TEST ESI,ESI
004126BB  0F 8C 43 FF FF FF         JL 0x00412604
004126C1  3B 35 34 4D 7F 00         CMP ESI,dword ptr [0x007f4d34]
004126C7  0F 8D 37 FF FF FF         JGE 0x00412604
004126CD  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004126D0  33 FF                     XOR EDI,EDI
004126D2  E9 47 F9 FF FF            JMP 0x0041201e
LAB_004126d7:
004126D7  B8 FC FF FF FF            MOV EAX,0xfffffffc
LAB_004126dc:
004126DC  8D A5 40 FF FF FF         LEA ESP,[EBP + 0xffffff40]
004126E2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004126E5  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
004126EC  5F                        POP EDI
004126ED  5E                        POP ESI
004126EE  5B                        POP EBX
004126EF  8B E5                     MOV ESP,EBP
004126F1  5D                        POP EBP
004126F2  C2 1C 00                  RET 0x1c
