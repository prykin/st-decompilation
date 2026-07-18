FUN_00758bc0:
00758BC0  55                        PUSH EBP
00758BC1  8B EC                     MOV EBP,ESP
00758BC3  81 EC 2C 01 00 00         SUB ESP,0x12c
00758BC9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00758BCC  53                        PUSH EBX
00758BCD  56                        PUSH ESI
00758BCE  57                        PUSH EDI
00758BCF  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
00758BD2  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00758BD5  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
00758BD8  8B 1E                     MOV EBX,dword ptr [ESI]
00758BDA  85 FF                     TEST EDI,EDI
00758BDC  75 16                     JNZ 0x00758bf4
00758BDE  50                        PUSH EAX
00758BDF  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758BE2  85 C0                     TEST EAX,EAX
00758BE4  0F 84 EC 01 00 00         JZ 0x00758dd6
00758BEA  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00758BED  8B 1E                     MOV EBX,dword ptr [ESI]
00758BEF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00758BF2  8B F8                     MOV EDI,EAX
LAB_00758bf4:
00758BF4  33 C0                     XOR EAX,EAX
00758BF6  4F                        DEC EDI
00758BF7  8A 23                     MOV AH,byte ptr [EBX]
00758BF9  43                        INC EBX
00758BFA  85 FF                     TEST EDI,EDI
00758BFC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00758BFF  75 1C                     JNZ 0x00758c1d
00758C01  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00758C04  51                        PUSH ECX
00758C05  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758C08  85 C0                     TEST EAX,EAX
00758C0A  0F 84 C6 01 00 00         JZ 0x00758dd6
00758C10  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00758C13  8B 1E                     MOV EBX,dword ptr [ESI]
00758C15  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00758C18  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00758C1B  8B FA                     MOV EDI,EDX
LAB_00758c1d:
00758C1D  33 C9                     XOR ECX,ECX
00758C1F  4F                        DEC EDI
00758C20  8A 0B                     MOV CL,byte ptr [EBX]
00758C22  03 C1                     ADD EAX,ECX
00758C24  43                        INC EBX
00758C25  83 E8 02                  SUB EAX,0x2
00758C28  85 C0                     TEST EAX,EAX
00758C2A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00758C2D  0F 8E 90 01 00 00         JLE 0x00758dc3
LAB_00758c33:
00758C33  85 FF                     TEST EDI,EDI
00758C35  75 19                     JNZ 0x00758c50
00758C37  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00758C3A  52                        PUSH EDX
00758C3B  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758C3E  85 C0                     TEST EAX,EAX
00758C40  0F 84 90 01 00 00         JZ 0x00758dd6
00758C46  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00758C49  8B 1E                     MOV EBX,dword ptr [ESI]
00758C4B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00758C4E  8B F8                     MOV EDI,EAX
LAB_00758c50:
00758C50  33 C0                     XOR EAX,EAX
00758C52  4F                        DEC EDI
00758C53  8A 03                     MOV AL,byte ptr [EBX]
00758C55  43                        INC EBX
00758C56  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00758C59  B8 01 00 00 00            MOV EAX,0x1
00758C5E  C6 45 D4 00               MOV byte ptr [EBP + -0x2c],0x0
00758C62  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00758C69  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00758c6c:
00758C6C  85 FF                     TEST EDI,EDI
00758C6E  75 1C                     JNZ 0x00758c8c
00758C70  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00758C73  51                        PUSH ECX
00758C74  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758C77  85 C0                     TEST EAX,EAX
00758C79  0F 84 57 01 00 00         JZ 0x00758dd6
00758C7F  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00758C82  8B 1E                     MOV EBX,dword ptr [ESI]
00758C84  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00758C87  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00758C8A  8B FA                     MOV EDI,EDX
LAB_00758c8c:
00758C8C  8A 0B                     MOV CL,byte ptr [EBX]
00758C8E  33 D2                     XOR EDX,EDX
00758C90  88 4C 05 D4               MOV byte ptr [EBP + EAX*0x1 + -0x2c],CL
00758C94  8A D1                     MOV DL,CL
00758C96  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00758C99  4F                        DEC EDI
00758C9A  43                        INC EBX
00758C9B  03 CA                     ADD ECX,EDX
00758C9D  40                        INC EAX
00758C9E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00758CA1  83 F8 10                  CMP EAX,0x10
00758CA4  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00758CA7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00758CAA  7E C0                     JLE 0x00758c6c
00758CAC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00758CAF  83 EA 11                  SUB EDX,0x11
00758CB2  81 F9 00 01 00 00         CMP ECX,0x100
00758CB8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00758CBB  7F 06                     JG 0x00758cc3
00758CBD  8B C2                     MOV EAX,EDX
00758CBF  3B C8                     CMP ECX,EAX
00758CC1  7E 1F                     JLE 0x00758ce2
LAB_00758cc3:
00758CC3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00758CC8  68 09 02 00 00            PUSH 0x209
00758CCD  68 B0 2D 7F 00            PUSH 0x7f2db0
00758CD2  50                        PUSH EAX
00758CD3  6A 1C                     PUSH 0x1c
00758CD5  E8 66 D1 F4 FF            CALL 0x006a5e40
00758CDA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00758CDD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00758CE0  EB 03                     JMP 0x00758ce5
LAB_00758ce2:
00758CE2  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_00758ce5:
00758CE5  33 C0                     XOR EAX,EAX
00758CE7  85 C9                     TEST ECX,ECX
00758CE9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00758CEC  7E 3C                     JLE 0x00758d2a
LAB_00758cee:
00758CEE  85 FF                     TEST EDI,EDI
00758CF0  75 1F                     JNZ 0x00758d11
00758CF2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00758CF5  51                        PUSH ECX
00758CF6  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758CF9  85 C0                     TEST EAX,EAX
00758CFB  0F 84 D5 00 00 00         JZ 0x00758dd6
00758D01  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00758D04  8B 1E                     MOV EBX,dword ptr [ESI]
00758D06  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00758D09  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00758D0C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00758D0F  8B FA                     MOV EDI,EDX
LAB_00758d11:
00758D11  8A 13                     MOV DL,byte ptr [EBX]
00758D13  4F                        DEC EDI
00758D14  88 94 05 D4 FE FF FF      MOV byte ptr [EBP + EAX*0x1 + 0xfffffed4],DL
00758D1B  43                        INC EBX
00758D1C  40                        INC EAX
00758D1D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00758D20  3B C1                     CMP EAX,ECX
00758D22  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00758D25  7C C7                     JL 0x00758cee
00758D27  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_00758d2a:
00758D2A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00758D2D  2B F1                     SUB ESI,ECX
00758D2F  F6 C2 10                  TEST DL,0x10
00758D32  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00758D35  74 0F                     JZ 0x00758d46
00758D37  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00758D3A  83 EA 10                  SUB EDX,0x10
00758D3D  8D B4 90 BC 00 00 00      LEA ESI,[EAX + EDX*0x4 + 0xbc]
00758D44  EB 0A                     JMP 0x00758d50
LAB_00758d46:
00758D46  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00758D49  8D B4 91 AC 00 00 00      LEA ESI,[ECX + EDX*0x4 + 0xac]
LAB_00758d50:
00758D50  85 D2                     TEST EDX,EDX
00758D52  7C 05                     JL 0x00758d59
00758D54  83 FA 04                  CMP EDX,0x4
00758D57  7C 18                     JL 0x00758d71
LAB_00758d59:
00758D59  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00758D5F  68 18 02 00 00            PUSH 0x218
00758D64  68 B0 2D 7F 00            PUSH 0x7f2db0
00758D69  52                        PUSH EDX
00758D6A  6A 1D                     PUSH 0x1d
00758D6C  E8 CF D0 F4 FF            CALL 0x006a5e40
LAB_00758d71:
00758D71  83 3E 00                  CMP dword ptr [ESI],0x0
00758D74  75 0B                     JNZ 0x00758d81
00758D76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00758D79  50                        PUSH EAX
00758D7A  E8 D1 10 00 00            CALL 0x00759e50
00758D7F  89 06                     MOV dword ptr [ESI],EAX
LAB_00758d81:
00758D81  8B 0E                     MOV ECX,dword ptr [ESI]
00758D83  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00758D86  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00758D89  89 11                     MOV dword ptr [ECX],EDX
00758D8B  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00758D8E  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00758D91  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00758D94  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00758D97  8A 55 E4                  MOV DL,byte ptr [EBP + -0x1c]
00758D9A  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00758D9D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00758DA0  88 51 10                  MOV byte ptr [ECX + 0x10],DL
00758DA3  8B 3E                     MOV EDI,dword ptr [ESI]
00758DA5  83 C7 11                  ADD EDI,0x11
00758DA8  B9 40 00 00 00            MOV ECX,0x40
00758DAD  8D B5 D4 FE FF FF         LEA ESI,[EBP + 0xfffffed4]
00758DB3  F3 A5                     MOVSD.REP ES:EDI,ESI
00758DB5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00758DB8  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00758DBB  85 C0                     TEST EAX,EAX
00758DBD  0F 8F 70 FE FF FF         JG 0x00758c33
LAB_00758dc3:
00758DC3  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00758DC6  89 1E                     MOV dword ptr [ESI],EBX
00758DC8  5F                        POP EDI
00758DC9  5E                        POP ESI
00758DCA  B8 01 00 00 00            MOV EAX,0x1
00758DCF  5B                        POP EBX
00758DD0  8B E5                     MOV ESP,EBP
00758DD2  5D                        POP EBP
00758DD3  C2 04 00                  RET 0x4
LAB_00758dd6:
00758DD6  5F                        POP EDI
00758DD7  5E                        POP ESI
00758DD8  33 C0                     XOR EAX,EAX
00758DDA  5B                        POP EBX
00758DDB  8B E5                     MOV ESP,EBP
00758DDD  5D                        POP EBP
00758DDE  C2 04 00                  RET 0x4
