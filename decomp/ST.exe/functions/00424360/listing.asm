FUN_00424360:
00424360  55                        PUSH EBP
00424361  8B EC                     MOV EBP,ESP
00424363  83 EC 4C                  SUB ESP,0x4c
00424366  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00424369  56                        PUSH ESI
0042436A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0042436D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00424370  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00424376  57                        PUSH EDI
00424377  8D 45 B8                  LEA EAX,[EBP + -0x48]
0042437A  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0042437D  6A 00                     PUSH 0x0
0042437F  50                        PUSH EAX
00424380  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00424383  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00424389  E8 62 94 30 00            CALL 0x0072d7f0
0042438E  8B F0                     MOV ESI,EAX
00424390  83 C4 08                  ADD ESP,0x8
00424393  85 F6                     TEST ESI,ESI
00424395  0F 85 9A 00 00 00         JNZ 0x00424435
0042439B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0042439E  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004243A1  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004243A4  89 4F 20                  MOV dword ptr [EDI + 0x20],ECX
004243A7  8A 56 04                  MOV DL,byte ptr [ESI + 0x4]
004243AA  88 57 24                  MOV byte ptr [EDI + 0x24],DL
004243AD  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
004243B1  66 89 47 25               MOV word ptr [EDI + 0x25],AX
004243B5  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
004243B9  66 89 4F 27               MOV word ptr [EDI + 0x27],CX
004243BD  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
004243C0  89 57 31                  MOV dword ptr [EDI + 0x31],EDX
004243C3  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
004243C6  89 47 35                  MOV dword ptr [EDI + 0x35],EAX
004243C9  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
004243CC  89 4F 39                  MOV dword ptr [EDI + 0x39],ECX
004243CF  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004243D2  83 F8 FF                  CMP EAX,-0x1
004243D5  74 14                     JZ 0x004243eb
004243D7  03 C6                     ADD EAX,ESI
004243D9  68 C5 45 40 00            PUSH 0x4045c5
004243DE  50                        PUSH EAX
004243DF  6A 00                     PUSH 0x0
004243E1  E8 DA BC 28 00            CALL 0x006b00c0
004243E6  89 47 29                  MOV dword ptr [EDI + 0x29],EAX
004243E9  EB 07                     JMP 0x004243f2
LAB_004243eb:
004243EB  C7 47 29 00 00 00 00      MOV dword ptr [EDI + 0x29],0x0
LAB_004243f2:
004243F2  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004243F5  83 F8 FF                  CMP EAX,-0x1
004243F8  74 23                     JZ 0x0042441d
004243FA  03 C6                     ADD EAX,ESI
004243FC  68 C5 45 40 00            PUSH 0x4045c5
00424401  50                        PUSH EAX
00424402  6A 00                     PUSH 0x0
00424404  E8 B7 BC 28 00            CALL 0x006b00c0
00424409  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0042440C  89 47 2D                  MOV dword ptr [EDI + 0x2d],EAX
0042440F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00424415  5F                        POP EDI
00424416  5E                        POP ESI
00424417  8B E5                     MOV ESP,EBP
00424419  5D                        POP EBP
0042441A  C2 04 00                  RET 0x4
LAB_0042441d:
0042441D  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00424420  C7 47 2D 00 00 00 00      MOV dword ptr [EDI + 0x2d],0x0
00424427  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042442D  5F                        POP EDI
0042442E  5E                        POP ESI
0042442F  8B E5                     MOV ESP,EBP
00424431  5D                        POP EBP
00424432  C2 04 00                  RET 0x4
LAB_00424435:
00424435  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00424438  68 84 51 7A 00            PUSH 0x7a5184
0042443D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00424442  56                        PUSH ESI
00424443  6A 00                     PUSH 0x0
00424445  68 D5 01 00 00            PUSH 0x1d5
0042444A  68 A4 50 7A 00            PUSH 0x7a50a4
0042444F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00424454  E8 77 90 28 00            CALL 0x006ad4d0
00424459  83 C4 18                  ADD ESP,0x18
0042445C  85 C0                     TEST EAX,EAX
0042445E  74 01                     JZ 0x00424461
00424460  CC                        INT3
LAB_00424461:
00424461  68 D6 01 00 00            PUSH 0x1d6
00424466  68 A4 50 7A 00            PUSH 0x7a50a4
0042446B  6A 00                     PUSH 0x0
0042446D  56                        PUSH ESI
0042446E  E8 CD 19 28 00            CALL 0x006a5e40
00424473  5F                        POP EDI
00424474  5E                        POP ESI
00424475  8B E5                     MOV ESP,EBP
00424477  5D                        POP EBP
00424478  C2 04 00                  RET 0x4
