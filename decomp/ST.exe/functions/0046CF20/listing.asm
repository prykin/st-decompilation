FUN_0046cf20:
0046CF20  55                        PUSH EBP
0046CF21  8B EC                     MOV EBP,ESP
0046CF23  83 EC 18                  SUB ESP,0x18
0046CF26  56                        PUSH ESI
0046CF27  8B F1                     MOV ESI,ECX
0046CF29  57                        PUSH EDI
0046CF2A  BF 02 00 00 00            MOV EDI,0x2
0046CF2F  8B 86 28 05 00 00         MOV EAX,dword ptr [ESI + 0x528]
0046CF35  85 C0                     TEST EAX,EAX
0046CF37  75 57                     JNZ 0x0046cf90
0046CF39  66 8B 8E 14 05 00 00      MOV CX,word ptr [ESI + 0x514]
0046CF40  66 8B 96 12 05 00 00      MOV DX,word ptr [ESI + 0x512]
0046CF47  66 69 C9 C8 00            IMUL CX,CX,0xc8
0046CF4C  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046CF51  83 C1 64                  ADD ECX,0x64
0046CF54  8B 06                     MOV EAX,dword ptr [ESI]
0046CF56  51                        PUSH ECX
0046CF57  66 8B 8E 10 05 00 00      MOV CX,word ptr [ESI + 0x510]
0046CF5E  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046CF63  83 C2 64                  ADD EDX,0x64
0046CF66  83 C1 64                  ADD ECX,0x64
0046CF69  52                        PUSH EDX
0046CF6A  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0046CF6E  51                        PUSH ECX
0046CF6F  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046CF73  52                        PUSH EDX
0046CF74  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046CF78  51                        PUSH ECX
0046CF79  52                        PUSH EDX
0046CF7A  8B CE                     MOV ECX,ESI
0046CF7C  FF 50 10                  CALL dword ptr [EAX + 0x10]
0046CF7F  66 89 86 22 05 00 00      MOV word ptr [ESI + 0x522],AX
0046CF86  C7 86 28 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x528],0x1
LAB_0046cf90:
0046CF90  8B 86 28 05 00 00         MOV EAX,dword ptr [ESI + 0x528]
0046CF96  83 F8 01                  CMP EAX,0x1
0046CF99  75 6F                     JNZ 0x0046d00a
0046CF9B  66 8B 86 22 05 00 00      MOV AX,word ptr [ESI + 0x522]
0046CFA2  8B CE                     MOV ECX,ESI
0046CFA4  50                        PUSH EAX
0046CFA5  E8 08 61 F9 FF            CALL 0x004030b2
0046CFAA  50                        PUSH EAX
0046CFAB  8B CE                     MOV ECX,ESI
0046CFAD  E8 4A 53 F9 FF            CALL 0x004022fc
0046CFB2  83 F8 FF                  CMP EAX,-0x1
0046CFB5  74 24                     JZ 0x0046cfdb
0046CFB7  85 C0                     TEST EAX,EAX
0046CFB9  75 06                     JNZ 0x0046cfc1
0046CFBB  89 BE 28 05 00 00         MOV dword ptr [ESI + 0x528],EDI
LAB_0046cfc1:
0046CFC1  8B 16                     MOV EDX,dword ptr [ESI]
0046CFC3  8B CE                     MOV ECX,ESI
0046CFC5  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046CFCB  F7 D8                     NEG EAX
0046CFCD  1B C0                     SBB EAX,EAX
0046CFCF  24 FD                     AND AL,0xfd
0046CFD1  03 C7                     ADD EAX,EDI
0046CFD3  5F                        POP EDI
0046CFD4  5E                        POP ESI
0046CFD5  8B E5                     MOV ESP,EBP
0046CFD7  5D                        POP EBP
0046CFD8  C2 04 00                  RET 0x4
LAB_0046cfdb:
0046CFDB  68 2C A8 7A 00            PUSH 0x7aa82c
0046CFE0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046CFE5  6A 00                     PUSH 0x0
0046CFE7  6A 00                     PUSH 0x0
0046CFE9  68 A8 25 00 00            PUSH 0x25a8
0046CFEE  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046CFF3  E8 D8 04 24 00            CALL 0x006ad4d0
0046CFF8  83 C4 18                  ADD ESP,0x18
0046CFFB  85 C0                     TEST EAX,EAX
0046CFFD  74 01                     JZ 0x0046d000
0046CFFF  CC                        INT3
LAB_0046d000:
0046D000  68 A9 25 00 00            PUSH 0x25a9
0046D005  E9 D8 01 00 00            JMP 0x0046d1e2
LAB_0046d00a:
0046D00A  83 F8 02                  CMP EAX,0x2
0046D00D  75 54                     JNZ 0x0046d063
0046D00F  8A 4E 62                  MOV CL,byte ptr [ESI + 0x62]
0046D012  66 8B 96 14 05 00 00      MOV DX,word ptr [ESI + 0x514]
0046D019  66 8B 86 12 05 00 00      MOV AX,word ptr [ESI + 0x512]
0046D020  51                        PUSH ECX
0046D021  66 8B 8E 10 05 00 00      MOV CX,word ptr [ESI + 0x510]
0046D028  66 69 D2 C8 00            IMUL DX,DX,0xc8
0046D02D  66 69 C0 C9 00            IMUL AX,AX,0xc9
0046D032  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046D037  83 C2 64                  ADD EDX,0x64
0046D03A  83 C0 64                  ADD EAX,0x64
0046D03D  52                        PUSH EDX
0046D03E  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0046D042  83 C1 64                  ADD ECX,0x64
0046D045  50                        PUSH EAX
0046D046  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046D04A  51                        PUSH ECX
0046D04B  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046D04F  52                        PUSH EDX
0046D050  50                        PUSH EAX
0046D051  51                        PUSH ECX
0046D052  8B CE                     MOV ECX,ESI
0046D054  E8 FC 53 F9 FF            CALL 0x00402455
0046D059  C7 86 28 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x528],0x3
LAB_0046d063:
0046D063  83 BE 28 05 00 00 03      CMP dword ptr [ESI + 0x528],0x3
0046D06A  0F 85 94 01 00 00         JNZ 0x0046d204
0046D070  8D 55 F8                  LEA EDX,[EBP + -0x8]
0046D073  8D 45 F4                  LEA EAX,[EBP + -0xc]
0046D076  52                        PUSH EDX
0046D077  50                        PUSH EAX
0046D078  8B CE                     MOV ECX,ESI
0046D07A  E8 C8 57 F9 FF            CALL 0x00402847
0046D07F  83 F8 FF                  CMP EAX,-0x1
0046D082  0F 84 30 01 00 00         JZ 0x0046d1b8
0046D088  85 C0                     TEST EAX,EAX
0046D08A  0F 85 74 01 00 00         JNZ 0x0046d204
0046D090  8B 86 24 05 00 00         MOV EAX,dword ptr [ESI + 0x524]
0046D096  33 FF                     XOR EDI,EDI
0046D098  85 C0                     TEST EAX,EAX
0046D09A  74 33                     JZ 0x0046d0cf
0046D09C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0046D09F  51                        PUSH ECX
0046D0A0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0046D0A6  50                        PUSH EAX
0046D0A7  E8 24 92 27 00            CALL 0x006e62d0
0046D0AC  83 F8 FC                  CMP EAX,-0x4
0046D0AF  74 1E                     JZ 0x0046d0cf
0046D0B1  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046D0B4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0046D0B7  52                        PUSH EDX
0046D0B8  E8 1C 61 F9 FF            CALL 0x004031d9
0046D0BD  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0046D0C3  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0046D0C9  50                        PUSH EAX
0046D0CA  E8 21 D2 27 00            CALL 0x006ea2f0
LAB_0046d0cf:
0046D0CF  8B CE                     MOV ECX,ESI
0046D0D1  E8 01 7C F9 FF            CALL 0x00404cd7
0046D0D6  83 F8 01                  CMP EAX,0x1
0046D0D9  0F 85 25 01 00 00         JNZ 0x0046d204
0046D0DF  66 8B 96 1C 05 00 00      MOV DX,word ptr [ESI + 0x51c]
0046D0E6  66 83 FA FF               CMP DX,-0x1
0046D0EA  7E 24                     JLE 0x0046d110
0046D0EC  66 8B 8E 1E 05 00 00      MOV CX,word ptr [ESI + 0x51e]
0046D0F3  66 83 F9 FF               CMP CX,-0x1
0046D0F7  7E 17                     JLE 0x0046d110
0046D0F9  66 8B 86 20 05 00 00      MOV AX,word ptr [ESI + 0x520]
0046D100  66 3D FF FF               CMP AX,0xffff
0046D104  7E 0A                     JLE 0x0046d110
0046D106  66 89 55 EC               MOV word ptr [EBP + -0x14],DX
0046D10A  66 89 4D EE               MOV word ptr [EBP + -0x12],CX
0046D10E  EB 51                     JMP 0x0046d161
LAB_0046d110:
0046D110  66 8B 86 14 05 00 00      MOV AX,word ptr [ESI + 0x514]
0046D117  8D 7D F0                  LEA EDI,[EBP + -0x10]
0046D11A  66 8B 8E 12 05 00 00      MOV CX,word ptr [ESI + 0x512]
0046D121  66 8B 96 10 05 00 00      MOV DX,word ptr [ESI + 0x510]
0046D128  57                        PUSH EDI
0046D129  8D 7D EE                  LEA EDI,[EBP + -0x12]
0046D12C  57                        PUSH EDI
0046D12D  8D 7D EC                  LEA EDI,[EBP + -0x14]
0046D130  57                        PUSH EDI
0046D131  6A 02                     PUSH 0x2
0046D133  50                        PUSH EAX
0046D134  51                        PUSH ECX
0046D135  52                        PUSH EDX
0046D136  50                        PUSH EAX
0046D137  51                        PUSH ECX
0046D138  52                        PUSH EDX
0046D139  8B CE                     MOV ECX,ESI
0046D13B  E8 C8 77 F9 FF            CALL 0x00404908
0046D140  85 C0                     TEST EAX,EAX
0046D142  75 21                     JNZ 0x0046d165
0046D144  66 8B 8E 10 05 00 00      MOV CX,word ptr [ESI + 0x510]
0046D14B  66 8B 96 12 05 00 00      MOV DX,word ptr [ESI + 0x512]
0046D152  66 8B 86 14 05 00 00      MOV AX,word ptr [ESI + 0x514]
0046D159  66 89 4D EC               MOV word ptr [EBP + -0x14],CX
0046D15D  66 89 55 EE               MOV word ptr [EBP + -0x12],DX
LAB_0046d161:
0046D161  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
LAB_0046d165:
0046D165  0F BF 4D F0               MOVSX ECX,word ptr [EBP + -0x10]
0046D169  0F BF 55 EE               MOVSX EDX,word ptr [EBP + -0x12]
0046D16D  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
0046D171  51                        PUSH ECX
0046D172  52                        PUSH EDX
0046D173  50                        PUSH EAX
0046D174  8B CE                     MOV ECX,ESI
0046D176  E8 F0 7D F9 FF            CALL 0x00404f6b
0046D17B  6A 00                     PUSH 0x0
0046D17D  8B CE                     MOV ECX,ESI
0046D17F  E8 B0 69 F9 FF            CALL 0x00403b34
0046D184  83 F8 FF                  CMP EAX,-0x1
0046D187  75 0A                     JNZ 0x0046d193
0046D189  5F                        POP EDI
0046D18A  0B C0                     OR EAX,EAX
0046D18C  5E                        POP ESI
0046D18D  8B E5                     MOV ESP,EBP
0046D18F  5D                        POP EBP
0046D190  C2 04 00                  RET 0x4
LAB_0046d193:
0046D193  8B 16                     MOV EDX,dword ptr [ESI]
0046D195  8B CE                     MOV ECX,ESI
0046D197  C7 86 28 05 00 00 04 00 00 00  MOV dword ptr [ESI + 0x528],0x4
0046D1A1  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046D1A7  F7 D8                     NEG EAX
0046D1A9  1B C0                     SBB EAX,EAX
0046D1AB  5F                        POP EDI
0046D1AC  24 FD                     AND AL,0xfd
0046D1AE  5E                        POP ESI
0046D1AF  83 C0 02                  ADD EAX,0x2
0046D1B2  8B E5                     MOV ESP,EBP
0046D1B4  5D                        POP EBP
0046D1B5  C2 04 00                  RET 0x4
LAB_0046d1b8:
0046D1B8  68 FC A7 7A 00            PUSH 0x7aa7fc
0046D1BD  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046D1C2  6A 00                     PUSH 0x0
0046D1C4  6A 00                     PUSH 0x0
0046D1C6  68 C7 25 00 00            PUSH 0x25c7
0046D1CB  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046D1D0  E8 FB 02 24 00            CALL 0x006ad4d0
0046D1D5  83 C4 18                  ADD ESP,0x18
0046D1D8  85 C0                     TEST EAX,EAX
0046D1DA  74 01                     JZ 0x0046d1dd
0046D1DC  CC                        INT3
LAB_0046d1dd:
0046D1DD  68 C8 25 00 00            PUSH 0x25c8
LAB_0046d1e2:
0046D1E2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0046D1E7  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046D1EC  50                        PUSH EAX
0046D1ED  68 FF FF 00 00            PUSH 0xffff
0046D1F2  E8 49 8C 23 00            CALL 0x006a5e40
0046D1F7  5F                        POP EDI
0046D1F8  B8 FF FF 00 00            MOV EAX,0xffff
0046D1FD  5E                        POP ESI
0046D1FE  8B E5                     MOV ESP,EBP
0046D200  5D                        POP EBP
0046D201  C2 04 00                  RET 0x4
LAB_0046d204:
0046D204  83 BE 28 05 00 00 04      CMP dword ptr [ESI + 0x528],0x4
0046D20B  0F 85 C0 00 00 00         JNZ 0x0046d2d1
0046D211  6A 02                     PUSH 0x2
0046D213  8B CE                     MOV ECX,ESI
0046D215  E8 1A 69 F9 FF            CALL 0x00403b34
0046D21A  8B F8                     MOV EDI,EAX
0046D21C  83 FF FF                  CMP EDI,-0x1
0046D21F  0F 84 BA 00 00 00         JZ 0x0046d2df
0046D225  83 FF 03                  CMP EDI,0x3
0046D228  0F 85 A3 00 00 00         JNZ 0x0046d2d1
0046D22E  8B 86 B3 00 00 00         MOV EAX,dword ptr [ESI + 0xb3]
0046D234  85 C0                     TEST EAX,EAX
0046D236  75 69                     JNZ 0x0046d2a1
0046D238  0F BF 4E 5B               MOVSX ECX,word ptr [ESI + 0x5b]
0046D23C  8B 86 BB 00 00 00         MOV EAX,dword ptr [ESI + 0xbb]
0046D242  2B C1                     SUB EAX,ECX
0046D244  99                        CDQ
0046D245  33 C2                     XOR EAX,EDX
0046D247  2B C2                     SUB EAX,EDX
0046D249  83 F8 01                  CMP EAX,0x1
0046D24C  7F 53                     JG 0x0046d2a1
0046D24E  0F BF 56 5D               MOVSX EDX,word ptr [ESI + 0x5d]
0046D252  8B 86 BF 00 00 00         MOV EAX,dword ptr [ESI + 0xbf]
0046D258  2B C2                     SUB EAX,EDX
0046D25A  99                        CDQ
0046D25B  33 C2                     XOR EAX,EDX
0046D25D  2B C2                     SUB EAX,EDX
0046D25F  83 F8 01                  CMP EAX,0x1
0046D262  7F 3D                     JG 0x0046d2a1
0046D264  0F BF 4E 5F               MOVSX ECX,word ptr [ESI + 0x5f]
0046D268  8B 86 C3 00 00 00         MOV EAX,dword ptr [ESI + 0xc3]
0046D26E  2B C1                     SUB EAX,ECX
0046D270  99                        CDQ
0046D271  33 C2                     XOR EAX,EDX
0046D273  2B C2                     SUB EAX,EDX
0046D275  83 F8 01                  CMP EAX,0x1
0046D278  7F 27                     JG 0x0046d2a1
0046D27A  66 8B 86 C3 00 00 00      MOV AX,word ptr [ESI + 0xc3]
0046D281  66 8B 8E BF 00 00 00      MOV CX,word ptr [ESI + 0xbf]
0046D288  8B 16                     MOV EDX,dword ptr [ESI]
0046D28A  50                        PUSH EAX
0046D28B  66 8B 86 BB 00 00 00      MOV AX,word ptr [ESI + 0xbb]
0046D292  51                        PUSH ECX
0046D293  50                        PUSH EAX
0046D294  8B CE                     MOV ECX,ESI
0046D296  FF 52 18                  CALL dword ptr [EDX + 0x18]
0046D299  85 C0                     TEST EAX,EAX
0046D29B  75 04                     JNZ 0x0046d2a1
0046D29D  33 FF                     XOR EDI,EDI
0046D29F  EB 30                     JMP 0x0046d2d1
LAB_0046d2a1:
0046D2A1  66 8B 4E 30               MOV CX,word ptr [ESI + 0x30]
0046D2A5  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0046D2A8  51                        PUSH ECX
0046D2A9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0046D2AF  52                        PUSH EDX
0046D2B0  E8 44 8A F9 FF            CALL 0x00405cf9
0046D2B5  33 C9                     XOR ECX,ECX
0046D2B7  6A 00                     PUSH 0x0
0046D2B9  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
0046D2BD  51                        PUSH ECX
0046D2BE  8B C8                     MOV ECX,EAX
0046D2C0  E8 61 58 F9 FF            CALL 0x00402b26
0046D2C5  8B F8                     MOV EDI,EAX
0046D2C7  83 EF FC                  SUB EDI,-0x4
0046D2CA  F7 DF                     NEG EDI
0046D2CC  1B FF                     SBB EDI,EDI
0046D2CE  83 E7 02                  AND EDI,0x2
LAB_0046d2d1:
0046D2D1  8B 16                     MOV EDX,dword ptr [ESI]
0046D2D3  8B CE                     MOV ECX,ESI
0046D2D5  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046D2DB  85 C0                     TEST EAX,EAX
0046D2DD  74 0B                     JZ 0x0046d2ea
LAB_0046d2df:
0046D2DF  5F                        POP EDI
0046D2E0  83 C8 FF                  OR EAX,0xffffffff
0046D2E3  5E                        POP ESI
0046D2E4  8B E5                     MOV ESP,EBP
0046D2E6  5D                        POP EBP
0046D2E7  C2 04 00                  RET 0x4
LAB_0046d2ea:
0046D2EA  8B C7                     MOV EAX,EDI
0046D2EC  5F                        POP EDI
0046D2ED  5E                        POP ESI
0046D2EE  8B E5                     MOV ESP,EBP
0046D2F0  5D                        POP EBP
0046D2F1  C2 04 00                  RET 0x4
