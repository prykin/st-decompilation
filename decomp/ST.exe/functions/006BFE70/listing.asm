FUN_006bfe70:
006BFE70  55                        PUSH EBP
006BFE71  8B EC                     MOV EBP,ESP
006BFE73  83 EC 1C                  SUB ESP,0x1c
006BFE76  53                        PUSH EBX
006BFE77  56                        PUSH ESI
006BFE78  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006BFE7B  33 DB                     XOR EBX,EBX
006BFE7D  57                        PUSH EDI
006BFE7E  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006BFE81  66 83 7E 4C 01            CMP word ptr [ESI + 0x4c],0x1
006BFE86  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006BFE89  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006BFE8C  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006BFE8F  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006BFE92  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006BFE95  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006BFE98  0F 85 87 00 00 00         JNZ 0x006bff25
006BFE9E  F6 C4 20                  TEST AH,0x20
006BFEA1  74 20                     JZ 0x006bfec3
006BFEA3  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006BFEA6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BFEA9  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006BFEAC  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006BFEAF  57                        PUSH EDI
006BFEB0  50                        PUSH EAX
006BFEB1  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006BFEB4  51                        PUSH ECX
006BFEB5  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006BFEB8  51                        PUSH ECX
006BFEB9  E8 D2 FC FF FF            CALL 0x006bfb90
006BFEBE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006BFEC1  EB 32                     JMP 0x006bfef5
LAB_006bfec3:
006BFEC3  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
006BFEC6  8B 41 16                  MOV EAX,dword ptr [ECX + 0x16]
006BFEC9  3B C3                     CMP EAX,EBX
006BFECB  75 12                     JNZ 0x006bfedf
006BFECD  66 8B 01                  MOV AX,word ptr [ECX]
006BFED0  66 48                     DEC AX
006BFED2  66 F7 D8                  NEG AX
006BFED5  1B C0                     SBB EAX,EAX
006BFED7  83 E0 24                  AND EAX,0x24
006BFEDA  83 C0 1A                  ADD EAX,0x1a
006BFEDD  03 C1                     ADD EAX,ECX
LAB_006bfedf:
006BFEDF  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006BFEE2  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006BFEE5  03 D0                     ADD EDX,EAX
006BFEE7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BFEEA  57                        PUSH EDI
006BFEEB  52                        PUSH EDX
006BFEEC  50                        PUSH EAX
006BFEED  E8 7E DB 06 00            CALL 0x0072da70
006BFEF2  83 C4 0C                  ADD ESP,0xc
LAB_006bfef5:
006BFEF5  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006BFEF8  8B C7                     MOV EAX,EDI
006BFEFA  03 D7                     ADD EDX,EDI
006BFEFC  33 C9                     XOR ECX,ECX
006BFEFE  66 8B 8E 96 00 00 00      MOV CX,word ptr [ESI + 0x96]
006BFF05  89 56 28                  MOV dword ptr [ESI + 0x28],EDX
006BFF08  99                        CDQ
006BFF09  F7 F9                     IDIV ECX
006BFF0B  8B 8E C0 00 00 00         MOV ECX,dword ptr [ESI + 0xc0]
006BFF11  5F                        POP EDI
006BFF12  2B C8                     SUB ECX,EAX
006BFF14  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006BFF17  89 8E C0 00 00 00         MOV dword ptr [ESI + 0xc0],ECX
006BFF1D  5E                        POP ESI
006BFF1E  5B                        POP EBX
006BFF1F  8B E5                     MOV ESP,EBP
006BFF21  5D                        POP EBP
006BFF22  C2 0C 00                  RET 0xc
LAB_006bff25:
006BFF25  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006BFF28  F6 C4 20                  TEST AH,0x20
006BFF2B  74 4E                     JZ 0x006bff7b
006BFF2D  8B 56 5E                  MOV EDX,dword ptr [ESI + 0x5e]
006BFF30  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006BFF33  8B 1D 78 68 85 00         MOV EBX,dword ptr [0x00856878]
006BFF39  8D 4C 02 3E               LEA ECX,[EDX + EAX*0x1 + 0x3e]
006BFF3D  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006BFF40  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006BFF43  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
006BFF46  3B D1                     CMP EDX,ECX
006BFF48  7E 04                     JLE 0x006bff4e
006BFF4A  8B D9                     MOV EBX,ECX
006BFF4C  2B D8                     SUB EBX,EAX
LAB_006bff4e:
006BFF4E  8B 3D B0 68 85 00         MOV EDI,dword ptr [0x008568b0]
006BFF54  53                        PUSH EBX
006BFF55  57                        PUSH EDI
006BFF56  50                        PUSH EAX
006BFF57  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006BFF5A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006BFF5D  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006BFF60  52                        PUSH EDX
006BFF61  E8 2A FC FF FF            CALL 0x006bfb90
006BFF66  85 C0                     TEST EAX,EAX
006BFF68  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006BFF6B  0F 85 74 08 00 00         JNZ 0x006c07e5
006BFF71  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006BFF74  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006BFF77  33 DB                     XOR EBX,EBX
006BFF79  EB 27                     JMP 0x006bffa2
LAB_006bff7b:
006BFF7B  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
006BFF7E  8B 41 16                  MOV EAX,dword ptr [ECX + 0x16]
006BFF81  3B C3                     CMP EAX,EBX
006BFF83  75 12                     JNZ 0x006bff97
006BFF85  66 8B 01                  MOV AX,word ptr [ECX]
006BFF88  66 48                     DEC AX
006BFF8A  66 F7 D8                  NEG AX
006BFF8D  1B C0                     SBB EAX,EAX
006BFF8F  83 E0 24                  AND EAX,0x24
006BFF92  83 C0 1A                  ADD EAX,0x1a
006BFF95  03 C1                     ADD EAX,ECX
LAB_006bff97:
006BFF97  8B 7E 28                  MOV EDI,dword ptr [ESI + 0x28]
006BFF9A  03 F8                     ADD EDI,EAX
006BFF9C  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
006BFF9F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006bffa2:
006BFFA2  66 83 BE 8C 00 00 00 02   CMP word ptr [ESI + 0x8c],0x2
006BFFAA  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006BFFB0  0F 85 B0 03 00 00         JNZ 0x006c0366
006BFFB6  3B C3                     CMP EAX,EBX
006BFFB8  7E 2E                     JLE 0x006bffe8
006BFFBA  8B 86 9C 00 00 00         MOV EAX,dword ptr [ESI + 0x9c]
006BFFC0  0F BF 4C 86 6E            MOVSX ECX,word ptr [ESI + EAX*0x4 + 0x6e]
006BFFC5  0F BF 44 86 70            MOVSX EAX,word ptr [ESI + EAX*0x4 + 0x70]
006BFFCA  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006BFFCD  8B 8E AC 00 00 00         MOV ECX,dword ptr [ESI + 0xac]
006BFFD3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006BFFD6  0F BF 5C 8E 6E            MOVSX EBX,word ptr [ESI + ECX*0x4 + 0x6e]
006BFFDB  0F BF 4C 8E 70            MOVSX ECX,word ptr [ESI + ECX*0x4 + 0x70]
006BFFE0  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006BFFE3  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006BFFE6  33 DB                     XOR EBX,EBX
LAB_006bffe8:
006BFFE8  3B D3                     CMP EDX,EBX
006BFFEA  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
006BFFED  0F 8E F2 07 00 00         JLE 0x006c07e5
006BFFF3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006bfff6:
006BFFF6  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006BFFFC  85 C0                     TEST EAX,EAX
006BFFFE  0F 8F 45 01 00 00         JG 0x006c0149
006C0004  83 7D FC 0E               CMP dword ptr [EBP + -0x4],0xe
006C0008  7D 47                     JGE 0x006c0051
006C000A  8B 0D 78 68 85 00         MOV ECX,dword ptr [0x00856878]
006C0010  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C0013  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006C0016  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
006C0019  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C001C  3B D1                     CMP EDX,ECX
006C001E  7E 05                     JLE 0x006c0025
006C0020  2B C8                     SUB ECX,EAX
006C0022  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006c0025:
006C0025  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C0028  8B 3D B0 68 85 00         MOV EDI,dword ptr [0x008568b0]
006C002E  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006C0031  51                        PUSH ECX
006C0032  57                        PUSH EDI
006C0033  50                        PUSH EAX
006C0034  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006C0037  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006C003A  51                        PUSH ECX
006C003B  E8 50 FB FF FF            CALL 0x006bfb90
006C0040  85 C0                     TEST EAX,EAX
006C0042  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C0045  0F 85 9A 07 00 00         JNZ 0x006c07e5
006C004B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C004E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006c0051:
006C0051  33 C0                     XOR EAX,EAX
006C0053  33 C9                     XOR ECX,ECX
006C0055  8A 07                     MOV AL,byte ptr [EDI]
006C0057  47                        INC EDI
006C0058  89 86 9C 00 00 00         MOV dword ptr [ESI + 0x9c],EAX
006C005E  8A 0F                     MOV CL,byte ptr [EDI]
006C0060  47                        INC EDI
006C0061  89 8E AC 00 00 00         MOV dword ptr [ESI + 0xac],ECX
006C0067  0F BF 17                  MOVSX EDX,word ptr [EDI]
006C006A  83 C7 02                  ADD EDI,0x2
006C006D  89 96 A0 00 00 00         MOV dword ptr [ESI + 0xa0],EDX
006C0073  0F BF 07                  MOVSX EAX,word ptr [EDI]
006C0076  83 C7 02                  ADD EDI,0x2
006C0079  89 86 B0 00 00 00         MOV dword ptr [ESI + 0xb0],EAX
006C007F  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006C0082  83 C7 02                  ADD EDI,0x2
006C0085  89 8E A4 00 00 00         MOV dword ptr [ESI + 0xa4],ECX
006C008B  0F BF 17                  MOVSX EDX,word ptr [EDI]
006C008E  83 C7 02                  ADD EDI,0x2
006C0091  89 96 B4 00 00 00         MOV dword ptr [ESI + 0xb4],EDX
006C0097  0F BF 07                  MOVSX EAX,word ptr [EDI]
006C009A  83 C7 02                  ADD EDI,0x2
006C009D  89 86 A8 00 00 00         MOV dword ptr [ESI + 0xa8],EAX
006C00A3  8B 86 9C 00 00 00         MOV EAX,dword ptr [ESI + 0x9c]
006C00A9  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006C00AC  83 C7 02                  ADD EDI,0x2
006C00AF  83 F8 07                  CMP EAX,0x7
006C00B2  89 8E B8 00 00 00         MOV dword ptr [ESI + 0xb8],ECX
006C00B8  0F 8D 20 07 00 00         JGE 0x006c07de
006C00BE  8B 8E AC 00 00 00         MOV ECX,dword ptr [ESI + 0xac]
006C00C4  83 F9 07                  CMP ECX,0x7
006C00C7  0F 8D 11 07 00 00         JGE 0x006c07de
006C00CD  0F BF 54 86 6E            MOVSX EDX,word ptr [ESI + EAX*0x4 + 0x6e]
006C00D2  0F BF 44 86 70            MOVSX EAX,word ptr [ESI + EAX*0x4 + 0x70]
006C00D7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006C00DA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006C00DD  0F BF 54 8E 6E            MOVSX EDX,word ptr [ESI + ECX*0x4 + 0x6e]
006C00E2  0F BF 4C 8E 70            MOVSX ECX,word ptr [ESI + ECX*0x4 + 0x70]
006C00E7  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006C00EA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C00ED  B8 0E 00 00 00            MOV EAX,0xe
006C00F2  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006C00F5  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006C00F8  2B D0                     SUB EDX,EAX
006C00FA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006C00FD  33 D2                     XOR EDX,EDX
006C00FF  66 8B 56 58               MOV DX,word ptr [ESI + 0x58]
006C0103  03 C8                     ADD ECX,EAX
006C0105  66 8B 86 A8 00 00 00      MOV AX,word ptr [ESI + 0xa8]
006C010C  83 EA 0A                  SUB EDX,0xa
006C010F  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
006C0112  89 96 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EDX
006C0118  66 89 03                  MOV word ptr [EBX],AX
006C011B  66 8B 8E B8 00 00 00      MOV CX,word ptr [ESI + 0xb8]
006C0122  83 C3 02                  ADD EBX,0x2
LAB_006c0125:
006C0125  66 89 0B                  MOV word ptr [EBX],CX
006C0128  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C012B  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006C0131  83 C3 02                  ADD EBX,0x2
006C0134  83 C1 04                  ADD ECX,0x4
006C0137  48                        DEC EAX
006C0138  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006C013B  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006C013E  89 86 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EAX
006C0144  E9 F5 01 00 00            JMP 0x006c033e
LAB_006c0149:
006C0149  33 D2                     XOR EDX,EDX
006C014B  66 8B 56 58               MOV DX,word ptr [ESI + 0x58]
006C014F  83 EA 0A                  SUB EDX,0xa
006C0152  3B C2                     CMP EAX,EDX
006C0154  75 20                     JNZ 0x006c0176
006C0156  83 C0 FC                  ADD EAX,-0x4
006C0159  83 C3 02                  ADD EBX,0x2
006C015C  89 86 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EAX
006C0162  66 8B 86 A4 00 00 00      MOV AX,word ptr [ESI + 0xa4]
006C0169  66 89 43 FE               MOV word ptr [EBX + -0x2],AX
006C016D  66 8B 8E B4 00 00 00      MOV CX,word ptr [ESI + 0xb4]
006C0174  EB AF                     JMP 0x006c0125
LAB_006c0176:
006C0176  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C0179  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C017C  3B C2                     CMP EAX,EDX
006C017E  0F 8D BA 01 00 00         JGE 0x006c033e
LAB_006c0184:
006C0184  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006C018A  85 C0                     TEST EAX,EAX
006C018C  8D 48 FF                  LEA ECX,[EAX + -0x1]
006C018F  89 8E BC 00 00 00         MOV dword ptr [ESI + 0xbc],ECX
006C0195  0F 8E A3 01 00 00         JLE 0x006c033e
006C019B  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006C01A1  85 C0                     TEST EAX,EAX
006C01A3  0F 8E 3C 06 00 00         JLE 0x006c07e5
006C01A9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C01AC  85 C0                     TEST EAX,EAX
006C01AE  7F 3D                     JG 0x006c01ed
006C01B0  8B 1D 78 68 85 00         MOV EBX,dword ptr [0x00856878]
006C01B6  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C01B9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C01BC  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
006C01BF  3B D1                     CMP EDX,ECX
006C01C1  7E 04                     JLE 0x006c01c7
006C01C3  8B D9                     MOV EBX,ECX
006C01C5  2B D8                     SUB EBX,EAX
LAB_006c01c7:
006C01C7  8B 3D B0 68 85 00         MOV EDI,dword ptr [0x008568b0]
006C01CD  53                        PUSH EBX
006C01CE  57                        PUSH EDI
006C01CF  50                        PUSH EAX
006C01D0  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006C01D3  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006C01D6  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006C01D9  52                        PUSH EDX
006C01DA  E8 B1 F9 FF FF            CALL 0x006bfb90
006C01DF  85 C0                     TEST EAX,EAX
006C01E1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C01E4  0F 85 FB 05 00 00         JNZ 0x006c07e5
006C01EA  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006c01ed:
006C01ED  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C01F0  33 D2                     XOR EDX,EDX
006C01F2  8A 17                     MOV DL,byte ptr [EDI]
006C01F4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006C01F7  8B CA                     MOV ECX,EDX
006C01F9  47                        INC EDI
006C01FA  C1 E9 04                  SHR ECX,0x4
006C01FD  83 E1 0F                  AND ECX,0xf
006C0200  83 E2 0F                  AND EDX,0xf
006C0203  40                        INC EAX
006C0204  4B                        DEC EBX
006C0205  83 F9 08                  CMP ECX,0x8
006C0208  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
006C020B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006C020E  7C 03                     JL 0x006c0213
006C0210  83 E9 10                  SUB ECX,0x10
LAB_006c0213:
006C0213  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
006C0219  8B 9E A8 00 00 00         MOV EBX,dword ptr [ESI + 0xa8]
006C021F  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
006C0223  0F AF 5D F0               IMUL EBX,dword ptr [EBP + -0x10]
006C0227  03 C3                     ADD EAX,EBX
006C0229  8B 9E A0 00 00 00         MOV EBX,dword ptr [ESI + 0xa0]
006C022F  0F AF D9                  IMUL EBX,ECX
006C0232  C1 F8 08                  SAR EAX,0x8
006C0235  03 C3                     ADD EAX,EBX
006C0237  3D FF 7F 00 00            CMP EAX,0x7fff
006C023C  7E 07                     JLE 0x006c0245
006C023E  B8 FF 7F 00 00            MOV EAX,0x7fff
006C0243  EB 0C                     JMP 0x006c0251
LAB_006c0245:
006C0245  3D 00 80 FF FF            CMP EAX,0xffff8000
006C024A  7D 05                     JGE 0x006c0251
006C024C  B8 00 80 FF FF            MOV EAX,0xffff8000
LAB_006c0251:
006C0251  8B 1D 0C DE 7E 00         MOV EBX,dword ptr [0x007ede0c]
006C0257  8B 0C 8B                  MOV ECX,dword ptr [EBX + ECX*0x4]
006C025A  0F AF 8E A0 00 00 00      IMUL ECX,dword ptr [ESI + 0xa0]
006C0261  C1 F9 08                  SAR ECX,0x8
006C0264  83 F9 10                  CMP ECX,0x10
006C0267  89 8E A0 00 00 00         MOV dword ptr [ESI + 0xa0],ECX
006C026D  7D 0A                     JGE 0x006c0279
006C026F  C7 86 A0 00 00 00 10 00 00 00  MOV dword ptr [ESI + 0xa0],0x10
LAB_006c0279:
006C0279  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
006C027F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C0282  89 8E A8 00 00 00         MOV dword ptr [ESI + 0xa8],ECX
006C0288  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
006C028E  66 89 03                  MOV word ptr [EBX],AX
006C0291  83 C3 02                  ADD EBX,0x2
006C0294  83 FA 08                  CMP EDX,0x8
006C0297  7C 03                     JL 0x006c029c
006C0299  83 EA 10                  SUB EDX,0x10
LAB_006c029c:
006C029C  8B 86 B4 00 00 00         MOV EAX,dword ptr [ESI + 0xb4]
006C02A2  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006C02A5  0F AF 45 E8               IMUL EAX,dword ptr [EBP + -0x18]
006C02A9  0F AF 8E B8 00 00 00      IMUL ECX,dword ptr [ESI + 0xb8]
006C02B0  03 C1                     ADD EAX,ECX
006C02B2  8B 8E B0 00 00 00         MOV ECX,dword ptr [ESI + 0xb0]
006C02B8  0F AF CA                  IMUL ECX,EDX
006C02BB  C1 F8 08                  SAR EAX,0x8
006C02BE  03 C1                     ADD EAX,ECX
006C02C0  3D FF 7F 00 00            CMP EAX,0x7fff
006C02C5  7E 07                     JLE 0x006c02ce
006C02C7  B8 FF 7F 00 00            MOV EAX,0x7fff
006C02CC  EB 0C                     JMP 0x006c02da
LAB_006c02ce:
006C02CE  3D 00 80 FF FF            CMP EAX,0xffff8000
006C02D3  7D 05                     JGE 0x006c02da
006C02D5  B8 00 80 FF FF            MOV EAX,0xffff8000
LAB_006c02da:
006C02DA  8B 0D 0C DE 7E 00         MOV ECX,dword ptr [0x007ede0c]
006C02E0  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
006C02E3  0F AF 8E B0 00 00 00      IMUL ECX,dword ptr [ESI + 0xb0]
006C02EA  C1 F9 08                  SAR ECX,0x8
006C02ED  83 F9 10                  CMP ECX,0x10
006C02F0  89 8E B0 00 00 00         MOV dword ptr [ESI + 0xb0],ECX
006C02F6  7D 0A                     JGE 0x006c0302
006C02F8  C7 86 B0 00 00 00 10 00 00 00  MOV dword ptr [ESI + 0xb0],0x10
LAB_006c0302:
006C0302  8B 8E B4 00 00 00         MOV ECX,dword ptr [ESI + 0xb4]
006C0308  89 86 B4 00 00 00         MOV dword ptr [ESI + 0xb4],EAX
006C030E  89 8E B8 00 00 00         MOV dword ptr [ESI + 0xb8],ECX
006C0314  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C0317  66 89 03                  MOV word ptr [EBX],AX
006C031A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C031D  8B 96 C0 00 00 00         MOV EDX,dword ptr [ESI + 0xc0]
006C0323  83 C3 02                  ADD EBX,0x2
006C0326  83 C0 04                  ADD EAX,0x4
006C0329  4A                        DEC EDX
006C032A  3B C1                     CMP EAX,ECX
006C032C  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006C032F  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006C0332  89 96 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EDX
006C0338  0F 8C 46 FE FF FF         JL 0x006c0184
LAB_006c033e:
006C033E  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006C0344  85 C0                     TEST EAX,EAX
006C0346  0F 8E 99 04 00 00         JLE 0x006c07e5
006C034C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C034F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C0352  3B C2                     CMP EAX,EDX
006C0354  0F 8C 9C FC FF FF         JL 0x006bfff6
006C035A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006C035D  5F                        POP EDI
006C035E  5E                        POP ESI
006C035F  5B                        POP EBX
006C0360  8B E5                     MOV ESP,EBP
006C0362  5D                        POP EBP
006C0363  C2 0C 00                  RET 0xc
LAB_006c0366:
006C0366  3B C3                     CMP EAX,EBX
006C0368  7E 16                     JLE 0x006c0380
006C036A  8B 86 9C 00 00 00         MOV EAX,dword ptr [ESI + 0x9c]
006C0370  0F BF 4C 86 6E            MOVSX ECX,word ptr [ESI + EAX*0x4 + 0x6e]
006C0375  0F BF 44 86 70            MOVSX EAX,word ptr [ESI + EAX*0x4 + 0x70]
006C037A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C037D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006c0380:
006C0380  3B D3                     CMP EDX,EBX
006C0382  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
006C0385  0F 8E 5A 04 00 00         JLE 0x006c07e5
LAB_006c038b:
006C038B  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006C0391  85 C0                     TEST EAX,EAX
006C0393  0F 8F DD 00 00 00         JG 0x006c0476
006C0399  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006C039C  83 FB 07                  CMP EBX,0x7
006C039F  7D 3A                     JGE 0x006c03db
006C03A1  8B 1D 78 68 85 00         MOV EBX,dword ptr [0x00856878]
006C03A7  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C03AA  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C03AD  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
006C03B0  3B D1                     CMP EDX,ECX
006C03B2  7E 04                     JLE 0x006c03b8
006C03B4  8B D9                     MOV EBX,ECX
006C03B6  2B D8                     SUB EBX,EAX
LAB_006c03b8:
006C03B8  8B 3D B0 68 85 00         MOV EDI,dword ptr [0x008568b0]
006C03BE  53                        PUSH EBX
006C03BF  57                        PUSH EDI
006C03C0  50                        PUSH EAX
006C03C1  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006C03C4  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006C03C7  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006C03CA  52                        PUSH EDX
006C03CB  E8 C0 F7 FF FF            CALL 0x006bfb90
006C03D0  85 C0                     TEST EAX,EAX
006C03D2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C03D5  0F 85 0A 04 00 00         JNZ 0x006c07e5
LAB_006c03db:
006C03DB  33 C0                     XOR EAX,EAX
006C03DD  8A 07                     MOV AL,byte ptr [EDI]
006C03DF  47                        INC EDI
006C03E0  89 86 9C 00 00 00         MOV dword ptr [ESI + 0x9c],EAX
006C03E6  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006C03E9  83 C7 02                  ADD EDI,0x2
006C03EC  89 8E A0 00 00 00         MOV dword ptr [ESI + 0xa0],ECX
006C03F2  0F BF 17                  MOVSX EDX,word ptr [EDI]
006C03F5  83 C7 02                  ADD EDI,0x2
006C03F8  89 96 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EDX
006C03FE  0F BF 07                  MOVSX EAX,word ptr [EDI]
006C0401  89 86 A8 00 00 00         MOV dword ptr [ESI + 0xa8],EAX
006C0407  8B 86 9C 00 00 00         MOV EAX,dword ptr [ESI + 0x9c]
006C040D  83 C7 02                  ADD EDI,0x2
006C0410  83 F8 07                  CMP EAX,0x7
006C0413  0F 8D C5 03 00 00         JGE 0x006c07de
006C0419  0F BF 4C 86 6E            MOVSX ECX,word ptr [ESI + EAX*0x4 + 0x6e]
006C041E  0F BF 54 86 70            MOVSX EDX,word ptr [ESI + EAX*0x4 + 0x70]
006C0423  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C0426  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006C0429  83 C1 07                  ADD ECX,0x7
006C042C  83 EB 07                  SUB EBX,0x7
006C042F  33 C0                     XOR EAX,EAX
006C0431  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
006C0434  66 8B 46 58               MOV AX,word ptr [ESI + 0x58]
006C0438  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006C043B  66 8B 96 A8 00 00 00      MOV DX,word ptr [ESI + 0xa8]
006C0442  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006C0445  8D 4C 00 F4               LEA ECX,[EAX + EAX*0x1 + -0xc]
006C0449  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C044C  89 8E BC 00 00 00         MOV dword ptr [ESI + 0xbc],ECX
006C0452  66 89 10                  MOV word ptr [EAX],DX
LAB_006c0455:
006C0455  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C0458  83 C0 02                  ADD EAX,0x2
006C045B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006C045E  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006C0464  83 C1 02                  ADD ECX,0x2
006C0467  48                        DEC EAX
006C0468  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006C046B  89 86 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EAX
006C0471  E9 44 03 00 00            JMP 0x006c07ba
LAB_006c0476:
006C0476  33 C9                     XOR ECX,ECX
006C0478  66 8B 4E 58               MOV CX,word ptr [ESI + 0x58]
006C047C  8D 54 09 F4               LEA EDX,[ECX + ECX*0x1 + -0xc]
006C0480  3B C2                     CMP EAX,EDX
006C0482  75 18                     JNZ 0x006c049c
006C0484  66 8B 8E A4 00 00 00      MOV CX,word ptr [ESI + 0xa4]
006C048B  83 C0 FE                  ADD EAX,-0x2
006C048E  89 86 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EAX
006C0494  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C0497  66 89 08                  MOV word ptr [EAX],CX
006C049A  EB B9                     JMP 0x006c0455
LAB_006c049c:
006C049C  A8 01                     TEST AL,0x1
006C049E  0F 84 05 01 00 00         JZ 0x006c05a9
006C04A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C04A7  85 C0                     TEST EAX,EAX
006C04A9  7F 3D                     JG 0x006c04e8
006C04AB  8B 1D 78 68 85 00         MOV EBX,dword ptr [0x00856878]
006C04B1  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C04B4  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C04B7  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
006C04BA  3B D1                     CMP EDX,ECX
006C04BC  7E 04                     JLE 0x006c04c2
006C04BE  8B D9                     MOV EBX,ECX
006C04C0  2B D8                     SUB EBX,EAX
LAB_006c04c2:
006C04C2  8B 3D B0 68 85 00         MOV EDI,dword ptr [0x008568b0]
006C04C8  53                        PUSH EBX
006C04C9  57                        PUSH EDI
006C04CA  50                        PUSH EAX
006C04CB  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006C04CE  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006C04D1  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006C04D4  52                        PUSH EDX
006C04D5  E8 B6 F6 FF FF            CALL 0x006bfb90
006C04DA  85 C0                     TEST EAX,EAX
006C04DC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C04DF  0F 85 00 03 00 00         JNZ 0x006c07e5
006C04E5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006c04e8:
006C04E8  8A 0F                     MOV CL,byte ptr [EDI]
006C04EA  83 E1 0F                  AND ECX,0xf
006C04ED  47                        INC EDI
006C04EE  83 F9 08                  CMP ECX,0x8
006C04F1  7C 03                     JL 0x006c04f6
006C04F3  83 E9 10                  SUB ECX,0x10
LAB_006c04f6:
006C04F6  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
006C04FC  8B 9E A8 00 00 00         MOV EBX,dword ptr [ESI + 0xa8]
006C0502  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
006C0506  0F AF 5D F0               IMUL EBX,dword ptr [EBP + -0x10]
006C050A  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006C0510  03 C3                     ADD EAX,EBX
006C0512  8B DA                     MOV EBX,EDX
006C0514  0F AF D9                  IMUL EBX,ECX
006C0517  C1 F8 08                  SAR EAX,0x8
006C051A  03 C3                     ADD EAX,EBX
006C051C  3D FF 7F 00 00            CMP EAX,0x7fff
006C0521  7E 07                     JLE 0x006c052a
006C0523  B8 FF 7F 00 00            MOV EAX,0x7fff
006C0528  EB 0C                     JMP 0x006c0536
LAB_006c052a:
006C052A  3D 00 80 FF FF            CMP EAX,0xffff8000
006C052F  7D 05                     JGE 0x006c0536
006C0531  B8 00 80 FF FF            MOV EAX,0xffff8000
LAB_006c0536:
006C0536  8B 1D 0C DE 7E 00         MOV EBX,dword ptr [0x007ede0c]
006C053C  8B 0C 8B                  MOV ECX,dword ptr [EBX + ECX*0x4]
006C053F  0F AF CA                  IMUL ECX,EDX
006C0542  C1 F9 08                  SAR ECX,0x8
006C0545  83 F9 10                  CMP ECX,0x10
006C0548  89 8E A0 00 00 00         MOV dword ptr [ESI + 0xa0],ECX
006C054E  7D 0A                     JGE 0x006c055a
006C0550  C7 86 A0 00 00 00 10 00 00 00  MOV dword ptr [ESI + 0xa0],0x10
LAB_006c055a:
006C055A  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
006C0560  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006C0563  89 8E A8 00 00 00         MOV dword ptr [ESI + 0xa8],ECX
006C0569  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006C056C  42                        INC EDX
006C056D  49                        DEC ECX
006C056E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C0571  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C0574  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
006C057A  89 56 28                  MOV dword ptr [ESI + 0x28],EDX
006C057D  66 89 01                  MOV word ptr [ECX],AX
006C0580  8B 96 BC 00 00 00         MOV EDX,dword ptr [ESI + 0xbc]
006C0586  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C0589  83 C1 02                  ADD ECX,0x2
006C058C  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006C058F  8B 8E C0 00 00 00         MOV ECX,dword ptr [ESI + 0xc0]
006C0595  4A                        DEC EDX
006C0596  49                        DEC ECX
006C0597  83 C0 02                  ADD EAX,0x2
006C059A  89 96 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EDX
006C05A0  89 8E C0 00 00 00         MOV dword ptr [ESI + 0xc0],ECX
006C05A6  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006c05a9:
006C05A9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C05AC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C05AF  3B C1                     CMP EAX,ECX
006C05B1  0F 8D 03 02 00 00         JGE 0x006c07ba
LAB_006c05b7:
006C05B7  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006C05BD  85 C0                     TEST EAX,EAX
006C05BF  0F 8E F5 01 00 00         JLE 0x006c07ba
006C05C5  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006C05CB  85 C0                     TEST EAX,EAX
006C05CD  0F 8E 12 02 00 00         JLE 0x006c07e5
006C05D3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C05D6  85 C0                     TEST EAX,EAX
006C05D8  7F 3D                     JG 0x006c0617
006C05DA  8B 1D 78 68 85 00         MOV EBX,dword ptr [0x00856878]
006C05E0  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C05E3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C05E6  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
006C05E9  3B D1                     CMP EDX,ECX
006C05EB  7E 04                     JLE 0x006c05f1
006C05ED  8B D9                     MOV EBX,ECX
006C05EF  2B D8                     SUB EBX,EAX
LAB_006c05f1:
006C05F1  8B 3D B0 68 85 00         MOV EDI,dword ptr [0x008568b0]
006C05F7  53                        PUSH EBX
006C05F8  57                        PUSH EDI
006C05F9  50                        PUSH EAX
006C05FA  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006C05FD  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006C0600  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006C0603  52                        PUSH EDX
006C0604  E8 87 F5 FF FF            CALL 0x006bfb90
006C0609  85 C0                     TEST EAX,EAX
006C060B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C060E  0F 85 D1 01 00 00         JNZ 0x006c07e5
006C0614  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006c0617:
006C0617  33 C0                     XOR EAX,EAX
006C0619  8A 07                     MOV AL,byte ptr [EDI]
006C061B  8B C8                     MOV ECX,EAX
006C061D  83 E0 0F                  AND EAX,0xf
006C0620  C1 E9 04                  SHR ECX,0x4
006C0623  83 E1 0F                  AND ECX,0xf
006C0626  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006C0629  83 F9 08                  CMP ECX,0x8
006C062C  7C 03                     JL 0x006c0631
006C062E  83 E9 10                  SUB ECX,0x10
LAB_006c0631:
006C0631  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
006C0637  8B 9E A8 00 00 00         MOV EBX,dword ptr [ESI + 0xa8]
006C063D  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
006C0641  0F AF 5D F0               IMUL EBX,dword ptr [EBP + -0x10]
006C0645  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006C064B  03 C3                     ADD EAX,EBX
006C064D  8B DA                     MOV EBX,EDX
006C064F  0F AF D9                  IMUL EBX,ECX
006C0652  C1 F8 08                  SAR EAX,0x8
006C0655  03 C3                     ADD EAX,EBX
006C0657  3D FF 7F 00 00            CMP EAX,0x7fff
006C065C  7E 07                     JLE 0x006c0665
006C065E  B8 FF 7F 00 00            MOV EAX,0x7fff
006C0663  EB 0C                     JMP 0x006c0671
LAB_006c0665:
006C0665  3D 00 80 FF FF            CMP EAX,0xffff8000
006C066A  7D 05                     JGE 0x006c0671
006C066C  B8 00 80 FF FF            MOV EAX,0xffff8000
LAB_006c0671:
006C0671  8B 1D 0C DE 7E 00         MOV EBX,dword ptr [0x007ede0c]
006C0677  8B 0C 8B                  MOV ECX,dword ptr [EBX + ECX*0x4]
006C067A  0F AF CA                  IMUL ECX,EDX
006C067D  C1 F9 08                  SAR ECX,0x8
006C0680  BA 10 00 00 00            MOV EDX,0x10
006C0685  89 8E A0 00 00 00         MOV dword ptr [ESI + 0xa0],ECX
006C068B  3B CA                     CMP ECX,EDX
006C068D  7D 06                     JGE 0x006c0695
006C068F  89 96 A0 00 00 00         MOV dword ptr [ESI + 0xa0],EDX
LAB_006c0695:
006C0695  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
006C069B  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
006C06A1  89 8E A8 00 00 00         MOV dword ptr [ESI + 0xa8],ECX
006C06A7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C06AA  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C06AD  66 89 01                  MOV word ptr [ECX],AX
006C06B0  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006C06B6  83 C1 02                  ADD ECX,0x2
006C06B9  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006C06BC  8B 8E BC 00 00 00         MOV ECX,dword ptr [ESI + 0xbc]
006C06C2  49                        DEC ECX
006C06C3  48                        DEC EAX
006C06C4  89 8E BC 00 00 00         MOV dword ptr [ESI + 0xbc],ECX
006C06CA  89 86 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EAX
006C06D0  8B C8                     MOV ECX,EAX
006C06D2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C06D5  83 C0 02                  ADD EAX,0x2
006C06D8  3B C3                     CMP EAX,EBX
006C06DA  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006C06DD  0F 8D D7 00 00 00         JGE 0x006c07ba
006C06E3  85 C9                     TEST ECX,ECX
006C06E5  0F 8E CF 00 00 00         JLE 0x006c07ba
006C06EB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006C06EE  83 F8 08                  CMP EAX,0x8
006C06F1  7C 05                     JL 0x006c06f8
006C06F3  2B C2                     SUB EAX,EDX
006C06F5  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_006c06f8:
006C06F8  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
006C06FE  8B 9E A8 00 00 00         MOV EBX,dword ptr [ESI + 0xa8]
006C0704  0F AF 5D F0               IMUL EBX,dword ptr [EBP + -0x10]
006C0708  8B C2                     MOV EAX,EDX
006C070A  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
006C0710  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
006C0714  03 C3                     ADD EAX,EBX
006C0716  8B D9                     MOV EBX,ECX
006C0718  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006C071B  0F AF D9                  IMUL EBX,ECX
006C071E  C1 F8 08                  SAR EAX,0x8
006C0721  03 C3                     ADD EAX,EBX
006C0723  3D FF 7F 00 00            CMP EAX,0x7fff
006C0728  7E 07                     JLE 0x006c0731
006C072A  B8 FF 7F 00 00            MOV EAX,0x7fff
006C072F  EB 0C                     JMP 0x006c073d
LAB_006c0731:
006C0731  3D 00 80 FF FF            CMP EAX,0xffff8000
006C0736  7D 05                     JGE 0x006c073d
006C0738  B8 00 80 FF FF            MOV EAX,0xffff8000
LAB_006c073d:
006C073D  8B 1D 0C DE 7E 00         MOV EBX,dword ptr [0x007ede0c]
006C0743  8B 0C 8B                  MOV ECX,dword ptr [EBX + ECX*0x4]
006C0746  0F AF 8E A0 00 00 00      IMUL ECX,dword ptr [ESI + 0xa0]
006C074D  C1 F9 08                  SAR ECX,0x8
006C0750  83 F9 10                  CMP ECX,0x10
006C0753  89 8E A0 00 00 00         MOV dword ptr [ESI + 0xa0],ECX
006C0759  7D 0A                     JGE 0x006c0765
006C075B  C7 86 A0 00 00 00 10 00 00 00  MOV dword ptr [ESI + 0xa0],0x10
LAB_006c0765:
006C0765  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006C0768  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006C076B  47                        INC EDI
006C076C  41                        INC ECX
006C076D  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
006C0770  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C0773  89 96 A8 00 00 00         MOV dword ptr [ESI + 0xa8],EDX
006C0779  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
006C077F  66 89 01                  MOV word ptr [ECX],AX
006C0782  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006C0788  4B                        DEC EBX
006C0789  83 C1 02                  ADD ECX,0x2
006C078C  48                        DEC EAX
006C078D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006C0790  8B 9E C0 00 00 00         MOV EBX,dword ptr [ESI + 0xc0]
006C0796  89 86 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EAX
006C079C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C079F  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006C07A2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C07A5  83 C0 02                  ADD EAX,0x2
006C07A8  4B                        DEC EBX
006C07A9  3B C1                     CMP EAX,ECX
006C07AB  89 9E C0 00 00 00         MOV dword ptr [ESI + 0xc0],EBX
006C07B1  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006C07B4  0F 8C FD FD FF FF         JL 0x006c05b7
LAB_006c07ba:
006C07BA  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006C07C0  85 C0                     TEST EAX,EAX
006C07C2  7E 21                     JLE 0x006c07e5
006C07C4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C07C7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C07CA  3B C1                     CMP EAX,ECX
006C07CC  0F 8C B9 FB FF FF         JL 0x006c038b
006C07D2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006C07D5  5F                        POP EDI
006C07D6  5E                        POP ESI
006C07D7  5B                        POP EBX
006C07D8  8B E5                     MOV ESP,EBP
006C07DA  5D                        POP EBP
006C07DB  C2 0C 00                  RET 0xc
LAB_006c07de:
006C07DE  C7 45 F8 FB FF FF FF      MOV dword ptr [EBP + -0x8],0xfffffffb
LAB_006c07e5:
006C07E5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006C07E8  5F                        POP EDI
006C07E9  5E                        POP ESI
006C07EA  5B                        POP EBX
006C07EB  8B E5                     MOV ESP,EBP
006C07ED  5D                        POP EBP
006C07EE  C2 0C 00                  RET 0xc
