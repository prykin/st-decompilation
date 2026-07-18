FUN_006c4ac0:
006C4AC0  55                        PUSH EBP
006C4AC1  8B EC                     MOV EBP,ESP
006C4AC3  6A FF                     PUSH -0x1
006C4AC5  68 90 D9 79 00            PUSH 0x79d990
006C4ACA  68 64 D9 72 00            PUSH 0x72d964
006C4ACF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006C4AD5  50                        PUSH EAX
006C4AD6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006C4ADD  83 EC 50                  SUB ESP,0x50
006C4AE0  53                        PUSH EBX
006C4AE1  56                        PUSH ESI
006C4AE2  57                        PUSH EDI
006C4AE3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C4AE6  33 DB                     XOR EBX,EBX
006C4AE8  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006C4AEB  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
006C4AEE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4AF1  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006C4AF4  3B C3                     CMP EAX,EBX
006C4AF6  74 7A                     JZ 0x006c4b72
006C4AF8  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006C4AFB  81 E1 00 11 00 00         AND ECX,0x1100
006C4B01  81 F9 00 01 00 00         CMP ECX,0x100
006C4B07  75 15                     JNZ 0x006c4b1e
006C4B09  33 C0                     XOR EAX,EAX
006C4B0B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C4B0E  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C4B15  5F                        POP EDI
006C4B16  5E                        POP ESI
006C4B17  5B                        POP EBX
006C4B18  8B E5                     MOV ESP,EBP
006C4B1A  5D                        POP EBP
006C4B1B  C2 04 00                  RET 0x4
LAB_006c4b1e:
006C4B1E  50                        PUSH EAX
006C4B1F  E8 8C 6D FF FF            CALL 0x006bb8b0
006C4B24  8B F8                     MOV EDI,EAX
006C4B26  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006C4B29  3B FB                     CMP EDI,EBX
006C4B2B  74 29                     JZ 0x006c4b56
006C4B2D  6A 1E                     PUSH 0x1e
006C4B2F  68 40 DF 7E 00            PUSH 0x7edf40
006C4B34  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C4B3A  52                        PUSH EDX
006C4B3B  57                        PUSH EDI
006C4B3C  E8 FF 12 FE FF            CALL 0x006a5e40
006C4B41  8B C7                     MOV EAX,EDI
006C4B43  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C4B46  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C4B4D  5F                        POP EDI
006C4B4E  5E                        POP ESI
006C4B4F  5B                        POP EBX
006C4B50  8B E5                     MOV ESP,EBP
006C4B52  5D                        POP EBP
006C4B53  C2 04 00                  RET 0x4
LAB_006c4b56:
006C4B56  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006C4B59  8B 81 74 04 00 00         MOV EAX,dword ptr [ECX + 0x474]
006C4B5F  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
006C4B62  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
006C4B65  F7 D8                     NEG EAX
006C4B67  8B 89 78 04 00 00         MOV ECX,dword ptr [ECX + 0x478]
006C4B6D  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006C4B70  EB 0C                     JMP 0x006c4b7e
LAB_006c4b72:
006C4B72  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006C4B75  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006C4B78  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006C4B7B  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
LAB_006c4b7e:
006C4B7E  3B C3                     CMP EAX,EBX
006C4B80  7D 11                     JGE 0x006c4b93
006C4B82  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C4B85  0F AF 45 D0               IMUL EAX,dword ptr [EBP + -0x30]
006C4B89  03 46 38                  ADD EAX,dword ptr [ESI + 0x38]
006C4B8C  03 06                     ADD EAX,dword ptr [ESI]
006C4B8E  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006C4B91  EB 17                     JMP 0x006c4baa
LAB_006c4b93:
006C4B93  2B 46 04                  SUB EAX,dword ptr [ESI + 0x4]
006C4B96  48                        DEC EAX
006C4B97  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006C4B9A  0F AF C1                  IMUL EAX,ECX
006C4B9D  03 46 38                  ADD EAX,dword ptr [ESI + 0x38]
006C4BA0  03 06                     ADD EAX,dword ptr [ESI]
006C4BA2  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006C4BA5  F7 D9                     NEG ECX
006C4BA7  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_006c4baa:
006C4BAA  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006C4BAD  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006C4BB0  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006C4BB3  B8 FA F1 00 00            MOV EAX,0xf1fa
LAB_006c4bb8:
006C4BB8  66 39 41 04               CMP word ptr [ECX + 0x4],AX
006C4BBC  0F 85 8A 03 00 00         JNZ 0x006c4f4c
006C4BC2  33 C0                     XOR EAX,EAX
006C4BC4  66 8B 41 06               MOV AX,word ptr [ECX + 0x6]
006C4BC8  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006C4BCB  8D 79 10                  LEA EDI,[ECX + 0x10]
006C4BCE  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006C4BD1  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
LAB_006c4bd4:
006C4BD4  39 45 DC                  CMP dword ptr [EBP + -0x24],EAX
006C4BD7  0F 8D 84 03 00 00         JGE 0x006c4f61
006C4BDD  33 C0                     XOR EAX,EAX
006C4BDF  66 8B 47 04               MOV AX,word ptr [EDI + 0x4]
006C4BE3  83 C0 F9                  ADD EAX,-0x7
006C4BE6  83 F8 08                  CMP EAX,0x8
006C4BE9  0F 87 4D 03 00 00         JA 0x006c4f3c
switchD_006c4bef::switchD:
006C4BEF  FF 24 85 D0 4F 6C 00      JMP dword ptr [EAX*0x4 + 0x6c4fd0]
switchD_006c4bef::caseD_d:
006C4BF6  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006C4BF9  85 C0                     TEST EAX,EAX
006C4BFB  6A 00                     PUSH 0x0
006C4BFD  74 21                     JZ 0x006c4c20
006C4BFF  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006C4C02  51                        PUSH ECX
006C4C03  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006C4C06  52                        PUSH EDX
006C4C07  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C4C0A  51                        PUSH ECX
006C4C0B  8B 16                     MOV EDX,dword ptr [ESI]
006C4C0D  52                        PUSH EDX
006C4C0E  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006C4C11  51                        PUSH ECX
006C4C12  83 C0 4C                  ADD EAX,0x4c
006C4C15  50                        PUSH EAX
006C4C16  E8 55 F5 FE FF            CALL 0x006b4170
006C4C1B  E9 1C 03 00 00            JMP 0x006c4f3c
LAB_006c4c20:
006C4C20  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006C4C23  52                        PUSH EDX
006C4C24  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C4C27  50                        PUSH EAX
006C4C28  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C4C2B  51                        PUSH ECX
006C4C2C  8B 16                     MOV EDX,dword ptr [ESI]
006C4C2E  52                        PUSH EDX
006C4C2F  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006C4C32  50                        PUSH EAX
006C4C33  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006C4C36  51                        PUSH ECX
006C4C37  E8 34 F5 FE FF            CALL 0x006b4170
006C4C3C  E9 FB 02 00 00            JMP 0x006c4f3c
switchD_006c4bef::caseD_f:
006C4C41  8D 57 06                  LEA EDX,[EDI + 0x6]
006C4C44  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4C47  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006C4C4A  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006c4c4d:
006C4C4D  FF 4D D8                  DEC dword ptr [EBP + -0x28]
006C4C50  0F 88 E6 02 00 00         JS 0x006c4f3c
006C4C56  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
006C4C59  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
006C4C5C  33 C9                     XOR ECX,ECX
006C4C5E  8A 0A                     MOV CL,byte ptr [EDX]
006C4C60  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006C4C63  42                        INC EDX
006C4C64  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
LAB_006c4c67:
006C4C67  FF 4D C4                  DEC dword ptr [EBP + -0x3c]
006C4C6A  78 6C                     JS 0x006c4cd8
006C4C6C  8A 02                     MOV AL,byte ptr [EDX]
006C4C6E  88 45 B4                  MOV byte ptr [EBP + -0x4c],AL
006C4C71  42                        INC EDX
006C4C72  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4C75  84 C0                     TEST AL,AL
006C4C77  0F BE C8                  MOVSX ECX,AL
006C4C7A  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
006C4C7D  7E 33                     JLE 0x006c4cb2
006C4C7F  33 C0                     XOR EAX,EAX
006C4C81  8A 02                     MOV AL,byte ptr [EDX]
006C4C83  8B FB                     MOV EDI,EBX
006C4C85  8B F1                     MOV ESI,ECX
006C4C87  8A D8                     MOV BL,AL
006C4C89  8A FB                     MOV BH,BL
006C4C8B  8B C3                     MOV EAX,EBX
006C4C8D  C1 E0 10                  SHL EAX,0x10
006C4C90  66 8B C3                  MOV AX,BX
006C4C93  C1 E9 02                  SHR ECX,0x2
006C4C96  F3 AB                     STOSD.REP ES:EDI
006C4C98  8B CE                     MOV ECX,ESI
006C4C9A  83 E1 03                  AND ECX,0x3
006C4C9D  F3 AA                     STOSB.REP ES:EDI
006C4C9F  8B 5D A4                  MOV EBX,dword ptr [EBP + -0x5c]
006C4CA2  8B CE                     MOV ECX,ESI
006C4CA4  03 D9                     ADD EBX,ECX
006C4CA6  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
006C4CA9  42                        INC EDX
006C4CAA  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4CAD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4CB0  EB B5                     JMP 0x006c4c67
LAB_006c4cb2:
006C4CB2  F7 D9                     NEG ECX
006C4CB4  8B F2                     MOV ESI,EDX
006C4CB6  8B FB                     MOV EDI,EBX
006C4CB8  8B C1                     MOV EAX,ECX
006C4CBA  C1 E9 02                  SHR ECX,0x2
006C4CBD  F3 A5                     MOVSD.REP ES:EDI,ESI
006C4CBF  8B C8                     MOV ECX,EAX
006C4CC1  83 E1 03                  AND ECX,0x3
006C4CC4  F3 A4                     MOVSB.REP ES:EDI,ESI
006C4CC6  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006C4CC9  2B D8                     SUB EBX,EAX
006C4CCB  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
006C4CCE  2B D0                     SUB EDX,EAX
006C4CD0  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4CD3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4CD6  EB 8F                     JMP 0x006c4c67
LAB_006c4cd8:
006C4CD8  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006C4CDB  01 4D CC                  ADD dword ptr [EBP + -0x34],ECX
006C4CDE  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006C4CE1  E9 67 FF FF FF            JMP 0x006c4c4d
switchD_006c4bef::caseD_c:
006C4CE6  8D 57 06                  LEA EDX,[EDI + 0x6]
006C4CE9  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4CEC  33 C0                     XOR EAX,EAX
006C4CEE  66 8B 02                  MOV AX,word ptr [EDX]
006C4CF1  0F AF 45 D0               IMUL EAX,dword ptr [EBP + -0x30]
006C4CF5  01 45 CC                  ADD dword ptr [EBP + -0x34],EAX
006C4CF8  83 C2 02                  ADD EDX,0x2
006C4CFB  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4CFE  33 C0                     XOR EAX,EAX
006C4D00  66 8B 02                  MOV AX,word ptr [EDX]
006C4D03  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006C4D06  83 C2 02                  ADD EDX,0x2
006C4D09  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
LAB_006c4d0c:
006C4D0C  FF 4D D8                  DEC dword ptr [EBP + -0x28]
006C4D0F  0F 88 27 02 00 00         JS 0x006c4f3c
006C4D15  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
006C4D18  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
006C4D1B  33 C9                     XOR ECX,ECX
006C4D1D  8A 0A                     MOV CL,byte ptr [EDX]
006C4D1F  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006C4D22  42                        INC EDX
006C4D23  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
LAB_006c4d26:
006C4D26  FF 4D C4                  DEC dword ptr [EBP + -0x3c]
006C4D29  78 79                     JS 0x006c4da4
006C4D2B  33 C0                     XOR EAX,EAX
006C4D2D  8A 02                     MOV AL,byte ptr [EDX]
006C4D2F  03 D8                     ADD EBX,EAX
006C4D31  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
006C4D34  42                        INC EDX
006C4D35  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4D38  8A 02                     MOV AL,byte ptr [EDX]
006C4D3A  88 45 B4                  MOV byte ptr [EBP + -0x4c],AL
006C4D3D  42                        INC EDX
006C4D3E  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4D41  84 C0                     TEST AL,AL
006C4D43  0F BE C8                  MOVSX ECX,AL
006C4D46  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
006C4D49  7E 33                     JLE 0x006c4d7e
006C4D4B  33 C0                     XOR EAX,EAX
006C4D4D  8A 02                     MOV AL,byte ptr [EDX]
006C4D4F  8B FB                     MOV EDI,EBX
006C4D51  8B F1                     MOV ESI,ECX
006C4D53  8A D8                     MOV BL,AL
006C4D55  8A FB                     MOV BH,BL
006C4D57  8B C3                     MOV EAX,EBX
006C4D59  C1 E0 10                  SHL EAX,0x10
006C4D5C  66 8B C3                  MOV AX,BX
006C4D5F  C1 E9 02                  SHR ECX,0x2
006C4D62  F3 AB                     STOSD.REP ES:EDI
006C4D64  8B CE                     MOV ECX,ESI
006C4D66  83 E1 03                  AND ECX,0x3
006C4D69  F3 AA                     STOSB.REP ES:EDI
006C4D6B  8B 5D A4                  MOV EBX,dword ptr [EBP + -0x5c]
006C4D6E  8B CE                     MOV ECX,ESI
006C4D70  03 D9                     ADD EBX,ECX
006C4D72  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
006C4D75  42                        INC EDX
006C4D76  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4D79  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4D7C  EB A8                     JMP 0x006c4d26
LAB_006c4d7e:
006C4D7E  F7 D9                     NEG ECX
006C4D80  8B F2                     MOV ESI,EDX
006C4D82  8B FB                     MOV EDI,EBX
006C4D84  8B C1                     MOV EAX,ECX
006C4D86  C1 E9 02                  SHR ECX,0x2
006C4D89  F3 A5                     MOVSD.REP ES:EDI,ESI
006C4D8B  8B C8                     MOV ECX,EAX
006C4D8D  83 E1 03                  AND ECX,0x3
006C4D90  F3 A4                     MOVSB.REP ES:EDI,ESI
006C4D92  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006C4D95  2B D8                     SUB EBX,EAX
006C4D97  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
006C4D9A  2B D0                     SUB EDX,EAX
006C4D9C  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C4D9F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4DA2  EB 82                     JMP 0x006c4d26
LAB_006c4da4:
006C4DA4  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006C4DA7  01 4D CC                  ADD dword ptr [EBP + -0x34],ECX
006C4DAA  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006C4DAD  E9 5A FF FF FF            JMP 0x006c4d0c
switchD_006c4bef::caseD_7:
006C4DB2  8D 5F 06                  LEA EBX,[EDI + 0x6]
006C4DB5  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
006C4DB8  8B C7                     MOV EAX,EDI
006C4DBA  03 07                     ADD EAX,dword ptr [EDI]
006C4DBC  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006C4DBF  33 C0                     XOR EAX,EAX
006C4DC1  66 8B 03                  MOV AX,word ptr [EBX]
006C4DC4  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006c4dc7:
006C4DC7  83 C3 02                  ADD EBX,0x2
006C4DCA  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
LAB_006c4dcd:
006C4DCD  FF 4D D8                  DEC dword ptr [EBP + -0x28]
006C4DD0  0F 88 63 01 00 00         JS 0x006c4f39
006C4DD6  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
006C4DD9  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
006C4DDC  66 8B 03                  MOV AX,word ptr [EBX]
006C4DDF  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C4DE2  66 85 C0                  TEST AX,AX
006C4DE5  7D 1C                     JGE 0x006c4e03
006C4DE7  8B D0                     MOV EDX,EAX
006C4DE9  81 E2 00 40 00 00         AND EDX,0x4000
006C4DEF  66 85 D2                  TEST DX,DX
006C4DF2  75 0F                     JNZ 0x006c4e03
006C4DF4  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006C4DF7  8B D7                     MOV EDX,EDI
006C4DF9  88 44 11 FF               MOV byte ptr [ECX + EDX*0x1 + -0x1],AL
006C4DFD  83 C3 02                  ADD EBX,0x2
006C4E00  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
LAB_006c4e03:
006C4E03  66 8B 03                  MOV AX,word ptr [EBX]
006C4E06  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C4E09  83 C3 02                  ADD EBX,0x2
006C4E0C  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
006C4E0F  66 85 C0                  TEST AX,AX
006C4E12  7D 5F                     JGE 0x006c4e73
006C4E14  8B C8                     MOV ECX,EAX
006C4E16  81 E1 00 40 00 00         AND ECX,0x4000
006C4E1C  66 85 C9                  TEST CX,CX
006C4E1F  74 39                     JZ 0x006c4e5a
006C4E21  FF 45 D8                  INC dword ptr [EBP + -0x28]
006C4E24  0F BF D0                  MOVSX EDX,AX
006C4E27  0F AF 55 D0               IMUL EDX,dword ptr [EBP + -0x30]
006C4E2B  29 55 CC                  SUB dword ptr [EBP + -0x34],EDX
006C4E2E  3B 5D BC                  CMP EBX,dword ptr [EBP + -0x44]
006C4E31  73 9A                     JNC 0x006c4dcd
006C4E33  66 8B 03                  MOV AX,word ptr [EBX]
006C4E36  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C4E39  66 85 C0                  TEST AX,AX
006C4E3C  7D 8F                     JGE 0x006c4dcd
006C4E3E  8B C8                     MOV ECX,EAX
006C4E40  81 E1 00 40 00 00         AND ECX,0x4000
006C4E46  66 85 C9                  TEST CX,CX
006C4E49  75 82                     JNZ 0x006c4dcd
006C4E4B  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006C4E4E  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006C4E51  88 44 0A FF               MOV byte ptr [EDX + ECX*0x1 + -0x1],AL
006C4E55  E9 6D FF FF FF            JMP 0x006c4dc7
LAB_006c4e5a:
006C4E5A  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006C4E5D  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006C4E60  88 44 0A FF               MOV byte ptr [EDX + ECX*0x1 + -0x1],AL
006C4E64  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006C4E67  8B C1                     MOV EAX,ECX
006C4E69  03 C2                     ADD EAX,EDX
006C4E6B  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006C4E6E  E9 5A FF FF FF            JMP 0x006c4dcd
LAB_006c4e73:
006C4E73  48                        DEC EAX
006C4E74  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C4E77  66 85 C0                  TEST AX,AX
006C4E7A  0F 8C 81 00 00 00         JL 0x006c4f01
006C4E80  33 C0                     XOR EAX,EAX
006C4E82  66 8B 03                  MOV AX,word ptr [EBX]
006C4E85  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006C4E88  83 C3 02                  ADD EBX,0x2
006C4E8B  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
006C4E8E  8B D0                     MOV EDX,EAX
006C4E90  81 E2 FF 00 00 00         AND EDX,0xff
006C4E96  03 FA                     ADD EDI,EDX
006C4E98  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
006C4E9B  C1 E8 08                  SHR EAX,0x8
006C4E9E  88 45 B4                  MOV byte ptr [EBP + -0x4c],AL
006C4EA1  84 C0                     TEST AL,AL
006C4EA3  7D 2A                     JGE 0x006c4ecf
006C4EA5  0F BE F0                  MOVSX ESI,AL
006C4EA8  66 8B 03                  MOV AX,word ptr [EBX]
006C4EAB  50                        PUSH EAX
006C4EAC  8B CE                     MOV ECX,ESI
006C4EAE  F7 D9                     NEG ECX
006C4EB0  51                        PUSH ECX
006C4EB1  57                        PUSH EDI
006C4EB2  E8 09 98 00 00            CALL 0x006ce6c0
006C4EB7  F7 DE                     NEG ESI
006C4EB9  8D 14 77                  LEA EDX,[EDI + ESI*0x2]
006C4EBC  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
006C4EBF  83 C3 02                  ADD EBX,0x2
006C4EC2  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
006C4EC5  8B FA                     MOV EDI,EDX
006C4EC7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006C4ECA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4ECD  EB A4                     JMP 0x006c4e73
LAB_006c4ecf:
006C4ECF  0F BE C0                  MOVSX EAX,AL
006C4ED2  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
006C4ED5  8B F3                     MOV ESI,EBX
006C4ED7  8B D1                     MOV EDX,ECX
006C4ED9  C1 E9 02                  SHR ECX,0x2
006C4EDC  F3 A5                     MOVSD.REP ES:EDI,ESI
006C4EDE  8B CA                     MOV ECX,EDX
006C4EE0  83 E1 03                  AND ECX,0x3
006C4EE3  F3 A4                     MOVSB.REP ES:EDI,ESI
006C4EE5  03 C0                     ADD EAX,EAX
006C4EE7  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006C4EEA  03 D0                     ADD EDX,EAX
006C4EEC  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
006C4EEF  03 D8                     ADD EBX,EAX
006C4EF1  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
006C4EF4  8B FA                     MOV EDI,EDX
006C4EF6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4EF9  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006C4EFC  E9 72 FF FF FF            JMP 0x006c4e73
LAB_006c4f01:
006C4F01  3B 5D BC                  CMP EBX,dword ptr [EBP + -0x44]
006C4F04  73 28                     JNC 0x006c4f2e
006C4F06  66 8B 03                  MOV AX,word ptr [EBX]
006C4F09  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C4F0C  66 85 C0                  TEST AX,AX
006C4F0F  7D 1D                     JGE 0x006c4f2e
006C4F11  8B C8                     MOV ECX,EAX
006C4F13  81 E1 00 40 00 00         AND ECX,0x4000
006C4F19  66 85 C9                  TEST CX,CX
006C4F1C  75 10                     JNZ 0x006c4f2e
006C4F1E  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006C4F21  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006C4F24  88 44 0A FF               MOV byte ptr [EDX + ECX*0x1 + -0x1],AL
006C4F28  83 C3 02                  ADD EBX,0x2
006C4F2B  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
LAB_006c4f2e:
006C4F2E  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006C4F31  01 55 CC                  ADD dword ptr [EBP + -0x34],EDX
006C4F34  E9 94 FE FF FF            JMP 0x006c4dcd
LAB_006c4f39:
006C4F39  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
switchD_006c4bef::caseD_8:
006C4F3C  FF 45 DC                  INC dword ptr [EBP + -0x24]
006C4F3F  03 3F                     ADD EDI,dword ptr [EDI]
006C4F41  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006C4F44  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006C4F47  E9 88 FC FF FF            JMP 0x006c4bd4
LAB_006c4f4c:
006C4F4C  03 09                     ADD ECX,dword ptr [ECX]
006C4F4E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006C4F51  3B 4E 24                  CMP ECX,dword ptr [ESI + 0x24]
006C4F54  0F 86 5E FC FF FF         JBE 0x006c4bb8
006C4F5A  C7 45 D4 FB FF FF FF      MOV dword ptr [EBP + -0x2c],0xfffffffb
LAB_006c4f61:
006C4F61  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C4F68  EB 1A                     JMP 0x006c4f84
LAB_006c4f84:
006C4F84  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006C4F87  85 C0                     TEST EAX,EAX
006C4F89  74 06                     JZ 0x006c4f91
006C4F8B  50                        PUSH EAX
006C4F8C  E8 EF 69 FF FF            CALL 0x006bb980
LAB_006c4f91:
006C4F91  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006C4F94  85 C9                     TEST ECX,ECX
006C4F96  75 23                     JNZ 0x006c4fbb
006C4F98  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
006C4F9B  47                        INC EDI
006C4F9C  89 7E 18                  MOV dword ptr [ESI + 0x18],EDI
006C4F9F  8B C7                     MOV EAX,EDI
006C4FA1  3B 46 14                  CMP EAX,dword ptr [ESI + 0x14]
006C4FA4  7C 0B                     JL 0x006c4fb1
006C4FA6  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
006C4FA9  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006C4FAC  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006C4FAF  EB 0A                     JMP 0x006c4fbb
LAB_006c4fb1:
006C4FB1  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006C4FB4  8B 10                     MOV EDX,dword ptr [EAX]
006C4FB6  03 D0                     ADD EDX,EAX
006C4FB8  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
LAB_006c4fbb:
006C4FBB  8B C1                     MOV EAX,ECX
006C4FBD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C4FC0  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C4FC7  5F                        POP EDI
006C4FC8  5E                        POP ESI
006C4FC9  5B                        POP EBX
006C4FCA  8B E5                     MOV ESP,EBP
006C4FCC  5D                        POP EBP
006C4FCD  C2 04 00                  RET 0x4
