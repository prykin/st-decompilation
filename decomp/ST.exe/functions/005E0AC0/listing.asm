MTaskTy::NoneMTask:
005E0AC0  55                        PUSH EBP
005E0AC1  8B EC                     MOV EBP,ESP
005E0AC3  83 EC 4C                  SUB ESP,0x4c
005E0AC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E0ACB  53                        PUSH EBX
005E0ACC  56                        PUSH ESI
005E0ACD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005E0AD0  57                        PUSH EDI
005E0AD1  8D 55 B8                  LEA EDX,[EBP + -0x48]
005E0AD4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005E0AD7  6A 00                     PUSH 0x0
005E0AD9  52                        PUSH EDX
005E0ADA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005E0ADD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E0AE3  E8 08 CD 14 00            CALL 0x0072d7f0
005E0AE8  8B F0                     MOV ESI,EAX
005E0AEA  83 C4 08                  ADD ESP,0x8
005E0AED  85 F6                     TEST ESI,ESI
005E0AEF  0F 85 1C 04 00 00         JNZ 0x005e0f11
005E0AF5  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005E0AF8  8A 47 6D                  MOV AL,byte ptr [EDI + 0x6d]
005E0AFB  3C 03                     CMP AL,0x3
005E0AFD  74 04                     JZ 0x005e0b03
005E0AFF  3C 05                     CMP AL,0x5
005E0B01  75 07                     JNZ 0x005e0b0a
LAB_005e0b03:
005E0B03  8B CF                     MOV ECX,EDI
005E0B05  E8 0E 51 E2 FF            CALL 0x00405c18
LAB_005e0b0a:
005E0B0A  8B 87 47 06 00 00         MOV EAX,dword ptr [EDI + 0x647]
005E0B10  85 C0                     TEST EAX,EAX
005E0B12  0F 84 65 01 00 00         JZ 0x005e0c7d
005E0B18  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E0B1B  33 DB                     XOR EBX,EBX
005E0B1D  85 C9                     TEST ECX,ECX
005E0B1F  0F 86 58 01 00 00         JBE 0x005e0c7d
005E0B25  3B D9                     CMP EBX,ECX
005E0B27  73 0D                     JNC 0x005e0b36
LAB_005e0b29:
005E0B29  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005E0B2C  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E0B2F  0F AF F3                  IMUL ESI,EBX
005E0B32  03 F1                     ADD ESI,ECX
005E0B34  EB 02                     JMP 0x005e0b38
LAB_005e0b36:
005E0B36  33 F6                     XOR ESI,ESI
LAB_005e0b38:
005E0B38  83 3E 00                  CMP dword ptr [ESI],0x0
005E0B3B  0F 8C 2A 01 00 00         JL 0x005e0c6b
005E0B41  8B 46 3A                  MOV EAX,dword ptr [ESI + 0x3a]
005E0B44  85 C0                     TEST EAX,EAX
005E0B46  0F 84 1F 01 00 00         JZ 0x005e0c6b
005E0B4C  8B 46 31                  MOV EAX,dword ptr [ESI + 0x31]
005E0B4F  85 C0                     TEST EAX,EAX
005E0B51  0F 84 14 01 00 00         JZ 0x005e0c6b
005E0B57  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005E0B5A  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005E0B5D  8D 50 FD                  LEA EDX,[EAX + -0x3]
005E0B60  3B CA                     CMP ECX,EDX
005E0B62  0F 86 80 00 00 00         JBE 0x005e0be8
005E0B68  8B 57 69                  MOV EDX,dword ptr [EDI + 0x69]
005E0B6B  2B 56 24                  SUB EDX,dword ptr [ESI + 0x24]
005E0B6E  3B 56 28                  CMP EDX,dword ptr [ESI + 0x28]
005E0B71  76 75                     JBE 0x005e0be8
005E0B73  3B C8                     CMP ECX,EAX
005E0B75  73 69                     JNC 0x005e0be0
005E0B77  8A 46 38                  MOV AL,byte ptr [ESI + 0x38]
005E0B7A  8A 4E 35                  MOV CL,byte ptr [ESI + 0x35]
005E0B7D  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005E0B80  50                        PUSH EAX
005E0B81  51                        PUSH ECX
005E0B82  52                        PUSH EDX
005E0B83  8B CF                     MOV ECX,EDI
005E0B85  E8 C7 4E E2 FF            CALL 0x00405a51
005E0B8A  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005E0B8D  8B 4E 31                  MOV ECX,dword ptr [ESI + 0x31]
005E0B90  48                        DEC EAX
005E0B91  50                        PUSH EAX
005E0B92  E8 99 3F 13 00            CALL 0x00714b30
005E0B97  8B 4E 31                  MOV ECX,dword ptr [ESI + 0x31]
005E0B9A  6A 00                     PUSH 0x0
005E0B9C  6A 01                     PUSH 0x1
005E0B9E  E8 3D 35 13 00            CALL 0x007140e0
005E0BA3  85 C0                     TEST EAX,EAX
005E0BA5  74 1B                     JZ 0x005e0bc2
005E0BA7  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005E0BAA  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005E0BAD  68 FF 00 00 00            PUSH 0xff
005E0BB2  6A 00                     PUSH 0x0
005E0BB4  50                        PUSH EAX
005E0BB5  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005E0BB8  51                        PUSH ECX
005E0BB9  52                        PUSH EDX
005E0BBA  6A 00                     PUSH 0x0
005E0BBC  50                        PUSH EAX
005E0BBD  E8 7E 48 0D 00            CALL 0x006b5440
LAB_005e0bc2:
005E0BC2  8B 0E                     MOV ECX,dword ptr [ESI]
005E0BC4  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E0BCA  51                        PUSH ECX
005E0BCB  52                        PUSH EDX
005E0BCC  E8 FF 29 0D 00            CALL 0x006b35d0
005E0BD1  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005E0BD4  40                        INC EAX
005E0BD5  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
005E0BD8  8B 47 69                  MOV EAX,dword ptr [EDI + 0x69]
005E0BDB  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
005E0BDE  EB 08                     JMP 0x005e0be8
LAB_005e0be0:
005E0BE0  56                        PUSH ESI
005E0BE1  8B CF                     MOV ECX,EDI
005E0BE3  E8 73 49 E2 FF            CALL 0x0040555b
LAB_005e0be8:
005E0BE8  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005E0BEB  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005E0BEE  83 E9 03                  SUB ECX,0x3
005E0BF1  3B C1                     CMP EAX,ECX
005E0BF3  73 76                     JNC 0x005e0c6b
005E0BF5  8A 56 38                  MOV DL,byte ptr [ESI + 0x38]
005E0BF8  8A 46 35                  MOV AL,byte ptr [ESI + 0x35]
005E0BFB  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005E0BFE  52                        PUSH EDX
005E0BFF  50                        PUSH EAX
005E0C00  51                        PUSH ECX
005E0C01  8B CF                     MOV ECX,EDI
005E0C03  E8 49 4E E2 FF            CALL 0x00405a51
005E0C08  8B 4E 31                  MOV ECX,dword ptr [ESI + 0x31]
005E0C0B  6A 00                     PUSH 0x0
005E0C0D  6A 01                     PUSH 0x1
005E0C0F  E8 CC 34 13 00            CALL 0x007140e0
005E0C14  85 C0                     TEST EAX,EAX
005E0C16  74 1B                     JZ 0x005e0c33
005E0C18  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005E0C1B  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005E0C1E  68 FF 00 00 00            PUSH 0xff
005E0C23  6A 00                     PUSH 0x0
005E0C25  50                        PUSH EAX
005E0C26  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005E0C29  52                        PUSH EDX
005E0C2A  50                        PUSH EAX
005E0C2B  6A 00                     PUSH 0x0
005E0C2D  51                        PUSH ECX
005E0C2E  E8 0D 48 0D 00            CALL 0x006b5440
LAB_005e0c33:
005E0C33  8B 16                     MOV EDX,dword ptr [ESI]
005E0C35  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E0C3A  52                        PUSH EDX
005E0C3B  50                        PUSH EAX
005E0C3C  E8 8F 29 0D 00            CALL 0x006b35d0
005E0C41  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
005E0C44  8A 4E 30                  MOV CL,byte ptr [ESI + 0x30]
005E0C47  42                        INC EDX
005E0C48  84 C9                     TEST CL,CL
005E0C4A  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
005E0C4D  8B C2                     MOV EAX,EDX
005E0C4F  74 1A                     JZ 0x005e0c6b
005E0C51  33 D2                     XOR EDX,EDX
005E0C53  B9 03 00 00 00            MOV ECX,0x3
005E0C58  F7 F1                     DIV ECX
005E0C5A  85 D2                     TEST EDX,EDX
005E0C5C  74 0D                     JZ 0x005e0c6b
005E0C5E  6A FF                     PUSH -0x1
005E0C60  6A 01                     PUSH 0x1
005E0C62  6A 1E                     PUSH 0x1e
005E0C64  8B CF                     MOV ECX,EDI
005E0C66  E8 86 3F E2 FF            CALL 0x00404bf1
LAB_005e0c6b:
005E0C6B  8B 87 47 06 00 00         MOV EAX,dword ptr [EDI + 0x647]
005E0C71  43                        INC EBX
005E0C72  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E0C75  3B D9                     CMP EBX,ECX
005E0C77  0F 82 AC FE FF FF         JC 0x005e0b29
LAB_005e0c7d:
005E0C7D  8B 8F 4F 06 00 00         MOV ECX,dword ptr [EDI + 0x64f]
005E0C83  85 C9                     TEST ECX,ECX
005E0C85  74 68                     JZ 0x005e0cef
005E0C87  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005E0C8A  33 F6                     XOR ESI,ESI
005E0C8C  85 C0                     TEST EAX,EAX
005E0C8E  76 5F                     JBE 0x005e0cef
005E0C90  3B F0                     CMP ESI,EAX
005E0C92  73 0D                     JNC 0x005e0ca1
LAB_005e0c94:
005E0C94  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005E0C97  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005E0C9A  0F AF C6                  IMUL EAX,ESI
005E0C9D  03 C2                     ADD EAX,EDX
005E0C9F  EB 02                     JMP 0x005e0ca3
LAB_005e0ca1:
005E0CA1  33 C0                     XOR EAX,EAX
LAB_005e0ca3:
005E0CA3  8B 10                     MOV EDX,dword ptr [EAX]
005E0CA5  85 D2                     TEST EDX,EDX
005E0CA7  7C 38                     JL 0x005e0ce1
005E0CA9  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
005E0CAC  85 C9                     TEST ECX,ECX
005E0CAE  76 31                     JBE 0x005e0ce1
005E0CB0  8B 5F 69                  MOV EBX,dword ptr [EDI + 0x69]
005E0CB3  2B 58 24                  SUB EBX,dword ptr [EAX + 0x24]
005E0CB6  3B 58 28                  CMP EBX,dword ptr [EAX + 0x28]
005E0CB9  76 26                     JBE 0x005e0ce1
005E0CBB  41                        INC ECX
005E0CBC  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
005E0CBF  8B 5F 69                  MOV EBX,dword ptr [EDI + 0x69]
005E0CC2  83 F9 03                  CMP ECX,0x3
005E0CC5  89 58 24                  MOV dword ptr [EAX + 0x24],EBX
005E0CC8  73 0F                     JNC 0x005e0cd9
005E0CCA  52                        PUSH EDX
005E0CCB  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E0CD1  52                        PUSH EDX
005E0CD2  E8 F9 28 0D 00            CALL 0x006b35d0
005E0CD7  EB 08                     JMP 0x005e0ce1
LAB_005e0cd9:
005E0CD9  50                        PUSH EAX
005E0CDA  8B CF                     MOV ECX,EDI
005E0CDC  E8 7A 48 E2 FF            CALL 0x0040555b
LAB_005e0ce1:
005E0CE1  8B 8F 4F 06 00 00         MOV ECX,dword ptr [EDI + 0x64f]
005E0CE7  46                        INC ESI
005E0CE8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005E0CEB  3B F0                     CMP ESI,EAX
005E0CED  72 A5                     JC 0x005e0c94
LAB_005e0cef:
005E0CEF  8B 87 4B 06 00 00         MOV EAX,dword ptr [EDI + 0x64b]
005E0CF5  85 C0                     TEST EAX,EAX
005E0CF7  0F 84 FD 01 00 00         JZ 0x005e0efa
005E0CFD  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E0D00  33 DB                     XOR EBX,EBX
005E0D02  85 C9                     TEST ECX,ECX
005E0D04  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005E0D07  0F 86 ED 01 00 00         JBE 0x005e0efa
005E0D0D  3B D9                     CMP EBX,ECX
005E0D0F  73 0D                     JNC 0x005e0d1e
LAB_005e0d11:
005E0D11  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005E0D14  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E0D17  0F AF F3                  IMUL ESI,EBX
005E0D1A  03 F1                     ADD ESI,ECX
005E0D1C  EB 02                     JMP 0x005e0d20
LAB_005e0d1e:
005E0D1E  33 F6                     XOR ESI,ESI
LAB_005e0d20:
005E0D20  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005E0D23  83 FA FF                  CMP EDX,-0x1
005E0D26  0F 84 B9 01 00 00         JZ 0x005e0ee5
005E0D2C  33 C0                     XOR EAX,EAX
005E0D2E  8A 86 91 00 00 00         MOV AL,byte ptr [ESI + 0x91]
005E0D34  48                        DEC EAX
005E0D35  83 F8 03                  CMP EAX,0x3
005E0D38  0F 87 A7 01 00 00         JA 0x005e0ee5
switchD_005e0d3e::switchD:
005E0D3E  FF 24 85 58 0F 5E 00      JMP dword ptr [EAX*0x4 + 0x5e0f58]
switchD_005e0d3e::caseD_1:
005E0D45  8B 47 69                  MOV EAX,dword ptr [EDI + 0x69]
005E0D48  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
005E0D4B  2B C1                     SUB EAX,ECX
005E0D4D  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
005E0D50  3B C1                     CMP EAX,ECX
005E0D52  0F 82 8D 01 00 00         JC 0x005e0ee5
005E0D58  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E0D5B  40                        INC EAX
005E0D5C  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
005E0D5F  8B 4F 69                  MOV ECX,dword ptr [EDI + 0x69]
005E0D62  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
005E0D65  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E0D68  3B C1                     CMP EAX,ECX
005E0D6A  75 0C                     JNZ 0x005e0d78
005E0D6C  8B CE                     MOV ECX,ESI
005E0D6E  E8 3D 4D 13 00            CALL 0x00715ab0
005E0D73  E9 6D 01 00 00            JMP 0x005e0ee5
LAB_005e0d78:
005E0D78  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
005E0D7B  51                        PUSH ECX
005E0D7C  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005E0D7F  51                        PUSH ECX
005E0D80  50                        PUSH EAX
005E0D81  52                        PUSH EDX
005E0D82  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
005E0D85  52                        PUSH EDX
005E0D86  E8 A5 29 0D 00            CALL 0x006b3730
005E0D8B  E9 55 01 00 00            JMP 0x005e0ee5
switchD_005e0d3e::caseD_2:
005E0D90  8B 47 69                  MOV EAX,dword ptr [EDI + 0x69]
005E0D93  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
005E0D96  2B C1                     SUB EAX,ECX
005E0D98  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
005E0D9B  3B C1                     CMP EAX,ECX
005E0D9D  0F 82 42 01 00 00         JC 0x005e0ee5
005E0DA3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E0DA6  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E0DA9  40                        INC EAX
005E0DAA  3B C1                     CMP EAX,ECX
005E0DAC  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
005E0DAF  75 07                     JNZ 0x005e0db8
005E0DB1  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
LAB_005e0db8:
005E0DB8  8B 4F 69                  MOV ECX,dword ptr [EDI + 0x69]
005E0DBB  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
005E0DBE  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
005E0DC1  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005E0DC4  50                        PUSH EAX
005E0DC5  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E0DC8  51                        PUSH ECX
005E0DC9  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
005E0DCC  50                        PUSH EAX
005E0DCD  52                        PUSH EDX
005E0DCE  51                        PUSH ECX
005E0DCF  E8 5C 29 0D 00            CALL 0x006b3730
005E0DD4  E9 0C 01 00 00            JMP 0x005e0ee5
switchD_005e0d3e::caseD_3:
005E0DD9  8B 8E 92 00 00 00         MOV ECX,dword ptr [ESI + 0x92]
005E0DDF  8B 86 96 00 00 00         MOV EAX,dword ptr [ESI + 0x96]
005E0DE5  3B C8                     CMP ECX,EAX
005E0DE7  75 26                     JNZ 0x005e0e0f
005E0DE9  8B CE                     MOV ECX,ESI
005E0DEB  E8 C0 4C 13 00            CALL 0x00715ab0
005E0DF0  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
005E0DF6  8D 86 9A 00 00 00         LEA EAX,[ESI + 0x9a]
005E0DFC  85 C9                     TEST ECX,ECX
005E0DFE  0F 84 E1 00 00 00         JZ 0x005e0ee5
005E0E04  50                        PUSH EAX
005E0E05  E8 56 A2 0C 00            CALL 0x006ab060
005E0E0A  E9 D6 00 00 00            JMP 0x005e0ee5
LAB_005e0e0f:
005E0E0F  8B 86 9A 00 00 00         MOV EAX,dword ptr [ESI + 0x9a]
005E0E15  8B 1C C8                  MOV EBX,dword ptr [EAX + ECX*0x8]
005E0E18  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
005E0E1B  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
005E0E1E  8B 5E 44                  MOV EBX,dword ptr [ESI + 0x44]
005E0E21  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005E0E24  41                        INC ECX
005E0E25  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
005E0E28  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
005E0E2B  89 8E 92 00 00 00         MOV dword ptr [ESI + 0x92],ECX
005E0E31  8B 4F 69                  MOV ECX,dword ptr [EDI + 0x69]
005E0E34  2B CB                     SUB ECX,EBX
005E0E36  3B C8                     CMP ECX,EAX
005E0E38  72 1D                     JC 0x005e0e57
005E0E3A  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
005E0E3D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E0E40  43                        INC EBX
005E0E41  8B C3                     MOV EAX,EBX
005E0E43  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
005E0E46  3B C1                     CMP EAX,ECX
005E0E48  75 07                     JNZ 0x005e0e51
005E0E4A  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
LAB_005e0e51:
005E0E51  8B 47 69                  MOV EAX,dword ptr [EDI + 0x69]
005E0E54  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
LAB_005e0e57:
005E0E57  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
005E0E5A  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005E0E5D  51                        PUSH ECX
005E0E5E  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005E0E61  50                        PUSH EAX
005E0E62  51                        PUSH ECX
005E0E63  52                        PUSH EDX
005E0E64  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
005E0E67  52                        PUSH EDX
005E0E68  EB 73                     JMP 0x005e0edd
switchD_005e0d3e::caseD_4:
005E0E6A  8B 86 92 00 00 00         MOV EAX,dword ptr [ESI + 0x92]
005E0E70  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
005E0E76  8B 1C C1                  MOV EBX,dword ptr [ECX + EAX*0x8]
005E0E79  8D 0C C1                  LEA ECX,[ECX + EAX*0x8]
005E0E7C  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
005E0E7F  40                        INC EAX
005E0E80  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
005E0E83  89 86 92 00 00 00         MOV dword ptr [ESI + 0x92],EAX
005E0E89  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
005E0E8C  8B 8E 96 00 00 00         MOV ECX,dword ptr [ESI + 0x96]
005E0E92  3B C1                     CMP EAX,ECX
005E0E94  75 0A                     JNZ 0x005e0ea0
005E0E96  C7 86 92 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x92],0x0
LAB_005e0ea0:
005E0EA0  8B 47 69                  MOV EAX,dword ptr [EDI + 0x69]
005E0EA3  8B 5E 44                  MOV EBX,dword ptr [ESI + 0x44]
005E0EA6  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
005E0EA9  2B C3                     SUB EAX,EBX
005E0EAB  3B C1                     CMP EAX,ECX
005E0EAD  72 1D                     JC 0x005e0ecc
005E0EAF  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
005E0EB2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E0EB5  43                        INC EBX
005E0EB6  8B C3                     MOV EAX,EBX
005E0EB8  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
005E0EBB  3B C1                     CMP EAX,ECX
005E0EBD  75 07                     JNZ 0x005e0ec6
005E0EBF  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
LAB_005e0ec6:
005E0EC6  8B 4F 69                  MOV ECX,dword ptr [EDI + 0x69]
005E0EC9  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
LAB_005e0ecc:
005E0ECC  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
005E0ECF  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005E0ED2  50                        PUSH EAX
005E0ED3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E0ED6  51                        PUSH ECX
005E0ED7  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
005E0EDA  50                        PUSH EAX
005E0EDB  52                        PUSH EDX
005E0EDC  51                        PUSH ECX
LAB_005e0edd:
005E0EDD  E8 4E 28 0D 00            CALL 0x006b3730
005E0EE2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
switchD_005e0d3e::default:
005E0EE5  8B 87 4B 06 00 00         MOV EAX,dword ptr [EDI + 0x64b]
005E0EEB  43                        INC EBX
005E0EEC  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005E0EEF  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E0EF2  3B D9                     CMP EBX,ECX
005E0EF4  0F 82 17 FE FF FF         JC 0x005e0d11
LAB_005e0efa:
005E0EFA  8B 47 69                  MOV EAX,dword ptr [EDI + 0x69]
005E0EFD  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005E0F00  40                        INC EAX
005E0F01  89 47 69                  MOV dword ptr [EDI + 0x69],EAX
005E0F04  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E0F0A  5F                        POP EDI
005E0F0B  5E                        POP ESI
005E0F0C  5B                        POP EBX
005E0F0D  8B E5                     MOV ESP,EBP
005E0F0F  5D                        POP EBP
005E0F10  C3                        RET
LAB_005e0f11:
005E0F11  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005E0F14  68 A0 DA 7C 00            PUSH 0x7cdaa0
005E0F19  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E0F1E  56                        PUSH ESI
005E0F1F  6A 00                     PUSH 0x0
005E0F21  68 9C 01 00 00            PUSH 0x19c
005E0F26  68 94 D9 7C 00            PUSH 0x7cd994
005E0F2B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E0F30  E8 9B C5 0C 00            CALL 0x006ad4d0
005E0F35  83 C4 18                  ADD ESP,0x18
005E0F38  85 C0                     TEST EAX,EAX
005E0F3A  74 01                     JZ 0x005e0f3d
005E0F3C  CC                        INT3
LAB_005e0f3d:
005E0F3D  68 9C 01 00 00            PUSH 0x19c
005E0F42  68 94 D9 7C 00            PUSH 0x7cd994
005E0F47  6A 00                     PUSH 0x0
005E0F49  56                        PUSH ESI
005E0F4A  E8 F1 4E 0C 00            CALL 0x006a5e40
005E0F4F  5F                        POP EDI
005E0F50  5E                        POP ESI
005E0F51  5B                        POP EBX
005E0F52  8B E5                     MOV ESP,EBP
005E0F54  5D                        POP EBP
005E0F55  C3                        RET
