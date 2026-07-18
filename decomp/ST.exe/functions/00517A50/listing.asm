HelpPanelTy::RCProc:
00517A50  55                        PUSH EBP
00517A51  8B EC                     MOV EBP,ESP
00517A53  83 EC 7C                  SUB ESP,0x7c
00517A56  8B 81 48 02 00 00         MOV EAX,dword ptr [ECX + 0x248]
00517A5C  53                        PUSH EBX
00517A5D  56                        PUSH ESI
00517A5E  57                        PUSH EDI
00517A5F  33 F6                     XOR ESI,ESI
00517A61  6A 04                     PUSH 0x4
00517A63  50                        PUSH EAX
00517A64  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00517A67  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00517A6A  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00517A6D  E8 2E 39 1F 00            CALL 0x0070b3a0
00517A72  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00517A75  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00517A78  83 C4 08                  ADD ESP,0x8
00517A7B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00517A7E  33 D2                     XOR EDX,EDX
LAB_00517a80:
00517A80  8B C2                     MOV EAX,EDX
00517A82  25 FF FF 00 00            AND EAX,0xffff
00517A87  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00517A8A  C1 E1 03                  SHL ECX,0x3
00517A8D  2B C8                     SUB ECX,EAX
00517A8F  39 B9 69 34 7C 00         CMP dword ptr [ECX + 0x7c3469],EDI
00517A95  75 0C                     JNZ 0x00517aa3
00517A97  33 C0                     XOR EAX,EAX
00517A99  8A 81 68 34 7C 00         MOV AL,byte ptr [ECX + 0x7c3468]
00517A9F  3B C3                     CMP EAX,EBX
00517AA1  74 09                     JZ 0x00517aac
LAB_00517aa3:
00517AA3  42                        INC EDX
00517AA4  66 83 FA 0B               CMP DX,0xb
00517AA8  72 D6                     JC 0x00517a80
00517AAA  EB 17                     JMP 0x00517ac3
LAB_00517aac:
00517AAC  81 E2 FF FF 00 00         AND EDX,0xffff
00517AB2  8D 34 92                  LEA ESI,[EDX + EDX*0x4]
00517AB5  C1 E6 03                  SHL ESI,0x3
00517AB8  2B F2                     SUB ESI,EDX
00517ABA  81 C6 68 34 7C 00         ADD ESI,0x7c3468
00517AC0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_00517ac3:
00517AC3  85 F6                     TEST ESI,ESI
00517AC5  0F 84 B3 0D 00 00         JZ 0x0051887e
00517ACB  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00517AD1  8D 45 88                  LEA EAX,[EBP + -0x78]
00517AD4  8D 55 84                  LEA EDX,[EBP + -0x7c]
00517AD7  6A 00                     PUSH 0x0
00517AD9  50                        PUSH EAX
00517ADA  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
00517ADD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00517AE3  E8 08 5D 21 00            CALL 0x0072d7f0
00517AE8  8B F0                     MOV ESI,EAX
00517AEA  83 C4 08                  ADD ESP,0x8
00517AED  85 F6                     TEST ESI,ESI
00517AEF  0F 85 4A 0D 00 00         JNZ 0x0051883f
00517AF5  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00517AF8  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00517AFB  84 C0                     TEST AL,AL
00517AFD  0F 85 92 00 00 00         JNZ 0x00517b95
00517B03  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
00517B09  84 C0                     TEST AL,AL
00517B0B  74 17                     JZ 0x00517b24
00517B0D  3C 06                     CMP AL,0x6
00517B0F  74 13                     JZ 0x00517b24
00517B11  3C 0A                     CMP AL,0xa
00517B13  74 0F                     JZ 0x00517b24
00517B15  C6 83 A2 01 00 00 00      MOV byte ptr [EBX + 0x1a2],0x0
00517B1C  89 B3 AB 01 00 00         MOV dword ptr [EBX + 0x1ab],ESI
00517B22  EB 12                     JMP 0x00517b36
LAB_00517b24:
00517B24  8B 8B A3 01 00 00         MOV ECX,dword ptr [EBX + 0x1a3]
00517B2A  88 83 A2 01 00 00         MOV byte ptr [EBX + 0x1a2],AL
00517B30  89 8B AB 01 00 00         MOV dword ptr [EBX + 0x1ab],ECX
LAB_00517b36:
00517B36  8B 83 78 01 00 00         MOV EAX,dword ptr [EBX + 0x178]
00517B3C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00517B3F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00517B42  C6 83 A1 01 00 00 01      MOV byte ptr [EBX + 0x1a1],0x1
00517B49  85 C0                     TEST EAX,EAX
00517B4B  89 BB A3 01 00 00         MOV dword ptr [EBX + 0x1a3],EDI
00517B51  89 B3 A7 01 00 00         MOV dword ptr [EBX + 0x1a7],ESI
00517B57  66 C7 83 AF 01 00 00 32 00  MOV word ptr [EBX + 0x1af],0x32
00517B60  66 C7 83 B1 01 00 00 05 00  MOV word ptr [EBX + 0x1b1],0x5
00517B69  74 30                     JZ 0x00517b9b
00517B6B  C7 43 28 02 42 00 00      MOV dword ptr [EBX + 0x28],0x4202
00517B72  66 C7 43 2C 00 00         MOV word ptr [EBX + 0x2c],0x0
00517B78  66 C7 43 2E 02 00         MOV word ptr [EBX + 0x2e],0x2
00517B7E  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
00517B81  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00517B87  85 C9                     TEST ECX,ECX
00517B89  74 10                     JZ 0x00517b9b
00517B8B  8B 11                     MOV EDX,dword ptr [ECX]
00517B8D  8D 43 18                  LEA EAX,[EBX + 0x18]
00517B90  50                        PUSH EAX
00517B91  FF 12                     CALL dword ptr [EDX]
00517B93  EB 06                     JMP 0x00517b9b
LAB_00517b95:
00517B95  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00517B98  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_00517b9b:
00517B9B  57                        PUSH EDI
00517B9C  E8 1E 9E EE FF            CALL 0x004019bf
00517BA1  83 C4 04                  ADD ESP,0x4
00517BA4  8B CB                     MOV ECX,EBX
00517BA6  50                        PUSH EAX
00517BA7  56                        PUSH ESI
00517BA8  68 FE 55 00 00            PUSH 0x55fe
00517BAD  E8 47 C3 EE FF            CALL 0x00403ef9
00517BB2  6A 00                     PUSH 0x0
00517BB4  56                        PUSH ESI
00517BB5  8D 4D FC                  LEA ECX,[EBP + -0x4]
00517BB8  57                        PUSH EDI
00517BB9  51                        PUSH ECX
00517BBA  8B CB                     MOV ECX,EBX
00517BBC  E8 B7 C1 EE FF            CALL 0x00403d78
00517BC1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00517BC4  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00517BCA  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517BD0  6A 0F                     PUSH 0xf
00517BD2  68 C8 00 00 00            PUSH 0xc8
00517BD7  52                        PUSH EDX
00517BD8  6A 00                     PUSH 0x0
00517BDA  6A 00                     PUSH 0x0
00517BDC  50                        PUSH EAX
00517BDD  E8 AE 8E 1F 00            CALL 0x00710a90
00517BE2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00517BE8  6A 03                     PUSH 0x3
00517BEA  6A FF                     PUSH -0x1
00517BEC  6A FD                     PUSH -0x3
00517BEE  51                        PUSH ECX
00517BEF  68 27 56 00 00            PUSH 0x5627
00517BF4  E8 47 85 19 00            CALL 0x006b0140
00517BF9  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517BFF  50                        PUSH EAX
00517C00  E8 BB 9D 1F 00            CALL 0x007119c0
00517C05  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00517C08  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00517C0E  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517C14  6A 0F                     PUSH 0xf
00517C16  68 CF 00 00 00            PUSH 0xcf
00517C1B  52                        PUSH EDX
00517C1C  68 CD 00 00 00            PUSH 0xcd
00517C21  6A 00                     PUSH 0x0
00517C23  50                        PUSH EAX
00517C24  E8 67 8E 1F 00            CALL 0x00710a90
00517C29  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00517C2F  33 C9                     XOR ECX,ECX
00517C31  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00517C34  80 FA 03                  CMP DL,0x3
00517C37  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00517C3D  0F 95 C1                  SETNZ CL
00517C40  8B 47 05                  MOV EAX,dword ptr [EDI + 0x5]
00517C43  49                        DEC ECX
00517C44  83 E1 05                  AND ECX,0x5
00517C47  51                        PUSH ECX
00517C48  6A FF                     PUSH -0x1
00517C4A  6A 01                     PUSH 0x1
00517C4C  52                        PUSH EDX
00517C4D  50                        PUSH EAX
00517C4E  E8 ED 84 19 00            CALL 0x006b0140
00517C53  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517C59  50                        PUSH EAX
00517C5A  E8 61 9D 1F 00            CALL 0x007119c0
00517C5F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517C62  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00517C68  83 C0 0F                  ADD EAX,0xf
00517C6B  6A 0F                     PUSH 0xf
00517C6D  68 C8 00 00 00            PUSH 0xc8
00517C72  50                        PUSH EAX
00517C73  6A 00                     PUSH 0x0
00517C75  6A 00                     PUSH 0x0
00517C77  51                        PUSH ECX
00517C78  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517C7E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00517C81  E8 0A 8E 1F 00            CALL 0x00710a90
00517C86  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00517C8C  6A 03                     PUSH 0x3
00517C8E  6A FF                     PUSH -0x1
00517C90  6A FD                     PUSH -0x3
00517C92  52                        PUSH EDX
00517C93  68 28 56 00 00            PUSH 0x5628
00517C98  E8 A3 84 19 00            CALL 0x006b0140
00517C9D  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517CA3  50                        PUSH EAX
00517CA4  E8 17 9D 1F 00            CALL 0x007119c0
00517CA9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517CAC  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00517CB2  6A 0F                     PUSH 0xf
00517CB4  68 CF 00 00 00            PUSH 0xcf
00517CB9  50                        PUSH EAX
00517CBA  68 CD 00 00 00            PUSH 0xcd
00517CBF  6A 00                     PUSH 0x0
00517CC1  51                        PUSH ECX
00517CC2  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517CC8  E8 C3 8D 1F 00            CALL 0x00710a90
00517CCD  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00517CD3  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
00517CD6  52                        PUSH EDX
00517CD7  6A 00                     PUSH 0x0
00517CD9  56                        PUSH ESI
00517CDA  50                        PUSH EAX
00517CDB  E8 A4 B9 EE FF            CALL 0x00403684
00517CE0  83 C4 0C                  ADD ESP,0xc
00517CE3  50                        PUSH EAX
00517CE4  E8 57 84 19 00            CALL 0x006b0140
00517CE9  8B F8                     MOV EDI,EAX
00517CEB  83 C9 FF                  OR ECX,0xffffffff
00517CEE  33 C0                     XOR EAX,EAX
00517CF0  6A 0A                     PUSH 0xa
00517CF2  F2 AE                     SCASB.REPNE ES:EDI
00517CF4  F7 D1                     NOT ECX
00517CF6  2B F9                     SUB EDI,ECX
00517CF8  68 3A F3 80 00            PUSH 0x80f33a
00517CFD  8B D1                     MOV EDX,ECX
00517CFF  8B F7                     MOV ESI,EDI
00517D01  BF 3A F3 80 00            MOV EDI,0x80f33a
00517D06  C1 E9 02                  SHR ECX,0x2
00517D09  F3 A5                     MOVSD.REP ES:EDI,ESI
00517D0B  8B CA                     MOV ECX,EDX
00517D0D  83 E1 03                  AND ECX,0x3
00517D10  F3 A4                     MOVSB.REP ES:EDI,ESI
00517D12  E8 49 68 21 00            CALL 0x0072e560
00517D17  83 C4 08                  ADD ESP,0x8
00517D1A  85 C0                     TEST EAX,EAX
00517D1C  74 12                     JZ 0x00517d30
LAB_00517d1e:
00517D1E  6A 0A                     PUSH 0xa
00517D20  50                        PUSH EAX
00517D21  C6 00 20                  MOV byte ptr [EAX],0x20
00517D24  E8 37 68 21 00            CALL 0x0072e560
00517D29  83 C4 08                  ADD ESP,0x8
00517D2C  85 C0                     TEST EAX,EAX
00517D2E  75 EE                     JNZ 0x00517d1e
LAB_00517d30:
00517D30  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00517D36  33 C0                     XOR EAX,EAX
00517D38  80 F9 03                  CMP CL,0x3
00517D3B  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517D41  0F 95 C0                  SETNZ AL
00517D44  48                        DEC EAX
00517D45  83 E0 05                  AND EAX,0x5
00517D48  50                        PUSH EAX
00517D49  6A FF                     PUSH -0x1
00517D4B  6A 01                     PUSH 0x1
00517D4D  68 3A F3 80 00            PUSH 0x80f33a
00517D52  E8 69 9C 1F 00            CALL 0x007119c0
00517D57  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00517D5A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00517D5D  83 C1 0F                  ADD ECX,0xf
00517D60  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00517D63  8A 0E                     MOV CL,byte ptr [ESI]
00517D65  8B 56 09                  MOV EDX,dword ptr [ESI + 0x9]
00517D68  51                        PUSH ECX
00517D69  52                        PUSH EDX
00517D6A  E8 86 D9 EE FF            CALL 0x004056f5
00517D6F  50                        PUSH EAX
00517D70  8B 83 40 02 00 00         MOV EAX,dword ptr [EBX + 0x240]
00517D76  50                        PUSH EAX
00517D77  E8 24 36 1F 00            CALL 0x0070b3a0
00517D7C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00517D7F  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
00517D85  50                        PUSH EAX
00517D86  6A 01                     PUSH 0x1
00517D88  51                        PUSH ECX
00517D89  68 CD 00 00 00            PUSH 0xcd
00517D8E  52                        PUSH EDX
00517D8F  E8 95 B4 EE FF            CALL 0x00403229
00517D94  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00517D97  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517D9A  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00517DA0  57                        PUSH EDI
00517DA1  83 C0 FE                  ADD EAX,-0x2
00517DA4  6A 06                     PUSH 0x6
00517DA6  50                        PUSH EAX
00517DA7  68 CB 00 00 00            PUSH 0xcb
00517DAC  51                        PUSH ECX
00517DAD  E8 77 B4 EE FF            CALL 0x00403229
00517DB2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517DB5  C7 45 C8 CB 00 00 00      MOV dword ptr [EBP + -0x38],0xcb
00517DBC  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00517DBF  83 C0 FE                  ADD EAX,-0x2
00517DC2  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00517DC5  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00517DC8  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00517DCB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00517DCE  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00517DD1  C6 45 D8 02               MOV byte ptr [EBP + -0x28],0x2
00517DD5  8B 56 09                  MOV EDX,dword ptr [ESI + 0x9]
00517DD8  83 C4 38                  ADD ESP,0x38
00517DDB  89 55 D9                  MOV dword ptr [EBP + -0x27],EDX
00517DDE  8B 93 D7 01 00 00         MOV EDX,dword ptr [EBX + 0x1d7]
00517DE4  8D 4D C8                  LEA ECX,[EBP + -0x38]
00517DE7  89 45 DD                  MOV dword ptr [EBP + -0x23],EAX
00517DEA  51                        PUSH ECX
00517DEB  52                        PUSH EDX
00517DEC  E8 CF 63 19 00            CALL 0x006ae1c0
00517DF1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517DF4  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00517DF7  03 C1                     ADD EAX,ECX
00517DF9  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517DFF  6A 0F                     PUSH 0xf
00517E01  68 C8 00 00 00            PUSH 0xc8
00517E06  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00517E09  50                        PUSH EAX
00517E0A  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00517E10  6A 00                     PUSH 0x0
00517E12  6A 00                     PUSH 0x0
00517E14  50                        PUSH EAX
00517E15  E8 76 8C 1F 00            CALL 0x00710a90
00517E1A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00517E20  6A 03                     PUSH 0x3
00517E22  6A FF                     PUSH -0x1
00517E24  6A FD                     PUSH -0x3
00517E26  51                        PUSH ECX
00517E27  68 29 56 00 00            PUSH 0x5629
00517E2C  E8 0F 83 19 00            CALL 0x006b0140
00517E31  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517E37  50                        PUSH EAX
00517E38  E8 83 9B 1F 00            CALL 0x007119c0
00517E3D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00517E40  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00517E46  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517E4C  6A 0F                     PUSH 0xf
00517E4E  68 CF 00 00 00            PUSH 0xcf
00517E53  52                        PUSH EDX
00517E54  68 CD 00 00 00            PUSH 0xcd
00517E59  6A 00                     PUSH 0x0
00517E5B  50                        PUSH EAX
00517E5C  E8 2F 8C 1F 00            CALL 0x00710a90
00517E61  A0 4E 87 80 00            MOV AL,[0x0080874e]
00517E66  33 C9                     XOR ECX,ECX
00517E68  3C 03                     CMP AL,0x3
00517E6A  8B 46 0D                  MOV EAX,dword ptr [ESI + 0xd]
00517E6D  0F 95 C1                  SETNZ CL
00517E70  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00517E76  49                        DEC ECX
00517E77  83 E1 05                  AND ECX,0x5
00517E7A  F7 D8                     NEG EAX
00517E7C  51                        PUSH ECX
00517E7D  6A FF                     PUSH -0x1
00517E7F  1B C0                     SBB EAX,EAX
00517E81  6A 01                     PUSH 0x1
00517E83  05 3F 27 00 00            ADD EAX,0x273f
00517E88  52                        PUSH EDX
00517E89  50                        PUSH EAX
00517E8A  E8 B1 82 19 00            CALL 0x006b0140
00517E8F  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517E95  50                        PUSH EAX
00517E96  E8 25 9B 1F 00            CALL 0x007119c0
00517E9B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517E9E  83 C0 0F                  ADD EAX,0xf
00517EA1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00517EA4  8B 4E 0D                  MOV ECX,dword ptr [ESI + 0xd]
00517EA7  85 C9                     TEST ECX,ECX
00517EA9  0F 84 94 01 00 00         JZ 0x00518043
00517EAF  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00517EB5  6A 0F                     PUSH 0xf
00517EB7  68 C8 00 00 00            PUSH 0xc8
00517EBC  50                        PUSH EAX
00517EBD  6A 00                     PUSH 0x0
00517EBF  6A 00                     PUSH 0x0
00517EC1  51                        PUSH ECX
00517EC2  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517EC8  E8 C3 8B 1F 00            CALL 0x00710a90
00517ECD  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00517ED3  6A 03                     PUSH 0x3
00517ED5  6A FF                     PUSH -0x1
00517ED7  6A FD                     PUSH -0x3
00517ED9  52                        PUSH EDX
00517EDA  68 2A 56 00 00            PUSH 0x562a
00517EDF  E8 5C 82 19 00            CALL 0x006b0140
00517EE4  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517EEA  50                        PUSH EAX
00517EEB  E8 D0 9A 1F 00            CALL 0x007119c0
00517EF0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517EF3  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00517EF9  6A 0F                     PUSH 0xf
00517EFB  68 CF 00 00 00            PUSH 0xcf
00517F00  50                        PUSH EAX
00517F01  68 CD 00 00 00            PUSH 0xcd
00517F06  6A 00                     PUSH 0x0
00517F08  51                        PUSH ECX
00517F09  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517F0F  E8 7C 8B 1F 00            CALL 0x00710a90
00517F14  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00517F1A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00517F1D  8B 4E 0D                  MOV ECX,dword ptr [ESI + 0xd]
00517F20  52                        PUSH EDX
00517F21  6A 00                     PUSH 0x0
00517F23  50                        PUSH EAX
00517F24  51                        PUSH ECX
00517F25  E8 5A B7 EE FF            CALL 0x00403684
00517F2A  83 C4 0C                  ADD ESP,0xc
00517F2D  50                        PUSH EAX
00517F2E  E8 0D 82 19 00            CALL 0x006b0140
00517F33  8B F8                     MOV EDI,EAX
00517F35  83 C9 FF                  OR ECX,0xffffffff
00517F38  33 C0                     XOR EAX,EAX
00517F3A  6A 0A                     PUSH 0xa
00517F3C  F2 AE                     SCASB.REPNE ES:EDI
00517F3E  F7 D1                     NOT ECX
00517F40  2B F9                     SUB EDI,ECX
00517F42  68 3A F3 80 00            PUSH 0x80f33a
00517F47  8B D1                     MOV EDX,ECX
00517F49  8B F7                     MOV ESI,EDI
00517F4B  BF 3A F3 80 00            MOV EDI,0x80f33a
00517F50  C1 E9 02                  SHR ECX,0x2
00517F53  F3 A5                     MOVSD.REP ES:EDI,ESI
00517F55  8B CA                     MOV ECX,EDX
00517F57  83 E1 03                  AND ECX,0x3
00517F5A  F3 A4                     MOVSB.REP ES:EDI,ESI
00517F5C  E8 FF 65 21 00            CALL 0x0072e560
00517F61  83 C4 08                  ADD ESP,0x8
00517F64  85 C0                     TEST EAX,EAX
00517F66  74 12                     JZ 0x00517f7a
LAB_00517f68:
00517F68  6A 0A                     PUSH 0xa
00517F6A  50                        PUSH EAX
00517F6B  C6 00 20                  MOV byte ptr [EAX],0x20
00517F6E  E8 ED 65 21 00            CALL 0x0072e560
00517F73  83 C4 08                  ADD ESP,0x8
00517F76  85 C0                     TEST EAX,EAX
00517F78  75 EE                     JNZ 0x00517f68
LAB_00517f7a:
00517F7A  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00517F80  33 C0                     XOR EAX,EAX
00517F82  80 F9 03                  CMP CL,0x3
00517F85  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00517F8B  0F 95 C0                  SETNZ AL
00517F8E  48                        DEC EAX
00517F8F  83 E0 05                  AND EAX,0x5
00517F92  50                        PUSH EAX
00517F93  6A FF                     PUSH -0x1
00517F95  6A 01                     PUSH 0x1
00517F97  68 3A F3 80 00            PUSH 0x80f33a
00517F9C  E8 1F 9A 1F 00            CALL 0x007119c0
00517FA1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00517FA4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00517FA7  83 C1 0F                  ADD ECX,0xf
00517FAA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00517FAD  8A 0F                     MOV CL,byte ptr [EDI]
00517FAF  8B 57 0D                  MOV EDX,dword ptr [EDI + 0xd]
00517FB2  51                        PUSH ECX
00517FB3  52                        PUSH EDX
00517FB4  E8 3C D7 EE FF            CALL 0x004056f5
00517FB9  50                        PUSH EAX
00517FBA  8B 83 3C 02 00 00         MOV EAX,dword ptr [EBX + 0x23c]
00517FC0  50                        PUSH EAX
00517FC1  E8 DA 33 1F 00            CALL 0x0070b3a0
00517FC6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00517FC9  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
00517FCF  50                        PUSH EAX
00517FD0  6A 01                     PUSH 0x1
00517FD2  51                        PUSH ECX
00517FD3  68 CD 00 00 00            PUSH 0xcd
00517FD8  52                        PUSH EDX
00517FD9  E8 4B B2 EE FF            CALL 0x00403229
00517FDE  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00517FE1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517FE4  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00517FEA  56                        PUSH ESI
00517FEB  6A 06                     PUSH 0x6
00517FED  50                        PUSH EAX
00517FEE  68 CD 00 00 00            PUSH 0xcd
00517FF3  51                        PUSH ECX
00517FF4  E8 30 B2 EE FF            CALL 0x00403229
00517FF9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00517FFC  C7 45 C8 CD 00 00 00      MOV dword ptr [EBP + -0x38],0xcd
00518003  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00518006  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00518009  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0051800C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0051800F  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00518012  C6 45 D8 03               MOV byte ptr [EBP + -0x28],0x3
00518016  8B 57 0D                  MOV EDX,dword ptr [EDI + 0xd]
00518019  83 C4 38                  ADD ESP,0x38
0051801C  89 55 D9                  MOV dword ptr [EBP + -0x27],EDX
0051801F  8B 93 D7 01 00 00         MOV EDX,dword ptr [EBX + 0x1d7]
00518025  33 C0                     XOR EAX,EAX
00518027  8D 4D C8                  LEA ECX,[EBP + -0x38]
0051802A  8A 07                     MOV AL,byte ptr [EDI]
0051802C  51                        PUSH ECX
0051802D  52                        PUSH EDX
0051802E  89 45 DD                  MOV dword ptr [EBP + -0x23],EAX
00518031  E8 8A 61 19 00            CALL 0x006ae1c0
00518036  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00518039  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0051803C  03 C1                     ADD EAX,ECX
0051803E  8B F7                     MOV ESI,EDI
00518040  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00518043:
00518043  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518049  6A 0F                     PUSH 0xf
0051804B  68 C8 00 00 00            PUSH 0xc8
00518050  50                        PUSH EAX
00518051  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00518057  6A 00                     PUSH 0x0
00518059  6A 00                     PUSH 0x0
0051805B  50                        PUSH EAX
0051805C  E8 2F 8A 1F 00            CALL 0x00710a90
00518061  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00518067  6A 03                     PUSH 0x3
00518069  6A FF                     PUSH -0x1
0051806B  6A FD                     PUSH -0x3
0051806D  51                        PUSH ECX
0051806E  68 2B 56 00 00            PUSH 0x562b
00518073  E8 C8 80 19 00            CALL 0x006b0140
00518078  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051807E  50                        PUSH EAX
0051807F  E8 3C 99 1F 00            CALL 0x007119c0
00518084  8D 56 19                  LEA EDX,[ESI + 0x19]
00518087  8D 7E 11                  LEA EDI,[ESI + 0x11]
0051808A  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0051808D  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00518090  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
LAB_00518097:
00518097  83 3F 00                  CMP dword ptr [EDI],0x0
0051809A  0F 84 0D 02 00 00         JZ 0x005182ad
005180A0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005180A3  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
005180A9  6A 0F                     PUSH 0xf
005180AB  68 CF 00 00 00            PUSH 0xcf
005180B0  50                        PUSH EAX
005180B1  68 CD 00 00 00            PUSH 0xcd
005180B6  6A 00                     PUSH 0x0
005180B8  51                        PUSH ECX
005180B9  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005180BF  E8 CC 89 1F 00            CALL 0x00710a90
005180C4  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005180CA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005180CD  8B 0F                     MOV ECX,dword ptr [EDI]
005180CF  52                        PUSH EDX
005180D0  6A 00                     PUSH 0x0
005180D2  50                        PUSH EAX
005180D3  51                        PUSH ECX
005180D4  E8 AB B5 EE FF            CALL 0x00403684
005180D9  83 C4 0C                  ADD ESP,0xc
005180DC  50                        PUSH EAX
005180DD  E8 5E 80 19 00            CALL 0x006b0140
005180E2  8B F8                     MOV EDI,EAX
005180E4  83 C9 FF                  OR ECX,0xffffffff
005180E7  33 C0                     XOR EAX,EAX
005180E9  6A 0A                     PUSH 0xa
005180EB  F2 AE                     SCASB.REPNE ES:EDI
005180ED  F7 D1                     NOT ECX
005180EF  2B F9                     SUB EDI,ECX
005180F1  68 3A F3 80 00            PUSH 0x80f33a
005180F6  8B D1                     MOV EDX,ECX
005180F8  8B F7                     MOV ESI,EDI
005180FA  BF 3A F3 80 00            MOV EDI,0x80f33a
005180FF  C1 E9 02                  SHR ECX,0x2
00518102  F3 A5                     MOVSD.REP ES:EDI,ESI
00518104  8B CA                     MOV ECX,EDX
00518106  83 E1 03                  AND ECX,0x3
00518109  F3 A4                     MOVSB.REP ES:EDI,ESI
0051810B  E8 50 64 21 00            CALL 0x0072e560
00518110  83 C4 08                  ADD ESP,0x8
00518113  85 C0                     TEST EAX,EAX
00518115  74 12                     JZ 0x00518129
LAB_00518117:
00518117  6A 0A                     PUSH 0xa
00518119  50                        PUSH EAX
0051811A  C6 00 20                  MOV byte ptr [EAX],0x20
0051811D  E8 3E 64 21 00            CALL 0x0072e560
00518122  83 C4 08                  ADD ESP,0x8
00518125  85 C0                     TEST EAX,EAX
00518127  75 EE                     JNZ 0x00518117
LAB_00518129:
00518129  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051812F  33 C0                     XOR EAX,EAX
00518131  80 FA 03                  CMP DL,0x3
00518134  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051813A  0F 95 C0                  SETNZ AL
0051813D  48                        DEC EAX
0051813E  83 E0 05                  AND EAX,0x5
00518141  50                        PUSH EAX
00518142  6A FF                     PUSH -0x1
00518144  6A 01                     PUSH 0x1
00518146  68 3A F3 80 00            PUSH 0x80f33a
0051814B  E8 70 98 1F 00            CALL 0x007119c0
00518150  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00518153  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00518156  83 C7 0F                  ADD EDI,0xf
00518159  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0051815C  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0051815F  8A 11                     MOV DL,byte ptr [ECX]
00518161  8B 07                     MOV EAX,dword ptr [EDI]
00518163  52                        PUSH EDX
00518164  50                        PUSH EAX
00518165  E8 8B D5 EE FF            CALL 0x004056f5
0051816A  8B 8B 40 02 00 00         MOV ECX,dword ptr [EBX + 0x240]
00518170  50                        PUSH EAX
00518171  51                        PUSH ECX
00518172  E8 29 32 1F 00            CALL 0x0070b3a0
00518177  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051817A  50                        PUSH EAX
0051817B  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00518181  6A 01                     PUSH 0x1
00518183  52                        PUSH EDX
00518184  68 CD 00 00 00            PUSH 0xcd
00518189  50                        PUSH EAX
0051818A  E8 9A B0 EE FF            CALL 0x00403229
0051818F  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00518192  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00518195  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051819B  56                        PUSH ESI
0051819C  83 C1 FE                  ADD ECX,-0x2
0051819F  6A 06                     PUSH 0x6
005181A1  51                        PUSH ECX
005181A2  68 CB 00 00 00            PUSH 0xcb
005181A7  52                        PUSH EDX
005181A8  E8 7C B0 EE FF            CALL 0x00403229
005181AD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005181B0  C7 45 C8 CB 00 00 00      MOV dword ptr [EBP + -0x38],0xcb
005181B7  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005181BA  83 C1 FE                  ADD ECX,-0x2
005181BD  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005181C0  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
005181C3  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005181C6  C6 45 D8 02               MOV byte ptr [EBP + -0x28],0x2
005181CA  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
005181CD  8B 07                     MOV EAX,dword ptr [EDI]
005181CF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005181D2  33 C9                     XOR ECX,ECX
005181D4  89 45 D9                  MOV dword ptr [EBP + -0x27],EAX
005181D7  83 C4 38                  ADD ESP,0x38
005181DA  8A 0A                     MOV CL,byte ptr [EDX]
005181DC  8D 45 C8                  LEA EAX,[EBP + -0x38]
005181DF  89 4D DD                  MOV dword ptr [EBP + -0x23],ECX
005181E2  8B 8B D7 01 00 00         MOV ECX,dword ptr [EBX + 0x1d7]
005181E8  50                        PUSH EAX
005181E9  51                        PUSH ECX
005181EA  E8 D1 5F 19 00            CALL 0x006ae1c0
005181EF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005181F2  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
005181F5  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
005181FB  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518201  03 C7                     ADD EAX,EDI
00518203  6A 0F                     PUSH 0xf
00518205  68 C8 00 00 00            PUSH 0xc8
0051820A  50                        PUSH EAX
0051820B  6A 00                     PUSH 0x0
0051820D  6A 00                     PUSH 0x0
0051820F  52                        PUSH EDX
00518210  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00518213  E8 78 88 1F 00            CALL 0x00710a90
00518218  6A 03                     PUSH 0x3
0051821A  6A FF                     PUSH -0x1
0051821C  6A FD                     PUSH -0x3
0051821E  A1 18 76 80 00            MOV EAX,[0x00807618]
00518223  50                        PUSH EAX
00518224  68 2C 56 00 00            PUSH 0x562c
00518229  E8 12 7F 19 00            CALL 0x006b0140
0051822E  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518234  50                        PUSH EAX
00518235  E8 86 97 1F 00            CALL 0x007119c0
0051823A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051823D  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
00518243  6A 0F                     PUSH 0xf
00518245  68 CF 00 00 00            PUSH 0xcf
0051824A  51                        PUSH ECX
0051824B  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518251  68 CD 00 00 00            PUSH 0xcd
00518256  6A 00                     PUSH 0x0
00518258  52                        PUSH EDX
00518259  E8 32 88 1F 00            CALL 0x00710a90
0051825E  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00518264  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00518267  33 C0                     XOR EAX,EAX
00518269  80 F9 03                  CMP CL,0x3
0051826C  0F 95 C0                  SETNZ AL
0051826F  48                        DEC EAX
00518270  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00518276  83 E0 05                  AND EAX,0x5
00518279  50                        PUSH EAX
0051827A  8A 02                     MOV AL,byte ptr [EDX]
0051827C  F6 D8                     NEG AL
0051827E  1B C0                     SBB EAX,EAX
00518280  6A FF                     PUSH -0x1
00518282  24 EF                     AND AL,0xef
00518284  6A 01                     PUSH 0x1
00518286  05 41 56 00 00            ADD EAX,0x5641
0051828B  51                        PUSH ECX
0051828C  50                        PUSH EAX
0051828D  E8 AE 7E 19 00            CALL 0x006b0140
00518292  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518298  50                        PUSH EAX
00518299  E8 22 97 1F 00            CALL 0x007119c0
0051829E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005182A1  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005182A4  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005182A7  83 C0 0F                  ADD EAX,0xf
005182AA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005182ad:
005182AD  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005182B0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005182B3  83 C7 04                  ADD EDI,0x4
005182B6  41                        INC ECX
005182B7  48                        DEC EAX
005182B8  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
005182BB  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005182BE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005182C1  0F 85 D0 FD FF FF         JNZ 0x00518097
005182C7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005182CA  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
005182D0  6A 0F                     PUSH 0xf
005182D2  68 C8 00 00 00            PUSH 0xc8
005182D7  51                        PUSH ECX
005182D8  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005182DE  6A 00                     PUSH 0x0
005182E0  6A 00                     PUSH 0x0
005182E2  52                        PUSH EDX
005182E3  E8 A8 87 1F 00            CALL 0x00710a90
005182E8  A1 18 76 80 00            MOV EAX,[0x00807618]
005182ED  6A 03                     PUSH 0x3
005182EF  6A FF                     PUSH -0x1
005182F1  6A FD                     PUSH -0x3
005182F3  50                        PUSH EAX
005182F4  68 2D 56 00 00            PUSH 0x562d
005182F9  E8 42 7E 19 00            CALL 0x006b0140
005182FE  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518304  50                        PUSH EAX
00518305  E8 B6 96 1F 00            CALL 0x007119c0
0051830A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00518310  8B 56 1B                  MOV EDX,dword ptr [ESI + 0x1b]
00518313  51                        PUSH ECX
00518314  52                        PUSH EDX
00518315  E8 26 7E 19 00            CALL 0x006b0140
0051831A  8B F8                     MOV EDI,EAX
0051831C  83 C9 FF                  OR ECX,0xffffffff
0051831F  33 C0                     XOR EAX,EAX
00518321  6A 01                     PUSH 0x1
00518323  F2 AE                     SCASB.REPNE ES:EDI
00518325  F7 D1                     NOT ECX
00518327  2B F9                     SUB EDI,ECX
00518329  68 CF 00 00 00            PUSH 0xcf
0051832E  8B C1                     MOV EAX,ECX
00518330  8B F7                     MOV ESI,EDI
00518332  BF 3A F3 80 00            MOV EDI,0x80f33a
00518337  68 D8 21 7C 00            PUSH 0x7c21d8
0051833C  C1 E9 02                  SHR ECX,0x2
0051833F  F3 A5                     MOVSD.REP ES:EDI,ESI
00518341  8B C8                     MOV ECX,EAX
00518343  68 3A F3 80 00            PUSH 0x80f33a
00518348  83 E1 03                  AND ECX,0x3
0051834B  68 3A F3 80 00            PUSH 0x80f33a
00518350  F3 A4                     MOVSB.REP ES:EDI,ESI
00518352  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518358  E8 B3 A8 1F 00            CALL 0x00712c10
0051835D  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518363  68 3A F3 80 00            PUSH 0x80f33a
00518368  E8 73 90 1F 00            CALL 0x007113e0
0051836D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00518370  8B F0                     MOV ESI,EAX
00518372  56                        PUSH ESI
00518373  51                        PUSH ECX
00518374  8B CB                     MOV ECX,EBX
00518376  E8 F5 94 EE FF            CALL 0x00401870
0051837B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051837E  8B FE                     MOV EDI,ESI
00518380  81 E7 FF FF 00 00         AND EDI,0xffff
00518386  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051838C  8D 57 02                  LEA EDX,[EDI + 0x2]
0051838F  52                        PUSH EDX
00518390  68 CF 00 00 00            PUSH 0xcf
00518395  50                        PUSH EAX
00518396  68 CD 00 00 00            PUSH 0xcd
0051839B  6A 00                     PUSH 0x0
0051839D  51                        PUSH ECX
0051839E  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005183A4  E8 E7 86 1F 00            CALL 0x00710a90
005183A9  A0 4E 87 80 00            MOV AL,[0x0080874e]
005183AE  33 D2                     XOR EDX,EDX
005183B0  3C 03                     CMP AL,0x3
005183B2  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005183B8  0F 95 C2                  SETNZ DL
005183BB  4A                        DEC EDX
005183BC  6A FF                     PUSH -0x1
005183BE  83 E2 05                  AND EDX,0x5
005183C1  6A FF                     PUSH -0x1
005183C3  52                        PUSH EDX
005183C4  6A FF                     PUSH -0x1
005183C6  6A 01                     PUSH 0x1
005183C8  68 3A F3 80 00            PUSH 0x80f33a
005183CD  E8 9E 97 1F 00            CALL 0x00711b70
005183D2  66 83 FE 0F               CMP SI,0xf
005183D6  77 05                     JA 0x005183dd
005183D8  BF 0F 00 00 00            MOV EDI,0xf
LAB_005183dd:
005183DD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005183E0  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005183E6  03 C7                     ADD EAX,EDI
005183E8  6A 0F                     PUSH 0xf
005183EA  68 C8 00 00 00            PUSH 0xc8
005183EF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005183F2  50                        PUSH EAX
005183F3  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
005183F9  6A 00                     PUSH 0x0
005183FB  6A 00                     PUSH 0x0
005183FD  50                        PUSH EAX
005183FE  E8 8D 86 1F 00            CALL 0x00710a90
00518403  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00518409  6A 03                     PUSH 0x3
0051840B  6A FF                     PUSH -0x1
0051840D  6A FD                     PUSH -0x3
0051840F  51                        PUSH ECX
00518410  68 2E 56 00 00            PUSH 0x562e
00518415  E8 26 7D 19 00            CALL 0x006b0140
0051841A  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518420  50                        PUSH EAX
00518421  E8 9A 95 1F 00            CALL 0x007119c0
00518426  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00518429  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051842F  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518435  6A 0F                     PUSH 0xf
00518437  68 CF 00 00 00            PUSH 0xcf
0051843C  52                        PUSH EDX
0051843D  68 CD 00 00 00            PUSH 0xcd
00518442  6A 00                     PUSH 0x0
00518444  50                        PUSH EAX
00518445  E8 46 86 1F 00            CALL 0x00710a90
0051844A  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00518450  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00518453  33 C9                     XOR ECX,ECX
00518455  80 FA 03                  CMP DL,0x3
00518458  8B 46 1F                  MOV EAX,dword ptr [ESI + 0x1f]
0051845B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00518461  0F 95 C1                  SETNZ CL
00518464  49                        DEC ECX
00518465  83 E1 05                  AND ECX,0x5
00518468  F7 D8                     NEG EAX
0051846A  51                        PUSH ECX
0051846B  6A FF                     PUSH -0x1
0051846D  1B C0                     SBB EAX,EAX
0051846F  6A 01                     PUSH 0x1
00518471  05 3F 27 00 00            ADD EAX,0x273f
00518476  52                        PUSH EDX
00518477  50                        PUSH EAX
00518478  E8 C3 7C 19 00            CALL 0x006b0140
0051847D  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518483  50                        PUSH EAX
00518484  E8 37 95 1F 00            CALL 0x007119c0
00518489  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051848C  83 C0 0F                  ADD EAX,0xf
0051848F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00518492  8B 4E 1F                  MOV ECX,dword ptr [ESI + 0x1f]
00518495  85 C9                     TEST ECX,ECX
00518497  0F 84 AA 01 00 00         JZ 0x00518647
0051849D  6A 0F                     PUSH 0xf
0051849F  50                        PUSH EAX
005184A0  8B CB                     MOV ECX,EBX
005184A2  E8 C9 93 EE FF            CALL 0x00401870
005184A7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005184AA  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
005184B0  6A 0F                     PUSH 0xf
005184B2  68 C8 00 00 00            PUSH 0xc8
005184B7  51                        PUSH ECX
005184B8  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005184BE  6A 00                     PUSH 0x0
005184C0  6A 00                     PUSH 0x0
005184C2  52                        PUSH EDX
005184C3  E8 C8 85 1F 00            CALL 0x00710a90
005184C8  A1 18 76 80 00            MOV EAX,[0x00807618]
005184CD  6A 03                     PUSH 0x3
005184CF  6A FF                     PUSH -0x1
005184D1  6A FD                     PUSH -0x3
005184D3  50                        PUSH EAX
005184D4  68 2A 56 00 00            PUSH 0x562a
005184D9  E8 62 7C 19 00            CALL 0x006b0140
005184DE  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005184E4  50                        PUSH EAX
005184E5  E8 D6 94 1F 00            CALL 0x007119c0
005184EA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005184ED  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
005184F3  6A 0F                     PUSH 0xf
005184F5  68 CF 00 00 00            PUSH 0xcf
005184FA  51                        PUSH ECX
005184FB  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00518501  68 CD 00 00 00            PUSH 0xcd
00518506  6A 00                     PUSH 0x0
00518508  52                        PUSH EDX
00518509  E8 82 85 1F 00            CALL 0x00710a90
0051850E  A1 18 76 80 00            MOV EAX,[0x00807618]
00518513  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00518516  8B 56 1F                  MOV EDX,dword ptr [ESI + 0x1f]
00518519  50                        PUSH EAX
0051851A  6A 00                     PUSH 0x0
0051851C  51                        PUSH ECX
0051851D  52                        PUSH EDX
0051851E  E8 61 B1 EE FF            CALL 0x00403684
00518523  83 C4 0C                  ADD ESP,0xc
00518526  50                        PUSH EAX
00518527  E8 14 7C 19 00            CALL 0x006b0140
0051852C  8B F8                     MOV EDI,EAX
0051852E  83 C9 FF                  OR ECX,0xffffffff
00518531  33 C0                     XOR EAX,EAX
00518533  6A 0A                     PUSH 0xa
00518535  F2 AE                     SCASB.REPNE ES:EDI
00518537  F7 D1                     NOT ECX
00518539  2B F9                     SUB EDI,ECX
0051853B  68 3A F3 80 00            PUSH 0x80f33a
00518540  8B C1                     MOV EAX,ECX
00518542  8B F7                     MOV ESI,EDI
00518544  BF 3A F3 80 00            MOV EDI,0x80f33a
00518549  C1 E9 02                  SHR ECX,0x2
0051854C  F3 A5                     MOVSD.REP ES:EDI,ESI
0051854E  8B C8                     MOV ECX,EAX
00518550  83 E1 03                  AND ECX,0x3
00518553  F3 A4                     MOVSB.REP ES:EDI,ESI
00518555  E8 06 60 21 00            CALL 0x0072e560
0051855A  83 C4 08                  ADD ESP,0x8
0051855D  85 C0                     TEST EAX,EAX
0051855F  74 12                     JZ 0x00518573
LAB_00518561:
00518561  6A 0A                     PUSH 0xa
00518563  50                        PUSH EAX
00518564  C6 00 20                  MOV byte ptr [EAX],0x20
00518567  E8 F4 5F 21 00            CALL 0x0072e560
0051856C  83 C4 08                  ADD ESP,0x8
0051856F  85 C0                     TEST EAX,EAX
00518571  75 EE                     JNZ 0x00518561
LAB_00518573:
00518573  A0 4E 87 80 00            MOV AL,[0x0080874e]
00518578  33 C9                     XOR ECX,ECX
0051857A  3C 03                     CMP AL,0x3
0051857C  0F 95 C1                  SETNZ CL
0051857F  49                        DEC ECX
00518580  83 E1 05                  AND ECX,0x5
00518583  51                        PUSH ECX
00518584  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051858A  6A FF                     PUSH -0x1
0051858C  6A 01                     PUSH 0x1
0051858E  68 3A F3 80 00            PUSH 0x80f33a
00518593  E8 28 94 1F 00            CALL 0x007119c0
00518598  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051859B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0051859E  83 C0 0F                  ADD EAX,0xf
005185A1  8B CB                     MOV ECX,EBX
005185A3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005185A6  66 8B 56 08               MOV DX,word ptr [ESI + 0x8]
005185AA  52                        PUSH EDX
005185AB  50                        PUSH EAX
005185AC  E8 BF 92 EE FF            CALL 0x00401870
005185B1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005185B4  8A 07                     MOV AL,byte ptr [EDI]
005185B6  8B 4F 1F                  MOV ECX,dword ptr [EDI + 0x1f]
005185B9  50                        PUSH EAX
005185BA  51                        PUSH ECX
005185BB  E8 35 D1 EE FF            CALL 0x004056f5
005185C0  8B 93 3C 02 00 00         MOV EDX,dword ptr [EBX + 0x23c]
005185C6  50                        PUSH EAX
005185C7  52                        PUSH EDX
005185C8  E8 D3 2D 1F 00            CALL 0x0070b3a0
005185CD  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
005185D3  50                        PUSH EAX
005185D4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005185D7  6A 01                     PUSH 0x1
005185D9  50                        PUSH EAX
005185DA  68 CD 00 00 00            PUSH 0xcd
005185DF  51                        PUSH ECX
005185E0  E8 44 AC EE FF            CALL 0x00403229
005185E5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005185E8  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
005185EE  56                        PUSH ESI
005185EF  6A 06                     PUSH 0x6
005185F1  52                        PUSH EDX
005185F2  68 CD 00 00 00            PUSH 0xcd
005185F7  50                        PUSH EAX
005185F8  E8 2C AC EE FF            CALL 0x00403229
005185FD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00518600  C7 45 C8 CD 00 00 00      MOV dword ptr [EBP + -0x38],0xcd
00518607  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0051860A  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0051860D  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00518610  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00518613  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00518616  C6 45 D8 0B               MOV byte ptr [EBP + -0x28],0xb
0051861A  8B 4F 1F                  MOV ECX,dword ptr [EDI + 0x1f]
0051861D  83 C4 38                  ADD ESP,0x38
00518620  89 4D D9                  MOV dword ptr [EBP + -0x27],ECX
00518623  8B 8B D7 01 00 00         MOV ECX,dword ptr [EBX + 0x1d7]
00518629  33 D2                     XOR EDX,EDX
0051862B  8D 45 C8                  LEA EAX,[EBP + -0x38]
0051862E  8A 17                     MOV DL,byte ptr [EDI]
00518630  50                        PUSH EAX
00518631  51                        PUSH ECX
00518632  89 55 DD                  MOV dword ptr [EBP + -0x23],EDX
00518635  E8 86 5B 19 00            CALL 0x006ae1c0
0051863A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051863D  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00518640  03 C1                     ADD EAX,ECX
00518642  8B F7                     MOV ESI,EDI
00518644  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00518647:
00518647  8B 4E 23                  MOV ECX,dword ptr [ESI + 0x23]
0051864A  85 C9                     TEST ECX,ECX
0051864C  0F 84 C6 01 00 00         JZ 0x00518818
00518652  6A 0F                     PUSH 0xf
00518654  50                        PUSH EAX
00518655  8B CB                     MOV ECX,EBX
00518657  E8 14 92 EE FF            CALL 0x00401870
0051865C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051865F  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00518665  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051866B  6A 0F                     PUSH 0xf
0051866D  68 C8 00 00 00            PUSH 0xc8
00518672  52                        PUSH EDX
00518673  6A 00                     PUSH 0x0
00518675  6A 00                     PUSH 0x0
00518677  50                        PUSH EAX
00518678  E8 13 84 1F 00            CALL 0x00710a90
0051867D  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00518683  6A 03                     PUSH 0x3
00518685  6A FF                     PUSH -0x1
00518687  6A FD                     PUSH -0x3
00518689  51                        PUSH ECX
0051868A  68 2F 56 00 00            PUSH 0x562f
0051868F  E8 AC 7A 19 00            CALL 0x006b0140
00518694  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051869A  50                        PUSH EAX
0051869B  E8 20 93 1F 00            CALL 0x007119c0
005186A0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005186A3  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
005186A9  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005186AF  6A 0F                     PUSH 0xf
005186B1  68 CF 00 00 00            PUSH 0xcf
005186B6  52                        PUSH EDX
005186B7  68 CD 00 00 00            PUSH 0xcd
005186BC  6A 00                     PUSH 0x0
005186BE  50                        PUSH EAX
005186BF  E8 CC 83 1F 00            CALL 0x00710a90
005186C4  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005186CA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005186CD  8B 46 23                  MOV EAX,dword ptr [ESI + 0x23]
005186D0  51                        PUSH ECX
005186D1  6A 00                     PUSH 0x0
005186D3  52                        PUSH EDX
005186D4  50                        PUSH EAX
005186D5  E8 AA AF EE FF            CALL 0x00403684
005186DA  83 C4 0C                  ADD ESP,0xc
005186DD  50                        PUSH EAX
005186DE  E8 5D 7A 19 00            CALL 0x006b0140
005186E3  8B F8                     MOV EDI,EAX
005186E5  83 C9 FF                  OR ECX,0xffffffff
005186E8  33 C0                     XOR EAX,EAX
005186EA  6A 0A                     PUSH 0xa
005186EC  F2 AE                     SCASB.REPNE ES:EDI
005186EE  F7 D1                     NOT ECX
005186F0  2B F9                     SUB EDI,ECX
005186F2  68 3A F3 80 00            PUSH 0x80f33a
005186F7  8B D1                     MOV EDX,ECX
005186F9  8B F7                     MOV ESI,EDI
005186FB  BF 3A F3 80 00            MOV EDI,0x80f33a
00518700  C1 E9 02                  SHR ECX,0x2
00518703  F3 A5                     MOVSD.REP ES:EDI,ESI
00518705  8B CA                     MOV ECX,EDX
00518707  83 E1 03                  AND ECX,0x3
0051870A  F3 A4                     MOVSB.REP ES:EDI,ESI
0051870C  E8 4F 5E 21 00            CALL 0x0072e560
00518711  83 C4 08                  ADD ESP,0x8
00518714  85 C0                     TEST EAX,EAX
00518716  74 12                     JZ 0x0051872a
LAB_00518718:
00518718  6A 0A                     PUSH 0xa
0051871A  50                        PUSH EAX
0051871B  C6 00 20                  MOV byte ptr [EAX],0x20
0051871E  E8 3D 5E 21 00            CALL 0x0072e560
00518723  83 C4 08                  ADD ESP,0x8
00518726  85 C0                     TEST EAX,EAX
00518728  75 EE                     JNZ 0x00518718
LAB_0051872a:
0051872A  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00518730  33 C0                     XOR EAX,EAX
00518732  80 F9 03                  CMP CL,0x3
00518735  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051873B  0F 95 C0                  SETNZ AL
0051873E  48                        DEC EAX
0051873F  83 E0 05                  AND EAX,0x5
00518742  50                        PUSH EAX
00518743  6A FF                     PUSH -0x1
00518745  6A 01                     PUSH 0x1
00518747  68 3A F3 80 00            PUSH 0x80f33a
0051874C  E8 6F 92 1F 00            CALL 0x007119c0
00518751  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00518754  8B 8B 48 02 00 00         MOV ECX,dword ptr [EBX + 0x248]
0051875A  83 C2 0F                  ADD EDX,0xf
0051875D  6A 04                     PUSH 0x4
0051875F  51                        PUSH ECX
00518760  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00518763  E8 38 2C 1F 00            CALL 0x0070b3a0
00518768  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0051876C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051876F  83 C4 08                  ADD ESP,0x8
00518772  8B CB                     MOV ECX,EBX
00518774  52                        PUSH EDX
00518775  50                        PUSH EAX
00518776  E8 F5 90 EE FF            CALL 0x00401870
0051877B  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051877E  8A 0F                     MOV CL,byte ptr [EDI]
00518780  8B 57 23                  MOV EDX,dword ptr [EDI + 0x23]
00518783  51                        PUSH ECX
00518784  52                        PUSH EDX
00518785  E8 6B CF EE FF            CALL 0x004056f5
0051878A  50                        PUSH EAX
0051878B  8B 83 40 02 00 00         MOV EAX,dword ptr [EBX + 0x240]
00518791  50                        PUSH EAX
00518792  E8 09 2C 1F 00            CALL 0x0070b3a0
00518797  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051879A  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
005187A0  50                        PUSH EAX
005187A1  6A 01                     PUSH 0x1
005187A3  51                        PUSH ECX
005187A4  68 CD 00 00 00            PUSH 0xcd
005187A9  52                        PUSH EDX
005187AA  E8 7A AA EE FF            CALL 0x00403229
005187AF  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005187B2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005187B5  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
005187BB  56                        PUSH ESI
005187BC  83 C0 FE                  ADD EAX,-0x2
005187BF  6A 06                     PUSH 0x6
005187C1  50                        PUSH EAX
005187C2  68 CB 00 00 00            PUSH 0xcb
005187C7  51                        PUSH ECX
005187C8  E8 5C AA EE FF            CALL 0x00403229
005187CD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005187D0  C7 45 C8 CB 00 00 00      MOV dword ptr [EBP + -0x38],0xcb
005187D7  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005187DA  83 C0 FE                  ADD EAX,-0x2
005187DD  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
005187E0  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
005187E3  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005187E6  C6 45 D8 02               MOV byte ptr [EBP + -0x28],0x2
005187EA  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
005187ED  8B 57 23                  MOV EDX,dword ptr [EDI + 0x23]
005187F0  83 C4 38                  ADD ESP,0x38
005187F3  89 55 D9                  MOV dword ptr [EBP + -0x27],EDX
005187F6  8B 93 D7 01 00 00         MOV EDX,dword ptr [EBX + 0x1d7]
005187FC  33 C0                     XOR EAX,EAX
005187FE  8A 07                     MOV AL,byte ptr [EDI]
00518800  8D 4D C8                  LEA ECX,[EBP + -0x38]
00518803  51                        PUSH ECX
00518804  52                        PUSH EDX
00518805  89 45 DD                  MOV dword ptr [EBP + -0x23],EAX
00518808  E8 B3 59 19 00            CALL 0x006ae1c0
0051880D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00518810  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00518813  03 C8                     ADD ECX,EAX
00518815  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00518818:
00518818  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051881B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0051881E  51                        PUSH ECX
0051881F  52                        PUSH EDX
00518820  8D 45 FC                  LEA EAX,[EBP + -0x4]
00518823  6A 01                     PUSH 0x1
00518825  50                        PUSH EAX
00518826  8B CB                     MOV ECX,EBX
00518828  E8 42 C8 EE FF            CALL 0x0040506f
0051882D  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00518830  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00518836  5F                        POP EDI
00518837  5E                        POP ESI
00518838  5B                        POP EBX
00518839  8B E5                     MOV ESP,EBP
0051883B  5D                        POP EBP
0051883C  C2 0C 00                  RET 0xc
LAB_0051883f:
0051883F  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
00518842  68 6C 3C 7C 00            PUSH 0x7c3c6c
00518847  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051884C  56                        PUSH ESI
0051884D  6A 00                     PUSH 0x0
0051884F  68 F8 05 00 00            PUSH 0x5f8
00518854  68 3C 38 7C 00            PUSH 0x7c383c
00518859  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051885F  E8 6C 4C 19 00            CALL 0x006ad4d0
00518864  83 C4 18                  ADD ESP,0x18
00518867  85 C0                     TEST EAX,EAX
00518869  74 01                     JZ 0x0051886c
0051886B  CC                        INT3
LAB_0051886c:
0051886C  68 F8 05 00 00            PUSH 0x5f8
00518871  68 3C 38 7C 00            PUSH 0x7c383c
00518876  6A 00                     PUSH 0x0
00518878  56                        PUSH ESI
00518879  E8 C2 D5 18 00            CALL 0x006a5e40
LAB_0051887e:
0051887E  5F                        POP EDI
0051887F  5E                        POP ESI
00518880  5B                        POP EBX
00518881  8B E5                     MOV ESP,EBP
00518883  5D                        POP EBP
00518884  C2 0C 00                  RET 0xc
