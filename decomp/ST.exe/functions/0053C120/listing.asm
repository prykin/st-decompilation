ResearchPanelTy::InitResearchPanel:
0053C120  55                        PUSH EBP
0053C121  8B EC                     MOV EBP,ESP
0053C123  81 EC F8 01 00 00         SUB ESP,0x1f8
0053C129  53                        PUSH EBX
0053C12A  56                        PUSH ESI
0053C12B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053C12E  57                        PUSH EDI
0053C12F  B9 16 00 00 00            MOV ECX,0x16
0053C134  33 C0                     XOR EAX,EAX
0053C136  8D 7D 9C                  LEA EDI,[EBP + -0x64]
0053C139  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
0053C13F  F3 AB                     STOSD.REP ES:EDI
0053C141  B9 54 00 00 00            MOV ECX,0x54
0053C146  8D BD 08 FE FF FF         LEA EDI,[EBP + 0xfffffe08]
0053C14C  F3 AB                     STOSD.REP ES:EDI
0053C14E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053C153  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
0053C159  6A 00                     PUSH 0x0
0053C15B  52                        PUSH EDX
0053C15C  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
0053C162  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053C168  E8 83 16 1F 00            CALL 0x0072d7f0
0053C16D  8B F0                     MOV ESI,EAX
0053C16F  83 C4 08                  ADD ESP,0x8
0053C172  85 F6                     TEST ESI,ESI
0053C174  0F 85 22 02 00 00         JNZ 0x0053c39c
0053C17A  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0053C17D  BB 02 00 00 00            MOV EBX,0x2
0053C182  89 35 E8 16 80 00         MOV dword ptr [0x008016e8],ESI
0053C188  8D BE 7A 02 00 00         LEA EDI,[ESI + 0x27a]
LAB_0053c18e:
0053C18E  6A 0A                     PUSH 0xa
0053C190  6A 30                     PUSH 0x30
0053C192  6A 28                     PUSH 0x28
0053C194  6A 00                     PUSH 0x0
0053C196  E8 F5 20 17 00            CALL 0x006ae290
0053C19B  89 07                     MOV dword ptr [EDI],EAX
0053C19D  83 C7 04                  ADD EDI,0x4
0053C1A0  4B                        DEC EBX
0053C1A1  75 EB                     JNZ 0x0053c18e
0053C1A3  A1 30 67 80 00            MOV EAX,[0x00806730]
0053C1A8  6A 01                     PUSH 0x1
0053C1AA  05 E0 FC FF FF            ADD EAX,0xfffffce0
0053C1AF  6A 00                     PUSH 0x0
0053C1B1  99                        CDQ
0053C1B2  2B C2                     SUB EAX,EDX
0053C1B4  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0053C1B7  D1 F8                     SAR EAX,0x1
0053C1B9  03 D0                     ADD EDX,EAX
0053C1BB  6A 00                     PUSH 0x0
0053C1BD  68 24 77 7C 00            PUSH 0x7c7724
0053C1C2  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
0053C1C5  E8 B2 95 EC FF            CALL 0x0040577c
0053C1CA  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053C1D0  83 C4 08                  ADD ESP,0x8
0053C1D3  50                        PUSH EAX
0053C1D4  6A 01                     PUSH 0x1
0053C1D6  E8 05 5B 1B 00            CALL 0x006f1ce0
0053C1DB  6A 00                     PUSH 0x0
0053C1DD  6A 00                     PUSH 0x0
0053C1DF  6A 01                     PUSH 0x1
0053C1E1  6A 00                     PUSH 0x0
0053C1E3  89 86 84 01 00 00         MOV dword ptr [ESI + 0x184],EAX
0053C1E9  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
0053C1EF  6A FF                     PUSH -0x1
0053C1F1  68 A0 20 7C 00            PUSH 0x7c20a0
0053C1F6  6A 0B                     PUSH 0xb
0053C1F8  51                        PUSH ECX
0053C1F9  E8 F2 D8 1C 00            CALL 0x00709af0
0053C1FE  6A 00                     PUSH 0x0
0053C200  6A 00                     PUSH 0x0
0053C202  6A 01                     PUSH 0x1
0053C204  6A 00                     PUSH 0x0
0053C206  89 86 88 01 00 00         MOV dword ptr [ESI + 0x188],EAX
0053C20C  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
0053C212  6A FF                     PUSH -0x1
0053C214  68 C8 38 7C 00            PUSH 0x7c38c8
0053C219  6A 0B                     PUSH 0xb
0053C21B  52                        PUSH EDX
0053C21C  E8 CF D8 1C 00            CALL 0x00709af0
0053C221  83 C4 40                  ADD ESP,0x40
0053C224  8B CE                     MOV ECX,ESI
0053C226  89 86 8C 01 00 00         MOV dword ptr [ESI + 0x18c],EAX
0053C22C  68 1C 77 7C 00            PUSH 0x7c771c
0053C231  6A 33                     PUSH 0x33
0053C233  6A 13                     PUSH 0x13
0053C235  6A 20                     PUSH 0x20
0053C237  6A 4F                     PUSH 0x4f
0053C239  68 C4 00 00 00            PUSH 0xc4
0053C23E  6A 68                     PUSH 0x68
0053C240  6A 4F                     PUSH 0x4f
0053C242  68 85 00 00 00            PUSH 0x85
0053C247  6A 0C                     PUSH 0xc
0053C249  68 C1 00 00 00            PUSH 0xc1
0053C24E  6A 02                     PUSH 0x2
0053C250  6A 3F                     PUSH 0x3f
0053C252  68 22 27 00 00            PUSH 0x2722
0053C257  E8 E5 7F EC FF            CALL 0x00404241
0053C25C  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
0053C263  0F 84 20 01 00 00         JZ 0x0053c389
0053C269  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
0053C26C  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0053C26F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053C272  33 C9                     XOR ECX,ECX
0053C274  8D 85 0C FE FF FF         LEA EAX,[EBP + 0xfffffe0c]
0053C27A  83 C2 70                  ADD EDX,0x70
0053C27D  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_0053c284:
0053C284  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0053C287  8D 59 01                  LEA EBX,[ECX + 0x1]
0053C28A  89 58 FC                  MOV dword ptr [EAX + -0x4],EBX
0053C28D  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0053C293  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
0053C296  C7 40 10 2E 00 00 00      MOV dword ptr [EAX + 0x10],0x2e
0053C29D  85 FF                     TEST EDI,EDI
0053C29F  8B 3D 34 67 80 00         MOV EDI,dword ptr [0x00806734]
0053C2A5  74 03                     JZ 0x0053c2aa
0053C2A7  8B 7E 44                  MOV EDI,dword ptr [ESI + 0x44]
LAB_0053c2aa:
0053C2AA  83 C7 34                  ADD EDI,0x34
0053C2AD  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
0053C2B0  33 FF                     XOR EDI,EDI
0053C2B2  C7 40 14 10 00 00 00      MOV dword ptr [EAX + 0x14],0x10
0053C2B9  89 78 44                  MOV dword ptr [EAX + 0x44],EDI
0053C2BC  C7 40 54 01 01 00 00      MOV dword ptr [EAX + 0x54],0x101
0053C2C3  C7 40 28 01 01 00 00      MOV dword ptr [EAX + 0x28],0x101
0053C2CA  C7 40 58 03 00 00 00      MOV dword ptr [EAX + 0x58],0x3
0053C2D1  C7 40 2C 03 00 00 00      MOV dword ptr [EAX + 0x2c],0x3
0053C2D8  C7 40 30 01 42 00 00      MOV dword ptr [EAX + 0x30],0x4201
0053C2DF  C7 40 5C 02 42 00 00      MOV dword ptr [EAX + 0x5c],0x4202
0053C2E6  66 89 78 60               MOV word ptr [EAX + 0x60],DI
0053C2EA  66 89 78 34               MOV word ptr [EAX + 0x34],DI
0053C2EE  66 C7 40 62 02 00         MOV word ptr [EAX + 0x62],0x2
0053C2F4  2B CF                     SUB ECX,EDI
0053C2F6  66 C7 40 36 02 00         MOV word ptr [EAX + 0x36],0x2
0053C2FC  74 0A                     JZ 0x0053c308
0053C2FE  49                        DEC ECX
0053C2FF  75 12                     JNZ 0x0053c313
0053C301  B9 AC 3A 00 00            MOV ECX,0x3aac
0053C306  EB 05                     JMP 0x0053c30d
LAB_0053c308:
0053C308  B9 AB 3A 00 00            MOV ECX,0x3aab
LAB_0053c30d:
0053C30D  89 48 64                  MOV dword ptr [EAX + 0x64],ECX
0053C310  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
LAB_0053c313:
0053C313  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0053C316  83 C2 31                  ADD EDX,0x31
0053C319  83 C0 70                  ADD EAX,0x70
0053C31C  4F                        DEC EDI
0053C31D  8B CB                     MOV ECX,EBX
0053C31F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0053C322  0F 85 5C FF FF FF         JNZ 0x0053c284
0053C328  33 D2                     XOR EDX,EDX
0053C32A  8D 85 08 FE FF FF         LEA EAX,[EBP + 0xfffffe08]
0053C330  8A 96 78 02 00 00         MOV DL,byte ptr [ESI + 0x278]
0053C336  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0053C339  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0053C33C  B9 01 00 00 00            MOV ECX,0x1
0053C341  42                        INC EDX
0053C342  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0053C345  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0053C348  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0053C34B  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
0053C34E  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0053C351  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0053C354  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053C357  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0053C35A  8D 45 9C                  LEA EAX,[EBP + -0x64]
0053C35D  BA 02 00 00 00            MOV EDX,0x2
0053C362  6A 00                     PUSH 0x0
0053C364  50                        PUSH EAX
0053C365  81 C6 82 02 00 00         ADD ESI,0x282
0053C36B  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0053C36E  C7 45 B4 07 B2 00 00      MOV dword ptr [EBP + -0x4c],0xb207
0053C375  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0053C378  C7 45 D4 B4 C0 00 00      MOV dword ptr [EBP + -0x2c],0xc0b4
0053C37F  8B 11                     MOV EDX,dword ptr [ECX]
0053C381  6A 00                     PUSH 0x0
0053C383  56                        PUSH ESI
0053C384  6A 05                     PUSH 0x5
0053C386  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_0053c389:
0053C389  8B 8D 58 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff58]
0053C38F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053C395  5F                        POP EDI
0053C396  5E                        POP ESI
0053C397  5B                        POP EBX
0053C398  8B E5                     MOV ESP,EBP
0053C39A  5D                        POP EBP
0053C39B  C3                        RET
LAB_0053c39c:
0053C39C  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
0053C3A2  68 F0 76 7C 00            PUSH 0x7c76f0
0053C3A7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053C3AC  56                        PUSH ESI
0053C3AD  6A 00                     PUSH 0x0
0053C3AF  6A 39                     PUSH 0x39
0053C3B1  68 C8 76 7C 00            PUSH 0x7c76c8
0053C3B6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053C3BC  E8 0F 11 17 00            CALL 0x006ad4d0
0053C3C1  83 C4 18                  ADD ESP,0x18
0053C3C4  85 C0                     TEST EAX,EAX
0053C3C6  74 01                     JZ 0x0053c3c9
0053C3C8  CC                        INT3
LAB_0053c3c9:
0053C3C9  6A 39                     PUSH 0x39
0053C3CB  68 C8 76 7C 00            PUSH 0x7c76c8
0053C3D0  6A 00                     PUSH 0x0
0053C3D2  56                        PUSH ESI
0053C3D3  E8 68 9A 16 00            CALL 0x006a5e40
0053C3D8  5F                        POP EDI
0053C3D9  5E                        POP ESI
0053C3DA  5B                        POP EBX
0053C3DB  8B E5                     MOV ESP,EBP
0053C3DD  5D                        POP EBP
0053C3DE  C3                        RET
