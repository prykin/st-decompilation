STBoatC::SaveBoatData:
0048FAC0  55                        PUSH EBP
0048FAC1  8B EC                     MOV EBP,ESP
0048FAC3  83 EC 64                  SUB ESP,0x64
0048FAC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0048FACB  53                        PUSH EBX
0048FACC  56                        PUSH ESI
0048FACD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0048FAD0  57                        PUSH EDI
0048FAD1  8D 55 A0                  LEA EDX,[EBP + -0x60]
0048FAD4  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0048FAD7  6A 00                     PUSH 0x0
0048FAD9  52                        PUSH EDX
0048FADA  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0048FADD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0048FAE3  E8 08 DD 29 00            CALL 0x0072d7f0
0048FAE8  8B F0                     MOV ESI,EAX
0048FAEA  83 C4 08                  ADD ESP,0x8
0048FAED  85 F6                     TEST ESI,ESI
0048FAEF  0F 85 58 04 00 00         JNZ 0x0048ff4d
0048FAF5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0048FAF8  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0048FAFB  C7 45 E8 09 00 00 00      MOV dword ptr [EBP + -0x18],0x9
0048FB02  C7 07 06 06 00 00         MOV dword ptr [EDI],0x606
0048FB08  8D 9E 82 02 00 00         LEA EBX,[ESI + 0x282]
LAB_0048fb0e:
0048FB0E  8B 03                     MOV EAX,dword ptr [EBX]
0048FB10  85 C0                     TEST EAX,EAX
0048FB12  74 1F                     JZ 0x0048fb33
0048FB14  8D 4D FC                  LEA ECX,[EBP + -0x4]
0048FB17  51                        PUSH ECX
0048FB18  50                        PUSH EAX
0048FB19  E8 02 05 22 00            CALL 0x006b0020
0048FB1E  8D 55 F8                  LEA EDX,[EBP + -0x8]
0048FB21  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0048FB24  52                        PUSH EDX
0048FB25  E8 36 B5 21 00            CALL 0x006ab060
0048FB2A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0048FB2D  8B 0F                     MOV ECX,dword ptr [EDI]
0048FB2F  03 C8                     ADD ECX,EAX
0048FB31  89 0F                     MOV dword ptr [EDI],ECX
LAB_0048fb33:
0048FB33  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0048FB36  83 C3 04                  ADD EBX,0x4
0048FB39  48                        DEC EAX
0048FB3A  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0048FB3D  75 CF                     JNZ 0x0048fb0e
0048FB3F  8B 86 7B 04 00 00         MOV EAX,dword ptr [ESI + 0x47b]
0048FB45  85 C0                     TEST EAX,EAX
0048FB47  74 1F                     JZ 0x0048fb68
0048FB49  8D 4D FC                  LEA ECX,[EBP + -0x4]
0048FB4C  51                        PUSH ECX
0048FB4D  50                        PUSH EAX
0048FB4E  E8 CD 04 22 00            CALL 0x006b0020
0048FB53  8D 55 F8                  LEA EDX,[EBP + -0x8]
0048FB56  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0048FB59  52                        PUSH EDX
0048FB5A  E8 01 B5 21 00            CALL 0x006ab060
0048FB5F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0048FB62  8B 0F                     MOV ECX,dword ptr [EDI]
0048FB64  03 C8                     ADD ECX,EAX
0048FB66  89 0F                     MOV dword ptr [EDI],ECX
LAB_0048fb68:
0048FB68  8B 0F                     MOV ECX,dword ptr [EDI]
0048FB6A  51                        PUSH ECX
0048FB6B  E8 00 B1 21 00            CALL 0x006aac70
0048FB70  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
0048FB73  8B D8                     MOV EBX,EAX
0048FB75  81 C6 F3 06 00 00         ADD ESI,0x6f3
0048FB7B  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0048FB7E  89 13                     MOV dword ptr [EBX],EDX
0048FB80  8B 86 31 F9 FF FF         MOV EAX,dword ptr [ESI + 0xfffff931]
0048FB86  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
0048FB89  8B 8E 35 F9 FF FF         MOV ECX,dword ptr [ESI + 0xfffff935]
0048FB8F  89 4B 08                  MOV dword ptr [EBX + 0x8],ECX
0048FB92  C7 43 0C 02 00 00 00      MOV dword ptr [EBX + 0xc],0x2
0048FB99  8B 96 39 F9 FF FF         MOV EDX,dword ptr [ESI + 0xfffff939]
0048FB9F  8D 7B 5C                  LEA EDI,[EBX + 0x5c]
0048FBA2  B9 5A 00 00 00            MOV ECX,0x5a
0048FBA7  89 53 10                  MOV dword ptr [EBX + 0x10],EDX
0048FBAA  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FBAC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0048FBAF  B9 65 00 00 00            MOV ECX,0x65
0048FBB4  66 A5                     MOVSW ES:EDI,ESI
0048FBB6  A4                        MOVSB ES:EDI,ESI
0048FBB7  8D B0 C0 02 00 00         LEA ESI,[EAX + 0x2c0]
0048FBBD  8D BB C7 01 00 00         LEA EDI,[EBX + 0x1c7]
0048FBC3  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FBC5  8D 88 55 04 00 00         LEA ECX,[EAX + 0x455]
0048FBCB  8D 93 5C 03 00 00         LEA EDX,[EBX + 0x35c]
0048FBD1  A4                        MOVSB ES:EDI,ESI
0048FBD2  8B 31                     MOV ESI,dword ptr [ECX]
0048FBD4  8D BB 9E 03 00 00         LEA EDI,[EBX + 0x39e]
0048FBDA  89 32                     MOV dword ptr [EDX],ESI
0048FBDC  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
0048FBDF  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
0048FBE2  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0048FBE5  89 72 08                  MOV dword ptr [EDX + 0x8],ESI
0048FBE8  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0048FBEB  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0048FBEE  66 8B 90 69 04 00 00      MOV DX,word ptr [EAX + 0x469]
0048FBF5  66 89 93 6C 03 00 00      MOV word ptr [EBX + 0x36c],DX
0048FBFC  66 8B 88 6F 04 00 00      MOV CX,word ptr [EAX + 0x46f]
0048FC03  66 89 8B 6E 03 00 00      MOV word ptr [EBX + 0x36e],CX
0048FC0A  8B 90 71 04 00 00         MOV EDX,dword ptr [EAX + 0x471]
0048FC10  89 93 70 03 00 00         MOV dword ptr [EBX + 0x370],EDX
0048FC16  66 8B 88 75 04 00 00      MOV CX,word ptr [EAX + 0x475]
0048FC1D  66 89 8B 74 03 00 00      MOV word ptr [EBX + 0x374],CX
0048FC24  66 8B 90 77 04 00 00      MOV DX,word ptr [EAX + 0x477]
0048FC2B  66 89 93 76 03 00 00      MOV word ptr [EBX + 0x376],DX
0048FC32  66 8B 88 79 04 00 00      MOV CX,word ptr [EAX + 0x479]
0048FC39  66 89 8B 78 03 00 00      MOV word ptr [EBX + 0x378],CX
0048FC40  8B 90 7F 04 00 00         MOV EDX,dword ptr [EAX + 0x47f]
0048FC46  89 93 82 03 00 00         MOV dword ptr [EBX + 0x382],EDX
0048FC4C  8B 88 83 04 00 00         MOV ECX,dword ptr [EAX + 0x483]
0048FC52  89 8B 86 03 00 00         MOV dword ptr [EBX + 0x386],ECX
0048FC58  8B 90 87 04 00 00         MOV EDX,dword ptr [EAX + 0x487]
0048FC5E  89 93 8A 03 00 00         MOV dword ptr [EBX + 0x38a],EDX
0048FC64  8B 88 8B 04 00 00         MOV ECX,dword ptr [EAX + 0x48b]
0048FC6A  8D 90 8F 04 00 00         LEA EDX,[EAX + 0x48f]
0048FC70  89 8B 8E 03 00 00         MOV dword ptr [EBX + 0x38e],ECX
0048FC76  8D 8B 92 03 00 00         LEA ECX,[EBX + 0x392]
0048FC7C  8B 32                     MOV ESI,dword ptr [EDX]
0048FC7E  89 31                     MOV dword ptr [ECX],ESI
0048FC80  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
0048FC83  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
0048FC86  8D B0 9B 04 00 00         LEA ESI,[EAX + 0x49b]
0048FC8C  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
0048FC8F  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0048FC92  B9 10 00 00 00            MOV ECX,0x10
0048FC97  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FC99  66 A5                     MOVSW ES:EDI,ESI
0048FC9B  8D B0 DD 04 00 00         LEA ESI,[EAX + 0x4dd]
0048FCA1  8D BB E0 03 00 00         LEA EDI,[EBX + 0x3e0]
0048FCA7  B9 0C 00 00 00            MOV ECX,0xc
0048FCAC  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FCAE  66 A5                     MOVSW ES:EDI,ESI
0048FCB0  A4                        MOVSB ES:EDI,ESI
0048FCB1  8D B0 10 05 00 00         LEA ESI,[EAX + 0x510]
0048FCB7  8D BB 13 04 00 00         LEA EDI,[EBX + 0x413]
0048FCBD  B9 07 00 00 00            MOV ECX,0x7
0048FCC2  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FCC4  8D B0 2C 05 00 00         LEA ESI,[EAX + 0x52c]
0048FCCA  8D BB 2F 04 00 00         LEA EDI,[EBX + 0x42f]
0048FCD0  B9 0A 00 00 00            MOV ECX,0xa
0048FCD5  33 D2                     XOR EDX,EDX
0048FCD7  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FCD9  8D B0 54 05 00 00         LEA ESI,[EAX + 0x554]
0048FCDF  8D BB 57 04 00 00         LEA EDI,[EBX + 0x457]
0048FCE5  B9 0D 00 00 00            MOV ECX,0xd
0048FCEA  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FCEC  8D B0 88 05 00 00         LEA ESI,[EAX + 0x588]
0048FCF2  8D BB 8B 04 00 00         LEA EDI,[EBX + 0x48b]
0048FCF8  B9 06 00 00 00            MOV ECX,0x6
0048FCFD  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FCFF  8D B0 A0 05 00 00         LEA ESI,[EAX + 0x5a0]
0048FD05  8D BB A3 04 00 00         LEA EDI,[EBX + 0x4a3]
0048FD0B  B9 0A 00 00 00            MOV ECX,0xa
0048FD10  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FD12  66 A5                     MOVSW ES:EDI,ESI
0048FD14  8D 88 CA 05 00 00         LEA ECX,[EAX + 0x5ca]
0048FD1A  89 93 A9 04 00 00         MOV dword ptr [EBX + 0x4a9],EDX
0048FD20  8D B3 CD 04 00 00         LEA ESI,[EBX + 0x4cd]
0048FD26  8B 39                     MOV EDI,dword ptr [ECX]
0048FD28  89 3E                     MOV dword ptr [ESI],EDI
0048FD2A  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
0048FD2D  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
0048FD30  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
0048FD33  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
0048FD36  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
0048FD39  89 7E 0C                  MOV dword ptr [ESI + 0xc],EDI
0048FD3C  66 8B 49 10               MOV CX,word ptr [ECX + 0x10]
0048FD40  66 89 4E 10               MOV word ptr [ESI + 0x10],CX
0048FD44  8D 88 DC 05 00 00         LEA ECX,[EAX + 0x5dc]
0048FD4A  8D B3 DF 04 00 00         LEA ESI,[EBX + 0x4df]
0048FD50  8B 39                     MOV EDI,dword ptr [ECX]
0048FD52  89 3E                     MOV dword ptr [ESI],EDI
0048FD54  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
0048FD57  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
0048FD5A  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
0048FD5D  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
0048FD60  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0048FD63  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
0048FD66  8D 88 EC 05 00 00         LEA ECX,[EAX + 0x5ec]
0048FD6C  8D B3 EF 04 00 00         LEA ESI,[EBX + 0x4ef]
0048FD72  8B 39                     MOV EDI,dword ptr [ECX]
0048FD74  89 3E                     MOV dword ptr [ESI],EDI
0048FD76  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
0048FD79  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
0048FD7C  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
0048FD7F  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
0048FD82  8D BB FF 04 00 00         LEA EDI,[EBX + 0x4ff]
0048FD88  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0048FD8B  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
0048FD8E  8D B0 FC 05 00 00         LEA ESI,[EAX + 0x5fc]
0048FD94  B9 07 00 00 00            MOV ECX,0x7
0048FD99  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FD9B  A4                        MOVSB ES:EDI,ESI
0048FD9C  8D B0 19 06 00 00         LEA ESI,[EAX + 0x619]
0048FDA2  8D BB 1C 05 00 00         LEA EDI,[EBX + 0x51c]
0048FDA8  B9 07 00 00 00            MOV ECX,0x7
0048FDAD  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FDAF  8D B0 35 06 00 00         LEA ESI,[EAX + 0x635]
0048FDB5  8D BB 38 05 00 00         LEA EDI,[EBX + 0x538]
0048FDBB  B9 0D 00 00 00            MOV ECX,0xd
0048FDC0  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FDC2  66 A5                     MOVSW ES:EDI,ESI
0048FDC4  8D B0 6B 06 00 00         LEA ESI,[EAX + 0x66b]
0048FDCA  8D BB 6E 05 00 00         LEA EDI,[EBX + 0x56e]
0048FDD0  B9 08 00 00 00            MOV ECX,0x8
0048FDD5  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FDD7  8D B0 8B 06 00 00         LEA ESI,[EAX + 0x68b]
0048FDDD  8D BB 8E 05 00 00         LEA EDI,[EBX + 0x58e]
0048FDE3  B9 07 00 00 00            MOV ECX,0x7
0048FDE8  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FDEA  66 A5                     MOVSW ES:EDI,ESI
0048FDEC  8D B0 A9 06 00 00         LEA ESI,[EAX + 0x6a9]
0048FDF2  8D BB AC 05 00 00         LEA EDI,[EBX + 0x5ac]
0048FDF8  B9 08 00 00 00            MOV ECX,0x8
0048FDFD  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FDFF  66 A5                     MOVSW ES:EDI,ESI
0048FE01  8D B0 CB 06 00 00         LEA ESI,[EAX + 0x6cb]
0048FE07  8D BB CE 05 00 00         LEA EDI,[EBX + 0x5ce]
0048FE0D  B9 08 00 00 00            MOV ECX,0x8
0048FE12  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FE14  8B 88 EB 06 00 00         MOV ECX,dword ptr [EAX + 0x6eb]
0048FE1A  BF 06 06 00 00            MOV EDI,0x606
0048FE1F  89 8B EE 05 00 00         MOV dword ptr [EBX + 0x5ee],ECX
0048FE25  8B 88 EF 06 00 00         MOV ECX,dword ptr [EAX + 0x6ef]
0048FE2B  89 8B F2 05 00 00         MOV dword ptr [EBX + 0x5f2],ECX
0048FE31  8D 4B 18                  LEA ECX,[EBX + 0x18]
0048FE34  8D B0 82 02 00 00         LEA ESI,[EAX + 0x282]
0048FE3A  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0048FE3D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0048FE40  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0048FE43  C7 45 E4 09 00 00 00      MOV dword ptr [EBP + -0x1c],0x9
LAB_0048fe4a:
0048FE4A  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0048FE4D  8B 36                     MOV ESI,dword ptr [ESI]
0048FE4F  3B F2                     CMP ESI,EDX
0048FE51  74 46                     JZ 0x0048fe99
0048FE53  8D 55 FC                  LEA EDX,[EBP + -0x4]
0048FE56  52                        PUSH EDX
0048FE57  56                        PUSH ESI
0048FE58  E8 C3 01 22 00            CALL 0x006b0020
0048FE5D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0048FE60  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0048FE63  8B F0                     MOV ESI,EAX
0048FE65  8B C1                     MOV EAX,ECX
0048FE67  03 FB                     ADD EDI,EBX
0048FE69  C1 E9 02                  SHR ECX,0x2
0048FE6C  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FE6E  8B C8                     MOV ECX,EAX
0048FE70  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0048FE73  83 E1 03                  AND ECX,0x3
0048FE76  F3 A4                     MOVSB.REP ES:EDI,ESI
0048FE78  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0048FE7B  89 48 FC                  MOV dword ptr [EAX + -0x4],ECX
0048FE7E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0048FE81  89 10                     MOV dword ptr [EAX],EDX
0048FE83  8D 45 F8                  LEA EAX,[EBP + -0x8]
0048FE86  50                        PUSH EAX
0048FE87  E8 D4 B1 21 00            CALL 0x006ab060
0048FE8C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0048FE8F  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0048FE92  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0048FE95  33 D2                     XOR EDX,EDX
0048FE97  EB 0F                     JMP 0x0048fea8
LAB_0048fe99:
0048FE99  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0048FE9C  C7 41 FC FF FF FF FF      MOV dword ptr [ECX + -0x4],0xffffffff
0048FEA3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0048FEA6  89 31                     MOV dword ptr [ECX],ESI
LAB_0048fea8:
0048FEA8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0048FEAB  83 C1 08                  ADD ECX,0x8
0048FEAE  03 FE                     ADD EDI,ESI
0048FEB0  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0048FEB3  83 C6 04                  ADD ESI,0x4
0048FEB6  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0048FEB9  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0048FEBC  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0048FEBF  4E                        DEC ESI
0048FEC0  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0048FEC3  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0048FEC6  75 82                     JNZ 0x0048fe4a
0048FEC8  8B 80 7B 04 00 00         MOV EAX,dword ptr [EAX + 0x47b]
0048FECE  3B C2                     CMP EAX,EDX
0048FED0  74 51                     JZ 0x0048ff23
0048FED2  8D 4D FC                  LEA ECX,[EBP + -0x4]
0048FED5  51                        PUSH ECX
0048FED6  50                        PUSH EAX
0048FED7  E8 44 01 22 00            CALL 0x006b0020
0048FEDC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0048FEDF  8B F0                     MOV ESI,EAX
0048FEE1  8B D1                     MOV EDX,ECX
0048FEE3  03 FB                     ADD EDI,EBX
0048FEE5  C1 E9 02                  SHR ECX,0x2
0048FEE8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0048FEEB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0048FEEE  F3 A5                     MOVSD.REP ES:EDI,ESI
0048FEF0  8B CA                     MOV ECX,EDX
0048FEF2  8D 55 F8                  LEA EDX,[EBP + -0x8]
0048FEF5  83 E1 03                  AND ECX,0x3
0048FEF8  52                        PUSH EDX
0048FEF9  F3 A4                     MOVSB.REP ES:EDI,ESI
0048FEFB  89 83 7A 03 00 00         MOV dword ptr [EBX + 0x37a],EAX
0048FF01  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0048FF04  89 8B 7E 03 00 00         MOV dword ptr [EBX + 0x37e],ECX
0048FF0A  E8 51 B1 21 00            CALL 0x006ab060
0048FF0F  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0048FF12  8B C3                     MOV EAX,EBX
0048FF14  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0048FF1A  5F                        POP EDI
0048FF1B  5E                        POP ESI
0048FF1C  5B                        POP EBX
0048FF1D  8B E5                     MOV ESP,EBP
0048FF1F  5D                        POP EBP
0048FF20  C2 04 00                  RET 0x4
LAB_0048ff23:
0048FF23  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0048FF26  C7 83 7A 03 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x37a],0xffffffff
0048FF30  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0048FF33  89 83 7E 03 00 00         MOV dword ptr [EBX + 0x37e],EAX
0048FF39  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0048FF3C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0048FF42  8B C3                     MOV EAX,EBX
0048FF44  5F                        POP EDI
0048FF45  5E                        POP ESI
0048FF46  5B                        POP EBX
0048FF47  8B E5                     MOV ESP,EBP
0048FF49  5D                        POP EBP
0048FF4A  C2 04 00                  RET 0x4
LAB_0048ff4d:
0048FF4D  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0048FF50  68 3C BA 7A 00            PUSH 0x7aba3c
0048FF55  68 CC 4C 7A 00            PUSH 0x7a4ccc
0048FF5A  56                        PUSH ESI
0048FF5B  6A 00                     PUSH 0x0
0048FF5D  68 98 4E 00 00            PUSH 0x4e98
0048FF62  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048FF67  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0048FF6D  E8 5E D5 21 00            CALL 0x006ad4d0
0048FF72  83 C4 18                  ADD ESP,0x18
0048FF75  85 C0                     TEST EAX,EAX
0048FF77  74 01                     JZ 0x0048ff7a
0048FF79  CC                        INT3
LAB_0048ff7a:
0048FF7A  68 99 4E 00 00            PUSH 0x4e99
0048FF7F  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048FF84  6A 00                     PUSH 0x0
0048FF86  56                        PUSH ESI
0048FF87  E8 B4 5E 21 00            CALL 0x006a5e40
0048FF8C  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0048FF8F  5F                        POP EDI
0048FF90  5E                        POP ESI
0048FF91  5B                        POP EBX
0048FF92  8B E5                     MOV ESP,EBP
0048FF94  5D                        POP EBP
0048FF95  C2 04 00                  RET 0x4
