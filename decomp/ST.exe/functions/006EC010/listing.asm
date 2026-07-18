FUN_006ec010:
006EC010  55                        PUSH EBP
006EC011  8B EC                     MOV EBP,ESP
006EC013  6A FF                     PUSH -0x1
006EC015  68 E8 E1 79 00            PUSH 0x79e1e8
006EC01A  68 64 D9 72 00            PUSH 0x72d964
006EC01F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006EC025  50                        PUSH EAX
006EC026  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006EC02D  81 EC C0 00 00 00         SUB ESP,0xc0
006EC033  53                        PUSH EBX
006EC034  56                        PUSH ESI
006EC035  57                        PUSH EDI
006EC036  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006EC039  8B D9                     MOV EBX,ECX
006EC03B  89 9D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EBX
006EC041  33 FF                     XOR EDI,EDI
006EC043  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
006EC046  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
006EC049  89 7D A0                  MOV dword ptr [EBP + -0x60],EDI
006EC04C  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
006EC04F  8B 93 28 03 00 00         MOV EDX,dword ptr [EBX + 0x328]
006EC055  8B 83 24 03 00 00         MOV EAX,dword ptr [EBX + 0x324]
006EC05B  8B CA                     MOV ECX,EDX
006EC05D  2B 8B 20 03 00 00         SUB ECX,dword ptr [EBX + 0x320]
006EC063  2B C8                     SUB ECX,EAX
006EC065  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
006EC06B  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
006EC06E  2B 43 30                  SUB EAX,dword ptr [EBX + 0x30]
006EC071  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006EC074  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
006EC077  2B 43 34                  SUB EAX,dword ptr [EBX + 0x34]
006EC07A  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006EC07D  39 BB D8 02 00 00         CMP dword ptr [EBX + 0x2d8],EDI
006EC083  0F 85 EC 02 00 00         JNZ 0x006ec375
006EC089  4A                        DEC EDX
006EC08A  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
006EC08D  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EC090  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
006EC093  8B B3 30 03 00 00         MOV ESI,dword ptr [EBX + 0x330]
006EC099  8D 04 C6                  LEA EAX,[ESI + EAX*0x8]
006EC09C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006EC09F  8B B3 24 03 00 00         MOV ESI,dword ptr [EBX + 0x324]
006EC0A5  03 F1                     ADD ESI,ECX
006EC0A7  3B D6                     CMP EDX,ESI
006EC0A9  0F 8C 8A 00 00 00         JL 0x006ec139
006EC0AF  EB 03                     JMP 0x006ec0b4
LAB_006ec0b1:
006EC0B1  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006ec0b4:
006EC0B4  8B 70 64                  MOV ESI,dword ptr [EAX + 0x64]
006EC0B7  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
006EC0BA  C1 E0 04                  SHL EAX,0x4
006EC0BD  03 86 EC 00 00 00         ADD EAX,dword ptr [ESI + 0xec]
006EC0C3  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006EC0C6  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EC0C9  8B 00                     MOV EAX,dword ptr [EAX]
006EC0CB  83 E0 07                  AND EAX,0x7
006EC0CE  3C 01                     CMP AL,0x1
006EC0D0  75 4F                     JNZ 0x006ec121
006EC0D2  33 F6                     XOR ESI,ESI
006EC0D4  8B 83 50 03 00 00         MOV EAX,dword ptr [EBX + 0x350]
006EC0DA  39 30                     CMP dword ptr [EAX],ESI
006EC0DC  7E 43                     JLE 0x006ec121
006EC0DE  89 B5 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ESI
LAB_006ec0e4:
006EC0E4  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
006EC0EA  8D 54 01 08               LEA EDX,[ECX + EAX*0x1 + 0x8]
006EC0EE  52                        PUSH EDX
006EC0EF  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006EC0F2  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006EC0F5  E8 66 43 FC FF            CALL 0x006b0460
006EC0FA  85 C0                     TEST EAX,EAX
006EC0FC  75 14                     JNZ 0x006ec112
006EC0FE  46                        INC ESI
006EC0FF  83 85 60 FF FF FF 10      ADD dword ptr [EBP + 0xffffff60],0x10
006EC106  8B 83 50 03 00 00         MOV EAX,dword ptr [EBX + 0x350]
006EC10C  3B 30                     CMP ESI,dword ptr [EAX]
006EC10E  7C D4                     JL 0x006ec0e4
006EC110  EB 06                     JMP 0x006ec118
LAB_006ec112:
006EC112  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EC115  83 08 02                  OR dword ptr [EAX],0x2
LAB_006ec118:
006EC118  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
006EC11E  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
LAB_006ec121:
006EC121  4A                        DEC EDX
006EC122  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
006EC125  83 6D E4 68               SUB dword ptr [EBP + -0x1c],0x68
006EC129  8B 83 24 03 00 00         MOV EAX,dword ptr [EBX + 0x324]
006EC12F  03 C1                     ADD EAX,ECX
006EC131  3B D0                     CMP EDX,EAX
006EC133  0F 8D 78 FF FF FF         JGE 0x006ec0b1
LAB_006ec139:
006EC139  8B 93 24 03 00 00         MOV EDX,dword ptr [EBX + 0x324]
006EC13F  8D 44 0A FF               LEA EAX,[EDX + ECX*0x1 + -0x1]
006EC143  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EC146  8D 14 90                  LEA EDX,[EAX + EDX*0x4]
006EC149  8B B3 30 03 00 00         MOV ESI,dword ptr [EBX + 0x330]
006EC14F  8D 14 D6                  LEA EDX,[ESI + EDX*0x8]
006EC152  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006EC155  3B C1                     CMP EAX,ECX
006EC157  0F 8C 2D 01 00 00         JL 0x006ec28a
006EC15D  8B CA                     MOV ECX,EDX
006EC15F  8D 71 18                  LEA ESI,[ECX + 0x18]
006EC162  2B 85 74 FF FF FF         SUB EAX,dword ptr [EBP + 0xffffff74]
006EC168  40                        INC EAX
006EC169  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
LAB_006ec16f:
006EC16F  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
006EC172  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006EC175  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EC178  8B 00                     MOV EAX,dword ptr [EAX]
006EC17A  8B C8                     MOV ECX,EAX
006EC17C  83 E1 05                  AND ECX,0x5
006EC17F  80 F9 01                  CMP CL,0x1
006EC182  0F 85 EC 00 00 00         JNZ 0x006ec274
006EC188  A8 80                     TEST AL,0x80
006EC18A  74 09                     JZ 0x006ec195
006EC18C  83 3E 04                  CMP dword ptr [ESI],0x4
006EC18F  0F 8F DF 00 00 00         JG 0x006ec274
LAB_006ec195:
006EC195  C7 85 78 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x0
006EC19F  8B 83 50 03 00 00         MOV EAX,dword ptr [EBX + 0x350]
006EC1A5  83 38 00                  CMP dword ptr [EAX],0x0
006EC1A8  0F 8E C6 00 00 00         JLE 0x006ec274
006EC1AE  C7 85 58 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff58],0x0
LAB_006ec1b8:
006EC1B8  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
006EC1BE  8D 44 02 08               LEA EAX,[EDX + EAX*0x1 + 0x8]
006EC1C2  50                        PUSH EAX
006EC1C3  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006EC1C6  8D 51 64                  LEA EDX,[ECX + 0x64]
006EC1C9  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006EC1CC  E8 8F 42 FC FF            CALL 0x006b0460
006EC1D1  85 C0                     TEST EAX,EAX
006EC1D3  74 38                     JZ 0x006ec20d
006EC1D5  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EC1D8  8B 08                     MOV ECX,dword ptr [EAX]
006EC1DA  80 C9 82                  OR CL,0x82
006EC1DD  89 08                     MOV dword ptr [EAX],ECX
006EC1DF  83 3E 04                  CMP dword ptr [ESI],0x4
006EC1E2  7F 29                     JG 0x006ec20d
006EC1E4  6A 00                     PUSH 0x0
006EC1E6  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006EC1E9  8B 50 70                  MOV EDX,dword ptr [EAX + 0x70]
006EC1EC  52                        PUSH EDX
006EC1ED  8B 40 6C                  MOV EAX,dword ptr [EAX + 0x6c]
006EC1F0  50                        PUSH EAX
006EC1F1  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006EC1F4  51                        PUSH ECX
006EC1F5  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006EC1F8  52                        PUSH EDX
006EC1F9  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006EC1FC  50                        PUSH EAX
006EC1FD  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006EC200  51                        PUSH ECX
006EC201  6A 04                     PUSH 0x4
006EC203  56                        PUSH ESI
006EC204  E8 C7 58 FE FF            CALL 0x006d1ad0
006EC209  85 C0                     TEST EAX,EAX
006EC20B  7C 20                     JL 0x006ec22d
LAB_006ec20d:
006EC20D  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006EC213  41                        INC ECX
006EC214  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
006EC21A  83 85 58 FF FF FF 10      ADD dword ptr [EBP + 0xffffff58],0x10
006EC221  8B 83 50 03 00 00         MOV EAX,dword ptr [EBX + 0x350]
006EC227  3B 08                     CMP ECX,dword ptr [EAX]
006EC229  7C 8D                     JL 0x006ec1b8
006EC22B  EB 47                     JMP 0x006ec274
LAB_006ec22d:
006EC22D  F6 46 EC 40               TEST byte ptr [ESI + -0x14],0x40
006EC231  74 41                     JZ 0x006ec274
006EC233  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
006EC236  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
006EC239  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EC23C  C1 E0 03                  SHL EAX,0x3
006EC23F  2B C1                     SUB EAX,ECX
006EC241  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EC244  8B 8B 1C 03 00 00         MOV ECX,dword ptr [EBX + 0x31c]
006EC24A  8B 7C 81 0C               MOV EDI,dword ptr [ECX + EAX*0x4 + 0xc]
006EC24E  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
006EC251  8D 04 97                  LEA EAX,[EDI + EDX*0x4]
006EC254  C1 E0 03                  SHL EAX,0x3
006EC257  8B 8B 30 03 00 00         MOV ECX,dword ptr [EBX + 0x330]
006EC25D  C7 44 01 18 05 00 00 00   MOV dword ptr [ECX + EAX*0x1 + 0x18],0x5
006EC265  8B 93 30 03 00 00         MOV EDX,dword ptr [EBX + 0x330]
006EC26B  03 C2                     ADD EAX,EDX
006EC26D  8B 08                     MOV ECX,dword ptr [EAX]
006EC26F  80 C9 82                  OR CL,0x82
006EC272  89 08                     MOV dword ptr [EAX],ECX
LAB_006ec274:
006EC274  83 6D E4 68               SUB dword ptr [EBP + -0x1c],0x68
006EC278  83 EE 68                  SUB ESI,0x68
006EC27B  FF 8D 5C FF FF FF         DEC dword ptr [EBP + 0xffffff5c]
006EC281  0F 85 E8 FE FF FF         JNZ 0x006ec16f
006EC287  89 7D A0                  MOV dword ptr [EBP + -0x60],EDI
LAB_006ec28a:
006EC28A  8B 83 50 03 00 00         MOV EAX,dword ptr [EBX + 0x350]
006EC290  8B 8B 54 03 00 00         MOV ECX,dword ptr [EBX + 0x354]
006EC296  8B 10                     MOV EDX,dword ptr [EAX]
006EC298  89 11                     MOV dword ptr [ECX],EDX
006EC29A  8B 83 50 03 00 00         MOV EAX,dword ptr [EBX + 0x350]
006EC2A0  8B 8B 54 03 00 00         MOV ECX,dword ptr [EBX + 0x354]
006EC2A6  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006EC2A9  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006EC2AC  8B 93 50 03 00 00         MOV EDX,dword ptr [EBX + 0x350]
006EC2B2  8B 02                     MOV EAX,dword ptr [EDX]
006EC2B4  85 C0                     TEST EAX,EAX
006EC2B6  7E 20                     JLE 0x006ec2d8
006EC2B8  C1 E0 04                  SHL EAX,0x4
006EC2BB  8D 72 08                  LEA ESI,[EDX + 0x8]
006EC2BE  8B BB 54 03 00 00         MOV EDI,dword ptr [EBX + 0x354]
006EC2C4  83 C7 08                  ADD EDI,0x8
006EC2C7  8B C8                     MOV ECX,EAX
006EC2C9  C1 E9 02                  SHR ECX,0x2
006EC2CC  F3 A5                     MOVSD.REP ES:EDI,ESI
006EC2CE  8B C8                     MOV ECX,EAX
006EC2D0  83 E1 03                  AND ECX,0x3
006EC2D3  F3 A4                     MOVSB.REP ES:EDI,ESI
006EC2D5  8B 7D A0                  MOV EDI,dword ptr [EBP + -0x60]
LAB_006ec2d8:
006EC2D8  8B B3 28 03 00 00         MOV ESI,dword ptr [EBX + 0x328]
006EC2DE  4E                        DEC ESI
006EC2DF  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
006EC2E2  8D 14 8E                  LEA EDX,[ESI + ECX*0x4]
006EC2E5  8B 83 30 03 00 00         MOV EAX,dword ptr [EBX + 0x330]
006EC2EB  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
006EC2EE  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006EC2F1  8B 8B 24 03 00 00         MOV ECX,dword ptr [EBX + 0x324]
006EC2F7  03 8D 74 FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff74]
006EC2FD  3B F1                     CMP ESI,ECX
006EC2FF  7C 74                     JL 0x006ec375
LAB_006ec301:
006EC301  8B 4A 64                  MOV ECX,dword ptr [EDX + 0x64]
006EC304  8B 42 60                  MOV EAX,dword ptr [EDX + 0x60]
006EC307  C1 E0 04                  SHL EAX,0x4
006EC30A  03 81 EC 00 00 00         ADD EAX,dword ptr [ECX + 0xec]
006EC310  F6 02 02                  TEST byte ptr [EDX],0x2
006EC313  74 3F                     JZ 0x006ec354
006EC315  6A 01                     PUSH 0x1
006EC317  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006EC31A  52                        PUSH EDX
006EC31B  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006EC31E  51                        PUSH ECX
006EC31F  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006EC322  52                        PUSH EDX
006EC323  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006EC326  51                        PUSH ECX
006EC327  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006EC32A  52                        PUSH EDX
006EC32B  8B 00                     MOV EAX,dword ptr [EAX]
006EC32D  50                        PUSH EAX
006EC32E  6A 64                     PUSH 0x64
006EC330  8B 8B 54 03 00 00         MOV ECX,dword ptr [EBX + 0x354]
006EC336  51                        PUSH ECX
006EC337  E8 94 57 FE FF            CALL 0x006d1ad0
006EC33C  33 D2                     XOR EDX,EDX
006EC33E  85 C0                     TEST EAX,EAX
006EC340  0F 9C C2                  SETL DL
006EC343  8B C2                     MOV EAX,EDX
006EC345  89 83 D8 02 00 00         MOV dword ptr [EBX + 0x2d8],EAX
006EC34B  85 C0                     TEST EAX,EAX
006EC34D  75 26                     JNZ 0x006ec375
006EC34F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006EC352  EB 0A                     JMP 0x006ec35e
LAB_006ec354:
006EC354  8B 01                     MOV EAX,dword ptr [ECX]
006EC356  A8 40                     TEST AL,0x40
006EC358  74 04                     JZ 0x006ec35e
006EC35A  24 EF                     AND AL,0xef
006EC35C  89 01                     MOV dword ptr [ECX],EAX
LAB_006ec35e:
006EC35E  4E                        DEC ESI
006EC35F  83 EA 68                  SUB EDX,0x68
006EC362  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006EC365  8B 83 24 03 00 00         MOV EAX,dword ptr [EBX + 0x324]
006EC36B  03 85 74 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff74]
006EC371  3B F0                     CMP ESI,EAX
006EC373  7D 8C                     JGE 0x006ec301
LAB_006ec375:
006EC375  8B 83 D8 02 00 00         MOV EAX,dword ptr [EBX + 0x2d8]
006EC37B  85 C0                     TEST EAX,EAX
006EC37D  0F 85 92 06 00 00         JNZ 0x006eca15
006EC383  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
006EC389  8D 41 FF                  LEA EAX,[ECX + -0x1]
006EC38C  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
006EC392  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EC395  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
006EC398  8B 93 30 03 00 00         MOV EDX,dword ptr [EBX + 0x330]
006EC39E  8D 0C CA                  LEA ECX,[EDX + ECX*0x8]
006EC3A1  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006EC3A4  85 C0                     TEST EAX,EAX
006EC3A6  0F 8C 2A 01 00 00         JL 0x006ec4d6
006EC3AC  8B D1                     MOV EDX,ECX
006EC3AE  8D 72 18                  LEA ESI,[EDX + 0x18]
006EC3B1  40                        INC EAX
006EC3B2  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
LAB_006ec3b8:
006EC3B8  8B 4E 4C                  MOV ECX,dword ptr [ESI + 0x4c]
006EC3BB  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006EC3BE  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006EC3C1  8B 02                     MOV EAX,dword ptr [EDX]
006EC3C3  8B C8                     MOV ECX,EAX
006EC3C5  83 E1 05                  AND ECX,0x5
006EC3C8  80 F9 01                  CMP CL,0x1
006EC3CB  0F 85 F2 00 00 00         JNZ 0x006ec4c3
006EC3D1  A8 02                     TEST AL,0x2
006EC3D3  74 09                     JZ 0x006ec3de
006EC3D5  83 3E 04                  CMP dword ptr [ESI],0x4
006EC3D8  0F 8F E5 00 00 00         JG 0x006ec4c3
LAB_006ec3de:
006EC3DE  C7 85 78 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x0
006EC3E8  8B 83 54 03 00 00         MOV EAX,dword ptr [EBX + 0x354]
006EC3EE  83 38 00                  CMP dword ptr [EAX],0x0
006EC3F1  0F 8E CC 00 00 00         JLE 0x006ec4c3
006EC3F7  C7 85 4C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff4c],0x0
LAB_006ec401:
006EC401  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
006EC407  8D 44 02 08               LEA EAX,[EDX + EAX*0x1 + 0x8]
006EC40B  50                        PUSH EAX
006EC40C  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006EC40F  8D 51 64                  LEA EDX,[ECX + 0x64]
006EC412  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006EC415  E8 46 40 FC FF            CALL 0x006b0460
006EC41A  85 C0                     TEST EAX,EAX
006EC41C  74 67                     JZ 0x006ec485
006EC41E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EC421  83 08 02                  OR dword ptr [EAX],0x2
006EC424  83 3E 04                  CMP dword ptr [ESI],0x4
006EC427  7F 5C                     JG 0x006ec485
006EC429  F6 46 EC 40               TEST byte ptr [ESI + -0x14],0x40
006EC42D  74 2D                     JZ 0x006ec45c
006EC42F  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
006EC432  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
006EC435  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EC438  C1 E0 03                  SHL EAX,0x3
006EC43B  2B C1                     SUB EAX,ECX
006EC43D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EC440  8B 8B 1C 03 00 00         MOV ECX,dword ptr [EBX + 0x31c]
006EC446  8B 7C 81 0C               MOV EDI,dword ptr [ECX + EAX*0x4 + 0xc]
006EC44A  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
006EC44D  8D 04 97                  LEA EAX,[EDI + EDX*0x4]
006EC450  8B 8B 30 03 00 00         MOV ECX,dword ptr [EBX + 0x330]
006EC456  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
006EC459  83 08 02                  OR dword ptr [EAX],0x2
LAB_006ec45c:
006EC45C  6A 00                     PUSH 0x0
006EC45E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006EC461  8B 50 70                  MOV EDX,dword ptr [EAX + 0x70]
006EC464  52                        PUSH EDX
006EC465  8B 40 6C                  MOV EAX,dword ptr [EAX + 0x6c]
006EC468  50                        PUSH EAX
006EC469  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006EC46C  51                        PUSH ECX
006EC46D  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006EC470  52                        PUSH EDX
006EC471  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006EC474  50                        PUSH EAX
006EC475  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006EC478  51                        PUSH ECX
006EC479  6A 04                     PUSH 0x4
006EC47B  56                        PUSH ESI
006EC47C  E8 4F 56 FE FF            CALL 0x006d1ad0
006EC481  85 C0                     TEST EAX,EAX
006EC483  7C 24                     JL 0x006ec4a9
LAB_006ec485:
006EC485  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006EC48B  41                        INC ECX
006EC48C  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
006EC492  83 85 4C FF FF FF 10      ADD dword ptr [EBP + 0xffffff4c],0x10
006EC499  8B 83 54 03 00 00         MOV EAX,dword ptr [EBX + 0x354]
006EC49F  3B 08                     CMP ECX,dword ptr [EAX]
006EC4A1  0F 8C 5A FF FF FF         JL 0x006ec401
006EC4A7  EB 1A                     JMP 0x006ec4c3
LAB_006ec4a9:
006EC4A9  F6 46 EC 40               TEST byte ptr [ESI + -0x14],0x40
006EC4AD  74 14                     JZ 0x006ec4c3
006EC4AF  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
006EC4B2  8D 04 97                  LEA EAX,[EDI + EDX*0x4]
006EC4B5  8B 8B 30 03 00 00         MOV ECX,dword ptr [EBX + 0x330]
006EC4BB  C7 44 C1 18 05 00 00 00   MOV dword ptr [ECX + EAX*0x8 + 0x18],0x5
LAB_006ec4c3:
006EC4C3  83 6D E4 68               SUB dword ptr [EBP + -0x1c],0x68
006EC4C7  83 EE 68                  SUB ESI,0x68
006EC4CA  FF 8D 50 FF FF FF         DEC dword ptr [EBP + 0xffffff50]
006EC4D0  0F 85 E2 FE FF FF         JNZ 0x006ec3b8
LAB_006ec4d6:
006EC4D6  8B 93 24 03 00 00         MOV EDX,dword ptr [EBX + 0x324]
006EC4DC  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
006EC4E2  8D 44 0A FF               LEA EAX,[EDX + ECX*0x1 + -0x1]
006EC4E6  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EC4E9  8D 14 90                  LEA EDX,[EAX + EDX*0x4]
006EC4EC  8B B3 30 03 00 00         MOV ESI,dword ptr [EBX + 0x330]
006EC4F2  8D 14 D6                  LEA EDX,[ESI + EDX*0x8]
006EC4F5  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006EC4F8  3B C1                     CMP EAX,ECX
006EC4FA  0F 8C 2F 01 00 00         JL 0x006ec62f
006EC500  8B D1                     MOV EDX,ECX
006EC502  2B C2                     SUB EAX,EDX
006EC504  40                        INC EAX
006EC505  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
LAB_006ec50b:
006EC50B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EC50E  8B 40 64                  MOV EAX,dword ptr [EAX + 0x64]
006EC511  8D 48 64                  LEA ECX,[EAX + 0x64]
006EC514  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006EC517  8B 88 90 00 00 00         MOV ECX,dword ptr [EAX + 0x90]
006EC51D  85 C9                     TEST ECX,ECX
006EC51F  0F 84 FA 00 00 00         JZ 0x006ec61f
006EC525  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006EC528  F6 02 80                  TEST byte ptr [EDX],0x80
006EC52B  0F 84 EE 00 00 00         JZ 0x006ec61f
006EC531  8B C2                     MOV EAX,EDX
006EC533  83 78 18 04               CMP dword ptr [EAX + 0x18],0x4
006EC537  0F 8E E2 00 00 00         JLE 0x006ec61f
006EC53D  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
006EC543  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EC546  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
006EC549  8B 8B 30 03 00 00         MOV ECX,dword ptr [EBX + 0x330]
006EC54F  8D 34 D1                  LEA ESI,[ECX + EDX*0x8]
006EC552  85 C0                     TEST EAX,EAX
006EC554  0F 8C C5 00 00 00         JL 0x006ec61f
006EC55A  40                        INC EAX
006EC55B  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
LAB_006ec561:
006EC561  8B 16                     MOV EDX,dword ptr [ESI]
006EC563  83 E2 07                  AND EDX,0x7
006EC566  80 FA 01                  CMP DL,0x1
006EC569  74 0A                     JZ 0x006ec575
006EC56B  83 7E 18 04               CMP dword ptr [ESI + 0x18],0x4
006EC56F  0F 8F 9B 00 00 00         JG 0x006ec610
LAB_006ec575:
006EC575  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006EC578  83 C0 64                  ADD EAX,0x64
006EC57B  50                        PUSH EAX
006EC57C  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006EC57F  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006EC582  E8 D9 3E FC FF            CALL 0x006b0460
006EC587  85 C0                     TEST EAX,EAX
006EC589  0F 84 81 00 00 00         JZ 0x006ec610
006EC58F  83 0E 02                  OR dword ptr [ESI],0x2
006EC592  8D 56 18                  LEA EDX,[ESI + 0x18]
006EC595  83 3A 04                  CMP dword ptr [EDX],0x4
006EC598  7F 76                     JG 0x006ec610
006EC59A  F6 46 04 40               TEST byte ptr [ESI + 0x4],0x40
006EC59E  74 2D                     JZ 0x006ec5cd
006EC5A0  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006EC5A3  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006EC5A6  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EC5A9  C1 E0 03                  SHL EAX,0x3
006EC5AC  2B C1                     SUB EAX,ECX
006EC5AE  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EC5B1  8B 83 1C 03 00 00         MOV EAX,dword ptr [EBX + 0x31c]
006EC5B7  8B 7C 88 0C               MOV EDI,dword ptr [EAX + ECX*0x4 + 0xc]
006EC5BB  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
006EC5BE  8D 04 8F                  LEA EAX,[EDI + ECX*0x4]
006EC5C1  8B 8B 30 03 00 00         MOV ECX,dword ptr [EBX + 0x330]
006EC5C7  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
006EC5CA  83 08 02                  OR dword ptr [EAX],0x2
LAB_006ec5cd:
006EC5CD  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006EC5D0  6A 00                     PUSH 0x0
006EC5D2  8B 48 70                  MOV ECX,dword ptr [EAX + 0x70]
006EC5D5  51                        PUSH ECX
006EC5D6  8B 40 6C                  MOV EAX,dword ptr [EAX + 0x6c]
006EC5D9  50                        PUSH EAX
006EC5DA  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006EC5DD  51                        PUSH ECX
006EC5DE  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006EC5E1  50                        PUSH EAX
006EC5E2  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006EC5E5  51                        PUSH ECX
006EC5E6  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006EC5E9  50                        PUSH EAX
006EC5EA  6A 04                     PUSH 0x4
006EC5EC  52                        PUSH EDX
006EC5ED  E8 DE 54 FE FF            CALL 0x006d1ad0
006EC5F2  85 C0                     TEST EAX,EAX
006EC5F4  7D 1A                     JGE 0x006ec610
006EC5F6  F6 46 04 40               TEST byte ptr [ESI + 0x4],0x40
006EC5FA  74 14                     JZ 0x006ec610
006EC5FC  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
006EC5FF  8D 14 8F                  LEA EDX,[EDI + ECX*0x4]
006EC602  8B 83 30 03 00 00         MOV EAX,dword ptr [EBX + 0x330]
006EC608  C7 44 D0 18 05 00 00 00   MOV dword ptr [EAX + EDX*0x8 + 0x18],0x5
LAB_006ec610:
006EC610  83 EE 68                  SUB ESI,0x68
006EC613  FF 8D 44 FF FF FF         DEC dword ptr [EBP + 0xffffff44]
006EC619  0F 85 42 FF FF FF         JNZ 0x006ec561
LAB_006ec61f:
006EC61F  83 6D E4 68               SUB dword ptr [EBP + -0x1c],0x68
006EC623  FF 8D 48 FF FF FF         DEC dword ptr [EBP + 0xffffff48]
006EC629  0F 85 DC FE FF FF         JNZ 0x006ec50b
LAB_006ec62f:
006EC62F  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
006EC635  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
006EC638  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EC63B  8D 14 91                  LEA EDX,[ECX + EDX*0x4]
006EC63E  C1 E2 03                  SHL EDX,0x3
006EC641  8B 83 30 03 00 00         MOV EAX,dword ptr [EBX + 0x330]
006EC647  03 C2                     ADD EAX,EDX
006EC649  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006EC64C  85 C9                     TEST ECX,ECX
006EC64E  0F 8C 59 01 00 00         JL 0x006ec7ad
006EC654  89 95 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDX
LAB_006ec65a:
006EC65A  8B 93 30 03 00 00         MOV EDX,dword ptr [EBX + 0x330]
006EC660  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
006EC666  8B 4C 0A 64               MOV ECX,dword ptr [EDX + ECX*0x1 + 0x64]
006EC66A  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006EC66D  33 F6                     XOR ESI,ESI
006EC66F  83 C1 64                  ADD ECX,0x64
006EC672  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006EC675  8B 08                     MOV ECX,dword ptr [EAX]
006EC677  F6 C1 02                  TEST CL,0x2
006EC67A  74 06                     JZ 0x006ec682
006EC67C  83 78 18 04               CMP dword ptr [EAX + 0x18],0x4
006EC680  7F 0B                     JG 0x006ec68d
LAB_006ec682:
006EC682  F6 C5 08                  TEST CH,0x8
006EC685  74 0B                     JZ 0x006ec692
006EC687  83 C0 08                  ADD EAX,0x8
006EC68A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
LAB_006ec68d:
006EC68D  BE 01 00 00 00            MOV ESI,0x1
LAB_006ec692:
006EC692  85 F6                     TEST ESI,ESI
006EC694  0F 84 DE 00 00 00         JZ 0x006ec778
006EC69A  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
006EC6A0  8D 74 02 98               LEA ESI,[EDX + EAX*0x1 + -0x68]
006EC6A4  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006EC6A7  83 F8 01                  CMP EAX,0x1
006EC6AA  0F 8C D5 00 00 00         JL 0x006ec785
006EC6B0  8B C8                     MOV ECX,EAX
006EC6B2  89 8D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ECX
LAB_006ec6b8:
006EC6B8  8B 16                     MOV EDX,dword ptr [ESI]
006EC6BA  83 E2 07                  AND EDX,0x7
006EC6BD  80 FA 01                  CMP DL,0x1
006EC6C0  74 0A                     JZ 0x006ec6cc
006EC6C2  83 7E 18 04               CMP dword ptr [ESI + 0x18],0x4
006EC6C6  0F 8F 9B 00 00 00         JG 0x006ec767
LAB_006ec6cc:
006EC6CC  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006EC6CF  83 C0 64                  ADD EAX,0x64
006EC6D2  50                        PUSH EAX
006EC6D3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006EC6D6  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006EC6D9  E8 82 3D FC FF            CALL 0x006b0460
006EC6DE  85 C0                     TEST EAX,EAX
006EC6E0  0F 84 81 00 00 00         JZ 0x006ec767
006EC6E6  83 0E 02                  OR dword ptr [ESI],0x2
006EC6E9  8D 56 18                  LEA EDX,[ESI + 0x18]
006EC6EC  83 3A 04                  CMP dword ptr [EDX],0x4
006EC6EF  7F 76                     JG 0x006ec767
006EC6F1  F6 46 04 40               TEST byte ptr [ESI + 0x4],0x40
006EC6F5  74 2D                     JZ 0x006ec724
006EC6F7  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006EC6FA  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006EC6FD  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EC700  C1 E0 03                  SHL EAX,0x3
006EC703  2B C1                     SUB EAX,ECX
006EC705  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EC708  8B 83 1C 03 00 00         MOV EAX,dword ptr [EBX + 0x31c]
006EC70E  8B 7C 88 0C               MOV EDI,dword ptr [EAX + ECX*0x4 + 0xc]
006EC712  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
006EC715  8D 04 8F                  LEA EAX,[EDI + ECX*0x4]
006EC718  8B 8B 30 03 00 00         MOV ECX,dword ptr [EBX + 0x330]
006EC71E  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
006EC721  83 08 02                  OR dword ptr [EAX],0x2
LAB_006ec724:
006EC724  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006EC727  6A 00                     PUSH 0x0
006EC729  8B 48 70                  MOV ECX,dword ptr [EAX + 0x70]
006EC72C  51                        PUSH ECX
006EC72D  8B 40 6C                  MOV EAX,dword ptr [EAX + 0x6c]
006EC730  50                        PUSH EAX
006EC731  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006EC734  51                        PUSH ECX
006EC735  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006EC738  50                        PUSH EAX
006EC739  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006EC73C  51                        PUSH ECX
006EC73D  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006EC740  50                        PUSH EAX
006EC741  6A 04                     PUSH 0x4
006EC743  52                        PUSH EDX
006EC744  E8 87 53 FE FF            CALL 0x006d1ad0
006EC749  85 C0                     TEST EAX,EAX
006EC74B  7D 1A                     JGE 0x006ec767
006EC74D  F6 46 04 40               TEST byte ptr [ESI + 0x4],0x40
006EC751  74 14                     JZ 0x006ec767
006EC753  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
006EC756  8D 14 8F                  LEA EDX,[EDI + ECX*0x4]
006EC759  8B 83 30 03 00 00         MOV EAX,dword ptr [EBX + 0x330]
006EC75F  C7 44 D0 18 05 00 00 00   MOV dword ptr [EAX + EDX*0x8 + 0x18],0x5
LAB_006ec767:
006EC767  83 EE 68                  SUB ESI,0x68
006EC76A  FF 8D 3C FF FF FF         DEC dword ptr [EBP + 0xffffff3c]
006EC770  0F 85 42 FF FF FF         JNZ 0x006ec6b8
006EC776  EB 0D                     JMP 0x006ec785
LAB_006ec778:
006EC778  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006EC77B  8B 01                     MOV EAX,dword ptr [ECX]
006EC77D  A8 04                     TEST AL,0x4
006EC77F  74 04                     JZ 0x006ec785
006EC781  24 FE                     AND AL,0xfe
006EC783  89 01                     MOV dword ptr [ECX],EAX
LAB_006ec785:
006EC785  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006EC788  81 20 B3 D7 FF FF         AND dword ptr [EAX],0xffffd7b3
006EC78E  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006EC791  49                        DEC ECX
006EC792  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
006EC795  83 AD 40 FF FF FF 68      SUB dword ptr [EBP + 0xffffff40],0x68
006EC79C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EC79F  83 E8 68                  SUB EAX,0x68
006EC7A2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006EC7A5  85 C9                     TEST ECX,ECX
006EC7A7  0F 8D AD FE FF FF         JGE 0x006ec65a
LAB_006ec7ad:
006EC7AD  33 FF                     XOR EDI,EDI
LAB_006ec7af:
006EC7AF  6A 00                     PUSH 0x0
006EC7B1  8D 4D C0                  LEA ECX,[EBP + -0x40]
006EC7B4  51                        PUSH ECX
006EC7B5  8D 55 BC                  LEA EDX,[EBP + -0x44]
006EC7B8  52                        PUSH EDX
006EC7B9  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006EC7BC  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006EC7BF  51                        PUSH ECX
006EC7C0  E8 7B F6 FC FF            CALL 0x006bbe40
006EC7C5  8B F0                     MOV ESI,EAX
006EC7C7  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
006EC7CA  85 F6                     TEST ESI,ESI
006EC7CC  74 17                     JZ 0x006ec7e5
006EC7CE  81 FE C2 01 76 88         CMP ESI,0x887601c2
006EC7D4  75 0F                     JNZ 0x006ec7e5
006EC7D6  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
006EC7D9  52                        PUSH EDX
006EC7DA  E8 61 24 FE FF            CALL 0x006cec40
006EC7DF  47                        INC EDI
006EC7E0  83 FF 02                  CMP EDI,0x2
006EC7E3  7C CA                     JL 0x006ec7af
LAB_006ec7e5:
006EC7E5  33 C0                     XOR EAX,EAX
006EC7E7  3B F0                     CMP ESI,EAX
006EC7E9  0F 85 18 02 00 00         JNZ 0x006eca07
006EC7EF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006ec7f2:
006EC7F2  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006EC7F8  8B 8B 50 03 00 00         MOV ECX,dword ptr [EBX + 0x350]
006EC7FE  3B 01                     CMP EAX,dword ptr [ECX]
006EC800  0F 8D CA 01 00 00         JGE 0x006ec9d0
006EC806  8B 93 44 01 00 00         MOV EDX,dword ptr [EBX + 0x144]
006EC80C  85 D2                     TEST EDX,EDX
006EC80E  0F 84 18 01 00 00         JZ 0x006ec92c
006EC814  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
006EC817  85 D2                     TEST EDX,EDX
006EC819  0F 84 0D 01 00 00         JZ 0x006ec92c
006EC81F  8B F8                     MOV EDI,EAX
006EC821  C1 E7 04                  SHL EDI,0x4
006EC824  8B 54 0F 08               MOV EDX,dword ptr [EDI + ECX*0x1 + 0x8]
006EC828  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006EC82B  8B 74 0F 0C               MOV ESI,dword ptr [EDI + ECX*0x1 + 0xc]
006EC82F  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
006EC832  40                        INC EAX
006EC833  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
006EC839  C1 E0 04                  SHL EAX,0x4
006EC83C  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
006EC842  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
006EC845  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
006EC848  8B 4C 0F 14               MOV ECX,dword ptr [EDI + ECX*0x1 + 0x14]
006EC84C  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
006EC852  8B 93 74 01 00 00         MOV EDX,dword ptr [EBX + 0x174]
006EC858  3B F2                     CMP ESI,EDX
006EC85A  7C 45                     JL 0x006ec8a1
006EC85C  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
006EC85F  0F AF C6                  IMUL EAX,ESI
006EC862  03 45 B4                  ADD EAX,dword ptr [EBP + -0x4c]
006EC865  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006EC868  03 73 24                  ADD ESI,dword ptr [EBX + 0x24]
006EC86B  0F AF 75 C0               IMUL ESI,dword ptr [EBP + -0x40]
006EC86F  03 73 20                  ADD ESI,dword ptr [EBX + 0x20]
006EC872  03 75 B4                  ADD ESI,dword ptr [EBP + -0x4c]
006EC875  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
006EC878  51                        PUSH ECX
006EC879  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
006EC87C  51                        PUSH ECX
006EC87D  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006EC880  51                        PUSH ECX
006EC881  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006EC884  03 D0                     ADD EDX,EAX
006EC886  52                        PUSH EDX
LAB_006ec887:
006EC887  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006EC88A  50                        PUSH EAX
006EC88B  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006EC88E  03 F1                     ADD ESI,ECX
006EC890  56                        PUSH ESI
006EC891  E8 CA 21 FE FF            CALL 0x006cea60
006EC896  8B B5 34 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff34]
006EC89C  E9 F9 00 00 00            JMP 0x006ec99a
LAB_006ec8a1:
006EC8A1  8D 04 31                  LEA EAX,[ECX + ESI*0x1]
006EC8A4  3B C2                     CMP EAX,EDX
006EC8A6  7E 56                     JLE 0x006ec8fe
006EC8A8  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
006EC8AB  0F AF C2                  IMUL EAX,EDX
006EC8AE  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006EC8B1  03 C1                     ADD EAX,ECX
006EC8B3  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006EC8B6  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006EC8B9  03 C2                     ADD EAX,EDX
006EC8BB  0F AF 45 C0               IMUL EAX,dword ptr [EBP + -0x40]
006EC8BF  03 43 20                  ADD EAX,dword ptr [EBX + 0x20]
006EC8C2  03 C1                     ADD EAX,ECX
006EC8C4  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006EC8C7  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
006EC8CD  2B CA                     SUB ECX,EDX
006EC8CF  03 CE                     ADD ECX,ESI
006EC8D1  51                        PUSH ECX
006EC8D2  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006EC8D5  52                        PUSH EDX
006EC8D6  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006EC8D9  51                        PUSH ECX
006EC8DA  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006EC8DD  03 4D B8                  ADD ECX,dword ptr [EBP + -0x48]
006EC8E0  51                        PUSH ECX
006EC8E1  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006EC8E4  52                        PUSH EDX
006EC8E5  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006EC8E8  03 C1                     ADD EAX,ECX
006EC8EA  50                        PUSH EAX
006EC8EB  E8 70 21 FE FF            CALL 0x006cea60
006EC8F0  8B 8B 74 01 00 00         MOV ECX,dword ptr [EBX + 0x174]
006EC8F6  2B CE                     SUB ECX,ESI
006EC8F8  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
LAB_006ec8fe:
006EC8FE  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
006EC901  0F AF C6                  IMUL EAX,ESI
006EC904  03 45 B4                  ADD EAX,dword ptr [EBP + -0x4c]
006EC907  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006EC90A  03 73 24                  ADD ESI,dword ptr [EBX + 0x24]
006EC90D  0F AF 75 C0               IMUL ESI,dword ptr [EBP + -0x40]
006EC911  03 73 20                  ADD ESI,dword ptr [EBX + 0x20]
006EC914  03 75 B4                  ADD ESI,dword ptr [EBP + -0x4c]
006EC917  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
006EC91A  51                        PUSH ECX
006EC91B  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006EC91E  52                        PUSH EDX
006EC91F  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006EC922  51                        PUSH ECX
006EC923  03 43 1C                  ADD EAX,dword ptr [EBX + 0x1c]
006EC926  50                        PUSH EAX
006EC927  E9 5B FF FF FF            JMP 0x006ec887
LAB_006ec92c:
006EC92C  8B F8                     MOV EDI,EAX
006EC92E  C1 E7 04                  SHL EDI,0x4
006EC931  8B 44 0F 0C               MOV EAX,dword ptr [EDI + ECX*0x1 + 0xc]
006EC935  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
006EC938  8B 74 0F 08               MOV ESI,dword ptr [EDI + ECX*0x1 + 0x8]
006EC93C  89 B5 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],ESI
006EC942  0F AF D0                  IMUL EDX,EAX
006EC945  03 D6                     ADD EDX,ESI
006EC947  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006EC94A  03 43 24                  ADD EAX,dword ptr [EBX + 0x24]
006EC94D  0F AF 45 C0               IMUL EAX,dword ptr [EBP + -0x40]
006EC951  03 43 20                  ADD EAX,dword ptr [EBX + 0x20]
006EC954  03 85 30 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff30]
006EC95A  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006EC95D  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
006EC963  8D 70 01                  LEA ESI,[EAX + 0x1]
006EC966  89 B5 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],ESI
006EC96C  C1 E6 04                  SHL ESI,0x4
006EC96F  89 B5 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],ESI
006EC975  8B 44 0F 14               MOV EAX,dword ptr [EDI + ECX*0x1 + 0x14]
006EC979  50                        PUSH EAX
006EC97A  8B 0C 0E                  MOV ECX,dword ptr [ESI + ECX*0x1]
006EC97D  51                        PUSH ECX
006EC97E  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
006EC981  50                        PUSH EAX
006EC982  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006EC985  03 C2                     ADD EAX,EDX
006EC987  50                        PUSH EAX
006EC988  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006EC98B  51                        PUSH ECX
006EC98C  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006EC98F  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006EC992  03 C2                     ADD EAX,EDX
006EC994  50                        PUSH EAX
006EC995  E8 C6 20 FE FF            CALL 0x006cea60
LAB_006ec99a:
006EC99A  8B 0B                     MOV ECX,dword ptr [EBX]
006EC99C  85 C9                     TEST ECX,ECX
006EC99E  74 25                     JZ 0x006ec9c5
006EC9A0  8B 83 50 03 00 00         MOV EAX,dword ptr [EBX + 0x350]
006EC9A6  8B 54 07 14               MOV EDX,dword ptr [EDI + EAX*0x1 + 0x14]
006EC9AA  52                        PUSH EDX
006EC9AB  8B 14 06                  MOV EDX,dword ptr [ESI + EAX*0x1]
006EC9AE  52                        PUSH EDX
006EC9AF  8B 54 07 0C               MOV EDX,dword ptr [EDI + EAX*0x1 + 0xc]
006EC9B3  03 53 24                  ADD EDX,dword ptr [EBX + 0x24]
006EC9B6  52                        PUSH EDX
006EC9B7  8B 44 07 08               MOV EAX,dword ptr [EDI + EAX*0x1 + 0x8]
006EC9BB  03 43 20                  ADD EAX,dword ptr [EBX + 0x20]
006EC9BE  50                        PUSH EAX
006EC9BF  51                        PUSH ECX
006EC9C0  E8 BB 95 FC FF            CALL 0x006b5f80
LAB_006ec9c5:
006EC9C5  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
006EC9CB  E9 22 FE FF FF            JMP 0x006ec7f2
LAB_006ec9d0:
006EC9D0  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006EC9D7  EB 1D                     JMP 0x006ec9f6
LAB_006ec9f6:
006EC9F6  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006EC9F9  8B 41 40                  MOV EAX,dword ptr [ECX + 0x40]
006EC9FC  8B 10                     MOV EDX,dword ptr [EAX]
006EC9FE  6A 00                     PUSH 0x0
006ECA00  50                        PUSH EAX
006ECA01  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
LAB_006eca07:
006ECA07  8B 83 D8 02 00 00         MOV EAX,dword ptr [EBX + 0x2d8]
006ECA0D  85 C0                     TEST EAX,EAX
006ECA0F  0F 84 25 02 00 00         JZ 0x006ecc3a
LAB_006eca15:
006ECA15  8B 83 44 01 00 00         MOV EAX,dword ptr [EBX + 0x144]
006ECA1B  85 C0                     TEST EAX,EAX
006ECA1D  0F 84 6A 01 00 00         JZ 0x006ecb8d
006ECA23  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
006ECA26  85 C0                     TEST EAX,EAX
006ECA28  0F 84 5F 01 00 00         JZ 0x006ecb8d
006ECA2E  33 F6                     XOR ESI,ESI
LAB_006eca30:
006ECA30  6A 00                     PUSH 0x0
006ECA32  8D 45 C0                  LEA EAX,[EBP + -0x40]
006ECA35  50                        PUSH EAX
006ECA36  8D 4D BC                  LEA ECX,[EBP + -0x44]
006ECA39  51                        PUSH ECX
006ECA3A  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
006ECA3D  8B 42 40                  MOV EAX,dword ptr [EDX + 0x40]
006ECA40  50                        PUSH EAX
006ECA41  E8 FA F3 FC FF            CALL 0x006bbe40
006ECA46  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006ECA49  85 C0                     TEST EAX,EAX
006ECA4B  74 16                     JZ 0x006eca63
006ECA4D  3D C2 01 76 88            CMP EAX,0x887601c2
006ECA52  75 0F                     JNZ 0x006eca63
006ECA54  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006ECA57  51                        PUSH ECX
006ECA58  E8 E3 21 FE FF            CALL 0x006cec40
006ECA5D  46                        INC ESI
006ECA5E  83 FE 02                  CMP ESI,0x2
006ECA61  7C CD                     JL 0x006eca30
LAB_006eca63:
006ECA63  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006ECA6A  8B 73 30                  MOV ESI,dword ptr [EBX + 0x30]
006ECA6D  89 75 B4                  MOV dword ptr [EBP + -0x4c],ESI
006ECA70  8B 7B 34                  MOV EDI,dword ptr [EBX + 0x34]
006ECA73  89 7D A8                  MOV dword ptr [EBP + -0x58],EDI
006ECA76  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
006ECA79  2B C6                     SUB EAX,ESI
006ECA7B  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
006ECA7E  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
006ECA81  2B D7                     SUB EDX,EDI
006ECA83  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
006ECA89  8B 8B 74 01 00 00         MOV ECX,dword ptr [EBX + 0x174]
006ECA8F  3B F9                     CMP EDI,ECX
006ECA91  7C 32                     JL 0x006ecac5
006ECA93  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006ECA96  0F AF CF                  IMUL ECX,EDI
006ECA99  03 CE                     ADD ECX,ESI
006ECA9B  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006ECA9E  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006ECAA1  03 C7                     ADD EAX,EDI
006ECAA3  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006ECAA6  0F AF C7                  IMUL EAX,EDI
006ECAA9  03 43 20                  ADD EAX,dword ptr [EBX + 0x20]
006ECAAC  03 C6                     ADD EAX,ESI
006ECAAE  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006ECAB1  52                        PUSH EDX
006ECAB2  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006ECAB5  52                        PUSH EDX
006ECAB6  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
006ECAB9  52                        PUSH EDX
006ECABA  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006ECABD  03 D1                     ADD EDX,ECX
006ECABF  52                        PUSH EDX
006ECAC0  E9 83 00 00 00            JMP 0x006ecb48
LAB_006ecac5:
006ECAC5  8D 04 3A                  LEA EAX,[EDX + EDI*0x1]
006ECAC8  3B C1                     CMP EAX,ECX
006ECACA  7E 51                     JLE 0x006ecb1d
006ECACC  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
006ECACF  0F AF C1                  IMUL EAX,ECX
006ECAD2  03 C6                     ADD EAX,ESI
006ECAD4  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006ECAD7  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006ECADA  03 C1                     ADD EAX,ECX
006ECADC  0F AF 45 C0               IMUL EAX,dword ptr [EBP + -0x40]
006ECAE0  03 43 20                  ADD EAX,dword ptr [EBX + 0x20]
006ECAE3  03 C6                     ADD EAX,ESI
006ECAE5  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006ECAE8  2B 93 74 01 00 00         SUB EDX,dword ptr [EBX + 0x174]
006ECAEE  03 D7                     ADD EDX,EDI
006ECAF0  52                        PUSH EDX
006ECAF1  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
006ECAF4  51                        PUSH ECX
006ECAF5  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006ECAF8  51                        PUSH ECX
006ECAF9  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006ECAFC  03 55 B8                  ADD EDX,dword ptr [EBP + -0x48]
006ECAFF  52                        PUSH EDX
006ECB00  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006ECB03  51                        PUSH ECX
006ECB04  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006ECB07  03 C2                     ADD EAX,EDX
006ECB09  50                        PUSH EAX
006ECB0A  E8 51 1F FE FF            CALL 0x006cea60
006ECB0F  8B 93 74 01 00 00         MOV EDX,dword ptr [EBX + 0x174]
006ECB15  2B D7                     SUB EDX,EDI
006ECB17  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
LAB_006ecb1d:
006ECB1D  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006ECB20  0F AF CF                  IMUL ECX,EDI
006ECB23  03 CE                     ADD ECX,ESI
006ECB25  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006ECB28  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006ECB2B  03 C7                     ADD EAX,EDI
006ECB2D  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006ECB30  0F AF C7                  IMUL EAX,EDI
006ECB33  03 43 20                  ADD EAX,dword ptr [EBX + 0x20]
006ECB36  03 C6                     ADD EAX,ESI
006ECB38  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006ECB3B  52                        PUSH EDX
006ECB3C  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006ECB3F  52                        PUSH EDX
006ECB40  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
006ECB43  52                        PUSH EDX
006ECB44  03 4B 1C                  ADD ECX,dword ptr [EBX + 0x1c]
006ECB47  51                        PUSH ECX
LAB_006ecb48:
006ECB48  57                        PUSH EDI
006ECB49  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006ECB4C  03 C1                     ADD EAX,ECX
006ECB4E  50                        PUSH EAX
006ECB4F  E8 0C 1F FE FF            CALL 0x006cea60
006ECB54  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006ECB5B  EB 1D                     JMP 0x006ecb7a
LAB_006ecb7a:
006ECB7A  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
006ECB7D  8B 42 40                  MOV EAX,dword ptr [EDX + 0x40]
006ECB80  8B 08                     MOV ECX,dword ptr [EAX]
006ECB82  6A 00                     PUSH 0x0
006ECB84  50                        PUSH EAX
006ECB85  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
006ECB8B  EB 31                     JMP 0x006ecbbe
LAB_006ecb8d:
006ECB8D  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
006ECB90  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
006ECB93  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
006ECB96  2B D0                     SUB EDX,EAX
006ECB98  52                        PUSH EDX
006ECB99  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
006ECB9C  2B D1                     SUB EDX,ECX
006ECB9E  52                        PUSH EDX
006ECB9F  50                        PUSH EAX
006ECBA0  51                        PUSH ECX
006ECBA1  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
006ECBA4  52                        PUSH EDX
006ECBA5  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006ECBA8  52                        PUSH EDX
006ECBA9  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
006ECBAC  03 D0                     ADD EDX,EAX
006ECBAE  52                        PUSH EDX
006ECBAF  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
006ECBB2  03 C1                     ADD EAX,ECX
006ECBB4  50                        PUSH EAX
006ECBB5  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006ECBB8  51                        PUSH ECX
006ECBB9  E8 32 3B 06 00            CALL 0x007506f0
LAB_006ecbbe:
006ECBBE  8B 13                     MOV EDX,dword ptr [EBX]
006ECBC0  85 D2                     TEST EDX,EDX
006ECBC2  74 24                     JZ 0x006ecbe8
006ECBC4  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
006ECBC7  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
006ECBCA  8B 73 3C                  MOV ESI,dword ptr [EBX + 0x3c]
006ECBCD  2B F0                     SUB ESI,EAX
006ECBCF  56                        PUSH ESI
006ECBD0  8B 73 38                  MOV ESI,dword ptr [EBX + 0x38]
006ECBD3  2B F1                     SUB ESI,ECX
006ECBD5  56                        PUSH ESI
006ECBD6  8B 73 24                  MOV ESI,dword ptr [EBX + 0x24]
006ECBD9  03 F0                     ADD ESI,EAX
006ECBDB  56                        PUSH ESI
006ECBDC  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
006ECBDF  03 C1                     ADD EAX,ECX
006ECBE1  50                        PUSH EAX
006ECBE2  52                        PUSH EDX
006ECBE3  E8 98 93 FC FF            CALL 0x006b5f80
LAB_006ecbe8:
006ECBE8  8B 83 28 03 00 00         MOV EAX,dword ptr [EBX + 0x328]
006ECBEE  48                        DEC EAX
006ECBEF  78 49                     JS 0x006ecc3a
006ECBF1  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006ECBF4  8D 34 88                  LEA ESI,[EAX + ECX*0x4]
006ECBF7  C1 E6 03                  SHL ESI,0x3
006ECBFA  8D 48 01                  LEA ECX,[EAX + 0x1]
LAB_006ecbfd:
006ECBFD  8B 93 30 03 00 00         MOV EDX,dword ptr [EBX + 0x330]
006ECC03  8D 3C 32                  LEA EDI,[EDX + ESI*0x1]
006ECC06  8B 07                     MOV EAX,dword ptr [EDI]
006ECC08  8B D0                     MOV EDX,EAX
006ECC0A  83 E2 05                  AND EDX,0x5
006ECC0D  80 FA 01                  CMP DL,0x1
006ECC10  75 12                     JNZ 0x006ecc24
006ECC12  0C 82                     OR AL,0x82
006ECC14  89 07                     MOV dword ptr [EDI],EAX
006ECC16  8B 83 30 03 00 00         MOV EAX,dword ptr [EBX + 0x330]
006ECC1C  C7 44 30 18 05 00 00 00   MOV dword ptr [EAX + ESI*0x1 + 0x18],0x5
LAB_006ecc24:
006ECC24  8B 93 30 03 00 00         MOV EDX,dword ptr [EBX + 0x330]
006ECC2A  8B 44 32 64               MOV EAX,dword ptr [EDX + ESI*0x1 + 0x64]
006ECC2E  81 20 A2 D7 FF FF         AND dword ptr [EAX],0xffffd7a2
006ECC34  83 EE 68                  SUB ESI,0x68
006ECC37  49                        DEC ECX
006ECC38  75 C3                     JNZ 0x006ecbfd
LAB_006ecc3a:
006ECC3A  8B 83 50 03 00 00         MOV EAX,dword ptr [EBX + 0x350]
006ECC40  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006ECC46  8B 8B 50 03 00 00         MOV ECX,dword ptr [EBX + 0x350]
006ECC4C  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
006ECC53  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006ECC56  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006ECC59  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006ECC60  5F                        POP EDI
006ECC61  5E                        POP ESI
006ECC62  5B                        POP EBX
006ECC63  8B E5                     MOV ESP,EBP
006ECC65  5D                        POP EBP
006ECC66  C3                        RET
