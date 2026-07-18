FUN_00599e90:
00599E90  55                        PUSH EBP
00599E91  8B EC                     MOV EBP,ESP
00599E93  83 EC 48                  SUB ESP,0x48
00599E96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00599E9B  53                        PUSH EBX
00599E9C  56                        PUSH ESI
00599E9D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00599EA0  57                        PUSH EDI
00599EA1  8D 55 BC                  LEA EDX,[EBP + -0x44]
00599EA4  8D 4D B8                  LEA ECX,[EBP + -0x48]
00599EA7  6A 00                     PUSH 0x0
00599EA9  52                        PUSH EDX
00599EAA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00599EAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00599EB3  E8 38 39 19 00            CALL 0x0072d7f0
00599EB8  8B F0                     MOV ESI,EAX
00599EBA  83 C4 08                  ADD ESP,0x8
00599EBD  85 F6                     TEST ESI,ESI
00599EBF  0F 85 20 03 00 00         JNZ 0x0059a1e5
00599EC5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00599EC8  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00599ECE  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
00599ED1  85 DB                     TEST EBX,EBX
00599ED3  75 18                     JNZ 0x00599eed
00599ED5  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
00599ED9  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
00599EDD  83 C3 1F                  ADD EBX,0x1f
00599EE0  C1 EB 03                  SHR EBX,0x3
00599EE3  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
00599EE9  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_00599eed:
00599EED  50                        PUSH EAX
00599EEE  E8 AD B0 11 00            CALL 0x006b4fa0
00599EF3  8B CB                     MOV ECX,EBX
00599EF5  8B F8                     MOV EDI,EAX
00599EF7  8B D1                     MOV EDX,ECX
00599EF9  83 C8 FF                  OR EAX,0xffffffff
00599EFC  C1 E9 02                  SHR ECX,0x2
00599EFF  F3 AB                     STOSD.REP ES:EDI
00599F01  8B CA                     MOV ECX,EDX
00599F03  6A 14                     PUSH 0x14
00599F05  83 E1 03                  AND ECX,0x3
00599F08  68 86 01 00 00            PUSH 0x186
00599F0D  F3 AA                     STOSB.REP ES:EDI
00599F0F  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00599F15  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599F1B  6A 1B                     PUSH 0x1b
00599F1D  6A 19                     PUSH 0x19
00599F1F  6A 00                     PUSH 0x0
00599F21  50                        PUSH EAX
00599F22  E8 69 6B 17 00            CALL 0x00710a90
00599F27  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00599F2D  6A 02                     PUSH 0x2
00599F2F  6A FF                     PUSH -0x1
00599F31  6A 00                     PUSH 0x0
00599F33  51                        PUSH ECX
00599F34  68 4F 25 00 00            PUSH 0x254f
00599F39  E8 02 62 11 00            CALL 0x006b0140
00599F3E  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599F44  50                        PUSH EAX
00599F45  E8 76 7A 17 00            CALL 0x007119c0
00599F4A  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
00599F50  6A 0D                     PUSH 0xd
00599F52  6A 0F                     PUSH 0xf
00599F54  6A 1B                     PUSH 0x1b
00599F56  68 88 01 00 00            PUSH 0x188
00599F5B  6A 2E                     PUSH 0x2e
00599F5D  6A 18                     PUSH 0x18
00599F5F  6A 00                     PUSH 0x0
00599F61  52                        PUSH EDX
00599F62  E8 79 BF 11 00            CALL 0x006b5ee0
00599F67  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00599F6D  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599F73  6A 14                     PUSH 0x14
00599F75  68 B4 00 00 00            PUSH 0xb4
00599F7A  6A 48                     PUSH 0x48
00599F7C  6A 19                     PUSH 0x19
00599F7E  6A 00                     PUSH 0x0
00599F80  50                        PUSH EAX
00599F81  E8 0A 6B 17 00            CALL 0x00710a90
00599F86  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00599F8C  6A 02                     PUSH 0x2
00599F8E  6A FF                     PUSH -0x1
00599F90  6A 00                     PUSH 0x0
00599F92  51                        PUSH ECX
00599F93  68 50 25 00 00            PUSH 0x2550
00599F98  E8 A3 61 11 00            CALL 0x006b0140
00599F9D  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599FA3  50                        PUSH EAX
00599FA4  E8 17 7A 17 00            CALL 0x007119c0
00599FA9  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
00599FAF  6A 0D                     PUSH 0xd
00599FB1  6A 0F                     PUSH 0xf
00599FB3  6A 16                     PUSH 0x16
00599FB5  68 B6 00 00 00            PUSH 0xb6
00599FBA  6A 5B                     PUSH 0x5b
00599FBC  6A 18                     PUSH 0x18
00599FBE  6A 00                     PUSH 0x0
00599FC0  52                        PUSH EDX
00599FC1  E8 1A BF 11 00            CALL 0x006b5ee0
00599FC6  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00599FCC  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599FD2  6A 14                     PUSH 0x14
00599FD4  68 B4 00 00 00            PUSH 0xb4
00599FD9  6A 48                     PUSH 0x48
00599FDB  68 EB 00 00 00            PUSH 0xeb
00599FE0  6A 00                     PUSH 0x0
00599FE2  50                        PUSH EAX
00599FE3  E8 A8 6A 17 00            CALL 0x00710a90
00599FE8  6A 02                     PUSH 0x2
00599FEA  6A FF                     PUSH -0x1
00599FEC  6A 00                     PUSH 0x0
00599FEE  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00599FF4  51                        PUSH ECX
00599FF5  68 54 25 00 00            PUSH 0x2554
00599FFA  E8 41 61 11 00            CALL 0x006b0140
00599FFF  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A005  50                        PUSH EAX
0059A006  E8 B5 79 17 00            CALL 0x007119c0
0059A00B  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A011  6A 0D                     PUSH 0xd
0059A013  6A 0F                     PUSH 0xf
0059A015  6A 16                     PUSH 0x16
0059A017  68 B6 00 00 00            PUSH 0xb6
0059A01C  6A 5B                     PUSH 0x5b
0059A01E  68 EA 00 00 00            PUSH 0xea
0059A023  6A 00                     PUSH 0x0
0059A025  52                        PUSH EDX
0059A026  E8 B5 BE 11 00            CALL 0x006b5ee0
0059A02B  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A031  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A037  6A 14                     PUSH 0x14
0059A039  6A 6E                     PUSH 0x6e
0059A03B  6A 70                     PUSH 0x70
0059A03D  6A 19                     PUSH 0x19
0059A03F  6A 00                     PUSH 0x0
0059A041  50                        PUSH EAX
0059A042  E8 49 6A 17 00            CALL 0x00710a90
0059A047  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A04D  6A 02                     PUSH 0x2
0059A04F  6A FF                     PUSH -0x1
0059A051  6A 00                     PUSH 0x0
0059A053  51                        PUSH ECX
0059A054  68 57 25 00 00            PUSH 0x2557
0059A059  E8 E2 60 11 00            CALL 0x006b0140
0059A05E  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A064  50                        PUSH EAX
0059A065  E8 56 79 17 00            CALL 0x007119c0
0059A06A  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A070  6A 0D                     PUSH 0xd
0059A072  6A 0F                     PUSH 0xf
0059A074  6A 16                     PUSH 0x16
0059A076  6A 70                     PUSH 0x70
0059A078  68 83 00 00 00            PUSH 0x83
0059A07D  6A 18                     PUSH 0x18
0059A07F  6A 00                     PUSH 0x0
0059A081  52                        PUSH EDX
0059A082  E8 59 BE 11 00            CALL 0x006b5ee0
0059A087  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A08D  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A093  6A 14                     PUSH 0x14
0059A095  6A 6E                     PUSH 0x6e
0059A097  6A 70                     PUSH 0x70
0059A099  68 A5 00 00 00            PUSH 0xa5
0059A09E  6A 00                     PUSH 0x0
0059A0A0  50                        PUSH EAX
0059A0A1  E8 EA 69 17 00            CALL 0x00710a90
0059A0A6  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A0AC  6A 02                     PUSH 0x2
0059A0AE  6A FF                     PUSH -0x1
0059A0B0  6A 00                     PUSH 0x0
0059A0B2  51                        PUSH ECX
0059A0B3  68 58 25 00 00            PUSH 0x2558
0059A0B8  E8 83 60 11 00            CALL 0x006b0140
0059A0BD  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A0C3  50                        PUSH EAX
0059A0C4  E8 F7 78 17 00            CALL 0x007119c0
0059A0C9  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A0CF  6A 0D                     PUSH 0xd
0059A0D1  6A 0F                     PUSH 0xf
0059A0D3  6A 16                     PUSH 0x16
0059A0D5  6A 70                     PUSH 0x70
0059A0D7  68 83 00 00 00            PUSH 0x83
0059A0DC  68 A4 00 00 00            PUSH 0xa4
0059A0E1  6A 00                     PUSH 0x0
0059A0E3  52                        PUSH EDX
0059A0E4  E8 F7 BD 11 00            CALL 0x006b5ee0
0059A0E9  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A0EF  6A 14                     PUSH 0x14
0059A0F1  6A 6E                     PUSH 0x6e
0059A0F3  6A 70                     PUSH 0x70
0059A0F5  68 31 01 00 00            PUSH 0x131
0059A0FA  6A 00                     PUSH 0x0
0059A0FC  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A102  50                        PUSH EAX
0059A103  E8 88 69 17 00            CALL 0x00710a90
0059A108  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A10E  6A 02                     PUSH 0x2
0059A110  6A FF                     PUSH -0x1
0059A112  6A 00                     PUSH 0x0
0059A114  51                        PUSH ECX
0059A115  68 59 25 00 00            PUSH 0x2559
0059A11A  E8 21 60 11 00            CALL 0x006b0140
0059A11F  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A125  50                        PUSH EAX
0059A126  E8 95 78 17 00            CALL 0x007119c0
0059A12B  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A131  6A 0D                     PUSH 0xd
0059A133  6A 0F                     PUSH 0xf
0059A135  6A 16                     PUSH 0x16
0059A137  6A 70                     PUSH 0x70
0059A139  68 83 00 00 00            PUSH 0x83
0059A13E  68 30 01 00 00            PUSH 0x130
0059A143  6A 00                     PUSH 0x0
0059A145  52                        PUSH EDX
0059A146  E8 95 BD 11 00            CALL 0x006b5ee0
0059A14B  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A151  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A157  6A 14                     PUSH 0x14
0059A159  68 86 01 00 00            PUSH 0x186
0059A15E  68 98 00 00 00            PUSH 0x98
0059A163  6A 19                     PUSH 0x19
0059A165  6A 00                     PUSH 0x0
0059A167  50                        PUSH EAX
0059A168  E8 23 69 17 00            CALL 0x00710a90
0059A16D  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A173  6A 02                     PUSH 0x2
0059A175  6A FF                     PUSH -0x1
0059A177  6A 00                     PUSH 0x0
0059A179  51                        PUSH ECX
0059A17A  68 5A 25 00 00            PUSH 0x255a
0059A17F  E8 BC 5F 11 00            CALL 0x006b0140
0059A184  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A18A  50                        PUSH EAX
0059A18B  E8 30 78 17 00            CALL 0x007119c0
0059A190  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A196  6A 0D                     PUSH 0xd
0059A198  6A 0F                     PUSH 0xf
0059A19A  6A 4D                     PUSH 0x4d
0059A19C  68 88 01 00 00            PUSH 0x188
0059A1A1  68 AB 00 00 00            PUSH 0xab
0059A1A6  6A 18                     PUSH 0x18
0059A1A8  6A 00                     PUSH 0x0
0059A1AA  52                        PUSH EDX
0059A1AB  E8 30 BD 11 00            CALL 0x006b5ee0
0059A1B0  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
0059A1B6  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059A1BC  50                        PUSH EAX
0059A1BD  51                        PUSH ECX
0059A1BE  E8 6D 92 11 00            CALL 0x006b3430
0059A1C3  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
0059A1C9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059A1CE  52                        PUSH EDX
0059A1CF  50                        PUSH EAX
0059A1D0  E8 FB 93 11 00            CALL 0x006b35d0
0059A1D5  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0059A1D8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059A1DE  5F                        POP EDI
0059A1DF  5E                        POP ESI
0059A1E0  5B                        POP EBX
0059A1E1  8B E5                     MOV ESP,EBP
0059A1E3  5D                        POP EBP
0059A1E4  C3                        RET
LAB_0059a1e5:
0059A1E5  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059A1E8  68 00 C2 7C 00            PUSH 0x7cc200
0059A1ED  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059A1F2  56                        PUSH ESI
0059A1F3  6A 00                     PUSH 0x0
0059A1F5  68 E7 03 00 00            PUSH 0x3e7
0059A1FA  68 70 BF 7C 00            PUSH 0x7cbf70
0059A1FF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059A205  E8 C6 32 11 00            CALL 0x006ad4d0
0059A20A  83 C4 18                  ADD ESP,0x18
0059A20D  85 C0                     TEST EAX,EAX
0059A20F  74 01                     JZ 0x0059a212
0059A211  CC                        INT3
LAB_0059a212:
0059A212  68 E7 03 00 00            PUSH 0x3e7
0059A217  68 70 BF 7C 00            PUSH 0x7cbf70
0059A21C  6A 00                     PUSH 0x0
0059A21E  56                        PUSH ESI
0059A21F  E8 1C BC 10 00            CALL 0x006a5e40
0059A224  5F                        POP EDI
0059A225  5E                        POP ESI
0059A226  5B                        POP EBX
0059A227  8B E5                     MOV ESP,EBP
0059A229  5D                        POP EBP
0059A22A  C3                        RET
