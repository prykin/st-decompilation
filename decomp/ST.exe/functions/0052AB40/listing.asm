CreateMiniMap:
0052AB40  55                        PUSH EBP
0052AB41  8B EC                     MOV EBP,ESP
0052AB43  83 EC 64                  SUB ESP,0x64
0052AB46  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0052AB49  33 C0                     XOR EAX,EAX
0052AB4B  53                        PUSH EBX
0052AB4C  56                        PUSH ESI
0052AB4D  89 01                     MOV dword ptr [ECX],EAX
0052AB4F  33 F6                     XOR ESI,ESI
0052AB51  57                        PUSH EDI
0052AB52  56                        PUSH ESI
0052AB53  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0052AB56  C7 45 FC F3 04 B5 3F      MOV dword ptr [EBP + -0x4],0x3fb504f3
0052AB5D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0052AB60  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0052AB63  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0052AB66  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0052AB69  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0052AB6C  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0052AB72  8D 4D A0                  LEA ECX,[EBP + -0x60]
0052AB75  8D 45 9C                  LEA EAX,[EBP + -0x64]
0052AB78  51                        PUSH ECX
0052AB79  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
0052AB7C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052AB81  E8 6A 2C 20 00            CALL 0x0072d7f0
0052AB86  83 C4 08                  ADD ESP,0x8
0052AB89  3B C6                     CMP EAX,ESI
0052AB8B  0F 85 57 02 00 00         JNZ 0x0052ade8
0052AB91  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0052AB97  3B CE                     CMP ECX,ESI
0052AB99  74 10                     JZ 0x0052abab
0052AB9B  68 84 03 00 00            PUSH 0x384
0052ABA0  68 28 6F 7C 00            PUSH 0x7c6f28
0052ABA5  56                        PUSH ESI
0052ABA6  E8 E0 A1 ED FF            CALL 0x00404d8b
LAB_0052abab:
0052ABAB  68 F2 04 00 00            PUSH 0x4f2
0052ABB0  E8 1B 59 18 00            CALL 0x006b04d0
0052ABB5  3B C6                     CMP EAX,ESI
0052ABB7  74 0B                     JZ 0x0052abc4
0052ABB9  8B C8                     MOV ECX,EAX
0052ABBB  E8 E0 10 1B 00            CALL 0x006dbca0
0052ABC0  8B D8                     MOV EBX,EAX
0052ABC2  EB 02                     JMP 0x0052abc6
LAB_0052abc4:
0052ABC4  33 DB                     XOR EBX,EBX
LAB_0052abc6:
0052ABC6  3B DE                     CMP EBX,ESI
0052ABC8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0052ABCB  75 15                     JNZ 0x0052abe2
0052ABCD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0052ABD3  6A 16                     PUSH 0x16
0052ABD5  68 00 6F 7C 00            PUSH 0x7c6f00
0052ABDA  52                        PUSH EDX
0052ABDB  6A FE                     PUSH -0x2
0052ABDD  E8 5E B2 17 00            CALL 0x006a5e40
LAB_0052abe2:
0052ABE2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0052ABE5  6A 00                     PUSH 0x0
0052ABE7  68 97 EE 23 40            PUSH 0x4023ee97
0052ABEC  68 40 35 5E 86            PUSH 0x865e3540
0052ABF1  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
0052ABF5  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0052ABF8  68 00 00 24 40            PUSH 0x40240000
0052ABFD  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0052AC00  6A 00                     PUSH 0x0
0052AC02  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0052AC05  83 EC 08                  SUB ESP,0x8
0052AC08  42                        INC EDX
0052AC09  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0052AC0C  F7 D8                     NEG EAX
0052AC0E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0052AC11  83 EC 08                  SUB ESP,0x8
0052AC14  D8 0D F4 04 79 00         FMUL float ptr [0x007904f4]
0052AC1A  0F BF 0E                  MOVSX ECX,word ptr [ESI]
0052AC1D  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
0052AC21  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0052AC24  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0052AC27  83 EC 08                  SUB ESP,0x8
0052AC2A  F7 D9                     NEG ECX
0052AC2C  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0052AC2F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0052AC32  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0052AC37  83 EC 08                  SUB ESP,0x8
0052AC3A  83 E2 FE                  AND EDX,0xfffffffe
0052AC3D  D8 0D F4 04 79 00         FMUL float ptr [0x007904f4]
0052AC43  8B CB                     MOV ECX,EBX
0052AC45  DD 5C 24 10               FSTP double ptr [ESP + 0x10]
0052AC49  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0052AC4C  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0052AC4F  D8 0D F4 04 79 00         FMUL float ptr [0x007904f4]
0052AC55  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
0052AC59  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0052AC5C  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0052AC5F  D8 0D F4 04 79 00         FMUL float ptr [0x007904f4]
0052AC65  DD 1C 24                  FSTP double ptr [ESP]
0052AC68  52                        PUSH EDX
0052AC69  52                        PUSH EDX
0052AC6A  6A 00                     PUSH 0x0
0052AC6C  6A 00                     PUSH 0x0
0052AC6E  50                        PUSH EAX
0052AC6F  E8 DC 13 1B 00            CALL 0x006dc050
0052AC74  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0052AC77  33 C9                     XOR ECX,ECX
0052AC79  8D 93 38 04 00 00         LEA EDX,[EBX + 0x438]
0052AC7F  8A 08                     MOV CL,byte ptr [EAX]
0052AC81  89 8B 28 01 00 00         MOV dword ptr [EBX + 0x128],ECX
0052AC87  C7 83 24 01 00 00 02 00 00 00  MOV dword ptr [EBX + 0x124],0x2
0052AC91  8B 08                     MOV ECX,dword ptr [EAX]
0052AC93  89 0A                     MOV dword ptr [EDX],ECX
0052AC95  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0052AC99  33 C9                     XOR ECX,ECX
0052AC9B  66 89 42 04               MOV word ptr [EDX + 0x4],AX
0052AC9F  8B 86 55 04 00 00         MOV EAX,dword ptr [ESI + 0x455]
0052ACA5  85 C0                     TEST EAX,EAX
0052ACA7  7E 35                     JLE 0x0052acde
0052ACA9  8D 96 59 04 00 00         LEA EDX,[ESI + 0x459]
LAB_0052acaf:
0052ACAF  8B 02                     MOV EAX,dword ptr [EDX]
0052ACB1  85 C0                     TEST EAX,EAX
0052ACB3  74 1B                     JZ 0x0052acd0
0052ACB5  66 83 78 08 00            CMP word ptr [EAX + 0x8],0x0
0052ACBA  74 14                     JZ 0x0052acd0
0052ACBC  8B BB 40 01 00 00         MOV EDI,dword ptr [EBX + 0x140]
0052ACC2  89 38                     MOV dword ptr [EAX],EDI
0052ACC4  89 83 40 01 00 00         MOV dword ptr [EBX + 0x140],EAX
0052ACCA  FF 83 3C 01 00 00         INC dword ptr [EBX + 0x13c]
LAB_0052acd0:
0052ACD0  8B 86 55 04 00 00         MOV EAX,dword ptr [ESI + 0x455]
0052ACD6  41                        INC ECX
0052ACD7  83 C2 04                  ADD EDX,0x4
0052ACDA  3B C8                     CMP ECX,EAX
0052ACDC  7C D1                     JL 0x0052acaf
LAB_0052acde:
0052ACDE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0052ACE1  33 FF                     XOR EDI,EDI
0052ACE3  0F AF C0                  IMUL EAX,EAX
0052ACE6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0052ACE9  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0052ACEC  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0052ACEF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0052acf2:
0052ACF2  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0052ACF8  85 C9                     TEST ECX,ECX
0052ACFA  74 0D                     JZ 0x0052ad09
0052ACFC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0052ACFF  6A 00                     PUSH 0x0
0052AD01  52                        PUSH EDX
0052AD02  6A 01                     PUSH 0x1
0052AD04  E8 69 87 ED FF            CALL 0x00403472
LAB_0052ad09:
0052AD09  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
0052AD0D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0052AD10  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0052AD13  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0052AD16  41                        INC ECX
0052AD17  83 EC 08                  SUB ESP,0x8
0052AD1A  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0052AD1D  83 EC 08                  SUB ESP,0x8
0052AD20  D8 0D F4 04 79 00         FMUL float ptr [0x007904f4]
0052AD26  0F BF 0E                  MOVSX ECX,word ptr [ESI]
0052AD29  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
0052AD2D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0052AD30  8B D7                     MOV EDX,EDI
0052AD32  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0052AD35  83 CA 08                  OR EDX,0x8
0052AD38  8B CB                     MOV ECX,EBX
0052AD3A  D8 0D F4 04 79 00         FMUL float ptr [0x007904f4]
0052AD40  DD 1C 24                  FSTP double ptr [ESP]
0052AD43  52                        PUSH EDX
0052AD44  E8 C7 28 1B 00            CALL 0x006dd610
0052AD49  8B CB                     MOV ECX,EBX
0052AD4B  E8 90 2E 1B 00            CALL 0x006ddbe0
0052AD50  8B CB                     MOV ECX,EBX
0052AD52  E8 F9 2F 1B 00            CALL 0x006ddd50
0052AD57  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0052AD5A  50                        PUSH EAX
0052AD5B  E8 B0 FE 17 00            CALL 0x006aac10
0052AD60  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052AD63  85 C0                     TEST EAX,EAX
0052AD65  89 01                     MOV dword ptr [ECX],EAX
0052AD67  75 15                     JNZ 0x0052ad7e
0052AD69  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0052AD6F  6A 2F                     PUSH 0x2f
0052AD71  68 00 6F 7C 00            PUSH 0x7c6f00
0052AD76  52                        PUSH EDX
0052AD77  6A FE                     PUSH -0x2
0052AD79  E8 C2 B0 17 00            CALL 0x006a5e40
LAB_0052ad7e:
0052AD7E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0052AD81  33 C0                     XOR EAX,EAX
0052AD83  3B C8                     CMP ECX,EAX
0052AD85  7E 3E                     JLE 0x0052adc5
0052AD87  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0052ad8a:
0052AD8A  8B 73 28                  MOV ESI,dword ptr [EBX + 0x28]
0052AD8D  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
0052AD90  0F AF F0                  IMUL ESI,EAX
0052AD93  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052AD96  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0052AD99  03 F7                     ADD ESI,EDI
0052AD9B  8B 3A                     MOV EDI,dword ptr [EDX]
0052AD9D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0052ADA0  03 FA                     ADD EDI,EDX
0052ADA2  8B D1                     MOV EDX,ECX
0052ADA4  C1 E9 02                  SHR ECX,0x2
0052ADA7  F3 A5                     MOVSD.REP ES:EDI,ESI
0052ADA9  8B CA                     MOV ECX,EDX
0052ADAB  83 E1 03                  AND ECX,0x3
0052ADAE  40                        INC EAX
0052ADAF  F3 A4                     MOVSB.REP ES:EDI,ESI
0052ADB1  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0052ADB4  8B CA                     MOV ECX,EDX
0052ADB6  03 F1                     ADD ESI,ECX
0052ADB8  3B C1                     CMP EAX,ECX
0052ADBA  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0052ADBD  7C CB                     JL 0x0052ad8a
0052ADBF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0052ADC2  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0052adc5:
0052ADC5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052ADC8  47                        INC EDI
0052ADC9  83 C1 04                  ADD ECX,0x4
0052ADCC  83 FF 04                  CMP EDI,0x4
0052ADCF  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0052ADD2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0052ADD5  0F 8C 17 FF FF FF         JL 0x0052acf2
0052ADDB  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0052ADDE  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0052ADE1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052ADE6  EB 31                     JMP 0x0052ae19
LAB_0052ade8:
0052ADE8  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0052ADEB  68 F0 6E 7C 00            PUSH 0x7c6ef0
0052ADF0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052ADF5  50                        PUSH EAX
0052ADF6  56                        PUSH ESI
0052ADF7  8B F8                     MOV EDI,EAX
0052ADF9  6A 3A                     PUSH 0x3a
0052ADFB  68 00 6F 7C 00            PUSH 0x7c6f00
0052AE00  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052AE06  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0052AE09  E8 C2 26 18 00            CALL 0x006ad4d0
0052AE0E  83 C4 18                  ADD ESP,0x18
0052AE11  85 C0                     TEST EAX,EAX
0052AE13  74 01                     JZ 0x0052ae16
0052AE15  CC                        INT3
LAB_0052ae16:
0052AE16  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_0052ae19:
0052AE19  85 DB                     TEST EBX,EBX
0052AE1B  74 10                     JZ 0x0052ae2d
0052AE1D  8B CB                     MOV ECX,EBX
0052AE1F  E8 CC 0E 1B 00            CALL 0x006dbcf0
0052AE24  53                        PUSH EBX
0052AE25  E8 86 34 20 00            CALL 0x0072e2b0
0052AE2A  83 C4 04                  ADD ESP,0x4
LAB_0052ae2d:
0052AE2D  85 FF                     TEST EDI,EDI
0052AE2F  74 28                     JZ 0x0052ae59
0052AE31  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0052AE34  BB 04 00 00 00            MOV EBX,0x4
LAB_0052ae39:
0052AE39  56                        PUSH ESI
0052AE3A  E8 21 02 18 00            CALL 0x006ab060
0052AE3F  83 C6 04                  ADD ESI,0x4
0052AE42  4B                        DEC EBX
0052AE43  75 F4                     JNZ 0x0052ae39
0052AE45  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0052AE4B  6A 42                     PUSH 0x42
0052AE4D  68 00 6F 7C 00            PUSH 0x7c6f00
0052AE52  52                        PUSH EDX
0052AE53  57                        PUSH EDI
0052AE54  E8 E7 AF 17 00            CALL 0x006a5e40
LAB_0052ae59:
0052AE59  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0052AE5F  85 C9                     TEST ECX,ECX
0052AE61  74 0B                     JZ 0x0052ae6e
0052AE63  6A 00                     PUSH 0x0
0052AE65  6A 00                     PUSH 0x0
0052AE67  6A 02                     PUSH 0x2
0052AE69  E8 04 86 ED FF            CALL 0x00403472
LAB_0052ae6e:
0052AE6E  5F                        POP EDI
0052AE6F  5E                        POP ESI
0052AE70  5B                        POP EBX
0052AE71  8B E5                     MOV ESP,EBP
0052AE73  5D                        POP EBP
0052AE74  C3                        RET
