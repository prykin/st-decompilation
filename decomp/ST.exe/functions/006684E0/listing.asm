FltDataPack:
006684E0  55                        PUSH EBP
006684E1  8B EC                     MOV EBP,ESP
006684E3  83 EC 4C                  SUB ESP,0x4c
006684E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006684EB  53                        PUSH EBX
006684EC  56                        PUSH ESI
006684ED  57                        PUSH EDI
006684EE  33 FF                     XOR EDI,EDI
006684F0  8D 55 B8                  LEA EDX,[EBP + -0x48]
006684F3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006684F6  57                        PUSH EDI
006684F7  52                        PUSH EDX
006684F8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006684FB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006684FE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00668501  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00668507  E8 E4 52 0C 00            CALL 0x0072d7f0
0066850C  8B F0                     MOV ESI,EAX
0066850E  83 C4 08                  ADD ESP,0x8
00668511  3B F7                     CMP ESI,EDI
00668513  0F 85 B4 00 00 00         JNZ 0x006685cd
00668519  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0066851C  BA 07 00 00 00            MOV EDX,0x7
00668521  8D 8E EB 01 00 00         LEA ECX,[ESI + 0x1eb]
LAB_00668527:
00668527  8B 01                     MOV EAX,dword ptr [ECX]
00668529  3B C7                     CMP EAX,EDI
0066852B  74 15                     JZ 0x00668542
0066852D  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
00668530  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
00668534  8D 43 1C                  LEA EAX,[EBX + 0x1c]
00668537  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0066853A  03 D8                     ADD EBX,EAX
0066853C  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0066853F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00668542:
00668542  83 C1 0C                  ADD ECX,0xc
00668545  4A                        DEC EDX
00668546  75 DF                     JNZ 0x00668527
00668548  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066854B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0066854E  05 60 02 00 00            ADD EAX,0x260
00668553  50                        PUSH EAX
00668554  89 03                     MOV dword ptr [EBX],EAX
00668556  E8 B5 26 04 00            CALL 0x006aac10
0066855B  B9 98 00 00 00            MOV ECX,0x98
00668560  8B F8                     MOV EDI,EAX
00668562  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00668565  F3 A5                     MOVSD.REP ES:EDI,ESI
00668567  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066856A  8B 0B                     MOV ECX,dword ptr [EBX]
0066856C  33 F6                     XOR ESI,ESI
0066856E  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
00668571  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00668574  C6 40 18 00               MOV byte ptr [EAX + 0x18],0x0
00668578  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066857B  8D B8 5F 02 00 00         LEA EDI,[EAX + 0x25f]
LAB_00668581:
00668581  8B 8C 06 EB 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x1 + 0x1eb]
00668588  85 C9                     TEST ECX,ECX
0066858A  74 29                     JZ 0x006685b5
0066858C  8D 55 F8                  LEA EDX,[EBP + -0x8]
0066858F  52                        PUSH EDX
00668590  57                        PUSH EDI
00668591  51                        PUSH ECX
00668592  E8 29 7A 04 00            CALL 0x006affc0
00668597  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066859A  8B CF                     MOV ECX,EDI
0066859C  2B C8                     SUB ECX,EAX
0066859E  81 E9 5F 02 00 00         SUB ECX,0x25f
006685A4  89 8C 06 EF 01 00 00      MOV dword ptr [ESI + EAX*0x1 + 0x1ef],ECX
006685AB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006685AE  03 BC 06 F3 01 00 00      ADD EDI,dword ptr [ESI + EAX*0x1 + 0x1f3]
LAB_006685b5:
006685B5  83 C6 0C                  ADD ESI,0xc
006685B8  83 FE 54                  CMP ESI,0x54
006685BB  7C C4                     JL 0x00668581
006685BD  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006685C0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006685C6  5F                        POP EDI
006685C7  5E                        POP ESI
006685C8  5B                        POP EBX
006685C9  8B E5                     MOV ESP,EBP
006685CB  5D                        POP EBP
006685CC  C3                        RET
LAB_006685cd:
006685CD  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006685D0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006685D5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006685D8  3B C7                     CMP EAX,EDI
006685DA  74 09                     JZ 0x006685e5
006685DC  8D 4D FC                  LEA ECX,[EBP + -0x4]
006685DF  51                        PUSH ECX
006685E0  E8 7B 2A 04 00            CALL 0x006ab060
LAB_006685e5:
006685E5  68 E4 2C 7D 00            PUSH 0x7d2ce4
006685EA  68 CC 4C 7A 00            PUSH 0x7a4ccc
006685EF  56                        PUSH ESI
006685F0  57                        PUSH EDI
006685F1  6A 75                     PUSH 0x75
006685F3  68 C0 2C 7D 00            PUSH 0x7d2cc0
006685F8  E8 D3 4E 04 00            CALL 0x006ad4d0
006685FD  83 C4 18                  ADD ESP,0x18
00668600  85 C0                     TEST EAX,EAX
00668602  74 01                     JZ 0x00668605
00668604  CC                        INT3
LAB_00668605:
00668605  6A 76                     PUSH 0x76
00668607  68 C0 2C 7D 00            PUSH 0x7d2cc0
0066860C  57                        PUSH EDI
0066860D  56                        PUSH ESI
0066860E  E8 2D D8 03 00            CALL 0x006a5e40
00668613  5F                        POP EDI
00668614  5E                        POP ESI
00668615  33 C0                     XOR EAX,EAX
00668617  5B                        POP EBX
00668618  8B E5                     MOV ESP,EBP
0066861A  5D                        POP EBP
0066861B  C3                        RET
