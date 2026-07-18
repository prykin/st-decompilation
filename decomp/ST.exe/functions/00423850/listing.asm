STGroupC::AddObj:
00423850  55                        PUSH EBP
00423851  8B EC                     MOV EBP,ESP
00423853  83 EC 7C                  SUB ESP,0x7c
00423856  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
00423859  53                        PUSH EBX
0042385A  56                        PUSH ESI
0042385B  57                        PUSH EDI
0042385C  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0042385F  33 FF                     XOR EDI,EDI
00423861  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00423864  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00423867  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0042386A  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00423870  8D 45 88                  LEA EAX,[EBP + -0x78]
00423873  8D 55 84                  LEA EDX,[EBP + -0x7c]
00423876  57                        PUSH EDI
00423877  50                        PUSH EAX
00423878  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0042387B  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0042387E  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
00423881  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00423887  E8 64 9F 30 00            CALL 0x0072d7f0
0042388C  8B F0                     MOV ESI,EAX
0042388E  83 C4 08                  ADD ESP,0x8
00423891  3B F7                     CMP ESI,EDI
00423893  0F 85 B4 01 00 00         JNZ 0x00423a4d
00423899  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0042389C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0042389F  8D 71 FF                  LEA ESI,[ECX + -0x1]
004238A2  3B F7                     CMP ESI,EDI
004238A4  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
004238A7  7C 40                     JL 0x004238e9
LAB_004238a9:
004238A9  8B 4F 29                  MOV ECX,dword ptr [EDI + 0x29]
004238AC  8D 55 FC                  LEA EDX,[EBP + -0x4]
004238AF  52                        PUSH EDX
004238B0  8B D6                     MOV EDX,ESI
004238B2  E8 B9 93 28 00            CALL 0x006acc70
004238B7  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
004238BB  66 3D FF FF               CMP AX,0xffff
004238BF  75 05                     JNZ 0x004238c6
004238C1  8B DE                     MOV EBX,ESI
004238C3  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_004238c6:
004238C6  66 3B 45 08               CMP AX,word ptr [EBP + 0x8]
004238CA  75 1A                     JNZ 0x004238e6
004238CC  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004238D1  68 B1 00 00 00            PUSH 0xb1
004238D6  68 A4 50 7A 00            PUSH 0x7a50a4
004238DB  50                        PUSH EAX
004238DC  68 01 00 FE AF            PUSH 0xaffe0001
004238E1  E8 5A 25 28 00            CALL 0x006a5e40
LAB_004238e6:
004238E6  4E                        DEC ESI
004238E7  79 C0                     JNS 0x004238a9
LAB_004238e9:
004238E9  8B 57 29                  MOV EDX,dword ptr [EDI + 0x29]
004238EC  8D 4D 08                  LEA ECX,[EBP + 0x8]
004238EF  51                        PUSH ECX
004238F0  53                        PUSH EBX
004238F1  52                        PUSH EDX
004238F2  E8 49 A8 28 00            CALL 0x006ae140
004238F7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004238FA  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004238FD  6A 01                     PUSH 0x1
004238FF  50                        PUSH EAX
00423900  51                        PUSH ECX
00423901  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00423907  E8 AE EF FD FF            CALL 0x004028ba
0042390C  66 8B 57 25               MOV DX,word ptr [EDI + 0x25]
00423910  8B F0                     MOV ESI,EAX
00423912  52                        PUSH EDX
00423913  8B CE                     MOV ECX,ESI
00423915  E8 A4 FA FD FF            CALL 0x004033be
0042391A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042391D  66 FF 47 27               INC word ptr [EDI + 0x27]
00423921  83 F8 01                  CMP EAX,0x1
00423924  75 35                     JNZ 0x0042395b
00423926  8B 47 2D                  MOV EAX,dword ptr [EDI + 0x2d]
00423929  85 C0                     TEST EAX,EAX
0042392B  75 10                     JNZ 0x0042393d
0042392D  6A 05                     PUSH 0x5
0042392F  6A 02                     PUSH 0x2
00423931  6A 05                     PUSH 0x5
00423933  6A 00                     PUSH 0x0
00423935  E8 56 A9 28 00            CALL 0x006ae290
0042393A  89 47 2D                  MOV dword ptr [EDI + 0x2d],EAX
LAB_0042393d:
0042393D  8B 4F 2D                  MOV ECX,dword ptr [EDI + 0x2d]
00423940  8D 45 08                  LEA EAX,[EBP + 0x8]
00423943  50                        PUSH EAX
00423944  51                        PUSH ECX
00423945  E8 76 A8 28 00            CALL 0x006ae1c0
0042394A  8B 17                     MOV EDX,dword ptr [EDI]
0042394C  8D 45 FF                  LEA EAX,[EBP + -0x1]
0042394F  50                        PUSH EAX
00423950  6A 65                     PUSH 0x65
00423952  8B CF                     MOV ECX,EDI
00423954  C6 45 FF FF               MOV byte ptr [EBP + -0x1],0xff
00423958  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_0042395b:
0042395B  8B CE                     MOV ECX,ESI
0042395D  E8 3D 1E FE FF            CALL 0x0040579f
00423962  8B 4F 35                  MOV ECX,dword ptr [EDI + 0x35]
00423965  F6 C1 01                  TEST CL,0x1
00423968  74 0A                     JZ 0x00423974
0042396A  A8 01                     TEST AL,0x1
0042396C  75 0E                     JNZ 0x0042397c
0042396E  83 4D F8 01               OR dword ptr [EBP + -0x8],0x1
00423972  EB 08                     JMP 0x0042397c
LAB_00423974:
00423974  A8 01                     TEST AL,0x1
00423976  74 04                     JZ 0x0042397c
00423978  83 4D F4 01               OR dword ptr [EBP + -0xc],0x1
LAB_0042397c:
0042397C  F6 C1 02                  TEST CL,0x2
0042397F  74 0A                     JZ 0x0042398b
00423981  A8 02                     TEST AL,0x2
00423983  75 0E                     JNZ 0x00423993
00423985  83 4D F8 02               OR dword ptr [EBP + -0x8],0x2
00423989  EB 08                     JMP 0x00423993
LAB_0042398b:
0042398B  A8 02                     TEST AL,0x2
0042398D  74 04                     JZ 0x00423993
0042398F  83 4D F4 02               OR dword ptr [EBP + -0xc],0x2
LAB_00423993:
00423993  F6 C1 04                  TEST CL,0x4
00423996  74 0A                     JZ 0x004239a2
00423998  A8 04                     TEST AL,0x4
0042399A  75 0E                     JNZ 0x004239aa
0042399C  83 4D F8 04               OR dword ptr [EBP + -0x8],0x4
004239A0  EB 08                     JMP 0x004239aa
LAB_004239a2:
004239A2  A8 04                     TEST AL,0x4
004239A4  74 04                     JZ 0x004239aa
004239A6  83 4D F4 04               OR dword ptr [EBP + -0xc],0x4
LAB_004239aa:
004239AA  F6 C1 08                  TEST CL,0x8
004239AD  74 0A                     JZ 0x004239b9
004239AF  A8 08                     TEST AL,0x8
004239B1  75 0E                     JNZ 0x004239c1
004239B3  83 4D F8 08               OR dword ptr [EBP + -0x8],0x8
004239B7  EB 08                     JMP 0x004239c1
LAB_004239b9:
004239B9  A8 08                     TEST AL,0x8
004239BB  74 04                     JZ 0x004239c1
004239BD  83 4D F4 08               OR dword ptr [EBP + -0xc],0x8
LAB_004239c1:
004239C1  BA 10 00 00 00            MOV EDX,0x10
004239C6  84 CA                     TEST DL,CL
004239C8  74 09                     JZ 0x004239d3
004239CA  84 C2                     TEST DL,AL
004239CC  75 0C                     JNZ 0x004239da
004239CE  09 55 F8                  OR dword ptr [EBP + -0x8],EDX
004239D1  EB 07                     JMP 0x004239da
LAB_004239d3:
004239D3  84 C2                     TEST DL,AL
004239D5  74 03                     JZ 0x004239da
004239D7  09 55 F4                  OR dword ptr [EBP + -0xc],EDX
LAB_004239da:
004239DA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004239DD  85 C0                     TEST EAX,EAX
004239DF  74 0B                     JZ 0x004239ec
004239E1  8B 16                     MOV EDX,dword ptr [ESI]
004239E3  50                        PUSH EAX
004239E4  8B CE                     MOV ECX,ESI
004239E6  FF 92 00 01 00 00         CALL dword ptr [EDX + 0x100]
LAB_004239ec:
004239EC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004239EF  85 C0                     TEST EAX,EAX
004239F1  74 0B                     JZ 0x004239fe
004239F3  8B 16                     MOV EDX,dword ptr [ESI]
004239F5  50                        PUSH EAX
004239F6  8B CE                     MOV ECX,ESI
004239F8  FF 92 04 01 00 00         CALL dword ptr [EDX + 0x104]
LAB_004239fe:
004239FE  83 7E 20 14               CMP dword ptr [ESI + 0x20],0x14
00423A02  75 0B                     JNZ 0x00423a0f
00423A04  8B 47 39                  MOV EAX,dword ptr [EDI + 0x39]
00423A07  8B CE                     MOV ECX,ESI
00423A09  50                        PUSH EAX
00423A0A  E8 17 E2 FD FF            CALL 0x00401c26
LAB_00423a0f:
00423A0F  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
00423A12  85 C9                     TEST ECX,ECX
00423A14  74 23                     JZ 0x00423a39
00423A16  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
00423A1A  C7 45 D8 96 5D 00 00      MOV dword ptr [EBP + -0x28],0x5d96
00423A21  66 C7 45 DC 00 00         MOV word ptr [EBP + -0x24],0x0
00423A27  66 89 55 DE               MOV word ptr [EBP + -0x22],DX
00423A2B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00423A2E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00423A31  8B 11                     MOV EDX,dword ptr [ECX]
00423A33  8D 45 C8                  LEA EAX,[EBP + -0x38]
00423A36  50                        PUSH EAX
00423A37  FF 12                     CALL dword ptr [EDX]
LAB_00423a39:
00423A39  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00423A3C  8B C3                     MOV EAX,EBX
00423A3E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00423A44  5F                        POP EDI
00423A45  5E                        POP ESI
00423A46  5B                        POP EBX
00423A47  8B E5                     MOV ESP,EBP
00423A49  5D                        POP EBP
00423A4A  C2 08 00                  RET 0x8
LAB_00423a4d:
00423A4D  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
00423A50  81 FE 01 00 FE AF         CMP ESI,0xaffe0001
00423A56  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00423A5C  74 40                     JZ 0x00423a9e
00423A5E  68 20 51 7A 00            PUSH 0x7a5120
00423A63  68 CC 4C 7A 00            PUSH 0x7a4ccc
00423A68  56                        PUSH ESI
00423A69  57                        PUSH EDI
00423A6A  68 DF 00 00 00            PUSH 0xdf
00423A6F  68 A4 50 7A 00            PUSH 0x7a50a4
00423A74  E8 57 9A 28 00            CALL 0x006ad4d0
00423A79  83 C4 18                  ADD ESP,0x18
00423A7C  85 C0                     TEST EAX,EAX
00423A7E  74 01                     JZ 0x00423a81
00423A80  CC                        INT3
LAB_00423a81:
00423A81  68 E0 00 00 00            PUSH 0xe0
00423A86  68 A4 50 7A 00            PUSH 0x7a50a4
00423A8B  57                        PUSH EDI
00423A8C  56                        PUSH ESI
00423A8D  E8 AE 23 28 00            CALL 0x006a5e40
00423A92  83 C8 FF                  OR EAX,0xffffffff
00423A95  5F                        POP EDI
00423A96  5E                        POP ESI
00423A97  5B                        POP EBX
00423A98  8B E5                     MOV ESP,EBP
00423A9A  5D                        POP EBP
00423A9B  C2 08 00                  RET 0x8
LAB_00423a9e:
00423A9E  BB 01 00 FE AF            MOV EBX,0xaffe0001
00423AA3  5F                        POP EDI
00423AA4  8B C3                     MOV EAX,EBX
00423AA6  5E                        POP ESI
00423AA7  5B                        POP EBX
00423AA8  8B E5                     MOV ESP,EBP
00423AAA  5D                        POP EBP
00423AAB  C2 08 00                  RET 0x8
