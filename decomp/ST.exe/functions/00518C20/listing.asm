FUN_00518c20:
00518C20  55                        PUSH EBP
00518C21  8B EC                     MOV EBP,ESP
00518C23  81 EC A0 00 00 00         SUB ESP,0xa0
00518C29  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
00518C2E  53                        PUSH EBX
00518C2F  33 DB                     XOR EBX,EBX
00518C31  56                        PUSH ESI
00518C32  3B C3                     CMP EAX,EBX
00518C34  57                        PUSH EDI
00518C35  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
00518C38  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00518C3B  88 5D F7                  MOV byte ptr [EBP + -0x9],BL
00518C3E  0F 84 7F 10 00 00         JZ 0x00519cc3
00518C44  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00518C49  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
00518C4F  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
00518C55  53                        PUSH EBX
00518C56  52                        PUSH EDX
00518C57  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
00518C5D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00518C63  E8 88 4B 21 00            CALL 0x0072d7f0
00518C68  8B F0                     MOV ESI,EAX
00518C6A  83 C4 08                  ADD ESP,0x8
00518C6D  3B F3                     CMP ESI,EBX
00518C6F  0F 85 0E 10 00 00         JNZ 0x00519c83
00518C75  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00518C78  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
00518C7B  84 C0                     TEST AL,AL
00518C7D  0F 85 86 00 00 00         JNZ 0x00518d09
00518C83  8A 86 A1 01 00 00         MOV AL,byte ptr [ESI + 0x1a1]
00518C89  84 C0                     TEST AL,AL
00518C8B  74 16                     JZ 0x00518ca3
00518C8D  3C 06                     CMP AL,0x6
00518C8F  74 12                     JZ 0x00518ca3
00518C91  3C 0A                     CMP AL,0xa
00518C93  74 0E                     JZ 0x00518ca3
00518C95  88 9E A2 01 00 00         MOV byte ptr [ESI + 0x1a2],BL
00518C9B  89 9E AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EBX
00518CA1  EB 12                     JMP 0x00518cb5
LAB_00518ca3:
00518CA3  88 86 A2 01 00 00         MOV byte ptr [ESI + 0x1a2],AL
00518CA9  8B 86 A3 01 00 00         MOV EAX,dword ptr [ESI + 0x1a3]
00518CAF  89 86 AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EAX
LAB_00518cb5:
00518CB5  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00518CBB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00518CBE  3B C3                     CMP EAX,EBX
00518CC0  C6 86 A1 01 00 00 03      MOV byte ptr [ESI + 0x1a1],0x3
00518CC7  89 BE A3 01 00 00         MOV dword ptr [ESI + 0x1a3],EDI
00518CCD  66 C7 86 AF 01 00 00 32 00  MOV word ptr [ESI + 0x1af],0x32
00518CD6  66 C7 86 B1 01 00 00 05 00  MOV word ptr [ESI + 0x1b1],0x5
00518CDF  74 2B                     JZ 0x00518d0c
00518CE1  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
00518CE8  66 89 5E 2C               MOV word ptr [ESI + 0x2c],BX
00518CEC  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
00518CF2  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
00518CF5  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00518CFB  3B CB                     CMP ECX,EBX
00518CFD  74 0D                     JZ 0x00518d0c
00518CFF  8B 11                     MOV EDX,dword ptr [ECX]
00518D01  8D 46 18                  LEA EAX,[ESI + 0x18]
00518D04  50                        PUSH EAX
00518D05  FF 12                     CALL dword ptr [EDX]
00518D07  EB 03                     JMP 0x00518d0c
LAB_00518d09:
00518D09  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_00518d0c:
00518D0C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00518D12  57                        PUSH EDI
00518D13  E8 42 92 EE FF            CALL 0x00401f5a
00518D18  8A D8                     MOV BL,AL
00518D1A  6A 00                     PUSH 0x0
00518D1C  88 5D E4                  MOV byte ptr [EBP + -0x1c],BL
00518D1F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00518D22  8B C8                     MOV ECX,EAX
00518D24  50                        PUSH EAX
00518D25  81 E1 FF 00 00 00         AND ECX,0xff
00518D2B  57                        PUSH EDI
00518D2C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00518D2F  E8 50 A9 EE FF            CALL 0x00403684
00518D34  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00518D37  83 C4 0C                  ADD ESP,0xc
00518D3A  50                        PUSH EAX
00518D3B  51                        PUSH ECX
00518D3C  68 FB 55 00 00            PUSH 0x55fb
00518D41  8B CE                     MOV ECX,ESI
00518D43  E8 B1 B1 EE FF            CALL 0x00403ef9
00518D48  8B 96 3C 02 00 00         MOV EDX,dword ptr [ESI + 0x23c]
00518D4E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00518D51  52                        PUSH EDX
00518D52  50                        PUSH EAX
00518D53  8D 4D FC                  LEA ECX,[EBP + -0x4]
00518D56  57                        PUSH EDI
00518D57  51                        PUSH ECX
00518D58  8B CE                     MOV ECX,ESI
00518D5A  E8 19 B0 EE FF            CALL 0x00403d78
00518D5F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00518D62  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
00518D68  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518D6E  6A 0F                     PUSH 0xf
00518D70  68 9C 01 00 00            PUSH 0x19c
00518D75  52                        PUSH EDX
00518D76  6A 00                     PUSH 0x0
00518D78  6A 00                     PUSH 0x0
00518D7A  50                        PUSH EAX
00518D7B  E8 10 7D 1F 00            CALL 0x00710a90
00518D80  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00518D86  6A 03                     PUSH 0x3
00518D88  6A FF                     PUSH -0x1
00518D8A  6A FF                     PUSH -0x1
00518D8C  51                        PUSH ECX
00518D8D  68 4A 56 00 00            PUSH 0x564a
00518D92  E8 A9 73 19 00            CALL 0x006b0140
00518D97  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518D9D  50                        PUSH EAX
00518D9E  E8 1D 8C 1F 00            CALL 0x007119c0
00518DA3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00518DA6  6A FF                     PUSH -0x1
00518DA8  83 C0 0F                  ADD EAX,0xf
00518DAB  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00518DB2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00518DB5  8D 47 41                  LEA EAX,[EDI + 0x41]
00518DB8  50                        PUSH EAX
00518DB9  68 50 14 80 00            PUSH 0x801450
00518DBE  E8 0D 82 19 00            CALL 0x006b0fd0
00518DC3  83 C4 0C                  ADD ESP,0xc
00518DC6  85 C0                     TEST EAX,EAX
00518DC8  74 09                     JZ 0x00518dd3
00518DCA  C7 45 F8 9F 3A 00 00      MOV dword ptr [EBP + -0x8],0x3a9f
00518DD1  EB 3E                     JMP 0x00518e11
LAB_00518dd3:
00518DD3  8D 47 41                  LEA EAX,[EDI + 0x41]
00518DD6  6A FF                     PUSH -0x1
00518DD8  50                        PUSH EAX
00518DD9  68 80 14 80 00            PUSH 0x801480
00518DDE  E8 ED 81 19 00            CALL 0x006b0fd0
00518DE3  83 C4 0C                  ADD ESP,0xc
00518DE6  85 C0                     TEST EAX,EAX
00518DE8  74 09                     JZ 0x00518df3
00518DEA  C7 45 F8 A0 3A 00 00      MOV dword ptr [EBP + -0x8],0x3aa0
00518DF1  EB 1E                     JMP 0x00518e11
LAB_00518df3:
00518DF3  8D 47 41                  LEA EAX,[EDI + 0x41]
00518DF6  6A FF                     PUSH -0x1
00518DF8  50                        PUSH EAX
00518DF9  68 10 0F 80 00            PUSH 0x800f10
00518DFE  E8 CD 81 19 00            CALL 0x006b0fd0
00518E03  83 C4 0C                  ADD ESP,0xc
00518E06  85 C0                     TEST EAX,EAX
00518E08  74 07                     JZ 0x00518e11
00518E0A  C7 45 F8 A2 3A 00 00      MOV dword ptr [EBP + -0x8],0x3aa2
LAB_00518e11:
00518E11  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00518E14  85 C0                     TEST EAX,EAX
00518E16  0F 84 9F 00 00 00         JZ 0x00518ebb
00518E1C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00518E1F  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
00518E25  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518E2B  6A 0F                     PUSH 0xf
00518E2D  68 91 00 00 00            PUSH 0x91
00518E32  52                        PUSH EDX
00518E33  6A 00                     PUSH 0x0
00518E35  6A 00                     PUSH 0x0
00518E37  50                        PUSH EAX
00518E38  E8 53 7C 1F 00            CALL 0x00710a90
00518E3D  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00518E43  6A 03                     PUSH 0x3
00518E45  6A FF                     PUSH -0x1
00518E47  6A FD                     PUSH -0x3
00518E49  51                        PUSH ECX
00518E4A  68 54 56 00 00            PUSH 0x5654
00518E4F  E8 EC 72 19 00            CALL 0x006b0140
00518E54  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518E5A  50                        PUSH EAX
00518E5B  E8 60 8B 1F 00            CALL 0x007119c0
00518E60  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00518E63  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
00518E69  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518E6F  6A 0F                     PUSH 0xf
00518E71  68 06 01 00 00            PUSH 0x106
00518E76  52                        PUSH EDX
00518E77  68 96 00 00 00            PUSH 0x96
00518E7C  6A 00                     PUSH 0x0
00518E7E  50                        PUSH EAX
00518E7F  E8 0C 7C 1F 00            CALL 0x00710a90
00518E84  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00518E8A  33 C9                     XOR ECX,ECX
00518E8C  80 FA 03                  CMP DL,0x3
00518E8F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00518E95  0F 95 C1                  SETNZ CL
00518E98  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00518E9B  49                        DEC ECX
00518E9C  83 E1 05                  AND ECX,0x5
00518E9F  51                        PUSH ECX
00518EA0  6A FF                     PUSH -0x1
00518EA2  6A 01                     PUSH 0x1
00518EA4  52                        PUSH EDX
00518EA5  50                        PUSH EAX
00518EA6  E8 95 72 19 00            CALL 0x006b0140
00518EAB  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518EB1  50                        PUSH EAX
00518EB2  E8 09 8B 1F 00            CALL 0x007119c0
00518EB7  83 45 FC 0F               ADD dword ptr [EBP + -0x4],0xf
LAB_00518ebb:
00518EBB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00518EBE  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
00518EC4  6A 0F                     PUSH 0xf
00518EC6  68 91 00 00 00            PUSH 0x91
00518ECB  51                        PUSH ECX
00518ECC  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518ED2  6A 00                     PUSH 0x0
00518ED4  6A 00                     PUSH 0x0
00518ED6  52                        PUSH EDX
00518ED7  E8 B4 7B 1F 00            CALL 0x00710a90
00518EDC  A1 18 76 80 00            MOV EAX,[0x00807618]
00518EE1  6A 03                     PUSH 0x3
00518EE3  6A FF                     PUSH -0x1
00518EE5  6A FD                     PUSH -0x3
00518EE7  50                        PUSH EAX
00518EE8  68 56 56 00 00            PUSH 0x5656
00518EED  E8 4E 72 19 00            CALL 0x006b0140
00518EF2  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518EF8  50                        PUSH EAX
00518EF9  E8 C2 8A 1F 00            CALL 0x007119c0
00518EFE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00518F01  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
00518F07  6A 0F                     PUSH 0xf
00518F09  68 06 01 00 00            PUSH 0x106
00518F0E  51                        PUSH ECX
00518F0F  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518F15  68 96 00 00 00            PUSH 0x96
00518F1A  6A 00                     PUSH 0x0
00518F1C  52                        PUSH EDX
00518F1D  E8 6E 7B 1F 00            CALL 0x00710a90
00518F22  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00518F25  48                        DEC EAX
00518F26  74 11                     JZ 0x00518f39
00518F28  48                        DEC EAX
00518F29  74 07                     JZ 0x00518f32
00518F2B  B8 06 56 00 00            MOV EAX,0x5606
00518F30  EB 0C                     JMP 0x00518f3e
LAB_00518f32:
00518F32  B8 05 56 00 00            MOV EAX,0x5605
00518F37  EB 05                     JMP 0x00518f3e
LAB_00518f39:
00518F39  B8 04 56 00 00            MOV EAX,0x5604
LAB_00518f3e:
00518F3E  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00518F44  33 C9                     XOR ECX,ECX
00518F46  80 FA 03                  CMP DL,0x3
00518F49  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00518F4F  0F 95 C1                  SETNZ CL
00518F52  49                        DEC ECX
00518F53  83 E1 05                  AND ECX,0x5
00518F56  51                        PUSH ECX
00518F57  6A FF                     PUSH -0x1
00518F59  6A 01                     PUSH 0x1
00518F5B  52                        PUSH EDX
00518F5C  50                        PUSH EAX
00518F5D  E8 DE 71 19 00            CALL 0x006b0140
00518F62  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518F68  50                        PUSH EAX
00518F69  E8 52 8A 1F 00            CALL 0x007119c0
00518F6E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00518F71  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518F77  83 C0 0F                  ADD EAX,0xf
00518F7A  6A 0F                     PUSH 0xf
00518F7C  68 91 00 00 00            PUSH 0x91
00518F81  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00518F84  50                        PUSH EAX
00518F85  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
00518F8B  6A 00                     PUSH 0x0
00518F8D  6A 00                     PUSH 0x0
00518F8F  50                        PUSH EAX
00518F90  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00518F97  E8 F4 7A 1F 00            CALL 0x00710a90
00518F9C  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00518FA2  6A 03                     PUSH 0x3
00518FA4  6A FF                     PUSH -0x1
00518FA6  6A FD                     PUSH -0x3
00518FA8  51                        PUSH ECX
00518FA9  68 F7 55 00 00            PUSH 0x55f7
00518FAE  E8 8D 71 19 00            CALL 0x006b0140
00518FB3  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00518FB9  50                        PUSH EAX
00518FBA  E8 01 8A 1F 00            CALL 0x007119c0
00518FBF  80 FB 03                  CMP BL,0x3
00518FC2  75 0C                     JNZ 0x00518fd0
00518FC4  8B 14 BD DC 09 7E 00      MOV EDX,dword ptr [EDI*0x4 + 0x7e09dc]
00518FCB  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00518FCE  EB 0A                     JMP 0x00518fda
LAB_00518fd0:
00518FD0  8B 04 BD 9C 07 7E 00      MOV EAX,dword ptr [EDI*0x4 + 0x7e079c]
00518FD7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00518fda:
00518FDA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00518FDD  85 C0                     TEST EAX,EAX
00518FDF  0F 84 FD 00 00 00         JZ 0x005190e2
00518FE5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00518FE8  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
00518FEE  6A 14                     PUSH 0x14
00518FF0  83 C1 FD                  ADD ECX,-0x3
00518FF3  68 06 01 00 00            PUSH 0x106
00518FF8  51                        PUSH ECX
00518FF9  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
00518FFF  68 96 00 00 00            PUSH 0x96
00519004  6A 00                     PUSH 0x0
00519006  52                        PUSH EDX
00519007  E8 84 7A 1F 00            CALL 0x00710a90
0051900C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0051900F  50                        PUSH EAX
00519010  68 E4 1A 7C 00            PUSH 0x7c1ae4
00519015  68 3A F3 80 00            PUSH 0x80f33a
0051901A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00519020  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00519026  83 C4 0C                  ADD ESP,0xc
00519029  80 E9 03                  SUB CL,0x3
0051902C  F6 D9                     NEG CL
0051902E  1B C9                     SBB ECX,ECX
00519030  83 E1 FB                  AND ECX,0xfffffffb
00519033  83 C1 07                  ADD ECX,0x7
00519036  51                        PUSH ECX
00519037  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
0051903D  6A FF                     PUSH -0x1
0051903F  6A 01                     PUSH 0x1
00519041  68 3A F3 80 00            PUSH 0x80f33a
00519046  E8 75 89 1F 00            CALL 0x007119c0
0051904B  8A D3                     MOV DL,BL
0051904D  8B 86 38 02 00 00         MOV EAX,dword ptr [ESI + 0x238]
00519053  80 EA 03                  SUB DL,0x3
00519056  F6 DA                     NEG DL
00519058  1B D2                     SBB EDX,EDX
0051905A  83 E2 FE                  AND EDX,0xfffffffe
0051905D  83 C2 03                  ADD EDX,0x3
00519060  52                        PUSH EDX
00519061  50                        PUSH EAX
00519062  E8 39 23 1F 00            CALL 0x0070b3a0
00519067  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051906A  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
00519070  83 C4 08                  ADD ESP,0x8
00519073  8B F8                     MOV EDI,EAX
00519075  6A 3A                     PUSH 0x3a
00519077  6A 00                     PUSH 0x0
00519079  57                        PUSH EDI
0051907A  51                        PUSH ECX
0051907B  68 B4 00 00 00            PUSH 0xb4
00519080  6A 00                     PUSH 0x0
00519082  52                        PUSH EDX
00519083  E8 B8 C3 19 00            CALL 0x006b5440
00519088  C7 45 C8 B4 00 00 00      MOV dword ptr [EBP + -0x38],0xb4
0051908F  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00519092  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00519095  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00519098  8A C3                     MOV AL,BL
0051909A  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0051909D  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
005190A0  2C 03                     SUB AL,0x3
005190A2  F6 D8                     NEG AL
005190A4  1B C0                     SBB EAX,EAX
005190A6  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005190A9  24 FC                     AND AL,0xfc
005190AB  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
005190AE  05 E2 00 00 00            ADD EAX,0xe2
005190B3  8D 55 C8                  LEA EDX,[EBP + -0x38]
005190B6  89 45 D9                  MOV dword ptr [EBP + -0x27],EAX
005190B9  8B 86 D7 01 00 00         MOV EAX,dword ptr [ESI + 0x1d7]
005190BF  52                        PUSH EDX
005190C0  50                        PUSH EAX
005190C1  C6 45 D8 01               MOV byte ptr [EBP + -0x28],0x1
005190C5  89 4D DD                  MOV dword ptr [EBP + -0x23],ECX
005190C8  E8 F3 50 19 00            CALL 0x006ae1c0
005190CD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005190D0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005190D3  83 C0 14                  ADD EAX,0x14
005190D6  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
005190DD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005190E0  EB 03                     JMP 0x005190e5
LAB_005190e2:
005190E2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_005190e5:
005190E5  8B 0C BD 5C 05 7E 00      MOV ECX,dword ptr [EDI*0x4 + 0x7e055c]
005190EC  85 C9                     TEST ECX,ECX
005190EE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005190F1  0F 84 DF 00 00 00         JZ 0x005191d6
005190F7  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
005190FD  6A 14                     PUSH 0x14
005190FF  83 C0 FD                  ADD EAX,-0x3
00519102  68 06 01 00 00            PUSH 0x106
00519107  50                        PUSH EAX
00519108  68 96 00 00 00            PUSH 0x96
0051910D  6A 00                     PUSH 0x0
0051910F  51                        PUSH ECX
00519110  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
00519116  E8 75 79 1F 00            CALL 0x00710a90
0051911B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0051911E  52                        PUSH EDX
0051911F  68 E4 1A 7C 00            PUSH 0x7c1ae4
00519124  68 3A F3 80 00            PUSH 0x80f33a
00519129  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0051912F  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00519135  83 C4 0C                  ADD ESP,0xc
00519138  33 C0                     XOR EAX,EAX
0051913A  80 FA 03                  CMP DL,0x3
0051913D  0F 95 C0                  SETNZ AL
00519140  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
00519146  48                        DEC EAX
00519147  83 E0 04                  AND EAX,0x4
0051914A  50                        PUSH EAX
0051914B  6A FF                     PUSH -0x1
0051914D  6A 01                     PUSH 0x1
0051914F  68 3A F3 80 00            PUSH 0x80f33a
00519154  E8 67 88 1F 00            CALL 0x007119c0
00519159  8B 8E 38 02 00 00         MOV ECX,dword ptr [ESI + 0x238]
0051915F  6A 00                     PUSH 0x0
00519161  51                        PUSH ECX
00519162  E8 39 22 1F 00            CALL 0x0070b3a0
00519167  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051916A  83 C4 08                  ADD ESP,0x8
0051916D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00519170  6A 3A                     PUSH 0x3a
00519172  6A 00                     PUSH 0x0
00519174  50                        PUSH EAX
00519175  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051917B  52                        PUSH EDX
0051917C  68 B4 00 00 00            PUSH 0xb4
00519181  6A 00                     PUSH 0x0
00519183  50                        PUSH EAX
00519184  E8 B7 C2 19 00            CALL 0x006b5440
00519189  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0051918C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051918F  C7 45 C8 B4 00 00 00      MOV dword ptr [EBP + -0x38],0xb4
00519196  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00519199  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0051919C  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0051919F  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005191A2  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005191A5  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005191A8  8B 86 D7 01 00 00         MOV EAX,dword ptr [ESI + 0x1d7]
005191AE  8D 55 C8                  LEA EDX,[EBP + -0x38]
005191B1  52                        PUSH EDX
005191B2  50                        PUSH EAX
005191B3  C6 45 D8 01               MOV byte ptr [EBP + -0x28],0x1
005191B7  C7 45 D9 DD 00 00 00      MOV dword ptr [EBP + -0x27],0xdd
005191BE  89 4D DD                  MOV dword ptr [EBP + -0x23],ECX
005191C1  E8 FA 4F 19 00            CALL 0x006ae1c0
005191C6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005191C9  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
005191D0  83 C0 14                  ADD EAX,0x14
005191D3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005191d6:
005191D6  8B 0C BD 28 44 85 00      MOV ECX,dword ptr [EDI*0x4 + 0x854428]
005191DD  85 C9                     TEST ECX,ECX
005191DF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005191E2  0F 84 DD 00 00 00         JZ 0x005192c5
005191E8  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
005191EE  6A 14                     PUSH 0x14
005191F0  83 C0 FD                  ADD EAX,-0x3
005191F3  68 06 01 00 00            PUSH 0x106
005191F8  50                        PUSH EAX
005191F9  68 96 00 00 00            PUSH 0x96
005191FE  6A 00                     PUSH 0x0
00519200  51                        PUSH ECX
00519201  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
00519207  E8 84 78 1F 00            CALL 0x00710a90
0051920C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0051920F  52                        PUSH EDX
00519210  68 E4 1A 7C 00            PUSH 0x7c1ae4
00519215  68 3A F3 80 00            PUSH 0x80f33a
0051921A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00519220  A0 4E 87 80 00            MOV AL,[0x0080874e]
00519225  83 C4 0C                  ADD ESP,0xc
00519228  2C 03                     SUB AL,0x3
0051922A  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
00519230  F6 D8                     NEG AL
00519232  1B C0                     SBB EAX,EAX
00519234  24 FB                     AND AL,0xfb
00519236  83 C0 06                  ADD EAX,0x6
00519239  50                        PUSH EAX
0051923A  6A FF                     PUSH -0x1
0051923C  6A 01                     PUSH 0x1
0051923E  68 3A F3 80 00            PUSH 0x80f33a
00519243  E8 78 87 1F 00            CALL 0x007119c0
00519248  8B 8E 38 02 00 00         MOV ECX,dword ptr [ESI + 0x238]
0051924E  6A 02                     PUSH 0x2
00519250  51                        PUSH ECX
00519251  E8 4A 21 1F 00            CALL 0x0070b3a0
00519256  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00519259  83 C4 08                  ADD ESP,0x8
0051925C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0051925F  6A 3A                     PUSH 0x3a
00519261  6A 00                     PUSH 0x0
00519263  50                        PUSH EAX
00519264  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051926A  52                        PUSH EDX
0051926B  68 B4 00 00 00            PUSH 0xb4
00519270  6A 00                     PUSH 0x0
00519272  50                        PUSH EAX
00519273  E8 C8 C1 19 00            CALL 0x006b5440
00519278  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0051927B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051927E  C7 45 C8 B4 00 00 00      MOV dword ptr [EBP + -0x38],0xb4
00519285  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00519288  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0051928B  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0051928E  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00519291  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00519294  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00519297  8B 86 D7 01 00 00         MOV EAX,dword ptr [ESI + 0x1d7]
0051929D  8D 55 C8                  LEA EDX,[EBP + -0x38]
005192A0  52                        PUSH EDX
005192A1  50                        PUSH EAX
005192A2  C6 45 D8 01               MOV byte ptr [EBP + -0x28],0x1
005192A6  C7 45 D9 DD 00 00 00      MOV dword ptr [EBP + -0x27],0xdd
005192AD  89 4D DD                  MOV dword ptr [EBP + -0x23],ECX
005192B0  E8 0B 4F 19 00            CALL 0x006ae1c0
005192B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005192B8  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
005192BF  83 C0 14                  ADD EAX,0x14
005192C2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005192c5:
005192C5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005192C8  85 C9                     TEST ECX,ECX
005192CA  75 06                     JNZ 0x005192d2
005192CC  83 C0 0F                  ADD EAX,0xf
005192CF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005192d2:
005192D2  B9 01 00 00 00            MOV ECX,0x1
005192D7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005192DA  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005192DD  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
005192E0  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_005192e3:
005192E3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005192E6  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
005192E9  81 E2 FF FF 00 00         AND EDX,0xffff
005192EF  8D 8C 0A D1 0D 7C 00      LEA ECX,[EDX + ECX*0x1 + 0x7c0dd1]
005192F6  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005192F9  80 39 00                  CMP byte ptr [ECX],0x0
005192FC  0F 84 4D 01 00 00         JZ 0x0051944f
00519302  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00519305  85 C9                     TEST ECX,ECX
00519307  74 4A                     JZ 0x00519353
00519309  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051930F  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519315  6A 0F                     PUSH 0xf
00519317  68 91 00 00 00            PUSH 0x91
0051931C  50                        PUSH EAX
0051931D  6A 00                     PUSH 0x0
0051931F  6A 00                     PUSH 0x0
00519321  52                        PUSH EDX
00519322  E8 69 77 1F 00            CALL 0x00710a90
00519327  A1 18 76 80 00            MOV EAX,[0x00807618]
0051932C  6A 03                     PUSH 0x3
0051932E  6A FF                     PUSH -0x1
00519330  6A FD                     PUSH -0x3
00519332  50                        PUSH EAX
00519333  68 57 56 00 00            PUSH 0x5657
00519338  E8 03 6E 19 00            CALL 0x006b0140
0051933D  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519343  50                        PUSH EAX
00519344  E8 77 86 1F 00            CALL 0x007119c0
00519349  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051934C  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_00519353:
00519353  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
00519359  6A 0F                     PUSH 0xf
0051935B  68 06 01 00 00            PUSH 0x106
00519360  50                        PUSH EAX
00519361  68 96 00 00 00            PUSH 0x96
00519366  6A 00                     PUSH 0x0
00519368  51                        PUSH ECX
00519369  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051936F  E8 1C 77 1F 00            CALL 0x00710a90
00519374  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051937A  33 D2                     XOR EDX,EDX
0051937C  80 F9 03                  CMP CL,0x3
0051937F  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00519382  A1 18 76 80 00            MOV EAX,[0x00807618]
00519387  0F 95 C2                  SETNZ DL
0051938A  8A 0F                     MOV CL,byte ptr [EDI]
0051938C  4A                        DEC EDX
0051938D  83 E2 05                  AND EDX,0x5
00519390  52                        PUSH EDX
00519391  6A FF                     PUSH -0x1
00519393  6A 01                     PUSH 0x1
00519395  50                        PUSH EAX
00519396  6A 00                     PUSH 0x0
00519398  51                        PUSH ECX
00519399  E8 8B B7 EE FF            CALL 0x00404b29
0051939E  83 C4 08                  ADD ESP,0x8
005193A1  50                        PUSH EAX
005193A2  E8 99 6D 19 00            CALL 0x006b0140
005193A7  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
005193AD  50                        PUSH EAX
005193AE  E8 0D 86 1F 00            CALL 0x007119c0
005193B3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005193B6  8A 17                     MOV DL,byte ptr [EDI]
005193B8  83 C1 0F                  ADD ECX,0xf
005193BB  6A 00                     PUSH 0x0
005193BD  52                        PUSH EDX
005193BE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005193C1  E8 2A A0 EE FF            CALL 0x004033f0
005193C6  50                        PUSH EAX
005193C7  8B 86 30 02 00 00         MOV EAX,dword ptr [ESI + 0x230]
005193CD  50                        PUSH EAX
005193CE  E8 CD 1F 1F 00            CALL 0x0070b3a0
005193D3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005193D6  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
005193DC  8B F8                     MOV EDI,EAX
005193DE  57                        PUSH EDI
005193DF  6A 01                     PUSH 0x1
005193E1  51                        PUSH ECX
005193E2  68 96 00 00 00            PUSH 0x96
005193E7  52                        PUSH EDX
005193E8  E8 3C 9E EE FF            CALL 0x00403229
005193ED  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005193F0  C7 45 A4 96 00 00 00      MOV dword ptr [EBP + -0x5c],0x96
005193F7  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005193FA  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
005193FD  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00519400  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00519403  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
00519406  33 C0                     XOR EAX,EAX
00519408  8A 01                     MOV AL,byte ptr [ECX]
0051940A  83 C4 24                  ADD ESP,0x24
0051940D  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
00519410  89 45 B5                  MOV dword ptr [EBP + -0x4b],EAX
00519413  8B 86 D7 01 00 00         MOV EAX,dword ptr [ESI + 0x1d7]
00519419  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0051941C  52                        PUSH EDX
0051941D  50                        PUSH EAX
0051941E  C6 45 B4 05               MOV byte ptr [EBP + -0x4c],0x5
00519422  C7 45 B9 00 00 00 00      MOV dword ptr [EBP + -0x47],0x0
00519429  E8 92 4D 19 00            CALL 0x006ae1c0
0051942E  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00519431  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00519434  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00519437  8D 44 0A 05               LEA EAX,[EDX + ECX*0x1 + 0x5]
0051943B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0051943E  41                        INC ECX
0051943F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00519442  66 83 F9 03               CMP CX,0x3
00519446  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00519449  0F 82 94 FE FF FF         JC 0x005192e3
LAB_0051944f:
0051944F  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519455  6A 0F                     PUSH 0xf
00519457  68 9C 01 00 00            PUSH 0x19c
0051945C  50                        PUSH EAX
0051945D  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
00519463  6A 00                     PUSH 0x0
00519465  6A 00                     PUSH 0x0
00519467  50                        PUSH EAX
00519468  E8 23 76 1F 00            CALL 0x00710a90
0051946D  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00519473  6A 03                     PUSH 0x3
00519475  6A FF                     PUSH -0x1
00519477  6A FF                     PUSH -0x1
00519479  51                        PUSH ECX
0051947A  68 4B 56 00 00            PUSH 0x564b
0051947F  E8 BC 6C 19 00            CALL 0x006b0140
00519484  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051948A  50                        PUSH EAX
0051948B  E8 30 85 1F 00            CALL 0x007119c0
00519490  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00519493  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
00519499  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051949F  83 C0 0F                  ADD EAX,0xf
005194A2  6A 0F                     PUSH 0xf
005194A4  68 06 01 00 00            PUSH 0x106
005194A9  50                        PUSH EAX
005194AA  68 96 00 00 00            PUSH 0x96
005194AF  6A 00                     PUSH 0x0
005194B1  52                        PUSH EDX
005194B2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005194B5  E8 D6 75 1F 00            CALL 0x00710a90
005194BA  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
005194C0  33 C0                     XOR EAX,EAX
005194C2  80 FA 03                  CMP DL,0x3
005194C5  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005194CB  0F 95 C0                  SETNZ AL
005194CE  48                        DEC EAX
005194CF  83 E0 05                  AND EAX,0x5
005194D2  50                        PUSH EAX
005194D3  6A FF                     PUSH -0x1
005194D5  6A 01                     PUSH 0x1
005194D7  51                        PUSH ECX
005194D8  68 4C 56 00 00            PUSH 0x564c
005194DD  E8 5E 6C 19 00            CALL 0x006b0140
005194E2  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
005194E8  50                        PUSH EAX
005194E9  E8 D2 84 1F 00            CALL 0x007119c0
005194EE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005194F1  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
005194F7  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
005194FD  6A 0F                     PUSH 0xf
005194FF  68 91 00 00 00            PUSH 0x91
00519504  52                        PUSH EDX
00519505  6A 00                     PUSH 0x0
00519507  6A 00                     PUSH 0x0
00519509  50                        PUSH EAX
0051950A  E8 81 75 1F 00            CALL 0x00710a90
0051950F  8B 0C BD AC FB 7D 00      MOV ECX,dword ptr [EDI*0x4 + 0x7dfbac]
00519516  51                        PUSH ECX
00519517  68 90 18 7C 00            PUSH 0x7c1890
0051951C  68 3A F3 80 00            PUSH 0x80f33a
00519521  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00519527  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051952D  83 C4 0C                  ADD ESP,0xc
00519530  6A 02                     PUSH 0x2
00519532  6A FF                     PUSH -0x1
00519534  6A FD                     PUSH -0x3
00519536  68 3A F3 80 00            PUSH 0x80f33a
0051953B  E8 80 84 1F 00            CALL 0x007119c0
00519540  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00519543  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
00519549  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051954F  83 C0 0F                  ADD EAX,0xf
00519552  6A 0F                     PUSH 0xf
00519554  68 06 01 00 00            PUSH 0x106
00519559  50                        PUSH EAX
0051955A  68 96 00 00 00            PUSH 0x96
0051955F  6A 00                     PUSH 0x0
00519561  52                        PUSH EDX
00519562  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00519565  E8 26 75 1F 00            CALL 0x00710a90
0051956A  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00519570  33 C0                     XOR EAX,EAX
00519572  80 FA 03                  CMP DL,0x3
00519575  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051957B  0F 95 C0                  SETNZ AL
0051957E  48                        DEC EAX
0051957F  83 E0 05                  AND EAX,0x5
00519582  50                        PUSH EAX
00519583  6A FF                     PUSH -0x1
00519585  6A 01                     PUSH 0x1
00519587  51                        PUSH ECX
00519588  68 58 56 00 00            PUSH 0x5658
0051958D  E8 AE 6B 19 00            CALL 0x006b0140
00519592  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519598  50                        PUSH EAX
00519599  E8 22 84 1F 00            CALL 0x007119c0
0051959E  A1 70 FC 7D 00            MOV EAX,[0x007dfc70]
005195A3  BA 70 FC 7D 00            MOV EDX,0x7dfc70
005195A8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005195AB  C7 45 EC 28 00 00 00      MOV dword ptr [EBP + -0x14],0x28
LAB_005195b2:
005195B2  8B 0A                     MOV ECX,dword ptr [EDX]
005195B4  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
005195B7  7D 03                     JGE 0x005195bc
005195B9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_005195bc:
005195BC  8B 0A                     MOV ECX,dword ptr [EDX]
005195BE  3B C8                     CMP ECX,EAX
005195C0  7E 02                     JLE 0x005195c4
005195C2  8B C1                     MOV EAX,ECX
LAB_005195c4:
005195C4  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005195C7  83 C2 04                  ADD EDX,0x4
005195CA  49                        DEC ECX
005195CB  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005195CE  75 E2                     JNZ 0x005195b2
005195D0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005195D3  2B C1                     SUB EAX,ECX
005195D5  8B D0                     MOV EDX,EAX
005195D7  B8 56 55 55 55            MOV EAX,0x55555556
005195DC  F7 EA                     IMUL EDX
005195DE  8B C2                     MOV EAX,EDX
005195E0  C1 E8 1F                  SHR EAX,0x1f
005195E3  03 D0                     ADD EDX,EAX
005195E5  8B 04 BD 6C FC 7D 00      MOV EAX,dword ptr [EDI*0x4 + 0x7dfc6c]
005195EC  03 CA                     ADD ECX,EDX
005195EE  3B C1                     CMP EAX,ECX
005195F0  7D 09                     JGE 0x005195fb
005195F2  C7 45 F8 15 56 00 00      MOV dword ptr [EBP + -0x8],0x5615
005195F9  EB 16                     JMP 0x00519611
LAB_005195fb:
005195FB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005195FE  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
00519601  33 C9                     XOR ECX,ECX
00519603  3B C2                     CMP EAX,EDX
00519605  0F 9C C1                  SETL CL
00519608  81 C1 13 56 00 00         ADD ECX,0x5613
0051960E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00519611:
00519611  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00519614  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051961A  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519620  6A 0F                     PUSH 0xf
00519622  68 91 00 00 00            PUSH 0x91
00519627  52                        PUSH EDX
00519628  6A 00                     PUSH 0x0
0051962A  6A 00                     PUSH 0x0
0051962C  50                        PUSH EAX
0051962D  E8 5E 74 1F 00            CALL 0x00710a90
00519632  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00519638  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0051963B  6A 02                     PUSH 0x2
0051963D  6A FF                     PUSH -0x1
0051963F  6A FD                     PUSH -0x3
00519641  51                        PUSH ECX
00519642  52                        PUSH EDX
00519643  E8 F8 6A 19 00            CALL 0x006b0140
00519648  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051964E  50                        PUSH EAX
0051964F  E8 6C 83 1F 00            CALL 0x007119c0
00519654  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00519657  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051965D  83 C0 0F                  ADD EAX,0xf
00519660  6A 0F                     PUSH 0xf
00519662  68 06 01 00 00            PUSH 0x106
00519667  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051966A  50                        PUSH EAX
0051966B  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
00519671  68 96 00 00 00            PUSH 0x96
00519676  6A 00                     PUSH 0x0
00519678  50                        PUSH EAX
00519679  E8 12 74 1F 00            CALL 0x00710a90
0051967E  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00519684  33 C9                     XOR ECX,ECX
00519686  80 FA 03                  CMP DL,0x3
00519689  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051968F  0F 95 C1                  SETNZ CL
00519692  49                        DEC ECX
00519693  83 E1 05                  AND ECX,0x5
00519696  51                        PUSH ECX
00519697  6A FF                     PUSH -0x1
00519699  6A 01                     PUSH 0x1
0051969B  52                        PUSH EDX
0051969C  68 4D 56 00 00            PUSH 0x564d
005196A1  E8 9A 6A 19 00            CALL 0x006b0140
005196A6  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
005196AC  50                        PUSH EAX
005196AD  E8 0E 83 1F 00            CALL 0x007119c0
005196B2  A1 A0 04 7E 00            MOV EAX,[0x007e04a0]
005196B7  B9 A0 04 7E 00            MOV ECX,0x7e04a0
005196BC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005196BF  C7 45 EC 28 00 00 00      MOV dword ptr [EBP + -0x14],0x28
LAB_005196c6:
005196C6  8B 11                     MOV EDX,dword ptr [ECX]
005196C8  3B 55 F8                  CMP EDX,dword ptr [EBP + -0x8]
005196CB  7D 03                     JGE 0x005196d0
005196CD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_005196d0:
005196D0  8B 11                     MOV EDX,dword ptr [ECX]
005196D2  3B D0                     CMP EDX,EAX
005196D4  7E 02                     JLE 0x005196d8
005196D6  8B C2                     MOV EAX,EDX
LAB_005196d8:
005196D8  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005196DB  83 C1 04                  ADD ECX,0x4
005196DE  4A                        DEC EDX
005196DF  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005196E2  75 E2                     JNZ 0x005196c6
005196E4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005196E7  2B C1                     SUB EAX,ECX
005196E9  99                        CDQ
005196EA  83 E2 03                  AND EDX,0x3
005196ED  03 C2                     ADD EAX,EDX
005196EF  8B 14 BD 9C 04 7E 00      MOV EDX,dword ptr [EDI*0x4 + 0x7e049c]
005196F6  C1 F8 02                  SAR EAX,0x2
005196F9  03 C8                     ADD ECX,EAX
005196FB  3B D1                     CMP EDX,ECX
005196FD  7D 09                     JGE 0x00519708
005196FF  C7 45 F8 13 56 00 00      MOV dword ptr [EBP + -0x8],0x5613
00519706  EB 1A                     JMP 0x00519722
LAB_00519708:
00519708  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0051970B  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0051970E  33 C9                     XOR ECX,ECX
00519710  3B D0                     CMP EDX,EAX
00519712  0F 9D C1                  SETGE CL
00519715  49                        DEC ECX
00519716  83 E1 FE                  AND ECX,0xfffffffe
00519719  81 C1 16 56 00 00         ADD ECX,0x5616
0051971F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00519722:
00519722  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00519725  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051972B  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519731  6A 0F                     PUSH 0xf
00519733  68 91 00 00 00            PUSH 0x91
00519738  52                        PUSH EDX
00519739  6A 00                     PUSH 0x0
0051973B  6A 00                     PUSH 0x0
0051973D  50                        PUSH EAX
0051973E  E8 4D 73 1F 00            CALL 0x00710a90
00519743  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00519749  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0051974C  6A 02                     PUSH 0x2
0051974E  6A FF                     PUSH -0x1
00519750  6A FD                     PUSH -0x3
00519752  51                        PUSH ECX
00519753  52                        PUSH EDX
00519754  E8 E7 69 19 00            CALL 0x006b0140
00519759  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051975F  50                        PUSH EAX
00519760  E8 5B 82 1F 00            CALL 0x007119c0
00519765  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00519768  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0051976B  8B 0C BD B8 8B 7A 00      MOV ECX,dword ptr [EDI*0x4 + 0x7a8bb8]
00519772  83 C2 0F                  ADD EDX,0xf
00519775  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00519778  8B 14 BD 18 8B 7A 00      MOV EDX,dword ptr [EDI*0x4 + 0x7a8b18]
0051977F  50                        PUSH EAX
00519780  51                        PUSH ECX
00519781  8D 45 FC                  LEA EAX,[EBP + -0x4]
00519784  52                        PUSH EDX
00519785  50                        PUSH EAX
00519786  68 96 00 00 00            PUSH 0x96
0051978B  8B CE                     MOV ECX,ESI
0051978D  E8 85 A7 EE FF            CALL 0x00403f17
00519792  85 C0                     TEST EAX,EAX
00519794  75 0B                     JNZ 0x005197a1
00519796  8A 45 F7                  MOV AL,byte ptr [EBP + -0x9]
00519799  C6 45 F7 00               MOV byte ptr [EBP + -0x9],0x0
0051979D  84 C0                     TEST AL,AL
0051979F  74 04                     JZ 0x005197a5
LAB_005197a1:
005197A1  C6 45 F7 01               MOV byte ptr [EBP + -0x9],0x1
LAB_005197a5:
005197A5  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005197A8  8B 14 BD 98 8D 7A 00      MOV EDX,dword ptr [EDI*0x4 + 0x7a8d98]
005197AF  8B 04 BD F8 8C 7A 00      MOV EAX,dword ptr [EDI*0x4 + 0x7a8cf8]
005197B6  51                        PUSH ECX
005197B7  52                        PUSH EDX
005197B8  8D 4D FC                  LEA ECX,[EBP + -0x4]
005197BB  50                        PUSH EAX
005197BC  51                        PUSH ECX
005197BD  68 96 00 00 00            PUSH 0x96
005197C2  8B CE                     MOV ECX,ESI
005197C4  E8 4E A7 EE FF            CALL 0x00403f17
005197C9  85 C0                     TEST EAX,EAX
005197CB  75 0B                     JNZ 0x005197d8
005197CD  8A 45 F7                  MOV AL,byte ptr [EBP + -0x9]
005197D0  C6 45 F7 00               MOV byte ptr [EBP + -0x9],0x0
005197D4  84 C0                     TEST AL,AL
005197D6  74 04                     JZ 0x005197dc
LAB_005197d8:
005197D8  C6 45 F7 01               MOV byte ptr [EBP + -0x9],0x1
LAB_005197dc:
005197DC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005197DF  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
005197E5  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
005197EB  6A 0F                     PUSH 0xf
005197ED  68 06 01 00 00            PUSH 0x106
005197F2  52                        PUSH EDX
005197F3  68 96 00 00 00            PUSH 0x96
005197F8  6A 00                     PUSH 0x0
005197FA  50                        PUSH EAX
005197FB  E8 90 72 1F 00            CALL 0x00710a90
00519800  A0 4E 87 80 00            MOV AL,[0x0080874e]
00519805  33 C9                     XOR ECX,ECX
00519807  3C 03                     CMP AL,0x3
00519809  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051980F  0F 95 C1                  SETNZ CL
00519812  49                        DEC ECX
00519813  83 E1 05                  AND ECX,0x5
00519816  51                        PUSH ECX
00519817  6A FF                     PUSH -0x1
00519819  6A 01                     PUSH 0x1
0051981B  52                        PUSH EDX
0051981C  68 59 56 00 00            PUSH 0x5659
00519821  E8 1A 69 19 00            CALL 0x006b0140
00519826  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051982C  50                        PUSH EAX
0051982D  E8 8E 81 1F 00            CALL 0x007119c0
00519832  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00519835  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051983B  6A 0F                     PUSH 0xf
0051983D  68 91 00 00 00            PUSH 0x91
00519842  50                        PUSH EAX
00519843  6A 00                     PUSH 0x0
00519845  6A 00                     PUSH 0x0
00519847  51                        PUSH ECX
00519848  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051984E  E8 3D 72 1F 00            CALL 0x00710a90
00519853  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00519859  6A 02                     PUSH 0x2
0051985B  6A FF                     PUSH -0x1
0051985D  6A FD                     PUSH -0x3
0051985F  52                        PUSH EDX
00519860  8D 47 41                  LEA EAX,[EDI + 0x41]
00519863  6A FF                     PUSH -0x1
00519865  50                        PUSH EAX
00519866  68 10 0F 80 00            PUSH 0x800f10
0051986B  E8 60 77 19 00            CALL 0x006b0fd0
00519870  83 C4 0C                  ADD ESP,0xc
00519873  F7 D8                     NEG EAX
00519875  1B C0                     SBB EAX,EAX
00519877  05 3F 27 00 00            ADD EAX,0x273f
0051987C  50                        PUSH EAX
0051987D  E8 BE 68 19 00            CALL 0x006b0140
00519882  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519888  50                        PUSH EAX
00519889  E8 32 81 1F 00            CALL 0x007119c0
0051988E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00519891  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519897  83 C0 0F                  ADD EAX,0xf
0051989A  6A 0F                     PUSH 0xf
0051989C  68 06 01 00 00            PUSH 0x106
005198A1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005198A4  50                        PUSH EAX
005198A5  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
005198AB  68 96 00 00 00            PUSH 0x96
005198B0  6A 00                     PUSH 0x0
005198B2  50                        PUSH EAX
005198B3  E8 D8 71 1F 00            CALL 0x00710a90
005198B8  A0 4E 87 80 00            MOV AL,[0x0080874e]
005198BD  33 C9                     XOR ECX,ECX
005198BF  3C 03                     CMP AL,0x3
005198C1  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005198C7  0F 95 C1                  SETNZ CL
005198CA  49                        DEC ECX
005198CB  83 E1 05                  AND ECX,0x5
005198CE  51                        PUSH ECX
005198CF  6A FF                     PUSH -0x1
005198D1  6A 01                     PUSH 0x1
005198D3  52                        PUSH EDX
005198D4  68 4E 56 00 00            PUSH 0x564e
005198D9  E8 62 68 19 00            CALL 0x006b0140
005198DE  50                        PUSH EAX
005198DF  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
005198E5  E8 D6 80 1F 00            CALL 0x007119c0
005198EA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005198ED  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
005198F3  6A 0F                     PUSH 0xf
005198F5  68 91 00 00 00            PUSH 0x91
005198FA  50                        PUSH EAX
005198FB  6A 00                     PUSH 0x0
005198FD  6A 00                     PUSH 0x0
005198FF  51                        PUSH ECX
00519900  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519906  E8 85 71 1F 00            CALL 0x00710a90
0051990B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00519911  33 C0                     XOR EAX,EAX
00519913  80 FB 03                  CMP BL,0x3
00519916  6A 02                     PUSH 0x2
00519918  0F 95 C0                  SETNZ AL
0051991B  6A FF                     PUSH -0x1
0051991D  6A FD                     PUSH -0x3
0051991F  05 3E 27 00 00            ADD EAX,0x273e
00519924  52                        PUSH EDX
00519925  50                        PUSH EAX
00519926  E8 15 68 19 00            CALL 0x006b0140
0051992B  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519931  50                        PUSH EAX
00519932  E8 89 80 1F 00            CALL 0x007119c0
00519937  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051993A  8A 45 F7                  MOV AL,byte ptr [EBP + -0x9]
0051993D  83 C1 0F                  ADD ECX,0xf
00519940  84 C0                     TEST AL,AL
00519942  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00519945  0F 84 F9 00 00 00         JZ 0x00519a44
0051994B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051994E  33 FF                     XOR EDI,EDI
00519950  8B 04 8D 18 8B 7A 00      MOV EAX,dword ptr [ECX*0x4 + 0x7a8b18]
00519957  85 C0                     TEST EAX,EAX
00519959  74 17                     JZ 0x00519972
0051995B  8D 94 40 3E FE FF FF      LEA EDX,[EAX + EAX*0x2 + 0xfffffe3e]
00519962  33 C0                     XOR EAX,EAX
00519964  8B 3C 95 78 F6 7B 00      MOV EDI,dword ptr [EDX*0x4 + 0x7bf678]
0051996B  85 FF                     TEST EDI,EDI
0051996D  0F 95 C0                  SETNZ AL
00519970  8B F8                     MOV EDI,EAX
LAB_00519972:
00519972  8B 04 8D F8 8C 7A 00      MOV EAX,dword ptr [ECX*0x4 + 0x7a8cf8]
00519979  85 C0                     TEST EAX,EAX
0051997B  74 1B                     JZ 0x00519998
0051997D  85 FF                     TEST EDI,EDI
0051997F  75 12                     JNZ 0x00519993
00519981  8D 8C 40 3E FE FF FF      LEA ECX,[EAX + EAX*0x2 + 0xfffffe3e]
00519988  8B 04 8D 78 F6 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7bf678]
0051998F  85 C0                     TEST EAX,EAX
00519991  74 05                     JZ 0x00519998
LAB_00519993:
00519993  BF 01 00 00 00            MOV EDI,0x1
LAB_00519998:
00519998  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051999B  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
005199A1  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
005199A7  6A 0F                     PUSH 0xf
005199A9  68 06 01 00 00            PUSH 0x106
005199AE  52                        PUSH EDX
005199AF  68 96 00 00 00            PUSH 0x96
005199B4  6A 00                     PUSH 0x0
005199B6  50                        PUSH EAX
005199B7  E8 D4 70 1F 00            CALL 0x00710a90
005199BC  A0 4E 87 80 00            MOV AL,[0x0080874e]
005199C1  33 C9                     XOR ECX,ECX
005199C3  3C 03                     CMP AL,0x3
005199C5  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005199CB  0F 95 C1                  SETNZ CL
005199CE  49                        DEC ECX
005199CF  83 E1 05                  AND ECX,0x5
005199D2  51                        PUSH ECX
005199D3  6A FF                     PUSH -0x1
005199D5  6A 01                     PUSH 0x1
005199D7  52                        PUSH EDX
005199D8  68 4F 56 00 00            PUSH 0x564f
005199DD  E8 5E 67 19 00            CALL 0x006b0140
005199E2  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
005199E8  50                        PUSH EAX
005199E9  E8 D2 7F 1F 00            CALL 0x007119c0
005199EE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005199F1  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
005199F7  6A 0F                     PUSH 0xf
005199F9  68 91 00 00 00            PUSH 0x91
005199FE  50                        PUSH EAX
005199FF  6A 00                     PUSH 0x0
00519A01  6A 00                     PUSH 0x0
00519A03  51                        PUSH ECX
00519A04  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519A0A  E8 81 70 1F 00            CALL 0x00710a90
00519A0F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00519A15  6A 02                     PUSH 0x2
00519A17  F7 DF                     NEG EDI
00519A19  1B FF                     SBB EDI,EDI
00519A1B  6A FF                     PUSH -0x1
00519A1D  6A FD                     PUSH -0x3
00519A1F  81 C7 3F 27 00 00         ADD EDI,0x273f
00519A25  52                        PUSH EDX
00519A26  57                        PUSH EDI
00519A27  E8 14 67 19 00            CALL 0x006b0140
00519A2C  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519A32  50                        PUSH EAX
00519A33  E8 88 7F 1F 00            CALL 0x007119c0
00519A38  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00519A3B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00519A3E  83 C0 0F                  ADD EAX,0xf
00519A41  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00519a44:
00519A44  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00519A47  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
00519A4D  6A 0F                     PUSH 0xf
00519A4F  68 06 01 00 00            PUSH 0x106
00519A54  50                        PUSH EAX
00519A55  68 96 00 00 00            PUSH 0x96
00519A5A  6A 00                     PUSH 0x0
00519A5C  51                        PUSH ECX
00519A5D  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519A63  E8 28 70 1F 00            CALL 0x00710a90
00519A68  A0 4E 87 80 00            MOV AL,[0x0080874e]
00519A6D  33 D2                     XOR EDX,EDX
00519A6F  3C 03                     CMP AL,0x3
00519A71  A1 18 76 80 00            MOV EAX,[0x00807618]
00519A76  0F 95 C2                  SETNZ DL
00519A79  4A                        DEC EDX
00519A7A  83 E2 05                  AND EDX,0x5
00519A7D  52                        PUSH EDX
00519A7E  6A FF                     PUSH -0x1
00519A80  6A 01                     PUSH 0x1
00519A82  50                        PUSH EAX
00519A83  68 50 56 00 00            PUSH 0x5650
00519A88  E8 B3 66 19 00            CALL 0x006b0140
00519A8D  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519A93  50                        PUSH EAX
00519A94  E8 27 7F 1F 00            CALL 0x007119c0
00519A99  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00519A9C  8B 0C BD 5C 08 7E 00      MOV ECX,dword ptr [EDI*0x4 + 0x7e085c]
00519AA3  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
00519AA9  6A 0F                     PUSH 0xf
00519AAB  68 91 00 00 00            PUSH 0x91
00519AB0  52                        PUSH EDX
00519AB1  6A 00                     PUSH 0x0
00519AB3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00519AB6  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519ABC  6A 00                     PUSH 0x0
00519ABE  50                        PUSH EAX
00519ABF  E8 CC 6F 1F 00            CALL 0x00710a90
00519AC4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00519AC7  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00519ACD  F7 DA                     NEG EDX
00519ACF  6A 02                     PUSH 0x2
00519AD1  6A FF                     PUSH -0x1
00519AD3  1B D2                     SBB EDX,EDX
00519AD5  6A FD                     PUSH -0x3
00519AD7  81 C2 3F 27 00 00         ADD EDX,0x273f
00519ADD  51                        PUSH ECX
00519ADE  52                        PUSH EDX
00519ADF  E8 5C 66 19 00            CALL 0x006b0140
00519AE4  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519AEA  50                        PUSH EAX
00519AEB  E8 D0 7E 1F 00            CALL 0x007119c0
00519AF0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00519AF3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00519AF6  83 C1 0F                  ADD ECX,0xf
00519AF9  85 C0                     TEST EAX,EAX
00519AFB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00519AFE  0F 84 40 01 00 00         JZ 0x00519c44
00519B04  6A 0F                     PUSH 0xf
00519B06  8B C1                     MOV EAX,ECX
00519B08  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
00519B0E  68 06 01 00 00            PUSH 0x106
00519B13  50                        PUSH EAX
00519B14  68 96 00 00 00            PUSH 0x96
00519B19  6A 00                     PUSH 0x0
00519B1B  51                        PUSH ECX
00519B1C  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519B22  E8 69 6F 1F 00            CALL 0x00710a90
00519B27  A0 4E 87 80 00            MOV AL,[0x0080874e]
00519B2C  33 D2                     XOR EDX,EDX
00519B2E  3C 03                     CMP AL,0x3
00519B30  A1 18 76 80 00            MOV EAX,[0x00807618]
00519B35  0F 95 C2                  SETNZ DL
00519B38  4A                        DEC EDX
00519B39  83 E2 05                  AND EDX,0x5
00519B3C  52                        PUSH EDX
00519B3D  6A FF                     PUSH -0x1
00519B3F  6A 01                     PUSH 0x1
00519B41  50                        PUSH EAX
00519B42  68 51 56 00 00            PUSH 0x5651
00519B47  E8 F4 65 19 00            CALL 0x006b0140
00519B4C  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00519B52  50                        PUSH EAX
00519B53  E8 68 7E 1F 00            CALL 0x007119c0
00519B58  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00519B5B  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
00519B61  6A 14                     PUSH 0x14
00519B63  83 C1 FD                  ADD ECX,-0x3
00519B66  6A 16                     PUSH 0x16
00519B68  51                        PUSH ECX
00519B69  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
00519B6F  6A 5F                     PUSH 0x5f
00519B71  6A 00                     PUSH 0x0
00519B73  52                        PUSH EDX
00519B74  E8 17 6F 1F 00            CALL 0x00710a90
00519B79  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00519B7C  50                        PUSH EAX
00519B7D  68 E4 1A 7C 00            PUSH 0x7c1ae4
00519B82  68 3A F3 80 00            PUSH 0x80f33a
00519B87  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00519B8D  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00519B93  83 C4 0C                  ADD ESP,0xc
00519B96  80 E9 03                  SUB CL,0x3
00519B99  F6 D9                     NEG CL
00519B9B  1B C9                     SBB ECX,ECX
00519B9D  83 E1 FB                  AND ECX,0xfffffffb
00519BA0  83 C1 07                  ADD ECX,0x7
00519BA3  51                        PUSH ECX
00519BA4  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
00519BAA  6A FF                     PUSH -0x1
00519BAC  6A 01                     PUSH 0x1
00519BAE  68 3A F3 80 00            PUSH 0x80f33a
00519BB3  E8 08 7E 1F 00            CALL 0x007119c0
00519BB8  8A D3                     MOV DL,BL
00519BBA  8B 86 38 02 00 00         MOV EAX,dword ptr [ESI + 0x238]
00519BC0  80 EA 03                  SUB DL,0x3
00519BC3  F6 DA                     NEG DL
00519BC5  1B D2                     SBB EDX,EDX
00519BC7  83 E2 FE                  AND EDX,0xfffffffe
00519BCA  83 C2 03                  ADD EDX,0x3
00519BCD  52                        PUSH EDX
00519BCE  50                        PUSH EAX
00519BCF  E8 CC 17 1F 00            CALL 0x0070b3a0
00519BD4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00519BD7  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
00519BDD  83 C4 08                  ADD ESP,0x8
00519BE0  8B F8                     MOV EDI,EAX
00519BE2  6A 3A                     PUSH 0x3a
00519BE4  6A 00                     PUSH 0x0
00519BE6  57                        PUSH EDI
00519BE7  51                        PUSH ECX
00519BE8  6A 7A                     PUSH 0x7a
00519BEA  6A 00                     PUSH 0x0
00519BEC  52                        PUSH EDX
00519BED  E8 4E B8 19 00            CALL 0x006b5440
00519BF2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00519BF5  C7 45 C8 7A 00 00 00      MOV dword ptr [EBP + -0x38],0x7a
00519BFC  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00519BFF  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00519C02  80 EB 03                  SUB BL,0x3
00519C05  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00519C08  F6 DB                     NEG BL
00519C0A  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00519C0D  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
00519C10  1B DB                     SBB EBX,EBX
00519C12  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00519C15  8B 96 D7 01 00 00         MOV EDX,dword ptr [ESI + 0x1d7]
00519C1B  83 E3 FC                  AND EBX,0xfffffffc
00519C1E  8D 4D C8                  LEA ECX,[EBP + -0x38]
00519C21  81 C3 E2 00 00 00         ADD EBX,0xe2
00519C27  51                        PUSH ECX
00519C28  52                        PUSH EDX
00519C29  C6 45 D8 01               MOV byte ptr [EBP + -0x28],0x1
00519C2D  89 5D D9                  MOV dword ptr [EBP + -0x27],EBX
00519C30  89 45 DD                  MOV dword ptr [EBP + -0x23],EAX
00519C33  E8 88 45 19 00            CALL 0x006ae1c0
00519C38  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00519C3B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00519C3E  83 C0 14                  ADD EAX,0x14
00519C41  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00519c44:
00519C44  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00519C47  6A 02                     PUSH 0x2
00519C49  50                        PUSH EAX
00519C4A  57                        PUSH EDI
00519C4B  E8 34 9A EE FF            CALL 0x00403684
00519C50  83 C4 0C                  ADD ESP,0xc
00519C53  8D 4D FC                  LEA ECX,[EBP + -0x4]
00519C56  50                        PUSH EAX
00519C57  51                        PUSH ECX
00519C58  8B CE                     MOV ECX,ESI
00519C5A  E8 4C 91 EE FF            CALL 0x00402dab
00519C5F  6A 00                     PUSH 0x0
00519C61  57                        PUSH EDI
00519C62  8D 55 FC                  LEA EDX,[EBP + -0x4]
00519C65  6A 03                     PUSH 0x3
00519C67  52                        PUSH EDX
00519C68  8B CE                     MOV ECX,ESI
00519C6A  E8 00 B4 EE FF            CALL 0x0040506f
00519C6F  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
00519C75  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00519C7A  5F                        POP EDI
00519C7B  5E                        POP ESI
00519C7C  5B                        POP EBX
00519C7D  8B E5                     MOV ESP,EBP
00519C7F  5D                        POP EBP
00519C80  C2 08 00                  RET 0x8
LAB_00519c83:
00519C83  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00519C89  68 84 3C 7C 00            PUSH 0x7c3c84
00519C8E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00519C93  56                        PUSH ESI
00519C94  53                        PUSH EBX
00519C95  68 F4 06 00 00            PUSH 0x6f4
00519C9A  68 3C 38 7C 00            PUSH 0x7c383c
00519C9F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00519CA5  E8 26 38 19 00            CALL 0x006ad4d0
00519CAA  83 C4 18                  ADD ESP,0x18
00519CAD  85 C0                     TEST EAX,EAX
00519CAF  74 01                     JZ 0x00519cb2
00519CB1  CC                        INT3
LAB_00519cb2:
00519CB2  68 F4 06 00 00            PUSH 0x6f4
00519CB7  68 3C 38 7C 00            PUSH 0x7c383c
00519CBC  53                        PUSH EBX
00519CBD  56                        PUSH ESI
00519CBE  E8 7D C1 18 00            CALL 0x006a5e40
LAB_00519cc3:
00519CC3  5F                        POP EDI
00519CC4  5E                        POP ESI
00519CC5  5B                        POP EBX
00519CC6  8B E5                     MOV ESP,EBP
00519CC8  5D                        POP EBP
00519CC9  C2 08 00                  RET 0x8
