FUN_006cef60:
006CEF60  55                        PUSH EBP
006CEF61  8B EC                     MOV EBP,ESP
006CEF63  6A FF                     PUSH -0x1
006CEF65  68 38 DA 79 00            PUSH 0x79da38
006CEF6A  68 64 D9 72 00            PUSH 0x72d964
006CEF6F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006CEF75  50                        PUSH EAX
006CEF76  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006CEF7D  81 EC C0 00 00 00         SUB ESP,0xc0
006CEF83  53                        PUSH EBX
006CEF84  56                        PUSH ESI
006CEF85  57                        PUSH EDI
006CEF86  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006CEF89  33 FF                     XOR EDI,EDI
006CEF8B  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006CEF8E  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006CEF91  C1 E0 04                  SHL EAX,0x4
006CEF94  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CEF97  8D 4C 30 14               LEA ECX,[EAX + ESI*0x1 + 0x14]
006CEF9B  8B 11                     MOV EDX,dword ptr [ECX]
006CEF9D  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006CEFA0  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006CEFA3  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006CEFA6  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006CEFA9  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006CEFAC  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006CEFAF  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006CEFB2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CEFB5  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006CEFB8  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CEFBB  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006CEFBE  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006CEFC1  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006CEFC4  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006CEFC7  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006CEFCA  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006CEFCD  8D 55 BC                  LEA EDX,[EBP + -0x44]
006CEFD0  52                        PUSH EDX
006CEFD1  8D 45 CC                  LEA EAX,[EBP + -0x34]
006CEFD4  50                        PUSH EAX
006CEFD5  8D 4D CC                  LEA ECX,[EBP + -0x34]
006CEFD8  51                        PUSH ECX
006CEFD9  E8 D2 0E 00 00            CALL 0x006cfeb0
006CEFDE  83 C4 0C                  ADD ESP,0xc
006CEFE1  85 C0                     TEST EAX,EAX
006CEFE3  0F 84 25 09 00 00         JZ 0x006cf90e
006CEFE9  8B 0E                     MOV ECX,dword ptr [ESI]
006CEFEB  83 79 20 10               CMP dword ptr [ECX + 0x20],0x10
006CEFEF  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006CEFF2  75 18                     JNZ 0x006cf00c
006CEFF4  8B 86 B4 00 00 00         MOV EAX,dword ptr [ESI + 0xb4]
006CEFFA  85 C0                     TEST EAX,EAX
006CEFFC  74 05                     JZ 0x006cf003
006CEFFE  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006CF001  EB 09                     JMP 0x006cf00c
LAB_006cf003:
006CF003  8B 91 C0 04 00 00         MOV EDX,dword ptr [ECX + 0x4c0]
006CF009  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_006cf00c:
006CF00C  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006CF00F  A9 00 00 00 A0            TEST EAX,0xa0000000
006CF014  0F 84 B3 00 00 00         JZ 0x006cf0cd
006CF01A  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006CF01D  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006CF020  03 FA                     ADD EDI,EDX
006CF022  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006CF025  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
006CF028  01 75 D8                  ADD dword ptr [EBP + -0x28],ESI
006CF02B  8B 03                     MOV EAX,dword ptr [EBX]
006CF02D  2B 45 20                  SUB EAX,dword ptr [EBP + 0x20]
006CF030  03 C2                     ADD EAX,EDX
006CF032  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006CF035  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006CF038  2B 4D 24                  SUB ECX,dword ptr [EBP + 0x24]
006CF03B  03 CE                     ADD ECX,ESI
006CF03D  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006CF040  2B C2                     SUB EAX,EDX
006CF042  03 C7                     ADD EAX,EDI
006CF044  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006CF047  2B CE                     SUB ECX,ESI
006CF049  03 4D D8                  ADD ECX,dword ptr [EBP + -0x28]
006CF04C  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006CF04F  33 F6                     XOR ESI,ESI
006CF051  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006cf054:
006CF054  8B 03                     MOV EAX,dword ptr [EBX]
006CF056  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
006CF059  8B 08                     MOV ECX,dword ptr [EAX]
006CF05B  6A 00                     PUSH 0x0
006CF05D  68 00 80 00 01            PUSH 0x1008000
006CF062  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006CF065  52                        PUSH EDX
006CF066  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CF069  52                        PUSH EDX
006CF06A  8D 55 CC                  LEA EDX,[EBP + -0x34]
006CF06D  52                        PUSH EDX
006CF06E  50                        PUSH EAX
006CF06F  FF 51 14                  CALL dword ptr [ECX + 0x14]
006CF072  8B F8                     MOV EDI,EAX
006CF074  85 FF                     TEST EDI,EDI
006CF076  74 3A                     JZ 0x006cf0b2
006CF078  81 FF C2 01 76 88         CMP EDI,0x887601c2
006CF07E  75 10                     JNZ 0x006cf090
006CF080  8B 03                     MOV EAX,dword ptr [EBX]
006CF082  50                        PUSH EAX
006CF083  E8 B8 FB FF FF            CALL 0x006cec40
006CF088  53                        PUSH EBX
006CF089  E8 D2 FD FF FF            CALL 0x006cee60
006CF08E  EB 1C                     JMP 0x006cf0ac
LAB_006cf090:
006CF090  81 FF A0 00 76 88         CMP EDI,0x887600a0
006CF096  74 08                     JZ 0x006cf0a0
006CF098  81 FF AE 01 76 88         CMP EDI,0x887601ae
006CF09E  75 12                     JNZ 0x006cf0b2
LAB_006cf0a0:
006CF0A0  85 F6                     TEST ESI,ESI
006CF0A2  75 0E                     JNZ 0x006cf0b2
006CF0A4  6A 02                     PUSH 0x2
006CF0A6  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006cf0ac:
006CF0AC  46                        INC ESI
006CF0AD  83 FE 02                  CMP ESI,0x2
006CF0B0  7C A2                     JL 0x006cf054
LAB_006cf0b2:
006CF0B2  81 FF A0 00 76 88         CMP EDI,0x887600a0
006CF0B8  74 0C                     JZ 0x006cf0c6
006CF0BA  81 FF AE 01 76 88         CMP EDI,0x887601ae
006CF0C0  0F 85 4B 08 00 00         JNZ 0x006cf911
LAB_006cf0c6:
006CF0C6  33 FF                     XOR EDI,EDI
006CF0C8  E9 44 08 00 00            JMP 0x006cf911
LAB_006cf0cd:
006CF0CD  A9 00 00 00 C0            TEST EAX,0xc0000000
006CF0D2  0F 84 AF 00 00 00         JZ 0x006cf187
006CF0D8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006CF0DB  85 C0                     TEST EAX,EAX
006CF0DD  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006CF0E0  75 09                     JNZ 0x006cf0eb
006CF0E2  53                        PUSH EBX
006CF0E3  E8 B8 5E FE FF            CALL 0x006b4fa0
006CF0E8  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006cf0eb:
006CF0EB  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006CF0EE  8B 38                     MOV EDI,dword ptr [EAX]
006CF0F0  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006CF0F3  03 7D CC                  ADD EDI,dword ptr [EBP + -0x34]
006CF0F6  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006CF0F9  2B 45 24                  SUB EAX,dword ptr [EBP + 0x24]
006CF0FC  03 45 D0                  ADD EAX,dword ptr [EBP + -0x30]
006CF0FF  33 C9                     XOR ECX,ECX
006CF101  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
006CF105  0F AF 4B 04               IMUL ECX,dword ptr [EBX + 0x4]
006CF109  83 C1 1F                  ADD ECX,0x1f
006CF10C  C1 E9 03                  SHR ECX,0x3
006CF10F  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006CF115  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006CF118  2B D0                     SUB EDX,EAX
006CF11A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006CF11D  2B D0                     SUB EDX,EAX
006CF11F  0F AF D1                  IMUL EDX,ECX
006CF122  03 D7                     ADD EDX,EDI
006CF124  01 55 1C                  ADD dword ptr [EBP + 0x1c],EDX
006CF127  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006CF12A  8D 54 10 FF               LEA EDX,[EAX + EDX*0x1 + -0x1]
006CF12E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006CF131  0F AF D7                  IMUL EDX,EDI
006CF134  03 55 CC                  ADD EDX,dword ptr [EBP + -0x34]
006CF137  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006CF13A  03 DA                     ADD EBX,EDX
006CF13C  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
006CF13F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006CF146  8A 56 54                  MOV DL,byte ptr [ESI + 0x54]
006CF149  52                        PUSH EDX
006CF14A  50                        PUSH EAX
006CF14B  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006CF14E  50                        PUSH EAX
006CF14F  51                        PUSH ECX
006CF150  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CF153  51                        PUSH ECX
006CF154  F7 DF                     NEG EDI
006CF156  57                        PUSH EDI
006CF157  8B D3                     MOV EDX,EBX
006CF159  52                        PUSH EDX
006CF15A  E8 81 FA FF FF            CALL 0x006cebe0
006CF15F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006CF166  E9 A3 07 00 00            JMP 0x006cf90e
LAB_006cf187:
006CF187  A9 00 00 00 05            TEST EAX,0x5000000
006CF18C  0F 84 72 04 00 00         JZ 0x006cf604
006CF192  C7 85 78 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x0
006CF19C  3C 02                     CMP AL,0x2
006CF19E  75 69                     JNZ 0x006cf209
006CF1A0  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006CF1A3  50                        PUSH EAX
006CF1A4  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006CF1A7  51                        PUSH ECX
006CF1A8  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006CF1AB  52                        PUSH EDX
006CF1AC  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006CF1AF  50                        PUSH EAX
006CF1B0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006CF1B3  53                        PUSH EBX
006CF1B4  E8 77 AD 00 00            CALL 0x006d9f30
006CF1B9  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006CF1BC  85 C0                     TEST EAX,EAX
006CF1BE  0F 85 4A 07 00 00         JNZ 0x006cf90e
006CF1C4  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_006cf1c7:
006CF1C7  6A 20                     PUSH 0x20
006CF1C9  8D 4D 10                  LEA ECX,[EBP + 0x10]
006CF1CC  51                        PUSH ECX
006CF1CD  8D 55 0C                  LEA EDX,[EBP + 0xc]
006CF1D0  52                        PUSH EDX
006CF1D1  8B 03                     MOV EAX,dword ptr [EBX]
006CF1D3  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
006CF1D6  51                        PUSH ECX
006CF1D7  E8 64 CC FE FF            CALL 0x006bbe40
006CF1DC  8B F8                     MOV EDI,EAX
006CF1DE  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006CF1E1  85 FF                     TEST EDI,EDI
006CF1E3  74 24                     JZ 0x006cf209
006CF1E5  81 FF C2 01 76 88         CMP EDI,0x887601c2
006CF1EB  75 14                     JNZ 0x006cf201
006CF1ED  8B 13                     MOV EDX,dword ptr [EBX]
006CF1EF  52                        PUSH EDX
006CF1F0  E8 4B FA FF FF            CALL 0x006cec40
006CF1F5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006CF1F8  40                        INC EAX
006CF1F9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006CF1FC  83 F8 02                  CMP EAX,0x2
006CF1FF  7C C6                     JL 0x006cf1c7
LAB_006cf201:
006CF201  85 FF                     TEST EDI,EDI
006CF203  0F 85 05 07 00 00         JNZ 0x006cf90e
LAB_006cf209:
006CF209  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CF20C  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
006CF20F  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006CF212  01 4D D4                  ADD dword ptr [EBP + -0x2c],ECX
006CF215  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006CF218  01 55 D8                  ADD dword ptr [EBP + -0x28],EDX
006CF21B  C7 85 64 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff64],0x0
LAB_006cf225:
006CF225  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
006CF22B  3B 4D 2C                  CMP ECX,dword ptr [EBP + 0x2c]
006CF22E  0F 8D F5 01 00 00         JGE 0x006cf429
006CF234  8B 50 06                  MOV EDX,dword ptr [EAX + 0x6]
006CF237  85 D2                     TEST EDX,EDX
006CF239  0F 84 EA 01 00 00         JZ 0x006cf429
006CF23F  66 83 78 04 00            CMP word ptr [EAX + 0x4],0x0
006CF244  0F 8C 48 01 00 00         JL 0x006cf392
006CF24A  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006CF24D  0F BF 01                  MOVSX EAX,word ptr [ECX]
006CF250  2B 46 28                  SUB EAX,dword ptr [ESI + 0x28]
006CF253  03 46 18                  ADD EAX,dword ptr [ESI + 0x18]
006CF256  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
006CF259  0F BF 49 02               MOVSX ECX,word ptr [ECX + 0x2]
006CF25D  2B 4E 2C                  SUB ECX,dword ptr [ESI + 0x2c]
006CF260  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
006CF263  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
006CF269  0F BF 7A 0E               MOVSX EDI,word ptr [EDX + 0xe]
006CF26D  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006CF270  2B 3B                     SUB EDI,dword ptr [EBX]
006CF272  03 F8                     ADD EDI,EAX
006CF274  03 7D 20                  ADD EDI,dword ptr [EBP + 0x20]
006CF277  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
006CF27A  0F BF 5A 10               MOVSX EBX,word ptr [EDX + 0x10]
006CF27E  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006CF281  2B 58 04                  SUB EBX,dword ptr [EAX + 0x4]
006CF284  03 D9                     ADD EBX,ECX
006CF286  03 5D 24                  ADD EBX,dword ptr [EBP + 0x24]
006CF289  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
006CF28C  0F BF 4A 12               MOVSX ECX,word ptr [EDX + 0x12]
006CF290  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
006CF293  0F BF 52 14               MOVSX EDX,word ptr [EDX + 0x14]
006CF297  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
006CF29A  8D 45 CC                  LEA EAX,[EBP + -0x34]
006CF29D  50                        PUSH EAX
006CF29E  8D 4D A4                  LEA ECX,[EBP + -0x5c]
006CF2A1  51                        PUSH ECX
006CF2A2  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006CF2A5  52                        PUSH EDX
006CF2A6  E8 05 0C 00 00            CALL 0x006cfeb0
006CF2AB  83 C4 0C                  ADD ESP,0xc
006CF2AE  85 C0                     TEST EAX,EAX
006CF2B0  0F 84 DC 00 00 00         JZ 0x006cf392
006CF2B6  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006CF2B9  8B C8                     MOV ECX,EAX
006CF2BB  2B CF                     SUB ECX,EDI
006CF2BD  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006CF2C0  8B FA                     MOV EDI,EDX
006CF2C2  2B FB                     SUB EDI,EBX
006CF2C4  89 BD 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDI
006CF2CA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006CF2CD  8B 3F                     MOV EDI,dword ptr [EDI]
006CF2CF  8B 7F 20                  MOV EDI,dword ptr [EDI + 0x20]
006CF2D2  89 BD 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDI
006CF2D8  83 FF 10                  CMP EDI,0x10
006CF2DB  8B FA                     MOV EDI,EDX
006CF2DD  75 0E                     JNZ 0x006cf2ed
006CF2DF  0F AF 7D 10               IMUL EDI,dword ptr [EBP + 0x10]
006CF2E3  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006CF2E6  03 DF                     ADD EBX,EDI
006CF2E8  8D 3C 43                  LEA EDI,[EBX + EAX*0x2]
006CF2EB  EB 09                     JMP 0x006cf2f6
LAB_006cf2ed:
006CF2ED  0F AF 7D 10               IMUL EDI,dword ptr [EBP + 0x10]
006CF2F1  03 F8                     ADD EDI,EAX
006CF2F3  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
LAB_006cf2f6:
006CF2F6  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006CF2F9  81 E3 FF 00 00 00         AND EBX,0xff
006CF2FF  0F 85 46 01 00 00         JNZ 0x006cf44b
006CF305  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006CF30C  83 BD 38 FF FF FF 10      CMP dword ptr [EBP + 0xffffff38],0x10
006CF313  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006CF316  8B 5B 04                  MOV EBX,dword ptr [EBX + 0x4]
006CF319  0F 85 8C 00 00 00         JNZ 0x006cf3ab
006CF31F  2B 5D 24                  SUB EBX,dword ptr [EBP + 0x24]
006CF322  2B 5E 1C                  SUB EBX,dword ptr [ESI + 0x1c]
006CF325  03 DA                     ADD EBX,EDX
006CF327  03 5E 2C                  ADD EBX,dword ptr [ESI + 0x2c]
006CF32A  53                        PUSH EBX
006CF32B  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CF32E  8B 12                     MOV EDX,dword ptr [EDX]
006CF330  2B 56 18                  SUB EDX,dword ptr [ESI + 0x18]
006CF333  2B 55 20                  SUB EDX,dword ptr [EBP + 0x20]
006CF336  03 56 28                  ADD EDX,dword ptr [ESI + 0x28]
006CF339  03 D0                     ADD EDX,EAX
006CF33B  52                        PUSH EDX
006CF33C  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF342  83 C0 07                  ADD EAX,0x7
006CF345  99                        CDQ
006CF346  83 E2 07                  AND EDX,0x7
006CF349  03 C2                     ADD EAX,EDX
006CF34B  C1 F8 03                  SAR EAX,0x3
006CF34E  50                        PUSH EAX
006CF34F  8B 86 B8 00 00 00         MOV EAX,dword ptr [ESI + 0xb8]
006CF355  50                        PUSH EAX
006CF356  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006CF359  52                        PUSH EDX
006CF35A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006CF35D  50                        PUSH EAX
006CF35E  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006CF361  52                        PUSH EDX
006CF362  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
006CF368  50                        PUSH EAX
006CF369  51                        PUSH ECX
006CF36A  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006CF36D  8B 51 06                  MOV EDX,dword ptr [ECX + 0x6]
006CF370  52                        PUSH EDX
006CF371  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006CF374  50                        PUSH EAX
006CF375  57                        PUSH EDI
006CF376  E8 85 3F 00 00            CALL 0x006d3300
LAB_006cf37b:
006CF37B  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006cf382:
006CF382  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006CF385  85 C0                     TEST EAX,EAX
006CF387  75 09                     JNZ 0x006cf392
006CF389  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006CF38F  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
LAB_006cf392:
006CF392  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006CF395  83 C1 0A                  ADD ECX,0xa
006CF398  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
006CF39B  FF 85 64 FF FF FF         INC dword ptr [EBP + 0xffffff64]
006CF3A1  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
006CF3A4  8B C1                     MOV EAX,ECX
006CF3A6  E9 7A FE FF FF            JMP 0x006cf225
LAB_006cf3ab:
006CF3AB  2B 5D 24                  SUB EBX,dword ptr [EBP + 0x24]
006CF3AE  2B 5E 1C                  SUB EBX,dword ptr [ESI + 0x1c]
006CF3B1  03 DA                     ADD EBX,EDX
006CF3B3  03 5E 2C                  ADD EBX,dword ptr [ESI + 0x2c]
006CF3B6  53                        PUSH EBX
006CF3B7  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CF3BA  8B 12                     MOV EDX,dword ptr [EDX]
006CF3BC  2B 56 18                  SUB EDX,dword ptr [ESI + 0x18]
006CF3BF  2B 55 20                  SUB EDX,dword ptr [EBP + 0x20]
006CF3C2  03 56 28                  ADD EDX,dword ptr [ESI + 0x28]
006CF3C5  03 D0                     ADD EDX,EAX
006CF3C7  52                        PUSH EDX
006CF3C8  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF3CE  83 C0 07                  ADD EAX,0x7
006CF3D1  99                        CDQ
006CF3D2  83 E2 07                  AND EDX,0x7
006CF3D5  03 C2                     ADD EAX,EDX
006CF3D7  C1 F8 03                  SAR EAX,0x3
006CF3DA  50                        PUSH EAX
006CF3DB  8B 86 B8 00 00 00         MOV EAX,dword ptr [ESI + 0xb8]
006CF3E1  50                        PUSH EAX
006CF3E2  8B 96 B0 00 00 00         MOV EDX,dword ptr [ESI + 0xb0]
006CF3E8  52                        PUSH EDX
006CF3E9  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006CF3EC  50                        PUSH EAX
006CF3ED  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006CF3F0  52                        PUSH EDX
006CF3F1  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
006CF3F7  50                        PUSH EAX
006CF3F8  51                        PUSH ECX
006CF3F9  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006CF3FC  8B 51 06                  MOV EDX,dword ptr [ECX + 0x6]
006CF3FF  52                        PUSH EDX
006CF400  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006CF403  50                        PUSH EAX
006CF404  57                        PUSH EDI
006CF405  E8 16 34 00 00            CALL 0x006d2820
006CF40A  E9 6C FF FF FF            JMP 0x006cf37b
LAB_006cf429:
006CF429  80 7D 34 02               CMP byte ptr [EBP + 0x34],0x2
006CF42D  0F 85 DB 04 00 00         JNZ 0x006cf90e
006CF433  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CF436  8B 02                     MOV EAX,dword ptr [EDX]
006CF438  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
006CF43B  8B 08                     MOV ECX,dword ptr [EAX]
006CF43D  6A 00                     PUSH 0x0
006CF43F  50                        PUSH EAX
006CF440  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
006CF446  E9 C6 04 00 00            JMP 0x006cf911
LAB_006cf44b:
006CF44B  83 FB 02                  CMP EBX,0x2
006CF44E  0F 85 93 00 00 00         JNZ 0x006cf4e7
006CF454  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006CF457  8B 50 06                  MOV EDX,dword ptr [EAX + 0x6]
006CF45A  89 95 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EDX
006CF460  0F BF 5A 0E               MOVSX EBX,word ptr [EDX + 0xe]
006CF464  2B 5D CC                  SUB EBX,dword ptr [EBP + -0x34]
006CF467  0F BF 00                  MOVSX EAX,word ptr [EAX]
006CF46A  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006CF46D  03 D3                     ADD EDX,EBX
006CF46F  03 C2                     ADD EAX,EDX
006CF471  03 45 20                  ADD EAX,dword ptr [EBP + 0x20]
006CF474  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006CF47A  79 0A                     JNS 0x006cf486
006CF47C  C7 85 74 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff74],0x0
LAB_006cf486:
006CF486  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
006CF48C  0F BF 5A 10               MOVSX EBX,word ptr [EDX + 0x10]
006CF490  2B 5D D0                  SUB EBX,dword ptr [EBP + -0x30]
006CF493  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006CF496  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
006CF49A  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006CF4A0  03 D3                     ADD EDX,EBX
006CF4A2  03 C2                     ADD EAX,EDX
006CF4A4  03 45 24                  ADD EAX,dword ptr [EBP + 0x24]
006CF4A7  79 02                     JNS 0x006cf4ab
006CF4A9  33 C0                     XOR EAX,EAX
LAB_006cf4ab:
006CF4AB  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006CF4AE  52                        PUSH EDX
006CF4AF  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006CF4B2  52                        PUSH EDX
006CF4B3  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006CF4B6  52                        PUSH EDX
006CF4B7  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
006CF4BD  52                        PUSH EDX
006CF4BE  51                        PUSH ECX
006CF4BF  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
006CF4C5  51                        PUSH ECX
006CF4C6  50                        PUSH EAX
006CF4C7  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006CF4CD  52                        PUSH EDX
006CF4CE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006CF4D1  50                        PUSH EAX
006CF4D2  57                        PUSH EDI
006CF4D3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CF4D6  51                        PUSH ECX
006CF4D7  E8 A4 AB 00 00            CALL 0x006da080
006CF4DC  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006CF4E2  E9 9B FE FF FF            JMP 0x006cf382
LAB_006cf4e7:
006CF4E7  83 FB 01                  CMP EBX,0x1
006CF4EA  0F 85 92 FE FF FF         JNZ 0x006cf382
006CF4F0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006CF4F3  83 BB D0 01 00 00 00      CMP dword ptr [EBX + 0x1d0],0x0
006CF4FA  74 57                     JZ 0x006cf553
006CF4FC  8B 5D 84                  MOV EBX,dword ptr [EBP + -0x7c]
006CF4FF  8B 5B 06                  MOV EBX,dword ptr [EBX + 0x6]
006CF502  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
006CF508  8A 5B 0D                  MOV BL,byte ptr [EBX + 0xd]
006CF50B  80 E3 03                  AND BL,0x3
006CF50E  80 FB 01                  CMP BL,0x1
006CF511  75 40                     JNZ 0x006cf553
006CF513  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
006CF51A  8B 56 64                  MOV EDX,dword ptr [ESI + 0x64]
006CF51D  52                        PUSH EDX
006CF51E  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006CF521  50                        PUSH EAX
006CF522  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006CF525  52                        PUSH EDX
006CF526  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006CF529  50                        PUSH EAX
006CF52A  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
006CF530  52                        PUSH EDX
006CF531  51                        PUSH ECX
006CF532  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
006CF538  50                        PUSH EAX
006CF539  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CF53C  51                        PUSH ECX
006CF53D  57                        PUSH EDI
006CF53E  E8 9D 91 00 00            CALL 0x006d86e0
006CF543  E9 33 FE FF FF            JMP 0x006cf37b
LAB_006cf553:
006CF553  8B 5E 5C                  MOV EBX,dword ptr [ESI + 0x5c]
006CF556  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006CF559  83 7E 64 01               CMP dword ptr [ESI + 0x64],0x1
006CF55D  75 10                     JNZ 0x006cf56f
006CF55F  85 DB                     TEST EBX,EBX
006CF561  75 0C                     JNZ 0x006cf56f
006CF563  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006CF566  8B 9B D4 01 00 00         MOV EBX,dword ptr [EBX + 0x1d4]
006CF56C  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
LAB_006cf56f:
006CF56F  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
006CF576  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006CF579  8B 5B 04                  MOV EBX,dword ptr [EBX + 0x4]
006CF57C  2B 5D 24                  SUB EBX,dword ptr [EBP + 0x24]
006CF57F  2B 5E 1C                  SUB EBX,dword ptr [ESI + 0x1c]
006CF582  03 DA                     ADD EBX,EDX
006CF584  03 5E 2C                  ADD EBX,dword ptr [ESI + 0x2c]
006CF587  53                        PUSH EBX
006CF588  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CF58B  8B 12                     MOV EDX,dword ptr [EDX]
006CF58D  2B 56 18                  SUB EDX,dword ptr [ESI + 0x18]
006CF590  2B 55 20                  SUB EDX,dword ptr [EBP + 0x20]
006CF593  03 56 28                  ADD EDX,dword ptr [ESI + 0x28]
006CF596  03 D0                     ADD EDX,EAX
006CF598  52                        PUSH EDX
006CF599  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF59F  83 C0 07                  ADD EAX,0x7
006CF5A2  99                        CDQ
006CF5A3  83 E2 07                  AND EDX,0x7
006CF5A6  03 C2                     ADD EAX,EDX
006CF5A8  C1 F8 03                  SAR EAX,0x3
006CF5AB  50                        PUSH EAX
006CF5AC  8B 86 B8 00 00 00         MOV EAX,dword ptr [ESI + 0xb8]
006CF5B2  50                        PUSH EAX
006CF5B3  8B 96 B0 00 00 00         MOV EDX,dword ptr [ESI + 0xb0]
006CF5B9  52                        PUSH EDX
006CF5BA  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006CF5BD  50                        PUSH EAX
006CF5BE  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006CF5C1  50                        PUSH EAX
006CF5C2  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006CF5C5  81 E2 00 01 00 00         AND EDX,0x100
006CF5CB  F7 DA                     NEG EDX
006CF5CD  1B D2                     SBB EDX,EDX
006CF5CF  23 55 E4                  AND EDX,dword ptr [EBP + -0x1c]
006CF5D2  52                        PUSH EDX
006CF5D3  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006CF5D6  50                        PUSH EAX
006CF5D7  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006CF5DA  52                        PUSH EDX
006CF5DB  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
006CF5E1  50                        PUSH EAX
006CF5E2  51                        PUSH ECX
006CF5E3  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006CF5E6  8B 51 06                  MOV EDX,dword ptr [ECX + 0x6]
006CF5E9  52                        PUSH EDX
006CF5EA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006CF5ED  50                        PUSH EAX
006CF5EE  57                        PUSH EDI
006CF5EF  E8 6C 94 00 00            CALL 0x006d8a60
006CF5F4  E9 82 FD FF FF            JMP 0x006cf37b
LAB_006cf604:
006CF604  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006CF607  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
006CF60D  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006CF610  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
006CF616  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006CF619  89 BD 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EDI
006CF61F  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006CF622  89 9D 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EBX
006CF628  25 FF 00 00 00            AND EAX,0xff
006CF62D  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
006CF633  83 F8 02                  CMP EAX,0x2
006CF636  75 5D                     JNZ 0x006cf695
006CF638  53                        PUSH EBX
006CF639  57                        PUSH EDI
006CF63A  52                        PUSH EDX
006CF63B  51                        PUSH ECX
006CF63C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006CF63F  57                        PUSH EDI
006CF640  E8 EB A8 00 00            CALL 0x006d9f30
006CF645  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006CF648  85 C0                     TEST EAX,EAX
006CF64A  0F 85 BE 02 00 00         JNZ 0x006cf90e
006CF650  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_006cf653:
006CF653  6A 20                     PUSH 0x20
006CF655  8D 55 10                  LEA EDX,[EBP + 0x10]
006CF658  52                        PUSH EDX
006CF659  8D 45 0C                  LEA EAX,[EBP + 0xc]
006CF65C  50                        PUSH EAX
006CF65D  8B 0F                     MOV ECX,dword ptr [EDI]
006CF65F  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
006CF662  52                        PUSH EDX
006CF663  E8 D8 C7 FE FF            CALL 0x006bbe40
006CF668  8B D8                     MOV EBX,EAX
006CF66A  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006CF66D  85 DB                     TEST EBX,EBX
006CF66F  74 24                     JZ 0x006cf695
006CF671  81 FB C2 01 76 88         CMP EBX,0x887601c2
006CF677  75 14                     JNZ 0x006cf68d
006CF679  8B 07                     MOV EAX,dword ptr [EDI]
006CF67B  50                        PUSH EAX
006CF67C  E8 BF F5 FF FF            CALL 0x006cec40
006CF681  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006CF684  40                        INC EAX
006CF685  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006CF688  83 F8 02                  CMP EAX,0x2
006CF68B  7C C6                     JL 0x006cf653
LAB_006cf68d:
006CF68D  85 DB                     TEST EBX,EBX
006CF68F  0F 85 79 02 00 00         JNZ 0x006cf90e
LAB_006cf695:
006CF695  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CF698  8B 11                     MOV EDX,dword ptr [ECX]
006CF69A  83 7A 20 10               CMP dword ptr [EDX + 0x20],0x10
006CF69E  75 1A                     JNZ 0x006cf6ba
006CF6A0  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
006CF6A6  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006CF6A9  0F AF C3                  IMUL EAX,EBX
006CF6AC  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
006CF6AF  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
006CF6B5  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006CF6B8  EB 17                     JMP 0x006cf6d1
LAB_006cf6ba:
006CF6BA  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
006CF6C0  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006CF6C3  0F AF CB                  IMUL ECX,EBX
006CF6C6  03 8D 50 FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff50]
006CF6CC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CF6CF  03 C1                     ADD EAX,ECX
LAB_006cf6d1:
006CF6D1  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006CF6D4  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006CF6D7  8B 08                     MOV ECX,dword ptr [EAX]
006CF6D9  2B 4D 20                  SUB ECX,dword ptr [EBP + 0x20]
006CF6DC  03 8D 50 FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff50]
006CF6E2  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
006CF6E5  2B 7D 24                  SUB EDI,dword ptr [EBP + 0x24]
006CF6E8  03 BD 4C FF FF FF         ADD EDI,dword ptr [EBP + 0xffffff4c]
006CF6EE  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
006CF6F4  85 C0                     TEST EAX,EAX
006CF6F6  0F 85 C1 00 00 00         JNZ 0x006cf7bd
006CF6FC  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
006CF703  83 7A 20 10               CMP dword ptr [EDX + 0x20],0x10
006CF707  75 53                     JNZ 0x006cf75c
006CF709  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
006CF70C  2B 56 1C                  SUB EDX,dword ptr [ESI + 0x1c]
006CF70F  03 D7                     ADD EDX,EDI
006CF711  52                        PUSH EDX
006CF712  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006CF715  2B 46 18                  SUB EAX,dword ptr [ESI + 0x18]
006CF718  03 C1                     ADD EAX,ECX
006CF71A  50                        PUSH EAX
006CF71B  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF721  83 C0 07                  ADD EAX,0x7
006CF724  99                        CDQ
006CF725  83 E2 07                  AND EDX,0x7
006CF728  03 C2                     ADD EAX,EDX
006CF72A  C1 F8 03                  SAR EAX,0x3
006CF72D  50                        PUSH EAX
006CF72E  8B 96 B8 00 00 00         MOV EDX,dword ptr [ESI + 0xb8]
006CF734  52                        PUSH EDX
006CF735  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006CF738  50                        PUSH EAX
006CF739  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
006CF73F  52                        PUSH EDX
006CF740  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006CF746  50                        PUSH EAX
006CF747  57                        PUSH EDI
006CF748  51                        PUSH ECX
006CF749  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CF74C  51                        PUSH ECX
006CF74D  53                        PUSH EBX
006CF74E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CF751  52                        PUSH EDX
006CF752  E8 A9 3B 00 00            CALL 0x006d3300
006CF757  E9 92 01 00 00            JMP 0x006cf8ee
LAB_006cf75c:
006CF75C  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006CF75F  2B 46 1C                  SUB EAX,dword ptr [ESI + 0x1c]
006CF762  03 C7                     ADD EAX,EDI
006CF764  50                        PUSH EAX
006CF765  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006CF768  2B 56 18                  SUB EDX,dword ptr [ESI + 0x18]
006CF76B  03 D1                     ADD EDX,ECX
006CF76D  52                        PUSH EDX
006CF76E  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF774  83 C0 07                  ADD EAX,0x7
006CF777  99                        CDQ
006CF778  83 E2 07                  AND EDX,0x7
006CF77B  03 C2                     ADD EAX,EDX
006CF77D  C1 F8 03                  SAR EAX,0x3
006CF780  50                        PUSH EAX
006CF781  8B 86 B8 00 00 00         MOV EAX,dword ptr [ESI + 0xb8]
006CF787  50                        PUSH EAX
006CF788  8B 96 B0 00 00 00         MOV EDX,dword ptr [ESI + 0xb0]
006CF78E  52                        PUSH EDX
006CF78F  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
006CF795  50                        PUSH EAX
006CF796  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
006CF79C  52                        PUSH EDX
006CF79D  57                        PUSH EDI
006CF79E  51                        PUSH ECX
006CF79F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CF7A2  50                        PUSH EAX
006CF7A3  53                        PUSH EBX
006CF7A4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CF7A7  51                        PUSH ECX
006CF7A8  E8 73 30 00 00            CALL 0x006d2820
006CF7AD  E9 3C 01 00 00            JMP 0x006cf8ee
LAB_006cf7bd:
006CF7BD  83 F8 02                  CMP EAX,0x2
006CF7C0  75 32                     JNZ 0x006cf7f4
006CF7C2  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006CF7C5  52                        PUSH EDX
006CF7C6  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
006CF7CC  50                        PUSH EAX
006CF7CD  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
006CF7D3  52                        PUSH EDX
006CF7D4  57                        PUSH EDI
006CF7D5  51                        PUSH ECX
006CF7D6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CF7D9  50                        PUSH EAX
006CF7DA  6A 00                     PUSH 0x0
006CF7DC  6A 00                     PUSH 0x0
006CF7DE  53                        PUSH EBX
006CF7DF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CF7E2  51                        PUSH ECX
006CF7E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CF7E6  52                        PUSH EDX
006CF7E7  E8 94 A8 00 00            CALL 0x006da080
006CF7EC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006CF7EF  E9 01 01 00 00            JMP 0x006cf8f5
LAB_006cf7f4:
006CF7F4  83 F8 01                  CMP EAX,0x1
006CF7F7  0F 85 F8 00 00 00         JNZ 0x006cf8f5
006CF7FD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CF800  8B 82 D0 01 00 00         MOV EAX,dword ptr [EDX + 0x1d0]
006CF806  85 C0                     TEST EAX,EAX
006CF808  74 49                     JZ 0x006cf853
006CF80A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CF80D  8A 40 0D                  MOV AL,byte ptr [EAX + 0xd]
006CF810  24 03                     AND AL,0x3
006CF812  3C 01                     CMP AL,0x1
006CF814  75 3D                     JNZ 0x006cf853
006CF816  C7 45 FC 06 00 00 00      MOV dword ptr [EBP + -0x4],0x6
006CF81D  8B 56 64                  MOV EDX,dword ptr [ESI + 0x64]
006CF820  52                        PUSH EDX
006CF821  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006CF824  50                        PUSH EAX
006CF825  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
006CF82B  52                        PUSH EDX
006CF82C  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006CF832  50                        PUSH EAX
006CF833  57                        PUSH EDI
006CF834  51                        PUSH ECX
006CF835  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CF838  51                        PUSH ECX
006CF839  53                        PUSH EBX
006CF83A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CF83D  52                        PUSH EDX
006CF83E  E8 9D 8E 00 00            CALL 0x006d86e0
006CF843  E9 A6 00 00 00            JMP 0x006cf8ee
LAB_006cf853:
006CF853  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006CF856  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006CF859  83 7E 64 01               CMP dword ptr [ESI + 0x64],0x1
006CF85D  75 0D                     JNZ 0x006cf86c
006CF85F  85 C0                     TEST EAX,EAX
006CF861  75 09                     JNZ 0x006cf86c
006CF863  8B 82 D4 01 00 00         MOV EAX,dword ptr [EDX + 0x1d4]
006CF869  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_006cf86c:
006CF86C  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
006CF873  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
006CF876  2B 56 1C                  SUB EDX,dword ptr [ESI + 0x1c]
006CF879  03 D7                     ADD EDX,EDI
006CF87B  52                        PUSH EDX
006CF87C  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006CF87F  2B 46 18                  SUB EAX,dword ptr [ESI + 0x18]
006CF882  03 C1                     ADD EAX,ECX
006CF884  50                        PUSH EAX
006CF885  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF88B  83 C0 07                  ADD EAX,0x7
006CF88E  99                        CDQ
006CF88F  83 E2 07                  AND EDX,0x7
006CF892  03 C2                     ADD EAX,EDX
006CF894  C1 F8 03                  SAR EAX,0x3
006CF897  50                        PUSH EAX
006CF898  8B 96 B8 00 00 00         MOV EDX,dword ptr [ESI + 0xb8]
006CF89E  52                        PUSH EDX
006CF89F  8B 86 B0 00 00 00         MOV EAX,dword ptr [ESI + 0xb0]
006CF8A5  50                        PUSH EAX
006CF8A6  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006CF8A9  50                        PUSH EAX
006CF8AA  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
006CF8AD  52                        PUSH EDX
006CF8AE  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006CF8B1  25 00 01 00 00            AND EAX,0x100
006CF8B6  F7 D8                     NEG EAX
006CF8B8  1B C0                     SBB EAX,EAX
006CF8BA  23 45 E4                  AND EAX,dword ptr [EBP + -0x1c]
006CF8BD  50                        PUSH EAX
006CF8BE  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
006CF8C4  52                        PUSH EDX
006CF8C5  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006CF8CB  50                        PUSH EAX
006CF8CC  57                        PUSH EDI
006CF8CD  51                        PUSH ECX
006CF8CE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CF8D1  51                        PUSH ECX
006CF8D2  53                        PUSH EBX
006CF8D3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CF8D6  52                        PUSH EDX
006CF8D7  E8 84 91 00 00            CALL 0x006d8a60
006CF8DC  EB 10                     JMP 0x006cf8ee
LAB_006cf8ee:
006CF8EE  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006cf8f5:
006CF8F5  80 7D 34 02               CMP byte ptr [EBP + 0x34],0x2
006CF8F9  75 13                     JNZ 0x006cf90e
006CF8FB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CF8FE  8B 08                     MOV ECX,dword ptr [EAX]
006CF900  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
006CF903  8B 10                     MOV EDX,dword ptr [EAX]
006CF905  6A 00                     PUSH 0x0
006CF907  50                        PUSH EAX
006CF908  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
LAB_006cf90e:
006CF90E  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
FUN_006cef60::cf_common_exit_006CF911:
006CF911  81 FF A0 00 76 88         CMP EDI,0x887600a0
006CF917  74 1D                     JZ 0x006cf936
006CF919  81 FF AE 01 76 88         CMP EDI,0x887601ae
006CF91F  74 15                     JZ 0x006cf936
006CF921  8B C7                     MOV EAX,EDI
006CF923  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CF926  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006CF92D  5F                        POP EDI
006CF92E  5E                        POP ESI
006CF92F  5B                        POP EBX
006CF930  8B E5                     MOV ESP,EBP
006CF932  5D                        POP EBP
006CF933  C2 34 00                  RET 0x34
LAB_006cf936:
006CF936  33 C0                     XOR EAX,EAX
006CF938  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CF93B  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006CF942  5F                        POP EDI
006CF943  5E                        POP ESI
006CF944  5B                        POP EBX
006CF945  8B E5                     MOV ESP,EBP
006CF947  5D                        POP EBP
006CF948  C2 34 00                  RET 0x34
