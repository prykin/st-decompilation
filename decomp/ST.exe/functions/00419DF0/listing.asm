STGameObjC::SetSelfCheckFlag:
00419DF0  53                        PUSH EBX
00419DF1  8B D9                     MOV EBX,ECX
00419DF3  56                        PUSH ESI
00419DF4  57                        PUSH EDI
00419DF5  8B 83 CD 01 00 00         MOV EAX,dword ptr [EBX + 0x1cd]
00419DFB  83 F8 01                  CMP EAX,0x1
00419DFE  0F 84 B7 06 00 00         JZ 0x0041a4bb
00419E04  33 F6                     XOR ESI,ESI
00419E06  3B C6                     CMP EAX,ESI
00419E08  0F 85 47 02 00 00         JNZ 0x0041a055
00419E0E  6A 36                     PUSH 0x36
00419E10  C7 83 CD 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1cd],0x1
00419E1A  E8 51 0E 29 00            CALL 0x006aac70
00419E1F  6A 36                     PUSH 0x36
00419E21  89 83 1D 01 00 00         MOV dword ptr [EBX + 0x11d],EAX
00419E27  E8 44 0E 29 00            CALL 0x006aac70
00419E2C  6A 5C                     PUSH 0x5c
00419E2E  89 83 21 01 00 00         MOV dword ptr [EBX + 0x121],EAX
00419E34  E8 37 0E 29 00            CALL 0x006aac70
00419E39  6A 5C                     PUSH 0x5c
00419E3B  89 83 25 01 00 00         MOV dword ptr [EBX + 0x125],EAX
00419E41  E8 2A 0E 29 00            CALL 0x006aac70
00419E46  89 83 29 01 00 00         MOV dword ptr [EBX + 0x129],EAX
00419E4C  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
00419E4F  3D AE 01 00 00            CMP EAX,0x1ae
00419E54  0F 87 F9 00 00 00         JA 0x00419f53
00419E5A  0F 84 BA 00 00 00         JZ 0x00419f1a
00419E60  3D 72 01 00 00            CMP EAX,0x172
00419E65  0F 87 A2 00 00 00         JA 0x00419f0d
00419E6B  0F 84 E4 01 00 00         JZ 0x0041a055
00419E71  83 F8 14                  CMP EAX,0x14
00419E74  74 0E                     JZ 0x00419e84
00419E76  83 F8 5A                  CMP EAX,0x5a
00419E79  0F 84 D6 01 00 00         JZ 0x0041a055
00419E7F  E9 E8 00 00 00            JMP 0x00419f6c
LAB_00419e84:
00419E84  8D 8B 5D 01 00 00         LEA ECX,[EBX + 0x15d]
00419E8A  33 C0                     XOR EAX,EAX
00419E8C  33 D2                     XOR EDX,EDX
00419E8E  6A 13                     PUSH 0x13
00419E90  89 01                     MOV dword ptr [ECX],EAX
00419E92  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00419E95  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00419E98  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00419E9B  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
00419E9E  8D 83 71 01 00 00         LEA EAX,[EBX + 0x171]
00419EA4  89 93 71 01 00 00         MOV dword ptr [EBX + 0x171],EDX
00419EAA  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00419EAD  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00419EB0  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00419EB3  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
00419EB6  E8 B5 0D 29 00            CALL 0x006aac70
00419EBB  6A 13                     PUSH 0x13
00419EBD  89 83 95 01 00 00         MOV dword ptr [EBX + 0x195],EAX
00419EC3  E8 A8 0D 29 00            CALL 0x006aac70
00419EC8  6A 0B                     PUSH 0xb
00419ECA  89 83 99 01 00 00         MOV dword ptr [EBX + 0x199],EAX
00419ED0  E8 9B 0D 29 00            CALL 0x006aac70
00419ED5  6A 0B                     PUSH 0xb
00419ED7  89 83 AD 01 00 00         MOV dword ptr [EBX + 0x1ad],EAX
00419EDD  E8 8E 0D 29 00            CALL 0x006aac70
00419EE2  68 40 02 00 00            PUSH 0x240
00419EE7  89 83 B1 01 00 00         MOV dword ptr [EBX + 0x1b1],EAX
00419EED  E8 7E 0D 29 00            CALL 0x006aac70
00419EF2  68 40 02 00 00            PUSH 0x240
00419EF7  89 83 BD 01 00 00         MOV dword ptr [EBX + 0x1bd],EAX
00419EFD  E8 6E 0D 29 00            CALL 0x006aac70
00419F02  89 83 C1 01 00 00         MOV dword ptr [EBX + 0x1c1],EAX
00419F08  E9 48 01 00 00            JMP 0x0041a055
LAB_00419f0d:
00419F0D  3D A4 01 00 00            CMP EAX,0x1a4
00419F12  0F 84 3D 01 00 00         JZ 0x0041a055
00419F18  EB 52                     JMP 0x00419f6c
LAB_00419f1a:
00419F1A  6A 0B                     PUSH 0xb
00419F1C  E8 4F 0D 29 00            CALL 0x006aac70
00419F21  6A 0B                     PUSH 0xb
00419F23  89 83 AD 01 00 00         MOV dword ptr [EBX + 0x1ad],EAX
00419F29  E8 42 0D 29 00            CALL 0x006aac70
00419F2E  6A 06                     PUSH 0x6
00419F30  89 83 B1 01 00 00         MOV dword ptr [EBX + 0x1b1],EAX
00419F36  E8 35 0D 29 00            CALL 0x006aac70
00419F3B  6A 06                     PUSH 0x6
00419F3D  89 83 C5 01 00 00         MOV dword ptr [EBX + 0x1c5],EAX
00419F43  E8 28 0D 29 00            CALL 0x006aac70
00419F48  89 83 C9 01 00 00         MOV dword ptr [EBX + 0x1c9],EAX
00419F4E  E9 02 01 00 00            JMP 0x0041a055
LAB_00419f53:
00419F53  2D B8 01 00 00            SUB EAX,0x1b8
00419F58  0F 84 F7 00 00 00         JZ 0x0041a055
00419F5E  2D 30 02 00 00            SUB EAX,0x230
00419F63  74 32                     JZ 0x00419f97
00419F65  48                        DEC EAX
00419F66  0F 84 E9 00 00 00         JZ 0x0041a055
LAB_00419f6c:
00419F6C  68 58 4E 7A 00            PUSH 0x7a4e58
00419F71  68 CC 4C 7A 00            PUSH 0x7a4ccc
00419F76  56                        PUSH ESI
00419F77  56                        PUSH ESI
00419F78  68 4D 05 00 00            PUSH 0x54d
00419F7D  68 0C 4E 7A 00            PUSH 0x7a4e0c
00419F82  E8 49 35 29 00            CALL 0x006ad4d0
00419F87  83 C4 18                  ADD ESP,0x18
00419F8A  85 C0                     TEST EAX,EAX
00419F8C  0F 84 29 05 00 00         JZ 0x0041a4bb
00419F92  CC                        INT3
LAB_00419f97:
00419F97  8D 93 2D 01 00 00         LEA EDX,[EBX + 0x12d]
00419F9D  33 C9                     XOR ECX,ECX
00419F9F  33 C0                     XOR EAX,EAX
00419FA1  68 29 01 00 00            PUSH 0x129
00419FA6  89 0A                     MOV dword ptr [EDX],ECX
00419FA8  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00419FAB  8D 8B 35 01 00 00         LEA ECX,[EBX + 0x135]
00419FB1  33 D2                     XOR EDX,EDX
00419FB3  89 01                     MOV dword ptr [ECX],EAX
00419FB5  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00419FB8  8D 83 3D 01 00 00         LEA EAX,[EBX + 0x13d]
00419FBE  33 C9                     XOR ECX,ECX
00419FC0  89 10                     MOV dword ptr [EAX],EDX
00419FC2  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00419FC5  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00419FC8  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00419FCB  8D 93 4D 01 00 00         LEA EDX,[EBX + 0x14d]
00419FD1  89 8B 4D 01 00 00         MOV dword ptr [EBX + 0x14d],ECX
00419FD7  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00419FDA  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00419FDD  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
00419FE0  E8 8B 0C 29 00            CALL 0x006aac70
00419FE5  68 29 01 00 00            PUSH 0x129
00419FEA  89 83 85 01 00 00         MOV dword ptr [EBX + 0x185],EAX
00419FF0  E8 7B 0C 29 00            CALL 0x006aac70
00419FF5  6A 10                     PUSH 0x10
00419FF7  89 83 89 01 00 00         MOV dword ptr [EBX + 0x189],EAX
00419FFD  E8 6E 0C 29 00            CALL 0x006aac70
0041A002  6A 10                     PUSH 0x10
0041A004  89 83 8D 01 00 00         MOV dword ptr [EBX + 0x18d],EAX
0041A00A  E8 61 0C 29 00            CALL 0x006aac70
0041A00F  6A 0C                     PUSH 0xc
0041A011  89 83 91 01 00 00         MOV dword ptr [EBX + 0x191],EAX
0041A017  89 B3 9D 01 00 00         MOV dword ptr [EBX + 0x19d],ESI
0041A01D  89 B3 A1 01 00 00         MOV dword ptr [EBX + 0x1a1],ESI
0041A023  E8 48 0C 29 00            CALL 0x006aac70
0041A028  6A 0C                     PUSH 0xc
0041A02A  89 83 A5 01 00 00         MOV dword ptr [EBX + 0x1a5],EAX
0041A030  E8 3B 0C 29 00            CALL 0x006aac70
0041A035  6A 0B                     PUSH 0xb
0041A037  89 83 A9 01 00 00         MOV dword ptr [EBX + 0x1a9],EAX
0041A03D  E8 2E 0C 29 00            CALL 0x006aac70
0041A042  6A 0B                     PUSH 0xb
0041A044  89 83 B5 01 00 00         MOV dword ptr [EBX + 0x1b5],EAX
0041A04A  E8 21 0C 29 00            CALL 0x006aac70
0041A04F  89 83 B9 01 00 00         MOV dword ptr [EBX + 0x1b9],EAX
LAB_0041a055:
0041A055  8B 8B 21 01 00 00         MOV ECX,dword ptr [EBX + 0x121]
0041A05B  8B 03                     MOV EAX,dword ptr [EBX]
0041A05D  51                        PUSH ECX
0041A05E  8B CB                     MOV ECX,EBX
0041A060  FF 50 30                  CALL dword ptr [EAX + 0x30]
0041A063  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
0041A069  8B BB 1D 01 00 00         MOV EDI,dword ptr [EBX + 0x11d]
0041A06F  B9 0D 00 00 00            MOV ECX,0xd
0041A074  F3 A5                     MOVSD.REP ES:EDI,ESI
0041A076  66 A5                     MOVSW ES:EDI,ESI
0041A078  8B 83 29 01 00 00         MOV EAX,dword ptr [EBX + 0x129]
0041A07E  8B 13                     MOV EDX,dword ptr [EBX]
0041A080  50                        PUSH EAX
0041A081  8B CB                     MOV ECX,EBX
0041A083  FF 52 34                  CALL dword ptr [EDX + 0x34]
0041A086  8B B3 29 01 00 00         MOV ESI,dword ptr [EBX + 0x129]
0041A08C  8B BB 25 01 00 00         MOV EDI,dword ptr [EBX + 0x125]
0041A092  B9 17 00 00 00            MOV ECX,0x17
0041A097  F3 A5                     MOVSD.REP ES:EDI,ESI
0041A099  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0041A09C  3D AE 01 00 00            CMP EAX,0x1ae
0041A0A1  0F 87 E9 01 00 00         JA 0x0041a290
0041A0A7  0F 84 87 01 00 00         JZ 0x0041a234
0041A0AD  3D 72 01 00 00            CMP EAX,0x172
0041A0B2  0F 87 6F 01 00 00         JA 0x0041a227
0041A0B8  0F 84 FD 03 00 00         JZ 0x0041a4bb
0041A0BE  83 F8 14                  CMP EAX,0x14
0041A0C1  74 0E                     JZ 0x0041a0d1
0041A0C3  83 F8 5A                  CMP EAX,0x5a
0041A0C6  0F 84 EF 03 00 00         JZ 0x0041a4bb
0041A0CC  E9 D8 01 00 00            JMP 0x0041a2a9
LAB_0041a0d1:
0041A0D1  8B 83 71 01 00 00         MOV EAX,dword ptr [EBX + 0x171]
0041A0D7  8D B3 71 01 00 00         LEA ESI,[EBX + 0x171]
0041A0DD  85 C0                     TEST EAX,EAX
0041A0DF  74 06                     JZ 0x0041a0e7
0041A0E1  50                        PUSH EAX
0041A0E2  E8 29 40 29 00            CALL 0x006ae110
LAB_0041a0e7:
0041A0E7  8B 83 75 01 00 00         MOV EAX,dword ptr [EBX + 0x175]
0041A0ED  85 C0                     TEST EAX,EAX
0041A0EF  74 06                     JZ 0x0041a0f7
0041A0F1  50                        PUSH EAX
0041A0F2  E8 19 40 29 00            CALL 0x006ae110
LAB_0041a0f7:
0041A0F7  8B 83 79 01 00 00         MOV EAX,dword ptr [EBX + 0x179]
0041A0FD  85 C0                     TEST EAX,EAX
0041A0FF  74 06                     JZ 0x0041a107
0041A101  50                        PUSH EAX
0041A102  E8 09 40 29 00            CALL 0x006ae110
LAB_0041a107:
0041A107  8B 83 7D 01 00 00         MOV EAX,dword ptr [EBX + 0x17d]
0041A10D  85 C0                     TEST EAX,EAX
0041A10F  74 06                     JZ 0x0041a117
0041A111  50                        PUSH EAX
0041A112  E8 F9 3F 29 00            CALL 0x006ae110
LAB_0041a117:
0041A117  8B 83 81 01 00 00         MOV EAX,dword ptr [EBX + 0x181]
0041A11D  85 C0                     TEST EAX,EAX
0041A11F  74 06                     JZ 0x0041a127
0041A121  50                        PUSH EAX
0041A122  E8 E9 3F 29 00            CALL 0x006ae110
LAB_0041a127:
0041A127  8B D6                     MOV EDX,ESI
0041A129  33 C9                     XOR ECX,ECX
0041A12B  56                        PUSH ESI
0041A12C  89 0A                     MOV dword ptr [EDX],ECX
0041A12E  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0041A131  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0041A134  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0041A137  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
0041A13A  8B 03                     MOV EAX,dword ptr [EBX]
0041A13C  8B CB                     MOV ECX,EBX
0041A13E  FF 50 40                  CALL dword ptr [EAX + 0x40]
0041A141  8B 16                     MOV EDX,dword ptr [ESI]
0041A143  8D 8B 5D 01 00 00         LEA ECX,[EBX + 0x15d]
0041A149  E8 F2 5C 29 00            CALL 0x006afe40
0041A14E  8B 93 75 01 00 00         MOV EDX,dword ptr [EBX + 0x175]
0041A154  8D 8B 61 01 00 00         LEA ECX,[EBX + 0x161]
0041A15A  E8 E1 5C 29 00            CALL 0x006afe40
0041A15F  8B 93 79 01 00 00         MOV EDX,dword ptr [EBX + 0x179]
0041A165  8D 8B 65 01 00 00         LEA ECX,[EBX + 0x165]
0041A16B  E8 D0 5C 29 00            CALL 0x006afe40
0041A170  8B 93 7D 01 00 00         MOV EDX,dword ptr [EBX + 0x17d]
0041A176  8D 8B 69 01 00 00         LEA ECX,[EBX + 0x169]
0041A17C  E8 BF 5C 29 00            CALL 0x006afe40
0041A181  8B 93 81 01 00 00         MOV EDX,dword ptr [EBX + 0x181]
0041A187  8D 8B 6D 01 00 00         LEA ECX,[EBX + 0x16d]
0041A18D  E8 AE 5C 29 00            CALL 0x006afe40
0041A192  8B 83 99 01 00 00         MOV EAX,dword ptr [EBX + 0x199]
0041A198  8B 13                     MOV EDX,dword ptr [EBX]
0041A19A  50                        PUSH EAX
0041A19B  8B CB                     MOV ECX,EBX
0041A19D  FF 52 4C                  CALL dword ptr [EDX + 0x4c]
0041A1A0  8B 8B 99 01 00 00         MOV ECX,dword ptr [EBX + 0x199]
0041A1A6  8B 93 95 01 00 00         MOV EDX,dword ptr [EBX + 0x195]
0041A1AC  8B 01                     MOV EAX,dword ptr [ECX]
0041A1AE  89 02                     MOV dword ptr [EDX],EAX
0041A1B0  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0041A1B3  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0041A1B6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0041A1B9  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0041A1BC  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0041A1BF  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
0041A1C2  66 8B 41 10               MOV AX,word ptr [ECX + 0x10]
0041A1C6  66 89 42 10               MOV word ptr [EDX + 0x10],AX
0041A1CA  8A 49 12                  MOV CL,byte ptr [ECX + 0x12]
0041A1CD  88 4A 12                  MOV byte ptr [EDX + 0x12],CL
0041A1D0  8B 83 B1 01 00 00         MOV EAX,dword ptr [EBX + 0x1b1]
0041A1D6  8B 13                     MOV EDX,dword ptr [EBX]
0041A1D8  50                        PUSH EAX
0041A1D9  8B CB                     MOV ECX,EBX
0041A1DB  FF 52 58                  CALL dword ptr [EDX + 0x58]
0041A1DE  8B 8B B1 01 00 00         MOV ECX,dword ptr [EBX + 0x1b1]
0041A1E4  8B 93 AD 01 00 00         MOV EDX,dword ptr [EBX + 0x1ad]
0041A1EA  8B 01                     MOV EAX,dword ptr [ECX]
0041A1EC  89 02                     MOV dword ptr [EDX],EAX
0041A1EE  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0041A1F1  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0041A1F4  66 8B 41 08               MOV AX,word ptr [ECX + 0x8]
0041A1F8  66 89 42 08               MOV word ptr [EDX + 0x8],AX
0041A1FC  8A 49 0A                  MOV CL,byte ptr [ECX + 0xa]
0041A1FF  88 4A 0A                  MOV byte ptr [EDX + 0xa],CL
0041A202  8B 83 C1 01 00 00         MOV EAX,dword ptr [EBX + 0x1c1]
0041A208  8B 13                     MOV EDX,dword ptr [EBX]
0041A20A  50                        PUSH EAX
0041A20B  8B CB                     MOV ECX,EBX
0041A20D  FF 52 60                  CALL dword ptr [EDX + 0x60]
0041A210  8B B3 C1 01 00 00         MOV ESI,dword ptr [EBX + 0x1c1]
0041A216  8B BB BD 01 00 00         MOV EDI,dword ptr [EBX + 0x1bd]
0041A21C  B9 90 00 00 00            MOV ECX,0x90
0041A221  F3 A5                     MOVSD.REP ES:EDI,ESI
0041A223  5F                        POP EDI
0041A224  5E                        POP ESI
0041A225  5B                        POP EBX
0041A226  C3                        RET
LAB_0041a227:
0041A227  3D A4 01 00 00            CMP EAX,0x1a4
0041A22C  0F 84 89 02 00 00         JZ 0x0041a4bb
0041A232  EB 75                     JMP 0x0041a2a9
LAB_0041a234:
0041A234  8B 83 B1 01 00 00         MOV EAX,dword ptr [EBX + 0x1b1]
0041A23A  8B 13                     MOV EDX,dword ptr [EBX]
0041A23C  50                        PUSH EAX
0041A23D  8B CB                     MOV ECX,EBX
0041A23F  FF 52 58                  CALL dword ptr [EDX + 0x58]
0041A242  8B 8B B1 01 00 00         MOV ECX,dword ptr [EBX + 0x1b1]
0041A248  8B 93 AD 01 00 00         MOV EDX,dword ptr [EBX + 0x1ad]
0041A24E  8B 01                     MOV EAX,dword ptr [ECX]
0041A250  89 02                     MOV dword ptr [EDX],EAX
0041A252  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0041A255  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0041A258  66 8B 41 08               MOV AX,word ptr [ECX + 0x8]
0041A25C  66 89 42 08               MOV word ptr [EDX + 0x8],AX
0041A260  8A 49 0A                  MOV CL,byte ptr [ECX + 0xa]
0041A263  88 4A 0A                  MOV byte ptr [EDX + 0xa],CL
0041A266  8B 83 C9 01 00 00         MOV EAX,dword ptr [EBX + 0x1c9]
0041A26C  8B 13                     MOV EDX,dword ptr [EBX]
0041A26E  50                        PUSH EAX
0041A26F  8B CB                     MOV ECX,EBX
0041A271  FF 52 64                  CALL dword ptr [EDX + 0x64]
0041A274  8B 8B C9 01 00 00         MOV ECX,dword ptr [EBX + 0x1c9]
0041A27A  8B 93 C5 01 00 00         MOV EDX,dword ptr [EBX + 0x1c5]
0041A280  5F                        POP EDI
0041A281  5E                        POP ESI
0041A282  8B 01                     MOV EAX,dword ptr [ECX]
0041A284  5B                        POP EBX
0041A285  89 02                     MOV dword ptr [EDX],EAX
0041A287  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0041A28B  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0041A28F  C3                        RET
LAB_0041a290:
0041A290  2D B8 01 00 00            SUB EAX,0x1b8
0041A295  0F 84 20 02 00 00         JZ 0x0041a4bb
0041A29B  2D 30 02 00 00            SUB EAX,0x230
0041A2A0  74 34                     JZ 0x0041a2d6
0041A2A2  48                        DEC EAX
0041A2A3  0F 84 12 02 00 00         JZ 0x0041a4bb
LAB_0041a2a9:
0041A2A9  68 58 4E 7A 00            PUSH 0x7a4e58
0041A2AE  68 CC 4C 7A 00            PUSH 0x7a4ccc
0041A2B3  6A 00                     PUSH 0x0
0041A2B5  6A 00                     PUSH 0x0
0041A2B7  68 A5 05 00 00            PUSH 0x5a5
0041A2BC  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041A2C1  E8 0A 32 29 00            CALL 0x006ad4d0
0041A2C6  83 C4 18                  ADD ESP,0x18
0041A2C9  85 C0                     TEST EAX,EAX
0041A2CB  0F 84 EA 01 00 00         JZ 0x0041a4bb
0041A2D1  CC                        INT3
LAB_0041a2d6:
0041A2D6  8B 83 35 01 00 00         MOV EAX,dword ptr [EBX + 0x135]
0041A2DC  8D B3 35 01 00 00         LEA ESI,[EBX + 0x135]
0041A2E2  85 C0                     TEST EAX,EAX
0041A2E4  74 06                     JZ 0x0041a2ec
0041A2E6  50                        PUSH EAX
0041A2E7  E8 24 3E 29 00            CALL 0x006ae110
LAB_0041a2ec:
0041A2EC  8B 83 39 01 00 00         MOV EAX,dword ptr [EBX + 0x139]
0041A2F2  85 C0                     TEST EAX,EAX
0041A2F4  74 06                     JZ 0x0041a2fc
0041A2F6  50                        PUSH EAX
0041A2F7  E8 14 3E 29 00            CALL 0x006ae110
LAB_0041a2fc:
0041A2FC  8B C6                     MOV EAX,ESI
0041A2FE  33 D2                     XOR EDX,EDX
0041A300  56                        PUSH ESI
0041A301  8B CB                     MOV ECX,EBX
0041A303  89 10                     MOV dword ptr [EAX],EDX
0041A305  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0041A308  8B 13                     MOV EDX,dword ptr [EBX]
0041A30A  FF 52 38                  CALL dword ptr [EDX + 0x38]
0041A30D  8B 16                     MOV EDX,dword ptr [ESI]
0041A30F  8D 8B 2D 01 00 00         LEA ECX,[EBX + 0x12d]
0041A315  E8 26 5B 29 00            CALL 0x006afe40
0041A31A  8B 93 39 01 00 00         MOV EDX,dword ptr [EBX + 0x139]
0041A320  8D 8B 31 01 00 00         LEA ECX,[EBX + 0x131]
0041A326  E8 15 5B 29 00            CALL 0x006afe40
0041A32B  8B 83 4D 01 00 00         MOV EAX,dword ptr [EBX + 0x14d]
0041A331  8D B3 4D 01 00 00         LEA ESI,[EBX + 0x14d]
0041A337  85 C0                     TEST EAX,EAX
0041A339  74 06                     JZ 0x0041a341
0041A33B  50                        PUSH EAX
0041A33C  E8 CF 3D 29 00            CALL 0x006ae110
LAB_0041a341:
0041A341  8B 83 51 01 00 00         MOV EAX,dword ptr [EBX + 0x151]
0041A347  85 C0                     TEST EAX,EAX
0041A349  74 06                     JZ 0x0041a351
0041A34B  50                        PUSH EAX
0041A34C  E8 BF 3D 29 00            CALL 0x006ae110
LAB_0041a351:
0041A351  8B 83 55 01 00 00         MOV EAX,dword ptr [EBX + 0x155]
0041A357  85 C0                     TEST EAX,EAX
0041A359  74 06                     JZ 0x0041a361
0041A35B  50                        PUSH EAX
0041A35C  E8 AF 3D 29 00            CALL 0x006ae110
LAB_0041a361:
0041A361  8B 83 59 01 00 00         MOV EAX,dword ptr [EBX + 0x159]
0041A367  85 C0                     TEST EAX,EAX
0041A369  74 06                     JZ 0x0041a371
0041A36B  50                        PUSH EAX
0041A36C  E8 9F 3D 29 00            CALL 0x006ae110
LAB_0041a371:
0041A371  8B CE                     MOV ECX,ESI
0041A373  33 C0                     XOR EAX,EAX
0041A375  56                        PUSH ESI
0041A376  89 01                     MOV dword ptr [ECX],EAX
0041A378  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0041A37B  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0041A37E  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0041A381  8B 13                     MOV EDX,dword ptr [EBX]
0041A383  8B CB                     MOV ECX,EBX
0041A385  FF 52 3C                  CALL dword ptr [EDX + 0x3c]
0041A388  8B 16                     MOV EDX,dword ptr [ESI]
0041A38A  8D 8B 3D 01 00 00         LEA ECX,[EBX + 0x13d]
0041A390  E8 AB 5A 29 00            CALL 0x006afe40
0041A395  8B 93 51 01 00 00         MOV EDX,dword ptr [EBX + 0x151]
0041A39B  8D 8B 41 01 00 00         LEA ECX,[EBX + 0x141]
0041A3A1  E8 9A 5A 29 00            CALL 0x006afe40
0041A3A6  8B 93 55 01 00 00         MOV EDX,dword ptr [EBX + 0x155]
0041A3AC  8D 8B 45 01 00 00         LEA ECX,[EBX + 0x145]
0041A3B2  E8 89 5A 29 00            CALL 0x006afe40
0041A3B7  8B 93 59 01 00 00         MOV EDX,dword ptr [EBX + 0x159]
0041A3BD  8D 8B 49 01 00 00         LEA ECX,[EBX + 0x149]
0041A3C3  E8 78 5A 29 00            CALL 0x006afe40
0041A3C8  8B 8B 89 01 00 00         MOV ECX,dword ptr [EBX + 0x189]
0041A3CE  8B 03                     MOV EAX,dword ptr [EBX]
0041A3D0  51                        PUSH ECX
0041A3D1  8B CB                     MOV ECX,EBX
0041A3D3  FF 50 44                  CALL dword ptr [EAX + 0x44]
0041A3D6  8B B3 89 01 00 00         MOV ESI,dword ptr [EBX + 0x189]
0041A3DC  8B BB 85 01 00 00         MOV EDI,dword ptr [EBX + 0x185]
0041A3E2  B9 4A 00 00 00            MOV ECX,0x4a
0041A3E7  F3 A5                     MOVSD.REP ES:EDI,ESI
0041A3E9  A4                        MOVSB ES:EDI,ESI
0041A3EA  8B 83 91 01 00 00         MOV EAX,dword ptr [EBX + 0x191]
0041A3F0  8B 13                     MOV EDX,dword ptr [EBX]
0041A3F2  50                        PUSH EAX
0041A3F3  8B CB                     MOV ECX,EBX
0041A3F5  FF 52 48                  CALL dword ptr [EDX + 0x48]
0041A3F8  8B 8B 91 01 00 00         MOV ECX,dword ptr [EBX + 0x191]
0041A3FE  8B 93 8D 01 00 00         MOV EDX,dword ptr [EBX + 0x18d]
0041A404  8D B3 A1 01 00 00         LEA ESI,[EBX + 0x1a1]
0041A40A  8B 01                     MOV EAX,dword ptr [ECX]
0041A40C  89 02                     MOV dword ptr [EDX],EAX
0041A40E  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0041A411  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0041A414  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0041A417  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0041A41A  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0041A41D  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0041A420  8B 06                     MOV EAX,dword ptr [ESI]
0041A422  85 C0                     TEST EAX,EAX
0041A424  74 0C                     JZ 0x0041a432
0041A426  50                        PUSH EAX
0041A427  E8 E4 3C 29 00            CALL 0x006ae110
0041A42C  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0041a432:
0041A432  8B 83 9D 01 00 00         MOV EAX,dword ptr [EBX + 0x19d]
0041A438  8D BB 9D 01 00 00         LEA EDI,[EBX + 0x19d]
0041A43E  85 C0                     TEST EAX,EAX
0041A440  74 0C                     JZ 0x0041a44e
0041A442  50                        PUSH EAX
0041A443  E8 C8 3C 29 00            CALL 0x006ae110
0041A448  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0041a44e:
0041A44E  8B 13                     MOV EDX,dword ptr [EBX]
0041A450  56                        PUSH ESI
0041A451  8B CB                     MOV ECX,EBX
0041A453  FF 52 50                  CALL dword ptr [EDX + 0x50]
0041A456  8B 16                     MOV EDX,dword ptr [ESI]
0041A458  8B CF                     MOV ECX,EDI
0041A45A  E8 E1 59 29 00            CALL 0x006afe40
0041A45F  8B 8B A9 01 00 00         MOV ECX,dword ptr [EBX + 0x1a9]
0041A465  8B 03                     MOV EAX,dword ptr [EBX]
0041A467  51                        PUSH ECX
0041A468  8B CB                     MOV ECX,EBX
0041A46A  FF 50 54                  CALL dword ptr [EAX + 0x54]
0041A46D  8B 93 A9 01 00 00         MOV EDX,dword ptr [EBX + 0x1a9]
0041A473  8B 83 A5 01 00 00         MOV EAX,dword ptr [EBX + 0x1a5]
0041A479  8B 0A                     MOV ECX,dword ptr [EDX]
0041A47B  89 08                     MOV dword ptr [EAX],ECX
0041A47D  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0041A480  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0041A483  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
0041A486  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
0041A489  8B 8B B9 01 00 00         MOV ECX,dword ptr [EBX + 0x1b9]
0041A48F  8B 03                     MOV EAX,dword ptr [EBX]
0041A491  51                        PUSH ECX
0041A492  8B CB                     MOV ECX,EBX
0041A494  FF 50 5C                  CALL dword ptr [EAX + 0x5c]
0041A497  8B 93 B9 01 00 00         MOV EDX,dword ptr [EBX + 0x1b9]
0041A49D  8B 83 B5 01 00 00         MOV EAX,dword ptr [EBX + 0x1b5]
0041A4A3  8B 0A                     MOV ECX,dword ptr [EDX]
0041A4A5  89 08                     MOV dword ptr [EAX],ECX
0041A4A7  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0041A4AA  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0041A4AD  66 8B 4A 08               MOV CX,word ptr [EDX + 0x8]
0041A4B1  66 89 48 08               MOV word ptr [EAX + 0x8],CX
0041A4B5  8A 52 0A                  MOV DL,byte ptr [EDX + 0xa]
0041A4B8  88 50 0A                  MOV byte ptr [EAX + 0xa],DL
LAB_0041a4bb:
0041A4BB  5F                        POP EDI
0041A4BC  5E                        POP ESI
0041A4BD  5B                        POP EBX
0041A4BE  C3                        RET
