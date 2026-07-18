STAllPlayersC::DeleteGuardBoat:
00446520  55                        PUSH EBP
00446521  8B EC                     MOV EBP,ESP
00446523  83 EC 64                  SUB ESP,0x64
00446526  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0044652A  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0044652D  53                        PUSH EBX
0044652E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00446531  56                        PUSH ESI
00446532  57                        PUSH EDI
00446533  6A 00                     PUSH 0x0
00446535  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00446538  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044653B  C1 E1 04                  SHL ECX,0x4
0044653E  03 C8                     ADD ECX,EAX
00446540  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00446545  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00446548  8B 14 4D 16 58 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f5816]
0044654F  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00446552  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00446555  8D 55 A0                  LEA EDX,[EBP + -0x60]
00446558  52                        PUSH EDX
00446559  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044655F  E8 8C 72 2E 00            CALL 0x0072d7f0
00446564  8B F0                     MOV ESI,EAX
00446566  83 C4 08                  ADD ESP,0x8
00446569  85 F6                     TEST ESI,ESI
0044656B  0F 85 71 02 00 00         JNZ 0x004467e2
00446571  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00446574  85 F6                     TEST ESI,ESI
00446576  75 1A                     JNZ 0x00446592
00446578  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044657D  68 1D 29 00 00            PUSH 0x291d
00446582  68 04 60 7A 00            PUSH 0x7a6004
00446587  50                        PUSH EAX
00446588  68 09 00 FE AF            PUSH 0xaffe0009
0044658D  E8 AE F8 25 00            CALL 0x006a5e40
LAB_00446592:
00446592  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00446595  83 F8 01                  CMP EAX,0x1
00446598  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0044659B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0044659E  0F 85 E3 00 00 00         JNZ 0x00446687
004465A4  33 DB                     XOR EBX,EBX
004465A6  85 C0                     TEST EAX,EAX
004465A8  0F 8E B0 00 00 00         JLE 0x0044665e
004465AE  EB 03                     JMP 0x004465b3
LAB_004465b0:
004465B0  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_004465b3:
004465B3  8D 4D E0                  LEA ECX,[EBP + -0x20]
004465B6  8B D3                     MOV EDX,EBX
004465B8  51                        PUSH ECX
004465B9  8B CE                     MOV ECX,ESI
004465BB  E8 B0 66 26 00            CALL 0x006acc70
004465C0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004465C3  33 F6                     XOR ESI,ESI
004465C5  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
004465C8  85 FF                     TEST EDI,EDI
004465CA  7E 57                     JLE 0x00446623
LAB_004465cc:
004465CC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004465CF  8D 45 FC                  LEA EAX,[EBP + -0x4]
004465D2  50                        PUSH EAX
004465D3  8B D6                     MOV EDX,ESI
004465D5  E8 96 66 26 00            CALL 0x006acc70
004465DA  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
004465DE  66 39 4D FC               CMP word ptr [EBP + -0x4],CX
004465E2  74 07                     JZ 0x004465eb
004465E4  46                        INC ESI
004465E5  3B F7                     CMP ESI,EDI
004465E7  7C E3                     JL 0x004465cc
004465E9  EB 38                     JMP 0x00446623
LAB_004465eb:
004465EB  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004465EE  56                        PUSH ESI
004465EF  52                        PUSH EDX
004465F0  E8 7B A6 26 00            CALL 0x006b0c70
004465F5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004465F8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004465FB  6A 01                     PUSH 0x1
004465FD  50                        PUSH EAX
004465FE  51                        PUSH ECX
004465FF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00446602  E8 B3 C2 FB FF            CALL 0x004028ba
00446607  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0044660D  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
00446613  8D 55 F4                  LEA EDX,[EBP + -0xc]
00446616  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00446619  52                        PUSH EDX
0044661A  6A 21                     PUSH 0x21
0044661C  8B C8                     MOV ECX,EAX
0044661E  E8 03 BB FB FF            CALL 0x00402126
LAB_00446623:
00446623  3B F7                     CMP ESI,EDI
00446625  75 0A                     JNZ 0x00446631
00446627  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044662A  43                        INC EBX
0044662B  3B D8                     CMP EBX,EAX
0044662D  7C 81                     JL 0x004465b0
0044662F  EB 2D                     JMP 0x0044665e
LAB_00446631:
00446631  4F                        DEC EDI
00446632  85 FF                     TEST EDI,EDI
00446634  75 28                     JNZ 0x0044665e
00446636  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00446639  50                        PUSH EAX
0044663A  E8 D1 7A 26 00            CALL 0x006ae110
0044663F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00446642  51                        PUSH ECX
00446643  E8 C8 7A 26 00            CALL 0x006ae110
00446648  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0044664B  52                        PUSH EDX
0044664C  E8 BF 7A 26 00            CALL 0x006ae110
00446651  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00446654  53                        PUSH EBX
00446655  50                        PUSH EAX
00446656  E8 15 A6 26 00            CALL 0x006b0c70
0044665B  FF 4D F8                  DEC dword ptr [EBP + -0x8]
LAB_0044665e:
0044665E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00446661  85 C0                     TEST EAX,EAX
00446663  0F 85 51 01 00 00         JNZ 0x004467ba
00446669  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044666C  51                        PUSH ECX
0044666D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00446670  E8 20 BA FB FF            CALL 0x00402095
00446675  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00446678  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0044667E  5F                        POP EDI
0044667F  5E                        POP ESI
00446680  5B                        POP EBX
00446681  8B E5                     MOV ESP,EBP
00446683  5D                        POP EBP
00446684  C2 0C 00                  RET 0xc
LAB_00446687:
00446687  33 DB                     XOR EBX,EBX
00446689  85 C0                     TEST EAX,EAX
0044668B  0F 8E 09 01 00 00         JLE 0x0044679a
00446691  EB 03                     JMP 0x00446696
LAB_00446693:
00446693  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_00446696:
00446696  8D 55 E0                  LEA EDX,[EBP + -0x20]
00446699  8B CE                     MOV ECX,ESI
0044669B  52                        PUSH EDX
0044669C  8B D3                     MOV EDX,EBX
0044669E  E8 CD 65 26 00            CALL 0x006acc70
004466A3  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004466A6  33 F6                     XOR ESI,ESI
004466A8  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
004466AB  85 FF                     TEST EDI,EDI
004466AD  7E 29                     JLE 0x004466d8
LAB_004466af:
004466AF  8D 4D FC                  LEA ECX,[EBP + -0x4]
004466B2  8B D6                     MOV EDX,ESI
004466B4  51                        PUSH ECX
004466B5  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004466B8  E8 B3 65 26 00            CALL 0x006acc70
004466BD  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
004466C1  66 39 55 FC               CMP word ptr [EBP + -0x4],DX
004466C5  74 07                     JZ 0x004466ce
004466C7  46                        INC ESI
004466C8  3B F7                     CMP ESI,EDI
004466CA  7C E3                     JL 0x004466af
004466CC  EB 0A                     JMP 0x004466d8
LAB_004466ce:
004466CE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004466D1  56                        PUSH ESI
004466D2  50                        PUSH EAX
004466D3  E8 98 A5 26 00            CALL 0x006b0c70
LAB_004466d8:
004466D8  3B F7                     CMP ESI,EDI
004466DA  0F 84 AC 00 00 00         JZ 0x0044678c
004466E0  4F                        DEC EDI
004466E1  85 FF                     TEST EDI,EDI
004466E3  0F 85 A3 00 00 00         JNZ 0x0044678c
004466E9  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004466EC  33 F6                     XOR ESI,ESI
004466EE  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
004466F1  85 FF                     TEST EDI,EDI
004466F3  7E 6A                     JLE 0x0044675f
LAB_004466f5:
004466F5  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004466F8  8D 55 FC                  LEA EDX,[EBP + -0x4]
004466FB  52                        PUSH EDX
004466FC  8B D6                     MOV EDX,ESI
004466FE  E8 6D 65 26 00            CALL 0x006acc70
00446703  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00446706  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00446709  6A 01                     PUSH 0x1
0044670B  50                        PUSH EAX
0044670C  51                        PUSH ECX
0044670D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00446710  E8 A5 C1 FB FF            CALL 0x004028ba
00446715  85 C0                     TEST EAX,EAX
00446717  75 25                     JNZ 0x0044673e
00446719  68 E0 83 7A 00            PUSH 0x7a83e0
0044671E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00446723  50                        PUSH EAX
00446724  50                        PUSH EAX
00446725  68 55 29 00 00            PUSH 0x2955
0044672A  68 04 60 7A 00            PUSH 0x7a6004
0044672F  E8 9C 6D 26 00            CALL 0x006ad4d0
00446734  83 C4 18                  ADD ESP,0x18
00446737  85 C0                     TEST EAX,EAX
00446739  74 1F                     JZ 0x0044675a
0044673B  CC                        INT3
LAB_0044673e:
0044673E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00446744  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
0044674A  8D 55 F4                  LEA EDX,[EBP + -0xc]
0044674D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00446750  52                        PUSH EDX
00446751  6A 21                     PUSH 0x21
00446753  8B C8                     MOV ECX,EAX
00446755  E8 CC B9 FB FF            CALL 0x00402126
LAB_0044675a:
0044675A  46                        INC ESI
0044675B  3B F7                     CMP ESI,EDI
0044675D  7C 96                     JL 0x004466f5
LAB_0044675f:
0044675F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00446762  50                        PUSH EAX
00446763  E8 A8 79 26 00            CALL 0x006ae110
00446768  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0044676B  51                        PUSH ECX
0044676C  E8 9F 79 26 00            CALL 0x006ae110
00446771  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00446774  52                        PUSH EDX
00446775  E8 96 79 26 00            CALL 0x006ae110
0044677A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0044677D  53                        PUSH EBX
0044677E  50                        PUSH EAX
0044677F  E8 EC A4 26 00            CALL 0x006b0c70
00446784  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00446787  49                        DEC ECX
00446788  4B                        DEC EBX
00446789  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0044678c:
0044678C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044678F  43                        INC EBX
00446790  3B D8                     CMP EBX,EAX
00446792  0F 8C FB FE FF FF         JL 0x00446693
00446798  85 C0                     TEST EAX,EAX
LAB_0044679a:
0044679A  75 1E                     JNZ 0x004467ba
0044679C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044679F  51                        PUSH ECX
004467A0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004467A3  E8 ED B8 FB FF            CALL 0x00402095
004467A8  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
004467AB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004467B1  5F                        POP EDI
004467B2  5E                        POP ESI
004467B3  5B                        POP EBX
004467B4  8B E5                     MOV ESP,EBP
004467B6  5D                        POP EBP
004467B7  C2 0C 00                  RET 0xc
LAB_004467ba:
004467BA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004467BD  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004467C0  57                        PUSH EDI
004467C1  8B CE                     MOV ECX,ESI
004467C3  E8 35 B0 FB FF            CALL 0x004017fd
004467C8  57                        PUSH EDI
004467C9  8B CE                     MOV ECX,ESI
004467CB  E8 3A A8 FB FF            CALL 0x0040100a
004467D0  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
004467D3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004467D9  5F                        POP EDI
004467DA  5E                        POP ESI
004467DB  5B                        POP EBX
004467DC  8B E5                     MOV ESP,EBP
004467DE  5D                        POP EBP
004467DF  C2 0C 00                  RET 0xc
LAB_004467e2:
004467E2  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
004467E5  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004467EB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004467F0  74 37                     JZ 0x00446829
004467F2  68 B8 83 7A 00            PUSH 0x7a83b8
004467F7  68 CC 4C 7A 00            PUSH 0x7a4ccc
004467FC  6A 00                     PUSH 0x0
004467FE  6A 00                     PUSH 0x0
00446800  68 6D 29 00 00            PUSH 0x296d
00446805  68 04 60 7A 00            PUSH 0x7a6004
0044680A  E8 C1 6C 26 00            CALL 0x006ad4d0
0044680F  83 C4 18                  ADD ESP,0x18
00446812  85 C0                     TEST EAX,EAX
00446814  74 01                     JZ 0x00446817
00446816  CC                        INT3
LAB_00446817:
00446817  68 6E 29 00 00            PUSH 0x296e
0044681C  68 04 60 7A 00            PUSH 0x7a6004
00446821  6A 00                     PUSH 0x0
00446823  56                        PUSH ESI
00446824  E8 17 F6 25 00            CALL 0x006a5e40
LAB_00446829:
00446829  5F                        POP EDI
0044682A  5E                        POP ESI
0044682B  5B                        POP EBX
0044682C  8B E5                     MOV ESP,EBP
0044682E  5D                        POP EBP
0044682F  C2 0C 00                  RET 0xc
