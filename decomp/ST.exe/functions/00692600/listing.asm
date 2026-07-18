FUN_00692600:
00692600  55                        PUSH EBP
00692601  8B EC                     MOV EBP,ESP
00692603  83 EC 18                  SUB ESP,0x18
00692606  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00692609  53                        PUSH EBX
0069260A  81 C1 54 19 00 00         ADD ECX,0x1954
00692610  56                        PUSH ESI
00692611  57                        PUSH EDI
00692612  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00692619  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0069261c:
0069261C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0069261F  8D 46 FC                  LEA EAX,[ESI + -0x4]
00692622  50                        PUSH EAX
00692623  E8 08 38 09 00            CALL 0x00725e30
00692628  83 C4 04                  ADD ESP,0x4
0069262B  C7 45 EC 06 00 00 00      MOV dword ptr [EBP + -0x14],0x6
LAB_00692632:
00692632  C7 45 F4 06 00 00 00      MOV dword ptr [EBP + -0xc],0x6
LAB_00692639:
00692639  BB 02 00 00 00            MOV EBX,0x2
LAB_0069263e:
0069263E  8B 06                     MOV EAX,dword ptr [ESI]
00692640  85 C0                     TEST EAX,EAX
00692642  74 41                     JZ 0x00692685
00692644  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
00692647  85 C9                     TEST ECX,ECX
00692649  74 0B                     JZ 0x00692656
0069264B  56                        PUSH ESI
0069264C  E8 DF 37 09 00            CALL 0x00725e30
00692651  83 C4 04                  ADD ESP,0x4
00692654  EB 2F                     JMP 0x00692685
LAB_00692656:
00692656  33 FF                     XOR EDI,EDI
00692658  66 39 78 23               CMP word ptr [EAX + 0x23],DI
0069265C  7E 21                     JLE 0x0069267f
LAB_0069265e:
0069265E  8B 0E                     MOV ECX,dword ptr [ESI]
00692660  8D 04 B9                  LEA EAX,[ECX + EDI*0x4]
00692663  8B 4C B9 2D               MOV ECX,dword ptr [ECX + EDI*0x4 + 0x2d]
00692667  85 C9                     TEST ECX,ECX
00692669  74 09                     JZ 0x00692674
0069266B  83 C0 2D                  ADD EAX,0x2d
0069266E  50                        PUSH EAX
0069266F  E8 EC 89 01 00            CALL 0x006ab060
LAB_00692674:
00692674  8B 16                     MOV EDX,dword ptr [ESI]
00692676  47                        INC EDI
00692677  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
0069267B  3B F8                     CMP EDI,EAX
0069267D  7C DF                     JL 0x0069265e
LAB_0069267f:
0069267F  56                        PUSH ESI
00692680  E8 DB 89 01 00            CALL 0x006ab060
LAB_00692685:
00692685  83 C6 04                  ADD ESI,0x4
00692688  4B                        DEC EBX
00692689  75 B3                     JNZ 0x0069263e
0069268B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069268E  48                        DEC EAX
0069268F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00692692  75 A5                     JNZ 0x00692639
00692694  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00692697  48                        DEC EAX
00692698  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069269B  75 95                     JNZ 0x00692632
0069269D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006926A0  C7 45 EC 06 00 00 00      MOV dword ptr [EBP + -0x14],0x6
006926A7  8D B1 20 01 00 00         LEA ESI,[ECX + 0x120]
LAB_006926ad:
006926AD  BB 06 00 00 00            MOV EBX,0x6
LAB_006926b2:
006926B2  8B 06                     MOV EAX,dword ptr [ESI]
006926B4  85 C0                     TEST EAX,EAX
006926B6  74 41                     JZ 0x006926f9
006926B8  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
006926BB  85 C9                     TEST ECX,ECX
006926BD  74 0B                     JZ 0x006926ca
006926BF  56                        PUSH ESI
006926C0  E8 6B 37 09 00            CALL 0x00725e30
006926C5  83 C4 04                  ADD ESP,0x4
006926C8  EB 2F                     JMP 0x006926f9
LAB_006926ca:
006926CA  33 FF                     XOR EDI,EDI
006926CC  66 39 78 23               CMP word ptr [EAX + 0x23],DI
006926D0  7E 21                     JLE 0x006926f3
LAB_006926d2:
006926D2  8B 16                     MOV EDX,dword ptr [ESI]
006926D4  8B 4C BA 2D               MOV ECX,dword ptr [EDX + EDI*0x4 + 0x2d]
006926D8  8D 04 BA                  LEA EAX,[EDX + EDI*0x4]
006926DB  85 C9                     TEST ECX,ECX
006926DD  74 09                     JZ 0x006926e8
006926DF  83 C0 2D                  ADD EAX,0x2d
006926E2  50                        PUSH EAX
006926E3  E8 78 89 01 00            CALL 0x006ab060
LAB_006926e8:
006926E8  8B 06                     MOV EAX,dword ptr [ESI]
006926EA  47                        INC EDI
006926EB  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
006926EF  3B F9                     CMP EDI,ECX
006926F1  7C DF                     JL 0x006926d2
LAB_006926f3:
006926F3  56                        PUSH ESI
006926F4  E8 67 89 01 00            CALL 0x006ab060
LAB_006926f9:
006926F9  83 C6 04                  ADD ESI,0x4
006926FC  4B                        DEC EBX
006926FD  75 B3                     JNZ 0x006926b2
006926FF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00692702  48                        DEC EAX
00692703  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00692706  75 A5                     JNZ 0x006926ad
00692708  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0069270B  C7 45 E8 06 00 00 00      MOV dword ptr [EBP + -0x18],0x6
00692712  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00692715:
00692715  33 C9                     XOR ECX,ECX
00692717  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_0069271a:
0069271A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069271D  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
00692720  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00692723  8B 94 98 08 1B 00 00      MOV EDX,dword ptr [EAX + EBX*0x4 + 0x1b08]
0069272A  85 D2                     TEST EDX,EDX
0069272C  74 56                     JZ 0x00692784
0069272E  8B 8C 98 08 1B 00 00      MOV ECX,dword ptr [EAX + EBX*0x4 + 0x1b08]
00692735  8D B4 98 08 1B 00 00      LEA ESI,[EAX + EBX*0x4 + 0x1b08]
0069273C  33 FF                     XOR EDI,EDI
0069273E  66 39 79 23               CMP word ptr [ECX + 0x23],DI
00692742  7E 30                     JLE 0x00692774
LAB_00692744:
00692744  8B 16                     MOV EDX,dword ptr [ESI]
00692746  8B 4C BA 2D               MOV ECX,dword ptr [EDX + EDI*0x4 + 0x2d]
0069274A  85 C9                     TEST ECX,ECX
0069274C  74 1B                     JZ 0x00692769
0069274E  8D B4 98 08 1B 00 00      LEA ESI,[EAX + EBX*0x4 + 0x1b08]
00692755  8B 84 98 08 1B 00 00      MOV EAX,dword ptr [EAX + EBX*0x4 + 0x1b08]
0069275C  8D 4C B8 2D               LEA ECX,[EAX + EDI*0x4 + 0x2d]
00692760  51                        PUSH ECX
00692761  E8 FA 88 01 00            CALL 0x006ab060
00692766  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00692769:
00692769  8B 16                     MOV EDX,dword ptr [ESI]
0069276B  47                        INC EDI
0069276C  0F BF 4A 23               MOVSX ECX,word ptr [EDX + 0x23]
00692770  3B F9                     CMP EDI,ECX
00692772  7C D0                     JL 0x00692744
LAB_00692774:
00692774  8D 94 98 08 1B 00 00      LEA EDX,[EAX + EBX*0x4 + 0x1b08]
0069277B  52                        PUSH EDX
0069277C  E8 DF 88 01 00            CALL 0x006ab060
00692781  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_00692784:
00692784  41                        INC ECX
00692785  83 F9 06                  CMP ECX,0x6
00692788  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0069278B  7C 8D                     JL 0x0069271a
0069278D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00692790  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00692793  83 C1 06                  ADD ECX,0x6
00692796  48                        DEC EAX
00692797  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0069279A  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0069279D  0F 85 72 FF FF FF         JNZ 0x00692715
006927A3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006927A6  8D 86 B0 01 00 00         LEA EAX,[ESI + 0x1b0]
006927AC  50                        PUSH EAX
006927AD  E8 7E 36 09 00            CALL 0x00725e30
006927B2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006927B5  83 C4 04                  ADD ESP,0x4
006927B8  05 92 00 00 00            ADD EAX,0x92
006927BD  81 C6 48 02 00 00         ADD ESI,0x248
006927C3  3D B6 01 00 00            CMP EAX,0x1b6
006927C8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006927CB  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006927CE  0F 8C 48 FE FF FF         JL 0x0069261c
006927D4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006927D7  C7 45 F8 20 01 00 00      MOV dword ptr [EBP + -0x8],0x120
LAB_006927de:
006927DE  33 DB                     XOR EBX,EBX
LAB_006927e0:
006927E0  8B F8                     MOV EDI,EAX
006927E2  BE 1E 00 00 00            MOV ESI,0x1e
LAB_006927e7:
006927E7  83 3F 00                  CMP dword ptr [EDI],0x0
006927EA  74 06                     JZ 0x006927f2
006927EC  57                        PUSH EDI
006927ED  E8 6E 88 01 00            CALL 0x006ab060
LAB_006927f2:
006927F2  83 C7 04                  ADD EDI,0x4
006927F5  4E                        DEC ESI
006927F6  75 EF                     JNZ 0x006927e7
006927F8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006927FB  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006927FE  BF 0A 00 00 00            MOV EDI,0xa
00692803  8D 84 19 4C FF FF FF      LEA EAX,[ECX + EBX*0x1 + 0xffffff4c]
0069280A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0069280D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00692810  8D 34 D0                  LEA ESI,[EAX + EDX*0x8]
LAB_00692813:
00692813  83 3E 00                  CMP dword ptr [ESI],0x0
00692816  74 06                     JZ 0x0069281e
00692818  56                        PUSH ESI
00692819  E8 42 88 01 00            CALL 0x006ab060
LAB_0069281e:
0069281E  83 C6 04                  ADD ESI,0x4
00692821  4F                        DEC EDI
00692822  75 EF                     JNZ 0x00692813
00692824  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00692827  8D 04 19                  LEA EAX,[ECX + EBX*0x1]
0069282A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0069282D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00692830  8D 34 90                  LEA ESI,[EAX + EDX*0x4]
00692833  85 F6                     TEST ESI,ESI
00692835  74 16                     JZ 0x0069284d
00692837  BF 05 00 00 00            MOV EDI,0x5
LAB_0069283c:
0069283C  83 3E 00                  CMP dword ptr [ESI],0x0
0069283F  74 06                     JZ 0x00692847
00692841  56                        PUSH ESI
00692842  E8 19 88 01 00            CALL 0x006ab060
LAB_00692847:
00692847  83 C6 04                  ADD ESI,0x4
0069284A  4F                        DEC EDI
0069284B  75 EF                     JNZ 0x0069283c
LAB_0069284d:
0069284D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00692850  43                        INC EBX
00692851  83 FB 06                  CMP EBX,0x6
00692854  7C 8A                     JL 0x006927e0
00692856  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00692859  83 C1 06                  ADD ECX,0x6
0069285C  81 F9 44 01 00 00         CMP ECX,0x144
00692862  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00692865  0F 8C 73 FF FF FF         JL 0x006927de
0069286B  5F                        POP EDI
0069286C  5E                        POP ESI
0069286D  5B                        POP EBX
0069286E  8B E5                     MOV ESP,EBP
00692870  5D                        POP EBP
00692871  C3                        RET
