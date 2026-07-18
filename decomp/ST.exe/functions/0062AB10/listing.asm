FUN_0062ab10:
0062AB10  55                        PUSH EBP
0062AB11  8B EC                     MOV EBP,ESP
0062AB13  51                        PUSH ECX
0062AB14  53                        PUSH EBX
0062AB15  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0062AB18  56                        PUSH ESI
0062AB19  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0062AB1C  57                        PUSH EDI
0062AB1D  8B F9                     MOV EDI,ECX
0062AB1F  8B CB                     MOV ECX,EBX
0062AB21  8B D6                     MOV EDX,ESI
0062AB23  0F AF CB                  IMUL ECX,EBX
0062AB26  0F AF D6                  IMUL EDX,ESI
0062AB29  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0062AB2C  03 CA                     ADD ECX,EDX
0062AB2E  8B D0                     MOV EDX,EAX
0062AB30  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0062AB37  0F AF D0                  IMUL EDX,EAX
0062AB3A  03 CA                     ADD ECX,EDX
0062AB3C  51                        PUSH ECX
0062AB3D  E8 F2 D7 09 00            CALL 0x006c8334
0062AB42  83 C4 04                  ADD ESP,0x4
0062AB45  85 C0                     TEST EAX,EAX
0062AB47  0F 84 B7 02 00 00         JZ 0x0062ae04
0062AB4D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062AB50  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062AB53  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062AB56  0F AF C3                  IMUL EAX,EBX
0062AB59  0F AF 55 1C               IMUL EDX,dword ptr [EBP + 0x1c]
0062AB5D  0F AF CE                  IMUL ECX,ESI
0062AB60  03 C1                     ADD EAX,ECX
0062AB62  8D 1C 9B                  LEA EBX,[EBX + EBX*0x4]
0062AB65  03 C2                     ADD EAX,EDX
0062AB67  D1 E0                     SHL EAX,0x1
0062AB69  99                        CDQ
0062AB6A  83 E2 7F                  AND EDX,0x7f
0062AB6D  03 C2                     ADD EAX,EDX
0062AB6F  8B F0                     MOV ESI,EAX
0062AB71  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0062AB76  C1 FE 07                  SAR ESI,0x7
0062AB79  8B CE                     MOV ECX,ESI
0062AB7B  0F AF 4D 08               IMUL ECX,dword ptr [EBP + 0x8]
0062AB7F  F7 E9                     IMUL ECX
0062AB81  C1 FA 0C                  SAR EDX,0xc
0062AB84  8B C2                     MOV EAX,EDX
0062AB86  C1 E8 1F                  SHR EAX,0x1f
0062AB89  03 D0                     ADD EDX,EAX
0062AB8B  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0062AB8E  C1 E2 07                  SHL EDX,0x7
0062AB91  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AB94  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0062AB97  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062AB9C  C1 E1 04                  SHL ECX,0x4
0062AB9F  2B CA                     SUB ECX,EDX
0062ABA1  F7 E9                     IMUL ECX
0062ABA3  C1 FA 05                  SAR EDX,0x5
0062ABA6  8B CA                     MOV ECX,EDX
0062ABA8  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0062ABAD  C1 E9 1F                  SHR ECX,0x1f
0062ABB0  03 D1                     ADD EDX,ECX
0062ABB2  8B CA                     MOV ECX,EDX
0062ABB4  8B D6                     MOV EDX,ESI
0062ABB6  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
0062ABBA  F7 EA                     IMUL EDX
0062ABBC  C1 FA 0C                  SAR EDX,0xc
0062ABBF  8B C2                     MOV EAX,EDX
0062ABC1  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0062ABC4  C1 E8 1F                  SHR EAX,0x1f
0062ABC7  03 D0                     ADD EDX,EAX
0062ABC9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062ABCC  C1 E2 07                  SHL EDX,0x7
0062ABCF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062ABD2  8B DA                     MOV EBX,EDX
0062ABD4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062ABD7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062ABDA  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0062ABDD  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062ABE2  C1 E2 04                  SHL EDX,0x4
0062ABE5  2B D3                     SUB EDX,EBX
0062ABE7  F7 EA                     IMUL EDX
0062ABE9  C1 FA 05                  SAR EDX,0x5
0062ABEC  8B C2                     MOV EAX,EDX
0062ABEE  C1 E8 1F                  SHR EAX,0x1f
0062ABF1  03 D0                     ADD EDX,EAX
0062ABF3  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0062ABF8  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0062ABFB  8B D6                     MOV EDX,ESI
0062ABFD  0F AF 55 10               IMUL EDX,dword ptr [EBP + 0x10]
0062AC01  F7 EA                     IMUL EDX
0062AC03  C1 FA 0C                  SAR EDX,0xc
0062AC06  8B C2                     MOV EAX,EDX
0062AC08  C1 E8 1F                  SHR EAX,0x1f
0062AC0B  03 D0                     ADD EDX,EAX
0062AC0D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0062AC10  C1 E2 07                  SHL EDX,0x7
0062AC13  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AC16  8B DA                     MOV EBX,EDX
0062AC18  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AC1B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AC1E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0062AC21  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062AC26  C1 E2 04                  SHL EDX,0x4
0062AC29  2B D3                     SUB EDX,EBX
0062AC2B  F7 EA                     IMUL EDX
0062AC2D  C1 FA 05                  SAR EDX,0x5
0062AC30  8B C2                     MOV EAX,EDX
0062AC32  0F AF C9                  IMUL ECX,ECX
0062AC35  C1 E8 1F                  SHR EAX,0x1f
0062AC38  03 D0                     ADD EDX,EAX
0062AC3A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062AC3D  8B DA                     MOV EBX,EDX
0062AC3F  0F AF C0                  IMUL EAX,EAX
0062AC42  0F AF D3                  IMUL EDX,EBX
0062AC45  03 D1                     ADD EDX,ECX
0062AC47  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0062AC4A  03 D0                     ADD EDX,EAX
0062AC4C  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0062AC4F  52                        PUSH EDX
0062AC50  E8 DF D6 09 00            CALL 0x006c8334
0062AC55  8B C8                     MOV ECX,EAX
0062AC57  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062AC5C  F7 E9                     IMUL ECX
0062AC5E  C1 FA 05                  SAR EDX,0x5
0062AC61  8B C2                     MOV EAX,EDX
0062AC63  83 C4 04                  ADD ESP,0x4
0062AC66  C1 E8 1F                  SHR EAX,0x1f
0062AC69  03 D0                     ADD EDX,EAX
0062AC6B  0F 84 9A 01 00 00         JZ 0x0062ae0b
0062AC71  85 F6                     TEST ESI,ESI
0062AC73  7E 0E                     JLE 0x0062ac83
0062AC75  5F                        POP EDI
0062AC76  5E                        POP ESI
0062AC77  B8 02 00 00 00            MOV EAX,0x2
0062AC7C  5B                        POP EBX
0062AC7D  8B E5                     MOV ESP,EBP
0062AC7F  5D                        POP EBP
0062AC80  C2 18 00                  RET 0x18
LAB_0062ac83:
0062AC83  8B 4F 46                  MOV ECX,dword ptr [EDI + 0x46]
0062AC86  8B 47 4E                  MOV EAX,dword ptr [EDI + 0x4e]
0062AC89  89 97 9A 00 00 00         MOV dword ptr [EDI + 0x9a],EDX
0062AC8F  8B 57 4A                  MOV EDX,dword ptr [EDI + 0x4a]
0062AC92  89 4F 7A                  MOV dword ptr [EDI + 0x7a],ECX
0062AC95  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0062AC98  89 57 7E                  MOV dword ptr [EDI + 0x7e],EDX
0062AC9B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062AC9E  03 CA                     ADD ECX,EDX
0062ACA0  89 87 82 00 00 00         MOV dword ptr [EDI + 0x82],EAX
0062ACA6  51                        PUSH ECX
0062ACA7  C7 87 86 00 00 00 00 00 00 00  MOV dword ptr [EDI + 0x86],0x0
0062ACB1  E8 7E D6 09 00            CALL 0x006c8334
0062ACB6  8B C8                     MOV ECX,EAX
0062ACB8  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062ACBD  F7 E9                     IMUL ECX
0062ACBF  C1 FA 05                  SAR EDX,0x5
0062ACC2  8B C2                     MOV EAX,EDX
0062ACC4  83 C4 04                  ADD ESP,0x4
0062ACC7  C1 E8 1F                  SHR EAX,0x1f
0062ACCA  03 D0                     ADD EDX,EAX
0062ACCC  8B CA                     MOV ECX,EDX
0062ACCE  0F 84 C0 00 00 00         JZ 0x0062ad94
0062ACD4  8B B7 9A 00 00 00         MOV ESI,dword ptr [EDI + 0x9a]
0062ACDA  85 DB                     TEST EBX,EBX
0062ACDC  7E 05                     JLE 0x0062ace3
0062ACDE  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0062ACE1  EB 09                     JMP 0x0062acec
LAB_0062ace3:
0062ACE3  8B C3                     MOV EAX,EBX
0062ACE5  F7 D8                     NEG EAX
0062ACE7  C1 E0 02                  SHL EAX,0x2
0062ACEA  2B C3                     SUB EAX,EBX
LAB_0062acec:
0062ACEC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062ACEF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062ACF2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062ACF5  C1 E0 04                  SHL EAX,0x4
0062ACF8  99                        CDQ
0062ACF9  F7 FE                     IDIV ESI
0062ACFB  85 DB                     TEST EBX,EBX
0062ACFD  89 87 8E 00 00 00         MOV dword ptr [EDI + 0x8e],EAX
0062AD03  7E 05                     JLE 0x0062ad0a
0062AD05  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0062AD08  EB 09                     JMP 0x0062ad13
LAB_0062ad0a:
0062AD0A  8B C1                     MOV EAX,ECX
0062AD0C  F7 D8                     NEG EAX
0062AD0E  C1 E0 02                  SHL EAX,0x2
0062AD11  2B C1                     SUB EAX,ECX
LAB_0062ad13:
0062AD13  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD16  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0062AD1D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD20  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD23  C1 E0 04                  SHL EAX,0x4
0062AD26  99                        CDQ
0062AD27  F7 FE                     IDIV ESI
0062AD29  89 87 8A 00 00 00         MOV dword ptr [EDI + 0x8a],EAX
0062AD2F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062AD32  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD35  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD38  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD3B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD3E  C1 E0 04                  SHL EAX,0x4
0062AD41  99                        CDQ
0062AD42  F7 F9                     IDIV ECX
0062AD44  89 87 92 00 00 00         MOV dword ptr [EDI + 0x92],EAX
0062AD4A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0062AD4D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD50  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD53  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD56  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062AD59  C1 E0 04                  SHL EAX,0x4
0062AD5C  99                        CDQ
0062AD5D  F7 F9                     IDIV ECX
0062AD5F  89 87 96 00 00 00         MOV dword ptr [EDI + 0x96],EAX
0062AD65  8B C6                     MOV EAX,ESI
0062AD67  99                        CDQ
0062AD68  83 E2 7F                  AND EDX,0x7f
0062AD6B  03 C2                     ADD EAX,EDX
0062AD6D  C1 F8 07                  SAR EAX,0x7
0062AD70  89 87 9A 00 00 00         MOV dword ptr [EDI + 0x9a],EAX
0062AD76  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062AD7C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062AD7F  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0062AD85  89 97 AE 00 00 00         MOV dword ptr [EDI + 0xae],EDX
0062AD8B  5F                        POP EDI
0062AD8C  5E                        POP ESI
0062AD8D  5B                        POP EBX
0062AD8E  8B E5                     MOV ESP,EBP
0062AD90  5D                        POP EBP
0062AD91  C2 18 00                  RET 0x18
LAB_0062ad94:
0062AD94  8B 8F 9A 00 00 00         MOV ECX,dword ptr [EDI + 0x9a]
0062AD9A  85 DB                     TEST EBX,EBX
0062AD9C  7E 08                     JLE 0x0062ada6
0062AD9E  8D 1C 9B                  LEA EBX,[EBX + EBX*0x4]
0062ADA1  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0062ADA4  EB 0C                     JMP 0x0062adb2
LAB_0062ada6:
0062ADA6  8B C3                     MOV EAX,EBX
0062ADA8  F7 D8                     NEG EAX
0062ADAA  C1 E0 02                  SHL EAX,0x2
0062ADAD  2B C3                     SUB EAX,EBX
0062ADAF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
LAB_0062adb2:
0062ADB2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062ADB5  C7 87 8A 00 00 00 00 00 00 00  MOV dword ptr [EDI + 0x8a],0x0
0062ADBF  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0062ADC6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062ADC9  C1 E0 04                  SHL EAX,0x4
0062ADCC  99                        CDQ
0062ADCD  F7 F9                     IDIV ECX
0062ADCF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062ADD2  89 97 96 00 00 00         MOV dword ptr [EDI + 0x96],EDX
0062ADD8  89 87 8E 00 00 00         MOV dword ptr [EDI + 0x8e],EAX
0062ADDE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062ADE1  89 87 92 00 00 00         MOV dword ptr [EDI + 0x92],EAX
0062ADE7  8B C1                     MOV EAX,ECX
0062ADE9  99                        CDQ
0062ADEA  83 E2 7F                  AND EDX,0x7f
0062ADED  03 C2                     ADD EAX,EDX
0062ADEF  C1 F8 07                  SAR EAX,0x7
0062ADF2  89 87 9A 00 00 00         MOV dword ptr [EDI + 0x9a],EAX
0062ADF8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062ADFB  5F                        POP EDI
0062ADFC  5E                        POP ESI
0062ADFD  5B                        POP EBX
0062ADFE  8B E5                     MOV ESP,EBP
0062AE00  5D                        POP EBP
0062AE01  C2 18 00                  RET 0x18
LAB_0062ae04:
0062AE04  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_0062ae0b:
0062AE0B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062AE0E  5F                        POP EDI
0062AE0F  5E                        POP ESI
0062AE10  5B                        POP EBX
0062AE11  8B E5                     MOV ESP,EBP
0062AE13  5D                        POP EBP
0062AE14  C2 18 00                  RET 0x18
