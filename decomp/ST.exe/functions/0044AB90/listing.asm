STAllPlayersC::CheckTmps:
0044AB90  55                        PUSH EBP
0044AB91  8B EC                     MOV EBP,ESP
0044AB93  83 EC 10                  SUB ESP,0x10
0044AB96  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044AB99  53                        PUSH EBX
0044AB9A  56                        PUSH ESI
0044AB9B  33 F6                     XOR ESI,ESI
0044AB9D  2B C6                     SUB EAX,ESI
0044AB9F  57                        PUSH EDI
0044ABA0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0044ABA3  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0044ABA6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0044ABA9  74 51                     JZ 0x0044abfc
0044ABAB  48                        DEC EAX
0044ABAC  74 33                     JZ 0x0044abe1
0044ABAE  68 BC 88 7A 00            PUSH 0x7a88bc
0044ABB3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044ABB8  56                        PUSH ESI
0044ABB9  56                        PUSH ESI
0044ABBA  68 DE 2F 00 00            PUSH 0x2fde
0044ABBF  68 04 60 7A 00            PUSH 0x7a6004
0044ABC4  E8 07 29 26 00            CALL 0x006ad4d0
0044ABC9  83 C4 18                  ADD ESP,0x18
0044ABCC  85 C0                     TEST EAX,EAX
0044ABCE  0F 84 A6 02 00 00         JZ 0x0044ae7a
0044ABD4  CC                        INT3
LAB_0044abe1:
0044ABE1  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0044ABE5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044ABE8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044ABEB  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044ABEE  C1 E1 04                  SHL ECX,0x4
0044ABF1  03 C8                     ADD ECX,EAX
0044ABF3  8D 14 4D D3 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4fd3]
0044ABFA  EB 19                     JMP 0x0044ac15
LAB_0044abfc:
0044ABFC  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0044AC00  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044AC03  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044AC06  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044AC09  C1 E1 04                  SHL ECX,0x4
0044AC0C  03 C8                     ADD ECX,EAX
0044AC0E  8D 14 4D 83 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4f83]
LAB_0044ac15:
0044AC15  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0044AC18  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0044AC1B  81 FF 9A 01 00 00         CMP EDI,0x19a
0044AC21  0F 8F E7 01 00 00         JG 0x0044ae0e
0044AC27  74 2E                     JZ 0x0044ac57
0044AC29  83 FF 5A                  CMP EDI,0x5a
0044AC2C  7F 18                     JG 0x0044ac46
0044AC2E  0F 84 1C 02 00 00         JZ 0x0044ae50
0044AC34  3B FE                     CMP EDI,ESI
0044AC36  0F 84 3E 02 00 00         JZ 0x0044ae7a
0044AC3C  83 FF 3C                  CMP EDI,0x3c
0044AC3F  74 16                     JZ 0x0044ac57
0044AC41  E9 DB 01 00 00            JMP 0x0044ae21
LAB_0044ac46:
0044AC46  81 FF 72 01 00 00         CMP EDI,0x172
0044AC4C  0F 84 FE 01 00 00         JZ 0x0044ae50
0044AC52  E9 CA 01 00 00            JMP 0x0044ae21
LAB_0044ac57:
0044AC57  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0044AC5A  3B D6                     CMP EDX,ESI
0044AC5C  0F 84 18 02 00 00         JZ 0x0044ae7a
0044AC62  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
0044AC65  3B DE                     CMP EBX,ESI
0044AC67  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044AC6A  0F 84 0A 02 00 00         JZ 0x0044ae7a
0044AC70  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044AC73  E8 C8 51 26 00            CALL 0x006afe40
0044AC78  85 DB                     TEST EBX,EBX
0044AC7A  7E 2E                     JLE 0x0044acaa
LAB_0044ac7c:
0044AC7C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044AC7F  8D 45 1E                  LEA EAX,[EBP + 0x1e]
0044AC82  50                        PUSH EAX
0044AC83  8B D6                     MOV EDX,ESI
0044AC85  E8 E6 1F 26 00            CALL 0x006acc70
0044AC8A  66 81 7D 1E FF FF         CMP word ptr [EBP + 0x1e],0xffff
0044AC90  75 0C                     JNZ 0x0044ac9e
0044AC92  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044AC95  56                        PUSH ESI
0044AC96  51                        PUSH ECX
0044AC97  E8 D4 5F 26 00            CALL 0x006b0c70
0044AC9C  4B                        DEC EBX
0044AC9D  4E                        DEC ESI
LAB_0044ac9e:
0044AC9E  46                        INC ESI
0044AC9F  3B F3                     CMP ESI,EBX
0044ACA1  7C D9                     JL 0x0044ac7c
0044ACA3  85 DB                     TEST EBX,EBX
0044ACA5  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044ACA8  77 15                     JA 0x0044acbf
LAB_0044acaa:
0044ACAA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044ACAD  52                        PUSH EDX
0044ACAE  E8 5D 34 26 00            CALL 0x006ae110
0044ACB3  5F                        POP EDI
0044ACB4  5E                        POP ESI
0044ACB5  83 C8 FF                  OR EAX,0xffffffff
0044ACB8  5B                        POP EBX
0044ACB9  8B E5                     MOV ESP,EBP
0044ACBB  5D                        POP EBP
0044ACBC  C2 18 00                  RET 0x18
LAB_0044acbf:
0044ACBF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0044ACC2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044ACC5  C7 45 18 00 00 00 00      MOV dword ptr [EBP + 0x18],0x0
0044ACCC  8D 58 0A                  LEA EBX,[EAX + 0xa]
0044ACCF  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_0044acd2:
0044ACD2  39 7B F6                  CMP dword ptr [EBX + -0xa],EDI
0044ACD5  0F 85 F6 00 00 00         JNZ 0x0044add1
0044ACDB  0F BE 4D 14               MOVSX ECX,byte ptr [EBP + 0x14]
0044ACDF  39 4B FA                  CMP dword ptr [EBX + -0x6],ECX
0044ACE2  0F 85 E9 00 00 00         JNZ 0x0044add1
0044ACE8  8B 03                     MOV EAX,dword ptr [EBX]
0044ACEA  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
0044ACED  85 F6                     TEST ESI,ESI
0044ACEF  0F 86 DC 00 00 00         JBE 0x0044add1
0044ACF5  8D 4D F4                  LEA ECX,[EBP + -0xc]
0044ACF8  E8 43 51 26 00            CALL 0x006afe40
0044ACFD  8B 13                     MOV EDX,dword ptr [EBX]
0044ACFF  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044AD02  E8 39 51 26 00            CALL 0x006afe40
0044AD07  33 FF                     XOR EDI,EDI
0044AD09  85 F6                     TEST ESI,ESI
0044AD0B  0F 8E 8F 00 00 00         JLE 0x0044ada0
LAB_0044ad11:
0044AD11  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0044AD14  8B D7                     MOV EDX,EDI
0044AD16  51                        PUSH ECX
0044AD17  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044AD1A  E8 51 1F 26 00            CALL 0x006acc70
0044AD1F  66 81 7D 0A FF FF         CMP word ptr [EBP + 0xa],0xffff
0044AD25  75 0C                     JNZ 0x0044ad33
0044AD27  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044AD2A  57                        PUSH EDI
0044AD2B  52                        PUSH EDX
0044AD2C  E8 3F 5F 26 00            CALL 0x006b0c70
0044AD31  4E                        DEC ESI
0044AD32  4F                        DEC EDI
LAB_0044ad33:
0044AD33  47                        INC EDI
0044AD34  3B FE                     CMP EDI,ESI
0044AD36  7C D9                     JL 0x0044ad11
0044AD38  85 F6                     TEST ESI,ESI
0044AD3A  76 64                     JBE 0x0044ada0
0044AD3C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044AD3F  33 FF                     XOR EDI,EDI
0044AD41  85 C0                     TEST EAX,EAX
0044AD43  7E 5B                     JLE 0x0044ada0
LAB_0044ad45:
0044AD45  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044AD48  8D 45 1E                  LEA EAX,[EBP + 0x1e]
0044AD4B  50                        PUSH EAX
0044AD4C  8B D7                     MOV EDX,EDI
0044AD4E  E8 1D 1F 26 00            CALL 0x006acc70
0044AD53  33 DB                     XOR EBX,EBX
0044AD55  85 F6                     TEST ESI,ESI
0044AD57  7E 44                     JLE 0x0044ad9d
LAB_0044ad59:
0044AD59  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0044AD5C  8B D3                     MOV EDX,EBX
0044AD5E  51                        PUSH ECX
0044AD5F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044AD62  E8 09 1F 26 00            CALL 0x006acc70
0044AD67  66 8B 55 1E               MOV DX,word ptr [EBP + 0x1e]
0044AD6B  66 3B 55 0A               CMP DX,word ptr [EBP + 0xa]
0044AD6F  74 07                     JZ 0x0044ad78
0044AD71  43                        INC EBX
0044AD72  3B DE                     CMP EBX,ESI
0044AD74  7D 27                     JGE 0x0044ad9d
0044AD76  EB E1                     JMP 0x0044ad59
LAB_0044ad78:
0044AD78  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044AD7B  57                        PUSH EDI
0044AD7C  50                        PUSH EAX
0044AD7D  E8 EE 5E 26 00            CALL 0x006b0c70
0044AD82  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044AD85  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044AD88  4A                        DEC EDX
0044AD89  53                        PUSH EBX
0044AD8A  51                        PUSH ECX
0044AD8B  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0044AD8E  4F                        DEC EDI
0044AD8F  E8 DC 5E 26 00            CALL 0x006b0c70
0044AD94  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044AD97  4E                        DEC ESI
0044AD98  47                        INC EDI
0044AD99  3B F8                     CMP EDI,EAX
0044AD9B  7C A8                     JL 0x0044ad45
LAB_0044ad9d:
0044AD9D  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0044ada0:
0044ADA0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044ADA3  52                        PUSH EDX
0044ADA4  E8 67 33 26 00            CALL 0x006ae110
0044ADA9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044ADAC  33 FF                     XOR EDI,EDI
0044ADAE  50                        PUSH EAX
0044ADAF  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0044ADB2  E8 59 33 26 00            CALL 0x006ae110
0044ADB7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044ADBA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0044ADBD  3B C7                     CMP EAX,EDI
0044ADBF  75 04                     JNZ 0x0044adc5
0044ADC1  3B F7                     CMP ESI,EDI
0044ADC3  74 34                     JZ 0x0044adf9
LAB_0044adc5:
0044ADC5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044ADC8  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0044ADCB  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0044ADCE  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_0044add1:
0044ADD1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0044ADD4  83 C3 10                  ADD EBX,0x10
0044ADD7  40                        INC EAX
0044ADD8  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0044ADDB  83 F8 05                  CMP EAX,0x5
0044ADDE  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0044ADE1  0F 8C EB FE FF FF         JL 0x0044acd2
0044ADE7  52                        PUSH EDX
0044ADE8  E8 23 33 26 00            CALL 0x006ae110
0044ADED  5F                        POP EDI
0044ADEE  5E                        POP ESI
0044ADEF  83 C8 FF                  OR EAX,0xffffffff
0044ADF2  5B                        POP EBX
0044ADF3  8B E5                     MOV ESP,EBP
0044ADF5  5D                        POP EBP
0044ADF6  C2 18 00                  RET 0x18
LAB_0044adf9:
0044ADF9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044ADFC  52                        PUSH EDX
0044ADFD  E8 0E 33 26 00            CALL 0x006ae110
0044AE02  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0044AE05  5F                        POP EDI
0044AE06  5E                        POP ESI
0044AE07  5B                        POP EBX
0044AE08  8B E5                     MOV ESP,EBP
0044AE0A  5D                        POP EBP
0044AE0B  C2 18 00                  RET 0x18
LAB_0044ae0e:
0044AE0E  8B C7                     MOV EAX,EDI
0044AE10  2D A4 01 00 00            SUB EAX,0x1a4
0044AE15  74 39                     JZ 0x0044ae50
0044AE17  83 E8 0A                  SUB EAX,0xa
0044AE1A  74 34                     JZ 0x0044ae50
0044AE1C  83 E8 0A                  SUB EAX,0xa
0044AE1F  74 2F                     JZ 0x0044ae50
LAB_0044ae21:
0044AE21  68 8C 88 7A 00            PUSH 0x7a888c
0044AE26  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044AE2B  56                        PUSH ESI
0044AE2C  56                        PUSH ESI
0044AE2D  68 19 30 00 00            PUSH 0x3019
0044AE32  68 04 60 7A 00            PUSH 0x7a6004
0044AE37  E8 94 26 26 00            CALL 0x006ad4d0
0044AE3C  83 C4 18                  ADD ESP,0x18
0044AE3F  85 C0                     TEST EAX,EAX
0044AE41  74 37                     JZ 0x0044ae7a
0044AE43  CC                        INT3
LAB_0044ae50:
0044AE50  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0044AE53  66 8B 75 1C               MOV SI,word ptr [EBP + 0x1c]
0044AE57  8A 55 14                  MOV DL,byte ptr [EBP + 0x14]
0044AE5A  33 C0                     XOR EAX,EAX
0044AE5C  83 C1 04                  ADD ECX,0x4
LAB_0044ae5f:
0044AE5F  39 79 FC                  CMP dword ptr [ECX + -0x4],EDI
0044AE62  75 0D                     JNZ 0x0044ae71
0044AE64  66 39 71 04               CMP word ptr [ECX + 0x4],SI
0044AE68  75 07                     JNZ 0x0044ae71
0044AE6A  0F BE DA                  MOVSX EBX,DL
0044AE6D  39 19                     CMP dword ptr [ECX],EBX
0044AE6F  74 0C                     JZ 0x0044ae7d
LAB_0044ae71:
0044AE71  40                        INC EAX
0044AE72  83 C1 10                  ADD ECX,0x10
0044AE75  83 F8 05                  CMP EAX,0x5
0044AE78  7C E5                     JL 0x0044ae5f
LAB_0044ae7a:
0044AE7A  83 C8 FF                  OR EAX,0xffffffff
LAB_0044ae7d:
0044AE7D  5F                        POP EDI
0044AE7E  5E                        POP ESI
0044AE7F  5B                        POP EBX
0044AE80  8B E5                     MOV ESP,EBP
0044AE82  5D                        POP EBP
0044AE83  C2 18 00                  RET 0x18
