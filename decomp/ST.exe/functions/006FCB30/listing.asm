FUN_006fcb30:
006FCB30  55                        PUSH EBP
006FCB31  8B EC                     MOV EBP,ESP
006FCB33  83 EC 14                  SUB ESP,0x14
006FCB36  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006FCB39  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FCB3C  C1 F8 03                  SAR EAX,0x3
006FCB3F  03 C8                     ADD ECX,EAX
006FCB41  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FCB44  48                        DEC EAX
006FCB45  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FCB4F  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006FCB52  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FCB55  0F 88 82 08 00 00         JS 0x006fd3dd
006FCB5B  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006FCB5E  53                        PUSH EBX
006FCB5F  56                        PUSH ESI
006FCB60  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006FCB63  57                        PUSH EDI
006FCB64  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FCB67  EB 03                     JMP 0x006fcb6c
LAB_006fcb69:
006FCB69  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
LAB_006fcb6c:
006FCB6C  F6 C2 01                  TEST DL,0x1
006FCB6F  75 4E                     JNZ 0x006fcbbf
LAB_006fcb71:
006FCB71  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FCB74  48                        DEC EAX
006FCB75  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FCB78  78 42                     JS 0x006fcbbc
006FCB7A  33 C0                     XOR EAX,EAX
006FCB7C  8A 07                     MOV AL,byte ptr [EDI]
006FCB7E  47                        INC EDI
006FCB7F  85 C0                     TEST EAX,EAX
006FCB81  74 2C                     JZ 0x006fcbaf
006FCB83  8B CE                     MOV ECX,ESI
LAB_006fcb85:
006FCB85  A8 80                     TEST AL,0x80
006FCB87  74 16                     JZ 0x006fcb9f
006FCB89  A8 40                     TEST AL,0x40
006FCB8B  74 06                     JZ 0x006fcb93
006FCB8D  47                        INC EDI
006FCB8E  83 E0 3F                  AND EAX,0x3f
006FCB91  EB 0F                     JMP 0x006fcba2
LAB_006fcb93:
006FCB93  8B D8                     MOV EBX,EAX
006FCB95  83 E3 3F                  AND EBX,0x3f
006FCB98  03 FB                     ADD EDI,EBX
006FCB9A  83 E0 3F                  AND EAX,0x3f
006FCB9D  EB 03                     JMP 0x006fcba2
LAB_006fcb9f:
006FCB9F  83 E0 7F                  AND EAX,0x7f
LAB_006fcba2:
006FCBA2  2B C8                     SUB ECX,EAX
006FCBA4  85 C9                     TEST ECX,ECX
006FCBA6  7E 07                     JLE 0x006fcbaf
006FCBA8  33 C0                     XOR EAX,EAX
006FCBAA  8A 07                     MOV AL,byte ptr [EDI]
006FCBAC  47                        INC EDI
006FCBAD  EB D6                     JMP 0x006fcb85
LAB_006fcbaf:
006FCBAF  42                        INC EDX
006FCBB0  83 FA 04                  CMP EDX,0x4
006FCBB3  7E 02                     JLE 0x006fcbb7
006FCBB5  33 D2                     XOR EDX,EDX
LAB_006fcbb7:
006FCBB7  F6 C2 01                  TEST DL,0x1
006FCBBA  74 B5                     JZ 0x006fcb71
LAB_006fcbbc:
006FCBBC  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006fcbbf:
006FCBBF  33 DB                     XOR EBX,EBX
006FCBC1  8A 1F                     MOV BL,byte ptr [EDI]
006FCBC3  47                        INC EDI
006FCBC4  85 DB                     TEST EBX,EBX
006FCBC6  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FCBC9  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCBCC  0F 84 CC 07 00 00         JZ 0x006fd39e
006FCBD2  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FCBD5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FCBD8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FCBDB  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006FCBDE  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006FCBE1  83 E1 07                  AND ECX,0x7
006FCBE4  BA 80 00 00 00            MOV EDX,0x80
006FCBE9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006FCBEC  D3 FA                     SAR EDX,CL
006FCBEE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006FCBF1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FCBF4  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
LAB_006fcbf7:
006FCBF7  F6 C3 80                  TEST BL,0x80
006FCBFA  8B C3                     MOV EAX,EBX
006FCBFC  74 21                     JZ 0x006fcc1f
006FCBFE  83 E0 3F                  AND EAX,0x3f
006FCC01  3B C6                     CMP EAX,ESI
006FCC03  7F 2A                     JG 0x006fcc2f
006FCC05  F6 C3 40                  TEST BL,0x40
006FCC08  74 0A                     JZ 0x006fcc14
006FCC0A  47                        INC EDI
006FCC0B  33 DB                     XOR EBX,EBX
006FCC0D  2B F0                     SUB ESI,EAX
006FCC0F  8A 1F                     MOV BL,byte ptr [EDI]
006FCC11  47                        INC EDI
006FCC12  EB E3                     JMP 0x006fcbf7
LAB_006fcc14:
006FCC14  03 F8                     ADD EDI,EAX
006FCC16  33 DB                     XOR EBX,EBX
006FCC18  2B F0                     SUB ESI,EAX
006FCC1A  8A 1F                     MOV BL,byte ptr [EDI]
006FCC1C  47                        INC EDI
006FCC1D  EB D8                     JMP 0x006fcbf7
LAB_006fcc1f:
006FCC1F  83 E0 7F                  AND EAX,0x7f
006FCC22  3B C6                     CMP EAX,ESI
006FCC24  7F 09                     JG 0x006fcc2f
006FCC26  33 DB                     XOR EBX,EBX
006FCC28  2B F0                     SUB ESI,EAX
006FCC2A  8A 1F                     MOV BL,byte ptr [EDI]
006FCC2C  47                        INC EDI
006FCC2D  EB C8                     JMP 0x006fcbf7
LAB_006fcc2f:
006FCC2F  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FCC32  81 E3 C0 00 00 00         AND EBX,0xc0
006FCC38  2B C6                     SUB EAX,ESI
006FCC3A  80 FB 80                  CMP BL,0x80
006FCC3D  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCC40  75 05                     JNZ 0x006fcc47
006FCC42  03 FE                     ADD EDI,ESI
006FCC44  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006fcc47:
006FCC47  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FCC4A  3B C6                     CMP EAX,ESI
006FCC4C  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006FCC4F  0F 8F CD 03 00 00         JG 0x006fd022
006FCC55  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FCC58  81 E6 80 00 00 00         AND ESI,0x80
LAB_006fcc5e:
006FCC5E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FCC61  2B D8                     SUB EBX,EAX
006FCC63  85 F6                     TEST ESI,ESI
006FCC65  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006FCC68  0F 84 69 03 00 00         JZ 0x006fcfd7
006FCC6E  F6 45 EC 40               TEST byte ptr [EBP + -0x14],0x40
006FCC72  0F 84 9D 01 00 00         JZ 0x006fce15
006FCC78  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FCC7B  33 DB                     XOR EBX,EBX
006FCC7D  8B FE                     MOV EDI,ESI
006FCC7F  8A 1E                     MOV BL,byte ptr [ESI]
006FCC81  47                        INC EDI
006FCC82  85 C9                     TEST ECX,ECX
006FCC84  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCC87  0F 8E B5 00 00 00         JLE 0x006fcd42
006FCC8D  8D 71 FF                  LEA ESI,[ECX + -0x1]
006FCC90  83 FE 03                  CMP ESI,0x3
006FCC93  0F 87 A9 00 00 00         JA 0x006fcd42
switchD_006fcc99::switchD:
006FCC99  FF 24 B5 E4 D3 6F 00      JMP dword ptr [ESI*0x4 + 0x6fd3e4]
switchD_006fcc99::caseD_1:
006FCCA0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCCA3  84 11                     TEST byte ptr [ECX],DL
006FCCA5  75 14                     JNZ 0x006fccbb
006FCCA7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FCCAA  33 C9                     XOR ECX,ECX
006FCCAC  66 8B 0E                  MOV CX,word ptr [ESI]
006FCCAF  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FCCB2  3B F1                     CMP ESI,ECX
006FCCB4  77 05                     JA 0x006fccbb
006FCCB6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FCCB9  88 19                     MOV byte ptr [ECX],BL
LAB_006fccbb:
006FCCBB  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FCCBE  B9 02 00 00 00            MOV ECX,0x2
006FCCC3  03 F1                     ADD ESI,ECX
006FCCC5  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FCCC8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCCCB  46                        INC ESI
006FCCCC  D1 EA                     SHR EDX,0x1
006FCCCE  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FCCD1  75 0C                     JNZ 0x006fccdf
006FCCD3  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FCCD6  BA 80 00 00 00            MOV EDX,0x80
006FCCDB  46                        INC ESI
006FCCDC  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006fccdf:
006FCCDF  48                        DEC EAX
006FCCE0  85 C0                     TEST EAX,EAX
006FCCE2  0F 8E CC 02 00 00         JLE 0x006fcfb4
switchD_006fcc99::caseD_2:
006FCCE8  48                        DEC EAX
006FCCE9  B9 03 00 00 00            MOV ECX,0x3
006FCCEE  85 C0                     TEST EAX,EAX
006FCCF0  0F 8E BE 02 00 00         JLE 0x006fcfb4
switchD_006fcc99::caseD_3:
006FCCF6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCCF9  84 11                     TEST byte ptr [ECX],DL
006FCCFB  75 14                     JNZ 0x006fcd11
006FCCFD  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FCD00  33 C9                     XOR ECX,ECX
006FCD02  66 8B 0E                  MOV CX,word ptr [ESI]
006FCD05  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FCD08  3B F1                     CMP ESI,ECX
006FCD0A  77 05                     JA 0x006fcd11
006FCD0C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FCD0F  88 19                     MOV byte ptr [ECX],BL
LAB_006fcd11:
006FCD11  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FCD14  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCD17  83 C1 02                  ADD ECX,0x2
006FCD1A  46                        INC ESI
006FCD1B  D1 EA                     SHR EDX,0x1
006FCD1D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FCD20  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FCD23  75 0C                     JNZ 0x006fcd31
006FCD25  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCD28  BA 80 00 00 00            MOV EDX,0x80
006FCD2D  41                        INC ECX
006FCD2E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fcd31:
006FCD31  48                        DEC EAX
006FCD32  B9 04 00 00 00            MOV ECX,0x4
006FCD37  85 C0                     TEST EAX,EAX
006FCD39  0F 8E 75 02 00 00         JLE 0x006fcfb4
switchD_006fcc99::caseD_4:
006FCD3F  33 C9                     XOR ECX,ECX
006FCD41  48                        DEC EAX
switchD_006fcc99::default:
006FCD42  85 C0                     TEST EAX,EAX
006FCD44  0F 8E 6A 02 00 00         JLE 0x006fcfb4
006FCD4A  48                        DEC EAX
006FCD4B  B9 01 00 00 00            MOV ECX,0x1
006FCD50  85 C0                     TEST EAX,EAX
006FCD52  0F 8E 5C 02 00 00         JLE 0x006fcfb4
LAB_006fcd58:
006FCD58  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCD5B  84 11                     TEST byte ptr [ECX],DL
006FCD5D  75 14                     JNZ 0x006fcd73
006FCD5F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FCD62  33 C9                     XOR ECX,ECX
006FCD64  66 8B 0E                  MOV CX,word ptr [ESI]
006FCD67  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FCD6A  3B F1                     CMP ESI,ECX
006FCD6C  77 05                     JA 0x006fcd73
006FCD6E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FCD71  88 19                     MOV byte ptr [ECX],BL
LAB_006fcd73:
006FCD73  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FCD76  B9 02 00 00 00            MOV ECX,0x2
006FCD7B  03 F1                     ADD ESI,ECX
006FCD7D  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FCD80  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCD83  46                        INC ESI
006FCD84  D1 EA                     SHR EDX,0x1
006FCD86  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FCD89  75 0C                     JNZ 0x006fcd97
006FCD8B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FCD8E  BA 80 00 00 00            MOV EDX,0x80
006FCD93  46                        INC ESI
006FCD94  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006fcd97:
006FCD97  48                        DEC EAX
006FCD98  85 C0                     TEST EAX,EAX
006FCD9A  0F 8E 14 02 00 00         JLE 0x006fcfb4
006FCDA0  48                        DEC EAX
006FCDA1  B9 03 00 00 00            MOV ECX,0x3
006FCDA6  85 C0                     TEST EAX,EAX
006FCDA8  0F 8E 06 02 00 00         JLE 0x006fcfb4
006FCDAE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCDB1  84 11                     TEST byte ptr [ECX],DL
006FCDB3  75 14                     JNZ 0x006fcdc9
006FCDB5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FCDB8  33 C9                     XOR ECX,ECX
006FCDBA  66 8B 0E                  MOV CX,word ptr [ESI]
006FCDBD  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FCDC0  3B F1                     CMP ESI,ECX
006FCDC2  77 05                     JA 0x006fcdc9
006FCDC4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FCDC7  88 19                     MOV byte ptr [ECX],BL
LAB_006fcdc9:
006FCDC9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FCDCC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCDCF  83 C1 02                  ADD ECX,0x2
006FCDD2  46                        INC ESI
006FCDD3  D1 EA                     SHR EDX,0x1
006FCDD5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FCDD8  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FCDDB  75 0C                     JNZ 0x006fcde9
006FCDDD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCDE0  BA 80 00 00 00            MOV EDX,0x80
006FCDE5  41                        INC ECX
006FCDE6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fcde9:
006FCDE9  48                        DEC EAX
006FCDEA  B9 04 00 00 00            MOV ECX,0x4
006FCDEF  85 C0                     TEST EAX,EAX
006FCDF1  0F 8E BD 01 00 00         JLE 0x006fcfb4
006FCDF7  33 C9                     XOR ECX,ECX
006FCDF9  48                        DEC EAX
006FCDFA  85 C0                     TEST EAX,EAX
006FCDFC  0F 8E B2 01 00 00         JLE 0x006fcfb4
006FCE02  48                        DEC EAX
006FCE03  B9 01 00 00 00            MOV ECX,0x1
006FCE08  85 C0                     TEST EAX,EAX
006FCE0A  0F 8F 48 FF FF FF         JG 0x006fcd58
006FCE10  E9 9F 01 00 00            JMP 0x006fcfb4
LAB_006fce15:
006FCE15  85 C9                     TEST ECX,ECX
006FCE17  0F 8E E4 00 00 00         JLE 0x006fcf01
006FCE1D  8D 71 FF                  LEA ESI,[ECX + -0x1]
006FCE20  83 FE 03                  CMP ESI,0x3
006FCE23  0F 87 D8 00 00 00         JA 0x006fcf01
switchD_006fce29::switchD:
006FCE29  FF 24 B5 F4 D3 6F 00      JMP dword ptr [ESI*0x4 + 0x6fd3f4]
switchD_006fce29::caseD_1:
006FCE30  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCE33  84 11                     TEST byte ptr [ECX],DL
006FCE35  75 18                     JNZ 0x006fce4f
006FCE37  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FCE3A  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FCE3D  33 C9                     XOR ECX,ECX
006FCE3F  66 8B 0B                  MOV CX,word ptr [EBX]
006FCE42  3B F1                     CMP ESI,ECX
006FCE44  77 11                     JA 0x006fce57
006FCE46  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCE49  8A 0F                     MOV CL,byte ptr [EDI]
006FCE4B  88 0E                     MOV byte ptr [ESI],CL
006FCE4D  EB 0B                     JMP 0x006fce5a
LAB_006fce4f:
006FCE4F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCE52  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FCE55  EB 03                     JMP 0x006fce5a
LAB_006fce57:
006FCE57  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006fce5a:
006FCE5A  83 C3 02                  ADD EBX,0x2
006FCE5D  46                        INC ESI
006FCE5E  D1 EA                     SHR EDX,0x1
006FCE60  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FCE63  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FCE66  75 0C                     JNZ 0x006fce74
006FCE68  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCE6B  BA 80 00 00 00            MOV EDX,0x80
006FCE70  41                        INC ECX
006FCE71  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fce74:
006FCE74  47                        INC EDI
006FCE75  48                        DEC EAX
006FCE76  85 C0                     TEST EAX,EAX
006FCE78  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCE7B  B9 02 00 00 00            MOV ECX,0x2
006FCE80  0F 8E 2E 01 00 00         JLE 0x006fcfb4
006FCE86  EB 06                     JMP 0x006fce8e
switchD_006fce29::caseD_2:
006FCE88  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCE8B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006fce8e:
006FCE8E  47                        INC EDI
006FCE8F  48                        DEC EAX
006FCE90  85 C0                     TEST EAX,EAX
006FCE92  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCE95  B9 03 00 00 00            MOV ECX,0x3
006FCE9A  0F 8E 14 01 00 00         JLE 0x006fcfb4
006FCEA0  EB 06                     JMP 0x006fcea8
switchD_006fce29::caseD_3:
006FCEA2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCEA5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006fcea8:
006FCEA8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCEAB  84 11                     TEST byte ptr [ECX],DL
006FCEAD  75 0E                     JNZ 0x006fcebd
006FCEAF  33 C9                     XOR ECX,ECX
006FCEB1  66 8B 0B                  MOV CX,word ptr [EBX]
006FCEB4  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
006FCEB7  77 04                     JA 0x006fcebd
006FCEB9  8A 0F                     MOV CL,byte ptr [EDI]
006FCEBB  88 0E                     MOV byte ptr [ESI],CL
LAB_006fcebd:
006FCEBD  83 C3 02                  ADD EBX,0x2
006FCEC0  46                        INC ESI
006FCEC1  D1 EA                     SHR EDX,0x1
006FCEC3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FCEC6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FCEC9  75 0C                     JNZ 0x006fced7
006FCECB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCECE  BA 80 00 00 00            MOV EDX,0x80
006FCED3  41                        INC ECX
006FCED4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fced7:
006FCED7  47                        INC EDI
006FCED8  48                        DEC EAX
006FCED9  85 C0                     TEST EAX,EAX
006FCEDB  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCEDE  B9 04 00 00 00            MOV ECX,0x4
006FCEE3  0F 8E CB 00 00 00         JLE 0x006fcfb4
006FCEE9  47                        INC EDI
006FCEEA  33 C9                     XOR ECX,ECX
006FCEEC  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCEEF  48                        DEC EAX
006FCEF0  EB 15                     JMP 0x006fcf07
switchD_006fce29::caseD_4:
006FCEF2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCEF5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FCEF8  47                        INC EDI
006FCEF9  33 C9                     XOR ECX,ECX
006FCEFB  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCEFE  48                        DEC EAX
006FCEFF  EB 06                     JMP 0x006fcf07
LAB_006fcf01:
006FCF01  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FCF04  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
switchD_006fce29::default:
006FCF07  85 C0                     TEST EAX,EAX
006FCF09  0F 8E A5 00 00 00         JLE 0x006fcfb4
006FCF0F  47                        INC EDI
006FCF10  48                        DEC EAX
006FCF11  85 C0                     TEST EAX,EAX
006FCF13  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCF16  B9 01 00 00 00            MOV ECX,0x1
006FCF1B  0F 8E 93 00 00 00         JLE 0x006fcfb4
LAB_006fcf21:
006FCF21  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCF24  84 11                     TEST byte ptr [ECX],DL
006FCF26  75 0E                     JNZ 0x006fcf36
006FCF28  33 C9                     XOR ECX,ECX
006FCF2A  66 8B 0B                  MOV CX,word ptr [EBX]
006FCF2D  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
006FCF30  77 04                     JA 0x006fcf36
006FCF32  8A 0F                     MOV CL,byte ptr [EDI]
006FCF34  88 0E                     MOV byte ptr [ESI],CL
LAB_006fcf36:
006FCF36  83 C3 02                  ADD EBX,0x2
006FCF39  46                        INC ESI
006FCF3A  D1 EA                     SHR EDX,0x1
006FCF3C  75 0C                     JNZ 0x006fcf4a
006FCF3E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCF41  BA 80 00 00 00            MOV EDX,0x80
006FCF46  41                        INC ECX
006FCF47  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fcf4a:
006FCF4A  47                        INC EDI
006FCF4B  48                        DEC EAX
006FCF4C  85 C0                     TEST EAX,EAX
006FCF4E  B9 02 00 00 00            MOV ECX,0x2
006FCF53  7E 56                     JLE 0x006fcfab
006FCF55  47                        INC EDI
006FCF56  48                        DEC EAX
006FCF57  85 C0                     TEST EAX,EAX
006FCF59  B9 03 00 00 00            MOV ECX,0x3
006FCF5E  7E 4B                     JLE 0x006fcfab
006FCF60  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCF63  84 11                     TEST byte ptr [ECX],DL
006FCF65  75 0E                     JNZ 0x006fcf75
006FCF67  33 C9                     XOR ECX,ECX
006FCF69  66 8B 0B                  MOV CX,word ptr [EBX]
006FCF6C  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
006FCF6F  77 04                     JA 0x006fcf75
006FCF71  8A 0F                     MOV CL,byte ptr [EDI]
006FCF73  88 0E                     MOV byte ptr [ESI],CL
LAB_006fcf75:
006FCF75  83 C3 02                  ADD EBX,0x2
006FCF78  46                        INC ESI
006FCF79  D1 EA                     SHR EDX,0x1
006FCF7B  75 0C                     JNZ 0x006fcf89
006FCF7D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FCF80  BA 80 00 00 00            MOV EDX,0x80
006FCF85  41                        INC ECX
006FCF86  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fcf89:
006FCF89  47                        INC EDI
006FCF8A  48                        DEC EAX
006FCF8B  85 C0                     TEST EAX,EAX
006FCF8D  B9 04 00 00 00            MOV ECX,0x4
006FCF92  7E 17                     JLE 0x006fcfab
006FCF94  47                        INC EDI
006FCF95  33 C9                     XOR ECX,ECX
006FCF97  48                        DEC EAX
006FCF98  85 C0                     TEST EAX,EAX
006FCF9A  7E 0F                     JLE 0x006fcfab
006FCF9C  47                        INC EDI
006FCF9D  48                        DEC EAX
006FCF9E  85 C0                     TEST EAX,EAX
006FCFA0  B9 01 00 00 00            MOV ECX,0x1
006FCFA5  0F 8F 76 FF FF FF         JG 0x006fcf21
LAB_006fcfab:
006FCFAB  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCFAE  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FCFB1  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006fcfb4:
006FCFB4  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FCFB7  85 DB                     TEST EBX,EBX
006FCFB9  7E 65                     JLE 0x006fd020
006FCFBB  33 C0                     XOR EAX,EAX
006FCFBD  8A 07                     MOV AL,byte ptr [EDI]
006FCFBF  8B F0                     MOV ESI,EAX
006FCFC1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006FCFC4  81 E6 80 00 00 00         AND ESI,0x80
006FCFCA  47                        INC EDI
006FCFCB  85 F6                     TEST ESI,ESI
006FCFCD  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FCFD0  74 41                     JZ 0x006fd013
006FCFD2  83 E0 3F                  AND EAX,0x3f
006FCFD5  EB 3F                     JMP 0x006fd016
LAB_006fcfd7:
006FCFD7  48                        DEC EAX
006FCFD8  78 DA                     JS 0x006fcfb4
006FCFDA  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006fcfdd:
006FCFDD  8B C1                     MOV EAX,ECX
006FCFDF  83 E0 01                  AND EAX,0x1
006FCFE2  3C 01                     CMP AL,0x1
006FCFE4  75 20                     JNZ 0x006fd006
006FCFE6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006FCFE9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FCFEC  40                        INC EAX
006FCFED  83 C3 02                  ADD EBX,0x2
006FCFF0  D1 EA                     SHR EDX,0x1
006FCFF2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006FCFF5  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FCFF8  75 0C                     JNZ 0x006fd006
006FCFFA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006FCFFD  BA 80 00 00 00            MOV EDX,0x80
006FD002  40                        INC EAX
006FD003  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006fd006:
006FD006  41                        INC ECX
006FD007  83 F9 04                  CMP ECX,0x4
006FD00A  7E 02                     JLE 0x006fd00e
006FD00C  33 C9                     XOR ECX,ECX
LAB_006fd00e:
006FD00E  4E                        DEC ESI
006FD00F  75 CC                     JNZ 0x006fcfdd
006FD011  EB A1                     JMP 0x006fcfb4
LAB_006fd013:
006FD013  83 E0 7F                  AND EAX,0x7f
LAB_006fd016:
006FD016  3B C3                     CMP EAX,EBX
006FD018  0F 8E 40 FC FF FF         JLE 0x006fcc5e
006FD01E  EB 02                     JMP 0x006fd022
LAB_006fd020:
006FD020  33 C0                     XOR EAX,EAX
LAB_006fd022:
006FD022  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FD025  2B C6                     SUB EAX,ESI
006FD027  85 F6                     TEST ESI,ESI
006FD029  0F 8E 1C 03 00 00         JLE 0x006fd34b
006FD02F  8A 5D EC                  MOV BL,byte ptr [EBP + -0x14]
006FD032  F6 C3 80                  TEST BL,0x80
006FD035  0F 84 10 03 00 00         JZ 0x006fd34b
006FD03B  F6 C3 40                  TEST BL,0x40
006FD03E  0F 84 8D 01 00 00         JZ 0x006fd1d1
006FD044  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FD047  33 DB                     XOR EBX,EBX
006FD049  8B FE                     MOV EDI,ESI
006FD04B  8A 1E                     MOV BL,byte ptr [ESI]
006FD04D  47                        INC EDI
006FD04E  85 C9                     TEST ECX,ECX
006FD050  0F 8E BE 00 00 00         JLE 0x006fd114
006FD056  49                        DEC ECX
006FD057  83 F9 03                  CMP ECX,0x3
006FD05A  0F 87 B4 00 00 00         JA 0x006fd114
switchD_006fd060::switchD:
006FD060  FF 24 8D 04 D4 6F 00      JMP dword ptr [ECX*0x4 + 0x6fd404]
switchD_006fd060::caseD_1:
006FD067  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD06A  84 11                     TEST byte ptr [ECX],DL
006FD06C  75 14                     JNZ 0x006fd082
006FD06E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD071  33 C9                     XOR ECX,ECX
006FD073  66 8B 0E                  MOV CX,word ptr [ESI]
006FD076  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FD079  3B F1                     CMP ESI,ECX
006FD07B  77 05                     JA 0x006fd082
006FD07D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FD080  88 19                     MOV byte ptr [ECX],BL
LAB_006fd082:
006FD082  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FD085  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FD088  83 C1 02                  ADD ECX,0x2
006FD08B  46                        INC ESI
006FD08C  D1 EA                     SHR EDX,0x1
006FD08E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FD091  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FD094  75 0C                     JNZ 0x006fd0a2
006FD096  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD099  BA 80 00 00 00            MOV EDX,0x80
006FD09E  41                        INC ECX
006FD09F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fd0a2:
006FD0A2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FD0A5  49                        DEC ECX
006FD0A6  85 C9                     TEST ECX,ECX
006FD0A8  0F 8E 9D 02 00 00         JLE 0x006fd34b
006FD0AE  EB 03                     JMP 0x006fd0b3
switchD_006fd060::caseD_2:
006FD0B0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_006fd0b3:
006FD0B3  49                        DEC ECX
006FD0B4  85 C9                     TEST ECX,ECX
006FD0B6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FD0B9  0F 8E 8C 02 00 00         JLE 0x006fd34b
006FD0BF  EB 03                     JMP 0x006fd0c4
switchD_006fd060::caseD_3:
006FD0C1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_006fd0c4:
006FD0C4  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FD0C7  84 16                     TEST byte ptr [ESI],DL
006FD0C9  75 17                     JNZ 0x006fd0e2
006FD0CB  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD0CE  33 C9                     XOR ECX,ECX
006FD0D0  66 8B 0E                  MOV CX,word ptr [ESI]
006FD0D3  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FD0D6  3B F1                     CMP ESI,ECX
006FD0D8  77 05                     JA 0x006fd0df
006FD0DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FD0DD  88 19                     MOV byte ptr [ECX],BL
LAB_006fd0df:
006FD0DF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_006fd0e2:
006FD0E2  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD0E5  83 C6 02                  ADD ESI,0x2
006FD0E8  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FD0EB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FD0EE  46                        INC ESI
006FD0EF  D1 EA                     SHR EDX,0x1
006FD0F1  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FD0F4  75 0C                     JNZ 0x006fd102
006FD0F6  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FD0F9  BA 80 00 00 00            MOV EDX,0x80
006FD0FE  46                        INC ESI
006FD0FF  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006fd102:
006FD102  49                        DEC ECX
006FD103  85 C9                     TEST ECX,ECX
006FD105  0F 8E 40 02 00 00         JLE 0x006fd34b
006FD10B  49                        DEC ECX
006FD10C  EB 09                     JMP 0x006fd117
switchD_006fd060::caseD_4:
006FD10E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FD111  49                        DEC ECX
006FD112  EB 03                     JMP 0x006fd117
LAB_006fd114:
006FD114  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
switchD_006fd060::default:
006FD117  85 C9                     TEST ECX,ECX
006FD119  0F 8E 2C 02 00 00         JLE 0x006fd34b
006FD11F  49                        DEC ECX
006FD120  85 C9                     TEST ECX,ECX
006FD122  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FD125  0F 8E 20 02 00 00         JLE 0x006fd34b
LAB_006fd12b:
006FD12B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FD12E  84 16                     TEST byte ptr [ESI],DL
006FD130  75 17                     JNZ 0x006fd149
006FD132  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD135  33 C9                     XOR ECX,ECX
006FD137  66 8B 0E                  MOV CX,word ptr [ESI]
006FD13A  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FD13D  3B F1                     CMP ESI,ECX
006FD13F  77 05                     JA 0x006fd146
006FD141  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FD144  88 19                     MOV byte ptr [ECX],BL
LAB_006fd146:
006FD146  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_006fd149:
006FD149  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD14C  83 C6 02                  ADD ESI,0x2
006FD14F  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FD152  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FD155  46                        INC ESI
006FD156  D1 EA                     SHR EDX,0x1
006FD158  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FD15B  75 0C                     JNZ 0x006fd169
006FD15D  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FD160  BA 80 00 00 00            MOV EDX,0x80
006FD165  46                        INC ESI
006FD166  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006fd169:
006FD169  83 E9 02                  SUB ECX,0x2
006FD16C  85 C9                     TEST ECX,ECX
006FD16E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FD171  0F 8E D4 01 00 00         JLE 0x006fd34b
006FD177  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FD17A  84 16                     TEST byte ptr [ESI],DL
006FD17C  75 17                     JNZ 0x006fd195
006FD17E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD181  33 C9                     XOR ECX,ECX
006FD183  66 8B 0E                  MOV CX,word ptr [ESI]
006FD186  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FD189  3B F1                     CMP ESI,ECX
006FD18B  77 05                     JA 0x006fd192
006FD18D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FD190  88 19                     MOV byte ptr [ECX],BL
LAB_006fd192:
006FD192  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_006fd195:
006FD195  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD198  83 C6 02                  ADD ESI,0x2
006FD19B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FD19E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FD1A1  46                        INC ESI
006FD1A2  D1 EA                     SHR EDX,0x1
006FD1A4  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FD1A7  75 0C                     JNZ 0x006fd1b5
006FD1A9  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FD1AC  BA 80 00 00 00            MOV EDX,0x80
006FD1B1  46                        INC ESI
006FD1B2  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006fd1b5:
006FD1B5  83 E9 02                  SUB ECX,0x2
006FD1B8  85 C9                     TEST ECX,ECX
006FD1BA  0F 8E 8B 01 00 00         JLE 0x006fd34b
006FD1C0  49                        DEC ECX
006FD1C1  85 C9                     TEST ECX,ECX
006FD1C3  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FD1C6  0F 8F 5F FF FF FF         JG 0x006fd12b
006FD1CC  E9 7A 01 00 00            JMP 0x006fd34b
LAB_006fd1d1:
006FD1D1  85 C9                     TEST ECX,ECX
006FD1D3  0F 8E C1 00 00 00         JLE 0x006fd29a
006FD1D9  49                        DEC ECX
006FD1DA  83 F9 03                  CMP ECX,0x3
006FD1DD  0F 87 B7 00 00 00         JA 0x006fd29a
switchD_006fd1e3::switchD:
006FD1E3  FF 24 8D 14 D4 6F 00      JMP dword ptr [ECX*0x4 + 0x6fd414]
switchD_006fd1e3::caseD_1:
006FD1EA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD1ED  84 11                     TEST byte ptr [ECX],DL
006FD1EF  75 16                     JNZ 0x006fd207
006FD1F1  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD1F4  33 C9                     XOR ECX,ECX
006FD1F6  66 8B 0E                  MOV CX,word ptr [ESI]
006FD1F9  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FD1FC  3B F1                     CMP ESI,ECX
006FD1FE  77 07                     JA 0x006fd207
006FD200  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FD203  8A 0F                     MOV CL,byte ptr [EDI]
006FD205  88 0E                     MOV byte ptr [ESI],CL
LAB_006fd207:
006FD207  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD20A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FD20D  83 C3 02                  ADD EBX,0x2
006FD210  46                        INC ESI
006FD211  D1 EA                     SHR EDX,0x1
006FD213  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD216  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FD219  75 0C                     JNZ 0x006fd227
006FD21B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD21E  BA 80 00 00 00            MOV EDX,0x80
006FD223  41                        INC ECX
006FD224  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fd227:
006FD227  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FD22A  47                        INC EDI
006FD22B  4E                        DEC ESI
006FD22C  85 F6                     TEST ESI,ESI
006FD22E  0F 8E 17 01 00 00         JLE 0x006fd34b
006FD234  EB 03                     JMP 0x006fd239
switchD_006fd1e3::caseD_2:
006FD236  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_006fd239:
006FD239  47                        INC EDI
006FD23A  4E                        DEC ESI
006FD23B  85 F6                     TEST ESI,ESI
006FD23D  0F 8E 08 01 00 00         JLE 0x006fd34b
006FD243  EB 03                     JMP 0x006fd248
switchD_006fd1e3::caseD_3:
006FD245  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_006fd248:
006FD248  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD24B  84 11                     TEST byte ptr [ECX],DL
006FD24D  75 16                     JNZ 0x006fd265
006FD24F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD252  33 C9                     XOR ECX,ECX
006FD254  66 8B 0B                  MOV CX,word ptr [EBX]
006FD257  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FD25A  3B D9                     CMP EBX,ECX
006FD25C  77 07                     JA 0x006fd265
006FD25E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD261  8A 0F                     MOV CL,byte ptr [EDI]
006FD263  88 0B                     MOV byte ptr [EBX],CL
LAB_006fd265:
006FD265  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FD268  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD26B  83 C1 02                  ADD ECX,0x2
006FD26E  43                        INC EBX
006FD26F  D1 EA                     SHR EDX,0x1
006FD271  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FD274  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FD277  75 0C                     JNZ 0x006fd285
006FD279  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD27C  BA 80 00 00 00            MOV EDX,0x80
006FD281  41                        INC ECX
006FD282  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fd285:
006FD285  47                        INC EDI
006FD286  4E                        DEC ESI
006FD287  85 F6                     TEST ESI,ESI
006FD289  0F 8E BC 00 00 00         JLE 0x006fd34b
006FD28F  47                        INC EDI
006FD290  4E                        DEC ESI
006FD291  EB 0A                     JMP 0x006fd29d
switchD_006fd1e3::caseD_4:
006FD293  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FD296  47                        INC EDI
006FD297  4E                        DEC ESI
006FD298  EB 03                     JMP 0x006fd29d
LAB_006fd29a:
006FD29A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
switchD_006fd1e3::default:
006FD29D  85 F6                     TEST ESI,ESI
006FD29F  0F 8E A6 00 00 00         JLE 0x006fd34b
006FD2A5  47                        INC EDI
006FD2A6  4E                        DEC ESI
006FD2A7  85 F6                     TEST ESI,ESI
006FD2A9  0F 8E 9C 00 00 00         JLE 0x006fd34b
LAB_006fd2af:
006FD2AF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD2B2  84 11                     TEST byte ptr [ECX],DL
006FD2B4  75 16                     JNZ 0x006fd2cc
006FD2B6  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD2B9  33 C9                     XOR ECX,ECX
006FD2BB  66 8B 0B                  MOV CX,word ptr [EBX]
006FD2BE  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FD2C1  3B D9                     CMP EBX,ECX
006FD2C3  77 07                     JA 0x006fd2cc
006FD2C5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD2C8  8A 0F                     MOV CL,byte ptr [EDI]
006FD2CA  88 0B                     MOV byte ptr [EBX],CL
LAB_006fd2cc:
006FD2CC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FD2CF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD2D2  83 C1 02                  ADD ECX,0x2
006FD2D5  43                        INC EBX
006FD2D6  D1 EA                     SHR EDX,0x1
006FD2D8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FD2DB  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FD2DE  75 0C                     JNZ 0x006fd2ec
006FD2E0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD2E3  BA 80 00 00 00            MOV EDX,0x80
006FD2E8  41                        INC ECX
006FD2E9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fd2ec:
006FD2EC  47                        INC EDI
006FD2ED  4E                        DEC ESI
006FD2EE  85 F6                     TEST ESI,ESI
006FD2F0  7E 59                     JLE 0x006fd34b
006FD2F2  47                        INC EDI
006FD2F3  4E                        DEC ESI
006FD2F4  85 F6                     TEST ESI,ESI
006FD2F6  7E 53                     JLE 0x006fd34b
006FD2F8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD2FB  84 11                     TEST byte ptr [ECX],DL
006FD2FD  75 16                     JNZ 0x006fd315
006FD2FF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD302  33 C9                     XOR ECX,ECX
006FD304  66 8B 0B                  MOV CX,word ptr [EBX]
006FD307  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FD30A  3B D9                     CMP EBX,ECX
006FD30C  77 07                     JA 0x006fd315
006FD30E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD311  8A 0F                     MOV CL,byte ptr [EDI]
006FD313  88 0B                     MOV byte ptr [EBX],CL
LAB_006fd315:
006FD315  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FD318  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD31B  83 C1 02                  ADD ECX,0x2
006FD31E  43                        INC EBX
006FD31F  D1 EA                     SHR EDX,0x1
006FD321  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FD324  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FD327  75 0C                     JNZ 0x006fd335
006FD329  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD32C  BA 80 00 00 00            MOV EDX,0x80
006FD331  41                        INC ECX
006FD332  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fd335:
006FD335  47                        INC EDI
006FD336  4E                        DEC ESI
006FD337  85 F6                     TEST ESI,ESI
006FD339  7E 10                     JLE 0x006fd34b
006FD33B  47                        INC EDI
006FD33C  4E                        DEC ESI
006FD33D  85 F6                     TEST ESI,ESI
006FD33F  7E 0A                     JLE 0x006fd34b
006FD341  47                        INC EDI
006FD342  4E                        DEC ESI
006FD343  85 F6                     TEST ESI,ESI
006FD345  0F 8F 64 FF FF FF         JG 0x006fd2af
LAB_006fd34b:
006FD34B  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006FD34E  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006FD351  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FD354  2B CB                     SUB ECX,EBX
006FD356  2B CE                     SUB ECX,ESI
006FD358  3B C1                     CMP EAX,ECX
006FD35A  7D 31                     JGE 0x006fd38d
LAB_006fd35c:
006FD35C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006FD35F  2B C8                     SUB ECX,EAX
006FD361  81 E2 C0 00 00 00         AND EDX,0xc0
006FD367  80 FA 80                  CMP DL,0x80
006FD36A  75 02                     JNZ 0x006fd36e
006FD36C  03 F8                     ADD EDI,EAX
LAB_006fd36e:
006FD36E  33 D2                     XOR EDX,EDX
006FD370  8A 17                     MOV DL,byte ptr [EDI]
006FD372  8B C2                     MOV EAX,EDX
006FD374  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006FD377  24 80                     AND AL,0x80
006FD379  47                        INC EDI
006FD37A  84 C0                     TEST AL,AL
006FD37C  8B C2                     MOV EAX,EDX
006FD37E  74 09                     JZ 0x006fd389
006FD380  83 E0 3F                  AND EAX,0x3f
006FD383  F6 C2 40                  TEST DL,0x40
006FD386  74 01                     JZ 0x006fd389
006FD388  47                        INC EDI
LAB_006fd389:
006FD389  3B C1                     CMP EAX,ECX
006FD38B  7C CF                     JL 0x006fd35c
LAB_006fd38d:
006FD38D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006FD390  25 C0 00 00 00            AND EAX,0xc0
006FD395  3C 80                     CMP AL,0x80
006FD397  75 02                     JNZ 0x006fd39b
006FD399  03 F9                     ADD EDI,ECX
LAB_006fd39b:
006FD39B  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
LAB_006fd39e:
006FD39E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006FD3A1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FD3A4  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006FD3A7  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FD3AA  03 C1                     ADD EAX,ECX
006FD3AC  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006FD3AF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006FD3B2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006FD3B5  03 D8                     ADD EBX,EAX
006FD3B7  03 F1                     ADD ESI,ECX
006FD3B9  42                        INC EDX
006FD3BA  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006FD3BD  83 FA 04                  CMP EDX,0x4
006FD3C0  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006FD3C3  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006FD3C6  7E 05                     JLE 0x006fd3cd
006FD3C8  33 D2                     XOR EDX,EDX
006FD3CA  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006fd3cd:
006FD3CD  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FD3D0  48                        DEC EAX
006FD3D1  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FD3D4  0F 89 8F F7 FF FF         JNS 0x006fcb69
006FD3DA  5F                        POP EDI
006FD3DB  5E                        POP ESI
006FD3DC  5B                        POP EBX
LAB_006fd3dd:
006FD3DD  8B E5                     MOV ESP,EBP
006FD3DF  5D                        POP EBP
006FD3E0  C2 3C 00                  RET 0x3c
