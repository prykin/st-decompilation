VisibleClassTy::sub_00559110:
00559110  55                        PUSH EBP
00559111  8B EC                     MOV EBP,ESP
00559113  83 EC 10                  SUB ESP,0x10
00559116  53                        PUSH EBX
00559117  56                        PUSH ESI
00559118  57                        PUSH EDI
00559119  8B F9                     MOV EDI,ECX
0055911B  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00559122  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
00559128  85 C0                     TEST EAX,EAX
0055912A  0F 84 9D 02 00 00         JZ 0x005593cd
00559130  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00559133  85 DB                     TEST EBX,EBX
00559135  0F 8C 92 02 00 00         JL 0x005593cd
0055913B  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0055913E  83 FE 08                  CMP ESI,0x8
00559141  0F 83 86 02 00 00         JNC 0x005593cd
00559147  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0055914C  85 C0                     TEST EAX,EAX
0055914E  74 11                     JZ 0x00559161
00559150  8D 04 F6                  LEA EAX,[ESI + ESI*0x8]
00559153  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0055915B  0F 83 6C 02 00 00         JNC 0x005593cd
LAB_00559161:
00559161  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00559164  F6 C4 10                  TEST AH,0x10
00559167  74 1B                     JZ 0x00559184
00559169  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0055916C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0055916F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00559172  50                        PUSH EAX
00559173  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00559176  53                        PUSH EBX
00559177  56                        PUSH ESI
00559178  51                        PUSH ECX
00559179  52                        PUSH EDX
0055917A  50                        PUSH EAX
0055917B  6A 00                     PUSH 0x0
0055917D  8B CF                     MOV ECX,EDI
0055917F  E8 61 8A EA FF            CALL 0x00401be5
LAB_00559184:
00559184  8A 84 3E FC 00 00 00      MOV AL,byte ptr [ESI + EDI*0x1 + 0xfc]
0055918B  84 C0                     TEST AL,AL
0055918D  0F 84 3A 02 00 00         JZ 0x005593cd
00559193  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00559196  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00559199  8D 74 1B 01               LEA ESI,[EBX + EBX*0x1 + 0x1]
0055919D  2B CB                     SUB ECX,EBX
0055919F  2B D3                     SUB EDX,EBX
005591A1  53                        PUSH EBX
005591A2  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005591A5  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
005591A8  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
005591AB  E8 0F 97 EA FF            CALL 0x004028bf
005591B0  83 C4 04                  ADD ESP,0x4
005591B3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005591B6  85 C0                     TEST EAX,EAX
005591B8  0F 84 0F 02 00 00         JZ 0x005593cd
005591BE  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
005591C1  85 C9                     TEST ECX,ECX
005591C3  74 6D                     JZ 0x00559232
005591C5  F6 45 20 01               TEST byte ptr [EBP + 0x20],0x1
005591C9  74 67                     JZ 0x00559232
005591CB  33 DB                     XOR EBX,EBX
005591CD  85 F6                     TEST ESI,ESI
005591CF  0F 8E 01 02 00 00         JLE 0x005593d6
005591D5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_005591d8:
005591D8  33 F6                     XOR ESI,ESI
LAB_005591da:
005591DA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005591DD  80 3C 30 00               CMP byte ptr [EAX + ESI*0x1],0x0
005591E1  74 35                     JZ 0x00559218
005591E3  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005591E6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005591E9  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
005591EC  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
005591EF  85 C9                     TEST ECX,ECX
005591F1  7C 25                     JL 0x00559218
005591F3  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
005591F6  3B C8                     CMP ECX,EAX
005591F8  7D 1E                     JGE 0x00559218
005591FA  85 D2                     TEST EDX,EDX
005591FC  7C 1A                     JL 0x00559218
005591FE  3B 57 24                  CMP EDX,dword ptr [EDI + 0x24]
00559201  7D 15                     JGE 0x00559218
00559203  0F AF C2                  IMUL EAX,EDX
00559206  03 C1                     ADD EAX,ECX
00559208  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
0055920B  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
0055920E  8A 01                     MOV AL,byte ptr [ECX]
00559210  84 C0                     TEST AL,AL
00559212  76 04                     JBE 0x00559218
00559214  FE C8                     DEC AL
00559216  88 01                     MOV byte ptr [ECX],AL
LAB_00559218:
00559218  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055921B  46                        INC ESI
0055921C  3B F0                     CMP ESI,EAX
0055921E  7C BA                     JL 0x005591da
00559220  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00559223  43                        INC EBX
00559224  03 D0                     ADD EDX,EAX
00559226  3B D8                     CMP EBX,EAX
00559228  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0055922B  7C AB                     JL 0x005591d8
0055922D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00559230  8B F0                     MOV ESI,EAX
LAB_00559232:
00559232  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
00559235  85 C0                     TEST EAX,EAX
00559237  0F 84 90 01 00 00         JZ 0x005593cd
0055923D  8B 47 50                  MOV EAX,dword ptr [EDI + 0x50]
00559240  85 C0                     TEST EAX,EAX
00559242  0F 84 85 01 00 00         JZ 0x005593cd
00559248  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0055924B  F6 C4 40                  TEST AH,0x40
0055924E  0F 84 79 01 00 00         JZ 0x005593cd
00559254  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00559257  8D 55 1C                  LEA EDX,[EBP + 0x1c]
0055925A  8D 45 14                  LEA EAX,[EBP + 0x14]
0055925D  52                        PUSH EDX
0055925E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00559261  50                        PUSH EAX
00559262  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00559268  51                        PUSH ECX
00559269  52                        PUSH EDX
0055926A  50                        PUSH EAX
0055926B  8B CF                     MOV ECX,EDI
0055926D  E8 E1 AC EA FF            CALL 0x00403f53
00559272  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00559275  C7 45 18 00 00 00 00      MOV dword ptr [EBP + 0x18],0x0
0055927C  2B CB                     SUB ECX,EBX
0055927E  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00559281  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00559284  8B 14 8D D0 AE 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x79aed0]
0055928B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0055928E  2B D3                     SUB EDX,EBX
00559290  03 CA                     ADD ECX,EDX
00559292  85 F6                     TEST ESI,ESI
00559294  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00559297  0F 8E 30 01 00 00         JLE 0x005593cd
0055929D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005592A0  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_005592a3:
005592A3  33 DB                     XOR EBX,EBX
005592A5  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
LAB_005592a8:
005592A8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005592AB  80 3C 19 00               CMP byte ptr [ECX + EBX*0x1],0x0
005592AF  74 66                     JZ 0x00559317
005592B1  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005592B4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005592B7  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
005592BA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005592BD  03 CA                     ADD ECX,EDX
005592BF  85 C0                     TEST EAX,EAX
005592C1  7C 54                     JL 0x00559317
005592C3  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005592C6  3B C2                     CMP EAX,EDX
005592C8  7D 4D                     JGE 0x00559317
005592CA  85 C9                     TEST ECX,ECX
005592CC  7C 49                     JL 0x00559317
005592CE  3B 4F 34                  CMP ECX,dword ptr [EDI + 0x34]
005592D1  7D 44                     JGE 0x00559317
005592D3  8B F2                     MOV ESI,EDX
005592D5  0F AF F1                  IMUL ESI,ECX
005592D8  03 F0                     ADD ESI,EAX
005592DA  85 F6                     TEST ESI,ESI
005592DC  7C 39                     JL 0x00559317
005592DE  8B 5F 50                  MOV EBX,dword ptr [EDI + 0x50]
005592E1  66 83 3C 73 01            CMP word ptr [EBX + ESI*0x2],0x1
005592E6  75 1A                     JNZ 0x00559302
005592E8  8B 5F 34                  MOV EBX,dword ptr [EDI + 0x34]
005592EB  53                        PUSH EBX
005592EC  52                        PUSH EDX
005592ED  8B 57 4C                  MOV EDX,dword ptr [EDI + 0x4c]
005592F0  52                        PUSH EDX
005592F1  51                        PUSH ECX
005592F2  50                        PUSH EAX
005592F3  E8 3D BB EA FF            CALL 0x00404e35
005592F8  83 C4 14                  ADD ESP,0x14
005592FB  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_00559302:
00559302  8B 47 50                  MOV EAX,dword ptr [EDI + 0x50]
00559305  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
00559308  66 8B 06                  MOV AX,word ptr [ESI]
0055930B  66 85 C0                  TEST AX,AX
0055930E  76 04                     JBE 0x00559314
00559310  48                        DEC EAX
00559311  66 89 06                  MOV word ptr [ESI],AX
LAB_00559314:
00559314  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
LAB_00559317:
00559317  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055931A  43                        INC EBX
0055931B  3B D8                     CMP EBX,EAX
0055931D  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
00559320  7C 86                     JL 0x005592a8
00559322  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00559325  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00559328  41                        INC ECX
00559329  03 F0                     ADD ESI,EAX
0055932B  3B C8                     CMP ECX,EAX
0055932D  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
00559330  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
00559333  0F 8C 6A FF FF FF         JL 0x005592a3
00559339  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055933C  85 C0                     TEST EAX,EAX
0055933E  0F 84 89 00 00 00         JZ 0x005593cd
00559344  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00559347  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055934A  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0055934D  4B                        DEC EBX
0055934E  83 C0 02                  ADD EAX,0x2
00559351  4E                        DEC ESI
00559352  85 C0                     TEST EAX,EAX
00559354  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
00559357  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0055935A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0055935D  C7 45 18 00 00 00 00      MOV dword ptr [EBP + 0x18],0x0
00559364  7E 67                     JLE 0x005593cd
LAB_00559366:
00559366  33 C9                     XOR ECX,ECX
00559368  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
LAB_0055936b:
0055936B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0055936E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00559371  03 CA                     ADD ECX,EDX
00559373  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00559376  03 D0                     ADD EDX,EAX
00559378  85 C9                     TEST ECX,ECX
0055937A  7C 38                     JL 0x005593b4
0055937C  8B 77 30                  MOV ESI,dword ptr [EDI + 0x30]
0055937F  3B CE                     CMP ECX,ESI
00559381  7D 31                     JGE 0x005593b4
00559383  85 D2                     TEST EDX,EDX
00559385  7C 2D                     JL 0x005593b4
00559387  3B 57 34                  CMP EDX,dword ptr [EDI + 0x34]
0055938A  7D 28                     JGE 0x005593b4
0055938C  8B C6                     MOV EAX,ESI
0055938E  0F AF C2                  IMUL EAX,EDX
00559391  03 C1                     ADD EAX,ECX
00559393  85 C0                     TEST EAX,EAX
00559395  7C 1D                     JL 0x005593b4
00559397  8B 5F 50                  MOV EBX,dword ptr [EDI + 0x50]
0055939A  66 83 3C 43 00            CMP word ptr [EBX + EAX*0x2],0x0
0055939F  76 13                     JBE 0x005593b4
005593A1  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
005593A4  50                        PUSH EAX
005593A5  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
005593A8  56                        PUSH ESI
005593A9  50                        PUSH EAX
005593AA  52                        PUSH EDX
005593AB  51                        PUSH ECX
005593AC  E8 C5 97 EA FF            CALL 0x00402b76
005593B1  83 C4 14                  ADD ESP,0x14
LAB_005593b4:
005593B4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005593B7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005593BA  41                        INC ECX
005593BB  3B C8                     CMP ECX,EAX
005593BD  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
005593C0  7C A9                     JL 0x0055936b
005593C2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005593C5  41                        INC ECX
005593C6  3B C8                     CMP ECX,EAX
005593C8  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
005593CB  7C 99                     JL 0x00559366
LAB_005593cd:
005593CD  5F                        POP EDI
005593CE  5E                        POP ESI
005593CF  5B                        POP EBX
005593D0  8B E5                     MOV ESP,EBP
005593D2  5D                        POP EBP
005593D3  C2 1C 00                  RET 0x1c
LAB_005593d6:
005593D6  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
005593D9  E9 54 FE FF FF            JMP 0x00559232
