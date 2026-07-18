STAllPlayersC::DistributeGuardBoats:
00446F80  55                        PUSH EBP
00446F81  8B EC                     MOV EBP,ESP
00446F83  81 EC E0 00 00 00         SUB ESP,0xe0
00446F89  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
00446F8C  53                        PUSH EBX
00446F8D  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
00446F91  56                        PUSH ESI
00446F92  57                        PUSH EDI
00446F93  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00446F96  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
00446F99  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00446F9C  C1 E0 04                  SHL EAX,0x4
00446F9F  03 C1                     ADD EAX,ECX
00446FA1  D1 E0                     SHL EAX,0x1
00446FA3  8B 88 16 58 7F 00         MOV ECX,dword ptr [EAX + 0x7f5816]
00446FA9  8B 90 1E 58 7F 00         MOV EDX,dword ptr [EAX + 0x7f581e]
00446FAF  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
00446FB2  8B 88 1A 58 7F 00         MOV ECX,dword ptr [EAX + 0x7f581a]
00446FB8  8B 80 22 58 7F 00         MOV EAX,dword ptr [EAX + 0x7f5822]
00446FBE  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00446FC1  85 C9                     TEST ECX,ECX
00446FC3  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00446FC6  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00446FC9  0F 84 B3 0D 00 00         JZ 0x00447d82
00446FCF  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00446FD5  8D 85 24 FF FF FF         LEA EAX,[EBP + 0xffffff24]
00446FDB  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
00446FE1  6A 00                     PUSH 0x0
00446FE3  50                        PUSH EAX
00446FE4  89 8D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],ECX
00446FEA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00446FF0  E8 FB 67 2E 00            CALL 0x0072d7f0
00446FF5  8B F0                     MOV ESI,EAX
00446FF7  83 C4 08                  ADD ESP,0x8
00446FFA  85 F6                     TEST ESI,ESI
00446FFC  0F 85 35 0D 00 00         JNZ 0x00447d37
00447002  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
00447005  85 FF                     TEST EDI,EDI
00447007  74 31                     JZ 0x0044703a
00447009  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
0044700C  33 D2                     XOR EDX,EDX
0044700E  85 F6                     TEST ESI,ESI
00447010  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447013  7E 1F                     JLE 0x00447034
LAB_00447015:
00447015  8D 4D F8                  LEA ECX,[EBP + -0x8]
00447018  51                        PUSH ECX
00447019  8B CF                     MOV ECX,EDI
0044701B  E8 50 5C 26 00            CALL 0x006acc70
00447020  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00447023  52                        PUSH EDX
00447024  E8 E7 70 26 00            CALL 0x006ae110
00447029  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044702C  42                        INC EDX
0044702D  3B D6                     CMP EDX,ESI
0044702F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447032  7C E1                     JL 0x00447015
LAB_00447034:
00447034  57                        PUSH EDI
00447035  E8 D6 70 26 00            CALL 0x006ae110
LAB_0044703a:
0044703A  6A 01                     PUSH 0x1
0044703C  6A 04                     PUSH 0x4
0044703E  6A 01                     PUSH 0x1
00447040  6A 00                     PUSH 0x0
00447042  E8 49 72 26 00            CALL 0x006ae290
00447047  8B C8                     MOV ECX,EAX
00447049  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
0044704C  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
00447050  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00447053  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
00447059  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0044705C  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0044705F  8D 1C 50                  LEA EBX,[EAX + EDX*0x2]
00447062  C1 E3 04                  SHL EBX,0x4
00447065  03 D8                     ADD EBX,EAX
00447067  D1 E3                     SHL EBX,0x1
00447069  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
0044706C  89 8B 1E 58 7F 00         MOV dword ptr [EBX + 0x7f581e],ECX
00447072  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00447075  85 FF                     TEST EDI,EDI
00447077  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0044707A  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0044707D  0F 86 07 03 00 00         JBE 0x0044738a
LAB_00447083:
00447083  33 D2                     XOR EDX,EDX
00447085  85 FF                     TEST EDI,EDI
00447087  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0044708A  0F 8E 2D 01 00 00         JLE 0x004471bd
LAB_00447090:
00447090  8D 45 B0                  LEA EAX,[EBP + -0x50]
00447093  8B CE                     MOV ECX,ESI
00447095  50                        PUSH EAX
00447096  E8 D5 5B 26 00            CALL 0x006acc70
0044709B  83 7D B6 01               CMP dword ptr [EBP + -0x4a],0x1
0044709F  75 10                     JNZ 0x004470b1
004470A1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004470A4  42                        INC EDX
004470A5  3B D7                     CMP EDX,EDI
004470A7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004470AA  7C E4                     JL 0x00447090
004470AC  E9 0C 01 00 00            JMP 0x004471bd
LAB_004470b1:
004470B1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004470B4  8D 4D B0                  LEA ECX,[EBP + -0x50]
004470B7  51                        PUSH ECX
004470B8  52                        PUSH EDX
004470B9  56                        PUSH ESI
004470BA  C7 45 B6 01 00 00 00      MOV dword ptr [EBP + -0x4a],0x1
004470C1  E8 7A 70 26 00            CALL 0x006ae140
004470C6  6A 01                     PUSH 0x1
004470C8  6A 04                     PUSH 0x4
004470CA  6A 01                     PUSH 0x1
004470CC  6A 00                     PUSH 0x0
004470CE  E8 BD 71 26 00            CALL 0x006ae290
004470D3  8D 4D FC                  LEA ECX,[EBP + -0x4]
004470D6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004470D9  51                        PUSH ECX
004470DA  50                        PUSH EAX
004470DB  E8 E0 70 26 00            CALL 0x006ae1c0
004470E0  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004470E3  8D 55 F8                  LEA EDX,[EBP + -0x8]
004470E6  52                        PUSH EDX
004470E7  50                        PUSH EAX
004470E8  E8 D3 70 26 00            CALL 0x006ae1c0
004470ED  8B 4D B2                  MOV ECX,dword ptr [EBP + -0x4e]
004470F0  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004470F3  33 D2                     XOR EDX,EDX
004470F5  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004470F8  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004470FB  85 C0                     TEST EAX,EAX
004470FD  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00447100  0F 8E A7 00 00 00         JLE 0x004471ad
LAB_00447106:
00447106  8B 4D B2                  MOV ECX,dword ptr [EBP + -0x4e]
00447109  8D 45 D8                  LEA EAX,[EBP + -0x28]
0044710C  50                        PUSH EAX
0044710D  E8 5E 5B 26 00            CALL 0x006acc70
00447112  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00447115  8D 4D 8C                  LEA ECX,[EBP + -0x74]
00447118  51                        PUSH ECX
00447119  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
0044711C  E8 4F 5B 26 00            CALL 0x006acc70
00447121  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00447124  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00447127  85 FF                     TEST EDI,EDI
00447129  76 58                     JBE 0x00447183
0044712B  33 F6                     XOR ESI,ESI
0044712D  85 FF                     TEST EDI,EDI
0044712F  7E 36                     JLE 0x00447167
00447131  8B 5D AC                  MOV EBX,dword ptr [EBP + -0x54]
LAB_00447134:
00447134  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
00447137  8D 55 E0                  LEA EDX,[EBP + -0x20]
0044713A  52                        PUSH EDX
0044713B  8B D6                     MOV EDX,ESI
0044713D  E8 2E 5B 26 00            CALL 0x006acc70
00447142  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00447145  25 FF FF 00 00            AND EAX,0xffff
0044714A  3B C3                     CMP EAX,EBX
0044714C  74 07                     JZ 0x00447155
0044714E  46                        INC ESI
0044714F  3B F7                     CMP ESI,EDI
00447151  7C E1                     JL 0x00447134
00447153  EB 12                     JMP 0x00447167
LAB_00447155:
00447155  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00447158  66 FF 45 E2               INC word ptr [EBP + -0x1e]
0044715C  8D 4D E0                  LEA ECX,[EBP + -0x20]
0044715F  51                        PUSH ECX
00447160  56                        PUSH ESI
00447161  52                        PUSH EDX
00447162  E8 D9 6F 26 00            CALL 0x006ae140
LAB_00447167:
00447167  3B F7                     CMP ESI,EDI
00447169  75 30                     JNZ 0x0044719b
0044716B  66 8B 45 AC               MOV AX,word ptr [EBP + -0x54]
0044716F  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00447172  8D 4D E0                  LEA ECX,[EBP + -0x20]
00447175  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
00447179  51                        PUSH ECX
0044717A  66 C7 45 E2 01 00         MOV word ptr [EBP + -0x1e],0x1
00447180  52                        PUSH EDX
00447181  EB 13                     JMP 0x00447196
LAB_00447183:
00447183  66 8B 4D AC               MOV CX,word ptr [EBP + -0x54]
00447187  8D 55 E0                  LEA EDX,[EBP + -0x20]
0044718A  52                        PUSH EDX
0044718B  66 89 4D E0               MOV word ptr [EBP + -0x20],CX
0044718F  66 C7 45 E2 01 00         MOV word ptr [EBP + -0x1e],0x1
00447195  50                        PUSH EAX
LAB_00447196:
00447196  E8 25 70 26 00            CALL 0x006ae1c0
LAB_0044719b:
0044719B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0044719E  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004471A1  42                        INC EDX
004471A2  3B D0                     CMP EDX,EAX
004471A4  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004471A7  0F 8C 59 FF FF FF         JL 0x00447106
LAB_004471ad:
004471AD  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004471B0  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
004471B3  8B 5D A8                  MOV EBX,dword ptr [EBP + -0x58]
004471B6  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
004471B9  48                        DEC EAX
004471BA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_004471bd:
004471BD  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004471C0  85 C0                     TEST EAX,EAX
004471C2  0F 86 C2 01 00 00         JBE 0x0044738a
004471C8  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004471CB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004471CE  6A 01                     PUSH 0x1
004471D0  50                        PUSH EAX
004471D1  51                        PUSH ECX
004471D2  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
004471D5  E8 E0 B6 FB FF            CALL 0x004028ba
004471DA  85 C0                     TEST EAX,EAX
004471DC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004471DF  0F 84 9A 01 00 00         JZ 0x0044737f
004471E5  8D 55 EE                  LEA EDX,[EBP + -0x12]
004471E8  8D 4D F4                  LEA ECX,[EBP + -0xc]
004471EB  52                        PUSH EDX
004471EC  8D 55 F6                  LEA EDX,[EBP + -0xa]
004471EF  51                        PUSH ECX
004471F0  52                        PUSH EDX
004471F1  8B C8                     MOV ECX,EAX
004471F3  E8 CD A6 FB FF            CALL 0x004018c5
004471F8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004471FB  42                        INC EDX
004471FC  3B D7                     CMP EDX,EDI
004471FE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447201  0F 8D 78 01 00 00         JGE 0x0044737f
LAB_00447207:
00447207  8D 45 B0                  LEA EAX,[EBP + -0x50]
0044720A  8B CE                     MOV ECX,ESI
0044720C  50                        PUSH EAX
0044720D  E8 5E 5A 26 00            CALL 0x006acc70
00447212  83 7D B6 01               CMP dword ptr [EBP + -0x4a],0x1
00447216  0F 84 54 01 00 00         JZ 0x00447370
0044721C  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0044721F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00447222  6A 01                     PUSH 0x1
00447224  51                        PUSH ECX
00447225  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00447228  52                        PUSH EDX
00447229  E8 8C B6 FB FF            CALL 0x004028ba
0044722E  85 C0                     TEST EAX,EAX
00447230  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00447233  0F 84 37 01 00 00         JZ 0x00447370
00447239  8D 4D 9E                  LEA ECX,[EBP + -0x62]
0044723C  8D 55 CE                  LEA EDX,[EBP + -0x32]
0044723F  51                        PUSH ECX
00447240  8D 4D CC                  LEA ECX,[EBP + -0x34]
00447243  52                        PUSH EDX
00447244  51                        PUSH ECX
00447245  8B C8                     MOV ECX,EAX
00447247  E8 79 A6 FB FF            CALL 0x004018c5
0044724C  0F BF 45 CC               MOVSX EAX,word ptr [EBP + -0x34]
00447250  0F BF 55 F6               MOVSX EDX,word ptr [EBP + -0xa]
00447254  2B C2                     SUB EAX,EDX
00447256  99                        CDQ
00447257  33 C2                     XOR EAX,EDX
00447259  2B C2                     SUB EAX,EDX
0044725B  83 F8 02                  CMP EAX,0x2
0044725E  0F 8F 0C 01 00 00         JG 0x00447370
00447264  0F BF 45 CE               MOVSX EAX,word ptr [EBP + -0x32]
00447268  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
0044726C  2B C1                     SUB EAX,ECX
0044726E  99                        CDQ
0044726F  33 C2                     XOR EAX,EDX
00447271  2B C2                     SUB EAX,EDX
00447273  83 F8 02                  CMP EAX,0x2
00447276  0F 8F F4 00 00 00         JG 0x00447370
0044727C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044727F  8D 55 B0                  LEA EDX,[EBP + -0x50]
00447282  52                        PUSH EDX
00447283  50                        PUSH EAX
00447284  56                        PUSH ESI
00447285  C7 45 B6 01 00 00 00      MOV dword ptr [EBP + -0x4a],0x1
0044728C  E8 AF 6E 26 00            CALL 0x006ae140
00447291  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00447294  8D 4D FC                  LEA ECX,[EBP + -0x4]
00447297  51                        PUSH ECX
00447298  52                        PUSH EDX
00447299  E8 22 6F 26 00            CALL 0x006ae1c0
0044729E  8B 45 B2                  MOV EAX,dword ptr [EBP + -0x4e]
004472A1  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
004472A8  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004472AB  85 C0                     TEST EAX,EAX
004472AD  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004472B0  0F 8E AA 00 00 00         JLE 0x00447360
LAB_004472b6:
004472B6  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004472B9  8D 4D D8                  LEA ECX,[EBP + -0x28]
004472BC  51                        PUSH ECX
004472BD  8B 4D B2                  MOV ECX,dword ptr [EBP + -0x4e]
004472C0  E8 AB 59 26 00            CALL 0x006acc70
004472C5  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
004472C8  8D 55 8C                  LEA EDX,[EBP + -0x74]
004472CB  52                        PUSH EDX
004472CC  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004472CF  E8 9C 59 26 00            CALL 0x006acc70
004472D4  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004472D7  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
004472DA  85 FF                     TEST EDI,EDI
004472DC  76 58                     JBE 0x00447336
004472DE  33 F6                     XOR ESI,ESI
004472E0  85 FF                     TEST EDI,EDI
004472E2  7E 37                     JLE 0x0044731b
004472E4  8B 5D AC                  MOV EBX,dword ptr [EBP + -0x54]
LAB_004472e7:
004472E7  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004472EA  8D 45 E0                  LEA EAX,[EBP + -0x20]
004472ED  50                        PUSH EAX
004472EE  8B D6                     MOV EDX,ESI
004472F0  E8 7B 59 26 00            CALL 0x006acc70
004472F5  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004472F8  81 E1 FF FF 00 00         AND ECX,0xffff
004472FE  3B CB                     CMP ECX,EBX
00447300  74 07                     JZ 0x00447309
00447302  46                        INC ESI
00447303  3B F7                     CMP ESI,EDI
00447305  7C E0                     JL 0x004472e7
00447307  EB 12                     JMP 0x0044731b
LAB_00447309:
00447309  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
0044730C  66 FF 45 E2               INC word ptr [EBP + -0x1e]
00447310  8D 55 E0                  LEA EDX,[EBP + -0x20]
00447313  52                        PUSH EDX
00447314  56                        PUSH ESI
00447315  50                        PUSH EAX
00447316  E8 25 6E 26 00            CALL 0x006ae140
LAB_0044731b:
0044731B  3B F7                     CMP ESI,EDI
0044731D  75 2F                     JNZ 0x0044734e
0044731F  66 8B 4D AC               MOV CX,word ptr [EBP + -0x54]
00447323  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00447326  8D 55 E0                  LEA EDX,[EBP + -0x20]
00447329  66 89 4D E0               MOV word ptr [EBP + -0x20],CX
0044732D  66 C7 45 E2 01 00         MOV word ptr [EBP + -0x1e],0x1
00447333  52                        PUSH EDX
00447334  EB 12                     JMP 0x00447348
LAB_00447336:
00447336  66 8B 4D AC               MOV CX,word ptr [EBP + -0x54]
0044733A  8D 55 E0                  LEA EDX,[EBP + -0x20]
0044733D  66 89 4D E0               MOV word ptr [EBP + -0x20],CX
00447341  66 C7 45 E2 01 00         MOV word ptr [EBP + -0x1e],0x1
00447347  52                        PUSH EDX
LAB_00447348:
00447348  50                        PUSH EAX
00447349  E8 72 6E 26 00            CALL 0x006ae1c0
LAB_0044734e:
0044734E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00447351  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00447354  40                        INC EAX
00447355  3B C1                     CMP EAX,ECX
00447357  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0044735A  0F 8C 56 FF FF FF         JL 0x004472b6
LAB_00447360:
00447360  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00447363  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
00447366  8B 5D A8                  MOV EBX,dword ptr [EBP + -0x58]
00447369  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0044736C  48                        DEC EAX
0044736D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00447370:
00447370  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447373  42                        INC EDX
00447374  3B D7                     CMP EDX,EDI
00447376  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447379  0F 8C 88 FE FF FF         JL 0x00447207
LAB_0044737f:
0044737F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00447382  85 C0                     TEST EAX,EAX
00447384  0F 87 F9 FC FF FF         JA 0x00447083
LAB_0044738a:
0044738A  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
0044738D  85 F6                     TEST ESI,ESI
0044738F  74 43                     JZ 0x004473d4
00447391  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00447394  85 FF                     TEST EDI,EDI
00447396  76 2C                     JBE 0x004473c4
00447398  33 D2                     XOR EDX,EDX
0044739A  85 FF                     TEST EDI,EDI
0044739C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0044739F  7E 23                     JLE 0x004473c4
LAB_004473a1:
004473A1  8D 45 F8                  LEA EAX,[EBP + -0x8]
004473A4  8B CE                     MOV ECX,ESI
004473A6  50                        PUSH EAX
004473A7  E8 C4 58 26 00            CALL 0x006acc70
004473AC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004473AF  85 C0                     TEST EAX,EAX
004473B1  74 06                     JZ 0x004473b9
004473B3  50                        PUSH EAX
004473B4  E8 57 6D 26 00            CALL 0x006ae110
LAB_004473b9:
004473B9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004473BC  42                        INC EDX
004473BD  3B D7                     CMP EDX,EDI
004473BF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004473C2  7C DD                     JL 0x004473a1
LAB_004473c4:
004473C4  56                        PUSH ESI
004473C5  E8 46 6D 26 00            CALL 0x006ae110
004473CA  C7 83 22 58 7F 00 00 00 00 00  MOV dword ptr [EBX + 0x7f5822],0x0
LAB_004473d4:
004473D4  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004473D7  6A 01                     PUSH 0x1
004473D9  6A 04                     PUSH 0x4
004473DB  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
004473DE  56                        PUSH ESI
004473DF  6A 00                     PUSH 0x0
004473E1  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
004473E4  E8 A7 6E 26 00            CALL 0x006ae290
004473E9  8B F8                     MOV EDI,EAX
004473EB  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004473F2  85 F6                     TEST ESI,ESI
004473F4  89 7D A0                  MOV dword ptr [EBP + -0x60],EDI
004473F7  89 BB 22 58 7F 00         MOV dword ptr [EBX + 0x7f5822],EDI
004473FD  7E 25                     JLE 0x00447424
LAB_004473ff:
004473FF  6A 01                     PUSH 0x1
00447401  6A 02                     PUSH 0x2
00447403  6A 00                     PUSH 0x0
00447405  6A 00                     PUSH 0x0
00447407  E8 84 6E 26 00            CALL 0x006ae290
0044740C  8D 55 F8                  LEA EDX,[EBP + -0x8]
0044740F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00447412  52                        PUSH EDX
00447413  57                        PUSH EDI
00447414  E8 A7 6D 26 00            CALL 0x006ae1c0
00447419  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044741C  40                        INC EAX
0044741D  3B C6                     CMP EAX,ESI
0044741F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00447422  7C DB                     JL 0x004473ff
LAB_00447424:
00447424  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00447427  33 D2                     XOR EDX,EDX
00447429  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044742C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0044742F  85 C0                     TEST EAX,EAX
00447431  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00447434  0F 8E FE 00 00 00         JLE 0x00447538
LAB_0044743a:
0044743A  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0044743D  51                        PUSH ECX
0044743E  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
00447441  E8 2A 58 26 00            CALL 0x006acc70
00447446  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00447449  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0044744C  33 F6                     XOR ESI,ESI
0044744E  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00447451  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00447454  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
00447457  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0044745A  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0044745D  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00447460  3B C6                     CMP EAX,ESI
00447462  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00447465  0F 8E BB 00 00 00         JLE 0x00447526
LAB_0044746b:
0044746B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0044746E  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
00447471  8D 45 E0                  LEA EAX,[EBP + -0x20]
00447474  50                        PUSH EAX
00447475  E8 F6 57 26 00            CALL 0x006acc70
0044747A  8B 4D E2                  MOV ECX,dword ptr [EBP + -0x1e]
0044747D  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
00447480  81 E1 FF FF 00 00         AND ECX,0xffff
00447486  33 D2                     XOR EDX,EDX
00447488  8B C1                     MOV EAX,ECX
0044748A  0F AF C3                  IMUL EAX,EBX
0044748D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00447490  D1 E0                     SHL EAX,0x1
00447492  F7 F7                     DIV EDI
00447494  2B F9                     SUB EDI,ECX
00447496  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00447499  8B D0                     MOV EDX,EAX
0044749B  83 FA 08                  CMP EDX,0x8
0044749E  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004474A1  7C 71                     JL 0x00447514
004474A3  74 05                     JZ 0x004474aa
004474A5  83 FA 09                  CMP EDX,0x9
004474A8  75 05                     JNZ 0x004474af
LAB_004474aa:
004474AA  BA 0A 00 00 00            MOV EDX,0xa
LAB_004474af:
004474AF  B8 67 66 66 66            MOV EAX,0x66666667
004474B4  F7 EA                     IMUL EDX
004474B6  C1 FA 02                  SAR EDX,0x2
004474B9  8B CA                     MOV ECX,EDX
004474BB  C1 E9 1F                  SHR ECX,0x1f
004474BE  03 D1                     ADD EDX,ECX
004474C0  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004474C3  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004474C6  2B DA                     SUB EBX,EDX
004474C8  8D 55 F8                  LEA EDX,[EBP + -0x8]
004474CB  52                        PUSH EDX
004474CC  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004474CF  81 E2 FF FF 00 00         AND EDX,0xffff
004474D5  E8 96 57 26 00            CALL 0x006acc70
004474DA  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004474DD  8B FE                     MOV EDI,ESI
004474DF  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
004474E2  3B F1                     CMP ESI,ECX
004474E4  7D 2B                     JGE 0x00447511
LAB_004474e6:
004474E6  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
004474E9  8D 55 D0                  LEA EDX,[EBP + -0x30]
004474EC  52                        PUSH EDX
004474ED  8B D7                     MOV EDX,EDI
004474EF  E8 7C 57 26 00            CALL 0x006acc70
004474F4  83 F8 FC                  CMP EAX,-0x4
004474F7  74 18                     JZ 0x00447511
004474F9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004474FC  8D 45 D0                  LEA EAX,[EBP + -0x30]
004474FF  50                        PUSH EAX
00447500  51                        PUSH ECX
00447501  E8 BA 6C 26 00            CALL 0x006ae1c0
00447506  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00447509  47                        INC EDI
0044750A  8D 04 16                  LEA EAX,[ESI + EDX*0x1]
0044750D  3B F8                     CMP EDI,EAX
0044750F  7C D5                     JL 0x004474e6
LAB_00447511:
00447511  03 75 D8                  ADD ESI,dword ptr [EBP + -0x28]
LAB_00447514:
00447514  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00447517  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0044751A  40                        INC EAX
0044751B  3B C1                     CMP EAX,ECX
0044751D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00447520  0F 8C 45 FF FF FF         JL 0x0044746b
LAB_00447526:
00447526  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447529  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0044752C  42                        INC EDX
0044752D  3B D0                     CMP EDX,EAX
0044752F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447532  0F 8C 02 FF FF FF         JL 0x0044743a
LAB_00447538:
00447538  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
0044753B  6A 01                     PUSH 0x1
0044753D  6A 04                     PUSH 0x4
0044753F  56                        PUSH ESI
00447540  6A 00                     PUSH 0x0
00447542  E8 49 6D 26 00            CALL 0x006ae290
00447547  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0044754A  8B F8                     MOV EDI,EAX
0044754C  85 F6                     TEST ESI,ESI
0044754E  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
00447551  89 B9 26 58 7F 00         MOV dword ptr [ECX + 0x7f5826],EDI
00447557  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0044755E  7E 25                     JLE 0x00447585
LAB_00447560:
00447560  6A 01                     PUSH 0x1
00447562  6A 18                     PUSH 0x18
00447564  6A 00                     PUSH 0x0
00447566  6A 00                     PUSH 0x0
00447568  E8 23 6D 26 00            CALL 0x006ae290
0044756D  8D 55 F8                  LEA EDX,[EBP + -0x8]
00447570  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00447573  52                        PUSH EDX
00447574  57                        PUSH EDI
00447575  E8 46 6C 26 00            CALL 0x006ae1c0
0044757A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044757D  40                        INC EAX
0044757E  3B C6                     CMP EAX,ESI
00447580  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00447583  7C DB                     JL 0x00447560
LAB_00447585:
00447585  33 D2                     XOR EDX,EDX
00447587  85 F6                     TEST ESI,ESI
00447589  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0044758C  0F 8E 88 02 00 00         JLE 0x0044781a
LAB_00447592:
00447592  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00447595  8D 45 F8                  LEA EAX,[EBP + -0x8]
00447598  50                        PUSH EAX
00447599  E8 D2 56 26 00            CALL 0x006acc70
0044759E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004475A1  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004475A4  85 C0                     TEST EAX,EAX
004475A6  0F 84 5C 02 00 00         JZ 0x00447808
004475AC  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004475AF  8D 55 F8                  LEA EDX,[EBP + -0x8]
004475B2  52                        PUSH EDX
004475B3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004475B6  E8 B5 56 26 00            CALL 0x006acc70
004475BB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004475BE  8D 45 D0                  LEA EAX,[EBP + -0x30]
004475C1  50                        PUSH EAX
004475C2  33 D2                     XOR EDX,EDX
004475C4  E8 A7 56 26 00            CALL 0x006acc70
004475C9  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004475CC  8D 4D B0                  LEA ECX,[EBP + -0x50]
004475CF  51                        PUSH ECX
004475D0  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
004475D3  81 E2 FF FF 00 00         AND EDX,0xffff
004475D9  E8 92 56 26 00            CALL 0x006acc70
004475DE  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004475E1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004475E4  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
004475E7  6A 01                     PUSH 0x1
004475E9  52                        PUSH EDX
004475EA  56                        PUSH ESI
004475EB  E8 CA B2 FB FF            CALL 0x004028ba
004475F0  85 C0                     TEST EAX,EAX
004475F2  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004475F5  0F 84 0D 02 00 00         JZ 0x00447808
004475FB  8D 4D EE                  LEA ECX,[EBP + -0x12]
004475FE  8D 55 F4                  LEA EDX,[EBP + -0xc]
00447601  51                        PUSH ECX
00447602  8D 4D F6                  LEA ECX,[EBP + -0xa]
00447605  52                        PUSH EDX
00447606  51                        PUSH ECX
00447607  8B C8                     MOV ECX,EAX
00447609  E8 B7 A2 FB FF            CALL 0x004018c5
0044760E  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00447611  8D 55 F8                  LEA EDX,[EBP + -0x8]
00447614  52                        PUSH EDX
00447615  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447618  E8 53 56 26 00            CALL 0x006acc70
0044761D  0F BF 45 EE               MOVSX EAX,word ptr [EBP + -0x12]
00447621  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
00447625  0F BF 55 F6               MOVSX EDX,word ptr [EBP + -0xa]
00447629  6A 00                     PUSH 0x0
0044762B  6A 04                     PUSH 0x4
0044762D  6A 07                     PUSH 0x7
0044762F  6A 07                     PUSH 0x7
00447631  50                        PUSH EAX
00447632  51                        PUSH ECX
00447633  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00447639  52                        PUSH EDX
0044763A  6A 00                     PUSH 0x0
0044763C  56                        PUSH ESI
0044763D  E8 35 E6 FB FF            CALL 0x00405c77
00447642  8B F8                     MOV EDI,EAX
00447644  85 FF                     TEST EDI,EDI
00447646  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00447649  0F 84 B9 01 00 00         JZ 0x00447808
0044764F  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
00447652  33 F6                     XOR ESI,ESI
00447654  85 DB                     TEST EBX,EBX
00447656  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00447659  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0044765C  7E 5C                     JLE 0x004476ba
LAB_0044765e:
0044765E  8D 45 DC                  LEA EAX,[EBP + -0x24]
00447661  8B D6                     MOV EDX,ESI
00447663  50                        PUSH EAX
00447664  8B CF                     MOV ECX,EDI
00447666  E8 05 56 26 00            CALL 0x006acc70
0044766B  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0044766E  8B 11                     MOV EDX,dword ptr [ECX]
00447670  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00447676  85 C0                     TEST EAX,EAX
00447678  74 25                     JZ 0x0044769f
0044767A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0044767D  8B 01                     MOV EAX,dword ptr [ECX]
0044767F  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
00447685  85 C0                     TEST EAX,EAX
00447687  74 16                     JZ 0x0044769f
00447689  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0044768C  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00447692  50                        PUSH EAX
00447693  8B 11                     MOV EDX,dword ptr [ECX]
00447695  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
0044769B  85 C0                     TEST EAX,EAX
0044769D  75 10                     JNZ 0x004476af
LAB_0044769f:
0044769F  56                        PUSH ESI
004476A0  57                        PUSH EDI
004476A1  E8 CA 95 26 00            CALL 0x006b0c70
004476A6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004476A9  4E                        DEC ESI
004476AA  49                        DEC ECX
004476AB  4B                        DEC EBX
004476AC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_004476af:
004476AF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004476B2  46                        INC ESI
004476B3  3B F0                     CMP ESI,EAX
004476B5  7C A7                     JL 0x0044765e
004476B7  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
LAB_004476ba:
004476BA  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004476BD  85 C0                     TEST EAX,EAX
004476BF  75 06                     JNZ 0x004476c7
004476C1  57                        PUSH EDI
004476C2  E9 3C 01 00 00            JMP 0x00447803
LAB_004476c7:
004476C7  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004476CA  6A 01                     PUSH 0x1
004476CC  6A 04                     PUSH 0x4
004476CE  56                        PUSH ESI
004476CF  6A 00                     PUSH 0x0
004476D1  E8 BA 6B 26 00            CALL 0x006ae290
004476D6  8D 4D C0                  LEA ECX,[EBP + -0x40]
004476D9  8D 56 FF                  LEA EDX,[ESI + -0x1]
004476DC  8B D8                     MOV EBX,EAX
004476DE  51                        PUSH ECX
004476DF  52                        PUSH EDX
004476E0  53                        PUSH EBX
004476E1  E8 5A 6A 26 00            CALL 0x006ae140
004476E6  8B 7B 1C                  MOV EDI,dword ptr [EBX + 0x1c]
004476E9  8B CE                     MOV ECX,ESI
004476EB  33 C0                     XOR EAX,EAX
004476ED  F3 AB                     STOSD.REP ES:EDI
004476EF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004476F2  85 C0                     TEST EAX,EAX
004476F4  0F 86 FF 00 00 00         JBE 0x004477f9
LAB_004476fa:
004476FA  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004476FD  33 F6                     XOR ESI,ESI
004476FF  85 FF                     TEST EDI,EDI
00447701  7E 1C                     JLE 0x0044771f
LAB_00447703:
00447703  8D 45 C0                  LEA EAX,[EBP + -0x40]
00447706  8B D6                     MOV EDX,ESI
00447708  50                        PUSH EAX
00447709  8B CB                     MOV ECX,EBX
0044770B  E8 60 55 26 00            CALL 0x006acc70
00447710  83 7D C0 01               CMP dword ptr [EBP + -0x40],0x1
00447714  0F 85 D3 01 00 00         JNZ 0x004478ed
0044771A  46                        INC ESI
0044771B  3B F7                     CMP ESI,EDI
0044771D  7C E4                     JL 0x00447703
LAB_0044771f:
0044771F  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_00447722:
00447722  85 FF                     TEST EDI,EDI
00447724  0F 86 CF 00 00 00         JBE 0x004477f9
0044772A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0044772D  46                        INC ESI
0044772E  3B F0                     CMP ESI,EAX
00447730  0F 8D BB 00 00 00         JGE 0x004477f1
LAB_00447736:
00447736  8D 4D C0                  LEA ECX,[EBP + -0x40]
00447739  8B D6                     MOV EDX,ESI
0044773B  51                        PUSH ECX
0044773C  8B CB                     MOV ECX,EBX
0044773E  E8 2D 55 26 00            CALL 0x006acc70
00447743  83 7D C0 01               CMP dword ptr [EBP + -0x40],0x1
00447747  0F 84 95 00 00 00         JZ 0x004477e2
0044774D  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00447750  8D 55 DC                  LEA EDX,[EBP + -0x24]
00447753  52                        PUSH EDX
00447754  8B D6                     MOV EDX,ESI
00447756  E8 15 55 26 00            CALL 0x006acc70
0044775B  8D 45 9E                  LEA EAX,[EBP + -0x62]
0044775E  8D 4D CE                  LEA ECX,[EBP + -0x32]
00447761  50                        PUSH EAX
00447762  8D 55 CC                  LEA EDX,[EBP + -0x34]
00447765  51                        PUSH ECX
00447766  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00447769  52                        PUSH EDX
0044776A  E8 56 A1 FB FF            CALL 0x004018c5
0044776F  0F BF 45 CC               MOVSX EAX,word ptr [EBP + -0x34]
00447773  0F BF 4D F6               MOVSX ECX,word ptr [EBP + -0xa]
00447777  2B C1                     SUB EAX,ECX
00447779  99                        CDQ
0044777A  33 C2                     XOR EAX,EDX
0044777C  2B C2                     SUB EAX,EDX
0044777E  83 F8 02                  CMP EAX,0x2
00447781  7F 5F                     JG 0x004477e2
00447783  0F BF 45 CE               MOVSX EAX,word ptr [EBP + -0x32]
00447787  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
0044778B  2B C2                     SUB EAX,EDX
0044778D  99                        CDQ
0044778E  33 C2                     XOR EAX,EDX
00447790  2B C2                     SUB EAX,EDX
00447792  83 F8 02                  CMP EAX,0x2
00447795  7F 4B                     JG 0x004477e2
00447797  8D 45 C0                  LEA EAX,[EBP + -0x40]
0044779A  C7 45 C0 01 00 00 00      MOV dword ptr [EBP + -0x40],0x1
004477A1  50                        PUSH EAX
004477A2  56                        PUSH ESI
004477A3  53                        PUSH EBX
004477A4  E8 97 69 26 00            CALL 0x006ae140
004477A9  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
004477AF  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
004477B5  41                        INC ECX
004477B6  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
004477BC  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004477BF  8B 91 19 02 00 00         MOV EDX,dword ptr [ECX + 0x219]
004477C5  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004477C8  03 C2                     ADD EAX,EDX
004477CA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004477CD  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
004477D3  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
004477D9  50                        PUSH EAX
004477DA  51                        PUSH ECX
004477DB  52                        PUSH EDX
004477DC  E8 5F 69 26 00            CALL 0x006ae140
004477E1  4F                        DEC EDI
LAB_004477e2:
004477E2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004477E5  46                        INC ESI
004477E6  3B F0                     CMP ESI,EAX
004477E8  0F 8C 48 FF FF FF         JL 0x00447736
004477EE  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
LAB_004477f1:
004477F1  85 FF                     TEST EDI,EDI
004477F3  0F 87 01 FF FF FF         JA 0x004476fa
LAB_004477f9:
004477F9  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004477FC  50                        PUSH EAX
004477FD  E8 0E 69 26 00            CALL 0x006ae110
00447802  53                        PUSH EBX
LAB_00447803:
00447803  E8 08 69 26 00            CALL 0x006ae110
LAB_00447808:
00447808  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044780B  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0044780E  42                        INC EDX
0044780F  3B D0                     CMP EDX,EAX
00447811  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447814  0F 8C 78 FD FF FF         JL 0x00447592
LAB_0044781a:
0044781A  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0044781D  33 D2                     XOR EDX,EDX
0044781F  85 C0                     TEST EAX,EAX
00447821  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447824  0F 8E 2F 03 00 00         JLE 0x00447b59
LAB_0044782a:
0044782A  8D 4D 80                  LEA ECX,[EBP + -0x80]
0044782D  51                        PUSH ECX
0044782E  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00447831  E8 3A 54 26 00            CALL 0x006acc70
00447836  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
00447839  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0044783C  85 C0                     TEST EAX,EAX
0044783E  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00447841  0F 84 00 03 00 00         JZ 0x00447b47
00447847  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044784A  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0044784D  8D 45 F8                  LEA EAX,[EBP + -0x8]
00447850  50                        PUSH EAX
00447851  E8 1A 54 26 00            CALL 0x006acc70
00447856  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00447859  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0044785C  85 C0                     TEST EAX,EAX
0044785E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00447861  0F 85 17 01 00 00         JNZ 0x0044797e
00447867  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0044786A  8D 55 84                  LEA EDX,[EBP + -0x7c]
0044786D  52                        PUSH EDX
0044786E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447871  E8 FA 53 26 00            CALL 0x006acc70
00447876  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00447879  8D 45 D0                  LEA EAX,[EBP + -0x30]
0044787C  50                        PUSH EAX
0044787D  33 D2                     XOR EDX,EDX
0044787F  E8 EC 53 26 00            CALL 0x006acc70
00447884  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00447887  8D 4D B0                  LEA ECX,[EBP + -0x50]
0044788A  51                        PUSH ECX
0044788B  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0044788E  81 E2 FF FF 00 00         AND EDX,0xffff
00447894  E8 D7 53 26 00            CALL 0x006acc70
00447899  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0044789C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0044789F  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
004478A2  6A 01                     PUSH 0x1
004478A4  52                        PUSH EDX
004478A5  56                        PUSH ESI
004478A6  E8 0F B0 FB FF            CALL 0x004028ba
004478AB  85 C0                     TEST EAX,EAX
004478AD  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004478B0  0F 84 91 02 00 00         JZ 0x00447b47
004478B6  8D 4D EE                  LEA ECX,[EBP + -0x12]
004478B9  8D 55 F4                  LEA EDX,[EBP + -0xc]
004478BC  51                        PUSH ECX
004478BD  8D 4D F6                  LEA ECX,[EBP + -0xa]
004478C0  52                        PUSH EDX
004478C1  51                        PUSH ECX
004478C2  8B C8                     MOV ECX,EAX
004478C4  E8 FC 9F FB FF            CALL 0x004018c5
004478C9  0F BF 45 EE               MOVSX EAX,word ptr [EBP + -0x12]
004478CD  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
004478D1  8B 7D 80                  MOV EDI,dword ptr [EBP + -0x80]
004478D4  0F BF 55 F6               MOVSX EDX,word ptr [EBP + -0xa]
004478D8  57                        PUSH EDI
004478D9  50                        PUSH EAX
004478DA  51                        PUSH ECX
004478DB  52                        PUSH EDX
004478DC  50                        PUSH EAX
004478DD  51                        PUSH ECX
004478DE  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
004478E1  52                        PUSH EDX
004478E2  56                        PUSH ESI
004478E3  E8 6B A3 FB FF            CALL 0x00401c53
004478E8  E9 5A 02 00 00            JMP 0x00447b47
LAB_004478ed:
004478ED  8D 4D C0                  LEA ECX,[EBP + -0x40]
004478F0  BF 01 00 00 00            MOV EDI,0x1
004478F5  51                        PUSH ECX
004478F6  56                        PUSH ESI
004478F7  53                        PUSH EBX
004478F8  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
004478FB  E8 40 68 26 00            CALL 0x006ae140
00447900  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00447903  8D 55 DC                  LEA EDX,[EBP + -0x24]
00447906  52                        PUSH EDX
00447907  8B D6                     MOV EDX,ESI
00447909  E8 62 53 26 00            CALL 0x006acc70
0044790E  8D 45 EE                  LEA EAX,[EBP + -0x12]
00447911  8D 4D F4                  LEA ECX,[EBP + -0xc]
00447914  50                        PUSH EAX
00447915  8D 55 F6                  LEA EDX,[EBP + -0xa]
00447918  51                        PUSH ECX
00447919  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0044791C  52                        PUSH EDX
0044791D  E8 A3 9F FB FF            CALL 0x004018c5
00447922  0F BF 45 F6               MOVSX EAX,word ptr [EBP + -0xa]
00447926  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
0044792A  0F BF 55 EE               MOVSX EDX,word ptr [EBP + -0x12]
0044792E  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
00447934  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00447937  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
0044793D  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
00447943  89 BD 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDI
00447949  8B 88 19 02 00 00         MOV ECX,dword ptr [EAX + 0x219]
0044794F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00447952  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
00447958  52                        PUSH EDX
00447959  50                        PUSH EAX
0044795A  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
00447960  C7 85 7C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff7c],0x0
0044796A  E8 51 68 26 00            CALL 0x006ae1c0
0044796F  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
00447972  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00447975  4F                        DEC EDI
00447976  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00447979  E9 A4 FD FF FF            JMP 0x00447722
LAB_0044797e:
0044797E  33 DB                     XOR EBX,EBX
00447980  33 F6                     XOR ESI,ESI
00447982  85 C0                     TEST EAX,EAX
00447984  7E 21                     JLE 0x004479a7
LAB_00447986:
00447986  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00447989  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
0044798F  52                        PUSH EDX
00447990  8B D6                     MOV EDX,ESI
00447992  E8 D9 52 26 00            CALL 0x006acc70
00447997  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
0044799D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004479A0  03 DA                     ADD EBX,EDX
004479A2  46                        INC ESI
004479A3  3B F0                     CMP ESI,EAX
004479A5  7C DF                     JL 0x00447986
LAB_004479a7:
004479A7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004479AA  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004479AD  8D 45 84                  LEA EAX,[EBP + -0x7c]
004479B0  50                        PUSH EAX
004479B1  E8 BA 52 26 00            CALL 0x006acc70
004479B6  8D 4D D0                  LEA ECX,[EBP + -0x30]
004479B9  33 D2                     XOR EDX,EDX
004479BB  51                        PUSH ECX
004479BC  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
004479BF  E8 AC 52 26 00            CALL 0x006acc70
004479C4  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
004479C7  8D 55 B0                  LEA EDX,[EBP + -0x50]
004479CA  52                        PUSH EDX
004479CB  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004479CE  81 E2 FF FF 00 00         AND EDX,0xffff
004479D4  E8 97 52 26 00            CALL 0x006acc70
004479D9  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004479DC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004479DF  6A 01                     PUSH 0x1
004479E1  50                        PUSH EAX
004479E2  51                        PUSH ECX
004479E3  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
004479E6  E8 CF AE FB FF            CALL 0x004028ba
004479EB  85 C0                     TEST EAX,EAX
004479ED  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004479F0  0F 84 51 01 00 00         JZ 0x00447b47
004479F6  8D 55 EE                  LEA EDX,[EBP + -0x12]
004479F9  8D 4D F4                  LEA ECX,[EBP + -0xc]
004479FC  52                        PUSH EDX
004479FD  8D 55 F6                  LEA EDX,[EBP + -0xa]
00447A00  51                        PUSH ECX
00447A01  52                        PUSH EDX
00447A02  8B C8                     MOV ECX,EAX
00447A04  E8 BC 9E FB FF            CALL 0x004018c5
00447A09  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00447A0C  33 FF                     XOR EDI,EDI
00447A0E  3B C7                     CMP EAX,EDI
00447A10  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00447A13  0F 8E 2E 01 00 00         JLE 0x00447b47
LAB_00447a19:
00447A19  85 DB                     TEST EBX,EBX
00447A1B  0F 84 14 01 00 00         JZ 0x00447b35
00447A21  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00447A24  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00447A27  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
00447A2D  50                        PUSH EAX
00447A2E  E8 3D 52 26 00            CALL 0x006acc70
00447A33  8B B5 78 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff78]
00447A39  33 D2                     XOR EDX,EDX
00447A3B  8B C6                     MOV EAX,ESI
00447A3D  0F AF 45 D4               IMUL EAX,dword ptr [EBP + -0x2c]
00447A41  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00447A44  D1 E0                     SHL EAX,0x1
00447A46  F7 F3                     DIV EBX
00447A48  2B DE                     SUB EBX,ESI
00447A4A  8B C8                     MOV ECX,EAX
00447A4C  83 F9 08                  CMP ECX,0x8
00447A4F  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00447A52  0F 8C DD 00 00 00         JL 0x00447b35
00447A58  74 05                     JZ 0x00447a5f
00447A5A  83 F9 09                  CMP ECX,0x9
00447A5D  75 05                     JNZ 0x00447a64
LAB_00447a5f:
00447A5F  B9 0A 00 00 00            MOV ECX,0xa
LAB_00447a64:
00447A64  B8 67 66 66 66            MOV EAX,0x66666667
00447A69  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
00447A6C  F7 E9                     IMUL ECX
00447A6E  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00447A74  C1 FA 02                  SAR EDX,0x2
00447A77  8B CA                     MOV ECX,EDX
00447A79  C1 E9 1F                  SHR ECX,0x1f
00447A7C  03 D1                     ADD EDX,ECX
00447A7E  2B F2                     SUB ESI,EDX
00447A80  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00447A83  85 C0                     TEST EAX,EAX
00447A85  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
00447A88  75 15                     JNZ 0x00447a9f
00447A8A  6A 01                     PUSH 0x1
00447A8C  6A 02                     PUSH 0x2
00447A8E  6A 01                     PUSH 0x1
00447A90  50                        PUSH EAX
00447A91  E8 FA 67 26 00            CALL 0x006ae290
00447A96  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00447A99  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
LAB_00447a9f:
00447A9F  8D 0C 17                  LEA ECX,[EDI + EDX*0x1]
00447AA2  8B F7                     MOV ESI,EDI
00447AA4  3B F9                     CMP EDI,ECX
00447AA6  7D 39                     JGE 0x00447ae1
LAB_00447aa8:
00447AA8  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
00447AAB  8D 55 D0                  LEA EDX,[EBP + -0x30]
00447AAE  52                        PUSH EDX
00447AAF  8B D6                     MOV EDX,ESI
00447AB1  E8 BA 51 26 00            CALL 0x006acc70
00447AB6  83 F8 FC                  CMP EAX,-0x4
00447AB9  74 1D                     JZ 0x00447ad8
00447ABB  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
00447AC1  8D 45 D0                  LEA EAX,[EBP + -0x30]
00447AC4  50                        PUSH EAX
00447AC5  51                        PUSH ECX
00447AC6  E8 F5 66 26 00            CALL 0x006ae1c0
00447ACB  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00447ACE  46                        INC ESI
00447ACF  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00447AD2  3B F0                     CMP ESI,EAX
00447AD4  7C D2                     JL 0x00447aa8
00447AD6  EB 03                     JMP 0x00447adb
LAB_00447ad8:
00447AD8  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
LAB_00447adb:
00447ADB  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
LAB_00447ae1:
00447AE1  03 FA                     ADD EDI,EDX
00447AE3  85 C0                     TEST EAX,EAX
00447AE5  74 4E                     JZ 0x00447b35
00447AE7  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00447AEA  85 C9                     TEST ECX,ECX
00447AEC  76 47                     JBE 0x00447b35
00447AEE  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
00447AF4  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
00447AFA  50                        PUSH EAX
00447AFB  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00447B01  51                        PUSH ECX
00447B02  52                        PUSH EDX
00447B03  0F BF 4D EE               MOVSX ECX,word ptr [EBP + -0x12]
00447B07  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00447B0B  50                        PUSH EAX
00447B0C  51                        PUSH ECX
00447B0D  0F BF 45 F6               MOVSX EAX,word ptr [EBP + -0xa]
00447B11  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00447B14  52                        PUSH EDX
00447B15  50                        PUSH EAX
00447B16  51                        PUSH ECX
00447B17  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00447B1A  E8 34 A1 FB FF            CALL 0x00401c53
00447B1F  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
00447B25  52                        PUSH EDX
00447B26  E8 E5 65 26 00            CALL 0x006ae110
00447B2B  C7 85 7C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff7c],0x0
LAB_00447b35:
00447B35  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00447B38  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00447B3B  40                        INC EAX
00447B3C  3B C1                     CMP EAX,ECX
00447B3E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00447B41  0F 8C D2 FE FF FF         JL 0x00447a19
LAB_00447b47:
00447B47  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447B4A  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00447B4D  42                        INC EDX
00447B4E  3B D0                     CMP EDX,EAX
00447B50  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447B53  0F 8C D1 FC FF FF         JL 0x0044782a
LAB_00447b59:
00447B59  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00447B5E  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00447B61  8B 75 88                  MOV ESI,dword ptr [EBP + -0x78]
00447B64  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00447B6A  85 F6                     TEST ESI,ESI
00447B6C  89 8A 2A 58 7F 00         MOV dword ptr [EDX + 0x7f582a],ECX
00447B72  74 50                     JZ 0x00447bc4
00447B74  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00447B77  33 DB                     XOR EBX,EBX
00447B79  33 D2                     XOR EDX,EDX
00447B7B  3B FB                     CMP EDI,EBX
00447B7D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447B80  7E 44                     JLE 0x00447bc6
LAB_00447b82:
00447B82  8D 45 8C                  LEA EAX,[EBP + -0x74]
00447B85  8B CE                     MOV ECX,ESI
00447B87  50                        PUSH EAX
00447B88  E8 E3 50 26 00            CALL 0x006acc70
00447B8D  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00447B90  3B C3                     CMP EAX,EBX
00447B92  74 23                     JZ 0x00447bb7
00447B94  50                        PUSH EAX
00447B95  E8 76 65 26 00            CALL 0x006ae110
00447B9A  6A 01                     PUSH 0x1
00447B9C  6A 04                     PUSH 0x4
00447B9E  6A 01                     PUSH 0x1
00447BA0  53                        PUSH EBX
00447BA1  E8 EA 66 26 00            CALL 0x006ae290
00447BA6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447BA9  8D 4D 8C                  LEA ECX,[EBP + -0x74]
00447BAC  51                        PUSH ECX
00447BAD  52                        PUSH EDX
00447BAE  56                        PUSH ESI
00447BAF  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00447BB2  E8 89 65 26 00            CALL 0x006ae140
LAB_00447bb7:
00447BB7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447BBA  42                        INC EDX
00447BBB  3B D7                     CMP EDX,EDI
00447BBD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447BC0  7C C0                     JL 0x00447b82
00447BC2  EB 02                     JMP 0x00447bc6
LAB_00447bc4:
00447BC4  33 DB                     XOR EBX,EBX
LAB_00447bc6:
00447BC6  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
00447BC9  3B F3                     CMP ESI,EBX
00447BCB  74 41                     JZ 0x00447c0e
00447BCD  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00447BD0  33 D2                     XOR EDX,EDX
00447BD2  3B FB                     CMP EDI,EBX
00447BD4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447BD7  7E 23                     JLE 0x00447bfc
LAB_00447bd9:
00447BD9  8D 45 B0                  LEA EAX,[EBP + -0x50]
00447BDC  8B CE                     MOV ECX,ESI
00447BDE  50                        PUSH EAX
00447BDF  E8 8C 50 26 00            CALL 0x006acc70
00447BE4  8B 45 B2                  MOV EAX,dword ptr [EBP + -0x4e]
00447BE7  3B C3                     CMP EAX,EBX
00447BE9  74 06                     JZ 0x00447bf1
00447BEB  50                        PUSH EAX
00447BEC  E8 1F 65 26 00            CALL 0x006ae110
LAB_00447bf1:
00447BF1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447BF4  42                        INC EDX
00447BF5  3B D7                     CMP EDX,EDI
00447BF7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447BFA  7C DD                     JL 0x00447bd9
LAB_00447bfc:
00447BFC  56                        PUSH ESI
00447BFD  E8 0E 65 26 00            CALL 0x006ae110
00447C02  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00447C05  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
00447C08  89 99 1A 58 7F 00         MOV dword ptr [ECX + 0x7f581a],EBX
LAB_00447c0e:
00447C0E  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
00447C11  3B F3                     CMP ESI,EBX
00447C13  74 43                     JZ 0x00447c58
00447C15  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00447C18  33 D2                     XOR EDX,EDX
00447C1A  3B C3                     CMP EAX,EBX
00447C1C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447C1F  7E 25                     JLE 0x00447c46
00447C21  8B F8                     MOV EDI,EAX
LAB_00447c23:
00447C23  8D 45 F8                  LEA EAX,[EBP + -0x8]
00447C26  8B CE                     MOV ECX,ESI
00447C28  50                        PUSH EAX
00447C29  E8 42 50 26 00            CALL 0x006acc70
00447C2E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00447C31  3B C3                     CMP EAX,EBX
00447C33  74 06                     JZ 0x00447c3b
00447C35  50                        PUSH EAX
00447C36  E8 D5 64 26 00            CALL 0x006ae110
LAB_00447c3b:
00447C3B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447C3E  42                        INC EDX
00447C3F  3B D7                     CMP EDX,EDI
00447C41  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447C44  7C DD                     JL 0x00447c23
LAB_00447c46:
00447C46  56                        PUSH ESI
00447C47  E8 C4 64 26 00            CALL 0x006ae110
00447C4C  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00447C4F  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
00447C52  89 99 1E 58 7F 00         MOV dword ptr [ECX + 0x7f581e],EBX
LAB_00447c58:
00447C58  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
00447C5B  3B F3                     CMP ESI,EBX
00447C5D  74 43                     JZ 0x00447ca2
00447C5F  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00447C62  33 D2                     XOR EDX,EDX
00447C64  3B C3                     CMP EAX,EBX
00447C66  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447C69  7E 25                     JLE 0x00447c90
00447C6B  8B F8                     MOV EDI,EAX
LAB_00447c6d:
00447C6D  8D 45 F8                  LEA EAX,[EBP + -0x8]
00447C70  8B CE                     MOV ECX,ESI
00447C72  50                        PUSH EAX
00447C73  E8 F8 4F 26 00            CALL 0x006acc70
00447C78  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00447C7B  3B C3                     CMP EAX,EBX
00447C7D  74 06                     JZ 0x00447c85
00447C7F  50                        PUSH EAX
00447C80  E8 8B 64 26 00            CALL 0x006ae110
LAB_00447c85:
00447C85  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447C88  42                        INC EDX
00447C89  3B D7                     CMP EDX,EDI
00447C8B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447C8E  7C DD                     JL 0x00447c6d
LAB_00447c90:
00447C90  56                        PUSH ESI
00447C91  E8 7A 64 26 00            CALL 0x006ae110
00447C96  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00447C99  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
00447C9C  89 99 22 58 7F 00         MOV dword ptr [ECX + 0x7f5822],EBX
LAB_00447ca2:
00447CA2  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
00447CA5  3B F3                     CMP ESI,EBX
00447CA7  74 79                     JZ 0x00447d22
00447CA9  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00447CAC  33 D2                     XOR EDX,EDX
00447CAE  3B C3                     CMP EAX,EBX
00447CB0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447CB3  7E 5E                     JLE 0x00447d13
LAB_00447cb5:
00447CB5  8D 45 F8                  LEA EAX,[EBP + -0x8]
00447CB8  8B CE                     MOV ECX,ESI
00447CBA  50                        PUSH EAX
00447CBB  E8 B0 4F 26 00            CALL 0x006acc70
00447CC0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00447CC3  3B CB                     CMP ECX,EBX
00447CC5  74 3E                     JZ 0x00447d05
00447CC7  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
00447CCA  3B FB                     CMP EDI,EBX
00447CCC  76 2C                     JBE 0x00447cfa
00447CCE  33 F6                     XOR ESI,ESI
00447CD0  85 FF                     TEST EDI,EDI
00447CD2  7E 26                     JLE 0x00447cfa
LAB_00447cd4:
00447CD4  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
00447CDA  52                        PUSH EDX
00447CDB  8B D6                     MOV EDX,ESI
00447CDD  E8 8E 4F 26 00            CALL 0x006acc70
00447CE2  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00447CE8  85 C0                     TEST EAX,EAX
00447CEA  74 06                     JZ 0x00447cf2
00447CEC  50                        PUSH EAX
00447CED  E8 1E 64 26 00            CALL 0x006ae110
LAB_00447cf2:
00447CF2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00447CF5  46                        INC ESI
00447CF6  3B F7                     CMP ESI,EDI
00447CF8  7C DA                     JL 0x00447cd4
LAB_00447cfa:
00447CFA  51                        PUSH ECX
00447CFB  E8 10 64 26 00            CALL 0x006ae110
00447D00  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
00447D03  33 DB                     XOR EBX,EBX
LAB_00447d05:
00447D05  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00447D08  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00447D0B  42                        INC EDX
00447D0C  3B D0                     CMP EDX,EAX
00447D0E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00447D11  7C A2                     JL 0x00447cb5
LAB_00447d13:
00447D13  56                        PUSH ESI
00447D14  E8 F7 63 26 00            CALL 0x006ae110
00447D19  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00447D1C  89 98 26 58 7F 00         MOV dword ptr [EAX + 0x7f5826],EBX
LAB_00447d22:
00447D22  8B 8D 20 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff20]
00447D28  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00447D2E  5F                        POP EDI
00447D2F  5E                        POP ESI
00447D30  5B                        POP EBX
00447D31  8B E5                     MOV ESP,EBP
00447D33  5D                        POP EBP
00447D34  C2 04 00                  RET 0x4
LAB_00447d37:
00447D37  8B 95 20 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff20]
00447D3D  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
00447D43  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00447D49  74 37                     JZ 0x00447d82
00447D4B  68 58 84 7A 00            PUSH 0x7a8458
00447D50  68 CC 4C 7A 00            PUSH 0x7a4ccc
00447D55  6A 00                     PUSH 0x0
00447D57  6A 00                     PUSH 0x0
00447D59  68 90 2B 00 00            PUSH 0x2b90
00447D5E  68 04 60 7A 00            PUSH 0x7a6004
00447D63  E8 68 57 26 00            CALL 0x006ad4d0
00447D68  83 C4 18                  ADD ESP,0x18
00447D6B  85 C0                     TEST EAX,EAX
00447D6D  74 01                     JZ 0x00447d70
00447D6F  CC                        INT3
LAB_00447d70:
00447D70  68 91 2B 00 00            PUSH 0x2b91
00447D75  68 04 60 7A 00            PUSH 0x7a6004
00447D7A  6A 00                     PUSH 0x0
00447D7C  56                        PUSH ESI
00447D7D  E8 BE E0 25 00            CALL 0x006a5e40
LAB_00447d82:
00447D82  5F                        POP EDI
00447D83  5E                        POP ESI
00447D84  5B                        POP EBX
00447D85  8B E5                     MOV ESP,EBP
00447D87  5D                        POP EBP
00447D88  C2 04 00                  RET 0x4
