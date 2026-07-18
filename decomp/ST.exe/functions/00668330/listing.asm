FUN_00668330:
00668330  55                        PUSH EBP
00668331  8B EC                     MOV EBP,ESP
00668333  83 EC 48                  SUB ESP,0x48
00668336  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0066833B  53                        PUSH EBX
0066833C  56                        PUSH ESI
0066833D  57                        PUSH EDI
0066833E  8D 55 BC                  LEA EDX,[EBP + -0x44]
00668341  8D 4D B8                  LEA ECX,[EBP + -0x48]
00668344  6A 00                     PUSH 0x0
00668346  52                        PUSH EDX
00668347  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0066834E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00668351  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00668357  E8 94 54 0C 00            CALL 0x0072d7f0
0066835C  8B F0                     MOV ESI,EAX
0066835E  83 C4 08                  ADD ESP,0x8
00668361  85 F6                     TEST ESI,ESI
00668363  0F 85 E0 00 00 00         JNZ 0x00668449
00668369  68 60 02 00 00            PUSH 0x260
0066836E  E8 9D 28 04 00            CALL 0x006aac10
00668373  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00668376  B9 98 00 00 00            MOV ECX,0x98
0066837B  8B F3                     MOV ESI,EBX
0066837D  8B F8                     MOV EDI,EAX
0066837F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00668382  F3 A5                     MOVSD.REP ES:EDI,ESI
00668384  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00668387  33 F6                     XOR ESI,ESI
00668389  C7 40 14 60 02 00 00      MOV dword ptr [EAX + 0x14],0x260
00668390  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00668393  C6 41 18 02               MOV byte ptr [ECX + 0x18],0x2
00668397  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0066839a:
0066839A  8B 8C 06 EB 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x1 + 0x1eb]
006683A1  85 C9                     TEST ECX,ECX
006683A3  74 23                     JZ 0x006683c8
006683A5  8B 94 06 EF 01 00 00      MOV EDX,dword ptr [ESI + EAX*0x1 + 0x1ef]
006683AC  8D 84 1A 5F 02 00 00      LEA EAX,[EDX + EBX*0x1 + 0x25f]
006683B3  50                        PUSH EAX
006683B4  6A 00                     PUSH 0x0
006683B6  E8 A5 7C 04 00            CALL 0x006b0060
006683BB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006683BE  89 84 0E EB 01 00 00      MOV dword ptr [ESI + ECX*0x1 + 0x1eb],EAX
006683C5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006683c8:
006683C8  83 C6 0C                  ADD ESI,0xc
006683CB  83 FE 54                  CMP ESI,0x54
006683CE  7C CA                     JL 0x0066839a
006683D0  8B 88 EB 01 00 00         MOV ECX,dword ptr [EAX + 0x1eb]
006683D6  85 C9                     TEST ECX,ECX
006683D8  75 19                     JNZ 0x006683f3
006683DA  6A 0A                     PUSH 0xa
006683DC  6A 2C                     PUSH 0x2c
006683DE  6A 0A                     PUSH 0xa
006683E0  6A 00                     PUSH 0x0
006683E2  E8 A9 5E 04 00            CALL 0x006ae290
006683E7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006683EA  89 82 EB 01 00 00         MOV dword ptr [EDX + 0x1eb],EAX
006683F0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006683f3:
006683F3  8B 88 03 02 00 00         MOV ECX,dword ptr [EAX + 0x203]
006683F9  85 C9                     TEST ECX,ECX
006683FB  75 19                     JNZ 0x00668416
006683FD  6A 0A                     PUSH 0xa
006683FF  6A 14                     PUSH 0x14
00668401  6A 0A                     PUSH 0xa
00668403  6A 00                     PUSH 0x0
00668405  E8 86 5E 04 00            CALL 0x006ae290
0066840A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066840D  89 81 03 02 00 00         MOV dword ptr [ECX + 0x203],EAX
00668413  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00668416:
00668416  8B 88 0F 02 00 00         MOV ECX,dword ptr [EAX + 0x20f]
0066841C  85 C9                     TEST ECX,ECX
0066841E  75 19                     JNZ 0x00668439
00668420  6A 0A                     PUSH 0xa
00668422  6A 0C                     PUSH 0xc
00668424  6A 0A                     PUSH 0xa
00668426  6A 00                     PUSH 0x0
00668428  E8 63 5E 04 00            CALL 0x006ae290
0066842D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00668430  89 82 0F 02 00 00         MOV dword ptr [EDX + 0x20f],EAX
00668436  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00668439:
00668439  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0066843C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00668442  5F                        POP EDI
00668443  5E                        POP ESI
00668444  5B                        POP EBX
00668445  8B E5                     MOV ESP,EBP
00668447  5D                        POP EBP
00668448  C3                        RET
LAB_00668449:
00668449  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0066844C  8D 45 FC                  LEA EAX,[EBP + -0x4]
0066844F  50                        PUSH EAX
00668450  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00668456  E8 72 D7 D9 FF            CALL 0x00405bcd
0066845B  83 C4 04                  ADD ESP,0x4
0066845E  6A 4E                     PUSH 0x4e
00668460  68 C0 2C 7D 00            PUSH 0x7d2cc0
00668465  6A 00                     PUSH 0x0
00668467  56                        PUSH ESI
00668468  E8 D3 D9 03 00            CALL 0x006a5e40
0066846D  5F                        POP EDI
0066846E  5E                        POP ESI
0066846F  33 C0                     XOR EAX,EAX
00668471  5B                        POP EBX
00668472  8B E5                     MOV ESP,EBP
00668474  5D                        POP EBP
00668475  C3                        RET
