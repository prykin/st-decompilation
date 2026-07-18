FUN_00676d80:
00676D80  55                        PUSH EBP
00676D81  8B EC                     MOV EBP,ESP
00676D83  83 EC 6C                  SUB ESP,0x6c
00676D86  8A 45 18                  MOV AL,byte ptr [EBP + 0x18]
00676D89  53                        PUSH EBX
00676D8A  56                        PUSH ESI
00676D8B  57                        PUSH EDI
00676D8C  33 FF                     XOR EDI,EDI
00676D8E  3C 08                     CMP AL,0x8
00676D90  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00676D93  75 08                     JNZ 0x00676d9d
00676D95  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00676D98  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
00676D9B  EB 0F                     JMP 0x00676dac
LAB_00676d9d:
00676D9D  84 C0                     TEST AL,AL
00676D9F  7C 07                     JL 0x00676da8
00676DA1  3C 08                     CMP AL,0x8
00676DA3  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
00676DA6  7E 04                     JLE 0x00676dac
LAB_00676da8:
00676DA8  C6 45 FF FF               MOV byte ptr [EBP + -0x1],0xff
LAB_00676dac:
00676DAC  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00676DB2  8D 45 98                  LEA EAX,[EBP + -0x68]
00676DB5  8D 55 94                  LEA EDX,[EBP + -0x6c]
00676DB8  57                        PUSH EDI
00676DB9  50                        PUSH EAX
00676DBA  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
00676DBD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00676DC3  E8 28 6A 0B 00            CALL 0x0072d7f0
00676DC8  8B F0                     MOV ESI,EAX
00676DCA  83 C4 08                  ADD ESP,0x8
00676DCD  3B F7                     CMP ESI,EDI
00676DCF  0F 85 DE 02 00 00         JNZ 0x006770b3
00676DD5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00676DD8  51                        PUSH ECX
00676DD9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00676DDF  E8 A5 EB D8 FF            CALL 0x00405989
00676DE4  8B D0                     MOV EDX,EAX
00676DE6  3B D7                     CMP EDX,EDI
00676DE8  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00676DEB  0F 84 98 02 00 00         JZ 0x00677089
00676DF1  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00676DF4  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00676DF7  3B C7                     CMP EAX,EDI
00676DF9  0F 86 A1 02 00 00         JBE 0x006770a0
00676DFF  33 C9                     XOR ECX,ECX
00676E01  3B C8                     CMP ECX,EAX
00676E03  73 0B                     JNC 0x00676e10
LAB_00676e05:
00676E05  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00676E08  0F AF C1                  IMUL EAX,ECX
00676E0B  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
00676E0E  EB 02                     JMP 0x00676e12
LAB_00676e10:
00676E10  33 C0                     XOR EAX,EAX
LAB_00676e12:
00676E12  8B 18                     MOV EBX,dword ptr [EAX]
00676E14  85 DB                     TEST EBX,EBX
00676E16  0F 84 25 02 00 00         JZ 0x00677041
00676E1C  8B 13                     MOV EDX,dword ptr [EBX]
00676E1E  8B CB                     MOV ECX,EBX
00676E20  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00676E26  85 C0                     TEST EAX,EAX
00676E28  0F 84 13 02 00 00         JZ 0x00677041
00676E2E  8B 03                     MOV EAX,dword ptr [EBX]
00676E30  8B CB                     MOV ECX,EBX
00676E32  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00676E39  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00676E3C  8B F8                     MOV EDI,EAX
00676E3E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00676E41  85 C0                     TEST EAX,EAX
00676E43  74 4A                     JZ 0x00676e8f
00676E45  83 FF 78                  CMP EDI,0x78
00676E48  75 2C                     JNZ 0x00676e76
00676E4A  A9 00 00 00 80            TEST EAX,0x80000000
00676E4F  75 37                     JNZ 0x00676e88
00676E51  8B F0                     MOV ESI,EAX
00676E53  81 E6 FF FF FF 3F         AND ESI,0x3fffffff
00676E59  74 34                     JZ 0x00676e8f
00676E5B  8B 13                     MOV EDX,dword ptr [EBX]
00676E5D  8B CB                     MOV ECX,EBX
00676E5F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00676E62  3B C7                     CMP EAX,EDI
00676E64  75 08                     JNZ 0x00676e6e
00676E66  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00676E6C  EB 02                     JMP 0x00676e70
LAB_00676e6e:
00676E6E  33 C0                     XOR EAX,EAX
LAB_00676e70:
00676E70  3B F0                     CMP ESI,EAX
00676E72  74 1B                     JZ 0x00676e8f
00676E74  EB 12                     JMP 0x00676e88
LAB_00676e76:
00676E76  A9 00 00 00 40            TEST EAX,0x40000000
00676E7B  75 0B                     JNZ 0x00676e88
00676E7D  25 FF FF FF 3F            AND EAX,0x3fffffff
00676E82  74 0B                     JZ 0x00676e8f
00676E84  3B C7                     CMP EAX,EDI
00676E86  74 07                     JZ 0x00676e8f
LAB_00676e88:
00676E88  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_00676e8f:
00676E8F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00676E92  85 C0                     TEST EAX,EAX
00676E94  0F 84 8A 01 00 00         JZ 0x00677024
00676E9A  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00676E9D  81 FE FF FF FF 3F         CMP ESI,0x3fffffff
00676EA3  74 57                     JZ 0x00676efc
00676EA5  83 FF 78                  CMP EDI,0x78
00676EA8  75 31                     JNZ 0x00676edb
00676EAA  F7 C6 00 00 00 80         TEST ESI,0x80000000
00676EB0  75 43                     JNZ 0x00676ef5
00676EB2  8B 03                     MOV EAX,dword ptr [EBX]
00676EB4  8B CB                     MOV ECX,EBX
00676EB6  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00676EB9  3B C7                     CMP EAX,EDI
00676EBB  75 08                     JNZ 0x00676ec5
00676EBD  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00676EC3  EB 02                     JMP 0x00676ec7
LAB_00676ec5:
00676EC5  33 C0                     XOR EAX,EAX
LAB_00676ec7:
00676EC7  50                        PUSH EAX
00676EC8  E8 3E D2 D8 FF            CALL 0x0040410b
00676ECD  23 C6                     AND EAX,ESI
00676ECF  83 C4 04                  ADD ESP,0x4
00676ED2  A9 FF FF FF 3F            TEST EAX,0x3fffffff
00676ED7  75 23                     JNZ 0x00676efc
00676ED9  EB 1A                     JMP 0x00676ef5
LAB_00676edb:
00676EDB  F7 C6 00 00 00 40         TEST ESI,0x40000000
00676EE1  75 12                     JNZ 0x00676ef5
00676EE3  57                        PUSH EDI
00676EE4  E8 22 D2 D8 FF            CALL 0x0040410b
00676EE9  23 C6                     AND EAX,ESI
00676EEB  83 C4 04                  ADD ESP,0x4
00676EEE  A9 FF FF FF 3F            TEST EAX,0x3fffffff
00676EF3  75 07                     JNZ 0x00676efc
LAB_00676ef5:
00676EF5  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_00676efc:
00676EFC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00676EFF  85 C0                     TEST EAX,EAX
00676F01  0F 84 1D 01 00 00         JZ 0x00677024
00676F07  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00676F0A  85 FF                     TEST EDI,EDI
00676F0C  74 49                     JZ 0x00676f57
00676F0E  80 3F 00                  CMP byte ptr [EDI],0x0
00676F11  74 44                     JZ 0x00676f57
00676F13  8B 13                     MOV EDX,dword ptr [EBX]
00676F15  8D 45 D8                  LEA EAX,[EBP + -0x28]
00676F18  50                        PUSH EAX
00676F19  8B CB                     MOV ECX,EBX
00676F1B  FF 52 74                  CALL dword ptr [EDX + 0x74]
00676F1E  8D 75 D8                  LEA ESI,[EBP + -0x28]
00676F21  8B C7                     MOV EAX,EDI
LAB_00676f23:
00676F23  8A 10                     MOV DL,byte ptr [EAX]
00676F25  8A CA                     MOV CL,DL
00676F27  3A 16                     CMP DL,byte ptr [ESI]
00676F29  75 1C                     JNZ 0x00676f47
00676F2B  84 C9                     TEST CL,CL
00676F2D  74 14                     JZ 0x00676f43
00676F2F  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00676F32  8A CA                     MOV CL,DL
00676F34  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
00676F37  75 0E                     JNZ 0x00676f47
00676F39  83 C0 02                  ADD EAX,0x2
00676F3C  83 C6 02                  ADD ESI,0x2
00676F3F  84 C9                     TEST CL,CL
00676F41  75 E0                     JNZ 0x00676f23
LAB_00676f43:
00676F43  33 C0                     XOR EAX,EAX
00676F45  EB 05                     JMP 0x00676f4c
LAB_00676f47:
00676F47  1B C0                     SBB EAX,EAX
00676F49  83 D8 FF                  SBB EAX,-0x1
LAB_00676f4c:
00676F4C  85 C0                     TEST EAX,EAX
00676F4E  74 07                     JZ 0x00676f57
00676F50  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_00676f57:
00676F57  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00676F5A  85 C0                     TEST EAX,EAX
00676F5C  0F 84 C2 00 00 00         JZ 0x00677024
00676F62  80 7D FF FF               CMP byte ptr [EBP + -0x1],0xff
00676F66  74 13                     JZ 0x00676f7b
00676F68  8B 03                     MOV EAX,dword ptr [EBX]
00676F6A  8B CB                     MOV ECX,EBX
00676F6C  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
00676F6F  0F BE 4D FF               MOVSX ECX,byte ptr [EBP + -0x1]
00676F73  3B C8                     CMP ECX,EAX
00676F75  0F 85 A9 00 00 00         JNZ 0x00677024
LAB_00676f7b:
00676F7B  66 8B 7D 28               MOV DI,word ptr [EBP + 0x28]
00676F7F  66 85 FF                  TEST DI,DI
00676F82  7E 7A                     JLE 0x00676ffe
00676F84  66 83 7D 2C 00            CMP word ptr [EBP + 0x2c],0x0
00676F89  7E 73                     JLE 0x00676ffe
00676F8B  66 83 7D 30 00            CMP word ptr [EBP + 0x30],0x0
00676F90  7E 6C                     JLE 0x00676ffe
00676F92  8D 55 F8                  LEA EDX,[EBP + -0x8]
00676F95  8D 45 FA                  LEA EAX,[EBP + -0x6]
00676F98  52                        PUSH EDX
00676F99  8D 4D FC                  LEA ECX,[EBP + -0x4]
00676F9C  50                        PUSH EAX
00676F9D  51                        PUSH ECX
00676F9E  8B CB                     MOV ECX,EBX
00676FA0  E8 20 A9 D8 FF            CALL 0x004018c5
00676FA5  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
00676FA9  66 8B 75 1C               MOV SI,word ptr [EBP + 0x1c]
00676FAD  66 3B C6                  CMP AX,SI
00676FB0  7C 45                     JL 0x00676ff7
00676FB2  66 8B 4D FA               MOV CX,word ptr [EBP + -0x6]
00676FB6  66 3B 4D 20               CMP CX,word ptr [EBP + 0x20]
00676FBA  7C 3B                     JL 0x00676ff7
00676FBC  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
00676FC0  66 3B 55 24               CMP DX,word ptr [EBP + 0x24]
00676FC4  7C 31                     JL 0x00676ff7
00676FC6  0F BF F6                  MOVSX ESI,SI
00676FC9  0F BF FF                  MOVSX EDI,DI
00676FCC  0F BF C0                  MOVSX EAX,AX
00676FCF  03 F7                     ADD ESI,EDI
00676FD1  3B C6                     CMP EAX,ESI
00676FD3  7D 22                     JGE 0x00676ff7
00676FD5  0F BF 45 20               MOVSX EAX,word ptr [EBP + 0x20]
00676FD9  0F BF 75 2C               MOVSX ESI,word ptr [EBP + 0x2c]
00676FDD  0F BF C9                  MOVSX ECX,CX
00676FE0  03 C6                     ADD EAX,ESI
00676FE2  3B C8                     CMP ECX,EAX
00676FE4  7D 11                     JGE 0x00676ff7
00676FE6  0F BF 45 24               MOVSX EAX,word ptr [EBP + 0x24]
00676FEA  0F BF 4D 30               MOVSX ECX,word ptr [EBP + 0x30]
00676FEE  0F BF D2                  MOVSX EDX,DX
00676FF1  03 C1                     ADD EAX,ECX
00676FF3  3B D0                     CMP EDX,EAX
00676FF5  7C 07                     JL 0x00676ffe
LAB_00676ff7:
00676FF7  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_00676ffe:
00676FFE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00677001  85 C0                     TEST EAX,EAX
00677003  74 1F                     JZ 0x00677024
00677005  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00677008  85 C0                     TEST EAX,EAX
0067700A  74 18                     JZ 0x00677024
0067700C  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
0067700F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00677012  51                        PUSH ECX
00677013  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00677016  53                        PUSH EBX
00677017  52                        PUSH EDX
00677018  51                        PUSH ECX
00677019  FF D0                     CALL EAX
0067701B  83 C4 10                  ADD ESP,0x10
0067701E  85 C0                     TEST EAX,EAX
00677020  75 4D                     JNZ 0x0067706f
00677022  EB 1D                     JMP 0x00677041
LAB_00677024:
00677024  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
00677027  85 C0                     TEST EAX,EAX
00677029  74 16                     JZ 0x00677041
0067702B  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
0067702E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00677031  52                        PUSH EDX
00677032  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00677035  53                        PUSH EBX
00677036  51                        PUSH ECX
00677037  52                        PUSH EDX
00677038  FF D0                     CALL EAX
0067703A  83 C4 10                  ADD ESP,0x10
0067703D  85 C0                     TEST EAX,EAX
0067703F  75 2E                     JNZ 0x0067706f
LAB_00677041:
00677041  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00677044  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00677047  41                        INC ECX
00677048  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0067704B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0067704E  81 E1 FF FF 00 00         AND ECX,0xffff
00677054  3B C8                     CMP ECX,EAX
00677056  0F 82 A9 FD FF FF         JC 0x00676e05
0067705C  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0067705F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00677062  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00677068  5F                        POP EDI
00677069  5E                        POP ESI
0067706A  5B                        POP EBX
0067706B  8B E5                     MOV ESP,EBP
0067706D  5D                        POP EBP
0067706E  C3                        RET
LAB_0067706f:
0067706F  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
00677072  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
00677079  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0067707C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00677082  5F                        POP EDI
00677083  5E                        POP ESI
00677084  5B                        POP EBX
00677085  8B E5                     MOV ESP,EBP
00677087  5D                        POP EBP
00677088  C3                        RET
LAB_00677089:
00677089  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067708E  68 93 02 00 00            PUSH 0x293
00677093  68 58 2D 7D 00            PUSH 0x7d2d58
00677098  50                        PUSH EAX
00677099  6A CC                     PUSH -0x34
0067709B  E8 A0 ED 02 00            CALL 0x006a5e40
LAB_006770a0:
006770A0  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006770A3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006770A6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006770AC  5F                        POP EDI
006770AD  5E                        POP ESI
006770AE  5B                        POP EBX
006770AF  8B E5                     MOV ESP,EBP
006770B1  5D                        POP EBP
006770B2  C3                        RET
LAB_006770b3:
006770B3  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006770B6  68 F4 2D 7D 00            PUSH 0x7d2df4
006770BB  68 CC 4C 7A 00            PUSH 0x7a4ccc
006770C0  56                        PUSH ESI
006770C1  57                        PUSH EDI
006770C2  68 95 02 00 00            PUSH 0x295
006770C7  68 58 2D 7D 00            PUSH 0x7d2d58
006770CC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006770D2  E8 F9 63 03 00            CALL 0x006ad4d0
006770D7  83 C4 18                  ADD ESP,0x18
006770DA  85 C0                     TEST EAX,EAX
006770DC  74 01                     JZ 0x006770df
006770DE  CC                        INT3
LAB_006770df:
006770DF  68 96 02 00 00            PUSH 0x296
006770E4  68 58 2D 7D 00            PUSH 0x7d2d58
006770E9  57                        PUSH EDI
006770EA  56                        PUSH ESI
006770EB  E8 50 ED 02 00            CALL 0x006a5e40
006770F0  8B C6                     MOV EAX,ESI
006770F2  5F                        POP EDI
006770F3  5E                        POP ESI
006770F4  5B                        POP EBX
006770F5  8B E5                     MOV ESP,EBP
006770F7  5D                        POP EBP
006770F8  C3                        RET
