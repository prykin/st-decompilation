PanelTy::PaintLBut:
00538FC0  55                        PUSH EBP
00538FC1  8B EC                     MOV EBP,ESP
00538FC3  83 EC 54                  SUB ESP,0x54
00538FC6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00538FC9  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00538FCC  53                        PUSH EBX
00538FCD  56                        PUSH ESI
00538FCE  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00538FD1  57                        PUSH EDI
00538FD2  85 D2                     TEST EDX,EDX
00538FD4  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00538FD7  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00538FDE  74 11                     JZ 0x00538ff1
00538FE0  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00538FE3  85 D2                     TEST EDX,EDX
00538FE5  8B 10                     MOV EDX,dword ptr [EAX]
00538FE7  75 0A                     JNZ 0x00538ff3
00538FE9  8B 35 30 67 80 00         MOV ESI,dword ptr [0x00806730]
00538FEF  EB 05                     JMP 0x00538ff6
LAB_00538ff1:
00538FF1  8B 10                     MOV EDX,dword ptr [EAX]
LAB_00538ff3:
00538FF3  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
LAB_00538ff6:
00538FF6  2B D6                     SUB EDX,ESI
00538FF8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00538FFB  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00538FFE  85 D2                     TEST EDX,EDX
00539000  74 21                     JZ 0x00539023
00539002  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00539005  85 D2                     TEST EDX,EDX
00539007  75 0D                     JNZ 0x00539016
00539009  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0053900C  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
00539012  2B C1                     SUB EAX,ECX
00539014  EB 15                     JMP 0x0053902b
LAB_00539016:
00539016  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00539019  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0053901C  2B D0                     SUB EDX,EAX
0053901E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00539021  EB 0B                     JMP 0x0053902e
LAB_00539023:
00539023  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00539026  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
00539029  2B C2                     SUB EAX,EDX
LAB_0053902b:
0053902B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0053902e:
0053902E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00539031  85 C0                     TEST EAX,EAX
00539033  0F 84 29 01 00 00         JZ 0x00539162
00539039  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0053903F  8D 45 B0                  LEA EAX,[EBP + -0x50]
00539042  8D 55 AC                  LEA EDX,[EBP + -0x54]
00539045  6A 00                     PUSH 0x0
00539047  50                        PUSH EAX
00539048  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0053904B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00539051  E8 9A 47 1F 00            CALL 0x0072d7f0
00539056  8B F0                     MOV ESI,EAX
00539058  83 C4 08                  ADD ESP,0x8
0053905B  85 F6                     TEST ESI,ESI
0053905D  0F 85 C0 00 00 00         JNZ 0x00539123
00539063  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00539066  57                        PUSH EDI
00539067  FF 55 18                  CALL dword ptr [EBP + 0x18]
0053906A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0053906D  50                        PUSH EAX
0053906E  6A 01                     PUSH 0x1
00539070  51                        PUSH ECX
00539071  E8 8A 9B 1B 00            CALL 0x006f2c00
00539076  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00539079  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053907F  83 C4 10                  ADD ESP,0x10
00539082  6A 01                     PUSH 0x1
00539084  56                        PUSH ESI
00539085  50                        PUSH EAX
00539086  53                        PUSH EBX
00539087  E8 54 8C 1B 00            CALL 0x006f1ce0
0053908C  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0053908F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00539092  50                        PUSH EAX
00539093  53                        PUSH EBX
00539094  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00539097  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053909A  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053909D  53                        PUSH EBX
0053909E  52                        PUSH EDX
0053909F  50                        PUSH EAX
005390A0  E8 84 A1 EC FF            CALL 0x00403229
005390A5  83 C4 14                  ADD ESP,0x14
005390A8  8D 4D FC                  LEA ECX,[EBP + -0x4]
005390AB  51                        PUSH ECX
005390AC  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005390B2  E8 29 90 1B 00            CALL 0x006f20e0
005390B7  83 7F 14 03               CMP dword ptr [EDI + 0x14],0x3
005390BB  75 3B                     JNZ 0x005390f8
005390BD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005390C0  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005390C6  6A 01                     PUSH 0x1
005390C8  6A 00                     PUSH 0x0
005390CA  52                        PUSH EDX
005390CB  6A 06                     PUSH 0x6
005390CD  E8 0E 8C 1B 00            CALL 0x006f1ce0
005390D2  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
005390D5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005390D8  50                        PUSH EAX
005390D9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005390DC  6A 06                     PUSH 0x6
005390DE  53                        PUSH EBX
005390DF  50                        PUSH EAX
005390E0  51                        PUSH ECX
005390E1  E8 43 A1 EC FF            CALL 0x00403229
005390E6  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005390EC  83 C4 14                  ADD ESP,0x14
005390EF  8D 55 FC                  LEA EDX,[EBP + -0x4]
005390F2  52                        PUSH EDX
005390F3  E8 E8 8F 1B 00            CALL 0x006f20e0
LAB_005390f8:
005390F8  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
005390FB  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
005390FE  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
00539101  50                        PUSH EAX
00539102  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00539107  51                        PUSH ECX
00539108  6A FF                     PUSH -0x1
0053910A  52                        PUSH EDX
0053910B  50                        PUSH EAX
0053910C  E8 2F A5 17 00            CALL 0x006b3640
00539111  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00539114  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053911A  5F                        POP EDI
0053911B  5E                        POP ESI
0053911C  5B                        POP EBX
0053911D  8B E5                     MOV ESP,EBP
0053911F  5D                        POP EBP
00539120  C2 1C 00                  RET 0x1c
LAB_00539123:
00539123  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00539126  68 78 74 7C 00            PUSH 0x7c7478
0053912B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00539130  56                        PUSH ESI
00539131  6A 00                     PUSH 0x0
00539133  68 02 01 00 00            PUSH 0x102
00539138  68 90 73 7C 00            PUSH 0x7c7390
0053913D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00539143  E8 88 43 17 00            CALL 0x006ad4d0
00539148  83 C4 18                  ADD ESP,0x18
0053914B  85 C0                     TEST EAX,EAX
0053914D  74 01                     JZ 0x00539150
0053914F  CC                        INT3
LAB_00539150:
00539150  68 02 01 00 00            PUSH 0x102
00539155  68 90 73 7C 00            PUSH 0x7c7390
0053915A  6A 00                     PUSH 0x0
0053915C  56                        PUSH ESI
0053915D  E8 DE CC 16 00            CALL 0x006a5e40
LAB_00539162:
00539162  5F                        POP EDI
00539163  5E                        POP ESI
00539164  5B                        POP EBX
00539165  8B E5                     MOV ESP,EBP
00539167  5D                        POP EBP
00539168  C2 1C 00                  RET 0x1c
