_EnumArt:
00677F40  55                        PUSH EBP
00677F41  8B EC                     MOV EBP,ESP
00677F43  83 EC 68                  SUB ESP,0x68
00677F46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00677F4B  53                        PUSH EBX
00677F4C  56                        PUSH ESI
00677F4D  57                        PUSH EDI
00677F4E  8D 55 9C                  LEA EDX,[EBP + -0x64]
00677F51  8D 4D 98                  LEA ECX,[EBP + -0x68]
00677F54  6A 00                     PUSH 0x0
00677F56  52                        PUSH EDX
00677F57  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00677F5E  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00677F61  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00677F67  E8 84 58 0B 00            CALL 0x0072d7f0
00677F6C  8B F0                     MOV ESI,EAX
00677F6E  83 C4 08                  ADD ESP,0x8
00677F71  85 F6                     TEST ESI,ESI
00677F73  0F 85 A8 01 00 00         JNZ 0x00678121
00677F79  A1 54 A1 7F 00            MOV EAX,[0x007fa154]
00677F7E  85 C0                     TEST EAX,EAX
00677F80  75 17                     JNZ 0x00677f99
00677F82  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00677F87  68 E1 03 00 00            PUSH 0x3e1
00677F8C  68 58 2D 7D 00            PUSH 0x7d2d58
00677F91  50                        PUSH EAX
00677F92  6A CC                     PUSH -0x34
00677F94  E8 A7 DE 02 00            CALL 0x006a5e40
LAB_00677f99:
00677F99  8B 0D 54 A1 7F 00         MOV ECX,dword ptr [0x007fa154]
00677F9F  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00677FA2  4A                        DEC EDX
00677FA3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00677FA6  0F 88 63 01 00 00         JS 0x0067810f
00677FAC  EB 06                     JMP 0x00677fb4
LAB_00677fae:
00677FAE  8B 0D 54 A1 7F 00         MOV ECX,dword ptr [0x007fa154]
LAB_00677fb4:
00677FB4  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00677FB7  73 0B                     JNC 0x00677fc4
00677FB9  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00677FBC  0F AF C2                  IMUL EAX,EDX
00677FBF  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00677FC2  EB 02                     JMP 0x00677fc6
LAB_00677fc4:
00677FC4  33 C0                     XOR EAX,EAX
LAB_00677fc6:
00677FC6  8B 38                     MOV EDI,dword ptr [EAX]
00677FC8  85 FF                     TEST EDI,EDI
00677FCA  0F 84 19 01 00 00         JZ 0x006780e9
00677FD0  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
00677FD4  66 85 C0                  TEST AX,AX
00677FD7  74 0F                     JZ 0x00677fe8
00677FD9  0F BF C8                  MOVSX ECX,AX
00677FDC  39 8F 42 03 00 00         CMP dword ptr [EDI + 0x342],ECX
00677FE2  0F 85 01 01 00 00         JNZ 0x006780e9
LAB_00677fe8:
00677FE8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00677FEB  BB 01 00 00 00            MOV EBX,0x1
00677FF0  85 C0                     TEST EAX,EAX
00677FF2  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00677FF5  74 48                     JZ 0x0067803f
00677FF7  80 38 00                  CMP byte ptr [EAX],0x0
00677FFA  74 43                     JZ 0x0067803f
00677FFC  8B 17                     MOV EDX,dword ptr [EDI]
00677FFE  8D 45 DC                  LEA EAX,[EBP + -0x24]
00678001  50                        PUSH EAX
00678002  8B CF                     MOV ECX,EDI
00678004  FF 52 74                  CALL dword ptr [EDX + 0x74]
00678007  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067800A  8D 75 DC                  LEA ESI,[EBP + -0x24]
LAB_0067800d:
0067800D  8A 10                     MOV DL,byte ptr [EAX]
0067800F  8A CA                     MOV CL,DL
00678011  3A 16                     CMP DL,byte ptr [ESI]
00678013  75 1C                     JNZ 0x00678031
00678015  84 C9                     TEST CL,CL
00678017  74 14                     JZ 0x0067802d
00678019  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0067801C  8A CA                     MOV CL,DL
0067801E  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
00678021  75 0E                     JNZ 0x00678031
00678023  83 C0 02                  ADD EAX,0x2
00678026  83 C6 02                  ADD ESI,0x2
00678029  84 C9                     TEST CL,CL
0067802B  75 E0                     JNZ 0x0067800d
LAB_0067802d:
0067802D  33 C0                     XOR EAX,EAX
0067802F  EB 05                     JMP 0x00678036
LAB_00678031:
00678031  1B C0                     SBB EAX,EAX
00678033  83 D8 FF                  SBB EAX,-0x1
LAB_00678036:
00678036  85 C0                     TEST EAX,EAX
00678038  74 05                     JZ 0x0067803f
0067803A  33 DB                     XOR EBX,EBX
0067803C  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_0067803f:
0067803F  85 DB                     TEST EBX,EBX
00678041  0F 84 A2 00 00 00         JZ 0x006780e9
00678047  66 8B 75 1C               MOV SI,word ptr [EBP + 0x1c]
0067804B  66 85 F6                  TEST SI,SI
0067804E  7E 7A                     JLE 0x006780ca
00678050  66 83 7D 20 00            CMP word ptr [EBP + 0x20],0x0
00678055  7E 73                     JLE 0x006780ca
00678057  66 83 7D 24 00            CMP word ptr [EBP + 0x24],0x0
0067805C  7E 6C                     JLE 0x006780ca
0067805E  8D 45 FA                  LEA EAX,[EBP + -0x6]
00678061  8D 4D FC                  LEA ECX,[EBP + -0x4]
00678064  50                        PUSH EAX
00678065  8D 55 FE                  LEA EDX,[EBP + -0x2]
00678068  51                        PUSH ECX
00678069  52                        PUSH EDX
0067806A  8B CF                     MOV ECX,EDI
0067806C  E8 9A DE D8 FF            CALL 0x00405f0b
00678071  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
00678075  66 8B 5D 10               MOV BX,word ptr [EBP + 0x10]
00678079  66 3B C3                  CMP AX,BX
0067807C  7C 45                     JL 0x006780c3
0067807E  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
00678082  66 3B 4D 14               CMP CX,word ptr [EBP + 0x14]
00678086  7C 3B                     JL 0x006780c3
00678088  66 8B 55 FA               MOV DX,word ptr [EBP + -0x6]
0067808C  66 3B 55 18               CMP DX,word ptr [EBP + 0x18]
00678090  7C 31                     JL 0x006780c3
00678092  0F BF DB                  MOVSX EBX,BX
00678095  0F BF F6                  MOVSX ESI,SI
00678098  0F BF C0                  MOVSX EAX,AX
0067809B  03 DE                     ADD EBX,ESI
0067809D  3B C3                     CMP EAX,EBX
0067809F  7D 22                     JGE 0x006780c3
006780A1  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
006780A5  0F BF 75 20               MOVSX ESI,word ptr [EBP + 0x20]
006780A9  0F BF C9                  MOVSX ECX,CX
006780AC  03 C6                     ADD EAX,ESI
006780AE  3B C8                     CMP ECX,EAX
006780B0  7D 11                     JGE 0x006780c3
006780B2  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
006780B6  0F BF 4D 24               MOVSX ECX,word ptr [EBP + 0x24]
006780BA  0F BF D2                  MOVSX EDX,DX
006780BD  03 C1                     ADD EAX,ECX
006780BF  3B D0                     CMP EDX,EAX
006780C1  7C 04                     JL 0x006780c7
LAB_006780c3:
006780C3  33 DB                     XOR EBX,EBX
006780C5  EB 03                     JMP 0x006780ca
LAB_006780c7:
006780C7  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_006780ca:
006780CA  85 DB                     TEST EBX,EBX
006780CC  74 1B                     JZ 0x006780e9
006780CE  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006780D1  85 C0                     TEST EAX,EAX
006780D3  74 14                     JZ 0x006780e9
006780D5  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006780D8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006780DB  51                        PUSH ECX
006780DC  57                        PUSH EDI
006780DD  52                        PUSH EDX
006780DE  6A 00                     PUSH 0x0
006780E0  FF D0                     CALL EAX
006780E2  83 C4 10                  ADD ESP,0x10
006780E5  85 C0                     TEST EAX,EAX
006780E7  75 1F                     JNZ 0x00678108
LAB_006780e9:
006780E9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006780EC  4A                        DEC EDX
006780ED  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006780F0  0F 89 B8 FE FF FF         JNS 0x00677fae
006780F6  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006780F9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006780FE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00678101  5F                        POP EDI
00678102  5E                        POP ESI
00678103  5B                        POP EBX
00678104  8B E5                     MOV ESP,EBP
00678106  5D                        POP EBP
00678107  C3                        RET
LAB_00678108:
00678108  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
LAB_0067810f:
0067810F  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00678112  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00678117  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0067811A  5F                        POP EDI
0067811B  5E                        POP ESI
0067811C  5B                        POP EBX
0067811D  8B E5                     MOV ESP,EBP
0067811F  5D                        POP EBP
00678120  C3                        RET
LAB_00678121:
00678121  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00678124  68 24 2E 7D 00            PUSH 0x7d2e24
00678129  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067812E  56                        PUSH ESI
0067812F  6A 00                     PUSH 0x0
00678131  68 FC 03 00 00            PUSH 0x3fc
00678136  68 58 2D 7D 00            PUSH 0x7d2d58
0067813B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00678141  E8 8A 53 03 00            CALL 0x006ad4d0
00678146  83 C4 18                  ADD ESP,0x18
00678149  85 C0                     TEST EAX,EAX
0067814B  74 01                     JZ 0x0067814e
0067814D  CC                        INT3
LAB_0067814e:
0067814E  68 FD 03 00 00            PUSH 0x3fd
00678153  68 58 2D 7D 00            PUSH 0x7d2d58
00678158  6A 00                     PUSH 0x0
0067815A  56                        PUSH ESI
0067815B  E8 E0 DC 02 00            CALL 0x006a5e40
00678160  8B C6                     MOV EAX,ESI
00678162  5F                        POP EDI
00678163  5E                        POP ESI
00678164  5B                        POP EBX
00678165  8B E5                     MOV ESP,EBP
00678167  5D                        POP EBP
00678168  C3                        RET
