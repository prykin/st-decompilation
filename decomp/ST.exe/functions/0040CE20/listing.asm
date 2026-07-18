FUN_0040ce20:
0040CE20  55                        PUSH EBP
0040CE21  8B EC                     MOV EBP,ESP
0040CE23  83 EC 18                  SUB ESP,0x18
0040CE26  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040CE2D  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
0040CE34  53                        PUSH EBX
0040CE35  56                        PUSH ESI
0040CE36  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0040CE39  0F AF C8                  IMUL ECX,EAX
0040CE3C  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040CE40  0F AF D0                  IMUL EDX,EAX
0040CE43  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040CE47  0F AF C1                  IMUL EAX,ECX
0040CE4A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0040CE4D  03 D0                     ADD EDX,EAX
0040CE4F  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0040CE53  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
0040CE58  03 D1                     ADD EDX,ECX
0040CE5A  BB 01 00 00 00            MOV EBX,0x1
0040CE5F  57                        PUSH EDI
0040CE60  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0040CE63  C7 45 EC 30 75 00 00      MOV dword ptr [EBP + -0x14],0x7530
0040CE6A  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0040CE6D  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_0040ce70:
0040CE70  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
0040CE76  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0040CE7C  2B D0                     SUB EDX,EAX
0040CE7E  3B DA                     CMP EBX,EDX
0040CE80  0F 8D 2C 05 00 00         JGE 0x0040d3b2
0040CE86  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0040CE8C  03 C3                     ADD EAX,EBX
0040CE8E  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0040CE95  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0040CE98  8D 3C C1                  LEA EDI,[ECX + EAX*0x8]
LAB_0040ce9b:
0040CE9B  66 8B 07                  MOV AX,word ptr [EDI]
0040CE9E  66 3D FF FF               CMP AX,0xffff
0040CEA2  0F 84 FD 04 00 00         JZ 0x0040d3a5
0040CEA8  0F BF 57 04               MOVSX EDX,word ptr [EDI + 0x4]
0040CEAC  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040CEB0  52                        PUSH EDX
0040CEB1  51                        PUSH ECX
0040CEB2  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0040CEB6  0F BF D0                  MOVSX EDX,AX
0040CEB9  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040CEBD  52                        PUSH EDX
0040CEBE  50                        PUSH EAX
0040CEBF  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040CEC3  51                        PUSH ECX
0040CEC4  52                        PUSH EDX
0040CEC5  E8 E6 8F 29 00            CALL 0x006a5eb0
0040CECA  3D FE 0F 00 00            CMP EAX,0xffe
0040CECF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0040CED2  0F 84 B7 04 00 00         JZ 0x0040d38f
0040CED8  0F BF 4F 06               MOVSX ECX,word ptr [EDI + 0x6]
0040CEDC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0040CEDF  3B CA                     CMP ECX,EDX
0040CEE1  7C 1B                     JL 0x0040cefe
0040CEE3  0F 85 A6 04 00 00         JNZ 0x0040d38f
0040CEE9  3B 86 AF 00 00 00         CMP EAX,dword ptr [ESI + 0xaf]
0040CEEF  0F 85 9A 04 00 00         JNZ 0x0040d38f
0040CEF5  83 FB 02                  CMP EBX,0x2
0040CEF8  0F 8D 91 04 00 00         JGE 0x0040d38f
LAB_0040cefe:
0040CEFE  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0040CF02  0F BF 1F                  MOVSX EBX,word ptr [EDI]
0040CF05  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040CF09  2B D9                     SUB EBX,ECX
0040CF0B  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040CF0F  2B CA                     SUB ECX,EDX
0040CF11  A8 01                     TEST AL,0x1
0040CF13  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0040CF16  0F 84 72 03 00 00         JZ 0x0040d28e
0040CF1C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040CF1F  66 8B 14 58               MOV DX,word ptr [EAX + EBX*0x2]
0040CF23  81 E2 00 C0 00 00         AND EDX,0xc000
0040CF29  81 FA 00 C0 00 00         CMP EDX,0xc000
0040CF2F  0F 84 5A 04 00 00         JZ 0x0040d38f
0040CF35  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040CF3C  0F AF C1                  IMUL EAX,ECX
0040CF3F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040CF42  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
0040CF46  81 E2 00 C0 00 00         AND EDX,0xc000
0040CF4C  81 FA 00 C0 00 00         CMP EDX,0xc000
0040CF52  0F 84 37 04 00 00         JZ 0x0040d38f
0040CF58  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040CF5C  50                        PUSH EAX
0040CF5D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040CF60  0F BF 47 02               MOVSX EAX,word ptr [EDI + 0x2]
0040CF64  50                        PUSH EAX
0040CF65  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040CF69  50                        PUSH EAX
0040CF6A  56                        PUSH ESI
0040CF6B  E8 3D 75 FF FF            CALL 0x004044ad
0040CF70  85 C0                     TEST EAX,EAX
0040CF72  0F 84 17 04 00 00         JZ 0x0040d38f
0040CF78  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040CF7C  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040CF80  0F BF 07                  MOVSX EAX,word ptr [EDI]
0040CF83  51                        PUSH ECX
0040CF84  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040CF87  52                        PUSH EDX
0040CF88  50                        PUSH EAX
0040CF89  56                        PUSH ESI
0040CF8A  E8 1E 75 FF FF            CALL 0x004044ad
0040CF8F  85 C0                     TEST EAX,EAX
0040CF91  0F 84 F8 03 00 00         JZ 0x0040d38f
0040CF97  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0040CF9A  F6 C4 40                  TEST AH,0x40
0040CF9D  0F 84 73 01 00 00         JZ 0x0040d116
0040CFA3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0040CFA6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040CFA9  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
0040CFAC  2B C2                     SUB EAX,EDX
0040CFAE  66 8B 08                  MOV CX,word ptr [EAX]
0040CFB1  81 E1 00 C0 00 00         AND ECX,0xc000
0040CFB7  81 F9 00 C0 00 00         CMP ECX,0xc000
0040CFBD  0F 84 CC 03 00 00         JZ 0x0040d38f
0040CFC3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0040CFC6  8B D3                     MOV EDX,EBX
0040CFC8  2B D0                     SUB EDX,EAX
0040CFCA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040CFCD  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
0040CFD1  81 E1 00 C0 00 00         AND ECX,0xc000
0040CFD7  81 F9 00 C0 00 00         CMP ECX,0xc000
0040CFDD  0F 84 AC 03 00 00         JZ 0x0040d38f
0040CFE3  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040CFEA  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
0040CFEE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0040CFF1  8B D0                     MOV EDX,EAX
0040CFF3  2B D1                     SUB EDX,ECX
0040CFF5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040CFF8  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
0040CFFC  81 E2 00 C0 00 00         AND EDX,0xc000
0040D002  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D008  0F 84 81 03 00 00         JZ 0x0040d38f
0040D00E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040D011  8D 0C 18                  LEA ECX,[EAX + EBX*0x1]
0040D014  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
0040D018  81 E1 00 C0 00 00         AND ECX,0xc000
0040D01E  81 F9 00 C0 00 00         CMP ECX,0xc000
0040D024  0F 84 65 03 00 00         JZ 0x0040d38f
0040D02A  66 8B 0C 5A               MOV CX,word ptr [EDX + EBX*0x2]
0040D02E  81 E1 00 C0 00 00         AND ECX,0xc000
0040D034  81 F9 00 C0 00 00         CMP ECX,0xc000
0040D03A  0F 84 4F 03 00 00         JZ 0x0040d38f
0040D040  66 8B 04 42               MOV AX,word ptr [EDX + EAX*0x2]
0040D044  25 00 C0 00 00            AND EAX,0xc000
0040D049  3D 00 C0 00 00            CMP EAX,0xc000
0040D04E  0F 84 3B 03 00 00         JZ 0x0040d38f
0040D054  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040D058  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040D05C  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040D060  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0040D063  49                        DEC ECX
0040D064  51                        PUSH ECX
0040D065  52                        PUSH EDX
0040D066  50                        PUSH EAX
0040D067  56                        PUSH ESI
0040D068  8B CB                     MOV ECX,EBX
0040D06A  E8 3E 74 FF FF            CALL 0x004044ad
0040D06F  85 C0                     TEST EAX,EAX
0040D071  0F 84 18 03 00 00         JZ 0x0040d38f
0040D077  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040D07B  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040D07F  0F BF 07                  MOVSX EAX,word ptr [EDI]
0040D082  49                        DEC ECX
0040D083  51                        PUSH ECX
0040D084  52                        PUSH EDX
0040D085  50                        PUSH EAX
0040D086  56                        PUSH ESI
0040D087  8B CB                     MOV ECX,EBX
0040D089  E8 1F 74 FF FF            CALL 0x004044ad
0040D08E  85 C0                     TEST EAX,EAX
0040D090  0F 84 F9 02 00 00         JZ 0x0040d38f
0040D096  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040D09A  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0040D09E  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040D0A2  49                        DEC ECX
0040D0A3  51                        PUSH ECX
0040D0A4  52                        PUSH EDX
0040D0A5  50                        PUSH EAX
0040D0A6  56                        PUSH ESI
0040D0A7  8B CB                     MOV ECX,EBX
0040D0A9  E8 FF 73 FF FF            CALL 0x004044ad
0040D0AE  85 C0                     TEST EAX,EAX
0040D0B0  0F 84 D9 02 00 00         JZ 0x0040d38f
0040D0B6  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040D0BA  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0040D0BE  0F BF 07                  MOVSX EAX,word ptr [EDI]
0040D0C1  51                        PUSH ECX
0040D0C2  52                        PUSH EDX
0040D0C3  50                        PUSH EAX
0040D0C4  56                        PUSH ESI
0040D0C5  8B CB                     MOV ECX,EBX
0040D0C7  E8 E1 73 FF FF            CALL 0x004044ad
0040D0CC  85 C0                     TEST EAX,EAX
0040D0CE  0F 84 BB 02 00 00         JZ 0x0040d38f
0040D0D4  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040D0D8  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0040D0DC  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040D0E0  51                        PUSH ECX
0040D0E1  52                        PUSH EDX
0040D0E2  50                        PUSH EAX
0040D0E3  56                        PUSH ESI
0040D0E4  8B CB                     MOV ECX,EBX
0040D0E6  E8 C2 73 FF FF            CALL 0x004044ad
0040D0EB  85 C0                     TEST EAX,EAX
0040D0ED  0F 84 9C 02 00 00         JZ 0x0040d38f
0040D0F3  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040D0F7  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0040D0FB  0F BF 07                  MOVSX EAX,word ptr [EDI]
0040D0FE  51                        PUSH ECX
0040D0FF  52                        PUSH EDX
0040D100  50                        PUSH EAX
0040D101  56                        PUSH ESI
0040D102  8B CB                     MOV ECX,EBX
0040D104  E8 A4 73 FF FF            CALL 0x004044ad
0040D109  85 C0                     TEST EAX,EAX
0040D10B  0F 85 55 02 00 00         JNZ 0x0040d366
0040D111  E9 79 02 00 00            JMP 0x0040d38f
LAB_0040d116:
0040D116  F6 C4 20                  TEST AH,0x20
0040D119  0F 84 47 02 00 00         JZ 0x0040d366
0040D11F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040D122  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0040D125  66 8B 04 51               MOV AX,word ptr [ECX + EDX*0x2]
0040D129  25 00 C0 00 00            AND EAX,0xc000
0040D12E  3D 00 C0 00 00            CMP EAX,0xc000
0040D133  0F 84 56 02 00 00         JZ 0x0040d38f
0040D139  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040D13C  8B CA                     MOV ECX,EDX
0040D13E  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
0040D141  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
0040D145  81 E1 00 C0 00 00         AND ECX,0xc000
0040D14B  81 F9 00 C0 00 00         CMP ECX,0xc000
0040D151  0F 84 38 02 00 00         JZ 0x0040d38f
0040D157  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040D15E  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
0040D162  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0040D165  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
0040D168  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040D16B  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
0040D16F  81 E1 00 C0 00 00         AND ECX,0xc000
0040D175  81 F9 00 C0 00 00         CMP ECX,0xc000
0040D17B  0F 84 0E 02 00 00         JZ 0x0040d38f
0040D181  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040D184  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
0040D187  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
0040D18B  81 E2 00 C0 00 00         AND EDX,0xc000
0040D191  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D197  0F 84 F2 01 00 00         JZ 0x0040d38f
0040D19D  66 8B 14 59               MOV DX,word ptr [ECX + EBX*0x2]
0040D1A1  81 E2 00 C0 00 00         AND EDX,0xc000
0040D1A7  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D1AD  0F 84 DC 01 00 00         JZ 0x0040d38f
0040D1B3  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
0040D1B7  81 E2 00 C0 00 00         AND EDX,0xc000
0040D1BD  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D1C3  0F 84 C6 01 00 00         JZ 0x0040d38f
0040D1C9  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D1CD  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0040D1D1  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040D1D5  40                        INC EAX
0040D1D6  50                        PUSH EAX
0040D1D7  51                        PUSH ECX
0040D1D8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D1DB  52                        PUSH EDX
0040D1DC  56                        PUSH ESI
0040D1DD  E8 CB 72 FF FF            CALL 0x004044ad
0040D1E2  85 C0                     TEST EAX,EAX
0040D1E4  0F 84 A5 01 00 00         JZ 0x0040d38f
0040D1EA  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D1EE  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0040D1F2  0F BF 17                  MOVSX EDX,word ptr [EDI]
0040D1F5  40                        INC EAX
0040D1F6  50                        PUSH EAX
0040D1F7  51                        PUSH ECX
0040D1F8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D1FB  52                        PUSH EDX
0040D1FC  56                        PUSH ESI
0040D1FD  E8 AB 72 FF FF            CALL 0x004044ad
0040D202  85 C0                     TEST EAX,EAX
0040D204  0F 84 85 01 00 00         JZ 0x0040d38f
0040D20A  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D20E  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D212  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040D216  40                        INC EAX
0040D217  50                        PUSH EAX
0040D218  51                        PUSH ECX
0040D219  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D21C  52                        PUSH EDX
0040D21D  56                        PUSH ESI
0040D21E  E8 8A 72 FF FF            CALL 0x004044ad
0040D223  85 C0                     TEST EAX,EAX
0040D225  0F 84 64 01 00 00         JZ 0x0040d38f
0040D22B  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D22F  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D233  0F BF 17                  MOVSX EDX,word ptr [EDI]
0040D236  50                        PUSH EAX
0040D237  51                        PUSH ECX
0040D238  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D23B  52                        PUSH EDX
0040D23C  56                        PUSH ESI
0040D23D  E8 6B 72 FF FF            CALL 0x004044ad
0040D242  85 C0                     TEST EAX,EAX
0040D244  0F 84 45 01 00 00         JZ 0x0040d38f
0040D24A  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D24E  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D252  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040D256  50                        PUSH EAX
0040D257  51                        PUSH ECX
0040D258  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D25B  52                        PUSH EDX
0040D25C  56                        PUSH ESI
0040D25D  E8 4B 72 FF FF            CALL 0x004044ad
0040D262  85 C0                     TEST EAX,EAX
0040D264  0F 84 25 01 00 00         JZ 0x0040d38f
0040D26A  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D26E  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0040D272  0F BF 17                  MOVSX EDX,word ptr [EDI]
0040D275  50                        PUSH EAX
0040D276  51                        PUSH ECX
0040D277  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D27A  52                        PUSH EDX
0040D27B  56                        PUSH ESI
0040D27C  E8 2C 72 FF FF            CALL 0x004044ad
0040D281  85 C0                     TEST EAX,EAX
0040D283  0F 85 DD 00 00 00         JNZ 0x0040d366
0040D289  E9 01 01 00 00            JMP 0x0040d38f
LAB_0040d28e:
0040D28E  F6 C4 60                  TEST AH,0x60
0040D291  0F 84 D2 00 00 00         JZ 0x0040d369
0040D297  8B C8                     MOV ECX,EAX
0040D299  80 E5 9F                  AND CH,0x9f
0040D29C  81 F9 FE 0F 00 00         CMP ECX,0xffe
0040D2A2  0F 84 C1 00 00 00         JZ 0x0040d369
0040D2A8  0F BF 47 04               MOVSX EAX,word ptr [EDI + 0x4]
0040D2AC  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040D2B0  2B C1                     SUB EAX,ECX
0040D2B2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040D2B5  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0040D2B9  66 8B 04 41               MOV AX,word ptr [ECX + EAX*0x2]
0040D2BD  25 00 C0 00 00            AND EAX,0xc000
0040D2C2  3D 00 C0 00 00            CMP EAX,0xc000
0040D2C7  0F 84 C2 00 00 00         JZ 0x0040d38f
0040D2CD  0F BF 47 04               MOVSX EAX,word ptr [EDI + 0x4]
0040D2D1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D2D4  50                        PUSH EAX
0040D2D5  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0040D2D9  52                        PUSH EDX
0040D2DA  50                        PUSH EAX
0040D2DB  56                        PUSH ESI
0040D2DC  E8 CC 71 FF FF            CALL 0x004044ad
0040D2E1  85 C0                     TEST EAX,EAX
0040D2E3  0F 84 A6 00 00 00         JZ 0x0040d38f
0040D2E9  66 8B 4F 02               MOV CX,word ptr [EDI + 0x2]
0040D2ED  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
0040D2F1  66 3B C8                  CMP CX,AX
0040D2F4  75 35                     JNZ 0x0040d32b
0040D2F6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040D2F9  66 8B 14 59               MOV DX,word ptr [ECX + EBX*0x2]
0040D2FD  81 E2 00 C0 00 00         AND EDX,0xc000
0040D303  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D309  0F 84 80 00 00 00         JZ 0x0040d38f
0040D30F  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0040D313  0F BF D0                  MOVSX EDX,AX
0040D316  0F BF 07                  MOVSX EAX,word ptr [EDI]
0040D319  51                        PUSH ECX
0040D31A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D31D  52                        PUSH EDX
0040D31E  50                        PUSH EAX
0040D31F  56                        PUSH ESI
0040D320  E8 88 71 FF FF            CALL 0x004044ad
0040D325  85 C0                     TEST EAX,EAX
0040D327  74 66                     JZ 0x0040d38f
0040D329  EB 3B                     JMP 0x0040d366
LAB_0040d32b:
0040D32B  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040D332  0F AF 55 F8               IMUL EDX,dword ptr [EBP + -0x8]
0040D336  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040D339  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
0040D33D  81 E2 00 C0 00 00         AND EDX,0xc000
0040D343  81 FA 00 C0 00 00         CMP EDX,0xc000
0040D349  74 44                     JZ 0x0040d38f
0040D34B  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0040D34F  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0040D353  0F BF C9                  MOVSX ECX,CX
0040D356  50                        PUSH EAX
0040D357  51                        PUSH ECX
0040D358  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040D35B  52                        PUSH EDX
0040D35C  56                        PUSH ESI
0040D35D  E8 4B 71 FF FF            CALL 0x004044ad
0040D362  85 C0                     TEST EAX,EAX
0040D364  74 29                     JZ 0x0040d38f
LAB_0040d366:
0040D366  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0040d369:
0040D369  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0040D36C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0040D36F  89 0A                     MOV dword ptr [EDX],ECX
0040D371  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0040D374  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
0040D378  89 0A                     MOV dword ptr [EDX],ECX
0040D37A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0040D37D  0F BF 4F 04               MOVSX ECX,word ptr [EDI + 0x4]
0040D381  89 0A                     MOV dword ptr [EDX],ECX
0040D383  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0040D386  89 01                     MOV dword ptr [ECX],EAX
0040D388  0F BF 57 06               MOVSX EDX,word ptr [EDI + 0x6]
0040D38C  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0040d38f:
0040D38F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0040D392  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0040D395  40                        INC EAX
0040D396  83 C7 08                  ADD EDI,0x8
0040D399  83 F8 09                  CMP EAX,0x9
0040D39C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0040D39F  0F 8C F6 FA FF FF         JL 0x0040ce9b
LAB_0040d3a5:
0040D3A5  43                        INC EBX
0040D3A6  83 FB 03                  CMP EBX,0x3
0040D3A9  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0040D3AC  0F 8C BE FA FF FF         JL 0x0040ce70
LAB_0040d3b2:
0040D3B2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0040D3B5  33 C0                     XOR EAX,EAX
0040D3B7  81 F9 30 75 00 00         CMP ECX,0x7530
0040D3BD  5F                        POP EDI
0040D3BE  5E                        POP ESI
0040D3BF  5B                        POP EBX
0040D3C0  0F 95 C0                  SETNZ AL
0040D3C3  8B E5                     MOV ESP,EBP
0040D3C5  5D                        POP EBP
0040D3C6  C2 18 00                  RET 0x18
