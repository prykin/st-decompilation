FUN_006eff90:
006EFF90  55                        PUSH EBP
006EFF91  8B EC                     MOV EBP,ESP
006EFF93  83 EC 4C                  SUB ESP,0x4c
006EFF96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EFF9B  53                        PUSH EBX
006EFF9C  56                        PUSH ESI
006EFF9D  57                        PUSH EDI
006EFF9E  8D 55 B8                  LEA EDX,[EBP + -0x48]
006EFFA1  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006EFFA4  6A 00                     PUSH 0x0
006EFFA6  52                        PUSH EDX
006EFFA7  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006EFFAA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EFFB0  E8 3B D8 03 00            CALL 0x0072d7f0
006EFFB5  8B F0                     MOV ESI,EAX
006EFFB7  83 C4 08                  ADD ESP,0x8
006EFFBA  85 F6                     TEST ESI,ESI
006EFFBC  0F 85 92 01 00 00         JNZ 0x006f0154
006EFFC2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EFFC5  85 F6                     TEST ESI,ESI
006EFFC7  75 17                     JNZ 0x006effe0
006EFFC9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006EFFCE  68 7B 01 00 00            PUSH 0x17b
006EFFD3  68 88 EF 7E 00            PUSH 0x7eef88
006EFFD8  50                        PUSH EAX
006EFFD9  6A CC                     PUSH -0x34
006EFFDB  E8 60 5E FB FF            CALL 0x006a5e40
LAB_006effe0:
006EFFE0  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006EFFE3  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006EFFE6  85 DB                     TEST EBX,EBX
006EFFE8  7C 28                     JL 0x006f0012
006EFFEA  0F BF 0E                  MOVSX ECX,word ptr [ESI]
006EFFED  3B D9                     CMP EBX,ECX
006EFFEF  7D 21                     JGE 0x006f0012
006EFFF1  85 FF                     TEST EDI,EDI
006EFFF3  7C 1D                     JL 0x006f0012
006EFFF5  0F BF 56 02               MOVSX EDX,word ptr [ESI + 0x2]
006EFFF9  3B FA                     CMP EDI,EDX
006EFFFB  7D 15                     JGE 0x006f0012
006EFFFD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F0000  85 C0                     TEST EAX,EAX
006F0002  7C 0E                     JL 0x006f0012
006F0004  83 F8 06                  CMP EAX,0x6
006F0007  7D 09                     JGE 0x006f0012
006F0009  F7 45 1C FF 7F 00 00      TEST dword ptr [EBP + 0x1c],0x7fff
006F0010  75 1A                     JNZ 0x006f002c
LAB_006f0012:
006F0012  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F0017  68 7C 01 00 00            PUSH 0x17c
006F001C  68 88 EF 7E 00            PUSH 0x7eef88
006F0021  50                        PUSH EAX
006F0022  6A CC                     PUSH -0x34
006F0024  E8 17 5E FB FF            CALL 0x006a5e40
006F0029  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_006f002c:
006F002C  50                        PUSH EAX
006F002D  57                        PUSH EDI
006F002E  53                        PUSH EBX
006F002F  56                        PUSH ESI
006F0030  E8 6B 01 00 00            CALL 0x006f01a0
006F0035  8B C7                     MOV EAX,EDI
006F0037  83 C4 10                  ADD ESP,0x10
006F003A  99                        CDQ
006F003B  2B C2                     SUB EAX,EDX
006F003D  6A 50                     PUSH 0x50
006F003F  8B F8                     MOV EDI,EAX
006F0041  8B C3                     MOV EAX,EBX
006F0043  99                        CDQ
006F0044  2B C2                     SUB EAX,EDX
006F0046  D1 F8                     SAR EAX,0x1
006F0048  D1 FF                     SAR EDI,0x1
006F004A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F004D  E8 BE AB FB FF            CALL 0x006aac10
006F0052  8B D8                     MOV EBX,EAX
006F0054  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F0057  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
006F005B  99                        CDQ
006F005C  2B C2                     SUB EAX,EDX
006F005E  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F0061  8B D8                     MOV EBX,EAX
006F0063  0F BF 06                  MOVSX EAX,word ptr [ESI]
006F0066  D1 FB                     SAR EBX,0x1
006F0068  0F AF 5D 14               IMUL EBX,dword ptr [EBP + 0x14]
006F006C  99                        CDQ
006F006D  2B C2                     SUB EAX,EDX
006F006F  03 DF                     ADD EBX,EDI
006F0071  D1 F8                     SAR EAX,0x1
006F0073  0F AF D8                  IMUL EBX,EAX
006F0076  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F0079  03 D9                     ADD EBX,ECX
006F007B  89 94 9E 59 04 00 00      MOV dword ptr [ESI + EBX*0x4 + 0x459],EDX
006F0082  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006F0085  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
006F0089  99                        CDQ
006F008A  2B C2                     SUB EAX,EDX
006F008C  8B D0                     MOV EDX,EAX
006F008E  D1 FA                     SAR EDX,0x1
006F0090  0F AF D3                  IMUL EDX,EBX
006F0093  0F BF 06                  MOVSX EAX,word ptr [ESI]
006F0096  03 D7                     ADD EDX,EDI
006F0098  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F009B  99                        CDQ
006F009C  2B C2                     SUB EAX,EDX
006F009E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F00A1  D1 F8                     SAR EAX,0x1
006F00A3  0F AF D0                  IMUL EDX,EAX
006F00A6  03 D1                     ADD EDX,ECX
006F00A8  8B BC 96 59 04 00 00      MOV EDI,dword ptr [ESI + EDX*0x4 + 0x459]
006F00AF  66 8B 55 1C               MOV DX,word ptr [EBP + 0x1c]
006F00B3  8D 47 4A                  LEA EAX,[EDI + 0x4a]
006F00B6  8B C8                     MOV ECX,EAX
006F00B8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F00BB  89 01                     MOV dword ptr [ECX],EAX
006F00BD  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006F00C1  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
006F00C5  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006F00C9  66 89 4F 04               MOV word ptr [EDI + 0x4],CX
006F00CD  8B 4D 1A                  MOV ECX,dword ptr [EBP + 0x1a]
006F00D0  66 89 57 06               MOV word ptr [EDI + 0x6],DX
006F00D4  66 85 C9                  TEST CX,CX
006F00D7  66 89 5F 08               MOV word ptr [EDI + 0x8],BX
006F00DB  74 1D                     JZ 0x006f00fa
006F00DD  81 E1 FF 7F 00 00         AND ECX,0x7fff
006F00E3  51                        PUSH ECX
006F00E4  6A 03                     PUSH 0x3
006F00E6  68 B4 FA 7D 00            PUSH 0x7dfab4
006F00EB  E8 10 2B 00 00            CALL 0x006f2c00
006F00F0  8B D8                     MOV EBX,EAX
006F00F2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F00F5  83 C4 0C                  ADD ESP,0xc
006F00F8  EB 02                     JMP 0x006f00fc
LAB_006f00fa:
006F00FA  33 DB                     XOR EBX,EBX
LAB_006f00fc:
006F00FC  66 85 C0                  TEST AX,AX
006F00FF  74 17                     JZ 0x006f0118
006F0101  25 FF 7F 00 00            AND EAX,0x7fff
006F0106  50                        PUSH EAX
006F0107  6A 03                     PUSH 0x3
006F0109  68 B4 FA 7D 00            PUSH 0x7dfab4
006F010E  E8 ED 2A 00 00            CALL 0x006f2c00
006F0113  83 C4 0C                  ADD ESP,0xc
006F0116  EB 02                     JMP 0x006f011a
LAB_006f0118:
006F0118  33 C0                     XOR EAX,EAX
LAB_006f011a:
006F011A  53                        PUSH EBX
006F011B  50                        PUSH EAX
006F011C  57                        PUSH EDI
006F011D  56                        PUSH ESI
006F011E  E8 1D F3 FF FF            CALL 0x006ef440
006F0123  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F0126  25 FF 7F 00 00            AND EAX,0x7fff
006F012B  50                        PUSH EAX
006F012C  6A 03                     PUSH 0x3
006F012E  68 C0 FA 7D 00            PUSH 0x7dfac0
006F0133  E8 C8 2A 00 00            CALL 0x006f2c00
006F0138  50                        PUSH EAX
006F0139  57                        PUSH EDI
006F013A  56                        PUSH ESI
006F013B  E8 F0 F3 FF FF            CALL 0x006ef530
006F0140  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006F0143  83 C4 28                  ADD ESP,0x28
006F0146  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F014B  33 C0                     XOR EAX,EAX
006F014D  5F                        POP EDI
006F014E  5E                        POP ESI
006F014F  5B                        POP EBX
006F0150  8B E5                     MOV ESP,EBP
006F0152  5D                        POP EBP
006F0153  C3                        RET
LAB_006f0154:
006F0154  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006F0157  68 24 F0 7E 00            PUSH 0x7ef024
006F015C  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F0161  56                        PUSH ESI
006F0162  6A 00                     PUSH 0x0
006F0164  68 90 01 00 00            PUSH 0x190
006F0169  68 88 EF 7E 00            PUSH 0x7eef88
006F016E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0174  E8 57 D3 FB FF            CALL 0x006ad4d0
006F0179  83 C4 18                  ADD ESP,0x18
006F017C  85 C0                     TEST EAX,EAX
006F017E  74 01                     JZ 0x006f0181
006F0180  CC                        INT3
LAB_006f0181:
006F0181  68 92 01 00 00            PUSH 0x192
006F0186  68 88 EF 7E 00            PUSH 0x7eef88
006F018B  6A 00                     PUSH 0x0
006F018D  56                        PUSH ESI
006F018E  E8 AD 5C FB FF            CALL 0x006a5e40
006F0193  8B C6                     MOV EAX,ESI
006F0195  5F                        POP EDI
006F0196  5E                        POP ESI
006F0197  5B                        POP EBX
006F0198  8B E5                     MOV ESP,EBP
006F019A  5D                        POP EBP
006F019B  C3                        RET
