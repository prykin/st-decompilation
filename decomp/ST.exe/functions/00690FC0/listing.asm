FUN_00690fc0:
00690FC0  55                        PUSH EBP
00690FC1  8B EC                     MOV EBP,ESP
00690FC3  83 EC 50                  SUB ESP,0x50
00690FC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00690FCB  53                        PUSH EBX
00690FCC  56                        PUSH ESI
00690FCD  57                        PUSH EDI
00690FCE  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00690FD1  8D 4D B0                  LEA ECX,[EBP + -0x50]
00690FD4  6A 00                     PUSH 0x0
00690FD6  52                        PUSH EDX
00690FD7  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00690FDE  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00690FE1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00690FE7  E8 04 C8 09 00            CALL 0x0072d7f0
00690FEC  8B F0                     MOV ESI,EAX
00690FEE  83 C4 08                  ADD ESP,0x8
00690FF1  85 F6                     TEST ESI,ESI
00690FF3  0F 85 0A 01 00 00         JNZ 0x00691103
00690FF9  68 0C 01 00 00            PUSH 0x10c
00690FFE  E8 0D 9C 01 00            CALL 0x006aac10
00691003  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00691006  B9 43 00 00 00            MOV ECX,0x43
0069100B  8B F3                     MOV ESI,EBX
0069100D  8B F8                     MOV EDI,EAX
0069100F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00691012  F3 A5                     MOVSD.REP ES:EDI,ESI
00691014  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00691017  33 FF                     XOR EDI,EDI
00691019  33 F6                     XOR ESI,ESI
0069101B  C7 40 14 0C 01 00 00      MOV dword ptr [EAX + 0x14],0x10c
00691022  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00691025  C6 41 18 02               MOV byte ptr [ECX + 0x18],0x2
00691029  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0069102c:
0069102C  39 BC 06 85 00 00 00      CMP dword ptr [ESI + EAX*0x1 + 0x85],EDI
00691033  74 22                     JZ 0x00691057
00691035  8B 94 06 89 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x1 + 0x89]
0069103C  8D 84 1A 0B 01 00 00      LEA EAX,[EDX + EBX*0x1 + 0x10b]
00691043  50                        PUSH EAX
00691044  57                        PUSH EDI
00691045  E8 16 F0 01 00            CALL 0x006b0060
0069104A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069104D  89 84 0E 85 00 00 00      MOV dword ptr [ESI + ECX*0x1 + 0x85],EAX
00691054  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00691057:
00691057  83 C6 0C                  ADD ESI,0xc
0069105A  83 FE 60                  CMP ESI,0x60
0069105D  7C CD                     JL 0x0069102c
0069105F  39 B8 85 00 00 00         CMP dword ptr [EAX + 0x85],EDI
00691065  75 18                     JNZ 0x0069107f
00691067  6A 0A                     PUSH 0xa
00691069  6A 08                     PUSH 0x8
0069106B  6A 0A                     PUSH 0xa
0069106D  57                        PUSH EDI
0069106E  E8 1D D2 01 00            CALL 0x006ae290
00691073  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00691076  89 82 85 00 00 00         MOV dword ptr [EDX + 0x85],EAX
0069107C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0069107f:
0069107F  66 39 B8 05 01 00 00      CMP word ptr [EAX + 0x105],DI
00691086  7E 6B                     JLE 0x006910f3
00691088  8B 80 85 00 00 00         MOV EAX,dword ptr [EAX + 0x85]
0069108E  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
00691091  8B 8B 07 01 00 00         MOV ECX,dword ptr [EBX + 0x107]
00691097  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069109A  8D B4 19 0B 01 00 00      LEA ESI,[ECX + EBX*0x1 + 0x10b]
006910A1  33 DB                     XOR EBX,EBX
006910A3  66 39 B8 05 01 00 00      CMP word ptr [EAX + 0x105],DI
006910AA  7E 47                     JLE 0x006910f3
LAB_006910ac:
006910AC  33 D2                     XOR EDX,EDX
006910AE  56                        PUSH ESI
006910AF  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006910B2  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006910B5  E8 ED 1B D7 FF            CALL 0x00402ca7
006910BA  83 C4 04                  ADD ESP,0x4
006910BD  3B C7                     CMP EAX,EDI
006910BF  74 08                     JZ 0x006910c9
006910C1  83 C0 E0                  ADD EAX,-0x20
006910C4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006910C7  EB 03                     JMP 0x006910cc
LAB_006910c9:
006910C9  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_006910cc:
006910CC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006910CF  8D 45 F4                  LEA EAX,[EBP + -0xc]
006910D2  50                        PUSH EAX
006910D3  8B 91 85 00 00 00         MOV EDX,dword ptr [ECX + 0x85]
006910D9  52                        PUSH EDX
006910DA  E8 E1 D0 01 00            CALL 0x006ae1c0
006910DF  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006910E2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006910E5  03 F1                     ADD ESI,ECX
006910E7  43                        INC EBX
006910E8  0F BF 88 05 01 00 00      MOVSX ECX,word ptr [EAX + 0x105]
006910EF  3B D9                     CMP EBX,ECX
006910F1  7C B9                     JL 0x006910ac
LAB_006910f3:
006910F3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006910F6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006910FC  5F                        POP EDI
006910FD  5E                        POP ESI
006910FE  5B                        POP EBX
006910FF  8B E5                     MOV ESP,EBP
00691101  5D                        POP EBP
00691102  C3                        RET
LAB_00691103:
00691103  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00691106  8D 4D FC                  LEA ECX,[EBP + -0x4]
00691109  51                        PUSH ECX
0069110A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0069110F  E8 EC 1C D7 FF            CALL 0x00402e00
00691114  83 C4 04                  ADD ESP,0x4
00691117  6A 51                     PUSH 0x51
00691119  68 FC 58 7D 00            PUSH 0x7d58fc
0069111E  6A 00                     PUSH 0x0
00691120  56                        PUSH ESI
00691121  E8 1A 4D 01 00            CALL 0x006a5e40
00691126  5F                        POP EDI
00691127  5E                        POP ESI
00691128  33 C0                     XOR EAX,EAX
0069112A  5B                        POP EBX
0069112B  8B E5                     MOV ESP,EBP
0069112D  5D                        POP EBP
0069112E  C3                        RET
