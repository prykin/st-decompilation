TradePanelTy::PaintPanel:
00551BA0  55                        PUSH EBP
00551BA1  8B EC                     MOV EBP,ESP
00551BA3  83 EC 50                  SUB ESP,0x50
00551BA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00551BAB  53                        PUSH EBX
00551BAC  56                        PUSH ESI
00551BAD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00551BB0  57                        PUSH EDI
00551BB1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00551BB4  8D 4D B0                  LEA ECX,[EBP + -0x50]
00551BB7  6A 00                     PUSH 0x0
00551BB9  52                        PUSH EDX
00551BBA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00551BBD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00551BC3  E8 28 BC 1D 00            CALL 0x0072d7f0
00551BC8  8B F0                     MOV ESI,EAX
00551BCA  83 C4 08                  ADD ESP,0x8
00551BCD  85 F6                     TEST ESI,ESI
00551BCF  0F 85 FF 01 00 00         JNZ 0x00551dd4
00551BD5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00551BD8  6A 39                     PUSH 0x39
00551BDA  6A 44                     PUSH 0x44
00551BDC  6A 31                     PUSH 0x31
00551BDE  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00551BE1  6A 1F                     PUSH 0x1f
00551BE3  50                        PUSH EAX
00551BE4  8B 86 85 01 00 00         MOV EAX,dword ptr [ESI + 0x185]
00551BEA  50                        PUSH EAX
00551BEB  6A 31                     PUSH 0x31
00551BED  6A 1F                     PUSH 0x1f
00551BEF  6A 00                     PUSH 0x0
00551BF1  51                        PUSH ECX
00551BF2  E8 F9 39 16 00            CALL 0x006b55f0
00551BF7  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
00551BFD  33 D2                     XOR EDX,EDX
00551BFF  8A 96 D0 01 00 00         MOV DL,byte ptr [ESI + 0x1d0]
00551C05  6A 3A                     PUSH 0x3a
00551C07  6A 00                     PUSH 0x0
00551C09  52                        PUSH EDX
00551C0A  50                        PUSH EAX
00551C0B  E8 90 97 1B 00            CALL 0x0070b3a0
00551C10  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00551C13  83 C4 08                  ADD ESP,0x8
00551C16  50                        PUSH EAX
00551C17  6A 38                     PUSH 0x38
00551C19  6A 22                     PUSH 0x22
00551C1B  6A 00                     PUSH 0x0
00551C1D  51                        PUSH ECX
00551C1E  E8 1D 38 16 00            CALL 0x006b5440
00551C23  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
00551C29  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00551C2C  6A 26                     PUSH 0x26
00551C2E  6A 77                     PUSH 0x77
00551C30  6A 31                     PUSH 0x31
00551C32  68 A6 00 00 00            PUSH 0xa6
00551C37  6A 00                     PUSH 0x0
00551C39  52                        PUSH EDX
00551C3A  6A 31                     PUSH 0x31
00551C3C  68 A6 00 00 00            PUSH 0xa6
00551C41  6A 00                     PUSH 0x0
00551C43  50                        PUSH EAX
00551C44  E8 A7 39 16 00            CALL 0x006b55f0
00551C49  8A 86 BB 01 00 00         MOV AL,byte ptr [ESI + 0x1bb]
00551C4F  84 C0                     TEST AL,AL
00551C51  74 59                     JZ 0x00551cac
00551C53  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00551C56  6A 26                     PUSH 0x26
00551C58  6A 77                     PUSH 0x77
00551C5A  6A 31                     PUSH 0x31
00551C5C  68 A6 00 00 00            PUSH 0xa6
00551C61  6A 00                     PUSH 0x0
00551C63  51                        PUSH ECX
00551C64  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
00551C6A  E8 21 EE 1B 00            CALL 0x00710a90
00551C6F  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00551C75  A1 18 76 80 00            MOV EAX,[0x00807618]
00551C7A  80 EA 03                  SUB DL,0x3
00551C7D  6A FF                     PUSH -0x1
00551C7F  F6 DA                     NEG DL
00551C81  1B D2                     SBB EDX,EDX
00551C83  6A FF                     PUSH -0x1
00551C85  83 E2 FC                  AND EDX,0xfffffffc
00551C88  83 C2 05                  ADD EDX,0x5
00551C8B  52                        PUSH EDX
00551C8C  6A FF                     PUSH -0x1
00551C8E  6A FE                     PUSH -0x2
00551C90  50                        PUSH EAX
00551C91  68 5B 4E 00 00            PUSH 0x4e5b
00551C96  E8 A5 E4 15 00            CALL 0x006b0140
00551C9B  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
00551CA1  50                        PUSH EAX
00551CA2  E8 C9 FE 1B 00            CALL 0x00711b70
00551CA7  E9 11 01 00 00            JMP 0x00551dbd
LAB_00551cac:
00551CAC  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00551CB2  8B 96 D5 01 00 00         MOV EDX,dword ptr [ESI + 0x1d5]
00551CB8  80 E9 03                  SUB CL,0x3
00551CBB  6A 3A                     PUSH 0x3a
00551CBD  F6 D9                     NEG CL
00551CBF  1B C9                     SBB ECX,ECX
00551CC1  6A 00                     PUSH 0x0
00551CC3  83 E1 FE                  AND ECX,0xfffffffe
00551CC6  83 C1 04                  ADD ECX,0x4
00551CC9  51                        PUSH ECX
00551CCA  52                        PUSH EDX
00551CCB  E8 D0 96 1B 00            CALL 0x0070b3a0
00551CD0  83 C4 08                  ADD ESP,0x8
00551CD3  50                        PUSH EAX
00551CD4  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00551CD7  6A 34                     PUSH 0x34
00551CD9  68 D9 00 00 00            PUSH 0xd9
00551CDE  6A 00                     PUSH 0x0
00551CE0  50                        PUSH EAX
00551CE1  E8 5A 37 16 00            CALL 0x006b5440
00551CE6  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00551CED  0F 84 CA 00 00 00         JZ 0x00551dbd
00551CF3  33 FF                     XOR EDI,EDI
00551CF5  BB B5 00 00 00            MOV EBX,0xb5
00551CFA  C7 45 FC A9 00 00 00      MOV dword ptr [EBP + -0x4],0xa9
00551D01  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
LAB_00551d08:
00551D08  33 C9                     XOR ECX,ECX
00551D0A  8A 8E D0 01 00 00         MOV CL,byte ptr [ESI + 0x1d0]
00551D10  8D 14 4F                  LEA EDX,[EDI + ECX*0x2]
00551D13  66 8B 84 96 AB 01 00 00   MOV AX,word ptr [ESI + EDX*0x4 + 0x1ab]
00551D1B  66 85 C0                  TEST AX,AX
00551D1E  74 28                     JZ 0x00551d48
00551D20  25 FF FF 00 00            AND EAX,0xffff
00551D25  48                        DEC EAX
00551D26  50                        PUSH EAX
00551D27  8B 86 D9 01 00 00         MOV EAX,dword ptr [ESI + 0x1d9]
00551D2D  50                        PUSH EAX
00551D2E  E8 6D 96 1B 00            CALL 0x0070b3a0
00551D33  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00551D36  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00551D39  50                        PUSH EAX
00551D3A  6A 01                     PUSH 0x1
00551D3C  6A 39                     PUSH 0x39
00551D3E  51                        PUSH ECX
00551D3F  52                        PUSH EDX
00551D40  E8 E4 14 EB FF            CALL 0x00403229
00551D45  83 C4 1C                  ADD ESP,0x1c
LAB_00551d48:
00551D48  33 C0                     XOR EAX,EAX
00551D4A  33 D2                     XOR EDX,EDX
00551D4C  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
00551D52  8D 0C 47                  LEA ECX,[EDI + EAX*0x2]
00551D55  8D 86 8D 01 00 00         LEA EAX,[ESI + 0x18d]
00551D5B  66 8B 94 8E AD 01 00 00   MOV DX,word ptr [ESI + ECX*0x4 + 0x1ad]
00551D63  52                        PUSH EDX
00551D64  68 20 87 7C 00            PUSH 0x7c8720
00551D69  50                        PUSH EAX
00551D6A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00551D70  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00551D73  83 C4 0C                  ADD ESP,0xc
00551D76  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
00551D7C  6A 0C                     PUSH 0xc
00551D7E  6A 22                     PUSH 0x22
00551D80  6A 36                     PUSH 0x36
00551D82  53                        PUSH EBX
00551D83  6A 00                     PUSH 0x0
00551D85  50                        PUSH EAX
00551D86  E8 05 ED 1B 00            CALL 0x00710a90
00551D8B  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
00551D91  6A 01                     PUSH 0x1
00551D93  6A FF                     PUSH -0x1
00551D95  8D 86 8D 01 00 00         LEA EAX,[ESI + 0x18d]
00551D9B  6A FF                     PUSH -0x1
00551D9D  50                        PUSH EAX
00551D9E  E8 1D FC 1B 00            CALL 0x007119c0
00551DA3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00551DA6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00551DA9  47                        INC EDI
00551DAA  83 C2 68                  ADD EDX,0x68
00551DAD  83 C3 39                  ADD EBX,0x39
00551DB0  48                        DEC EAX
00551DB1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00551DB4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00551DB7  0F 85 4B FF FF FF         JNZ 0x00551d08
LAB_00551dbd:
00551DBD  8B CE                     MOV ECX,ESI
00551DBF  E8 30 2B EB FF            CALL 0x004048f4
00551DC4  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00551DC7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00551DCD  5F                        POP EDI
00551DCE  5E                        POP ESI
00551DCF  5B                        POP EBX
00551DD0  8B E5                     MOV ESP,EBP
00551DD2  5D                        POP EBP
00551DD3  C3                        RET
LAB_00551dd4:
00551DD4  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00551DD7  68 00 87 7C 00            PUSH 0x7c8700
00551DDC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00551DE1  56                        PUSH ESI
00551DE2  6A 00                     PUSH 0x0
00551DE4  68 F5 00 00 00            PUSH 0xf5
00551DE9  68 24 86 7C 00            PUSH 0x7c8624
00551DEE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00551DF4  E8 D7 B6 15 00            CALL 0x006ad4d0
00551DF9  83 C4 18                  ADD ESP,0x18
00551DFC  85 C0                     TEST EAX,EAX
00551DFE  74 01                     JZ 0x00551e01
00551E00  CC                        INT3
LAB_00551e01:
00551E01  68 F5 00 00 00            PUSH 0xf5
00551E06  68 24 86 7C 00            PUSH 0x7c8624
00551E0B  6A 00                     PUSH 0x0
00551E0D  56                        PUSH ESI
00551E0E  E8 2D 40 15 00            CALL 0x006a5e40
00551E13  5F                        POP EDI
00551E14  5E                        POP ESI
00551E15  5B                        POP EBX
00551E16  8B E5                     MOV ESP,EBP
00551E18  5D                        POP EBP
00551E19  C3                        RET
