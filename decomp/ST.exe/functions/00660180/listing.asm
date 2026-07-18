FUN_00660180:
00660180  55                        PUSH EBP
00660181  8B EC                     MOV EBP,ESP
00660183  83 EC 74                  SUB ESP,0x74
00660186  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00660189  56                        PUSH ESI
0066018A  8B D1                     MOV EDX,ECX
0066018C  25 FF 00 00 00            AND EAX,0xff
00660191  33 F6                     XOR ESI,ESI
00660193  83 F8 02                  CMP EAX,0x2
00660196  57                        PUSH EDI
00660197  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0066019A  89 B2 A7 00 00 00         MOV dword ptr [EDX + 0xa7],ESI
006601A0  74 26                     JZ 0x006601c8
006601A2  83 F8 01                  CMP EAX,0x1
006601A5  74 18                     JZ 0x006601bf
006601A7  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
006601AA  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006601B0  05 39 30 00 00            ADD EAX,0x3039
006601B5  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
006601B8  C1 E8 10                  SHR EAX,0x10
006601BB  83 E0 01                  AND EAX,0x1
006601BE  40                        INC EAX
LAB_006601bf:
006601BF  83 F8 02                  CMP EAX,0x2
006601C2  0F 85 3A 01 00 00         JNZ 0x00660302
LAB_006601c8:
006601C8  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006601CE  33 C9                     XOR ECX,ECX
006601D0  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006601D3  8D 45 8C                  LEA EAX,[EBP + -0x74]
006601D6  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006601D9  8D 4D 90                  LEA ECX,[EBP + -0x70]
006601DC  56                        PUSH ESI
006601DD  51                        PUSH ECX
006601DE  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006601E1  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
006601E4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006601E9  E8 02 D6 0C 00            CALL 0x0072d7f0
006601EE  83 C4 08                  ADD ESP,0x8
006601F1  3B C6                     CMP EAX,ESI
006601F3  0F 85 E8 00 00 00         JNZ 0x006602e1
006601F9  6A 0A                     PUSH 0xa
006601FB  6A 06                     PUSH 0x6
006601FD  6A 01                     PUSH 0x1
006601FF  56                        PUSH ESI
00660200  E8 8B E0 04 00            CALL 0x006ae290
00660205  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00660208  8B F0                     MOV ESI,EAX
0066020A  6A 00                     PUSH 0x0
0066020C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0066020F  0F BF 41 06               MOVSX EAX,word ptr [ECX + 0x6]
00660213  99                        CDQ
00660214  2B C2                     SUB EAX,EDX
00660216  D1 F8                     SAR EAX,0x1
00660218  66 03 01                  ADD AX,word ptr [ECX]
0066021B  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
0066021F  0F BF 41 08               MOVSX EAX,word ptr [ECX + 0x8]
00660223  99                        CDQ
00660224  2B C2                     SUB EAX,EDX
00660226  D1 F8                     SAR EAX,0x1
00660228  66 03 41 02               ADD AX,word ptr [ECX + 0x2]
0066022C  66 89 45 F2               MOV word ptr [EBP + -0xe],AX
00660230  0F BF 41 0A               MOVSX EAX,word ptr [ECX + 0xa]
00660234  99                        CDQ
00660235  2B C2                     SUB EAX,EDX
00660237  8D 55 F4                  LEA EDX,[EBP + -0xc]
0066023A  D1 F8                     SAR EAX,0x1
0066023C  66 03 41 04               ADD AX,word ptr [ECX + 0x4]
00660240  52                        PUSH EDX
00660241  8D 4D F0                  LEA ECX,[EBP + -0x10]
00660244  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
00660248  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066024B  8D 45 F2                  LEA EAX,[EBP + -0xe]
0066024E  50                        PUSH EAX
0066024F  8B 45 F2                  MOV EAX,dword ptr [EBP + -0xe]
00660252  51                        PUSH ECX
00660253  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00660256  52                        PUSH EDX
00660257  50                        PUSH EAX
00660258  51                        PUSH ECX
00660259  E8 F6 4A DA FF            CALL 0x00404d54
0066025E  83 C4 1C                  ADD ESP,0x1c
00660261  8D 55 F0                  LEA EDX,[EBP + -0x10]
00660264  52                        PUSH EDX
00660265  56                        PUSH ESI
00660266  E8 55 DF 04 00            CALL 0x006ae1c0
0066026B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0066026E  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00660271  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
00660278  66 8B 42 7D               MOV AX,word ptr [EDX + 0x7d]
0066027C  66 3D FE FF               CMP AX,0xfffe
00660280  74 16                     JZ 0x00660298
00660282  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00660288  85 C9                     TEST ECX,ECX
0066028A  74 0C                     JZ 0x00660298
0066028C  50                        PUSH EAX
0066028D  8A 42 24                  MOV AL,byte ptr [EDX + 0x24]
00660290  50                        PUSH EAX
00660291  E8 63 5A DA FF            CALL 0x00405cf9
00660296  EB 02                     JMP 0x0066029a
LAB_00660298:
00660298  33 C0                     XOR EAX,EAX
LAB_0066029a:
0066029A  85 C0                     TEST EAX,EAX
0066029C  74 0F                     JZ 0x006602ad
0066029E  8B 10                     MOV EDX,dword ptr [EAX]
006602A0  8D 4D E8                  LEA ECX,[EBP + -0x18]
006602A3  51                        PUSH ECX
006602A4  6A 06                     PUSH 0x6
006602A6  8B C8                     MOV ECX,EAX
006602A8  FF 52 08                  CALL dword ptr [EDX + 0x8]
006602AB  EB 18                     JMP 0x006602c5
LAB_006602ad:
006602AD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006602B3  68 67 04 00 00            PUSH 0x467
006602B8  68 80 2B 7D 00            PUSH 0x7d2b80
006602BD  52                        PUSH EDX
006602BE  6A FF                     PUSH -0x1
006602C0  E8 7B 5B 04 00            CALL 0x006a5e40
LAB_006602c5:
006602C5  85 F6                     TEST ESI,ESI
006602C7  74 06                     JZ 0x006602cf
006602C9  56                        PUSH ESI
006602CA  E8 41 DE 04 00            CALL 0x006ae110
LAB_006602cf:
006602CF  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006602D2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006602D7  33 C0                     XOR EAX,EAX
006602D9  5F                        POP EDI
006602DA  5E                        POP ESI
006602DB  8B E5                     MOV ESP,EBP
006602DD  5D                        POP EBP
006602DE  C2 08 00                  RET 0x8
LAB_006602e1:
006602E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006602E4  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006602E7  3B C6                     CMP EAX,ESI
006602E9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006602EF  74 06                     JZ 0x006602f7
006602F1  50                        PUSH EAX
006602F2  E8 19 DE 04 00            CALL 0x006ae110
LAB_006602f7:
006602F7  83 C8 FF                  OR EAX,0xffffffff
006602FA  5F                        POP EDI
006602FB  5E                        POP ESI
006602FC  8B E5                     MOV ESP,EBP
006602FE  5D                        POP EBP
006602FF  C2 08 00                  RET 0x8
LAB_00660302:
00660302  B9 06 00 00 00            MOV ECX,0x6
00660307  33 C0                     XOR EAX,EAX
00660309  8D 7D D0                  LEA EDI,[EBP + -0x30]
0066030C  F3 AB                     STOSD.REP ES:EDI
0066030E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00660311  C7 45 D0 01 00 00 00      MOV dword ptr [EBP + -0x30],0x1
00660318  66 8B 08                  MOV CX,word ptr [EAX]
0066031B  66 89 4D DC               MOV word ptr [EBP + -0x24],CX
0066031F  66 8B 48 02               MOV CX,word ptr [EAX + 0x2]
00660323  66 89 4D DE               MOV word ptr [EBP + -0x22],CX
00660327  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
0066032B  66 89 4D E0               MOV word ptr [EBP + -0x20],CX
0066032F  66 8B 48 06               MOV CX,word ptr [EAX + 0x6]
00660333  66 89 4D E2               MOV word ptr [EBP + -0x1e],CX
00660337  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
0066033B  66 8B 40 0A               MOV AX,word ptr [EAX + 0xa]
0066033F  66 89 4D E4               MOV word ptr [EBP + -0x1c],CX
00660343  66 89 45 E6               MOV word ptr [EBP + -0x1a],AX
00660347  66 8B 42 7D               MOV AX,word ptr [EDX + 0x7d]
0066034B  66 3D FE FF               CMP AX,0xfffe
0066034F  74 16                     JZ 0x00660367
00660351  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00660357  3B CE                     CMP ECX,ESI
00660359  74 0C                     JZ 0x00660367
0066035B  8A 52 24                  MOV DL,byte ptr [EDX + 0x24]
0066035E  50                        PUSH EAX
0066035F  52                        PUSH EDX
00660360  E8 94 59 DA FF            CALL 0x00405cf9
00660365  EB 02                     JMP 0x00660369
LAB_00660367:
00660367  33 C0                     XOR EAX,EAX
LAB_00660369:
00660369  3B C6                     CMP EAX,ESI
0066036B  74 8A                     JZ 0x006602f7
0066036D  8B 10                     MOV EDX,dword ptr [EAX]
0066036F  8D 4D D0                  LEA ECX,[EBP + -0x30]
00660372  51                        PUSH ECX
00660373  6A 02                     PUSH 0x2
00660375  8B C8                     MOV ECX,EAX
00660377  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066037A  5F                        POP EDI
0066037B  33 C0                     XOR EAX,EAX
0066037D  5E                        POP ESI
0066037E  8B E5                     MOV ESP,EBP
00660380  5D                        POP EBP
00660381  C2 08 00                  RET 0x8
