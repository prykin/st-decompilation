AiFltClassTy::sub_00664960:
00664960  55                        PUSH EBP
00664961  8B EC                     MOV EBP,ESP
00664963  81 EC 98 00 00 00         SUB ESP,0x98
00664969  53                        PUSH EBX
0066496A  8B D9                     MOV EBX,ECX
0066496C  56                        PUSH ESI
0066496D  33 F6                     XOR ESI,ESI
0066496F  8B 83 8B 00 00 00         MOV EAX,dword ptr [EBX + 0x8b]
00664975  3B C6                     CMP EAX,ESI
00664977  74 16                     JZ 0x0066498f
00664979  8B 8B 8F 00 00 00         MOV ECX,dword ptr [EBX + 0x8f]
0066497F  03 C8                     ADD ECX,EAX
00664981  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00664987  3B C1                     CMP EAX,ECX
00664989  0F 82 03 27 00 00         JC 0x00667092
LAB_0066498f:
0066498F  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
00664995  57                        PUSH EDI
00664996  89 93 8F 00 00 00         MOV dword ptr [EBX + 0x8f],EDX
0066499C  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0066499F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006649A5  50                        PUSH EAX
006649A6  E8 1A D4 D9 FF            CALL 0x00401dc5
006649AB  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006649AE  8D 55 C0                  LEA EDX,[EBP + -0x40]
006649B1  51                        PUSH ECX
006649B2  52                        PUSH EDX
006649B3  8B CB                     MOV ECX,EBX
006649B5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006649B8  E8 4F EC D9 FF            CALL 0x0040360c
006649BD  85 C0                     TEST EAX,EAX
006649BF  0F 8C A2 06 00 00         JL 0x00665067
LAB_006649c5:
006649C5  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006649C8  83 F8 3B                  CMP EAX,0x3b
006649CB  0F 87 47 06 00 00         JA 0x00665018
006649D1  33 C9                     XOR ECX,ECX
006649D3  8A 88 08 71 66 00         MOV CL,byte ptr [EAX + 0x667108]
switchD_006649d9::switchD:
006649D9  FF 24 8D 98 70 66 00      JMP dword ptr [ECX*0x4 + 0x667098]
switchD_006649d9::caseD_1:
006649E0  8A 55 C8                  MOV DL,byte ptr [EBP + -0x38]
006649E3  8B 45 C9                  MOV EAX,dword ptr [EBP + -0x37]
006649E6  66 8B 4D CD               MOV CX,word ptr [EBP + -0x33]
006649EA  88 93 39 01 00 00         MOV byte ptr [EBX + 0x139],DL
006649F0  66 8B 55 CF               MOV DX,word ptr [EBP + -0x31]
006649F4  89 83 3A 01 00 00         MOV dword ptr [EBX + 0x13a],EAX
006649FA  8B 45 D5                  MOV EAX,dword ptr [EBP + -0x2b]
006649FD  66 89 8B 3E 01 00 00      MOV word ptr [EBX + 0x13e],CX
00664A04  8B 4D D1                  MOV ECX,dword ptr [EBP + -0x2f]
00664A07  66 89 93 40 01 00 00      MOV word ptr [EBX + 0x140],DX
00664A0E  8B 55 D9                  MOV EDX,dword ptr [EBP + -0x27]
00664A11  89 83 42 01 00 00         MOV dword ptr [EBX + 0x142],EAX
00664A17  89 8B 46 01 00 00         MOV dword ptr [EBX + 0x146],ECX
00664A1D  89 93 4A 01 00 00         MOV dword ptr [EBX + 0x14a],EDX
00664A23  E9 1F 06 00 00            JMP 0x00665047
switchD_006649d9::caseD_2:
00664A28  8A 45 C8                  MOV AL,byte ptr [EBP + -0x38]
00664A2B  8B 4D C9                  MOV ECX,dword ptr [EBP + -0x37]
00664A2E  66 8B 55 CD               MOV DX,word ptr [EBP + -0x33]
00664A32  88 83 87 01 00 00         MOV byte ptr [EBX + 0x187],AL
00664A38  66 8B 45 CF               MOV AX,word ptr [EBP + -0x31]
00664A3C  89 8B 88 01 00 00         MOV dword ptr [EBX + 0x188],ECX
00664A42  8B 4D D1                  MOV ECX,dword ptr [EBP + -0x2f]
00664A45  66 89 93 8C 01 00 00      MOV word ptr [EBX + 0x18c],DX
00664A4C  66 89 83 8E 01 00 00      MOV word ptr [EBX + 0x18e],AX
00664A53  89 8B 90 01 00 00         MOV dword ptr [EBX + 0x190],ECX
00664A59  E9 E9 05 00 00            JMP 0x00665047
switchD_006649d9::caseD_3:
00664A5E  8A 55 C8                  MOV DL,byte ptr [EBP + -0x38]
00664A61  8B 45 C9                  MOV EAX,dword ptr [EBP + -0x37]
00664A64  66 8B 4D CD               MOV CX,word ptr [EBP + -0x33]
00664A68  88 93 52 01 00 00         MOV byte ptr [EBX + 0x152],DL
00664A6E  66 8B 55 CF               MOV DX,word ptr [EBP + -0x31]
00664A72  89 83 53 01 00 00         MOV dword ptr [EBX + 0x153],EAX
00664A78  8B 45 D1                  MOV EAX,dword ptr [EBP + -0x2f]
00664A7B  66 89 8B 57 01 00 00      MOV word ptr [EBX + 0x157],CX
00664A82  8B 4D D5                  MOV ECX,dword ptr [EBP + -0x2b]
00664A85  66 89 93 59 01 00 00      MOV word ptr [EBX + 0x159],DX
00664A8C  89 83 5B 01 00 00         MOV dword ptr [EBX + 0x15b],EAX
00664A92  89 8B 5F 01 00 00         MOV dword ptr [EBX + 0x15f],ECX
00664A98  E9 AA 05 00 00            JMP 0x00665047
switchD_006649d9::caseD_4:
00664A9D  8B 83 0B 02 00 00         MOV EAX,dword ptr [EBX + 0x20b]
00664AA3  8D 55 C8                  LEA EDX,[EBP + -0x38]
00664AA6  52                        PUSH EDX
00664AA7  50                        PUSH EAX
00664AA8  E8 13 97 04 00            CALL 0x006ae1c0
00664AAD  8B 8B 0B 02 00 00         MOV ECX,dword ptr [EBX + 0x20b]
00664AB3  68 CF 13 40 00            PUSH 0x4013cf
00664AB8  51                        PUSH ECX
00664AB9  E8 EA FE D9 FF            CALL 0x004049a8
00664ABE  83 C4 08                  ADD ESP,0x8
00664AC1  E9 5E 05 00 00            JMP 0x00665024
switchD_006649d9::caseD_6:
00664AC6  8A 55 C8                  MOV DL,byte ptr [EBP + -0x38]
00664AC9  88 93 FF 00 00 00         MOV byte ptr [EBX + 0xff],DL
00664ACF  E9 73 05 00 00            JMP 0x00665047
switchD_006649d9::caseD_5:
00664AD4  8B 83 0B 02 00 00         MOV EAX,dword ptr [EBX + 0x20b]
00664ADA  3B C6                     CMP EAX,ESI
00664ADC  0F 84 65 05 00 00         JZ 0x00665047
00664AE2  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
00664AE5  E9 3A 05 00 00            JMP 0x00665024
switchD_006649d9::caseD_7:
00664AEA  8A 45 C8                  MOV AL,byte ptr [EBP + -0x38]
00664AED  8B 4D C9                  MOV ECX,dword ptr [EBP + -0x37]
00664AF0  66 8B 55 CD               MOV DX,word ptr [EBP + -0x33]
00664AF4  88 83 63 01 00 00         MOV byte ptr [EBX + 0x163],AL
00664AFA  66 8B 45 CF               MOV AX,word ptr [EBP + -0x31]
00664AFE  89 8B 64 01 00 00         MOV dword ptr [EBX + 0x164],ECX
00664B04  8B 4D D1                  MOV ECX,dword ptr [EBP + -0x2f]
00664B07  66 89 93 68 01 00 00      MOV word ptr [EBX + 0x168],DX
00664B0E  8B 55 D5                  MOV EDX,dword ptr [EBP + -0x2b]
00664B11  66 89 83 6A 01 00 00      MOV word ptr [EBX + 0x16a],AX
00664B18  89 8B 6C 01 00 00         MOV dword ptr [EBX + 0x16c],ECX
00664B1E  89 93 72 01 00 00         MOV dword ptr [EBX + 0x172],EDX
00664B24  E9 1E 05 00 00            JMP 0x00665047
switchD_006649d9::caseD_8:
00664B29  8B 83 2F 02 00 00         MOV EAX,dword ptr [EBX + 0x22f]
00664B2F  33 D2                     XOR EDX,EDX
00664B31  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00664B34  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00664B37  3B C6                     CMP EAX,ESI
00664B39  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00664B3C  0F 8E 1C 01 00 00         JLE 0x00664c5e
00664B42  0F BF 7D C8               MOVSX EDI,word ptr [EBP + -0x38]
LAB_00664b46:
00664B46  3B D0                     CMP EDX,EAX
00664B48  73 11                     JNC 0x00664b5b
00664B4A  8B 8B 2F 02 00 00         MOV ECX,dword ptr [EBX + 0x22f]
00664B50  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00664B53  0F AF C2                  IMUL EAX,EDX
00664B56  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00664B59  EB 02                     JMP 0x00664b5d
LAB_00664b5b:
00664B5B  33 C0                     XOR EAX,EAX
LAB_00664b5d:
00664B5D  0F BF 75 CE               MOVSX ESI,word ptr [EBP + -0x32]
00664B61  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00664B65  8D 74 37 FF               LEA ESI,[EDI + ESI*0x1 + -0x1]
00664B69  0F BF 7D CA               MOVSX EDI,word ptr [EBP + -0x36]
00664B6D  89 75 B4                  MOV dword ptr [EBP + -0x4c],ESI
00664B70  0F BF 75 D0               MOVSX ESI,word ptr [EBP + -0x30]
00664B74  0F BF 08                  MOVSX ECX,word ptr [EAX]
00664B77  8D 74 37 FF               LEA ESI,[EDI + ESI*0x1 + -0x1]
00664B7B  0F BF 7D C8               MOVSX EDI,word ptr [EBP + -0x38]
00664B7F  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
00664B82  3B F9                     CMP EDI,ECX
00664B84  0F BF 70 06               MOVSX ESI,word ptr [EAX + 0x6]
00664B88  0F BF 40 08               MOVSX EAX,word ptr [EAX + 0x8]
00664B8C  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00664B8F  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00664B92  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
00664B96  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00664B99  7C 40                     JL 0x00664bdb
00664B9B  8D 44 31 FF               LEA EAX,[ECX + ESI*0x1 + -0x1]
00664B9F  3B F8                     CMP EDI,EAX
00664BA1  7F 38                     JG 0x00664bdb
00664BA3  0F BF 45 CA               MOVSX EAX,word ptr [EBP + -0x36]
00664BA7  3B C2                     CMP EAX,EDX
00664BA9  7C 30                     JL 0x00664bdb
00664BAB  3B 45 B0                  CMP EAX,dword ptr [EBP + -0x50]
00664BAE  7F 28                     JG 0x00664bd8
00664BB0  8B 75 B4                  MOV ESI,dword ptr [EBP + -0x4c]
00664BB3  3B F1                     CMP ESI,ECX
00664BB5  7C 21                     JL 0x00664bd8
00664BB7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00664BBA  8D 44 01 FF               LEA EAX,[ECX + EAX*0x1 + -0x1]
00664BBE  3B F0                     CMP ESI,EAX
00664BC0  7F 16                     JG 0x00664bd8
00664BC2  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
00664BC5  3B F2                     CMP ESI,EDX
00664BC7  7C 0F                     JL 0x00664bd8
00664BC9  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00664BCC  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
00664BD0  3B F0                     CMP ESI,EAX
00664BD2  0F 8E 6D 04 00 00         JLE 0x00665045
LAB_00664bd8:
00664BD8  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_00664bdb:
00664BDB  8D 44 31 FF               LEA EAX,[ECX + ESI*0x1 + -0x1]
00664BDF  3B CF                     CMP ECX,EDI
00664BE1  0F BF 75 CA               MOVSX ESI,word ptr [EBP + -0x36]
00664BE5  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00664BE8  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00664BEB  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
00664BEF  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00664BF2  0F BF 45 D0               MOVSX EAX,word ptr [EBP + -0x30]
00664BF6  8D 44 06 FF               LEA EAX,[ESI + EAX*0x1 + -0x1]
00664BFA  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00664BFD  7C 2D                     JL 0x00664c2c
00664BFF  0F BF 45 CE               MOVSX EAX,word ptr [EBP + -0x32]
00664C03  8D 44 07 FF               LEA EAX,[EDI + EAX*0x1 + -0x1]
00664C07  3B C8                     CMP ECX,EAX
00664C09  7F 21                     JG 0x00664c2c
00664C0B  3B D6                     CMP EDX,ESI
00664C0D  7C 1D                     JL 0x00664c2c
00664C0F  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00664C12  3B D1                     CMP EDX,ECX
00664C14  7F 16                     JG 0x00664c2c
00664C16  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00664C19  3B D7                     CMP EDX,EDI
00664C1B  7C 0F                     JL 0x00664c2c
00664C1D  3B D0                     CMP EDX,EAX
00664C1F  7F 0B                     JG 0x00664c2c
00664C21  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00664C24  3B C6                     CMP EAX,ESI
00664C26  7C 04                     JL 0x00664c2c
00664C28  3B C1                     CMP EAX,ECX
00664C2A  7E 15                     JLE 0x00664c41
LAB_00664c2c:
00664C2C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00664C2F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00664C32  42                        INC EDX
00664C33  3B D0                     CMP EDX,EAX
00664C35  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00664C38  7D 22                     JGE 0x00664c5c
00664C3A  33 F6                     XOR ESI,ESI
00664C3C  E9 05 FF FF FF            JMP 0x00664b46
LAB_00664c41:
00664C41  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00664C44  8B 83 2F 02 00 00         MOV EAX,dword ptr [EBX + 0x22f]
00664C4A  8D 4D C8                  LEA ECX,[EBP + -0x38]
00664C4D  51                        PUSH ECX
00664C4E  52                        PUSH EDX
00664C4F  50                        PUSH EAX
00664C50  E8 EB 94 04 00            CALL 0x006ae140
00664C55  33 F6                     XOR ESI,ESI
00664C57  E9 C8 03 00 00            JMP 0x00665024
LAB_00664c5c:
00664C5C  33 F6                     XOR ESI,ESI
LAB_00664c5e:
00664C5E  8B 83 2F 02 00 00         MOV EAX,dword ptr [EBX + 0x22f]
00664C64  3B C6                     CMP EAX,ESI
00664C66  74 0B                     JZ 0x00664c73
00664C68  8D 4D C8                  LEA ECX,[EBP + -0x38]
00664C6B  51                        PUSH ECX
00664C6C  56                        PUSH ESI
00664C6D  50                        PUSH EAX
00664C6E  E8 5D C5 04 00            CALL 0x006b11d0
LAB_00664c73:
00664C73  66 FF 83 70 01 00 00      INC word ptr [EBX + 0x170]
00664C7A  E9 A5 03 00 00            JMP 0x00665024
switchD_006649d9::caseD_9:
00664C7F  8B 83 2F 02 00 00         MOV EAX,dword ptr [EBX + 0x22f]
00664C85  3B C6                     CMP EAX,ESI
00664C87  0F 84 BA 03 00 00         JZ 0x00665047
00664C8D  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
00664C90  E9 8F 03 00 00            JMP 0x00665024
switchD_006649d9::caseD_a:
00664C95  8A 55 C8                  MOV DL,byte ptr [EBP + -0x38]
00664C98  66 8B 45 C9               MOV AX,word ptr [EBP + -0x37]
00664C9C  66 8B 4D CB               MOV CX,word ptr [EBP + -0x35]
00664CA0  88 93 76 01 00 00         MOV byte ptr [EBX + 0x176],DL
00664CA6  8B 55 CD                  MOV EDX,dword ptr [EBP + -0x33]
00664CA9  66 89 83 77 01 00 00      MOV word ptr [EBX + 0x177],AX
00664CB0  8B 45 D1                  MOV EAX,dword ptr [EBP + -0x2f]
00664CB3  66 89 8B 79 01 00 00      MOV word ptr [EBX + 0x179],CX
00664CBA  8B 4D D5                  MOV ECX,dword ptr [EBP + -0x2b]
00664CBD  89 93 7B 01 00 00         MOV dword ptr [EBX + 0x17b],EDX
00664CC3  89 83 7F 01 00 00         MOV dword ptr [EBX + 0x17f],EAX
00664CC9  89 8B 83 01 00 00         MOV dword ptr [EBX + 0x183],ECX
00664CCF  E9 73 03 00 00            JMP 0x00665047
switchD_006649d9::caseD_b:
00664CD4  8A 55 C8                  MOV DL,byte ptr [EBP + -0x38]
00664CD7  66 8B 45 C9               MOV AX,word ptr [EBP + -0x37]
00664CDB  66 8B 4D CB               MOV CX,word ptr [EBP + -0x35]
00664CDF  88 93 00 01 00 00         MOV byte ptr [EBX + 0x100],DL
00664CE5  66 8B 55 CD               MOV DX,word ptr [EBP + -0x33]
00664CE9  66 89 83 01 01 00 00      MOV word ptr [EBX + 0x101],AX
00664CF0  8B 45 D9                  MOV EAX,dword ptr [EBP + -0x27]
00664CF3  66 89 8B 03 01 00 00      MOV word ptr [EBX + 0x103],CX
00664CFA  8B 4D CF                  MOV ECX,dword ptr [EBP + -0x31]
00664CFD  66 89 93 05 01 00 00      MOV word ptr [EBX + 0x105],DX
00664D04  66 8B 55 D3               MOV DX,word ptr [EBP + -0x2d]
00664D08  89 83 11 01 00 00         MOV dword ptr [EBX + 0x111],EAX
00664D0E  66 8B 45 D5               MOV AX,word ptr [EBP + -0x2b]
00664D12  89 8B 07 01 00 00         MOV dword ptr [EBX + 0x107],ECX
00664D18  66 8B 4D D7               MOV CX,word ptr [EBP + -0x29]
00664D1C  66 89 93 0B 01 00 00      MOV word ptr [EBX + 0x10b],DX
00664D23  66 89 83 0D 01 00 00      MOV word ptr [EBX + 0x10d],AX
00664D2A  66 89 8B 0F 01 00 00      MOV word ptr [EBX + 0x10f],CX
00664D31  E9 11 03 00 00            JMP 0x00665047
switchD_006649d9::caseD_c:
00664D36  8A 55 C8                  MOV DL,byte ptr [EBP + -0x38]
00664D39  8B 45 C9                  MOV EAX,dword ptr [EBP + -0x37]
00664D3C  8B 4D CD                  MOV ECX,dword ptr [EBP + -0x33]
00664D3F  88 93 15 01 00 00         MOV byte ptr [EBX + 0x115],DL
00664D45  89 83 16 01 00 00         MOV dword ptr [EBX + 0x116],EAX
00664D4B  89 8B 1A 01 00 00         MOV dword ptr [EBX + 0x11a],ECX
00664D51  E9 F1 02 00 00            JMP 0x00665047
switchD_006649d9::caseD_d:
00664D56  8A 55 C8                  MOV DL,byte ptr [EBP + -0x38]
00664D59  8B 45 C9                  MOV EAX,dword ptr [EBP + -0x37]
00664D5C  8B 4D CD                  MOV ECX,dword ptr [EBP + -0x33]
00664D5F  88 93 22 01 00 00         MOV byte ptr [EBX + 0x122],DL
00664D65  89 83 29 01 00 00         MOV dword ptr [EBX + 0x129],EAX
00664D6B  89 8B 23 01 00 00         MOV dword ptr [EBX + 0x123],ECX
00664D71  E9 D1 02 00 00            JMP 0x00665047
switchD_006649d9::caseD_e:
00664D76  8D 55 CC                  LEA EDX,[EBP + -0x34]
00664D79  56                        PUSH ESI
00664D7A  8D 45 CA                  LEA EAX,[EBP + -0x36]
00664D7D  52                        PUSH EDX
00664D7E  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00664D81  8D 4D C8                  LEA ECX,[EBP + -0x38]
00664D84  50                        PUSH EAX
00664D85  8B 45 CA                  MOV EAX,dword ptr [EBP + -0x36]
00664D88  51                        PUSH ECX
00664D89  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00664D8C  52                        PUSH EDX
00664D8D  50                        PUSH EAX
00664D8E  51                        PUSH ECX
00664D8F  E8 C0 FF D9 FF            CALL 0x00404d54
00664D94  8B 93 23 02 00 00         MOV EDX,dword ptr [EBX + 0x223]
00664D9A  83 C4 1C                  ADD ESP,0x1c
00664D9D  33 C9                     XOR ECX,ECX
00664D9F  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00664DA2  3B C6                     CMP EAX,ESI
00664DA4  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00664DA7  7E 5A                     JLE 0x00664e03
00664DA9  3B C8                     CMP ECX,EAX
LAB_00664dab:
00664DAB  73 0D                     JNC 0x00664dba
00664DAD  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00664DB0  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
00664DB3  0F AF C1                  IMUL EAX,ECX
00664DB6  03 C7                     ADD EAX,EDI
00664DB8  EB 02                     JMP 0x00664dbc
LAB_00664dba:
00664DBA  33 C0                     XOR EAX,EAX
LAB_00664dbc:
00664DBC  66 8B 7D C8               MOV DI,word ptr [EBP + -0x38]
00664DC0  66 3B 38                  CMP DI,word ptr [EAX]
00664DC3  75 36                     JNZ 0x00664dfb
00664DC5  66 8B 7D CA               MOV DI,word ptr [EBP + -0x36]
00664DC9  66 3B 78 02               CMP DI,word ptr [EAX + 0x2]
00664DCD  75 2C                     JNZ 0x00664dfb
00664DCF  66 8B 7D CC               MOV DI,word ptr [EBP + -0x34]
00664DD3  66 3B 78 04               CMP DI,word ptr [EAX + 0x4]
00664DD7  75 22                     JNZ 0x00664dfb
00664DD9  66 8B 7D D2               MOV DI,word ptr [EBP + -0x2e]
00664DDD  66 3B 78 0A               CMP DI,word ptr [EAX + 0xa]
00664DE1  75 18                     JNZ 0x00664dfb
00664DE3  66 8B 7D D4               MOV DI,word ptr [EBP + -0x2c]
00664DE7  66 3B 78 0C               CMP DI,word ptr [EAX + 0xc]
00664DEB  75 0E                     JNZ 0x00664dfb
00664DED  66 8B 7D D6               MOV DI,word ptr [EBP + -0x2a]
00664DF1  66 3B 78 0E               CMP DI,word ptr [EAX + 0xe]
00664DF5  0F 84 29 02 00 00         JZ 0x00665024
LAB_00664dfb:
00664DFB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00664DFE  41                        INC ECX
00664DFF  3B C8                     CMP ECX,EAX
00664E01  7C A8                     JL 0x00664dab
LAB_00664e03:
00664E03  3B D6                     CMP EDX,ESI
00664E05  74 0B                     JZ 0x00664e12
00664E07  8D 45 C8                  LEA EAX,[EBP + -0x38]
00664E0A  50                        PUSH EAX
00664E0B  56                        PUSH ESI
00664E0C  52                        PUSH EDX
00664E0D  E8 BE C3 04 00            CALL 0x006b11d0
LAB_00664e12:
00664E12  66 FF 83 27 01 00 00      INC word ptr [EBX + 0x127]
00664E19  E9 06 02 00 00            JMP 0x00665024
switchD_006649d9::caseD_f:
00664E1E  8B 83 23 02 00 00         MOV EAX,dword ptr [EBX + 0x223]
00664E24  3B C6                     CMP EAX,ESI
00664E26  0F 84 1B 02 00 00         JZ 0x00665047
00664E2C  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
00664E2F  E9 F0 01 00 00            JMP 0x00665024
switchD_006649d9::caseD_10:
00664E34  8A 4D C8                  MOV CL,byte ptr [EBP + -0x38]
00664E37  88 8B 94 01 00 00         MOV byte ptr [EBX + 0x194],CL
00664E3D  E9 05 02 00 00            JMP 0x00665047
switchD_006649d9::caseD_32:
00664E42  B9 0D 00 00 00            MOV ECX,0xd
00664E47  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664E4A  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664E50  33 C0                     XOR EAX,EAX
00664E52  F3 A5                     MOVSD.REP ES:EDI,ESI
00664E54  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664E5A  74 09                     JZ 0x00664e65
00664E5C  8B CB                     MOV ECX,EBX
00664E5E  E8 5C C6 D9 FF            CALL 0x004014bf
00664E63  33 C0                     XOR EAX,EAX
LAB_00664e65:
00664E65  B9 F4 01 00 00            MOV ECX,0x1f4
00664E6A  E9 87 01 00 00            JMP 0x00664ff6
switchD_006649d9::caseD_33:
00664E6F  B9 0D 00 00 00            MOV ECX,0xd
00664E74  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664E77  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664E7D  33 C0                     XOR EAX,EAX
00664E7F  F3 A5                     MOVSD.REP ES:EDI,ESI
00664E81  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664E87  74 09                     JZ 0x00664e92
00664E89  8B CB                     MOV ECX,EBX
00664E8B  E8 2F C6 D9 FF            CALL 0x004014bf
00664E90  33 C0                     XOR EAX,EAX
LAB_00664e92:
00664E92  B9 FE 01 00 00            MOV ECX,0x1fe
00664E97  E9 5A 01 00 00            JMP 0x00664ff6
switchD_006649d9::caseD_34:
00664E9C  B9 0D 00 00 00            MOV ECX,0xd
00664EA1  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664EA4  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664EAA  33 C0                     XOR EAX,EAX
00664EAC  F3 A5                     MOVSD.REP ES:EDI,ESI
00664EAE  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664EB4  74 09                     JZ 0x00664ebf
00664EB6  8B CB                     MOV ECX,EBX
00664EB8  E8 02 C6 D9 FF            CALL 0x004014bf
00664EBD  33 C0                     XOR EAX,EAX
LAB_00664ebf:
00664EBF  B9 08 02 00 00            MOV ECX,0x208
00664EC4  E9 2D 01 00 00            JMP 0x00664ff6
switchD_006649d9::caseD_35:
00664EC9  B9 0D 00 00 00            MOV ECX,0xd
00664ECE  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664ED1  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664ED7  33 C0                     XOR EAX,EAX
00664ED9  F3 A5                     MOVSD.REP ES:EDI,ESI
00664EDB  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664EE1  74 09                     JZ 0x00664eec
00664EE3  8B CB                     MOV ECX,EBX
00664EE5  E8 D5 C5 D9 FF            CALL 0x004014bf
00664EEA  33 C0                     XOR EAX,EAX
LAB_00664eec:
00664EEC  B9 12 02 00 00            MOV ECX,0x212
00664EF1  E9 00 01 00 00            JMP 0x00664ff6
switchD_006649d9::caseD_36:
00664EF6  B9 0D 00 00 00            MOV ECX,0xd
00664EFB  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664EFE  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664F04  33 C0                     XOR EAX,EAX
00664F06  F3 A5                     MOVSD.REP ES:EDI,ESI
00664F08  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664F0E  74 09                     JZ 0x00664f19
00664F10  8B CB                     MOV ECX,EBX
00664F12  E8 A8 C5 D9 FF            CALL 0x004014bf
00664F17  33 C0                     XOR EAX,EAX
LAB_00664f19:
00664F19  B9 1C 02 00 00            MOV ECX,0x21c
00664F1E  E9 D3 00 00 00            JMP 0x00664ff6
switchD_006649d9::caseD_37:
00664F23  B9 0D 00 00 00            MOV ECX,0xd
00664F28  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664F2B  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664F31  33 C0                     XOR EAX,EAX
00664F33  F3 A5                     MOVSD.REP ES:EDI,ESI
00664F35  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664F3B  74 09                     JZ 0x00664f46
00664F3D  8B CB                     MOV ECX,EBX
00664F3F  E8 7B C5 D9 FF            CALL 0x004014bf
00664F44  33 C0                     XOR EAX,EAX
LAB_00664f46:
00664F46  B9 26 02 00 00            MOV ECX,0x226
00664F4B  E9 A6 00 00 00            JMP 0x00664ff6
switchD_006649d9::caseD_38:
00664F50  B9 0D 00 00 00            MOV ECX,0xd
00664F55  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664F58  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664F5E  33 C0                     XOR EAX,EAX
00664F60  F3 A5                     MOVSD.REP ES:EDI,ESI
00664F62  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664F68  74 09                     JZ 0x00664f73
00664F6A  8B CB                     MOV ECX,EBX
00664F6C  E8 4E C5 D9 FF            CALL 0x004014bf
00664F71  33 C0                     XOR EAX,EAX
LAB_00664f73:
00664F73  B9 30 02 00 00            MOV ECX,0x230
00664F78  EB 7C                     JMP 0x00664ff6
switchD_006649d9::caseD_39:
00664F7A  B9 0D 00 00 00            MOV ECX,0xd
00664F7F  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664F82  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664F88  33 C0                     XOR EAX,EAX
00664F8A  F3 A5                     MOVSD.REP ES:EDI,ESI
00664F8C  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664F92  74 09                     JZ 0x00664f9d
00664F94  8B CB                     MOV ECX,EBX
00664F96  E8 24 C5 D9 FF            CALL 0x004014bf
00664F9B  33 C0                     XOR EAX,EAX
LAB_00664f9d:
00664F9D  B9 3A 02 00 00            MOV ECX,0x23a
00664FA2  EB 52                     JMP 0x00664ff6
switchD_006649d9::caseD_3a:
00664FA4  B9 0D 00 00 00            MOV ECX,0xd
00664FA9  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664FAC  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664FB2  33 C0                     XOR EAX,EAX
00664FB4  F3 A5                     MOVSD.REP ES:EDI,ESI
00664FB6  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664FBC  74 09                     JZ 0x00664fc7
00664FBE  8B CB                     MOV ECX,EBX
00664FC0  E8 FA C4 D9 FF            CALL 0x004014bf
00664FC5  33 C0                     XOR EAX,EAX
LAB_00664fc7:
00664FC7  B9 44 02 00 00            MOV ECX,0x244
00664FCC  EB 28                     JMP 0x00664ff6
switchD_006649d9::caseD_3b:
00664FCE  B9 0D 00 00 00            MOV ECX,0xd
00664FD3  8D 75 C0                  LEA ESI,[EBP + -0x40]
00664FD6  8D BB B7 00 00 00         LEA EDI,[EBX + 0xb7]
00664FDC  33 C0                     XOR EAX,EAX
00664FDE  F3 A5                     MOVSD.REP ES:EDI,ESI
00664FE0  39 83 B3 00 00 00         CMP dword ptr [EBX + 0xb3],EAX
00664FE6  74 09                     JZ 0x00664ff1
00664FE8  8B CB                     MOV ECX,EBX
00664FEA  E8 D0 C4 D9 FF            CALL 0x004014bf
00664FEF  33 C0                     XOR EAX,EAX
LAB_00664ff1:
00664FF1  B9 4E 02 00 00            MOV ECX,0x24e
AiFltClassTy::sub_00664960::cf_common_join_00664FF6:
00664FF6  89 8B 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ECX
00664FFC  89 83 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EAX
00665002  89 83 A3 00 00 00         MOV dword ptr [EBX + 0xa3],EAX
00665008  89 83 A7 00 00 00         MOV dword ptr [EBX + 0xa7],EAX
0066500E  89 8B B3 00 00 00         MOV dword ptr [EBX + 0xb3],ECX
00665014  33 F6                     XOR ESI,ESI
00665016  EB 0C                     JMP 0x00665024
switchD_006649d9::caseD_11:
00665018  50                        PUSH EAX
00665019  8B CB                     MOV ECX,EBX
0066501B  E8 66 F3 D9 FF            CALL 0x00404386
00665020  85 C0                     TEST EAX,EAX
00665022  7F 23                     JG 0x00665047
AiFltClassTy::sub_00664960::cf_common_join_00665024:
00665024  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00665027  83 F8 32                  CMP EAX,0x32
0066502A  72 0E                     JC 0x0066503a
0066502C  83 F8 64                  CMP EAX,0x64
0066502F  73 09                     JNC 0x0066503a
00665031  8B CB                     MOV ECX,EBX
00665033  E8 1E D3 D9 FF            CALL 0x00402356
00665038  EB 0D                     JMP 0x00665047
LAB_0066503a:
0066503A  3B C6                     CMP EAX,ESI
0066503C  76 21                     JBE 0x0066505f
0066503E  83 F8 32                  CMP EAX,0x32
00665041  73 1C                     JNC 0x0066505f
00665043  EB 02                     JMP 0x00665047
LAB_00665045:
00665045  33 F6                     XOR ESI,ESI
LAB_00665047:
00665047  8D 55 9C                  LEA EDX,[EBP + -0x64]
0066504A  8D 45 C0                  LEA EAX,[EBP + -0x40]
0066504D  52                        PUSH EDX
0066504E  50                        PUSH EAX
0066504F  8B CB                     MOV ECX,EBX
00665051  E8 B6 E5 D9 FF            CALL 0x0040360c
00665056  85 C0                     TEST EAX,EAX
00665058  7C 0D                     JL 0x00665067
0066505A  E9 66 F9 FF FF            JMP 0x006649c5
switchD_006649d9::caseD_0:
0066505F  50                        PUSH EAX
00665060  8B CB                     MOV ECX,EBX
00665062  E8 1F F3 D9 FF            CALL 0x00404386
LAB_00665067:
00665067  89 B3 EB 00 00 00         MOV dword ptr [EBX + 0xeb],ESI
0066506D  8B 83 9B 00 00 00         MOV EAX,dword ptr [EBX + 0x9b]
00665073  3D 82 00 00 00            CMP EAX,0x82
00665078  0F 87 9C 0C 00 00         JA 0x00665d1a
0066507E  0F 84 10 0C 00 00         JZ 0x00665c94
00665084  83 F8 78                  CMP EAX,0x78
00665087  0F 87 D9 1F 00 00         JA 0x00667066
0066508D  33 C9                     XOR ECX,ECX
0066508F  8A 88 A4 71 66 00         MOV CL,byte ptr [EAX + 0x6671a4]
switchD_00665095::switchD:
00665095  FF 24 8D 44 71 66 00      JMP dword ptr [ECX*0x4 + 0x667144]
switchD_00665095::caseD_0:
0066509C  33 C0                     XOR EAX,EAX
0066509E  66 8B 43 7B               MOV AX,word ptr [EBX + 0x7b]
006650A2  83 F8 10                  CMP EAX,0x10
006650A5  7F 2B                     JG 0x006650d2
006650A7  74 13                     JZ 0x006650bc
006650A9  48                        DEC EAX
006650AA  0F 84 87 01 00 00         JZ 0x00665237
006650B0  48                        DEC EAX
006650B1  74 09                     JZ 0x006650bc
006650B3  83 E8 02                  SUB EAX,0x2
006650B6  0F 85 AA 1F 00 00         JNZ 0x00667066
LAB_006650bc:
006650BC  8B CB                     MOV ECX,EBX
006650BE  E8 CA C3 D9 FF            CALL 0x0040148d
006650C3  C7 83 9B 00 00 00 3C 00 00 00  MOV dword ptr [EBX + 0x9b],0x3c
006650CD  E9 82 1F 00 00            JMP 0x00667054
LAB_006650d2:
006650D2  83 F8 20                  CMP EAX,0x20
006650D5  74 E5                     JZ 0x006650bc
006650D7  3D 00 80 00 00            CMP EAX,0x8000
006650DC  0F 85 84 1F 00 00         JNZ 0x00667066
006650E2  8B CB                     MOV ECX,EBX
006650E4  E8 A4 C3 D9 FF            CALL 0x0040148d
006650E9  C7 83 9B 00 00 00 32 00 00 00  MOV dword ptr [EBX + 0x9b],0x32
006650F3  E9 5C 1F 00 00            JMP 0x00667054
switchD_00665095::caseD_a:
006650F8  C7 83 EB 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xeb],0x1
00665102  E9 5F 1F 00 00            JMP 0x00667066
switchD_00665095::caseD_c:
00665107  C7 83 EB 00 00 00 04 00 00 00  MOV dword ptr [EBX + 0xeb],0x4
00665111  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665117  3B C6                     CMP EAX,ESI
00665119  0F 85 D4 00 00 00         JNZ 0x006651f3
0066511F  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665129  C7 83 AB 00 00 00 D0 07 00 00  MOV dword ptr [EBX + 0xab],0x7d0
00665133  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
00665139  89 93 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EDX
0066513F  E9 22 1F 00 00            JMP 0x00667066
switchD_00665095::caseD_e:
00665144  C7 83 EB 00 00 00 04 00 00 00  MOV dword ptr [EBX + 0xeb],0x4
0066514E  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665154  3B C6                     CMP EAX,ESI
00665156  0F 85 97 00 00 00         JNZ 0x006651f3
0066515C  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665166  C7 83 AB 00 00 00 0A 00 00 00  MOV dword ptr [EBX + 0xab],0xa
00665170  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
00665176  89 93 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EDX
0066517C  E9 E5 1E 00 00            JMP 0x00667066
switchD_00665095::caseD_10:
00665181  C7 83 EB 00 00 00 04 00 00 00  MOV dword ptr [EBX + 0xeb],0x4
0066518B  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665191  3B C6                     CMP EAX,ESI
00665193  75 5E                     JNZ 0x006651f3
00665195  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
0066519F  C7 83 AB 00 00 00 32 00 00 00  MOV dword ptr [EBX + 0xab],0x32
006651A9  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
006651AF  89 93 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EDX
006651B5  E9 AC 1E 00 00            JMP 0x00667066
switchD_00665095::caseD_12:
006651BA  C7 83 EB 00 00 00 04 00 00 00  MOV dword ptr [EBX + 0xeb],0x4
006651C4  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
006651CA  3B C6                     CMP EAX,ESI
006651CC  75 25                     JNZ 0x006651f3
006651CE  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
006651D8  C7 83 AB 00 00 00 7D 00 00 00  MOV dword ptr [EBX + 0xab],0x7d
006651E2  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
006651E8  89 93 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EDX
006651EE  E9 73 1E 00 00            JMP 0x00667066
LAB_006651f3:
006651F3  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
006651F9  3B C6                     CMP EAX,ESI
006651FB  0F 84 65 1E 00 00         JZ 0x00667066
00665201  8B 8B AF 00 00 00         MOV ECX,dword ptr [EBX + 0xaf]
00665207  03 C8                     ADD ECX,EAX
00665209  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
0066520F  3B C1                     CMP EAX,ECX
00665211  0F 86 4F 1E 00 00         JBE 0x00667066
00665217  B9 12 00 00 00            MOV ECX,0x12
0066521C  33 C0                     XOR EAX,EAX
0066521E  8D BB AD 01 00 00         LEA EDI,[EBX + 0x1ad]
00665224  F3 AB                     STOSD.REP ES:EDI
00665226  66 AB                     STOSW ES:EDI
00665228  39 B3 B3 00 00 00         CMP dword ptr [EBX + 0xb3],ESI
0066522E  74 07                     JZ 0x00665237
00665230  8B CB                     MOV ECX,EBX
00665232  E8 88 C2 D9 FF            CALL 0x004014bf
LAB_00665237:
00665237  C7 83 9B 00 00 00 0A 00 00 00  MOV dword ptr [EBX + 0x9b],0xa
00665241  E9 0E 1E 00 00            JMP 0x00667054
switchD_00665095::caseD_14:
00665246  8A 83 15 01 00 00         MOV AL,byte ptr [EBX + 0x115]
0066524C  84 C0                     TEST AL,AL
0066524E  0F 84 B7 00 00 00         JZ 0x0066530b
00665254  8B 93 16 01 00 00         MOV EDX,dword ptr [EBX + 0x116]
0066525A  C7 83 9B 00 00 00 19 00 00 00  MOV dword ptr [EBX + 0x9b],0x19
00665264  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
0066526A  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665270  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
00665276  89 93 1E 01 00 00         MOV dword ptr [EBX + 0x11e],EDX
0066527C  C7 83 EB 00 00 00 02 00 00 00  MOV dword ptr [EBX + 0xeb],0x2
00665286  E9 9C 00 00 00            JMP 0x00665327
switchD_00665095::caseD_19:
0066528B  C7 83 EB 00 00 00 02 00 00 00  MOV dword ptr [EBX + 0xeb],0x2
00665295  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
0066529B  3B C6                     CMP EAX,ESI
0066529D  75 48                     JNZ 0x006652e7
0066529F  8B 8B 1E 01 00 00         MOV ECX,dword ptr [EBX + 0x11e]
006652A5  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
006652AF  8B 93 1A 01 00 00         MOV EDX,dword ptr [EBX + 0x11a]
006652B5  56                        PUSH ESI
006652B6  89 93 AB 00 00 00         MOV dword ptr [EBX + 0xab],EDX
006652BC  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
006652C2  51                        PUSH ECX
006652C3  8B CB                     MOV ECX,EBX
006652C5  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
006652CB  E8 E9 CC D9 FF            CALL 0x00401fb9
006652D0  85 C0                     TEST EAX,EAX
006652D2  0F 8D 8E 1D 00 00         JGE 0x00667066
006652D8  C7 83 9B 00 00 00 28 00 00 00  MOV dword ptr [EBX + 0x9b],0x28
006652E2  E9 6D 1D 00 00            JMP 0x00667054
LAB_006652e7:
006652E7  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
006652ED  75 1C                     JNZ 0x0066530b
006652EF  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
006652F5  3B C6                     CMP EAX,ESI
006652F7  74 2E                     JZ 0x00665327
006652F9  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
006652FF  03 D0                     ADD EDX,EAX
00665301  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665307  3B C2                     CMP EAX,EDX
00665309  76 1C                     JBE 0x00665327
LAB_0066530b:
0066530B  C7 83 9B 00 00 00 28 00 00 00  MOV dword ptr [EBX + 0x9b],0x28
LAB_00665315:
00665315  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
0066531B  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665321  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00665327:
00665327  8A 83 39 01 00 00         MOV AL,byte ptr [EBX + 0x139]
0066532D  84 C0                     TEST AL,AL
0066532F  0F 84 51 05 00 00         JZ 0x00665886
00665335  8B 83 4E 01 00 00         MOV EAX,dword ptr [EBX + 0x14e]
0066533B  8B 93 4A 01 00 00         MOV EDX,dword ptr [EBX + 0x14a]
00665341  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
00665347  03 C2                     ADD EAX,EDX
00665349  3B C8                     CMP ECX,EAX
LAB_0066534b:
0066534B  0F 86 35 05 00 00         JBE 0x00665886
00665351  8B CB                     MOV ECX,EBX
00665353  E8 E3 E0 D9 FF            CALL 0x0040343b
00665358  0F BF 8B 3E 01 00 00      MOVSX ECX,word ptr [EBX + 0x13e]
0066535F  3B C1                     CMP EAX,ECX
00665361  0F 8C 1F 05 00 00         JL 0x00665886
00665367  E9 FE 04 00 00            JMP 0x0066586a
switchD_00665095::caseD_1e:
0066536C  C7 83 EB 00 00 00 04 00 00 00  MOV dword ptr [EBX + 0xeb],0x4
00665376  C7 83 9B 00 00 00 23 00 00 00  MOV dword ptr [EBX + 0x9b],0x23
00665380  E9 CF 1C 00 00            JMP 0x00667054
switchD_00665095::caseD_23:
00665385  C7 83 EB 00 00 00 04 00 00 00  MOV dword ptr [EBX + 0xeb],0x4
0066538F  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665395  3B C6                     CMP EAX,ESI
00665397  75 77                     JNZ 0x00665410
00665399  8B 93 BB 01 00 00         MOV EDX,dword ptr [EBX + 0x1bb]
0066539F  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
006653A9  89 93 AB 00 00 00         MOV dword ptr [EBX + 0xab],EDX
006653AF  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
006653B5  8A 93 C9 01 00 00         MOV DL,byte ptr [EBX + 0x1c9]
006653BB  8D 8B CA 01 00 00         LEA ECX,[EBX + 0x1ca]
006653C1  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
006653C7  66 8B 83 B9 01 00 00      MOV AX,word ptr [EBX + 0x1b9]
006653CE  51                        PUSH ECX
006653CF  52                        PUSH EDX
006653D0  0F BF 8B C7 01 00 00      MOVSX ECX,word ptr [EBX + 0x1c7]
006653D7  0F BF 93 C5 01 00 00      MOVSX EDX,word ptr [EBX + 0x1c5]
006653DE  50                        PUSH EAX
006653DF  51                        PUSH ECX
006653E0  0F BF 83 C3 01 00 00      MOVSX EAX,word ptr [EBX + 0x1c3]
006653E7  8B 8B AD 01 00 00         MOV ECX,dword ptr [EBX + 0x1ad]
006653ED  52                        PUSH EDX
006653EE  50                        PUSH EAX
006653EF  51                        PUSH ECX
006653F0  8B CB                     MOV ECX,EBX
006653F2  E8 F1 E7 D9 FF            CALL 0x00403be8
006653F7  85 C0                     TEST EAX,EAX
006653F9  0F 8D 67 1C 00 00         JGE 0x00667066
006653FF  39 B3 B3 00 00 00         CMP dword ptr [EBX + 0xb3],ESI
00665405  0F 84 43 1C 00 00         JZ 0x0066704e
0066540B  E9 37 1C 00 00            JMP 0x00667047
LAB_00665410:
00665410  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00665416  75 24                     JNZ 0x0066543c
00665418  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
0066541E  3B C6                     CMP EAX,ESI
00665420  0F 84 40 1C 00 00         JZ 0x00667066
00665426  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
0066542C  03 D0                     ADD EDX,EAX
0066542E  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665434  3B C2                     CMP EAX,EDX
00665436  0F 86 2A 1C 00 00         JBE 0x00667066
LAB_0066543c:
0066543C  B9 12 00 00 00            MOV ECX,0x12
00665441  33 C0                     XOR EAX,EAX
00665443  8D BB AD 01 00 00         LEA EDI,[EBX + 0x1ad]
00665449  F3 AB                     STOSD.REP ES:EDI
0066544B  66 AB                     STOSW ES:EDI
0066544D  39 B3 B3 00 00 00         CMP dword ptr [EBX + 0xb3],ESI
00665453  74 07                     JZ 0x0066545c
00665455  8B CB                     MOV ECX,EBX
00665457  E8 63 C0 D9 FF            CALL 0x004014bf
LAB_0066545c:
0066545C  C7 83 F7 01 00 00 19 00 00 00  MOV dword ptr [EBX + 0x1f7],0x19
00665466  C7 83 9B 00 00 00 78 00 00 00  MOV dword ptr [EBX + 0x9b],0x78
00665470  E9 DF 1B 00 00            JMP 0x00667054
switchD_00665095::caseD_28:
00665475  8A 83 22 01 00 00         MOV AL,byte ptr [EBX + 0x122]
0066547B  84 C0                     TEST AL,AL
0066547D  0F 84 84 01 00 00         JZ 0x00665607
00665483  8B 83 23 02 00 00         MOV EAX,dword ptr [EBX + 0x223]
00665489  39 70 0C                  CMP dword ptr [EAX + 0xc],ESI
0066548C  0F 84 75 01 00 00         JZ 0x00665607
00665492  8B 8B 23 01 00 00         MOV ECX,dword ptr [EBX + 0x123]
00665498  89 B3 2D 01 00 00         MOV dword ptr [EBX + 0x12d],ESI
0066549E  89 8B AB 00 00 00         MOV dword ptr [EBX + 0xab],ECX
006654A4  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
006654AA  89 93 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EDX
006654B0  C7 83 9B 00 00 00 2A 00 00 00  MOV dword ptr [EBX + 0x9b],0x2a
006654BA  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
006654C0  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
006654C6  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
006654CC  C7 83 EB 00 00 00 08 00 00 00  MOV dword ptr [EBX + 0xeb],0x8
006654D6  E9 4C FE FF FF            JMP 0x00665327
switchD_00665095::caseD_2a:
006654DB  C7 83 EB 00 00 00 08 00 00 00  MOV dword ptr [EBX + 0xeb],0x8
006654E5  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
006654EB  3B C6                     CMP EAX,ESI
006654ED  0F 85 9F 00 00 00         JNZ 0x00665592
006654F3  8B 8B 2D 01 00 00         MOV ECX,dword ptr [EBX + 0x12d]
006654F9  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665503  8B 83 23 02 00 00         MOV EAX,dword ptr [EBX + 0x223]
00665509  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0066550C  73 75                     JNC 0x00665583
0066550E  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00665511  0F AF F9                  IMUL EDI,ECX
00665514  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
00665517  3B FE                     CMP EDI,ESI
00665519  74 68                     JZ 0x00665583
0066551B  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
00665521  89 93 31 01 00 00         MOV dword ptr [EBX + 0x131],EDX
00665527  8B 47 06                  MOV EAX,dword ptr [EDI + 0x6]
0066552A  89 83 35 01 00 00         MOV dword ptr [EBX + 0x135],EAX
00665530  0F BF 4F 0E               MOVSX ECX,word ptr [EDI + 0xe]
00665534  0F BF 57 0C               MOVSX EDX,word ptr [EDI + 0xc]
00665538  0F BF 47 0A               MOVSX EAX,word ptr [EDI + 0xa]
0066553C  51                        PUSH ECX
0066553D  52                        PUSH EDX
0066553E  50                        PUSH EAX
0066553F  8B CB                     MOV ECX,EBX
00665541  E8 45 FD D9 FF            CALL 0x0040528b
00665546  66 8B 0F                  MOV CX,word ptr [EDI]
00665549  66 8B 57 02               MOV DX,word ptr [EDI + 0x2]
0066554D  66 89 4D A0               MOV word ptr [EBP + -0x60],CX
00665551  66 8B 4F 04               MOV CX,word ptr [EDI + 0x4]
00665555  66 89 55 A2               MOV word ptr [EBP + -0x5e],DX
00665559  8D 55 A0                  LEA EDX,[EBP + -0x60]
0066555C  B8 01 00 00 00            MOV EAX,0x1
00665561  66 89 4D A4               MOV word ptr [EBP + -0x5c],CX
00665565  6A 02                     PUSH 0x2
00665567  52                        PUSH EDX
00665568  8B CB                     MOV ECX,EBX
0066556A  66 89 45 A6               MOV word ptr [EBP + -0x5a],AX
0066556E  66 89 45 A8               MOV word ptr [EBP + -0x58],AX
00665572  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00665576  E8 67 D3 D9 FF            CALL 0x004028e2
0066557B  85 C0                     TEST EAX,EAX
0066557D  0F 84 E3 1A 00 00         JZ 0x00667066
LAB_00665583:
00665583  C7 83 9B 00 00 00 3C 00 00 00  MOV dword ptr [EBX + 0x9b],0x3c
0066558D  E9 C2 1A 00 00            JMP 0x00667054
LAB_00665592:
00665592  8B 83 35 01 00 00         MOV EAX,dword ptr [EBX + 0x135]
00665598  3B C6                     CMP EAX,ESI
0066559A  74 16                     JZ 0x006655b2
0066559C  8B 8B 31 01 00 00         MOV ECX,dword ptr [EBX + 0x131]
006655A2  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
006655A8  03 C8                     ADD ECX,EAX
006655AA  3B D1                     CMP EDX,ECX
006655AC  77 0C                     JA 0x006655ba
006655AE  3B C6                     CMP EAX,ESI
006655B0  75 31                     JNZ 0x006655e3
LAB_006655b2:
006655B2  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
006655B8  74 29                     JZ 0x006655e3
LAB_006655ba:
006655BA  8B 83 2D 01 00 00         MOV EAX,dword ptr [EBX + 0x12d]
006655C0  C7 83 9B 00 00 00 2A 00 00 00  MOV dword ptr [EBX + 0x9b],0x2a
006655CA  40                        INC EAX
006655CB  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
006655D1  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
006655D7  89 83 2D 01 00 00         MOV dword ptr [EBX + 0x12d],EAX
006655DD  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_006655e3:
006655E3  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
006655E9  3B C6                     CMP EAX,ESI
006655EB  0F 84 36 FD FF FF         JZ 0x00665327
006655F1  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
006655F7  03 D0                     ADD EDX,EAX
006655F9  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
006655FF  3B C2                     CMP EAX,EDX
00665601  0F 86 20 FD FF FF         JBE 0x00665327
LAB_00665607:
00665607  C7 83 9B 00 00 00 3C 00 00 00  MOV dword ptr [EBX + 0x9b],0x3c
00665611  E9 FF FC FF FF            JMP 0x00665315
switchD_00665095::caseD_32:
00665616  C7 83 9B 00 00 00 33 00 00 00  MOV dword ptr [EBX + 0x9b],0x33
00665620  E9 2F 1A 00 00            JMP 0x00667054
switchD_00665095::caseD_33:
00665625  C7 83 9B 00 00 00 34 00 00 00  MOV dword ptr [EBX + 0x9b],0x34
0066562F  E9 20 1A 00 00            JMP 0x00667054
switchD_00665095::caseD_34:
00665634  39 B3 A3 00 00 00         CMP dword ptr [EBX + 0xa3],ESI
0066563A  75 3C                     JNZ 0x00665678
0066563C  8B CB                     MOV ECX,EBX
0066563E  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665648  E8 0F 03 DA FF            CALL 0x0040595c
0066564D  85 C0                     TEST EAX,EAX
0066564F  0F 84 11 1A 00 00         JZ 0x00667066
00665655  C7 83 9B 00 00 00 78 00 00 00  MOV dword ptr [EBX + 0x9b],0x78
0066565F  C7 83 F7 01 00 00 B8 0B 00 00  MOV dword ptr [EBX + 0x1f7],0xbb8
00665669  C7 83 9F 00 00 00 33 00 00 00  MOV dword ptr [EBX + 0x9f],0x33
00665673  E9 E2 19 00 00            JMP 0x0066705a
LAB_00665678:
00665678  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
0066567E  0F 84 E2 19 00 00         JZ 0x00667066
00665684  8B CB                     MOV ECX,EBX
00665686  E8 B0 DD D9 FF            CALL 0x0040343b
0066568B  85 C0                     TEST EAX,EAX
0066568D  7E 5E                     JLE 0x006656ed
0066568F  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
00665695  B9 0D 00 00 00            MOV ECX,0xd
0066569A  33 C0                     XOR EAX,EAX
0066569C  8D BD 68 FF FF FF         LEA EDI,[EBP + 0xffffff68]
006656A2  F3 AB                     STOSD.REP ES:EDI
006656A4  8B CB                     MOV ECX,EBX
006656A6  C7 85 68 FF FF FF 72 00 00 00  MOV dword ptr [EBP + 0xffffff68],0x72
006656B0  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
006656B6  C7 85 70 FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff70],0x2
006656C0  E8 0A C2 D9 FF            CALL 0x004018cf
006656C5  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
006656CB  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006656D1  3B CE                     CMP ECX,ESI
006656D3  74 0C                     JZ 0x006656e1
006656D5  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
006656DB  50                        PUSH EAX
006656DC  E8 00 BA D9 FF            CALL 0x004010e1
LAB_006656e1:
006656E1  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
006656E7  51                        PUSH ECX
006656E8  E8 23 8A 04 00            CALL 0x006ae110
LAB_006656ed:
006656ED  C7 83 9B 00 00 00 78 00 00 00  MOV dword ptr [EBX + 0x9b],0x78
006656F7  C7 83 F7 01 00 00 FA 00 00 00  MOV dword ptr [EBX + 0x1f7],0xfa
00665701  C7 83 9F 00 00 00 33 00 00 00  MOV dword ptr [EBX + 0x9f],0x33
0066570B  E9 4A 19 00 00            JMP 0x0066705a
switchD_00665095::caseD_3c:
00665710  8A 83 00 01 00 00         MOV AL,byte ptr [EBX + 0x100]
00665716  84 C0                     TEST AL,AL
00665718  74 28                     JZ 0x00665742
0066571A  C7 83 9B 00 00 00 41 00 00 00  MOV dword ptr [EBX + 0x9b],0x41
00665724  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
0066572A  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665730  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
00665736  C7 83 EB 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xeb],0x1
00665740  EB 1C                     JMP 0x0066575e
LAB_00665742:
00665742  C7 83 9B 00 00 00 14 00 00 00  MOV dword ptr [EBX + 0x9b],0x14
0066574C  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
00665752  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665758  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_0066575e:
0066575E  8A 83 39 01 00 00         MOV AL,byte ptr [EBX + 0x139]
00665764  84 C0                     TEST AL,AL
00665766  0F 84 1A 01 00 00         JZ 0x00665886
0066576C  8B 93 4E 01 00 00         MOV EDX,dword ptr [EBX + 0x14e]
00665772  8B 8B 4A 01 00 00         MOV ECX,dword ptr [EBX + 0x14a]
00665778  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
0066577E  03 D1                     ADD EDX,ECX
00665780  3B C2                     CMP EAX,EDX
00665782  E9 C4 FB FF FF            JMP 0x0066534b
switchD_00665095::caseD_41:
00665787  B8 01 00 00 00            MOV EAX,0x1
0066578C  89 83 EB 00 00 00         MOV dword ptr [EBX + 0xeb],EAX
00665792  8B 8B A3 00 00 00         MOV ECX,dword ptr [EBX + 0xa3]
00665798  3B CE                     CMP ECX,ESI
0066579A  75 62                     JNZ 0x006657fe
0066579C  89 83 A3 00 00 00         MOV dword ptr [EBX + 0xa3],EAX
006657A2  8B 93 07 01 00 00         MOV EDX,dword ptr [EBX + 0x107]
006657A8  89 93 AB 00 00 00         MOV dword ptr [EBX + 0xab],EDX
006657AE  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
006657B4  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
006657BA  0F BF 8B 0F 01 00 00      MOVSX ECX,word ptr [EBX + 0x10f]
006657C1  0F BF 93 0D 01 00 00      MOVSX EDX,word ptr [EBX + 0x10d]
006657C8  0F BF 83 0B 01 00 00      MOVSX EAX,word ptr [EBX + 0x10b]
006657CF  51                        PUSH ECX
006657D0  52                        PUSH EDX
006657D1  50                        PUSH EAX
006657D2  8B CB                     MOV ECX,EBX
006657D4  E8 B2 FA D9 FF            CALL 0x0040528b
006657D9  0F BF 8B 05 01 00 00      MOVSX ECX,word ptr [EBX + 0x105]
006657E0  0F BF 93 03 01 00 00      MOVSX EDX,word ptr [EBX + 0x103]
006657E7  0F BF 83 01 01 00 00      MOVSX EAX,word ptr [EBX + 0x101]
006657EE  56                        PUSH ESI
006657EF  51                        PUSH ECX
006657F0  52                        PUSH EDX
006657F1  50                        PUSH EAX
006657F2  8B CB                     MOV ECX,EBX
006657F4  E8 AD FD D9 FF            CALL 0x004055a6
006657F9  E9 68 18 00 00            JMP 0x00667066
LAB_006657fe:
006657FE  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00665804  3B C6                     CMP EAX,ESI
00665806  74 2E                     JZ 0x00665836
00665808  8B 8B AF 00 00 00         MOV ECX,dword ptr [EBX + 0xaf]
0066580E  03 C8                     ADD ECX,EAX
00665810  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665816  3B C1                     CMP EAX,ECX
00665818  76 1C                     JBE 0x00665836
0066581A  C7 83 9B 00 00 00 14 00 00 00  MOV dword ptr [EBX + 0x9b],0x14
00665824  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
0066582A  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665830  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00665836:
00665836  8A 83 39 01 00 00         MOV AL,byte ptr [EBX + 0x139]
0066583C  84 C0                     TEST AL,AL
0066583E  74 46                     JZ 0x00665886
00665840  8B 93 4E 01 00 00         MOV EDX,dword ptr [EBX + 0x14e]
00665846  8B 8B 4A 01 00 00         MOV ECX,dword ptr [EBX + 0x14a]
0066584C  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665852  03 D1                     ADD EDX,ECX
00665854  3B C2                     CMP EAX,EDX
00665856  76 2E                     JBE 0x00665886
00665858  8B CB                     MOV ECX,EBX
0066585A  E8 DC DB D9 FF            CALL 0x0040343b
0066585F  0F BF 8B 3E 01 00 00      MOVSX ECX,word ptr [EBX + 0x13e]
00665866  3B C1                     CMP EAX,ECX
00665868  7C 1C                     JL 0x00665886
LAB_0066586a:
0066586A  C7 83 9B 00 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x9b],0x6e
00665874  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
0066587A  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665880  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00665886:
00665886  8A 83 63 01 00 00         MOV AL,byte ptr [EBX + 0x163]
0066588C  84 C0                     TEST AL,AL
0066588E  0F 84 D2 17 00 00         JZ 0x00667066
00665894  8B CB                     MOV ECX,EBX
00665896  E8 B3 E6 D9 FF            CALL 0x00403f4e
0066589B  85 C0                     TEST EAX,EAX
0066589D  0F 84 C3 17 00 00         JZ 0x00667066
006658A3  C7 83 9B 00 00 00 64 00 00 00  MOV dword ptr [EBX + 0x9b],0x64
006658AD  E9 A2 17 00 00            JMP 0x00667054
switchD_00665095::caseD_64:
006658B2  C7 83 EB 00 00 00 00 01 00 00  MOV dword ptr [EBX + 0xeb],0x100
006658BC  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
006658C2  3B C6                     CMP EAX,ESI
006658C4  75 41                     JNZ 0x00665907
006658C6  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
006658D0  8B 93 6C 01 00 00         MOV EDX,dword ptr [EBX + 0x16c]
006658D6  89 93 AB 00 00 00         MOV dword ptr [EBX + 0xab],EDX
006658DC  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
006658E2  56                        PUSH ESI
006658E3  56                        PUSH ESI
006658E4  56                        PUSH ESI
006658E5  8B CB                     MOV ECX,EBX
006658E7  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
006658ED  E8 99 F9 D9 FF            CALL 0x0040528b
006658F2  8D 8B 95 01 00 00         LEA ECX,[EBX + 0x195]
006658F8  6A 01                     PUSH 0x1
006658FA  51                        PUSH ECX
006658FB  8B CB                     MOV ECX,EBX
006658FD  E8 E0 CF D9 FF            CALL 0x004028e2
00665902  E9 5F 17 00 00            JMP 0x00667066
LAB_00665907:
00665907  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
0066590D  0F 85 3B 17 00 00         JNZ 0x0066704e
00665913  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00665919  3B C6                     CMP EAX,ESI
0066591B  0F 84 45 17 00 00         JZ 0x00667066
00665921  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00665927  03 D0                     ADD EDX,EAX
00665929  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
0066592F  3B C2                     CMP EAX,EDX
00665931  0F 86 2F 17 00 00         JBE 0x00667066
00665937  E9 12 17 00 00            JMP 0x0066704e
switchD_00665095::caseD_6e:
0066593C  C7 83 EB 00 00 00 80 00 00 00  MOV dword ptr [EBX + 0xeb],0x80
00665946  8B 83 42 01 00 00         MOV EAX,dword ptr [EBX + 0x142]
0066594C  89 83 AB 00 00 00         MOV dword ptr [EBX + 0xab],EAX
00665952  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
00665958  56                        PUSH ESI
00665959  89 8B AF 00 00 00         MOV dword ptr [EBX + 0xaf],ECX
0066595F  56                        PUSH ESI
00665960  56                        PUSH ESI
00665961  8B CB                     MOV ECX,EBX
00665963  E8 23 F9 D9 FF            CALL 0x0040528b
00665968  8B 83 97 00 00 00         MOV EAX,dword ptr [EBX + 0x97]
0066596E  3D FF 00 00 00            CMP EAX,0xff
00665973  0F 84 9C 00 00 00         JZ 0x00665a15
00665979  8B 93 3A 01 00 00         MOV EDX,dword ptr [EBX + 0x13a]
0066597F  56                        PUSH ESI
00665980  6A FF                     PUSH -0x1
00665982  56                        PUSH ESI
00665983  8D BB 95 01 00 00         LEA EDI,[EBX + 0x195]
00665989  52                        PUSH EDX
0066598A  56                        PUSH ESI
0066598B  57                        PUSH EDI
0066598C  50                        PUSH EAX
0066598D  8B CB                     MOV ECX,EBX
0066598F  E8 D8 FE D9 FF            CALL 0x0040586c
00665994  85 C0                     TEST EAX,EAX
00665996  75 7D                     JNZ 0x00665a15
00665998  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0066599B  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006659A1  05 39 30 00 00            ADD EAX,0x3039
006659A6  A9 00 00 01 00            TEST EAX,0x10000
006659AB  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
006659AE  74 19                     JZ 0x006659c9
006659B0  C7 83 EF 00 00 00 00 01 00 00  MOV dword ptr [EBX + 0xef],0x100
006659BA  C7 83 9B 00 00 00 71 00 00 00  MOV dword ptr [EBX + 0x9b],0x71
006659C4  E9 8B 16 00 00            JMP 0x00667054
LAB_006659c9:
006659C9  8D 8B A1 01 00 00         LEA ECX,[EBX + 0x1a1]
006659CF  56                        PUSH ESI
006659D0  51                        PUSH ECX
006659D1  57                        PUSH EDI
006659D2  8B CB                     MOV ECX,EBX
006659D4  E8 93 C2 D9 FF            CALL 0x00401c6c
006659D9  3D 00 02 00 00            CMP EAX,0x200
006659DE  74 20                     JZ 0x00665a00
006659E0  3D 00 04 00 00            CMP EAX,0x400
006659E5  74 19                     JZ 0x00665a00
006659E7  C7 83 EF 00 00 00 00 01 00 00  MOV dword ptr [EBX + 0xef],0x100
006659F1  C7 83 9B 00 00 00 71 00 00 00  MOV dword ptr [EBX + 0x9b],0x71
006659FB  E9 54 16 00 00            JMP 0x00667054
LAB_00665a00:
00665A00  89 83 EF 00 00 00         MOV dword ptr [EBX + 0xef],EAX
00665A06  C7 83 9B 00 00 00 6F 00 00 00  MOV dword ptr [EBX + 0x9b],0x6f
00665A10  E9 3F 16 00 00            JMP 0x00667054
LAB_00665a15:
00665A15  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
00665A1B  89 93 4E 01 00 00         MOV dword ptr [EBX + 0x14e],EDX
00665A21  E9 28 16 00 00            JMP 0x0066704e
switchD_00665095::caseD_6f:
00665A26  C7 83 EB 00 00 00 80 00 00 00  MOV dword ptr [EBX + 0xeb],0x80
00665A30  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665A36  3B C6                     CMP EAX,ESI
00665A38  75 18                     JNZ 0x00665a52
00665A3A  8D 83 A1 01 00 00         LEA EAX,[EBX + 0x1a1]
00665A40  6A 02                     PUSH 0x2
00665A42  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665A4C  50                        PUSH EAX
00665A4D  E9 F6 00 00 00            JMP 0x00665b48
LAB_00665a52:
00665A52  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00665A58  74 1C                     JZ 0x00665a76
00665A5A  C7 83 9B 00 00 00 70 00 00 00  MOV dword ptr [EBX + 0x9b],0x70
00665A64  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
00665A6A  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665A70  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00665a76:
00665A76  8B CB                     MOV ECX,EBX
00665A78  E8 BE D9 D9 FF            CALL 0x0040343b
00665A7D  0F BF 8B 40 01 00 00      MOVSX ECX,word ptr [EBX + 0x140]
00665A84  3B C1                     CMP EAX,ECX
00665A86  7E 24                     JLE 0x00665aac
00665A88  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00665A8E  3B C6                     CMP EAX,ESI
00665A90  0F 84 D0 15 00 00         JZ 0x00667066
00665A96  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00665A9C  03 D0                     ADD EDX,EAX
00665A9E  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665AA4  3B C2                     CMP EAX,EDX
00665AA6  0F 86 BA 15 00 00         JBE 0x00667066
LAB_00665aac:
00665AAC  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665AB2  89 83 4E 01 00 00         MOV dword ptr [EBX + 0x14e],EAX
00665AB8  E9 91 15 00 00            JMP 0x0066704e
switchD_00665095::caseD_70:
00665ABD  C7 83 EB 00 00 00 80 00 00 00  MOV dword ptr [EBX + 0xeb],0x80
00665AC7  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665ACD  3B C6                     CMP EAX,ESI
00665ACF  0F 85 91 00 00 00         JNZ 0x00665b66
00665AD5  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00665ADB  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665AE5  3D 00 02 00 00            CMP EAX,0x200
00665AEA  74 07                     JZ 0x00665af3
00665AEC  3D 00 04 00 00            CMP EAX,0x400
00665AF1  75 64                     JNZ 0x00665b57
LAB_00665af3:
00665AF3  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00665AF6  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00665AFC  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00665B02  A9 00 00 01 00            TEST EAX,0x10000
00665B07  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00665B0A  74 4B                     JZ 0x00665b57
00665B0C  8B 93 EF 00 00 00         MOV EDX,dword ptr [EBX + 0xef]
00665B12  8D BB A1 01 00 00         LEA EDI,[EBX + 0x1a1]
00665B18  52                        PUSH EDX
00665B19  8D 83 95 01 00 00         LEA EAX,[EBX + 0x195]
00665B1F  57                        PUSH EDI
00665B20  50                        PUSH EAX
00665B21  8B CB                     MOV ECX,EBX
00665B23  E8 44 C1 D9 FF            CALL 0x00401c6c
00665B28  3D 00 02 00 00            CMP EAX,0x200
00665B2D  74 16                     JZ 0x00665b45
00665B2F  3D 00 04 00 00            CMP EAX,0x400
00665B34  74 0F                     JZ 0x00665b45
00665B36  C7 83 9B 00 00 00 71 00 00 00  MOV dword ptr [EBX + 0x9b],0x71
00665B40  E9 0F 15 00 00            JMP 0x00667054
LAB_00665b45:
00665B45  6A 02                     PUSH 0x2
00665B47  57                        PUSH EDI
LAB_00665b48:
00665B48  8B CB                     MOV ECX,EBX
00665B4A  E8 93 CD D9 FF            CALL 0x004028e2
00665B4F  85 C0                     TEST EAX,EAX
00665B51  0F 84 0F 15 00 00         JZ 0x00667066
LAB_00665b57:
00665B57  C7 83 9B 00 00 00 71 00 00 00  MOV dword ptr [EBX + 0x9b],0x71
00665B61  E9 EE 14 00 00            JMP 0x00667054
LAB_00665b66:
00665B66  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00665B6C  74 1C                     JZ 0x00665b8a
00665B6E  C7 83 9B 00 00 00 71 00 00 00  MOV dword ptr [EBX + 0x9b],0x71
00665B78  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
00665B7E  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665B84  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00665b8a:
00665B8A  8B CB                     MOV ECX,EBX
00665B8C  E8 AA D8 D9 FF            CALL 0x0040343b
00665B91  0F BF 8B 40 01 00 00      MOVSX ECX,word ptr [EBX + 0x140]
00665B98  3B C1                     CMP EAX,ECX
00665B9A  0F 8E 0C FF FF FF         JLE 0x00665aac
00665BA0  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00665BA6  3B C6                     CMP EAX,ESI
00665BA8  0F 84 B8 14 00 00         JZ 0x00667066
00665BAE  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00665BB4  03 D0                     ADD EDX,EAX
00665BB6  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665BBC  3B C2                     CMP EAX,EDX
00665BBE  0F 86 A2 14 00 00         JBE 0x00667066
00665BC4  89 83 4E 01 00 00         MOV dword ptr [EBX + 0x14e],EAX
00665BCA  E9 7F 14 00 00            JMP 0x0066704e
switchD_00665095::caseD_71:
00665BCF  C7 83 EB 00 00 00 80 00 00 00  MOV dword ptr [EBX + 0xeb],0x80
00665BD9  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665BDF  3B C6                     CMP EAX,ESI
00665BE1  75 38                     JNZ 0x00665c1b
00665BE3  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665BED  8B 8B 46 01 00 00         MOV ECX,dword ptr [EBX + 0x146]
00665BF3  8D 93 95 01 00 00         LEA EDX,[EBX + 0x195]
00665BF9  51                        PUSH ECX
00665BFA  52                        PUSH EDX
00665BFB  8B CB                     MOV ECX,EBX
00665BFD  E8 E0 CC D9 FF            CALL 0x004028e2
00665C02  85 C0                     TEST EAX,EAX
00665C04  0F 84 5C 14 00 00         JZ 0x00667066
00665C0A  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665C10  89 83 4E 01 00 00         MOV dword ptr [EBX + 0x14e],EAX
00665C16  E9 33 14 00 00            JMP 0x0066704e
LAB_00665c1b:
00665C1B  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00665C21  0F 85 85 FE FF FF         JNZ 0x00665aac
00665C27  E9 4A FE FF FF            JMP 0x00665a76
switchD_00665095::caseD_78:
00665C2C  C7 83 EB 00 00 00 00 40 00 00  MOV dword ptr [EBX + 0xeb],0x4000
00665C36  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665C3C  3B C6                     CMP EAX,ESI
00665C3E  75 27                     JNZ 0x00665c67
00665C40  8B 8B F7 01 00 00         MOV ECX,dword ptr [EBX + 0x1f7]
00665C46  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665C50  89 8B AB 00 00 00         MOV dword ptr [EBX + 0xab],ECX
00665C56  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
00665C5C  89 93 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EDX
00665C62  E9 FF 13 00 00            JMP 0x00667066
LAB_00665c67:
00665C67  8B 83 AF 00 00 00         MOV EAX,dword ptr [EBX + 0xaf]
00665C6D  8B 93 AB 00 00 00         MOV EDX,dword ptr [EBX + 0xab]
00665C73  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
00665C79  03 C2                     ADD EAX,EDX
00665C7B  3B C8                     CMP ECX,EAX
00665C7D  0F 86 E3 13 00 00         JBE 0x00667066
00665C83  8B 8B 9F 00 00 00         MOV ECX,dword ptr [EBX + 0x9f]
00665C89  89 8B 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ECX
00665C8F  E9 C0 13 00 00            JMP 0x00667054
LAB_00665c94:
00665C94  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
00665C9E  8B 93 90 01 00 00         MOV EDX,dword ptr [EBX + 0x190]
00665CA4  89 93 AB 00 00 00         MOV dword ptr [EBX + 0xab],EDX
00665CAA  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665CB0  56                        PUSH ESI
00665CB1  56                        PUSH ESI
00665CB2  56                        PUSH ESI
00665CB3  8B CB                     MOV ECX,EBX
00665CB5  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
00665CBB  E8 CB F5 D9 FF            CALL 0x0040528b
00665CC0  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00665CC6  3D 00 02 00 00            CMP EAX,0x200
00665CCB  74 20                     JZ 0x00665ced
00665CCD  3D 00 04 00 00            CMP EAX,0x400
00665CD2  74 19                     JZ 0x00665ced
LAB_00665cd4:
00665CD4  C7 83 EF 00 00 00 00 01 00 00  MOV dword ptr [EBX + 0xef],0x100
00665CDE  C7 83 9B 00 00 00 85 00 00 00  MOV dword ptr [EBX + 0x9b],0x85
00665CE8  E9 67 13 00 00            JMP 0x00667054
LAB_00665ced:
00665CED  8D 8B A1 01 00 00         LEA ECX,[EBX + 0x1a1]
00665CF3  50                        PUSH EAX
00665CF4  8D 93 95 01 00 00         LEA EDX,[EBX + 0x195]
00665CFA  51                        PUSH ECX
00665CFB  52                        PUSH EDX
00665CFC  8B CB                     MOV ECX,EBX
00665CFE  E8 69 BF D9 FF            CALL 0x00401c6c
00665D03  3B 83 EF 00 00 00         CMP EAX,dword ptr [EBX + 0xef]
00665D09  75 C9                     JNZ 0x00665cd4
00665D0B  C7 83 9B 00 00 00 83 00 00 00  MOV dword ptr [EBX + 0x9b],0x83
00665D15  E9 3A 13 00 00            JMP 0x00667054
LAB_00665d1a:
00665D1A  B9 00 02 00 00            MOV ECX,0x200
00665D1F  3B C1                     CMP EAX,ECX
00665D21  0F 87 28 0C 00 00         JA 0x0066694f
00665D27  0F 84 16 0B 00 00         JZ 0x00666843
00665D2D  3D F5 01 00 00            CMP EAX,0x1f5
00665D32  0F 87 18 06 00 00         JA 0x00666350
00665D38  0F 84 63 05 00 00         JZ 0x006662a1
00665D3E  BF 85 00 00 00            MOV EDI,0x85
00665D43  3B C7                     CMP EAX,EDI
00665D45  0F 87 D7 02 00 00         JA 0x00666022
00665D4B  0F 84 EC 01 00 00         JZ 0x00665f3d
00665D51  2D 83 00 00 00            SUB EAX,0x83
00665D56  0F 84 28 01 00 00         JZ 0x00665e84
00665D5C  48                        DEC EAX
00665D5D  0F 85 03 13 00 00         JNZ 0x00667066
00665D63  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
00665D6D  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665D73  3B C6                     CMP EAX,ESI
00665D75  0F 85 95 00 00 00         JNZ 0x00665e10
00665D7B  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00665D81  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665D8B  3B C1                     CMP EAX,ECX
00665D8D  74 0B                     JZ 0x00665d9a
00665D8F  3D 00 04 00 00            CMP EAX,0x400
00665D94  0F 85 20 01 00 00         JNZ 0x00665eba
LAB_00665d9a:
00665D9A  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00665D9D  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00665DA3  05 39 30 00 00            ADD EAX,0x3039
00665DA8  A9 00 00 01 00            TEST EAX,0x10000
00665DAD  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00665DB0  0F 84 04 01 00 00         JZ 0x00665eba
00665DB6  8B 8B EF 00 00 00         MOV ECX,dword ptr [EBX + 0xef]
00665DBC  8D BB A1 01 00 00         LEA EDI,[EBX + 0x1a1]
00665DC2  51                        PUSH ECX
00665DC3  8D 93 95 01 00 00         LEA EDX,[EBX + 0x195]
00665DC9  57                        PUSH EDI
00665DCA  52                        PUSH EDX
00665DCB  8B CB                     MOV ECX,EBX
00665DCD  E8 9A BE D9 FF            CALL 0x00401c6c
00665DD2  3D 00 02 00 00            CMP EAX,0x200
00665DD7  74 16                     JZ 0x00665def
00665DD9  3D 00 04 00 00            CMP EAX,0x400
00665DDE  74 0F                     JZ 0x00665def
00665DE0  C7 83 9B 00 00 00 85 00 00 00  MOV dword ptr [EBX + 0x9b],0x85
00665DEA  E9 65 12 00 00            JMP 0x00667054
LAB_00665def:
00665DEF  6A 02                     PUSH 0x2
00665DF1  57                        PUSH EDI
00665DF2  8B CB                     MOV ECX,EBX
00665DF4  E8 E9 CA D9 FF            CALL 0x004028e2
00665DF9  85 C0                     TEST EAX,EAX
00665DFB  0F 84 65 12 00 00         JZ 0x00667066
00665E01  C7 83 9B 00 00 00 85 00 00 00  MOV dword ptr [EBX + 0x9b],0x85
00665E0B  E9 44 12 00 00            JMP 0x00667054
LAB_00665e10:
00665E10  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00665E16  74 18                     JZ 0x00665e30
00665E18  89 BB 9B 00 00 00         MOV dword ptr [EBX + 0x9b],EDI
00665E1E  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
00665E24  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665E2A  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00665e30:
00665E30  8B CB                     MOV ECX,EBX
00665E32  E8 04 D6 D9 FF            CALL 0x0040343b
00665E37  0F BF 8B 8E 01 00 00      MOVSX ECX,word ptr [EBX + 0x18e]
00665E3E  3B C1                     CMP EAX,ECX
00665E40  7E 24                     JLE 0x00665e66
00665E42  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00665E48  3B C6                     CMP EAX,ESI
00665E4A  0F 84 16 12 00 00         JZ 0x00667066
00665E50  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00665E56  03 D0                     ADD EDX,EAX
00665E58  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665E5E  3B C2                     CMP EAX,EDX
00665E60  0F 86 00 12 00 00         JBE 0x00667066
LAB_00665e66:
00665E66  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00665E69  3B CE                     CMP ECX,ESI
00665E6B  0F 84 DD 11 00 00         JZ 0x0066704e
00665E71  8B 83 F7 00 00 00         MOV EAX,dword ptr [EBX + 0xf7]
00665E77  50                        PUSH EAX
00665E78  6A FF                     PUSH -0x1
00665E7A  E8 E2 CD D9 FF            CALL 0x00402c61
00665E7F  E9 CA 11 00 00            JMP 0x0066704e
LAB_00665e84:
00665E84  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
00665E8E  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665E94  3B C6                     CMP EAX,ESI
00665E96  75 2D                     JNZ 0x00665ec5
00665E98  8D 8B A1 01 00 00         LEA ECX,[EBX + 0x1a1]
00665E9E  6A 02                     PUSH 0x2
00665EA0  51                        PUSH ECX
00665EA1  8B CB                     MOV ECX,EBX
00665EA3  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665EAD  E8 30 CA D9 FF            CALL 0x004028e2
00665EB2  85 C0                     TEST EAX,EAX
00665EB4  0F 84 AC 11 00 00         JZ 0x00667066
LAB_00665eba:
00665EBA  89 BB 9B 00 00 00         MOV dword ptr [EBX + 0x9b],EDI
00665EC0  E9 8F 11 00 00            JMP 0x00667054
LAB_00665ec5:
00665EC5  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00665ECB  74 1C                     JZ 0x00665ee9
00665ECD  C7 83 9B 00 00 00 84 00 00 00  MOV dword ptr [EBX + 0x9b],0x84
00665ED7  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
00665EDD  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665EE3  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00665ee9:
00665EE9  8B CB                     MOV ECX,EBX
00665EEB  E8 4B D5 D9 FF            CALL 0x0040343b
00665EF0  0F BF 93 8E 01 00 00      MOVSX EDX,word ptr [EBX + 0x18e]
00665EF7  3B C2                     CMP EAX,EDX
00665EF9  7E 24                     JLE 0x00665f1f
00665EFB  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00665F01  3B C6                     CMP EAX,ESI
00665F03  0F 84 5D 11 00 00         JZ 0x00667066
00665F09  8B 8B AF 00 00 00         MOV ECX,dword ptr [EBX + 0xaf]
00665F0F  03 C8                     ADD ECX,EAX
00665F11  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665F17  3B C1                     CMP EAX,ECX
00665F19  0F 86 47 11 00 00         JBE 0x00667066
LAB_00665f1f:
00665F1F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00665F22  3B CE                     CMP ECX,ESI
00665F24  0F 84 24 11 00 00         JZ 0x0066704e
00665F2A  8B 93 F7 00 00 00         MOV EDX,dword ptr [EBX + 0xf7]
00665F30  52                        PUSH EDX
00665F31  6A FF                     PUSH -0x1
00665F33  E8 29 CD D9 FF            CALL 0x00402c61
00665F38  E9 11 11 00 00            JMP 0x0066704e
LAB_00665f3d:
00665F3D  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
00665F47  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00665F4D  3B C6                     CMP EAX,ESI
00665F4F  75 45                     JNZ 0x00665f96
00665F51  8B 83 FB 00 00 00         MOV EAX,dword ptr [EBX + 0xfb]
00665F57  8D 8B 95 01 00 00         LEA ECX,[EBX + 0x195]
00665F5D  50                        PUSH EAX
00665F5E  51                        PUSH ECX
00665F5F  8B CB                     MOV ECX,EBX
00665F61  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00665F6B  E8 72 C9 D9 FF            CALL 0x004028e2
00665F70  85 C0                     TEST EAX,EAX
00665F72  0F 84 EE 10 00 00         JZ 0x00667066
00665F78  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00665F7B  3B CE                     CMP ECX,ESI
00665F7D  0F 84 CB 10 00 00         JZ 0x0066704e
00665F83  8B 93 F7 00 00 00         MOV EDX,dword ptr [EBX + 0xf7]
00665F89  52                        PUSH EDX
00665F8A  6A FF                     PUSH -0x1
00665F8C  E8 D0 CC D9 FF            CALL 0x00402c61
00665F91  E9 B8 10 00 00            JMP 0x0066704e
LAB_00665f96:
00665F96  8B 83 A7 00 00 00         MOV EAX,dword ptr [EBX + 0xa7]
00665F9C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00665F9F  3B C6                     CMP EAX,ESI
00665FA1  74 2C                     JZ 0x00665fcf
00665FA3  3B FE                     CMP EDI,ESI
00665FA5  74 10                     JZ 0x00665fb7
00665FA7  8B 83 F7 00 00 00         MOV EAX,dword ptr [EBX + 0xf7]
00665FAD  8B CF                     MOV ECX,EDI
00665FAF  50                        PUSH EAX
00665FB0  6A 01                     PUSH 0x1
00665FB2  E8 AA CC D9 FF            CALL 0x00402c61
LAB_00665fb7:
00665FB7  89 B3 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ESI
00665FBD  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
00665FC3  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00665FC9  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00665fcf:
00665FCF  8B CB                     MOV ECX,EBX
00665FD1  E8 65 D4 D9 FF            CALL 0x0040343b
00665FD6  0F BF 8B 8E 01 00 00      MOVSX ECX,word ptr [EBX + 0x18e]
00665FDD  3B C1                     CMP EAX,ECX
00665FDF  7E 24                     JLE 0x00666005
00665FE1  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00665FE7  3B C6                     CMP EAX,ESI
00665FE9  0F 84 77 10 00 00         JZ 0x00667066
00665FEF  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00665FF5  03 D0                     ADD EDX,EAX
00665FF7  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00665FFD  3B C2                     CMP EAX,EDX
00665FFF  0F 86 61 10 00 00         JBE 0x00667066
LAB_00666005:
00666005  3B FE                     CMP EDI,ESI
00666007  0F 84 41 10 00 00         JZ 0x0066704e
0066600D  8B 83 F7 00 00 00         MOV EAX,dword ptr [EBX + 0xf7]
00666013  8B CF                     MOV ECX,EDI
00666015  50                        PUSH EAX
00666016  6A FF                     PUSH -0x1
00666018  E8 44 CC D9 FF            CALL 0x00402c61
0066601D  E9 2C 10 00 00            JMP 0x0066704e
LAB_00666022:
00666022  3D 8C 00 00 00            CMP EAX,0x8c
00666027  0F 84 A3 01 00 00         JZ 0x006661d0
0066602D  3D F4 01 00 00            CMP EAX,0x1f4
00666032  0F 85 2E 10 00 00         JNZ 0x00667066
00666038  8B 8B E6 00 00 00         MOV ECX,dword ptr [EBX + 0xe6]
0066603E  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
00666048  89 8B AB 00 00 00         MOV dword ptr [EBX + 0xab],ECX
0066604E  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
00666054  56                        PUSH ESI
00666055  56                        PUSH ESI
00666056  56                        PUSH ESI
00666057  8B CB                     MOV ECX,EBX
00666059  89 93 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EDX
0066605F  E8 27 F2 D9 FF            CALL 0x0040528b
00666064  8B 83 BF 00 00 00         MOV EAX,dword ptr [EBX + 0xbf]
0066606A  8B C8                     MOV ECX,EAX
0066606C  83 E1 01                  AND ECX,0x1
0066606F  89 8B F3 00 00 00         MOV dword ptr [EBX + 0xf3],ECX
00666075  75 09                     JNZ 0x00666080
00666077  83 E0 02                  AND EAX,0x2
0066607A  89 83 F3 00 00 00         MOV dword ptr [EBX + 0xf3],EAX
LAB_00666080:
00666080  39 B3 F3 00 00 00         CMP dword ptr [EBX + 0xf3],ESI
00666086  75 1E                     JNZ 0x006660a6
00666088  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0066608B  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00666091  05 39 30 00 00            ADD EAX,0x3039
00666096  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00666099  C1 E8 10                  SHR EAX,0x10
0066609C  83 E0 01                  AND EAX,0x1
0066609F  40                        INC EAX
006660A0  89 83 F3 00 00 00         MOV dword ptr [EBX + 0xf3],EAX
LAB_006660a6:
006660A6  8B 83 C3 00 00 00         MOV EAX,dword ptr [EBX + 0xc3]
006660AC  BA 00 01 00 00            MOV EDX,0x100
006660B1  85 C2                     TEST EDX,EAX
006660B3  74 08                     JZ 0x006660bd
006660B5  89 93 EF 00 00 00         MOV dword ptr [EBX + 0xef],EDX
006660BB  EB 55                     JMP 0x00666112
LAB_006660bd:
006660BD  8B C8                     MOV ECX,EAX
006660BF  81 E1 00 02 00 00         AND ECX,0x200
006660C5  89 8B EF 00 00 00         MOV dword ptr [EBX + 0xef],ECX
006660CB  75 0E                     JNZ 0x006660db
006660CD  8B C8                     MOV ECX,EAX
006660CF  81 E1 00 04 00 00         AND ECX,0x400
006660D5  89 8B EF 00 00 00         MOV dword ptr [EBX + 0xef],ECX
LAB_006660db:
006660DB  39 B3 EF 00 00 00         CMP dword ptr [EBX + 0xef],ESI
006660E1  75 2F                     JNZ 0x00666112
006660E3  F6 C4 08                  TEST AH,0x8
006660E6  74 2A                     JZ 0x00666112
006660E8  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
006660EB  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006660F1  05 39 30 00 00            ADD EAX,0x3039
006660F6  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
006660F9  25 00 00 01 00            AND EAX,0x10000
006660FE  F7 D8                     NEG EAX
00666100  1B C0                     SBB EAX,EAX
00666102  25 00 FE FF FF            AND EAX,0xfffffe00
00666107  05 00 04 00 00            ADD EAX,0x400
0066610C  89 83 EF 00 00 00         MOV dword ptr [EBX + 0xef],EAX
LAB_00666112:
00666112  39 93 EF 00 00 00         CMP dword ptr [EBX + 0xef],EDX
00666118  75 18                     JNZ 0x00666132
0066611A  83 BB F3 00 00 00 01      CMP dword ptr [EBX + 0xf3],0x1
00666121  75 0F                     JNZ 0x00666132
00666123  C7 83 9B 00 00 00 F8 01 00 00  MOV dword ptr [EBX + 0x9b],0x1f8
0066612D  E9 22 0F 00 00            JMP 0x00667054
LAB_00666132:
00666132  8A 8B D3 00 00 00         MOV CL,byte ptr [EBX + 0xd3]
00666138  8B 83 CF 00 00 00         MOV EAX,dword ptr [EBX + 0xcf]
0066613E  6A 01                     PUSH 0x1
00666140  8D 93 D5 00 00 00         LEA EDX,[EBX + 0xd5]
00666146  51                        PUSH ECX
00666147  8B 8B CB 00 00 00         MOV ECX,dword ptr [EBX + 0xcb]
0066614D  52                        PUSH EDX
0066614E  8B 93 C7 00 00 00         MOV EDX,dword ptr [EBX + 0xc7]
00666154  8D BB 95 01 00 00         LEA EDI,[EBX + 0x195]
0066615A  50                        PUSH EAX
0066615B  51                        PUSH ECX
0066615C  57                        PUSH EDI
0066615D  52                        PUSH EDX
0066615E  8B CB                     MOV ECX,EBX
00666160  E8 07 F7 D9 FF            CALL 0x0040586c
00666165  85 C0                     TEST EAX,EAX
00666167  0F 85 DA 0E 00 00         JNZ 0x00667047
0066616D  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00666173  3D 00 02 00 00            CMP EAX,0x200
00666178  74 2F                     JZ 0x006661a9
0066617A  3D 00 04 00 00            CMP EAX,0x400
0066617F  74 28                     JZ 0x006661a9
LAB_00666181:
00666181  8B 83 F3 00 00 00         MOV EAX,dword ptr [EBX + 0xf3]
00666187  C7 83 EF 00 00 00 00 01 00 00  MOV dword ptr [EBX + 0xef],0x100
00666191  83 F8 01                  CMP EAX,0x1
00666194  0F 85 89 02 00 00         JNZ 0x00666423
0066619A  C7 83 9B 00 00 00 F8 01 00 00  MOV dword ptr [EBX + 0x9b],0x1f8
006661A4  E9 AB 0E 00 00            JMP 0x00667054
LAB_006661a9:
006661A9  50                        PUSH EAX
006661AA  8D 83 A1 01 00 00         LEA EAX,[EBX + 0x1a1]
006661B0  50                        PUSH EAX
006661B1  57                        PUSH EDI
006661B2  8B CB                     MOV ECX,EBX
006661B4  E8 B3 BA D9 FF            CALL 0x00401c6c
006661B9  3B 83 EF 00 00 00         CMP EAX,dword ptr [EBX + 0xef]
006661BF  75 C0                     JNZ 0x00666181
006661C1  C7 83 9B 00 00 00 F5 01 00 00  MOV dword ptr [EBX + 0x9b],0x1f5
006661CB  E9 84 0E 00 00            JMP 0x00667054
LAB_006661d0:
006661D0  89 8B EB 00 00 00         MOV dword ptr [EBX + 0xeb],ECX
006661D6  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
006661DC  3B C6                     CMP EAX,ESI
006661DE  75 66                     JNZ 0x00666246
006661E0  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
006661EA  8B 8B 5B 01 00 00         MOV ECX,dword ptr [EBX + 0x15b]
006661F0  89 8B AB 00 00 00         MOV dword ptr [EBX + 0xab],ECX
006661F6  8B 93 80 02 00 00         MOV EDX,dword ptr [EBX + 0x280]
006661FC  56                        PUSH ESI
006661FD  56                        PUSH ESI
006661FE  56                        PUSH ESI
006661FF  8B CB                     MOV ECX,EBX
00666201  89 93 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EDX
00666207  E8 7F F0 D9 FF            CALL 0x0040528b
0066620C  8B 83 5F 01 00 00         MOV EAX,dword ptr [EBX + 0x15f]
00666212  8D 8B 95 01 00 00         LEA ECX,[EBX + 0x195]
00666218  50                        PUSH EAX
00666219  51                        PUSH ECX
0066621A  8B CB                     MOV ECX,EBX
0066621C  E8 C1 C6 D9 FF            CALL 0x004028e2
00666221  85 C0                     TEST EAX,EAX
00666223  0F 84 3D 0E 00 00         JZ 0x00667066
00666229  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
0066622F  3B CE                     CMP ECX,ESI
00666231  0F 84 17 0E 00 00         JZ 0x0066704e
00666237  66 8B 53 7D               MOV DX,word ptr [EBX + 0x7d]
0066623B  52                        PUSH EDX
0066623C  E8 EE E2 D9 FF            CALL 0x0040452f
00666241  E9 08 0E 00 00            JMP 0x0066704e
LAB_00666246:
00666246  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
0066624C  75 36                     JNZ 0x00666284
0066624E  8B CB                     MOV ECX,EBX
00666250  E8 E6 D1 D9 FF            CALL 0x0040343b
00666255  0F BF 8B 59 01 00 00      MOVSX ECX,word ptr [EBX + 0x159]
0066625C  3B C1                     CMP EAX,ECX
0066625E  7E 24                     JLE 0x00666284
00666260  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00666266  3B C6                     CMP EAX,ESI
00666268  0F 84 F8 0D 00 00         JZ 0x00667066
0066626E  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00666274  03 D0                     ADD EDX,EAX
00666276  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
0066627C  3B C2                     CMP EAX,EDX
0066627E  0F 86 E2 0D 00 00         JBE 0x00667066
LAB_00666284:
00666284  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
0066628A  3B CE                     CMP ECX,ESI
0066628C  0F 84 BC 0D 00 00         JZ 0x0066704e
00666292  66 8B 43 7D               MOV AX,word ptr [EBX + 0x7d]
00666296  50                        PUSH EAX
00666297  E8 93 E2 D9 FF            CALL 0x0040452f
0066629C  E9 AD 0D 00 00            JMP 0x0066704e
LAB_006662a1:
006662A1  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
006662AB  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
006662B1  3B C6                     CMP EAX,ESI
006662B3  75 71                     JNZ 0x00666326
006662B5  8B 83 F3 00 00 00         MOV EAX,dword ptr [EBX + 0xf3]
006662BB  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
006662C5  83 F8 02                  CMP EAX,0x2
006662C8  75 15                     JNZ 0x006662df
006662CA  8D 8B A1 01 00 00         LEA ECX,[EBX + 0x1a1]
006662D0  6A 02                     PUSH 0x2
006662D2  51                        PUSH ECX
006662D3  8B CB                     MOV ECX,EBX
006662D5  E8 08 C6 D9 FF            CALL 0x004028e2
006662DA  E9 3C 01 00 00            JMP 0x0066641b
LAB_006662df:
006662DF  0F BF 83 AB 01 00 00      MOVSX EAX,word ptr [EBX + 0x1ab]
006662E6  99                        CDQ
006662E7  2B C2                     SUB EAX,EDX
006662E9  56                        PUSH ESI
006662EA  0F BF 93 A5 01 00 00      MOVSX EDX,word ptr [EBX + 0x1a5]
006662F1  D1 F8                     SAR EAX,0x1
006662F3  03 C2                     ADD EAX,EDX
006662F5  50                        PUSH EAX
006662F6  0F BF 83 A9 01 00 00      MOVSX EAX,word ptr [EBX + 0x1a9]
006662FD  0F BF 8B A3 01 00 00      MOVSX ECX,word ptr [EBX + 0x1a3]
00666304  99                        CDQ
00666305  2B C2                     SUB EAX,EDX
00666307  D1 F8                     SAR EAX,0x1
00666309  03 C1                     ADD EAX,ECX
0066630B  50                        PUSH EAX
0066630C  0F BF 83 A7 01 00 00      MOVSX EAX,word ptr [EBX + 0x1a7]
00666313  99                        CDQ
00666314  2B C2                     SUB EAX,EDX
00666316  0F BF 93 A1 01 00 00      MOVSX EDX,word ptr [EBX + 0x1a1]
0066631D  D1 F8                     SAR EAX,0x1
0066631F  03 C2                     ADD EAX,EDX
00666321  E9 ED 00 00 00            JMP 0x00666413
LAB_00666326:
00666326  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
0066632C  0F 84 A6 01 00 00         JZ 0x006664d8
00666332  8B 83 C3 00 00 00         MOV EAX,dword ptr [EBX + 0xc3]
00666338  F6 C4 08                  TEST AH,0x8
0066633B  0F 84 E2 00 00 00         JZ 0x00666423
00666341  C7 83 9B 00 00 00 F6 01 00 00  MOV dword ptr [EBX + 0x9b],0x1f6
0066634B  E9 04 0D 00 00            JMP 0x00667054
LAB_00666350:
00666350  05 0A FE FF FF            ADD EAX,0xfffffe0a
00666355  83 F8 09                  CMP EAX,0x9
00666358  0F 87 08 0D 00 00         JA 0x00667066
switchD_0066635e::switchD:
0066635E  FF 24 85 20 72 66 00      JMP dword ptr [EAX*0x4 + 0x667220]
switchD_0066635e::caseD_1f6:
00666365  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
0066636F  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666375  3B C6                     CMP EAX,ESI
00666377  0F 85 B5 00 00 00         JNZ 0x00666432
0066637D  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00666383  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
0066638D  3B C1                     CMP EAX,ECX
0066638F  74 0B                     JZ 0x0066639c
00666391  3D 00 04 00 00            CMP EAX,0x400
00666396  0F 85 87 00 00 00         JNZ 0x00666423
LAB_0066639c:
0066639C  8D BB A1 01 00 00         LEA EDI,[EBX + 0x1a1]
006663A2  50                        PUSH EAX
006663A3  8D 83 95 01 00 00         LEA EAX,[EBX + 0x195]
006663A9  57                        PUSH EDI
006663AA  50                        PUSH EAX
006663AB  8B CB                     MOV ECX,EBX
006663AD  E8 BA B8 D9 FF            CALL 0x00401c6c
006663B2  3D 00 02 00 00            CMP EAX,0x200
006663B7  74 07                     JZ 0x006663c0
006663B9  3D 00 04 00 00            CMP EAX,0x400
006663BE  75 63                     JNZ 0x00666423
LAB_006663c0:
006663C0  83 BB F3 00 00 00 02      CMP dword ptr [EBX + 0xf3],0x2
006663C7  75 0C                     JNZ 0x006663d5
006663C9  6A 02                     PUSH 0x2
006663CB  57                        PUSH EDI
006663CC  8B CB                     MOV ECX,EBX
006663CE  E8 0F C5 D9 FF            CALL 0x004028e2
006663D3  EB 46                     JMP 0x0066641b
LAB_006663d5:
006663D5  0F BF 83 AB 01 00 00      MOVSX EAX,word ptr [EBX + 0x1ab]
006663DC  0F BF 8B A5 01 00 00      MOVSX ECX,word ptr [EBX + 0x1a5]
006663E3  99                        CDQ
006663E4  2B C2                     SUB EAX,EDX
006663E6  56                        PUSH ESI
006663E7  D1 F8                     SAR EAX,0x1
006663E9  03 C1                     ADD EAX,ECX
006663EB  50                        PUSH EAX
006663EC  0F BF 83 A9 01 00 00      MOVSX EAX,word ptr [EBX + 0x1a9]
006663F3  99                        CDQ
006663F4  2B C2                     SUB EAX,EDX
006663F6  0F BF 93 A3 01 00 00      MOVSX EDX,word ptr [EBX + 0x1a3]
006663FD  D1 F8                     SAR EAX,0x1
006663FF  03 C2                     ADD EAX,EDX
00666401  50                        PUSH EAX
00666402  0F BF 83 A7 01 00 00      MOVSX EAX,word ptr [EBX + 0x1a7]
00666409  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0066640C  99                        CDQ
0066640D  2B C2                     SUB EAX,EDX
0066640F  D1 F8                     SAR EAX,0x1
00666411  03 C1                     ADD EAX,ECX
LAB_00666413:
00666413  50                        PUSH EAX
00666414  8B CB                     MOV ECX,EBX
00666416  E8 8B F1 D9 FF            CALL 0x004055a6
LAB_0066641b:
0066641B  85 C0                     TEST EAX,EAX
0066641D  0F 84 43 0C 00 00         JZ 0x00667066
LAB_00666423:
00666423  C7 83 9B 00 00 00 F7 01 00 00  MOV dword ptr [EBX + 0x9b],0x1f7
0066642D  E9 22 0C 00 00            JMP 0x00667054
LAB_00666432:
00666432  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00666438  74 1C                     JZ 0x00666456
0066643A  C7 83 9B 00 00 00 F7 01 00 00  MOV dword ptr [EBX + 0x9b],0x1f7
00666444  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
0066644A  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00666450  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00666456:
00666456  8B CB                     MOV ECX,EBX
00666458  E8 DE CF D9 FF            CALL 0x0040343b
0066645D  0F BF 93 E4 00 00 00      MOVSX EDX,word ptr [EBX + 0xe4]
00666464  3B C2                     CMP EAX,EDX
00666466  0F 8E DB 0B 00 00         JLE 0x00667047
0066646C  E9 50 09 00 00            JMP 0x00666dc1
switchD_0066635e::caseD_1f7:
00666471  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
0066647B  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666481  3B C6                     CMP EAX,ESI
00666483  75 2C                     JNZ 0x006664b1
00666485  8B 93 F3 00 00 00         MOV EDX,dword ptr [EBX + 0xf3]
0066648B  8D 83 95 01 00 00         LEA EAX,[EBX + 0x195]
00666491  52                        PUSH EDX
00666492  50                        PUSH EAX
00666493  8B CB                     MOV ECX,EBX
00666495  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
0066649F  E8 3E C4 D9 FF            CALL 0x004028e2
006664A4  85 C0                     TEST EAX,EAX
006664A6  0F 84 BA 0B 00 00         JZ 0x00667066
006664AC  E9 96 0B 00 00            JMP 0x00667047
LAB_006664b1:
006664B1  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
006664B7  74 1F                     JZ 0x006664d8
006664B9  8B CB                     MOV ECX,EBX
006664BB  E8 FF AF D9 FF            CALL 0x004014bf
006664C0  89 B3 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ESI
006664C6  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
006664CC  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
006664D2  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_006664d8:
006664D8  8B CB                     MOV ECX,EBX
006664DA  E8 5C CF D9 FF            CALL 0x0040343b
006664DF  0F BF 8B E4 00 00 00      MOVSX ECX,word ptr [EBX + 0xe4]
LAB_006664e6:
006664E6  3B C1                     CMP EAX,ECX
006664E8  0F 8E 59 0B 00 00         JLE 0x00667047
006664EE  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
006664F4  3B C6                     CMP EAX,ESI
006664F6  0F 84 6A 0B 00 00         JZ 0x00667066
006664FC  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00666502  03 D0                     ADD EDX,EAX
00666504  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
0066650A  3B C2                     CMP EAX,EDX
0066650C  E9 CE 08 00 00            JMP 0x00666ddf
switchD_0066635e::caseD_1f8:
00666511  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
0066651B  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666521  3B C6                     CMP EAX,ESI
00666523  0F 85 BA 00 00 00         JNZ 0x006665e3
00666529  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00666533  8B 83 3B 02 00 00         MOV EAX,dword ptr [EBX + 0x23b]
00666539  33 D2                     XOR EDX,EDX
0066653B  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
0066653E  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00666541  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00666547  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0066654D  B9 03 00 00 00            MOV ECX,0x3
00666552  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00666555  C1 E8 10                  SHR EAX,0x10
00666558  F7 F1                     DIV ECX
0066655A  8B CB                     MOV ECX,EBX
0066655C  8B FA                     MOV EDI,EDX
0066655E  83 C7 05                  ADD EDI,0x5
00666561  E8 D5 CE D9 FF            CALL 0x0040343b
00666566  33 D2                     XOR EDX,EDX
00666568  F7 F7                     DIV EDI
0066656A  3B C6                     CMP EAX,ESI
0066656C  75 05                     JNZ 0x00666573
0066656E  B8 01 00 00 00            MOV EAX,0x1
LAB_00666573:
00666573  8A 93 D3 00 00 00         MOV DL,byte ptr [EBX + 0xd3]
00666579  8D 8B D5 00 00 00         LEA ECX,[EBX + 0xd5]
0066657F  52                        PUSH EDX
00666580  8B 93 CF 00 00 00         MOV EDX,dword ptr [EBX + 0xcf]
00666586  51                        PUSH ECX
00666587  8B 8B CB 00 00 00         MOV ECX,dword ptr [EBX + 0xcb]
0066658D  52                        PUSH EDX
0066658E  8B 93 3B 02 00 00         MOV EDX,dword ptr [EBX + 0x23b]
00666594  51                        PUSH ECX
00666595  52                        PUSH EDX
00666596  50                        PUSH EAX
00666597  8B 83 C7 00 00 00         MOV EAX,dword ptr [EBX + 0xc7]
0066659D  50                        PUSH EAX
0066659E  8B CB                     MOV ECX,EBX
006665A0  E8 1E F1 D9 FF            CALL 0x004056c3
006665A5  85 C0                     TEST EAX,EAX
006665A7  7F 1F                     JG 0x006665c8
006665A9  8B CB                     MOV ECX,EBX
006665AB  E8 0F AF D9 FF            CALL 0x004014bf
006665B0  89 B3 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ESI
006665B6  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
006665BC  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
006665C2  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_006665c8:
006665C8  8B 8B 3B 02 00 00         MOV ECX,dword ptr [EBX + 0x23b]
006665CE  51                        PUSH ECX
006665CF  8B CB                     MOV ECX,EBX
006665D1  E8 E8 C3 D9 FF            CALL 0x004029be
006665D6  85 C0                     TEST EAX,EAX
006665D8  0F 84 88 0A 00 00         JZ 0x00667066
006665DE  E9 64 0A 00 00            JMP 0x00667047
LAB_006665e3:
006665E3  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
006665E9  74 1F                     JZ 0x0066660a
006665EB  8B CB                     MOV ECX,EBX
006665ED  E8 CD AE D9 FF            CALL 0x004014bf
006665F2  89 B3 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ESI
006665F8  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
006665FE  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00666604  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_0066660a:
0066660A  8B CB                     MOV ECX,EBX
0066660C  E8 2A CE D9 FF            CALL 0x0040343b
00666611  0F BF 93 E4 00 00 00      MOVSX EDX,word ptr [EBX + 0xe4]
00666618  3B C2                     CMP EAX,EDX
0066661A  0F 8E 27 0A 00 00         JLE 0x00667047
00666620  E9 9C 07 00 00            JMP 0x00666dc1
switchD_0066635e::caseD_1fe:
00666625  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
0066662F  8B 93 D5 00 00 00         MOV EDX,dword ptr [EBX + 0xd5]
00666635  89 93 AB 00 00 00         MOV dword ptr [EBX + 0xab],EDX
0066663B  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00666641  56                        PUSH ESI
00666642  56                        PUSH ESI
00666643  56                        PUSH ESI
00666644  8B CB                     MOV ECX,EBX
00666646  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
0066664C  E8 3A EC D9 FF            CALL 0x0040528b
00666651  66 8B 8B C7 00 00 00      MOV CX,word ptr [EBX + 0xc7]
00666658  8D 83 95 01 00 00         LEA EAX,[EBX + 0x195]
0066665E  66 89 08                  MOV word ptr [EAX],CX
00666661  66 8B 93 C9 00 00 00      MOV DX,word ptr [EBX + 0xc9]
00666668  8D 8B 97 01 00 00         LEA ECX,[EBX + 0x197]
0066666E  66 89 11                  MOV word ptr [ECX],DX
00666671  66 8B 93 CB 00 00 00      MOV DX,word ptr [EBX + 0xcb]
00666678  66 89 93 99 01 00 00      MOV word ptr [EBX + 0x199],DX
0066667F  66 8B 93 CD 00 00 00      MOV DX,word ptr [EBX + 0xcd]
00666686  66 89 93 9B 01 00 00      MOV word ptr [EBX + 0x19b],DX
0066668D  66 8B 93 CF 00 00 00      MOV DX,word ptr [EBX + 0xcf]
00666694  66 89 93 9D 01 00 00      MOV word ptr [EBX + 0x19d],DX
0066669B  66 8B BB D1 00 00 00      MOV DI,word ptr [EBX + 0xd1]
006666A2  8D 93 9F 01 00 00         LEA EDX,[EBX + 0x19f]
006666A8  52                        PUSH EDX
006666A9  66 89 3A                  MOV word ptr [EDX],DI
006666AC  8D 93 9D 01 00 00         LEA EDX,[EBX + 0x19d]
006666B2  52                        PUSH EDX
006666B3  8D 93 9B 01 00 00         LEA EDX,[EBX + 0x19b]
006666B9  52                        PUSH EDX
006666BA  8D 93 99 01 00 00         LEA EDX,[EBX + 0x199]
006666C0  52                        PUSH EDX
006666C1  51                        PUSH ECX
006666C2  50                        PUSH EAX
006666C3  E8 16 D5 D9 FF            CALL 0x00403bde
006666C8  8B 8B BF 00 00 00         MOV ECX,dword ptr [EBX + 0xbf]
006666CE  83 C4 18                  ADD ESP,0x18
006666D1  8B C1                     MOV EAX,ECX
006666D3  83 E0 01                  AND EAX,0x1
006666D6  89 83 F3 00 00 00         MOV dword ptr [EBX + 0xf3],EAX
006666DC  75 09                     JNZ 0x006666e7
006666DE  83 E1 02                  AND ECX,0x2
006666E1  89 8B F3 00 00 00         MOV dword ptr [EBX + 0xf3],ECX
LAB_006666e7:
006666E7  39 B3 F3 00 00 00         CMP dword ptr [EBX + 0xf3],ESI
006666ED  75 1E                     JNZ 0x0066670d
006666EF  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
006666F2  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006666F8  05 39 30 00 00            ADD EAX,0x3039
006666FD  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00666700  C1 E8 10                  SHR EAX,0x10
00666703  83 E0 01                  AND EAX,0x1
00666706  40                        INC EAX
00666707  89 83 F3 00 00 00         MOV dword ptr [EBX + 0xf3],EAX
LAB_0066670d:
0066670D  8B 8B C3 00 00 00         MOV ECX,dword ptr [EBX + 0xc3]
00666713  BA 00 01 00 00            MOV EDX,0x100
00666718  85 CA                     TEST EDX,ECX
0066671A  74 15                     JZ 0x00666731
0066671C  89 93 EF 00 00 00         MOV dword ptr [EBX + 0xef],EDX
00666722  C7 83 9B 00 00 00 01 02 00 00  MOV dword ptr [EBX + 0x9b],0x201
0066672C  E9 23 09 00 00            JMP 0x00667054
LAB_00666731:
00666731  8B C1                     MOV EAX,ECX
00666733  25 00 02 00 00            AND EAX,0x200
00666738  89 83 EF 00 00 00         MOV dword ptr [EBX + 0xef],EAX
0066673E  75 0D                     JNZ 0x0066674d
00666740  8B C1                     MOV EAX,ECX
00666742  25 00 04 00 00            AND EAX,0x400
00666747  89 83 EF 00 00 00         MOV dword ptr [EBX + 0xef],EAX
LAB_0066674d:
0066674D  39 B3 EF 00 00 00         CMP dword ptr [EBX + 0xef],ESI
00666753  75 30                     JNZ 0x00666785
00666755  F6 C5 08                  TEST CH,0x8
00666758  74 2B                     JZ 0x00666785
0066675A  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0066675D  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00666763  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00666769  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0066676C  25 00 00 01 00            AND EAX,0x10000
00666771  F7 D8                     NEG EAX
00666773  1B C0                     SBB EAX,EAX
00666775  25 00 FE FF FF            AND EAX,0xfffffe00
0066677A  05 00 04 00 00            ADD EAX,0x400
0066677F  89 83 EF 00 00 00         MOV dword ptr [EBX + 0xef],EAX
LAB_00666785:
00666785  89 93 EF 00 00 00         MOV dword ptr [EBX + 0xef],EDX
0066678B  C7 83 9B 00 00 00 01 02 00 00  MOV dword ptr [EBX + 0x9b],0x201
00666795  E9 BA 08 00 00            JMP 0x00667054
switchD_0066635e::caseD_1ff:
0066679A  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
006667A4  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
006667AA  3B C6                     CMP EAX,ESI
006667AC  75 6F                     JNZ 0x0066681d
006667AE  8B 83 F3 00 00 00         MOV EAX,dword ptr [EBX + 0xf3]
006667B4  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
006667BE  83 F8 02                  CMP EAX,0x2
006667C1  75 15                     JNZ 0x006667d8
006667C3  8D 93 A1 01 00 00         LEA EDX,[EBX + 0x1a1]
006667C9  6A 02                     PUSH 0x2
006667CB  52                        PUSH EDX
006667CC  8B CB                     MOV ECX,EBX
006667CE  E8 0F C1 D9 FF            CALL 0x004028e2
006667D3  E9 21 01 00 00            JMP 0x006668f9
LAB_006667d8:
006667D8  0F BF 83 AB 01 00 00      MOVSX EAX,word ptr [EBX + 0x1ab]
006667DF  0F BF 8B A5 01 00 00      MOVSX ECX,word ptr [EBX + 0x1a5]
006667E6  99                        CDQ
006667E7  2B C2                     SUB EAX,EDX
006667E9  56                        PUSH ESI
006667EA  D1 F8                     SAR EAX,0x1
006667EC  03 C1                     ADD EAX,ECX
006667EE  50                        PUSH EAX
006667EF  0F BF 83 A9 01 00 00      MOVSX EAX,word ptr [EBX + 0x1a9]
006667F6  99                        CDQ
006667F7  2B C2                     SUB EAX,EDX
006667F9  0F BF 93 A3 01 00 00      MOVSX EDX,word ptr [EBX + 0x1a3]
00666800  D1 F8                     SAR EAX,0x1
00666802  03 C2                     ADD EAX,EDX
00666804  50                        PUSH EAX
00666805  0F BF 83 A7 01 00 00      MOVSX EAX,word ptr [EBX + 0x1a7]
0066680C  0F BF 8B A1 01 00 00      MOVSX ECX,word ptr [EBX + 0x1a1]
00666813  99                        CDQ
00666814  2B C2                     SUB EAX,EDX
00666816  D1 F8                     SAR EAX,0x1
00666818  E9 D2 00 00 00            JMP 0x006668ef
LAB_0066681d:
0066681D  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00666823  0F 84 0B 01 00 00         JZ 0x00666934
00666829  8B 83 C3 00 00 00         MOV EAX,dword ptr [EBX + 0xc3]
0066682F  F6 C4 08                  TEST AH,0x8
00666832  0F 84 C9 00 00 00         JZ 0x00666901
00666838  89 8B 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ECX
0066683E  E9 11 08 00 00            JMP 0x00667054
LAB_00666843:
00666843  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
0066684D  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666853  3B C6                     CMP EAX,ESI
00666855  0F 85 B5 00 00 00         JNZ 0x00666910
0066685B  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00666861  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
0066686B  3B C1                     CMP EAX,ECX
0066686D  74 0B                     JZ 0x0066687a
0066686F  3D 00 04 00 00            CMP EAX,0x400
00666874  0F 85 87 00 00 00         JNZ 0x00666901
LAB_0066687a:
0066687A  8D BB A1 01 00 00         LEA EDI,[EBX + 0x1a1]
00666880  50                        PUSH EAX
00666881  8D 93 95 01 00 00         LEA EDX,[EBX + 0x195]
00666887  57                        PUSH EDI
00666888  52                        PUSH EDX
00666889  8B CB                     MOV ECX,EBX
0066688B  E8 DC B3 D9 FF            CALL 0x00401c6c
00666890  3D 00 02 00 00            CMP EAX,0x200
00666895  74 07                     JZ 0x0066689e
00666897  3D 00 04 00 00            CMP EAX,0x400
0066689C  75 63                     JNZ 0x00666901
LAB_0066689e:
0066689E  83 BB F3 00 00 00 02      CMP dword ptr [EBX + 0xf3],0x2
006668A5  75 0C                     JNZ 0x006668b3
006668A7  6A 02                     PUSH 0x2
006668A9  57                        PUSH EDI
006668AA  8B CB                     MOV ECX,EBX
006668AC  E8 31 C0 D9 FF            CALL 0x004028e2
006668B1  EB 46                     JMP 0x006668f9
LAB_006668b3:
006668B3  0F BF 83 AB 01 00 00      MOVSX EAX,word ptr [EBX + 0x1ab]
006668BA  0F BF 8B A5 01 00 00      MOVSX ECX,word ptr [EBX + 0x1a5]
006668C1  99                        CDQ
006668C2  2B C2                     SUB EAX,EDX
006668C4  56                        PUSH ESI
006668C5  D1 F8                     SAR EAX,0x1
006668C7  03 C1                     ADD EAX,ECX
006668C9  50                        PUSH EAX
006668CA  0F BF 83 A9 01 00 00      MOVSX EAX,word ptr [EBX + 0x1a9]
006668D1  99                        CDQ
006668D2  2B C2                     SUB EAX,EDX
006668D4  0F BF 93 A3 01 00 00      MOVSX EDX,word ptr [EBX + 0x1a3]
006668DB  D1 F8                     SAR EAX,0x1
006668DD  03 C2                     ADD EAX,EDX
006668DF  50                        PUSH EAX
006668E0  0F BF 83 A7 01 00 00      MOVSX EAX,word ptr [EBX + 0x1a7]
006668E7  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006668EA  99                        CDQ
006668EB  2B C2                     SUB EAX,EDX
006668ED  D1 F8                     SAR EAX,0x1
LAB_006668ef:
006668EF  03 C1                     ADD EAX,ECX
006668F1  8B CB                     MOV ECX,EBX
006668F3  50                        PUSH EAX
006668F4  E8 AD EC D9 FF            CALL 0x004055a6
LAB_006668f9:
006668F9  85 C0                     TEST EAX,EAX
006668FB  0F 84 65 07 00 00         JZ 0x00667066
LAB_00666901:
00666901  C7 83 9B 00 00 00 01 02 00 00  MOV dword ptr [EBX + 0x9b],0x201
0066690B  E9 44 07 00 00            JMP 0x00667054
LAB_00666910:
00666910  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00666916  74 1C                     JZ 0x00666934
00666918  C7 83 9B 00 00 00 01 02 00 00  MOV dword ptr [EBX + 0x9b],0x201
00666922  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
00666928  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
0066692E  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_00666934:
00666934  8B CB                     MOV ECX,EBX
00666936  E8 00 CB D9 FF            CALL 0x0040343b
0066693B  0F BF 93 D3 00 00 00      MOVSX EDX,word ptr [EBX + 0xd3]
00666942  3B C2                     CMP EAX,EDX
00666944  0F 8E FD 06 00 00         JLE 0x00667047
0066694A  E9 72 04 00 00            JMP 0x00666dc1
LAB_0066694f:
0066694F  05 FF FD FF FF            ADD EAX,0xfffffdff
00666954  83 F8 4D                  CMP EAX,0x4d
00666957  0F 87 09 07 00 00         JA 0x00667066
0066695D  33 D2                     XOR EDX,EDX
0066695F  8A 90 74 72 66 00         MOV DL,byte ptr [EAX + 0x667274]
switchD_00666965::switchD:
00666965  FF 24 95 48 72 66 00      JMP dword ptr [EDX*0x4 + 0x667248]
switchD_00666965::caseD_201:
0066696C  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
00666976  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
0066697C  3B C6                     CMP EAX,ESI
0066697E  75 2C                     JNZ 0x006669ac
00666980  8B 83 F3 00 00 00         MOV EAX,dword ptr [EBX + 0xf3]
00666986  8D 8B 95 01 00 00         LEA ECX,[EBX + 0x195]
0066698C  50                        PUSH EAX
0066698D  51                        PUSH ECX
0066698E  8B CB                     MOV ECX,EBX
00666990  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
0066699A  E8 43 BF D9 FF            CALL 0x004028e2
0066699F  85 C0                     TEST EAX,EAX
006669A1  0F 84 BF 06 00 00         JZ 0x00667066
006669A7  E9 9B 06 00 00            JMP 0x00667047
LAB_006669ac:
006669AC  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
006669B2  74 18                     JZ 0x006669cc
006669B4  89 B3 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ESI
006669BA  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
006669C0  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
006669C6  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
LAB_006669cc:
006669CC  8B CB                     MOV ECX,EBX
006669CE  E8 68 CA D9 FF            CALL 0x0040343b
006669D3  0F BF 93 D3 00 00 00      MOVSX EDX,word ptr [EBX + 0xd3]
006669DA  3B C2                     CMP EAX,EDX
006669DC  0F 8E 65 06 00 00         JLE 0x00667047
006669E2  E9 DA 03 00 00            JMP 0x00666dc1
switchD_00666965::caseD_208:
006669E7  C7 83 EB 00 00 00 10 00 00 00  MOV dword ptr [EBX + 0xeb],0x10
006669F1  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
006669F7  3B C6                     CMP EAX,ESI
006669F9  75 74                     JNZ 0x00666a6f
006669FB  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00666A05  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
00666A0B  89 93 AB 00 00 00         MOV dword ptr [EBX + 0xab],EDX
00666A11  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00666A17  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
00666A1D  0F BF 8B CD 00 00 00      MOVSX ECX,word ptr [EBX + 0xcd]
00666A24  0F BF 93 CB 00 00 00      MOVSX EDX,word ptr [EBX + 0xcb]
00666A2B  0F BF 83 C9 00 00 00      MOVSX EAX,word ptr [EBX + 0xc9]
00666A32  51                        PUSH ECX
00666A33  52                        PUSH EDX
00666A34  50                        PUSH EAX
00666A35  8B CB                     MOV ECX,EBX
00666A37  E8 4F E8 D9 FF            CALL 0x0040528b
00666A3C  8B 8B CF 00 00 00         MOV ECX,dword ptr [EBX + 0xcf]
00666A42  0F BF 93 C3 00 00 00      MOVSX EDX,word ptr [EBX + 0xc3]
00666A49  0F BF 83 C1 00 00 00      MOVSX EAX,word ptr [EBX + 0xc1]
00666A50  51                        PUSH ECX
00666A51  52                        PUSH EDX
00666A52  0F BF 8B BF 00 00 00      MOVSX ECX,word ptr [EBX + 0xbf]
00666A59  50                        PUSH EAX
00666A5A  51                        PUSH ECX
00666A5B  8B CB                     MOV ECX,EBX
00666A5D  E8 44 EB D9 FF            CALL 0x004055a6
00666A62  85 C0                     TEST EAX,EAX
00666A64  0F 84 FC 05 00 00         JZ 0x00667066
00666A6A  E9 D8 05 00 00            JMP 0x00667047
LAB_00666a6f:
00666A6F  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00666A75  0F 85 CC 05 00 00         JNZ 0x00667047
00666A7B  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00666A81  3B C6                     CMP EAX,ESI
00666A83  0F 84 DD 05 00 00         JZ 0x00667066
00666A89  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00666A8F  03 D0                     ADD EDX,EAX
00666A91  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00666A97  3B C2                     CMP EAX,EDX
00666A99  E9 41 03 00 00            JMP 0x00666ddf
switchD_00666965::caseD_212:
00666A9E  C7 83 EB 00 00 00 20 00 00 00  MOV dword ptr [EBX + 0xeb],0x20
00666AA8  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666AAE  3B C6                     CMP EAX,ESI
00666AB0  75 49                     JNZ 0x00666afb
00666AB2  8B 83 C7 00 00 00         MOV EAX,dword ptr [EBX + 0xc7]
00666AB8  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00666AC2  89 83 AB 00 00 00         MOV dword ptr [EBX + 0xab],EAX
00666AC8  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
00666ACE  56                        PUSH ESI
00666ACF  89 8B AF 00 00 00         MOV dword ptr [EBX + 0xaf],ECX
00666AD5  56                        PUSH ESI
00666AD6  56                        PUSH ESI
00666AD7  8B CB                     MOV ECX,EBX
00666AD9  E8 AD E7 D9 FF            CALL 0x0040528b
00666ADE  66 8B 93 C3 00 00 00      MOV DX,word ptr [EBX + 0xc3]
00666AE5  56                        PUSH ESI
00666AE6  52                        PUSH EDX
00666AE7  8B CB                     MOV ECX,EBX
00666AE9  E8 7E D4 D9 FF            CALL 0x00403f6c
00666AEE  85 C0                     TEST EAX,EAX
00666AF0  0F 84 70 05 00 00         JZ 0x00667066
00666AF6  E9 4C 05 00 00            JMP 0x00667047
LAB_00666afb:
00666AFB  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00666B01  0F 85 40 05 00 00         JNZ 0x00667047
00666B07  8B CB                     MOV ECX,EBX
00666B09  E8 2D C9 D9 FF            CALL 0x0040343b
00666B0E  0F BF 8B C5 00 00 00      MOVSX ECX,word ptr [EBX + 0xc5]
00666B15  E9 CC F9 FF FF            JMP 0x006664e6
switchD_00666965::caseD_21c:
00666B1A  C7 83 EB 00 00 00 02 00 00 00  MOV dword ptr [EBX + 0xeb],0x2
00666B24  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666B2A  3B C6                     CMP EAX,ESI
00666B2C  0F 85 83 02 00 00         JNZ 0x00666db5
00666B32  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00666B3C  8B 83 D3 00 00 00         MOV EAX,dword ptr [EBX + 0xd3]
00666B42  89 83 AB 00 00 00         MOV dword ptr [EBX + 0xab],EAX
00666B48  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
00666B4E  8B 83 C3 00 00 00         MOV EAX,dword ptr [EBX + 0xc3]
00666B54  8D 93 C7 00 00 00         LEA EDX,[EBX + 0xc7]
00666B5A  89 8B AF 00 00 00         MOV dword ptr [EBX + 0xaf],ECX
00666B60  52                        PUSH EDX
00666B61  50                        PUSH EAX
00666B62  8B CB                     MOV ECX,EBX
00666B64  E8 50 B4 D9 FF            CALL 0x00401fb9
00666B69  E9 3A 02 00 00            JMP 0x00666da8
switchD_00666965::caseD_226:
00666B6E  C7 83 EB 00 00 00 00 20 00 00  MOV dword ptr [EBX + 0xeb],0x2000
00666B78  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666B7E  3B C6                     CMP EAX,ESI
00666B80  0F 85 2F 02 00 00         JNZ 0x00666db5
00666B86  8B 93 CF 00 00 00         MOV EDX,dword ptr [EBX + 0xcf]
00666B8C  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00666B96  89 93 AB 00 00 00         MOV dword ptr [EBX + 0xab],EDX
00666B9C  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00666BA2  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
00666BA8  56                        PUSH ESI
00666BA9  0F BF 8B CD 00 00 00      MOVSX ECX,word ptr [EBX + 0xcd]
00666BB0  0F BF 93 CB 00 00 00      MOVSX EDX,word ptr [EBX + 0xcb]
00666BB7  0F BF 83 C9 00 00 00      MOVSX EAX,word ptr [EBX + 0xc9]
00666BBE  51                        PUSH ECX
00666BBF  52                        PUSH EDX
00666BC0  0F BF 8B C7 00 00 00      MOVSX ECX,word ptr [EBX + 0xc7]
00666BC7  0F BF 93 C5 00 00 00      MOVSX EDX,word ptr [EBX + 0xc5]
00666BCE  50                        PUSH EAX
00666BCF  51                        PUSH ECX
00666BD0  0F BF 83 C3 00 00 00      MOVSX EAX,word ptr [EBX + 0xc3]
00666BD7  52                        PUSH EDX
00666BD8  50                        PUSH EAX
00666BD9  8B CB                     MOV ECX,EBX
00666BDB  E8 3B D9 D9 FF            CALL 0x0040451b
00666BE0  E9 C3 01 00 00            JMP 0x00666da8
switchD_00666965::caseD_230:
00666BE5  C7 83 EB 00 00 00 00 10 00 00  MOV dword ptr [EBX + 0xeb],0x1000
00666BEF  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666BF5  3B C6                     CMP EAX,ESI
00666BF7  75 4F                     JNZ 0x00666c48
00666BF9  8B 93 CB 00 00 00         MOV EDX,dword ptr [EBX + 0xcb]
00666BFF  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00666C09  89 93 AB 00 00 00         MOV dword ptr [EBX + 0xab],EDX
00666C0F  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00666C15  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
00666C1B  56                        PUSH ESI
00666C1C  0F BF 8B C7 00 00 00      MOVSX ECX,word ptr [EBX + 0xc7]
00666C23  0F BF 93 C5 00 00 00      MOVSX EDX,word ptr [EBX + 0xc5]
00666C2A  0F BF 83 C3 00 00 00      MOVSX EAX,word ptr [EBX + 0xc3]
00666C31  51                        PUSH ECX
00666C32  52                        PUSH EDX
00666C33  50                        PUSH EAX
00666C34  8B CB                     MOV ECX,EBX
00666C36  E8 79 E0 D9 FF            CALL 0x00404cb4
00666C3B  85 C0                     TEST EAX,EAX
00666C3D  0F 84 23 04 00 00         JZ 0x00667066
00666C43  E9 FF 03 00 00            JMP 0x00667047
LAB_00666c48:
00666C48  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00666C4E  0F 85 F3 03 00 00         JNZ 0x00667047
00666C54  8B CB                     MOV ECX,EBX
00666C56  E8 E0 C7 D9 FF            CALL 0x0040343b
00666C5B  0F BF 8B C9 00 00 00      MOVSX ECX,word ptr [EBX + 0xc9]
00666C62  3B C1                     CMP EAX,ECX
00666C64  0F 8E DD 03 00 00         JLE 0x00667047
00666C6A  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00666C70  3B C6                     CMP EAX,ESI
00666C72  0F 84 EE 03 00 00         JZ 0x00667066
00666C78  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00666C7E  03 D0                     ADD EDX,EAX
00666C80  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00666C86  3B C2                     CMP EAX,EDX
00666C88  0F 86 D8 03 00 00         JBE 0x00667066
00666C8E  E9 B4 03 00 00            JMP 0x00667047
switchD_00666965::caseD_23a:
00666C93  C7 83 EB 00 00 00 00 08 00 00  MOV dword ptr [EBX + 0xeb],0x800
00666C9D  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666CA3  3B C6                     CMP EAX,ESI
00666CA5  75 4F                     JNZ 0x00666cf6
00666CA7  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00666CB1  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00666CB7  89 83 AB 00 00 00         MOV dword ptr [EBX + 0xab],EAX
00666CBD  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
00666CC3  89 8B AF 00 00 00         MOV dword ptr [EBX + 0xaf],ECX
00666CC9  56                        PUSH ESI
00666CCA  0F BF 93 C7 00 00 00      MOVSX EDX,word ptr [EBX + 0xc7]
00666CD1  0F BF 83 C5 00 00 00      MOVSX EAX,word ptr [EBX + 0xc5]
00666CD8  0F BF 8B C3 00 00 00      MOVSX ECX,word ptr [EBX + 0xc3]
00666CDF  52                        PUSH EDX
00666CE0  50                        PUSH EAX
00666CE1  51                        PUSH ECX
00666CE2  8B CB                     MOV ECX,EBX
00666CE4  E8 20 B3 D9 FF            CALL 0x00402009
00666CE9  85 C0                     TEST EAX,EAX
AiFltClassTy::sub_00664960::cf_common_join_00666CEB:
00666CEB  0F 84 75 03 00 00         JZ 0x00667066
00666CF1  E9 51 03 00 00            JMP 0x00667047
LAB_00666cf6:
00666CF6  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00666CFC  0F 85 45 03 00 00         JNZ 0x00667047
00666D02  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00666D08  3B C6                     CMP EAX,ESI
00666D0A  0F 84 56 03 00 00         JZ 0x00667066
00666D10  8B 93 AF 00 00 00         MOV EDX,dword ptr [EBX + 0xaf]
00666D16  03 D0                     ADD EDX,EAX
00666D18  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00666D1E  3B C2                     CMP EAX,EDX
00666D20  0F 86 40 03 00 00         JBE 0x00667066
00666D26  E9 1C 03 00 00            JMP 0x00667047
switchD_00666965::caseD_244:
00666D2B  C7 83 EB 00 00 00 00 08 00 00  MOV dword ptr [EBX + 0xeb],0x800
00666D35  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00666D3B  89 83 AB 00 00 00         MOV dword ptr [EBX + 0xab],EAX
00666D41  8B 8B 80 02 00 00         MOV ECX,dword ptr [EBX + 0x280]
00666D47  8B 83 BF 00 00 00         MOV EAX,dword ptr [EBX + 0xbf]
00666D4D  89 8B AF 00 00 00         MOV dword ptr [EBX + 0xaf],ECX
00666D53  3B C6                     CMP EAX,ESI
00666D55  C7 83 9B 00 00 00 46 02 00 00  MOV dword ptr [EBX + 0x9b],0x246
00666D5F  E9 F0 02 00 00            JMP 0x00667054
switchD_00666965::caseD_246:
00666D64  C7 83 EB 00 00 00 00 08 00 00  MOV dword ptr [EBX + 0xeb],0x800
00666D6E  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666D74  3B C6                     CMP EAX,ESI
00666D76  75 3D                     JNZ 0x00666db5
00666D78  8B 93 BF 00 00 00         MOV EDX,dword ptr [EBX + 0xbf]
00666D7E  C7 83 A3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xa3],0x1
00666D88  0F BF 83 C7 00 00 00      MOVSX EAX,word ptr [EBX + 0xc7]
00666D8F  0F BF 8B C5 00 00 00      MOVSX ECX,word ptr [EBX + 0xc5]
00666D96  52                        PUSH EDX
00666D97  50                        PUSH EAX
00666D98  0F BF 93 C3 00 00 00      MOVSX EDX,word ptr [EBX + 0xc3]
00666D9F  51                        PUSH ECX
00666DA0  52                        PUSH EDX
00666DA1  8B CB                     MOV ECX,EBX
00666DA3  E8 F3 E8 D9 FF            CALL 0x0040569b
LAB_00666da8:
00666DA8  85 C0                     TEST EAX,EAX
00666DAA  0F 84 B6 02 00 00         JZ 0x00667066
00666DB0  E9 92 02 00 00            JMP 0x00667047
LAB_00666db5:
00666DB5  39 B3 A7 00 00 00         CMP dword ptr [EBX + 0xa7],ESI
00666DBB  0F 85 86 02 00 00         JNZ 0x00667047
AiFltClassTy::sub_00664960::cf_common_join_00666DC1:
00666DC1  8B 83 AB 00 00 00         MOV EAX,dword ptr [EBX + 0xab]
00666DC7  3B C6                     CMP EAX,ESI
00666DC9  0F 84 97 02 00 00         JZ 0x00667066
00666DCF  8B 8B AF 00 00 00         MOV ECX,dword ptr [EBX + 0xaf]
00666DD5  03 C8                     ADD ECX,EAX
00666DD7  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00666DDD  3B C1                     CMP EAX,ECX
LAB_00666ddf:
00666DDF  0F 86 81 02 00 00         JBE 0x00667066
00666DE5  E9 5D 02 00 00            JMP 0x00667047
switchD_00666965::caseD_24e:
00666DEA  C7 83 EB 00 00 00 40 00 00 00  MOV dword ptr [EBX + 0xeb],0x40
00666DF4  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00666DFA  3B C6                     CMP EAX,ESI
00666DFC  75 70                     JNZ 0x00666e6e
00666DFE  BF 01 00 00 00            MOV EDI,0x1
00666E03  89 BB A3 00 00 00         MOV dword ptr [EBX + 0xa3],EDI
00666E09  0F BF 93 CB 00 00 00      MOVSX EDX,word ptr [EBX + 0xcb]
00666E10  0F BF 83 C9 00 00 00      MOVSX EAX,word ptr [EBX + 0xc9]
00666E17  0F BF 8B C7 00 00 00      MOVSX ECX,word ptr [EBX + 0xc7]
00666E1E  52                        PUSH EDX
00666E1F  8B 93 C3 00 00 00         MOV EDX,dword ptr [EBX + 0xc3]
00666E25  50                        PUSH EAX
00666E26  51                        PUSH ECX
00666E27  52                        PUSH EDX
00666E28  8B CB                     MOV ECX,EBX
00666E2A  E8 BC D9 D9 FF            CALL 0x004047eb
00666E2F  3B C6                     CMP EAX,ESI
00666E31  89 83 B3 00 00 00         MOV dword ptr [EBX + 0xb3],EAX
00666E37  0F 8E 0A 02 00 00         JLE 0x00667047
00666E3D  8B 8B CD 00 00 00         MOV ECX,dword ptr [EBX + 0xcd]
00666E43  0F AF C8                  IMUL ECX,EAX
00666E46  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00666E4B  F7 E9                     IMUL ECX
00666E4D  C1 FA 05                  SAR EDX,0x5
00666E50  8B C2                     MOV EAX,EDX
00666E52  C1 E8 1F                  SHR EAX,0x1f
00666E55  03 D0                     ADD EDX,EAX
00666E57  89 93 B3 00 00 00         MOV dword ptr [EBX + 0xb3],EDX
00666E5D  0F 85 03 02 00 00         JNZ 0x00667066
00666E63  89 BB B3 00 00 00         MOV dword ptr [EBX + 0xb3],EDI
00666E69  E9 F8 01 00 00            JMP 0x00667066
LAB_00666e6e:
00666E6E  8B 83 C3 00 00 00         MOV EAX,dword ptr [EBX + 0xc3]
00666E74  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00666E77  05 5D FF FF FF            ADD EAX,0xffffff5d
00666E7C  83 F8 1B                  CMP EAX,0x1b
00666E7F  77 2B                     JA 0x00666eac
00666E81  33 C9                     XOR ECX,ECX
00666E83  8A 88 D8 72 66 00         MOV CL,byte ptr [EAX + 0x6672d8]
switchD_00666e89::switchD:
00666E89  FF 24 8D C4 72 66 00      JMP dword ptr [ECX*0x4 + 0x6672c4]
switchD_00666e89::caseD_a3:
00666E90  B8 4E 00 00 00            MOV EAX,0x4e
00666E95  EB 17                     JMP 0x00666eae
switchD_00666e89::caseD_a8:
00666E97  B8 45 00 00 00            MOV EAX,0x45
00666E9C  EB 10                     JMP 0x00666eae
switchD_00666e89::caseD_b2:
00666E9E  B8 70 00 00 00            MOV EAX,0x70
00666EA3  EB 09                     JMP 0x00666eae
switchD_00666e89::caseD_be:
00666EA5  B8 72 00 00 00            MOV EAX,0x72
00666EAA  EB 02                     JMP 0x00666eae
switchD_00666e89::caseD_a4:
00666EAC  33 C0                     XOR EAX,EAX
LAB_00666eae:
00666EAE  50                        PUSH EAX
00666EAF  8B CB                     MOV ECX,EBX
00666EB1  E8 00 EB D9 FF            CALL 0x004059b6
00666EB6  3B C6                     CMP EAX,ESI
00666EB8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00666EBB  0F 84 86 01 00 00         JZ 0x00667047
00666EC1  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00666EC4  33 D2                     XOR EDX,EDX
00666EC6  3B CE                     CMP ECX,ESI
00666EC8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00666ECB  0F 8E 6D 01 00 00         JLE 0x0066703e
00666ED1  EB 06                     JMP 0x00666ed9
LAB_00666ed3:
00666ED3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00666ED6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00666ed9:
00666ED9  3B D1                     CMP EDX,ECX
00666EDB  73 0B                     JNC 0x00666ee8
00666EDD  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00666EE0  0F AF CA                  IMUL ECX,EDX
00666EE3  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
00666EE6  EB 02                     JMP 0x00666eea
LAB_00666ee8:
00666EE8  33 C9                     XOR ECX,ECX
LAB_00666eea:
00666EEA  66 8B 11                  MOV DX,word ptr [ECX]
00666EED  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00666EF0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00666EF6  6A 01                     PUSH 0x1
00666EF8  52                        PUSH EDX
00666EF9  50                        PUSH EAX
00666EFA  E8 BB B9 D9 FF            CALL 0x004028ba
00666EFF  8B F8                     MOV EDI,EAX
00666F01  8B 83 C3 00 00 00         MOV EAX,dword ptr [EBX + 0xc3]
00666F07  05 5D FF FF FF            ADD EAX,0xffffff5d
00666F0C  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
00666F0F  83 F8 1B                  CMP EAX,0x1b
00666F12  0F 87 11 01 00 00         JA 0x00667029
00666F18  33 C9                     XOR ECX,ECX
00666F1A  8A 88 00 73 66 00         MOV CL,byte ptr [EAX + 0x667300]
switchD_00666f20::switchD:
00666F20  FF 24 8D F4 72 66 00      JMP dword ptr [ECX*0x4 + 0x6672f4]
switchD_00666f20::caseD_a3:
00666F27  0F BF 93 C9 00 00 00      MOVSX EDX,word ptr [EBX + 0xc9]
00666F2E  0F BF 83 C7 00 00 00      MOVSX EAX,word ptr [EBX + 0xc7]
00666F35  56                        PUSH ESI
00666F36  56                        PUSH ESI
00666F37  56                        PUSH ESI
00666F38  52                        PUSH EDX
00666F39  50                        PUSH EAX
00666F3A  56                        PUSH ESI
00666F3B  56                        PUSH ESI
00666F3C  8B CF                     MOV ECX,EDI
00666F3E  E8 7E A3 D9 FF            CALL 0x004012c1
00666F43  85 C0                     TEST EAX,EAX
00666F45  0F 84 DE 00 00 00         JZ 0x00667029
00666F4B  8B 97 65 02 00 00         MOV EDX,dword ptr [EDI + 0x265]
00666F51  0F BF 8B C7 00 00 00      MOVSX ECX,word ptr [EBX + 0xc7]
00666F58  0F BF 83 C9 00 00 00      MOVSX EAX,word ptr [EBX + 0xc9]
00666F5F  83 CA 02                  OR EDX,0x2
00666F62  89 97 65 02 00 00         MOV dword ptr [EDI + 0x265],EDX
00666F68  89 8F A5 02 00 00         MOV dword ptr [EDI + 0x2a5],ECX
00666F6E  89 87 A9 02 00 00         MOV dword ptr [EDI + 0x2a9],EAX
00666F74  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00666F77  89 B7 AD 02 00 00         MOV dword ptr [EDI + 0x2ad],ESI
00666F7D  8B 8B B3 00 00 00         MOV ECX,dword ptr [EBX + 0xb3]
00666F83  40                        INC EAX
00666F84  3B C1                     CMP EAX,ECX
00666F86  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00666F89  0F 8D AF 00 00 00         JGE 0x0066703e
00666F8F  E9 95 00 00 00            JMP 0x00667029
switchD_00666f20::caseD_b2:
00666F94  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
00666F97  8B 87 3D 02 00 00         MOV EAX,dword ptr [EDI + 0x23d]
00666F9D  3B C8                     CMP ECX,EAX
00666F9F  74 4E                     JZ 0x00666fef
00666FA1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00666FA7  8A D0                     MOV DL,AL
00666FA9  52                        PUSH EDX
00666FAA  E8 08 DA D9 FF            CALL 0x004049b7
00666FAF  8A C8                     MOV CL,AL
00666FB1  8B 87 35 02 00 00         MOV EAX,dword ptr [EDI + 0x235]
00666FB7  81 E1 FF 00 00 00         AND ECX,0xff
00666FBD  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00666FC0  03 CA                     ADD ECX,EDX
00666FC2  8B C1                     MOV EAX,ECX
00666FC4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00666FCA  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00666FCD  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00666FD0  50                        PUSH EAX
00666FD1  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
00666FD4  E8 DE D9 D9 FF            CALL 0x004049b7
00666FD9  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00666FDC  25 FF 00 00 00            AND EAX,0xff
00666FE1  8A 94 01 84 19 7E 00      MOV DL,byte ptr [ECX + EAX*0x1 + 0x7e1984]
00666FE8  84 D2                     TEST DL,DL
00666FEA  74 3D                     JZ 0x00667029
00666FEC  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
LAB_00666fef:
00666FEF  39 B7 45 02 00 00         CMP dword ptr [EDI + 0x245],ESI
00666FF5  75 32                     JNZ 0x00667029
00666FF7  83 BF EC 04 00 00 64      CMP dword ptr [EDI + 0x4ec],0x64
00666FFE  7C 29                     JL 0x00667029
00667000  0F BF 93 C9 00 00 00      MOVSX EDX,word ptr [EBX + 0xc9]
00667007  0F BF 83 C7 00 00 00      MOVSX EAX,word ptr [EBX + 0xc7]
0066700E  56                        PUSH ESI
0066700F  52                        PUSH EDX
00667010  50                        PUSH EAX
00667011  8B CF                     MOV ECX,EDI
00667013  E8 0F A6 D9 FF            CALL 0x00401627
00667018  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066701B  8B 8B B3 00 00 00         MOV ECX,dword ptr [EBX + 0xb3]
00667021  40                        INC EAX
00667022  3B C1                     CMP EAX,ECX
00667024  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00667027  7D 15                     JGE 0x0066703e
switchD_00666f20::caseD_a4:
00667029  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066702C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066702F  40                        INC EAX
00667030  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00667033  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00667036  3B C1                     CMP EAX,ECX
00667038  0F 8C 95 FE FF FF         JL 0x00666ed3
AiFltClassTy::sub_00664960::cf_break_loop_0066703E:
0066703E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00667041  52                        PUSH EDX
00667042  E8 C9 70 04 00            CALL 0x006ae110
AiFltClassTy::sub_00664960::cf_common_join_00667047:
00667047  8B CB                     MOV ECX,EBX
00667049  E8 71 A4 D9 FF            CALL 0x004014bf
AiFltClassTy::sub_00664960::cf_common_join_0066704E:
0066704E  89 B3 9B 00 00 00         MOV dword ptr [EBX + 0x9b],ESI
AiFltClassTy::sub_00664960::cf_common_join_00667054:
00667054  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
LAB_0066705a:
0066705A  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00667060  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
AiFltClassTy::sub_00664960::cf_common_exit_00667066:
00667066  8B 83 84 02 00 00         MOV EAX,dword ptr [EBX + 0x284]
0066706C  5F                        POP EDI
0066706D  3B C6                     CMP EAX,ESI
0066706F  74 21                     JZ 0x00667092
00667071  8A 83 76 01 00 00         MOV AL,byte ptr [EBX + 0x176]
00667077  84 C0                     TEST AL,AL
00667079  74 17                     JZ 0x00667092
0066707B  8B 83 7B 01 00 00         MOV EAX,dword ptr [EBX + 0x17b]
00667081  8B 8B EB 00 00 00         MOV ECX,dword ptr [EBX + 0xeb]
00667087  85 C1                     TEST ECX,EAX
00667089  74 07                     JZ 0x00667092
0066708B  8B CB                     MOV ECX,EBX
0066708D  E8 77 AA D9 FF            CALL 0x00401b09
LAB_00667092:
00667092  5E                        POP ESI
00667093  5B                        POP EBX
00667094  8B E5                     MOV ESP,EBP
00667096  5D                        POP EBP
00667097  C3                        RET
