STGroupBoatC::GrpAttack:
0049AAF0  55                        PUSH EBP
0049AAF1  8B EC                     MOV EBP,ESP
0049AAF3  83 EC 6C                  SUB ESP,0x6c
0049AAF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0049AAFB  53                        PUSH EBX
0049AAFC  56                        PUSH ESI
0049AAFD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0049AB00  33 DB                     XOR EBX,EBX
0049AB02  57                        PUSH EDI
0049AB03  8D 55 98                  LEA EDX,[EBP + -0x68]
0049AB06  8D 4D 94                  LEA ECX,[EBP + -0x6c]
0049AB09  53                        PUSH EBX
0049AB0A  52                        PUSH EDX
0049AB0B  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
0049AB12  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0049AB15  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049AB1B  E8 D0 2C 29 00            CALL 0x0072d7f0
0049AB20  8B F0                     MOV ESI,EAX
0049AB22  83 C4 08                  ADD ESP,0x8
0049AB25  3B F3                     CMP ESI,EBX
0049AB27  0F 85 2C 07 00 00         JNZ 0x0049b259
0049AB2D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049AB30  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0049AB33  83 F8 01                  CMP EAX,0x1
0049AB36  75 29                     JNZ 0x0049ab61
0049AB38  8B 86 0E 02 00 00         MOV EAX,dword ptr [ESI + 0x20e]
0049AB3E  50                        PUSH EAX
0049AB3F  E8 CC 35 21 00            CALL 0x006ae110
0049AB44  8D 8E 1E 02 00 00         LEA ECX,[ESI + 0x21e]
0049AB4A  89 9E 0E 02 00 00         MOV dword ptr [ESI + 0x20e],EBX
0049AB50  51                        PUSH ECX
0049AB51  89 9E 12 02 00 00         MOV dword ptr [ESI + 0x212],EBX
0049AB57  E8 04 05 21 00            CALL 0x006ab060
0049AB5C  33 C0                     XOR EAX,EAX
0049AB5E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0049ab61:
0049AB61  3B C3                     CMP EAX,EBX
0049AB63  0F 85 BA 06 00 00         JNZ 0x0049b223
0049AB69  B9 15 00 00 00            MOV ECX,0x15
0049AB6E  33 C0                     XOR EAX,EAX
0049AB70  8D BE 89 00 00 00         LEA EDI,[ESI + 0x89]
0049AB76  F3 AB                     STOSD.REP ES:EDI
0049AB78  8B 86 E7 00 00 00         MOV EAX,dword ptr [ESI + 0xe7]
0049AB7E  89 5E 65                  MOV dword ptr [ESI + 0x65],EBX
0049AB81  3B C3                     CMP EAX,EBX
0049AB83  0F 85 4A 01 00 00         JNZ 0x0049acd3
0049AB89  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0049AB8C  33 FF                     XOR EDI,EDI
0049AB8E  8B 96 EF 00 00 00         MOV EDX,dword ptr [ESI + 0xef]
0049AB94  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0049AB97  3B C7                     CMP EAX,EDI
0049AB99  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0049AB9C  75 1A                     JNZ 0x0049abb8
0049AB9E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049ABA3  68 8F 06 00 00            PUSH 0x68f
0049ABA8  68 3C BE 7A 00            PUSH 0x7abe3c
0049ABAD  50                        PUSH EAX
0049ABAE  68 09 00 FE AF            PUSH 0xaffe0009
0049ABB3  E8 88 B2 20 00            CALL 0x006a5e40
LAB_0049abb8:
0049ABB8  8B 86 0E 02 00 00         MOV EAX,dword ptr [ESI + 0x20e]
0049ABBE  3B C7                     CMP EAX,EDI
0049ABC0  74 12                     JZ 0x0049abd4
0049ABC2  50                        PUSH EAX
0049ABC3  E8 48 35 21 00            CALL 0x006ae110
0049ABC8  89 BE 0E 02 00 00         MOV dword ptr [ESI + 0x20e],EDI
0049ABCE  89 BE 12 02 00 00         MOV dword ptr [ESI + 0x212],EDI
LAB_0049abd4:
0049ABD4  6A 01                     PUSH 0x1
0049ABD6  6A 04                     PUSH 0x4
0049ABD8  6A 00                     PUSH 0x0
0049ABDA  6A 00                     PUSH 0x0
0049ABDC  E8 AF 36 21 00            CALL 0x006ae290
0049ABE1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0049ABE4  33 DB                     XOR EBX,EBX
0049ABE6  89 86 0E 02 00 00         MOV dword ptr [ESI + 0x20e],EAX
0049ABEC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049ABEF  85 C0                     TEST EAX,EAX
0049ABF1  0F 8E 9E 00 00 00         JLE 0x0049ac95
0049ABF7  33 FF                     XOR EDI,EDI
LAB_0049abf9:
0049ABF9  8D 4D D8                  LEA ECX,[EBP + -0x28]
0049ABFC  8B D7                     MOV EDX,EDI
0049ABFE  51                        PUSH ECX
0049ABFF  8B 8E EF 00 00 00         MOV ECX,dword ptr [ESI + 0xef]
0049AC05  E8 66 20 21 00            CALL 0x006acc70
0049AC0A  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0049AC0D  3C 08                     CMP AL,0x8
0049AC0F  73 75                     JNC 0x0049ac86
0049AC11  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049AC17  85 C9                     TEST ECX,ECX
0049AC19  74 10                     JZ 0x0049ac2b
0049AC1B  0F BE C0                  MOVSX EAX,AL
0049AC1E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0049AC21  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0049AC29  73 5B                     JNC 0x0049ac86
LAB_0049ac2b:
0049AC2B  0F BE 55 D9               MOVSX EDX,byte ptr [EBP + -0x27]
0049AC2F  8B 45 DA                  MOV EAX,dword ptr [EBP + -0x26]
0049AC32  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0049AC35  52                        PUSH EDX
0049AC36  50                        PUSH EAX
0049AC37  51                        PUSH ECX
0049AC38  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049AC3E  E8 77 7C F6 FF            CALL 0x004028ba
0049AC43  8B F0                     MOV ESI,EAX
0049AC45  85 F6                     TEST ESI,ESI
0049AC47  74 3A                     JZ 0x0049ac83
0049AC49  8B 16                     MOV EDX,dword ptr [ESI]
0049AC4B  8B CE                     MOV ECX,ESI
0049AC4D  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0049AC53  83 F8 01                  CMP EAX,0x1
0049AC56  75 2B                     JNZ 0x0049ac83
0049AC58  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049AC5B  8B 06                     MOV EAX,dword ptr [ESI]
0049AC5D  0F BE 51 24               MOVSX EDX,byte ptr [ECX + 0x24]
0049AC61  52                        PUSH EDX
0049AC62  8B CE                     MOV ECX,ESI
0049AC64  FF 90 F4 00 00 00         CALL dword ptr [EAX + 0xf4]
0049AC6A  83 F8 01                  CMP EAX,0x1
0049AC6D  75 14                     JNZ 0x0049ac83
0049AC6F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049AC72  8D 45 D8                  LEA EAX,[EBP + -0x28]
0049AC75  50                        PUSH EAX
0049AC76  57                        PUSH EDI
0049AC77  8B 91 0E 02 00 00         MOV EDX,dword ptr [ECX + 0x20e]
0049AC7D  52                        PUSH EDX
0049AC7E  E8 BD 34 21 00            CALL 0x006ae140
LAB_0049ac83:
0049AC83  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_0049ac86:
0049AC86  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049AC89  43                        INC EBX
0049AC8A  0F BF FB                  MOVSX EDI,BX
0049AC8D  3B F8                     CMP EDI,EAX
0049AC8F  0F 8C 64 FF FF FF         JL 0x0049abf9
LAB_0049ac95:
0049AC95  8B 86 EF 00 00 00         MOV EAX,dword ptr [ESI + 0xef]
0049AC9B  50                        PUSH EAX
0049AC9C  E8 6F 34 21 00            CALL 0x006ae110
0049ACA1  8B 8E 0E 02 00 00         MOV ECX,dword ptr [ESI + 0x20e]
0049ACA7  C7 86 EF 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xef],0x0
0049ACB1  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0049ACB4  85 C0                     TEST EAX,EAX
0049ACB6  75 1B                     JNZ 0x0049acd3
0049ACB8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049ACBE  68 9D 06 00 00            PUSH 0x69d
0049ACC3  68 3C BE 7A 00            PUSH 0x7abe3c
0049ACC8  52                        PUSH EDX
0049ACC9  68 09 00 FE AF            PUSH 0xaffe0009
0049ACCE  E8 6D B1 20 00            CALL 0x006a5e40
LAB_0049acd3:
0049ACD3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0049ACD6  83 BE E7 00 00 00 01      CMP dword ptr [ESI + 0xe7],0x1
0049ACDD  0F 85 81 04 00 00         JNZ 0x0049b164
0049ACE3  8B 86 0E 02 00 00         MOV EAX,dword ptr [ESI + 0x20e]
0049ACE9  33 FF                     XOR EDI,EDI
0049ACEB  3B C7                     CMP EAX,EDI
0049ACED  74 12                     JZ 0x0049ad01
0049ACEF  50                        PUSH EAX
0049ACF0  E8 1B 34 21 00            CALL 0x006ae110
0049ACF5  89 BE 0E 02 00 00         MOV dword ptr [ESI + 0x20e],EDI
0049ACFB  89 BE 12 02 00 00         MOV dword ptr [ESI + 0x212],EDI
LAB_0049ad01:
0049AD01  6A 01                     PUSH 0x1
0049AD03  6A 04                     PUSH 0x4
0049AD05  6A 01                     PUSH 0x1
0049AD07  57                        PUSH EDI
0049AD08  E8 83 35 21 00            CALL 0x006ae290
0049AD0D  0F BF 96 F9 00 00 00      MOVSX EDX,word ptr [ESI + 0xf9]
0049AD14  89 86 0E 02 00 00         MOV dword ptr [ESI + 0x20e],EAX
0049AD1A  66 8B 86 F3 00 00 00      MOV AX,word ptr [ESI + 0xf3]
0049AD21  0F BF C8                  MOVSX ECX,AX
0049AD24  03 D1                     ADD EDX,ECX
0049AD26  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0049AD29  3B CA                     CMP ECX,EDX
0049AD2B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049AD2E  0F 8D FE 03 00 00         JGE 0x0049b132
LAB_0049ad34:
0049AD34  66 8B 8E F5 00 00 00      MOV CX,word ptr [ESI + 0xf5]
0049AD3B  0F BF 96 FB 00 00 00      MOVSX EDX,word ptr [ESI + 0xfb]
0049AD42  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0049AD45  0F BF C9                  MOVSX ECX,CX
0049AD48  03 D1                     ADD EDX,ECX
0049AD4A  3B CA                     CMP ECX,EDX
0049AD4C  0F 8D C1 03 00 00         JGE 0x0049b113
LAB_0049ad52:
0049AD52  66 8B 86 F7 00 00 00      MOV AX,word ptr [ESI + 0xf7]
0049AD59  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0049AD5C  0F BF D8                  MOVSX EBX,AX
0049AD5F  0F BF 86 FD 00 00 00      MOVSX EAX,word ptr [ESI + 0xfd]
0049AD66  03 C3                     ADD EAX,EBX
0049AD68  3B D8                     CMP EBX,EAX
0049AD6A  0F 8D 7C 03 00 00         JGE 0x0049b0ec
0049AD70  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_0049ad73:
0049AD73  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0049AD76  66 85 C9                  TEST CX,CX
0049AD79  7C 4F                     JL 0x0049adca
0049AD7B  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
0049AD82  66 3B CE                  CMP CX,SI
0049AD85  7D 43                     JGE 0x0049adca
0049AD87  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049AD8A  66 85 C0                  TEST AX,AX
0049AD8D  7C 3B                     JL 0x0049adca
0049AD8F  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0049AD96  7D 32                     JGE 0x0049adca
0049AD98  66 85 D2                  TEST DX,DX
0049AD9B  7C 2D                     JL 0x0049adca
0049AD9D  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0049ADA4  7D 24                     JGE 0x0049adca
0049ADA6  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0049ADAD  0F BF F6                  MOVSX ESI,SI
0049ADB0  0F AF FB                  IMUL EDI,EBX
0049ADB3  0F BF C0                  MOVSX EAX,AX
0049ADB6  0F AF F0                  IMUL ESI,EAX
0049ADB9  0F BF C1                  MOVSX EAX,CX
0049ADBC  03 C7                     ADD EAX,EDI
0049ADBE  03 F0                     ADD ESI,EAX
0049ADC0  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0049ADC5  8B 3C F0                  MOV EDI,dword ptr [EAX + ESI*0x8]
0049ADC8  EB 02                     JMP 0x0049adcc
LAB_0049adca:
0049ADCA  33 FF                     XOR EDI,EDI
LAB_0049adcc:
0049ADCC  85 FF                     TEST EDI,EDI
0049ADCE  0F 84 53 01 00 00         JZ 0x0049af27
0049ADD4  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0049ADD7  83 F8 14                  CMP EAX,0x14
0049ADDA  74 12                     JZ 0x0049adee
0049ADDC  3D E8 03 00 00            CMP EAX,0x3e8
0049ADE1  74 0B                     JZ 0x0049adee
0049ADE3  3D E9 03 00 00            CMP EAX,0x3e9
0049ADE8  0F 85 39 01 00 00         JNZ 0x0049af27
LAB_0049adee:
0049ADEE  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0049ADF1  80 F9 08                  CMP CL,0x8
0049ADF4  88 4D D8                  MOV byte ptr [EBP + -0x28],CL
0049ADF7  0F 83 C7 02 00 00         JNC 0x0049b0c4
0049ADFD  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049AE02  85 C0                     TEST EAX,EAX
0049AE04  74 14                     JZ 0x0049ae1a
0049AE06  0F BE C1                  MOVSX EAX,CL
0049AE09  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0049AE0C  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0049AE14  0F 83 AA 02 00 00         JNC 0x0049b0c4
LAB_0049ae1a:
0049AE1A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0049AE1D  8A 42 24                  MOV AL,byte ptr [EDX + 0x24]
0049AE20  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0049AE26  84 D2                     TEST DL,DL
0049AE28  88 45 E8                  MOV byte ptr [EBP + -0x18],AL
0049AE2B  74 2D                     JZ 0x0049ae5a
0049AE2D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049AE30  33 D2                     XOR EDX,EDX
0049AE32  25 FF 00 00 00            AND EAX,0xff
0049AE37  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0049AE3A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0049AE3D  25 FF 00 00 00            AND EAX,0xff
0049AE42  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0049AE49  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0049AE4C  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0049AE53  0F 95 C2                  SETNZ DL
0049AE56  8B C2                     MOV EAX,EDX
0049AE58  EB 7A                     JMP 0x0049aed4
LAB_0049ae5a:
0049AE5A  3A C8                     CMP CL,AL
0049AE5C  74 6B                     JZ 0x0049aec9
0049AE5E  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0049AE61  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0049AE64  25 FF 00 00 00            AND EAX,0xff
0049AE69  81 E1 FF 00 00 00         AND ECX,0xff
0049AE6F  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0049AE76  84 D2                     TEST DL,DL
0049AE78  75 10                     JNZ 0x0049ae8a
0049AE7A  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0049AE81  75 07                     JNZ 0x0049ae8a
0049AE83  B8 FE FF FF FF            MOV EAX,0xfffffffe
0049AE88  EB 41                     JMP 0x0049aecb
LAB_0049ae8a:
0049AE8A  80 FA 01                  CMP DL,0x1
0049AE8D  75 0F                     JNZ 0x0049ae9e
0049AE8F  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0049AE97  75 05                     JNZ 0x0049ae9e
0049AE99  83 C8 FF                  OR EAX,0xffffffff
0049AE9C  EB 2D                     JMP 0x0049aecb
LAB_0049ae9e:
0049AE9E  84 D2                     TEST DL,DL
0049AEA0  75 11                     JNZ 0x0049aeb3
0049AEA2  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0049AEAA  75 07                     JNZ 0x0049aeb3
0049AEAC  B8 01 00 00 00            MOV EAX,0x1
0049AEB1  EB 18                     JMP 0x0049aecb
LAB_0049aeb3:
0049AEB3  80 FA 01                  CMP DL,0x1
0049AEB6  75 11                     JNZ 0x0049aec9
0049AEB8  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0049AEC0  75 07                     JNZ 0x0049aec9
0049AEC2  B8 02 00 00 00            MOV EAX,0x2
0049AEC7  EB 02                     JMP 0x0049aecb
LAB_0049aec9:
0049AEC9  33 C0                     XOR EAX,EAX
LAB_0049aecb:
0049AECB  33 C9                     XOR ECX,ECX
0049AECD  85 C0                     TEST EAX,EAX
0049AECF  0F 9C C1                  SETL CL
0049AED2  8B C1                     MOV EAX,ECX
LAB_0049aed4:
0049AED4  85 C0                     TEST EAX,EAX
0049AED6  0F 84 E8 01 00 00         JZ 0x0049b0c4
0049AEDC  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
0049AEE0  C6 45 D9 01               MOV byte ptr [EBP + -0x27],0x1
0049AEE4  66 89 55 DA               MOV word ptr [EBP + -0x26],DX
0049AEE8  8B 07                     MOV EAX,dword ptr [EDI]
0049AEEA  8B CF                     MOV ECX,EDI
0049AEEC  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0049AEF2  83 F8 01                  CMP EAX,0x1
0049AEF5  75 2A                     JNZ 0x0049af21
0049AEF7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0049AEFA  8B 17                     MOV EDX,dword ptr [EDI]
0049AEFC  8B CF                     MOV ECX,EDI
0049AEFE  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0049AF02  50                        PUSH EAX
0049AF03  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
0049AF09  83 F8 01                  CMP EAX,0x1
0049AF0C  75 13                     JNZ 0x0049af21
0049AF0E  8B 96 0E 02 00 00         MOV EDX,dword ptr [ESI + 0x20e]
0049AF14  8D 4D D8                  LEA ECX,[EBP + -0x28]
0049AF17  51                        PUSH ECX
0049AF18  52                        PUSH EDX
0049AF19  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0049AF1C  E8 9F 32 21 00            CALL 0x006ae1c0
LAB_0049af21:
0049AF21  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0049AF24  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0049af27:
0049AF27  66 85 C9                  TEST CX,CX
0049AF2A  7C 52                     JL 0x0049af7e
0049AF2C  66 3B 0D 40 B2 7F 00      CMP CX,word ptr [0x007fb240]
0049AF33  7D 49                     JGE 0x0049af7e
0049AF35  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049AF38  66 85 C0                  TEST AX,AX
0049AF3B  7C 41                     JL 0x0049af7e
0049AF3D  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0049AF44  7D 38                     JGE 0x0049af7e
0049AF46  66 85 D2                  TEST DX,DX
0049AF49  7C 33                     JL 0x0049af7e
0049AF4B  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0049AF52  7D 2A                     JGE 0x0049af7e
0049AF54  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0049AF5B  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0049AF62  0F AF CB                  IMUL ECX,EBX
0049AF65  0F BF C0                  MOVSX EAX,AX
0049AF68  0F AF D0                  IMUL EDX,EAX
0049AF6B  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
0049AF6F  03 C1                     ADD EAX,ECX
0049AF71  03 D0                     ADD EDX,EAX
0049AF73  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0049AF78  8B 74 D0 04               MOV ESI,dword ptr [EAX + EDX*0x8 + 0x4]
0049AF7C  EB 02                     JMP 0x0049af80
LAB_0049af7e:
0049AF7E  33 F6                     XOR ESI,ESI
LAB_0049af80:
0049AF80  85 F6                     TEST ESI,ESI
0049AF82  0F 84 3C 01 00 00         JZ 0x0049b0c4
0049AF88  81 7E 20 AE 01 00 00      CMP dword ptr [ESI + 0x20],0x1ae
0049AF8F  0F 85 2F 01 00 00         JNZ 0x0049b0c4
0049AF95  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0049AF98  80 F9 08                  CMP CL,0x8
0049AF9B  88 4D D8                  MOV byte ptr [EBP + -0x28],CL
0049AF9E  0F 83 20 01 00 00         JNC 0x0049b0c4
0049AFA4  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049AFA9  85 C0                     TEST EAX,EAX
0049AFAB  74 14                     JZ 0x0049afc1
0049AFAD  0F BE C1                  MOVSX EAX,CL
0049AFB0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0049AFB3  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0049AFBB  0F 83 03 01 00 00         JNC 0x0049b0c4
LAB_0049afc1:
0049AFC1  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0049AFC4  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0049AFCA  84 D2                     TEST DL,DL
0049AFCC  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0049AFCF  88 45 E4                  MOV byte ptr [EBP + -0x1c],AL
0049AFD2  74 2D                     JZ 0x0049b001
0049AFD4  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049AFD7  33 D2                     XOR EDX,EDX
0049AFD9  25 FF 00 00 00            AND EAX,0xff
0049AFDE  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0049AFE1  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0049AFE4  25 FF 00 00 00            AND EAX,0xff
0049AFE9  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0049AFF0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0049AFF3  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0049AFFA  0F 95 C2                  SETNZ DL
0049AFFD  8B C2                     MOV EAX,EDX
0049AFFF  EB 7D                     JMP 0x0049b07e
LAB_0049b001:
0049B001  3A C8                     CMP CL,AL
0049B003  74 6E                     JZ 0x0049b073
0049B005  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0049B008  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0049B00B  25 FF 00 00 00            AND EAX,0xff
0049B010  81 E1 FF 00 00 00         AND ECX,0xff
0049B016  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0049B01D  84 D2                     TEST DL,DL
0049B01F  75 12                     JNZ 0x0049b033
0049B021  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0049B028  84 DB                     TEST BL,BL
0049B02A  75 07                     JNZ 0x0049b033
0049B02C  B8 FE FF FF FF            MOV EAX,0xfffffffe
0049B031  EB 42                     JMP 0x0049b075
LAB_0049b033:
0049B033  80 FA 01                  CMP DL,0x1
0049B036  75 10                     JNZ 0x0049b048
0049B038  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0049B03F  84 DB                     TEST BL,BL
0049B041  75 05                     JNZ 0x0049b048
0049B043  83 C8 FF                  OR EAX,0xffffffff
0049B046  EB 2D                     JMP 0x0049b075
LAB_0049b048:
0049B048  84 D2                     TEST DL,DL
0049B04A  75 11                     JNZ 0x0049b05d
0049B04C  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0049B054  75 07                     JNZ 0x0049b05d
0049B056  B8 01 00 00 00            MOV EAX,0x1
0049B05B  EB 18                     JMP 0x0049b075
LAB_0049b05d:
0049B05D  80 FA 01                  CMP DL,0x1
0049B060  75 11                     JNZ 0x0049b073
0049B062  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0049B06A  75 07                     JNZ 0x0049b073
0049B06C  B8 02 00 00 00            MOV EAX,0x2
0049B071  EB 02                     JMP 0x0049b075
LAB_0049b073:
0049B073  33 C0                     XOR EAX,EAX
LAB_0049b075:
0049B075  33 C9                     XOR ECX,ECX
0049B077  85 C0                     TEST EAX,EAX
0049B079  0F 9C C1                  SETL CL
0049B07C  8B C1                     MOV EAX,ECX
LAB_0049b07e:
0049B07E  85 C0                     TEST EAX,EAX
0049B080  74 42                     JZ 0x0049b0c4
0049B082  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
0049B086  C6 45 D9 03               MOV byte ptr [EBP + -0x27],0x3
0049B08A  66 89 55 DA               MOV word ptr [EBP + -0x26],DX
0049B08E  8B 06                     MOV EAX,dword ptr [ESI]
0049B090  8B CE                     MOV ECX,ESI
0049B092  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0049B098  83 F8 01                  CMP EAX,0x1
0049B09B  75 27                     JNZ 0x0049b0c4
0049B09D  0F BE 47 24               MOVSX EAX,byte ptr [EDI + 0x24]
0049B0A1  8B 16                     MOV EDX,dword ptr [ESI]
0049B0A3  50                        PUSH EAX
0049B0A4  8B CE                     MOV ECX,ESI
0049B0A6  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
0049B0AC  83 F8 01                  CMP EAX,0x1
0049B0AF  75 13                     JNZ 0x0049b0c4
0049B0B1  8B 97 0E 02 00 00         MOV EDX,dword ptr [EDI + 0x20e]
0049B0B7  8D 4D D8                  LEA ECX,[EBP + -0x28]
0049B0BA  51                        PUSH ECX
0049B0BB  52                        PUSH EDX
0049B0BC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0049B0BF  E8 FC 30 21 00            CALL 0x006ae1c0
LAB_0049b0c4:
0049B0C4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049B0C7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0049B0CA  42                        INC EDX
0049B0CB  0F BF 88 F7 00 00 00      MOVSX ECX,word ptr [EAX + 0xf7]
0049B0D2  0F BF 80 FD 00 00 00      MOVSX EAX,word ptr [EAX + 0xfd]
0049B0D9  0F BF DA                  MOVSX EBX,DX
0049B0DC  03 C8                     ADD ECX,EAX
0049B0DE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0049B0E1  3B D9                     CMP EBX,ECX
0049B0E3  0F 8C 8A FC FF FF         JL 0x0049ad73
0049B0E9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_0049b0ec:
0049B0EC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049B0EF  0F BF 8E FB 00 00 00      MOVSX ECX,word ptr [ESI + 0xfb]
0049B0F6  0F BF 96 F5 00 00 00      MOVSX EDX,word ptr [ESI + 0xf5]
0049B0FD  40                        INC EAX
0049B0FE  03 CA                     ADD ECX,EDX
0049B100  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0049B103  0F BF C0                  MOVSX EAX,AX
0049B106  3B C1                     CMP EAX,ECX
0049B108  0F 8C 44 FC FF FF         JL 0x0049ad52
0049B10E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049B111  33 FF                     XOR EDI,EDI
LAB_0049b113:
0049B113  0F BF 96 F3 00 00 00      MOVSX EDX,word ptr [ESI + 0xf3]
0049B11A  0F BF 9E F9 00 00 00      MOVSX EBX,word ptr [ESI + 0xf9]
0049B121  40                        INC EAX
0049B122  03 D3                     ADD EDX,EBX
0049B124  0F BF C8                  MOVSX ECX,AX
0049B127  3B CA                     CMP ECX,EDX
0049B129  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049B12C  0F 8C 02 FC FF FF         JL 0x0049ad34
LAB_0049b132:
0049B132  39 7D EC                  CMP dword ptr [EBP + -0x14],EDI
0049B135  75 2D                     JNZ 0x0049b164
0049B137  8B 86 0E 02 00 00         MOV EAX,dword ptr [ESI + 0x20e]
0049B13D  50                        PUSH EAX
0049B13E  E8 CD 2F 21 00            CALL 0x006ae110
0049B143  89 BE 0E 02 00 00         MOV dword ptr [ESI + 0x20e],EDI
0049B149  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049B14F  68 CE 06 00 00            PUSH 0x6ce
0049B154  68 3C BE 7A 00            PUSH 0x7abe3c
0049B159  51                        PUSH ECX
0049B15A  68 09 00 FE AF            PUSH 0xaffe0009
0049B15F  E8 DC AC 20 00            CALL 0x006a5e40
LAB_0049b164:
0049B164  8B 86 EB 00 00 00         MOV EAX,dword ptr [ESI + 0xeb]
0049B16A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0049B16D  83 F8 01                  CMP EAX,0x1
0049B170  89 86 0A 02 00 00         MOV dword ptr [ESI + 0x20a],EAX
0049B176  0F 85 8D 00 00 00         JNZ 0x0049b209
0049B17C  8B 97 0E 02 00 00         MOV EDX,dword ptr [EDI + 0x20e]
0049B182  33 F6                     XOR ESI,ESI
0049B184  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
0049B187  85 DB                     TEST EBX,EBX
0049B189  7E 56                     JLE 0x0049b1e1
LAB_0049b18b:
0049B18B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049B18E  8D 45 D8                  LEA EAX,[EBP + -0x28]
0049B191  0F BF FE                  MOVSX EDI,SI
0049B194  8B 89 0E 02 00 00         MOV ECX,dword ptr [ECX + 0x20e]
0049B19A  50                        PUSH EAX
0049B19B  8B D7                     MOV EDX,EDI
0049B19D  E8 CE 1A 21 00            CALL 0x006acc70
0049B1A2  0F BE 45 D9               MOVSX EAX,byte ptr [EBP + -0x27]
0049B1A6  48                        DEC EAX
0049B1A7  75 1B                     JNZ 0x0049b1c4
0049B1A9  8B 55 DA                  MOV EDX,dword ptr [EBP + -0x26]
0049B1AC  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0049B1AF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049B1B5  6A 01                     PUSH 0x1
0049B1B7  52                        PUSH EDX
0049B1B8  50                        PUSH EAX
0049B1B9  E8 FC 76 F6 FF            CALL 0x004028ba
0049B1BE  83 78 20 14               CMP dword ptr [EAX + 0x20],0x14
0049B1C2  74 12                     JZ 0x0049b1d6
LAB_0049b1c4:
0049B1C4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049B1C7  57                        PUSH EDI
0049B1C8  8B 91 0E 02 00 00         MOV EDX,dword ptr [ECX + 0x20e]
0049B1CE  52                        PUSH EDX
0049B1CF  E8 9C 5A 21 00            CALL 0x006b0c70
0049B1D4  4B                        DEC EBX
0049B1D5  4E                        DEC ESI
LAB_0049b1d6:
0049B1D6  46                        INC ESI
0049B1D7  0F BF C6                  MOVSX EAX,SI
0049B1DA  3B C3                     CMP EAX,EBX
0049B1DC  7C AD                     JL 0x0049b18b
0049B1DE  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0049b1e1:
0049B1E1  8B 8F 0E 02 00 00         MOV ECX,dword ptr [EDI + 0x20e]
0049B1E7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0049B1EA  85 C0                     TEST EAX,EAX
0049B1EC  75 1B                     JNZ 0x0049b209
0049B1EE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049B1F4  68 E3 06 00 00            PUSH 0x6e3
0049B1F9  68 3C BE 7A 00            PUSH 0x7abe3c
0049B1FE  52                        PUSH EDX
0049B1FF  68 09 00 FE AF            PUSH 0xaffe0009
0049B204  E8 37 AC 20 00            CALL 0x006a5e40
LAB_0049b209:
0049B209  8B CF                     MOV ECX,EDI
0049B20B  E8 F3 73 F6 FF            CALL 0x00402603
0049B210  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
0049B213  8B CF                     MOV ECX,EDI
0049B215  50                        PUSH EAX
0049B216  E8 2B 9F F6 FF            CALL 0x00405146
0049B21B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049B21E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0049B221  33 DB                     XOR EBX,EBX
LAB_0049b223:
0049B223  83 F8 02                  CMP EAX,0x2
0049B226  75 1C                     JNZ 0x0049b244
0049B228  39 9E 12 02 00 00         CMP dword ptr [ESI + 0x212],EBX
0049B22E  75 14                     JNZ 0x0049b244
0049B230  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0049B233  33 C0                     XOR EAX,EAX
0049B235  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049B23B  5F                        POP EDI
0049B23C  5E                        POP ESI
0049B23D  5B                        POP EBX
0049B23E  8B E5                     MOV ESP,EBP
0049B240  5D                        POP EBP
0049B241  C2 04 00                  RET 0x4
LAB_0049b244:
0049B244  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0049B247  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0049B24A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049B250  5F                        POP EDI
0049B251  5E                        POP ESI
0049B252  5B                        POP EBX
0049B253  8B E5                     MOV ESP,EBP
0049B255  5D                        POP EBP
0049B256  C2 04 00                  RET 0x4
LAB_0049b259:
0049B259  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0049B25C  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0049B262  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049B268  75 0B                     JNZ 0x0049b275
0049B26A  33 C0                     XOR EAX,EAX
0049B26C  5F                        POP EDI
0049B26D  5E                        POP ESI
0049B26E  5B                        POP EBX
0049B26F  8B E5                     MOV ESP,EBP
0049B271  5D                        POP EBP
0049B272  C2 04 00                  RET 0x4
LAB_0049b275:
0049B275  68 58 BF 7A 00            PUSH 0x7abf58
0049B27A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049B27F  56                        PUSH ESI
0049B280  53                        PUSH EBX
0049B281  68 01 07 00 00            PUSH 0x701
0049B286  68 3C BE 7A 00            PUSH 0x7abe3c
0049B28B  E8 40 22 21 00            CALL 0x006ad4d0
0049B290  83 C4 18                  ADD ESP,0x18
0049B293  85 C0                     TEST EAX,EAX
0049B295  74 01                     JZ 0x0049b298
0049B297  CC                        INT3
LAB_0049b298:
0049B298  68 02 07 00 00            PUSH 0x702
0049B29D  68 3C BE 7A 00            PUSH 0x7abe3c
0049B2A2  53                        PUSH EBX
0049B2A3  56                        PUSH ESI
0049B2A4  E8 97 AB 20 00            CALL 0x006a5e40
0049B2A9  5F                        POP EDI
0049B2AA  5E                        POP ESI
0049B2AB  83 C8 FF                  OR EAX,0xffffffff
0049B2AE  5B                        POP EBX
0049B2AF  8B E5                     MOV ESP,EBP
0049B2B1  5D                        POP EBP
0049B2B2  C2 04 00                  RET 0x4
