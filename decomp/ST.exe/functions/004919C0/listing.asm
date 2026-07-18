FUN_004919c0:
004919C0  55                        PUSH EBP
004919C1  8B EC                     MOV EBP,ESP
004919C3  83 EC 64                  SUB ESP,0x64
004919C6  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
004919CA  53                        PUSH EBX
004919CB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004919CE  0F BF 5D 18               MOVSX EBX,word ptr [EBP + 0x18]
004919D2  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
004919D5  8D 50 FF                  LEA EDX,[EAX + -0x1]
004919D8  8D 4B FF                  LEA ECX,[EBX + -0x1]
004919DB  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004919DE  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
004919E1  8D 48 01                  LEA ECX,[EAX + 0x1]
004919E4  33 C0                     XOR EAX,EAX
004919E6  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004919E9  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
004919F0  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004919F3  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004919F6  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004919F9  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004919FC  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
004919FF  56                        PUSH ESI
00491A00  0F BF 05 7A B2 7F 00      MOVSX EAX,word ptr [0x007fb27a]
00491A07  0F AF C8                  IMUL ECX,EAX
00491A0A  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00491A11  0F AF C8                  IMUL ECX,EAX
00491A14  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
00491A1A  57                        PUSH EDI
00491A1B  8B 3D 38 B2 7F 00         MOV EDI,dword ptr [0x007fb238]
00491A21  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
00491A24  D1 E1                     SHL ECX,0x1
00491A26  8B C1                     MOV EAX,ECX
00491A28  8D 53 01                  LEA EDX,[EBX + 0x1]
00491A2B  C1 E9 02                  SHR ECX,0x2
00491A2E  F3 A5                     MOVSD.REP ES:EDI,ESI
00491A30  8B C8                     MOV ECX,EAX
00491A32  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
00491A35  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00491A39  83 CA FF                  OR EDX,0xffffffff
00491A3C  83 E1 03                  AND ECX,0x3
00491A3F  F3 A4                     MOVSB.REP ES:EDI,ESI
00491A41  0F BF 4D 10               MOVSX ECX,word ptr [EBP + 0x10]
00491A45  52                        PUSH EDX
00491A46  52                        PUSH EDX
00491A47  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00491A4A  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00491A4D  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00491A50  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00491A53  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00491A56  52                        PUSH EDX
00491A57  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
00491A5B  51                        PUSH ECX
00491A5C  52                        PUSH EDX
00491A5D  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
00491A64  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
00491A6B  50                        PUSH EAX
00491A6C  51                        PUSH ECX
00491A6D  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00491A74  8B 0D 38 B2 7F 00         MOV ECX,dword ptr [0x007fb238]
00491A7A  52                        PUSH EDX
00491A7B  50                        PUSH EAX
00491A7C  51                        PUSH ECX
00491A7D  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
00491A80  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
00491A83  E8 08 96 21 00            CALL 0x006ab090
00491A88  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00491A8C  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
00491A93  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
00491A9A  8B F2                     MOV ESI,EDX
00491A9C  8B F8                     MOV EDI,EAX
00491A9E  0F AF F3                  IMUL ESI,EBX
00491AA1  0F AF F9                  IMUL EDI,ECX
00491AA4  0F BF 4D 14               MOVSX ECX,word ptr [EBP + 0x14]
00491AA8  03 FE                     ADD EDI,ESI
00491AAA  33 D2                     XOR EDX,EDX
00491AAC  03 F9                     ADD EDI,ECX
00491AAE  8B 0D 38 B2 7F 00         MOV ECX,dword ptr [0x007fb238]
00491AB4  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
00491AB7  66 39 14 79               CMP word ptr [ECX + EDI*0x2],DX
00491ABB  0F 8E 93 03 00 00         JLE 0x00491e54
00491AC1  B9 04 00 00 00            MOV ECX,0x4
00491AC6  3B C1                     CMP EAX,ECX
00491AC8  0F 87 63 03 00 00         JA 0x00491e31
switchD_00491ace::switchD:
00491ACE  FF 24 85 64 1E 49 00      JMP dword ptr [EAX*0x4 + 0x491e64]
switchD_00491ace::caseD_0:
00491AD5  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00491AD8  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
00491ADF  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
00491AE6  C7 45 F0 03 00 00 00      MOV dword ptr [EBP + -0x10],0x3
00491AED  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00491AF0  EB 66                     JMP 0x00491b58
switchD_00491ace::caseD_1:
00491AF2  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
00491AF9  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
00491B00  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00491B03  C7 45 F0 03 00 00 00      MOV dword ptr [EBP + -0x10],0x3
00491B0A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00491B0D  EB 49                     JMP 0x00491b58
switchD_00491ace::caseD_2:
00491B0F  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
00491B16  C7 45 E8 03 00 00 00      MOV dword ptr [EBP + -0x18],0x3
00491B1D  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
00491B24  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00491B27  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00491B2A  EB 2C                     JMP 0x00491b58
switchD_00491ace::caseD_3:
00491B2C  C7 45 E4 03 00 00 00      MOV dword ptr [EBP + -0x1c],0x3
00491B33  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00491B36  EB 0A                     JMP 0x00491b42
switchD_00491ace::caseD_4:
00491B38  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00491B3B  C7 45 E8 03 00 00 00      MOV dword ptr [EBP + -0x18],0x3
LAB_00491b42:
00491B42  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
00491B49  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
00491B50  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00491B53  EB 03                     JMP 0x00491b58
LAB_00491b55:
00491B55  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_00491b58:
00491B58  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
00491B5F  8B 44 15 E4               MOV EAX,dword ptr [EBP + EDX*0x1 + -0x1c]
00491B63  0F AF C1                  IMUL EAX,ECX
00491B66  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00491B69  8D 0C 30                  LEA ECX,[EAX + ESI*0x1]
00491B6C  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
00491B70  03 C8                     ADD ECX,EAX
00491B72  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
00491B77  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
00491B7C  0F 8E BB 00 00 00         JLE 0x00491c3d
00491B82  8D 45 9C                  LEA EAX,[EBP + -0x64]
00491B85  C7 45 10 00 CA 9A 3B      MOV dword ptr [EBP + 0x10],0x3b9aca00
00491B8C  33 DB                     XOR EBX,EBX
00491B8E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00491b91:
00491B91  8B 08                     MOV ECX,dword ptr [EAX]
00491B93  85 C9                     TEST ECX,ECX
00491B95  0F 8C 81 00 00 00         JL 0x00491c1c
00491B9B  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
00491BA2  8D 7E FF                  LEA EDI,[ESI + -0x1]
00491BA5  3B CF                     CMP ECX,EDI
00491BA7  7F 73                     JG 0x00491c1c
00491BA9  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00491BAC  85 C0                     TEST EAX,EAX
00491BAE  7C 6C                     JL 0x00491c1c
00491BB0  0F BF 3D 7A B2 7F 00      MOVSX EDI,word ptr [0x007fb27a]
00491BB7  4F                        DEC EDI
00491BB8  3B C7                     CMP EAX,EDI
00491BBA  7F 60                     JG 0x00491c1c
00491BBC  0F AF C6                  IMUL EAX,ESI
00491BBF  03 45 FC                  ADD EAX,dword ptr [EBP + -0x4]
00491BC2  03 C1                     ADD EAX,ECX
00491BC4  8B 0D 38 B2 7F 00         MOV ECX,dword ptr [0x007fb238]
00491BCA  0F BF 0C 41               MOVSX ECX,word ptr [ECX + EAX*0x2]
00491BCE  85 C9                     TEST ECX,ECX
00491BD0  7E 4A                     JLE 0x00491c1c
00491BD2  8B 35 48 B2 7F 00         MOV ESI,dword ptr [0x007fb248]
00491BD8  8B 04 C6                  MOV EAX,dword ptr [ESI + EAX*0x8]
00491BDB  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00491BDE  3B C6                     CMP EAX,ESI
00491BE0  74 4F                     JZ 0x00491c31
00491BE2  85 C0                     TEST EAX,EAX
00491BE4  75 22                     JNZ 0x00491c08
00491BE6  8B 44 15 BC               MOV EAX,dword ptr [EBP + EDX*0x1 + -0x44]
00491BEA  85 C0                     TEST EAX,EAX
00491BEC  75 0E                     JNZ 0x00491bfc
00491BEE  89 5C 15 D0               MOV dword ptr [EBP + EDX*0x1 + -0x30],EBX
00491BF2  C7 44 15 BC 01 00 00 00   MOV dword ptr [EBP + EDX*0x1 + -0x44],0x1
00491BFA  EB 1D                     JMP 0x00491c19
LAB_00491bfc:
00491BFC  83 F8 01                  CMP EAX,0x1
00491BFF  75 07                     JNZ 0x00491c08
00491C01  3B 4D 10                  CMP ECX,dword ptr [EBP + 0x10]
00491C04  7D 16                     JGE 0x00491c1c
00491C06  EB 0D                     JMP 0x00491c15
LAB_00491c08:
00491C08  8B 44 15 BC               MOV EAX,dword ptr [EBP + EDX*0x1 + -0x44]
00491C0C  85 C0                     TEST EAX,EAX
00491C0E  75 0C                     JNZ 0x00491c1c
00491C10  3B 4D 10                  CMP ECX,dword ptr [EBP + 0x10]
00491C13  7D 07                     JGE 0x00491c1c
LAB_00491c15:
00491C15  89 5C 15 D0               MOV dword ptr [EBP + EDX*0x1 + -0x30],EBX
LAB_00491c19:
00491C19  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_00491c1c:
00491C1C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00491C1F  43                        INC EBX
00491C20  83 C0 08                  ADD EAX,0x8
00491C23  83 FB 04                  CMP EBX,0x4
00491C26  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00491C29  0F 8C 62 FF FF FF         JL 0x00491b91
00491C2F  EB 0C                     JMP 0x00491c3d
LAB_00491c31:
00491C31  89 5C 15 D0               MOV dword ptr [EBP + EDX*0x1 + -0x30],EBX
00491C35  C7 44 15 BC 02 00 00 00   MOV dword ptr [EBP + EDX*0x1 + -0x44],0x2
LAB_00491c3d:
00491C3D  83 C2 04                  ADD EDX,0x4
00491C40  83 FA 14                  CMP EDX,0x14
00491C43  0F 8C 0C FF FF FF         JL 0x00491b55
00491C49  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00491C4D  8D 48 01                  LEA ECX,[EAX + 0x1]
00491C50  83 F9 05                  CMP ECX,0x5
00491C53  7D 5C                     JGE 0x00491cb1
00491C55  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
00491C5C  8B D0                     MOV EDX,EAX
00491C5E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00491C61  0F AF D1                  IMUL EDX,ECX
00491C64  8D 1C 00                  LEA EBX,[EAX + EAX*0x1]
00491C67  03 D7                     ADD EDX,EDI
00491C69  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
00491C6D  03 D0                     ADD EDX,EAX
00491C6F  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
00491C74  8D 71 01                  LEA ESI,[ECX + 0x1]
00491C77  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
LAB_00491c7a:
00491C7A  66 83 3F 00               CMP word ptr [EDI],0x0
00491C7E  7F 29                     JG 0x00491ca9
00491C80  83 FE 05                  CMP ESI,0x5
00491C83  8B D6                     MOV EDX,ESI
00491C85  7D 22                     JGE 0x00491ca9
LAB_00491c87:
00491C87  33 C0                     XOR EAX,EAX
00491C89  8D 4D E4                  LEA ECX,[EBP + -0x1c]
LAB_00491c8c:
00491C8C  39 11                     CMP dword ptr [ECX],EDX
00491C8E  74 0B                     JZ 0x00491c9b
00491C90  40                        INC EAX
00491C91  83 C1 04                  ADD ECX,0x4
00491C94  83 F8 05                  CMP EAX,0x5
00491C97  7C F3                     JL 0x00491c8c
00491C99  EB 08                     JMP 0x00491ca3
LAB_00491c9b:
00491C9B  C7 44 85 D0 FF FF FF FF   MOV dword ptr [EBP + EAX*0x4 + -0x30],0xffffffff
LAB_00491ca3:
00491CA3  42                        INC EDX
00491CA4  83 FA 05                  CMP EDX,0x5
00491CA7  7C DE                     JL 0x00491c87
LAB_00491ca9:
00491CA9  03 FB                     ADD EDI,EBX
00491CAB  46                        INC ESI
00491CAC  83 FE 06                  CMP ESI,0x6
00491CAF  7C C9                     JL 0x00491c7a
LAB_00491cb1:
00491CB1  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00491CB5  8D 50 FF                  LEA EDX,[EAX + -0x1]
00491CB8  85 D2                     TEST EDX,EDX
00491CBA  7C 59                     JL 0x00491d15
00491CBC  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
00491CC3  8B C8                     MOV ECX,EAX
00491CC5  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00491CC8  0F AF CA                  IMUL ECX,EDX
00491CCB  8B F8                     MOV EDI,EAX
00491CCD  03 CB                     ADD ECX,EBX
00491CCF  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
00491CD3  F7 DF                     NEG EDI
00491CD5  D1 E7                     SHL EDI,0x1
00491CD7  03 C8                     ADD ECX,EAX
00491CD9  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
00491CDE  8D 1C 48                  LEA EBX,[EAX + ECX*0x2]
LAB_00491ce1:
00491CE1  66 83 3B 00               CMP word ptr [EBX],0x0
00491CE5  7F 27                     JG 0x00491d0e
00491CE7  83 FA 01                  CMP EDX,0x1
00491CEA  8D 72 FF                  LEA ESI,[EDX + -0x1]
00491CED  7C 1F                     JL 0x00491d0e
LAB_00491cef:
00491CEF  33 C0                     XOR EAX,EAX
00491CF1  8D 4D E4                  LEA ECX,[EBP + -0x1c]
LAB_00491cf4:
00491CF4  39 31                     CMP dword ptr [ECX],ESI
00491CF6  74 0B                     JZ 0x00491d03
00491CF8  40                        INC EAX
00491CF9  83 C1 04                  ADD ECX,0x4
00491CFC  83 F8 05                  CMP EAX,0x5
00491CFF  7C F3                     JL 0x00491cf4
00491D01  EB 08                     JMP 0x00491d0b
LAB_00491d03:
00491D03  C7 44 85 D0 FF FF FF FF   MOV dword ptr [EBP + EAX*0x4 + -0x30],0xffffffff
LAB_00491d0b:
00491D0B  4E                        DEC ESI
00491D0C  79 E1                     JNS 0x00491cef
LAB_00491d0e:
00491D0E  4A                        DEC EDX
00491D0F  03 DF                     ADD EBX,EDI
00491D11  85 D2                     TEST EDX,EDX
00491D13  7D CC                     JGE 0x00491ce1
LAB_00491d15:
00491D15  83 CA FF                  OR EDX,0xffffffff
00491D18  33 C9                     XOR ECX,ECX
00491D1A  C7 45 10 00 CA 9A 3B      MOV dword ptr [EBP + 0x10],0x3b9aca00
00491D21  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_00491d24:
00491D24  8B 44 0D D0               MOV EAX,dword ptr [EBP + ECX*0x1 + -0x30]
00491D28  83 F8 FF                  CMP EAX,-0x1
00491D2B  0F 84 90 00 00 00         JZ 0x00491dc1
00491D31  83 FA FF                  CMP EDX,-0x1
00491D34  74 58                     JZ 0x00491d8e
00491D36  8B 74 0D BC               MOV ESI,dword ptr [EBP + ECX*0x1 + -0x44]
00491D3A  83 FE 01                  CMP ESI,0x1
00491D3D  75 08                     JNZ 0x00491d47
00491D3F  8B 7C 95 BC               MOV EDI,dword ptr [EBP + EDX*0x4 + -0x44]
00491D43  85 FF                     TEST EDI,EDI
00491D45  74 47                     JZ 0x00491d8e
LAB_00491d47:
00491D47  85 F6                     TEST ESI,ESI
00491D49  75 07                     JNZ 0x00491d52
00491D4B  83 7C 95 BC 01            CMP dword ptr [EBP + EDX*0x4 + -0x44],0x1
00491D50  74 6F                     JZ 0x00491dc1
LAB_00491d52:
00491D52  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
00491D59  8B 7C C5 A0               MOV EDI,dword ptr [EBP + EAX*0x8 + -0x60]
00491D5D  8B 5C 0D E4               MOV EBX,dword ptr [EBP + ECX*0x1 + -0x1c]
00491D61  0F AF FE                  IMUL EDI,ESI
00491D64  0F BF 35 7E B2 7F 00      MOVSX ESI,word ptr [0x007fb27e]
00491D6B  0F AF DE                  IMUL EBX,ESI
00491D6E  03 FB                     ADD EDI,EBX
00491D70  8B 5C C5 9C               MOV EBX,dword ptr [EBP + EAX*0x8 + -0x64]
00491D74  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
00491D79  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00491D7C  03 FB                     ADD EDI,EBX
00491D7E  0F BF 04 78               MOVSX EAX,word ptr [EAX + EDI*0x2]
00491D82  3B C6                     CMP EAX,ESI
00491D84  7D 3B                     JGE 0x00491dc1
00491D86  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00491D89  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00491D8C  EB 33                     JMP 0x00491dc1
LAB_00491d8e:
00491D8E  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
00491D95  8B 7C C5 A0               MOV EDI,dword ptr [EBP + EAX*0x8 + -0x60]
00491D99  8B 5C 0D E4               MOV EBX,dword ptr [EBP + ECX*0x1 + -0x1c]
00491D9D  0F AF FE                  IMUL EDI,ESI
00491DA0  0F BF 35 7E B2 7F 00      MOVSX ESI,word ptr [0x007fb27e]
00491DA7  0F AF DE                  IMUL EBX,ESI
00491DAA  8B 74 C5 9C               MOV ESI,dword ptr [EBP + EAX*0x8 + -0x64]
00491DAE  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
00491DB3  03 FB                     ADD EDI,EBX
00491DB5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00491DB8  03 FE                     ADD EDI,ESI
00491DBA  0F BF 04 78               MOVSX EAX,word ptr [EAX + EDI*0x2]
00491DBE  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00491dc1:
00491DC1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00491DC4  83 C1 04                  ADD ECX,0x4
00491DC7  47                        INC EDI
00491DC8  83 F9 14                  CMP ECX,0x14
00491DCB  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00491DCE  0F 8C 50 FF FF FF         JL 0x00491d24
00491DD4  83 FA FF                  CMP EDX,-0x1
00491DD7  75 0B                     JNZ 0x00491de4
00491DD9  5F                        POP EDI
00491DDA  5E                        POP ESI
00491DDB  0B C2                     OR EAX,EDX
00491DDD  5B                        POP EBX
00491DDE  8B E5                     MOV ESP,EBP
00491DE0  5D                        POP EBP
00491DE1  C2 30 00                  RET 0x30
LAB_00491de4:
00491DE4  8B 44 95 D0               MOV EAX,dword ptr [EBP + EDX*0x4 + -0x30]
00491DE8  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00491DEB  C1 E0 03                  SHL EAX,0x3
00491DEE  66 8B 54 95 E4            MOV DX,word ptr [EBP + EDX*0x4 + -0x1c]
00491DF3  5F                        POP EDI
00491DF4  66 8B 4C 05 9C            MOV CX,word ptr [EBP + EAX*0x1 + -0x64]
00491DF9  66 8B 44 05 A0            MOV AX,word ptr [EBP + EAX*0x1 + -0x60]
00491DFE  66 89 0E                  MOV word ptr [ESI],CX
00491E01  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00491E04  5E                        POP ESI
00491E05  5B                        POP EBX
00491E06  66 89 01                  MOV word ptr [ECX],AX
00491E09  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00491E0C  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00491E0F  66 89 10                  MOV word ptr [EAX],DX
00491E12  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
00491E16  66 89 01                  MOV word ptr [ECX],AX
00491E19  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
00491E1C  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
00491E20  66 89 01                  MOV word ptr [ECX],AX
00491E23  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
00491E26  33 C0                     XOR EAX,EAX
00491E28  66 89 11                  MOV word ptr [ECX],DX
00491E2B  8B E5                     MOV ESP,EBP
00491E2D  5D                        POP EBP
00491E2E  C2 30 00                  RET 0x30
switchD_00491ace::default:
00491E31  68 04 BB 7A 00            PUSH 0x7abb04
00491E36  68 CC 4C 7A 00            PUSH 0x7a4ccc
00491E3B  52                        PUSH EDX
00491E3C  52                        PUSH EDX
00491E3D  68 71 50 00 00            PUSH 0x5071
00491E42  68 3C 9D 7A 00            PUSH 0x7a9d3c
00491E47  E8 84 B6 21 00            CALL 0x006ad4d0
00491E4C  83 C4 18                  ADD ESP,0x18
00491E4F  85 C0                     TEST EAX,EAX
00491E51  74 01                     JZ 0x00491e54
00491E53  CC                        INT3
LAB_00491e54:
00491E54  5F                        POP EDI
00491E55  5E                        POP ESI
00491E56  B8 FE FF FF FF            MOV EAX,0xfffffffe
00491E5B  5B                        POP EBX
00491E5C  8B E5                     MOV ESP,EBP
00491E5E  5D                        POP EBP
00491E5F  C2 30 00                  RET 0x30
