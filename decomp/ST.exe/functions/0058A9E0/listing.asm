FUN_0058a9e0:
0058A9E0  55                        PUSH EBP
0058A9E1  8B EC                     MOV EBP,ESP
0058A9E3  83 EC 08                  SUB ESP,0x8
0058A9E6  53                        PUSH EBX
0058A9E7  56                        PUSH ESI
0058A9E8  8B F1                     MOV ESI,ECX
0058A9EA  57                        PUSH EDI
0058A9EB  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0058A9EF  66 85 C0                  TEST AX,AX
0058A9F2  0F BF C8                  MOVSX ECX,AX
0058A9F5  B8 79 19 8C 02            MOV EAX,0x28c1979
0058A9FA  7C 10                     JL 0x0058aa0c
0058A9FC  F7 E9                     IMUL ECX
0058A9FE  D1 FA                     SAR EDX,0x1
0058AA00  8B C2                     MOV EAX,EDX
0058AA02  C1 E8 1F                  SHR EAX,0x1f
0058AA05  03 D0                     ADD EDX,EAX
0058AA07  0F BF C2                  MOVSX EAX,DX
0058AA0A  EB 0F                     JMP 0x0058aa1b
LAB_0058aa0c:
0058AA0C  F7 E9                     IMUL ECX
0058AA0E  D1 FA                     SAR EDX,0x1
0058AA10  8B CA                     MOV ECX,EDX
0058AA12  C1 E9 1F                  SHR ECX,0x1f
0058AA15  03 D1                     ADD EDX,ECX
0058AA17  0F BF C2                  MOVSX EAX,DX
0058AA1A  48                        DEC EAX
LAB_0058aa1b:
0058AA1B  66 89 46 47               MOV word ptr [ESI + 0x47],AX
0058AA1F  66 89 46 5B               MOV word ptr [ESI + 0x5b],AX
0058AA23  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0058AA27  66 85 C0                  TEST AX,AX
0058AA2A  0F BF C8                  MOVSX ECX,AX
0058AA2D  B8 79 19 8C 02            MOV EAX,0x28c1979
0058AA32  7C 10                     JL 0x0058aa44
0058AA34  F7 E9                     IMUL ECX
0058AA36  D1 FA                     SAR EDX,0x1
0058AA38  8B C2                     MOV EAX,EDX
0058AA3A  C1 E8 1F                  SHR EAX,0x1f
0058AA3D  03 D0                     ADD EDX,EAX
0058AA3F  0F BF C2                  MOVSX EAX,DX
0058AA42  EB 0F                     JMP 0x0058aa53
LAB_0058aa44:
0058AA44  F7 E9                     IMUL ECX
0058AA46  D1 FA                     SAR EDX,0x1
0058AA48  8B CA                     MOV ECX,EDX
0058AA4A  C1 E9 1F                  SHR ECX,0x1f
0058AA4D  03 D1                     ADD EDX,ECX
0058AA4F  0F BF C2                  MOVSX EAX,DX
0058AA52  48                        DEC EAX
LAB_0058aa53:
0058AA53  66 89 46 49               MOV word ptr [ESI + 0x49],AX
0058AA57  66 89 46 5D               MOV word ptr [ESI + 0x5d],AX
0058AA5B  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0058AA5F  66 85 C0                  TEST AX,AX
0058AA62  0F BF C8                  MOVSX ECX,AX
0058AA65  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058AA6A  7C 11                     JL 0x0058aa7d
0058AA6C  F7 E9                     IMUL ECX
0058AA6E  C1 FA 06                  SAR EDX,0x6
0058AA71  8B C2                     MOV EAX,EDX
0058AA73  C1 E8 1F                  SHR EAX,0x1f
0058AA76  03 D0                     ADD EDX,EAX
0058AA78  0F BF C2                  MOVSX EAX,DX
0058AA7B  EB 10                     JMP 0x0058aa8d
LAB_0058aa7d:
0058AA7D  F7 E9                     IMUL ECX
0058AA7F  C1 FA 06                  SAR EDX,0x6
0058AA82  8B CA                     MOV ECX,EDX
0058AA84  C1 E9 1F                  SHR ECX,0x1f
0058AA87  03 D1                     ADD EDX,ECX
0058AA89  0F BF C2                  MOVSX EAX,DX
0058AA8C  48                        DEC EAX
LAB_0058aa8d:
0058AA8D  8B CE                     MOV ECX,ESI
0058AA8F  66 89 46 4B               MOV word ptr [ESI + 0x4b],AX
0058AA93  66 89 46 5F               MOV word ptr [ESI + 0x5f],AX
0058AA97  E8 A0 6F E7 FF            CALL 0x00401a3c
0058AA9C  85 C0                     TEST EAX,EAX
0058AA9E  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
0058AAA4  74 19                     JZ 0x0058aabf
0058AAA6  6A 01                     PUSH 0x1
0058AAA8  8B CB                     MOV ECX,EBX
0058AAAA  E8 1D A8 E7 FF            CALL 0x004052cc
0058AAAF  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058AAB5  50                        PUSH EAX
0058AAB6  E8 35 01 16 00            CALL 0x006eabf0
0058AABB  6A 01                     PUSH 0x1
0058AABD  EB 26                     JMP 0x0058aae5
LAB_0058aabf:
0058AABF  6A 00                     PUSH 0x0
0058AAC1  8B CB                     MOV ECX,EBX
0058AAC3  E8 04 A8 E7 FF            CALL 0x004052cc
0058AAC8  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058AACE  50                        PUSH EAX
0058AACF  E8 1C 01 16 00            CALL 0x006eabf0
0058AAD4  8B CE                     MOV ECX,ESI
0058AAD6  E8 FD A5 E7 FF            CALL 0x004050d8
0058AADB  83 F8 01                  CMP EAX,0x1
0058AADE  75 03                     JNZ 0x0058aae3
0058AAE0  50                        PUSH EAX
0058AAE1  EB 02                     JMP 0x0058aae5
LAB_0058aae3:
0058AAE3  6A 00                     PUSH 0x0
LAB_0058aae5:
0058AAE5  8B CB                     MOV ECX,EBX
0058AAE7  E8 E0 A7 E7 FF            CALL 0x004052cc
0058AAEC  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058AAF2  50                        PUSH EAX
0058AAF3  E8 78 BD 15 00            CALL 0x006e6870
0058AAF8  8B 9E A5 02 00 00         MOV EBX,dword ptr [ESI + 0x2a5]
0058AAFE  81 FB F8 00 00 00         CMP EBX,0xf8
0058AB04  74 12                     JZ 0x0058ab18
0058AB06  81 FB F9 00 00 00         CMP EBX,0xf9
0058AB0C  74 0A                     JZ 0x0058ab18
0058AB0E  BF 06 00 00 00            MOV EDI,0x6
0058AB13  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0058AB16  EB 0A                     JMP 0x0058ab22
LAB_0058ab18:
0058AB18  C7 45 F8 08 00 00 00      MOV dword ptr [EBP + -0x8],0x8
0058AB1F  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0058ab22:
0058AB22  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0058AB28  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0058AB2E  8B 96 45 02 00 00         MOV EDX,dword ptr [ESI + 0x245]
0058AB34  8B C8                     MOV ECX,EAX
0058AB36  2B CA                     SUB ECX,EDX
0058AB38  83 F9 02                  CMP ECX,0x2
0058AB3B  76 3E                     JBE 0x0058ab7b
0058AB3D  89 86 45 02 00 00         MOV dword ptr [ESI + 0x245],EAX
0058AB43  8B 86 31 02 00 00         MOV EAX,dword ptr [ESI + 0x231]
0058AB49  40                        INC EAX
0058AB4A  C7 86 35 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x235],0x0
0058AB54  99                        CDQ
0058AB55  F7 FF                     IDIV EDI
0058AB57  85 D2                     TEST EDX,EDX
0058AB59  89 96 31 02 00 00         MOV dword ptr [ESI + 0x231],EDX
0058AB5F  74 1A                     JZ 0x0058ab7b
0058AB61  8B CF                     MOV ECX,EDI
0058AB63  2B CA                     SUB ECX,EDX
0058AB65  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0058AB68  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0058AB6B  D1 E0                     SHL EAX,0x1
0058AB6D  2B C1                     SUB EAX,ECX
0058AB6F  C1 E0 05                  SHL EAX,0x5
0058AB72  99                        CDQ
0058AB73  F7 FF                     IDIV EDI
0058AB75  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
LAB_0058ab7b:
0058AB7B  83 BE 49 02 00 00 01      CMP dword ptr [ESI + 0x249],0x1
0058AB82  0F 85 9D 01 00 00         JNZ 0x0058ad25
0058AB88  8B 86 81 02 00 00         MOV EAX,dword ptr [ESI + 0x281]
0058AB8E  85 C0                     TEST EAX,EAX
0058AB90  0F 85 06 01 00 00         JNZ 0x0058ac9c
0058AB96  0F BF 4E 4E               MOVSX ECX,word ptr [ESI + 0x4e]
0058AB9A  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0058AB9E  8D 56 4E                  LEA EDX,[ESI + 0x4e]
0058ABA1  2B C1                     SUB EAX,ECX
0058ABA3  79 02                     JNS 0x0058aba7
0058ABA5  F7 D8                     NEG EAX
LAB_0058aba7:
0058ABA7  83 F8 14                  CMP EAX,0x14
0058ABAA  7F 37                     JG 0x0058abe3
0058ABAC  0F BF 5E 50               MOVSX EBX,word ptr [ESI + 0x50]
0058ABB0  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0058ABB4  8D 4E 50                  LEA ECX,[ESI + 0x50]
0058ABB7  2B C3                     SUB EAX,EBX
0058ABB9  79 02                     JNS 0x0058abbd
0058ABBB  F7 D8                     NEG EAX
LAB_0058abbd:
0058ABBD  83 F8 14                  CMP EAX,0x14
0058ABC0  7F 21                     JG 0x0058abe3
0058ABC2  8D 46 6C                  LEA EAX,[ESI + 0x6c]
0058ABC5  50                        PUSH EAX
0058ABC6  8D 46 52                  LEA EAX,[ESI + 0x52]
0058ABC9  50                        PUSH EAX
0058ABCA  51                        PUSH ECX
0058ABCB  52                        PUSH EDX
0058ABCC  8B CE                     MOV ECX,ESI
0058ABCE  E8 32 6E E7 FF            CALL 0x00401a05
0058ABD3  89 86 49 02 00 00         MOV dword ptr [ESI + 0x249],EAX
0058ABD9  C7 86 4D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x24d],0x0
LAB_0058abe3:
0058ABE3  8B 8E 51 02 00 00         MOV ECX,dword ptr [ESI + 0x251]
0058ABE9  8B 96 5D 02 00 00         MOV EDX,dword ptr [ESI + 0x25d]
0058ABEF  8B 9E A5 02 00 00         MOV EBX,dword ptr [ESI + 0x2a5]
0058ABF5  03 D1                     ADD EDX,ECX
0058ABF7  8B 8E 61 02 00 00         MOV ECX,dword ptr [ESI + 0x261]
0058ABFD  89 96 5D 02 00 00         MOV dword ptr [ESI + 0x25d],EDX
0058AC03  8B 96 55 02 00 00         MOV EDX,dword ptr [ESI + 0x255]
0058AC09  03 CA                     ADD ECX,EDX
0058AC0B  81 FB F8 00 00 00         CMP EBX,0xf8
0058AC11  89 8E 61 02 00 00         MOV dword ptr [ESI + 0x261],ECX
0058AC17  74 08                     JZ 0x0058ac21
0058AC19  81 FB F9 00 00 00         CMP EBX,0xf9
0058AC1F  75 41                     JNZ 0x0058ac62
LAB_0058ac21:
0058AC21  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
0058AC27  8B 86 69 02 00 00         MOV EAX,dword ptr [ESI + 0x269]
0058AC2D  0F AF C1                  IMUL EAX,ECX
0058AC30  8B BE 39 02 00 00         MOV EDI,dword ptr [ESI + 0x239]
0058AC36  99                        CDQ
0058AC37  F7 FF                     IDIV EDI
0058AC39  03 86 5D 02 00 00         ADD EAX,dword ptr [ESI + 0x25d]
0058AC3F  89 86 5D 02 00 00         MOV dword ptr [ESI + 0x25d],EAX
0058AC45  8B 86 6D 02 00 00         MOV EAX,dword ptr [ESI + 0x26d]
0058AC4B  0F AF C1                  IMUL EAX,ECX
0058AC4E  99                        CDQ
0058AC4F  F7 FF                     IDIV EDI
0058AC51  8B 8E 61 02 00 00         MOV ECX,dword ptr [ESI + 0x261]
0058AC57  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0058AC5A  03 C1                     ADD EAX,ECX
0058AC5C  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
LAB_0058ac62:
0058AC62  8B 86 5D 02 00 00         MOV EAX,dword ptr [ESI + 0x25d]
0058AC68  99                        CDQ
0058AC69  81 E2 FF 00 00 00         AND EDX,0xff
0058AC6F  03 C2                     ADD EAX,EDX
0058AC71  C1 F8 08                  SAR EAX,0x8
0058AC74  66 03 86 75 02 00 00      ADD AX,word ptr [ESI + 0x275]
0058AC7B  66 89 46 41               MOV word ptr [ESI + 0x41],AX
0058AC7F  8B 86 61 02 00 00         MOV EAX,dword ptr [ESI + 0x261]
0058AC85  99                        CDQ
0058AC86  81 E2 FF 00 00 00         AND EDX,0xff
0058AC8C  03 C2                     ADD EAX,EDX
0058AC8E  C1 F8 08                  SAR EAX,0x8
0058AC91  66 03 86 79 02 00 00      ADD AX,word ptr [ESI + 0x279]
0058AC98  66 89 46 43               MOV word ptr [ESI + 0x43],AX
LAB_0058ac9c:
0058AC9C  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0058ACA2  8B 8E 65 02 00 00         MOV ECX,dword ptr [ESI + 0x265]
0058ACA8  03 C8                     ADD ECX,EAX
0058ACAA  81 FB F8 00 00 00         CMP EBX,0xf8
0058ACB0  89 8E 65 02 00 00         MOV dword ptr [ESI + 0x265],ECX
0058ACB6  74 08                     JZ 0x0058acc0
0058ACB8  81 FB F9 00 00 00         CMP EBX,0xf9
0058ACBE  75 1C                     JNZ 0x0058acdc
LAB_0058acc0:
0058ACC0  8B 86 71 02 00 00         MOV EAX,dword ptr [ESI + 0x271]
0058ACC6  0F AF 86 35 02 00 00      IMUL EAX,dword ptr [ESI + 0x235]
0058ACCD  99                        CDQ
0058ACCE  F7 BE 39 02 00 00         IDIV dword ptr [ESI + 0x239]
0058ACD4  03 C1                     ADD EAX,ECX
0058ACD6  89 86 65 02 00 00         MOV dword ptr [ESI + 0x265],EAX
LAB_0058acdc:
0058ACDC  8B 86 65 02 00 00         MOV EAX,dword ptr [ESI + 0x265]
0058ACE2  8B 8E 81 02 00 00         MOV ECX,dword ptr [ESI + 0x281]
0058ACE8  99                        CDQ
0058ACE9  81 E2 FF 00 00 00         AND EDX,0xff
0058ACEF  03 C2                     ADD EAX,EDX
0058ACF1  C1 F8 08                  SAR EAX,0x8
0058ACF4  66 03 86 7D 02 00 00      ADD AX,word ptr [ESI + 0x27d]
0058ACFB  85 C9                     TEST ECX,ECX
0058ACFD  66 89 46 45               MOV word ptr [ESI + 0x45],AX
0058AD01  74 52                     JZ 0x0058ad55
0058AD03  0F BF 4E 52               MOVSX ECX,word ptr [ESI + 0x52]
0058AD07  0F BF C0                  MOVSX EAX,AX
0058AD0A  2B C1                     SUB EAX,ECX
0058AD0C  79 02                     JNS 0x0058ad10
0058AD0E  F7 D8                     NEG EAX
LAB_0058ad10:
0058AD10  83 F8 09                  CMP EAX,0x9
0058AD13  7F 40                     JG 0x0058ad55
0058AD15  33 C0                     XOR EAX,EAX
0058AD17  89 86 59 02 00 00         MOV dword ptr [ESI + 0x259],EAX
0058AD1D  89 86 81 02 00 00         MOV dword ptr [ESI + 0x281],EAX
0058AD23  EB 30                     JMP 0x0058ad55
LAB_0058ad25:
0058AD25  83 BE 4D 02 00 00 0C      CMP dword ptr [ESI + 0x24d],0xc
0058AD2C  76 27                     JBE 0x0058ad55
0058AD2E  8D 56 6C                  LEA EDX,[ESI + 0x6c]
0058AD31  8D 46 52                  LEA EAX,[ESI + 0x52]
0058AD34  52                        PUSH EDX
0058AD35  8D 4E 50                  LEA ECX,[ESI + 0x50]
0058AD38  50                        PUSH EAX
0058AD39  8D 56 4E                  LEA EDX,[ESI + 0x4e]
0058AD3C  51                        PUSH ECX
0058AD3D  52                        PUSH EDX
0058AD3E  8B CE                     MOV ECX,ESI
0058AD40  E8 C0 6C E7 FF            CALL 0x00401a05
0058AD45  89 86 49 02 00 00         MOV dword ptr [ESI + 0x249],EAX
0058AD4B  C7 86 4D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x24d],0x0
LAB_0058ad55:
0058AD55  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0058AD59  8B 8E 81 02 00 00         MOV ECX,dword ptr [ESI + 0x281]
0058AD5F  66 6B C0 2D               IMUL AX,AX,0x2d
0058AD63  85 C9                     TEST ECX,ECX
0058AD65  66 89 45 FE               MOV word ptr [EBP + -0x2],AX
0058AD69  66 89 46 6C               MOV word ptr [ESI + 0x6c],AX
0058AD6D  74 0D                     JZ 0x0058ad7c
0058AD6F  8B 8E 31 02 00 00         MOV ECX,dword ptr [ESI + 0x231]
0058AD75  8D 0C F9                  LEA ECX,[ECX + EDI*0x8]
0058AD78  8B F9                     MOV EDI,ECX
0058AD7A  EB 76                     JMP 0x0058adf2
LAB_0058ad7c:
0058AD7C  0F BF C8                  MOVSX ECX,AX
0058AD7F  B8 89 88 88 88            MOV EAX,0x88888889
0058AD84  8B 9E 31 02 00 00         MOV EBX,dword ptr [ESI + 0x231]
0058AD8A  F7 E9                     IMUL ECX
0058AD8C  03 D1                     ADD EDX,ECX
0058AD8E  B9 18 00 00 00            MOV ECX,0x18
0058AD93  C1 FA 03                  SAR EDX,0x3
0058AD96  8B C2                     MOV EAX,EDX
0058AD98  C1 E8 1F                  SHR EAX,0x1f
0058AD9B  03 D0                     ADD EDX,EAX
0058AD9D  B8 18 00 00 00            MOV EAX,0x18
0058ADA2  2B C2                     SUB EAX,EDX
0058ADA4  99                        CDQ
0058ADA5  F7 F9                     IDIV ECX
0058ADA7  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
0058ADAD  B8 04 00 00 00            MOV EAX,0x4
0058ADB2  2B C1                     SUB EAX,ECX
0058ADB4  B9 18 00 00 00            MOV ECX,0x18
0058ADB9  8B FA                     MOV EDI,EDX
0058ADBB  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0058ADBE  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
0058ADC1  99                        CDQ
0058ADC2  F7 F9                     IDIV ECX
0058ADC4  B8 56 55 55 55            MOV EAX,0x55555556
0058ADC9  F7 EA                     IMUL EDX
0058ADCB  8B CA                     MOV ECX,EDX
0058ADCD  B8 56 55 55 55            MOV EAX,0x55555556
0058ADD2  C1 EA 1F                  SHR EDX,0x1f
0058ADD5  03 CA                     ADD ECX,EDX
0058ADD7  F7 EF                     IMUL EDI
0058ADD9  0F AF 4D F8               IMUL ECX,dword ptr [EBP + -0x8]
0058ADDD  8B C2                     MOV EAX,EDX
0058ADDF  03 CB                     ADD ECX,EBX
0058ADE1  C1 E8 1F                  SHR EAX,0x1f
0058ADE4  03 D0                     ADD EDX,EAX
0058ADE6  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
0058ADEA  8B FA                     MOV EDI,EDX
0058ADEC  0F AF 7D F8               IMUL EDI,dword ptr [EBP + -0x8]
0058ADF0  03 FB                     ADD EDI,EBX
LAB_0058adf2:
0058ADF2  0F BF D8                  MOVSX EBX,AX
0058ADF5  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0058ADFA  51                        PUSH ECX
0058ADFB  F7 EB                     IMUL EBX
0058ADFD  03 D3                     ADD EDX,EBX
0058ADFF  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
0058AE05  C1 FA 05                  SAR EDX,0x5
0058AE08  8B C2                     MOV EAX,EDX
0058AE0A  6A 0E                     PUSH 0xe
0058AE0C  C1 E8 1F                  SHR EAX,0x1f
0058AE0F  03 D0                     ADD EDX,EAX
0058AE11  8B CB                     MOV ECX,EBX
0058AE13  66 89 56 6C               MOV word ptr [ESI + 0x6c],DX
0058AE17  E8 48 62 E7 FF            CALL 0x00401064
0058AE1C  57                        PUSH EDI
0058AE1D  6A 0E                     PUSH 0xe
0058AE1F  8B CB                     MOV ECX,EBX
0058AE21  E8 D8 A4 E7 FF            CALL 0x004052fe
0058AE26  6A 0E                     PUSH 0xe
0058AE28  8B CB                     MOV ECX,EBX
0058AE2A  E8 8D 82 E7 FF            CALL 0x004030bc
0058AE2F  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
0058AE35  8B 16                     MOV EDX,dword ptr [ESI]
0058AE37  40                        INC EAX
0058AE38  8B CE                     MOV ECX,ESI
0058AE3A  89 86 4D 02 00 00         MOV dword ptr [ESI + 0x24d],EAX
0058AE40  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0058AE46  5F                        POP EDI
0058AE47  5E                        POP ESI
0058AE48  5B                        POP EBX
0058AE49  8B E5                     MOV ESP,EBP
0058AE4B  5D                        POP EBP
0058AE4C  C3                        RET
