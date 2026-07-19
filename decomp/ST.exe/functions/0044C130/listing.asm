STAllPlayersC::GetTOBJImage:
0044C130  55                        PUSH EBP
0044C131  8B EC                     MOV EBP,ESP
0044C133  81 EC 50 01 00 00         SUB ESP,0x150
0044C139  53                        PUSH EBX
0044C13A  56                        PUSH ESI
0044C13B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0044C13E  57                        PUSH EDI
0044C13F  B9 11 00 00 00            MOV ECX,0x11
0044C144  33 C0                     XOR EAX,EAX
0044C146  8D 7D B0                  LEA EDI,[EBP + -0x50]
0044C149  33 DB                     XOR EBX,EBX
0044C14B  F3 AB                     STOSD.REP ES:EDI
0044C14D  8D 46 FF                  LEA EAX,[ESI + -0x1]
0044C150  3D FD 00 00 00            CMP EAX,0xfd
0044C155  0F 87 3F 03 00 00         JA 0x0044c49a
0044C15B  33 C9                     XOR ECX,ECX
0044C15D  8A 88 E4 C4 44 00         MOV CL,byte ptr [EAX + 0x44c4e4]
switchD_0044c163::switchD:
0044C163  FF 24 8D C8 C4 44 00      JMP dword ptr [ECX*0x4 + 0x44c4c8]
switchD_0044c163::caseD_1:
0044C16A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0044C16D  8D 55 0C                  LEA EDX,[EBP + 0xc]
0044C170  8D 45 FC                  LEA EAX,[EBP + -0x4]
0044C173  52                        PUSH EDX
0044C174  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
0044C17A  50                        PUSH EAX
0044C17B  8D 55 F8                  LEA EDX,[EBP + -0x8]
0044C17E  51                        PUSH ECX
0044C17F  52                        PUSH EDX
0044C180  6A 0E                     PUSH 0xe
0044C182  56                        PUSH ESI
0044C183  57                        PUSH EDI
0044C184  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0044C187  88 9D B0 FE FF FF         MOV byte ptr [EBP + 0xfffffeb0],BL
0044C18D  C6 45 FC 1D               MOV byte ptr [EBP + -0x4],0x1d
0044C191  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044C194  E8 0C 63 FB FF            CALL 0x004024a5
0044C199  8A 85 B0 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb0]
0044C19F  83 C4 1C                  ADD ESP,0x1c
0044C1A2  3A C3                     CMP AL,BL
0044C1A4  74 2A                     JZ 0x0044c1d0
0044C1A6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044C1A9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044C1AC  53                        PUSH EBX
0044C1AD  53                        PUSH EBX
0044C1AE  6A 01                     PUSH 0x1
0044C1B0  53                        PUSH EBX
0044C1B1  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
0044C1B7  6A FF                     PUSH -0x1
0044C1B9  50                        PUSH EAX
0044C1BA  51                        PUSH ECX
0044C1BB  52                        PUSH EDX
0044C1BC  E8 2F D9 2B 00            CALL 0x00709af0
0044C1C1  8B 40 21                  MOV EAX,dword ptr [EAX + 0x21]
0044C1C4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044C1C7  83 C4 20                  ADD ESP,0x20
0044C1CA  8B 14 88                  MOV EDX,dword ptr [EAX + ECX*0x4]
0044C1CD  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_0044c1d0:
0044C1D0  8D 45 0C                  LEA EAX,[EBP + 0xc]
0044C1D3  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044C1D6  50                        PUSH EAX
0044C1D7  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
0044C1DD  51                        PUSH ECX
0044C1DE  8D 45 F8                  LEA EAX,[EBP + -0x8]
0044C1E1  52                        PUSH EDX
0044C1E2  50                        PUSH EAX
0044C1E3  6A 0D                     PUSH 0xd
0044C1E5  56                        PUSH ESI
0044C1E6  57                        PUSH EDI
0044C1E7  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0044C1EA  88 9D B0 FE FF FF         MOV byte ptr [EBP + 0xfffffeb0],BL
0044C1F0  C6 45 FC 1D               MOV byte ptr [EBP + -0x4],0x1d
0044C1F4  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044C1F7  E8 A9 62 FB FF            CALL 0x004024a5
0044C1FC  8A 85 B0 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb0]
0044C202  83 C4 1C                  ADD ESP,0x1c
0044C205  3A C3                     CMP AL,BL
0044C207  74 2A                     JZ 0x0044c233
0044C209  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044C20C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044C20F  53                        PUSH EBX
0044C210  53                        PUSH EBX
0044C211  6A 01                     PUSH 0x1
0044C213  53                        PUSH EBX
0044C214  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
0044C21A  6A FF                     PUSH -0x1
0044C21C  51                        PUSH ECX
0044C21D  52                        PUSH EDX
0044C21E  50                        PUSH EAX
0044C21F  E8 CC D8 2B 00            CALL 0x00709af0
0044C224  8B 48 21                  MOV ECX,dword ptr [EAX + 0x21]
0044C227  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044C22A  83 C4 20                  ADD ESP,0x20
0044C22D  8B 04 91                  MOV EAX,dword ptr [ECX + EDX*0x4]
0044C230  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0044c233:
0044C233  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044C236  8D 55 FC                  LEA EDX,[EBP + -0x4]
0044C239  51                        PUSH ECX
0044C23A  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
0044C240  52                        PUSH EDX
0044C241  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044C244  50                        PUSH EAX
0044C245  51                        PUSH ECX
0044C246  6A 0C                     PUSH 0xc
0044C248  56                        PUSH ESI
0044C249  57                        PUSH EDI
0044C24A  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0044C24D  88 9D B0 FE FF FF         MOV byte ptr [EBP + 0xfffffeb0],BL
0044C253  C6 45 FC 1D               MOV byte ptr [EBP + -0x4],0x1d
0044C257  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044C25A  E8 46 62 FB FF            CALL 0x004024a5
0044C25F  8A 85 B0 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb0]
0044C265  83 C4 1C                  ADD ESP,0x1c
0044C268  3A C3                     CMP AL,BL
0044C26A  74 2A                     JZ 0x0044c296
0044C26C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044C26F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044C272  53                        PUSH EBX
0044C273  53                        PUSH EBX
0044C274  6A 01                     PUSH 0x1
0044C276  53                        PUSH EBX
0044C277  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
0044C27D  6A FF                     PUSH -0x1
0044C27F  52                        PUSH EDX
0044C280  50                        PUSH EAX
0044C281  51                        PUSH ECX
0044C282  E8 69 D8 2B 00            CALL 0x00709af0
0044C287  8B 50 21                  MOV EDX,dword ptr [EAX + 0x21]
0044C28A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044C28D  83 C4 20                  ADD ESP,0x20
0044C290  8B 0C 82                  MOV ECX,dword ptr [EDX + EAX*0x4]
0044C293  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_0044c296:
0044C296  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0044C29C  68 FF 00 00 00            PUSH 0xff
0044C2A1  6A 0A                     PUSH 0xa
0044C2A3  6A 01                     PUSH 0x1
0044C2A5  8D 55 B0                  LEA EDX,[EBP + -0x50]
0044C2A8  6A 11                     PUSH 0x11
0044C2AA  52                        PUSH EDX
0044C2AB  E8 C0 D1 2B 00            CALL 0x00709470
0044C2B0  5F                        POP EDI
0044C2B1  5E                        POP ESI
0044C2B2  5B                        POP EBX
0044C2B3  8B E5                     MOV ESP,EBP
0044C2B5  5D                        POP EBP
0044C2B6  C2 08 00                  RET 0x8
switchD_0044c163::caseD_32:
0044C2B9  8D 45 B0                  LEA EAX,[EBP + -0x50]
0044C2BC  33 FF                     XOR EDI,EDI
0044C2BE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0044c2c1:
0044C2C1  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044C2C4  8D 55 FC                  LEA EDX,[EBP + -0x4]
0044C2C7  51                        PUSH ECX
0044C2C8  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
0044C2CE  52                        PUSH EDX
0044C2CF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044C2D2  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044C2D5  50                        PUSH EAX
0044C2D6  51                        PUSH ECX
0044C2D7  57                        PUSH EDI
0044C2D8  56                        PUSH ESI
0044C2D9  52                        PUSH EDX
0044C2DA  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0044C2DD  88 9D B0 FE FF FF         MOV byte ptr [EBP + 0xfffffeb0],BL
0044C2E3  C6 45 FC 1D               MOV byte ptr [EBP + -0x4],0x1d
0044C2E7  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044C2EA  E8 49 7E FB FF            CALL 0x00404138
0044C2EF  8A 85 B0 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb0]
0044C2F5  83 C4 1C                  ADD ESP,0x1c
0044C2F8  3A C3                     CMP AL,BL
0044C2FA  74 38                     JZ 0x0044c334
0044C2FC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044C2FF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044C302  53                        PUSH EBX
0044C303  53                        PUSH EBX
0044C304  6A 01                     PUSH 0x1
0044C306  53                        PUSH EBX
0044C307  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
0044C30D  6A FF                     PUSH -0x1
0044C30F  50                        PUSH EAX
0044C310  51                        PUSH ECX
0044C311  52                        PUSH EDX
0044C312  E8 D9 D7 2B 00            CALL 0x00709af0
0044C317  8B 08                     MOV ECX,dword ptr [EAX]
0044C319  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044C31C  83 C4 20                  ADD ESP,0x20
0044C31F  49                        DEC ECX
0044C320  3B D1                     CMP EDX,ECX
0044C322  7E 05                     JLE 0x0044c329
0044C324  8B D1                     MOV EDX,ECX
0044C326  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_0044c329:
0044C329  8B 40 21                  MOV EAX,dword ptr [EAX + 0x21]
0044C32C  8B 0C 90                  MOV ECX,dword ptr [EAX + EDX*0x4]
0044C32F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044C332  89 0A                     MOV dword ptr [EDX],ECX
LAB_0044c334:
0044C334  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044C337  47                        INC EDI
0044C338  83 C1 04                  ADD ECX,0x4
0044C33B  83 FF 11                  CMP EDI,0x11
0044C33E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0044C341  0F 8C 7A FF FF FF         JL 0x0044c2c1
0044C347  E9 2B 01 00 00            JMP 0x0044c477
switchD_0044c163::caseD_dc:
0044C34C  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044C34F  8D 55 FC                  LEA EDX,[EBP + -0x4]
0044C352  51                        PUSH ECX
0044C353  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
0044C359  52                        PUSH EDX
0044C35A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044C35D  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044C360  50                        PUSH EAX
0044C361  51                        PUSH ECX
0044C362  6A 0E                     PUSH 0xe
0044C364  56                        PUSH ESI
0044C365  52                        PUSH EDX
0044C366  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0044C369  88 9D B0 FE FF FF         MOV byte ptr [EBP + 0xfffffeb0],BL
0044C36F  C6 45 FC 1D               MOV byte ptr [EBP + -0x4],0x1d
0044C373  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044C376  E8 EA 55 FB FF            CALL 0x00401965
0044C37B  8A 85 B0 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb0]
0044C381  83 C4 1C                  ADD ESP,0x1c
0044C384  3A C3                     CMP AL,BL
0044C386  0F 84 EB 00 00 00         JZ 0x0044c477
0044C38C  E9 BC 00 00 00            JMP 0x0044c44d
switchD_0044c163::caseD_fd:
0044C391  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044C394  8D 55 FC                  LEA EDX,[EBP + -0x4]
0044C397  51                        PUSH ECX
0044C398  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
0044C39E  52                        PUSH EDX
0044C39F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044C3A2  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044C3A5  50                        PUSH EAX
0044C3A6  51                        PUSH ECX
0044C3A7  6A 0E                     PUSH 0xe
0044C3A9  56                        PUSH ESI
0044C3AA  52                        PUSH EDX
0044C3AB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0044C3AE  88 9D B0 FE FF FF         MOV byte ptr [EBP + 0xfffffeb0],BL
0044C3B4  C6 45 FC 1D               MOV byte ptr [EBP + -0x4],0x1d
0044C3B8  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044C3BB  E8 1E 5F FB FF            CALL 0x004022de
0044C3C0  8A 85 B0 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb0]
0044C3C6  83 C4 1C                  ADD ESP,0x1c
0044C3C9  3A C3                     CMP AL,BL
0044C3CB  0F 84 A6 00 00 00         JZ 0x0044c477
0044C3D1  EB 7A                     JMP 0x0044c44d
switchD_0044c163::caseD_fe:
0044C3D3  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044C3D6  8D 55 FC                  LEA EDX,[EBP + -0x4]
0044C3D9  51                        PUSH ECX
0044C3DA  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
0044C3E0  52                        PUSH EDX
0044C3E1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044C3E4  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044C3E7  50                        PUSH EAX
0044C3E8  51                        PUSH ECX
0044C3E9  6A 0E                     PUSH 0xe
0044C3EB  56                        PUSH ESI
0044C3EC  52                        PUSH EDX
0044C3ED  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0044C3F0  88 9D B0 FE FF FF         MOV byte ptr [EBP + 0xfffffeb0],BL
0044C3F6  C6 45 FC 1D               MOV byte ptr [EBP + -0x4],0x1d
0044C3FA  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044C3FD  E8 EC 53 FB FF            CALL 0x004017ee
0044C402  8A 85 B0 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb0]
0044C408  83 C4 1C                  ADD ESP,0x1c
0044C40B  3A C3                     CMP AL,BL
0044C40D  74 68                     JZ 0x0044c477
0044C40F  EB 3C                     JMP 0x0044c44d
switchD_0044c163::caseD_e6:
0044C411  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044C414  8D 55 FC                  LEA EDX,[EBP + -0x4]
0044C417  51                        PUSH ECX
0044C418  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
0044C41E  52                        PUSH EDX
0044C41F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044C422  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044C425  50                        PUSH EAX
0044C426  51                        PUSH ECX
0044C427  6A 0E                     PUSH 0xe
0044C429  56                        PUSH ESI
0044C42A  52                        PUSH EDX
0044C42B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0044C42E  88 9D B0 FE FF FF         MOV byte ptr [EBP + 0xfffffeb0],BL
0044C434  C6 45 FC 1D               MOV byte ptr [EBP + -0x4],0x1d
0044C438  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0044C43B  E8 BA 8D FB FF            CALL 0x004051fa
0044C440  8A 85 B0 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb0]
0044C446  83 C4 1C                  ADD ESP,0x1c
0044C449  3A C3                     CMP AL,BL
0044C44B  74 2A                     JZ 0x0044c477
LAB_0044c44d:
0044C44D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044C450  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044C453  53                        PUSH EBX
0044C454  53                        PUSH EBX
0044C455  6A 01                     PUSH 0x1
0044C457  53                        PUSH EBX
0044C458  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
0044C45E  6A FF                     PUSH -0x1
0044C460  50                        PUSH EAX
0044C461  51                        PUSH ECX
0044C462  52                        PUSH EDX
0044C463  E8 88 D6 2B 00            CALL 0x00709af0
0044C468  8B 40 21                  MOV EAX,dword ptr [EAX + 0x21]
0044C46B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044C46E  83 C4 20                  ADD ESP,0x20
0044C471  8B 14 88                  MOV EDX,dword ptr [EAX + ECX*0x4]
0044C474  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
STAllPlayersC::GetTOBJImage::cf_common_exit_0044C477:
0044C477  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0044C47D  68 FF 00 00 00            PUSH 0xff
0044C482  6A 0A                     PUSH 0xa
0044C484  6A 01                     PUSH 0x1
0044C486  8D 45 B0                  LEA EAX,[EBP + -0x50]
0044C489  6A 11                     PUSH 0x11
0044C48B  50                        PUSH EAX
0044C48C  E8 DF CF 2B 00            CALL 0x00709470
0044C491  5F                        POP EDI
0044C492  5E                        POP ESI
0044C493  5B                        POP EBX
0044C494  8B E5                     MOV ESP,EBP
0044C496  5D                        POP EBP
0044C497  C2 08 00                  RET 0x8
switchD_0044c163::caseD_29:
0044C49A  68 8C 8A 7A 00            PUSH 0x7a8a8c
0044C49F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044C4A4  53                        PUSH EBX
0044C4A5  53                        PUSH EBX
0044C4A6  68 4E 32 00 00            PUSH 0x324e
0044C4AB  68 04 60 7A 00            PUSH 0x7a6004
0044C4B0  E8 1B 10 26 00            CALL 0x006ad4d0
0044C4B5  83 C4 18                  ADD ESP,0x18
0044C4B8  85 C0                     TEST EAX,EAX
0044C4BA  74 01                     JZ 0x0044c4bd
0044C4BC  CC                        INT3
LAB_0044c4bd:
0044C4BD  5F                        POP EDI
0044C4BE  8B C3                     MOV EAX,EBX
0044C4C0  5E                        POP ESI
0044C4C1  5B                        POP EBX
0044C4C2  8B E5                     MOV ESP,EBP
0044C4C4  5D                        POP EBP
0044C4C5  C2 08 00                  RET 0x8
