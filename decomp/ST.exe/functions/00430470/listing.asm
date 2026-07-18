STAllPlayersC::RegisterTorpedo:
00430470  55                        PUSH EBP
00430471  8B EC                     MOV EBP,ESP
00430473  83 EC 48                  SUB ESP,0x48
00430476  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0043047B  56                        PUSH ESI
0043047C  57                        PUSH EDI
0043047D  8D 55 BC                  LEA EDX,[EBP + -0x44]
00430480  8D 4D B8                  LEA ECX,[EBP + -0x48]
00430483  6A 00                     PUSH 0x0
00430485  52                        PUSH EDX
00430486  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00430489  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043048F  E8 5C D3 2F 00            CALL 0x0072d7f0
00430494  8B F0                     MOV ESI,EAX
00430496  83 C4 08                  ADD ESP,0x8
00430499  85 F6                     TEST ESI,ESI
0043049B  0F 85 C8 00 00 00         JNZ 0x00430569
004304A1  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
004304A5  66 3D FF FF               CMP AX,0xffff
004304A9  75 54                     JNZ 0x004304ff
004304AB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004304AE  85 C0                     TEST EAX,EAX
004304B0  75 1A                     JNZ 0x004304cc
004304B2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004304B7  68 E2 07 00 00            PUSH 0x7e2
004304BC  68 04 60 7A 00            PUSH 0x7a6004
004304C1  50                        PUSH EAX
004304C2  68 04 00 FE AF            PUSH 0xaffe0004
004304C7  E8 74 59 27 00            CALL 0x006a5e40
LAB_004304cc:
004304CC  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
004304D2  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
004304D5  85 F6                     TEST ESI,ESI
004304D7  76 61                     JBE 0x0043053a
004304D9  8D 7E FF                  LEA EDI,[ESI + -0x1]
004304DC  85 FF                     TEST EDI,EDI
004304DE  7C 5A                     JL 0x0043053a
LAB_004304e0:
004304E0  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
004304E6  8D 55 FC                  LEA EDX,[EBP + -0x4]
004304E9  52                        PUSH EDX
004304EA  8B D7                     MOV EDX,EDI
004304EC  E8 7F C7 27 00            CALL 0x006acc70
004304F1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004304F4  85 C0                     TEST EAX,EAX
004304F6  75 02                     JNZ 0x004304fa
004304F8  8B F7                     MOV ESI,EDI
LAB_004304fa:
004304FA  4F                        DEC EDI
004304FB  79 E3                     JNS 0x004304e0
004304FD  EB 3B                     JMP 0x0043053a
LAB_004304ff:
004304FF  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
00430505  0F BF F0                  MOVSX ESI,AX
00430508  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
0043050B  73 2D                     JNC 0x0043053a
0043050D  8D 45 FC                  LEA EAX,[EBP + -0x4]
00430510  8B D6                     MOV EDX,ESI
00430512  50                        PUSH EAX
00430513  E8 58 C7 27 00            CALL 0x006acc70
00430518  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043051B  85 C0                     TEST EAX,EAX
0043051D  74 1B                     JZ 0x0043053a
0043051F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00430525  68 F0 07 00 00            PUSH 0x7f0
0043052A  68 04 60 7A 00            PUSH 0x7a6004
0043052F  51                        PUSH ECX
00430530  68 06 00 FE AF            PUSH 0xaffe0006
00430535  E8 06 59 27 00            CALL 0x006a5e40
LAB_0043053a:
0043053A  A1 30 A1 7F 00            MOV EAX,[0x007fa130]
0043053F  8D 55 08                  LEA EDX,[EBP + 0x8]
00430542  52                        PUSH EDX
00430543  56                        PUSH ESI
00430544  50                        PUSH EAX
00430545  E8 F6 DB 27 00            CALL 0x006ae140
0043054A  A1 34 A1 7F 00            MOV EAX,[0x007fa134]
0043054F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00430552  40                        INC EAX
00430553  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00430559  A3 34 A1 7F 00            MOV [0x007fa134],EAX
0043055E  66 8B C6                  MOV AX,SI
00430561  5F                        POP EDI
00430562  5E                        POP ESI
00430563  8B E5                     MOV ESP,EBP
00430565  5D                        POP EBP
00430566  C2 08 00                  RET 0x8
LAB_00430569:
00430569  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0043056C  68 18 67 7A 00            PUSH 0x7a6718
00430571  68 CC 4C 7A 00            PUSH 0x7a4ccc
00430576  56                        PUSH ESI
00430577  6A 00                     PUSH 0x0
00430579  68 F6 07 00 00            PUSH 0x7f6
0043057E  68 04 60 7A 00            PUSH 0x7a6004
00430583  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00430589  E8 42 CF 27 00            CALL 0x006ad4d0
0043058E  83 C4 18                  ADD ESP,0x18
00430591  85 C0                     TEST EAX,EAX
00430593  74 01                     JZ 0x00430596
00430595  CC                        INT3
LAB_00430596:
00430596  68 F7 07 00 00            PUSH 0x7f7
0043059B  68 04 60 7A 00            PUSH 0x7a6004
004305A0  6A 00                     PUSH 0x0
004305A2  56                        PUSH ESI
004305A3  E8 98 58 27 00            CALL 0x006a5e40
004305A8  5F                        POP EDI
004305A9  66 0D FF FF               OR AX,0xffff
004305AD  5E                        POP ESI
004305AE  8B E5                     MOV ESP,EBP
004305B0  5D                        POP EBP
004305B1  C2 08 00                  RET 0x8
