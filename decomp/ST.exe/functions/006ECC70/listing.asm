FUN_006ecc70:
006ECC70  55                        PUSH EBP
006ECC71  8B EC                     MOV EBP,ESP
006ECC73  83 EC 5C                  SUB ESP,0x5c
006ECC76  53                        PUSH EBX
006ECC77  56                        PUSH ESI
006ECC78  57                        PUSH EDI
006ECC79  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006ECC7C  8B F1                     MOV ESI,ECX
006ECC7E  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006ECC84  C1 E0 04                  SHL EAX,0x4
006ECC87  50                        PUSH EAX
006ECC88  E8 E3 2E FD FF            CALL 0x006bfb70
006ECC8D  8B D8                     MOV EBX,EAX
006ECC8F  85 DB                     TEST EBX,EBX
006ECC91  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006ECC94  75 0E                     JNZ 0x006ecca4
006ECC96  5F                        POP EDI
006ECC97  5E                        POP ESI
006ECC98  B8 FE FF FF FF            MOV EAX,0xfffffffe
006ECC9D  5B                        POP EBX
006ECC9E  8B E5                     MOV ESP,EBP
006ECCA0  5D                        POP EBP
006ECCA1  C2 08 00                  RET 0x8
LAB_006ecca4:
006ECCA4  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006ECCAA  8B 8F E4 00 00 00         MOV ECX,dword ptr [EDI + 0xe4]
006ECCB0  8B 97 F0 00 00 00         MOV EDX,dword ptr [EDI + 0xf0]
006ECCB6  89 9F EC 00 00 00         MOV dword ptr [EDI + 0xec],EBX
006ECCBC  85 C0                     TEST EAX,EAX
006ECCBE  89 87 E8 00 00 00         MOV dword ptr [EDI + 0xe8],EAX
006ECCC4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006ECCC7  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006ECCCA  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
006ECCD1  0F 8E D7 02 00 00         JLE 0x006ecfae
006ECCD7  83 C3 04                  ADD EBX,0x4
006ECCDA  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006ECCDD  EB 06                     JMP 0x006ecce5
LAB_006eccdf:
006ECCDF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006ECCE2  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_006ecce5:
006ECCE5  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006ECCE8  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
006ECCEB  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
006ECCEE  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
006ECCF1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006ECCF4  6A 00                     PUSH 0x0
006ECCF6  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006ECCF9  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006ECCFC  6A 00                     PUSH 0x0
006ECCFE  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006ECD01  6A 00                     PUSH 0x0
006ECD03  6A 00                     PUSH 0x0
006ECD05  6A 00                     PUSH 0x0
006ECD07  6A 00                     PUSH 0x0
006ECD09  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
006ECD0F  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006ECD12  6A 00                     PUSH 0x0
006ECD14  51                        PUSH ECX
006ECD15  8B CE                     MOV ECX,ESI
006ECD17  D8 80 D4 00 00 00         FADD float ptr [EAX + 0xd4]
006ECD1D  D9 5D B4                  FSTP float ptr [EBP + -0x4c]
006ECD20  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
006ECD24  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006ECD27  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006ECD2A  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
006ECD2D  52                        PUSH EDX
006ECD2E  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
006ECD34  D8 80 D8 00 00 00         FADD float ptr [EAX + 0xd8]
006ECD3A  D9 5D B8                  FSTP float ptr [EBP + -0x48]
006ECD3D  0F BF 47 04               MOVSX EAX,word ptr [EDI + 0x4]
006ECD41  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006ECD44  DB 45 E8                  FILD dword ptr [EBP + -0x18]
006ECD47  DC 8E A4 03 00 00         FMUL double ptr [ESI + 0x3a4]
006ECD4D  DC 0D A8 DF 79 00         FMUL double ptr [0x0079dfa8]
006ECD53  DC 86 94 03 00 00         FADD double ptr [ESI + 0x394]
006ECD59  D9 5D BC                  FSTP float ptr [EBP + -0x44]
006ECD5C  E8 6F 58 FF FF            CALL 0x006e25d0
006ECD61  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006ECD64  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006ECD67  8B 96 E4 02 00 00         MOV EDX,dword ptr [ESI + 0x2e4]
006ECD6D  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006ECD70  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006ECD73  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006ECD76  C1 F9 10                  SAR ECX,0x10
006ECD79  66 89 0B                  MOV word ptr [EBX],CX
006ECD7C  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006ECD7F  C1 FA 10                  SAR EDX,0x10
006ECD82  C1 F9 10                  SAR ECX,0x10
006ECD85  2B C2                     SUB EAX,EDX
006ECD87  66 89 4B 02               MOV word ptr [EBX + 0x2],CX
006ECD8B  0F BF 13                  MOVSX EDX,word ptr [EBX]
006ECD8E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006ECD91  66 89 43 04               MOV word ptr [EBX + 0x4],AX
006ECD95  83 C3 08                  ADD EBX,0x8
006ECD98  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006ECD9B  89 11                     MOV dword ptr [ECX],EDX
006ECD9D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006ECDA0  0F BF 53 FA               MOVSX EDX,word ptr [EBX + -0x6]
006ECDA4  89 11                     MOV dword ptr [ECX],EDX
006ECDA6  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006ECDA9  0F BF 53 F8               MOVSX EDX,word ptr [EBX + -0x8]
006ECDAD  0F BF 4B FA               MOVSX ECX,word ptr [EBX + -0x6]
006ECDB1  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006ECDB4  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006ECDB7  B8 01 00 00 00            MOV EAX,0x1
006ECDBC  83 C7 08                  ADD EDI,0x8
006ECDBF  39 43 04                  CMP dword ptr [EBX + 0x4],EAX
006ECDC2  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006ECDC5  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006ECDC8  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006ECDCB  0F 8E 21 01 00 00         JLE 0x006ecef2
LAB_006ecdd1:
006ECDD1  0F BF 57 04               MOVSX EDX,word ptr [EDI + 0x4]
006ECDD5  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006ECDD8  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006ECDDB  2B D3                     SUB EDX,EBX
006ECDDD  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006ECDE0  0F BF 5F 02               MOVSX EBX,word ptr [EDI + 0x2]
006ECDE4  0F AF 96 B4 03 00 00      IMUL EDX,dword ptr [ESI + 0x3b4]
006ECDEB  2B D9                     SUB EBX,ECX
006ECDED  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006ECDF0  0F AF 9E B0 03 00 00      IMUL EBX,dword ptr [ESI + 0x3b0]
006ECDF7  03 D8                     ADD EBX,EAX
006ECDF9  0F BF 07                  MOVSX EAX,word ptr [EDI]
006ECDFC  2B C1                     SUB EAX,ECX
006ECDFE  03 DA                     ADD EBX,EDX
006ECE00  0F AF 86 AC 03 00 00      IMUL EAX,dword ptr [ESI + 0x3ac]
006ECE07  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006ECE0A  03 C3                     ADD EAX,EBX
006ECE0C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006ECE0F  C1 F8 10                  SAR EAX,0x10
006ECE12  66 89 03                  MOV word ptr [EBX],AX
006ECE15  0F BF C0                  MOVSX EAX,AX
006ECE18  39 02                     CMP dword ptr [EDX],EAX
006ECE1A  7E 02                     JLE 0x006ece1e
006ECE1C  89 02                     MOV dword ptr [EDX],EAX
LAB_006ece1e:
006ECE1E  0F BF 03                  MOVSX EAX,word ptr [EBX]
006ECE21  39 45 D8                  CMP dword ptr [EBP + -0x28],EAX
006ECE24  7D 03                     JGE 0x006ece29
006ECE26  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006ece29:
006ECE29  0F BF 17                  MOVSX EDX,word ptr [EDI]
006ECE2C  0F BF 5F 04               MOVSX EBX,word ptr [EDI + 0x4]
006ECE30  2B D1                     SUB EDX,ECX
006ECE32  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006ECE35  2B D9                     SUB EBX,ECX
006ECE37  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006ECE3A  0F AF 9E C0 03 00 00      IMUL EBX,dword ptr [ESI + 0x3c0]
006ECE41  0F AF 96 B8 03 00 00      IMUL EDX,dword ptr [ESI + 0x3b8]
006ECE48  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006ECE4B  03 D8                     ADD EBX,EAX
006ECE4D  0F BF 47 02               MOVSX EAX,word ptr [EDI + 0x2]
006ECE51  2B C1                     SUB EAX,ECX
006ECE53  03 DA                     ADD EBX,EDX
006ECE55  0F AF 86 BC 03 00 00      IMUL EAX,dword ptr [ESI + 0x3bc]
006ECE5C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006ECE5F  03 C3                     ADD EAX,EBX
006ECE61  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006ECE64  C1 F8 10                  SAR EAX,0x10
006ECE67  66 89 43 02               MOV word ptr [EBX + 0x2],AX
006ECE6B  0F BF C0                  MOVSX EAX,AX
006ECE6E  39 02                     CMP dword ptr [EDX],EAX
006ECE70  7E 02                     JLE 0x006ece74
006ECE72  89 02                     MOV dword ptr [EDX],EAX
LAB_006ece74:
006ECE74  0F BF 43 02               MOVSX EAX,word ptr [EBX + 0x2]
006ECE78  39 45 DC                  CMP dword ptr [EBP + -0x24],EAX
006ECE7B  7D 03                     JGE 0x006ece80
006ECE7D  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_006ece80:
006ECE80  66 8B 47 02               MOV AX,word ptr [EDI + 0x2]
006ECE84  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006ECE87  66 2B C1                  SUB AX,CX
006ECE8A  66 8B 0F                  MOV CX,word ptr [EDI]
006ECE8D  66 0F AF 86 C8 03 00 00   IMUL AX,word ptr [ESI + 0x3c8]
006ECE95  66 2B 4D E0               SUB CX,word ptr [EBP + -0x20]
006ECE99  03 C2                     ADD EAX,EDX
006ECE9B  66 8B 57 04               MOV DX,word ptr [EDI + 0x4]
006ECE9F  66 2B 55 E8               SUB DX,word ptr [EBP + -0x18]
006ECEA3  66 0F AF 8E C4 03 00 00   IMUL CX,word ptr [ESI + 0x3c4]
006ECEAB  66 0F AF 96 CC 03 00 00   IMUL DX,word ptr [ESI + 0x3cc]
006ECEB3  03 C1                     ADD EAX,ECX
006ECEB5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006ECEB8  03 C2                     ADD EAX,EDX
006ECEBA  66 89 41 04               MOV word ptr [ECX + 0x4],AX
006ECEBE  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006ECEC1  0F BF C0                  MOVSX EAX,AX
006ECEC4  3B C8                     CMP ECX,EAX
006ECEC6  7D 03                     JGE 0x006ececb
006ECEC8  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006ececb:
006ECECB  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006ECECE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006ECED1  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006ECED4  83 C7 08                  ADD EDI,0x8
006ECED7  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
006ECEDA  83 C3 08                  ADD EBX,0x8
006ECEDD  40                        INC EAX
006ECEDE  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006ECEE1  3B C1                     CMP EAX,ECX
006ECEE3  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006ECEE6  0F 8C E5 FE FF FF         JL 0x006ecdd1
006ECEEC  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006ECEEF  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
LAB_006ecef2:
006ECEF2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006ECEF5  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006ECEF8  2B 10                     SUB EDX,dword ptr [EAX]
006ECEFA  42                        INC EDX
006ECEFB  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
006ECEFE  8B 17                     MOV EDX,dword ptr [EDI]
006ECF00  2B CA                     SUB ECX,EDX
006ECF02  8B D0                     MOV EDX,EAX
006ECF04  41                        INC ECX
006ECF05  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
006ECF08  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006ECF0B  51                        PUSH ECX
006ECF0C  8B C8                     MOV ECX,EAX
006ECF0E  E8 4D 35 FC FF            CALL 0x006b0460
006ECF13  85 C0                     TEST EAX,EAX
006ECF15  75 17                     JNZ 0x006ecf2e
006ECF17  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006ECF1A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006ECF1D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006ECF20  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
006ECF26  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
006ECF2C  EB 45                     JMP 0x006ecf73
LAB_006ecf2e:
006ECF2E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006ECF31  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006ECF34  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006ECF37  8B 11                     MOV EDX,dword ptr [ECX]
006ECF39  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006ECF3C  83 E2 01                  AND EDX,0x1
006ECF3F  89 10                     MOV dword ptr [EAX],EDX
006ECF41  8B 17                     MOV EDX,dword ptr [EDI]
006ECF43  83 CA 20                  OR EDX,0x20
006ECF46  89 17                     MOV dword ptr [EDI],EDX
006ECF48  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006ECF4B  8B 06                     MOV EAX,dword ptr [ESI]
006ECF4D  85 C0                     TEST EAX,EAX
006ECF4F  74 22                     JZ 0x006ecf73
006ECF51  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006ECF54  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006ECF57  8B 19                     MOV EBX,dword ptr [ECX]
006ECF59  52                        PUSH EDX
006ECF5A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006ECF5D  52                        PUSH EDX
006ECF5E  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
006ECF61  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006ECF64  03 D3                     ADD EDX,EBX
006ECF66  52                        PUSH EDX
006ECF67  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006ECF6A  03 0A                     ADD ECX,dword ptr [EDX]
006ECF6C  51                        PUSH ECX
006ECF6D  50                        PUSH EAX
006ECF6E  E8 0D 90 FC FF            CALL 0x006b5f80
LAB_006ecf73:
006ECF73  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006ECF76  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006ECF79  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006ECF7C  B8 10 00 00 00            MOV EAX,0x10
006ECF81  03 D8                     ADD EBX,EAX
006ECF83  03 D0                     ADD EDX,EAX
006ECF85  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006ECF88  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006ECF8B  83 C1 0C                  ADD ECX,0xc
006ECF8E  03 D8                     ADD EBX,EAX
006ECF90  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006ECF93  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006ECF96  8B 8F E0 00 00 00         MOV ECX,dword ptr [EDI + 0xe0]
006ECF9C  40                        INC EAX
006ECF9D  3B C1                     CMP EAX,ECX
006ECF9F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006ECFA2  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006ECFA5  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006ECFA8  0F 8C 31 FD FF FF         JL 0x006eccdf
LAB_006ecfae:
006ECFAE  5F                        POP EDI
006ECFAF  5E                        POP ESI
006ECFB0  33 C0                     XOR EAX,EAX
006ECFB2  5B                        POP EBX
006ECFB3  8B E5                     MOV ESP,EBP
006ECFB5  5D                        POP EBP
006ECFB6  C2 08 00                  RET 0x8
