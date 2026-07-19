STBoatC::BackLoadRC:
0046AA50  55                        PUSH EBP
0046AA51  8B EC                     MOV EBP,ESP
0046AA53  51                        PUSH ECX
0046AA54  56                        PUSH ESI
0046AA55  8B F1                     MOV ESI,ECX
0046AA57  57                        PUSH EDI
0046AA58  8B 86 D5 04 00 00         MOV EAX,dword ptr [ESI + 0x4d5]
0046AA5E  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0046AA68  83 F8 0E                  CMP EAX,0xe
0046AA6B  0F 87 BB 04 00 00         JA 0x0046af2c
switchD_0046aa71::switchD:
0046AA71  FF 24 85 5C AF 46 00      JMP dword ptr [EAX*0x4 + 0x46af5c]
switchD_0046aa71::caseD_1:
0046AA78  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
0046AA7E  85 C0                     TEST EAX,EAX
0046AA80  75 22                     JNZ 0x0046aaa4
0046AA82  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046AA85  8B CE                     MOV ECX,ESI
0046AA87  50                        PUSH EAX
0046AA88  E8 63 93 F9 FF            CALL 0x00403df0
LAB_0046aa8d:
0046AA8D  8B F8                     MOV EDI,EAX
0046AA8F  85 FF                     TEST EDI,EDI
0046AA91  75 07                     JNZ 0x0046aa9a
0046AA93  8B CE                     MOV ECX,ESI
0046AA95  E8 71 91 F9 FF            CALL 0x00403c0b
LAB_0046aa9a:
0046AA9A  8B C7                     MOV EAX,EDI
0046AA9C  5F                        POP EDI
0046AA9D  5E                        POP ESI
0046AA9E  8B E5                     MOV ESP,EBP
0046AAA0  5D                        POP EBP
0046AAA1  C2 04 00                  RET 0x4
LAB_0046aaa4:
0046AAA4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0046AAA7  51                        PUSH ECX
0046AAA8  8B CE                     MOV ECX,ESI
0046AAAA  E8 8B 9E F9 FF            CALL 0x0040493a
0046AAAF  5F                        POP EDI
0046AAB0  5E                        POP ESI
0046AAB1  8B E5                     MOV ESP,EBP
0046AAB3  5D                        POP EBP
0046AAB4  C2 04 00                  RET 0x4
switchD_0046aa71::caseD_3:
0046AAB7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0046AABA  8B CE                     MOV ECX,ESI
0046AABC  52                        PUSH EDX
0046AABD  E8 78 9E F9 FF            CALL 0x0040493a
0046AAC2  EB C9                     JMP 0x0046aa8d
switchD_0046aa71::caseD_5:
0046AAC4  8B CE                     MOV ECX,ESI
0046AAC6  E8 40 91 F9 FF            CALL 0x00403c0b
0046AACB  8B 8E D1 04 00 00         MOV ECX,dword ptr [ESI + 0x4d1]
0046AAD1  41                        INC ECX
0046AAD2  8B C1                     MOV EAX,ECX
0046AAD4  89 8E D1 04 00 00         MOV dword ptr [ESI + 0x4d1],ECX
0046AADA  83 F8 46                  CMP EAX,0x46
0046AADD  0F 8E CA 01 00 00         JLE 0x0046acad
0046AAE3  C7 86 D1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d1],0x0
LAB_0046aaed:
0046AAED  8B 06                     MOV EAX,dword ptr [ESI]
0046AAEF  8B CE                     MOV ECX,ESI
0046AAF1  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046AAF7  F7 D8                     NEG EAX
0046AAF9  5F                        POP EDI
0046AAFA  5E                        POP ESI
0046AAFB  1B C0                     SBB EAX,EAX
0046AAFD  8B E5                     MOV ESP,EBP
0046AAFF  5D                        POP EBP
0046AB00  C2 04 00                  RET 0x4
switchD_0046aa71::caseD_6:
0046AB03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046AB06  8B CE                     MOV ECX,ESI
0046AB08  50                        PUSH EAX
0046AB09  E8 E2 92 F9 FF            CALL 0x00403df0
0046AB0E  5F                        POP EDI
0046AB0F  5E                        POP ESI
0046AB10  8B E5                     MOV ESP,EBP
0046AB12  5D                        POP EBP
0046AB13  C2 04 00                  RET 0x4
switchD_0046aa71::caseD_b:
0046AB16  8B 86 D9 04 00 00         MOV EAX,dword ptr [ESI + 0x4d9]
0046AB1C  85 C0                     TEST EAX,EAX
0046AB1E  0F 84 FD 01 00 00         JZ 0x0046ad21
0046AB24  83 F8 01                  CMP EAX,0x1
0046AB27  0F 84 F4 01 00 00         JZ 0x0046ad21
0046AB2D  83 F8 02                  CMP EAX,0x2
0046AB30  0F 84 EB 01 00 00         JZ 0x0046ad21
0046AB36  83 F8 03                  CMP EAX,0x3
0046AB39  75 57                     JNZ 0x0046ab92
0046AB3B  66 8B 86 C9 04 00 00      MOV AX,word ptr [ESI + 0x4c9]
0046AB42  66 8B 8E C7 04 00 00      MOV CX,word ptr [ESI + 0x4c7]
0046AB49  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046AB4E  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046AB53  83 C0 64                  ADD EAX,0x64
0046AB56  8B 16                     MOV EDX,dword ptr [ESI]
0046AB58  50                        PUSH EAX
0046AB59  66 8B 86 C5 04 00 00      MOV AX,word ptr [ESI + 0x4c5]
0046AB60  66 69 C0 C9 00            IMUL AX,AX,0xc9
0046AB65  83 C1 64                  ADD ECX,0x64
0046AB68  83 C0 64                  ADD EAX,0x64
0046AB6B  51                        PUSH ECX
0046AB6C  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046AB70  50                        PUSH EAX
0046AB71  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046AB75  51                        PUSH ECX
0046AB76  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046AB7A  50                        PUSH EAX
0046AB7B  51                        PUSH ECX
0046AB7C  8B CE                     MOV ECX,ESI
0046AB7E  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046AB81  66 89 86 CB 04 00 00      MOV word ptr [ESI + 0x4cb],AX
0046AB88  C7 86 D9 04 00 00 04 00 00 00  MOV dword ptr [ESI + 0x4d9],0x4
LAB_0046ab92:
0046AB92  8B 86 D9 04 00 00         MOV EAX,dword ptr [ESI + 0x4d9]
0046AB98  83 F8 04                  CMP EAX,0x4
0046AB9B  0F 85 92 00 00 00         JNZ 0x0046ac33
0046ABA1  66 8B 96 CB 04 00 00      MOV DX,word ptr [ESI + 0x4cb]
0046ABA8  8B CE                     MOV ECX,ESI
0046ABAA  52                        PUSH EDX
0046ABAB  E8 02 85 F9 FF            CALL 0x004030b2
0046ABB0  50                        PUSH EAX
0046ABB1  8B CE                     MOV ECX,ESI
0046ABB3  E8 44 77 F9 FF            CALL 0x004022fc
0046ABB8  83 F8 FF                  CMP EAX,-0x1
0046ABBB  74 29                     JZ 0x0046abe6
0046ABBD  85 C0                     TEST EAX,EAX
0046ABBF  75 0A                     JNZ 0x0046abcb
0046ABC1  C7 86 D9 04 00 00 05 00 00 00  MOV dword ptr [ESI + 0x4d9],0x5
STBoatC::BackLoadRC::cf_common_exit_0046ABCB:
0046ABCB  8B 06                     MOV EAX,dword ptr [ESI]
0046ABCD  8B CE                     MOV ECX,ESI
0046ABCF  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046ABD5  F7 D8                     NEG EAX
0046ABD7  1B C0                     SBB EAX,EAX
0046ABD9  5F                        POP EDI
0046ABDA  24 FD                     AND AL,0xfd
0046ABDC  5E                        POP ESI
0046ABDD  83 C0 02                  ADD EAX,0x2
0046ABE0  8B E5                     MOV ESP,EBP
0046ABE2  5D                        POP EBP
0046ABE3  C2 04 00                  RET 0x4
LAB_0046abe6:
0046ABE6  68 AC A5 7A 00            PUSH 0x7aa5ac
0046ABEB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046ABF0  6A 00                     PUSH 0x0
0046ABF2  6A 00                     PUSH 0x0
0046ABF4  68 FD 22 00 00            PUSH 0x22fd
0046ABF9  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046ABFE  E8 CD 28 24 00            CALL 0x006ad4d0
0046AC03  83 C4 18                  ADD ESP,0x18
0046AC06  85 C0                     TEST EAX,EAX
0046AC08  74 01                     JZ 0x0046ac0b
0046AC0A  CC                        INT3
LAB_0046ac0b:
0046AC0B  68 FE 22 00 00            PUSH 0x22fe
LAB_0046ac10:
0046AC10  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0046AC16  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046AC1B  51                        PUSH ECX
0046AC1C  68 FF FF 00 00            PUSH 0xffff
0046AC21  E8 1A B2 23 00            CALL 0x006a5e40
0046AC26  5F                        POP EDI
0046AC27  B8 FF FF 00 00            MOV EAX,0xffff
0046AC2C  5E                        POP ESI
0046AC2D  8B E5                     MOV ESP,EBP
0046AC2F  5D                        POP EBP
0046AC30  C2 04 00                  RET 0x4
LAB_0046ac33:
0046AC33  83 F8 05                  CMP EAX,0x5
0046AC36  BF 06 00 00 00            MOV EDI,0x6
0046AC3B  75 50                     JNZ 0x0046ac8d
0046AC3D  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046AC40  66 8B 86 C9 04 00 00      MOV AX,word ptr [ESI + 0x4c9]
0046AC47  66 8B 8E C7 04 00 00      MOV CX,word ptr [ESI + 0x4c7]
0046AC4E  52                        PUSH EDX
0046AC4F  66 8B 96 C5 04 00 00      MOV DX,word ptr [ESI + 0x4c5]
0046AC56  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046AC5B  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046AC60  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046AC65  83 C0 64                  ADD EAX,0x64
0046AC68  83 C1 64                  ADD ECX,0x64
0046AC6B  50                        PUSH EAX
0046AC6C  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046AC70  83 C2 64                  ADD EDX,0x64
0046AC73  51                        PUSH ECX
0046AC74  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046AC78  52                        PUSH EDX
0046AC79  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046AC7D  50                        PUSH EAX
0046AC7E  51                        PUSH ECX
0046AC7F  52                        PUSH EDX
0046AC80  8B CE                     MOV ECX,ESI
0046AC82  E8 CE 77 F9 FF            CALL 0x00402455
0046AC87  89 BE D9 04 00 00         MOV dword ptr [ESI + 0x4d9],EDI
LAB_0046ac8d:
0046AC8D  39 BE D9 04 00 00         CMP dword ptr [ESI + 0x4d9],EDI
0046AC93  75 7F                     JNZ 0x0046ad14
0046AC95  8D 45 08                  LEA EAX,[EBP + 0x8]
0046AC98  8D 4D FC                  LEA ECX,[EBP + -0x4]
0046AC9B  50                        PUSH EAX
0046AC9C  51                        PUSH ECX
0046AC9D  8B CE                     MOV ECX,ESI
0046AC9F  E8 A3 7B F9 FF            CALL 0x00402847
0046ACA4  83 F8 FF                  CMP EAX,-0x1
0046ACA7  74 3C                     JZ 0x0046ace5
0046ACA9  85 C0                     TEST EAX,EAX
0046ACAB  74 1B                     JZ 0x0046acc8
LAB_0046acad:
0046ACAD  8B 16                     MOV EDX,dword ptr [ESI]
0046ACAF  8B CE                     MOV ECX,ESI
0046ACB1  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046ACB7  F7 D8                     NEG EAX
0046ACB9  1B C0                     SBB EAX,EAX
0046ACBB  5F                        POP EDI
0046ACBC  24 FD                     AND AL,0xfd
0046ACBE  5E                        POP ESI
0046ACBF  83 C0 02                  ADD EAX,0x2
0046ACC2  8B E5                     MOV ESP,EBP
0046ACC4  5D                        POP EBP
0046ACC5  C2 04 00                  RET 0x4
LAB_0046acc8:
0046ACC8  8B CE                     MOV ECX,ESI
0046ACCA  E8 3C 8F F9 FF            CALL 0x00403c0b
0046ACCF  8B 06                     MOV EAX,dword ptr [ESI]
0046ACD1  8B CE                     MOV ECX,ESI
0046ACD3  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046ACD9  F7 D8                     NEG EAX
0046ACDB  5F                        POP EDI
0046ACDC  5E                        POP ESI
0046ACDD  1B C0                     SBB EAX,EAX
0046ACDF  8B E5                     MOV ESP,EBP
0046ACE1  5D                        POP EBP
0046ACE2  C2 04 00                  RET 0x4
LAB_0046ace5:
0046ACE5  68 80 A5 7A 00            PUSH 0x7aa580
0046ACEA  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046ACEF  6A 00                     PUSH 0x0
0046ACF1  6A 00                     PUSH 0x0
0046ACF3  68 11 23 00 00            PUSH 0x2311
0046ACF8  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046ACFD  E8 CE 27 24 00            CALL 0x006ad4d0
0046AD02  83 C4 18                  ADD ESP,0x18
0046AD05  85 C0                     TEST EAX,EAX
0046AD07  74 01                     JZ 0x0046ad0a
0046AD09  CC                        INT3
LAB_0046ad0a:
0046AD0A  68 12 23 00 00            PUSH 0x2312
0046AD0F  E9 FC FE FF FF            JMP 0x0046ac10
LAB_0046ad14:
0046AD14  5F                        POP EDI
0046AD15  B8 02 00 00 00            MOV EAX,0x2
0046AD1A  5E                        POP ESI
0046AD1B  8B E5                     MOV ESP,EBP
0046AD1D  5D                        POP EBP
0046AD1E  C2 04 00                  RET 0x4
LAB_0046ad21:
0046AD21  8B CE                     MOV ECX,ESI
0046AD23  E8 E3 8E F9 FF            CALL 0x00403c0b
0046AD28  8B 16                     MOV EDX,dword ptr [ESI]
0046AD2A  8B CE                     MOV ECX,ESI
0046AD2C  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046AD32  F7 D8                     NEG EAX
0046AD34  5F                        POP EDI
0046AD35  5E                        POP ESI
0046AD36  1B C0                     SBB EAX,EAX
0046AD38  8B E5                     MOV ESP,EBP
0046AD3A  5D                        POP EBP
0046AD3B  C2 04 00                  RET 0x4
switchD_0046aa71::caseD_c:
0046AD3E  8B CE                     MOV ECX,ESI
0046AD40  E8 C6 8E F9 FF            CALL 0x00403c0b
0046AD45  8B 8E D1 04 00 00         MOV ECX,dword ptr [ESI + 0x4d1]
0046AD4B  41                        INC ECX
0046AD4C  8B C1                     MOV EAX,ECX
0046AD4E  89 8E D1 04 00 00         MOV dword ptr [ESI + 0x4d1],ECX
0046AD54  83 F8 46                  CMP EAX,0x46
0046AD57  0F 8E 6E FE FF FF         JLE 0x0046abcb
0046AD5D  C7 86 D1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d1],0x0
0046AD67  C7 86 D5 04 00 00 0D 00 00 00  MOV dword ptr [ESI + 0x4d5],0xd
switchD_0046aa71::caseD_d:
0046AD71  8B 86 D9 04 00 00         MOV EAX,dword ptr [ESI + 0x4d9]
0046AD77  85 C0                     TEST EAX,EAX
0046AD79  75 57                     JNZ 0x0046add2
0046AD7B  66 8B 86 C9 04 00 00      MOV AX,word ptr [ESI + 0x4c9]
0046AD82  66 8B 8E C7 04 00 00      MOV CX,word ptr [ESI + 0x4c7]
0046AD89  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046AD8E  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046AD93  83 C0 64                  ADD EAX,0x64
0046AD96  8B 16                     MOV EDX,dword ptr [ESI]
0046AD98  50                        PUSH EAX
0046AD99  66 8B 86 C5 04 00 00      MOV AX,word ptr [ESI + 0x4c5]
0046ADA0  66 69 C0 C9 00            IMUL AX,AX,0xc9
0046ADA5  83 C1 64                  ADD ECX,0x64
0046ADA8  83 C0 64                  ADD EAX,0x64
0046ADAB  51                        PUSH ECX
0046ADAC  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046ADB0  50                        PUSH EAX
0046ADB1  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046ADB5  51                        PUSH ECX
0046ADB6  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046ADBA  50                        PUSH EAX
0046ADBB  51                        PUSH ECX
0046ADBC  8B CE                     MOV ECX,ESI
0046ADBE  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046ADC1  66 89 86 CB 04 00 00      MOV word ptr [ESI + 0x4cb],AX
0046ADC8  C7 86 D9 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d9],0x1
LAB_0046add2:
0046ADD2  8B 86 D9 04 00 00         MOV EAX,dword ptr [ESI + 0x4d9]
0046ADD8  83 F8 01                  CMP EAX,0x1
0046ADDB  75 62                     JNZ 0x0046ae3f
0046ADDD  66 8B 96 CB 04 00 00      MOV DX,word ptr [ESI + 0x4cb]
0046ADE4  8B CE                     MOV ECX,ESI
0046ADE6  52                        PUSH EDX
0046ADE7  E8 C6 82 F9 FF            CALL 0x004030b2
0046ADEC  50                        PUSH EAX
0046ADED  8B CE                     MOV ECX,ESI
0046ADEF  E8 08 75 F9 FF            CALL 0x004022fc
0046ADF4  83 F8 FF                  CMP EAX,-0x1
0046ADF7  74 17                     JZ 0x0046ae10
0046ADF9  85 C0                     TEST EAX,EAX
0046ADFB  0F 85 CA FD FF FF         JNZ 0x0046abcb
0046AE01  C7 86 D9 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d9],0x2
0046AE0B  E9 BB FD FF FF            JMP 0x0046abcb
LAB_0046ae10:
0046AE10  68 54 A5 7A 00            PUSH 0x7aa554
0046AE15  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046AE1A  6A 00                     PUSH 0x0
0046AE1C  6A 00                     PUSH 0x0
0046AE1E  68 38 23 00 00            PUSH 0x2338
0046AE23  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046AE28  E8 A3 26 24 00            CALL 0x006ad4d0
0046AE2D  83 C4 18                  ADD ESP,0x18
0046AE30  85 C0                     TEST EAX,EAX
0046AE32  74 01                     JZ 0x0046ae35
0046AE34  CC                        INT3
LAB_0046ae35:
0046AE35  68 39 23 00 00            PUSH 0x2339
0046AE3A  E9 D1 FD FF FF            JMP 0x0046ac10
LAB_0046ae3f:
0046AE3F  83 F8 02                  CMP EAX,0x2
0046AE42  BF 03 00 00 00            MOV EDI,0x3
0046AE47  75 50                     JNZ 0x0046ae99
0046AE49  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046AE4C  66 8B 86 C9 04 00 00      MOV AX,word ptr [ESI + 0x4c9]
0046AE53  66 8B 8E C7 04 00 00      MOV CX,word ptr [ESI + 0x4c7]
0046AE5A  52                        PUSH EDX
0046AE5B  66 8B 96 C5 04 00 00      MOV DX,word ptr [ESI + 0x4c5]
0046AE62  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046AE67  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046AE6C  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046AE71  83 C0 64                  ADD EAX,0x64
0046AE74  83 C1 64                  ADD ECX,0x64
0046AE77  50                        PUSH EAX
0046AE78  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046AE7C  83 C2 64                  ADD EDX,0x64
0046AE7F  51                        PUSH ECX
0046AE80  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046AE84  52                        PUSH EDX
0046AE85  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046AE89  50                        PUSH EAX
0046AE8A  51                        PUSH ECX
0046AE8B  52                        PUSH EDX
0046AE8C  8B CE                     MOV ECX,ESI
0046AE8E  E8 C2 75 F9 FF            CALL 0x00402455
0046AE93  89 BE D9 04 00 00         MOV dword ptr [ESI + 0x4d9],EDI
LAB_0046ae99:
0046AE99  39 BE D9 04 00 00         CMP dword ptr [ESI + 0x4d9],EDI
0046AE9F  75 66                     JNZ 0x0046af07
0046AEA1  8D 45 08                  LEA EAX,[EBP + 0x8]
0046AEA4  8D 4D FC                  LEA ECX,[EBP + -0x4]
0046AEA7  50                        PUSH EAX
0046AEA8  51                        PUSH ECX
0046AEA9  8B CE                     MOV ECX,ESI
0046AEAB  E8 97 79 F9 FF            CALL 0x00402847
0046AEB0  83 F8 FF                  CMP EAX,-0x1
0046AEB3  74 23                     JZ 0x0046aed8
0046AEB5  85 C0                     TEST EAX,EAX
0046AEB7  0F 84 30 FC FF FF         JZ 0x0046aaed
0046AEBD  8B 16                     MOV EDX,dword ptr [ESI]
0046AEBF  8B CE                     MOV ECX,ESI
0046AEC1  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046AEC7  F7 D8                     NEG EAX
0046AEC9  1B C0                     SBB EAX,EAX
0046AECB  5F                        POP EDI
0046AECC  24 FD                     AND AL,0xfd
0046AECE  5E                        POP ESI
0046AECF  83 C0 02                  ADD EAX,0x2
0046AED2  8B E5                     MOV ESP,EBP
0046AED4  5D                        POP EBP
0046AED5  C2 04 00                  RET 0x4
LAB_0046aed8:
0046AED8  68 28 A5 7A 00            PUSH 0x7aa528
0046AEDD  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046AEE2  6A 00                     PUSH 0x0
0046AEE4  6A 00                     PUSH 0x0
0046AEE6  68 50 23 00 00            PUSH 0x2350
0046AEEB  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046AEF0  E8 DB 25 24 00            CALL 0x006ad4d0
0046AEF5  83 C4 18                  ADD ESP,0x18
0046AEF8  85 C0                     TEST EAX,EAX
0046AEFA  74 01                     JZ 0x0046aefd
0046AEFC  CC                        INT3
LAB_0046aefd:
0046AEFD  68 51 23 00 00            PUSH 0x2351
0046AF02  E9 09 FD FF FF            JMP 0x0046ac10
switchD_0046aa71::caseD_0:
0046AF07  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0046AF0A  8B CE                     MOV ECX,ESI
0046AF0C  52                        PUSH EDX
0046AF0D  E8 28 9A F9 FF            CALL 0x0040493a
0046AF12  8B F8                     MOV EDI,EAX
0046AF14  8B 06                     MOV EAX,dword ptr [ESI]
0046AF16  8B CE                     MOV ECX,ESI
0046AF18  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046AF1E  85 C0                     TEST EAX,EAX
0046AF20  75 2F                     JNZ 0x0046af51
0046AF22  8B C7                     MOV EAX,EDI
0046AF24  5F                        POP EDI
0046AF25  5E                        POP ESI
0046AF26  8B E5                     MOV ESP,EBP
0046AF28  5D                        POP EBP
0046AF29  C2 04 00                  RET 0x4
switchD_0046aa71::default:
0046AF2C  68 10 A5 7A 00            PUSH 0x7aa510
0046AF31  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046AF36  6A 00                     PUSH 0x0
0046AF38  6A 00                     PUSH 0x0
0046AF3A  68 67 23 00 00            PUSH 0x2367
0046AF3F  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046AF44  E8 87 25 24 00            CALL 0x006ad4d0
0046AF49  83 C4 18                  ADD ESP,0x18
0046AF4C  85 C0                     TEST EAX,EAX
0046AF4E  74 01                     JZ 0x0046af51
0046AF50  CC                        INT3
LAB_0046af51:
0046AF51  5F                        POP EDI
0046AF52  83 C8 FF                  OR EAX,0xffffffff
0046AF55  5E                        POP ESI
0046AF56  8B E5                     MOV ESP,EBP
0046AF58  5D                        POP EBP
0046AF59  C2 04 00                  RET 0x4
