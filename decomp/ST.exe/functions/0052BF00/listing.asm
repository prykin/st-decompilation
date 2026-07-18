FUN_0052bf00:
0052BF00  55                        PUSH EBP
0052BF01  8B EC                     MOV EBP,ESP
0052BF03  81 EC B8 00 00 00         SUB ESP,0xb8
0052BF09  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052BF0E  53                        PUSH EBX
0052BF0F  56                        PUSH ESI
0052BF10  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0052BF13  33 DB                     XOR EBX,EBX
0052BF15  57                        PUSH EDI
0052BF16  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
0052BF1C  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
0052BF22  53                        PUSH EBX
0052BF23  52                        PUSH EDX
0052BF24  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
0052BF2A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052BF30  E8 BB 18 20 00            CALL 0x0072d7f0
0052BF35  8B F0                     MOV ESI,EAX
0052BF37  83 C4 08                  ADD ESP,0x8
0052BF3A  3B F3                     CMP ESI,EBX
0052BF3C  0F 85 00 0A 00 00         JNZ 0x0052c942
0052BF42  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052BF45  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0052BF48  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0052BF4B  83 F8 60                  CMP EAX,0x60
0052BF4E  0F 87 CE 09 00 00         JA 0x0052c922
0052BF54  33 D2                     XOR EDX,EDX
0052BF56  8A 90 A8 C9 52 00         MOV DL,byte ptr [EAX + 0x52c9a8]
switchD_0052bf5c::switchD:
0052BF5C  FF 24 95 90 C9 52 00      JMP dword ptr [EDX*0x4 + 0x52c990]
switchD_0052bf5c::caseD_2:
0052BF63  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0052BF69  B1 03                     MOV CL,0x3
0052BF6B  33 C0                     XOR EAX,EAX
0052BF6D  3A D1                     CMP DL,CL
0052BF6F  0F 95 C0                  SETNZ AL
0052BF72  83 C0 0B                  ADD EAX,0xb
0052BF75  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0052BF78  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0052BF7B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0052BF7E  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052BF83  2A C1                     SUB AL,CL
0052BF85  F6 D8                     NEG AL
0052BF87  1B C0                     SBB EAX,EAX
0052BF89  24 E5                     AND AL,0xe5
0052BF8B  83 C0 50                  ADD EAX,0x50
0052BF8E  89 46 58                  MOV dword ptr [ESI + 0x58],EAX
0052BF91  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0052BF97  2A D1                     SUB DL,CL
0052BF99  F6 DA                     NEG DL
0052BF9B  1B D2                     SBB EDX,EDX
0052BF9D  83 E2 F9                  AND EDX,0xfffffff9
0052BFA0  83 C2 24                  ADD EDX,0x24
0052BFA3  89 56 40                  MOV dword ptr [ESI + 0x40],EDX
0052BFA6  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052BFAB  3A C1                     CMP AL,CL
0052BFAD  74 0C                     JZ 0x0052bfbb
0052BFAF  A1 30 67 80 00            MOV EAX,[0x00806730]
0052BFB4  05 2B FF FF FF            ADD EAX,0xffffff2b
0052BFB9  EB 0C                     JMP 0x0052bfc7
LAB_0052bfbb:
0052BFBB  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
0052BFC1  8D 82 F9 FE FF FF         LEA EAX,[EDX + 0xfffffef9]
LAB_0052bfc7:
0052BFC7  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0052BFCA  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052BFCF  3A C1                     CMP AL,CL
0052BFD1  74 0C                     JZ 0x0052bfdf
0052BFD3  A1 30 67 80 00            MOV EAX,[0x00806730]
0052BFD8  05 62 FF FF FF            ADD EAX,0xffffff62
0052BFDD  EB 0C                     JMP 0x0052bfeb
LAB_0052bfdf:
0052BFDF  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
0052BFE5  8D 82 6C FF FF FF         LEA EAX,[EDX + 0xffffff6c]
LAB_0052bfeb:
0052BFEB  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0052BFEE  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052BFF3  3A C1                     CMP AL,CL
0052BFF5  74 0A                     JZ 0x0052c001
0052BFF7  A1 30 67 80 00            MOV EAX,[0x00806730]
0052BFFC  83 C0 A3                  ADD EAX,-0x5d
0052BFFF  EB 09                     JMP 0x0052c00a
LAB_0052c001:
0052C001  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
0052C007  8D 42 BC                  LEA EAX,[EDX + -0x44]
LAB_0052c00a:
0052C00A  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0052C00D  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052C012  3A C1                     CMP AL,CL
0052C014  74 0C                     JZ 0x0052c022
0052C016  A1 30 67 80 00            MOV EAX,[0x00806730]
0052C01B  05 AC FE FF FF            ADD EAX,0xfffffeac
0052C020  EB 0C                     JMP 0x0052c02e
LAB_0052c022:
0052C022  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
0052C028  8D 82 A0 FE FF FF         LEA EAX,[EDX + 0xfffffea0]
LAB_0052c02e:
0052C02E  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0052C031  A1 30 67 80 00            MOV EAX,[0x00806730]
0052C036  83 C0 9D                  ADD EAX,-0x63
0052C039  53                        PUSH EBX
0052C03A  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0052C03D  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
0052C043  83 C2 EA                  ADD EDX,-0x16
0052C046  68 1C 21 7C 00            PUSH 0x7c211c
0052C04B  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
0052C04E  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052C053  3A C1                     CMP AL,CL
0052C055  0F 94 C0                  SETZ AL
0052C058  48                        DEC EAX
0052C059  24 C3                     AND AL,0xc3
0052C05B  83 C0 3D                  ADD EAX,0x3d
0052C05E  88 46 69                  MOV byte ptr [ESI + 0x69],AL
0052C061  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052C067  51                        PUSH ECX
0052C068  68 9D 01 00 00            PUSH 0x19d
0052C06D  E8 3E 0E 1E 00            CALL 0x0070ceb0
0052C072  BF 01 00 00 00            MOV EDI,0x1
0052C077  89 46 6A                  MOV dword ptr [ESI + 0x6a],EAX
0052C07A  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
0052C07D  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
0052C080  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
0052C086  53                        PUSH EBX
0052C087  68 2C 21 7C 00            PUSH 0x7c212c
0052C08C  52                        PUSH EDX
0052C08D  68 9D 01 00 00            PUSH 0x19d
0052C092  E8 19 0E 1E 00            CALL 0x0070ceb0
0052C097  83 C4 20                  ADD ESP,0x20
0052C09A  89 46 6E                  MOV dword ptr [ESI + 0x6e],EAX
0052C09D  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
0052C0A0  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
0052C0A3  53                        PUSH EBX
0052C0A4  53                        PUSH EBX
0052C0A5  57                        PUSH EDI
0052C0A6  53                        PUSH EBX
0052C0A7  6A FF                     PUSH -0x1
0052C0A9  53                        PUSH EBX
0052C0AA  68 78 20 7C 00            PUSH 0x7c2078
0052C0AF  E8 C8 96 ED FF            CALL 0x0040577c
0052C0B4  83 C4 08                  ADD ESP,0x8
0052C0B7  50                        PUSH EAX
0052C0B8  A1 94 67 80 00            MOV EAX,[0x00806794]
0052C0BD  6A 0B                     PUSH 0xb
0052C0BF  50                        PUSH EAX
0052C0C0  E8 2B DA 1D 00            CALL 0x00709af0
0052C0C5  89 86 82 00 00 00         MOV dword ptr [ESI + 0x82],EAX
0052C0CB  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0052C0D0  83 C4 20                  ADD ESP,0x20
0052C0D3  8D 48 28                  LEA ECX,[EAX + 0x28]
0052C0D6  57                        PUSH EDI
0052C0D7  51                        PUSH ECX
0052C0D8  50                        PUSH EAX
0052C0D9  E8 02 8F 18 00            CALL 0x006b4fe0
0052C0DE  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0052C0E1  50                        PUSH EAX
0052C0E2  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0052C0E7  33 D2                     XOR EDX,EDX
0052C0E9  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
0052C0ED  52                        PUSH EDX
0052C0EE  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
0052C0F1  51                        PUSH ECX
0052C0F2  52                        PUSH EDX
0052C0F3  E8 C8 8F 18 00            CALL 0x006b50c0
0052C0F8  89 46 72                  MOV dword ptr [ESI + 0x72],EAX
0052C0FB  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052C0FE  3B CB                     CMP ECX,EBX
0052C100  75 1A                     JNZ 0x0052c11c
0052C102  33 C9                     XOR ECX,ECX
0052C104  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
0052C108  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
0052C10C  83 C1 1F                  ADD ECX,0x1f
0052C10F  C1 E9 03                  SHR ECX,0x3
0052C112  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0052C118  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_0052c11c:
0052C11C  33 DB                     XOR EBX,EBX
0052C11E  50                        PUSH EAX
0052C11F  8A 5E 69                  MOV BL,byte ptr [ESI + 0x69]
0052C122  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0052C125  E8 76 8E 18 00            CALL 0x006b4fa0
0052C12A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052C12D  8B F8                     MOV EDI,EAX
0052C12F  8A C3                     MOV AL,BL
0052C131  8A FB                     MOV BH,BL
0052C133  8B C3                     MOV EAX,EBX
0052C135  8B D1                     MOV EDX,ECX
0052C137  C1 E0 10                  SHL EAX,0x10
0052C13A  66 8B C3                  MOV AX,BX
0052C13D  6A 01                     PUSH 0x1
0052C13F  C1 E9 02                  SHR ECX,0x2
0052C142  F3 AB                     STOSD.REP ES:EDI
0052C144  8B CA                     MOV ECX,EDX
0052C146  83 E1 03                  AND ECX,0x3
0052C149  F3 AA                     STOSB.REP ES:EDI
0052C14B  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0052C150  8D 48 28                  LEA ECX,[EAX + 0x28]
0052C153  51                        PUSH ECX
0052C154  50                        PUSH EAX
0052C155  E8 86 8E 18 00            CALL 0x006b4fe0
0052C15A  8B 4E 4C                  MOV ECX,dword ptr [ESI + 0x4c]
0052C15D  50                        PUSH EAX
0052C15E  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0052C163  33 D2                     XOR EDX,EDX
0052C165  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
0052C169  52                        PUSH EDX
0052C16A  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
0052C16D  51                        PUSH ECX
0052C16E  52                        PUSH EDX
0052C16F  E8 4C 8F 18 00            CALL 0x006b50c0
0052C174  89 46 76                  MOV dword ptr [ESI + 0x76],EAX
0052C177  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052C17A  85 C9                     TEST ECX,ECX
0052C17C  75 18                     JNZ 0x0052c196
0052C17E  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
0052C182  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
0052C186  83 C1 1F                  ADD ECX,0x1f
0052C189  C1 E9 03                  SHR ECX,0x3
0052C18C  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0052C192  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_0052c196:
0052C196  33 DB                     XOR EBX,EBX
0052C198  50                        PUSH EAX
0052C199  8A 5E 69                  MOV BL,byte ptr [ESI + 0x69]
0052C19C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0052C19F  E8 FC 8D 18 00            CALL 0x006b4fa0
0052C1A4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052C1A7  8B F8                     MOV EDI,EAX
0052C1A9  8A C3                     MOV AL,BL
0052C1AB  8A FB                     MOV BH,BL
0052C1AD  8B C3                     MOV EAX,EBX
0052C1AF  8B D1                     MOV EDX,ECX
0052C1B1  C1 E0 10                  SHL EAX,0x10
0052C1B4  66 8B C3                  MOV AX,BX
0052C1B7  6A 01                     PUSH 0x1
0052C1B9  C1 E9 02                  SHR ECX,0x2
0052C1BC  F3 AB                     STOSD.REP ES:EDI
0052C1BE  8B CA                     MOV ECX,EDX
0052C1C0  83 E1 03                  AND ECX,0x3
0052C1C3  F3 AA                     STOSB.REP ES:EDI
0052C1C5  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0052C1CA  8D 48 28                  LEA ECX,[EAX + 0x28]
0052C1CD  51                        PUSH ECX
0052C1CE  50                        PUSH EAX
0052C1CF  E8 0C 8E 18 00            CALL 0x006b4fe0
0052C1D4  8B 4E 54                  MOV ECX,dword ptr [ESI + 0x54]
0052C1D7  50                        PUSH EAX
0052C1D8  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0052C1DD  33 D2                     XOR EDX,EDX
0052C1DF  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
0052C1E3  52                        PUSH EDX
0052C1E4  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
0052C1E7  51                        PUSH ECX
0052C1E8  52                        PUSH EDX
0052C1E9  E8 D2 8E 18 00            CALL 0x006b50c0
0052C1EE  89 46 7A                  MOV dword ptr [ESI + 0x7a],EAX
0052C1F1  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052C1F4  85 C9                     TEST ECX,ECX
0052C1F6  75 18                     JNZ 0x0052c210
0052C1F8  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
0052C1FC  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
0052C200  83 C1 1F                  ADD ECX,0x1f
0052C203  C1 E9 03                  SHR ECX,0x3
0052C206  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0052C20C  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_0052c210:
0052C210  33 DB                     XOR EBX,EBX
0052C212  50                        PUSH EAX
0052C213  8A 5E 69                  MOV BL,byte ptr [ESI + 0x69]
0052C216  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0052C219  E8 82 8D 18 00            CALL 0x006b4fa0
0052C21E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052C221  8B F8                     MOV EDI,EAX
0052C223  8A C3                     MOV AL,BL
0052C225  8A FB                     MOV BH,BL
0052C227  8B C3                     MOV EAX,EBX
0052C229  8B D1                     MOV EDX,ECX
0052C22B  C1 E0 10                  SHL EAX,0x10
0052C22E  66 8B C3                  MOV AX,BX
0052C231  6A 01                     PUSH 0x1
0052C233  C1 E9 02                  SHR ECX,0x2
0052C236  F3 AB                     STOSD.REP ES:EDI
0052C238  8B CA                     MOV ECX,EDX
0052C23A  83 E1 03                  AND ECX,0x3
0052C23D  F3 AA                     STOSB.REP ES:EDI
0052C23F  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0052C244  8D 48 28                  LEA ECX,[EAX + 0x28]
0052C247  51                        PUSH ECX
0052C248  50                        PUSH EAX
0052C249  E8 92 8D 18 00            CALL 0x006b4fe0
0052C24E  8B 4E 64                  MOV ECX,dword ptr [ESI + 0x64]
0052C251  50                        PUSH EAX
0052C252  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0052C257  33 D2                     XOR EDX,EDX
0052C259  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
0052C25D  52                        PUSH EDX
0052C25E  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0052C261  51                        PUSH ECX
0052C262  52                        PUSH EDX
0052C263  E8 58 8E 18 00            CALL 0x006b50c0
0052C268  89 46 7E                  MOV dword ptr [ESI + 0x7e],EAX
0052C26B  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052C26E  85 C9                     TEST ECX,ECX
0052C270  75 18                     JNZ 0x0052c28a
0052C272  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
0052C276  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
0052C27A  83 C1 1F                  ADD ECX,0x1f
0052C27D  C1 E9 03                  SHR ECX,0x3
0052C280  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0052C286  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_0052c28a:
0052C28A  33 DB                     XOR EBX,EBX
0052C28C  50                        PUSH EAX
0052C28D  8A 5E 69                  MOV BL,byte ptr [ESI + 0x69]
0052C290  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0052C293  E8 08 8D 18 00            CALL 0x006b4fa0
0052C298  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052C29B  8B F8                     MOV EDI,EAX
0052C29D  8A C3                     MOV AL,BL
0052C29F  8A FB                     MOV BH,BL
0052C2A1  8B C3                     MOV EAX,EBX
0052C2A3  8B D1                     MOV EDX,ECX
0052C2A5  C1 E0 10                  SHL EAX,0x10
0052C2A8  66 8B C3                  MOV AX,BX
0052C2AB  C1 E9 02                  SHR ECX,0x2
0052C2AE  F3 AB                     STOSD.REP ES:EDI
0052C2B0  8B CA                     MOV ECX,EDX
0052C2B2  83 E1 03                  AND ECX,0x3
0052C2B5  F3 AA                     STOSB.REP ES:EDI
0052C2B7  B9 08 00 00 00            MOV ECX,0x8
0052C2BC  33 C0                     XOR EAX,EAX
0052C2BE  8D 7D CC                  LEA EDI,[EBP + -0x34]
0052C2C1  F3 AB                     STOSD.REP ES:EDI
0052C2C3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0052C2C6  8D 4D CC                  LEA ECX,[EBP + -0x34]
0052C2C9  BF 01 00 00 00            MOV EDI,0x1
0052C2CE  51                        PUSH ECX
0052C2CF  57                        PUSH EDI
0052C2D0  6A 03                     PUSH 0x3
0052C2D2  8B CE                     MOV ECX,ESI
0052C2D4  C7 45 DC 13 00 00 00      MOV dword ptr [EBP + -0x24],0x13
0052C2DB  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0052C2DE  E8 1D 9D 1B 00            CALL 0x006e6000
0052C2E3  89 BE 86 00 00 00         MOV dword ptr [ESI + 0x86],EDI
0052C2E9  89 BE 8E 00 00 00         MOV dword ptr [ESI + 0x8e],EDI
0052C2EF  89 BE 96 00 00 00         MOV dword ptr [ESI + 0x96],EDI
0052C2F5  C6 86 A3 00 00 00 00      MOV byte ptr [ESI + 0xa3],0x0
0052C2FC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0052C302  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0052C308  85 C9                     TEST ECX,ECX
0052C30A  74 49                     JZ 0x0052c355
0052C30C  80 FA 08                  CMP DL,0x8
0052C30F  73 44                     JNC 0x0052c355
0052C311  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0052C316  85 C0                     TEST EAX,EAX
0052C318  74 11                     JZ 0x0052c32b
0052C31A  33 C0                     XOR EAX,EAX
0052C31C  8A C2                     MOV AL,DL
0052C31E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0052C321  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0052C329  73 2A                     JNC 0x0052c355
LAB_0052c32b:
0052C32B  33 C0                     XOR EAX,EAX
0052C32D  8A C2                     MOV AL,DL
0052C32F  50                        PUSH EAX
0052C330  E8 99 7E ED FF            CALL 0x004041ce
0052C335  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0052C33B  25 FF FF 00 00            AND EAX,0xffff
0052C340  50                        PUSH EAX
0052C341  51                        PUSH ECX
0052C342  8B CE                     MOV ECX,ESI
0052C344  E8 D4 52 ED FF            CALL 0x0040161d
0052C349  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0052C34F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
LAB_0052c355:
0052C355  85 C9                     TEST ECX,ECX
0052C357  89 35 D4 16 80 00         MOV dword ptr [0x008016d4],ESI
0052C35D  0F 84 BF 05 00 00         JZ 0x0052c922
0052C363  52                        PUSH EDX
0052C364  E8 24 88 ED FF            CALL 0x00404b8d
0052C369  E9 B4 05 00 00            JMP 0x0052c922
switchD_0052bf5c::caseD_3:
0052C36E  B9 08 00 00 00            MOV ECX,0x8
0052C373  33 C0                     XOR EAX,EAX
0052C375  8D 7D CC                  LEA EDI,[EBP + -0x34]
0052C378  89 1D D4 16 80 00         MOV dword ptr [0x008016d4],EBX
0052C37E  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0052C381  F3 AB                     STOSD.REP ES:EDI
0052C383  8D 45 CC                  LEA EAX,[EBP + -0x34]
0052C386  8B CE                     MOV ECX,ESI
0052C388  50                        PUSH EAX
0052C389  6A 01                     PUSH 0x1
0052C38B  6A 03                     PUSH 0x3
0052C38D  C7 45 DC 14 00 00 00      MOV dword ptr [EBP + -0x24],0x14
0052C394  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0052C397  E8 64 9C 1B 00            CALL 0x006e6000
0052C39C  8B 4E 72                  MOV ECX,dword ptr [ESI + 0x72]
0052C39F  8D 46 72                  LEA EAX,[ESI + 0x72]
0052C3A2  3B CB                     CMP ECX,EBX
0052C3A4  74 06                     JZ 0x0052c3ac
0052C3A6  50                        PUSH EAX
0052C3A7  E8 B4 EC 17 00            CALL 0x006ab060
LAB_0052c3ac:
0052C3AC  8B 4E 76                  MOV ECX,dword ptr [ESI + 0x76]
0052C3AF  8D 46 76                  LEA EAX,[ESI + 0x76]
0052C3B2  3B CB                     CMP ECX,EBX
0052C3B4  74 06                     JZ 0x0052c3bc
0052C3B6  50                        PUSH EAX
0052C3B7  E8 A4 EC 17 00            CALL 0x006ab060
LAB_0052c3bc:
0052C3BC  8B 4E 7A                  MOV ECX,dword ptr [ESI + 0x7a]
0052C3BF  8D 46 7A                  LEA EAX,[ESI + 0x7a]
0052C3C2  3B CB                     CMP ECX,EBX
0052C3C4  74 06                     JZ 0x0052c3cc
0052C3C6  50                        PUSH EAX
0052C3C7  E8 94 EC 17 00            CALL 0x006ab060
LAB_0052c3cc:
0052C3CC  8B 4E 7E                  MOV ECX,dword ptr [ESI + 0x7e]
0052C3CF  8D 46 7E                  LEA EAX,[ESI + 0x7e]
0052C3D2  3B CB                     CMP ECX,EBX
0052C3D4  74 06                     JZ 0x0052c3dc
0052C3D6  50                        PUSH EAX
0052C3D7  E8 84 EC 17 00            CALL 0x006ab060
LAB_0052c3dc:
0052C3DC  39 9E 82 00 00 00         CMP dword ptr [ESI + 0x82],EBX
0052C3E2  74 06                     JZ 0x0052c3ea
0052C3E4  89 9E 82 00 00 00         MOV dword ptr [ESI + 0x82],EBX
LAB_0052c3ea:
0052C3EA  8B 46 6A                  MOV EAX,dword ptr [ESI + 0x6a]
0052C3ED  3B C3                     CMP EAX,EBX
0052C3EF  74 0C                     JZ 0x0052c3fd
0052C3F1  50                        PUSH EAX
0052C3F2  E8 69 41 1E 00            CALL 0x00710560
0052C3F7  83 C4 04                  ADD ESP,0x4
0052C3FA  89 5E 6A                  MOV dword ptr [ESI + 0x6a],EBX
LAB_0052c3fd:
0052C3FD  8B 46 6E                  MOV EAX,dword ptr [ESI + 0x6e]
0052C400  3B C3                     CMP EAX,EBX
0052C402  0F 84 1A 05 00 00         JZ 0x0052c922
0052C408  50                        PUSH EAX
0052C409  E8 52 41 1E 00            CALL 0x00710560
0052C40E  83 C4 04                  ADD ESP,0x4
0052C411  89 5E 6E                  MOV dword ptr [ESI + 0x6e],EBX
0052C414  E9 09 05 00 00            JMP 0x0052c922
switchD_0052bf5c::caseD_60:
0052C419  33 C0                     XOR EAX,EAX
0052C41B  33 D2                     XOR EDX,EDX
0052C41D  66 8B 41 18               MOV AX,word ptr [ECX + 0x18]
0052C421  66 8B 51 1A               MOV DX,word ptr [ECX + 0x1a]
0052C425  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0052C42B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0052C42E  80 F9 03                  CMP CL,0x3
0052C431  88 5D FF                  MOV byte ptr [EBP + -0x1],BL
0052C434  74 31                     JZ 0x0052c467
0052C436  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0052C439  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
0052C43C  3B C1                     CMP EAX,ECX
0052C43E  7C 1D                     JL 0x0052c45d
0052C440  8B 5E 40                  MOV EBX,dword ptr [ESI + 0x40]
0052C443  03 D9                     ADD EBX,ECX
0052C445  3B C3                     CMP EAX,EBX
0052C447  7D 14                     JGE 0x0052c45d
0052C449  3B D7                     CMP EDX,EDI
0052C44B  7C 10                     JL 0x0052c45d
0052C44D  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0052C450  03 CF                     ADD ECX,EDI
0052C452  3B D1                     CMP EDX,ECX
0052C454  7D 07                     JGE 0x0052c45d
0052C456  B9 01 00 00 00            MOV ECX,0x1
0052C45B  EB 02                     JMP 0x0052c45f
LAB_0052c45d:
0052C45D  33 C9                     XOR ECX,ECX
LAB_0052c45f:
0052C45F  85 C9                     TEST ECX,ECX
0052C461  74 04                     JZ 0x0052c467
0052C463  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_0052c467:
0052C467  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0052C46A  8B 7E 24                  MOV EDI,dword ptr [ESI + 0x24]
0052C46D  3B C1                     CMP EAX,ECX
0052C46F  7C 1D                     JL 0x0052c48e
0052C471  8B 5E 48                  MOV EBX,dword ptr [ESI + 0x48]
0052C474  03 D9                     ADD EBX,ECX
0052C476  3B C3                     CMP EAX,EBX
0052C478  7D 14                     JGE 0x0052c48e
0052C47A  3B D7                     CMP EDX,EDI
0052C47C  7C 10                     JL 0x0052c48e
0052C47E  8B 4E 4C                  MOV ECX,dword ptr [ESI + 0x4c]
0052C481  03 CF                     ADD ECX,EDI
0052C483  3B D1                     CMP EDX,ECX
0052C485  7D 07                     JGE 0x0052c48e
0052C487  B9 01 00 00 00            MOV ECX,0x1
0052C48C  EB 02                     JMP 0x0052c490
LAB_0052c48e:
0052C48E  33 C9                     XOR ECX,ECX
LAB_0052c490:
0052C490  85 C9                     TEST ECX,ECX
0052C492  74 04                     JZ 0x0052c498
0052C494  C6 45 FF 02               MOV byte ptr [EBP + -0x1],0x2
LAB_0052c498:
0052C498  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0052C49B  8B 7E 2C                  MOV EDI,dword ptr [ESI + 0x2c]
0052C49E  3B C1                     CMP EAX,ECX
0052C4A0  7C 1D                     JL 0x0052c4bf
0052C4A2  8B 5E 50                  MOV EBX,dword ptr [ESI + 0x50]
0052C4A5  03 D9                     ADD EBX,ECX
0052C4A7  3B C3                     CMP EAX,EBX
0052C4A9  7D 14                     JGE 0x0052c4bf
0052C4AB  3B D7                     CMP EDX,EDI
0052C4AD  7C 10                     JL 0x0052c4bf
0052C4AF  8B 4E 54                  MOV ECX,dword ptr [ESI + 0x54]
0052C4B2  03 CF                     ADD ECX,EDI
0052C4B4  3B D1                     CMP EDX,ECX
0052C4B6  7D 07                     JGE 0x0052c4bf
0052C4B8  B9 01 00 00 00            MOV ECX,0x1
0052C4BD  EB 02                     JMP 0x0052c4c1
LAB_0052c4bf:
0052C4BF  33 C9                     XOR ECX,ECX
LAB_0052c4c1:
0052C4C1  85 C9                     TEST ECX,ECX
0052C4C3  74 04                     JZ 0x0052c4c9
0052C4C5  C6 45 FF 03               MOV byte ptr [EBP + -0x1],0x3
LAB_0052c4c9:
0052C4C9  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0052C4CC  8B 7E 34                  MOV EDI,dword ptr [ESI + 0x34]
0052C4CF  3B C1                     CMP EAX,ECX
0052C4D1  7C 1D                     JL 0x0052c4f0
0052C4D3  8B 5E 58                  MOV EBX,dword ptr [ESI + 0x58]
0052C4D6  03 D9                     ADD EBX,ECX
0052C4D8  3B C3                     CMP EAX,EBX
0052C4DA  7D 14                     JGE 0x0052c4f0
0052C4DC  3B D7                     CMP EDX,EDI
0052C4DE  7C 10                     JL 0x0052c4f0
0052C4E0  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
0052C4E3  03 CF                     ADD ECX,EDI
0052C4E5  3B D1                     CMP EDX,ECX
0052C4E7  7D 07                     JGE 0x0052c4f0
0052C4E9  B9 01 00 00 00            MOV ECX,0x1
0052C4EE  EB 02                     JMP 0x0052c4f2
LAB_0052c4f0:
0052C4F0  33 C9                     XOR ECX,ECX
LAB_0052c4f2:
0052C4F2  85 C9                     TEST ECX,ECX
0052C4F4  74 04                     JZ 0x0052c4fa
0052C4F6  C6 45 FF 04               MOV byte ptr [EBP + -0x1],0x4
LAB_0052c4fa:
0052C4FA  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0052C4FD  8B 7E 60                  MOV EDI,dword ptr [ESI + 0x60]
0052C500  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0052C503  8B 5E 64                  MOV EBX,dword ptr [ESI + 0x64]
0052C506  83 E9 1E                  SUB ECX,0x1e
0052C509  83 C7 23                  ADD EDI,0x23
0052C50C  83 EA 03                  SUB EDX,0x3
0052C50F  83 C3 06                  ADD EBX,0x6
0052C512  3B C1                     CMP EAX,ECX
0052C514  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0052C517  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
0052C51A  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0052C51D  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
0052C520  7C 1A                     JL 0x0052c53c
0052C522  03 F9                     ADD EDI,ECX
0052C524  3B C7                     CMP EAX,EDI
0052C526  7D 14                     JGE 0x0052c53c
0052C528  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0052C52B  3B C2                     CMP EAX,EDX
0052C52D  7C 0D                     JL 0x0052c53c
0052C52F  03 DA                     ADD EBX,EDX
0052C531  3B C3                     CMP EAX,EBX
0052C533  7D 07                     JGE 0x0052c53c
0052C535  B8 01 00 00 00            MOV EAX,0x1
0052C53A  EB 02                     JMP 0x0052c53e
LAB_0052c53c:
0052C53C  33 C0                     XOR EAX,EAX
LAB_0052c53e:
0052C53E  85 C0                     TEST EAX,EAX
0052C540  B3 05                     MOV BL,0x5
0052C542  75 03                     JNZ 0x0052c547
0052C544  8A 5D FF                  MOV BL,byte ptr [EBP + -0x1]
LAB_0052c547:
0052C547  8A 46 68                  MOV AL,byte ptr [ESI + 0x68]
0052C54A  3A C3                     CMP AL,BL
0052C54C  0F 84 D0 03 00 00         JZ 0x0052c922
0052C552  84 C0                     TEST AL,AL
0052C554  74 20                     JZ 0x0052c576
0052C556  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0052C559  C7 45 9C 02 42 00 00      MOV dword ptr [EBP + -0x64],0x4202
0052C560  51                        PUSH ECX
0052C561  8B CE                     MOV ECX,ESI
0052C563  E8 8B 75 ED FF            CALL 0x00403af3
0052C568  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0052C56E  8D 45 8C                  LEA EAX,[EBP + -0x74]
0052C571  50                        PUSH EAX
0052C572  8B 11                     MOV EDX,dword ptr [ECX]
0052C574  FF 12                     CALL dword ptr [EDX]
LAB_0052c576:
0052C576  84 DB                     TEST BL,BL
0052C578  88 5E 68                  MOV byte ptr [ESI + 0x68],BL
0052C57B  0F 84 A1 03 00 00         JZ 0x0052c922
0052C581  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0052C584  C7 45 9C 01 42 00 00      MOV dword ptr [EBP + -0x64],0x4201
0052C58B  51                        PUSH ECX
0052C58C  8B CE                     MOV ECX,ESI
0052C58E  E8 60 75 ED FF            CALL 0x00403af3
0052C593  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0052C599  8D 45 8C                  LEA EAX,[EBP + -0x74]
0052C59C  50                        PUSH EAX
0052C59D  8B 11                     MOV EDX,dword ptr [ECX]
0052C59F  FF 12                     CALL dword ptr [EDX]
0052C5A1  E9 7C 03 00 00            JMP 0x0052c922
switchD_0052bf5c::caseD_5:
0052C5A6  8B CE                     MOV ECX,ESI
0052C5A8  E8 B9 70 ED FF            CALL 0x00403666
0052C5AD  8B CE                     MOV ECX,ESI
0052C5AF  E8 95 83 ED FF            CALL 0x00404949
0052C5B4  8B CE                     MOV ECX,ESI
0052C5B6  E8 B4 4E ED FF            CALL 0x0040146f
0052C5BB  8B CE                     MOV ECX,ESI
0052C5BD  E8 A0 74 ED FF            CALL 0x00403a62
0052C5C2  8B CE                     MOV ECX,ESI
0052C5C4  E8 04 6E ED FF            CALL 0x004033cd
0052C5C9  E9 54 03 00 00            JMP 0x0052c922
switchD_0052bf5c::caseD_0:
0052C5CE  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0052C5D1  51                        PUSH ECX
0052C5D2  B9 20 76 80 00            MOV ECX,0x807620
0052C5D7  E8 64 87 1B 00            CALL 0x006e4d40
0052C5DC  83 F8 01                  CMP EAX,0x1
0052C5DF  0F 85 3D 03 00 00         JNZ 0x0052c922
0052C5E5  8B 86 86 00 00 00         MOV EAX,dword ptr [ESI + 0x86]
0052C5EB  8B 8E 8A 00 00 00         MOV ECX,dword ptr [ESI + 0x8a]
0052C5F1  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0052C5F7  3B C1                     CMP EAX,ECX
0052C5F9  0F 84 03 01 00 00         JZ 0x0052c702
0052C5FF  3B C1                     CMP EAX,ECX
0052C601  73 19                     JNC 0x0052c61c
0052C603  2B C8                     SUB ECX,EAX
0052C605  83 F9 64                  CMP ECX,0x64
0052C608  76 05                     JBE 0x0052c60f
0052C60A  83 C0 64                  ADD EAX,0x64
0052C60D  EB 26                     JMP 0x0052c635
LAB_0052c60f:
0052C60F  83 F9 0A                  CMP ECX,0xa
0052C612  76 05                     JBE 0x0052c619
0052C614  83 C0 0A                  ADD EAX,0xa
0052C617  EB 1C                     JMP 0x0052c635
LAB_0052c619:
0052C619  40                        INC EAX
0052C61A  EB 19                     JMP 0x0052c635
LAB_0052c61c:
0052C61C  8B D0                     MOV EDX,EAX
0052C61E  2B D1                     SUB EDX,ECX
0052C620  83 FA 64                  CMP EDX,0x64
0052C623  76 05                     JBE 0x0052c62a
0052C625  83 C0 9C                  ADD EAX,-0x64
0052C628  EB 0B                     JMP 0x0052c635
LAB_0052c62a:
0052C62A  83 FA 0A                  CMP EDX,0xa
0052C62D  76 05                     JBE 0x0052c634
0052C62F  83 C0 F6                  ADD EAX,-0xa
0052C632  EB 01                     JMP 0x0052c635
LAB_0052c634:
0052C634  48                        DEC EAX
LAB_0052c635:
0052C635  89 86 86 00 00 00         MOV dword ptr [ESI + 0x86],EAX
0052C63B  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052C640  3C 03                     CMP AL,0x3
0052C642  75 12                     JNZ 0x0052c656
0052C644  8B 96 86 00 00 00         MOV EDX,dword ptr [ESI + 0x86]
0052C64A  8D 45 EC                  LEA EAX,[EBP + -0x14]
0052C64D  52                        PUSH EDX
0052C64E  68 FC 28 7C 00            PUSH 0x7c28fc
0052C653  50                        PUSH EAX
0052C654  EB 10                     JMP 0x0052c666
LAB_0052c656:
0052C656  8B 8E 86 00 00 00         MOV ECX,dword ptr [ESI + 0x86]
0052C65C  8D 55 EC                  LEA EDX,[EBP + -0x14]
0052C65F  51                        PUSH ECX
0052C660  68 44 6F 7C 00            PUSH 0x7c6f44
0052C665  52                        PUSH EDX
LAB_0052c666:
0052C666  FF D7                     CALL EDI
0052C668  8B 4E 72                  MOV ECX,dword ptr [ESI + 0x72]
0052C66B  83 C4 0C                  ADD ESP,0xc
0052C66E  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0052C671  3B C3                     CMP EAX,EBX
0052C673  75 19                     JNZ 0x0052c68e
0052C675  33 C0                     XOR EAX,EAX
0052C677  66 8B 41 0E               MOV AX,word ptr [ECX + 0xe]
0052C67B  0F AF 41 04               IMUL EAX,dword ptr [ECX + 0x4]
0052C67F  83 C0 1F                  ADD EAX,0x1f
0052C682  C1 E8 03                  SHR EAX,0x3
0052C685  25 FC FF FF 1F            AND EAX,0x1ffffffc
0052C68A  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
LAB_0052c68e:
0052C68E  33 DB                     XOR EBX,EBX
0052C690  51                        PUSH ECX
0052C691  8A 5E 69                  MOV BL,byte ptr [ESI + 0x69]
0052C694  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0052C697  E8 04 89 18 00            CALL 0x006b4fa0
0052C69C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052C69F  8B F8                     MOV EDI,EAX
0052C6A1  8A C3                     MOV AL,BL
0052C6A3  8A FB                     MOV BH,BL
0052C6A5  8B C3                     MOV EAX,EBX
0052C6A7  8B D1                     MOV EDX,ECX
0052C6A9  C1 E0 10                  SHL EAX,0x10
0052C6AC  66 8B C3                  MOV AX,BX
0052C6AF  33 DB                     XOR EBX,EBX
0052C6B1  C1 E9 02                  SHR ECX,0x2
0052C6B4  F3 AB                     STOSD.REP ES:EDI
0052C6B6  8B CA                     MOV ECX,EDX
0052C6B8  83 E1 03                  AND ECX,0x3
0052C6BB  F3 AA                     STOSB.REP ES:EDI
0052C6BD  8B 46 72                  MOV EAX,dword ptr [ESI + 0x72]
0052C6C0  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0052C6C3  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0052C6C6  51                        PUSH ECX
0052C6C7  8B 4E 6A                  MOV ECX,dword ptr [ESI + 0x6a]
0052C6CA  52                        PUSH EDX
0052C6CB  53                        PUSH EBX
0052C6CC  53                        PUSH EBX
0052C6CD  53                        PUSH EBX
0052C6CE  50                        PUSH EAX
0052C6CF  E8 BC 43 1E 00            CALL 0x00710a90
0052C6D4  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052C6D9  8D 4D EC                  LEA ECX,[EBP + -0x14]
0052C6DC  2C 03                     SUB AL,0x3
0052C6DE  F6 D8                     NEG AL
0052C6E0  1B C0                     SBB EAX,EAX
0052C6E2  24 FC                     AND AL,0xfc
0052C6E4  83 C0 05                  ADD EAX,0x5
0052C6E7  50                        PUSH EAX
0052C6E8  6A FF                     PUSH -0x1
0052C6EA  6A FF                     PUSH -0x1
0052C6EC  51                        PUSH ECX
0052C6ED  8B 4E 6A                  MOV ECX,dword ptr [ESI + 0x6a]
0052C6F0  E8 CB 52 1E 00            CALL 0x007119c0
0052C6F5  8B CE                     MOV ECX,ESI
0052C6F7  E8 6A 6F ED FF            CALL 0x00403666
0052C6FC  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
LAB_0052c702:
0052C702  8B 86 8E 00 00 00         MOV EAX,dword ptr [ESI + 0x8e]
0052C708  8B 8E 92 00 00 00         MOV ECX,dword ptr [ESI + 0x92]
0052C70E  3B C1                     CMP EAX,ECX
0052C710  0F 84 E2 00 00 00         JZ 0x0052c7f8
0052C716  73 19                     JNC 0x0052c731
0052C718  2B C8                     SUB ECX,EAX
0052C71A  83 F9 64                  CMP ECX,0x64
0052C71D  76 05                     JBE 0x0052c724
0052C71F  83 C0 64                  ADD EAX,0x64
0052C722  EB 26                     JMP 0x0052c74a
LAB_0052c724:
0052C724  83 F9 0A                  CMP ECX,0xa
0052C727  76 05                     JBE 0x0052c72e
0052C729  83 C0 0A                  ADD EAX,0xa
0052C72C  EB 1C                     JMP 0x0052c74a
LAB_0052c72e:
0052C72E  40                        INC EAX
0052C72F  EB 19                     JMP 0x0052c74a
LAB_0052c731:
0052C731  8B D0                     MOV EDX,EAX
0052C733  2B D1                     SUB EDX,ECX
0052C735  83 FA 64                  CMP EDX,0x64
0052C738  76 05                     JBE 0x0052c73f
0052C73A  83 C0 9C                  ADD EAX,-0x64
0052C73D  EB 0B                     JMP 0x0052c74a
LAB_0052c73f:
0052C73F  83 FA 0A                  CMP EDX,0xa
0052C742  76 05                     JBE 0x0052c749
0052C744  83 C0 F6                  ADD EAX,-0xa
0052C747  EB 01                     JMP 0x0052c74a
LAB_0052c749:
0052C749  48                        DEC EAX
LAB_0052c74a:
0052C74A  8B D0                     MOV EDX,EAX
0052C74C  89 86 8E 00 00 00         MOV dword ptr [ESI + 0x8e],EAX
0052C752  52                        PUSH EDX
0052C753  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0052C756  68 FC 28 7C 00            PUSH 0x7c28fc
0052C75B  50                        PUSH EAX
0052C75C  FF D7                     CALL EDI
0052C75E  8B 4E 76                  MOV ECX,dword ptr [ESI + 0x76]
0052C761  83 C4 0C                  ADD ESP,0xc
0052C764  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0052C767  3B C3                     CMP EAX,EBX
0052C769  75 19                     JNZ 0x0052c784
0052C76B  33 C0                     XOR EAX,EAX
0052C76D  66 8B 41 0E               MOV AX,word ptr [ECX + 0xe]
0052C771  0F AF 41 04               IMUL EAX,dword ptr [ECX + 0x4]
0052C775  83 C0 1F                  ADD EAX,0x1f
0052C778  C1 E8 03                  SHR EAX,0x3
0052C77B  25 FC FF FF 1F            AND EAX,0x1ffffffc
0052C780  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
LAB_0052c784:
0052C784  33 DB                     XOR EBX,EBX
0052C786  51                        PUSH ECX
0052C787  8A 5E 69                  MOV BL,byte ptr [ESI + 0x69]
0052C78A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0052C78D  E8 0E 88 18 00            CALL 0x006b4fa0
0052C792  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052C795  8B F8                     MOV EDI,EAX
0052C797  8A C3                     MOV AL,BL
0052C799  8A FB                     MOV BH,BL
0052C79B  8B C3                     MOV EAX,EBX
0052C79D  8B D1                     MOV EDX,ECX
0052C79F  C1 E0 10                  SHL EAX,0x10
0052C7A2  66 8B C3                  MOV AX,BX
0052C7A5  33 DB                     XOR EBX,EBX
0052C7A7  C1 E9 02                  SHR ECX,0x2
0052C7AA  F3 AB                     STOSD.REP ES:EDI
0052C7AC  8B CA                     MOV ECX,EDX
0052C7AE  83 E1 03                  AND ECX,0x3
0052C7B1  F3 AA                     STOSB.REP ES:EDI
0052C7B3  8B 46 76                  MOV EAX,dword ptr [ESI + 0x76]
0052C7B6  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0052C7B9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0052C7BC  51                        PUSH ECX
0052C7BD  8B 4E 6A                  MOV ECX,dword ptr [ESI + 0x6a]
0052C7C0  52                        PUSH EDX
0052C7C1  53                        PUSH EBX
0052C7C2  53                        PUSH EBX
0052C7C3  53                        PUSH EBX
0052C7C4  50                        PUSH EAX
0052C7C5  E8 C6 42 1E 00            CALL 0x00710a90
0052C7CA  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052C7CF  8D 4D C4                  LEA ECX,[EBP + -0x3c]
0052C7D2  2C 03                     SUB AL,0x3
0052C7D4  F6 D8                     NEG AL
0052C7D6  1B C0                     SBB EAX,EAX
0052C7D8  24 FC                     AND AL,0xfc
0052C7DA  83 C0 04                  ADD EAX,0x4
0052C7DD  50                        PUSH EAX
0052C7DE  6A FF                     PUSH -0x1
0052C7E0  6A FF                     PUSH -0x1
0052C7E2  51                        PUSH ECX
0052C7E3  8B 4E 6A                  MOV ECX,dword ptr [ESI + 0x6a]
0052C7E6  E8 D5 51 1E 00            CALL 0x007119c0
0052C7EB  8B CE                     MOV ECX,ESI
0052C7ED  E8 57 81 ED FF            CALL 0x00404949
0052C7F2  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
LAB_0052c7f8:
0052C7F8  8B 86 96 00 00 00         MOV EAX,dword ptr [ESI + 0x96]
0052C7FE  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
0052C804  3B C1                     CMP EAX,ECX
0052C806  0F 84 DD 00 00 00         JZ 0x0052c8e9
0052C80C  73 19                     JNC 0x0052c827
0052C80E  2B C8                     SUB ECX,EAX
0052C810  83 F9 64                  CMP ECX,0x64
0052C813  76 05                     JBE 0x0052c81a
0052C815  83 C0 64                  ADD EAX,0x64
0052C818  EB 26                     JMP 0x0052c840
LAB_0052c81a:
0052C81A  83 F9 0A                  CMP ECX,0xa
0052C81D  76 05                     JBE 0x0052c824
0052C81F  83 C0 0A                  ADD EAX,0xa
0052C822  EB 1C                     JMP 0x0052c840
LAB_0052c824:
0052C824  40                        INC EAX
0052C825  EB 19                     JMP 0x0052c840
LAB_0052c827:
0052C827  8B D0                     MOV EDX,EAX
0052C829  2B D1                     SUB EDX,ECX
0052C82B  83 FA 64                  CMP EDX,0x64
0052C82E  76 05                     JBE 0x0052c835
0052C830  83 C0 9C                  ADD EAX,-0x64
0052C833  EB 0B                     JMP 0x0052c840
LAB_0052c835:
0052C835  83 FA 0A                  CMP EDX,0xa
0052C838  76 05                     JBE 0x0052c83f
0052C83A  83 C0 F6                  ADD EAX,-0xa
0052C83D  EB 01                     JMP 0x0052c840
LAB_0052c83f:
0052C83F  48                        DEC EAX
LAB_0052c840:
0052C840  8B D0                     MOV EDX,EAX
0052C842  89 86 96 00 00 00         MOV dword ptr [ESI + 0x96],EAX
0052C848  52                        PUSH EDX
0052C849  8D 45 BC                  LEA EAX,[EBP + -0x44]
0052C84C  68 FC 28 7C 00            PUSH 0x7c28fc
0052C851  50                        PUSH EAX
0052C852  FF D7                     CALL EDI
0052C854  8B 4E 7A                  MOV ECX,dword ptr [ESI + 0x7a]
0052C857  83 C4 0C                  ADD ESP,0xc
0052C85A  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0052C85D  3B C3                     CMP EAX,EBX
0052C85F  75 19                     JNZ 0x0052c87a
0052C861  33 C0                     XOR EAX,EAX
0052C863  66 8B 41 0E               MOV AX,word ptr [ECX + 0xe]
0052C867  0F AF 41 04               IMUL EAX,dword ptr [ECX + 0x4]
0052C86B  83 C0 1F                  ADD EAX,0x1f
0052C86E  C1 E8 03                  SHR EAX,0x3
0052C871  25 FC FF FF 1F            AND EAX,0x1ffffffc
0052C876  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
LAB_0052c87a:
0052C87A  33 DB                     XOR EBX,EBX
0052C87C  51                        PUSH ECX
0052C87D  8A 5E 69                  MOV BL,byte ptr [ESI + 0x69]
0052C880  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0052C883  E8 18 87 18 00            CALL 0x006b4fa0
0052C888  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052C88B  8B F8                     MOV EDI,EAX
0052C88D  8A C3                     MOV AL,BL
0052C88F  8A FB                     MOV BH,BL
0052C891  8B C3                     MOV EAX,EBX
0052C893  8B D1                     MOV EDX,ECX
0052C895  C1 E0 10                  SHL EAX,0x10
0052C898  66 8B C3                  MOV AX,BX
0052C89B  C1 E9 02                  SHR ECX,0x2
0052C89E  F3 AB                     STOSD.REP ES:EDI
0052C8A0  8B CA                     MOV ECX,EDX
0052C8A2  83 E1 03                  AND ECX,0x3
0052C8A5  F3 AA                     STOSB.REP ES:EDI
0052C8A7  8B 46 7A                  MOV EAX,dword ptr [ESI + 0x7a]
0052C8AA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0052C8AD  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0052C8B0  51                        PUSH ECX
0052C8B1  8B 4E 6A                  MOV ECX,dword ptr [ESI + 0x6a]
0052C8B4  52                        PUSH EDX
0052C8B5  6A 00                     PUSH 0x0
0052C8B7  6A 00                     PUSH 0x0
0052C8B9  6A 00                     PUSH 0x0
0052C8BB  50                        PUSH EAX
0052C8BC  E8 CF 41 1E 00            CALL 0x00710a90
0052C8C1  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052C8C6  8D 4D BC                  LEA ECX,[EBP + -0x44]
0052C8C9  2C 03                     SUB AL,0x3
0052C8CB  F6 D8                     NEG AL
0052C8CD  1B C0                     SBB EAX,EAX
0052C8CF  24 FB                     AND AL,0xfb
0052C8D1  83 C0 07                  ADD EAX,0x7
0052C8D4  50                        PUSH EAX
0052C8D5  6A FF                     PUSH -0x1
0052C8D7  6A FF                     PUSH -0x1
0052C8D9  51                        PUSH ECX
0052C8DA  8B 4E 6A                  MOV ECX,dword ptr [ESI + 0x6a]
0052C8DD  E8 DE 50 1E 00            CALL 0x007119c0
0052C8E2  8B CE                     MOV ECX,ESI
0052C8E4  E8 86 4B ED FF            CALL 0x0040146f
LAB_0052c8e9:
0052C8E9  8A 86 A3 00 00 00         MOV AL,byte ptr [ESI + 0xa3]
0052C8EF  8A 8E A2 00 00 00         MOV CL,byte ptr [ESI + 0xa2]
0052C8F5  3A C8                     CMP CL,AL
0052C8F7  75 10                     JNZ 0x0052c909
0052C8F9  8A 96 A4 00 00 00         MOV DL,byte ptr [ESI + 0xa4]
0052C8FF  8A 8E A5 00 00 00         MOV CL,byte ptr [ESI + 0xa5]
0052C905  3A D1                     CMP DL,CL
0052C907  74 19                     JZ 0x0052c922
LAB_0052c909:
0052C909  88 86 A2 00 00 00         MOV byte ptr [ESI + 0xa2],AL
0052C90F  8A 86 A5 00 00 00         MOV AL,byte ptr [ESI + 0xa5]
0052C915  8B CE                     MOV ECX,ESI
0052C917  88 86 A4 00 00 00         MOV byte ptr [ESI + 0xa4],AL
0052C91D  E8 40 71 ED FF            CALL 0x00403a62
switchD_0052bf5c::caseD_1:
0052C922  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
0052C928  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0052C92B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052C931  52                        PUSH EDX
0052C932  8B CE                     MOV ECX,ESI
0052C934  E8 97 96 1B 00            CALL 0x006e5fd0
0052C939  5F                        POP EDI
0052C93A  5E                        POP ESI
0052C93B  5B                        POP EBX
0052C93C  8B E5                     MOV ESP,EBP
0052C93E  5D                        POP EBP
0052C93F  C2 04 00                  RET 0x4
LAB_0052c942:
0052C942  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
0052C948  68 6C 6F 7C 00            PUSH 0x7c6f6c
0052C94D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052C952  56                        PUSH ESI
0052C953  53                        PUSH EBX
0052C954  68 2A 01 00 00            PUSH 0x12a
0052C959  68 48 6F 7C 00            PUSH 0x7c6f48
0052C95E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052C963  E8 68 0B 18 00            CALL 0x006ad4d0
0052C968  83 C4 18                  ADD ESP,0x18
0052C96B  85 C0                     TEST EAX,EAX
0052C96D  74 01                     JZ 0x0052c970
0052C96F  CC                        INT3
LAB_0052c970:
0052C970  68 2A 01 00 00            PUSH 0x12a
0052C975  68 48 6F 7C 00            PUSH 0x7c6f48
0052C97A  53                        PUSH EBX
0052C97B  56                        PUSH ESI
0052C97C  E8 BF 94 17 00            CALL 0x006a5e40
0052C981  5F                        POP EDI
0052C982  5E                        POP ESI
0052C983  B8 FF FF 00 00            MOV EAX,0xffff
0052C988  5B                        POP EBX
0052C989  8B E5                     MOV ESP,EBP
0052C98B  5D                        POP EBP
0052C98C  C2 04 00                  RET 0x4
