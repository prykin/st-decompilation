FUN_00691690:
00691690  55                        PUSH EBP
00691691  8B EC                     MOV EBP,ESP
00691693  81 EC 8C 01 00 00         SUB ESP,0x18c
00691699  53                        PUSH EBX
0069169A  56                        PUSH ESI
0069169B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0069169E  57                        PUSH EDI
0069169F  6A 00                     PUSH 0x0
006916A1  6A 00                     PUSH 0x0
006916A3  8B D9                     MOV EBX,ECX
006916A5  68 B8 59 7D 00            PUSH 0x7d59b8
006916AA  56                        PUSH ESI
006916AB  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006916AE  E8 DD 16 06 00            CALL 0x006f2d90
006916B3  83 C4 10                  ADD ESP,0x10
006916B6  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006916B9  85 C0                     TEST EAX,EAX
006916BB  74 1E                     JZ 0x006916db
006916BD  8D BB AC 37 00 00         LEA EDI,[EBX + 0x37ac]
006916C3  B9 0F 00 00 00            MOV ECX,0xf
006916C8  8B F0                     MOV ESI,EAX
006916CA  8D 45 CC                  LEA EAX,[EBP + -0x34]
006916CD  F3 A5                     MOVSD.REP ES:EDI,ESI
006916CF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006916D2  50                        PUSH EAX
006916D3  E8 08 0A 06 00            CALL 0x006f20e0
006916D8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_006916db:
006916DB  6A 00                     PUSH 0x0
006916DD  6A 00                     PUSH 0x0
006916DF  68 AC 59 7D 00            PUSH 0x7d59ac
006916E4  56                        PUSH ESI
006916E5  E8 A6 16 06 00            CALL 0x006f2d90
006916EA  83 C4 10                  ADD ESP,0x10
006916ED  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006916F0  85 C0                     TEST EAX,EAX
006916F2  74 23                     JZ 0x00691717
006916F4  8B C8                     MOV ECX,EAX
006916F6  B8 34 59 7D 00            MOV EAX,0x7d5934
LAB_006916fb:
006916FB  8B 11                     MOV EDX,dword ptr [ECX]
006916FD  83 C1 04                  ADD ECX,0x4
00691700  89 10                     MOV dword ptr [EAX],EDX
00691702  83 C0 08                  ADD EAX,0x8
00691705  3D 5C 59 7D 00            CMP EAX,0x7d595c
0069170A  7C EF                     JL 0x006916fb
0069170C  8D 45 D4                  LEA EAX,[EBP + -0x2c]
0069170F  8B CE                     MOV ECX,ESI
00691711  50                        PUSH EAX
00691712  E8 C9 09 06 00            CALL 0x006f20e0
LAB_00691717:
00691717  33 F6                     XOR ESI,ESI
00691719  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0069171C  EB 06                     JMP 0x00691724
LAB_0069171e:
0069171E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00691721  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_00691724:
00691724  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00691727  85 C0                     TEST EAX,EAX
00691729  74 33                     JZ 0x0069175e
0069172B  6A 01                     PUSH 0x1
0069172D  6A 02                     PUSH 0x2
0069172F  56                        PUSH ESI
00691730  68 A4 59 7D 00            PUSH 0x7d59a4
00691735  8B CB                     MOV ECX,EBX
00691737  E8 2F 2E D7 FF            CALL 0x0040456b
0069173C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069173F  50                        PUSH EAX
00691740  51                        PUSH ECX
00691741  E8 1A 45 09 00            CALL 0x00725c60
00691746  8D 14 F6                  LEA EDX,[ESI + ESI*0x8]
00691749  83 C4 10                  ADD ESP,0x10
0069174C  8D 0C D6                  LEA ECX,[ESI + EDX*0x8]
0069174F  50                        PUSH EAX
00691750  89 84 CB 50 19 00 00      MOV dword ptr [EBX + ECX*0x8 + 0x1950],EAX
00691757  8B CB                     MOV ECX,EBX
00691759  E8 D1 0F D7 FF            CALL 0x0040272f
LAB_0069175e:
0069175E  68 F2 04 00 00            PUSH 0x4f2
00691763  E8 68 ED 01 00            CALL 0x006b04d0
00691768  85 C0                     TEST EAX,EAX
0069176A  0F 84 A6 00 00 00         JZ 0x00691816
00691770  8B C8                     MOV ECX,EAX
00691772  E8 29 A5 04 00            CALL 0x006dbca0
00691777  8B D8                     MOV EBX,EAX
00691779  85 DB                     TEST EBX,EBX
0069177B  75 15                     JNZ 0x00691792
LAB_0069177d:
0069177D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00691783  6A 4E                     PUSH 0x4e
00691785  68 80 59 7D 00            PUSH 0x7d5980
0069178A  52                        PUSH EDX
0069178B  6A FE                     PUSH -0x2
0069178D  E8 AE 46 01 00            CALL 0x006a5e40
LAB_00691792:
00691792  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00691795  B8 28 00 00 00            MOV EAX,0x28
0069179A  99                        CDQ
0069179B  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
006917A2  33 FF                     XOR EDI,EDI
006917A4  8B CB                     MOV ECX,EBX
006917A6  57                        PUSH EDI
006917A7  68 97 EE 23 40            PUSH 0x4023ee97
006917AC  68 40 35 5E 86            PUSH 0x865e3540
006917B1  68 00 00 24 40            PUSH 0x40240000
006917B6  57                        PUSH EDI
006917B7  68 00 00 24 40            PUSH 0x40240000
006917BC  57                        PUSH EDI
006917BD  68 00 00 24 C0            PUSH 0xc0240000
006917C2  57                        PUSH EDI
006917C3  68 00 00 24 40            PUSH 0x40240000
006917C8  57                        PUSH EDI
006917C9  68 00 00 24 C0            PUSH 0xc0240000
006917CE  57                        PUSH EDI
006917CF  50                        PUSH EAX
006917D0  50                        PUSH EAX
006917D1  57                        PUSH EDI
006917D2  57                        PUSH EDI
006917D3  57                        PUSH EDI
006917D4  E8 77 A8 04 00            CALL 0x006dc050
006917D9  68 00 00 24 40            PUSH 0x40240000
006917DE  57                        PUSH EDI
006917DF  68 00 00 24 40            PUSH 0x40240000
006917E4  57                        PUSH EDI
006917E5  6A 04                     PUSH 0x4
006917E7  8B CB                     MOV ECX,EBX
006917E9  E8 22 BE 04 00            CALL 0x006dd610
006917EE  68 7F F8 15 43            PUSH 0x4315f87f
006917F3  8B CB                     MOV ECX,EBX
006917F5  89 BB 28 01 00 00         MOV dword ptr [EBX + 0x128],EDI
006917FB  E8 90 BF 04 00            CALL 0x006dd790
00691800  68 07 33 48 43            PUSH 0x43483307
00691805  8B CB                     MOV ECX,EBX
00691807  E8 F4 BF 04 00            CALL 0x006dd800
0069180C  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_0069180f:
0069180F  33 C0                     XOR EAX,EAX
00691811  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00691814  EB 0A                     JMP 0x00691820
LAB_00691816:
00691816  33 DB                     XOR EBX,EBX
00691818  E9 60 FF FF FF            JMP 0x0069177d
LAB_0069181d:
0069181D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00691820:
00691820  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00691823  85 C9                     TEST ECX,ECX
00691825  0F 84 DC 00 00 00         JZ 0x00691907
0069182B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069182E  85 C9                     TEST ECX,ECX
00691830  0F 85 D1 00 00 00         JNZ 0x00691907
00691836  85 C0                     TEST EAX,EAX
00691838  0F 85 C9 00 00 00         JNZ 0x00691907
0069183E  33 FF                     XOR EDI,EDI
LAB_00691840:
00691840  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00691843  56                        PUSH ESI
00691844  57                        PUSH EDI
00691845  6A 00                     PUSH 0x0
00691847  6A 00                     PUSH 0x0
00691849  E8 5C 16 D7 FF            CALL 0x00402eaa
0069184E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00691851  50                        PUSH EAX
00691852  6A 07                     PUSH 0x7
00691854  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00691857  E8 64 09 06 00            CALL 0x006f21c0
0069185C  85 C0                     TEST EAX,EAX
0069185E  75 33                     JNZ 0x00691893
00691860  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00691863  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00691866  6A 01                     PUSH 0x1
00691868  6A 02                     PUSH 0x2
0069186A  50                        PUSH EAX
0069186B  51                        PUSH ECX
0069186C  E8 EF 43 09 00            CALL 0x00725c60
00691871  8D 14 F6                  LEA EDX,[ESI + ESI*0x8]
00691874  83 C4 10                  ADD ESP,0x10
00691877  8D 0C D6                  LEA ECX,[ESI + EDX*0x8]
0069187A  50                        PUSH EAX
0069187B  8D 14 4F                  LEA EDX,[EDI + ECX*0x2]
0069187E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00691881  89 84 91 54 19 00 00      MOV dword ptr [ECX + EDX*0x4 + 0x1954],EAX
00691888  E8 A2 0E D7 FF            CALL 0x0040272f
0069188D  47                        INC EDI
0069188E  83 FF 02                  CMP EDI,0x2
00691891  7C AD                     JL 0x00691840
LAB_00691893:
00691893  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00691896  6A 00                     PUSH 0x0
00691898  6A 00                     PUSH 0x0
0069189A  56                        PUSH ESI
0069189B  68 78 59 7D 00            PUSH 0x7d5978
006918A0  8B CF                     MOV ECX,EDI
006918A2  E8 C4 2C D7 FF            CALL 0x0040456b
006918A7  50                        PUSH EAX
006918A8  8D 85 74 FE FF FF         LEA EAX,[EBP + 0xfffffe74]
006918AE  68 70 59 7D 00            PUSH 0x7d5970
006918B3  50                        PUSH EAX
006918B4  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006918BA  83 C4 14                  ADD ESP,0x14
006918BD  8D 8D 74 FE FF FF         LEA ECX,[EBP + 0xfffffe74]
006918C3  51                        PUSH ECX
006918C4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006918C7  6A 07                     PUSH 0x7
006918C9  E8 F2 08 06 00            CALL 0x006f21c0
006918CE  85 C0                     TEST EAX,EAX
006918D0  0F 85 8A 07 00 00         JNZ 0x00692060
006918D6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006918D9  6A 01                     PUSH 0x1
006918DB  8D 95 74 FE FF FF         LEA EDX,[EBP + 0xfffffe74]
006918E1  6A 02                     PUSH 0x2
006918E3  52                        PUSH EDX
006918E4  50                        PUSH EAX
006918E5  E8 76 43 09 00            CALL 0x00725c60
006918EA  8D 0C F6                  LEA ECX,[ESI + ESI*0x8]
006918ED  83 C4 10                  ADD ESP,0x10
006918F0  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
006918F3  50                        PUSH EAX
006918F4  8B CF                     MOV ECX,EDI
006918F6  89 84 D7 74 1A 00 00      MOV dword ptr [EDI + EDX*0x8 + 0x1a74],EAX
006918FD  E8 2D 0E D7 FF            CALL 0x0040272f
00691902  E9 59 07 00 00            JMP 0x00692060
LAB_00691907:
00691907  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0069190A  85 C9                     TEST ECX,ECX
0069190C  74 07                     JZ 0x00691915
0069190E  6A 00                     PUSH 0x0
00691910  FF D1                     CALL ECX
00691912  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00691915:
00691915  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00691918  85 C9                     TEST ECX,ECX
0069191A  75 01                     JNZ 0x0069191d
0069191C  40                        INC EAX
LAB_0069191d:
0069191D  6A 00                     PUSH 0x0
0069191F  6A 01                     PUSH 0x1
00691921  50                        PUSH EAX
00691922  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00691925  50                        PUSH EAX
00691926  6A 01                     PUSH 0x1
00691928  E8 80 35 D7 FF            CALL 0x00404ead
0069192D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00691930  6A 00                     PUSH 0x0
00691932  50                        PUSH EAX
00691933  51                        PUSH ECX
00691934  E8 97 F3 05 00            CALL 0x006f0cd0
00691939  83 C4 20                  ADD ESP,0x20
0069193C  85 C0                     TEST EAX,EAX
0069193E  0F 84 91 02 00 00         JZ 0x00691bd5
00691944  68 A9 00 00 00            PUSH 0xa9
00691949  E8 22 93 01 00            CALL 0x006aac70
0069194E  8B F8                     MOV EDI,EAX
00691950  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00691953  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00691956  8D 14 F6                  LEA EDX,[ESI + ESI*0x8]
00691959  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0069195C  D1 E0                     SHL EAX,0x1
0069195E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00691961  03 C6                     ADD EAX,ESI
00691963  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00691966  03 C1                     ADD EAX,ECX
00691968  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0069196B  8D 94 C1 54 19 00 00      LEA EDX,[ECX + EAX*0x8 + 0x1954]
00691972  B9 2A 00 00 00            MOV ECX,0x2a
00691977  33 C0                     XOR EAX,EAX
00691979  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0069197C  89 3A                     MOV dword ptr [EDX],EDI
0069197E  F3 AB                     STOSD.REP ES:EDI
00691980  AA                        STOSB ES:EDI
00691981  8B 12                     MOV EDX,dword ptr [EDX]
00691983  33 FF                     XOR EDI,EDI
00691985  B8 28 00 00 00            MOV EAX,0x28
0069198A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0069198D  66 89 7A 23               MOV word ptr [EDX + 0x23],DI
00691991  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00691994  99                        CDQ
00691995  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
0069199C  8B 11                     MOV EDX,dword ptr [ECX]
0069199E  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006919A1  66 89 42 29               MOV word ptr [EDX + 0x29],AX
006919A5  B8 28 00 00 00            MOV EAX,0x28
006919AA  99                        CDQ
006919AB  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
006919B2  8B 09                     MOV ECX,dword ptr [ECX]
006919B4  66 89 41 2B               MOV word ptr [ECX + 0x2b],AX
LAB_006919b8:
006919B8  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_006919bf:
006919BF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006919C2  85 C0                     TEST EAX,EAX
006919C4  75 08                     JNZ 0x006919ce
006919C6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006919C9  8D 4A 01                  LEA ECX,[EDX + 0x1]
006919CC  EB 03                     JMP 0x006919d1
LAB_006919ce:
006919CE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006919d1:
006919D1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006919D4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006919D7  50                        PUSH EAX
006919D8  8D 42 01                  LEA EAX,[EDX + 0x1]
006919DB  50                        PUSH EAX
006919DC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006919DF  51                        PUSH ECX
006919E0  50                        PUSH EAX
006919E1  6A 01                     PUSH 0x1
006919E3  E8 C5 34 D7 FF            CALL 0x00404ead
006919E8  8B D0                     MOV EDX,EAX
006919EA  B9 14 00 00 00            MOV ECX,0x14
006919EF  33 C0                     XOR EAX,EAX
006919F1  8D BD 78 FF FF FF         LEA EDI,[EBP + 0xffffff78]
006919F7  F3 AB                     STOSD.REP ES:EDI
006919F9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006919FC  50                        PUSH EAX
006919FD  52                        PUSH EDX
006919FE  51                        PUSH ECX
006919FF  E8 CC F2 05 00            CALL 0x006f0cd0
00691A04  83 C4 20                  ADD ESP,0x20
00691A07  85 C0                     TEST EAX,EAX
00691A09  0F 84 92 01 00 00         JZ 0x00691ba1
00691A0F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00691A12  85 D2                     TEST EDX,EDX
00691A14  75 26                     JNZ 0x00691a3c
00691A16  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00691A19  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00691A1C  8D 50 04                  LEA EDX,[EAX + 0x4]
00691A1F  8D 0C 79                  LEA ECX,[ECX + EDI*0x2]
00691A22  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00691A25  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00691A28  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
00691A2B  03 CF                     ADD ECX,EDI
00691A2D  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00691A30  C1 E1 04                  SHL ECX,0x4
00691A33  8D 8C 39 28 20 00 00      LEA ECX,[ECX + EDI*0x1 + 0x2028]
00691A3A  EB 29                     JMP 0x00691a65
LAB_00691a3c:
00691A3C  83 FA 01                  CMP EDX,0x1
00691A3F  75 3D                     JNZ 0x00691a7e
00691A41  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00691A44  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00691A47  8D 50 04                  LEA EDX,[EAX + 0x4]
00691A4A  8D 0C 4F                  LEA ECX,[EDI + ECX*0x2]
00691A4D  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00691A50  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00691A53  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
00691A56  03 CF                     ADD ECX,EDI
00691A58  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00691A5B  C1 E1 04                  SHL ECX,0x4
00691A5E  8D 8C 39 68 2B 00 00      LEA ECX,[ECX + EDI*0x1 + 0x2b68]
LAB_00691a65:
00691A65  8B 3A                     MOV EDI,dword ptr [EDX]
00691A67  89 39                     MOV dword ptr [ECX],EDI
00691A69  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
00691A6C  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
00691A6F  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
00691A72  89 79 08                  MOV dword ptr [ECX + 0x8],EDI
00691A75  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
00691A78  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
00691A7B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00691a7e:
00691A7E  0F BF 08                  MOVSX ECX,word ptr [EAX]
00691A81  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
00691A84  8D 48 14                  LEA ECX,[EAX + 0x14]
00691A87  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
00691A8A  33 FF                     XOR EDI,EDI
00691A8C  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
00691A90  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
00691A93  3B D7                     CMP EDX,EDI
00691A95  0F BF 08                  MOVSX ECX,word ptr [EAX]
00691A98  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00691A9B  8D 44 88 14               LEA EAX,[EAX + ECX*0x4 + 0x14]
00691A9F  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00691AA2  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00691AA5  88 45 C0                  MOV byte ptr [EBP + -0x40],AL
00691AA8  75 07                     JNZ 0x00691ab1
00691AAA  66 33 C9                  XOR CX,CX
00691AAD  8A C8                     MOV CL,AL
00691AAF  EB 08                     JMP 0x00691ab9
LAB_00691ab1:
00691AB1  66 0F B6 C0               MOVZX AX,AL
00691AB5  8D 4C 10 FF               LEA ECX,[EAX + EDX*0x1 + -0x1]
LAB_00691ab9:
00691AB9  66 89 4D 80               MOV word ptr [EBP + -0x80],CX
00691ABD  8B 93 40 01 00 00         MOV EDX,dword ptr [EBX + 0x140]
00691AC3  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
00691AC9  8B 8B 3C 01 00 00         MOV ECX,dword ptr [EBX + 0x13c]
00691ACF  41                        INC ECX
00691AD0  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
00691AD6  89 8B 3C 01 00 00         MOV dword ptr [EBX + 0x13c],ECX
00691ADC  8B CB                     MOV ECX,EBX
00691ADE  89 83 40 01 00 00         MOV dword ptr [EBX + 0x140],EAX
00691AE4  E8 F7 C0 04 00            CALL 0x006ddbe0
00691AE9  8B CB                     MOV ECX,EBX
00691AEB  C7 83 24 01 00 00 05 00 00 00  MOV dword ptr [EBX + 0x124],0x5
00691AF5  E8 56 C2 04 00            CALL 0x006ddd50
00691AFA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00691AFD  89 BB 40 01 00 00         MOV dword ptr [EBX + 0x140],EDI
00691B03  3B C7                     CMP EAX,EDI
00691B05  89 BB 3C 01 00 00         MOV dword ptr [EBX + 0x13c],EDI
00691B0B  74 56                     JZ 0x00691b63
00691B0D  B8 28 00 00 00            MOV EAX,0x28
00691B12  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00691B15  99                        CDQ
00691B16  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
00691B1D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00691B20  6A 01                     PUSH 0x1
00691B22  50                        PUSH EAX
00691B23  50                        PUSH EAX
00691B24  51                        PUSH ECX
00691B25  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00691B28  52                        PUSH EDX
00691B29  E8 8D 39 D7 FF            CALL 0x004054bb
00691B2E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00691B31  57                        PUSH EDI
00691B32  57                        PUSH EDI
00691B33  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
00691B36  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00691B39  50                        PUSH EAX
00691B3A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00691B3D  8B 17                     MOV EDX,dword ptr [EDI]
00691B3F  03 C1                     ADD EAX,ECX
00691B41  8D 44 82 2D               LEA EAX,[EDX + EAX*0x4 + 0x2d]
00691B45  50                        PUSH EAX
00691B46  E8 D5 2F 02 00            CALL 0x006b4b20
00691B4B  8D 4D C8                  LEA ECX,[EBP + -0x38]
00691B4E  51                        PUSH ECX
00691B4F  E8 0C 95 01 00            CALL 0x006ab060
00691B54  8B 07                     MOV EAX,dword ptr [EDI]
00691B56  66 FF 40 23               INC word ptr [EAX + 0x23]
00691B5A  8B 17                     MOV EDX,dword ptr [EDI]
00691B5C  C7 42 25 00 00 00 00      MOV dword ptr [EDX + 0x25],0x0
LAB_00691b63:
00691B63  85 F6                     TEST ESI,ESI
00691B65  75 43                     JNZ 0x00691baa
00691B67  68 40 06 00 00            PUSH 0x640
00691B6C  E8 FF 90 01 00            CALL 0x006aac70
00691B71  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00691B74  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00691B77  03 CA                     ADD ECX,EDX
00691B79  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00691B7C  8B F8                     MOV EDI,EAX
00691B7E  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
00691B81  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00691B84  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00691B87  8D 14 8A                  LEA EDX,[EDX + ECX*0x4]
00691B8A  03 CA                     ADD ECX,EDX
00691B8C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00691B8F  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
00691B92  8B 73 0C                  MOV ESI,dword ptr [EBX + 0xc]
00691B95  B9 90 01 00 00            MOV ECX,0x190
00691B9A  F3 A5                     MOVSD.REP ES:EDI,ESI
00691B9C  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00691B9F  EB 09                     JMP 0x00691baa
LAB_00691ba1:
00691BA1  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00691BA4  8B 00                     MOV EAX,dword ptr [EAX]
00691BA6  66 FF 40 23               INC word ptr [EAX + 0x23]
LAB_00691baa:
00691BAA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00691BAD  40                        INC EAX
00691BAE  83 F8 0F                  CMP EAX,0xf
00691BB1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00691BB4  0F 8C 05 FE FF FF         JL 0x006919bf
00691BBA  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00691BBD  8D 41 01                  LEA EAX,[ECX + 0x1]
00691BC0  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00691BC3  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00691BC6  83 C0 0F                  ADD EAX,0xf
00691BC9  83 F8 1E                  CMP EAX,0x1e
00691BCC  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00691BCF  0F 8C E3 FD FF FF         JL 0x006919b8
LAB_00691bd5:
00691BD5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00691BD8  85 C9                     TEST ECX,ECX
00691BDA  75 08                     JNZ 0x00691be4
00691BDC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00691BDF  8D 42 01                  LEA EAX,[EDX + 0x1]
00691BE2  EB 03                     JMP 0x00691be7
LAB_00691be4:
00691BE4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00691be7:
00691BE7  6A 01                     PUSH 0x1
00691BE9  6A 00                     PUSH 0x0
00691BEB  50                        PUSH EAX
00691BEC  51                        PUSH ECX
00691BED  6A 00                     PUSH 0x0
00691BEF  E8 B9 32 D7 FF            CALL 0x00404ead
00691BF4  6A 00                     PUSH 0x0
00691BF6  50                        PUSH EAX
00691BF7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00691BFA  50                        PUSH EAX
00691BFB  E8 D0 F0 05 00            CALL 0x006f0cd0
00691C00  83 C4 20                  ADD ESP,0x20
00691C03  85 C0                     TEST EAX,EAX
00691C05  0F 84 14 02 00 00         JZ 0x00691e1f
00691C0B  6A 59                     PUSH 0x59
00691C0D  E8 5E 90 01 00            CALL 0x006aac70
00691C12  8B F8                     MOV EDI,EAX
00691C14  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00691C17  8D 0C F6                  LEA ECX,[ESI + ESI*0x8]
00691C1A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00691C1D  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
00691C20  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00691C23  D1 E0                     SHL EAX,0x1
00691C25  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
00691C28  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00691C2B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00691C2E  03 C1                     ADD EAX,ECX
00691C30  B9 16 00 00 00            MOV ECX,0x16
00691C35  8D 94 82 74 1A 00 00      LEA EDX,[EDX + EAX*0x4 + 0x1a74]
00691C3C  33 C0                     XOR EAX,EAX
00691C3E  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00691C41  89 3A                     MOV dword ptr [EDX],EDI
00691C43  F3 AB                     STOSD.REP ES:EDI
00691C45  AA                        STOSB ES:EDI
00691C46  8B 02                     MOV EAX,dword ptr [EDX]
00691C48  33 FF                     XOR EDI,EDI
00691C4A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00691C4D  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00691C50  66 89 78 23               MOV word ptr [EAX + 0x23],DI
00691C54  B8 28 00 00 00            MOV EAX,0x28
00691C59  99                        CDQ
00691C5A  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
00691C61  8B 11                     MOV EDX,dword ptr [ECX]
00691C63  66 89 42 29               MOV word ptr [EDX + 0x29],AX
00691C67  B8 28 00 00 00            MOV EAX,0x28
00691C6C  99                        CDQ
00691C6D  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
00691C74  8B 11                     MOV EDX,dword ptr [ECX]
00691C76  66 89 42 2B               MOV word ptr [EDX + 0x2b],AX
00691C7A  8B 01                     MOV EAX,dword ptr [ECX]
00691C7C  89 78 25                  MOV dword ptr [EAX + 0x25],EDI
LAB_00691c7f:
00691C7F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00691C82  85 C0                     TEST EAX,EAX
00691C84  75 08                     JNZ 0x00691c8e
00691C86  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00691C89  8D 41 01                  LEA EAX,[ECX + 0x1]
00691C8C  EB 03                     JMP 0x00691c91
LAB_00691c8e:
00691C8E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00691c91:
00691C91  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00691C94  8D 4A 01                  LEA ECX,[EDX + 0x1]
00691C97  51                        PUSH ECX
00691C98  6A 00                     PUSH 0x0
00691C9A  50                        PUSH EAX
00691C9B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00691C9E  50                        PUSH EAX
00691C9F  6A 00                     PUSH 0x0
00691CA1  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00691CA4  E8 04 32 D7 FF            CALL 0x00404ead
00691CA9  8B D0                     MOV EDX,EAX
00691CAB  B9 14 00 00 00            MOV ECX,0x14
00691CB0  33 C0                     XOR EAX,EAX
00691CB2  8D BD 78 FF FF FF         LEA EDI,[EBP + 0xffffff78]
00691CB8  F3 AB                     STOSD.REP ES:EDI
00691CBA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00691CBD  50                        PUSH EAX
00691CBE  52                        PUSH EDX
00691CBF  51                        PUSH ECX
00691CC0  E8 0B F0 05 00            CALL 0x006f0cd0
00691CC5  83 C4 20                  ADD ESP,0x20
00691CC8  85 C0                     TEST EAX,EAX
00691CCA  0F 84 2A 01 00 00         JZ 0x00691dfa
00691CD0  0F BF 10                  MOVSX EDX,word ptr [EAX]
00691CD3  8D 48 14                  LEA ECX,[EAX + 0x14]
00691CD6  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
00691CD9  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
00691CDC  33 FF                     XOR EDI,EDI
00691CDE  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00691CE2  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
00691CE5  0F BF 08                  MOVSX ECX,word ptr [EAX]
00691CE8  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00691CEB  8D 54 88 14               LEA EDX,[EAX + ECX*0x4 + 0x14]
00691CEF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00691CF2  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00691CF5  3B CF                     CMP ECX,EDI
00691CF7  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00691CFA  88 45 C0                  MOV byte ptr [EBP + -0x40],AL
00691CFD  75 06                     JNZ 0x00691d05
00691CFF  66 0F B6 C0               MOVZX AX,AL
00691D03  EB 09                     JMP 0x00691d0e
LAB_00691d05:
00691D05  66 33 D2                  XOR DX,DX
00691D08  8A D0                     MOV DL,AL
00691D0A  8D 44 0A FF               LEA EAX,[EDX + ECX*0x1 + -0x1]
LAB_00691d0e:
00691D0E  66 89 45 80               MOV word ptr [EBP + -0x80],AX
00691D12  8B 8B 40 01 00 00         MOV ECX,dword ptr [EBX + 0x140]
00691D18  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
00691D1E  8B 8B 3C 01 00 00         MOV ECX,dword ptr [EBX + 0x13c]
00691D24  41                        INC ECX
00691D25  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
00691D2B  89 8B 3C 01 00 00         MOV dword ptr [EBX + 0x13c],ECX
00691D31  8B CB                     MOV ECX,EBX
00691D33  89 93 40 01 00 00         MOV dword ptr [EBX + 0x140],EDX
00691D39  E8 A2 BE 04 00            CALL 0x006ddbe0
00691D3E  8B CB                     MOV ECX,EBX
00691D40  C7 83 24 01 00 00 05 00 00 00  MOV dword ptr [EBX + 0x124],0x5
00691D4A  E8 01 C0 04 00            CALL 0x006ddd50
00691D4F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00691D52  89 BB 40 01 00 00         MOV dword ptr [EBX + 0x140],EDI
00691D58  3B C7                     CMP EAX,EDI
00691D5A  89 BB 3C 01 00 00         MOV dword ptr [EBX + 0x13c],EDI
00691D60  74 5D                     JZ 0x00691dbf
00691D62  B8 28 00 00 00            MOV EAX,0x28
00691D67  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00691D6A  99                        CDQ
00691D6B  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
00691D72  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00691D75  6A 01                     PUSH 0x1
00691D77  50                        PUSH EAX
00691D78  50                        PUSH EAX
00691D79  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00691D7C  50                        PUSH EAX
00691D7D  51                        PUSH ECX
00691D7E  8B CF                     MOV ECX,EDI
00691D80  E8 36 37 D7 FF            CALL 0x004054bb
00691D85  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00691D88  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00691D8B  03 CA                     ADD ECX,EDX
00691D8D  8B 94 8F 74 1A 00 00      MOV EDX,dword ptr [EDI + ECX*0x4 + 0x1a74]
00691D94  6A 00                     PUSH 0x0
00691D96  6A 00                     PUSH 0x0
00691D98  8D BC 8F 74 1A 00 00      LEA EDI,[EDI + ECX*0x4 + 0x1a74]
00691D9F  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00691DA2  50                        PUSH EAX
00691DA3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00691DA6  8D 4C 82 2D               LEA ECX,[EDX + EAX*0x4 + 0x2d]
00691DAA  51                        PUSH ECX
00691DAB  E8 70 2D 02 00            CALL 0x006b4b20
00691DB0  8D 55 D8                  LEA EDX,[EBP + -0x28]
00691DB3  52                        PUSH EDX
00691DB4  E8 A7 92 01 00            CALL 0x006ab060
00691DB9  8B 3F                     MOV EDI,dword ptr [EDI]
00691DBB  66 FF 47 23               INC word ptr [EDI + 0x23]
LAB_00691dbf:
00691DBF  85 F6                     TEST ESI,ESI
00691DC1  75 4D                     JNZ 0x00691e10
00691DC3  68 40 06 00 00            PUSH 0x640
00691DC8  E8 A3 8E 01 00            CALL 0x006aac70
00691DCD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00691DD0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00691DD3  8B F8                     MOV EDI,EAX
00691DD5  8D 4C 49 36               LEA ECX,[ECX + ECX*0x2 + 0x36]
00691DD9  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
00691DDC  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00691DDF  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00691DE2  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
00691DE5  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00691DE8  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
00691DEB  8B 73 0C                  MOV ESI,dword ptr [EBX + 0xc]
00691DEE  B9 90 01 00 00            MOV ECX,0x190
00691DF3  F3 A5                     MOVSD.REP ES:EDI,ESI
00691DF5  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00691DF8  EB 16                     JMP 0x00691e10
LAB_00691dfa:
00691DFA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00691DFD  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00691E00  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00691E03  03 C8                     ADD ECX,EAX
00691E05  8B 84 8A 74 1A 00 00      MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1a74]
00691E0C  66 FF 40 23               INC word ptr [EAX + 0x23]
LAB_00691e10:
00691E10  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00691E13  83 F8 0A                  CMP EAX,0xa
00691E16  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00691E19  0F 8C 60 FE FF FF         JL 0x00691c7f
LAB_00691e1f:
00691E1F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00691E22  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00691E25  85 C9                     TEST ECX,ECX
00691E27  75 01                     JNZ 0x00691e2a
00691E29  40                        INC EAX
LAB_00691e2a:
00691E2A  6A 01                     PUSH 0x1
00691E2C  6A 01                     PUSH 0x1
00691E2E  50                        PUSH EAX
00691E2F  51                        PUSH ECX
00691E30  6A 03                     PUSH 0x3
00691E32  E8 76 30 D7 FF            CALL 0x00404ead
00691E37  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00691E3A  6A 00                     PUSH 0x0
00691E3C  50                        PUSH EAX
00691E3D  51                        PUSH ECX
00691E3E  E8 8D EE 05 00            CALL 0x006f0cd0
00691E43  83 C4 20                  ADD ESP,0x20
00691E46  85 C0                     TEST EAX,EAX
00691E48  0F 84 12 02 00 00         JZ 0x00692060
00691E4E  6A 45                     PUSH 0x45
00691E50  E8 1B 8E 01 00            CALL 0x006aac70
00691E55  8B F8                     MOV EDI,EAX
00691E57  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00691E5A  8D 14 F6                  LEA EDX,[ESI + ESI*0x8]
00691E5D  8D 0C D6                  LEA ECX,[ESI + EDX*0x8]
00691E60  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00691E63  D1 E2                     SHL EDX,0x1
00691E65  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
00691E68  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00691E6B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00691E6E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00691E71  03 C1                     ADD EAX,ECX
00691E73  B9 11 00 00 00            MOV ECX,0x11
00691E78  8D 94 82 08 1B 00 00      LEA EDX,[EDX + EAX*0x4 + 0x1b08]
00691E7F  33 C0                     XOR EAX,EAX
00691E81  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00691E84  89 3A                     MOV dword ptr [EDX],EDI
00691E86  F3 AB                     STOSD.REP ES:EDI
00691E88  AA                        STOSB ES:EDI
00691E89  8B 02                     MOV EAX,dword ptr [EDX]
00691E8B  33 FF                     XOR EDI,EDI
00691E8D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00691E90  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00691E93  66 89 78 23               MOV word ptr [EAX + 0x23],DI
00691E97  B8 28 00 00 00            MOV EAX,0x28
00691E9C  99                        CDQ
00691E9D  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
00691EA4  8B 11                     MOV EDX,dword ptr [ECX]
00691EA6  66 89 42 29               MOV word ptr [EDX + 0x29],AX
00691EAA  B8 28 00 00 00            MOV EAX,0x28
00691EAF  99                        CDQ
00691EB0  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
00691EB7  8B 11                     MOV EDX,dword ptr [ECX]
00691EB9  66 89 42 2B               MOV word ptr [EDX + 0x2b],AX
00691EBD  8B 01                     MOV EAX,dword ptr [ECX]
00691EBF  89 78 25                  MOV dword ptr [EAX + 0x25],EDI
LAB_00691ec2:
00691EC2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00691EC5  85 C0                     TEST EAX,EAX
00691EC7  75 08                     JNZ 0x00691ed1
00691EC9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00691ECC  8D 41 01                  LEA EAX,[ECX + 0x1]
00691ECF  EB 03                     JMP 0x00691ed4
LAB_00691ed1:
00691ED1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00691ed4:
00691ED4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00691ED7  52                        PUSH EDX
00691ED8  6A 01                     PUSH 0x1
00691EDA  50                        PUSH EAX
00691EDB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00691EDE  50                        PUSH EAX
00691EDF  6A 03                     PUSH 0x3
00691EE1  E8 C7 2F D7 FF            CALL 0x00404ead
00691EE6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00691EE9  6A 00                     PUSH 0x0
00691EEB  50                        PUSH EAX
00691EEC  51                        PUSH ECX
00691EED  E8 DE ED 05 00            CALL 0x006f0cd0
00691EF2  8B D0                     MOV EDX,EAX
00691EF4  83 C4 20                  ADD ESP,0x20
00691EF7  B9 14 00 00 00            MOV ECX,0x14
00691EFC  33 C0                     XOR EAX,EAX
00691EFE  8D BD 78 FF FF FF         LEA EDI,[EBP + 0xffffff78]
00691F04  85 D2                     TEST EDX,EDX
00691F06  F3 AB                     STOSD.REP ES:EDI
00691F08  0F 84 2C 01 00 00         JZ 0x0069203a
00691F0E  0F BF 02                  MOVSX EAX,word ptr [EDX]
00691F11  8D 4A 14                  LEA ECX,[EDX + 0x14]
00691F14  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00691F17  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
00691F1A  33 FF                     XOR EDI,EDI
00691F1C  0F BF 42 02               MOVSX EAX,word ptr [EDX + 0x2]
00691F20  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00691F23  0F BF 02                  MOVSX EAX,word ptr [EDX]
00691F26  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00691F29  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00691F2C  88 45 C0                  MOV byte ptr [EBP + -0x40],AL
00691F2F  8D 54 8A 14               LEA EDX,[EDX + ECX*0x4 + 0x14]
00691F33  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00691F36  3B CF                     CMP ECX,EDI
00691F38  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00691F3B  75 06                     JNZ 0x00691f43
00691F3D  66 0F B6 C0               MOVZX AX,AL
00691F41  EB 09                     JMP 0x00691f4c
LAB_00691f43:
00691F43  66 33 D2                  XOR DX,DX
00691F46  8A D0                     MOV DL,AL
00691F48  8D 44 0A FF               LEA EAX,[EDX + ECX*0x1 + -0x1]
LAB_00691f4c:
00691F4C  66 89 45 80               MOV word ptr [EBP + -0x80],AX
00691F50  8B 8B 40 01 00 00         MOV ECX,dword ptr [EBX + 0x140]
00691F56  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
00691F5C  8B 8B 3C 01 00 00         MOV ECX,dword ptr [EBX + 0x13c]
00691F62  41                        INC ECX
00691F63  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
00691F69  89 8B 3C 01 00 00         MOV dword ptr [EBX + 0x13c],ECX
00691F6F  8B CB                     MOV ECX,EBX
00691F71  89 93 40 01 00 00         MOV dword ptr [EBX + 0x140],EDX
00691F77  E8 64 BC 04 00            CALL 0x006ddbe0
00691F7C  8B CB                     MOV ECX,EBX
00691F7E  C7 83 24 01 00 00 05 00 00 00  MOV dword ptr [EBX + 0x124],0x5
00691F88  E8 C3 BD 04 00            CALL 0x006ddd50
00691F8D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00691F90  89 BB 40 01 00 00         MOV dword ptr [EBX + 0x140],EDI
00691F96  3B C7                     CMP EAX,EDI
00691F98  89 BB 3C 01 00 00         MOV dword ptr [EBX + 0x13c],EDI
00691F9E  74 5D                     JZ 0x00691ffd
00691FA0  B8 28 00 00 00            MOV EAX,0x28
00691FA5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00691FA8  99                        CDQ
00691FA9  F7 3C B5 90 FA 7D 00      IDIV dword ptr [ESI*0x4 + 0x7dfa90]
00691FB0  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00691FB3  6A 01                     PUSH 0x1
00691FB5  50                        PUSH EAX
00691FB6  50                        PUSH EAX
00691FB7  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00691FBA  50                        PUSH EAX
00691FBB  51                        PUSH ECX
00691FBC  8B CF                     MOV ECX,EDI
00691FBE  E8 F8 34 D7 FF            CALL 0x004054bb
00691FC3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00691FC6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00691FC9  03 CA                     ADD ECX,EDX
00691FCB  8B 94 8F 08 1B 00 00      MOV EDX,dword ptr [EDI + ECX*0x4 + 0x1b08]
00691FD2  6A 00                     PUSH 0x0
00691FD4  6A 00                     PUSH 0x0
00691FD6  8D BC 8F 08 1B 00 00      LEA EDI,[EDI + ECX*0x4 + 0x1b08]
00691FDD  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00691FE0  50                        PUSH EAX
00691FE1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00691FE4  8D 4C 82 2D               LEA ECX,[EDX + EAX*0x4 + 0x2d]
00691FE8  51                        PUSH ECX
00691FE9  E8 32 2B 02 00            CALL 0x006b4b20
00691FEE  8D 55 D0                  LEA EDX,[EBP + -0x30]
00691FF1  52                        PUSH EDX
00691FF2  E8 69 90 01 00            CALL 0x006ab060
00691FF7  8B 3F                     MOV EDI,dword ptr [EDI]
00691FF9  66 FF 47 23               INC word ptr [EDI + 0x23]
LAB_00691ffd:
00691FFD  85 F6                     TEST ESI,ESI
00691FFF  75 4F                     JNZ 0x00692050
00692001  68 40 06 00 00            PUSH 0x640
00692006  E8 65 8C 01 00            CALL 0x006aac70
0069200B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069200E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00692011  8B F8                     MOV EDI,EAX
00692013  8D 8C 49 90 00 00 00      LEA ECX,[ECX + ECX*0x2 + 0x90]
0069201A  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
0069201D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00692020  8D 14 8A                  LEA EDX,[EDX + ECX*0x4]
00692023  03 CA                     ADD ECX,EDX
00692025  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00692028  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
0069202B  8B 73 0C                  MOV ESI,dword ptr [EBX + 0xc]
0069202E  B9 90 01 00 00            MOV ECX,0x190
00692033  F3 A5                     MOVSD.REP ES:EDI,ESI
00692035  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00692038  EB 16                     JMP 0x00692050
LAB_0069203a:
0069203A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069203D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00692040  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00692043  03 C8                     ADD ECX,EAX
00692045  8B 84 8A 08 1B 00 00      MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1b08]
0069204C  66 FF 40 23               INC word ptr [EAX + 0x23]
LAB_00692050:
00692050  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00692053  40                        INC EAX
00692054  83 F8 05                  CMP EAX,0x5
00692057  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069205A  0F 8C 62 FE FF FF         JL 0x00691ec2
LAB_00692060:
00692060  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00692063  40                        INC EAX
00692064  83 F8 06                  CMP EAX,0x6
00692067  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069206A  0F 8C AD F7 FF FF         JL 0x0069181d
00692070  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00692073  40                        INC EAX
00692074  83 F8 06                  CMP EAX,0x6
00692077  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0069207A  0F 8C 8F F7 FF FF         JL 0x0069180f
00692080  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00692083  85 C0                     TEST EAX,EAX
00692085  74 36                     JZ 0x006920bd
00692087  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0069208A  6A 01                     PUSH 0x1
0069208C  6A 02                     PUSH 0x2
0069208E  56                        PUSH ESI
0069208F  68 68 59 7D 00            PUSH 0x7d5968
00692094  8B CF                     MOV ECX,EDI
00692096  E8 D0 24 D7 FF            CALL 0x0040456b
0069209B  50                        PUSH EAX
0069209C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069209F  50                        PUSH EAX
006920A0  E8 BB 3B 09 00            CALL 0x00725c60
006920A5  8D 0C F6                  LEA ECX,[ESI + ESI*0x8]
006920A8  83 C4 10                  ADD ESP,0x10
006920AB  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
006920AE  50                        PUSH EAX
006920AF  8B CF                     MOV ECX,EDI
006920B1  89 84 D7 04 1B 00 00      MOV dword ptr [EDI + EDX*0x8 + 0x1b04],EAX
006920B8  E8 72 06 D7 FF            CALL 0x0040272f
LAB_006920bd:
006920BD  85 DB                     TEST EBX,EBX
006920BF  74 10                     JZ 0x006920d1
006920C1  8B CB                     MOV ECX,EBX
006920C3  E8 28 9C 04 00            CALL 0x006dbcf0
006920C8  53                        PUSH EBX
006920C9  E8 E2 C1 09 00            CALL 0x0072e2b0
006920CE  83 C4 04                  ADD ESP,0x4
LAB_006920d1:
006920D1  46                        INC ESI
006920D2  83 FE 03                  CMP ESI,0x3
006920D5  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006920D8  0F 8C 40 F6 FF FF         JL 0x0069171e
006920DE  5F                        POP EDI
006920DF  5E                        POP ESI
006920E0  5B                        POP EBX
006920E1  8B E5                     MOV ESP,EBP
006920E3  5D                        POP EBP
006920E4  C2 10 00                  RET 0x10
