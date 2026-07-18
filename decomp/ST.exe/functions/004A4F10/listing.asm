FUN_004a4f10:
004A4F10  55                        PUSH EBP
004A4F11  8B EC                     MOV EBP,ESP
004A4F13  83 EC 58                  SUB ESP,0x58
004A4F16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004A4F1B  53                        PUSH EBX
004A4F1C  56                        PUSH ESI
004A4F1D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004A4F20  57                        PUSH EDI
004A4F21  8D 55 AC                  LEA EDX,[EBP + -0x54]
004A4F24  8D 4D A8                  LEA ECX,[EBP + -0x58]
004A4F27  6A 00                     PUSH 0x0
004A4F29  52                        PUSH EDX
004A4F2A  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004A4F2D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A4F33  E8 B8 88 28 00            CALL 0x0072d7f0
004A4F38  8B F0                     MOV ESI,EAX
004A4F3A  83 C4 08                  ADD ESP,0x8
004A4F3D  85 F6                     TEST ESI,ESI
004A4F3F  0F 85 19 13 00 00         JNZ 0x004a625e
004A4F45  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004A4F48  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004A4F4B  C7 06 21 03 00 00         MOV dword ptr [ESI],0x321
004A4F51  8B 47 59                  MOV EAX,dword ptr [EDI + 0x59]
004A4F54  85 C0                     TEST EAX,EAX
004A4F56  74 12                     JZ 0x004a4f6a
004A4F58  8B 00                     MOV EAX,dword ptr [EAX]
004A4F5A  C1 E0 04                  SHL EAX,0x4
004A4F5D  83 C0 0C                  ADD EAX,0xc
004A4F60  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A4F63  05 21 03 00 00            ADD EAX,0x321
004A4F68  89 06                     MOV dword ptr [ESI],EAX
LAB_004a4f6a:
004A4F6A  8B 87 EF 00 00 00         MOV EAX,dword ptr [EDI + 0xef]
004A4F70  85 C0                     TEST EAX,EAX
004A4F72  74 1F                     JZ 0x004a4f93
004A4F74  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A4F77  51                        PUSH ECX
004A4F78  50                        PUSH EAX
004A4F79  E8 A2 B0 20 00            CALL 0x006b0020
004A4F7E  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A4F81  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A4F84  52                        PUSH EDX
004A4F85  E8 D6 60 20 00            CALL 0x006ab060
004A4F8A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A4F8D  8B 0E                     MOV ECX,dword ptr [ESI]
004A4F8F  03 C8                     ADD ECX,EAX
004A4F91  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a4f93:
004A4F93  8B 87 03 01 00 00         MOV EAX,dword ptr [EDI + 0x103]
004A4F99  85 C0                     TEST EAX,EAX
004A4F9B  74 1F                     JZ 0x004a4fbc
004A4F9D  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A4FA0  51                        PUSH ECX
004A4FA1  50                        PUSH EAX
004A4FA2  E8 79 B0 20 00            CALL 0x006b0020
004A4FA7  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A4FAA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A4FAD  52                        PUSH EDX
004A4FAE  E8 AD 60 20 00            CALL 0x006ab060
004A4FB3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A4FB6  8B 0E                     MOV ECX,dword ptr [ESI]
004A4FB8  03 C8                     ADD ECX,EAX
004A4FBA  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a4fbc:
004A4FBC  8B 87 0F 01 00 00         MOV EAX,dword ptr [EDI + 0x10f]
004A4FC2  85 C0                     TEST EAX,EAX
004A4FC4  74 1F                     JZ 0x004a4fe5
004A4FC6  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A4FC9  51                        PUSH ECX
004A4FCA  50                        PUSH EAX
004A4FCB  E8 50 B0 20 00            CALL 0x006b0020
004A4FD0  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A4FD3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A4FD6  52                        PUSH EDX
004A4FD7  E8 84 60 20 00            CALL 0x006ab060
004A4FDC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A4FDF  8B 0E                     MOV ECX,dword ptr [ESI]
004A4FE1  03 C8                     ADD ECX,EAX
004A4FE3  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a4fe5:
004A4FE5  8B 87 27 01 00 00         MOV EAX,dword ptr [EDI + 0x127]
004A4FEB  85 C0                     TEST EAX,EAX
004A4FED  74 1F                     JZ 0x004a500e
004A4FEF  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A4FF2  51                        PUSH ECX
004A4FF3  50                        PUSH EAX
004A4FF4  E8 27 B0 20 00            CALL 0x006b0020
004A4FF9  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A4FFC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A4FFF  52                        PUSH EDX
004A5000  E8 5B 60 20 00            CALL 0x006ab060
004A5005  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A5008  8B 0E                     MOV ECX,dword ptr [ESI]
004A500A  03 C8                     ADD ECX,EAX
004A500C  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a500e:
004A500E  8B 87 60 01 00 00         MOV EAX,dword ptr [EDI + 0x160]
004A5014  85 C0                     TEST EAX,EAX
004A5016  74 1F                     JZ 0x004a5037
004A5018  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A501B  51                        PUSH ECX
004A501C  50                        PUSH EAX
004A501D  E8 FE AF 20 00            CALL 0x006b0020
004A5022  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A5025  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5028  52                        PUSH EDX
004A5029  E8 32 60 20 00            CALL 0x006ab060
004A502E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A5031  8B 0E                     MOV ECX,dword ptr [ESI]
004A5033  03 C8                     ADD ECX,EAX
004A5035  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a5037:
004A5037  8B 87 68 01 00 00         MOV EAX,dword ptr [EDI + 0x168]
004A503D  85 C0                     TEST EAX,EAX
004A503F  74 1F                     JZ 0x004a5060
004A5041  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A5044  51                        PUSH ECX
004A5045  50                        PUSH EAX
004A5046  E8 D5 AF 20 00            CALL 0x006b0020
004A504B  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A504E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5051  52                        PUSH EDX
004A5052  E8 09 60 20 00            CALL 0x006ab060
004A5057  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A505A  8B 0E                     MOV ECX,dword ptr [ESI]
004A505C  03 C8                     ADD ECX,EAX
004A505E  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a5060:
004A5060  8B 87 CA 01 00 00         MOV EAX,dword ptr [EDI + 0x1ca]
004A5066  85 C0                     TEST EAX,EAX
004A5068  74 1F                     JZ 0x004a5089
004A506A  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A506D  51                        PUSH ECX
004A506E  50                        PUSH EAX
004A506F  E8 AC AF 20 00            CALL 0x006b0020
004A5074  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A5077  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A507A  52                        PUSH EDX
004A507B  E8 E0 5F 20 00            CALL 0x006ab060
004A5080  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A5083  8B 0E                     MOV ECX,dword ptr [ESI]
004A5085  03 C8                     ADD ECX,EAX
004A5087  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a5089:
004A5089  8B 87 CE 01 00 00         MOV EAX,dword ptr [EDI + 0x1ce]
004A508F  85 C0                     TEST EAX,EAX
004A5091  74 1F                     JZ 0x004a50b2
004A5093  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A5096  51                        PUSH ECX
004A5097  50                        PUSH EAX
004A5098  E8 83 AF 20 00            CALL 0x006b0020
004A509D  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A50A0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A50A3  52                        PUSH EDX
004A50A4  E8 B7 5F 20 00            CALL 0x006ab060
004A50A9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A50AC  8B 0E                     MOV ECX,dword ptr [ESI]
004A50AE  03 C8                     ADD ECX,EAX
004A50B0  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a50b2:
004A50B2  8B 87 D2 01 00 00         MOV EAX,dword ptr [EDI + 0x1d2]
004A50B8  85 C0                     TEST EAX,EAX
004A50BA  74 1F                     JZ 0x004a50db
004A50BC  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A50BF  51                        PUSH ECX
004A50C0  50                        PUSH EAX
004A50C1  E8 5A AF 20 00            CALL 0x006b0020
004A50C6  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A50C9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A50CC  52                        PUSH EDX
004A50CD  E8 8E 5F 20 00            CALL 0x006ab060
004A50D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A50D5  8B 0E                     MOV ECX,dword ptr [ESI]
004A50D7  03 C8                     ADD ECX,EAX
004A50D9  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a50db:
004A50DB  8B 87 D6 01 00 00         MOV EAX,dword ptr [EDI + 0x1d6]
004A50E1  85 C0                     TEST EAX,EAX
004A50E3  74 1F                     JZ 0x004a5104
004A50E5  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A50E8  51                        PUSH ECX
004A50E9  50                        PUSH EAX
004A50EA  E8 31 AF 20 00            CALL 0x006b0020
004A50EF  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A50F2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A50F5  52                        PUSH EDX
004A50F6  E8 65 5F 20 00            CALL 0x006ab060
004A50FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A50FE  8B 0E                     MOV ECX,dword ptr [ESI]
004A5100  03 C8                     ADD ECX,EAX
004A5102  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a5104:
004A5104  8B 87 DA 01 00 00         MOV EAX,dword ptr [EDI + 0x1da]
004A510A  85 C0                     TEST EAX,EAX
004A510C  74 1F                     JZ 0x004a512d
004A510E  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A5111  51                        PUSH ECX
004A5112  50                        PUSH EAX
004A5113  E8 08 AF 20 00            CALL 0x006b0020
004A5118  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A511B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A511E  52                        PUSH EDX
004A511F  E8 3C 5F 20 00            CALL 0x006ab060
004A5124  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A5127  8B 0E                     MOV ECX,dword ptr [ESI]
004A5129  03 C8                     ADD ECX,EAX
004A512B  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a512d:
004A512D  8B 87 DE 01 00 00         MOV EAX,dword ptr [EDI + 0x1de]
004A5133  85 C0                     TEST EAX,EAX
004A5135  74 1F                     JZ 0x004a5156
004A5137  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A513A  51                        PUSH ECX
004A513B  50                        PUSH EAX
004A513C  E8 DF AE 20 00            CALL 0x006b0020
004A5141  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A5144  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5147  52                        PUSH EDX
004A5148  E8 13 5F 20 00            CALL 0x006ab060
004A514D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A5150  8B 0E                     MOV ECX,dword ptr [ESI]
004A5152  03 C8                     ADD ECX,EAX
004A5154  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a5156:
004A5156  8B 87 0E 02 00 00         MOV EAX,dword ptr [EDI + 0x20e]
004A515C  85 C0                     TEST EAX,EAX
004A515E  74 1F                     JZ 0x004a517f
004A5160  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A5163  51                        PUSH ECX
004A5164  50                        PUSH EAX
004A5165  E8 B6 AE 20 00            CALL 0x006b0020
004A516A  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A516D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5170  52                        PUSH EDX
004A5171  E8 EA 5E 20 00            CALL 0x006ab060
004A5176  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A5179  8B 0E                     MOV ECX,dword ptr [ESI]
004A517B  03 C8                     ADD ECX,EAX
004A517D  89 0E                     MOV dword ptr [ESI],ECX
LAB_004a517f:
004A517F  8B 8F 1A 02 00 00         MOV ECX,dword ptr [EDI + 0x21a]
004A5185  8B 16                     MOV EDX,dword ptr [ESI]
004A5187  C1 E1 03                  SHL ECX,0x3
004A518A  03 D1                     ADD EDX,ECX
004A518C  89 16                     MOV dword ptr [ESI],EDX
004A518E  8B 87 26 02 00 00         MOV EAX,dword ptr [EDI + 0x226]
004A5194  85 C0                     TEST EAX,EAX
004A5196  74 1F                     JZ 0x004a51b7
004A5198  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A519B  52                        PUSH EDX
004A519C  50                        PUSH EAX
004A519D  E8 7E AE 20 00            CALL 0x006b0020
004A51A2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A51A5  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A51A8  50                        PUSH EAX
004A51A9  E8 B2 5E 20 00            CALL 0x006ab060
004A51AE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A51B1  8B 06                     MOV EAX,dword ptr [ESI]
004A51B3  03 C1                     ADD EAX,ECX
004A51B5  89 06                     MOV dword ptr [ESI],EAX
LAB_004a51b7:
004A51B7  8B 87 2A 02 00 00         MOV EAX,dword ptr [EDI + 0x22a]
004A51BD  85 C0                     TEST EAX,EAX
004A51BF  74 1F                     JZ 0x004a51e0
004A51C1  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A51C4  52                        PUSH EDX
004A51C5  50                        PUSH EAX
004A51C6  E8 55 AE 20 00            CALL 0x006b0020
004A51CB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A51CE  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A51D1  50                        PUSH EAX
004A51D2  E8 89 5E 20 00            CALL 0x006ab060
004A51D7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A51DA  8B 06                     MOV EAX,dword ptr [ESI]
004A51DC  03 C1                     ADD EAX,ECX
004A51DE  89 06                     MOV dword ptr [ESI],EAX
LAB_004a51e0:
004A51E0  8B 87 2E 02 00 00         MOV EAX,dword ptr [EDI + 0x22e]
004A51E6  85 C0                     TEST EAX,EAX
004A51E8  74 1F                     JZ 0x004a5209
004A51EA  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A51ED  52                        PUSH EDX
004A51EE  50                        PUSH EAX
004A51EF  E8 2C AE 20 00            CALL 0x006b0020
004A51F4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A51F7  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A51FA  50                        PUSH EAX
004A51FB  E8 60 5E 20 00            CALL 0x006ab060
004A5200  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5203  8B 06                     MOV EAX,dword ptr [ESI]
004A5205  03 C1                     ADD EAX,ECX
004A5207  89 06                     MOV dword ptr [ESI],EAX
LAB_004a5209:
004A5209  8B 87 4E 02 00 00         MOV EAX,dword ptr [EDI + 0x24e]
004A520F  85 C0                     TEST EAX,EAX
004A5211  74 1F                     JZ 0x004a5232
004A5213  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A5216  52                        PUSH EDX
004A5217  50                        PUSH EAX
004A5218  E8 03 AE 20 00            CALL 0x006b0020
004A521D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5220  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5223  50                        PUSH EAX
004A5224  E8 37 5E 20 00            CALL 0x006ab060
004A5229  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A522C  8B 06                     MOV EAX,dword ptr [ESI]
004A522E  03 C1                     ADD EAX,ECX
004A5230  89 06                     MOV dword ptr [ESI],EAX
LAB_004a5232:
004A5232  8B 87 66 02 00 00         MOV EAX,dword ptr [EDI + 0x266]
004A5238  85 C0                     TEST EAX,EAX
004A523A  74 1F                     JZ 0x004a525b
004A523C  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A523F  52                        PUSH EDX
004A5240  50                        PUSH EAX
004A5241  E8 DA AD 20 00            CALL 0x006b0020
004A5246  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5249  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A524C  50                        PUSH EAX
004A524D  E8 0E 5E 20 00            CALL 0x006ab060
004A5252  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5255  8B 06                     MOV EAX,dword ptr [ESI]
004A5257  03 C1                     ADD EAX,ECX
004A5259  89 06                     MOV dword ptr [ESI],EAX
LAB_004a525b:
004A525B  8B BF 9F 02 00 00         MOV EDI,dword ptr [EDI + 0x29f]
004A5261  85 FF                     TEST EDI,EDI
004A5263  74 1F                     JZ 0x004a5284
004A5265  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A5268  52                        PUSH EDX
004A5269  57                        PUSH EDI
004A526A  E8 B1 AD 20 00            CALL 0x006b0020
004A526F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5272  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5275  50                        PUSH EAX
004A5276  E8 E5 5D 20 00            CALL 0x006ab060
004A527B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A527E  8B 06                     MOV EAX,dword ptr [ESI]
004A5280  03 C1                     ADD EAX,ECX
004A5282  89 06                     MOV dword ptr [ESI],EAX
LAB_004a5284:
004A5284  8B 16                     MOV EDX,dword ptr [ESI]
004A5286  52                        PUSH EDX
004A5287  E8 E4 59 20 00            CALL 0x006aac70
004A528C  8B D8                     MOV EBX,EAX
004A528E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A5291  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004A5294  8B 48 3D                  MOV ECX,dword ptr [EAX + 0x3d]
004A5297  8D 70 69                  LEA ESI,[EAX + 0x69]
004A529A  89 0B                     MOV dword ptr [EBX],ECX
004A529C  8B 50 41                  MOV EDX,dword ptr [EAX + 0x41]
004A529F  89 53 04                  MOV dword ptr [EBX + 0x4],EDX
004A52A2  8B 48 45                  MOV ECX,dword ptr [EAX + 0x45]
004A52A5  89 4B 08                  MOV dword ptr [EBX + 0x8],ECX
004A52A8  8B 50 49                  MOV EDX,dword ptr [EAX + 0x49]
004A52AB  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
004A52AE  8B 48 4D                  MOV ECX,dword ptr [EAX + 0x4d]
004A52B1  89 4B 10                  MOV dword ptr [EBX + 0x10],ECX
004A52B4  8B 50 51                  MOV EDX,dword ptr [EAX + 0x51]
004A52B7  89 53 14                  MOV dword ptr [EBX + 0x14],EDX
004A52BA  8B 48 55                  MOV ECX,dword ptr [EAX + 0x55]
004A52BD  89 4B 18                  MOV dword ptr [EBX + 0x18],ECX
004A52C0  8B 50 5D                  MOV EDX,dword ptr [EAX + 0x5d]
004A52C3  89 53 24                  MOV dword ptr [EBX + 0x24],EDX
004A52C6  8B 48 61                  MOV ECX,dword ptr [EAX + 0x61]
004A52C9  89 4B 28                  MOV dword ptr [EBX + 0x28],ECX
004A52CC  8B 50 65                  MOV EDX,dword ptr [EAX + 0x65]
004A52CF  B9 08 00 00 00            MOV ECX,0x8
004A52D4  8D 7B 30                  LEA EDI,[EBX + 0x30]
004A52D7  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
004A52DA  8D 93 A4 00 00 00         LEA EDX,[EBX + 0xa4]
004A52E0  F3 A5                     MOVSD.REP ES:EDI,ESI
004A52E2  B9 15 00 00 00            MOV ECX,0x15
004A52E7  8D B0 89 00 00 00         LEA ESI,[EAX + 0x89]
004A52ED  8D 7B 50                  LEA EDI,[EBX + 0x50]
004A52F0  F3 A5                     MOVSD.REP ES:EDI,ESI
004A52F2  8D 88 DD 00 00 00         LEA ECX,[EAX + 0xdd]
004A52F8  8B B0 DD 00 00 00         MOV ESI,dword ptr [EAX + 0xdd]
004A52FE  89 32                     MOV dword ptr [EDX],ESI
004A5300  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004A5303  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004A5306  66 8B 49 08               MOV CX,word ptr [ECX + 0x8]
004A530A  66 89 4A 08               MOV word ptr [EDX + 0x8],CX
004A530E  8B 90 E7 00 00 00         MOV EDX,dword ptr [EAX + 0xe7]
004A5314  89 93 AE 00 00 00         MOV dword ptr [EBX + 0xae],EDX
004A531A  66 8B 88 F3 00 00 00      MOV CX,word ptr [EAX + 0xf3]
004A5321  66 89 8B BA 00 00 00      MOV word ptr [EBX + 0xba],CX
004A5328  66 8B 90 F5 00 00 00      MOV DX,word ptr [EAX + 0xf5]
004A532F  66 89 93 BC 00 00 00      MOV word ptr [EBX + 0xbc],DX
004A5336  66 8B 88 F7 00 00 00      MOV CX,word ptr [EAX + 0xf7]
004A533D  66 89 8B BE 00 00 00      MOV word ptr [EBX + 0xbe],CX
004A5344  66 8B 90 F9 00 00 00      MOV DX,word ptr [EAX + 0xf9]
004A534B  66 89 93 C0 00 00 00      MOV word ptr [EBX + 0xc0],DX
004A5352  66 8B 88 FB 00 00 00      MOV CX,word ptr [EAX + 0xfb]
004A5359  66 89 8B C2 00 00 00      MOV word ptr [EBX + 0xc2],CX
004A5360  66 8B 90 FD 00 00 00      MOV DX,word ptr [EAX + 0xfd]
004A5367  66 89 93 C4 00 00 00      MOV word ptr [EBX + 0xc4],DX
004A536E  8B 88 FF 00 00 00         MOV ECX,dword ptr [EAX + 0xff]
004A5374  89 8B C6 00 00 00         MOV dword ptr [EBX + 0xc6],ECX
004A537A  8B 90 07 01 00 00         MOV EDX,dword ptr [EAX + 0x107]
004A5380  89 93 D2 00 00 00         MOV dword ptr [EBX + 0xd2],EDX
004A5386  8B 88 0B 01 00 00         MOV ECX,dword ptr [EAX + 0x10b]
004A538C  89 8B D6 00 00 00         MOV dword ptr [EBX + 0xd6],ECX
004A5392  66 8B 90 13 01 00 00      MOV DX,word ptr [EAX + 0x113]
004A5399  66 89 93 E2 00 00 00      MOV word ptr [EBX + 0xe2],DX
004A53A0  66 8B 88 15 01 00 00      MOV CX,word ptr [EAX + 0x115]
004A53A7  66 89 8B E4 00 00 00      MOV word ptr [EBX + 0xe4],CX
004A53AE  66 8B 90 17 01 00 00      MOV DX,word ptr [EAX + 0x117]
004A53B5  66 89 93 E6 00 00 00      MOV word ptr [EBX + 0xe6],DX
004A53BC  66 8B 88 19 01 00 00      MOV CX,word ptr [EAX + 0x119]
004A53C3  66 89 8B E8 00 00 00      MOV word ptr [EBX + 0xe8],CX
004A53CA  66 8B 90 1B 01 00 00      MOV DX,word ptr [EAX + 0x11b]
004A53D1  66 89 93 EA 00 00 00      MOV word ptr [EBX + 0xea],DX
004A53D8  66 8B 88 1D 01 00 00      MOV CX,word ptr [EAX + 0x11d]
004A53DF  66 89 8B EC 00 00 00      MOV word ptr [EBX + 0xec],CX
004A53E6  8B 90 1F 01 00 00         MOV EDX,dword ptr [EAX + 0x11f]
004A53EC  89 93 EE 00 00 00         MOV dword ptr [EBX + 0xee],EDX
004A53F2  8B 88 23 01 00 00         MOV ECX,dword ptr [EAX + 0x123]
004A53F8  89 8B F2 00 00 00         MOV dword ptr [EBX + 0xf2],ECX
004A53FE  66 8B 90 2B 01 00 00      MOV DX,word ptr [EAX + 0x12b]
004A5405  66 89 93 FE 00 00 00      MOV word ptr [EBX + 0xfe],DX
004A540C  66 8B 88 2D 01 00 00      MOV CX,word ptr [EAX + 0x12d]
004A5413  66 89 8B 00 01 00 00      MOV word ptr [EBX + 0x100],CX
004A541A  66 8B 90 2F 01 00 00      MOV DX,word ptr [EAX + 0x12f]
004A5421  66 89 93 02 01 00 00      MOV word ptr [EBX + 0x102],DX
004A5428  66 8B 88 31 01 00 00      MOV CX,word ptr [EAX + 0x131]
004A542F  66 89 8B 04 01 00 00      MOV word ptr [EBX + 0x104],CX
004A5436  66 8B 90 33 01 00 00      MOV DX,word ptr [EAX + 0x133]
004A543D  66 89 93 06 01 00 00      MOV word ptr [EBX + 0x106],DX
004A5444  66 8B 88 35 01 00 00      MOV CX,word ptr [EAX + 0x135]
004A544B  66 89 8B 08 01 00 00      MOV word ptr [EBX + 0x108],CX
004A5452  8D B0 37 01 00 00         LEA ESI,[EAX + 0x137]
004A5458  8D BB 0A 01 00 00         LEA EDI,[EBX + 0x10a]
004A545E  B9 07 00 00 00            MOV ECX,0x7
004A5463  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5465  66 A5                     MOVSW ES:EDI,ESI
004A5467  8D 90 56 01 00 00         LEA EDX,[EAX + 0x156]
004A546D  8D 8B 29 01 00 00         LEA ECX,[EBX + 0x129]
004A5473  A4                        MOVSB ES:EDI,ESI
004A5474  8B 32                     MOV ESI,dword ptr [EDX]
004A5476  89 31                     MOV dword ptr [ECX],ESI
004A5478  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
004A547C  66 89 51 04               MOV word ptr [ECX + 0x4],DX
004A5480  8A 88 C9 01 00 00         MOV CL,byte ptr [EAX + 0x1c9]
004A5486  88 8B A4 01 00 00         MOV byte ptr [EBX + 0x1a4],CL
004A548C  8B 90 5C 01 00 00         MOV EDX,dword ptr [EAX + 0x15c]
004A5492  89 93 2F 01 00 00         MOV dword ptr [EBX + 0x12f],EDX
004A5498  8B 88 64 01 00 00         MOV ECX,dword ptr [EAX + 0x164]
004A549E  89 8B 3B 01 00 00         MOV dword ptr [EBX + 0x13b],ECX
004A54A4  66 8B 90 6C 01 00 00      MOV DX,word ptr [EAX + 0x16c]
004A54AB  66 89 93 47 01 00 00      MOV word ptr [EBX + 0x147],DX
004A54B2  66 8B 88 6E 01 00 00      MOV CX,word ptr [EAX + 0x16e]
004A54B9  66 89 8B 49 01 00 00      MOV word ptr [EBX + 0x149],CX
004A54C0  66 8B 90 70 01 00 00      MOV DX,word ptr [EAX + 0x170]
004A54C7  66 89 93 4B 01 00 00      MOV word ptr [EBX + 0x14b],DX
004A54CE  66 8B 88 72 01 00 00      MOV CX,word ptr [EAX + 0x172]
004A54D5  66 89 8B 4D 01 00 00      MOV word ptr [EBX + 0x14d],CX
004A54DC  66 8B 90 74 01 00 00      MOV DX,word ptr [EAX + 0x174]
004A54E3  66 89 93 4F 01 00 00      MOV word ptr [EBX + 0x14f],DX
004A54EA  66 8B 88 76 01 00 00      MOV CX,word ptr [EAX + 0x176]
004A54F1  66 89 8B 51 01 00 00      MOV word ptr [EBX + 0x151],CX
004A54F8  8B 90 78 01 00 00         MOV EDX,dword ptr [EAX + 0x178]
004A54FE  89 93 53 01 00 00         MOV dword ptr [EBX + 0x153],EDX
004A5504  66 8B 88 7C 01 00 00      MOV CX,word ptr [EAX + 0x17c]
004A550B  66 89 8B 57 01 00 00      MOV word ptr [EBX + 0x157],CX
004A5512  66 8B 90 7E 01 00 00      MOV DX,word ptr [EAX + 0x17e]
004A5519  66 89 93 59 01 00 00      MOV word ptr [EBX + 0x159],DX
004A5520  66 8B 88 80 01 00 00      MOV CX,word ptr [EAX + 0x180]
004A5527  8D 90 82 01 00 00         LEA EDX,[EAX + 0x182]
004A552D  66 89 8B 5B 01 00 00      MOV word ptr [EBX + 0x15b],CX
004A5534  8D 8B 5D 01 00 00         LEA ECX,[EBX + 0x15d]
004A553A  8B 32                     MOV ESI,dword ptr [EDX]
004A553C  89 31                     MOV dword ptr [ECX],ESI
004A553E  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A5541  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A5544  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A5548  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A554C  8D 88 8C 01 00 00         LEA ECX,[EAX + 0x18c]
004A5552  8D 93 67 01 00 00         LEA EDX,[EBX + 0x167]
004A5558  8B 31                     MOV ESI,dword ptr [ECX]
004A555A  89 32                     MOV dword ptr [EDX],ESI
004A555C  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A5560  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A5564  8D 90 92 01 00 00         LEA EDX,[EAX + 0x192]
004A556A  8D 8B 6D 01 00 00         LEA ECX,[EBX + 0x16d]
004A5570  8B 32                     MOV ESI,dword ptr [EDX]
004A5572  89 31                     MOV dword ptr [ECX],ESI
004A5574  66 8B 72 04               MOV SI,word ptr [EDX + 0x4]
004A5578  66 89 71 04               MOV word ptr [ECX + 0x4],SI
004A557C  8A 52 06                  MOV DL,byte ptr [EDX + 0x6]
004A557F  88 51 06                  MOV byte ptr [ECX + 0x6],DL
004A5582  8D 88 99 01 00 00         LEA ECX,[EAX + 0x199]
004A5588  8D 93 74 01 00 00         LEA EDX,[EBX + 0x174]
004A558E  8B 31                     MOV ESI,dword ptr [ECX]
004A5590  89 32                     MOV dword ptr [EDX],ESI
004A5592  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004A5595  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004A5598  66 8B 49 08               MOV CX,word ptr [ECX + 0x8]
004A559C  66 89 4A 08               MOV word ptr [EDX + 0x8],CX
004A55A0  8D 90 A3 01 00 00         LEA EDX,[EAX + 0x1a3]
004A55A6  8D 8B 7E 01 00 00         LEA ECX,[EBX + 0x17e]
004A55AC  8B 32                     MOV ESI,dword ptr [EDX]
004A55AE  89 31                     MOV dword ptr [ECX],ESI
004A55B0  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A55B3  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
004A55B9  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A55BC  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
004A55BF  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
004A55C2  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
004A55C5  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
004A55C8  8D 88 B3 01 00 00         LEA ECX,[EAX + 0x1b3]
004A55CE  8D 93 8E 01 00 00         LEA EDX,[EBX + 0x18e]
004A55D4  8B 31                     MOV ESI,dword ptr [ECX]
004A55D6  89 32                     MOV dword ptr [EDX],ESI
004A55D8  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A55DC  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A55E0  8D 90 B9 01 00 00         LEA EDX,[EAX + 0x1b9]
004A55E6  8D 8B 94 01 00 00         LEA ECX,[EBX + 0x194]
004A55EC  8B 32                     MOV ESI,dword ptr [EDX]
004A55EE  89 31                     MOV dword ptr [ECX],ESI
004A55F0  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
004A55F4  66 89 51 04               MOV word ptr [ECX + 0x4],DX
004A55F8  8D 88 BF 01 00 00         LEA ECX,[EAX + 0x1bf]
004A55FE  8D 93 9A 01 00 00         LEA EDX,[EBX + 0x19a]
004A5604  8B 31                     MOV ESI,dword ptr [ECX]
004A5606  89 32                     MOV dword ptr [EDX],ESI
004A5608  8D B0 E2 01 00 00         LEA ESI,[EAX + 0x1e2]
004A560E  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A5612  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A5616  8B 90 C5 01 00 00         MOV EDX,dword ptr [EAX + 0x1c5]
004A561C  B9 0A 00 00 00            MOV ECX,0xa
004A5621  89 93 A0 01 00 00         MOV dword ptr [EBX + 0x1a0],EDX
004A5627  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5629  8B 88 12 02 00 00         MOV ECX,dword ptr [EAX + 0x212]
004A562F  8D B0 76 02 00 00         LEA ESI,[EAX + 0x276]
004A5635  89 8B 05 02 00 00         MOV dword ptr [EBX + 0x205],ECX
004A563B  8B 90 16 02 00 00         MOV EDX,dword ptr [EAX + 0x216]
004A5641  89 93 09 02 00 00         MOV dword ptr [EBX + 0x209],EDX
004A5647  8B 88 1A 02 00 00         MOV ECX,dword ptr [EAX + 0x21a]
004A564D  89 8B 0D 02 00 00         MOV dword ptr [EBX + 0x20d],ECX
004A5653  8B 90 22 02 00 00         MOV EDX,dword ptr [EAX + 0x222]
004A5659  89 93 19 02 00 00         MOV dword ptr [EBX + 0x219],EDX
004A565F  8B 88 32 02 00 00         MOV ECX,dword ptr [EAX + 0x232]
004A5665  89 8B 35 02 00 00         MOV dword ptr [EBX + 0x235],ECX
004A566B  8B 90 36 02 00 00         MOV EDX,dword ptr [EAX + 0x236]
004A5671  89 93 39 02 00 00         MOV dword ptr [EBX + 0x239],EDX
004A5677  8B 88 3A 02 00 00         MOV ECX,dword ptr [EAX + 0x23a]
004A567D  89 8B 3D 02 00 00         MOV dword ptr [EBX + 0x23d],ECX
004A5683  8B 90 3E 02 00 00         MOV EDX,dword ptr [EAX + 0x23e]
004A5689  89 93 41 02 00 00         MOV dword ptr [EBX + 0x241],EDX
004A568F  8B 88 42 02 00 00         MOV ECX,dword ptr [EAX + 0x242]
004A5695  89 8B 45 02 00 00         MOV dword ptr [EBX + 0x245],ECX
004A569B  8B 90 46 02 00 00         MOV EDX,dword ptr [EAX + 0x246]
004A56A1  89 93 49 02 00 00         MOV dword ptr [EBX + 0x249],EDX
004A56A7  8B 88 4A 02 00 00         MOV ECX,dword ptr [EAX + 0x24a]
004A56AD  89 8B 4D 02 00 00         MOV dword ptr [EBX + 0x24d],ECX
004A56B3  66 8B 90 52 02 00 00      MOV DX,word ptr [EAX + 0x252]
004A56BA  66 89 93 59 02 00 00      MOV word ptr [EBX + 0x259],DX
004A56C1  66 8B 88 54 02 00 00      MOV CX,word ptr [EAX + 0x254]
004A56C8  66 89 8B 5B 02 00 00      MOV word ptr [EBX + 0x25b],CX
004A56CF  66 8B 90 56 02 00 00      MOV DX,word ptr [EAX + 0x256]
004A56D6  66 89 93 5D 02 00 00      MOV word ptr [EBX + 0x25d],DX
004A56DD  66 8B 88 58 02 00 00      MOV CX,word ptr [EAX + 0x258]
004A56E4  66 89 8B 5F 02 00 00      MOV word ptr [EBX + 0x25f],CX
004A56EB  66 8B 90 5A 02 00 00      MOV DX,word ptr [EAX + 0x25a]
004A56F2  66 89 93 61 02 00 00      MOV word ptr [EBX + 0x261],DX
004A56F9  66 8B 88 5C 02 00 00      MOV CX,word ptr [EAX + 0x25c]
004A5700  66 89 8B 63 02 00 00      MOV word ptr [EBX + 0x263],CX
004A5707  8B 90 5E 02 00 00         MOV EDX,dword ptr [EAX + 0x25e]
004A570D  89 93 65 02 00 00         MOV dword ptr [EBX + 0x265],EDX
004A5713  8B 88 62 02 00 00         MOV ECX,dword ptr [EAX + 0x262]
004A5719  89 8B 69 02 00 00         MOV dword ptr [EBX + 0x269],ECX
004A571F  66 8B 90 6A 02 00 00      MOV DX,word ptr [EAX + 0x26a]
004A5726  66 89 93 75 02 00 00      MOV word ptr [EBX + 0x275],DX
004A572D  66 8B 88 6C 02 00 00      MOV CX,word ptr [EAX + 0x26c]
004A5734  66 89 8B 77 02 00 00      MOV word ptr [EBX + 0x277],CX
004A573B  66 8B 90 6E 02 00 00      MOV DX,word ptr [EAX + 0x26e]
004A5742  66 89 93 79 02 00 00      MOV word ptr [EBX + 0x279],DX
004A5749  66 8B 88 70 02 00 00      MOV CX,word ptr [EAX + 0x270]
004A5750  66 89 8B 7B 02 00 00      MOV word ptr [EBX + 0x27b],CX
004A5757  66 8B 90 72 02 00 00      MOV DX,word ptr [EAX + 0x272]
004A575E  66 89 93 7D 02 00 00      MOV word ptr [EBX + 0x27d],DX
004A5765  66 8B 88 74 02 00 00      MOV CX,word ptr [EAX + 0x274]
004A576C  66 89 8B 7F 02 00 00      MOV word ptr [EBX + 0x27f],CX
004A5773  8D BB 81 02 00 00         LEA EDI,[EBX + 0x281]
004A5779  B9 07 00 00 00            MOV ECX,0x7
004A577E  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5780  66 A5                     MOVSW ES:EDI,ESI
004A5782  8D 90 95 02 00 00         LEA EDX,[EAX + 0x295]
004A5788  8D 8B A0 02 00 00         LEA ECX,[EBX + 0x2a0]
004A578E  A4                        MOVSB ES:EDI,ESI
004A578F  8B 32                     MOV ESI,dword ptr [EDX]
004A5791  89 31                     MOV dword ptr [ECX],ESI
004A5793  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
004A5797  66 89 51 04               MOV word ptr [ECX + 0x4],DX
004A579B  8B 88 9B 02 00 00         MOV ECX,dword ptr [EAX + 0x29b]
004A57A1  8D 90 A3 02 00 00         LEA EDX,[EAX + 0x2a3]
004A57A7  89 8B A6 02 00 00         MOV dword ptr [EBX + 0x2a6],ECX
004A57AD  8D 8B B2 02 00 00         LEA ECX,[EBX + 0x2b2]
004A57B3  8B 32                     MOV ESI,dword ptr [EDX]
004A57B5  89 31                     MOV dword ptr [ECX],ESI
004A57B7  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A57BA  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A57BD  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A57C1  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A57C5  8D 88 AD 02 00 00         LEA ECX,[EAX + 0x2ad]
004A57CB  8D 93 BC 02 00 00         LEA EDX,[EBX + 0x2bc]
004A57D1  8B 31                     MOV ESI,dword ptr [ECX]
004A57D3  89 32                     MOV dword ptr [EDX],ESI
004A57D5  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A57D9  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A57DD  8D 90 B3 02 00 00         LEA EDX,[EAX + 0x2b3]
004A57E3  8D 8B C2 02 00 00         LEA ECX,[EBX + 0x2c2]
004A57E9  8B 32                     MOV ESI,dword ptr [EDX]
004A57EB  89 31                     MOV dword ptr [ECX],ESI
004A57ED  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A57F0  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A57F3  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A57F7  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A57FB  8D 88 BD 02 00 00         LEA ECX,[EAX + 0x2bd]
004A5801  8D 93 CC 02 00 00         LEA EDX,[EBX + 0x2cc]
004A5807  8B 31                     MOV ESI,dword ptr [ECX]
004A5809  89 32                     MOV dword ptr [EDX],ESI
004A580B  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A580F  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A5813  8D 90 C3 02 00 00         LEA EDX,[EAX + 0x2c3]
004A5819  8D 8B D2 02 00 00         LEA ECX,[EBX + 0x2d2]
004A581F  8B 32                     MOV ESI,dword ptr [EDX]
004A5821  89 31                     MOV dword ptr [ECX],ESI
004A5823  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A5826  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A5829  66 8B 72 08               MOV SI,word ptr [EDX + 0x8]
004A582D  66 89 71 08               MOV word ptr [ECX + 0x8],SI
004A5831  8A 52 0A                  MOV DL,byte ptr [EDX + 0xa]
004A5834  88 51 0A                  MOV byte ptr [ECX + 0xa],DL
004A5837  8D 88 CE 02 00 00         LEA ECX,[EAX + 0x2ce]
004A583D  8D 93 DD 02 00 00         LEA EDX,[EBX + 0x2dd]
004A5843  8B 31                     MOV ESI,dword ptr [ECX]
004A5845  89 32                     MOV dword ptr [EDX],ESI
004A5847  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004A584A  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004A584D  66 8B 49 08               MOV CX,word ptr [ECX + 0x8]
004A5851  66 89 4A 08               MOV word ptr [EDX + 0x8],CX
004A5855  8D 90 D8 02 00 00         LEA EDX,[EAX + 0x2d8]
004A585B  8D 8B E7 02 00 00         LEA ECX,[EBX + 0x2e7]
004A5861  8B 32                     MOV ESI,dword ptr [EDX]
004A5863  89 31                     MOV dword ptr [ECX],ESI
004A5865  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A5868  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A586B  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
004A586E  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
004A5871  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
004A5874  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
004A5877  8D 88 E8 02 00 00         LEA ECX,[EAX + 0x2e8]
004A587D  8D 93 F7 02 00 00         LEA EDX,[EBX + 0x2f7]
004A5883  8B 31                     MOV ESI,dword ptr [ECX]
004A5885  89 32                     MOV dword ptr [EDX],ESI
004A5887  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A588B  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A588F  8D 90 EE 02 00 00         LEA EDX,[EAX + 0x2ee]
004A5895  8D 8B FD 02 00 00         LEA ECX,[EBX + 0x2fd]
004A589B  8B 32                     MOV ESI,dword ptr [EDX]
004A589D  89 31                     MOV dword ptr [ECX],ESI
004A589F  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A58A2  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A58A5  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A58A9  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A58AD  8D 88 F8 02 00 00         LEA ECX,[EAX + 0x2f8]
004A58B3  8D 93 07 03 00 00         LEA EDX,[EBX + 0x307]
004A58B9  8B 31                     MOV ESI,dword ptr [ECX]
004A58BB  89 32                     MOV dword ptr [EDX],ESI
004A58BD  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004A58C0  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004A58C3  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
004A58C6  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
004A58C9  8D 90 04 03 00 00         LEA EDX,[EAX + 0x304]
004A58CF  8D 8B 13 03 00 00         LEA ECX,[EBX + 0x313]
004A58D5  8B 32                     MOV ESI,dword ptr [EDX]
004A58D7  89 31                     MOV dword ptr [ECX],ESI
004A58D9  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A58DC  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A58DF  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A58E3  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A58E7  8B 88 0E 03 00 00         MOV ECX,dword ptr [EAX + 0x30e]
004A58ED  89 8B 1D 03 00 00         MOV dword ptr [EBX + 0x31d],ECX
004A58F3  8B 40 59                  MOV EAX,dword ptr [EAX + 0x59]
004A58F6  85 C0                     TEST EAX,EAX
004A58F8  74 30                     JZ 0x004a592a
004A58FA  8B 08                     MOV ECX,dword ptr [EAX]
004A58FC  8B F0                     MOV ESI,EAX
004A58FE  C1 E1 04                  SHL ECX,0x4
004A5901  83 C1 0C                  ADD ECX,0xc
004A5904  8D BB 21 03 00 00         LEA EDI,[EBX + 0x321]
004A590A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004A590D  8B D1                     MOV EDX,ECX
004A590F  C1 E9 02                  SHR ECX,0x2
004A5912  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5914  8B CA                     MOV ECX,EDX
004A5916  83 E1 03                  AND ECX,0x3
004A5919  F3 A4                     MOVSB.REP ES:EDI,ESI
004A591B  C7 43 1C 21 03 00 00      MOV dword ptr [EBX + 0x1c],0x321
004A5922  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A5925  89 43 20                  MOV dword ptr [EBX + 0x20],EAX
004A5928  EB 14                     JMP 0x004a593e
LAB_004a592a:
004A592A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5931  C7 43 1C FF FF FF FF      MOV dword ptr [EBX + 0x1c],0xffffffff
004A5938  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A593B  89 4B 20                  MOV dword ptr [EBX + 0x20],ECX
LAB_004a593e:
004A593E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5941  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5944  8D 82 21 03 00 00         LEA EAX,[EDX + 0x321]
004A594A  8B 91 EF 00 00 00         MOV EDX,dword ptr [ECX + 0xef]
004A5950  85 D2                     TEST EDX,EDX
004A5952  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5955  74 48                     JZ 0x004a599f
004A5957  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A595A  50                        PUSH EAX
004A595B  52                        PUSH EDX
004A595C  E8 BF A6 20 00            CALL 0x006b0020
004A5961  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5964  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5967  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A596A  8B F0                     MOV ESI,EAX
004A596C  8B C1                     MOV EAX,ECX
004A596E  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5971  C1 E9 02                  SHR ECX,0x2
004A5974  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5976  8B C8                     MOV ECX,EAX
004A5978  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A597B  83 E1 03                  AND ECX,0x3
004A597E  50                        PUSH EAX
004A597F  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5981  8B CA                     MOV ECX,EDX
004A5983  89 8B B2 00 00 00         MOV dword ptr [EBX + 0xb2],ECX
004A5989  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A598C  89 93 B6 00 00 00         MOV dword ptr [EBX + 0xb6],EDX
004A5992  E8 C9 56 20 00            CALL 0x006ab060
004A5997  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A599A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A599D  EB 1A                     JMP 0x004a59b9
LAB_004a599f:
004A599F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A59A6  C7 83 B2 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0xb2],0xffffffff
004A59B0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A59B3  89 93 B6 00 00 00         MOV dword ptr [EBX + 0xb6],EDX
LAB_004a59b9:
004A59B9  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A59BC  8B 91 03 01 00 00         MOV EDX,dword ptr [ECX + 0x103]
004A59C2  03 C7                     ADD EAX,EDI
004A59C4  85 D2                     TEST EDX,EDX
004A59C6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A59C9  74 48                     JZ 0x004a5a13
004A59CB  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A59CE  50                        PUSH EAX
004A59CF  52                        PUSH EDX
004A59D0  E8 4B A6 20 00            CALL 0x006b0020
004A59D5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A59D8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A59DB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A59DE  8B F0                     MOV ESI,EAX
004A59E0  8B C1                     MOV EAX,ECX
004A59E2  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A59E5  C1 E9 02                  SHR ECX,0x2
004A59E8  F3 A5                     MOVSD.REP ES:EDI,ESI
004A59EA  8B C8                     MOV ECX,EAX
004A59EC  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A59EF  83 E1 03                  AND ECX,0x3
004A59F2  50                        PUSH EAX
004A59F3  F3 A4                     MOVSB.REP ES:EDI,ESI
004A59F5  8B CA                     MOV ECX,EDX
004A59F7  89 8B CA 00 00 00         MOV dword ptr [EBX + 0xca],ECX
004A59FD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5A00  89 93 CE 00 00 00         MOV dword ptr [EBX + 0xce],EDX
004A5A06  E8 55 56 20 00            CALL 0x006ab060
004A5A0B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5A0E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5A11  EB 1A                     JMP 0x004a5a2d
LAB_004a5a13:
004A5A13  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5A1A  C7 83 CA 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0xca],0xffffffff
004A5A24  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5A27  89 93 CE 00 00 00         MOV dword ptr [EBX + 0xce],EDX
LAB_004a5a2d:
004A5A2D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5A30  8B 91 0F 01 00 00         MOV EDX,dword ptr [ECX + 0x10f]
004A5A36  03 C7                     ADD EAX,EDI
004A5A38  85 D2                     TEST EDX,EDX
004A5A3A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5A3D  74 48                     JZ 0x004a5a87
004A5A3F  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5A42  50                        PUSH EAX
004A5A43  52                        PUSH EDX
004A5A44  E8 D7 A5 20 00            CALL 0x006b0020
004A5A49  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5A4C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5A4F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5A52  8B F0                     MOV ESI,EAX
004A5A54  8B C1                     MOV EAX,ECX
004A5A56  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5A59  C1 E9 02                  SHR ECX,0x2
004A5A5C  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5A5E  8B C8                     MOV ECX,EAX
004A5A60  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5A63  83 E1 03                  AND ECX,0x3
004A5A66  50                        PUSH EAX
004A5A67  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5A69  8B CA                     MOV ECX,EDX
004A5A6B  89 8B DA 00 00 00         MOV dword ptr [EBX + 0xda],ECX
004A5A71  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5A74  89 93 DE 00 00 00         MOV dword ptr [EBX + 0xde],EDX
004A5A7A  E8 E1 55 20 00            CALL 0x006ab060
004A5A7F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5A82  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5A85  EB 1A                     JMP 0x004a5aa1
LAB_004a5a87:
004A5A87  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5A8E  C7 83 DA 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0xda],0xffffffff
004A5A98  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5A9B  89 93 DE 00 00 00         MOV dword ptr [EBX + 0xde],EDX
LAB_004a5aa1:
004A5AA1  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5AA4  8B 91 27 01 00 00         MOV EDX,dword ptr [ECX + 0x127]
004A5AAA  03 C7                     ADD EAX,EDI
004A5AAC  85 D2                     TEST EDX,EDX
004A5AAE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5AB1  74 48                     JZ 0x004a5afb
004A5AB3  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5AB6  50                        PUSH EAX
004A5AB7  52                        PUSH EDX
004A5AB8  E8 63 A5 20 00            CALL 0x006b0020
004A5ABD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5AC0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5AC3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5AC6  8B F0                     MOV ESI,EAX
004A5AC8  8B C1                     MOV EAX,ECX
004A5ACA  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5ACD  C1 E9 02                  SHR ECX,0x2
004A5AD0  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5AD2  8B C8                     MOV ECX,EAX
004A5AD4  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5AD7  83 E1 03                  AND ECX,0x3
004A5ADA  50                        PUSH EAX
004A5ADB  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5ADD  8B CA                     MOV ECX,EDX
004A5ADF  89 8B F6 00 00 00         MOV dword ptr [EBX + 0xf6],ECX
004A5AE5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5AE8  89 93 FA 00 00 00         MOV dword ptr [EBX + 0xfa],EDX
004A5AEE  E8 6D 55 20 00            CALL 0x006ab060
004A5AF3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5AF6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5AF9  EB 1A                     JMP 0x004a5b15
LAB_004a5afb:
004A5AFB  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5B02  C7 83 F6 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0xf6],0xffffffff
004A5B0C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5B0F  89 93 FA 00 00 00         MOV dword ptr [EBX + 0xfa],EDX
LAB_004a5b15:
004A5B15  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5B18  8B 91 60 01 00 00         MOV EDX,dword ptr [ECX + 0x160]
004A5B1E  03 C7                     ADD EAX,EDI
004A5B20  85 D2                     TEST EDX,EDX
004A5B22  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5B25  74 48                     JZ 0x004a5b6f
004A5B27  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5B2A  50                        PUSH EAX
004A5B2B  52                        PUSH EDX
004A5B2C  E8 EF A4 20 00            CALL 0x006b0020
004A5B31  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5B34  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5B37  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5B3A  8B F0                     MOV ESI,EAX
004A5B3C  8B C1                     MOV EAX,ECX
004A5B3E  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5B41  C1 E9 02                  SHR ECX,0x2
004A5B44  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5B46  8B C8                     MOV ECX,EAX
004A5B48  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5B4B  83 E1 03                  AND ECX,0x3
004A5B4E  50                        PUSH EAX
004A5B4F  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5B51  8B CA                     MOV ECX,EDX
004A5B53  89 8B 33 01 00 00         MOV dword ptr [EBX + 0x133],ECX
004A5B59  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5B5C  89 93 37 01 00 00         MOV dword ptr [EBX + 0x137],EDX
004A5B62  E8 F9 54 20 00            CALL 0x006ab060
004A5B67  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5B6A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5B6D  EB 1A                     JMP 0x004a5b89
LAB_004a5b6f:
004A5B6F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5B76  C7 83 33 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x133],0xffffffff
004A5B80  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5B83  89 93 37 01 00 00         MOV dword ptr [EBX + 0x137],EDX
LAB_004a5b89:
004A5B89  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5B8C  8B 91 68 01 00 00         MOV EDX,dword ptr [ECX + 0x168]
004A5B92  03 C7                     ADD EAX,EDI
004A5B94  85 D2                     TEST EDX,EDX
004A5B96  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5B99  74 48                     JZ 0x004a5be3
004A5B9B  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5B9E  50                        PUSH EAX
004A5B9F  52                        PUSH EDX
004A5BA0  E8 7B A4 20 00            CALL 0x006b0020
004A5BA5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5BA8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5BAB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5BAE  8B F0                     MOV ESI,EAX
004A5BB0  8B C1                     MOV EAX,ECX
004A5BB2  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5BB5  C1 E9 02                  SHR ECX,0x2
004A5BB8  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5BBA  8B C8                     MOV ECX,EAX
004A5BBC  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5BBF  83 E1 03                  AND ECX,0x3
004A5BC2  50                        PUSH EAX
004A5BC3  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5BC5  8B CA                     MOV ECX,EDX
004A5BC7  89 8B 3F 01 00 00         MOV dword ptr [EBX + 0x13f],ECX
004A5BCD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5BD0  89 93 43 01 00 00         MOV dword ptr [EBX + 0x143],EDX
004A5BD6  E8 85 54 20 00            CALL 0x006ab060
004A5BDB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5BDE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5BE1  EB 1A                     JMP 0x004a5bfd
LAB_004a5be3:
004A5BE3  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5BEA  C7 83 3F 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x13f],0xffffffff
004A5BF4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5BF7  89 93 43 01 00 00         MOV dword ptr [EBX + 0x143],EDX
LAB_004a5bfd:
004A5BFD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5C00  8B 91 CA 01 00 00         MOV EDX,dword ptr [ECX + 0x1ca]
004A5C06  03 C7                     ADD EAX,EDI
004A5C08  85 D2                     TEST EDX,EDX
004A5C0A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5C0D  74 48                     JZ 0x004a5c57
004A5C0F  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5C12  50                        PUSH EAX
004A5C13  52                        PUSH EDX
004A5C14  E8 07 A4 20 00            CALL 0x006b0020
004A5C19  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5C1C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5C1F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5C22  8B F0                     MOV ESI,EAX
004A5C24  8B C1                     MOV EAX,ECX
004A5C26  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5C29  C1 E9 02                  SHR ECX,0x2
004A5C2C  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5C2E  8B C8                     MOV ECX,EAX
004A5C30  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5C33  83 E1 03                  AND ECX,0x3
004A5C36  50                        PUSH EAX
004A5C37  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5C39  8B CA                     MOV ECX,EDX
004A5C3B  89 8B A5 01 00 00         MOV dword ptr [EBX + 0x1a5],ECX
004A5C41  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5C44  89 93 A9 01 00 00         MOV dword ptr [EBX + 0x1a9],EDX
004A5C4A  E8 11 54 20 00            CALL 0x006ab060
004A5C4F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5C52  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5C55  EB 1A                     JMP 0x004a5c71
LAB_004a5c57:
004A5C57  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5C5E  C7 83 A5 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1a5],0xffffffff
004A5C68  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5C6B  89 93 A9 01 00 00         MOV dword ptr [EBX + 0x1a9],EDX
LAB_004a5c71:
004A5C71  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5C74  8B 91 CE 01 00 00         MOV EDX,dword ptr [ECX + 0x1ce]
004A5C7A  03 C7                     ADD EAX,EDI
004A5C7C  85 D2                     TEST EDX,EDX
004A5C7E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5C81  74 48                     JZ 0x004a5ccb
004A5C83  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5C86  50                        PUSH EAX
004A5C87  52                        PUSH EDX
004A5C88  E8 93 A3 20 00            CALL 0x006b0020
004A5C8D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5C90  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5C93  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5C96  8B F0                     MOV ESI,EAX
004A5C98  8B C1                     MOV EAX,ECX
004A5C9A  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5C9D  C1 E9 02                  SHR ECX,0x2
004A5CA0  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5CA2  8B C8                     MOV ECX,EAX
004A5CA4  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5CA7  83 E1 03                  AND ECX,0x3
004A5CAA  50                        PUSH EAX
004A5CAB  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5CAD  8B CA                     MOV ECX,EDX
004A5CAF  89 8B AD 01 00 00         MOV dword ptr [EBX + 0x1ad],ECX
004A5CB5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5CB8  89 93 B1 01 00 00         MOV dword ptr [EBX + 0x1b1],EDX
004A5CBE  E8 9D 53 20 00            CALL 0x006ab060
004A5CC3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5CC6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5CC9  EB 1A                     JMP 0x004a5ce5
LAB_004a5ccb:
004A5CCB  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5CD2  C7 83 AD 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1ad],0xffffffff
004A5CDC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5CDF  89 93 B1 01 00 00         MOV dword ptr [EBX + 0x1b1],EDX
LAB_004a5ce5:
004A5CE5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5CE8  8B 91 D2 01 00 00         MOV EDX,dword ptr [ECX + 0x1d2]
004A5CEE  03 C7                     ADD EAX,EDI
004A5CF0  85 D2                     TEST EDX,EDX
004A5CF2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5CF5  74 48                     JZ 0x004a5d3f
004A5CF7  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5CFA  50                        PUSH EAX
004A5CFB  52                        PUSH EDX
004A5CFC  E8 1F A3 20 00            CALL 0x006b0020
004A5D01  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5D04  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5D07  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5D0A  8B F0                     MOV ESI,EAX
004A5D0C  8B C1                     MOV EAX,ECX
004A5D0E  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5D11  C1 E9 02                  SHR ECX,0x2
004A5D14  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5D16  8B C8                     MOV ECX,EAX
004A5D18  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5D1B  83 E1 03                  AND ECX,0x3
004A5D1E  50                        PUSH EAX
004A5D1F  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5D21  8B CA                     MOV ECX,EDX
004A5D23  89 8B B5 01 00 00         MOV dword ptr [EBX + 0x1b5],ECX
004A5D29  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5D2C  89 93 B9 01 00 00         MOV dword ptr [EBX + 0x1b9],EDX
004A5D32  E8 29 53 20 00            CALL 0x006ab060
004A5D37  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5D3A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5D3D  EB 1A                     JMP 0x004a5d59
LAB_004a5d3f:
004A5D3F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5D46  C7 83 B5 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1b5],0xffffffff
004A5D50  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5D53  89 93 B9 01 00 00         MOV dword ptr [EBX + 0x1b9],EDX
LAB_004a5d59:
004A5D59  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5D5C  8B 91 D6 01 00 00         MOV EDX,dword ptr [ECX + 0x1d6]
004A5D62  03 C7                     ADD EAX,EDI
004A5D64  85 D2                     TEST EDX,EDX
004A5D66  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5D69  74 48                     JZ 0x004a5db3
004A5D6B  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5D6E  50                        PUSH EAX
004A5D6F  52                        PUSH EDX
004A5D70  E8 AB A2 20 00            CALL 0x006b0020
004A5D75  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5D78  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5D7B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5D7E  8B F0                     MOV ESI,EAX
004A5D80  8B C1                     MOV EAX,ECX
004A5D82  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5D85  C1 E9 02                  SHR ECX,0x2
004A5D88  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5D8A  8B C8                     MOV ECX,EAX
004A5D8C  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5D8F  83 E1 03                  AND ECX,0x3
004A5D92  50                        PUSH EAX
004A5D93  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5D95  8B CA                     MOV ECX,EDX
004A5D97  89 8B BD 01 00 00         MOV dword ptr [EBX + 0x1bd],ECX
004A5D9D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5DA0  89 93 C1 01 00 00         MOV dword ptr [EBX + 0x1c1],EDX
004A5DA6  E8 B5 52 20 00            CALL 0x006ab060
004A5DAB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5DAE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5DB1  EB 1A                     JMP 0x004a5dcd
LAB_004a5db3:
004A5DB3  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5DBA  C7 83 BD 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1bd],0xffffffff
004A5DC4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5DC7  89 93 C1 01 00 00         MOV dword ptr [EBX + 0x1c1],EDX
LAB_004a5dcd:
004A5DCD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5DD0  8B 91 DA 01 00 00         MOV EDX,dword ptr [ECX + 0x1da]
004A5DD6  03 C7                     ADD EAX,EDI
004A5DD8  85 D2                     TEST EDX,EDX
004A5DDA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5DDD  74 48                     JZ 0x004a5e27
004A5DDF  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5DE2  50                        PUSH EAX
004A5DE3  52                        PUSH EDX
004A5DE4  E8 37 A2 20 00            CALL 0x006b0020
004A5DE9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5DEC  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5DEF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5DF2  8B F0                     MOV ESI,EAX
004A5DF4  8B C1                     MOV EAX,ECX
004A5DF6  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5DF9  C1 E9 02                  SHR ECX,0x2
004A5DFC  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5DFE  8B C8                     MOV ECX,EAX
004A5E00  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5E03  83 E1 03                  AND ECX,0x3
004A5E06  50                        PUSH EAX
004A5E07  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5E09  8B CA                     MOV ECX,EDX
004A5E0B  89 8B C5 01 00 00         MOV dword ptr [EBX + 0x1c5],ECX
004A5E11  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5E14  89 93 C9 01 00 00         MOV dword ptr [EBX + 0x1c9],EDX
004A5E1A  E8 41 52 20 00            CALL 0x006ab060
004A5E1F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5E22  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5E25  EB 1A                     JMP 0x004a5e41
LAB_004a5e27:
004A5E27  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5E2E  C7 83 C5 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1c5],0xffffffff
004A5E38  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5E3B  89 93 C9 01 00 00         MOV dword ptr [EBX + 0x1c9],EDX
LAB_004a5e41:
004A5E41  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5E44  8B 91 DE 01 00 00         MOV EDX,dword ptr [ECX + 0x1de]
004A5E4A  03 C7                     ADD EAX,EDI
004A5E4C  85 D2                     TEST EDX,EDX
004A5E4E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5E51  74 48                     JZ 0x004a5e9b
004A5E53  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5E56  50                        PUSH EAX
004A5E57  52                        PUSH EDX
004A5E58  E8 C3 A1 20 00            CALL 0x006b0020
004A5E5D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5E60  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5E63  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5E66  8B F0                     MOV ESI,EAX
004A5E68  8B C1                     MOV EAX,ECX
004A5E6A  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5E6D  C1 E9 02                  SHR ECX,0x2
004A5E70  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5E72  8B C8                     MOV ECX,EAX
004A5E74  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5E77  83 E1 03                  AND ECX,0x3
004A5E7A  50                        PUSH EAX
004A5E7B  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5E7D  8B CA                     MOV ECX,EDX
004A5E7F  89 8B CD 01 00 00         MOV dword ptr [EBX + 0x1cd],ECX
004A5E85  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5E88  89 93 D1 01 00 00         MOV dword ptr [EBX + 0x1d1],EDX
004A5E8E  E8 CD 51 20 00            CALL 0x006ab060
004A5E93  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5E96  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5E99  EB 1A                     JMP 0x004a5eb5
LAB_004a5e9b:
004A5E9B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5EA2  C7 83 CD 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1cd],0xffffffff
004A5EAC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5EAF  89 93 D1 01 00 00         MOV dword ptr [EBX + 0x1d1],EDX
LAB_004a5eb5:
004A5EB5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5EB8  8B 91 0E 02 00 00         MOV EDX,dword ptr [ECX + 0x20e]
004A5EBE  03 C7                     ADD EAX,EDI
004A5EC0  85 D2                     TEST EDX,EDX
004A5EC2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5EC5  74 48                     JZ 0x004a5f0f
004A5EC7  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5ECA  50                        PUSH EAX
004A5ECB  52                        PUSH EDX
004A5ECC  E8 4F A1 20 00            CALL 0x006b0020
004A5ED1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5ED4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5ED7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5EDA  8B F0                     MOV ESI,EAX
004A5EDC  8B C1                     MOV EAX,ECX
004A5EDE  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5EE1  C1 E9 02                  SHR ECX,0x2
004A5EE4  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5EE6  8B C8                     MOV ECX,EAX
004A5EE8  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5EEB  83 E1 03                  AND ECX,0x3
004A5EEE  50                        PUSH EAX
004A5EEF  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5EF1  8B CA                     MOV ECX,EDX
004A5EF3  89 8B FD 01 00 00         MOV dword ptr [EBX + 0x1fd],ECX
004A5EF9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5EFC  89 93 01 02 00 00         MOV dword ptr [EBX + 0x201],EDX
004A5F02  E8 59 51 20 00            CALL 0x006ab060
004A5F07  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5F0A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5F0D  EB 1A                     JMP 0x004a5f29
LAB_004a5f0f:
004A5F0F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5F16  C7 83 FD 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1fd],0xffffffff
004A5F20  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5F23  89 93 01 02 00 00         MOV dword ptr [EBX + 0x201],EDX
LAB_004a5f29:
004A5F29  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004A5F2C  03 C6                     ADD EAX,ESI
004A5F2E  8B B1 1E 02 00 00         MOV ESI,dword ptr [ECX + 0x21e]
004A5F34  85 F6                     TEST ESI,ESI
004A5F36  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004A5F39  74 31                     JZ 0x004a5f6c
004A5F3B  8B 89 1A 02 00 00         MOV ECX,dword ptr [ECX + 0x21a]
004A5F41  8D 3C 18                  LEA EDI,[EAX + EBX*0x1]
004A5F44  C1 E1 03                  SHL ECX,0x3
004A5F47  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004A5F4A  8B D1                     MOV EDX,ECX
004A5F4C  C1 E9 02                  SHR ECX,0x2
004A5F4F  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5F51  8B CA                     MOV ECX,EDX
004A5F53  83 E1 03                  AND ECX,0x3
004A5F56  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5F58  89 83 11 02 00 00         MOV dword ptr [EBX + 0x211],EAX
004A5F5E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5F61  89 8B 15 02 00 00         MOV dword ptr [EBX + 0x215],ECX
004A5F67  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5F6A  EB 1A                     JMP 0x004a5f86
LAB_004a5f6c:
004A5F6C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5F73  C7 83 11 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x211],0xffffffff
004A5F7D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5F80  89 93 15 02 00 00         MOV dword ptr [EBX + 0x215],EDX
LAB_004a5f86:
004A5F86  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5F89  8B 91 26 02 00 00         MOV EDX,dword ptr [ECX + 0x226]
004A5F8F  03 C7                     ADD EAX,EDI
004A5F91  85 D2                     TEST EDX,EDX
004A5F93  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A5F96  74 48                     JZ 0x004a5fe0
004A5F98  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A5F9B  50                        PUSH EAX
004A5F9C  52                        PUSH EDX
004A5F9D  E8 7E A0 20 00            CALL 0x006b0020
004A5FA2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A5FA5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A5FA8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A5FAB  8B F0                     MOV ESI,EAX
004A5FAD  8B C1                     MOV EAX,ECX
004A5FAF  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A5FB2  C1 E9 02                  SHR ECX,0x2
004A5FB5  F3 A5                     MOVSD.REP ES:EDI,ESI
004A5FB7  8B C8                     MOV ECX,EAX
004A5FB9  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A5FBC  83 E1 03                  AND ECX,0x3
004A5FBF  50                        PUSH EAX
004A5FC0  F3 A4                     MOVSB.REP ES:EDI,ESI
004A5FC2  8B CA                     MOV ECX,EDX
004A5FC4  89 8B 1D 02 00 00         MOV dword ptr [EBX + 0x21d],ECX
004A5FCA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5FCD  89 93 21 02 00 00         MOV dword ptr [EBX + 0x221],EDX
004A5FD3  E8 88 50 20 00            CALL 0x006ab060
004A5FD8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A5FDB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A5FDE  EB 1A                     JMP 0x004a5ffa
LAB_004a5fe0:
004A5FE0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A5FE7  C7 83 1D 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x21d],0xffffffff
004A5FF1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A5FF4  89 93 21 02 00 00         MOV dword ptr [EBX + 0x221],EDX
LAB_004a5ffa:
004A5FFA  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A5FFD  8B 91 2A 02 00 00         MOV EDX,dword ptr [ECX + 0x22a]
004A6003  03 C7                     ADD EAX,EDI
004A6005  85 D2                     TEST EDX,EDX
004A6007  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A600A  74 48                     JZ 0x004a6054
004A600C  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A600F  50                        PUSH EAX
004A6010  52                        PUSH EDX
004A6011  E8 0A A0 20 00            CALL 0x006b0020
004A6016  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6019  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A601C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A601F  8B F0                     MOV ESI,EAX
004A6021  8B C1                     MOV EAX,ECX
004A6023  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A6026  C1 E9 02                  SHR ECX,0x2
004A6029  F3 A5                     MOVSD.REP ES:EDI,ESI
004A602B  8B C8                     MOV ECX,EAX
004A602D  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A6030  83 E1 03                  AND ECX,0x3
004A6033  50                        PUSH EAX
004A6034  F3 A4                     MOVSB.REP ES:EDI,ESI
004A6036  8B CA                     MOV ECX,EDX
004A6038  89 8B 25 02 00 00         MOV dword ptr [EBX + 0x225],ECX
004A603E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6041  89 93 29 02 00 00         MOV dword ptr [EBX + 0x229],EDX
004A6047  E8 14 50 20 00            CALL 0x006ab060
004A604C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A604F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A6052  EB 1A                     JMP 0x004a606e
LAB_004a6054:
004A6054  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A605B  C7 83 25 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x225],0xffffffff
004A6065  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6068  89 93 29 02 00 00         MOV dword ptr [EBX + 0x229],EDX
LAB_004a606e:
004A606E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A6071  8B 91 2E 02 00 00         MOV EDX,dword ptr [ECX + 0x22e]
004A6077  03 C7                     ADD EAX,EDI
004A6079  85 D2                     TEST EDX,EDX
004A607B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A607E  74 48                     JZ 0x004a60c8
004A6080  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A6083  50                        PUSH EAX
004A6084  52                        PUSH EDX
004A6085  E8 96 9F 20 00            CALL 0x006b0020
004A608A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A608D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A6090  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A6093  8B F0                     MOV ESI,EAX
004A6095  8B C1                     MOV EAX,ECX
004A6097  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A609A  C1 E9 02                  SHR ECX,0x2
004A609D  F3 A5                     MOVSD.REP ES:EDI,ESI
004A609F  8B C8                     MOV ECX,EAX
004A60A1  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A60A4  83 E1 03                  AND ECX,0x3
004A60A7  50                        PUSH EAX
004A60A8  F3 A4                     MOVSB.REP ES:EDI,ESI
004A60AA  8B CA                     MOV ECX,EDX
004A60AC  89 8B 2D 02 00 00         MOV dword ptr [EBX + 0x22d],ECX
004A60B2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A60B5  89 93 31 02 00 00         MOV dword ptr [EBX + 0x231],EDX
004A60BB  E8 A0 4F 20 00            CALL 0x006ab060
004A60C0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A60C3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A60C6  EB 1A                     JMP 0x004a60e2
LAB_004a60c8:
004A60C8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A60CF  C7 83 2D 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x22d],0xffffffff
004A60D9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A60DC  89 93 31 02 00 00         MOV dword ptr [EBX + 0x231],EDX
LAB_004a60e2:
004A60E2  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A60E5  8B 91 4E 02 00 00         MOV EDX,dword ptr [ECX + 0x24e]
004A60EB  03 C7                     ADD EAX,EDI
004A60ED  85 D2                     TEST EDX,EDX
004A60EF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A60F2  74 48                     JZ 0x004a613c
004A60F4  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A60F7  50                        PUSH EAX
004A60F8  52                        PUSH EDX
004A60F9  E8 22 9F 20 00            CALL 0x006b0020
004A60FE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6101  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A6104  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A6107  8B F0                     MOV ESI,EAX
004A6109  8B C1                     MOV EAX,ECX
004A610B  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A610E  C1 E9 02                  SHR ECX,0x2
004A6111  F3 A5                     MOVSD.REP ES:EDI,ESI
004A6113  8B C8                     MOV ECX,EAX
004A6115  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A6118  83 E1 03                  AND ECX,0x3
004A611B  50                        PUSH EAX
004A611C  F3 A4                     MOVSB.REP ES:EDI,ESI
004A611E  8B CA                     MOV ECX,EDX
004A6120  89 8B 51 02 00 00         MOV dword ptr [EBX + 0x251],ECX
004A6126  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6129  89 93 55 02 00 00         MOV dword ptr [EBX + 0x255],EDX
004A612F  E8 2C 4F 20 00            CALL 0x006ab060
004A6134  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A6137  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A613A  EB 1A                     JMP 0x004a6156
LAB_004a613c:
004A613C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A6143  C7 83 51 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x251],0xffffffff
004A614D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6150  89 93 55 02 00 00         MOV dword ptr [EBX + 0x255],EDX
LAB_004a6156:
004A6156  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A6159  8B 91 66 02 00 00         MOV EDX,dword ptr [ECX + 0x266]
004A615F  03 C7                     ADD EAX,EDI
004A6161  85 D2                     TEST EDX,EDX
004A6163  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A6166  74 48                     JZ 0x004a61b0
004A6168  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A616B  50                        PUSH EAX
004A616C  52                        PUSH EDX
004A616D  E8 AE 9E 20 00            CALL 0x006b0020
004A6172  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6175  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A6178  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A617B  8B F0                     MOV ESI,EAX
004A617D  8B C1                     MOV EAX,ECX
004A617F  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A6182  C1 E9 02                  SHR ECX,0x2
004A6185  F3 A5                     MOVSD.REP ES:EDI,ESI
004A6187  8B C8                     MOV ECX,EAX
004A6189  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A618C  83 E1 03                  AND ECX,0x3
004A618F  50                        PUSH EAX
004A6190  F3 A4                     MOVSB.REP ES:EDI,ESI
004A6192  8B CA                     MOV ECX,EDX
004A6194  89 8B 6D 02 00 00         MOV dword ptr [EBX + 0x26d],ECX
004A619A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A619D  89 93 71 02 00 00         MOV dword ptr [EBX + 0x271],EDX
004A61A3  E8 B8 4E 20 00            CALL 0x006ab060
004A61A8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A61AB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A61AE  EB 1A                     JMP 0x004a61ca
LAB_004a61b0:
004A61B0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A61B7  C7 83 6D 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x26d],0xffffffff
004A61C1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A61C4  89 93 71 02 00 00         MOV dword ptr [EBX + 0x271],EDX
LAB_004a61ca:
004A61CA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A61CD  8B 89 9F 02 00 00         MOV ECX,dword ptr [ECX + 0x29f]
004A61D3  03 C2                     ADD EAX,EDX
004A61D5  85 C9                     TEST ECX,ECX
004A61D7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A61DA  74 54                     JZ 0x004a6230
004A61DC  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A61DF  50                        PUSH EAX
004A61E0  51                        PUSH ECX
004A61E1  E8 3A 9E 20 00            CALL 0x006b0020
004A61E6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A61E9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A61EC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A61EF  8B F0                     MOV ESI,EAX
004A61F1  8B C1                     MOV EAX,ECX
004A61F3  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004A61F6  C1 E9 02                  SHR ECX,0x2
004A61F9  F3 A5                     MOVSD.REP ES:EDI,ESI
004A61FB  8B C8                     MOV ECX,EAX
004A61FD  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A6200  83 E1 03                  AND ECX,0x3
004A6203  50                        PUSH EAX
004A6204  F3 A4                     MOVSB.REP ES:EDI,ESI
004A6206  8B CA                     MOV ECX,EDX
004A6208  89 8B AA 02 00 00         MOV dword ptr [EBX + 0x2aa],ECX
004A620E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6211  89 93 AE 02 00 00         MOV dword ptr [EBX + 0x2ae],EDX
004A6217  E8 44 4E 20 00            CALL 0x006ab060
004A621C  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
004A621F  8B C3                     MOV EAX,EBX
004A6221  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A6227  5F                        POP EDI
004A6228  5E                        POP ESI
004A6229  5B                        POP EBX
004A622A  8B E5                     MOV ESP,EBP
004A622C  5D                        POP EBP
004A622D  C2 04 00                  RET 0x4
LAB_004a6230:
004A6230  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A6237  C7 83 AA 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x2aa],0xffffffff
004A6241  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6244  8B C3                     MOV EAX,EBX
004A6246  89 8B AE 02 00 00         MOV dword ptr [EBX + 0x2ae],ECX
004A624C  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
004A624F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A6255  5F                        POP EDI
004A6256  5E                        POP ESI
004A6257  5B                        POP EBX
004A6258  8B E5                     MOV ESP,EBP
004A625A  5D                        POP EBP
004A625B  C2 04 00                  RET 0x4
LAB_004a625e:
004A625E  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004A6261  68 D4 C3 7A 00            PUSH 0x7ac3d4
004A6266  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A626B  56                        PUSH ESI
004A626C  6A 00                     PUSH 0x0
004A626E  68 95 14 00 00            PUSH 0x1495
004A6273  68 3C BE 7A 00            PUSH 0x7abe3c
004A6278  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A627D  E8 4E 72 20 00            CALL 0x006ad4d0
004A6282  83 C4 18                  ADD ESP,0x18
004A6285  85 C0                     TEST EAX,EAX
004A6287  74 01                     JZ 0x004a628a
004A6289  CC                        INT3
LAB_004a628a:
004A628A  68 96 14 00 00            PUSH 0x1496
004A628F  68 3C BE 7A 00            PUSH 0x7abe3c
004A6294  6A 00                     PUSH 0x0
004A6296  56                        PUSH ESI
004A6297  E8 A4 FB 1F 00            CALL 0x006a5e40
004A629C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004A629F  5F                        POP EDI
004A62A0  5E                        POP ESI
004A62A1  5B                        POP EBX
004A62A2  8B E5                     MOV ESP,EBP
004A62A4  5D                        POP EBP
004A62A5  C2 04 00                  RET 0x4
