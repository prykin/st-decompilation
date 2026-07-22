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
