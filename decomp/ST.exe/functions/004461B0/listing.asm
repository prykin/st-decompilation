STAllPlayersC::_DeleteGuardBoat:
004461B0  55                        PUSH EBP
004461B1  8B EC                     MOV EBP,ESP
004461B3  83 EC 68                  SUB ESP,0x68
004461B6  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004461BA  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004461BD  53                        PUSH EBX
004461BE  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004461C1  56                        PUSH ESI
004461C2  57                        PUSH EDI
004461C3  6A 00                     PUSH 0x0
004461C5  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004461C8  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
004461CF  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004461D2  C1 E1 04                  SHL ECX,0x4
004461D5  03 C8                     ADD ECX,EAX
004461D7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004461DC  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
004461DF  8B 14 4D 16 58 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f5816]
004461E6  8D 4D 98                  LEA ECX,[EBP + -0x68]
004461E9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004461EC  8D 55 9C                  LEA EDX,[EBP + -0x64]
004461EF  52                        PUSH EDX
004461F0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004461F6  E8 F5 75 2E 00            CALL 0x0072d7f0
004461FB  8B F0                     MOV ESI,EAX
004461FD  83 C4 08                  ADD ESP,0x8
00446200  85 F6                     TEST ESI,ESI
00446202  0F 85 14 02 00 00         JNZ 0x0044641c
00446208  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0044620B  85 F6                     TEST ESI,ESI
0044620D  75 1A                     JNZ 0x00446229
0044620F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00446214  68 BA 28 00 00            PUSH 0x28ba
00446219  68 04 60 7A 00            PUSH 0x7a6004
0044621E  50                        PUSH EAX
0044621F  68 09 00 FE AF            PUSH 0xaffe0009
00446224  E8 17 FC 25 00            CALL 0x006a5e40
LAB_00446229:
00446229  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044622C  83 F8 01                  CMP EAX,0x1
0044622F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00446232  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00446235  0F 85 D1 00 00 00         JNZ 0x0044630c
0044623B  33 DB                     XOR EBX,EBX
0044623D  85 C0                     TEST EAX,EAX
0044623F  0F 8E B7 00 00 00         JLE 0x004462fc
00446245  EB 03                     JMP 0x0044624a
LAB_00446247:
00446247  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0044624a:
0044624A  8D 4D DC                  LEA ECX,[EBP + -0x24]
0044624D  8B D3                     MOV EDX,EBX
0044624F  51                        PUSH ECX
00446250  8B CE                     MOV ECX,ESI
00446252  E8 19 6A 26 00            CALL 0x006acc70
00446257  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0044625A  33 F6                     XOR ESI,ESI
0044625C  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
0044625F  85 FF                     TEST EDI,EDI
00446261  7E 57                     JLE 0x004462ba
LAB_00446263:
00446263  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00446266  8D 45 F8                  LEA EAX,[EBP + -0x8]
00446269  50                        PUSH EAX
0044626A  8B D6                     MOV EDX,ESI
0044626C  E8 FF 69 26 00            CALL 0x006acc70
00446271  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00446275  66 39 4D F8               CMP word ptr [EBP + -0x8],CX
00446279  74 07                     JZ 0x00446282
0044627B  46                        INC ESI
0044627C  3B F7                     CMP ESI,EDI
0044627E  7C E3                     JL 0x00446263
00446280  EB 38                     JMP 0x004462ba
LAB_00446282:
00446282  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00446285  56                        PUSH ESI
00446286  52                        PUSH EDX
00446287  E8 E4 A9 26 00            CALL 0x006b0c70
0044628C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044628F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00446292  6A 01                     PUSH 0x1
00446294  50                        PUSH EAX
00446295  51                        PUSH ECX
00446296  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00446299  E8 1C C6 FB FF            CALL 0x004028ba
0044629E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004462A4  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
004462AA  8D 55 F0                  LEA EDX,[EBP + -0x10]
004462AD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004462B0  52                        PUSH EDX
004462B1  6A 21                     PUSH 0x21
004462B3  8B C8                     MOV ECX,EAX
004462B5  E8 6C BE FB FF            CALL 0x00402126
LAB_004462ba:
004462BA  3B F7                     CMP ESI,EDI
004462BC  75 0A                     JNZ 0x004462c8
004462BE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004462C1  43                        INC EBX
004462C2  3B D8                     CMP EBX,EAX
004462C4  7C 81                     JL 0x00446247
004462C6  EB 34                     JMP 0x004462fc
LAB_004462c8:
004462C8  4F                        DEC EDI
004462C9  85 FF                     TEST EDI,EDI
004462CB  75 28                     JNZ 0x004462f5
004462CD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004462D0  50                        PUSH EAX
004462D1  E8 3A 7E 26 00            CALL 0x006ae110
004462D6  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004462D9  51                        PUSH ECX
004462DA  E8 31 7E 26 00            CALL 0x006ae110
004462DF  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004462E2  52                        PUSH EDX
004462E3  E8 28 7E 26 00            CALL 0x006ae110
004462E8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004462EB  53                        PUSH EBX
004462EC  50                        PUSH EAX
004462ED  E8 7E A9 26 00            CALL 0x006b0c70
004462F2  FF 4D FC                  DEC dword ptr [EBP + -0x4]
LAB_004462f5:
004462F5  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_004462fc:
004462FC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004462FF  85 C0                     TEST EAX,EAX
00446301  0F 85 00 01 00 00         JNZ 0x00446407
00446307  E9 EF 00 00 00            JMP 0x004463fb
LAB_0044630c:
0044630C  33 DB                     XOR EBX,EBX
0044630E  85 C0                     TEST EAX,EAX
00446310  0F 8E E3 00 00 00         JLE 0x004463f9
00446316  EB 03                     JMP 0x0044631b
LAB_00446318:
00446318  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0044631b:
0044631B  8D 55 DC                  LEA EDX,[EBP + -0x24]
0044631E  8B CE                     MOV ECX,ESI
00446320  52                        PUSH EDX
00446321  8B D3                     MOV EDX,EBX
00446323  E8 48 69 26 00            CALL 0x006acc70
00446328  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0044632B  33 F6                     XOR ESI,ESI
0044632D  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00446330  85 FF                     TEST EDI,EDI
00446332  7E 29                     JLE 0x0044635d
LAB_00446334:
00446334  8D 4D F8                  LEA ECX,[EBP + -0x8]
00446337  8B D6                     MOV EDX,ESI
00446339  51                        PUSH ECX
0044633A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0044633D  E8 2E 69 26 00            CALL 0x006acc70
00446342  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
00446346  66 39 55 F8               CMP word ptr [EBP + -0x8],DX
0044634A  74 07                     JZ 0x00446353
0044634C  46                        INC ESI
0044634D  3B F7                     CMP ESI,EDI
0044634F  7C E3                     JL 0x00446334
00446351  EB 0A                     JMP 0x0044635d
LAB_00446353:
00446353  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00446356  56                        PUSH ESI
00446357  50                        PUSH EAX
00446358  E8 13 A9 26 00            CALL 0x006b0c70
LAB_0044635d:
0044635D  3B F7                     CMP ESI,EDI
0044635F  0F 84 86 00 00 00         JZ 0x004463eb
00446365  4F                        DEC EDI
00446366  85 FF                     TEST EDI,EDI
00446368  75 7A                     JNZ 0x004463e4
0044636A  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0044636D  33 F6                     XOR ESI,ESI
0044636F  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
00446372  85 FF                     TEST EDI,EDI
00446374  7E 41                     JLE 0x004463b7
LAB_00446376:
00446376  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00446379  8D 55 F8                  LEA EDX,[EBP + -0x8]
0044637C  52                        PUSH EDX
0044637D  8B D6                     MOV EDX,ESI
0044637F  E8 EC 68 26 00            CALL 0x006acc70
00446384  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00446387  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044638A  6A 01                     PUSH 0x1
0044638C  50                        PUSH EAX
0044638D  51                        PUSH ECX
0044638E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00446391  E8 24 C5 FB FF            CALL 0x004028ba
00446396  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0044639C  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
004463A2  8D 55 F0                  LEA EDX,[EBP + -0x10]
004463A5  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004463A8  52                        PUSH EDX
004463A9  6A 21                     PUSH 0x21
004463AB  8B C8                     MOV ECX,EAX
004463AD  E8 74 BD FB FF            CALL 0x00402126
004463B2  46                        INC ESI
004463B3  3B F7                     CMP ESI,EDI
004463B5  7C BF                     JL 0x00446376
LAB_004463b7:
004463B7  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004463BA  50                        PUSH EAX
004463BB  E8 50 7D 26 00            CALL 0x006ae110
004463C0  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004463C3  51                        PUSH ECX
004463C4  E8 47 7D 26 00            CALL 0x006ae110
004463C9  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004463CC  52                        PUSH EDX
004463CD  E8 3E 7D 26 00            CALL 0x006ae110
004463D2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004463D5  53                        PUSH EBX
004463D6  50                        PUSH EAX
004463D7  E8 94 A8 26 00            CALL 0x006b0c70
004463DC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004463DF  49                        DEC ECX
004463E0  4B                        DEC EBX
004463E1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004463e4:
004463E4  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_004463eb:
004463EB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004463EE  43                        INC EBX
004463EF  3B D8                     CMP EBX,EAX
004463F1  0F 8C 21 FF FF FF         JL 0x00446318
004463F7  85 C0                     TEST EAX,EAX
LAB_004463f9:
004463F9  75 0C                     JNZ 0x00446407
LAB_004463fb:
004463FB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004463FE  51                        PUSH ECX
004463FF  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00446402  E8 8E BC FB FF            CALL 0x00402095
LAB_00446407:
00446407  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0044640A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0044640D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00446413  5F                        POP EDI
00446414  5E                        POP ESI
00446415  5B                        POP EBX
00446416  8B E5                     MOV ESP,EBP
00446418  5D                        POP EBP
00446419  C2 0C 00                  RET 0xc
LAB_0044641c:
0044641C  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0044641F  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
00446425  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0044642A  74 37                     JZ 0x00446463
0044642C  68 90 83 7A 00            PUSH 0x7a8390
00446431  68 CC 4C 7A 00            PUSH 0x7a4ccc
00446436  6A 00                     PUSH 0x0
00446438  6A 00                     PUSH 0x0
0044643A  68 06 29 00 00            PUSH 0x2906
0044643F  68 04 60 7A 00            PUSH 0x7a6004
00446444  E8 87 70 26 00            CALL 0x006ad4d0
00446449  83 C4 18                  ADD ESP,0x18
0044644C  85 C0                     TEST EAX,EAX
0044644E  74 01                     JZ 0x00446451
00446450  CC                        INT3
LAB_00446451:
00446451  68 07 29 00 00            PUSH 0x2907
00446456  68 04 60 7A 00            PUSH 0x7a6004
0044645B  6A 00                     PUSH 0x0
0044645D  56                        PUSH ESI
0044645E  E8 DD F9 25 00            CALL 0x006a5e40
LAB_00446463:
00446463  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00446466  5F                        POP EDI
00446467  5E                        POP ESI
00446468  5B                        POP EBX
00446469  8B E5                     MOV ESP,EBP
0044646B  5D                        POP EBP
0044646C  C2 0C 00                  RET 0xc
