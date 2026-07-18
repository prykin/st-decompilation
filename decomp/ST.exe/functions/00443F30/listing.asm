STAllPlayersC::SaveAllPlData:
00443F30  55                        PUSH EBP
00443F31  8B EC                     MOV EBP,ESP
00443F33  81 EC 84 00 00 00         SUB ESP,0x84
00443F39  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00443F3E  53                        PUSH EBX
00443F3F  56                        PUSH ESI
00443F40  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
00443F43  33 DB                     XOR EBX,EBX
00443F45  57                        PUSH EDI
00443F46  8D 55 80                  LEA EDX,[EBP + -0x80]
00443F49  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
00443F4F  53                        PUSH EBX
00443F50  52                        PUSH EDX
00443F51  C7 45 D0 04 00 00 00      MOV dword ptr [EBP + -0x30],0x4
00443F58  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00443F5E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00443F64  E8 87 98 2E 00            CALL 0x0072d7f0
00443F69  8B F0                     MOV ESI,EAX
00443F6B  83 C4 08                  ADD ESP,0x8
00443F6E  3B F3                     CMP ESI,EBX
00443F70  0F 85 8A 0B 00 00         JNZ 0x00444b00
00443F76  BE 90 55 00 00            MOV ESI,0x5590
00443F7B  C7 45 F0 DD 4F 7F 00      MOV dword ptr [EBP + -0x10],0x7f4fdd
00443F82  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_00443f85:
00443F85  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00443F88  3B C3                     CMP EAX,EBX
00443F8A  7E 3A                     JLE 0x00443fc6
00443F8C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00443F8F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00443F92  8D B9 52 FE FF FF         LEA EDI,[ECX + 0xfffffe52]
LAB_00443f98:
00443F98  8B 07                     MOV EAX,dword ptr [EDI]
00443F9A  3B C3                     CMP EAX,EBX
00443F9C  74 1C                     JZ 0x00443fba
00443F9E  8D 55 FC                  LEA EDX,[EBP + -0x4]
00443FA1  52                        PUSH EDX
00443FA2  50                        PUSH EAX
00443FA3  E8 78 C0 26 00            CALL 0x006b0020
00443FA8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00443FAB  8D 45 F8                  LEA EAX,[EBP + -0x8]
00443FAE  50                        PUSH EAX
00443FAF  E8 AC 70 26 00            CALL 0x006ab060
00443FB4  03 75 FC                  ADD ESI,dword ptr [EBP + -0x4]
00443FB7  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_00443fba:
00443FBA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00443FBD  83 C7 04                  ADD EDI,0x4
00443FC0  48                        DEC EAX
00443FC1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00443FC4  75 D2                     JNZ 0x00443f98
LAB_00443fc6:
00443FC6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00443FC9  C7 45 F4 05 00 00 00      MOV dword ptr [EBP + -0xc],0x5
LAB_00443fd0:
00443FD0  8B 47 B0                  MOV EAX,dword ptr [EDI + -0x50]
00443FD3  3B C3                     CMP EAX,EBX
00443FD5  74 1C                     JZ 0x00443ff3
00443FD7  8D 4D FC                  LEA ECX,[EBP + -0x4]
00443FDA  51                        PUSH ECX
00443FDB  50                        PUSH EAX
00443FDC  E8 3F C0 26 00            CALL 0x006b0020
00443FE1  8D 55 F8                  LEA EDX,[EBP + -0x8]
00443FE4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00443FE7  52                        PUSH EDX
00443FE8  E8 73 70 26 00            CALL 0x006ab060
00443FED  03 75 FC                  ADD ESI,dword ptr [EBP + -0x4]
00443FF0  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_00443ff3:
00443FF3  8B 07                     MOV EAX,dword ptr [EDI]
00443FF5  3B C3                     CMP EAX,EBX
00443FF7  74 1C                     JZ 0x00444015
00443FF9  8D 4D FC                  LEA ECX,[EBP + -0x4]
00443FFC  51                        PUSH ECX
00443FFD  50                        PUSH EAX
00443FFE  E8 1D C0 26 00            CALL 0x006b0020
00444003  8D 55 F8                  LEA EDX,[EBP + -0x8]
00444006  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00444009  52                        PUSH EDX
0044400A  E8 51 70 26 00            CALL 0x006ab060
0044400F  03 75 FC                  ADD ESI,dword ptr [EBP + -0x4]
00444012  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_00444015:
00444015  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00444018  83 C7 10                  ADD EDI,0x10
0044401B  48                        DEC EAX
0044401C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0044401F  75 AF                     JNZ 0x00443fd0
00444021  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00444024  C7 45 F4 0A 00 00 00      MOV dword ptr [EBP + -0xc],0xa
0044402B  8D 78 54                  LEA EDI,[EAX + 0x54]
LAB_0044402e:
0044402E  8B 07                     MOV EAX,dword ptr [EDI]
00444030  3B C3                     CMP EAX,EBX
00444032  74 1C                     JZ 0x00444050
00444034  8D 4D FC                  LEA ECX,[EBP + -0x4]
00444037  51                        PUSH ECX
00444038  50                        PUSH EAX
00444039  E8 E2 BF 26 00            CALL 0x006b0020
0044403E  8D 55 F8                  LEA EDX,[EBP + -0x8]
00444041  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00444044  52                        PUSH EDX
00444045  E8 16 70 26 00            CALL 0x006ab060
0044404A  03 75 FC                  ADD ESI,dword ptr [EBP + -0x4]
0044404D  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_00444050:
00444050  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00444053  83 C7 10                  ADD EDI,0x10
00444056  48                        DEC EAX
00444057  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0044405A  75 D2                     JNZ 0x0044402e
0044405C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0044405F  C7 45 F4 06 00 00 00      MOV dword ptr [EBP + -0xc],0x6
00444066  8D B8 31 06 00 00         LEA EDI,[EAX + 0x631]
LAB_0044406c:
0044406C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044406F  51                        PUSH ECX
00444070  57                        PUSH EDI
00444071  E8 AA BF 26 00            CALL 0x006b0020
00444076  8D 55 F8                  LEA EDX,[EBP + -0x8]
00444079  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0044407C  52                        PUSH EDX
0044407D  E8 DE 6F 26 00            CALL 0x006ab060
00444082  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00444085  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00444088  03 F2                     ADD ESI,EDX
0044408A  83 C7 44                  ADD EDI,0x44
0044408D  48                        DEC EAX
0044408E  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
00444091  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00444094  75 D6                     JNZ 0x0044406c
00444096  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00444099  8B 80 39 08 00 00         MOV EAX,dword ptr [EAX + 0x839]
0044409F  3B C3                     CMP EAX,EBX
004440A1  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004440A4  0F 84 9C 00 00 00         JZ 0x00444146
004440AA  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004440AD  3B C3                     CMP EAX,EBX
004440AF  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004440B2  0F 86 8E 00 00 00         JBE 0x00444146
004440B8  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004440BB  33 FF                     XOR EDI,EDI
004440BD  3B C3                     CMP EAX,EBX
004440BF  8D 34 CE                  LEA ESI,[ESI + ECX*0x8]
004440C2  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
004440C5  7E 7F                     JLE 0x00444146
LAB_004440c7:
004440C7  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004440CA  8D 55 C4                  LEA EDX,[EBP + -0x3c]
004440CD  52                        PUSH EDX
004440CE  8B D7                     MOV EDX,EDI
004440D0  E8 9B 8B 26 00            CALL 0x006acc70
004440D5  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004440D8  3B C3                     CMP EAX,EBX
004440DA  74 1C                     JZ 0x004440f8
004440DC  8D 4D FC                  LEA ECX,[EBP + -0x4]
004440DF  51                        PUSH ECX
004440E0  50                        PUSH EAX
004440E1  E8 3A BF 26 00            CALL 0x006b0020
004440E6  8D 55 F8                  LEA EDX,[EBP + -0x8]
004440E9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004440EC  52                        PUSH EDX
004440ED  E8 6E 6F 26 00            CALL 0x006ab060
004440F2  03 75 FC                  ADD ESI,dword ptr [EBP + -0x4]
004440F5  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_004440f8:
004440F8  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004440FB  3B C3                     CMP EAX,EBX
004440FD  74 1C                     JZ 0x0044411b
004440FF  8D 4D FC                  LEA ECX,[EBP + -0x4]
00444102  51                        PUSH ECX
00444103  50                        PUSH EAX
00444104  E8 17 BF 26 00            CALL 0x006b0020
00444109  8D 55 F8                  LEA EDX,[EBP + -0x8]
0044410C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0044410F  52                        PUSH EDX
00444110  E8 4B 6F 26 00            CALL 0x006ab060
00444115  03 75 FC                  ADD ESI,dword ptr [EBP + -0x4]
00444118  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_0044411b:
0044411B  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0044411E  3B C3                     CMP EAX,EBX
00444120  74 1C                     JZ 0x0044413e
00444122  8D 4D FC                  LEA ECX,[EBP + -0x4]
00444125  51                        PUSH ECX
00444126  50                        PUSH EAX
00444127  E8 F4 BE 26 00            CALL 0x006b0020
0044412C  8D 55 F8                  LEA EDX,[EBP + -0x8]
0044412F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00444132  52                        PUSH EDX
00444133  E8 28 6F 26 00            CALL 0x006ab060
00444138  03 75 FC                  ADD ESI,dword ptr [EBP + -0x4]
0044413B  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_0044413e:
0044413E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00444141  47                        INC EDI
00444142  3B F8                     CMP EDI,EAX
00444144  7C 81                     JL 0x004440c7
LAB_00444146:
00444146  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00444149  05 62 0A 00 00            ADD EAX,0xa62
0044414E  3D ED A2 7F 00            CMP EAX,0x7fa2ed
00444153  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00444156  0F 8C 29 FE FF FF         JL 0x00443f85
0044415C  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00444163  03 F0                     ADD ESI,EAX
00444165  56                        PUSH ESI
00444166  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
00444169  E8 02 6B 26 00            CALL 0x006aac70
0044416E  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00444171  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00444174  83 C0 08                  ADD EAX,0x8
00444177  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0044417A  89 50 F8                  MOV dword ptr [EAX + -0x8],EDX
0044417D  BA 29 4E 7F 00            MOV EDX,0x7f4e29
LAB_00444182:
00444182  8B 4A FC                  MOV ECX,dword ptr [EDX + -0x4]
00444185  8D 78 30                  LEA EDI,[EAX + 0x30]
00444188  8D 72 22                  LEA ESI,[EDX + 0x22]
0044418B  C7 45 F4 05 00 00 00      MOV dword ptr [EBP + -0xc],0x5
00444192  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00444195  89 48 FC                  MOV dword ptr [EAX + -0x4],ECX
00444198  8B 0A                     MOV ECX,dword ptr [EDX]
0044419A  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0044419D  89 08                     MOV dword ptr [EAX],ECX
0044419F  8B 4A 16                  MOV ECX,dword ptr [EDX + 0x16]
004441A2  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
004441A5  8B 4A 1A                  MOV ECX,dword ptr [EDX + 0x1a]
004441A8  89 48 28                  MOV dword ptr [EAX + 0x28],ECX
004441AB  8B 4A 1E                  MOV ECX,dword ptr [EDX + 0x1e]
004441AE  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
004441B1  B9 4E 00 00 00            MOV ECX,0x4e
004441B6  F3 A5                     MOVSD.REP ES:EDI,ESI
004441B8  89 58 30                  MOV dword ptr [EAX + 0x30],EBX
004441BB  89 58 34                  MOV dword ptr [EAX + 0x34],EBX
004441BE  89 58 38                  MOV dword ptr [EAX + 0x38],EBX
004441C1  89 58 40                  MOV dword ptr [EAX + 0x40],EBX
004441C4  89 58 44                  MOV dword ptr [EAX + 0x44],EBX
004441C7  89 58 48                  MOV dword ptr [EAX + 0x48],EBX
004441CA  89 58 50                  MOV dword ptr [EAX + 0x50],EBX
004441CD  89 58 60                  MOV dword ptr [EAX + 0x60],EBX
004441D0  89 58 70                  MOV dword ptr [EAX + 0x70],EBX
004441D3  89 98 80 00 00 00         MOV dword ptr [EAX + 0x80],EBX
004441D9  89 98 90 00 00 00         MOV dword ptr [EAX + 0x90],EBX
004441DF  89 98 A0 00 00 00         MOV dword ptr [EAX + 0xa0],EBX
004441E5  89 98 B0 00 00 00         MOV dword ptr [EAX + 0xb0],EBX
004441EB  89 98 C0 00 00 00         MOV dword ptr [EAX + 0xc0],EBX
004441F1  89 98 D0 00 00 00         MOV dword ptr [EAX + 0xd0],EBX
004441F7  89 98 E0 00 00 00         MOV dword ptr [EAX + 0xe0],EBX
004441FD  89 98 F0 00 00 00         MOV dword ptr [EAX + 0xf0],EBX
00444203  89 98 00 01 00 00         MOV dword ptr [EAX + 0x100],EBX
00444209  89 98 10 01 00 00         MOV dword ptr [EAX + 0x110],EBX
0044420F  89 98 20 01 00 00         MOV dword ptr [EAX + 0x120],EBX
00444215  89 98 30 01 00 00         MOV dword ptr [EAX + 0x130],EBX
0044421B  89 98 40 01 00 00         MOV dword ptr [EAX + 0x140],EBX
00444221  89 98 50 01 00 00         MOV dword ptr [EAX + 0x150],EBX
00444227  89 98 60 01 00 00         MOV dword ptr [EAX + 0x160],EBX
0044422D  89 98 64 01 00 00         MOV dword ptr [EAX + 0x164],EBX
00444233  8D 8A 5E 01 00 00         LEA ECX,[EDX + 0x15e]
00444239  8D B0 6C 01 00 00         LEA ESI,[EAX + 0x16c]
LAB_0044423f:
0044423F  8B 79 FC                  MOV EDI,dword ptr [ECX + -0x4]
00444242  83 C1 10                  ADD ECX,0x10
00444245  89 7E FC                  MOV dword ptr [ESI + -0x4],EDI
00444248  8B 79 F0                  MOV EDI,dword ptr [ECX + -0x10]
0044424B  89 3E                     MOV dword ptr [ESI],EDI
0044424D  66 8B 79 F4               MOV DI,word ptr [ECX + -0xc]
00444251  66 89 7E 04               MOV word ptr [ESI + 0x4],DI
00444255  66 8B 79 FA               MOV DI,word ptr [ECX + -0x6]
00444259  66 89 7E 0E               MOV word ptr [ESI + 0xe],DI
0044425D  8B 79 3C                  MOV EDI,dword ptr [ECX + 0x3c]
00444260  89 7E 60                  MOV dword ptr [ESI + 0x60],EDI
00444263  8B 79 40                  MOV EDI,dword ptr [ECX + 0x40]
00444266  89 7E 64                  MOV dword ptr [ESI + 0x64],EDI
00444269  66 8B 79 44               MOV DI,word ptr [ECX + 0x44]
0044426D  66 89 7E 68               MOV word ptr [ESI + 0x68],DI
00444271  66 8B 79 4A               MOV DI,word ptr [ECX + 0x4a]
00444275  66 89 7E 72               MOV word ptr [ESI + 0x72],DI
00444279  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0044427C  83 C6 14                  ADD ESI,0x14
0044427F  4F                        DEC EDI
00444280  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00444283  75 BA                     JNZ 0x0044423f
00444285  8B 8A FA 01 00 00         MOV ECX,dword ptr [EDX + 0x1fa]
0044428B  8D B0 38 02 00 00         LEA ESI,[EAX + 0x238]
00444291  89 88 30 02 00 00         MOV dword ptr [EAX + 0x230],ECX
00444297  8D 8A 02 02 00 00         LEA ECX,[EDX + 0x202]
0044429D  C7 45 F4 0A 00 00 00      MOV dword ptr [EBP + -0xc],0xa
LAB_004442a4:
004442A4  8B 79 FC                  MOV EDI,dword ptr [ECX + -0x4]
004442A7  83 C1 10                  ADD ECX,0x10
004442AA  89 7E FC                  MOV dword ptr [ESI + -0x4],EDI
004442AD  8B 79 F0                  MOV EDI,dword ptr [ECX + -0x10]
004442B0  89 3E                     MOV dword ptr [ESI],EDI
004442B2  66 8B 79 F4               MOV DI,word ptr [ECX + -0xc]
004442B6  66 89 7E 04               MOV word ptr [ESI + 0x4],DI
004442BA  66 8B 79 FA               MOV DI,word ptr [ECX + -0x6]
004442BE  66 89 7E 0E               MOV word ptr [ESI + 0xe],DI
004442C2  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004442C5  83 C6 14                  ADD ESI,0x14
004442C8  4F                        DEC EDI
004442C9  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004442CC  75 D6                     JNZ 0x004442a4
004442CE  8B 8A 9E 02 00 00         MOV ECX,dword ptr [EDX + 0x29e]
004442D4  8D B2 E2 02 00 00         LEA ESI,[EDX + 0x2e2]
004442DA  89 88 FC 02 00 00         MOV dword ptr [EAX + 0x2fc],ECX
004442E0  8B 8A A2 02 00 00         MOV ECX,dword ptr [EDX + 0x2a2]
004442E6  89 88 00 03 00 00         MOV dword ptr [EAX + 0x300],ECX
004442EC  8B 8A A6 02 00 00         MOV ECX,dword ptr [EDX + 0x2a6]
004442F2  89 88 04 03 00 00         MOV dword ptr [EAX + 0x304],ECX
004442F8  8B 8A AA 02 00 00         MOV ECX,dword ptr [EDX + 0x2aa]
004442FE  89 88 08 03 00 00         MOV dword ptr [EAX + 0x308],ECX
00444304  8B 8A AE 02 00 00         MOV ECX,dword ptr [EDX + 0x2ae]
0044430A  89 88 0C 03 00 00         MOV dword ptr [EAX + 0x30c],ECX
00444310  8B 8A B2 02 00 00         MOV ECX,dword ptr [EDX + 0x2b2]
00444316  89 88 10 03 00 00         MOV dword ptr [EAX + 0x310],ECX
0044431C  8B 8A B6 02 00 00         MOV ECX,dword ptr [EDX + 0x2b6]
00444322  89 88 14 03 00 00         MOV dword ptr [EAX + 0x314],ECX
00444328  8B 8A BA 02 00 00         MOV ECX,dword ptr [EDX + 0x2ba]
0044432E  89 88 18 03 00 00         MOV dword ptr [EAX + 0x318],ECX
00444334  8B 8A BE 02 00 00         MOV ECX,dword ptr [EDX + 0x2be]
0044433A  89 88 1C 03 00 00         MOV dword ptr [EAX + 0x31c],ECX
00444340  8B 8A C2 02 00 00         MOV ECX,dword ptr [EDX + 0x2c2]
00444346  89 88 20 03 00 00         MOV dword ptr [EAX + 0x320],ECX
0044434C  8B 8A C6 02 00 00         MOV ECX,dword ptr [EDX + 0x2c6]
00444352  89 88 24 03 00 00         MOV dword ptr [EAX + 0x324],ECX
00444358  8B 8A CA 02 00 00         MOV ECX,dword ptr [EDX + 0x2ca]
0044435E  89 88 28 03 00 00         MOV dword ptr [EAX + 0x328],ECX
00444364  8B 8A CE 02 00 00         MOV ECX,dword ptr [EDX + 0x2ce]
0044436A  89 88 2C 03 00 00         MOV dword ptr [EAX + 0x32c],ECX
00444370  8B 8A D2 02 00 00         MOV ECX,dword ptr [EDX + 0x2d2]
00444376  89 88 30 03 00 00         MOV dword ptr [EAX + 0x330],ECX
0044437C  8B 8A D6 02 00 00         MOV ECX,dword ptr [EDX + 0x2d6]
00444382  89 88 34 03 00 00         MOV dword ptr [EAX + 0x334],ECX
00444388  8B 8A DA 02 00 00         MOV ECX,dword ptr [EDX + 0x2da]
0044438E  89 88 38 03 00 00         MOV dword ptr [EAX + 0x338],ECX
00444394  B9 05 00 00 00            MOV ECX,0x5
00444399  8D B8 3C 03 00 00         LEA EDI,[EAX + 0x33c]
0044439F  F3 A5                     MOVSD.REP ES:EDI,ESI
004443A1  B9 05 00 00 00            MOV ECX,0x5
004443A6  8D B2 F6 02 00 00         LEA ESI,[EDX + 0x2f6]
004443AC  8D B8 50 03 00 00         LEA EDI,[EAX + 0x350]
004443B2  F3 A5                     MOVSD.REP ES:EDI,ESI
004443B4  B9 05 00 00 00            MOV ECX,0x5
004443B9  8D B2 0A 03 00 00         LEA ESI,[EDX + 0x30a]
004443BF  8D B8 64 03 00 00         LEA EDI,[EAX + 0x364]
004443C5  F3 A5                     MOVSD.REP ES:EDI,ESI
004443C7  B9 9B 00 00 00            MOV ECX,0x9b
004443CC  8D B2 1E 03 00 00         LEA ESI,[EDX + 0x31e]
004443D2  8D B8 78 03 00 00         LEA EDI,[EAX + 0x378]
004443D8  F3 A5                     MOVSD.REP ES:EDI,ESI
004443DA  B9 6A 00 00 00            MOV ECX,0x6a
004443DF  8D B2 8A 05 00 00         LEA ESI,[EDX + 0x58a]
004443E5  8D B8 E4 05 00 00         LEA EDI,[EAX + 0x5e4]
004443EB  F3 A5                     MOVSD.REP ES:EDI,ESI
004443ED  B9 26 00 00 00            MOV ECX,0x26
004443F2  8D B2 32 07 00 00         LEA ESI,[EDX + 0x732]
004443F8  8D B8 8C 07 00 00         LEA EDI,[EAX + 0x78c]
004443FE  F3 A5                     MOVSD.REP ES:EDI,ESI
00444400  66 A5                     MOVSW ES:EDI,ESI
00444402  A4                        MOVSB ES:EDI,ESI
00444403  8B 8A CD 07 00 00         MOV ECX,dword ptr [EDX + 0x7cd]
00444409  8D B2 D1 07 00 00         LEA ESI,[EDX + 0x7d1]
0044440F  89 88 27 08 00 00         MOV dword ptr [EAX + 0x827],ECX
00444415  B9 66 00 00 00            MOV ECX,0x66
0044441A  8D B8 2B 08 00 00         LEA EDI,[EAX + 0x82b]
00444420  F3 A5                     MOVSD.REP ES:EDI,ESI
00444422  8B 8A 69 09 00 00         MOV ECX,dword ptr [EDX + 0x969]
00444428  8D B2 71 09 00 00         LEA ESI,[EDX + 0x971]
0044442E  89 88 C3 09 00 00         MOV dword ptr [EAX + 0x9c3],ECX
00444434  8B 8A 6D 09 00 00         MOV ECX,dword ptr [EDX + 0x96d]
0044443A  89 88 C7 09 00 00         MOV dword ptr [EAX + 0x9c7],ECX
00444440  B9 06 00 00 00            MOV ECX,0x6
00444445  8D B8 CB 09 00 00         LEA EDI,[EAX + 0x9cb]
0044444B  F3 A5                     MOVSD.REP ES:EDI,ESI
0044444D  8B 8A 8D 09 00 00         MOV ECX,dword ptr [EDX + 0x98d]
00444453  8D B2 99 09 00 00         LEA ESI,[EDX + 0x999]
00444459  89 88 E3 09 00 00         MOV dword ptr [EAX + 0x9e3],ECX
0044445F  8B 8A 91 09 00 00         MOV ECX,dword ptr [EDX + 0x991]
00444465  89 88 E7 09 00 00         MOV dword ptr [EAX + 0x9e7],ECX
0044446B  8B 8A 95 09 00 00         MOV ECX,dword ptr [EDX + 0x995]
00444471  89 88 EB 09 00 00         MOV dword ptr [EAX + 0x9eb],ECX
00444477  8D B8 EF 09 00 00         LEA EDI,[EAX + 0x9ef]
0044447D  B9 0A 00 00 00            MOV ECX,0xa
00444482  F3 A5                     MOVSD.REP ES:EDI,ESI
00444484  8D B2 05 0A 00 00         LEA ESI,[EDX + 0xa05]
0044448A  8D B8 17 0A 00 00         LEA EDI,[EAX + 0xa17]
00444490  B9 05 00 00 00            MOV ECX,0x5
00444495  F3 A5                     MOVSD.REP ES:EDI,ESI
00444497  B9 08 00 00 00            MOV ECX,0x8
0044449C  8D B2 19 0A 00 00         LEA ESI,[EDX + 0xa19]
004444A2  8D B8 2B 0A 00 00         LEA EDI,[EAX + 0xa2b]
004444A8  F3 A5                     MOVSD.REP ES:EDI,ESI
004444AA  8D B2 39 0A 00 00         LEA ESI,[EDX + 0xa39]
004444B0  8D B8 4B 0A 00 00         LEA EDI,[EAX + 0xa4b]
004444B6  81 C2 62 0A 00 00         ADD EDX,0xa62
004444BC  B9 08 00 00 00            MOV ECX,0x8
004444C1  05 AB 0A 00 00            ADD EAX,0xaab
004444C6  81 FA 39 A1 7F 00         CMP EDX,0x7fa139
004444CC  F3 A5                     MOVSD.REP ES:EDI,ESI
004444CE  0F 8C AE FC FF FF         JL 0x00444182
004444D4  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004444D7  B9 06 00 00 00            MOV ECX,0x6
004444DC  BE 38 A1 7F 00            MOV ESI,0x7fa138
004444E1  C7 45 E0 2F 4E 7F 00      MOV dword ptr [EBP + -0x20],0x7f4e2f
004444E8  8D BA 5C 55 00 00         LEA EDI,[EDX + 0x555c]
004444EE  8D 9A 90 55 00 00         LEA EBX,[EDX + 0x5590]
004444F4  F3 A5                     MOVSD.REP ES:EDI,ESI
004444F6  A1 54 A1 7F 00            MOV EAX,[0x007fa154]
004444FB  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
004444FE  33 F6                     XOR ESI,ESI
00444500  C7 45 E8 90 55 00 00      MOV dword ptr [EBP + -0x18],0x5590
00444507  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0044450A  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0044450D  89 8A 74 55 00 00         MOV dword ptr [EDX + 0x5574],ECX
00444513  A1 58 A1 7F 00            MOV EAX,[0x007fa158]
00444518  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0044451B  89 8A 78 55 00 00         MOV dword ptr [EDX + 0x5578],ECX
00444521  A1 5C A1 7F 00            MOV EAX,[0x007fa15c]
00444526  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00444529  89 8A 7C 55 00 00         MOV dword ptr [EDX + 0x557c],ECX
0044452F  A1 60 A1 7F 00            MOV EAX,[0x007fa160]
00444534  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00444537  89 8A 80 55 00 00         MOV dword ptr [EDX + 0x5580],ECX
0044453D  A1 64 A1 7F 00            MOV EAX,[0x007fa164]
00444542  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00444545  89 8A 84 55 00 00         MOV dword ptr [EDX + 0x5584],ECX
0044454B  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_0044454e:
0044454E  33 C0                     XOR EAX,EAX
00444550  85 FF                     TEST EDI,EDI
00444552  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00444555  0F 8E 99 00 00 00         JLE 0x004445f4
0044455B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_0044455e:
0044455E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00444561  8B 09                     MOV ECX,dword ptr [ECX]
00444563  85 C9                     TEST ECX,ECX
00444565  74 5F                     JZ 0x004445c6
00444567  8D 55 FC                  LEA EDX,[EBP + -0x4]
0044456A  52                        PUSH EDX
0044456B  51                        PUSH ECX
0044456C  E8 AF BA 26 00            CALL 0x006b0020
00444571  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00444574  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00444577  8B F0                     MOV ESI,EAX
00444579  8B C1                     MOV EAX,ECX
0044457B  8B FB                     MOV EDI,EBX
0044457D  C1 E9 02                  SHR ECX,0x2
00444580  F3 A5                     MOVSD.REP ES:EDI,ESI
00444582  8B C8                     MOV ECX,EAX
00444584  83 E1 03                  AND ECX,0x3
00444587  F3 A4                     MOVSB.REP ES:EDI,ESI
00444589  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044458C  51                        PUSH ECX
0044458D  E8 CE 6A 26 00            CALL 0x006ab060
00444592  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00444595  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00444598  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
0044459B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0044459E  8D 3C D1                  LEA EDI,[ECX + EDX*0x8]
004445A1  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004445A4  89 44 37 0C               MOV dword ptr [EDI + ESI*0x1 + 0xc],EAX
004445A8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004445AB  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
004445AE  89 4C 32 10               MOV dword ptr [EDX + ESI*0x1 + 0x10],ECX
004445B2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004445B5  8B D6                     MOV EDX,ESI
004445B7  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
004445BA  03 D9                     ADD EBX,ECX
004445BC  03 C1                     ADD EAX,ECX
004445BE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004445C1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004445C4  EB 16                     JMP 0x004445dc
LAB_004445c6:
004445C6  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004445C9  C7 44 11 0C FF FF FF FF   MOV dword ptr [ECX + EDX*0x1 + 0xc],0xffffffff
004445D1  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004445D4  C7 44 11 10 00 00 00 00   MOV dword ptr [ECX + EDX*0x1 + 0x10],0x0
LAB_004445dc:
004445DC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004445DF  40                        INC EAX
004445E0  83 C1 04                  ADD ECX,0x4
004445E3  3B C7                     CMP EAX,EDI
004445E5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004445E8  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004445EB  0F 8C 6D FF FF FF         JL 0x0044455e
004445F1  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_004445f4:
004445F4  81 C1 62 0A 00 00         ADD ECX,0xa62
004445FA  81 C6 AB 0A 00 00         ADD ESI,0xaab
00444600  81 F9 3F A1 7F 00         CMP ECX,0x7fa13f
00444606  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00444609  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0044460C  0F 8C 3C FF FF FF         JL 0x0044454e
00444612  B8 DD 4F 7F 00            MOV EAX,0x7f4fdd
00444617  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0044461E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00444621:
00444621  33 C9                     XOR ECX,ECX
00444623  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00444626  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_00444629:
00444629  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0044462C  8B 40 B0                  MOV EAX,dword ptr [EAX + -0x50]
0044462F  85 C0                     TEST EAX,EAX
00444631  74 5F                     JZ 0x00444692
00444633  8D 4D FC                  LEA ECX,[EBP + -0x4]
00444636  51                        PUSH ECX
00444637  50                        PUSH EAX
00444638  E8 E3 B9 26 00            CALL 0x006b0020
0044463D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00444640  8B F0                     MOV ESI,EAX
00444642  8B D1                     MOV EDX,ECX
00444644  8B FB                     MOV EDI,EBX
00444646  C1 E9 02                  SHR ECX,0x2
00444649  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0044464C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0044464F  F3 A5                     MOVSD.REP ES:EDI,ESI
00444651  8B CA                     MOV ECX,EDX
00444653  50                        PUSH EAX
00444654  83 E1 03                  AND ECX,0x3
00444657  F3 A4                     MOVSB.REP ES:EDI,ESI
00444659  E8 02 6A 26 00            CALL 0x006ab060
0044465E  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00444661  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00444664  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00444667  03 CA                     ADD ECX,EDX
00444669  03 C1                     ADD EAX,ECX
0044466B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0044466E  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00444671  89 88 7A 01 00 00         MOV dword ptr [EAX + 0x17a],ECX
00444677  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044467A  89 90 7E 01 00 00         MOV dword ptr [EAX + 0x17e],EDX
00444680  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00444683  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00444686  03 D8                     ADD EBX,EAX
00444688  03 C8                     ADD ECX,EAX
0044468A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0044468D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00444690  EB 1F                     JMP 0x004446b1
LAB_00444692:
00444692  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00444695  03 C8                     ADD ECX,EAX
00444697  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
0044469A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0044469D  C7 80 7A 01 00 00 FF FF FF FF  MOV dword ptr [EAX + 0x17a],0xffffffff
004446A7  C7 80 7E 01 00 00 00 00 00 00  MOV dword ptr [EAX + 0x17e],0x0
LAB_004446b1:
004446B1  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004446B4  8B 09                     MOV ECX,dword ptr [ECX]
004446B6  85 C9                     TEST ECX,ECX
004446B8  74 4F                     JZ 0x00444709
004446BA  8D 55 FC                  LEA EDX,[EBP + -0x4]
004446BD  52                        PUSH EDX
004446BE  51                        PUSH ECX
004446BF  E8 5C B9 26 00            CALL 0x006b0020
004446C4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004446C7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004446CA  8B F0                     MOV ESI,EAX
004446CC  8B C1                     MOV EAX,ECX
004446CE  8B FB                     MOV EDI,EBX
004446D0  C1 E9 02                  SHR ECX,0x2
004446D3  F3 A5                     MOVSD.REP ES:EDI,ESI
004446D5  8B C8                     MOV ECX,EAX
004446D7  83 E1 03                  AND ECX,0x3
004446DA  F3 A4                     MOVSB.REP ES:EDI,ESI
004446DC  8D 4D F8                  LEA ECX,[EBP + -0x8]
004446DF  51                        PUSH ECX
004446E0  E8 7B 69 26 00            CALL 0x006ab060
004446E5  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004446E8  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004446EB  89 81 DE 01 00 00         MOV dword ptr [ECX + 0x1de],EAX
004446F1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004446F4  89 91 E2 01 00 00         MOV dword ptr [ECX + 0x1e2],EDX
004446FA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004446FD  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00444700  03 D9                     ADD EBX,ECX
00444702  03 C1                     ADD EAX,ECX
00444704  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00444707  EB 14                     JMP 0x0044471d
LAB_00444709:
00444709  C7 80 DE 01 00 00 FF FF FF FF  MOV dword ptr [EAX + 0x1de],0xffffffff
00444713  C7 80 E2 01 00 00 00 00 00 00  MOV dword ptr [EAX + 0x1e2],0x0
LAB_0044471d:
0044471D  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00444720  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00444723  83 C1 14                  ADD ECX,0x14
00444726  83 C7 10                  ADD EDI,0x10
00444729  83 F9 64                  CMP ECX,0x64
0044472C  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0044472F  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00444732  0F 8C F1 FE FF FF         JL 0x00444629
00444738  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044473B  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0044473E  05 62 0A 00 00            ADD EAX,0xa62
00444743  81 C6 AB 0A 00 00         ADD ESI,0xaab
00444749  3D ED A2 7F 00            CMP EAX,0x7fa2ed
0044474E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00444751  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00444754  0F 8C C7 FE FF FF         JL 0x00444621
0044475A  B8 31 50 7F 00            MOV EAX,0x7f5031
0044475F  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00444766  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00444769:
00444769  33 C9                     XOR ECX,ECX
0044476B  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0044476E  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_00444771:
00444771  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00444774  8B 00                     MOV EAX,dword ptr [EAX]
00444776  85 C0                     TEST EAX,EAX
00444778  74 5C                     JZ 0x004447d6
0044477A  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044477D  51                        PUSH ECX
0044477E  50                        PUSH EAX
0044477F  E8 9C B8 26 00            CALL 0x006b0020
00444784  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00444787  8B F0                     MOV ESI,EAX
00444789  8B D1                     MOV EDX,ECX
0044478B  8B FB                     MOV EDI,EBX
0044478D  C1 E9 02                  SHR ECX,0x2
00444790  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00444793  8D 45 F8                  LEA EAX,[EBP + -0x8]
00444796  F3 A5                     MOVSD.REP ES:EDI,ESI
00444798  8B CA                     MOV ECX,EDX
0044479A  50                        PUSH EAX
0044479B  83 E1 03                  AND ECX,0x3
0044479E  F3 A4                     MOVSB.REP ES:EDI,ESI
004447A0  E8 BB 68 26 00            CALL 0x006ab060
004447A5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004447A8  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004447AB  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004447AE  03 CA                     ADD ECX,EDX
004447B0  03 C8                     ADD ECX,EAX
004447B2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004447B5  89 81 46 02 00 00         MOV dword ptr [ECX + 0x246],EAX
004447BB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004447BE  89 91 4A 02 00 00         MOV dword ptr [ECX + 0x24a],EDX
004447C4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004447C7  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004447CA  03 D9                     ADD EBX,ECX
004447CC  03 C1                     ADD EAX,ECX
004447CE  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004447D1  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004447D4  EB 1B                     JMP 0x004447f1
LAB_004447d6:
004447D6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004447D9  03 C1                     ADD EAX,ECX
004447DB  03 C2                     ADD EAX,EDX
004447DD  C7 80 46 02 00 00 FF FF FF FF  MOV dword ptr [EAX + 0x246],0xffffffff
004447E7  C7 80 4A 02 00 00 00 00 00 00  MOV dword ptr [EAX + 0x24a],0x0
LAB_004447f1:
004447F1  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
004447F4  83 C1 14                  ADD ECX,0x14
004447F7  83 C7 10                  ADD EDI,0x10
004447FA  81 F9 C8 00 00 00         CMP ECX,0xc8
00444800  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00444803  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00444806  0F 8C 65 FF FF FF         JL 0x00444771
0044480C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044480F  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00444812  05 62 0A 00 00            ADD EAX,0xa62
00444817  81 C6 AB 0A 00 00         ADD ESI,0xaab
0044481D  3D 41 A3 7F 00            CMP EAX,0x7fa341
00444822  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00444825  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00444828  0F 8C 3B FF FF FF         JL 0x00444769
0044482E  B8 0E 56 7F 00            MOV EAX,0x7f560e
00444833  81 C2 83 0A 00 00         ADD EDX,0xa83
00444839  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0044483C  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0044483f:
0044483F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00444842  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00444845  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00444848  C7 45 D4 06 00 00 00      MOV dword ptr [EBP + -0x2c],0x6
LAB_0044484f:
0044484F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00444852  8D 55 FC                  LEA EDX,[EBP + -0x4]
00444855  52                        PUSH EDX
00444856  50                        PUSH EAX
00444857  E8 C4 B7 26 00            CALL 0x006b0020
0044485C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044485F  8B F0                     MOV ESI,EAX
00444861  8B D1                     MOV EDX,ECX
00444863  8B FB                     MOV EDI,EBX
00444865  C1 E9 02                  SHR ECX,0x2
00444868  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0044486B  8D 45 F8                  LEA EAX,[EBP + -0x8]
0044486E  F3 A5                     MOVSD.REP ES:EDI,ESI
00444870  8B CA                     MOV ECX,EDX
00444872  50                        PUSH EAX
00444873  83 E1 03                  AND ECX,0x3
00444876  F3 A4                     MOVSB.REP ES:EDI,ESI
00444878  E8 E3 67 26 00            CALL 0x006ab060
0044487D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00444880  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00444883  89 50 FC                  MOV dword ptr [EAX + -0x4],EDX
00444886  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00444889  89 08                     MOV dword ptr [EAX],ECX
0044488B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044488E  03 D1                     ADD EDX,ECX
00444890  83 C0 08                  ADD EAX,0x8
00444893  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00444896  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00444899  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0044489C  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0044489F  03 D9                     ADD EBX,ECX
004448A1  83 C2 44                  ADD EDX,0x44
004448A4  48                        DEC EAX
004448A5  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
004448A8  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004448AB  75 A2                     JNZ 0x0044484f
004448AD  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004448B0  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004448B3  05 62 0A 00 00            ADD EAX,0xa62
004448B8  81 C2 AB 0A 00 00         ADD EDX,0xaab
004448BE  3D 1E A9 7F 00            CMP EAX,0x7fa91e
004448C3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004448C6  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004448C9  0F 8C 70 FF FF FF         JL 0x0044483f
004448CF  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004448D2  B8 16 58 7F 00            MOV EAX,0x7f5816
004448D7  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004448DA  8D 8A 73 0A 00 00         LEA ECX,[EDX + 0xa73]
004448E0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004448E3  EB 06                     JMP 0x004448eb
LAB_004448e5:
004448E5  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004448E8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_004448eb:
004448EB  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
004448EE  33 FF                     XOR EDI,EDI
004448F0  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
004448F3  8B 00                     MOV EAX,dword ptr [EAX]
004448F5  3B C7                     CMP EAX,EDI
004448F7  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004448FA  0F 84 80 01 00 00         JZ 0x00444a80
00444900  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00444903  3B C7                     CMP EAX,EDI
00444905  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00444908  0F 86 72 01 00 00         JBE 0x00444a80
0044490E  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00444911  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00444914  C1 E2 03                  SHL EDX,0x3
00444917  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0044491A  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0044491D  89 11                     MOV dword ptr [ECX],EDX
0044491F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00444922  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
00444925  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00444928  8B F3                     MOV ESI,EBX
0044492A  03 D9                     ADD EBX,ECX
0044492C  03 D1                     ADD EDX,ECX
0044492E  3B C7                     CMP EAX,EDI
00444930  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00444933  0F 8E 50 01 00 00         JLE 0x00444a89
00444939  83 C6 08                  ADD ESI,0x8
0044493C  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0044493f:
0044493F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00444942  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00444945  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00444948  50                        PUSH EAX
00444949  E8 22 83 26 00            CALL 0x006acc70
0044494E  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00444951  85 C0                     TEST EAX,EAX
00444953  74 49                     JZ 0x0044499e
00444955  8D 4D FC                  LEA ECX,[EBP + -0x4]
00444958  51                        PUSH ECX
00444959  50                        PUSH EAX
0044495A  E8 C1 B6 26 00            CALL 0x006b0020
0044495F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00444962  8B F0                     MOV ESI,EAX
00444964  8B D1                     MOV EDX,ECX
00444966  8B FB                     MOV EDI,EBX
00444968  C1 E9 02                  SHR ECX,0x2
0044496B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0044496E  8D 45 F8                  LEA EAX,[EBP + -0x8]
00444971  F3 A5                     MOVSD.REP ES:EDI,ESI
00444973  8B CA                     MOV ECX,EDX
00444975  50                        PUSH EAX
00444976  83 E1 03                  AND ECX,0x3
00444979  F3 A4                     MOVSB.REP ES:EDI,ESI
0044497B  E8 E0 66 26 00            CALL 0x006ab060
00444980  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00444983  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00444986  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00444989  89 48 F8                  MOV dword ptr [EAX + -0x8],ECX
0044498C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044498F  89 50 FC                  MOV dword ptr [EAX + -0x4],EDX
00444992  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00444995  03 D8                     ADD EBX,EAX
00444997  03 C8                     ADD ECX,EAX
00444999  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0044499C  EB 0E                     JMP 0x004449ac
LAB_0044499e:
0044499E  C7 46 F8 FF FF FF FF      MOV dword ptr [ESI + -0x8],0xffffffff
004449A5  C7 46 FC 00 00 00 00      MOV dword ptr [ESI + -0x4],0x0
LAB_004449ac:
004449AC  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004449AF  85 C0                     TEST EAX,EAX
004449B1  74 48                     JZ 0x004449fb
004449B3  8D 4D FC                  LEA ECX,[EBP + -0x4]
004449B6  51                        PUSH ECX
004449B7  50                        PUSH EAX
004449B8  E8 63 B6 26 00            CALL 0x006b0020
004449BD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004449C0  8B F0                     MOV ESI,EAX
004449C2  8B D1                     MOV EDX,ECX
004449C4  8B FB                     MOV EDI,EBX
004449C6  C1 E9 02                  SHR ECX,0x2
004449C9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004449CC  8D 45 F8                  LEA EAX,[EBP + -0x8]
004449CF  F3 A5                     MOVSD.REP ES:EDI,ESI
004449D1  8B CA                     MOV ECX,EDX
004449D3  50                        PUSH EAX
004449D4  83 E1 03                  AND ECX,0x3
004449D7  F3 A4                     MOVSB.REP ES:EDI,ESI
004449D9  E8 82 66 26 00            CALL 0x006ab060
004449DE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004449E1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004449E4  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004449E7  89 08                     MOV dword ptr [EAX],ECX
004449E9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004449EC  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
004449EF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004449F2  03 D8                     ADD EBX,EAX
004449F4  03 C8                     ADD ECX,EAX
004449F6  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004449F9  EB 0D                     JMP 0x00444a08
LAB_004449fb:
004449FB  C7 06 FF FF FF FF         MOV dword ptr [ESI],0xffffffff
00444A01  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
LAB_00444a08:
00444A08  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00444A0B  85 C0                     TEST EAX,EAX
00444A0D  74 49                     JZ 0x00444a58
00444A0F  8D 4D FC                  LEA ECX,[EBP + -0x4]
00444A12  51                        PUSH ECX
00444A13  50                        PUSH EAX
00444A14  E8 07 B6 26 00            CALL 0x006b0020
00444A19  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00444A1C  8B F0                     MOV ESI,EAX
00444A1E  8B D1                     MOV EDX,ECX
00444A20  8B FB                     MOV EDI,EBX
00444A22  C1 E9 02                  SHR ECX,0x2
00444A25  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00444A28  8D 45 F8                  LEA EAX,[EBP + -0x8]
00444A2B  F3 A5                     MOVSD.REP ES:EDI,ESI
00444A2D  8B CA                     MOV ECX,EDX
00444A2F  50                        PUSH EAX
00444A30  83 E1 03                  AND ECX,0x3
00444A33  F3 A4                     MOVSB.REP ES:EDI,ESI
00444A35  E8 26 66 26 00            CALL 0x006ab060
00444A3A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00444A3D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00444A40  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00444A43  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00444A46  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00444A49  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00444A4C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00444A4F  03 D8                     ADD EBX,EAX
00444A51  03 C8                     ADD ECX,EAX
00444A53  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00444A56  EB 0E                     JMP 0x00444a66
LAB_00444a58:
00444A58  C7 46 08 FF FF FF FF      MOV dword ptr [ESI + 0x8],0xffffffff
00444A5F  C7 46 0C 00 00 00 00      MOV dword ptr [ESI + 0xc],0x0
LAB_00444a66:
00444A66  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00444A69  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00444A6C  40                        INC EAX
00444A6D  83 C6 18                  ADD ESI,0x18
00444A70  3B C1                     CMP EAX,ECX
00444A72  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00444A75  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00444A78  0F 8C C1 FE FF FF         JL 0x0044493f
00444A7E  EB 09                     JMP 0x00444a89
LAB_00444a80:
00444A80  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
00444A86  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
LAB_00444a89:
00444A89  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00444A8C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00444A8F  05 62 0A 00 00            ADD EAX,0xa62
00444A94  81 C2 AB 0A 00 00         ADD EDX,0xaab
00444A9A  3D 26 AB 7F 00            CMP EAX,0x7fab26
00444A9F  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00444AA2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00444AA5  0F 8C 3A FE FF FF         JL 0x004448e5
00444AAB  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00444AB2  8B 35 68 A1 7F 00         MOV ESI,dword ptr [0x007fa168]
00444AB8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00444ABB  8B C1                     MOV EAX,ECX
00444ABD  8B FB                     MOV EDI,EBX
00444ABF  C1 E9 02                  SHR ECX,0x2
00444AC2  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00444AC5  F3 A5                     MOVSD.REP ES:EDI,ESI
00444AC7  8B C8                     MOV ECX,EAX
00444AC9  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00444ACC  83 E1 03                  AND ECX,0x3
00444ACF  F3 A4                     MOVSB.REP ES:EDI,ESI
00444AD1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00444AD4  89 88 88 55 00 00         MOV dword ptr [EAX + 0x5588],ECX
00444ADA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00444ADD  89 90 8C 55 00 00         MOV dword ptr [EAX + 0x558c],EDX
00444AE3  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
00444AE9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00444AEC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00444AF2  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00444AF5  89 0A                     MOV dword ptr [EDX],ECX
00444AF7  5F                        POP EDI
00444AF8  5E                        POP ESI
00444AF9  5B                        POP EBX
00444AFA  8B E5                     MOV ESP,EBP
00444AFC  5D                        POP EBP
00444AFD  C2 04 00                  RET 0x4
LAB_00444b00:
00444B00  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
00444B06  68 30 82 7A 00            PUSH 0x7a8230
00444B0B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00444B10  56                        PUSH ESI
00444B11  53                        PUSH EBX
00444B12  68 0E 27 00 00            PUSH 0x270e
00444B17  68 04 60 7A 00            PUSH 0x7a6004
00444B1C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00444B22  E8 A9 89 26 00            CALL 0x006ad4d0
00444B27  83 C4 18                  ADD ESP,0x18
00444B2A  85 C0                     TEST EAX,EAX
00444B2C  74 01                     JZ 0x00444b2f
00444B2E  CC                        INT3
LAB_00444b2f:
00444B2F  68 0F 27 00 00            PUSH 0x270f
00444B34  68 04 60 7A 00            PUSH 0x7a6004
00444B39  53                        PUSH EBX
00444B3A  56                        PUSH ESI
00444B3B  E8 00 13 26 00            CALL 0x006a5e40
00444B40  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00444B43  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00444B46  5F                        POP EDI
00444B47  5E                        POP ESI
00444B48  89 08                     MOV dword ptr [EAX],ECX
00444B4A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00444B4D  5B                        POP EBX
00444B4E  8B E5                     MOV ESP,EBP
00444B50  5D                        POP EBP
00444B51  C2 04 00                  RET 0x4
