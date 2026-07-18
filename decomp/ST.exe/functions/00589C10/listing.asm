FUN_00589c10:
00589C10  55                        PUSH EBP
00589C11  8B EC                     MOV EBP,ESP
00589C13  81 EC 84 00 00 00         SUB ESP,0x84
00589C19  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00589C1E  53                        PUSH EBX
00589C1F  56                        PUSH ESI
00589C20  57                        PUSH EDI
00589C21  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00589C24  33 FF                     XOR EDI,EDI
00589C26  8D 55 80                  LEA EDX,[EBP + -0x80]
00589C29  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
00589C2F  57                        PUSH EDI
00589C30  52                        PUSH EDX
00589C31  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00589C37  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00589C3D  E8 AE 3B 1A 00            CALL 0x0072d7f0
00589C42  8B F0                     MOV ESI,EAX
00589C44  83 C4 08                  ADD ESP,0x8
00589C47  3B F7                     CMP ESI,EDI
00589C49  0F 85 90 09 00 00         JNZ 0x0058a5df
00589C4F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00589C52  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
00589C55  56                        PUSH ESI
00589C56  8B CB                     MOV ECX,EBX
00589C58  E8 AA B2 E7 FF            CALL 0x00404f07
00589C5D  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00589C60  3D 12 01 00 00            CMP EAX,0x112
00589C65  0F 87 2E 07 00 00         JA 0x0058a399
00589C6B  0F 84 07 07 00 00         JZ 0x0058a378
00589C71  83 F8 03                  CMP EAX,0x3
00589C74  0F 87 D4 04 00 00         JA 0x0058a14e
00589C7A  0F 84 A1 04 00 00         JZ 0x0058a121
00589C80  2B C7                     SUB EAX,EDI
00589C82  0F 84 6F 04 00 00         JZ 0x0058a0f7
00589C88  83 E8 02                  SUB EAX,0x2
00589C8B  0F 85 38 09 00 00         JNZ 0x0058a5c9
00589C91  C7 83 49 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x249],0x3
00589C9B  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00589C9E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00589CA1  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00589CA4  83 F9 01                  CMP ECX,0x1
00589CA7  0F 86 A9 01 00 00         JBE 0x00589e56
00589CAD  83 F9 02                  CMP ECX,0x2
00589CB0  0F 85 FC 03 00 00         JNZ 0x0058a0b2
00589CB6  8D BB 85 02 00 00         LEA EDI,[EBX + 0x285]
00589CBC  B9 0A 00 00 00            MOV ECX,0xa
00589CC1  8B F0                     MOV ESI,EAX
00589CC3  F3 A5                     MOVSD.REP ES:EDI,ESI
00589CC5  8B 88 8E 00 00 00         MOV ECX,dword ptr [EAX + 0x8e]
00589CCB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00589CCE  8D 84 01 96 00 00 00      LEA EAX,[ECX + EAX*0x1 + 0x96]
00589CD5  8B CB                     MOV ECX,EBX
00589CD7  50                        PUSH EAX
00589CD8  E8 42 B8 E7 FF            CALL 0x0040551f
00589CDD  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00589CE0  6A 44                     PUSH 0x44
00589CE2  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
00589CE5  89 8B 49 02 00 00         MOV dword ptr [EBX + 0x249],ECX
00589CEB  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
00589CEE  89 93 45 02 00 00         MOV dword ptr [EBX + 0x245],EDX
00589CF4  66 8B 46 78               MOV AX,word ptr [ESI + 0x78]
00589CF8  66 89 43 41               MOV word ptr [EBX + 0x41],AX
00589CFC  66 8B 4E 7A               MOV CX,word ptr [ESI + 0x7a]
00589D00  66 89 4B 43               MOV word ptr [EBX + 0x43],CX
00589D04  66 8B 56 7C               MOV DX,word ptr [ESI + 0x7c]
00589D08  66 89 53 45               MOV word ptr [EBX + 0x45],DX
00589D0C  8B 86 86 00 00 00         MOV EAX,dword ptr [ESI + 0x86]
00589D12  89 83 81 02 00 00         MOV dword ptr [EBX + 0x281],EAX
00589D18  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
00589D1B  89 8B 31 02 00 00         MOV dword ptr [EBX + 0x231],ECX
00589D21  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
00589D24  89 93 41 02 00 00         MOV dword ptr [EBX + 0x241],EDX
00589D2A  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
00589D2D  89 83 51 02 00 00         MOV dword ptr [EBX + 0x251],EAX
00589D33  8B 4E 4C                  MOV ECX,dword ptr [ESI + 0x4c]
00589D36  89 8B 55 02 00 00         MOV dword ptr [EBX + 0x255],ECX
00589D3C  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
00589D3F  89 93 59 02 00 00         MOV dword ptr [EBX + 0x259],EDX
00589D45  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
00589D48  89 83 5D 02 00 00         MOV dword ptr [EBX + 0x25d],EAX
00589D4E  8B 4E 58                  MOV ECX,dword ptr [ESI + 0x58]
00589D51  89 8B 61 02 00 00         MOV dword ptr [EBX + 0x261],ECX
00589D57  8B 56 5C                  MOV EDX,dword ptr [ESI + 0x5c]
00589D5A  89 93 65 02 00 00         MOV dword ptr [EBX + 0x265],EDX
00589D60  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
00589D63  89 83 69 02 00 00         MOV dword ptr [EBX + 0x269],EAX
00589D69  8B 4E 64                  MOV ECX,dword ptr [ESI + 0x64]
00589D6C  89 8B 6D 02 00 00         MOV dword ptr [EBX + 0x26d],ECX
00589D72  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00589D75  89 93 71 02 00 00         MOV dword ptr [EBX + 0x271],EDX
00589D7B  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00589D7E  89 83 75 02 00 00         MOV dword ptr [EBX + 0x275],EAX
00589D84  8B 4E 70                  MOV ECX,dword ptr [ESI + 0x70]
00589D87  89 8B 79 02 00 00         MOV dword ptr [EBX + 0x279],ECX
00589D8D  8B 56 74                  MOV EDX,dword ptr [ESI + 0x74]
00589D90  89 93 7D 02 00 00         MOV dword ptr [EBX + 0x27d],EDX
00589D96  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00589D99  89 83 39 02 00 00         MOV dword ptr [EBX + 0x239],EAX
00589D9F  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
00589DA2  89 8B 3D 02 00 00         MOV dword ptr [EBX + 0x23d],ECX
00589DA8  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
00589DAB  89 93 35 02 00 00         MOV dword ptr [EBX + 0x235],EDX
00589DB1  66 8B 46 7E               MOV AX,word ptr [ESI + 0x7e]
00589DB5  66 89 43 4E               MOV word ptr [EBX + 0x4e],AX
00589DB9  66 8B 8E 80 00 00 00      MOV CX,word ptr [ESI + 0x80]
00589DC0  66 89 4B 50               MOV word ptr [EBX + 0x50],CX
00589DC4  66 8B 96 82 00 00 00      MOV DX,word ptr [ESI + 0x82]
00589DCB  66 89 53 52               MOV word ptr [EBX + 0x52],DX
00589DCF  66 8B 86 84 00 00 00      MOV AX,word ptr [ESI + 0x84]
00589DD6  66 89 43 6C               MOV word ptr [EBX + 0x6c],AX
00589DDA  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00589DDD  89 8B 4D 02 00 00         MOV dword ptr [EBX + 0x24d],ECX
00589DE3  E8 88 0E 12 00            CALL 0x006aac70
00589DE8  33 D2                     XOR EDX,EDX
00589DEA  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00589DED  3B C2                     CMP EAX,EDX
00589DEF  0F 84 BD 02 00 00         JZ 0x0058a0b2
00589DF5  33 C9                     XOR ECX,ECX
00589DF7  EB 03                     JMP 0x00589dfc
LAB_00589df9:
00589DF9  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
LAB_00589dfc:
00589DFC  83 F9 08                  CMP ECX,0x8
00589DFF  75 0B                     JNZ 0x00589e0c
00589E01  8B 3D 74 67 80 00         MOV EDI,dword ptr [0x00806774]
00589E07  89 78 20                  MOV dword ptr [EAX + 0x20],EDI
00589E0A  EB 09                     JMP 0x00589e15
LAB_00589e0c:
00589E0C  8B 3D 6C 67 80 00         MOV EDI,dword ptr [0x0080676c]
00589E12  89 3C 88                  MOV dword ptr [EAX + ECX*0x4],EDI
LAB_00589e15:
00589E15  41                        INC ECX
00589E16  83 F9 11                  CMP ECX,0x11
00589E19  7C DE                     JL 0x00589df9
00589E1B  A1 CC 73 80 00            MOV EAX,[0x008073cc]
00589E20  81 C6 92 00 00 00         ADD ESI,0x92
00589E26  8D 4D C0                  LEA ECX,[EBP + -0x40]
00589E29  56                        PUSH ESI
00589E2A  51                        PUSH ECX
00589E2B  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00589E31  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
00589E34  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00589E37  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00589E3A  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00589E3D  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00589E40  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00589E43  E8 5D AE E7 FF            CALL 0x00404ca5
00589E48  8D 55 C0                  LEA EDX,[EBP + -0x40]
00589E4B  52                        PUSH EDX
00589E4C  E8 0F 12 12 00            CALL 0x006ab060
00589E51  E9 5C 02 00 00            JMP 0x0058a0b2
LAB_00589e56:
00589E56  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00589E5B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00589E61  89 BB 4D 02 00 00         MOV dword ptr [EBX + 0x24d],EDI
00589E67  83 E9 03                  SUB ECX,0x3
00589E6A  89 BB 31 02 00 00         MOV dword ptr [EBX + 0x231],EDI
00589E70  89 8B 45 02 00 00         MOV dword ptr [EBX + 0x245],ECX
00589E76  89 BB 35 02 00 00         MOV dword ptr [EBX + 0x235],EDI
00589E7C  89 BB 71 02 00 00         MOV dword ptr [EBX + 0x271],EDI
00589E82  89 BB 6D 02 00 00         MOV dword ptr [EBX + 0x26d],EDI
00589E88  89 BB 69 02 00 00         MOV dword ptr [EBX + 0x269],EDI
00589E8E  89 BB 81 02 00 00         MOV dword ptr [EBX + 0x281],EDI
00589E94  89 BB 41 02 00 00         MOV dword ptr [EBX + 0x241],EDI
00589E9A  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
00589E9D  B9 0A 00 00 00            MOV ECX,0xa
00589EA2  8D BB 85 02 00 00         LEA EDI,[EBX + 0x285]
00589EA8  F3 A5                     MOVSD.REP ES:EDI,ESI
00589EAA  8B CB                     MOV ECX,EBX
00589EAC  E8 5D AE E7 FF            CALL 0x00404d0e
00589EB1  8B 83 99 02 00 00         MOV EAX,dword ptr [EBX + 0x299]
00589EB7  85 C0                     TEST EAX,EAX
00589EB9  0F 8C 11 02 00 00         JL 0x0058a0d0
00589EBF  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
00589EC6  3B C2                     CMP EAX,EDX
00589EC8  0F 8D 02 02 00 00         JGE 0x0058a0d0
00589ECE  8B 83 9D 02 00 00         MOV EAX,dword ptr [EBX + 0x29d]
00589ED4  85 C0                     TEST EAX,EAX
00589ED6  0F 8C F4 01 00 00         JL 0x0058a0d0
00589EDC  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
00589EE3  3B C1                     CMP EAX,ECX
00589EE5  0F 8D E5 01 00 00         JGE 0x0058a0d0
00589EEB  8B 83 A1 02 00 00         MOV EAX,dword ptr [EBX + 0x2a1]
00589EF1  85 C0                     TEST EAX,EAX
00589EF3  0F 8C D7 01 00 00         JL 0x0058a0d0
00589EF9  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
00589F00  3B C2                     CMP EAX,EDX
00589F02  0F 8D C8 01 00 00         JGE 0x0058a0d0
00589F08  66 8B 8B 9D 02 00 00      MOV CX,word ptr [EBX + 0x29d]
00589F0F  66 8B 93 99 02 00 00      MOV DX,word ptr [EBX + 0x299]
00589F16  50                        PUSH EAX
00589F17  51                        PUSH ECX
00589F18  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00589F1E  52                        PUSH EDX
00589F1F  E8 17 AE E7 FF            CALL 0x00404d3b
00589F24  85 C0                     TEST EAX,EAX
00589F26  0F 84 A4 01 00 00         JZ 0x0058a0d0
00589F2C  8B 83 A5 02 00 00         MOV EAX,dword ptr [EBX + 0x2a5]
00589F32  05 08 FF FF FF            ADD EAX,0xffffff08
00589F37  83 F8 03                  CMP EAX,0x3
00589F3A  0F 87 CC 00 00 00         JA 0x0058a00c
switchD_00589f40::switchD:
00589F40  FF 24 85 30 A6 58 00      JMP dword ptr [EAX*0x4 + 0x58a630]
switchD_00589f40::caseD_f9:
00589F47  A1 6C 67 80 00            MOV EAX,[0x0080676c]
00589F4C  6A 1D                     PUSH 0x1d
00589F4E  68 DC B9 7C 00            PUSH 0x7cb9dc
00589F53  50                        PUSH EAX
00589F54  6A 0E                     PUSH 0xe
00589F56  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00589F5C  E8 22 A2 E7 FF            CALL 0x00404183
00589F61  85 C0                     TEST EAX,EAX
00589F63  0F 84 A3 00 00 00         JZ 0x0058a00c
00589F69  68 E4 00 00 00            PUSH 0xe4
00589F6E  E9 86 00 00 00            JMP 0x00589ff9
switchD_00589f40::caseD_f8:
00589F73  8B 15 6C 67 80 00         MOV EDX,dword ptr [0x0080676c]
00589F79  6A 1D                     PUSH 0x1d
00589F7B  68 F0 B9 7C 00            PUSH 0x7cb9f0
00589F80  52                        PUSH EDX
00589F81  6A 0E                     PUSH 0xe
00589F83  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00589F89  E8 F5 A1 E7 FF            CALL 0x00404183
00589F8E  85 C0                     TEST EAX,EAX
00589F90  74 7A                     JZ 0x0058a00c
00589F92  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00589F97  68 E9 00 00 00            PUSH 0xe9
00589F9C  68 18 BA 7C 00            PUSH 0x7cba18
00589FA1  50                        PUSH EAX
00589FA2  EB 61                     JMP 0x0058a005
switchD_00589f40::caseD_fb:
00589FA4  8B 0D 6C 67 80 00         MOV ECX,dword ptr [0x0080676c]
00589FAA  6A 1D                     PUSH 0x1d
00589FAC  68 E8 B9 7C 00            PUSH 0x7cb9e8
00589FB1  51                        PUSH ECX
00589FB2  6A 0E                     PUSH 0xe
00589FB4  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00589FBA  E8 C4 A1 E7 FF            CALL 0x00404183
00589FBF  85 C0                     TEST EAX,EAX
00589FC1  74 49                     JZ 0x0058a00c
00589FC3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00589FC9  68 EE 00 00 00            PUSH 0xee
00589FCE  68 18 BA 7C 00            PUSH 0x7cba18
00589FD3  52                        PUSH EDX
00589FD4  EB 2F                     JMP 0x0058a005
switchD_00589f40::caseD_fa:
00589FD6  A1 6C 67 80 00            MOV EAX,[0x0080676c]
00589FDB  6A 1D                     PUSH 0x1d
00589FDD  68 FC B9 7C 00            PUSH 0x7cb9fc
00589FE2  50                        PUSH EAX
00589FE3  6A 0E                     PUSH 0xe
00589FE5  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00589FEB  E8 93 A1 E7 FF            CALL 0x00404183
00589FF0  85 C0                     TEST EAX,EAX
00589FF2  74 18                     JZ 0x0058a00c
00589FF4  68 F3 00 00 00            PUSH 0xf3
LAB_00589ff9:
00589FF9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00589FFF  68 18 BA 7C 00            PUSH 0x7cba18
0058A004  51                        PUSH ECX
LAB_0058a005:
0058A005  6A FF                     PUSH -0x1
0058A007  E8 34 BE 11 00            CALL 0x006a5e40
switchD_00589f40::default:
0058A00C  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0058A012  6A 0E                     PUSH 0xe
0058A014  8B CE                     MOV ECX,ESI
0058A016  E8 8B BA E7 FF            CALL 0x00405aa6
0058A01B  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0058A021  8B CE                     MOV ECX,ESI
0058A023  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0058A029  50                        PUSH EAX
0058A02A  6A 0E                     PUSH 0xe
0058A02C  E8 0F B2 E7 FF            CALL 0x00405240
0058A031  66 8B 8B 99 02 00 00      MOV CX,word ptr [EBX + 0x299]
0058A038  66 8B 93 9D 02 00 00      MOV DX,word ptr [EBX + 0x29d]
0058A03F  66 8B 83 A1 02 00 00      MOV AX,word ptr [EBX + 0x2a1]
0058A046  66 69 C9 C9 00            IMUL CX,CX,0xc9
0058A04B  66 69 D2 C9 00            IMUL DX,DX,0xc9
0058A050  66 69 C0 C8 00            IMUL AX,AX,0xc8
0058A055  83 C1 64                  ADD ECX,0x64
0058A058  83 C2 64                  ADD EDX,0x64
0058A05B  66 89 4B 41               MOV word ptr [EBX + 0x41],CX
0058A05F  66 8B 8B A9 02 00 00      MOV CX,word ptr [EBX + 0x2a9]
0058A066  83 C0 64                  ADD EAX,0x64
0058A069  66 89 53 43               MOV word ptr [EBX + 0x43],DX
0058A06D  66 89 43 45               MOV word ptr [EBX + 0x45],AX
0058A071  8D 43 6C                  LEA EAX,[EBX + 0x6c]
0058A074  50                        PUSH EAX
0058A075  8D 53 52                  LEA EDX,[EBX + 0x52]
0058A078  66 89 08                  MOV word ptr [EAX],CX
0058A07B  B9 01 00 00 00            MOV ECX,0x1
0058A080  89 8B 51 02 00 00         MOV dword ptr [EBX + 0x251],ECX
0058A086  89 8B 55 02 00 00         MOV dword ptr [EBX + 0x255],ECX
0058A08C  89 8B 59 02 00 00         MOV dword ptr [EBX + 0x259],ECX
0058A092  8D 43 50                  LEA EAX,[EBX + 0x50]
0058A095  52                        PUSH EDX
0058A096  8D 4B 4E                  LEA ECX,[EBX + 0x4e]
0058A099  50                        PUSH EAX
0058A09A  51                        PUSH ECX
0058A09B  8B CB                     MOV ECX,EBX
0058A09D  E8 63 79 E7 FF            CALL 0x00401a05
0058A0A2  89 83 49 02 00 00         MOV dword ptr [EBX + 0x249],EAX
0058A0A8  C7 83 31 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x231],0x0
LAB_0058a0b2:
0058A0B2  83 BB 49 02 00 00 03      CMP dword ptr [EBX + 0x249],0x3
0058A0B9  0F 84 0A 05 00 00         JZ 0x0058a5c9
0058A0BF  53                        PUSH EBX
0058A0C0  E8 FE 6F E7 FF            CALL 0x004010c3
0058A0C5  83 C4 04                  ADD ESP,0x4
0058A0C8  85 C0                     TEST EAX,EAX
0058A0CA  0F 85 F9 04 00 00         JNZ 0x0058a5c9
LAB_0058a0d0:
0058A0D0  8B CB                     MOV ECX,EBX
0058A0D2  E8 50 93 E7 FF            CALL 0x00403427
0058A0D7  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A0DD  C7 83 49 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x249],0x2
0058A0E7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A0EC  33 C0                     XOR EAX,EAX
0058A0EE  5F                        POP EDI
0058A0EF  5E                        POP ESI
0058A0F0  5B                        POP EBX
0058A0F1  8B E5                     MOV ESP,EBP
0058A0F3  5D                        POP EBP
0058A0F4  C2 04 00                  RET 0x4
LAB_0058a0f7:
0058A0F7  83 BB 49 02 00 00 02      CMP dword ptr [EBX + 0x249],0x2
0058A0FE  0F 84 C5 04 00 00         JZ 0x0058a5c9
0058A104  8B CB                     MOV ECX,EBX
0058A106  E8 56 81 E7 FF            CALL 0x00402261
0058A10B  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A111  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A116  33 C0                     XOR EAX,EAX
0058A118  5F                        POP EDI
0058A119  5E                        POP ESI
0058A11A  5B                        POP EBX
0058A11B  8B E5                     MOV ESP,EBP
0058A11D  5D                        POP EBP
0058A11E  C2 04 00                  RET 0x4
LAB_0058a121:
0058A121  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0058A124  52                        PUSH EDX
0058A125  E8 5F 90 E7 FF            CALL 0x00403189
0058A12A  83 C4 04                  ADD ESP,0x4
0058A12D  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058A133  E8 9D 80 E7 FF            CALL 0x004021d5
0058A138  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A13E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A143  33 C0                     XOR EAX,EAX
0058A145  5F                        POP EDI
0058A146  5E                        POP ESI
0058A147  5B                        POP EBX
0058A148  8B E5                     MOV ESP,EBP
0058A14A  5D                        POP EBP
0058A14B  C2 04 00                  RET 0x4
LAB_0058a14e:
0058A14E  3D 0F 01 00 00            CMP EAX,0x10f
0058A153  0F 85 70 04 00 00         JNZ 0x0058a5c9
0058A159  8D 45 FC                  LEA EAX,[EBP + -0x4]
0058A15C  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058A162  50                        PUSH EAX
0058A163  E8 6C 77 E7 FF            CALL 0x004018d4
0058A168  8D 4D F4                  LEA ECX,[EBP + -0xc]
0058A16B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058A16E  51                        PUSH ECX
0058A16F  8B CB                     MOV ECX,EBX
0058A171  E8 24 70 E7 FF            CALL 0x0040119a
0058A176  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058A179  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058A17C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0058A17F  8D 8C 10 96 00 00 00      LEA ECX,[EAX + EDX*0x1 + 0x96]
0058A186  51                        PUSH ECX
0058A187  E8 E4 0A 12 00            CALL 0x006aac70
0058A18C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0058A18F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0058A192  3B CF                     CMP ECX,EDI
0058A194  0F 84 2F 04 00 00         JZ 0x0058a5c9
0058A19A  39 7D EC                  CMP dword ptr [EBP + -0x14],EDI
0058A19D  0F 84 26 04 00 00         JZ 0x0058a5c9
0058A1A3  3B C7                     CMP EAX,EDI
0058A1A5  0F 84 1E 04 00 00         JZ 0x0058a5c9
0058A1AB  8D B3 85 02 00 00         LEA ESI,[EBX + 0x285]
0058A1B1  B9 0A 00 00 00            MOV ECX,0xa
0058A1B6  8B F8                     MOV EDI,EAX
0058A1B8  F3 A5                     MOVSD.REP ES:EDI,ESI
0058A1BA  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
0058A1C1  8B 93 45 02 00 00         MOV EDX,dword ptr [EBX + 0x245]
0058A1C7  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
0058A1CA  8B 8B 49 02 00 00         MOV ECX,dword ptr [EBX + 0x249]
0058A1D0  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
0058A1D3  66 8B 53 41               MOV DX,word ptr [EBX + 0x41]
0058A1D7  66 89 50 78               MOV word ptr [EAX + 0x78],DX
0058A1DB  66 8B 4B 43               MOV CX,word ptr [EBX + 0x43]
0058A1DF  66 89 48 7A               MOV word ptr [EAX + 0x7a],CX
0058A1E3  66 8B 53 45               MOV DX,word ptr [EBX + 0x45]
0058A1E7  66 89 50 7C               MOV word ptr [EAX + 0x7c],DX
0058A1EB  8B 8B 31 02 00 00         MOV ECX,dword ptr [EBX + 0x231]
0058A1F1  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
0058A1F4  8B 93 41 02 00 00         MOV EDX,dword ptr [EBX + 0x241]
0058A1FA  89 50 44                  MOV dword ptr [EAX + 0x44],EDX
0058A1FD  8B 8B 51 02 00 00         MOV ECX,dword ptr [EBX + 0x251]
0058A203  89 48 48                  MOV dword ptr [EAX + 0x48],ECX
0058A206  8B 93 55 02 00 00         MOV EDX,dword ptr [EBX + 0x255]
0058A20C  89 50 4C                  MOV dword ptr [EAX + 0x4c],EDX
0058A20F  8B 8B 59 02 00 00         MOV ECX,dword ptr [EBX + 0x259]
0058A215  89 48 50                  MOV dword ptr [EAX + 0x50],ECX
0058A218  8B 93 5D 02 00 00         MOV EDX,dword ptr [EBX + 0x25d]
0058A21E  89 50 54                  MOV dword ptr [EAX + 0x54],EDX
0058A221  8B 8B 61 02 00 00         MOV ECX,dword ptr [EBX + 0x261]
0058A227  89 48 58                  MOV dword ptr [EAX + 0x58],ECX
0058A22A  8B 93 65 02 00 00         MOV EDX,dword ptr [EBX + 0x265]
0058A230  89 50 5C                  MOV dword ptr [EAX + 0x5c],EDX
0058A233  8B 8B 69 02 00 00         MOV ECX,dword ptr [EBX + 0x269]
0058A239  89 48 60                  MOV dword ptr [EAX + 0x60],ECX
0058A23C  8B 93 6D 02 00 00         MOV EDX,dword ptr [EBX + 0x26d]
0058A242  89 50 64                  MOV dword ptr [EAX + 0x64],EDX
0058A245  8B 8B 71 02 00 00         MOV ECX,dword ptr [EBX + 0x271]
0058A24B  89 48 68                  MOV dword ptr [EAX + 0x68],ECX
0058A24E  8B 93 75 02 00 00         MOV EDX,dword ptr [EBX + 0x275]
0058A254  89 50 6C                  MOV dword ptr [EAX + 0x6c],EDX
0058A257  8B 8B 79 02 00 00         MOV ECX,dword ptr [EBX + 0x279]
0058A25D  89 48 70                  MOV dword ptr [EAX + 0x70],ECX
0058A260  8B 93 7D 02 00 00         MOV EDX,dword ptr [EBX + 0x27d]
0058A266  89 50 74                  MOV dword ptr [EAX + 0x74],EDX
0058A269  8B 8B 39 02 00 00         MOV ECX,dword ptr [EBX + 0x239]
0058A26F  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
0058A272  8B 93 3D 02 00 00         MOV EDX,dword ptr [EBX + 0x23d]
0058A278  89 50 3C                  MOV dword ptr [EAX + 0x3c],EDX
0058A27B  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
0058A281  89 48 34                  MOV dword ptr [EAX + 0x34],ECX
0058A284  8B 93 81 02 00 00         MOV EDX,dword ptr [EBX + 0x281]
0058A28A  89 90 86 00 00 00         MOV dword ptr [EAX + 0x86],EDX
0058A290  66 8B 4B 4E               MOV CX,word ptr [EBX + 0x4e]
0058A294  66 89 48 7E               MOV word ptr [EAX + 0x7e],CX
0058A298  66 8B 53 50               MOV DX,word ptr [EBX + 0x50]
0058A29C  66 89 90 80 00 00 00      MOV word ptr [EAX + 0x80],DX
0058A2A3  66 8B 4B 52               MOV CX,word ptr [EBX + 0x52]
0058A2A7  66 89 88 82 00 00 00      MOV word ptr [EAX + 0x82],CX
0058A2AE  66 8B 53 6C               MOV DX,word ptr [EBX + 0x6c]
0058A2B2  66 89 90 84 00 00 00      MOV word ptr [EAX + 0x84],DX
0058A2B9  8B 8B 4D 02 00 00         MOV ECX,dword ptr [EBX + 0x24d]
0058A2BF  89 48 30                  MOV dword ptr [EAX + 0x30],ECX
0058A2C2  C7 80 8A 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0x8a],0x0
0058A2CC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058A2CF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058A2D2  89 90 8E 00 00 00         MOV dword ptr [EAX + 0x8e],EDX
0058A2D8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058A2DB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058A2DE  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0058A2E1  8B C1                     MOV EAX,ECX
0058A2E3  8D BA 92 00 00 00         LEA EDI,[EDX + 0x92]
0058A2E9  C1 E9 02                  SHR ECX,0x2
0058A2EC  F3 A5                     MOVSD.REP ES:EDI,ESI
0058A2EE  8B C8                     MOV ECX,EAX
0058A2F0  83 E1 03                  AND ECX,0x3
0058A2F3  F3 A4                     MOVSB.REP ES:EDI,ESI
0058A2F5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058A2F8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058A2FB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058A2FE  89 8C 02 92 00 00 00      MOV dword ptr [EDX + EAX*0x1 + 0x92],ECX
0058A305  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058A308  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0058A30B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058A30E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058A311  8D BC 10 96 00 00 00      LEA EDI,[EAX + EDX*0x1 + 0x96]
0058A318  8B D1                     MOV EDX,ECX
0058A31A  C1 E9 02                  SHR ECX,0x2
0058A31D  F3 A5                     MOVSD.REP ES:EDI,ESI
0058A31F  8B CA                     MOV ECX,EDX
0058A321  83 E1 03                  AND ECX,0x3
0058A324  F3 A4                     MOVSB.REP ES:EDI,ESI
0058A326  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058A329  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058A32C  8D 94 01 96 00 00 00      LEA EDX,[ECX + EAX*0x1 + 0x96]
0058A333  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058A336  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0058A339  52                        PUSH EDX
0058A33A  50                        PUSH EAX
0058A33B  51                        PUSH ECX
0058A33C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058A342  E8 B2 82 E7 FF            CALL 0x004025f9
0058A347  8D 55 F0                  LEA EDX,[EBP + -0x10]
0058A34A  52                        PUSH EDX
0058A34B  E8 10 0D 12 00            CALL 0x006ab060
0058A350  8D 45 EC                  LEA EAX,[EBP + -0x14]
0058A353  50                        PUSH EAX
0058A354  E8 07 0D 12 00            CALL 0x006ab060
0058A359  8D 4D F8                  LEA ECX,[EBP + -0x8]
0058A35C  51                        PUSH ECX
0058A35D  E8 FE 0C 12 00            CALL 0x006ab060
0058A362  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A368  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A36D  33 C0                     XOR EAX,EAX
0058A36F  5F                        POP EDI
0058A370  5E                        POP ESI
0058A371  5B                        POP EBX
0058A372  8B E5                     MOV ESP,EBP
0058A374  5D                        POP EBP
0058A375  C2 04 00                  RET 0x4
LAB_0058a378:
0058A378  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058A37E  E8 0D 87 E7 FF            CALL 0x00402a90
0058A383  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A389  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A38E  33 C0                     XOR EAX,EAX
0058A390  5F                        POP EDI
0058A391  5E                        POP ESI
0058A392  5B                        POP EBX
0058A393  8B E5                     MOV ESP,EBP
0058A395  5D                        POP EBP
0058A396  C2 04 00                  RET 0x4
LAB_0058a399:
0058A399  3D 28 01 00 00            CMP EAX,0x128
0058A39E  0F 87 D9 01 00 00         JA 0x0058a57d
0058A3A4  0F 84 86 01 00 00         JZ 0x0058a530
0058A3AA  2D 13 01 00 00            SUB EAX,0x113
0058A3AF  0F 84 57 01 00 00         JZ 0x0058a50c
0058A3B5  83 E8 14                  SUB EAX,0x14
0058A3B8  0F 85 0B 02 00 00         JNZ 0x0058a5c9
0058A3BE  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0058A3C1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058A3C4  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0058A3C7  8D 4C D0 64               LEA ECX,[EAX + EDX*0x8 + 0x64]
0058A3CB  C1 E8 10                  SHR EAX,0x10
0058A3CE  0F BF D1                  MOVSX EDX,CX
0058A3D1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058A3D4  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058A3D7  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
0058A3DB  0F BF F8                  MOVSX EDI,AX
0058A3DE  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0058A3E1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058A3E4  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058A3E7  8D 4C C8 64               LEA ECX,[EAX + ECX*0x8 + 0x64]
0058A3EB  C1 E8 10                  SHR EAX,0x10
0058A3EE  0F BF F1                  MOVSX ESI,CX
0058A3F1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058A3F4  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058A3F7  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
0058A3FB  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0058A3FE  51                        PUSH ECX
0058A3FF  8D 4D E0                  LEA ECX,[EBP + -0x20]
0058A402  0F BF C0                  MOVSX EAX,AX
0058A405  51                        PUSH ECX
0058A406  8D 4D E8                  LEA ECX,[EBP + -0x18]
0058A409  51                        PUSH ECX
0058A40A  50                        PUSH EAX
0058A40B  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0058A412  57                        PUSH EDI
0058A413  56                        PUSH ESI
0058A414  52                        PUSH EDX
0058A415  53                        PUSH EBX
0058A416  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0058A41D  4A                        DEC EDX
0058A41E  48                        DEC EAX
0058A41F  52                        PUSH EDX
0058A420  50                        PUSH EAX
0058A421  6A 00                     PUSH 0x0
0058A423  6A 00                     PUSH 0x0
0058A425  E8 BD 75 E7 FF            CALL 0x004019e7
0058A42A  83 C4 30                  ADD ESP,0x30
0058A42D  85 C0                     TEST EAX,EAX
0058A42F  0F 84 94 01 00 00         JZ 0x0058a5c9
0058A435  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0058A438  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0058A43B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0058A43E  51                        PUSH ECX
0058A43F  52                        PUSH EDX
0058A440  50                        PUSH EAX
0058A441  8B CB                     MOV ECX,EBX
0058A443  E8 AD 80 E7 FF            CALL 0x004024f5
0058A448  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0058A44B  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0058A44E  8B 13                     MOV EDX,dword ptr [EBX]
0058A450  50                        PUSH EAX
0058A451  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0058A454  51                        PUSH ECX
0058A455  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
0058A459  50                        PUSH EAX
0058A45A  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
0058A45E  51                        PUSH ECX
0058A45F  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
0058A463  50                        PUSH EAX
0058A464  51                        PUSH ECX
0058A465  8B CB                     MOV ECX,EBX
0058A467  FF 52 10                  CALL dword ptr [EDX + 0x10]
0058A46A  0F BF C8                  MOVSX ECX,AX
0058A46D  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0058A472  F7 E9                     IMUL ECX
0058A474  03 D1                     ADD EDX,ECX
0058A476  C1 FA 05                  SAR EDX,0x5
0058A479  8B C2                     MOV EAX,EDX
0058A47B  C1 E8 1F                  SHR EAX,0x1f
0058A47E  03 D0                     ADD EDX,EAX
0058A480  66 89 53 6C               MOV word ptr [EBX + 0x6c],DX
0058A484  8B 83 51 02 00 00         MOV EAX,dword ptr [EBX + 0x251]
0058A48A  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0058A48D  C1 E1 05                  SHL ECX,0x5
0058A490  03 C8                     ADD ECX,EAX
0058A492  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
0058A495  C1 E0 04                  SHL EAX,0x4
0058A498  99                        CDQ
0058A499  81 E2 FF 0F 00 00         AND EDX,0xfff
0058A49F  03 C2                     ADD EAX,EDX
0058A4A1  C1 F8 0C                  SAR EAX,0xc
0058A4A4  89 83 51 02 00 00         MOV dword ptr [EBX + 0x251],EAX
0058A4AA  8B 83 55 02 00 00         MOV EAX,dword ptr [EBX + 0x255]
0058A4B0  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0058A4B3  C1 E2 05                  SHL EDX,0x5
0058A4B6  03 D0                     ADD EDX,EAX
0058A4B8  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
0058A4BB  C1 E0 04                  SHL EAX,0x4
0058A4BE  99                        CDQ
0058A4BF  81 E2 FF 0F 00 00         AND EDX,0xfff
0058A4C5  03 C2                     ADD EAX,EDX
0058A4C7  C1 F8 0C                  SAR EAX,0xc
0058A4CA  89 83 55 02 00 00         MOV dword ptr [EBX + 0x255],EAX
0058A4D0  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
0058A4D6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0058A4D9  C1 E1 05                  SHL ECX,0x5
0058A4DC  03 C8                     ADD ECX,EAX
0058A4DE  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
0058A4E1  C1 E0 04                  SHL EAX,0x4
0058A4E4  99                        CDQ
0058A4E5  81 E2 FF 0F 00 00         AND EDX,0xfff
0058A4EB  03 C2                     ADD EAX,EDX
0058A4ED  C1 F8 0C                  SAR EAX,0xc
0058A4F0  89 83 59 02 00 00         MOV dword ptr [EBX + 0x259],EAX
0058A4F6  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A4FC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A501  33 C0                     XOR EAX,EAX
0058A503  5F                        POP EDI
0058A504  5E                        POP ESI
0058A505  5B                        POP EBX
0058A506  8B E5                     MOV ESP,EBP
0058A508  5D                        POP EBP
0058A509  C2 04 00                  RET 0x4
LAB_0058a50c:
0058A50C  8B 93 D5 01 00 00         MOV EDX,dword ptr [EBX + 0x1d5]
0058A512  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058A518  FF 12                     CALL dword ptr [EDX]
0058A51A  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A520  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A525  33 C0                     XOR EAX,EAX
0058A527  5F                        POP EDI
0058A528  5E                        POP ESI
0058A529  5B                        POP EBX
0058A52A  8B E5                     MOV ESP,EBP
0058A52C  5D                        POP EBP
0058A52D  C2 04 00                  RET 0x4
LAB_0058a530:
0058A530  8B 83 49 02 00 00         MOV EAX,dword ptr [EBX + 0x249]
0058A536  BE 02 00 00 00            MOV ESI,0x2
0058A53B  3B C6                     CMP EAX,ESI
0058A53D  0F 84 86 00 00 00         JZ 0x0058a5c9
0058A543  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058A549  E8 7E AD E7 FF            CALL 0x004052cc
0058A54E  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0058A554  50                        PUSH EAX
0058A555  E8 06 06 16 00            CALL 0x006eab60
0058A55A  8B CB                     MOV ECX,EBX
0058A55C  E8 C6 8E E7 FF            CALL 0x00403427
0058A561  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A567  89 B3 49 02 00 00         MOV dword ptr [EBX + 0x249],ESI
0058A56D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A572  33 C0                     XOR EAX,EAX
0058A574  5F                        POP EDI
0058A575  5E                        POP ESI
0058A576  5B                        POP EBX
0058A577  8B E5                     MOV ESP,EBP
0058A579  5D                        POP EBP
0058A57A  C2 04 00                  RET 0x4
LAB_0058a57d:
0058A57D  3D 0F 44 00 00            CMP EAX,0x440f
0058A582  75 45                     JNZ 0x0058a5c9
0058A584  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0058A589  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0058A58F  3B C7                     CMP EAX,EDI
0058A591  6A 0E                     PUSH 0xe
0058A593  8B CE                     MOV ECX,ESI
0058A595  74 24                     JZ 0x0058a5bb
0058A597  E8 B8 A2 E7 FF            CALL 0x00404854
0058A59C  6A 08                     PUSH 0x8
0058A59E  8B CE                     MOV ECX,ESI
0058A5A0  E8 AF A2 E7 FF            CALL 0x00404854
0058A5A5  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A5AB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A5B0  33 C0                     XOR EAX,EAX
0058A5B2  5F                        POP EDI
0058A5B3  5E                        POP ESI
0058A5B4  5B                        POP EBX
0058A5B5  8B E5                     MOV ESP,EBP
0058A5B7  5D                        POP EBP
0058A5B8  C2 04 00                  RET 0x4
LAB_0058a5bb:
0058A5BB  E8 A1 81 E7 FF            CALL 0x00402761
0058A5C0  6A 08                     PUSH 0x8
0058A5C2  8B CE                     MOV ECX,ESI
0058A5C4  E8 98 81 E7 FF            CALL 0x00402761
LAB_0058a5c9:
0058A5C9  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0058A5CF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058A5D4  33 C0                     XOR EAX,EAX
0058A5D6  5F                        POP EDI
0058A5D7  5E                        POP ESI
0058A5D8  5B                        POP EBX
0058A5D9  8B E5                     MOV ESP,EBP
0058A5DB  5D                        POP EBP
0058A5DC  C2 04 00                  RET 0x4
LAB_0058a5df:
0058A5DF  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
0058A5E5  68 6C BA 7C 00            PUSH 0x7cba6c
0058A5EA  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058A5EF  56                        PUSH ESI
0058A5F0  57                        PUSH EDI
0058A5F1  68 CF 01 00 00            PUSH 0x1cf
0058A5F6  68 18 BA 7C 00            PUSH 0x7cba18
0058A5FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0058A601  E8 CA 2E 12 00            CALL 0x006ad4d0
0058A606  83 C4 18                  ADD ESP,0x18
0058A609  85 C0                     TEST EAX,EAX
0058A60B  74 01                     JZ 0x0058a60e
0058A60D  CC                        INT3
LAB_0058a60e:
0058A60E  68 D0 01 00 00            PUSH 0x1d0
0058A613  68 18 BA 7C 00            PUSH 0x7cba18
0058A618  57                        PUSH EDI
0058A619  56                        PUSH ESI
0058A61A  E8 21 B8 11 00            CALL 0x006a5e40
0058A61F  5F                        POP EDI
0058A620  5E                        POP ESI
0058A621  B8 FF FF 00 00            MOV EAX,0xffff
0058A626  5B                        POP EBX
0058A627  8B E5                     MOV ESP,EBP
0058A629  5D                        POP EBP
0058A62A  C2 04 00                  RET 0x4
