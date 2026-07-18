PlayPanelTy::DonePlayPanel:
0053A380  55                        PUSH EBP
0053A381  8B EC                     MOV EBP,ESP
0053A383  83 EC 4C                  SUB ESP,0x4c
0053A386  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053A38B  53                        PUSH EBX
0053A38C  56                        PUSH ESI
0053A38D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0053A390  33 DB                     XOR EBX,EBX
0053A392  57                        PUSH EDI
0053A393  8D 55 B8                  LEA EDX,[EBP + -0x48]
0053A396  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0053A399  53                        PUSH EBX
0053A39A  52                        PUSH EDX
0053A39B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0053A39E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053A3A4  E8 47 34 1F 00            CALL 0x0072d7f0
0053A3A9  8B F0                     MOV ESI,EAX
0053A3AB  83 C4 08                  ADD ESP,0x8
0053A3AE  3B F3                     CMP ESI,EBX
0053A3B0  0F 85 E2 00 00 00         JNZ 0x0053a498
0053A3B6  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0053A3B9  8B 87 7C 01 00 00         MOV EAX,dword ptr [EDI + 0x17c]
0053A3BF  3B C3                     CMP EAX,EBX
0053A3C1  74 09                     JZ 0x0053a3cc
0053A3C3  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0053A3C6  50                        PUSH EAX
0053A3C7  E8 E4 B2 1A 00            CALL 0x006e56b0
LAB_0053a3cc:
0053A3CC  8B 87 C5 01 00 00         MOV EAX,dword ptr [EDI + 0x1c5]
0053A3D2  89 9F 7C 01 00 00         MOV dword ptr [EDI + 0x17c],EBX
0053A3D8  3B C3                     CMP EAX,EBX
0053A3DA  74 09                     JZ 0x0053a3e5
0053A3DC  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0053A3DF  50                        PUSH EAX
0053A3E0  E8 CB B2 1A 00            CALL 0x006e56b0
LAB_0053a3e5:
0053A3E5  8B 87 C1 01 00 00         MOV EAX,dword ptr [EDI + 0x1c1]
0053A3EB  89 9F C5 01 00 00         MOV dword ptr [EDI + 0x1c5],EBX
0053A3F1  3B C3                     CMP EAX,EBX
0053A3F3  74 09                     JZ 0x0053a3fe
0053A3F5  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0053A3F8  50                        PUSH EAX
0053A3F9  E8 B2 B2 1A 00            CALL 0x006e56b0
LAB_0053a3fe:
0053A3FE  89 9F C1 01 00 00         MOV dword ptr [EDI + 0x1c1],EBX
0053A404  8D B7 81 01 00 00         LEA ESI,[EDI + 0x181]
0053A40A  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_0053a411:
0053A411  BB 08 00 00 00            MOV EBX,0x8
LAB_0053a416:
0053A416  8B 06                     MOV EAX,dword ptr [ESI]
0053A418  85 C0                     TEST EAX,EAX
0053A41A  74 0F                     JZ 0x0053a42b
0053A41C  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0053A41F  50                        PUSH EAX
0053A420  E8 8B B2 1A 00            CALL 0x006e56b0
0053A425  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0053a42b:
0053A42B  83 C6 04                  ADD ESI,0x4
0053A42E  4B                        DEC EBX
0053A42F  75 E5                     JNZ 0x0053a416
0053A431  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053A434  48                        DEC EAX
0053A435  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053A438  75 D7                     JNZ 0x0053a411
0053A43A  8B 87 DD 01 00 00         MOV EAX,dword ptr [EDI + 0x1dd]
0053A440  33 F6                     XOR ESI,ESI
0053A442  3B C6                     CMP EAX,ESI
0053A444  74 0F                     JZ 0x0053a455
0053A446  50                        PUSH EAX
0053A447  E8 14 61 1D 00            CALL 0x00710560
0053A44C  83 C4 04                  ADD ESP,0x4
0053A44F  89 B7 DD 01 00 00         MOV dword ptr [EDI + 0x1dd],ESI
LAB_0053a455:
0053A455  8B 8F CD 01 00 00         MOV ECX,dword ptr [EDI + 0x1cd]
0053A45B  8D 87 CD 01 00 00         LEA EAX,[EDI + 0x1cd]
0053A461  3B CE                     CMP ECX,ESI
0053A463  74 0C                     JZ 0x0053a471
0053A465  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053A46B  50                        PUSH EAX
0053A46C  E8 6F 7C 1B 00            CALL 0x006f20e0
LAB_0053a471:
0053A471  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0053A474  89 B7 D9 01 00 00         MOV dword ptr [EDI + 0x1d9],ESI
0053A47A  89 B7 D5 01 00 00         MOV dword ptr [EDI + 0x1d5],ESI
0053A480  89 B7 D1 01 00 00         MOV dword ptr [EDI + 0x1d1],ESI
0053A486  89 35 E4 16 80 00         MOV dword ptr [0x008016e4],ESI
0053A48C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053A491  5F                        POP EDI
0053A492  5E                        POP ESI
0053A493  5B                        POP EBX
0053A494  8B E5                     MOV ESP,EBP
0053A496  5D                        POP EBP
0053A497  C3                        RET
LAB_0053a498:
0053A498  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0053A49B  68 08 76 7C 00            PUSH 0x7c7608
0053A4A0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053A4A5  56                        PUSH ESI
0053A4A6  53                        PUSH EBX
0053A4A7  68 97 00 00 00            PUSH 0x97
0053A4AC  68 74 75 7C 00            PUSH 0x7c7574
0053A4B1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053A4B7  E8 14 30 17 00            CALL 0x006ad4d0
0053A4BC  83 C4 18                  ADD ESP,0x18
0053A4BF  85 C0                     TEST EAX,EAX
0053A4C1  74 01                     JZ 0x0053a4c4
0053A4C3  CC                        INT3
LAB_0053a4c4:
0053A4C4  68 97 00 00 00            PUSH 0x97
0053A4C9  68 74 75 7C 00            PUSH 0x7c7574
0053A4CE  53                        PUSH EBX
0053A4CF  56                        PUSH ESI
0053A4D0  E8 6B B9 16 00            CALL 0x006a5e40
0053A4D5  5F                        POP EDI
0053A4D6  5E                        POP ESI
0053A4D7  5B                        POP EBX
0053A4D8  8B E5                     MOV ESP,EBP
0053A4DA  5D                        POP EBP
0053A4DB  C3                        RET
