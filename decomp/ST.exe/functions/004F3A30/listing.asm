CPanelTy::PaintTxtBut:
004F3A30  55                        PUSH EBP
004F3A31  8B EC                     MOV EBP,ESP
004F3A33  83 EC 58                  SUB ESP,0x58
004F3A36  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F3A39  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004F3A3C  81 E2 FF 00 00 00         AND EDX,0xff
004F3A42  53                        PUSH EBX
004F3A43  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004F3A46  56                        PUSH ESI
004F3A47  8B 5C 91 3C               MOV EBX,dword ptr [ECX + EDX*0x4 + 0x3c]
004F3A4B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004F3A52  8B 30                     MOV ESI,dword ptr [EAX]
004F3A54  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004F3A57  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
004F3A5A  2B F3                     SUB ESI,EBX
004F3A5C  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004F3A5F  8D 72 FF                  LEA ESI,[EDX + -0x1]
004F3A62  83 FE 06                  CMP ESI,0x6
004F3A65  57                        PUSH EDI
004F3A66  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F3A69  0F 87 6C 01 00 00         JA 0x004f3bdb
switchD_004f3a6f::switchD:
004F3A6F  FF 24 B5 40 3C 4F 00      JMP dword ptr [ESI*0x4 + 0x4f3c40]
switchD_004f3a6f::caseD_1:
004F3A76  8B B1 34 01 00 00         MOV ESI,dword ptr [ECX + 0x134]
004F3A7C  EB 2C                     JMP 0x004f3aaa
switchD_004f3a6f::caseD_3:
004F3A7E  8B B1 34 01 00 00         MOV ESI,dword ptr [ECX + 0x134]
004F3A84  85 F6                     TEST ESI,ESI
004F3A86  74 35                     JZ 0x004f3abd
004F3A88  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F3A8F  EB 32                     JMP 0x004f3ac3
switchD_004f3a6f::caseD_5:
004F3A91  8B B1 38 01 00 00         MOV ESI,dword ptr [ECX + 0x138]
004F3A97  85 F6                     TEST ESI,ESI
004F3A99  74 22                     JZ 0x004f3abd
004F3A9B  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F3AA2  EB 1F                     JMP 0x004f3ac3
switchD_004f3a6f::caseD_7:
004F3AA4  8B B1 38 01 00 00         MOV ESI,dword ptr [ECX + 0x138]
LAB_004f3aaa:
004F3AAA  85 F6                     TEST ESI,ESI
004F3AAC  74 09                     JZ 0x004f3ab7
004F3AAE  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F3AB5  EB 0C                     JMP 0x004f3ac3
LAB_004f3ab7:
004F3AB7  2B 81 C0 00 00 00         SUB EAX,dword ptr [ECX + 0xc0]
LAB_004f3abd:
004F3ABD  2B 05 34 67 80 00         SUB EAX,dword ptr [0x00806734]
LAB_004f3ac3:
004F3AC3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004F3AC6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004F3AC9  85 C0                     TEST EAX,EAX
004F3ACB  0F 84 63 01 00 00         JZ 0x004f3c34
004F3AD1  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004F3AD7  8D 45 AC                  LEA EAX,[EBP + -0x54]
004F3ADA  8D 55 A8                  LEA EDX,[EBP + -0x58]
004F3ADD  6A 00                     PUSH 0x0
004F3ADF  50                        PUSH EAX
004F3AE0  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004F3AE3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F3AE9  E8 02 9D 23 00            CALL 0x0072d7f0
004F3AEE  8B F0                     MOV ESI,EAX
004F3AF0  83 C4 08                  ADD ESP,0x8
004F3AF3  85 F6                     TEST ESI,ESI
004F3AF5  0F 85 FA 00 00 00         JNZ 0x004f3bf5
004F3AFB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F3AFE  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004F3B01  6A 01                     PUSH 0x1
004F3B03  50                        PUSH EAX
004F3B04  51                        PUSH ECX
004F3B05  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F3B0B  53                        PUSH EBX
004F3B0C  E8 CF E1 1F 00            CALL 0x006f1ce0
004F3B11  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004F3B14  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004F3B17  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004F3B1A  50                        PUSH EAX
004F3B1B  81 E6 FF 00 00 00         AND ESI,0xff
004F3B21  53                        PUSH EBX
004F3B22  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
004F3B25  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F3B28  8B 84 B7 80 01 00 00      MOV EAX,dword ptr [EDI + ESI*0x4 + 0x180]
004F3B2F  53                        PUSH EBX
004F3B30  52                        PUSH EDX
004F3B31  50                        PUSH EAX
004F3B32  E8 F2 F6 F0 FF            CALL 0x00403229
004F3B37  83 C4 14                  ADD ESP,0x14
004F3B3A  8D 4D FC                  LEA ECX,[EBP + -0x4]
004F3B3D  51                        PUSH ECX
004F3B3E  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F3B44  E8 97 E5 1F 00            CALL 0x006f20e0
004F3B49  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004F3B4C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F3B4F  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004F3B52  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
004F3B55  52                        PUSH EDX
004F3B56  8B 94 B7 80 01 00 00      MOV EDX,dword ptr [EDI + ESI*0x4 + 0x180]
004F3B5D  50                        PUSH EAX
004F3B5E  53                        PUSH EBX
004F3B5F  51                        PUSH ECX
004F3B60  8B 8F B8 01 00 00         MOV ECX,dword ptr [EDI + 0x1b8]
004F3B66  6A 00                     PUSH 0x0
004F3B68  52                        PUSH EDX
004F3B69  E8 22 CF 21 00            CALL 0x00710a90
004F3B6E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F3B71  6A FF                     PUSH -0x1
004F3B73  6A FF                     PUSH -0x1
004F3B75  50                        PUSH EAX
004F3B76  FF 55 1C                  CALL dword ptr [EBP + 0x1c]
004F3B79  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
004F3B7F  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004F3B82  83 C4 04                  ADD ESP,0x4
004F3B85  50                        PUSH EAX
004F3B86  6A FF                     PUSH -0x1
004F3B88  6A FE                     PUSH -0x2
004F3B8A  51                        PUSH ECX
004F3B8B  52                        PUSH EDX
004F3B8C  E8 AF C5 1B 00            CALL 0x006b0140
004F3B91  8B 8F B8 01 00 00         MOV ECX,dword ptr [EDI + 0x1b8]
004F3B97  50                        PUSH EAX
004F3B98  E8 D3 DF 21 00            CALL 0x00711b70
004F3B9D  80 7D 08 0B               CMP byte ptr [EBP + 0x8],0xb
004F3BA1  73 26                     JNC 0x004f3bc9
004F3BA3  8B 84 B7 48 01 00 00      MOV EAX,dword ptr [EDI + ESI*0x4 + 0x148]
004F3BAA  85 C0                     TEST EAX,EAX
004F3BAC  7C 1B                     JL 0x004f3bc9
004F3BAE  8B 8C B7 94 00 00 00      MOV ECX,dword ptr [EDI + ESI*0x4 + 0x94]
004F3BB5  8B 54 B7 3C               MOV EDX,dword ptr [EDI + ESI*0x4 + 0x3c]
004F3BB9  51                        PUSH ECX
004F3BBA  52                        PUSH EDX
004F3BBB  6A FF                     PUSH -0x1
004F3BBD  50                        PUSH EAX
004F3BBE  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F3BC3  50                        PUSH EAX
004F3BC4  E8 77 FA 1B 00            CALL 0x006b3640
LAB_004f3bc9:
004F3BC9  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004F3BCC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F3BD2  5F                        POP EDI
004F3BD3  5E                        POP ESI
004F3BD4  5B                        POP EBX
004F3BD5  8B E5                     MOV ESP,EBP
004F3BD7  5D                        POP EBP
004F3BD8  C2 18 00                  RET 0x18
switchD_004f3a6f::caseD_2:
004F3BDB  8B B1 30 01 00 00         MOV ESI,dword ptr [ECX + 0x130]
004F3BE1  85 F6                     TEST ESI,ESI
004F3BE3  0F 84 D4 FE FF FF         JZ 0x004f3abd
004F3BE9  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F3BF0  E9 CE FE FF FF            JMP 0x004f3ac3
LAB_004f3bf5:
004F3BF5  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
004F3BF8  68 68 1B 7C 00            PUSH 0x7c1b68
004F3BFD  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F3C02  56                        PUSH ESI
004F3C03  6A 00                     PUSH 0x0
004F3C05  68 F8 01 00 00            PUSH 0x1f8
004F3C0A  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F3C0F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F3C15  E8 B6 98 1B 00            CALL 0x006ad4d0
004F3C1A  83 C4 18                  ADD ESP,0x18
004F3C1D  85 C0                     TEST EAX,EAX
004F3C1F  74 01                     JZ 0x004f3c22
004F3C21  CC                        INT3
LAB_004f3c22:
004F3C22  68 F8 01 00 00            PUSH 0x1f8
004F3C27  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F3C2C  6A 00                     PUSH 0x0
004F3C2E  56                        PUSH ESI
004F3C2F  E8 0C 22 1B 00            CALL 0x006a5e40
LAB_004f3c34:
004F3C34  5F                        POP EDI
004F3C35  5E                        POP ESI
004F3C36  5B                        POP EBX
004F3C37  8B E5                     MOV ESP,EBP
004F3C39  5D                        POP EBP
004F3C3A  C2 18 00                  RET 0x18
