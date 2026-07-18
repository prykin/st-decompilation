FUN_0040eb90:
0040EB90  55                        PUSH EBP
0040EB91  8B EC                     MOV EBP,ESP
0040EB93  6A FF                     PUSH -0x1
0040EB95  68 40 00 79 00            PUSH 0x790040
0040EB9A  68 64 D9 72 00            PUSH 0x72d964
0040EB9F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0040EBA5  50                        PUSH EAX
0040EBA6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0040EBAD  83 EC 6C                  SUB ESP,0x6c
0040EBB0  53                        PUSH EBX
0040EBB1  56                        PUSH ESI
0040EBB2  57                        PUSH EDI
0040EBB3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040EBB6  33 DB                     XOR EBX,EBX
0040EBB8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0040EBBB  8B 35 20 4D 7F 00         MOV ESI,dword ptr [0x007f4d20]
0040EBC1  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
0040EBC4  C1 E0 02                  SHL EAX,0x2
0040EBC7  83 C0 03                  ADD EAX,0x3
0040EBCA  24 FC                     AND AL,0xfc
0040EBCC  E8 6F EE 31 00            CALL 0x0072da40
0040EBD1  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040EBD4  8B C4                     MOV EAX,ESP
0040EBD6  A3 00 4D 7F 00            MOV [0x007f4d00],EAX
0040EBDB  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0040EBE2  33 D2                     XOR EDX,EDX
0040EBE4  3B F3                     CMP ESI,EBX
0040EBE6  7E 27                     JLE 0x0040ec0f
0040EBE8  33 C9                     XOR ECX,ECX
0040EBEA  33 C0                     XOR EAX,EAX
LAB_0040ebec:
0040EBEC  8B 35 48 4D 7F 00         MOV ESI,dword ptr [0x007f4d48]
0040EBF2  03 F0                     ADD ESI,EAX
0040EBF4  8B 3D 00 4D 7F 00         MOV EDI,dword ptr [0x007f4d00]
0040EBFA  89 74 39 08               MOV dword ptr [ECX + EDI*0x1 + 0x8],ESI
0040EBFE  42                        INC EDX
0040EBFF  83 C0 1C                  ADD EAX,0x1c
0040EC02  83 C1 0C                  ADD ECX,0xc
0040EC05  8B 35 20 4D 7F 00         MOV ESI,dword ptr [0x007f4d20]
0040EC0B  3B D6                     CMP EDX,ESI
0040EC0D  7C DD                     JL 0x0040ebec
LAB_0040ec0f:
0040EC0F  33 FF                     XOR EDI,EDI
0040EC11  89 7D 90                  MOV dword ptr [EBP + -0x70],EDI
0040EC14  85 F6                     TEST ESI,ESI
0040EC16  7E 2D                     JLE 0x0040ec45
0040EC18  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
0040EC1D  83 C0 08                  ADD EAX,0x8
0040EC20  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
LAB_0040ec23:
0040EC23  8B 48 F8                  MOV ECX,dword ptr [EAX + -0x8]
0040EC26  8D 7C 8F 02               LEA EDI,[EDI + ECX*0x4 + 0x2]
0040EC2A  8B 50 FC                  MOV EDX,dword ptr [EAX + -0x4]
0040EC2D  8D 5C 93 02               LEA EBX,[EBX + EDX*0x4 + 0x2]
0040EC31  8B 08                     MOV ECX,dword ptr [EAX]
0040EC33  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0040EC36  8D 4C 8A 02               LEA ECX,[EDX + ECX*0x4 + 0x2]
0040EC3A  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
0040EC3D  83 C0 14                  ADD EAX,0x14
0040EC40  FF 4D 84                  DEC dword ptr [EBP + -0x7c]
0040EC43  75 DE                     JNZ 0x0040ec23
LAB_0040ec45:
0040EC45  8B C6                     MOV EAX,ESI
0040EC47  99                        CDQ
0040EC48  2B C2                     SUB EAX,EDX
0040EC4A  8B C8                     MOV ECX,EAX
0040EC4C  D1 F9                     SAR ECX,0x1
0040EC4E  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
0040EC51  99                        CDQ
0040EC52  F7 FE                     IDIV ESI
0040EC54  8B F8                     MOV EDI,EAX
0040EC56  8D 04 19                  LEA EAX,[ECX + EBX*0x1]
0040EC59  99                        CDQ
0040EC5A  F7 FE                     IDIV ESI
0040EC5C  8B D8                     MOV EBX,EAX
0040EC5E  89 5D B4                  MOV dword ptr [EBP + -0x4c],EBX
0040EC61  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0040EC64  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
0040EC67  99                        CDQ
0040EC68  F7 FE                     IDIV ESI
0040EC6A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0040EC6D  C7 45 D4 30 75 00 00      MOV dword ptr [EBP + -0x2c],0x7530
0040EC74  BE D0 8A FF FF            MOV ESI,0xffff8ad0
0040EC79  89 75 B8                  MOV dword ptr [EBP + -0x48],ESI
0040EC7C  53                        PUSH EBX
0040EC7D  57                        PUSH EDI
0040EC7E  A1 10 4D 7F 00            MOV EAX,[0x007f4d10]
0040EC83  50                        PUSH EAX
0040EC84  8B 0D 0C 4D 7F 00         MOV ECX,dword ptr [0x007f4d0c]
0040EC8A  51                        PUSH ECX
0040EC8B  E8 48 E2 29 00            CALL 0x006aced8
0040EC90  83 C4 10                  ADD ESP,0x10
0040EC93  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
0040EC96  85 C0                     TEST EAX,EAX
0040EC98  75 0A                     JNZ 0x0040eca4
0040EC9A  C7 45 88 01 00 00 00      MOV dword ptr [EBP + -0x78],0x1
0040ECA1  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
LAB_0040eca4:
0040ECA4  D1 F8                     SAR EAX,0x1
0040ECA6  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0040ECA9  8B 1D 00 4D 7F 00         MOV EBX,dword ptr [0x007f4d00]
0040ECAF  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
0040ECB6  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0040ECBB  85 C0                     TEST EAX,EAX
0040ECBD  0F 8E AA 00 00 00         JLE 0x0040ed6d
0040ECC3  8B 15 48 4D 7F 00         MOV EDX,dword ptr [0x007f4d48]
0040ECC9  8D 72 04                  LEA ESI,[EDX + 0x4]
LAB_0040eccc:
0040ECCC  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0040ECCF  8D 0C 85 02 00 00 00      LEA ECX,[EAX*0x4 + 0x2]
0040ECD6  51                        PUSH ECX
0040ECD7  8B 16                     MOV EDX,dword ptr [ESI]
0040ECD9  8D 04 95 02 00 00 00      LEA EAX,[EDX*0x4 + 0x2]
0040ECE0  50                        PUSH EAX
0040ECE1  8B 4E FC                  MOV ECX,dword ptr [ESI + -0x4]
0040ECE4  8D 14 8D 02 00 00 00      LEA EDX,[ECX*0x4 + 0x2]
0040ECEB  52                        PUSH EDX
0040ECEC  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0040ECEF  50                        PUSH EAX
0040ECF0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0040ECF3  51                        PUSH ECX
0040ECF4  57                        PUSH EDI
0040ECF5  E8 66 C1 29 00            CALL 0x006aae60
0040ECFA  89 03                     MOV dword ptr [EBX],EAX
0040ECFC  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
0040ECFF  C1 E0 02                  SHL EAX,0x2
0040ED02  2B 05 0C 4D 7F 00         SUB EAX,dword ptr [0x007f4d0c]
0040ED08  83 C0 02                  ADD EAX,0x2
0040ED0B  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0040ED0E  8B 0D 10 4D 7F 00         MOV ECX,dword ptr [0x007f4d10]
0040ED14  2B D1                     SUB EDX,ECX
0040ED16  0F AF C2                  IMUL EAX,EDX
0040ED19  8B 16                     MOV EDX,dword ptr [ESI]
0040ED1B  C1 E2 02                  SHL EDX,0x2
0040ED1E  2B D1                     SUB EDX,ECX
0040ED20  83 C2 02                  ADD EDX,0x2
0040ED23  8B CF                     MOV ECX,EDI
0040ED25  2B 0D 0C 4D 7F 00         SUB ECX,dword ptr [0x007f4d0c]
0040ED2B  0F AF D1                  IMUL EDX,ECX
0040ED2E  2B C2                     SUB EAX,EDX
0040ED30  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0040ED33  79 02                     JNS 0x0040ed37
0040ED35  F7 D9                     NEG ECX
LAB_0040ed37:
0040ED37  03 C1                     ADD EAX,ECX
0040ED39  99                        CDQ
0040ED3A  F7 7D 88                  IDIV dword ptr [EBP + -0x78]
0040ED3D  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
0040ED40  39 45 D4                  CMP dword ptr [EBP + -0x2c],EAX
0040ED43  7E 03                     JLE 0x0040ed48
0040ED45  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_0040ed48:
0040ED48  39 45 B8                  CMP dword ptr [EBP + -0x48],EAX
0040ED4B  7D 03                     JGE 0x0040ed50
0040ED4D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_0040ed50:
0040ED50  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0040ED53  41                        INC ECX
0040ED54  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
0040ED57  83 C3 0C                  ADD EBX,0xc
0040ED5A  83 C6 1C                  ADD ESI,0x1c
0040ED5D  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0040ED62  3B C8                     CMP ECX,EAX
0040ED64  0F 8C 62 FF FF FF         JL 0x0040eccc
0040ED6A  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
LAB_0040ed6d:
0040ED6D  BA 30 75 00 00            MOV EDX,0x7530
0040ED72  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
0040ED75  B9 D0 8A FF FF            MOV ECX,0xffff8ad0
0040ED7A  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0040ED7D  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
0040ED84  85 C0                     TEST EAX,EAX
0040ED86  0F 8E B9 00 00 00         JLE 0x0040ee45
0040ED8C  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0040ED92  8D 72 04                  LEA ESI,[EDX + 0x4]
LAB_0040ed95:
0040ED95  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0040ED98  8D 0C 85 02 00 00 00      LEA ECX,[EAX*0x4 + 0x2]
0040ED9F  51                        PUSH ECX
0040EDA0  8B 16                     MOV EDX,dword ptr [ESI]
0040EDA2  8D 04 95 02 00 00 00      LEA EAX,[EDX*0x4 + 0x2]
0040EDA9  50                        PUSH EAX
0040EDAA  8B 4E FC                  MOV ECX,dword ptr [ESI + -0x4]
0040EDAD  8D 14 8D 02 00 00 00      LEA EDX,[ECX*0x4 + 0x2]
0040EDB4  52                        PUSH EDX
0040EDB5  A1 1C 4D 7F 00            MOV EAX,[0x007f4d1c]
0040EDBA  50                        PUSH EAX
0040EDBB  8B 0D 10 4D 7F 00         MOV ECX,dword ptr [0x007f4d10]
0040EDC1  51                        PUSH ECX
0040EDC2  8B 15 0C 4D 7F 00         MOV EDX,dword ptr [0x007f4d0c]
0040EDC8  52                        PUSH EDX
0040EDC9  E8 92 C0 29 00            CALL 0x006aae60
0040EDCE  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0040EDD1  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
0040EDD4  C1 E0 02                  SHL EAX,0x2
0040EDD7  8B 0D 0C 4D 7F 00         MOV ECX,dword ptr [0x007f4d0c]
0040EDDD  2B C1                     SUB EAX,ECX
0040EDDF  83 C0 02                  ADD EAX,0x2
0040EDE2  8B 5D B4                  MOV EBX,dword ptr [EBP + -0x4c]
0040EDE5  8B 15 10 4D 7F 00         MOV EDX,dword ptr [0x007f4d10]
0040EDEB  2B DA                     SUB EBX,EDX
0040EDED  0F AF C3                  IMUL EAX,EBX
0040EDF0  8B 1E                     MOV EBX,dword ptr [ESI]
0040EDF2  C1 E3 02                  SHL EBX,0x2
0040EDF5  2B DA                     SUB EBX,EDX
0040EDF7  83 C3 02                  ADD EBX,0x2
0040EDFA  8B D7                     MOV EDX,EDI
0040EDFC  2B D1                     SUB EDX,ECX
0040EDFE  0F AF DA                  IMUL EBX,EDX
0040EE01  2B C3                     SUB EAX,EBX
0040EE03  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0040EE06  79 02                     JNS 0x0040ee0a
0040EE08  F7 D9                     NEG ECX
LAB_0040ee0a:
0040EE0A  03 C1                     ADD EAX,ECX
0040EE0C  99                        CDQ
0040EE0D  F7 7D 88                  IDIV dword ptr [EBP + -0x78]
0040EE10  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0040EE13  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0040EE16  3B D0                     CMP EDX,EAX
0040EE18  7E 05                     JLE 0x0040ee1f
0040EE1A  8B D0                     MOV EDX,EAX
0040EE1C  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
LAB_0040ee1f:
0040EE1F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0040EE22  3B C8                     CMP ECX,EAX
0040EE24  7D 05                     JGE 0x0040ee2b
0040EE26  8B C8                     MOV ECX,EAX
0040EE28  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_0040ee2b:
0040EE2B  8B 5D B0                  MOV EBX,dword ptr [EBP + -0x50]
0040EE2E  43                        INC EBX
0040EE2F  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
0040EE32  83 C6 14                  ADD ESI,0x14
0040EE35  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0040EE3A  3B D8                     CMP EBX,EAX
0040EE3C  0F 8C 53 FF FF FF         JL 0x0040ed95
0040EE42  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
LAB_0040ee45:
0040EE45  2B CA                     SUB ECX,EDX
0040EE47  2B 75 D4                  SUB ESI,dword ptr [EBP + -0x2c]
0040EE4A  3B F1                     CMP ESI,ECX
0040EE4C  0F 8C 01 01 00 00         JL 0x0040ef53
0040EE52  68 D0 F1 40 00            PUSH 0x40f1d0
0040EE57  6A 0C                     PUSH 0xc
0040EE59  50                        PUSH EAX
0040EE5A  A1 00 4D 7F 00            MOV EAX,[0x007f4d00]
0040EE5F  50                        PUSH EAX
0040EE60  E8 6B DE 29 00            CALL 0x006accd0
0040EE65  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
0040EE6C  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0040EE71  85 C0                     TEST EAX,EAX
0040EE73  0F 8E DA 01 00 00         JLE 0x0040f053
0040EE79  8B 0D 00 4D 7F 00         MOV ECX,dword ptr [0x007f4d00]
0040EE7F  8D 79 08                  LEA EDI,[ECX + 0x8]
LAB_0040ee82:
0040EE82  BB 30 75 00 00            MOV EBX,0x7530
0040EE87  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
0040EE8E  85 C0                     TEST EAX,EAX
0040EE90  7E 61                     JLE 0x0040eef3
0040EE92  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0040EE98  8D 72 04                  LEA ESI,[EDX + 0x4]
LAB_0040ee9b:
0040EE9B  8B 4E FC                  MOV ECX,dword ptr [ESI + -0x4]
0040EE9E  85 C9                     TEST ECX,ECX
0040EEA0  7C 3F                     JL 0x0040eee1
0040EEA2  8B 07                     MOV EAX,dword ptr [EDI]
0040EEA4  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0040EEA7  52                        PUSH EDX
0040EEA8  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0040EEAB  52                        PUSH EDX
0040EEAC  8B 00                     MOV EAX,dword ptr [EAX]
0040EEAE  50                        PUSH EAX
0040EEAF  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0040EEB2  52                        PUSH EDX
0040EEB3  8B 06                     MOV EAX,dword ptr [ESI]
0040EEB5  50                        PUSH EAX
0040EEB6  51                        PUSH ECX
0040EEB7  E8 A4 BF 29 00            CALL 0x006aae60
0040EEBC  8B C8                     MOV ECX,EAX
0040EEBE  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0040EEC1  2B 47 FC                  SUB EAX,dword ptr [EDI + -0x4]
0040EEC4  99                        CDQ
0040EEC5  33 C2                     XOR EAX,EDX
0040EEC7  2B C2                     SUB EAX,EDX
0040EEC9  03 C8                     ADD ECX,EAX
0040EECB  3B D9                     CMP EBX,ECX
0040EECD  7F 07                     JG 0x0040eed6
0040EECF  75 10                     JNZ 0x0040eee1
0040EED1  39 45 C4                  CMP dword ptr [EBP + -0x3c],EAX
0040EED4  7E 0B                     JLE 0x0040eee1
LAB_0040eed6:
0040EED6  8B D9                     MOV EBX,ECX
0040EED8  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0040EEDB  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0040EEDE  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
LAB_0040eee1:
0040EEE1  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0040EEE4  40                        INC EAX
0040EEE5  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0040EEE8  83 C6 14                  ADD ESI,0x14
0040EEEB  3B 05 20 4D 7F 00         CMP EAX,dword ptr [0x007f4d20]
0040EEF1  7C A8                     JL 0x0040ee9b
LAB_0040eef3:
0040EEF3  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0040EEF6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0040EEF9  C1 E0 02                  SHL EAX,0x2
0040EEFC  8B 17                     MOV EDX,dword ptr [EDI]
0040EEFE  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
0040EF04  8B 0C 08                  MOV ECX,dword ptr [EAX + ECX*0x1]
0040EF07  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0040EF0A  8B 17                     MOV EDX,dword ptr [EDI]
0040EF0C  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
0040EF12  8B 4C 08 04               MOV ECX,dword ptr [EAX + ECX*0x1 + 0x4]
0040EF16  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
0040EF19  8B 17                     MOV EDX,dword ptr [EDI]
0040EF1B  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
0040EF21  8B 4C 08 08               MOV ECX,dword ptr [EAX + ECX*0x1 + 0x8]
0040EF25  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
0040EF28  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0040EF2E  C7 04 10 FF FF FF FF      MOV dword ptr [EAX + EDX*0x1],0xffffffff
0040EF35  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0040EF38  41                        INC ECX
0040EF39  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
0040EF3C  83 C7 0C                  ADD EDI,0xc
0040EF3F  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0040EF44  3B C8                     CMP ECX,EAX
0040EF46  0F 8C 36 FF FF FF         JL 0x0040ee82
0040EF4C  33 C0                     XOR EAX,EAX
0040EF4E  E9 19 01 00 00            JMP 0x0040f06c
LAB_0040ef53:
0040EF53  68 20 F2 40 00            PUSH 0x40f220
0040EF58  6A 14                     PUSH 0x14
0040EF5A  50                        PUSH EAX
0040EF5B  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
0040EF60  50                        PUSH EAX
0040EF61  E8 6A DD 29 00            CALL 0x006accd0
0040EF66  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
0040EF6D  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0040EF72  85 C0                     TEST EAX,EAX
0040EF74  0F 8E D9 00 00 00         JLE 0x0040f053
0040EF7A  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
0040EF80  8D 71 04                  LEA ESI,[ECX + 0x4]
LAB_0040ef83:
0040EF83  BF 30 75 00 00            MOV EDI,0x7530
0040EF88  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
0040EF8F  85 C0                     TEST EAX,EAX
0040EF91  7E 64                     JLE 0x0040eff7
0040EF93  8B 15 00 4D 7F 00         MOV EDX,dword ptr [0x007f4d00]
0040EF99  8D 5A 08                  LEA EBX,[EDX + 0x8]
LAB_0040ef9c:
0040EF9C  8B 43 F8                  MOV EAX,dword ptr [EBX + -0x8]
0040EF9F  85 C0                     TEST EAX,EAX
0040EFA1  7C 42                     JL 0x0040efe5
0040EFA3  8B 03                     MOV EAX,dword ptr [EBX]
0040EFA5  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0040EFA8  51                        PUSH ECX
0040EFA9  8B 16                     MOV EDX,dword ptr [ESI]
0040EFAB  52                        PUSH EDX
0040EFAC  8B 4E FC                  MOV ECX,dword ptr [ESI + -0x4]
0040EFAF  51                        PUSH ECX
0040EFB0  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0040EFB3  52                        PUSH EDX
0040EFB4  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0040EFB7  51                        PUSH ECX
0040EFB8  8B 10                     MOV EDX,dword ptr [EAX]
0040EFBA  52                        PUSH EDX
0040EFBB  E8 A0 BE 29 00            CALL 0x006aae60
0040EFC0  8B C8                     MOV ECX,EAX
0040EFC2  8B 43 FC                  MOV EAX,dword ptr [EBX + -0x4]
0040EFC5  2B 46 0C                  SUB EAX,dword ptr [ESI + 0xc]
0040EFC8  99                        CDQ
0040EFC9  33 C2                     XOR EAX,EDX
0040EFCB  2B C2                     SUB EAX,EDX
0040EFCD  03 C8                     ADD ECX,EAX
0040EFCF  3B F9                     CMP EDI,ECX
0040EFD1  7F 07                     JG 0x0040efda
0040EFD3  75 10                     JNZ 0x0040efe5
0040EFD5  39 45 C4                  CMP dword ptr [EBP + -0x3c],EAX
0040EFD8  7E 0B                     JLE 0x0040efe5
LAB_0040efda:
0040EFDA  8B F9                     MOV EDI,ECX
0040EFDC  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0040EFDF  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0040EFE2  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
LAB_0040efe5:
0040EFE5  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0040EFE8  40                        INC EAX
0040EFE9  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0040EFEC  83 C3 0C                  ADD EBX,0xc
0040EFEF  3B 05 20 4D 7F 00         CMP EAX,dword ptr [0x007f4d20]
0040EFF5  7C A5                     JL 0x0040ef9c
LAB_0040eff7:
0040EFF7  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0040EFFA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0040EFFD  C1 E0 02                  SHL EAX,0x2
0040F000  8B 0D 00 4D 7F 00         MOV ECX,dword ptr [0x007f4d00]
0040F006  8B 54 08 08               MOV EDX,dword ptr [EAX + ECX*0x1 + 0x8]
0040F00A  8B 4E FC                  MOV ECX,dword ptr [ESI + -0x4]
0040F00D  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0040F010  8B 15 00 4D 7F 00         MOV EDX,dword ptr [0x007f4d00]
0040F016  8B 4C 10 08               MOV ECX,dword ptr [EAX + EDX*0x1 + 0x8]
0040F01A  8B 16                     MOV EDX,dword ptr [ESI]
0040F01C  89 51 10                  MOV dword ptr [ECX + 0x10],EDX
0040F01F  8B 0D 00 4D 7F 00         MOV ECX,dword ptr [0x007f4d00]
0040F025  8B 54 08 08               MOV EDX,dword ptr [EAX + ECX*0x1 + 0x8]
0040F029  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0040F02C  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
0040F02F  8B 15 00 4D 7F 00         MOV EDX,dword ptr [0x007f4d00]
0040F035  C7 04 10 FF FF FF FF      MOV dword ptr [EAX + EDX*0x1],0xffffffff
0040F03C  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0040F03F  41                        INC ECX
0040F040  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0040F043  83 C6 14                  ADD ESI,0x14
0040F046  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0040F04B  3B C8                     CMP ECX,EAX
0040F04D  0F 8C 30 FF FF FF         JL 0x0040ef83
LAB_0040f053:
0040F053  33 C0                     XOR EAX,EAX
0040F055  EB 15                     JMP 0x0040f06c
LAB_0040f06c:
0040F06C  8D A5 78 FF FF FF         LEA ESP,[EBP + 0xffffff78]
0040F072  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040F075  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0040F07C  5F                        POP EDI
0040F07D  5E                        POP ESI
0040F07E  5B                        POP EBX
0040F07F  8B E5                     MOV ESP,EBP
0040F081  5D                        POP EBP
0040F082  C3                        RET
