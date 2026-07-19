STBoatC::GetDefenceTarget:
004899A0  55                        PUSH EBP
004899A1  8B EC                     MOV EBP,ESP
004899A3  83 EC 6C                  SUB ESP,0x6c
004899A6  53                        PUSH EBX
004899A7  56                        PUSH ESI
004899A8  8B F1                     MOV ESI,ECX
004899AA  33 DB                     XOR EBX,EBX
004899AC  57                        PUSH EDI
004899AD  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
004899B0  8B 86 9A 07 00 00         MOV EAX,dword ptr [ESI + 0x79a]
004899B6  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
004899B9  3B C3                     CMP EAX,EBX
004899BB  0F 84 9E 09 00 00         JZ 0x0048a35f
004899C1  39 9E 3A 07 00 00         CMP dword ptr [ESI + 0x73a],EBX
004899C7  0F 8F 92 09 00 00         JG 0x0048a35f
004899CD  8B 96 7F 04 00 00         MOV EDX,dword ptr [ESI + 0x47f]
004899D3  8B 8E 8B 04 00 00         MOV ECX,dword ptr [ESI + 0x48b]
004899D9  BF FF FF 00 00            MOV EDI,0xffff
004899DE  42                        INC EDX
004899DF  3B CF                     CMP ECX,EDI
004899E1  89 96 7F 04 00 00         MOV dword ptr [ESI + 0x47f],EDX
004899E7  8B C2                     MOV EAX,EDX
004899E9  74 74                     JZ 0x00489a5f
004899EB  8B 86 83 04 00 00         MOV EAX,dword ptr [ESI + 0x483]
004899F1  8A 96 87 04 00 00         MOV DL,byte ptr [ESI + 0x487]
004899F7  50                        PUSH EAX
004899F8  51                        PUSH ECX
004899F9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004899FF  52                        PUSH EDX
00489A00  E8 B5 8E F7 FF            CALL 0x004028ba
00489A05  3B C3                     CMP EAX,EBX
00489A07  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00489A0A  74 63                     JZ 0x00489a6f
00489A0C  8B 10                     MOV EDX,dword ptr [EAX]
00489A0E  8B C8                     MOV ECX,EAX
00489A10  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00489A16  83 F8 01                  CMP EAX,0x1
00489A19  75 54                     JNZ 0x00489a6f
00489A1B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489A1E  8B 01                     MOV EAX,dword ptr [ECX]
00489A20  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
00489A26  83 F8 01                  CMP EAX,0x1
00489A29  75 44                     JNZ 0x00489a6f
00489A2B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489A2E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00489A31  50                        PUSH EAX
00489A32  8B 11                     MOV EDX,dword ptr [ECX]
00489A34  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
00489A3A  83 F8 01                  CMP EAX,0x1
00489A3D  75 30                     JNZ 0x00489a6f
00489A3F  8B 86 7F 04 00 00         MOV EAX,dword ptr [ESI + 0x47f]
00489A45  B9 28 00 00 00            MOV ECX,0x28
00489A4A  99                        CDQ
00489A4B  F7 F9                     IDIV ECX
00489A4D  85 D2                     TEST EDX,EDX
00489A4F  74 1E                     JZ 0x00489a6f
00489A51  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00489A54  8B C3                     MOV EAX,EBX
00489A56  5F                        POP EDI
00489A57  5E                        POP ESI
00489A58  5B                        POP EBX
00489A59  8B E5                     MOV ESP,EBP
00489A5B  5D                        POP EBP
00489A5C  C2 04 00                  RET 0x4
LAB_00489a5f:
00489A5F  99                        CDQ
00489A60  B9 14 00 00 00            MOV ECX,0x14
00489A65  F7 F9                     IDIV ECX
00489A67  85 D2                     TEST EDX,EDX
00489A69  0F 85 10 09 00 00         JNZ 0x0048a37f
LAB_00489a6f:
00489A6F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00489A72  B9 01 00 00 00            MOV ECX,0x1
00489A77  89 9E 83 04 00 00         MOV dword ptr [ESI + 0x483],EBX
00489A7D  C7 86 87 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x487],0xffffffff
00489A87  8D 42 01                  LEA EAX,[EDX + 0x1]
00489A8A  89 BE 8B 04 00 00         MOV dword ptr [ESI + 0x48b],EDI
00489A90  83 F8 04                  CMP EAX,0x4
00489A93  89 9E 7F 04 00 00         MOV dword ptr [ESI + 0x47f],EBX
00489A99  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00489A9C  0F 87 78 08 00 00         JA 0x0048a31a
switchD_00489aa2::switchD:
00489AA2  FF 24 85 94 A3 48 00      JMP dword ptr [EAX*0x4 + 0x48a394]
switchD_00489aa2::caseD_ffffffff:
00489AA9  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00489AAC  8B C1                     MOV EAX,ECX
00489AAE  5F                        POP EDI
00489AAF  5E                        POP ESI
00489AB0  5B                        POP EBX
00489AB1  8B E5                     MOV ESP,EBP
00489AB3  5D                        POP EBP
00489AB4  C2 04 00                  RET 0x4
switchD_00489aa2::caseD_0:
00489AB7  53                        PUSH EBX
00489AB8  8B CE                     MOV ECX,ESI
00489ABA  E8 76 8B F7 FF            CALL 0x00402635
00489ABF  39 9E 36 07 00 00         CMP dword ptr [ESI + 0x736],EBX
00489AC5  75 03                     JNZ 0x00489aca
00489AC7  53                        PUSH EBX
00489AC8  EB 02                     JMP 0x00489acc
LAB_00489aca:
00489ACA  6A 01                     PUSH 0x1
LAB_00489acc:
00489ACC  0F BF 86 77 04 00 00      MOVSX EAX,word ptr [ESI + 0x477]
00489AD3  0F BF 8E 75 04 00 00      MOVSX ECX,word ptr [ESI + 0x475]
00489ADA  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00489ADD  6A 02                     PUSH 0x2
00489ADF  6A 06                     PUSH 0x6
00489AE1  6A 06                     PUSH 0x6
00489AE3  6A 02                     PUSH 0x2
00489AE5  50                        PUSH EAX
00489AE6  51                        PUSH ECX
00489AE7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489AED  56                        PUSH ESI
00489AEE  52                        PUSH EDX
00489AEF  E8 83 C1 F7 FF            CALL 0x00405c77
00489AF4  8B F8                     MOV EDI,EAX
00489AF6  3B FB                     CMP EDI,EBX
00489AF8  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
00489AFB  0F 84 DD 03 00 00         JZ 0x00489ede
00489B01  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
00489B05  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00489B08  50                        PUSH EAX
00489B09  51                        PUSH ECX
00489B0A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489B10  E8 E4 C1 F7 FF            CALL 0x00405cf9
00489B15  33 D2                     XOR EDX,EDX
00489B17  57                        PUSH EDI
00489B18  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00489B1C  8B C8                     MOV ECX,EAX
00489B1E  52                        PUSH EDX
00489B1F  E8 40 93 F7 FF            CALL 0x00402e64
00489B24  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00489B27  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00489B2A  3B C3                     CMP EAX,EBX
00489B2C  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00489B2F  0F 8E 94 03 00 00         JLE 0x00489ec9
LAB_00489b35:
00489B35  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00489B38  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00489B3B  8B 0C 81                  MOV ECX,dword ptr [ECX + EAX*0x4]
00489B3E  83 F9 FC                  CMP ECX,-0x4
00489B41  0F 84 69 03 00 00         JZ 0x00489eb0
00489B47  83 F9 08                  CMP ECX,0x8
00489B4A  0F 8F 60 03 00 00         JG 0x00489eb0
00489B50  B8 08 00 00 00            MOV EAX,0x8
00489B55  8D 55 FC                  LEA EDX,[EBP + -0x4]
00489B58  2B C1                     SUB EAX,ECX
00489B5A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00489B5D  52                        PUSH EDX
00489B5E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00489B61  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00489B64  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
00489B67  D1 E7                     SHL EDI,0x1
00489B69  E8 02 31 22 00            CALL 0x006acc70
00489B6E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489B71  8B 01                     MOV EAX,dword ptr [ECX]
00489B73  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00489B79  85 C0                     TEST EAX,EAX
00489B7B  0F 84 2F 03 00 00         JZ 0x00489eb0
00489B81  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489B84  8B 11                     MOV EDX,dword ptr [ECX]
00489B86  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
00489B8C  85 C0                     TEST EAX,EAX
00489B8E  0F 84 1C 03 00 00         JZ 0x00489eb0
00489B94  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489B97  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00489B9A  52                        PUSH EDX
00489B9B  8B 01                     MOV EAX,dword ptr [ECX]
00489B9D  FF 90 F4 00 00 00         CALL dword ptr [EAX + 0xf4]
00489BA3  85 C0                     TEST EAX,EAX
00489BA5  0F 84 05 03 00 00         JZ 0x00489eb0
00489BAB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489BAE  8B 01                     MOV EAX,dword ptr [ECX]
00489BB0  FF 90 FC 00 00 00         CALL dword ptr [EAX + 0xfc]
00489BB6  85 C0                     TEST EAX,EAX
00489BB8  7E 06                     JLE 0x00489bc0
00489BBA  81 C7 2C 01 00 00         ADD EDI,0x12c
LAB_00489bc0:
00489BC0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489BC3  8B 81 19 02 00 00         MOV EAX,dword ptr [ECX + 0x219]
00489BC9  99                        CDQ
00489BCA  83 E2 03                  AND EDX,0x3
00489BCD  03 C2                     ADD EAX,EDX
00489BCF  8B 91 15 02 00 00         MOV EDX,dword ptr [ECX + 0x215]
00489BD5  C1 F8 02                  SAR EAX,0x2
00489BD8  03 C2                     ADD EAX,EDX
00489BDA  8B 11                     MOV EDX,dword ptr [ECX]
00489BDC  03 F8                     ADD EDI,EAX
00489BDE  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
00489BE1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489BE4  8B 96 8B 04 00 00         MOV EDX,dword ptr [ESI + 0x48b]
00489BEA  8D 1C 47                  LEA EBX,[EDI + EAX*0x2]
00489BED  33 C0                     XOR EAX,EAX
00489BEF  66 8B 41 32               MOV AX,word ptr [ECX + 0x32]
00489BF3  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
00489BF6  3B C2                     CMP EAX,EDX
00489BF8  75 45                     JNZ 0x00489c3f
00489BFA  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
00489BFD  8B 86 87 04 00 00         MOV EAX,dword ptr [ESI + 0x487]
00489C03  3B D0                     CMP EDX,EAX
00489C05  75 38                     JNZ 0x00489c3f
00489C07  8B 96 83 04 00 00         MOV EDX,dword ptr [ESI + 0x483]
00489C0D  83 FA 01                  CMP EDX,0x1
00489C10  75 16                     JNZ 0x00489c28
00489C12  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
00489C15  83 F8 14                  CMP EAX,0x14
00489C18  74 1C                     JZ 0x00489c36
00489C1A  3D E8 03 00 00            CMP EAX,0x3e8
00489C1F  74 15                     JZ 0x00489c36
00489C21  3D E9 03 00 00            CMP EAX,0x3e9
00489C26  74 0E                     JZ 0x00489c36
LAB_00489c28:
00489C28  83 FA 03                  CMP EDX,0x3
00489C2B  75 12                     JNZ 0x00489c3f
00489C2D  81 79 20 AE 01 00 00      CMP dword ptr [ECX + 0x20],0x1ae
00489C34  75 09                     JNZ 0x00489c3f
LAB_00489c36:
00489C36  81 C3 C8 00 00 00         ADD EBX,0xc8
00489C3C  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
LAB_00489c3f:
00489C3F  8D 45 F8                  LEA EAX,[EBP + -0x8]
00489C42  8D 55 F4                  LEA EDX,[EBP + -0xc]
00489C45  50                        PUSH EAX
00489C46  8D 45 F0                  LEA EAX,[EBP + -0x10]
00489C49  52                        PUSH EDX
00489C4A  50                        PUSH EAX
00489C4B  E8 93 95 F7 FF            CALL 0x004031e3
00489C50  0F BF 4D F8               MOVSX ECX,word ptr [EBP + -0x8]
00489C54  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00489C58  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
00489C5C  51                        PUSH ECX
00489C5D  52                        PUSH EDX
00489C5E  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
00489C62  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00489C66  50                        PUSH EAX
00489C67  51                        PUSH ECX
00489C68  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
00489C6C  52                        PUSH EDX
00489C6D  50                        PUSH EAX
00489C6E  E8 9A 32 22 00            CALL 0x006acf0d
00489C73  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00489C76  8B C8                     MOV ECX,EAX
00489C78  83 C4 18                  ADD ESP,0x18
00489C7B  85 C9                     TEST ECX,ECX
00489C7D  74 1F                     JZ 0x00489c9e
00489C7F  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
00489C83  0F BF C7                  MOVSX EAX,DI
00489C86  2B C2                     SUB EAX,EDX
00489C88  99                        CDQ
00489C89  33 C2                     XOR EAX,EDX
00489C8B  2B C2                     SUB EAX,EDX
00489C8D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00489C90  D1 E0                     SHL EAX,0x1
00489C92  99                        CDQ
00489C93  F7 F9                     IDIV ECX
00489C95  83 F8 03                  CMP EAX,0x3
00489C98  0F 8F 5E 01 00 00         JG 0x00489dfc
LAB_00489c9e:
00489C9E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00489CA1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00489CA4  8B 06                     MOV EAX,dword ptr [ESI]
00489CA6  57                        PUSH EDI
00489CA7  51                        PUSH ECX
00489CA8  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00489CAC  52                        PUSH EDX
00489CAD  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
00489CB1  51                        PUSH ECX
00489CB2  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00489CB6  52                        PUSH EDX
00489CB7  51                        PUSH ECX
00489CB8  8B CE                     MOV ECX,ESI
00489CBA  FF 50 10                  CALL dword ptr [EAX + 0x10]
00489CBD  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00489CC0  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
00489CC6  84 C0                     TEST AL,AL
00489CC8  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
00489CCF  0F 86 0E 01 00 00         JBE 0x00489de3
00489CD5  8D 96 A8 02 00 00         LEA EDX,[ESI + 0x2a8]
00489CDB  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
LAB_00489cde:
00489CDE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00489CE1  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00489CE4  50                        PUSH EAX
00489CE5  83 C1 FE                  ADD ECX,-0x2
00489CE8  83 EC 08                  SUB ESP,0x8
00489CEB  8B 01                     MOV EAX,dword ptr [ECX]
00489CED  8B D4                     MOV EDX,ESP
00489CEF  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
00489CF3  89 02                     MOV dword ptr [EDX],EAX
00489CF5  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
00489CF9  8D 55 BC                  LEA EDX,[EBP + -0x44]
00489CFC  52                        PUSH EDX
00489CFD  8B CE                     MOV ECX,ESI
00489CFF  E8 28 97 F7 FF            CALL 0x0040342c
00489D04  8B 08                     MOV ECX,dword ptr [EAX]
00489D06  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00489D09  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
00489D0C  66 8B 5E 43               MOV BX,word ptr [ESI + 0x43]
00489D10  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
00489D14  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00489D18  66 8B 7E 41               MOV DI,word ptr [ESI + 0x41]
00489D1C  66 2B 5D C6               SUB BX,word ptr [EBP + -0x3a]
00489D20  66 03 7D C4               ADD DI,word ptr [EBP + -0x3c]
00489D24  66 03 C1                  ADD AX,CX
00489D27  66 8B 0A                  MOV CX,word ptr [EDX]
00489D2A  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00489D2D  52                        PUSH EDX
00489D2E  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00489D31  33 C0                     XOR EAX,EAX
00489D33  83 EC 08                  SUB ESP,0x8
00489D36  66 89 4D C6               MOV word ptr [EBP + -0x3a],CX
00489D3A  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
00489D3E  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00489D41  8B CC                     MOV ECX,ESP
00489D43  89 11                     MOV dword ptr [ECX],EDX
00489D45  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00489D49  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00489D4C  50                        PUSH EAX
00489D4D  8B CE                     MOV ECX,ESI
00489D4F  E8 D8 96 F7 FF            CALL 0x0040342c
00489D54  8B C8                     MOV ECX,EAX
00489D56  8B 01                     MOV EAX,dword ptr [ECX]
00489D58  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00489D5B  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
00489D5F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00489D62  66 89 55 C8               MOV word ptr [EBP + -0x38],DX
00489D66  8B 55 C6                  MOV EDX,dword ptr [EBP + -0x3a]
00489D69  03 C8                     ADD ECX,EAX
00489D6B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00489D6E  2B C2                     SUB EAX,EDX
00489D70  8B 96 36 07 00 00         MOV EDX,dword ptr [ESI + 0x736]
00489D76  85 D2                     TEST EDX,EDX
00489D78  75 24                     JNZ 0x00489d9e
00489D7A  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
00489D80  6A 00                     PUSH 0x0
00489D82  6A 00                     PUSH 0x0
00489D84  52                        PUSH EDX
00489D85  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00489D88  52                        PUSH EDX
00489D89  50                        PUSH EAX
00489D8A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00489D8D  51                        PUSH ECX
00489D8E  50                        PUSH EAX
00489D8F  53                        PUSH EBX
00489D90  57                        PUSH EDI
00489D91  8B CE                     MOV ECX,ESI
00489D93  E8 6F BB F7 FF            CALL 0x00405907
00489D98  85 C0                     TEST EAX,EAX
00489D9A  74 4F                     JZ 0x00489deb
00489D9C  EB 22                     JMP 0x00489dc0
LAB_00489d9e:
00489D9E  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
00489DA4  6A 01                     PUSH 0x1
00489DA6  6A 00                     PUSH 0x0
00489DA8  52                        PUSH EDX
00489DA9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00489DAC  52                        PUSH EDX
00489DAD  50                        PUSH EAX
00489DAE  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00489DB1  51                        PUSH ECX
00489DB2  50                        PUSH EAX
00489DB3  53                        PUSH EBX
00489DB4  57                        PUSH EDI
00489DB5  8B CE                     MOV ECX,ESI
00489DB7  E8 4B BB F7 FF            CALL 0x00405907
00489DBC  85 C0                     TEST EAX,EAX
00489DBE  74 2B                     JZ 0x00489deb
LAB_00489dc0:
00489DC0  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00489DC3  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
00489DC6  33 C9                     XOR ECX,ECX
00489DC8  40                        INC EAX
00489DC9  8A 8E B2 02 00 00         MOV CL,byte ptr [ESI + 0x2b2]
00489DCF  83 C7 06                  ADD EDI,0x6
00489DD2  3B C1                     CMP EAX,ECX
00489DD4  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00489DD7  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00489DDA  0F 8C FE FE FF FF         JL 0x00489cde
00489DE0  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
LAB_00489de3:
00489DE3  81 C3 C8 00 00 00         ADD EBX,0xc8
00489DE9  EB 11                     JMP 0x00489dfc
LAB_00489deb:
00489DEB  8B 86 E6 07 00 00         MOV EAX,dword ptr [ESI + 0x7e6]
00489DF1  85 C0                     TEST EAX,EAX
00489DF3  0F 85 B7 00 00 00         JNZ 0x00489eb0
00489DF9  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
LAB_00489dfc:
00489DFC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00489DFF  81 78 20 AE 01 00 00      CMP dword ptr [EAX + 0x20],0x1ae
00489E06  74 46                     JZ 0x00489e4e
00489E08  8B 8E 7B 04 00 00         MOV ECX,dword ptr [ESI + 0x47b]
00489E0E  85 C9                     TEST ECX,ECX
00489E10  74 3C                     JZ 0x00489e4e
00489E12  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00489E15  33 FF                     XOR EDI,EDI
00489E17  85 D2                     TEST EDX,EDX
00489E19  7E 33                     JLE 0x00489e4e
LAB_00489e1b:
00489E1B  8D 55 94                  LEA EDX,[EBP + -0x6c]
00489E1E  52                        PUSH EDX
00489E1F  8B D7                     MOV EDX,EDI
00489E21  E8 4A 2E 22 00            CALL 0x006acc70
00489E26  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00489E29  66 8B 4D 98               MOV CX,word ptr [EBP + -0x68]
00489E2D  66 3B 48 32               CMP CX,word ptr [EAX + 0x32]
00489E31  75 0A                     JNZ 0x00489e3d
00489E33  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00489E36  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00489E39  3B D1                     CMP EDX,ECX
00489E3B  74 0E                     JZ 0x00489e4b
LAB_00489e3d:
00489E3D  8B 8E 7B 04 00 00         MOV ECX,dword ptr [ESI + 0x47b]
00489E43  47                        INC EDI
00489E44  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
00489E47  7C D2                     JL 0x00489e1b
00489E49  EB 03                     JMP 0x00489e4e
LAB_00489e4b:
00489E4B  03 5D 9A                  ADD EBX,dword ptr [EBP + -0x66]
LAB_00489e4e:
00489E4E  83 BE F7 06 00 00 1C      CMP dword ptr [ESI + 0x6f7],0x1c
00489E55  75 25                     JNZ 0x00489e7c
00489E57  8B 10                     MOV EDX,dword ptr [EAX]
00489E59  8B C8                     MOV ECX,EAX
00489E5B  FF 92 20 01 00 00         CALL dword ptr [EDX + 0x120]
00489E61  83 F8 01                  CMP EAX,0x1
00489E64  75 13                     JNZ 0x00489e79
00489E66  B8 67 66 66 66            MOV EAX,0x66666667
00489E6B  F7 EB                     IMUL EBX
00489E6D  C1 FA 03                  SAR EDX,0x3
00489E70  8B C2                     MOV EAX,EDX
00489E72  C1 E8 1F                  SHR EAX,0x1f
00489E75  03 D0                     ADD EDX,EAX
00489E77  8B DA                     MOV EBX,EDX
LAB_00489e79:
00489E79  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00489e7c:
00489E7C  3B 5D D0                  CMP EBX,dword ptr [EBP + -0x30]
00489E7F  7E 2F                     JLE 0x00489eb0
00489E81  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00489E84  33 D2                     XOR EDX,EDX
00489E86  89 8E 87 04 00 00         MOV dword ptr [ESI + 0x487],ECX
00489E8C  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
00489E90  89 96 8B 04 00 00         MOV dword ptr [ESI + 0x48b],EDX
00489E96  8B 40 20                  MOV EAX,dword ptr [EAX + 0x20]
00489E99  2D AE 01 00 00            SUB EAX,0x1ae
00489E9E  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
00489EA1  F7 D8                     NEG EAX
00489EA3  1B C0                     SBB EAX,EAX
00489EA5  24 FE                     AND AL,0xfe
00489EA7  83 C0 03                  ADD EAX,0x3
00489EAA  89 86 83 04 00 00         MOV dword ptr [ESI + 0x483],EAX
LAB_00489eb0:
00489EB0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00489EB3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00489EB6  40                        INC EAX
00489EB7  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00489EBA  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00489EBD  3B C2                     CMP EAX,EDX
00489EBF  0F 8C 70 FC FF FF         JL 0x00489b35
00489EC5  8B F9                     MOV EDI,ECX
00489EC7  33 DB                     XOR EBX,EBX
LAB_00489ec9:
00489EC9  57                        PUSH EDI
00489ECA  E8 41 42 22 00            CALL 0x006ae110
00489ECF  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
00489ED9  74 03                     JZ 0x00489ede
00489EDB  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
LAB_00489ede:
00489EDE  39 5D E4                  CMP dword ptr [EBP + -0x1c],EBX
00489EE1  0F 84 9F 04 00 00         JZ 0x0048a386
00489EE7  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00489EEA  52                        PUSH EDX
00489EEB  E8 70 11 22 00            CALL 0x006ab060
00489EF0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00489EF3  5F                        POP EDI
00489EF4  5E                        POP ESI
00489EF5  5B                        POP EBX
00489EF6  8B E5                     MOV ESP,EBP
00489EF8  5D                        POP EBP
00489EF9  C2 04 00                  RET 0x4
switchD_00489aa2::caseD_1:
00489EFC  53                        PUSH EBX
00489EFD  8B CE                     MOV ECX,ESI
00489EFF  E8 31 87 F7 FF            CALL 0x00402635
00489F04  39 9E 36 07 00 00         CMP dword ptr [ESI + 0x736],EBX
00489F0A  75 2E                     JNZ 0x00489f3a
00489F0C  0F BF 86 77 04 00 00      MOVSX EAX,word ptr [ESI + 0x477]
00489F13  0F BF 8E 75 04 00 00      MOVSX ECX,word ptr [ESI + 0x475]
00489F1A  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00489F1D  53                        PUSH EBX
00489F1E  6A 02                     PUSH 0x2
00489F20  6A 06                     PUSH 0x6
00489F22  6A 06                     PUSH 0x6
00489F24  6A 02                     PUSH 0x2
00489F26  50                        PUSH EAX
00489F27  51                        PUSH ECX
00489F28  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489F2E  56                        PUSH ESI
00489F2F  52                        PUSH EDX
00489F30  E8 42 BD F7 FF            CALL 0x00405c77
00489F35  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00489F38  EB 2D                     JMP 0x00489f67
LAB_00489f3a:
00489F3A  0F BF 86 77 04 00 00      MOVSX EAX,word ptr [ESI + 0x477]
00489F41  0F BF 8E 75 04 00 00      MOVSX ECX,word ptr [ESI + 0x475]
00489F48  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00489F4B  6A 01                     PUSH 0x1
00489F4D  6A 02                     PUSH 0x2
00489F4F  6A 06                     PUSH 0x6
00489F51  6A 06                     PUSH 0x6
00489F53  6A 02                     PUSH 0x2
00489F55  50                        PUSH EAX
00489F56  51                        PUSH ECX
00489F57  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489F5D  56                        PUSH ESI
00489F5E  52                        PUSH EDX
00489F5F  E8 13 BD F7 FF            CALL 0x00405c77
00489F64  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00489f67:
00489F67  3B C3                     CMP EAX,EBX
00489F69  0F 84 17 04 00 00         JZ 0x0048a386
00489F6F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00489F72  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00489F75  3B CB                     CMP ECX,EBX
00489F77  0F 8E 75 03 00 00         JLE 0x0048a2f2
LAB_00489f7d:
00489F7D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00489F80  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00489F83  8D 45 FC                  LEA EAX,[EBP + -0x4]
00489F86  50                        PUSH EAX
00489F87  E8 E4 2C 22 00            CALL 0x006acc70
00489F8C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489F8F  8B 11                     MOV EDX,dword ptr [ECX]
00489F91  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00489F97  85 C0                     TEST EAX,EAX
00489F99  0F 84 3E 03 00 00         JZ 0x0048a2dd
00489F9F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489FA2  8B 01                     MOV EAX,dword ptr [ECX]
00489FA4  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
00489FAA  85 C0                     TEST EAX,EAX
00489FAC  0F 84 2B 03 00 00         JZ 0x0048a2dd
00489FB2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489FB5  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00489FB8  50                        PUSH EAX
00489FB9  8B 11                     MOV EDX,dword ptr [ECX]
00489FBB  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
00489FC1  85 C0                     TEST EAX,EAX
00489FC3  0F 84 14 03 00 00         JZ 0x0048a2dd
00489FC9  8D 4D F8                  LEA ECX,[EBP + -0x8]
00489FCC  8D 55 F4                  LEA EDX,[EBP + -0xc]
00489FCF  51                        PUSH ECX
00489FD0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00489FD3  8D 45 F0                  LEA EAX,[EBP + -0x10]
00489FD6  52                        PUSH EDX
00489FD7  50                        PUSH EAX
00489FD8  E8 06 92 F7 FF            CALL 0x004031e3
00489FDD  0F BF 4D F8               MOVSX ECX,word ptr [EBP + -0x8]
00489FE1  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00489FE5  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
00489FE9  51                        PUSH ECX
00489FEA  52                        PUSH EDX
00489FEB  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
00489FEF  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00489FF3  50                        PUSH EAX
00489FF4  51                        PUSH ECX
00489FF5  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
00489FF9  52                        PUSH EDX
00489FFA  50                        PUSH EAX
00489FFB  E8 0D 2F 22 00            CALL 0x006acf0d
0048A000  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0048A003  8B F8                     MOV EDI,EAX
0048A005  83 C4 18                  ADD ESP,0x18
0048A008  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
0048A00B  85 FF                     TEST EDI,EDI
0048A00D  74 1F                     JZ 0x0048a02e
0048A00F  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0048A013  0F BF C1                  MOVSX EAX,CX
0048A016  2B C2                     SUB EAX,EDX
0048A018  99                        CDQ
0048A019  33 C2                     XOR EAX,EDX
0048A01B  2B C2                     SUB EAX,EDX
0048A01D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0048A020  D1 E0                     SHL EAX,0x1
0048A022  99                        CDQ
0048A023  F7 FF                     IDIV EDI
0048A025  83 F8 03                  CMP EAX,0x3
0048A028  0F 8F AF 02 00 00         JG 0x0048a2dd
LAB_0048a02e:
0048A02E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0048A031  51                        PUSH ECX
0048A032  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0048A035  8B 06                     MOV EAX,dword ptr [ESI]
0048A037  51                        PUSH ECX
0048A038  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0048A03C  52                        PUSH EDX
0048A03D  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
0048A041  51                        PUSH ECX
0048A042  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0048A046  52                        PUSH EDX
0048A047  51                        PUSH ECX
0048A048  8B CE                     MOV ECX,ESI
0048A04A  FF 50 10                  CALL dword ptr [EAX + 0x10]
0048A04D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0048A050  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
0048A056  84 C0                     TEST AL,AL
0048A058  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
0048A05F  0F 86 16 01 00 00         JBE 0x0048a17b
0048A065  8D 96 A8 02 00 00         LEA EDX,[ESI + 0x2a8]
0048A06B  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
LAB_0048a06e:
0048A06E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0048A071  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0048A074  50                        PUSH EAX
0048A075  83 C1 FE                  ADD ECX,-0x2
0048A078  83 EC 08                  SUB ESP,0x8
0048A07B  8B 01                     MOV EAX,dword ptr [ECX]
0048A07D  8B D4                     MOV EDX,ESP
0048A07F  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0048A083  89 02                     MOV dword ptr [EDX],EAX
0048A085  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0048A089  8D 55 AC                  LEA EDX,[EBP + -0x54]
0048A08C  52                        PUSH EDX
0048A08D  8B CE                     MOV ECX,ESI
0048A08F  E8 98 93 F7 FF            CALL 0x0040342c
0048A094  8B 08                     MOV ECX,dword ptr [EAX]
0048A096  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0048A099  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0048A09C  66 8B 5E 43               MOV BX,word ptr [ESI + 0x43]
0048A0A0  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
0048A0A4  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0048A0A8  66 8B 7E 41               MOV DI,word ptr [ESI + 0x41]
0048A0AC  66 2B 5D C6               SUB BX,word ptr [EBP + -0x3a]
0048A0B0  66 03 7D C4               ADD DI,word ptr [EBP + -0x3c]
0048A0B4  66 03 C1                  ADD AX,CX
0048A0B7  66 8B 0A                  MOV CX,word ptr [EDX]
0048A0BA  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0048A0BD  52                        PUSH EDX
0048A0BE  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0048A0C1  33 C0                     XOR EAX,EAX
0048A0C3  83 EC 08                  SUB ESP,0x8
0048A0C6  66 89 4D C6               MOV word ptr [EBP + -0x3a],CX
0048A0CA  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
0048A0CE  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0048A0D1  8B CC                     MOV ECX,ESP
0048A0D3  89 11                     MOV dword ptr [ECX],EDX
0048A0D5  66 89 41 04               MOV word ptr [ECX + 0x4],AX
0048A0D9  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0048A0DC  50                        PUSH EAX
0048A0DD  8B CE                     MOV ECX,ESI
0048A0DF  E8 48 93 F7 FF            CALL 0x0040342c
0048A0E4  8B C8                     MOV ECX,EAX
0048A0E6  8B 01                     MOV EAX,dword ptr [ECX]
0048A0E8  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0048A0EB  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
0048A0EF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0048A0F2  66 89 55 C8               MOV word ptr [EBP + -0x38],DX
0048A0F6  8B 55 C6                  MOV EDX,dword ptr [EBP + -0x3a]
0048A0F9  03 C8                     ADD ECX,EAX
0048A0FB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0048A0FE  2B C2                     SUB EAX,EDX
0048A100  8B 96 36 07 00 00         MOV EDX,dword ptr [ESI + 0x736]
0048A106  85 D2                     TEST EDX,EDX
0048A108  75 28                     JNZ 0x0048a132
0048A10A  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
0048A110  6A 00                     PUSH 0x0
0048A112  6A 00                     PUSH 0x0
0048A114  52                        PUSH EDX
0048A115  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0048A118  52                        PUSH EDX
0048A119  50                        PUSH EAX
0048A11A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0048A11D  51                        PUSH ECX
0048A11E  50                        PUSH EAX
0048A11F  53                        PUSH EBX
0048A120  57                        PUSH EDI
0048A121  8B CE                     MOV ECX,ESI
0048A123  E8 DF B7 F7 FF            CALL 0x00405907
0048A128  85 C0                     TEST EAX,EAX
0048A12A  0F 84 AD 01 00 00         JZ 0x0048a2dd
0048A130  EB 26                     JMP 0x0048a158
LAB_0048a132:
0048A132  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
0048A138  6A 01                     PUSH 0x1
0048A13A  6A 00                     PUSH 0x0
0048A13C  52                        PUSH EDX
0048A13D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0048A140  52                        PUSH EDX
0048A141  50                        PUSH EAX
0048A142  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0048A145  51                        PUSH ECX
0048A146  50                        PUSH EAX
0048A147  53                        PUSH EBX
0048A148  57                        PUSH EDI
0048A149  8B CE                     MOV ECX,ESI
0048A14B  E8 B7 B7 F7 FF            CALL 0x00405907
0048A150  85 C0                     TEST EAX,EAX
0048A152  0F 84 85 01 00 00         JZ 0x0048a2dd
LAB_0048a158:
0048A158  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0048A15B  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0048A15E  33 C9                     XOR ECX,ECX
0048A160  40                        INC EAX
0048A161  8A 8E B2 02 00 00         MOV CL,byte ptr [ESI + 0x2b2]
0048A167  83 C7 06                  ADD EDI,0x6
0048A16A  3B C1                     CMP EAX,ECX
0048A16C  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0048A16F  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0048A172  0F 8C F6 FE FF FF         JL 0x0048a06e
0048A178  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
LAB_0048a17b:
0048A17B  B8 79 19 8C 02            MOV EAX,0x28c1979
0048A180  F7 EF                     IMUL EDI
0048A182  0F BF 8E 16 08 00 00      MOVSX ECX,word ptr [ESI + 0x816]
0048A189  D1 FA                     SAR EDX,0x1
0048A18B  8B C2                     MOV EAX,EDX
0048A18D  C1 E8 1F                  SHR EAX,0x1f
0048A190  03 D0                     ADD EDX,EAX
0048A192  2B CA                     SUB ECX,EDX
0048A194  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0048A197  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0048A19A  8B 11                     MOV EDX,dword ptr [ECX]
0048A19C  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
0048A19F  D1 E7                     SHL EDI,0x1
0048A1A1  FF 92 FC 00 00 00         CALL dword ptr [EDX + 0xfc]
0048A1A7  85 C0                     TEST EAX,EAX
0048A1A9  7E 06                     JLE 0x0048a1b1
0048A1AB  81 C7 2C 01 00 00         ADD EDI,0x12c
LAB_0048a1b1:
0048A1B1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0048A1B4  8B 81 19 02 00 00         MOV EAX,dword ptr [ECX + 0x219]
0048A1BA  99                        CDQ
0048A1BB  83 E2 03                  AND EDX,0x3
0048A1BE  03 C2                     ADD EAX,EDX
0048A1C0  8B 91 15 02 00 00         MOV EDX,dword ptr [ECX + 0x215]
0048A1C6  C1 F8 02                  SAR EAX,0x2
0048A1C9  03 C2                     ADD EAX,EDX
0048A1CB  03 F8                     ADD EDI,EAX
0048A1CD  8B 01                     MOV EAX,dword ptr [ECX]
0048A1CF  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
0048A1D2  8B 96 8B 04 00 00         MOV EDX,dword ptr [ESI + 0x48b]
0048A1D8  8D 1C 47                  LEA EBX,[EDI + EAX*0x2]
0048A1DB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0048A1DE  33 C9                     XOR ECX,ECX
0048A1E0  66 8B 48 32               MOV CX,word ptr [EAX + 0x32]
0048A1E4  3B CA                     CMP ECX,EDX
0048A1E6  75 44                     JNZ 0x0048a22c
0048A1E8  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
0048A1EB  8B 8E 87 04 00 00         MOV ECX,dword ptr [ESI + 0x487]
0048A1F1  3B D1                     CMP EDX,ECX
0048A1F3  75 37                     JNZ 0x0048a22c
0048A1F5  8B 96 83 04 00 00         MOV EDX,dword ptr [ESI + 0x483]
0048A1FB  83 FA 01                  CMP EDX,0x1
0048A1FE  75 18                     JNZ 0x0048a218
0048A200  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0048A203  83 F9 14                  CMP ECX,0x14
0048A206  74 1E                     JZ 0x0048a226
0048A208  81 F9 E8 03 00 00         CMP ECX,0x3e8
0048A20E  74 16                     JZ 0x0048a226
0048A210  81 F9 E9 03 00 00         CMP ECX,0x3e9
0048A216  74 0E                     JZ 0x0048a226
LAB_0048a218:
0048A218  83 FA 03                  CMP EDX,0x3
0048A21B  75 0F                     JNZ 0x0048a22c
0048A21D  81 78 20 AE 01 00 00      CMP dword ptr [EAX + 0x20],0x1ae
0048A224  75 0F                     JNZ 0x0048a235
LAB_0048a226:
0048A226  81 C3 C8 00 00 00         ADD EBX,0xc8
LAB_0048a22c:
0048A22C  81 78 20 AE 01 00 00      CMP dword ptr [EAX + 0x20],0x1ae
0048A233  74 46                     JZ 0x0048a27b
LAB_0048a235:
0048A235  8B 8E 7B 04 00 00         MOV ECX,dword ptr [ESI + 0x47b]
0048A23B  85 C9                     TEST ECX,ECX
0048A23D  74 3C                     JZ 0x0048a27b
0048A23F  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0048A242  33 FF                     XOR EDI,EDI
0048A244  85 D2                     TEST EDX,EDX
0048A246  7E 33                     JLE 0x0048a27b
LAB_0048a248:
0048A248  8D 45 94                  LEA EAX,[EBP + -0x6c]
0048A24B  8B D7                     MOV EDX,EDI
0048A24D  50                        PUSH EAX
0048A24E  E8 1D 2A 22 00            CALL 0x006acc70
0048A253  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0048A256  66 8B 4D 98               MOV CX,word ptr [EBP + -0x68]
0048A25A  66 3B 48 32               CMP CX,word ptr [EAX + 0x32]
0048A25E  75 0A                     JNZ 0x0048a26a
0048A260  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0048A263  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
0048A266  3B D1                     CMP EDX,ECX
0048A268  74 0E                     JZ 0x0048a278
LAB_0048a26a:
0048A26A  8B 8E 7B 04 00 00         MOV ECX,dword ptr [ESI + 0x47b]
0048A270  47                        INC EDI
0048A271  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
0048A274  7C D2                     JL 0x0048a248
0048A276  EB 03                     JMP 0x0048a27b
LAB_0048a278:
0048A278  03 5D 9A                  ADD EBX,dword ptr [EBP + -0x66]
LAB_0048a27b:
0048A27B  83 BE F7 06 00 00 1C      CMP dword ptr [ESI + 0x6f7],0x1c
0048A282  75 25                     JNZ 0x0048a2a9
0048A284  8B 10                     MOV EDX,dword ptr [EAX]
0048A286  8B C8                     MOV ECX,EAX
0048A288  FF 92 20 01 00 00         CALL dword ptr [EDX + 0x120]
0048A28E  83 F8 01                  CMP EAX,0x1
0048A291  75 13                     JNZ 0x0048a2a6
0048A293  B8 67 66 66 66            MOV EAX,0x66666667
0048A298  F7 EB                     IMUL EBX
0048A29A  C1 FA 03                  SAR EDX,0x3
0048A29D  8B C2                     MOV EAX,EDX
0048A29F  C1 E8 1F                  SHR EAX,0x1f
0048A2A2  03 D0                     ADD EDX,EAX
0048A2A4  8B DA                     MOV EBX,EDX
LAB_0048a2a6:
0048A2A6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0048a2a9:
0048A2A9  3B 5D D0                  CMP EBX,dword ptr [EBP + -0x30]
0048A2AC  7E 2F                     JLE 0x0048a2dd
0048A2AE  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
0048A2B1  33 D2                     XOR EDX,EDX
0048A2B3  89 8E 87 04 00 00         MOV dword ptr [ESI + 0x487],ECX
0048A2B9  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
0048A2BD  89 96 8B 04 00 00         MOV dword ptr [ESI + 0x48b],EDX
0048A2C3  8B 40 20                  MOV EAX,dword ptr [EAX + 0x20]
0048A2C6  2D AE 01 00 00            SUB EAX,0x1ae
0048A2CB  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
0048A2CE  F7 D8                     NEG EAX
0048A2D0  1B C0                     SBB EAX,EAX
0048A2D2  24 FE                     AND AL,0xfe
0048A2D4  83 C0 03                  ADD EAX,0x3
0048A2D7  89 86 83 04 00 00         MOV dword ptr [ESI + 0x483],EAX
LAB_0048a2dd:
0048A2DD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0048A2E0  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0048A2E3  40                        INC EAX
0048A2E4  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0048A2E7  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0048A2EA  3B C2                     CMP EAX,EDX
0048A2EC  0F 8C 8B FC FF FF         JL 0x00489f7d
LAB_0048a2f2:
0048A2F2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0048A2F5  52                        PUSH EDX
0048A2F6  E8 15 3E 22 00            CALL 0x006ae110
0048A2FB  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
0048A305  74 7F                     JZ 0x0048a386
0048A307  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0048A30E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0048A311  5F                        POP EDI
0048A312  5E                        POP ESI
0048A313  5B                        POP EBX
0048A314  8B E5                     MOV ESP,EBP
0048A316  5D                        POP EBP
0048A317  C2 04 00                  RET 0x4
switchD_00489aa2::default:
0048A31A  68 74 B9 7A 00            PUSH 0x7ab974
0048A31F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0048A324  53                        PUSH EBX
0048A325  53                        PUSH EBX
0048A326  68 77 46 00 00            PUSH 0x4677
0048A32B  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048A330  E8 9B 31 22 00            CALL 0x006ad4d0
0048A335  83 C4 18                  ADD ESP,0x18
0048A338  85 C0                     TEST EAX,EAX
0048A33A  74 01                     JZ 0x0048a33d
0048A33C  CC                        INT3
LAB_0048a33d:
0048A33D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0048A342  68 78 46 00 00            PUSH 0x4678
0048A347  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048A34C  50                        PUSH EAX
0048A34D  53                        PUSH EBX
0048A34E  E8 ED BA 21 00            CALL 0x006a5e40
0048A353  83 C8 FF                  OR EAX,0xffffffff
0048A356  5F                        POP EDI
0048A357  5E                        POP ESI
0048A358  5B                        POP EBX
0048A359  8B E5                     MOV ESP,EBP
0048A35B  5D                        POP EBP
0048A35C  C2 04 00                  RET 0x4
LAB_0048a35f:
0048A35F  89 9E 83 04 00 00         MOV dword ptr [ESI + 0x483],EBX
0048A365  C7 86 87 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x487],0xffffffff
0048A36F  C7 86 8B 04 00 00 FF FF 00 00  MOV dword ptr [ESI + 0x48b],0xffff
0048A379  89 9E 7F 04 00 00         MOV dword ptr [ESI + 0x47f],EBX
LAB_0048a37f:
0048A37F  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
LAB_0048a386:
0048A386  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0048A389  5F                        POP EDI
0048A38A  5E                        POP ESI
0048A38B  5B                        POP EBX
0048A38C  8B E5                     MOV ESP,EBP
0048A38E  5D                        POP EBP
0048A38F  C2 04 00                  RET 0x4
