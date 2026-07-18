FUN_0045ef00:
0045EF00  55                        PUSH EBP
0045EF01  8B EC                     MOV EBP,ESP
0045EF03  53                        PUSH EBX
0045EF04  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0045EF07  56                        PUSH ESI
0045EF08  57                        PUSH EDI
0045EF09  83 FB 21                  CMP EBX,0x21
0045EF0C  8B F9                     MOV EDI,ECX
0045EF0E  BE 01 00 00 00            MOV ESI,0x1
0045EF13  74 1A                     JZ 0x0045ef2f
0045EF15  83 FB 05                  CMP EBX,0x5
0045EF18  74 15                     JZ 0x0045ef2f
0045EF1A  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
0045EF1E  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0045EF21  56                        PUSH ESI
0045EF22  50                        PUSH EAX
0045EF23  51                        PUSH ECX
0045EF24  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045EF2A  E8 F9 20 FA FF            CALL 0x00401028
LAB_0045ef2f:
0045EF2F  8D 43 FF                  LEA EAX,[EBX + -0x1]
0045EF32  89 B7 C4 02 00 00         MOV dword ptr [EDI + 0x2c4],ESI
0045EF38  83 F8 20                  CMP EAX,0x20
0045EF3B  0F 87 09 03 00 00         JA 0x0045f24a
switchD_0045ef41::switchD:
0045EF41  FF 24 85 78 F2 45 00      JMP dword ptr [EAX*0x4 + 0x45f278]
switchD_0045ef41::caseD_1:
0045EF48  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0045EF4B  89 B7 CC 02 00 00         MOV dword ptr [EDI + 0x2cc],ESI
0045EF51  81 C7 28 03 00 00         ADD EDI,0x328
0045EF57  E9 25 02 00 00            JMP 0x0045f181
switchD_0045ef41::caseD_2:
0045EF5C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0045EF5F  89 B7 D0 02 00 00         MOV dword ptr [EDI + 0x2d0],ESI
0045EF65  81 C7 32 03 00 00         ADD EDI,0x332
0045EF6B  8B 08                     MOV ECX,dword ptr [EAX]
0045EF6D  89 0F                     MOV dword ptr [EDI],ECX
0045EF6F  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0045EF72  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
0045EF75  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0045EF78  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
0045EF7B  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0045EF7E  89 57 0C                  MOV dword ptr [EDI + 0xc],EDX
0045EF81  8A 40 10                  MOV AL,byte ptr [EAX + 0x10]
0045EF84  88 47 10                  MOV byte ptr [EDI + 0x10],AL
0045EF87  5F                        POP EDI
0045EF88  5E                        POP ESI
0045EF89  5B                        POP EBX
0045EF8A  5D                        POP EBP
0045EF8B  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_3:
0045EF8E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0045EF91  89 B7 D4 02 00 00         MOV dword ptr [EDI + 0x2d4],ESI
0045EF97  81 C7 43 03 00 00         ADD EDI,0x343
0045EF9D  8B 11                     MOV EDX,dword ptr [ECX]
0045EF9F  89 17                     MOV dword ptr [EDI],EDX
0045EFA1  5F                        POP EDI
0045EFA2  5E                        POP ESI
0045EFA3  5B                        POP EBX
0045EFA4  5D                        POP EBP
0045EFA5  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_6:
0045EFA8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0045EFAB  89 B7 E0 02 00 00         MOV dword ptr [EDI + 0x2e0],ESI
0045EFB1  81 C7 47 03 00 00         ADD EDI,0x347
0045EFB7  8B 08                     MOV ECX,dword ptr [EAX]
0045EFB9  89 0F                     MOV dword ptr [EDI],ECX
0045EFBB  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0045EFBE  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
0045EFC1  5F                        POP EDI
0045EFC2  5E                        POP ESI
0045EFC3  5B                        POP EBX
0045EFC4  5D                        POP EBP
0045EFC5  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_c:
0045EFC8  89 B7 F8 02 00 00         MOV dword ptr [EDI + 0x2f8],ESI
0045EFCE  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0045EFD1  B9 08 00 00 00            MOV ECX,0x8
0045EFD6  81 C7 4F 03 00 00         ADD EDI,0x34f
0045EFDC  F3 A5                     MOVSD.REP ES:EDI,ESI
0045EFDE  5F                        POP EDI
0045EFDF  5E                        POP ESI
0045EFE0  5B                        POP EBX
0045EFE1  5D                        POP EBP
0045EFE2  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_11:
0045EFE5  89 B7 0C 03 00 00         MOV dword ptr [EDI + 0x30c],ESI
0045EFEB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0045EFEE  B9 08 00 00 00            MOV ECX,0x8
0045EFF3  81 C7 6F 03 00 00         ADD EDI,0x36f
0045EFF9  F3 A5                     MOVSD.REP ES:EDI,ESI
0045EFFB  66 A5                     MOVSW ES:EDI,ESI
0045EFFD  A4                        MOVSB ES:EDI,ESI
0045EFFE  5F                        POP EDI
0045EFFF  5E                        POP ESI
0045F000  5B                        POP EBX
0045F001  5D                        POP EBP
0045F002  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_d:
0045F005  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0045F008  89 B7 FC 02 00 00         MOV dword ptr [EDI + 0x2fc],ESI
0045F00E  81 C7 92 03 00 00         ADD EDI,0x392
0045F014  E9 90 01 00 00            JMP 0x0045f1a9
switchD_0045ef41::caseD_4:
0045F019  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0045F01C  89 B7 D8 02 00 00         MOV dword ptr [EDI + 0x2d8],ESI
0045F022  81 C7 9C 03 00 00         ADD EDI,0x39c
0045F028  E9 B3 00 00 00            JMP 0x0045f0e0
switchD_0045ef41::caseD_5:
0045F02D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0045F030  89 B7 DC 02 00 00         MOV dword ptr [EDI + 0x2dc],ESI
0045F036  81 C7 A6 03 00 00         ADD EDI,0x3a6
0045F03C  8B 02                     MOV EAX,dword ptr [EDX]
0045F03E  89 07                     MOV dword ptr [EDI],EAX
0045F040  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0045F043  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
0045F046  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0045F049  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0045F04C  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0045F04F  89 4F 0C                  MOV dword ptr [EDI + 0xc],ECX
0045F052  5F                        POP EDI
0045F053  5E                        POP ESI
0045F054  5B                        POP EBX
0045F055  5D                        POP EBP
0045F056  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_f:
0045F059  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0045F05C  89 B7 04 03 00 00         MOV dword ptr [EDI + 0x304],ESI
0045F062  81 C7 B6 03 00 00         ADD EDI,0x3b6
0045F068  8B 02                     MOV EAX,dword ptr [EDX]
0045F06A  89 07                     MOV dword ptr [EDI],EAX
0045F06C  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0045F06F  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
0045F072  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0045F075  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0045F078  66 8B 4A 0C               MOV CX,word ptr [EDX + 0xc]
0045F07C  66 89 4F 0C               MOV word ptr [EDI + 0xc],CX
0045F080  5F                        POP EDI
0045F081  5E                        POP ESI
0045F082  5B                        POP EBX
0045F083  5D                        POP EBP
0045F084  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_14:
0045F087  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0045F08A  89 B7 14 03 00 00         MOV dword ptr [EDI + 0x314],ESI
0045F090  81 C7 C4 03 00 00         ADD EDI,0x3c4
0045F096  8B 02                     MOV EAX,dword ptr [EDX]
0045F098  89 07                     MOV dword ptr [EDI],EAX
0045F09A  66 8B 4A 04               MOV CX,word ptr [EDX + 0x4]
0045F09E  66 89 4F 04               MOV word ptr [EDI + 0x4],CX
0045F0A2  5F                        POP EDI
0045F0A3  5E                        POP ESI
0045F0A4  5B                        POP EBX
0045F0A5  5D                        POP EBP
0045F0A6  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_10:
0045F0A9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0045F0AC  89 B7 08 03 00 00         MOV dword ptr [EDI + 0x308],ESI
0045F0B2  81 C7 CA 03 00 00         ADD EDI,0x3ca
0045F0B8  E9 C4 00 00 00            JMP 0x0045f181
switchD_0045ef41::caseD_7:
0045F0BD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0045F0C0  89 B7 E4 02 00 00         MOV dword ptr [EDI + 0x2e4],ESI
0045F0C6  81 C7 D4 03 00 00         ADD EDI,0x3d4
0045F0CC  E9 D8 00 00 00            JMP 0x0045f1a9
switchD_0045ef41::caseD_a:
0045F0D1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0045F0D4  89 B7 F0 02 00 00         MOV dword ptr [EDI + 0x2f0],ESI
0045F0DA  81 C7 DE 03 00 00         ADD EDI,0x3de
LAB_0045f0e0:
0045F0E0  8B 11                     MOV EDX,dword ptr [ECX]
0045F0E2  89 17                     MOV dword ptr [EDI],EDX
0045F0E4  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0045F0E7  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0045F0EA  66 8B 49 08               MOV CX,word ptr [ECX + 0x8]
0045F0EE  66 89 4F 08               MOV word ptr [EDI + 0x8],CX
0045F0F2  5F                        POP EDI
0045F0F3  5E                        POP ESI
0045F0F4  5B                        POP EBX
0045F0F5  5D                        POP EBP
0045F0F6  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_9:
0045F0F9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0045F0FC  89 B7 EC 02 00 00         MOV dword ptr [EDI + 0x2ec],ESI
0045F102  81 C7 E8 03 00 00         ADD EDI,0x3e8
0045F108  8B 02                     MOV EAX,dword ptr [EDX]
0045F10A  89 07                     MOV dword ptr [EDI],EAX
0045F10C  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0045F10F  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
0045F112  66 8B 42 08               MOV AX,word ptr [EDX + 0x8]
0045F116  66 89 47 08               MOV word ptr [EDI + 0x8],AX
0045F11A  8A 4A 0A                  MOV CL,byte ptr [EDX + 0xa]
0045F11D  88 4F 0A                  MOV byte ptr [EDI + 0xa],CL
0045F120  5F                        POP EDI
0045F121  5E                        POP ESI
0045F122  5B                        POP EBX
0045F123  5D                        POP EBP
0045F124  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_16:
0045F127  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0045F12A  89 B7 1C 03 00 00         MOV dword ptr [EDI + 0x31c],ESI
0045F130  81 C7 F3 03 00 00         ADD EDI,0x3f3
0045F136  8B 02                     MOV EAX,dword ptr [EDX]
0045F138  89 07                     MOV dword ptr [EDI],EAX
0045F13A  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0045F13D  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
0045F140  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0045F143  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0045F146  66 8B 4A 0C               MOV CX,word ptr [EDX + 0xc]
0045F14A  66 89 4F 0C               MOV word ptr [EDI + 0xc],CX
0045F14E  5F                        POP EDI
0045F14F  5E                        POP ESI
0045F150  5B                        POP EBX
0045F151  5D                        POP EBP
0045F152  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_15:
0045F155  89 B7 18 03 00 00         MOV dword ptr [EDI + 0x318],ESI
0045F15B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0045F15E  B9 05 00 00 00            MOV ECX,0x5
0045F163  81 C7 01 04 00 00         ADD EDI,0x401
0045F169  F3 A5                     MOVSD.REP ES:EDI,ESI
0045F16B  5F                        POP EDI
0045F16C  5E                        POP ESI
0045F16D  5B                        POP EBX
0045F16E  5D                        POP EBP
0045F16F  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_17:
0045F172  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0045F175  89 B7 20 03 00 00         MOV dword ptr [EDI + 0x320],ESI
0045F17B  81 C7 15 04 00 00         ADD EDI,0x415
LAB_0045f181:
0045F181  8B 02                     MOV EAX,dword ptr [EDX]
0045F183  89 07                     MOV dword ptr [EDI],EAX
0045F185  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0045F188  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
0045F18B  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
0045F18F  66 89 57 08               MOV word ptr [EDI + 0x8],DX
0045F193  5F                        POP EDI
0045F194  5E                        POP ESI
0045F195  5B                        POP EBX
0045F196  5D                        POP EBP
0045F197  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_b:
0045F19A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0045F19D  89 B7 F4 02 00 00         MOV dword ptr [EDI + 0x2f4],ESI
0045F1A3  81 C7 1F 04 00 00         ADD EDI,0x41f
LAB_0045f1a9:
0045F1A9  8B 08                     MOV ECX,dword ptr [EAX]
0045F1AB  89 0F                     MOV dword ptr [EDI],ECX
0045F1AD  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0045F1B0  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
0045F1B3  66 8B 40 08               MOV AX,word ptr [EAX + 0x8]
0045F1B7  66 89 47 08               MOV word ptr [EDI + 0x8],AX
0045F1BB  5F                        POP EDI
0045F1BC  5E                        POP ESI
0045F1BD  5B                        POP EBX
0045F1BE  5D                        POP EBP
0045F1BF  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_12:
0045F1C2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0045F1C5  89 B7 10 03 00 00         MOV dword ptr [EDI + 0x310],ESI
0045F1CB  81 C7 29 04 00 00         ADD EDI,0x429
0045F1D1  8B 11                     MOV EDX,dword ptr [ECX]
0045F1D3  89 17                     MOV dword ptr [EDI],EDX
0045F1D5  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0045F1D8  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0045F1DB  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0045F1DE  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
0045F1E1  66 8B 41 0C               MOV AX,word ptr [ECX + 0xc]
0045F1E5  66 89 47 0C               MOV word ptr [EDI + 0xc],AX
0045F1E9  5F                        POP EDI
0045F1EA  5E                        POP ESI
0045F1EB  5B                        POP EBX
0045F1EC  5D                        POP EBP
0045F1ED  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_8:
0045F1F0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0045F1F3  89 B7 E8 02 00 00         MOV dword ptr [EDI + 0x2e8],ESI
0045F1F9  81 C7 37 04 00 00         ADD EDI,0x437
0045F1FF  8B 11                     MOV EDX,dword ptr [ECX]
0045F201  89 17                     MOV dword ptr [EDI],EDX
0045F203  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0045F206  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0045F209  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0045F20C  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
0045F20F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0045F212  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
0045F215  5F                        POP EDI
0045F216  5E                        POP ESI
0045F217  5B                        POP EBX
0045F218  5D                        POP EBP
0045F219  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_e:
0045F21C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0045F21F  89 B7 00 03 00 00         MOV dword ptr [EDI + 0x300],ESI
0045F225  81 C7 47 04 00 00         ADD EDI,0x447
0045F22B  8B 11                     MOV EDX,dword ptr [ECX]
0045F22D  89 17                     MOV dword ptr [EDI],EDX
0045F22F  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0045F232  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0045F235  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0045F238  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
0045F23B  66 8B 41 0C               MOV AX,word ptr [ECX + 0xc]
0045F23F  66 89 47 0C               MOV word ptr [EDI + 0xc],AX
0045F243  5F                        POP EDI
0045F244  5E                        POP ESI
0045F245  5B                        POP EBX
0045F246  5D                        POP EBP
0045F247  C2 08 00                  RET 0x8
switchD_0045ef41::caseD_13:
0045F24A  68 80 A0 7A 00            PUSH 0x7aa080
0045F24F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0045F254  6A 00                     PUSH 0x0
0045F256  6A 00                     PUSH 0x0
0045F258  68 A7 13 00 00            PUSH 0x13a7
0045F25D  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045F262  E8 69 E2 24 00            CALL 0x006ad4d0
0045F267  83 C4 18                  ADD ESP,0x18
0045F26A  85 C0                     TEST EAX,EAX
0045F26C  74 01                     JZ 0x0045f26f
0045F26E  CC                        INT3
LAB_0045f26f:
0045F26F  5F                        POP EDI
0045F270  5E                        POP ESI
0045F271  5B                        POP EBX
0045F272  5D                        POP EBP
0045F273  C2 08 00                  RET 0x8
