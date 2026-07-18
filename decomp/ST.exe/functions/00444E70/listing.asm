FUN_00444e70:
00444E70  55                        PUSH EBP
00444E71  8B EC                     MOV EBP,ESP
00444E73  83 EC 1C                  SUB ESP,0x1c
00444E76  53                        PUSH EBX
00444E77  56                        PUSH ESI
00444E78  57                        PUSH EDI
00444E79  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00444E7C  33 DB                     XOR EBX,EBX
00444E7E  8B 07                     MOV EAX,dword ptr [EDI]
00444E80  83 C7 08                  ADD EDI,0x8
00444E83  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00444E86  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00444E89  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00444E8C  EB 03                     JMP 0x00444e91
LAB_00444e8e:
00444E8E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00444e91:
00444E91  8B 47 FC                  MOV EAX,dword ptr [EDI + -0x4]
00444E94  85 C0                     TEST EAX,EAX
00444E96  7E 12                     JLE 0x00444eaa
00444E98  8B 93 25 4E 7F 00         MOV EDX,dword ptr [EBX + 0x7f4e25]
00444E9E  8D 4D F8                  LEA ECX,[EBP + -0x8]
00444EA1  48                        DEC EAX
00444EA2  51                        PUSH ECX
00444EA3  50                        PUSH EAX
00444EA4  52                        PUSH EDX
00444EA5  E8 96 92 26 00            CALL 0x006ae140
LAB_00444eaa:
00444EAA  8B 07                     MOV EAX,dword ptr [EDI]
00444EAC  85 C0                     TEST EAX,EAX
00444EAE  7E 12                     JLE 0x00444ec2
00444EB0  8B 93 29 4E 7F 00         MOV EDX,dword ptr [EBX + 0x7f4e29]
00444EB6  8D 4D F8                  LEA ECX,[EBP + -0x8]
00444EB9  48                        DEC EAX
00444EBA  51                        PUSH ECX
00444EBB  50                        PUSH EAX
00444EBC  52                        PUSH EDX
00444EBD  E8 7E 92 26 00            CALL 0x006ae140
LAB_00444ec2:
00444EC2  8D 47 04                  LEA EAX,[EDI + 0x4]
00444EC5  33 F6                     XOR ESI,ESI
00444EC7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00444eca:
00444ECA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00444ECD  8B 01                     MOV EAX,dword ptr [ECX]
00444ECF  83 F8 FF                  CMP EAX,-0x1
00444ED2  74 16                     JZ 0x00444eea
00444ED4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00444ED7  03 C2                     ADD EAX,EDX
00444ED9  50                        PUSH EAX
00444EDA  6A 00                     PUSH 0x0
00444EDC  E8 7F B1 26 00            CALL 0x006b0060
00444EE1  89 84 1E 2F 4E 7F 00      MOV dword ptr [ESI + EBX*0x1 + 0x7f4e2f],EAX
00444EE8  EB 0B                     JMP 0x00444ef5
LAB_00444eea:
00444EEA  C7 84 1E 2F 4E 7F 00 00 00 00 00  MOV dword ptr [ESI + EBX*0x1 + 0x7f4e2f],0x0
LAB_00444ef5:
00444EF5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00444EF8  83 C6 04                  ADD ESI,0x4
00444EFB  83 C2 08                  ADD EDX,0x8
00444EFE  83 FE 10                  CMP ESI,0x10
00444F01  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00444F04  7C C4                     JL 0x00444eca
00444F06  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00444F09  8D 77 30                  LEA ESI,[EDI + 0x30]
00444F0C  89 83 3F 4E 7F 00         MOV dword ptr [EBX + 0x7f4e3f],EAX
00444F12  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
00444F15  89 8B 43 4E 7F 00         MOV dword ptr [EBX + 0x7f4e43],ECX
00444F1B  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
00444F1E  8D BB 4B 4E 7F 00         LEA EDI,[EBX + 0x7f4e4b]
00444F24  B9 4E 00 00 00            MOV ECX,0x4e
00444F29  89 93 47 4E 7F 00         MOV dword ptr [EBX + 0x7f4e47],EDX
00444F2F  C7 45 F0 05 00 00 00      MOV dword ptr [EBP + -0x10],0x5
00444F36  F3 A5                     MOVSD.REP ES:EDI,ESI
00444F38  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00444F3B  8D BB 87 4F 7F 00         LEA EDI,[EBX + 0x7f4f87]
00444F41  8D 86 6C 01 00 00         LEA EAX,[ESI + 0x16c]
00444F47  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00444f4a:
00444F4A  8B 48 FC                  MOV ECX,dword ptr [EAX + -0x4]
00444F4D  89 4F FC                  MOV dword ptr [EDI + -0x4],ECX
00444F50  8B 10                     MOV EDX,dword ptr [EAX]
00444F52  89 17                     MOV dword ptr [EDI],EDX
00444F54  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
00444F58  66 89 4F 04               MOV word ptr [EDI + 0x4],CX
00444F5C  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
00444F60  66 89 57 0A               MOV word ptr [EDI + 0xa],DX
00444F64  8B 48 06                  MOV ECX,dword ptr [EAX + 0x6]
00444F67  83 F9 FF                  CMP ECX,-0x1
00444F6A  74 15                     JZ 0x00444f81
00444F6C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00444F6F  03 C8                     ADD ECX,EAX
00444F71  51                        PUSH ECX
00444F72  6A 00                     PUSH 0x0
00444F74  E8 E7 B0 26 00            CALL 0x006b0060
00444F79  89 47 06                  MOV dword ptr [EDI + 0x6],EAX
00444F7C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00444F7F  EB 07                     JMP 0x00444f88
LAB_00444f81:
00444F81  C7 47 06 00 00 00 00      MOV dword ptr [EDI + 0x6],0x0
LAB_00444f88:
00444F88  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
00444F8B  89 4F 4C                  MOV dword ptr [EDI + 0x4c],ECX
00444F8E  8B 50 64                  MOV EDX,dword ptr [EAX + 0x64]
00444F91  89 57 50                  MOV dword ptr [EDI + 0x50],EDX
00444F94  66 8B 48 68               MOV CX,word ptr [EAX + 0x68]
00444F98  66 89 4F 54               MOV word ptr [EDI + 0x54],CX
00444F9C  66 8B 50 72               MOV DX,word ptr [EAX + 0x72]
00444FA0  66 89 57 5A               MOV word ptr [EDI + 0x5a],DX
00444FA4  8B 48 6A                  MOV ECX,dword ptr [EAX + 0x6a]
00444FA7  83 F9 FF                  CMP ECX,-0x1
00444FAA  74 15                     JZ 0x00444fc1
00444FAC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00444FAF  03 C8                     ADD ECX,EAX
00444FB1  51                        PUSH ECX
00444FB2  6A 00                     PUSH 0x0
00444FB4  E8 A7 B0 26 00            CALL 0x006b0060
00444FB9  89 47 56                  MOV dword ptr [EDI + 0x56],EAX
00444FBC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00444FBF  EB 07                     JMP 0x00444fc8
LAB_00444fc1:
00444FC1  C7 47 56 00 00 00 00      MOV dword ptr [EDI + 0x56],0x0
LAB_00444fc8:
00444FC8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00444FCB  83 C0 14                  ADD EAX,0x14
00444FCE  83 C7 10                  ADD EDI,0x10
00444FD1  49                        DEC ECX
00444FD2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00444FD5  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00444FD8  0F 85 6C FF FF FF         JNZ 0x00444f4a
00444FDE  8B 8E 30 02 00 00         MOV ECX,dword ptr [ESI + 0x230]
00444FE4  8D 86 38 02 00 00         LEA EAX,[ESI + 0x238]
00444FEA  89 8B 23 50 7F 00         MOV dword ptr [EBX + 0x7f5023],ECX
00444FF0  8D BB 2B 50 7F 00         LEA EDI,[EBX + 0x7f502b]
00444FF6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00444FF9  C7 45 F4 0A 00 00 00      MOV dword ptr [EBP + -0xc],0xa
LAB_00445000:
00445000  8B 50 FC                  MOV EDX,dword ptr [EAX + -0x4]
00445003  89 57 FC                  MOV dword ptr [EDI + -0x4],EDX
00445006  8B 08                     MOV ECX,dword ptr [EAX]
00445008  89 0F                     MOV dword ptr [EDI],ECX
0044500A  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0044500E  66 89 57 04               MOV word ptr [EDI + 0x4],DX
00445012  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
00445016  66 89 4F 0A               MOV word ptr [EDI + 0xa],CX
0044501A  8B 48 06                  MOV ECX,dword ptr [EAX + 0x6]
0044501D  83 F9 FF                  CMP ECX,-0x1
00445020  74 15                     JZ 0x00445037
00445022  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00445025  03 CA                     ADD ECX,EDX
00445027  51                        PUSH ECX
00445028  6A 00                     PUSH 0x0
0044502A  E8 31 B0 26 00            CALL 0x006b0060
0044502F  89 47 06                  MOV dword ptr [EDI + 0x6],EAX
00445032  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00445035  EB 07                     JMP 0x0044503e
LAB_00445037:
00445037  C7 47 06 00 00 00 00      MOV dword ptr [EDI + 0x6],0x0
LAB_0044503e:
0044503E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00445041  83 C0 14                  ADD EAX,0x14
00445044  83 C7 10                  ADD EDI,0x10
00445047  49                        DEC ECX
00445048  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0044504B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0044504E  75 B0                     JNZ 0x00445000
00445050  8B 86 FC 02 00 00         MOV EAX,dword ptr [ESI + 0x2fc]
00445056  81 C6 3C 03 00 00         ADD ESI,0x33c
0044505C  89 83 C7 50 7F 00         MOV dword ptr [EBX + 0x7f50c7],EAX
00445062  8B 4E C4                  MOV ECX,dword ptr [ESI + -0x3c]
00445065  89 8B CB 50 7F 00         MOV dword ptr [EBX + 0x7f50cb],ECX
0044506B  8B 56 C8                  MOV EDX,dword ptr [ESI + -0x38]
0044506E  89 93 CF 50 7F 00         MOV dword ptr [EBX + 0x7f50cf],EDX
00445074  8B 46 CC                  MOV EAX,dword ptr [ESI + -0x34]
00445077  89 83 D3 50 7F 00         MOV dword ptr [EBX + 0x7f50d3],EAX
0044507D  8B 4E D0                  MOV ECX,dword ptr [ESI + -0x30]
00445080  89 8B D7 50 7F 00         MOV dword ptr [EBX + 0x7f50d7],ECX
00445086  8B 56 D4                  MOV EDX,dword ptr [ESI + -0x2c]
00445089  89 93 DB 50 7F 00         MOV dword ptr [EBX + 0x7f50db],EDX
0044508F  8B 46 D8                  MOV EAX,dword ptr [ESI + -0x28]
00445092  89 83 DF 50 7F 00         MOV dword ptr [EBX + 0x7f50df],EAX
00445098  8B 4E DC                  MOV ECX,dword ptr [ESI + -0x24]
0044509B  89 8B E3 50 7F 00         MOV dword ptr [EBX + 0x7f50e3],ECX
004450A1  8B 56 E0                  MOV EDX,dword ptr [ESI + -0x20]
004450A4  89 93 E7 50 7F 00         MOV dword ptr [EBX + 0x7f50e7],EDX
004450AA  8B 46 E4                  MOV EAX,dword ptr [ESI + -0x1c]
004450AD  89 83 EB 50 7F 00         MOV dword ptr [EBX + 0x7f50eb],EAX
004450B3  8B 4E E8                  MOV ECX,dword ptr [ESI + -0x18]
004450B6  89 8B EF 50 7F 00         MOV dword ptr [EBX + 0x7f50ef],ECX
004450BC  8B 56 EC                  MOV EDX,dword ptr [ESI + -0x14]
004450BF  89 93 F3 50 7F 00         MOV dword ptr [EBX + 0x7f50f3],EDX
004450C5  8B 46 F0                  MOV EAX,dword ptr [ESI + -0x10]
004450C8  89 83 F7 50 7F 00         MOV dword ptr [EBX + 0x7f50f7],EAX
004450CE  8B 4E F4                  MOV ECX,dword ptr [ESI + -0xc]
004450D1  89 8B FB 50 7F 00         MOV dword ptr [EBX + 0x7f50fb],ECX
004450D7  8B 56 F8                  MOV EDX,dword ptr [ESI + -0x8]
004450DA  89 93 FF 50 7F 00         MOV dword ptr [EBX + 0x7f50ff],EDX
004450E0  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
004450E3  89 83 03 51 7F 00         MOV dword ptr [EBX + 0x7f5103],EAX
004450E9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004450EC  B9 05 00 00 00            MOV ECX,0x5
004450F1  8D BB 0B 51 7F 00         LEA EDI,[EBX + 0x7f510b]
004450F7  F3 A5                     MOVSD.REP ES:EDI,ESI
004450F9  B9 05 00 00 00            MOV ECX,0x5
004450FE  8D B0 50 03 00 00         LEA ESI,[EAX + 0x350]
00445104  8D BB 1F 51 7F 00         LEA EDI,[EBX + 0x7f511f]
0044510A  F3 A5                     MOVSD.REP ES:EDI,ESI
0044510C  B9 05 00 00 00            MOV ECX,0x5
00445111  8D B0 64 03 00 00         LEA ESI,[EAX + 0x364]
00445117  8D BB 33 51 7F 00         LEA EDI,[EBX + 0x7f5133]
0044511D  F3 A5                     MOVSD.REP ES:EDI,ESI
0044511F  B9 9B 00 00 00            MOV ECX,0x9b
00445124  8D B0 78 03 00 00         LEA ESI,[EAX + 0x378]
0044512A  8D BB 47 51 7F 00         LEA EDI,[EBX + 0x7f5147]
00445130  F3 A5                     MOVSD.REP ES:EDI,ESI
00445132  B9 6A 00 00 00            MOV ECX,0x6a
00445137  8D B0 E4 05 00 00         LEA ESI,[EAX + 0x5e4]
0044513D  8D BB B3 53 7F 00         LEA EDI,[EBX + 0x7f53b3]
00445143  F3 A5                     MOVSD.REP ES:EDI,ESI
00445145  B9 26 00 00 00            MOV ECX,0x26
0044514A  8D B0 8C 07 00 00         LEA ESI,[EAX + 0x78c]
00445150  8D BB 5B 55 7F 00         LEA EDI,[EBX + 0x7f555b]
00445156  F3 A5                     MOVSD.REP ES:EDI,ESI
00445158  66 A5                     MOVSW ES:EDI,ESI
0044515A  A4                        MOVSB ES:EDI,ESI
0044515B  8B 88 27 08 00 00         MOV ECX,dword ptr [EAX + 0x827]
00445161  8D B0 2B 08 00 00         LEA ESI,[EAX + 0x82b]
00445167  89 8B F6 55 7F 00         MOV dword ptr [EBX + 0x7f55f6],ECX
0044516D  B9 66 00 00 00            MOV ECX,0x66
00445172  8D BB FA 55 7F 00         LEA EDI,[EBX + 0x7f55fa]
00445178  F3 A5                     MOVSD.REP ES:EDI,ESI
0044517A  8B 90 C3 09 00 00         MOV EDX,dword ptr [EAX + 0x9c3]
00445180  8D B0 CB 09 00 00         LEA ESI,[EAX + 0x9cb]
00445186  89 93 92 57 7F 00         MOV dword ptr [EBX + 0x7f5792],EDX
0044518C  8B 88 C7 09 00 00         MOV ECX,dword ptr [EAX + 0x9c7]
00445192  89 8B 96 57 7F 00         MOV dword ptr [EBX + 0x7f5796],ECX
00445198  B9 06 00 00 00            MOV ECX,0x6
0044519D  8D BB 9A 57 7F 00         LEA EDI,[EBX + 0x7f579a]
004451A3  F3 A5                     MOVSD.REP ES:EDI,ESI
004451A5  8B 90 E3 09 00 00         MOV EDX,dword ptr [EAX + 0x9e3]
004451AB  8D B0 EF 09 00 00         LEA ESI,[EAX + 0x9ef]
004451B1  89 93 B6 57 7F 00         MOV dword ptr [EBX + 0x7f57b6],EDX
004451B7  8B 88 E7 09 00 00         MOV ECX,dword ptr [EAX + 0x9e7]
004451BD  89 8B BA 57 7F 00         MOV dword ptr [EBX + 0x7f57ba],ECX
004451C3  8B 90 EB 09 00 00         MOV EDX,dword ptr [EAX + 0x9eb]
004451C9  89 93 BE 57 7F 00         MOV dword ptr [EBX + 0x7f57be],EDX
004451CF  8D BB C2 57 7F 00         LEA EDI,[EBX + 0x7f57c2]
004451D5  B9 0A 00 00 00            MOV ECX,0xa
004451DA  C7 45 F0 06 00 00 00      MOV dword ptr [EBP + -0x10],0x6
004451E1  F3 A5                     MOVSD.REP ES:EDI,ESI
004451E3  8D BB 0E 56 7F 00         LEA EDI,[EBX + 0x7f560e]
004451E9  8D B0 77 0A 00 00         LEA ESI,[EAX + 0xa77]
LAB_004451ef:
004451EF  8B 06                     MOV EAX,dword ptr [ESI]
004451F1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004451F4  03 C2                     ADD EAX,EDX
004451F6  50                        PUSH EAX
004451F7  57                        PUSH EDI
004451F8  E8 63 AE 26 00            CALL 0x006b0060
004451FD  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00445200  83 C6 08                  ADD ESI,0x8
00445203  83 C7 44                  ADD EDI,0x44
00445206  48                        DEC EAX
00445207  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0044520A  75 E3                     JNZ 0x004451ef
0044520C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044520F  8D BB 2E 58 7F 00         LEA EDI,[EBX + 0x7f582e]
00445215  B9 05 00 00 00            MOV ECX,0x5
0044521A  8D B2 17 0A 00 00         LEA ESI,[EDX + 0xa17]
00445220  F3 A5                     MOVSD.REP ES:EDI,ESI
00445222  B9 08 00 00 00            MOV ECX,0x8
00445227  8D B2 2B 0A 00 00         LEA ESI,[EDX + 0xa2b]
0044522D  8D BB 42 58 7F 00         LEA EDI,[EBX + 0x7f5842]
00445233  F3 A5                     MOVSD.REP ES:EDI,ESI
00445235  B9 08 00 00 00            MOV ECX,0x8
0044523A  8D B2 4B 0A 00 00         LEA ESI,[EDX + 0xa4b]
00445240  8D BB 62 58 7F 00         LEA EDI,[EBX + 0x7f5862]
00445246  F3 A5                     MOVSD.REP ES:EDI,ESI
00445248  33 FF                     XOR EDI,EDI
0044524A  89 BB 1A 58 7F 00         MOV dword ptr [EBX + 0x7f581a],EDI
00445250  89 BB 1E 58 7F 00         MOV dword ptr [EBX + 0x7f581e],EDI
00445256  89 BB 22 58 7F 00         MOV dword ptr [EBX + 0x7f5822],EDI
0044525C  89 BB 26 58 7F 00         MOV dword ptr [EBX + 0x7f5826],EDI
00445262  8B 8A 73 0A 00 00         MOV ECX,dword ptr [EDX + 0xa73]
00445268  89 8B 2A 58 7F 00         MOV dword ptr [EBX + 0x7f582a],ECX
0044526E  8B 82 6B 0A 00 00         MOV EAX,dword ptr [EDX + 0xa6b]
00445274  83 F8 FF                  CMP EAX,-0x1
00445277  0F 84 B1 01 00 00         JZ 0x0044542e
0044527D  B8 AB AA AA AA            MOV EAX,0xaaaaaaab
00445282  6A 01                     PUSH 0x1
00445284  F7 A2 6F 0A 00 00         MUL dword ptr [EDX + 0xa6f]
0044528A  8B F2                     MOV ESI,EDX
0044528C  6A 0C                     PUSH 0xc
0044528E  C1 EE 04                  SHR ESI,0x4
00445291  56                        PUSH ESI
00445292  57                        PUSH EDI
00445293  E8 F8 8F 26 00            CALL 0x006ae290
00445298  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044529B  89 83 16 58 7F 00         MOV dword ptr [EBX + 0x7f5816],EAX
004452A1  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004452A4  8B 82 6B 0A 00 00         MOV EAX,dword ptr [EDX + 0xa6b]
004452AA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004452AD  03 C2                     ADD EAX,EDX
004452AF  3B F7                     CMP ESI,EDI
004452B1  0F 8E 81 00 00 00         JLE 0x00445338
004452B7  8D 78 10                  LEA EDI,[EAX + 0x10]
LAB_004452ba:
004452BA  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
004452C1  8B 47 F0                  MOV EAX,dword ptr [EDI + -0x10]
004452C4  83 F8 FF                  CMP EAX,-0x1
004452C7  74 10                     JZ 0x004452d9
004452C9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004452CC  03 C1                     ADD EAX,ECX
004452CE  50                        PUSH EAX
004452CF  6A 00                     PUSH 0x0
004452D1  E8 8A AD 26 00            CALL 0x006b0060
004452D6  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_004452d9:
004452D9  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
004452E0  8B 47 F8                  MOV EAX,dword ptr [EDI + -0x8]
004452E3  83 F8 FF                  CMP EAX,-0x1
004452E6  74 10                     JZ 0x004452f8
004452E8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004452EB  03 C2                     ADD EAX,EDX
004452ED  50                        PUSH EAX
004452EE  6A 00                     PUSH 0x0
004452F0  E8 6B AD 26 00            CALL 0x006b0060
004452F5  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_004452f8:
004452F8  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
004452FF  8B 07                     MOV EAX,dword ptr [EDI]
00445301  83 F8 FF                  CMP EAX,-0x1
00445304  74 10                     JZ 0x00445316
00445306  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00445309  03 C1                     ADD EAX,ECX
0044530B  50                        PUSH EAX
0044530C  6A 00                     PUSH 0x0
0044530E  E8 4D AD 26 00            CALL 0x006b0060
00445313  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_00445316:
00445316  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445319  8B 8B 16 58 7F 00         MOV ECX,dword ptr [EBX + 0x7f5816]
0044531F  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00445322  52                        PUSH EDX
00445323  50                        PUSH EAX
00445324  51                        PUSH ECX
00445325  E8 16 8E 26 00            CALL 0x006ae140
0044532A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044532D  83 C7 18                  ADD EDI,0x18
00445330  40                        INC EAX
00445331  3B C6                     CMP EAX,ESI
00445333  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00445336  7C 82                     JL 0x004452ba
LAB_00445338:
00445338  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0044533b:
0044533B  81 C3 62 0A 00 00         ADD EBX,0xa62
00445341  81 C2 AB 0A 00 00         ADD EDX,0xaab
00445347  81 FB 10 53 00 00         CMP EBX,0x5310
0044534D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00445350  0F 8C 38 FB FF FF         JL 0x00444e8e
00445356  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00445359  B9 06 00 00 00            MOV ECX,0x6
0044535E  BF 38 A1 7F 00            MOV EDI,0x7fa138
00445363  8D B3 5C 55 00 00         LEA ESI,[EBX + 0x555c]
00445369  F3 A5                     MOVSD.REP ES:EDI,ESI
0044536B  8B 83 74 55 00 00         MOV EAX,dword ptr [EBX + 0x5574]
00445371  85 C0                     TEST EAX,EAX
00445373  7E 11                     JLE 0x00445386
00445375  8D 55 F8                  LEA EDX,[EBP + -0x8]
00445378  48                        DEC EAX
00445379  52                        PUSH EDX
0044537A  50                        PUSH EAX
0044537B  A1 54 A1 7F 00            MOV EAX,[0x007fa154]
00445380  50                        PUSH EAX
00445381  E8 BA 8D 26 00            CALL 0x006ae140
LAB_00445386:
00445386  8B 83 78 55 00 00         MOV EAX,dword ptr [EBX + 0x5578]
0044538C  85 C0                     TEST EAX,EAX
0044538E  7E 12                     JLE 0x004453a2
00445390  8B 15 58 A1 7F 00         MOV EDX,dword ptr [0x007fa158]
00445396  8D 4D F8                  LEA ECX,[EBP + -0x8]
00445399  48                        DEC EAX
0044539A  51                        PUSH ECX
0044539B  50                        PUSH EAX
0044539C  52                        PUSH EDX
0044539D  E8 9E 8D 26 00            CALL 0x006ae140
LAB_004453a2:
004453A2  8B 83 7C 55 00 00         MOV EAX,dword ptr [EBX + 0x557c]
004453A8  85 C0                     TEST EAX,EAX
004453AA  7E 12                     JLE 0x004453be
004453AC  8B 15 5C A1 7F 00         MOV EDX,dword ptr [0x007fa15c]
004453B2  8D 4D F8                  LEA ECX,[EBP + -0x8]
004453B5  48                        DEC EAX
004453B6  51                        PUSH ECX
004453B7  50                        PUSH EAX
004453B8  52                        PUSH EDX
004453B9  E8 82 8D 26 00            CALL 0x006ae140
LAB_004453be:
004453BE  8B 83 80 55 00 00         MOV EAX,dword ptr [EBX + 0x5580]
004453C4  85 C0                     TEST EAX,EAX
004453C6  7E 12                     JLE 0x004453da
004453C8  8B 15 60 A1 7F 00         MOV EDX,dword ptr [0x007fa160]
004453CE  8D 4D F8                  LEA ECX,[EBP + -0x8]
004453D1  48                        DEC EAX
004453D2  51                        PUSH ECX
004453D3  50                        PUSH EAX
004453D4  52                        PUSH EDX
004453D5  E8 66 8D 26 00            CALL 0x006ae140
LAB_004453da:
004453DA  8B 83 84 55 00 00         MOV EAX,dword ptr [EBX + 0x5584]
004453E0  85 C0                     TEST EAX,EAX
004453E2  7E 12                     JLE 0x004453f6
004453E4  8B 15 64 A1 7F 00         MOV EDX,dword ptr [0x007fa164]
004453EA  8D 4D F8                  LEA ECX,[EBP + -0x8]
004453ED  48                        DEC EAX
004453EE  51                        PUSH ECX
004453EF  50                        PUSH EAX
004453F0  52                        PUSH EDX
004453F1  E8 4A 8D 26 00            CALL 0x006ae140
LAB_004453f6:
004453F6  8B 83 8C 55 00 00         MOV EAX,dword ptr [EBX + 0x558c]
004453FC  50                        PUSH EAX
004453FD  E8 6E 58 26 00            CALL 0x006aac70
00445402  A3 68 A1 7F 00            MOV [0x007fa168],EAX
00445407  8B 8B 8C 55 00 00         MOV ECX,dword ptr [EBX + 0x558c]
0044540D  8B B3 88 55 00 00         MOV ESI,dword ptr [EBX + 0x5588]
00445413  8B D1                     MOV EDX,ECX
00445415  03 F3                     ADD ESI,EBX
00445417  8B F8                     MOV EDI,EAX
00445419  C1 E9 02                  SHR ECX,0x2
0044541C  F3 A5                     MOVSD.REP ES:EDI,ESI
0044541E  8B CA                     MOV ECX,EDX
00445420  83 E1 03                  AND ECX,0x3
00445423  F3 A4                     MOVSB.REP ES:EDI,ESI
00445425  5F                        POP EDI
00445426  5E                        POP ESI
00445427  5B                        POP EBX
00445428  8B E5                     MOV ESP,EBP
0044542A  5D                        POP EBP
0044542B  C2 04 00                  RET 0x4
LAB_0044542e:
0044542E  89 BB 16 58 7F 00         MOV dword ptr [EBX + 0x7f5816],EDI
00445434  E9 02 FF FF FF            JMP 0x0044533b
