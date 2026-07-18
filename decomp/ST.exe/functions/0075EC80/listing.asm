FUN_0075ec80:
0075EC80  55                        PUSH EBP
0075EC81  8B EC                     MOV EBP,ESP
0075EC83  83 EC 5C                  SUB ESP,0x5c
0075EC86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075EC89  56                        PUSH ESI
0075EC8A  8B B0 BA 01 00 00         MOV ESI,dword ptr [EAX + 0x1ba]
0075EC90  8B 90 32 01 00 00         MOV EDX,dword ptr [EAX + 0x132]
0075EC96  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0075EC99  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
0075EC9C  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0075EC9F  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
0075ECA2  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0075ECA5  8B 48 68                  MOV ECX,dword ptr [EAX + 0x68]
0075ECA8  8B 80 80 00 00 00         MOV EAX,dword ptr [EAX + 0x80]
0075ECAE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075ECB1  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
0075ECB4  8B 10                     MOV EDX,dword ptr [EAX]
0075ECB6  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0075ECB9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0075ECBC  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0075ECBF  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
0075ECC2  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0075ECC5  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075ECC8  33 D2                     XOR EDX,EDX
0075ECCA  3B C2                     CMP EAX,EDX
0075ECCC  0F 8E 4E 02 00 00         JLE 0x0075ef20
0075ECD2  53                        PUSH EBX
0075ECD3  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075ECD6  57                        PUSH EDI
0075ECD7  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075ECDA  2B DF                     SUB EBX,EDI
0075ECDC  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0075ECDF  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
0075ECE2  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0075ECE5  EB 03                     JMP 0x0075ecea
LAB_0075ece7:
0075ECE7  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
LAB_0075ecea:
0075ECEA  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0075ECED  8B 04 3B                  MOV EAX,dword ptr [EBX + EDI*0x1]
0075ECF0  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
0075ECF3  8B 3F                     MOV EDI,dword ptr [EDI]
0075ECF5  3B DA                     CMP EBX,EDX
0075ECF7  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0075ECFA  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0075ECFD  74 30                     JZ 0x0075ed2f
0075ECFF  03 C1                     ADD EAX,ECX
0075ED01  C7 45 D0 FF FF FF FF      MOV dword ptr [EBP + -0x30],0xffffffff
0075ED08  C7 45 FC FD FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffd
0075ED0F  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
0075ED12  8D 44 48 FD               LEA EAX,[EAX + ECX*0x2 + -0x3]
0075ED16  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0075ED19  8D 44 0F FF               LEA EAX,[EDI + ECX*0x1 + -0x1]
0075ED1D  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
0075ED20  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075ED23  8D 44 49 03               LEA EAX,[ECX + ECX*0x2 + 0x3]
0075ED27  8D 04 47                  LEA EAX,[EDI + EAX*0x2]
0075ED2A  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0075ED2D  EB 1A                     JMP 0x0075ed49
LAB_0075ed2f:
0075ED2F  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
0075ED32  B8 01 00 00 00            MOV EAX,0x1
0075ED37  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0075ED3A  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0075ED3D  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
0075ED44  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0075ED47  8B C7                     MOV EAX,EDI
LAB_0075ed49:
0075ED49  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0075ED4C  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0075ED4F  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0075ED52  33 D2                     XOR EDX,EDX
0075ED54  33 DB                     XOR EBX,EBX
0075ED56  33 FF                     XOR EDI,EDI
0075ED58  33 F6                     XOR ESI,ESI
0075ED5A  3B CA                     CMP ECX,EDX
0075ED5C  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0075ED5F  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0075ED62  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0075ED65  0F 86 83 01 00 00         JBE 0x0075eeee
0075ED6B  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0075ED6E  EB 03                     JMP 0x0075ed73
LAB_0075ed70:
0075ED70  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_0075ed73:
0075ED73  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075ED76  0F BF 14 48               MOVSX EDX,word ptr [EAX + ECX*0x2]
0075ED7A  8D 4C 32 08               LEA ECX,[EDX + ESI*0x1 + 0x8]
0075ED7E  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0075ED81  33 D2                     XOR EDX,EDX
0075ED83  8A 16                     MOV DL,byte ptr [ESI]
0075ED85  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075ED88  C1 F9 04                  SAR ECX,0x4
0075ED8B  8B 0C 8E                  MOV ECX,dword ptr [ESI + ECX*0x4]
0075ED8E  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0075ED91  03 CA                     ADD ECX,EDX
0075ED93  33 D2                     XOR EDX,EDX
0075ED95  8A 14 31                  MOV DL,byte ptr [ECX + ESI*0x1]
0075ED98  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075ED9B  8B F2                     MOV ESI,EDX
0075ED9D  0F BF 54 48 02            MOVSX EDX,word ptr [EAX + ECX*0x2 + 0x2]
0075EDA2  8D 4C 3A 08               LEA ECX,[EDX + EDI*0x1 + 0x8]
0075EDA6  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0075EDA9  33 D2                     XOR EDX,EDX
0075EDAB  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
0075EDAE  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0075EDB1  C1 F9 04                  SAR ECX,0x4
0075EDB4  8B 3C 8F                  MOV EDI,dword ptr [EDI + ECX*0x4]
0075EDB7  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0075EDBA  03 FA                     ADD EDI,EDX
0075EDBC  33 D2                     XOR EDX,EDX
0075EDBE  8A 14 0F                  MOV DL,byte ptr [EDI + ECX*0x1]
0075EDC1  8B FA                     MOV EDI,EDX
0075EDC3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075EDC6  0F BF 44 50 04            MOVSX EAX,word ptr [EAX + EDX*0x2 + 0x4]
0075EDCB  8D 54 18 08               LEA EDX,[EAX + EBX*0x1 + 0x8]
0075EDCF  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0075EDD2  33 C0                     XOR EAX,EAX
0075EDD4  8A 43 02                  MOV AL,byte ptr [EBX + 0x2]
0075EDD7  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0075EDDA  C1 FA 04                  SAR EDX,0x4
0075EDDD  8B 14 93                  MOV EDX,dword ptr [EBX + EDX*0x4]
0075EDE0  33 DB                     XOR EBX,EBX
0075EDE2  03 D0                     ADD EDX,EAX
0075EDE4  8B C6                     MOV EAX,ESI
0075EDE6  C1 F8 03                  SAR EAX,0x3
0075EDE9  8A 1C 0A                  MOV BL,byte ptr [EDX + ECX*0x1]
0075EDEC  8B CF                     MOV ECX,EDI
0075EDEE  C1 F9 02                  SAR ECX,0x2
0075EDF1  8B D3                     MOV EDX,EBX
0075EDF3  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0075EDF6  C1 FA 03                  SAR EDX,0x3
0075EDF9  C1 E1 05                  SHL ECX,0x5
0075EDFC  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0075EDFF  03 CA                     ADD ECX,EDX
0075EE01  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0075EE04  8B 14 82                  MOV EDX,dword ptr [EDX + EAX*0x4]
0075EE07  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
0075EE0C  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
0075EE0F  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0075EE12  75 15                     JNZ 0x0075ee29
0075EE14  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075EE17  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0075EE1A  51                        PUSH ECX
0075EE1B  52                        PUSH EDX
0075EE1C  50                        PUSH EAX
0075EE1D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075EE20  50                        PUSH EAX
0075EE21  E8 6A FA FF FF            CALL 0x0075e890
0075EE26  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
LAB_0075ee29:
0075EE29  33 C0                     XOR EAX,EAX
0075EE2B  33 D2                     XOR EDX,EDX
0075EE2D  66 8B 01                  MOV AX,word ptr [ECX]
0075EE30  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075EE33  48                        DEC EAX
0075EE34  88 01                     MOV byte ptr [ECX],AL
0075EE36  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0075EE39  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0075EE3C  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0075EE3F  2B F2                     SUB ESI,EDX
0075EE41  33 D2                     XOR EDX,EDX
0075EE43  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0075EE46  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0075EE49  2B FA                     SUB EDI,EDX
0075EE4B  33 D2                     XOR EDX,EDX
0075EE4D  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0075EE50  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075EE53  8D 04 36                  LEA EAX,[ESI + ESI*0x1]
0075EE56  2B DA                     SUB EBX,EDX
0075EE58  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075EE5B  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0075EE5E  03 F0                     ADD ESI,EAX
0075EE60  03 D6                     ADD EDX,ESI
0075EE62  03 F0                     ADD ESI,EAX
0075EE64  66 89 11                  MOV word ptr [ECX],DX
0075EE67  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0075EE6A  03 D6                     ADD EDX,ESI
0075EE6C  03 F0                     ADD ESI,EAX
0075EE6E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0075EE71  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075EE74  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
0075EE77  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0075EE7A  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075EE7D  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
0075EE80  03 F8                     ADD EDI,EAX
0075EE82  03 D7                     ADD EDX,EDI
0075EE84  03 F8                     ADD EDI,EAX
0075EE86  66 89 51 02               MOV word ptr [ECX + 0x2],DX
0075EE8A  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0075EE8D  03 D7                     ADD EDX,EDI
0075EE8F  03 F8                     ADD EDI,EAX
0075EE91  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0075EE94  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075EE97  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
0075EE9A  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0075EE9D  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0075EEA0  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0075EEA3  03 D8                     ADD EBX,EAX
0075EEA5  03 D3                     ADD EDX,EBX
0075EEA7  03 D8                     ADD EBX,EAX
0075EEA9  66 89 51 04               MOV word ptr [ECX + 0x4],DX
0075EEAD  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0075EEB0  03 D3                     ADD EDX,EBX
0075EEB2  03 D8                     ADD EBX,EAX
0075EEB4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075EEB7  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0075EEBA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075EEBD  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0075EEC0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075EEC3  03 D0                     ADD EDX,EAX
0075EEC5  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0075EEC8  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0075EECB  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0075EECE  01 55 F8                  ADD dword ptr [EBP + -0x8],EDX
0075EED1  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0075EED4  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0075EED7  48                        DEC EAX
0075EED8  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0075EEDB  0F 85 8F FE FF FF         JNZ 0x0075ed70
0075EEE1  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0075EEE4  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
0075EEE7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075EEEA  33 D2                     XOR EDX,EDX
0075EEEC  EB 03                     JMP 0x0075eef1
LAB_0075eeee:
0075EEEE  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
LAB_0075eef1:
0075EEF1  66 8B 7D F0               MOV DI,word ptr [EBP + -0x10]
0075EEF5  66 89 38                  MOV word ptr [EAX],DI
0075EEF8  66 8B 7D EC               MOV DI,word ptr [EBP + -0x14]
0075EEFC  66 89 78 02               MOV word ptr [EAX + 0x2],DI
0075EF00  66 8B 7D E8               MOV DI,word ptr [EBP + -0x18]
0075EF04  66 89 78 04               MOV word ptr [EAX + 0x4],DI
0075EF08  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0075EF0B  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0075EF0E  83 C7 04                  ADD EDI,0x4
0075EF11  48                        DEC EAX
0075EF12  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0075EF15  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0075EF18  0F 85 C9 FD FF FF         JNZ 0x0075ece7
0075EF1E  5F                        POP EDI
0075EF1F  5B                        POP EBX
LAB_0075ef20:
0075EF20  5E                        POP ESI
0075EF21  8B E5                     MOV ESP,EBP
0075EF23  5D                        POP EBP
0075EF24  C2 10 00                  RET 0x10
