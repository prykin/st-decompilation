FUN_006fed50:
006FED50  55                        PUSH EBP
006FED51  8B EC                     MOV EBP,ESP
006FED53  83 EC 18                  SUB ESP,0x18
006FED56  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006FED59  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FED5C  C1 F8 03                  SAR EAX,0x3
006FED5F  03 C8                     ADD ECX,EAX
006FED61  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FED64  48                        DEC EAX
006FED65  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FED6F  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006FED72  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FED75  0F 88 18 07 00 00         JS 0x006ff493
006FED7B  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006FED7E  53                        PUSH EBX
006FED7F  56                        PUSH ESI
006FED80  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006FED83  57                        PUSH EDI
006FED84  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FED87  EB 03                     JMP 0x006fed8c
LAB_006fed89:
006FED89  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
LAB_006fed8c:
006FED8C  F6 C2 01                  TEST DL,0x1
006FED8F  75 4E                     JNZ 0x006feddf
LAB_006fed91:
006FED91  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FED94  48                        DEC EAX
006FED95  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FED98  78 42                     JS 0x006feddc
006FED9A  33 C0                     XOR EAX,EAX
006FED9C  8A 07                     MOV AL,byte ptr [EDI]
006FED9E  47                        INC EDI
006FED9F  85 C0                     TEST EAX,EAX
006FEDA1  74 2C                     JZ 0x006fedcf
006FEDA3  8B CE                     MOV ECX,ESI
LAB_006feda5:
006FEDA5  A8 80                     TEST AL,0x80
006FEDA7  74 16                     JZ 0x006fedbf
006FEDA9  A8 40                     TEST AL,0x40
006FEDAB  74 06                     JZ 0x006fedb3
006FEDAD  47                        INC EDI
006FEDAE  83 E0 3F                  AND EAX,0x3f
006FEDB1  EB 0F                     JMP 0x006fedc2
LAB_006fedb3:
006FEDB3  8B D8                     MOV EBX,EAX
006FEDB5  83 E3 3F                  AND EBX,0x3f
006FEDB8  03 FB                     ADD EDI,EBX
006FEDBA  83 E0 3F                  AND EAX,0x3f
006FEDBD  EB 03                     JMP 0x006fedc2
LAB_006fedbf:
006FEDBF  83 E0 7F                  AND EAX,0x7f
LAB_006fedc2:
006FEDC2  2B C8                     SUB ECX,EAX
006FEDC4  85 C9                     TEST ECX,ECX
006FEDC6  7E 07                     JLE 0x006fedcf
006FEDC8  33 C0                     XOR EAX,EAX
006FEDCA  8A 07                     MOV AL,byte ptr [EDI]
006FEDCC  47                        INC EDI
006FEDCD  EB D6                     JMP 0x006feda5
LAB_006fedcf:
006FEDCF  42                        INC EDX
006FEDD0  83 FA 04                  CMP EDX,0x4
006FEDD3  7E 02                     JLE 0x006fedd7
006FEDD5  33 D2                     XOR EDX,EDX
LAB_006fedd7:
006FEDD7  F6 C2 01                  TEST DL,0x1
006FEDDA  74 B5                     JZ 0x006fed91
LAB_006feddc:
006FEDDC  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006feddf:
006FEDDF  33 DB                     XOR EBX,EBX
006FEDE1  8A 1F                     MOV BL,byte ptr [EDI]
006FEDE3  47                        INC EDI
006FEDE4  85 DB                     TEST EBX,EBX
006FEDE6  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FEDE9  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FEDEC  0F 84 62 06 00 00         JZ 0x006ff454
006FEDF2  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FEDF5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FEDF8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FEDFB  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006FEDFE  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006FEE01  83 E1 07                  AND ECX,0x7
006FEE04  BA 80 00 00 00            MOV EDX,0x80
006FEE09  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006FEE0C  D3 FA                     SAR EDX,CL
006FEE0E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006FEE11  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FEE14  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
LAB_006fee17:
006FEE17  F6 C3 80                  TEST BL,0x80
006FEE1A  8B C3                     MOV EAX,EBX
006FEE1C  74 21                     JZ 0x006fee3f
006FEE1E  83 E0 3F                  AND EAX,0x3f
006FEE21  3B C6                     CMP EAX,ESI
006FEE23  7F 2A                     JG 0x006fee4f
006FEE25  F6 C3 40                  TEST BL,0x40
006FEE28  74 0A                     JZ 0x006fee34
006FEE2A  47                        INC EDI
006FEE2B  33 DB                     XOR EBX,EBX
006FEE2D  2B F0                     SUB ESI,EAX
006FEE2F  8A 1F                     MOV BL,byte ptr [EDI]
006FEE31  47                        INC EDI
006FEE32  EB E3                     JMP 0x006fee17
LAB_006fee34:
006FEE34  03 F8                     ADD EDI,EAX
006FEE36  33 DB                     XOR EBX,EBX
006FEE38  2B F0                     SUB ESI,EAX
006FEE3A  8A 1F                     MOV BL,byte ptr [EDI]
006FEE3C  47                        INC EDI
006FEE3D  EB D8                     JMP 0x006fee17
LAB_006fee3f:
006FEE3F  83 E0 7F                  AND EAX,0x7f
006FEE42  3B C6                     CMP EAX,ESI
006FEE44  7F 09                     JG 0x006fee4f
006FEE46  33 DB                     XOR EBX,EBX
006FEE48  2B F0                     SUB ESI,EAX
006FEE4A  8A 1F                     MOV BL,byte ptr [EDI]
006FEE4C  47                        INC EDI
006FEE4D  EB C8                     JMP 0x006fee17
LAB_006fee4f:
006FEE4F  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FEE52  81 E3 C0 00 00 00         AND EBX,0xc0
006FEE58  2B C6                     SUB EAX,ESI
006FEE5A  80 FB 80                  CMP BL,0x80
006FEE5D  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FEE60  75 05                     JNZ 0x006fee67
006FEE62  03 FE                     ADD EDI,ESI
006FEE64  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006fee67:
006FEE67  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FEE6A  3B C6                     CMP EAX,ESI
006FEE6C  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006FEE6F  0F 8F FD 03 00 00         JG 0x006ff272
006FEE75  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FEE78  81 E6 80 00 00 00         AND ESI,0x80
LAB_006fee7e:
006FEE7E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FEE81  2B D8                     SUB EBX,EAX
006FEE83  85 F6                     TEST ESI,ESI
006FEE85  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006FEE88  0F 84 99 03 00 00         JZ 0x006ff227
006FEE8E  F6 45 EC 40               TEST byte ptr [EBP + -0x14],0x40
006FEE92  0F 84 A5 01 00 00         JZ 0x006ff03d
006FEE98  33 DB                     XOR EBX,EBX
006FEE9A  8A 1F                     MOV BL,byte ptr [EDI]
006FEE9C  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FEE9F  8B F3                     MOV ESI,EBX
006FEEA1  33 DB                     XOR EBX,EBX
006FEEA3  8A 1C 3E                  MOV BL,byte ptr [ESI + EDI*0x1]
006FEEA6  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FEEA9  47                        INC EDI
006FEEAA  85 C9                     TEST ECX,ECX
006FEEAC  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FEEAF  0F 8E B5 00 00 00         JLE 0x006fef6a
006FEEB5  8D 71 FF                  LEA ESI,[ECX + -0x1]
006FEEB8  83 FE 03                  CMP ESI,0x3
006FEEBB  0F 87 A9 00 00 00         JA 0x006fef6a
switchD_006feec1::switchD:
006FEEC1  FF 24 B5 48 F6 6F 00      JMP dword ptr [ESI*0x4 + 0x6ff648]
switchD_006feec1::caseD_1:
006FEEC8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FEECB  84 11                     TEST byte ptr [ECX],DL
006FEECD  75 14                     JNZ 0x006feee3
006FEECF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEED2  33 C9                     XOR ECX,ECX
006FEED4  66 8B 0E                  MOV CX,word ptr [ESI]
006FEED7  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FEEDA  3B F1                     CMP ESI,ECX
006FEEDC  77 05                     JA 0x006feee3
006FEEDE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FEEE1  88 19                     MOV byte ptr [ECX],BL
LAB_006feee3:
006FEEE3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEEE6  B9 02 00 00 00            MOV ECX,0x2
006FEEEB  03 F1                     ADD ESI,ECX
006FEEED  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FEEF0  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEEF3  46                        INC ESI
006FEEF4  D1 EA                     SHR EDX,0x1
006FEEF6  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FEEF9  75 0C                     JNZ 0x006fef07
006FEEFB  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FEEFE  BA 80 00 00 00            MOV EDX,0x80
006FEF03  46                        INC ESI
006FEF04  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006fef07:
006FEF07  48                        DEC EAX
006FEF08  85 C0                     TEST EAX,EAX
006FEF0A  0F 8E F4 02 00 00         JLE 0x006ff204
switchD_006feec1::caseD_2:
006FEF10  48                        DEC EAX
006FEF11  B9 03 00 00 00            MOV ECX,0x3
006FEF16  85 C0                     TEST EAX,EAX
006FEF18  0F 8E E6 02 00 00         JLE 0x006ff204
switchD_006feec1::caseD_3:
006FEF1E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FEF21  84 11                     TEST byte ptr [ECX],DL
006FEF23  75 14                     JNZ 0x006fef39
006FEF25  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEF28  33 C9                     XOR ECX,ECX
006FEF2A  66 8B 0E                  MOV CX,word ptr [ESI]
006FEF2D  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FEF30  3B F1                     CMP ESI,ECX
006FEF32  77 05                     JA 0x006fef39
006FEF34  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FEF37  88 19                     MOV byte ptr [ECX],BL
LAB_006fef39:
006FEF39  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FEF3C  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEF3F  83 C1 02                  ADD ECX,0x2
006FEF42  46                        INC ESI
006FEF43  D1 EA                     SHR EDX,0x1
006FEF45  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FEF48  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FEF4B  75 0C                     JNZ 0x006fef59
006FEF4D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FEF50  BA 80 00 00 00            MOV EDX,0x80
006FEF55  41                        INC ECX
006FEF56  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fef59:
006FEF59  48                        DEC EAX
006FEF5A  B9 04 00 00 00            MOV ECX,0x4
006FEF5F  85 C0                     TEST EAX,EAX
006FEF61  0F 8E 9D 02 00 00         JLE 0x006ff204
switchD_006feec1::caseD_4:
006FEF67  33 C9                     XOR ECX,ECX
006FEF69  48                        DEC EAX
switchD_006feec1::default:
006FEF6A  85 C0                     TEST EAX,EAX
006FEF6C  0F 8E 92 02 00 00         JLE 0x006ff204
006FEF72  48                        DEC EAX
006FEF73  B9 01 00 00 00            MOV ECX,0x1
006FEF78  85 C0                     TEST EAX,EAX
006FEF7A  0F 8E 84 02 00 00         JLE 0x006ff204
LAB_006fef80:
006FEF80  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FEF83  84 11                     TEST byte ptr [ECX],DL
006FEF85  75 14                     JNZ 0x006fef9b
006FEF87  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEF8A  33 C9                     XOR ECX,ECX
006FEF8C  66 8B 0E                  MOV CX,word ptr [ESI]
006FEF8F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FEF92  3B F1                     CMP ESI,ECX
006FEF94  77 05                     JA 0x006fef9b
006FEF96  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FEF99  88 19                     MOV byte ptr [ECX],BL
LAB_006fef9b:
006FEF9B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEF9E  B9 02 00 00 00            MOV ECX,0x2
006FEFA3  03 F1                     ADD ESI,ECX
006FEFA5  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FEFA8  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEFAB  46                        INC ESI
006FEFAC  D1 EA                     SHR EDX,0x1
006FEFAE  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FEFB1  75 0C                     JNZ 0x006fefbf
006FEFB3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FEFB6  BA 80 00 00 00            MOV EDX,0x80
006FEFBB  46                        INC ESI
006FEFBC  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006fefbf:
006FEFBF  48                        DEC EAX
006FEFC0  85 C0                     TEST EAX,EAX
006FEFC2  0F 8E 3C 02 00 00         JLE 0x006ff204
006FEFC8  48                        DEC EAX
006FEFC9  B9 03 00 00 00            MOV ECX,0x3
006FEFCE  85 C0                     TEST EAX,EAX
006FEFD0  0F 8E 2E 02 00 00         JLE 0x006ff204
006FEFD6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FEFD9  84 11                     TEST byte ptr [ECX],DL
006FEFDB  75 14                     JNZ 0x006feff1
006FEFDD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEFE0  33 C9                     XOR ECX,ECX
006FEFE2  66 8B 0E                  MOV CX,word ptr [ESI]
006FEFE5  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FEFE8  3B F1                     CMP ESI,ECX
006FEFEA  77 05                     JA 0x006feff1
006FEFEC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FEFEF  88 19                     MOV byte ptr [ECX],BL
LAB_006feff1:
006FEFF1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FEFF4  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEFF7  83 C1 02                  ADD ECX,0x2
006FEFFA  46                        INC ESI
006FEFFB  D1 EA                     SHR EDX,0x1
006FEFFD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF000  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FF003  75 0C                     JNZ 0x006ff011
006FF005  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF008  BA 80 00 00 00            MOV EDX,0x80
006FF00D  41                        INC ECX
006FF00E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff011:
006FF011  48                        DEC EAX
006FF012  B9 04 00 00 00            MOV ECX,0x4
006FF017  85 C0                     TEST EAX,EAX
006FF019  0F 8E E5 01 00 00         JLE 0x006ff204
006FF01F  33 C9                     XOR ECX,ECX
006FF021  48                        DEC EAX
006FF022  85 C0                     TEST EAX,EAX
006FF024  0F 8E DA 01 00 00         JLE 0x006ff204
006FF02A  48                        DEC EAX
006FF02B  B9 01 00 00 00            MOV ECX,0x1
006FF030  85 C0                     TEST EAX,EAX
006FF032  0F 8F 48 FF FF FF         JG 0x006fef80
006FF038  E9 C7 01 00 00            JMP 0x006ff204
LAB_006ff03d:
006FF03D  85 C9                     TEST ECX,ECX
006FF03F  0F 8E ED 00 00 00         JLE 0x006ff132
006FF045  8D 71 FF                  LEA ESI,[ECX + -0x1]
006FF048  83 FE 03                  CMP ESI,0x3
006FF04B  0F 87 E1 00 00 00         JA 0x006ff132
switchD_006ff051::switchD:
006FF051  FF 24 B5 58 F6 6F 00      JMP dword ptr [ESI*0x4 + 0x6ff658]
switchD_006ff051::caseD_1:
006FF058  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF05B  84 11                     TEST byte ptr [ECX],DL
006FF05D  75 20                     JNZ 0x006ff07f
006FF05F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF062  33 C9                     XOR ECX,ECX
006FF064  66 8B 0E                  MOV CX,word ptr [ESI]
006FF067  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FF06A  3B F1                     CMP ESI,ECX
006FF06C  77 11                     JA 0x006ff07f
006FF06E  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FF071  33 C9                     XOR ECX,ECX
006FF073  8A 0F                     MOV CL,byte ptr [EDI]
006FF075  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FF078  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF07B  88 0E                     MOV byte ptr [ESI],CL
006FF07D  EB 03                     JMP 0x006ff082
LAB_006ff07f:
006FF07F  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006ff082:
006FF082  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF085  B9 02 00 00 00            MOV ECX,0x2
006FF08A  03 D9                     ADD EBX,ECX
006FF08C  46                        INC ESI
006FF08D  D1 EA                     SHR EDX,0x1
006FF08F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FF092  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FF095  75 0C                     JNZ 0x006ff0a3
006FF097  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FF09A  BA 80 00 00 00            MOV EDX,0x80
006FF09F  43                        INC EBX
006FF0A0  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006ff0a3:
006FF0A3  47                        INC EDI
006FF0A4  48                        DEC EAX
006FF0A5  85 C0                     TEST EAX,EAX
006FF0A7  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF0AA  0F 8E 54 01 00 00         JLE 0x006ff204
006FF0B0  EB 03                     JMP 0x006ff0b5
switchD_006ff051::caseD_2:
006FF0B2  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006ff0b5:
006FF0B5  47                        INC EDI
006FF0B6  48                        DEC EAX
006FF0B7  85 C0                     TEST EAX,EAX
006FF0B9  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF0BC  B9 03 00 00 00            MOV ECX,0x3
006FF0C1  0F 8E 3D 01 00 00         JLE 0x006ff204
006FF0C7  EB 03                     JMP 0x006ff0cc
switchD_006ff051::caseD_3:
006FF0C9  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006ff0cc:
006FF0CC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF0CF  84 11                     TEST byte ptr [ECX],DL
006FF0D1  75 1B                     JNZ 0x006ff0ee
006FF0D3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF0D6  33 C9                     XOR ECX,ECX
006FF0D8  66 8B 0B                  MOV CX,word ptr [EBX]
006FF0DB  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FF0DE  3B D9                     CMP EBX,ECX
006FF0E0  77 0C                     JA 0x006ff0ee
006FF0E2  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FF0E5  33 C9                     XOR ECX,ECX
006FF0E7  8A 0F                     MOV CL,byte ptr [EDI]
006FF0E9  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FF0EC  88 0E                     MOV byte ptr [ESI],CL
LAB_006ff0ee:
006FF0EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FF0F1  83 C1 02                  ADD ECX,0x2
006FF0F4  46                        INC ESI
006FF0F5  D1 EA                     SHR EDX,0x1
006FF0F7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF0FA  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FF0FD  75 0C                     JNZ 0x006ff10b
006FF0FF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF102  BA 80 00 00 00            MOV EDX,0x80
006FF107  41                        INC ECX
006FF108  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff10b:
006FF10B  47                        INC EDI
006FF10C  48                        DEC EAX
006FF10D  85 C0                     TEST EAX,EAX
006FF10F  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF112  B9 04 00 00 00            MOV ECX,0x4
006FF117  0F 8E E7 00 00 00         JLE 0x006ff204
006FF11D  47                        INC EDI
006FF11E  33 C9                     XOR ECX,ECX
006FF120  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF123  48                        DEC EAX
006FF124  EB 0F                     JMP 0x006ff135
switchD_006ff051::caseD_4:
006FF126  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF129  47                        INC EDI
006FF12A  33 C9                     XOR ECX,ECX
006FF12C  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF12F  48                        DEC EAX
006FF130  EB 03                     JMP 0x006ff135
LAB_006ff132:
006FF132  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
switchD_006ff051::default:
006FF135  85 C0                     TEST EAX,EAX
006FF137  0F 8E C7 00 00 00         JLE 0x006ff204
006FF13D  47                        INC EDI
006FF13E  48                        DEC EAX
006FF13F  85 C0                     TEST EAX,EAX
006FF141  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF144  B9 01 00 00 00            MOV ECX,0x1
006FF149  0F 8E B5 00 00 00         JLE 0x006ff204
LAB_006ff14f:
006FF14F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF152  84 11                     TEST byte ptr [ECX],DL
006FF154  75 1B                     JNZ 0x006ff171
006FF156  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF159  33 C9                     XOR ECX,ECX
006FF15B  66 8B 0B                  MOV CX,word ptr [EBX]
006FF15E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FF161  3B D9                     CMP EBX,ECX
006FF163  77 0C                     JA 0x006ff171
006FF165  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FF168  33 C9                     XOR ECX,ECX
006FF16A  8A 0F                     MOV CL,byte ptr [EDI]
006FF16C  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FF16F  88 0E                     MOV byte ptr [ESI],CL
LAB_006ff171:
006FF171  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF174  B9 02 00 00 00            MOV ECX,0x2
006FF179  03 D9                     ADD EBX,ECX
006FF17B  46                        INC ESI
006FF17C  D1 EA                     SHR EDX,0x1
006FF17E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FF181  75 0C                     JNZ 0x006ff18f
006FF183  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FF186  BA 80 00 00 00            MOV EDX,0x80
006FF18B  43                        INC EBX
006FF18C  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006ff18f:
006FF18F  47                        INC EDI
006FF190  48                        DEC EAX
006FF191  85 C0                     TEST EAX,EAX
006FF193  7E 69                     JLE 0x006ff1fe
006FF195  47                        INC EDI
006FF196  48                        DEC EAX
006FF197  85 C0                     TEST EAX,EAX
006FF199  B9 03 00 00 00            MOV ECX,0x3
006FF19E  7E 5E                     JLE 0x006ff1fe
006FF1A0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF1A3  84 11                     TEST byte ptr [ECX],DL
006FF1A5  75 1B                     JNZ 0x006ff1c2
006FF1A7  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF1AA  33 C9                     XOR ECX,ECX
006FF1AC  66 8B 0B                  MOV CX,word ptr [EBX]
006FF1AF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FF1B2  3B D9                     CMP EBX,ECX
006FF1B4  77 0C                     JA 0x006ff1c2
006FF1B6  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FF1B9  33 C9                     XOR ECX,ECX
006FF1BB  8A 0F                     MOV CL,byte ptr [EDI]
006FF1BD  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FF1C0  88 0E                     MOV byte ptr [ESI],CL
LAB_006ff1c2:
006FF1C2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FF1C5  83 C1 02                  ADD ECX,0x2
006FF1C8  46                        INC ESI
006FF1C9  D1 EA                     SHR EDX,0x1
006FF1CB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF1CE  75 0C                     JNZ 0x006ff1dc
006FF1D0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF1D3  BA 80 00 00 00            MOV EDX,0x80
006FF1D8  41                        INC ECX
006FF1D9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff1dc:
006FF1DC  47                        INC EDI
006FF1DD  48                        DEC EAX
006FF1DE  85 C0                     TEST EAX,EAX
006FF1E0  B9 04 00 00 00            MOV ECX,0x4
006FF1E5  7E 17                     JLE 0x006ff1fe
006FF1E7  47                        INC EDI
006FF1E8  33 C9                     XOR ECX,ECX
006FF1EA  48                        DEC EAX
006FF1EB  85 C0                     TEST EAX,EAX
006FF1ED  7E 0F                     JLE 0x006ff1fe
006FF1EF  47                        INC EDI
006FF1F0  48                        DEC EAX
006FF1F1  85 C0                     TEST EAX,EAX
006FF1F3  B9 01 00 00 00            MOV ECX,0x1
006FF1F8  0F 8F 51 FF FF FF         JG 0x006ff14f
LAB_006ff1fe:
006FF1FE  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF201  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006ff204:
006FF204  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FF207  85 DB                     TEST EBX,EBX
006FF209  7E 65                     JLE 0x006ff270
006FF20B  33 C0                     XOR EAX,EAX
006FF20D  8A 07                     MOV AL,byte ptr [EDI]
006FF20F  8B F0                     MOV ESI,EAX
006FF211  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006FF214  81 E6 80 00 00 00         AND ESI,0x80
006FF21A  47                        INC EDI
006FF21B  85 F6                     TEST ESI,ESI
006FF21D  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF220  74 41                     JZ 0x006ff263
006FF222  83 E0 3F                  AND EAX,0x3f
006FF225  EB 3F                     JMP 0x006ff266
LAB_006ff227:
006FF227  48                        DEC EAX
006FF228  78 DA                     JS 0x006ff204
006FF22A  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006ff22d:
006FF22D  8B C1                     MOV EAX,ECX
006FF22F  83 E0 01                  AND EAX,0x1
006FF232  3C 01                     CMP AL,0x1
006FF234  75 20                     JNZ 0x006ff256
006FF236  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006FF239  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF23C  40                        INC EAX
006FF23D  83 C3 02                  ADD EBX,0x2
006FF240  D1 EA                     SHR EDX,0x1
006FF242  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006FF245  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FF248  75 0C                     JNZ 0x006ff256
006FF24A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FF24D  BA 80 00 00 00            MOV EDX,0x80
006FF252  40                        INC EAX
006FF253  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006ff256:
006FF256  41                        INC ECX
006FF257  83 F9 04                  CMP ECX,0x4
006FF25A  7E 02                     JLE 0x006ff25e
006FF25C  33 C9                     XOR ECX,ECX
LAB_006ff25e:
006FF25E  4E                        DEC ESI
006FF25F  75 CC                     JNZ 0x006ff22d
006FF261  EB A1                     JMP 0x006ff204
LAB_006ff263:
006FF263  83 E0 7F                  AND EAX,0x7f
LAB_006ff266:
006FF266  3B C3                     CMP EAX,EBX
006FF268  0F 8E 10 FC FF FF         JLE 0x006fee7e
006FF26E  EB 02                     JMP 0x006ff272
LAB_006ff270:
006FF270  33 C0                     XOR EAX,EAX
LAB_006ff272:
006FF272  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FF275  2B C6                     SUB EAX,ESI
006FF277  85 F6                     TEST ESI,ESI
006FF279  0F 8E 82 01 00 00         JLE 0x006ff401
006FF27F  8A 5D EC                  MOV BL,byte ptr [EBP + -0x14]
006FF282  F6 C3 80                  TEST BL,0x80
006FF285  0F 84 76 01 00 00         JZ 0x006ff401
006FF28B  F6 C3 40                  TEST BL,0x40
006FF28E  0F 84 05 02 00 00         JZ 0x006ff499
006FF294  33 DB                     XOR EBX,EBX
006FF296  8A 1F                     MOV BL,byte ptr [EDI]
006FF298  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FF29B  8B F3                     MOV ESI,EBX
006FF29D  33 DB                     XOR EBX,EBX
006FF29F  8A 1C 3E                  MOV BL,byte ptr [ESI + EDI*0x1]
006FF2A2  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FF2A5  47                        INC EDI
006FF2A6  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FF2A9  85 C9                     TEST ECX,ECX
006FF2AB  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF2AE  0F 8E BA 00 00 00         JLE 0x006ff36e
006FF2B4  49                        DEC ECX
006FF2B5  83 F9 03                  CMP ECX,0x3
006FF2B8  0F 87 B0 00 00 00         JA 0x006ff36e
switchD_006ff2be::switchD:
006FF2BE  FF 24 8D 68 F6 6F 00      JMP dword ptr [ECX*0x4 + 0x6ff668]
switchD_006ff2be::caseD_1:
006FF2C5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF2C8  84 11                     TEST byte ptr [ECX],DL
006FF2CA  75 16                     JNZ 0x006ff2e2
006FF2CC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF2CF  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FF2D2  33 C9                     XOR ECX,ECX
006FF2D4  66 8B 0E                  MOV CX,word ptr [ESI]
006FF2D7  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FF2DA  3B F1                     CMP ESI,ECX
006FF2DC  77 07                     JA 0x006ff2e5
006FF2DE  88 1F                     MOV byte ptr [EDI],BL
006FF2E0  EB 03                     JMP 0x006ff2e5
LAB_006ff2e2:
006FF2E2  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006ff2e5:
006FF2E5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF2E8  83 C3 02                  ADD EBX,0x2
006FF2EB  47                        INC EDI
006FF2EC  D1 EA                     SHR EDX,0x1
006FF2EE  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FF2F1  75 0C                     JNZ 0x006ff2ff
006FF2F3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF2F6  BA 80 00 00 00            MOV EDX,0x80
006FF2FB  41                        INC ECX
006FF2FC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff2ff:
006FF2FF  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FF302  4E                        DEC ESI
006FF303  85 F6                     TEST ESI,ESI
006FF305  0F 8E F3 00 00 00         JLE 0x006ff3fe
006FF30B  EB 06                     JMP 0x006ff313
switchD_006ff2be::caseD_2:
006FF30D  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FF310  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006ff313:
006FF313  4E                        DEC ESI
006FF314  85 F6                     TEST ESI,ESI
006FF316  0F 8E E2 00 00 00         JLE 0x006ff3fe
006FF31C  EB 06                     JMP 0x006ff324
switchD_006ff2be::caseD_3:
006FF31E  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FF321  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006ff324:
006FF324  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF327  84 11                     TEST byte ptr [ECX],DL
006FF329  75 14                     JNZ 0x006ff33f
006FF32B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF32E  33 C9                     XOR ECX,ECX
006FF330  66 8B 0B                  MOV CX,word ptr [EBX]
006FF333  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FF336  3B D9                     CMP EBX,ECX
006FF338  77 05                     JA 0x006ff33f
006FF33A  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FF33D  88 0F                     MOV byte ptr [EDI],CL
LAB_006ff33f:
006FF33F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FF342  83 C1 02                  ADD ECX,0x2
006FF345  47                        INC EDI
006FF346  D1 EA                     SHR EDX,0x1
006FF348  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF34B  75 0C                     JNZ 0x006ff359
006FF34D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF350  BA 80 00 00 00            MOV EDX,0x80
006FF355  41                        INC ECX
006FF356  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff359:
006FF359  4E                        DEC ESI
006FF35A  85 F6                     TEST ESI,ESI
006FF35C  0F 8E 9C 00 00 00         JLE 0x006ff3fe
006FF362  4E                        DEC ESI
006FF363  EB 0F                     JMP 0x006ff374
switchD_006ff2be::caseD_4:
006FF365  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FF368  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FF36B  4E                        DEC ESI
006FF36C  EB 06                     JMP 0x006ff374
LAB_006ff36e:
006FF36E  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FF371  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
switchD_006ff2be::default:
006FF374  85 F6                     TEST ESI,ESI
006FF376  0F 8E 82 00 00 00         JLE 0x006ff3fe
006FF37C  4E                        DEC ESI
006FF37D  85 F6                     TEST ESI,ESI
006FF37F  7E 7D                     JLE 0x006ff3fe
LAB_006ff381:
006FF381  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF384  84 11                     TEST byte ptr [ECX],DL
006FF386  75 14                     JNZ 0x006ff39c
006FF388  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF38B  33 C9                     XOR ECX,ECX
006FF38D  66 8B 0B                  MOV CX,word ptr [EBX]
006FF390  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FF393  3B D9                     CMP EBX,ECX
006FF395  77 05                     JA 0x006ff39c
006FF397  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FF39A  88 0F                     MOV byte ptr [EDI],CL
LAB_006ff39c:
006FF39C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FF39F  83 C1 02                  ADD ECX,0x2
006FF3A2  47                        INC EDI
006FF3A3  D1 EA                     SHR EDX,0x1
006FF3A5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF3A8  75 0C                     JNZ 0x006ff3b6
006FF3AA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF3AD  BA 80 00 00 00            MOV EDX,0x80
006FF3B2  41                        INC ECX
006FF3B3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff3b6:
006FF3B6  83 EE 02                  SUB ESI,0x2
006FF3B9  85 F6                     TEST ESI,ESI
006FF3BB  7E 41                     JLE 0x006ff3fe
006FF3BD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF3C0  84 11                     TEST byte ptr [ECX],DL
006FF3C2  75 14                     JNZ 0x006ff3d8
006FF3C4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF3C7  33 C9                     XOR ECX,ECX
006FF3C9  66 8B 0B                  MOV CX,word ptr [EBX]
006FF3CC  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FF3CF  3B D9                     CMP EBX,ECX
006FF3D1  77 05                     JA 0x006ff3d8
006FF3D3  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FF3D6  88 0F                     MOV byte ptr [EDI],CL
LAB_006ff3d8:
006FF3D8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FF3DB  83 C1 02                  ADD ECX,0x2
006FF3DE  47                        INC EDI
006FF3DF  D1 EA                     SHR EDX,0x1
006FF3E1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF3E4  75 0C                     JNZ 0x006ff3f2
006FF3E6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF3E9  BA 80 00 00 00            MOV EDX,0x80
006FF3EE  41                        INC ECX
006FF3EF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff3f2:
006FF3F2  83 EE 02                  SUB ESI,0x2
006FF3F5  85 F6                     TEST ESI,ESI
006FF3F7  7E 05                     JLE 0x006ff3fe
006FF3F9  4E                        DEC ESI
006FF3FA  85 F6                     TEST ESI,ESI
006FF3FC  7F 83                     JG 0x006ff381
LAB_006ff3fe:
006FF3FE  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006ff401:
006FF401  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006FF404  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006FF407  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FF40A  2B CB                     SUB ECX,EBX
006FF40C  2B CE                     SUB ECX,ESI
006FF40E  3B C1                     CMP EAX,ECX
006FF410  7D 31                     JGE 0x006ff443
LAB_006ff412:
006FF412  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006FF415  2B C8                     SUB ECX,EAX
006FF417  81 E2 C0 00 00 00         AND EDX,0xc0
006FF41D  80 FA 80                  CMP DL,0x80
006FF420  75 02                     JNZ 0x006ff424
006FF422  03 F8                     ADD EDI,EAX
LAB_006ff424:
006FF424  33 D2                     XOR EDX,EDX
006FF426  8A 17                     MOV DL,byte ptr [EDI]
006FF428  8B C2                     MOV EAX,EDX
006FF42A  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006FF42D  24 80                     AND AL,0x80
006FF42F  47                        INC EDI
006FF430  84 C0                     TEST AL,AL
006FF432  8B C2                     MOV EAX,EDX
006FF434  74 09                     JZ 0x006ff43f
006FF436  83 E0 3F                  AND EAX,0x3f
006FF439  F6 C2 40                  TEST DL,0x40
006FF43C  74 01                     JZ 0x006ff43f
006FF43E  47                        INC EDI
LAB_006ff43f:
006FF43F  3B C1                     CMP EAX,ECX
006FF441  7C CF                     JL 0x006ff412
LAB_006ff443:
006FF443  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006FF446  25 C0 00 00 00            AND EAX,0xc0
006FF44B  3C 80                     CMP AL,0x80
006FF44D  75 02                     JNZ 0x006ff451
006FF44F  03 F9                     ADD EDI,ECX
LAB_006ff451:
006FF451  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
LAB_006ff454:
006FF454  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006FF457  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FF45A  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006FF45D  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FF460  03 C1                     ADD EAX,ECX
006FF462  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006FF465  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006FF468  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006FF46B  03 D8                     ADD EBX,EAX
006FF46D  03 F1                     ADD ESI,ECX
006FF46F  42                        INC EDX
006FF470  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006FF473  83 FA 04                  CMP EDX,0x4
006FF476  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006FF479  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006FF47C  7E 05                     JLE 0x006ff483
006FF47E  33 D2                     XOR EDX,EDX
006FF480  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006ff483:
006FF483  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FF486  48                        DEC EAX
006FF487  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FF48A  0F 89 F9 F8 FF FF         JNS 0x006fed89
006FF490  5F                        POP EDI
006FF491  5E                        POP ESI
006FF492  5B                        POP EBX
LAB_006ff493:
006FF493  8B E5                     MOV ESP,EBP
006FF495  5D                        POP EBP
006FF496  C2 40 00                  RET 0x40
LAB_006ff499:
006FF499  85 C9                     TEST ECX,ECX
006FF49B  0F 8E D1 00 00 00         JLE 0x006ff572
006FF4A1  49                        DEC ECX
006FF4A2  83 F9 03                  CMP ECX,0x3
006FF4A5  0F 87 C7 00 00 00         JA 0x006ff572
switchD_006ff4ab::switchD:
006FF4AB  FF 24 8D 78 F6 6F 00      JMP dword ptr [ECX*0x4 + 0x6ff678]
switchD_006ff4ab::caseD_1:
006FF4B2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF4B5  84 11                     TEST byte ptr [ECX],DL
006FF4B7  75 1E                     JNZ 0x006ff4d7
006FF4B9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF4BC  33 C9                     XOR ECX,ECX
006FF4BE  66 8B 0E                  MOV CX,word ptr [ESI]
006FF4C1  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FF4C4  3B F1                     CMP ESI,ECX
006FF4C6  77 0F                     JA 0x006ff4d7
006FF4C8  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FF4CB  33 C9                     XOR ECX,ECX
006FF4CD  8A 0F                     MOV CL,byte ptr [EDI]
006FF4CF  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FF4D2  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF4D5  88 0E                     MOV byte ptr [ESI],CL
LAB_006ff4d7:
006FF4D7  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF4DA  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF4DD  83 C3 02                  ADD EBX,0x2
006FF4E0  46                        INC ESI
006FF4E1  D1 EA                     SHR EDX,0x1
006FF4E3  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FF4E6  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FF4E9  75 0C                     JNZ 0x006ff4f7
006FF4EB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF4EE  BA 80 00 00 00            MOV EDX,0x80
006FF4F3  41                        INC ECX
006FF4F4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff4f7:
006FF4F7  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FF4FA  47                        INC EDI
006FF4FB  4E                        DEC ESI
006FF4FC  85 F6                     TEST ESI,ESI
006FF4FE  0F 8E FD FE FF FF         JLE 0x006ff401
006FF504  EB 03                     JMP 0x006ff509
switchD_006ff4ab::caseD_2:
006FF506  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_006ff509:
006FF509  47                        INC EDI
006FF50A  4E                        DEC ESI
006FF50B  85 F6                     TEST ESI,ESI
006FF50D  0F 8E EE FE FF FF         JLE 0x006ff401
006FF513  EB 03                     JMP 0x006ff518
switchD_006ff4ab::caseD_3:
006FF515  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_006ff518:
006FF518  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF51B  84 11                     TEST byte ptr [ECX],DL
006FF51D  75 1E                     JNZ 0x006ff53d
006FF51F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF522  33 C9                     XOR ECX,ECX
006FF524  66 8B 0B                  MOV CX,word ptr [EBX]
006FF527  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FF52A  3B D9                     CMP EBX,ECX
006FF52C  77 0F                     JA 0x006ff53d
006FF52E  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FF531  33 C9                     XOR ECX,ECX
006FF533  8A 0F                     MOV CL,byte ptr [EDI]
006FF535  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FF538  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FF53B  88 0B                     MOV byte ptr [EBX],CL
LAB_006ff53d:
006FF53D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FF540  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FF543  83 C1 02                  ADD ECX,0x2
006FF546  43                        INC EBX
006FF547  D1 EA                     SHR EDX,0x1
006FF549  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF54C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FF54F  75 0C                     JNZ 0x006ff55d
006FF551  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF554  BA 80 00 00 00            MOV EDX,0x80
006FF559  41                        INC ECX
006FF55A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff55d:
006FF55D  47                        INC EDI
006FF55E  4E                        DEC ESI
006FF55F  85 F6                     TEST ESI,ESI
006FF561  0F 8E 9A FE FF FF         JLE 0x006ff401
006FF567  47                        INC EDI
006FF568  4E                        DEC ESI
006FF569  EB 0A                     JMP 0x006ff575
switchD_006ff4ab::caseD_4:
006FF56B  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FF56E  47                        INC EDI
006FF56F  4E                        DEC ESI
006FF570  EB 03                     JMP 0x006ff575
LAB_006ff572:
006FF572  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
switchD_006ff4ab::default:
006FF575  85 F6                     TEST ESI,ESI
006FF577  0F 8E 84 FE FF FF         JLE 0x006ff401
006FF57D  47                        INC EDI
006FF57E  4E                        DEC ESI
006FF57F  85 F6                     TEST ESI,ESI
006FF581  0F 8E 7A FE FF FF         JLE 0x006ff401
LAB_006ff587:
006FF587  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF58A  84 11                     TEST byte ptr [ECX],DL
006FF58C  75 1E                     JNZ 0x006ff5ac
006FF58E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF591  33 C9                     XOR ECX,ECX
006FF593  66 8B 0B                  MOV CX,word ptr [EBX]
006FF596  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FF599  3B D9                     CMP EBX,ECX
006FF59B  77 0F                     JA 0x006ff5ac
006FF59D  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FF5A0  33 C9                     XOR ECX,ECX
006FF5A2  8A 0F                     MOV CL,byte ptr [EDI]
006FF5A4  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FF5A7  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FF5AA  88 0B                     MOV byte ptr [EBX],CL
LAB_006ff5ac:
006FF5AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FF5AF  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FF5B2  83 C1 02                  ADD ECX,0x2
006FF5B5  43                        INC EBX
006FF5B6  D1 EA                     SHR EDX,0x1
006FF5B8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF5BB  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FF5BE  75 0C                     JNZ 0x006ff5cc
006FF5C0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF5C3  BA 80 00 00 00            MOV EDX,0x80
006FF5C8  41                        INC ECX
006FF5C9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff5cc:
006FF5CC  47                        INC EDI
006FF5CD  4E                        DEC ESI
006FF5CE  85 F6                     TEST ESI,ESI
006FF5D0  0F 8E 2B FE FF FF         JLE 0x006ff401
006FF5D6  47                        INC EDI
006FF5D7  4E                        DEC ESI
006FF5D8  85 F6                     TEST ESI,ESI
006FF5DA  0F 8E 21 FE FF FF         JLE 0x006ff401
006FF5E0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF5E3  84 11                     TEST byte ptr [ECX],DL
006FF5E5  75 1E                     JNZ 0x006ff605
006FF5E7  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FF5EA  33 C9                     XOR ECX,ECX
006FF5EC  66 8B 0B                  MOV CX,word ptr [EBX]
006FF5EF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FF5F2  3B D9                     CMP EBX,ECX
006FF5F4  77 0F                     JA 0x006ff605
006FF5F6  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FF5F9  33 C9                     XOR ECX,ECX
006FF5FB  8A 0F                     MOV CL,byte ptr [EDI]
006FF5FD  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FF600  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FF603  88 0B                     MOV byte ptr [EBX],CL
LAB_006ff605:
006FF605  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FF608  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FF60B  83 C1 02                  ADD ECX,0x2
006FF60E  43                        INC EBX
006FF60F  D1 EA                     SHR EDX,0x1
006FF611  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF614  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FF617  75 0C                     JNZ 0x006ff625
006FF619  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF61C  BA 80 00 00 00            MOV EDX,0x80
006FF621  41                        INC ECX
006FF622  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff625:
006FF625  47                        INC EDI
006FF626  4E                        DEC ESI
006FF627  85 F6                     TEST ESI,ESI
006FF629  0F 8E D2 FD FF FF         JLE 0x006ff401
006FF62F  47                        INC EDI
006FF630  4E                        DEC ESI
006FF631  85 F6                     TEST ESI,ESI
006FF633  0F 8E C8 FD FF FF         JLE 0x006ff401
006FF639  47                        INC EDI
006FF63A  4E                        DEC ESI
006FF63B  85 F6                     TEST ESI,ESI
006FF63D  0F 8F 44 FF FF FF         JG 0x006ff587
006FF643  E9 B9 FD FF FF            JMP 0x006ff401
