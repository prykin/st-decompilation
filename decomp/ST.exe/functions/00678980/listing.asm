AiPlrClassTy::InitData:
00678980  55                        PUSH EBP
00678981  8B EC                     MOV EBP,ESP
00678983  83 EC 4C                  SUB ESP,0x4c
00678986  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067898B  53                        PUSH EBX
0067898C  56                        PUSH ESI
0067898D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00678990  57                        PUSH EDI
00678991  8D 55 B8                  LEA EDX,[EBP + -0x48]
00678994  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00678997  6A 00                     PUSH 0x0
00678999  52                        PUSH EDX
0067899A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0067899D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006789A3  E8 48 4E 0B 00            CALL 0x0072d7f0
006789A8  8B F0                     MOV ESI,EAX
006789AA  83 C4 08                  ADD ESP,0x8
006789AD  85 F6                     TEST ESI,ESI
006789AF  0F 85 27 01 00 00         JNZ 0x00678adc
006789B5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006789B8  85 DB                     TEST EBX,EBX
006789BA  74 08                     JZ 0x006789c4
006789BC  8D BB D3 05 00 00         LEA EDI,[EBX + 0x5d3]
006789C2  EB 02                     JMP 0x006789c6
LAB_006789c4:
006789C4  33 FF                     XOR EDI,EDI
LAB_006789c6:
006789C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006789C9  B9 4A 00 00 00            MOV ECX,0x4a
006789CE  8B F0                     MOV ESI,EAX
006789D0  F3 A5                     MOVSD.REP ES:EDI,ESI
006789D2  66 A5                     MOVSW ES:EDI,ESI
006789D4  A4                        MOVSB ES:EDI,ESI
006789D5  8B 8B D1 06 00 00         MOV ECX,dword ptr [EBX + 0x6d1]
006789DB  C7 83 D3 05 00 00 98 03 00 00  MOV dword ptr [EBX + 0x5d3],0x398
006789E5  C6 83 EB 05 00 00 01      MOV byte ptr [EBX + 0x5eb],0x1
006789EC  8D 84 01 2A 01 00 00      LEA EAX,[ECX + EAX*0x1 + 0x12a]
006789F3  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
006789F6  50                        PUSH EAX
006789F7  E8 B5 CA D8 FF            CALL 0x004054b1
006789FC  8D B3 95 06 00 00         LEA ESI,[EBX + 0x695]
00678A02  BF 05 00 00 00            MOV EDI,0x5
00678A07  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_00678a0a:
00678A0A  83 3E 00                  CMP dword ptr [ESI],0x0
00678A0D  74 17                     JZ 0x00678a26
00678A0F  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00678A12  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00678A15  8D 84 02 2A 01 00 00      LEA EAX,[EDX + EAX*0x1 + 0x12a]
00678A1C  50                        PUSH EAX
00678A1D  6A 00                     PUSH 0x0
00678A1F  E8 3C 76 03 00            CALL 0x006b0060
00678A24  89 06                     MOV dword ptr [ESI],EAX
LAB_00678a26:
00678A26  83 C6 0C                  ADD ESI,0xc
00678A29  4F                        DEC EDI
00678A2A  75 DE                     JNZ 0x00678a0a
00678A2C  8B 83 A1 06 00 00         MOV EAX,dword ptr [EBX + 0x6a1]
00678A32  85 C0                     TEST EAX,EAX
00678A34  75 13                     JNZ 0x00678a49
00678A36  6A 05                     PUSH 0x5
00678A38  6A 12                     PUSH 0x12
00678A3A  6A 0A                     PUSH 0xa
00678A3C  6A 00                     PUSH 0x0
00678A3E  E8 4D 58 03 00            CALL 0x006ae290
00678A43  89 83 A1 06 00 00         MOV dword ptr [EBX + 0x6a1],EAX
LAB_00678a49:
00678A49  8B 83 AD 06 00 00         MOV EAX,dword ptr [EBX + 0x6ad]
00678A4F  85 C0                     TEST EAX,EAX
00678A51  75 13                     JNZ 0x00678a66
00678A53  6A 05                     PUSH 0x5
00678A55  6A 1C                     PUSH 0x1c
00678A57  6A 0A                     PUSH 0xa
00678A59  6A 00                     PUSH 0x0
00678A5B  E8 30 58 03 00            CALL 0x006ae290
00678A60  89 83 AD 06 00 00         MOV dword ptr [EBX + 0x6ad],EAX
LAB_00678a66:
00678A66  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00678A69  33 DB                     XOR EBX,EBX
00678A6B  8B 01                     MOV EAX,dword ptr [ECX]
00678A6D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00678A70  85 C9                     TEST ECX,ECX
00678A72  7E 54                     JLE 0x00678ac8
00678A74  3B D9                     CMP EBX,ECX
LAB_00678a76:
00678A76  73 0D                     JNC 0x00678a85
00678A78  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00678A7B  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00678A7E  0F AF F3                  IMUL ESI,EBX
00678A81  03 F1                     ADD ESI,ECX
00678A83  EB 02                     JMP 0x00678a87
LAB_00678a85:
00678A85  33 F6                     XOR ESI,ESI
LAB_00678a87:
00678A87  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00678A8A  85 C0                     TEST EAX,EAX
00678A8C  75 2D                     JNZ 0x00678abb
00678A8E  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00678A91  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00678A94  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00678A97  51                        PUSH ECX
00678A98  8D BC 02 2A 01 00 00      LEA EDI,[EDX + EAX*0x1 + 0x12a]
00678A9F  E8 6C 21 03 00            CALL 0x006aac10
00678AA4  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00678AA7  89 06                     MOV dword ptr [ESI],EAX
00678AA9  8B D1                     MOV EDX,ECX
00678AAB  8B F7                     MOV ESI,EDI
00678AAD  8B F8                     MOV EDI,EAX
00678AAF  C1 E9 02                  SHR ECX,0x2
00678AB2  F3 A5                     MOVSD.REP ES:EDI,ESI
00678AB4  8B CA                     MOV ECX,EDX
00678AB6  83 E1 03                  AND ECX,0x3
00678AB9  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00678abb:
00678ABB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00678ABE  43                        INC EBX
00678ABF  8B 00                     MOV EAX,dword ptr [EAX]
00678AC1  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00678AC4  3B D9                     CMP EBX,ECX
00678AC6  7C AE                     JL 0x00678a76
LAB_00678ac8:
00678AC8  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00678ACB  33 C0                     XOR EAX,EAX
00678ACD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00678AD3  5F                        POP EDI
00678AD4  5E                        POP ESI
00678AD5  5B                        POP EBX
00678AD6  8B E5                     MOV ESP,EBP
00678AD8  5D                        POP EBP
00678AD9  C2 04 00                  RET 0x4
LAB_00678adc:
00678ADC  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00678ADF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00678AE2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00678AE8  E8 71 BD D8 FF            CALL 0x0040485e
00678AED  68 6C 2E 7D 00            PUSH 0x7d2e6c
00678AF2  68 CC 4C 7A 00            PUSH 0x7a4ccc
00678AF7  56                        PUSH ESI
00678AF8  6A 00                     PUSH 0x0
00678AFA  6A 3C                     PUSH 0x3c
00678AFC  68 4C 2E 7D 00            PUSH 0x7d2e4c
00678B01  E8 CA 49 03 00            CALL 0x006ad4d0
00678B06  83 C4 18                  ADD ESP,0x18
00678B09  85 C0                     TEST EAX,EAX
00678B0B  74 01                     JZ 0x00678b0e
00678B0D  CC                        INT3
LAB_00678b0e:
00678B0E  6A 3D                     PUSH 0x3d
00678B10  68 4C 2E 7D 00            PUSH 0x7d2e4c
00678B15  6A 00                     PUSH 0x0
00678B17  56                        PUSH ESI
00678B18  E8 23 D3 02 00            CALL 0x006a5e40
00678B1D  8B C6                     MOV EAX,ESI
00678B1F  5F                        POP EDI
00678B20  5E                        POP ESI
00678B21  5B                        POP EBX
00678B22  8B E5                     MOV ESP,EBP
00678B24  5D                        POP EBP
00678B25  C2 04 00                  RET 0x4
