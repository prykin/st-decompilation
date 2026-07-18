FUN_006253b0:
006253B0  55                        PUSH EBP
006253B1  8B EC                     MOV EBP,ESP
006253B3  83 EC 2C                  SUB ESP,0x2c
006253B6  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006253B9  B8 01 00 00 00            MOV EAX,0x1
006253BE  3B C8                     CMP ECX,EAX
006253C0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006253C3  0F 8C 6C 01 00 00         JL 0x00625535
006253C9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006253CC  53                        PUSH EBX
006253CD  56                        PUSH ESI
006253CE  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006253D1  57                        PUSH EDI
006253D2  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006253D5  2B CE                     SUB ECX,ESI
006253D7  8D 56 FF                  LEA EDX,[ESI + -0x1]
006253DA  2B FE                     SUB EDI,ESI
006253DC  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006253DF  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006253E2  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006253E5  EB 09                     JMP 0x006253f0
LAB_006253e7:
006253E7  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006253EA  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006253ED  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
LAB_006253f0:
006253F0  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
006253F3  33 DB                     XOR EBX,EBX
006253F5  3B C3                     CMP EAX,EBX
006253F7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006253FA  7D 03                     JGE 0x006253ff
006253FC  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_006253ff:
006253FF  3B D3                     CMP EDX,EBX
00625401  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00625404  7D 03                     JGE 0x00625409
00625406  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00625409:
00625409  03 D7                     ADD EDX,EDI
0062540B  3B D3                     CMP EDX,EBX
0062540D  7D 02                     JGE 0x00625411
0062540F  33 D2                     XOR EDX,EDX
LAB_00625411:
00625411  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00625414  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00625417  03 C6                     ADD EAX,ESI
00625419  03 C8                     ADD ECX,EAX
0062541B  3B CB                     CMP ECX,EBX
0062541D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00625420  7C 06                     JL 0x00625428
00625422  4B                        DEC EBX
00625423  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00625426  8B CB                     MOV ECX,EBX
LAB_00625428:
00625428  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0062542B  8B D8                     MOV EBX,EAX
0062542D  3B C6                     CMP EAX,ESI
0062542F  7C 03                     JL 0x00625434
00625431  8D 5E FF                  LEA EBX,[ESI + -0x1]
LAB_00625434:
00625434  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00625437  03 C7                     ADD EAX,EDI
00625439  3B C6                     CMP EAX,ESI
0062543B  7C 03                     JL 0x00625440
0062543D  8D 46 FF                  LEA EAX,[ESI + -0x1]
LAB_00625440:
00625440  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00625443  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00625446  2B F2                     SUB ESI,EDX
00625448  3B F7                     CMP ESI,EDI
0062544A  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0062544D  7C 01                     JL 0x00625450
0062544F  42                        INC EDX
LAB_00625450:
00625450  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00625453  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00625456  8B F8                     MOV EDI,EAX
00625458  2B FA                     SUB EDI,EDX
0062545A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062545D  3B FA                     CMP EDI,EDX
0062545F  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
00625462  7C 01                     JL 0x00625465
00625464  48                        DEC EAX
LAB_00625465:
00625465  39 45 EC                  CMP dword ptr [EBP + -0x14],EAX
00625468  0F 8F 81 00 00 00         JG 0x006254ef
0062546E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00625471  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00625474  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00625477  2B 45 EC                  SUB EAX,dword ptr [EBP + -0x14]
0062547A  2B D7                     SUB EDX,EDI
0062547C  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0062547F  2B CE                     SUB ECX,ESI
00625481  2B F7                     SUB ESI,EDI
00625483  8B FB                     MOV EDI,EBX
00625485  2B 7D 10                  SUB EDI,dword ptr [EBP + 0x10]
00625488  40                        INC EAX
00625489  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0062548c:
0062548C  3B 7D FC                  CMP EDI,dword ptr [EBP + -0x4]
0062548F  7D 05                     JGE 0x00625496
00625491  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00625494  EB 06                     JMP 0x0062549c
LAB_00625496:
00625496  8D 43 FF                  LEA EAX,[EBX + -0x1]
00625499  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0062549c:
0062549C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0062549F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006254A2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006254A5  3B C8                     CMP ECX,EAX
006254A7  7C 07                     JL 0x006254b0
006254A9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006254AC  48                        DEC EAX
006254AD  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006254b0:
006254B0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006254B3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006254B6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006254B9  3B D0                     CMP EDX,EAX
006254BB  7C 07                     JL 0x006254c4
006254BD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006254C0  40                        INC EAX
006254C1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006254c4:
006254C4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006254C7  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006254CA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006254CD  3B F0                     CMP ESI,EAX
006254CF  7C 07                     JL 0x006254d8
006254D1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006254D4  40                        INC EAX
006254D5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006254d8:
006254D8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006254DB  48                        DEC EAX
006254DC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006254DF  75 AB                     JNZ 0x0062548c
006254E1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006254E4  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
006254E7  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
006254EA  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006254ED  EB 06                     JMP 0x006254f5
LAB_006254ef:
006254EF  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006254F2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_006254f5:
006254F5  3B 75 FC                  CMP ESI,dword ptr [EBP + -0x4]
006254F8  7C 0C                     JL 0x00625506
006254FA  3B CB                     CMP ECX,EBX
006254FC  7F 08                     JG 0x00625506
006254FE  8B C3                     MOV EAX,EBX
00625500  2B C1                     SUB EAX,ECX
00625502  40                        INC EAX
LAB_00625503:
00625503  48                        DEC EAX
00625504  75 FD                     JNZ 0x00625503
LAB_00625506:
00625506  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00625509  3B F8                     CMP EDI,EAX
0062550B  7C 0A                     JL 0x00625517
0062550D  3B CB                     CMP ECX,EBX
0062550F  7F 06                     JG 0x00625517
00625511  2B D9                     SUB EBX,ECX
00625513  43                        INC EBX
LAB_00625514:
00625514  4B                        DEC EBX
00625515  75 FD                     JNZ 0x00625514
LAB_00625517:
00625517  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0062551A  40                        INC EAX
0062551B  4A                        DEC EDX
0062551C  3B C1                     CMP EAX,ECX
0062551E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00625521  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00625524  0F 8E BD FE FF FF         JLE 0x006253e7
0062552A  5F                        POP EDI
0062552B  5E                        POP ESI
0062552C  33 C0                     XOR EAX,EAX
0062552E  5B                        POP EBX
0062552F  8B E5                     MOV ESP,EBP
00625531  5D                        POP EBP
00625532  C2 20 00                  RET 0x20
LAB_00625535:
00625535  33 C0                     XOR EAX,EAX
00625537  8B E5                     MOV ESP,EBP
00625539  5D                        POP EBP
0062553A  C2 20 00                  RET 0x20
