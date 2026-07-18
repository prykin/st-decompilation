STJumpMineC::GetMessage:
00618C00  55                        PUSH EBP
00618C01  8B EC                     MOV EBP,ESP
00618C03  83 EC 54                  SUB ESP,0x54
00618C06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00618C0B  53                        PUSH EBX
00618C0C  56                        PUSH ESI
00618C0D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00618C10  57                        PUSH EDI
00618C11  8D 55 B0                  LEA EDX,[EBP + -0x50]
00618C14  8D 4D AC                  LEA ECX,[EBP + -0x54]
00618C17  6A 00                     PUSH 0x0
00618C19  52                        PUSH EDX
00618C1A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00618C1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618C23  E8 C8 4B 11 00            CALL 0x0072d7f0
00618C28  8B F0                     MOV ESI,EAX
00618C2A  83 C4 08                  ADD ESP,0x8
00618C2D  85 F6                     TEST ESI,ESI
00618C2F  0F 85 A0 03 00 00         JNZ 0x00618fd5
00618C35  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00618C38  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00618C3B  3D 0F 01 00 00            CMP EAX,0x10f
00618C40  0F 87 A5 02 00 00         JA 0x00618eeb
00618C46  0F 84 5D 02 00 00         JZ 0x00618ea9
00618C4C  2B C6                     SUB EAX,ESI
00618C4E  0F 84 DE 01 00 00         JZ 0x00618e32
00618C54  83 E8 02                  SUB EAX,0x2
00618C57  74 57                     JZ 0x00618cb0
00618C59  48                        DEC EAX
00618C5A  0F 85 61 03 00 00         JNZ 0x00618fc1
00618C60  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00618C63  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
00618C66  85 C9                     TEST ECX,ECX
00618C68  74 2B                     JZ 0x00618c95
00618C6A  8A 86 4B 01 00 00         MOV AL,byte ptr [ESI + 0x14b]
00618C70  84 C0                     TEST AL,AL
00618C72  74 0E                     JZ 0x00618c82
00618C74  8B 86 45 01 00 00         MOV EAX,dword ptr [ESI + 0x145]
00618C7A  6A 00                     PUSH 0x0
00618C7C  50                        PUSH EAX
00618C7D  E8 D7 CF DE FF            CALL 0x00405c59
LAB_00618c82:
00618C82  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00618C85  C6 86 4B 01 00 00 00      MOV byte ptr [ESI + 0x14b],0x0
00618C8C  51                        PUSH ECX
00618C8D  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
00618C90  E8 FE A4 DE FF            CALL 0x00403193
LAB_00618c95:
00618C95  8B CE                     MOV ECX,ESI
00618C97  E8 98 B8 DE FF            CALL 0x00404534
00618C9C  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00618C9F  33 C0                     XOR EAX,EAX
00618CA1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618CA7  5F                        POP EDI
00618CA8  5E                        POP ESI
00618CA9  5B                        POP EBX
00618CAA  8B E5                     MOV ESP,EBP
00618CAC  5D                        POP EBP
00618CAD  C2 04 00                  RET 0x4
LAB_00618cb0:
00618CB0  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
00618CB3  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
00618CB7  0F 84 00 01 00 00         JZ 0x00618dbd
00618CBD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00618CC0  B9 10 00 00 00            MOV ECX,0x10
00618CC5  8D 7B 4D                  LEA EDI,[EBX + 0x4d]
00618CC8  F3 A5                     MOVSD.REP ES:EDI,ESI
00618CCA  66 A5                     MOVSW ES:EDI,ESI
00618CCC  8B 15 54 87 80 00         MOV EDX,dword ptr [0x00808754]
00618CD2  8B CB                     MOV ECX,EBX
00618CD4  89 53 1C                  MOV dword ptr [EBX + 0x1c],EDX
00618CD7  E8 B4 A2 DE FF            CALL 0x00402f90
00618CDC  85 C0                     TEST EAX,EAX
00618CDE  75 1B                     JNZ 0x00618cfb
LAB_00618ce0:
00618CE0  8B CB                     MOV ECX,EBX
00618CE2  E8 05 97 DE FF            CALL 0x004023ec
00618CE7  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00618CEA  33 C0                     XOR EAX,EAX
00618CEC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618CF2  5F                        POP EDI
00618CF3  5E                        POP ESI
00618CF4  5B                        POP EBX
00618CF5  8B E5                     MOV ESP,EBP
00618CF7  5D                        POP EBP
00618CF8  C2 04 00                  RET 0x4
LAB_00618cfb:
00618CFB  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00618D01  8B 8B EB 00 00 00         MOV ECX,dword ptr [EBX + 0xeb]
00618D07  8B 93 E7 00 00 00         MOV EDX,dword ptr [EBX + 0xe7]
00618D0D  50                        PUSH EAX
00618D0E  51                        PUSH ECX
00618D0F  52                        PUSH EDX
00618D10  6A 00                     PUSH 0x0
00618D12  8B CB                     MOV ECX,EBX
00618D14  E8 54 B1 DE FF            CALL 0x00403e6d
00618D19  85 C0                     TEST EAX,EAX
00618D1B  74 0C                     JZ 0x00618d29
00618D1D  C7 83 93 00 00 00 04 00 00 00  MOV dword ptr [EBX + 0x93],0x4
00618D27  EB 2C                     JMP 0x00618d55
LAB_00618d29:
00618D29  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00618D2F  8B 8B EB 00 00 00         MOV ECX,dword ptr [EBX + 0xeb]
00618D35  8B 93 E7 00 00 00         MOV EDX,dword ptr [EBX + 0xe7]
00618D3B  50                        PUSH EAX
00618D3C  51                        PUSH ECX
00618D3D  52                        PUSH EDX
00618D3E  6A 01                     PUSH 0x1
00618D40  8B CB                     MOV ECX,EBX
00618D42  E8 26 B1 DE FF            CALL 0x00403e6d
00618D47  85 C0                     TEST EAX,EAX
00618D49  74 95                     JZ 0x00618ce0
00618D4B  C7 83 93 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0x93],0x1
LAB_00618d55:
00618D55  0F BF 83 CD 00 00 00      MOVSX EAX,word ptr [EBX + 0xcd]
00618D5C  0F BF 8B CB 00 00 00      MOVSX ECX,word ptr [EBX + 0xcb]
00618D63  0F BF 93 C9 00 00 00      MOVSX EDX,word ptr [EBX + 0xc9]
00618D6A  50                        PUSH EAX
00618D6B  51                        PUSH ECX
00618D6C  52                        PUSH EDX
00618D6D  8B CB                     MOV ECX,EBX
00618D6F  E8 0D 84 DE FF            CALL 0x00401181
00618D74  8B 4B 7D                  MOV ECX,dword ptr [EBX + 0x7d]
00618D77  88 83 50 01 00 00         MOV byte ptr [EBX + 0x150],AL
00618D7D  85 C9                     TEST ECX,ECX
00618D7F  74 11                     JZ 0x00618d92
00618D81  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00618D84  8B 93 8B 00 00 00         MOV EDX,dword ptr [EBX + 0x8b]
00618D8A  53                        PUSH EBX
00618D8B  50                        PUSH EAX
00618D8C  52                        PUSH EDX
00618D8D  E8 B5 90 DE FF            CALL 0x00401e47
LAB_00618d92:
00618D92  8A 83 50 01 00 00         MOV AL,byte ptr [EBX + 0x150]
00618D98  84 C0                     TEST AL,AL
00618D9A  0F 84 21 02 00 00         JZ 0x00618fc1
00618DA0  6A 01                     PUSH 0x1
00618DA2  8B CB                     MOV ECX,EBX
00618DA4  E8 42 C9 DE FF            CALL 0x004056eb
00618DA9  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00618DAC  33 C0                     XOR EAX,EAX
00618DAE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618DB4  5F                        POP EDI
00618DB5  5E                        POP ESI
00618DB6  5B                        POP EBX
00618DB7  8B E5                     MOV ESP,EBP
00618DB9  5D                        POP EBP
00618DBA  C2 04 00                  RET 0x4
LAB_00618dbd:
00618DBD  56                        PUSH ESI
00618DBE  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00618DC1  8B CE                     MOV ECX,ESI
00618DC3  E8 8D 91 DE FF            CALL 0x00401f55
00618DC8  B9 0B 00 00 00            MOV ECX,0xb
00618DCD  33 C0                     XOR EAX,EAX
00618DCF  8D 7E 20                  LEA EDI,[ESI + 0x20]
00618DD2  F3 AB                     STOSD.REP ES:EDI
00618DD4  AA                        STOSB ES:EDI
00618DD5  8B 86 4C 01 00 00         MOV EAX,dword ptr [ESI + 0x14c]
00618DDB  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00618DDE  8A 86 50 01 00 00         MOV AL,byte ptr [ESI + 0x150]
00618DE4  84 C0                     TEST AL,AL
00618DE6  74 12                     JZ 0x00618dfa
00618DE8  83 BE 93 00 00 00 05      CMP dword ptr [ESI + 0x93],0x5
00618DEF  74 09                     JZ 0x00618dfa
00618DF1  6A 01                     PUSH 0x1
00618DF3  8B CE                     MOV ECX,ESI
00618DF5  E8 F1 C8 DE FF            CALL 0x004056eb
LAB_00618dfa:
00618DFA  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
00618E00  83 F8 05                  CMP EAX,0x5
00618E03  74 08                     JZ 0x00618e0d
00618E05  85 C0                     TEST EAX,EAX
00618E07  0F 85 B4 01 00 00         JNZ 0x00618fc1
LAB_00618e0d:
00618E0D  8B CE                     MOV ECX,ESI
00618E0F  E8 D8 95 DE FF            CALL 0x004023ec
00618E14  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00618E17  C7 86 93 00 00 00 06 00 00 00  MOV dword ptr [ESI + 0x93],0x6
00618E21  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618E27  33 C0                     XOR EAX,EAX
00618E29  5F                        POP EDI
00618E2A  5E                        POP ESI
00618E2B  5B                        POP EBX
00618E2C  8B E5                     MOV ESP,EBP
00618E2E  5D                        POP EBP
00618E2F  C2 04 00                  RET 0x4
LAB_00618e32:
00618E32  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00618E35  8B CE                     MOV ECX,ESI
00618E37  E8 52 C1 DE FF            CALL 0x00404f8e
00618E3C  85 C0                     TEST EAX,EAX
00618E3E  0F 84 7D 01 00 00         JZ 0x00618fc1
00618E44  8A 86 50 01 00 00         MOV AL,byte ptr [ESI + 0x150]
00618E4A  84 C0                     TEST AL,AL
00618E4C  75 40                     JNZ 0x00618e8e
00618E4E  0F BF 8E CD 00 00 00      MOVSX ECX,word ptr [ESI + 0xcd]
00618E55  0F BF 96 CB 00 00 00      MOVSX EDX,word ptr [ESI + 0xcb]
00618E5C  0F BF 86 C9 00 00 00      MOVSX EAX,word ptr [ESI + 0xc9]
00618E63  51                        PUSH ECX
00618E64  52                        PUSH EDX
00618E65  50                        PUSH EAX
00618E66  8B CE                     MOV ECX,ESI
00618E68  E8 14 83 DE FF            CALL 0x00401181
00618E6D  84 C0                     TEST AL,AL
00618E6F  88 86 50 01 00 00         MOV byte ptr [ESI + 0x150],AL
00618E75  74 09                     JZ 0x00618e80
00618E77  6A 01                     PUSH 0x1
00618E79  8B CE                     MOV ECX,ESI
00618E7B  E8 6B C8 DE FF            CALL 0x004056eb
LAB_00618e80:
00618E80  8A 86 50 01 00 00         MOV AL,byte ptr [ESI + 0x150]
00618E86  84 C0                     TEST AL,AL
00618E88  0F 84 33 01 00 00         JZ 0x00618fc1
LAB_00618e8e:
00618E8E  8B CE                     MOV ECX,ESI
00618E90  E8 B3 9D DE FF            CALL 0x00402c48
00618E95  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00618E98  33 C0                     XOR EAX,EAX
00618E9A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618EA0  5F                        POP EDI
00618EA1  5E                        POP ESI
00618EA2  5B                        POP EBX
00618EA3  8B E5                     MOV ESP,EBP
00618EA5  5D                        POP EBP
00618EA6  C2 04 00                  RET 0x4
LAB_00618ea9:
00618EA9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00618EAC  8D 4D F8                  LEA ECX,[EBP + -0x8]
00618EAF  51                        PUSH ECX
00618EB0  8B CE                     MOV ECX,ESI
00618EB2  E8 56 BA DE FF            CALL 0x0040490d
00618EB7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00618EBA  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00618EC0  52                        PUSH EDX
00618EC1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00618EC4  50                        PUSH EAX
00618EC5  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00618EC8  50                        PUSH EAX
00618EC9  E8 2B 97 DE FF            CALL 0x004025f9
00618ECE  8D 4D F4                  LEA ECX,[EBP + -0xc]
00618ED1  51                        PUSH ECX
00618ED2  E8 89 21 09 00            CALL 0x006ab060
00618ED7  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00618EDA  33 C0                     XOR EAX,EAX
00618EDC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618EE2  5F                        POP EDI
00618EE3  5E                        POP ESI
00618EE4  5B                        POP EBX
00618EE5  8B E5                     MOV ESP,EBP
00618EE7  5D                        POP EBP
00618EE8  C2 04 00                  RET 0x4
LAB_00618eeb:
00618EEB  2D 11 01 00 00            SUB EAX,0x111
00618EF0  0F 84 8E 00 00 00         JZ 0x00618f84
00618EF6  48                        DEC EAX
00618EF7  74 50                     JZ 0x00618f49
00618EF9  48                        DEC EAX
00618EFA  0F 85 C1 00 00 00         JNZ 0x00618fc1
00618F00  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00618F03  8B 81 97 00 00 00         MOV EAX,dword ptr [ECX + 0x97]
00618F09  85 C0                     TEST EAX,EAX
00618F0B  0F 8C B0 00 00 00         JL 0x00618fc1
00618F11  83 B9 93 00 00 00 05      CMP dword ptr [ECX + 0x93],0x5
00618F18  0F 84 A3 00 00 00         JZ 0x00618fc1
00618F1E  83 C1 4D                  ADD ECX,0x4d
00618F21  51                        PUSH ECX
00618F22  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00618F28  68 09 11 40 00            PUSH 0x401109
00618F2D  6A 00                     PUSH 0x0
00618F2F  50                        PUSH EAX
00618F30  E8 EB 05 0D 00            CALL 0x006e9520
00618F35  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00618F38  33 C0                     XOR EAX,EAX
00618F3A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618F40  5F                        POP EDI
00618F41  5E                        POP ESI
00618F42  5B                        POP EBX
00618F43  8B E5                     MOV ESP,EBP
00618F45  5D                        POP EBP
00618F46  C2 04 00                  RET 0x4
LAB_00618f49:
00618F49  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00618F4C  8B 81 97 00 00 00         MOV EAX,dword ptr [ECX + 0x97]
00618F52  85 C0                     TEST EAX,EAX
00618F54  7C 6B                     JL 0x00618fc1
00618F56  83 B9 93 00 00 00 05      CMP dword ptr [ECX + 0x93],0x5
00618F5D  74 62                     JZ 0x00618fc1
00618F5F  51                        PUSH ECX
00618F60  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00618F66  6A 00                     PUSH 0x0
00618F68  6A 00                     PUSH 0x0
00618F6A  50                        PUSH EAX
00618F6B  E8 B0 05 0D 00            CALL 0x006e9520
00618F70  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00618F73  33 C0                     XOR EAX,EAX
00618F75  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618F7B  5F                        POP EDI
00618F7C  5E                        POP ESI
00618F7D  5B                        POP EBX
00618F7E  8B E5                     MOV ESP,EBP
00618F80  5D                        POP EBP
00618F81  C2 04 00                  RET 0x4
LAB_00618f84:
00618F84  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00618F87  8B 46 7D                  MOV EAX,dword ptr [ESI + 0x7d]
00618F8A  85 C0                     TEST EAX,EAX
00618F8C  74 33                     JZ 0x00618fc1
00618F8E  8B 46 79                  MOV EAX,dword ptr [ESI + 0x79]
00618F91  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00618F97  8D 55 F0                  LEA EDX,[EBP + -0x10]
00618F9A  52                        PUSH EDX
00618F9B  50                        PUSH EAX
00618F9C  E8 2F D3 0C 00            CALL 0x006e62d0
00618FA1  83 F8 FC                  CMP EAX,-0x4
00618FA4  74 1B                     JZ 0x00618fc1
00618FA6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00618FA9  85 C9                     TEST ECX,ECX
00618FAB  89 4E 7D                  MOV dword ptr [ESI + 0x7d],ECX
00618FAE  74 11                     JZ 0x00618fc1
00618FB0  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00618FB3  8B 86 8B 00 00 00         MOV EAX,dword ptr [ESI + 0x8b]
00618FB9  56                        PUSH ESI
00618FBA  52                        PUSH EDX
00618FBB  50                        PUSH EAX
00618FBC  E8 86 8E DE FF            CALL 0x00401e47
LAB_00618fc1:
00618FC1  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00618FC4  33 C0                     XOR EAX,EAX
00618FC6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00618FCC  5F                        POP EDI
00618FCD  5E                        POP ESI
00618FCE  5B                        POP EBX
00618FCF  8B E5                     MOV ESP,EBP
00618FD1  5D                        POP EBP
00618FD2  C2 04 00                  RET 0x4
LAB_00618fd5:
00618FD5  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00618FD8  68 28 01 7D 00            PUSH 0x7d0128
00618FDD  68 CC 4C 7A 00            PUSH 0x7a4ccc
00618FE2  56                        PUSH ESI
00618FE3  6A 00                     PUSH 0x0
00618FE5  68 AD 00 00 00            PUSH 0xad
00618FEA  68 00 01 7D 00            PUSH 0x7d0100
00618FEF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00618FF5  E8 D6 44 09 00            CALL 0x006ad4d0
00618FFA  83 C4 18                  ADD ESP,0x18
00618FFD  85 C0                     TEST EAX,EAX
00618FFF  74 01                     JZ 0x00619002
00619001  CC                        INT3
LAB_00619002:
00619002  68 AF 00 00 00            PUSH 0xaf
00619007  68 00 01 7D 00            PUSH 0x7d0100
0061900C  6A 00                     PUSH 0x0
0061900E  56                        PUSH ESI
0061900F  E8 2C CE 08 00            CALL 0x006a5e40
00619014  5F                        POP EDI
00619015  5E                        POP ESI
00619016  B8 FF FF 00 00            MOV EAX,0xffff
0061901B  5B                        POP EBX
0061901C  8B E5                     MOV ESP,EBP
0061901E  5D                        POP EBP
0061901F  C2 04 00                  RET 0x4
