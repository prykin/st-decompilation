FUN_006101b0:
006101B0  55                        PUSH EBP
006101B1  8B EC                     MOV EBP,ESP
006101B3  83 EC 64                  SUB ESP,0x64
006101B6  53                        PUSH EBX
006101B7  56                        PUSH ESI
006101B8  8B F1                     MOV ESI,ECX
006101BA  57                        PUSH EDI
006101BB  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
006101C2  8B 86 0C 02 00 00         MOV EAX,dword ptr [ESI + 0x20c]
006101C8  48                        DEC EAX
006101C9  83 F8 08                  CMP EAX,0x8
006101CC  0F 87 55 25 00 00         JA 0x00612727
switchD_006101d2::switchD:
006101D2  FF 24 85 34 27 61 00      JMP dword ptr [EAX*0x4 + 0x612734]
switchD_006101d2::caseD_1:
006101D9  33 C0                     XOR EAX,EAX
006101DB  BB 09 00 00 00            MOV EBX,0x9
006101E0  8A 86 14 02 00 00         MOV AL,byte ptr [ESI + 0x214]
006101E6  BF 01 00 00 00            MOV EDI,0x1
006101EB  48                        DEC EAX
006101EC  0F 84 93 03 00 00         JZ 0x00610585
006101F2  48                        DEC EAX
006101F3  0F 84 A0 01 00 00         JZ 0x00610399
006101F9  48                        DEC EAX
006101FA  0F 85 47 01 00 00         JNZ 0x00610347
00610200  0F BF 86 F3 01 00 00      MOVSX EAX,word ptr [ESI + 0x1f3]
00610207  0F BF 8E F1 01 00 00      MOVSX ECX,word ptr [ESI + 0x1f1]
0061020E  0F BF 96 EF 01 00 00      MOVSX EDX,word ptr [ESI + 0x1ef]
00610215  50                        PUSH EAX
00610216  51                        PUSH ECX
00610217  0F BF 86 ED 01 00 00      MOVSX EAX,word ptr [ESI + 0x1ed]
0061021E  0F BF 8E EB 01 00 00      MOVSX ECX,word ptr [ESI + 0x1eb]
00610225  52                        PUSH EDX
00610226  50                        PUSH EAX
00610227  0F BF 96 E9 01 00 00      MOVSX EDX,word ptr [ESI + 0x1e9]
0061022E  51                        PUSH ECX
0061022F  52                        PUSH EDX
00610230  E8 D8 CC 09 00            CALL 0x006acf0d
00610235  8B C8                     MOV ECX,EAX
00610237  83 C4 18                  ADD ESP,0x18
0061023A  85 C9                     TEST ECX,ECX
0061023C  0F 84 F8 00 00 00         JZ 0x0061033a
00610242  0F BF 86 EF 01 00 00      MOVSX EAX,word ptr [ESI + 0x1ef]
00610249  0F BF 96 E9 01 00 00      MOVSX EDX,word ptr [ESI + 0x1e9]
00610250  2B C2                     SUB EAX,EDX
00610252  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610255  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610258  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061025B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061025E  C1 E0 04                  SHL EAX,0x4
00610261  99                        CDQ
00610262  F7 F9                     IDIV ECX
00610264  89 86 7C 02 00 00         MOV dword ptr [ESI + 0x27c],EAX
0061026A  0F BF 86 F1 01 00 00      MOVSX EAX,word ptr [ESI + 0x1f1]
00610271  0F BF 96 EB 01 00 00      MOVSX EDX,word ptr [ESI + 0x1eb]
00610278  2B C2                     SUB EAX,EDX
0061027A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061027D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610280  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610283  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610286  C1 E0 04                  SHL EAX,0x4
00610289  99                        CDQ
0061028A  F7 F9                     IDIV ECX
0061028C  89 86 80 02 00 00         MOV dword ptr [ESI + 0x280],EAX
00610292  0F BF 86 F3 01 00 00      MOVSX EAX,word ptr [ESI + 0x1f3]
00610299  0F BF 96 ED 01 00 00      MOVSX EDX,word ptr [ESI + 0x1ed]
006102A0  2B C2                     SUB EAX,EDX
006102A2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006102A5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006102A8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006102AB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006102AE  C1 E0 04                  SHL EAX,0x4
006102B1  99                        CDQ
006102B2  F7 F9                     IDIV ECX
006102B4  89 86 84 02 00 00         MOV dword ptr [ESI + 0x284],EAX
006102BA  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006102BF  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
006102C5  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
006102CB  83 E8 00                  SUB EAX,0x0
006102CE  89 96 94 02 00 00         MOV dword ptr [ESI + 0x294],EDX
006102D4  89 8E 8C 02 00 00         MOV dword ptr [ESI + 0x28c],ECX
006102DA  74 48                     JZ 0x00610324
006102DC  48                        DEC EAX
006102DD  74 2F                     JZ 0x0061030e
006102DF  48                        DEC EAX
006102E0  74 16                     JZ 0x006102f8
006102E2  C7 86 88 02 00 00 1E 00 00 00  MOV dword ptr [ESI + 0x288],0x1e
006102EC  C7 86 0C 02 00 00 08 00 00 00  MOV dword ptr [ESI + 0x20c],0x8
006102F6  EB 4F                     JMP 0x00610347
LAB_006102f8:
006102F8  C7 86 88 02 00 00 07 00 00 00  MOV dword ptr [ESI + 0x288],0x7
00610302  C7 86 0C 02 00 00 08 00 00 00  MOV dword ptr [ESI + 0x20c],0x8
0061030C  EB 39                     JMP 0x00610347
LAB_0061030e:
0061030E  C7 86 88 02 00 00 35 00 00 00  MOV dword ptr [ESI + 0x288],0x35
00610318  C7 86 0C 02 00 00 08 00 00 00  MOV dword ptr [ESI + 0x20c],0x8
00610322  EB 23                     JMP 0x00610347
LAB_00610324:
00610324  C7 86 88 02 00 00 0A 00 00 00  MOV dword ptr [ESI + 0x288],0xa
0061032E  C7 86 0C 02 00 00 08 00 00 00  MOV dword ptr [ESI + 0x20c],0x8
00610338  EB 0D                     JMP 0x00610347
LAB_0061033a:
0061033A  8B CE                     MOV ECX,ESI
0061033C  E8 FC 42 DF FF            CALL 0x0040463d
LAB_00610341:
00610341  89 9E 0C 02 00 00         MOV dword ptr [ESI + 0x20c],EBX
LAB_00610347:
00610347  39 9E 0C 02 00 00         CMP dword ptr [ESI + 0x20c],EBX
0061034D  0F 84 D4 23 00 00         JZ 0x00612727
00610353  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
00610359  84 C0                     TEST AL,AL
0061035B  75 18                     JNZ 0x00610375
0061035D  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00610363  85 C9                     TEST ECX,ECX
00610365  74 0E                     JZ 0x00610375
00610367  6A 00                     PUSH 0x0
00610369  E8 14 26 DF FF            CALL 0x00402982
0061036E  C6 86 50 02 00 00 01      MOV byte ptr [ESI + 0x250],0x1
LAB_00610375:
00610375  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
0061037B  85 C0                     TEST EAX,EAX
0061037D  0F 85 A4 23 00 00         JNZ 0x00612727
00610383  68 77 04 00 00            PUSH 0x477
00610388  8B CE                     MOV ECX,ESI
0061038A  E8 79 59 DF FF            CALL 0x00405d08
0061038F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00610392  5F                        POP EDI
00610393  5E                        POP ESI
00610394  5B                        POP EBX
00610395  8B E5                     MOV ESP,EBP
00610397  5D                        POP EBP
00610398  C3                        RET
LAB_00610399:
00610399  6A 07                     PUSH 0x7
0061039B  8B CE                     MOV ECX,ESI
0061039D  E8 B2 26 DF FF            CALL 0x00402a54
006103A2  85 C0                     TEST EAX,EAX
006103A4  7E 94                     JLE 0x0061033a
006103A6  89 BE 56 02 00 00         MOV dword ptr [ESI + 0x256],EDI
006103AC  57                        PUSH EDI
006103AD  0F BF 86 CF 02 00 00      MOVSX EAX,word ptr [ESI + 0x2cf]
006103B4  0F BF 8E CD 02 00 00      MOVSX ECX,word ptr [ESI + 0x2cd]
006103BB  0F BF 96 CB 02 00 00      MOVSX EDX,word ptr [ESI + 0x2cb]
006103C2  50                        PUSH EAX
006103C3  51                        PUSH ECX
006103C4  0F BF 86 ED 01 00 00      MOVSX EAX,word ptr [ESI + 0x1ed]
006103CB  0F BF 8E EB 01 00 00      MOVSX ECX,word ptr [ESI + 0x1eb]
006103D2  52                        PUSH EDX
006103D3  50                        PUSH EAX
006103D4  0F BF 96 E9 01 00 00      MOVSX EDX,word ptr [ESI + 0x1e9]
006103DB  51                        PUSH ECX
006103DC  52                        PUSH EDX
006103DD  57                        PUSH EDI
006103DE  8B CE                     MOV ECX,ESI
006103E0  E8 3B 5A DF FF            CALL 0x00405e20
006103E5  8B 86 78 02 00 00         MOV EAX,dword ptr [ESI + 0x278]
006103EB  85 C0                     TEST EAX,EAX
006103ED  8B 86 D9 02 00 00         MOV EAX,dword ptr [ESI + 0x2d9]
006103F3  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
006103FA  0F 84 AB 00 00 00         JZ 0x006104ab
00610400  8B 96 DD 02 00 00         MOV EDX,dword ptr [ESI + 0x2dd]
00610406  2B C8                     SUB ECX,EAX
00610408  0F BF 86 72 02 00 00      MOVSX EAX,word ptr [ESI + 0x272]
0061040F  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
00610412  0F BF 11                  MOVSX EDX,word ptr [ECX]
00610415  2B C2                     SUB EAX,EDX
00610417  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061041A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061041D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610420  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610423  C1 E0 04                  SHL EAX,0x4
00610426  99                        CDQ
00610427  F7 79 08                  IDIV dword ptr [ECX + 0x8]
0061042A  89 86 7C 02 00 00         MOV dword ptr [ESI + 0x27c],EAX
00610430  8B 86 D9 02 00 00         MOV EAX,dword ptr [ESI + 0x2d9]
00610436  8B 96 DD 02 00 00         MOV EDX,dword ptr [ESI + 0x2dd]
0061043C  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00610443  2B C8                     SUB ECX,EAX
00610445  0F BF 86 74 02 00 00      MOVSX EAX,word ptr [ESI + 0x274]
0061044C  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
0061044F  0F BF 51 02               MOVSX EDX,word ptr [ECX + 0x2]
00610453  2B C2                     SUB EAX,EDX
00610455  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610458  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061045B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061045E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610461  C1 E0 04                  SHL EAX,0x4
00610464  99                        CDQ
00610465  F7 79 08                  IDIV dword ptr [ECX + 0x8]
00610468  89 86 80 02 00 00         MOV dword ptr [ESI + 0x280],EAX
0061046E  8B 86 D9 02 00 00         MOV EAX,dword ptr [ESI + 0x2d9]
00610474  8B 96 DD 02 00 00         MOV EDX,dword ptr [ESI + 0x2dd]
0061047A  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00610481  2B C8                     SUB ECX,EAX
00610483  0F BF 86 76 02 00 00      MOVSX EAX,word ptr [ESI + 0x276]
0061048A  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
0061048D  0F BF 51 04               MOVSX EDX,word ptr [ECX + 0x4]
00610491  2B C2                     SUB EAX,EDX
00610493  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610496  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610499  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061049C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061049F  C1 E0 04                  SHL EAX,0x4
006104A2  99                        CDQ
006104A3  F7 79 08                  IDIV dword ptr [ECX + 0x8]
006104A6  E9 C5 00 00 00            JMP 0x00610570
LAB_006104ab:
006104AB  8B 96 DD 02 00 00         MOV EDX,dword ptr [ESI + 0x2dd]
006104B1  2B C8                     SUB ECX,EAX
006104B3  0F BF 4C 8A 06            MOVSX ECX,word ptr [EDX + ECX*0x4 + 0x6]
006104B8  0F BF 04 CD 70 D5 7E 00   MOVSX EAX,word ptr [ECX*0x8 + 0x7ed570]
006104C0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006104C3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006104C6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006104C9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006104CC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006104CF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006104D2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006104D5  C1 E0 07                  SHL EAX,0x7
006104D8  99                        CDQ
006104D9  F7 3C 8D 74 FE 7C 00      IDIV dword ptr [ECX*0x4 + 0x7cfe74]
006104E0  89 86 7C 02 00 00         MOV dword ptr [ESI + 0x27c],EAX
006104E6  8B 86 D9 02 00 00         MOV EAX,dword ptr [ESI + 0x2d9]
006104EC  8B 96 DD 02 00 00         MOV EDX,dword ptr [ESI + 0x2dd]
006104F2  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
006104F9  2B C8                     SUB ECX,EAX
006104FB  0F BF 4C 8A 06            MOVSX ECX,word ptr [EDX + ECX*0x4 + 0x6]
00610500  0F BF 04 CD 72 D5 7E 00   MOVSX EAX,word ptr [ECX*0x8 + 0x7ed572]
00610508  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061050B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061050E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610511  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610514  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610517  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061051A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061051D  C1 E0 07                  SHL EAX,0x7
00610520  99                        CDQ
00610521  F7 3C 8D 74 FE 7C 00      IDIV dword ptr [ECX*0x4 + 0x7cfe74]
00610528  89 86 80 02 00 00         MOV dword ptr [ESI + 0x280],EAX
0061052E  8B 86 D9 02 00 00         MOV EAX,dword ptr [ESI + 0x2d9]
00610534  8B 96 DD 02 00 00         MOV EDX,dword ptr [ESI + 0x2dd]
0061053A  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00610541  2B C8                     SUB ECX,EAX
00610543  0F BF 4C 8A 06            MOVSX ECX,word ptr [EDX + ECX*0x4 + 0x6]
00610548  0F BF 04 CD 74 D5 7E 00   MOVSX EAX,word ptr [ECX*0x8 + 0x7ed574]
00610550  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610553  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610556  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610559  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061055C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061055F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610562  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610565  C1 E0 07                  SHL EAX,0x7
00610568  99                        CDQ
00610569  F7 3C 8D 74 FE 7C 00      IDIV dword ptr [ECX*0x4 + 0x7cfe74]
LAB_00610570:
00610570  89 86 84 02 00 00         MOV dword ptr [ESI + 0x284],EAX
00610576  C7 86 0C 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x20c],0x2
00610580  E9 C2 FD FF FF            JMP 0x00610347
LAB_00610585:
00610585  8B CE                     MOV ECX,ESI
00610587  E8 89 4A DF FF            CALL 0x00405015
0061058C  85 C0                     TEST EAX,EAX
0061058E  0F 84 AD FD FF FF         JZ 0x00610341
00610594  8B 86 DD 02 00 00         MOV EAX,dword ptr [ESI + 0x2dd]
0061059A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0061059D  85 C9                     TEST ECX,ECX
0061059F  0F 84 9C FD FF FF         JZ 0x00610341
006105A5  0F BF 86 EF 01 00 00      MOVSX EAX,word ptr [ESI + 0x1ef]
006105AC  0F BF 96 E9 01 00 00      MOVSX EDX,word ptr [ESI + 0x1e9]
006105B3  2B C2                     SUB EAX,EDX
006105B5  57                        PUSH EDI
006105B6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006105B9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006105BC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006105BF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006105C2  C1 E0 04                  SHL EAX,0x4
006105C5  99                        CDQ
006105C6  F7 F9                     IDIV ECX
006105C8  89 86 7C 02 00 00         MOV dword ptr [ESI + 0x27c],EAX
006105CE  0F BF 86 F1 01 00 00      MOVSX EAX,word ptr [ESI + 0x1f1]
006105D5  0F BF 8E EB 01 00 00      MOVSX ECX,word ptr [ESI + 0x1eb]
006105DC  2B C1                     SUB EAX,ECX
006105DE  8B 8E DD 02 00 00         MOV ECX,dword ptr [ESI + 0x2dd]
006105E4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006105E7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006105EA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006105ED  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006105F0  C1 E0 04                  SHL EAX,0x4
006105F3  99                        CDQ
006105F4  F7 79 08                  IDIV dword ptr [ECX + 0x8]
006105F7  89 86 80 02 00 00         MOV dword ptr [ESI + 0x280],EAX
006105FD  8B 8E DD 02 00 00         MOV ECX,dword ptr [ESI + 0x2dd]
00610603  0F BF 86 F3 01 00 00      MOVSX EAX,word ptr [ESI + 0x1f3]
0061060A  0F BF 96 ED 01 00 00      MOVSX EDX,word ptr [ESI + 0x1ed]
00610611  2B C2                     SUB EAX,EDX
00610613  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610616  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00610619  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061061C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061061F  C1 E0 04                  SHL EAX,0x4
00610622  99                        CDQ
00610623  F7 79 08                  IDIV dword ptr [ECX + 0x8]
00610626  89 86 84 02 00 00         MOV dword ptr [ESI + 0x284],EAX
0061062C  89 BE 56 02 00 00         MOV dword ptr [ESI + 0x256],EDI
00610632  0F BF 96 F3 01 00 00      MOVSX EDX,word ptr [ESI + 0x1f3]
00610639  0F BF 86 F1 01 00 00      MOVSX EAX,word ptr [ESI + 0x1f1]
00610640  0F BF 8E EF 01 00 00      MOVSX ECX,word ptr [ESI + 0x1ef]
00610647  52                        PUSH EDX
00610648  50                        PUSH EAX
00610649  0F BF 96 ED 01 00 00      MOVSX EDX,word ptr [ESI + 0x1ed]
00610650  0F BF 86 EB 01 00 00      MOVSX EAX,word ptr [ESI + 0x1eb]
00610657  51                        PUSH ECX
00610658  52                        PUSH EDX
00610659  0F BF 8E E9 01 00 00      MOVSX ECX,word ptr [ESI + 0x1e9]
00610660  50                        PUSH EAX
00610661  51                        PUSH ECX
00610662  6A 00                     PUSH 0x0
00610664  8B CE                     MOV ECX,ESI
00610666  E8 B5 57 DF FF            CALL 0x00405e20
0061066B  C7 86 0C 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x20c],0x2
00610675  E9 CD FC FF FF            JMP 0x00610347
switchD_006101d2::caseD_2:
0061067A  8D 55 EC                  LEA EDX,[EBP + -0x14]
0061067D  8D 45 F0                  LEA EAX,[EBP + -0x10]
00610680  52                        PUSH EDX
00610681  8D 4D F4                  LEA ECX,[EBP + -0xc]
00610684  50                        PUSH EAX
00610685  51                        PUSH ECX
00610686  8B CE                     MOV ECX,ESI
00610688  E8 E4 38 DF FF            CALL 0x00403f71
0061068D  85 C0                     TEST EAX,EAX
0061068F  0F 84 4C 1B 00 00         JZ 0x006121e1
00610695  66 8B 86 5C 02 00 00      MOV AX,word ptr [ESI + 0x25c]
0061069C  66 8B 96 5A 02 00 00      MOV DX,word ptr [ESI + 0x25a]
006106A3  66 8B 8E 5E 02 00 00      MOV CX,word ptr [ESI + 0x25e]
006106AA  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006106AD  66 89 86 62 02 00 00      MOV word ptr [ESI + 0x262],AX
006106B4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006106B7  66 89 96 60 02 00 00      MOV word ptr [ESI + 0x260],DX
006106BE  66 89 8E 64 02 00 00      MOV word ptr [ESI + 0x264],CX
006106C5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006106C8  66 89 86 5A 02 00 00      MOV word ptr [ESI + 0x25a],AX
006106CF  0F BF D0                  MOVSX EDX,AX
006106D2  66 85 C0                  TEST AX,AX
006106D5  66 89 BE 5C 02 00 00      MOV word ptr [ESI + 0x25c],DI
006106DC  66 89 8E 5E 02 00 00      MOV word ptr [ESI + 0x25e],CX
006106E3  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006106EA  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006106ED  B8 79 19 8C 02            MOV EAX,0x28c1979
006106F2  7C 10                     JL 0x00610704
006106F4  F7 EA                     IMUL EDX
006106F6  D1 FA                     SAR EDX,0x1
006106F8  8B C2                     MOV EAX,EDX
006106FA  C1 E8 1F                  SHR EAX,0x1f
006106FD  03 D0                     ADD EDX,EAX
006106FF  0F BF DA                  MOVSX EBX,DX
00610702  EB 0F                     JMP 0x00610713
LAB_00610704:
00610704  F7 EA                     IMUL EDX
00610706  D1 FA                     SAR EDX,0x1
00610708  8B C2                     MOV EAX,EDX
0061070A  C1 E8 1F                  SHR EAX,0x1f
0061070D  03 D0                     ADD EDX,EAX
0061070F  0F BF DA                  MOVSX EBX,DX
00610712  4B                        DEC EBX
LAB_00610713:
00610713  0F BF D7                  MOVSX EDX,DI
00610716  66 85 FF                  TEST DI,DI
00610719  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0061071C  B8 79 19 8C 02            MOV EAX,0x28c1979
00610721  7C 10                     JL 0x00610733
00610723  F7 EA                     IMUL EDX
00610725  D1 FA                     SAR EDX,0x1
00610727  8B C2                     MOV EAX,EDX
00610729  C1 E8 1F                  SHR EAX,0x1f
0061072C  03 D0                     ADD EDX,EAX
0061072E  0F BF FA                  MOVSX EDI,DX
00610731  EB 0F                     JMP 0x00610742
LAB_00610733:
00610733  F7 EA                     IMUL EDX
00610735  D1 FA                     SAR EDX,0x1
00610737  8B C2                     MOV EAX,EDX
00610739  C1 E8 1F                  SHR EAX,0x1f
0061073C  03 D0                     ADD EDX,EAX
0061073E  0F BF FA                  MOVSX EDI,DX
00610741  4F                        DEC EDI
LAB_00610742:
00610742  66 85 C9                  TEST CX,CX
00610745  0F BF C9                  MOVSX ECX,CX
00610748  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061074D  7C 11                     JL 0x00610760
0061074F  F7 E9                     IMUL ECX
00610751  C1 FA 06                  SAR EDX,0x6
00610754  8B C2                     MOV EAX,EDX
00610756  C1 E8 1F                  SHR EAX,0x1f
00610759  03 D0                     ADD EDX,EAX
0061075B  0F BF C2                  MOVSX EAX,DX
0061075E  EB 10                     JMP 0x00610770
LAB_00610760:
00610760  F7 E9                     IMUL ECX
00610762  C1 FA 06                  SAR EDX,0x6
00610765  8B C2                     MOV EAX,EDX
00610767  C1 E8 1F                  SHR EAX,0x1f
0061076A  03 D0                     ADD EDX,EAX
0061076C  0F BF C2                  MOVSX EAX,DX
0061076F  48                        DEC EAX
LAB_00610770:
00610770  0F BF 96 15 02 00 00      MOVSX EDX,word ptr [ESI + 0x215]
00610777  3B D3                     CMP EDX,EBX
00610779  75 1A                     JNZ 0x00610795
0061077B  0F BF 96 17 02 00 00      MOVSX EDX,word ptr [ESI + 0x217]
00610782  3B D7                     CMP EDX,EDI
00610784  75 0F                     JNZ 0x00610795
00610786  0F BF 96 19 02 00 00      MOVSX EDX,word ptr [ESI + 0x219]
0061078D  3B D0                     CMP EDX,EAX
0061078F  0F 84 F1 00 00 00         JZ 0x00610886
LAB_00610795:
00610795  33 D2                     XOR EDX,EDX
00610797  83 BE F7 01 00 00 02      CMP dword ptr [ESI + 0x1f7],0x2
0061079E  0F 94 C2                  SETZ DL
006107A1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006107A4  8D 14 9B                  LEA EDX,[EBX + EBX*0x4]
006107A7  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
006107AA  8D 54 D3 64               LEA EDX,[EBX + EDX*0x8 + 0x64]
006107AE  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
006107B1  0F BF D2                  MOVSX EDX,DX
006107B4  2B DA                     SUB EBX,EDX
006107B6  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
006107B9  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
006107BC  8D 54 D7 64               LEA EDX,[EDI + EDX*0x8 + 0x64]
006107C0  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006107C3  0F BF D2                  MOVSX EDX,DX
006107C6  2B FA                     SUB EDI,EDX
006107C8  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006107CB  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
006107CE  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
006107D1  2B C8                     SUB ECX,EAX
006107D3  8B C1                     MOV EAX,ECX
006107D5  0F AF C1                  IMUL EAX,ECX
006107D8  99                        CDQ
006107D9  83 E2 03                  AND EDX,0x3
006107DC  8B CF                     MOV ECX,EDI
006107DE  03 C2                     ADD EAX,EDX
006107E0  0F AF CF                  IMUL ECX,EDI
006107E3  8B D3                     MOV EDX,EBX
006107E5  0F AF D3                  IMUL EDX,EBX
006107E8  C1 F8 02                  SAR EAX,0x2
006107EB  03 C1                     ADD EAX,ECX
006107ED  03 C2                     ADD EAX,EDX
006107EF  3D 74 27 00 00            CMP EAX,0x2774
006107F4  0F 8D 8C 00 00 00         JGE 0x00610886
006107FA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006107FD  66 8B 8E FF 01 00 00      MOV CX,word ptr [ESI + 0x1ff]
00610804  8B 96 FB 01 00 00         MOV EDX,dword ptr [ESI + 0x1fb]
0061080A  6A 00                     PUSH 0x0
0061080C  50                        PUSH EAX
0061080D  8B 86 1B 02 00 00         MOV EAX,dword ptr [ESI + 0x21b]
00610813  68 B0 00 00 00            PUSH 0xb0
00610818  51                        PUSH ECX
00610819  8B 8E D9 01 00 00         MOV ECX,dword ptr [ESI + 0x1d9]
0061081F  52                        PUSH EDX
00610820  0F BF 96 64 02 00 00      MOVSX EDX,word ptr [ESI + 0x264]
00610827  50                        PUSH EAX
00610828  51                        PUSH ECX
00610829  0F BF 86 62 02 00 00      MOVSX EAX,word ptr [ESI + 0x262]
00610830  0F BF 8E 60 02 00 00      MOVSX ECX,word ptr [ESI + 0x260]
00610837  52                        PUSH EDX
00610838  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0061083B  50                        PUSH EAX
0061083C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0061083F  51                        PUSH ECX
00610840  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00610843  52                        PUSH EDX
00610844  50                        PUSH EAX
00610845  51                        PUSH ECX
00610846  8D 8E EB 02 00 00         LEA ECX,[ESI + 0x2eb]
0061084C  E8 C5 3C DF FF            CALL 0x00404516
00610851  8B F8                     MOV EDI,EAX
00610853  85 FF                     TEST EDI,EDI
00610855  7E 32                     JLE 0x00610889
00610857  83 FF 05                  CMP EDI,0x5
0061085A  75 13                     JNZ 0x0061086f
0061085C  8B CE                     MOV ECX,ESI
0061085E  E8 DA 3D DF FF            CALL 0x0040463d
00610863  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
0061086D  EB 1A                     JMP 0x00610889
LAB_0061086f:
0061086F  8B 96 0C 02 00 00         MOV EDX,dword ptr [ESI + 0x20c]
00610875  8B CE                     MOV ECX,ESI
00610877  52                        PUSH EDX
00610878  57                        PUSH EDI
00610879  E8 36 26 DF FF            CALL 0x00402eb4
0061087E  89 86 0C 02 00 00         MOV dword ptr [ESI + 0x20c],EAX
00610884  EB 03                     JMP 0x00610889
LAB_00610886:
00610886  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00610889:
00610889  8B 86 0C 02 00 00         MOV EAX,dword ptr [ESI + 0x20c]
0061088F  33 DB                     XOR EBX,EBX
00610891  83 F8 02                  CMP EAX,0x2
00610894  0F 85 6E 03 00 00         JNZ 0x00610c08
0061089A  0F BF 86 5A 02 00 00      MOVSX EAX,word ptr [ESI + 0x25a]
006108A1  0F BF 8E 5C 02 00 00      MOVSX ECX,word ptr [ESI + 0x25c]
006108A8  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
006108AF  3B FB                     CMP EDI,EBX
006108B1  89 86 2B 02 00 00         MOV dword ptr [ESI + 0x22b],EAX
006108B7  89 8E 2F 02 00 00         MOV dword ptr [ESI + 0x22f],ECX
006108BD  89 96 33 02 00 00         MOV dword ptr [ESI + 0x233],EDX
006108C3  75 4C                     JNZ 0x00610911
006108C5  8B BE F7 01 00 00         MOV EDI,dword ptr [ESI + 0x1f7]
006108CB  3B FB                     CMP EDI,EBX
006108CD  74 05                     JZ 0x006108d4
006108CF  83 FF 02                  CMP EDI,0x2
006108D2  75 3D                     JNZ 0x00610911
LAB_006108d4:
006108D4  8B BE 48 02 00 00         MOV EDI,dword ptr [ESI + 0x248]
006108DA  3B FB                     CMP EDI,EBX
006108DC  7D 10                     JGE 0x006108ee
006108DE  53                        PUSH EBX
006108DF  53                        PUSH EBX
006108E0  6A FF                     PUSH -0x1
006108E2  53                        PUSH EBX
006108E3  53                        PUSH EBX
006108E4  53                        PUSH EBX
006108E5  53                        PUSH EBX
006108E6  53                        PUSH EBX
006108E7  53                        PUSH EBX
006108E8  52                        PUSH EDX
006108E9  51                        PUSH ECX
006108EA  50                        PUSH EAX
006108EB  53                        PUSH EBX
006108EC  EB 14                     JMP 0x00610902
LAB_006108ee:
006108EE  83 FF 05                  CMP EDI,0x5
006108F1  7D 1E                     JGE 0x00610911
006108F3  53                        PUSH EBX
006108F4  53                        PUSH EBX
006108F5  6A FF                     PUSH -0x1
006108F7  53                        PUSH EBX
006108F8  53                        PUSH EBX
006108F9  53                        PUSH EBX
006108FA  53                        PUSH EBX
006108FB  53                        PUSH EBX
006108FC  53                        PUSH EBX
006108FD  52                        PUSH EDX
006108FE  51                        PUSH ECX
006108FF  50                        PUSH EAX
00610900  6A 05                     PUSH 0x5
LAB_00610902:
00610902  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00610908  6A 01                     PUSH 0x1
0061090A  6A 01                     PUSH 0x1
0061090C  E8 22 0B DF FF            CALL 0x00401433
LAB_00610911:
00610911  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
00610917  84 C0                     TEST AL,AL
00610919  0F 84 08 1E 00 00         JZ 0x00612727
0061091F  39 9E 52 02 00 00         CMP dword ptr [ESI + 0x252],EBX
00610925  0F 84 FC 1D 00 00         JZ 0x00612727
0061092B  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
00610931  2B C3                     SUB EAX,EBX
00610933  74 34                     JZ 0x00610969
00610935  48                        DEC EAX
00610936  74 0E                     JZ 0x00610946
00610938  48                        DEC EAX
00610939  74 2E                     JZ 0x00610969
0061093B  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
00610941  E9 42 01 00 00            JMP 0x00610a88
LAB_00610946:
00610946  8B 8E 37 02 00 00         MOV ECX,dword ptr [ESI + 0x237]
0061094C  41                        INC ECX
0061094D  8B C1                     MOV EAX,ECX
0061094F  89 8E 37 02 00 00         MOV dword ptr [ESI + 0x237],ECX
00610955  83 F8 0A                  CMP EAX,0xa
00610958  0F 8C 2A 01 00 00         JL 0x00610a88
0061095E  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
00610964  E9 1F 01 00 00            JMP 0x00610a88
LAB_00610969:
00610969  0F BF 86 60 02 00 00      MOVSX EAX,word ptr [ESI + 0x260]
00610970  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00610973  6A 01                     PUSH 0x1
00610975  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00610978  0F BF 8E 62 02 00 00      MOVSX ECX,word ptr [ESI + 0x262]
0061097F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610985  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00610988  53                        PUSH EBX
00610989  0F BF 96 64 02 00 00      MOVSX EDX,word ptr [ESI + 0x264]
00610990  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610996  53                        PUSH EBX
00610997  53                        PUSH EBX
00610998  53                        PUSH EBX
00610999  53                        PUSH EBX
0061099A  D9 5D C8                  FSTP float ptr [EBP + -0x38]
0061099D  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006109A0  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006109A3  8D 45 C8                  LEA EAX,[EBP + -0x38]
006109A6  53                        PUSH EBX
006109A7  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006109AA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006109B0  50                        PUSH EAX
006109B1  51                        PUSH ECX
006109B2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006109B8  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006109BE  D9 5D CC                  FSTP float ptr [EBP + -0x34]
006109C1  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006109C4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006109CA  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006109D0  D9 5D D0                  FSTP float ptr [EBP + -0x30]
006109D3  E8 F8 1B 0D 00            CALL 0x006e25d0
006109D8  0F BF 96 5A 02 00 00      MOVSX EDX,word ptr [ESI + 0x25a]
006109DF  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006109E2  6A 01                     PUSH 0x1
006109E4  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006109E7  0F BF 86 5C 02 00 00      MOVSX EAX,word ptr [ESI + 0x25c]
006109EE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006109F4  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006109F7  53                        PUSH EBX
006109F8  0F BF 8E 5E 02 00 00      MOVSX ECX,word ptr [ESI + 0x25e]
006109FF  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610A05  53                        PUSH EBX
00610A06  53                        PUSH EBX
00610A07  53                        PUSH EBX
00610A08  53                        PUSH EBX
00610A09  D9 5D BC                  FSTP float ptr [EBP + -0x44]
00610A0C  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00610A0F  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00610A12  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00610A18  8D 55 BC                  LEA EDX,[EBP + -0x44]
00610A1B  53                        PUSH EBX
00610A1C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610A22  8D 45 AC                  LEA EAX,[EBP + -0x54]
00610A25  52                        PUSH EDX
00610A26  50                        PUSH EAX
00610A27  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610A2D  D9 5D C0                  FSTP float ptr [EBP + -0x40]
00610A30  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00610A33  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610A39  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610A3F  D9 5D C4                  FSTP float ptr [EBP + -0x3c]
00610A42  E8 89 1B 0D 00            CALL 0x006e25d0
00610A47  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00610A4A  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00610A4D  8B 16                     MOV EDX,dword ptr [ESI]
00610A4F  C1 F8 10                  SAR EAX,0x10
00610A52  C1 F9 10                  SAR ECX,0x10
00610A55  50                        PUSH EAX
00610A56  51                        PUSH ECX
00610A57  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00610A5A  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00610A5D  C1 F8 10                  SAR EAX,0x10
00610A60  C1 F9 10                  SAR ECX,0x10
00610A63  50                        PUSH EAX
00610A64  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
00610A67  51                        PUSH ECX
00610A68  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00610A6B  C1 F8 10                  SAR EAX,0x10
00610A6E  C1 F9 10                  SAR ECX,0x10
00610A71  50                        PUSH EAX
00610A72  51                        PUSH ECX
00610A73  8B CE                     MOV ECX,ESI
00610A75  FF 52 14                  CALL dword ptr [EDX + 0x14]
00610A78  0F BF D0                  MOVSX EDX,AX
00610A7B  8B 04 95 38 21 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d2138]
00610A82  89 86 37 02 00 00         MOV dword ptr [ESI + 0x237],EAX
LAB_00610a88:
00610A88  8B 8E 37 02 00 00         MOV ECX,dword ptr [ESI + 0x237]
00610A8E  51                        PUSH ECX
00610A8F  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00610A95  6A 0D                     PUSH 0xd
00610A97  E8 C8 05 DF FF            CALL 0x00401064
00610A9C  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00610AA2  6A 0D                     PUSH 0xd
00610AA4  E8 13 26 DF FF            CALL 0x004030bc
00610AA9  DB 86 33 02 00 00         FILD dword ptr [ESI + 0x233]
00610AAF  51                        PUSH ECX
00610AB0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610AB6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610ABC  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00610AC2  D9 1C 24                  FSTP float ptr [ESP]
00610AC5  DB 86 2F 02 00 00         FILD dword ptr [ESI + 0x22f]
00610ACB  51                        PUSH ECX
00610ACC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610AD2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610AD8  D9 1C 24                  FSTP float ptr [ESP]
00610ADB  DB 86 2B 02 00 00         FILD dword ptr [ESI + 0x22b]
00610AE1  51                        PUSH ECX
00610AE2  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00610AE8  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610AEE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610AF4  D9 1C 24                  FSTP float ptr [ESP]
00610AF7  E8 DD 3A DF FF            CALL 0x004045d9
00610AFC  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00610B02  3B FB                     CMP EDI,EBX
00610B04  0F 84 E2 0A 00 00         JZ 0x006115ec
00610B0A  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
00610B10  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00610B15  85 C9                     TEST ECX,ECX
00610B17  7C 14                     JL 0x00610b2d
00610B19  F7 E9                     IMUL ECX
00610B1B  C1 FA 06                  SAR EDX,0x6
00610B1E  8B C2                     MOV EAX,EDX
00610B20  C1 E8 1F                  SHR EAX,0x1f
00610B23  03 D0                     ADD EDX,EAX
00610B25  0F BF CA                  MOVSX ECX,DX
00610B28  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00610B2B  EB 13                     JMP 0x00610b40
LAB_00610b2d:
00610B2D  F7 E9                     IMUL ECX
00610B2F  C1 FA 06                  SAR EDX,0x6
00610B32  8B C2                     MOV EAX,EDX
00610B34  C1 E8 1F                  SHR EAX,0x1f
00610B37  03 D0                     ADD EDX,EAX
00610B39  0F BF C2                  MOVSX EAX,DX
00610B3C  48                        DEC EAX
00610B3D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00610b40:
00610B40  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
00610B46  B8 79 19 8C 02            MOV EAX,0x28c1979
00610B4B  85 C9                     TEST ECX,ECX
00610B4D  7C 10                     JL 0x00610b5f
00610B4F  F7 E9                     IMUL ECX
00610B51  D1 FA                     SAR EDX,0x1
00610B53  8B CA                     MOV ECX,EDX
00610B55  C1 E9 1F                  SHR ECX,0x1f
00610B58  03 D1                     ADD EDX,ECX
00610B5A  0F BF DA                  MOVSX EBX,DX
00610B5D  EB 0F                     JMP 0x00610b6e
LAB_00610b5f:
00610B5F  F7 E9                     IMUL ECX
00610B61  D1 FA                     SAR EDX,0x1
00610B63  8B C2                     MOV EAX,EDX
00610B65  C1 E8 1F                  SHR EAX,0x1f
00610B68  03 D0                     ADD EDX,EAX
00610B6A  0F BF DA                  MOVSX EBX,DX
00610B6D  4B                        DEC EBX
LAB_00610b6e:
00610B6E  8B 8E 2B 02 00 00         MOV ECX,dword ptr [ESI + 0x22b]
00610B74  B8 79 19 8C 02            MOV EAX,0x28c1979
00610B79  85 C9                     TEST ECX,ECX
00610B7B  7C 10                     JL 0x00610b8d
00610B7D  F7 E9                     IMUL ECX
00610B7F  D1 FA                     SAR EDX,0x1
00610B81  8B CA                     MOV ECX,EDX
00610B83  C1 E9 1F                  SHR ECX,0x1f
00610B86  03 D1                     ADD EDX,ECX
00610B88  0F BF C2                  MOVSX EAX,DX
00610B8B  EB 0F                     JMP 0x00610b9c
LAB_00610b8d:
00610B8D  F7 E9                     IMUL ECX
00610B8F  D1 FA                     SAR EDX,0x1
00610B91  8B C2                     MOV EAX,EDX
00610B93  C1 E8 1F                  SHR EAX,0x1f
00610B96  03 D0                     ADD EDX,EAX
00610B98  0F BF C2                  MOVSX EAX,DX
00610B9B  48                        DEC EAX
LAB_00610b9c:
00610B9C  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00610BA3  0F 84 66 10 00 00         JZ 0x00611c0f
00610BA9  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
00610BAF  85 C9                     TEST ECX,ECX
00610BB1  0F 84 58 10 00 00         JZ 0x00611c0f
00610BB7  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00610BBA  8D 55 E0                  LEA EDX,[EBP + -0x20]
00610BBD  51                        PUSH ECX
00610BBE  52                        PUSH EDX
00610BBF  53                        PUSH EBX
00610BC0  50                        PUSH EAX
00610BC1  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00610BC7  8B CF                     MOV ECX,EDI
00610BC9  50                        PUSH EAX
00610BCA  E8 84 33 DF FF            CALL 0x00403f53
00610BCF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00610BD2  85 C0                     TEST EAX,EAX
00610BD4  0F 8C 35 10 00 00         JL 0x00611c0f
00610BDA  83 F8 05                  CMP EAX,0x5
00610BDD  0F 8D 2C 10 00 00         JGE 0x00611c0f
00610BE3  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00610BE6  85 D2                     TEST EDX,EDX
00610BE8  0F 8C 21 10 00 00         JL 0x00611c0f
00610BEE  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00610BF1  3B D1                     CMP EDX,ECX
00610BF3  0F 8D 16 10 00 00         JGE 0x00611c0f
00610BF9  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
00610C00  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00610C03  E9 31 04 00 00            JMP 0x00611039
LAB_00610c08:
00610C08  83 F8 04                  CMP EAX,0x4
00610C0B  0F 85 16 1B 00 00         JNZ 0x00612727
00610C11  39 9E 48 02 00 00         CMP dword ptr [ESI + 0x248],EBX
00610C17  0F 8C 88 00 00 00         JL 0x00610ca5
00610C1D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00610C23  8B 96 4C 02 00 00         MOV EDX,dword ptr [ESI + 0x24c]
00610C29  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00610C2F  2B C2                     SUB EAX,EDX
00610C31  C1 E8 02                  SHR EAX,0x2
00610C34  89 86 48 02 00 00         MOV dword ptr [ESI + 0x248],EAX
00610C3A  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
00610C40  0F BF 4A 23               MOVSX ECX,word ptr [EDX + 0x23]
00610C44  3B C1                     CMP EAX,ECX
00610C46  7C 0C                     JL 0x00610c54
00610C48  49                        DEC ECX
00610C49  89 8E 48 02 00 00         MOV dword ptr [ESI + 0x248],ECX
00610C4F  E9 8D 15 00 00            JMP 0x006121e1
LAB_00610c54:
00610C54  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00610C59  F6 80 E4 00 00 00 01      TEST byte ptr [EAX + 0xe4],0x1
00610C60  75 6E                     JNZ 0x00610cd0
00610C62  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
00610C68  B8 05 00 00 00            MOV EAX,0x5
00610C6D  83 C2 FD                  ADD EDX,-0x3
00610C70  8B CA                     MOV ECX,EDX
00610C72  89 96 88 02 00 00         MOV dword ptr [ESI + 0x288],EDX
00610C78  3B C8                     CMP ECX,EAX
00610C7A  7D 06                     JGE 0x00610c82
00610C7C  89 86 88 02 00 00         MOV dword ptr [ESI + 0x288],EAX
LAB_00610c82:
00610C82  8B 86 1B 02 00 00         MOV EAX,dword ptr [ESI + 0x21b]
00610C88  3B C3                     CMP EAX,EBX
00610C8A  7E 09                     JLE 0x00610c95
00610C8C  83 C0 EE                  ADD EAX,-0x12
00610C8F  89 86 1B 02 00 00         MOV dword ptr [ESI + 0x21b],EAX
LAB_00610c95:
00610C95  39 9E 1B 02 00 00         CMP dword ptr [ESI + 0x21b],EBX
00610C9B  7D 33                     JGE 0x00610cd0
00610C9D  89 9E 1B 02 00 00         MOV dword ptr [ESI + 0x21b],EBX
00610CA3  EB 2B                     JMP 0x00610cd0
LAB_00610ca5:
00610CA5  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00610CAB  8B 8E 94 02 00 00         MOV ECX,dword ptr [ESI + 0x294]
00610CB1  3B 8A E4 00 00 00         CMP ECX,dword ptr [EDX + 0xe4]
00610CB7  73 17                     JNC 0x00610cd0
00610CB9  89 9E 48 02 00 00         MOV dword ptr [ESI + 0x248],EBX
00610CBF  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00610CC4  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00610CCA  89 8E 4C 02 00 00         MOV dword ptr [ESI + 0x24c],ECX
LAB_00610cd0:
00610CD0  0F BF 86 5A 02 00 00      MOVSX EAX,word ptr [ESI + 0x25a]
00610CD7  0F BF 8E 5C 02 00 00      MOVSX ECX,word ptr [ESI + 0x25c]
00610CDE  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
00610CE5  3B FB                     CMP EDI,EBX
00610CE7  89 86 2B 02 00 00         MOV dword ptr [ESI + 0x22b],EAX
00610CED  89 8E 2F 02 00 00         MOV dword ptr [ESI + 0x22f],ECX
00610CF3  89 96 33 02 00 00         MOV dword ptr [ESI + 0x233],EDX
00610CF9  75 4C                     JNZ 0x00610d47
00610CFB  8B BE F7 01 00 00         MOV EDI,dword ptr [ESI + 0x1f7]
00610D01  3B FB                     CMP EDI,EBX
00610D03  74 05                     JZ 0x00610d0a
00610D05  83 FF 02                  CMP EDI,0x2
00610D08  75 3D                     JNZ 0x00610d47
LAB_00610d0a:
00610D0A  8B BE 48 02 00 00         MOV EDI,dword ptr [ESI + 0x248]
00610D10  3B FB                     CMP EDI,EBX
00610D12  7D 10                     JGE 0x00610d24
00610D14  53                        PUSH EBX
00610D15  53                        PUSH EBX
00610D16  6A FF                     PUSH -0x1
00610D18  53                        PUSH EBX
00610D19  53                        PUSH EBX
00610D1A  53                        PUSH EBX
00610D1B  53                        PUSH EBX
00610D1C  53                        PUSH EBX
00610D1D  53                        PUSH EBX
00610D1E  52                        PUSH EDX
00610D1F  51                        PUSH ECX
00610D20  50                        PUSH EAX
00610D21  53                        PUSH EBX
00610D22  EB 14                     JMP 0x00610d38
LAB_00610d24:
00610D24  83 FF 05                  CMP EDI,0x5
00610D27  7D 1E                     JGE 0x00610d47
00610D29  53                        PUSH EBX
00610D2A  53                        PUSH EBX
00610D2B  6A FF                     PUSH -0x1
00610D2D  53                        PUSH EBX
00610D2E  53                        PUSH EBX
00610D2F  53                        PUSH EBX
00610D30  53                        PUSH EBX
00610D31  53                        PUSH EBX
00610D32  53                        PUSH EBX
00610D33  52                        PUSH EDX
00610D34  51                        PUSH ECX
00610D35  50                        PUSH EAX
00610D36  6A 05                     PUSH 0x5
LAB_00610d38:
00610D38  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00610D3E  6A 01                     PUSH 0x1
00610D40  6A 01                     PUSH 0x1
00610D42  E8 EC 06 DF FF            CALL 0x00401433
LAB_00610d47:
00610D47  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
00610D4D  84 C0                     TEST AL,AL
00610D4F  0F 84 D2 19 00 00         JZ 0x00612727
00610D55  39 9E 52 02 00 00         CMP dword ptr [ESI + 0x252],EBX
00610D5B  0F 84 C6 19 00 00         JZ 0x00612727
00610D61  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
00610D67  2B C3                     SUB EAX,EBX
00610D69  74 34                     JZ 0x00610d9f
00610D6B  48                        DEC EAX
00610D6C  74 0E                     JZ 0x00610d7c
00610D6E  48                        DEC EAX
00610D6F  74 2E                     JZ 0x00610d9f
00610D71  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
00610D77  E9 42 01 00 00            JMP 0x00610ebe
LAB_00610d7c:
00610D7C  8B 8E 37 02 00 00         MOV ECX,dword ptr [ESI + 0x237]
00610D82  41                        INC ECX
00610D83  8B C1                     MOV EAX,ECX
00610D85  89 8E 37 02 00 00         MOV dword ptr [ESI + 0x237],ECX
00610D8B  83 F8 0A                  CMP EAX,0xa
00610D8E  0F 8C 2A 01 00 00         JL 0x00610ebe
00610D94  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
00610D9A  E9 1F 01 00 00            JMP 0x00610ebe
LAB_00610d9f:
00610D9F  0F BF 96 60 02 00 00      MOVSX EDX,word ptr [ESI + 0x260]
00610DA6  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00610DA9  6A 01                     PUSH 0x1
00610DAB  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00610DAE  0F BF 86 62 02 00 00      MOVSX EAX,word ptr [ESI + 0x262]
00610DB5  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610DBB  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00610DBE  53                        PUSH EBX
00610DBF  0F BF 8E 64 02 00 00      MOVSX ECX,word ptr [ESI + 0x264]
00610DC6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610DCC  53                        PUSH EBX
00610DCD  53                        PUSH EBX
00610DCE  53                        PUSH EBX
00610DCF  53                        PUSH EBX
00610DD0  D9 5D BC                  FSTP float ptr [EBP + -0x44]
00610DD3  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00610DD6  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00610DD9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00610DDF  8D 55 BC                  LEA EDX,[EBP + -0x44]
00610DE2  53                        PUSH EBX
00610DE3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610DE9  8D 45 AC                  LEA EAX,[EBP + -0x54]
00610DEC  52                        PUSH EDX
00610DED  50                        PUSH EAX
00610DEE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610DF4  D9 5D C0                  FSTP float ptr [EBP + -0x40]
00610DF7  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00610DFA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610E00  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610E06  D9 5D C4                  FSTP float ptr [EBP + -0x3c]
00610E09  E8 C2 17 0D 00            CALL 0x006e25d0
00610E0E  0F BF 8E 5A 02 00 00      MOVSX ECX,word ptr [ESI + 0x25a]
00610E15  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00610E18  6A 01                     PUSH 0x1
00610E1A  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00610E1D  0F BF 96 5C 02 00 00      MOVSX EDX,word ptr [ESI + 0x25c]
00610E24  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610E2A  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00610E2D  53                        PUSH EBX
00610E2E  0F BF 86 5E 02 00 00      MOVSX EAX,word ptr [ESI + 0x25e]
00610E35  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610E3B  53                        PUSH EBX
00610E3C  53                        PUSH EBX
00610E3D  53                        PUSH EBX
00610E3E  53                        PUSH EBX
00610E3F  D9 5D C8                  FSTP float ptr [EBP + -0x38]
00610E42  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00610E45  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00610E48  8D 4D C8                  LEA ECX,[EBP + -0x38]
00610E4B  53                        PUSH EBX
00610E4C  8D 55 9C                  LEA EDX,[EBP + -0x64]
00610E4F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610E55  51                        PUSH ECX
00610E56  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00610E5C  52                        PUSH EDX
00610E5D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610E63  D9 5D CC                  FSTP float ptr [EBP + -0x34]
00610E66  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00610E69  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610E6F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610E75  D9 5D D0                  FSTP float ptr [EBP + -0x30]
00610E78  E8 53 17 0D 00            CALL 0x006e25d0
00610E7D  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00610E80  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00610E83  8B 06                     MOV EAX,dword ptr [ESI]
00610E85  C1 F9 10                  SAR ECX,0x10
00610E88  C1 FA 10                  SAR EDX,0x10
00610E8B  51                        PUSH ECX
00610E8C  52                        PUSH EDX
00610E8D  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00610E90  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00610E93  C1 F9 10                  SAR ECX,0x10
00610E96  C1 FA 10                  SAR EDX,0x10
00610E99  51                        PUSH ECX
00610E9A  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00610E9D  52                        PUSH EDX
00610E9E  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00610EA1  C1 F9 10                  SAR ECX,0x10
00610EA4  C1 FA 10                  SAR EDX,0x10
00610EA7  51                        PUSH ECX
00610EA8  52                        PUSH EDX
00610EA9  8B CE                     MOV ECX,ESI
00610EAB  FF 50 14                  CALL dword ptr [EAX + 0x14]
00610EAE  0F BF C0                  MOVSX EAX,AX
00610EB1  8B 0C 85 38 21 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d2138]
00610EB8  89 8E 37 02 00 00         MOV dword ptr [ESI + 0x237],ECX
LAB_00610ebe:
00610EBE  8B 96 37 02 00 00         MOV EDX,dword ptr [ESI + 0x237]
00610EC4  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00610ECA  52                        PUSH EDX
00610ECB  6A 0D                     PUSH 0xd
00610ECD  E8 92 01 DF FF            CALL 0x00401064
00610ED2  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00610ED8  6A 0D                     PUSH 0xd
00610EDA  E8 DD 21 DF FF            CALL 0x004030bc
00610EDF  DB 86 33 02 00 00         FILD dword ptr [ESI + 0x233]
00610EE5  51                        PUSH ECX
00610EE6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610EEC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610EF2  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00610EF8  D9 1C 24                  FSTP float ptr [ESP]
00610EFB  DB 86 2F 02 00 00         FILD dword ptr [ESI + 0x22f]
00610F01  51                        PUSH ECX
00610F02  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610F08  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610F0E  D9 1C 24                  FSTP float ptr [ESP]
00610F11  DB 86 2B 02 00 00         FILD dword ptr [ESI + 0x22b]
00610F17  51                        PUSH ECX
00610F18  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00610F1E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00610F24  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00610F2A  D9 1C 24                  FSTP float ptr [ESP]
00610F2D  E8 A7 36 DF FF            CALL 0x004045d9
00610F32  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00610F38  3B FB                     CMP EDI,EBX
00610F3A  0F 84 AC 06 00 00         JZ 0x006115ec
00610F40  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
00610F46  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00610F4B  85 C9                     TEST ECX,ECX
00610F4D  7C 14                     JL 0x00610f63
00610F4F  F7 E9                     IMUL ECX
00610F51  C1 FA 06                  SAR EDX,0x6
00610F54  8B C2                     MOV EAX,EDX
00610F56  C1 E8 1F                  SHR EAX,0x1f
00610F59  03 D0                     ADD EDX,EAX
00610F5B  0F BF CA                  MOVSX ECX,DX
00610F5E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00610F61  EB 13                     JMP 0x00610f76
LAB_00610f63:
00610F63  F7 E9                     IMUL ECX
00610F65  C1 FA 06                  SAR EDX,0x6
00610F68  8B C2                     MOV EAX,EDX
00610F6A  C1 E8 1F                  SHR EAX,0x1f
00610F6D  03 D0                     ADD EDX,EAX
00610F6F  0F BF C2                  MOVSX EAX,DX
00610F72  48                        DEC EAX
00610F73  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00610f76:
00610F76  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
00610F7C  B8 79 19 8C 02            MOV EAX,0x28c1979
00610F81  85 C9                     TEST ECX,ECX
00610F83  7C 10                     JL 0x00610f95
00610F85  F7 E9                     IMUL ECX
00610F87  D1 FA                     SAR EDX,0x1
00610F89  8B CA                     MOV ECX,EDX
00610F8B  C1 E9 1F                  SHR ECX,0x1f
00610F8E  03 D1                     ADD EDX,ECX
00610F90  0F BF DA                  MOVSX EBX,DX
00610F93  EB 0F                     JMP 0x00610fa4
LAB_00610f95:
00610F95  F7 E9                     IMUL ECX
00610F97  D1 FA                     SAR EDX,0x1
00610F99  8B C2                     MOV EAX,EDX
00610F9B  C1 E8 1F                  SHR EAX,0x1f
00610F9E  03 D0                     ADD EDX,EAX
00610FA0  0F BF DA                  MOVSX EBX,DX
00610FA3  4B                        DEC EBX
LAB_00610fa4:
00610FA4  8B 8E 2B 02 00 00         MOV ECX,dword ptr [ESI + 0x22b]
00610FAA  B8 79 19 8C 02            MOV EAX,0x28c1979
00610FAF  85 C9                     TEST ECX,ECX
00610FB1  7C 10                     JL 0x00610fc3
00610FB3  F7 E9                     IMUL ECX
00610FB5  D1 FA                     SAR EDX,0x1
00610FB7  8B CA                     MOV ECX,EDX
00610FB9  C1 E9 1F                  SHR ECX,0x1f
00610FBC  03 D1                     ADD EDX,ECX
00610FBE  0F BF C2                  MOVSX EAX,DX
00610FC1  EB 0F                     JMP 0x00610fd2
LAB_00610fc3:
00610FC3  F7 E9                     IMUL ECX
00610FC5  D1 FA                     SAR EDX,0x1
00610FC7  8B C2                     MOV EAX,EDX
00610FC9  C1 E8 1F                  SHR EAX,0x1f
00610FCC  03 D0                     ADD EDX,EAX
00610FCE  0F BF C2                  MOVSX EAX,DX
00610FD1  48                        DEC EAX
LAB_00610fd2:
00610FD2  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00610FD9  0F 84 30 0C 00 00         JZ 0x00611c0f
00610FDF  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
00610FE5  85 C9                     TEST ECX,ECX
00610FE7  0F 84 22 0C 00 00         JZ 0x00611c0f
00610FED  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00610FF0  8D 55 E0                  LEA EDX,[EBP + -0x20]
00610FF3  51                        PUSH ECX
00610FF4  52                        PUSH EDX
00610FF5  53                        PUSH EBX
00610FF6  50                        PUSH EAX
00610FF7  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00610FFD  8B CF                     MOV ECX,EDI
00610FFF  50                        PUSH EAX
00611000  E8 4E 2F DF FF            CALL 0x00403f53
00611005  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00611008  85 C0                     TEST EAX,EAX
0061100A  0F 8C FF 0B 00 00         JL 0x00611c0f
00611010  83 F8 05                  CMP EAX,0x5
00611013  0F 8D F6 0B 00 00         JGE 0x00611c0f
00611019  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0061101C  85 D2                     TEST EDX,EDX
0061101E  0F 8C EB 0B 00 00         JL 0x00611c0f
00611024  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00611027  3B D1                     CMP EDX,ECX
00611029  0F 8D E0 0B 00 00         JGE 0x00611c0f
0061102F  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
00611036  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_00611039:
00611039  03 C3                     ADD EAX,EBX
0061103B  85 C0                     TEST EAX,EAX
0061103D  0F 8C CC 0B 00 00         JL 0x00611c0f
00611043  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00611046  0F 8D C3 0B 00 00         JGE 0x00611c0f
0061104C  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0061104F  85 FF                     TEST EDI,EDI
00611051  0F 84 B8 0B 00 00         JZ 0x00611c0f
00611057  0F AF C1                  IMUL EAX,ECX
0061105A  03 C2                     ADD EAX,EDX
0061105C  33 C9                     XOR ECX,ECX
0061105E  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
LAB_00611061:
00611061  8B C1                     MOV EAX,ECX
00611063  85 C0                     TEST EAX,EAX
00611065  0F 84 CB 0B 00 00         JZ 0x00611c36
0061106B  E9 9F 0B 00 00            JMP 0x00611c0f
switchD_006101d2::caseD_3:
00611070  8D 4D EC                  LEA ECX,[EBP + -0x14]
00611073  8D 55 F0                  LEA EDX,[EBP + -0x10]
00611076  51                        PUSH ECX
00611077  8D 45 F4                  LEA EAX,[EBP + -0xc]
0061107A  52                        PUSH EDX
0061107B  50                        PUSH EAX
0061107C  8B CE                     MOV ECX,ESI
0061107E  E8 54 4B DF FF            CALL 0x00405bd7
00611083  85 C0                     TEST EAX,EAX
00611085  0F 8E AE 05 00 00         JLE 0x00611639
0061108B  66 8B 8E 5A 02 00 00      MOV CX,word ptr [ESI + 0x25a]
00611092  66 8B 96 5C 02 00 00      MOV DX,word ptr [ESI + 0x25c]
00611099  66 8B 86 5E 02 00 00      MOV AX,word ptr [ESI + 0x25e]
006110A0  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006110A3  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006110A6  66 89 8E 60 02 00 00      MOV word ptr [ESI + 0x260],CX
006110AD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006110B0  66 89 96 62 02 00 00      MOV word ptr [ESI + 0x262],DX
006110B7  66 89 86 64 02 00 00      MOV word ptr [ESI + 0x264],AX
006110BE  66 89 8E 5A 02 00 00      MOV word ptr [ESI + 0x25a],CX
006110C5  66 85 C9                  TEST CX,CX
006110C8  66 89 BE 5C 02 00 00      MOV word ptr [ESI + 0x25c],DI
006110CF  66 89 9E 5E 02 00 00      MOV word ptr [ESI + 0x25e],BX
006110D6  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006110DD  B8 79 19 8C 02            MOV EAX,0x28c1979
006110E2  0F BF D1                  MOVSX EDX,CX
006110E5  7C 10                     JL 0x006110f7
006110E7  F7 EA                     IMUL EDX
006110E9  D1 FA                     SAR EDX,0x1
006110EB  8B C2                     MOV EAX,EDX
006110ED  C1 E8 1F                  SHR EAX,0x1f
006110F0  03 D0                     ADD EDX,EAX
006110F2  0F BF C2                  MOVSX EAX,DX
006110F5  EB 0F                     JMP 0x00611106
LAB_006110f7:
006110F7  F7 EA                     IMUL EDX
006110F9  D1 FA                     SAR EDX,0x1
006110FB  8B C2                     MOV EAX,EDX
006110FD  C1 E8 1F                  SHR EAX,0x1f
00611100  03 D0                     ADD EDX,EAX
00611102  0F BF C2                  MOVSX EAX,DX
00611105  48                        DEC EAX
LAB_00611106:
00611106  0F BF 96 15 02 00 00      MOVSX EDX,word ptr [ESI + 0x215]
0061110D  3B D0                     CMP EDX,EAX
0061110F  75 74                     JNZ 0x00611185
00611111  66 85 FF                  TEST DI,DI
00611114  0F BF D7                  MOVSX EDX,DI
00611117  B8 79 19 8C 02            MOV EAX,0x28c1979
0061111C  7C 10                     JL 0x0061112e
0061111E  F7 EA                     IMUL EDX
00611120  D1 FA                     SAR EDX,0x1
00611122  8B C2                     MOV EAX,EDX
00611124  C1 E8 1F                  SHR EAX,0x1f
00611127  03 D0                     ADD EDX,EAX
00611129  0F BF C2                  MOVSX EAX,DX
0061112C  EB 0F                     JMP 0x0061113d
LAB_0061112e:
0061112E  F7 EA                     IMUL EDX
00611130  D1 FA                     SAR EDX,0x1
00611132  8B C2                     MOV EAX,EDX
00611134  C1 E8 1F                  SHR EAX,0x1f
00611137  03 D0                     ADD EDX,EAX
00611139  0F BF C2                  MOVSX EAX,DX
0061113C  48                        DEC EAX
LAB_0061113d:
0061113D  0F BF 96 17 02 00 00      MOVSX EDX,word ptr [ESI + 0x217]
00611144  3B D0                     CMP EDX,EAX
00611146  75 3D                     JNZ 0x00611185
00611148  66 85 DB                  TEST BX,BX
0061114B  0F BF D3                  MOVSX EDX,BX
0061114E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00611153  7C 11                     JL 0x00611166
00611155  F7 EA                     IMUL EDX
00611157  C1 FA 06                  SAR EDX,0x6
0061115A  8B C2                     MOV EAX,EDX
0061115C  C1 E8 1F                  SHR EAX,0x1f
0061115F  03 D0                     ADD EDX,EAX
00611161  0F BF C2                  MOVSX EAX,DX
00611164  EB 10                     JMP 0x00611176
LAB_00611166:
00611166  F7 EA                     IMUL EDX
00611168  C1 FA 06                  SAR EDX,0x6
0061116B  8B C2                     MOV EAX,EDX
0061116D  C1 E8 1F                  SHR EAX,0x1f
00611170  03 D0                     ADD EDX,EAX
00611172  0F BF C2                  MOVSX EAX,DX
00611175  48                        DEC EAX
LAB_00611176:
00611176  0F BF 96 19 02 00 00      MOVSX EDX,word ptr [ESI + 0x219]
0061117D  3B D0                     CMP EDX,EAX
0061117F  0F 84 84 00 00 00         JZ 0x00611209
LAB_00611185:
00611185  66 8B 86 FF 01 00 00      MOV AX,word ptr [ESI + 0x1ff]
0061118C  8B 96 FB 01 00 00         MOV EDX,dword ptr [ESI + 0x1fb]
00611192  6A 00                     PUSH 0x0
00611194  6A 00                     PUSH 0x0
00611196  68 B0 00 00 00            PUSH 0xb0
0061119B  50                        PUSH EAX
0061119C  8B 86 1B 02 00 00         MOV EAX,dword ptr [ESI + 0x21b]
006111A2  52                        PUSH EDX
006111A3  8B 96 D9 01 00 00         MOV EDX,dword ptr [ESI + 0x1d9]
006111A9  50                        PUSH EAX
006111AA  0F BF 86 64 02 00 00      MOVSX EAX,word ptr [ESI + 0x264]
006111B1  52                        PUSH EDX
006111B2  50                        PUSH EAX
006111B3  0F BF 96 62 02 00 00      MOVSX EDX,word ptr [ESI + 0x262]
006111BA  0F BF 86 60 02 00 00      MOVSX EAX,word ptr [ESI + 0x260]
006111C1  52                        PUSH EDX
006111C2  50                        PUSH EAX
006111C3  53                        PUSH EBX
006111C4  57                        PUSH EDI
006111C5  51                        PUSH ECX
006111C6  8D 8E EB 02 00 00         LEA ECX,[ESI + 0x2eb]
006111CC  E8 45 33 DF FF            CALL 0x00404516
006111D1  85 C0                     TEST EAX,EAX
006111D3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006111D6  7E 31                     JLE 0x00611209
006111D8  8B F8                     MOV EDI,EAX
006111DA  83 FF 05                  CMP EDI,0x5
006111DD  75 13                     JNZ 0x006111f2
006111DF  8B CE                     MOV ECX,ESI
006111E1  E8 57 34 DF FF            CALL 0x0040463d
006111E6  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
006111F0  EB 1A                     JMP 0x0061120c
LAB_006111f2:
006111F2  8B 8E 0C 02 00 00         MOV ECX,dword ptr [ESI + 0x20c]
006111F8  51                        PUSH ECX
006111F9  57                        PUSH EDI
006111FA  8B CE                     MOV ECX,ESI
006111FC  E8 B3 1C DF FF            CALL 0x00402eb4
00611201  89 86 0C 02 00 00         MOV dword ptr [ESI + 0x20c],EAX
00611207  EB 03                     JMP 0x0061120c
LAB_00611209:
00611209  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0061120c:
0061120C  8B 86 0C 02 00 00         MOV EAX,dword ptr [ESI + 0x20c]
00611212  83 F8 03                  CMP EAX,0x3
00611215  74 09                     JZ 0x00611220
00611217  83 F8 04                  CMP EAX,0x4
0061121A  0F 85 07 15 00 00         JNZ 0x00612727
LAB_00611220:
00611220  0F BF 86 5A 02 00 00      MOVSX EAX,word ptr [ESI + 0x25a]
00611227  0F BF 8E 5C 02 00 00      MOVSX ECX,word ptr [ESI + 0x25c]
0061122E  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
00611235  85 FF                     TEST EDI,EDI
00611237  89 86 2B 02 00 00         MOV dword ptr [ESI + 0x22b],EAX
0061123D  89 8E 2F 02 00 00         MOV dword ptr [ESI + 0x22f],ECX
00611243  89 96 33 02 00 00         MOV dword ptr [ESI + 0x233],EDX
00611249  75 5D                     JNZ 0x006112a8
0061124B  8B BE F7 01 00 00         MOV EDI,dword ptr [ESI + 0x1f7]
00611251  85 FF                     TEST EDI,EDI
00611253  74 05                     JZ 0x0061125a
00611255  83 FF 02                  CMP EDI,0x2
00611258  75 4E                     JNZ 0x006112a8
LAB_0061125a:
0061125A  8B BE 48 02 00 00         MOV EDI,dword ptr [ESI + 0x248]
00611260  85 FF                     TEST EDI,EDI
00611262  7D 19                     JGE 0x0061127d
00611264  6A 00                     PUSH 0x0
00611266  6A 00                     PUSH 0x0
00611268  6A FF                     PUSH -0x1
0061126A  6A 00                     PUSH 0x0
0061126C  6A 00                     PUSH 0x0
0061126E  6A 00                     PUSH 0x0
00611270  6A 00                     PUSH 0x0
00611272  6A 00                     PUSH 0x0
00611274  6A 00                     PUSH 0x0
00611276  52                        PUSH EDX
00611277  51                        PUSH ECX
00611278  50                        PUSH EAX
00611279  6A 00                     PUSH 0x0
0061127B  EB 1C                     JMP 0x00611299
LAB_0061127d:
0061127D  83 FF 05                  CMP EDI,0x5
00611280  7D 26                     JGE 0x006112a8
00611282  6A 00                     PUSH 0x0
00611284  6A 00                     PUSH 0x0
00611286  6A FF                     PUSH -0x1
00611288  6A 00                     PUSH 0x0
0061128A  6A 00                     PUSH 0x0
0061128C  6A 00                     PUSH 0x0
0061128E  6A 00                     PUSH 0x0
00611290  6A 00                     PUSH 0x0
00611292  6A 00                     PUSH 0x0
00611294  52                        PUSH EDX
00611295  51                        PUSH ECX
00611296  50                        PUSH EAX
00611297  6A 05                     PUSH 0x5
LAB_00611299:
00611299  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0061129F  6A 01                     PUSH 0x1
006112A1  6A 01                     PUSH 0x1
006112A3  E8 8B 01 DF FF            CALL 0x00401433
LAB_006112a8:
006112A8  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
006112AE  84 C0                     TEST AL,AL
006112B0  0F 84 71 14 00 00         JZ 0x00612727
006112B6  8B 86 52 02 00 00         MOV EAX,dword ptr [ESI + 0x252]
006112BC  85 C0                     TEST EAX,EAX
006112BE  0F 84 63 14 00 00         JZ 0x00612727
006112C4  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
006112CA  33 DB                     XOR EBX,EBX
006112CC  2B C3                     SUB EAX,EBX
006112CE  74 34                     JZ 0x00611304
006112D0  48                        DEC EAX
006112D1  74 0E                     JZ 0x006112e1
006112D3  48                        DEC EAX
006112D4  74 2E                     JZ 0x00611304
006112D6  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
006112DC  E9 42 01 00 00            JMP 0x00611423
LAB_006112e1:
006112E1  8B 8E 37 02 00 00         MOV ECX,dword ptr [ESI + 0x237]
006112E7  41                        INC ECX
006112E8  8B C1                     MOV EAX,ECX
006112EA  89 8E 37 02 00 00         MOV dword ptr [ESI + 0x237],ECX
006112F0  83 F8 0A                  CMP EAX,0xa
006112F3  0F 8C 2A 01 00 00         JL 0x00611423
006112F9  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
006112FF  E9 1F 01 00 00            JMP 0x00611423
LAB_00611304:
00611304  0F BF 96 60 02 00 00      MOVSX EDX,word ptr [ESI + 0x260]
0061130B  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0061130E  6A 01                     PUSH 0x1
00611310  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00611313  0F BF 86 62 02 00 00      MOVSX EAX,word ptr [ESI + 0x262]
0061131A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611320  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00611323  53                        PUSH EBX
00611324  0F BF 8E 64 02 00 00      MOVSX ECX,word ptr [ESI + 0x264]
0061132B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611331  53                        PUSH EBX
00611332  53                        PUSH EBX
00611333  53                        PUSH EBX
00611334  53                        PUSH EBX
00611335  D9 5D BC                  FSTP float ptr [EBP + -0x44]
00611338  DB 45 E0                  FILD dword ptr [EBP + -0x20]
0061133B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0061133E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00611344  8D 55 BC                  LEA EDX,[EBP + -0x44]
00611347  53                        PUSH EBX
00611348  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061134E  8D 45 AC                  LEA EAX,[EBP + -0x54]
00611351  52                        PUSH EDX
00611352  50                        PUSH EAX
00611353  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611359  D9 5D C0                  FSTP float ptr [EBP + -0x40]
0061135C  DB 45 E0                  FILD dword ptr [EBP + -0x20]
0061135F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611365  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061136B  D9 5D C4                  FSTP float ptr [EBP + -0x3c]
0061136E  E8 5D 12 0D 00            CALL 0x006e25d0
00611373  0F BF 8E 5A 02 00 00      MOVSX ECX,word ptr [ESI + 0x25a]
0061137A  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0061137D  6A 01                     PUSH 0x1
0061137F  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00611382  0F BF 96 5C 02 00 00      MOVSX EDX,word ptr [ESI + 0x25c]
00611389  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061138F  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00611392  53                        PUSH EBX
00611393  0F BF 86 5E 02 00 00      MOVSX EAX,word ptr [ESI + 0x25e]
0061139A  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006113A0  53                        PUSH EBX
006113A1  53                        PUSH EBX
006113A2  53                        PUSH EBX
006113A3  53                        PUSH EBX
006113A4  D9 5D C8                  FSTP float ptr [EBP + -0x38]
006113A7  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006113AA  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006113AD  8D 4D C8                  LEA ECX,[EBP + -0x38]
006113B0  53                        PUSH EBX
006113B1  8D 55 9C                  LEA EDX,[EBP + -0x64]
006113B4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006113BA  51                        PUSH ECX
006113BB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006113C1  52                        PUSH EDX
006113C2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006113C8  D9 5D CC                  FSTP float ptr [EBP + -0x34]
006113CB  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006113CE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006113D4  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006113DA  D9 5D D0                  FSTP float ptr [EBP + -0x30]
006113DD  E8 EE 11 0D 00            CALL 0x006e25d0
006113E2  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006113E5  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006113E8  8B 06                     MOV EAX,dword ptr [ESI]
006113EA  C1 F9 10                  SAR ECX,0x10
006113ED  C1 FA 10                  SAR EDX,0x10
006113F0  51                        PUSH ECX
006113F1  52                        PUSH EDX
006113F2  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
006113F5  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006113F8  C1 F9 10                  SAR ECX,0x10
006113FB  C1 FA 10                  SAR EDX,0x10
006113FE  51                        PUSH ECX
006113FF  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00611402  52                        PUSH EDX
00611403  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00611406  C1 F9 10                  SAR ECX,0x10
00611409  C1 FA 10                  SAR EDX,0x10
0061140C  51                        PUSH ECX
0061140D  52                        PUSH EDX
0061140E  8B CE                     MOV ECX,ESI
00611410  FF 50 14                  CALL dword ptr [EAX + 0x14]
00611413  0F BF C0                  MOVSX EAX,AX
00611416  8B 0C 85 38 21 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d2138]
0061141D  89 8E 37 02 00 00         MOV dword ptr [ESI + 0x237],ECX
LAB_00611423:
00611423  8B 96 37 02 00 00         MOV EDX,dword ptr [ESI + 0x237]
00611429  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
0061142F  52                        PUSH EDX
00611430  6A 0D                     PUSH 0xd
00611432  E8 2D FC DE FF            CALL 0x00401064
00611437  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
0061143D  6A 0D                     PUSH 0xd
0061143F  E8 78 1C DF FF            CALL 0x004030bc
00611444  DB 86 33 02 00 00         FILD dword ptr [ESI + 0x233]
0061144A  51                        PUSH ECX
0061144B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611451  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611457  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0061145D  D9 1C 24                  FSTP float ptr [ESP]
00611460  DB 86 2F 02 00 00         FILD dword ptr [ESI + 0x22f]
00611466  51                        PUSH ECX
00611467  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061146D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611473  D9 1C 24                  FSTP float ptr [ESP]
00611476  DB 86 2B 02 00 00         FILD dword ptr [ESI + 0x22b]
0061147C  51                        PUSH ECX
0061147D  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611483  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611489  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061148F  D9 1C 24                  FSTP float ptr [ESP]
00611492  E8 42 31 DF FF            CALL 0x004045d9
00611497  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0061149D  3B FB                     CMP EDI,EBX
0061149F  0F 84 47 01 00 00         JZ 0x006115ec
006114A5  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
006114AB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006114B0  85 C9                     TEST ECX,ECX
006114B2  7C 14                     JL 0x006114c8
006114B4  F7 E9                     IMUL ECX
006114B6  C1 FA 06                  SAR EDX,0x6
006114B9  8B C2                     MOV EAX,EDX
006114BB  C1 E8 1F                  SHR EAX,0x1f
006114BE  03 D0                     ADD EDX,EAX
006114C0  0F BF CA                  MOVSX ECX,DX
006114C3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006114C6  EB 13                     JMP 0x006114db
LAB_006114c8:
006114C8  F7 E9                     IMUL ECX
006114CA  C1 FA 06                  SAR EDX,0x6
006114CD  8B C2                     MOV EAX,EDX
006114CF  C1 E8 1F                  SHR EAX,0x1f
006114D2  03 D0                     ADD EDX,EAX
006114D4  0F BF C2                  MOVSX EAX,DX
006114D7  48                        DEC EAX
006114D8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006114db:
006114DB  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
006114E1  B8 79 19 8C 02            MOV EAX,0x28c1979
006114E6  85 C9                     TEST ECX,ECX
006114E8  7C 10                     JL 0x006114fa
006114EA  F7 E9                     IMUL ECX
006114EC  D1 FA                     SAR EDX,0x1
006114EE  8B CA                     MOV ECX,EDX
006114F0  C1 E9 1F                  SHR ECX,0x1f
006114F3  03 D1                     ADD EDX,ECX
006114F5  0F BF DA                  MOVSX EBX,DX
006114F8  EB 0F                     JMP 0x00611509
LAB_006114fa:
006114FA  F7 E9                     IMUL ECX
006114FC  D1 FA                     SAR EDX,0x1
006114FE  8B C2                     MOV EAX,EDX
00611500  C1 E8 1F                  SHR EAX,0x1f
00611503  03 D0                     ADD EDX,EAX
00611505  0F BF DA                  MOVSX EBX,DX
00611508  4B                        DEC EBX
LAB_00611509:
00611509  8B 8E 2B 02 00 00         MOV ECX,dword ptr [ESI + 0x22b]
0061150F  B8 79 19 8C 02            MOV EAX,0x28c1979
00611514  85 C9                     TEST ECX,ECX
00611516  7C 10                     JL 0x00611528
00611518  F7 E9                     IMUL ECX
0061151A  D1 FA                     SAR EDX,0x1
0061151C  8B CA                     MOV ECX,EDX
0061151E  C1 E9 1F                  SHR ECX,0x1f
00611521  03 D1                     ADD EDX,ECX
00611523  0F BF C2                  MOVSX EAX,DX
00611526  EB 0F                     JMP 0x00611537
LAB_00611528:
00611528  F7 E9                     IMUL ECX
0061152A  D1 FA                     SAR EDX,0x1
0061152C  8B C2                     MOV EAX,EDX
0061152E  C1 E8 1F                  SHR EAX,0x1f
00611531  03 D0                     ADD EDX,EAX
00611533  0F BF C2                  MOVSX EAX,DX
00611536  48                        DEC EAX
LAB_00611537:
00611537  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0061153E  0F 84 CB 06 00 00         JZ 0x00611c0f
00611544  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
0061154A  85 C9                     TEST ECX,ECX
0061154C  0F 84 BD 06 00 00         JZ 0x00611c0f
00611552  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00611555  8D 55 E0                  LEA EDX,[EBP + -0x20]
00611558  51                        PUSH ECX
00611559  52                        PUSH EDX
0061155A  53                        PUSH EBX
0061155B  50                        PUSH EAX
0061155C  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00611562  8B CF                     MOV ECX,EDI
00611564  50                        PUSH EAX
00611565  E8 E9 29 DF FF            CALL 0x00403f53
0061156A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061156D  85 C0                     TEST EAX,EAX
0061156F  0F 8C 9A 06 00 00         JL 0x00611c0f
00611575  83 F8 05                  CMP EAX,0x5
00611578  0F 8D 91 06 00 00         JGE 0x00611c0f
0061157E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00611581  85 D2                     TEST EDX,EDX
00611583  0F 8C 86 06 00 00         JL 0x00611c0f
00611589  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0061158C  3B D1                     CMP EDX,ECX
0061158E  0F 8D 7B 06 00 00         JGE 0x00611c0f
00611594  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0061159B  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0061159E  03 C3                     ADD EAX,EBX
006115A0  85 C0                     TEST EAX,EAX
006115A2  0F 8C 67 06 00 00         JL 0x00611c0f
006115A8  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
006115AB  0F 8D 5E 06 00 00         JGE 0x00611c0f
006115B1  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
006115B4  85 FF                     TEST EDI,EDI
006115B6  0F 84 53 06 00 00         JZ 0x00611c0f
006115BC  0F AF C1                  IMUL EAX,ECX
006115BF  03 C7                     ADD EAX,EDI
006115C1  33 C9                     XOR ECX,ECX
006115C3  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
006115C6  8B C1                     MOV EAX,ECX
006115C8  85 C0                     TEST EAX,EAX
006115CA  0F 85 3F 06 00 00         JNZ 0x00611c0f
006115D0  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
006115D6  84 C0                     TEST AL,AL
006115D8  74 12                     JZ 0x006115ec
LAB_006115da:
006115DA  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006115E0  E8 2A 27 DF FF            CALL 0x00403d0f
006115E5  C6 86 50 02 00 00 00      MOV byte ptr [ESI + 0x250],0x0
LAB_006115ec:
006115EC  8B 86 48 02 00 00         MOV EAX,dword ptr [ESI + 0x248]
006115F2  85 C0                     TEST EAX,EAX
006115F4  0F 8C 2D 11 00 00         JL 0x00612727
006115FA  8A 8E 50 02 00 00         MOV CL,byte ptr [ESI + 0x250]
00611600  84 C9                     TEST CL,CL
00611602  0F 84 1F 11 00 00         JZ 0x00612727
00611608  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0061160E  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
00611612  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
00611616  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
0061161C  52                        PUSH EDX
0061161D  50                        PUSH EAX
0061161E  E8 A9 3C DF FF            CALL 0x004052cc
00611623  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00611629  50                        PUSH EAX
0061162A  E8 21 7D 0D 00            CALL 0x006e9350
0061162F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00611632  5F                        POP EDI
00611633  5E                        POP ESI
00611634  5B                        POP EBX
00611635  8B E5                     MOV ESP,EBP
00611637  5D                        POP EBP
00611638  C3                        RET
LAB_00611639:
00611639  C7 86 56 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x256],0x2
00611643  C7 86 0C 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x20c],0x4
0061164D  66 C7 86 70 02 00 00 FF FF  MOV word ptr [ESI + 0x270],0xffff
00611656  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00611659  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0061165F  33 D2                     XOR EDX,EDX
00611661  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00611667  B9 0B 00 00 00            MOV ECX,0xb
0061166C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0061166F  C1 E8 10                  SHR EAX,0x10
00611672  F7 F1                     DIV ECX
00611674  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00611679  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0061167F  8D 54 0A 0A               LEA EDX,[EDX + ECX*0x1 + 0xa]
00611683  89 96 94 02 00 00         MOV dword ptr [ESI + 0x294],EDX
00611689  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0061168E  8D 55 EC                  LEA EDX,[EBP + -0x14]
00611691  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00611697  8D 45 F0                  LEA EAX,[EBP + -0x10]
0061169A  89 8E 98 02 00 00         MOV dword ptr [ESI + 0x298],ECX
006116A0  52                        PUSH EDX
006116A1  8D 4D F4                  LEA ECX,[EBP + -0xc]
006116A4  50                        PUSH EAX
006116A5  51                        PUSH ECX
006116A6  6A 0A                     PUSH 0xa
006116A8  8B CE                     MOV ECX,ESI
006116AA  E8 25 11 DF FF            CALL 0x004027d4
006116AF  85 C0                     TEST EAX,EAX
006116B1  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006116B4  0F 8F 6D 10 00 00         JG 0x00612727
006116BA  E9 22 0B 00 00            JMP 0x006121e1
switchD_006101d2::caseD_5:
006116BF  8D 55 EC                  LEA EDX,[EBP + -0x14]
006116C2  8D 45 F0                  LEA EAX,[EBP + -0x10]
006116C5  52                        PUSH EDX
006116C6  8D 4D F4                  LEA ECX,[EBP + -0xc]
006116C9  50                        PUSH EAX
006116CA  51                        PUSH ECX
006116CB  8B CE                     MOV ECX,ESI
006116CD  E8 22 00 DF FF            CALL 0x004016f4
006116D2  85 C0                     TEST EAX,EAX
006116D4  0F 84 4D 10 00 00         JZ 0x00612727
006116DA  66 8B 86 5C 02 00 00      MOV AX,word ptr [ESI + 0x25c]
006116E1  66 8B 96 5A 02 00 00      MOV DX,word ptr [ESI + 0x25a]
006116E8  66 8B 8E 5E 02 00 00      MOV CX,word ptr [ESI + 0x25e]
006116EF  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006116F2  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006116F5  66 89 86 62 02 00 00      MOV word ptr [ESI + 0x262],AX
006116FC  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
00611702  66 89 96 60 02 00 00      MOV word ptr [ESI + 0x260],DX
00611709  33 D2                     XOR EDX,EDX
0061170B  83 F8 02                  CMP EAX,0x2
0061170E  66 89 8E 64 02 00 00      MOV word ptr [ESI + 0x264],CX
00611715  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00611718  0F 94 C2                  SETZ DL
0061171B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0061171E  66 89 8E 5A 02 00 00      MOV word ptr [ESI + 0x25a],CX
00611725  66 85 C9                  TEST CX,CX
00611728  66 89 BE 5C 02 00 00      MOV word ptr [ESI + 0x25c],DI
0061172F  66 89 9E 5E 02 00 00      MOV word ptr [ESI + 0x25e],BX
00611736  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0061173D  B8 79 19 8C 02            MOV EAX,0x28c1979
00611742  0F BF D1                  MOVSX EDX,CX
00611745  7C 10                     JL 0x00611757
00611747  F7 EA                     IMUL EDX
00611749  D1 FA                     SAR EDX,0x1
0061174B  8B C2                     MOV EAX,EDX
0061174D  C1 E8 1F                  SHR EAX,0x1f
00611750  03 D0                     ADD EDX,EAX
00611752  0F BF C2                  MOVSX EAX,DX
00611755  EB 0F                     JMP 0x00611766
LAB_00611757:
00611757  F7 EA                     IMUL EDX
00611759  D1 FA                     SAR EDX,0x1
0061175B  8B C2                     MOV EAX,EDX
0061175D  C1 E8 1F                  SHR EAX,0x1f
00611760  03 D0                     ADD EDX,EAX
00611762  0F BF C2                  MOVSX EAX,DX
00611765  48                        DEC EAX
LAB_00611766:
00611766  0F BF 96 15 02 00 00      MOVSX EDX,word ptr [ESI + 0x215]
0061176D  3B D0                     CMP EDX,EAX
0061176F  75 74                     JNZ 0x006117e5
00611771  66 85 FF                  TEST DI,DI
00611774  0F BF D7                  MOVSX EDX,DI
00611777  B8 79 19 8C 02            MOV EAX,0x28c1979
0061177C  7C 10                     JL 0x0061178e
0061177E  F7 EA                     IMUL EDX
00611780  D1 FA                     SAR EDX,0x1
00611782  8B C2                     MOV EAX,EDX
00611784  C1 E8 1F                  SHR EAX,0x1f
00611787  03 D0                     ADD EDX,EAX
00611789  0F BF C2                  MOVSX EAX,DX
0061178C  EB 0F                     JMP 0x0061179d
LAB_0061178e:
0061178E  F7 EA                     IMUL EDX
00611790  D1 FA                     SAR EDX,0x1
00611792  8B C2                     MOV EAX,EDX
00611794  C1 E8 1F                  SHR EAX,0x1f
00611797  03 D0                     ADD EDX,EAX
00611799  0F BF C2                  MOVSX EAX,DX
0061179C  48                        DEC EAX
LAB_0061179d:
0061179D  0F BF 96 17 02 00 00      MOVSX EDX,word ptr [ESI + 0x217]
006117A4  3B D0                     CMP EDX,EAX
006117A6  75 3D                     JNZ 0x006117e5
006117A8  66 85 DB                  TEST BX,BX
006117AB  0F BF D3                  MOVSX EDX,BX
006117AE  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006117B3  7C 11                     JL 0x006117c6
006117B5  F7 EA                     IMUL EDX
006117B7  C1 FA 06                  SAR EDX,0x6
006117BA  8B C2                     MOV EAX,EDX
006117BC  C1 E8 1F                  SHR EAX,0x1f
006117BF  03 D0                     ADD EDX,EAX
006117C1  0F BF C2                  MOVSX EAX,DX
006117C4  EB 10                     JMP 0x006117d6
LAB_006117c6:
006117C6  F7 EA                     IMUL EDX
006117C8  C1 FA 06                  SAR EDX,0x6
006117CB  8B C2                     MOV EAX,EDX
006117CD  C1 E8 1F                  SHR EAX,0x1f
006117D0  03 D0                     ADD EDX,EAX
006117D2  0F BF C2                  MOVSX EAX,DX
006117D5  48                        DEC EAX
LAB_006117d6:
006117D6  0F BF 96 19 02 00 00      MOVSX EDX,word ptr [ESI + 0x219]
006117DD  3B D0                     CMP EDX,EAX
006117DF  0F 84 86 00 00 00         JZ 0x0061186b
LAB_006117e5:
006117E5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006117E8  66 8B 96 FF 01 00 00      MOV DX,word ptr [ESI + 0x1ff]
006117EF  6A 00                     PUSH 0x0
006117F1  50                        PUSH EAX
006117F2  8B 86 FB 01 00 00         MOV EAX,dword ptr [ESI + 0x1fb]
006117F8  68 B0 00 00 00            PUSH 0xb0
006117FD  52                        PUSH EDX
006117FE  8B 96 1B 02 00 00         MOV EDX,dword ptr [ESI + 0x21b]
00611804  50                        PUSH EAX
00611805  8B 86 D9 01 00 00         MOV EAX,dword ptr [ESI + 0x1d9]
0061180B  52                        PUSH EDX
0061180C  50                        PUSH EAX
0061180D  0F BF 96 64 02 00 00      MOVSX EDX,word ptr [ESI + 0x264]
00611814  0F BF 86 62 02 00 00      MOVSX EAX,word ptr [ESI + 0x262]
0061181B  52                        PUSH EDX
0061181C  50                        PUSH EAX
0061181D  0F BF 96 60 02 00 00      MOVSX EDX,word ptr [ESI + 0x260]
00611824  52                        PUSH EDX
00611825  53                        PUSH EBX
00611826  57                        PUSH EDI
00611827  51                        PUSH ECX
00611828  8D 8E EB 02 00 00         LEA ECX,[ESI + 0x2eb]
0061182E  E8 E3 2C DF FF            CALL 0x00404516
00611833  85 C0                     TEST EAX,EAX
00611835  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00611838  7E 31                     JLE 0x0061186b
0061183A  8B F8                     MOV EDI,EAX
0061183C  83 FF 05                  CMP EDI,0x5
0061183F  75 13                     JNZ 0x00611854
00611841  8B CE                     MOV ECX,ESI
00611843  E8 F5 2D DF FF            CALL 0x0040463d
00611848  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
00611852  EB 1A                     JMP 0x0061186e
LAB_00611854:
00611854  8B 86 0C 02 00 00         MOV EAX,dword ptr [ESI + 0x20c]
0061185A  8B CE                     MOV ECX,ESI
0061185C  50                        PUSH EAX
0061185D  57                        PUSH EDI
0061185E  E8 51 16 DF FF            CALL 0x00402eb4
00611863  89 86 0C 02 00 00         MOV dword ptr [ESI + 0x20c],EAX
00611869  EB 03                     JMP 0x0061186e
LAB_0061186b:
0061186B  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0061186e:
0061186E  8B 86 0C 02 00 00         MOV EAX,dword ptr [ESI + 0x20c]
00611874  83 F8 05                  CMP EAX,0x5
00611877  74 0E                     JZ 0x00611887
00611879  83 F8 03                  CMP EAX,0x3
0061187C  74 09                     JZ 0x00611887
0061187E  83 F8 04                  CMP EAX,0x4
00611881  0F 85 A0 0E 00 00         JNZ 0x00612727
LAB_00611887:
00611887  0F BF 86 5A 02 00 00      MOVSX EAX,word ptr [ESI + 0x25a]
0061188E  0F BF 8E 5C 02 00 00      MOVSX ECX,word ptr [ESI + 0x25c]
00611895  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
0061189C  85 FF                     TEST EDI,EDI
0061189E  89 86 2B 02 00 00         MOV dword ptr [ESI + 0x22b],EAX
006118A4  89 8E 2F 02 00 00         MOV dword ptr [ESI + 0x22f],ECX
006118AA  89 96 33 02 00 00         MOV dword ptr [ESI + 0x233],EDX
006118B0  75 5D                     JNZ 0x0061190f
006118B2  8B BE F7 01 00 00         MOV EDI,dword ptr [ESI + 0x1f7]
006118B8  85 FF                     TEST EDI,EDI
006118BA  74 05                     JZ 0x006118c1
006118BC  83 FF 02                  CMP EDI,0x2
006118BF  75 4E                     JNZ 0x0061190f
LAB_006118c1:
006118C1  8B BE 48 02 00 00         MOV EDI,dword ptr [ESI + 0x248]
006118C7  85 FF                     TEST EDI,EDI
006118C9  7D 19                     JGE 0x006118e4
006118CB  6A 00                     PUSH 0x0
006118CD  6A 00                     PUSH 0x0
006118CF  6A FF                     PUSH -0x1
006118D1  6A 00                     PUSH 0x0
006118D3  6A 00                     PUSH 0x0
006118D5  6A 00                     PUSH 0x0
006118D7  6A 00                     PUSH 0x0
006118D9  6A 00                     PUSH 0x0
006118DB  6A 00                     PUSH 0x0
006118DD  52                        PUSH EDX
006118DE  51                        PUSH ECX
006118DF  50                        PUSH EAX
006118E0  6A 00                     PUSH 0x0
006118E2  EB 1C                     JMP 0x00611900
LAB_006118e4:
006118E4  83 FF 05                  CMP EDI,0x5
006118E7  7D 26                     JGE 0x0061190f
006118E9  6A 00                     PUSH 0x0
006118EB  6A 00                     PUSH 0x0
006118ED  6A FF                     PUSH -0x1
006118EF  6A 00                     PUSH 0x0
006118F1  6A 00                     PUSH 0x0
006118F3  6A 00                     PUSH 0x0
006118F5  6A 00                     PUSH 0x0
006118F7  6A 00                     PUSH 0x0
006118F9  6A 00                     PUSH 0x0
006118FB  52                        PUSH EDX
006118FC  51                        PUSH ECX
006118FD  50                        PUSH EAX
006118FE  6A 05                     PUSH 0x5
LAB_00611900:
00611900  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00611906  6A 01                     PUSH 0x1
00611908  6A 01                     PUSH 0x1
0061190A  E8 24 FB DE FF            CALL 0x00401433
LAB_0061190f:
0061190F  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
00611915  84 C0                     TEST AL,AL
00611917  0F 84 0A 0E 00 00         JZ 0x00612727
0061191D  8B 86 52 02 00 00         MOV EAX,dword ptr [ESI + 0x252]
00611923  85 C0                     TEST EAX,EAX
00611925  0F 84 FC 0D 00 00         JZ 0x00612727
0061192B  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
00611931  33 DB                     XOR EBX,EBX
00611933  2B C3                     SUB EAX,EBX
00611935  74 34                     JZ 0x0061196b
00611937  48                        DEC EAX
00611938  74 0E                     JZ 0x00611948
0061193A  48                        DEC EAX
0061193B  74 2E                     JZ 0x0061196b
0061193D  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
00611943  E9 42 01 00 00            JMP 0x00611a8a
LAB_00611948:
00611948  8B 8E 37 02 00 00         MOV ECX,dword ptr [ESI + 0x237]
0061194E  41                        INC ECX
0061194F  8B C1                     MOV EAX,ECX
00611951  89 8E 37 02 00 00         MOV dword ptr [ESI + 0x237],ECX
00611957  83 F8 0A                  CMP EAX,0xa
0061195A  0F 8C 2A 01 00 00         JL 0x00611a8a
00611960  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
00611966  E9 1F 01 00 00            JMP 0x00611a8a
LAB_0061196b:
0061196B  0F BF 8E 60 02 00 00      MOVSX ECX,word ptr [ESI + 0x260]
00611972  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00611975  6A 01                     PUSH 0x1
00611977  DB 45 E0                  FILD dword ptr [EBP + -0x20]
0061197A  0F BF 96 62 02 00 00      MOVSX EDX,word ptr [ESI + 0x262]
00611981  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611987  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0061198A  53                        PUSH EBX
0061198B  0F BF 86 64 02 00 00      MOVSX EAX,word ptr [ESI + 0x264]
00611992  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611998  53                        PUSH EBX
00611999  53                        PUSH EBX
0061199A  53                        PUSH EBX
0061199B  53                        PUSH EBX
0061199C  D9 5D BC                  FSTP float ptr [EBP + -0x44]
0061199F  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006119A2  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006119A5  8D 4D BC                  LEA ECX,[EBP + -0x44]
006119A8  53                        PUSH EBX
006119A9  8D 55 AC                  LEA EDX,[EBP + -0x54]
006119AC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006119B2  51                        PUSH ECX
006119B3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006119B9  52                        PUSH EDX
006119BA  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006119C0  D9 5D C0                  FSTP float ptr [EBP + -0x40]
006119C3  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006119C6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006119CC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006119D2  D9 5D C4                  FSTP float ptr [EBP + -0x3c]
006119D5  E8 F6 0B 0D 00            CALL 0x006e25d0
006119DA  0F BF 86 5A 02 00 00      MOVSX EAX,word ptr [ESI + 0x25a]
006119E1  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006119E4  6A 01                     PUSH 0x1
006119E6  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006119E9  0F BF 8E 5C 02 00 00      MOVSX ECX,word ptr [ESI + 0x25c]
006119F0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006119F6  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006119F9  53                        PUSH EBX
006119FA  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
00611A01  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611A07  53                        PUSH EBX
00611A08  53                        PUSH EBX
00611A09  53                        PUSH EBX
00611A0A  53                        PUSH EBX
00611A0B  D9 5D C8                  FSTP float ptr [EBP + -0x38]
00611A0E  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00611A11  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00611A14  8D 45 C8                  LEA EAX,[EBP + -0x38]
00611A17  53                        PUSH EBX
00611A18  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00611A1B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611A21  50                        PUSH EAX
00611A22  51                        PUSH ECX
00611A23  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00611A29  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611A2F  D9 5D CC                  FSTP float ptr [EBP + -0x34]
00611A32  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00611A35  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611A3B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611A41  D9 5D D0                  FSTP float ptr [EBP + -0x30]
00611A44  E8 87 0B 0D 00            CALL 0x006e25d0
00611A49  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00611A4C  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00611A4F  8B 16                     MOV EDX,dword ptr [ESI]
00611A51  C1 F8 10                  SAR EAX,0x10
00611A54  C1 F9 10                  SAR ECX,0x10
00611A57  50                        PUSH EAX
00611A58  51                        PUSH ECX
00611A59  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00611A5C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00611A5F  C1 F8 10                  SAR EAX,0x10
00611A62  C1 F9 10                  SAR ECX,0x10
00611A65  50                        PUSH EAX
00611A66  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00611A69  51                        PUSH ECX
00611A6A  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00611A6D  C1 F8 10                  SAR EAX,0x10
00611A70  C1 F9 10                  SAR ECX,0x10
00611A73  50                        PUSH EAX
00611A74  51                        PUSH ECX
00611A75  8B CE                     MOV ECX,ESI
00611A77  FF 52 14                  CALL dword ptr [EDX + 0x14]
00611A7A  0F BF D0                  MOVSX EDX,AX
00611A7D  8B 04 95 38 21 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d2138]
00611A84  89 86 37 02 00 00         MOV dword ptr [ESI + 0x237],EAX
LAB_00611a8a:
00611A8A  8B 8E 37 02 00 00         MOV ECX,dword ptr [ESI + 0x237]
00611A90  51                        PUSH ECX
00611A91  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611A97  6A 0D                     PUSH 0xd
00611A99  E8 C6 F5 DE FF            CALL 0x00401064
00611A9E  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611AA4  6A 0D                     PUSH 0xd
00611AA6  E8 11 16 DF FF            CALL 0x004030bc
00611AAB  DB 86 33 02 00 00         FILD dword ptr [ESI + 0x233]
00611AB1  51                        PUSH ECX
00611AB2  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611AB8  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611ABE  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00611AC4  D9 1C 24                  FSTP float ptr [ESP]
00611AC7  DB 86 2F 02 00 00         FILD dword ptr [ESI + 0x22f]
00611ACD  51                        PUSH ECX
00611ACE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611AD4  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611ADA  D9 1C 24                  FSTP float ptr [ESP]
00611ADD  DB 86 2B 02 00 00         FILD dword ptr [ESI + 0x22b]
00611AE3  51                        PUSH ECX
00611AE4  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611AEA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611AF0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611AF6  D9 1C 24                  FSTP float ptr [ESP]
00611AF9  E8 DB 2A DF FF            CALL 0x004045d9
00611AFE  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00611B04  3B FB                     CMP EDI,EBX
00611B06  0F 84 E0 FA FF FF         JZ 0x006115ec
00611B0C  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
00611B12  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00611B17  85 C9                     TEST ECX,ECX
00611B19  7C 14                     JL 0x00611b2f
00611B1B  F7 E9                     IMUL ECX
00611B1D  C1 FA 06                  SAR EDX,0x6
00611B20  8B C2                     MOV EAX,EDX
00611B22  C1 E8 1F                  SHR EAX,0x1f
00611B25  03 D0                     ADD EDX,EAX
00611B27  0F BF CA                  MOVSX ECX,DX
00611B2A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00611B2D  EB 13                     JMP 0x00611b42
LAB_00611b2f:
00611B2F  F7 E9                     IMUL ECX
00611B31  C1 FA 06                  SAR EDX,0x6
00611B34  8B C2                     MOV EAX,EDX
00611B36  C1 E8 1F                  SHR EAX,0x1f
00611B39  03 D0                     ADD EDX,EAX
00611B3B  0F BF C2                  MOVSX EAX,DX
00611B3E  48                        DEC EAX
00611B3F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00611b42:
00611B42  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
00611B48  B8 79 19 8C 02            MOV EAX,0x28c1979
00611B4D  85 C9                     TEST ECX,ECX
00611B4F  7C 10                     JL 0x00611b61
00611B51  F7 E9                     IMUL ECX
00611B53  D1 FA                     SAR EDX,0x1
00611B55  8B CA                     MOV ECX,EDX
00611B57  C1 E9 1F                  SHR ECX,0x1f
00611B5A  03 D1                     ADD EDX,ECX
00611B5C  0F BF DA                  MOVSX EBX,DX
00611B5F  EB 0F                     JMP 0x00611b70
LAB_00611b61:
00611B61  F7 E9                     IMUL ECX
00611B63  D1 FA                     SAR EDX,0x1
00611B65  8B C2                     MOV EAX,EDX
00611B67  C1 E8 1F                  SHR EAX,0x1f
00611B6A  03 D0                     ADD EDX,EAX
00611B6C  0F BF DA                  MOVSX EBX,DX
00611B6F  4B                        DEC EBX
LAB_00611b70:
00611B70  8B 8E 2B 02 00 00         MOV ECX,dword ptr [ESI + 0x22b]
00611B76  B8 79 19 8C 02            MOV EAX,0x28c1979
00611B7B  85 C9                     TEST ECX,ECX
00611B7D  7C 10                     JL 0x00611b8f
00611B7F  F7 E9                     IMUL ECX
00611B81  D1 FA                     SAR EDX,0x1
00611B83  8B CA                     MOV ECX,EDX
00611B85  C1 E9 1F                  SHR ECX,0x1f
00611B88  03 D1                     ADD EDX,ECX
00611B8A  0F BF C2                  MOVSX EAX,DX
00611B8D  EB 0F                     JMP 0x00611b9e
LAB_00611b8f:
00611B8F  F7 E9                     IMUL ECX
00611B91  D1 FA                     SAR EDX,0x1
00611B93  8B C2                     MOV EAX,EDX
00611B95  C1 E8 1F                  SHR EAX,0x1f
00611B98  03 D0                     ADD EDX,EAX
00611B9A  0F BF C2                  MOVSX EAX,DX
00611B9D  48                        DEC EAX
LAB_00611b9e:
00611B9E  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00611BA5  74 68                     JZ 0x00611c0f
00611BA7  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
00611BAD  85 C9                     TEST ECX,ECX
00611BAF  74 5E                     JZ 0x00611c0f
00611BB1  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00611BB4  8D 55 E0                  LEA EDX,[EBP + -0x20]
00611BB7  51                        PUSH ECX
00611BB8  52                        PUSH EDX
00611BB9  53                        PUSH EBX
00611BBA  50                        PUSH EAX
00611BBB  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00611BC1  8B CF                     MOV ECX,EDI
00611BC3  50                        PUSH EAX
00611BC4  E8 8A 23 DF FF            CALL 0x00403f53
00611BC9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00611BCC  85 C0                     TEST EAX,EAX
00611BCE  7C 3F                     JL 0x00611c0f
00611BD0  83 F8 05                  CMP EAX,0x5
00611BD3  7D 3A                     JGE 0x00611c0f
00611BD5  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00611BD8  85 D2                     TEST EDX,EDX
00611BDA  7C 33                     JL 0x00611c0f
00611BDC  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00611BDF  3B D1                     CMP EDX,ECX
00611BE1  7D 2C                     JGE 0x00611c0f
00611BE3  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
00611BEA  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00611BED  03 C3                     ADD EAX,EBX
00611BEF  85 C0                     TEST EAX,EAX
00611BF1  7C 1C                     JL 0x00611c0f
00611BF3  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00611BF6  7D 17                     JGE 0x00611c0f
00611BF8  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
00611BFB  85 FF                     TEST EDI,EDI
00611BFD  74 10                     JZ 0x00611c0f
00611BFF  0F AF C1                  IMUL EAX,ECX
00611C02  03 C7                     ADD EAX,EDI
00611C04  33 C9                     XOR ECX,ECX
00611C06  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00611C09  8B C1                     MOV EAX,ECX
00611C0B  85 C0                     TEST EAX,EAX
00611C0D  74 27                     JZ 0x00611c36
LAB_00611c0f:
00611C0F  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
00611C15  84 C0                     TEST AL,AL
00611C17  0F 85 CF F9 FF FF         JNZ 0x006115ec
00611C1D  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611C23  6A 00                     PUSH 0x0
00611C25  E8 58 0D DF FF            CALL 0x00402982
00611C2A  C6 86 50 02 00 00 01      MOV byte ptr [ESI + 0x250],0x1
00611C31  E9 B6 F9 FF FF            JMP 0x006115ec
LAB_00611c36:
00611C36  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
00611C3C  84 C0                     TEST AL,AL
00611C3E  0F 84 A8 F9 FF FF         JZ 0x006115ec
00611C44  E9 91 F9 FF FF            JMP 0x006115da
switchD_006101d2::caseD_6:
00611C49  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00611C4F  8B 86 10 02 00 00         MOV EAX,dword ptr [ESI + 0x210]
00611C55  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00611C5B  3B D0                     CMP EDX,EAX
00611C5D  0F 86 C4 0A 00 00         JBE 0x00612727
00611C63  8D 45 DC                  LEA EAX,[EBP + -0x24]
00611C66  8D 4D D8                  LEA ECX,[EBP + -0x28]
00611C69  50                        PUSH EAX
00611C6A  8D 55 D4                  LEA EDX,[EBP + -0x2c]
00611C6D  0F BF 86 F5 01 00 00      MOVSX EAX,word ptr [ESI + 0x1f5]
00611C74  51                        PUSH ECX
00611C75  52                        PUSH EDX
00611C76  50                        PUSH EAX
00611C77  8B CE                     MOV ECX,ESI
00611C79  E8 31 2B DF FF            CALL 0x004047af
00611C7E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00611C81  0F BF 8E ED 01 00 00      MOVSX ECX,word ptr [ESI + 0x1ed]
00611C88  0F BF BE EB 01 00 00      MOVSX EDI,word ptr [ESI + 0x1eb]
00611C8F  0F BF 9E E9 01 00 00      MOVSX EBX,word ptr [ESI + 0x1e9]
00611C96  99                        CDQ
00611C97  81 E2 FF 03 00 00         AND EDX,0x3ff
00611C9D  51                        PUSH ECX
00611C9E  03 C2                     ADD EAX,EDX
00611CA0  57                        PUSH EDI
00611CA1  C1 F8 0A                  SAR EAX,0xa
00611CA4  03 C1                     ADD EAX,ECX
00611CA6  53                        PUSH EBX
00611CA7  50                        PUSH EAX
00611CA8  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00611CAB  99                        CDQ
00611CAC  81 E2 FF 03 00 00         AND EDX,0x3ff
00611CB2  8B CE                     MOV ECX,ESI
00611CB4  03 C2                     ADD EAX,EDX
00611CB6  C1 F8 0A                  SAR EAX,0xa
00611CB9  03 C7                     ADD EAX,EDI
00611CBB  50                        PUSH EAX
00611CBC  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00611CBF  99                        CDQ
00611CC0  81 E2 FF 03 00 00         AND EDX,0x3ff
00611CC6  03 C2                     ADD EAX,EDX
00611CC8  C1 F8 0A                  SAR EAX,0xa
00611CCB  03 C3                     ADD EAX,EBX
00611CCD  50                        PUSH EAX
00611CCE  E8 9B 2F DF FF            CALL 0x00404c6e
00611CD3  0F BF 8E ED 01 00 00      MOVSX ECX,word ptr [ESI + 0x1ed]
00611CDA  0F BF 96 EB 01 00 00      MOVSX EDX,word ptr [ESI + 0x1eb]
00611CE1  50                        PUSH EAX
00611CE2  51                        PUSH ECX
00611CE3  0F BF 86 E9 01 00 00      MOVSX EAX,word ptr [ESI + 0x1e9]
00611CEA  52                        PUSH EDX
00611CEB  50                        PUSH EAX
00611CEC  8B CE                     MOV ECX,ESI
00611CEE  E8 01 1D DF FF            CALL 0x004039f4
00611CF3  6A 00                     PUSH 0x0
00611CF5  6A 01                     PUSH 0x1
00611CF7  8B CE                     MOV ECX,ESI
00611CF9  E8 95 3C DF FF            CALL 0x00405993
00611CFE  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
00611D04  84 C0                     TEST AL,AL
00611D06  74 16                     JZ 0x00611d1e
00611D08  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611D0E  85 C9                     TEST ECX,ECX
00611D10  74 0C                     JZ 0x00611d1e
00611D12  E8 F8 1F DF FF            CALL 0x00403d0f
00611D17  C6 86 50 02 00 00 00      MOV byte ptr [ESI + 0x250],0x0
LAB_00611d1e:
00611D1E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00611D21  C7 86 0C 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x20c],0x1
00611D2B  5F                        POP EDI
00611D2C  5E                        POP ESI
00611D2D  5B                        POP EBX
00611D2E  8B E5                     MOV ESP,EBP
00611D30  5D                        POP EBP
00611D31  C3                        RET
switchD_006101d2::caseD_7:
00611D32  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
00611D38  84 C0                     TEST AL,AL
00611D3A  0F 84 E0 09 00 00         JZ 0x00612720
00611D40  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611D46  85 C9                     TEST ECX,ECX
00611D48  0F 84 D2 09 00 00         JZ 0x00612720
00611D4E  6A 0D                     PUSH 0xd
00611D50  E8 5A 25 DF FF            CALL 0x004042af
00611D55  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611D5B  6A 0E                     PUSH 0xe
00611D5D  8B F8                     MOV EDI,EAX
00611D5F  E8 4B 25 DF FF            CALL 0x004042af
00611D64  83 FF 0F                  CMP EDI,0xf
00611D67  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00611D6A  7C 58                     JL 0x00611dc4
00611D6C  75 1A                     JNZ 0x00611d88
00611D6E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00611D74  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00611D7A  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611D80  52                        PUSH EDX
00611D81  6A 0F                     PUSH 0xf
00611D83  E8 B8 34 DF FF            CALL 0x00405240
LAB_00611d88:
00611D88  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611D8E  6A 0F                     PUSH 0xf
00611D90  E8 1A 25 DF FF            CALL 0x004042af
00611D95  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611D9B  6A 0F                     PUSH 0xf
00611D9D  8B D8                     MOV EBX,EAX
00611D9F  E8 18 13 DF FF            CALL 0x004030bc
00611DA4  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611DAA  6A 0F                     PUSH 0xf
00611DAC  E8 FB 04 DF FF            CALL 0x004022ac
00611DB1  3B D8                     CMP EBX,EAX
00611DB3  7D 01                     JGE 0x00611db6
00611DB5  43                        INC EBX
LAB_00611db6:
00611DB6  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611DBC  53                        PUSH EBX
00611DBD  6A 0F                     PUSH 0xf
00611DBF  E8 A0 F2 DE FF            CALL 0x00401064
LAB_00611dc4:
00611DC4  8A 86 51 02 00 00         MOV AL,byte ptr [ESI + 0x251]
00611DCA  84 C0                     TEST AL,AL
00611DCC  74 2E                     JZ 0x00611dfc
00611DCE  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611DD4  6A 0E                     PUSH 0xe
00611DD6  E8 D1 04 DF FF            CALL 0x004022ac
00611DDB  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611DE1  8B D8                     MOV EBX,EAX
00611DE3  6A 0E                     PUSH 0xe
00611DE5  4B                        DEC EBX
00611DE6  E8 C4 24 DF FF            CALL 0x004042af
00611DEB  3B D8                     CMP EBX,EAX
00611DED  75 0D                     JNZ 0x00611dfc
00611DEF  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611DF5  6A 0E                     PUSH 0xe
00611DF7  E8 68 24 DF FF            CALL 0x00404264
LAB_00611dfc:
00611DFC  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611E02  6A 0D                     PUSH 0xd
00611E04  E8 A3 04 DF FF            CALL 0x004022ac
00611E09  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611E0F  8B D8                     MOV EBX,EAX
00611E11  6A 0D                     PUSH 0xd
00611E13  4B                        DEC EBX
00611E14  E8 96 24 DF FF            CALL 0x004042af
00611E19  3B D8                     CMP EBX,EAX
00611E1B  75 0D                     JNZ 0x00611e2a
00611E1D  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611E23  6A 0D                     PUSH 0xd
00611E25  E8 3A 24 DF FF            CALL 0x00404264
LAB_00611e2a:
00611E2A  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611E30  6A 0F                     PUSH 0xf
00611E32  E8 75 04 DF FF            CALL 0x004022ac
00611E37  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611E3D  8B D8                     MOV EBX,EAX
00611E3F  6A 0F                     PUSH 0xf
00611E41  4B                        DEC EBX
00611E42  E8 68 24 DF FF            CALL 0x004042af
00611E47  3B D8                     CMP EBX,EAX
00611E49  75 14                     JNZ 0x00611e5f
00611E4B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00611E4E  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
00611E58  5F                        POP EDI
00611E59  5E                        POP ESI
00611E5A  5B                        POP EBX
00611E5B  8B E5                     MOV ESP,EBP
00611E5D  5D                        POP EBP
00611E5E  C3                        RET
LAB_00611e5f:
00611E5F  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611E65  6A 0D                     PUSH 0xd
00611E67  E8 40 04 DF FF            CALL 0x004022ac
00611E6C  3B F8                     CMP EDI,EAX
00611E6E  7D 01                     JGE 0x00611e71
00611E70  47                        INC EDI
LAB_00611e71:
00611E71  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611E77  6A 0E                     PUSH 0xe
00611E79  E8 2E 04 DF FF            CALL 0x004022ac
00611E7E  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00611E81  3B C8                     CMP ECX,EAX
00611E83  7D 01                     JGE 0x00611e86
00611E85  41                        INC ECX
LAB_00611e86:
00611E86  51                        PUSH ECX
00611E87  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611E8D  6A 0E                     PUSH 0xe
00611E8F  E8 D0 F1 DE FF            CALL 0x00401064
00611E94  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611E9A  6A 0E                     PUSH 0xe
00611E9C  E8 1B 12 DF FF            CALL 0x004030bc
00611EA1  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611EA7  57                        PUSH EDI
00611EA8  6A 0D                     PUSH 0xd
00611EAA  E8 B5 F1 DE FF            CALL 0x00401064
00611EAF  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611EB5  6A 0D                     PUSH 0xd
00611EB7  E8 00 12 DF FF            CALL 0x004030bc
00611EBC  DB 86 33 02 00 00         FILD dword ptr [ESI + 0x233]
00611EC2  51                        PUSH ECX
00611EC3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611EC9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611ECF  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00611ED5  D9 1C 24                  FSTP float ptr [ESP]
00611ED8  DB 86 2F 02 00 00         FILD dword ptr [ESI + 0x22f]
00611EDE  51                        PUSH ECX
00611EDF  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611EE5  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611EEB  D9 1C 24                  FSTP float ptr [ESP]
00611EEE  DB 86 2B 02 00 00         FILD dword ptr [ESI + 0x22b]
00611EF4  51                        PUSH ECX
00611EF5  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00611EFB  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00611F01  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00611F07  D9 1C 24                  FSTP float ptr [ESP]
00611F0A  E8 CA 26 DF FF            CALL 0x004045d9
00611F0F  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00611F15  85 FF                     TEST EDI,EDI
00611F17  0F 84 0A 08 00 00         JZ 0x00612727
00611F1D  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
00611F23  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00611F28  85 C9                     TEST ECX,ECX
00611F2A  7C 14                     JL 0x00611f40
00611F2C  F7 E9                     IMUL ECX
00611F2E  C1 FA 06                  SAR EDX,0x6
00611F31  8B C2                     MOV EAX,EDX
00611F33  C1 E8 1F                  SHR EAX,0x1f
00611F36  03 D0                     ADD EDX,EAX
00611F38  0F BF CA                  MOVSX ECX,DX
00611F3B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00611F3E  EB 13                     JMP 0x00611f53
LAB_00611f40:
00611F40  F7 E9                     IMUL ECX
00611F42  C1 FA 06                  SAR EDX,0x6
00611F45  8B C2                     MOV EAX,EDX
00611F47  C1 E8 1F                  SHR EAX,0x1f
00611F4A  03 D0                     ADD EDX,EAX
00611F4C  0F BF C2                  MOVSX EAX,DX
00611F4F  48                        DEC EAX
00611F50  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00611f53:
00611F53  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
00611F59  B8 79 19 8C 02            MOV EAX,0x28c1979
00611F5E  85 C9                     TEST ECX,ECX
00611F60  7C 10                     JL 0x00611f72
00611F62  F7 E9                     IMUL ECX
00611F64  D1 FA                     SAR EDX,0x1
00611F66  8B CA                     MOV ECX,EDX
00611F68  C1 E9 1F                  SHR ECX,0x1f
00611F6B  03 D1                     ADD EDX,ECX
00611F6D  0F BF DA                  MOVSX EBX,DX
00611F70  EB 0F                     JMP 0x00611f81
LAB_00611f72:
00611F72  F7 E9                     IMUL ECX
00611F74  D1 FA                     SAR EDX,0x1
00611F76  8B C2                     MOV EAX,EDX
00611F78  C1 E8 1F                  SHR EAX,0x1f
00611F7B  03 D0                     ADD EDX,EAX
00611F7D  0F BF DA                  MOVSX EBX,DX
00611F80  4B                        DEC EBX
LAB_00611f81:
00611F81  8B 8E 2B 02 00 00         MOV ECX,dword ptr [ESI + 0x22b]
00611F87  B8 79 19 8C 02            MOV EAX,0x28c1979
00611F8C  85 C9                     TEST ECX,ECX
00611F8E  7C 10                     JL 0x00611fa0
00611F90  F7 E9                     IMUL ECX
00611F92  D1 FA                     SAR EDX,0x1
00611F94  8B CA                     MOV ECX,EDX
00611F96  C1 E9 1F                  SHR ECX,0x1f
00611F99  03 D1                     ADD EDX,ECX
00611F9B  0F BF C2                  MOVSX EAX,DX
00611F9E  EB 0F                     JMP 0x00611faf
LAB_00611fa0:
00611FA0  F7 E9                     IMUL ECX
00611FA2  D1 FA                     SAR EDX,0x1
00611FA4  8B C2                     MOV EAX,EDX
00611FA6  C1 E8 1F                  SHR EAX,0x1f
00611FA9  03 D0                     ADD EDX,EAX
00611FAB  0F BF C2                  MOVSX EAX,DX
00611FAE  48                        DEC EAX
LAB_00611faf:
00611FAF  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00611FB6  74 68                     JZ 0x00612020
00611FB8  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
00611FBE  85 C9                     TEST ECX,ECX
00611FC0  74 5E                     JZ 0x00612020
00611FC2  8D 4D F8                  LEA ECX,[EBP + -0x8]
00611FC5  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00611FC8  51                        PUSH ECX
00611FC9  52                        PUSH EDX
00611FCA  53                        PUSH EBX
00611FCB  50                        PUSH EAX
00611FCC  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00611FD2  8B CF                     MOV ECX,EDI
00611FD4  50                        PUSH EAX
00611FD5  E8 79 1F DF FF            CALL 0x00403f53
00611FDA  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00611FDD  85 C0                     TEST EAX,EAX
00611FDF  7C 3F                     JL 0x00612020
00611FE1  83 F8 05                  CMP EAX,0x5
00611FE4  7D 3A                     JGE 0x00612020
00611FE6  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00611FE9  85 D2                     TEST EDX,EDX
00611FEB  7C 33                     JL 0x00612020
00611FED  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00611FF0  3B D1                     CMP EDX,ECX
00611FF2  7D 2C                     JGE 0x00612020
00611FF4  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
00611FFB  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00611FFE  03 C3                     ADD EAX,EBX
00612000  85 C0                     TEST EAX,EAX
00612002  7C 1C                     JL 0x00612020
00612004  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00612007  7D 17                     JGE 0x00612020
00612009  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0061200C  85 FF                     TEST EDI,EDI
0061200E  74 10                     JZ 0x00612020
00612010  0F AF C1                  IMUL EAX,ECX
00612013  03 C7                     ADD EAX,EDI
00612015  33 C9                     XOR ECX,ECX
00612017  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0061201A  8B C1                     MOV EAX,ECX
0061201C  85 C0                     TEST EAX,EAX
0061201E  74 2C                     JZ 0x0061204c
LAB_00612020:
00612020  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
00612026  84 C0                     TEST AL,AL
00612028  0F 85 F9 06 00 00         JNZ 0x00612727
0061202E  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00612034  6A 00                     PUSH 0x0
00612036  E8 47 09 DF FF            CALL 0x00402982
0061203B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0061203E  C6 86 50 02 00 00 01      MOV byte ptr [ESI + 0x250],0x1
00612045  5F                        POP EDI
00612046  5E                        POP ESI
00612047  5B                        POP EBX
00612048  8B E5                     MOV ESP,EBP
0061204A  5D                        POP EBP
0061204B  C3                        RET
LAB_0061204c:
0061204C  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
00612052  84 C0                     TEST AL,AL
00612054  0F 84 CD 06 00 00         JZ 0x00612727
0061205A  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00612060  E8 AA 1C DF FF            CALL 0x00403d0f
00612065  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00612068  C6 86 50 02 00 00 00      MOV byte ptr [ESI + 0x250],0x0
0061206F  5F                        POP EDI
00612070  5E                        POP ESI
00612071  5B                        POP EBX
00612072  8B E5                     MOV ESP,EBP
00612074  5D                        POP EBP
00612075  C3                        RET
switchD_006101d2::caseD_8:
00612076  66 8B 96 5A 02 00 00      MOV DX,word ptr [ESI + 0x25a]
0061207D  66 8B 86 5C 02 00 00      MOV AX,word ptr [ESI + 0x25c]
00612084  66 8B 8E 5E 02 00 00      MOV CX,word ptr [ESI + 0x25e]
0061208B  66 89 96 60 02 00 00      MOV word ptr [ESI + 0x260],DX
00612092  66 89 86 62 02 00 00      MOV word ptr [ESI + 0x262],AX
00612099  66 89 8E 64 02 00 00      MOV word ptr [ESI + 0x264],CX
006120A0  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006120A6  8B 8E 94 02 00 00         MOV ECX,dword ptr [ESI + 0x294]
006120AC  8B BA E4 00 00 00         MOV EDI,dword ptr [EDX + 0xe4]
006120B2  2B F9                     SUB EDI,ECX
006120B4  83 FF 02                  CMP EDI,0x2
006120B7  75 15                     JNZ 0x006120ce
006120B9  83 BE F7 01 00 00 01      CMP dword ptr [ESI + 0x1f7],0x1
006120C0  75 0C                     JNZ 0x006120ce
006120C2  68 8B 04 00 00            PUSH 0x48b
006120C7  8B CE                     MOV ECX,ESI
006120C9  E8 3A 3C DF FF            CALL 0x00405d08
LAB_006120ce:
006120CE  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006120D4  8B 96 7C 02 00 00         MOV EDX,dword ptr [ESI + 0x27c]
006120DA  0F AF CF                  IMUL ECX,EDI
006120DD  0F AF D1                  IMUL EDX,ECX
006120E0  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006120E5  F7 EA                     IMUL EDX
006120E7  C1 FA 0C                  SAR EDX,0xc
006120EA  8B C2                     MOV EAX,EDX
006120EC  C1 E8 1F                  SHR EAX,0x1f
006120EF  03 D0                     ADD EDX,EAX
006120F1  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006120F6  66 8B FA                  MOV DI,DX
006120F9  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
006120FF  0F AF D1                  IMUL EDX,ECX
00612102  F7 EA                     IMUL EDX
00612104  C1 FA 0C                  SAR EDX,0xc
00612107  8B C2                     MOV EAX,EDX
00612109  66 03 BE E9 01 00 00      ADD DI,word ptr [ESI + 0x1e9]
00612110  C1 E8 1F                  SHR EAX,0x1f
00612113  03 D0                     ADD EDX,EAX
00612115  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061211A  66 8B DA                  MOV BX,DX
0061211D  8B 96 84 02 00 00         MOV EDX,dword ptr [ESI + 0x284]
00612123  0F AF D1                  IMUL EDX,ECX
00612126  F7 EA                     IMUL EDX
00612128  66 03 9E EB 01 00 00      ADD BX,word ptr [ESI + 0x1eb]
0061212F  66 89 BE 5A 02 00 00      MOV word ptr [ESI + 0x25a],DI
00612136  C1 FA 0C                  SAR EDX,0xc
00612139  8B C2                     MOV EAX,EDX
0061213B  66 89 9E 5C 02 00 00      MOV word ptr [ESI + 0x25c],BX
00612142  C1 E8 1F                  SHR EAX,0x1f
00612145  03 D0                     ADD EDX,EAX
00612147  66 03 96 ED 01 00 00      ADD DX,word ptr [ESI + 0x1ed]
0061214E  81 F9 48 06 00 00         CMP ECX,0x648
00612154  66 89 55 FE               MOV word ptr [EBP + -0x2],DX
00612158  66 89 96 5E 02 00 00      MOV word ptr [ESI + 0x25e],DX
0061215F  0F 8E C2 00 00 00         JLE 0x00612227
00612165  C7 86 56 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x256],0x2
0061216F  C7 86 0C 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x20c],0x4
00612179  66 C7 86 70 02 00 00 FF FF  MOV word ptr [ESI + 0x270],0xffff
00612182  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00612185  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0061218B  BF 0B 00 00 00            MOV EDI,0xb
00612190  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00612196  33 D2                     XOR EDX,EDX
00612198  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0061219B  C1 E8 10                  SHR EAX,0x10
0061219E  F7 F7                     DIV EDI
006121A0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006121A5  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
006121AB  8D 54 02 0A               LEA EDX,[EDX + EAX*0x1 + 0xa]
006121AF  89 96 94 02 00 00         MOV dword ptr [ESI + 0x294],EDX
006121B5  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006121BA  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
006121C0  8D 45 EC                  LEA EAX,[EBP + -0x14]
006121C3  89 96 98 02 00 00         MOV dword ptr [ESI + 0x298],EDX
006121C9  50                        PUSH EAX
006121CA  8D 55 F0                  LEA EDX,[EBP + -0x10]
006121CD  8D 45 F4                  LEA EAX,[EBP + -0xc]
006121D0  52                        PUSH EDX
006121D1  50                        PUSH EAX
006121D2  51                        PUSH ECX
006121D3  8B CE                     MOV ECX,ESI
006121D5  E8 FA 05 DF FF            CALL 0x004027d4
006121DA  85 C0                     TEST EAX,EAX
006121DC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006121DF  7F 1B                     JG 0x006121fc
LAB_006121e1:
006121E1  8B CE                     MOV ECX,ESI
006121E3  E8 55 24 DF FF            CALL 0x0040463d
006121E8  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006121EB  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
006121F5  5F                        POP EDI
006121F6  5E                        POP ESI
006121F7  5B                        POP EBX
006121F8  8B E5                     MOV ESP,EBP
006121FA  5D                        POP EBP
006121FB  C3                        RET
LAB_006121fc:
006121FC  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
00612200  66 8B 55 F0               MOV DX,word ptr [EBP + -0x10]
00612204  66 8B 45 EC               MOV AX,word ptr [EBP + -0x14]
00612208  66 89 8E 5A 02 00 00      MOV word ptr [ESI + 0x25a],CX
0061220F  66 89 96 5C 02 00 00      MOV word ptr [ESI + 0x25c],DX
00612216  66 89 86 5E 02 00 00      MOV word ptr [ESI + 0x25e],AX
0061221D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00612220  5F                        POP EDI
00612221  5E                        POP ESI
00612222  5B                        POP EBX
00612223  8B E5                     MOV ESP,EBP
00612225  5D                        POP EBP
00612226  C3                        RET
LAB_00612227:
00612227  66 85 FF                  TEST DI,DI
0061222A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00612231  B8 79 19 8C 02            MOV EAX,0x28c1979
00612236  0F BF CF                  MOVSX ECX,DI
00612239  7C 10                     JL 0x0061224b
0061223B  F7 E9                     IMUL ECX
0061223D  D1 FA                     SAR EDX,0x1
0061223F  8B C2                     MOV EAX,EDX
00612241  C1 E8 1F                  SHR EAX,0x1f
00612244  03 D0                     ADD EDX,EAX
00612246  0F BF C2                  MOVSX EAX,DX
00612249  EB 0F                     JMP 0x0061225a
LAB_0061224b:
0061224B  F7 E9                     IMUL ECX
0061224D  D1 FA                     SAR EDX,0x1
0061224F  8B C2                     MOV EAX,EDX
00612251  C1 E8 1F                  SHR EAX,0x1f
00612254  03 D0                     ADD EDX,EAX
00612256  0F BF C2                  MOVSX EAX,DX
00612259  48                        DEC EAX
LAB_0061225a:
0061225A  0F BF 96 15 02 00 00      MOVSX EDX,word ptr [ESI + 0x215]
00612261  3B D0                     CMP EDX,EAX
00612263  75 78                     JNZ 0x006122dd
00612265  66 85 DB                  TEST BX,BX
00612268  0F BF D3                  MOVSX EDX,BX
0061226B  B8 79 19 8C 02            MOV EAX,0x28c1979
00612270  7C 10                     JL 0x00612282
00612272  F7 EA                     IMUL EDX
00612274  D1 FA                     SAR EDX,0x1
00612276  8B C2                     MOV EAX,EDX
00612278  C1 E8 1F                  SHR EAX,0x1f
0061227B  03 D0                     ADD EDX,EAX
0061227D  0F BF C2                  MOVSX EAX,DX
00612280  EB 0F                     JMP 0x00612291
LAB_00612282:
00612282  F7 EA                     IMUL EDX
00612284  D1 FA                     SAR EDX,0x1
00612286  8B C2                     MOV EAX,EDX
00612288  C1 E8 1F                  SHR EAX,0x1f
0061228B  03 D0                     ADD EDX,EAX
0061228D  0F BF C2                  MOVSX EAX,DX
00612290  48                        DEC EAX
LAB_00612291:
00612291  0F BF 96 17 02 00 00      MOVSX EDX,word ptr [ESI + 0x217]
00612298  3B D0                     CMP EDX,EAX
0061229A  75 41                     JNZ 0x006122dd
0061229C  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
006122A0  66 85 C0                  TEST AX,AX
006122A3  0F BF D0                  MOVSX EDX,AX
006122A6  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006122AB  7C 11                     JL 0x006122be
006122AD  F7 EA                     IMUL EDX
006122AF  C1 FA 06                  SAR EDX,0x6
006122B2  8B C2                     MOV EAX,EDX
006122B4  C1 E8 1F                  SHR EAX,0x1f
006122B7  03 D0                     ADD EDX,EAX
006122B9  0F BF C2                  MOVSX EAX,DX
006122BC  EB 10                     JMP 0x006122ce
LAB_006122be:
006122BE  F7 EA                     IMUL EDX
006122C0  C1 FA 06                  SAR EDX,0x6
006122C3  8B C2                     MOV EAX,EDX
006122C5  C1 E8 1F                  SHR EAX,0x1f
006122C8  03 D0                     ADD EDX,EAX
006122CA  0F BF C2                  MOVSX EAX,DX
006122CD  48                        DEC EAX
LAB_006122ce:
006122CE  0F BF 96 19 02 00 00      MOVSX EDX,word ptr [ESI + 0x219]
006122D5  3B D0                     CMP EDX,EAX
006122D7  0F 84 95 00 00 00         JZ 0x00612372
LAB_006122dd:
006122DD  8B 96 F7 01 00 00         MOV EDX,dword ptr [ESI + 0x1f7]
006122E3  33 C0                     XOR EAX,EAX
006122E5  83 FA 02                  CMP EDX,0x2
006122E8  8B 96 FB 01 00 00         MOV EDX,dword ptr [ESI + 0x1fb]
006122EE  0F 94 C0                  SETZ AL
006122F1  6A 00                     PUSH 0x0
006122F3  50                        PUSH EAX
006122F4  66 8B 86 FF 01 00 00      MOV AX,word ptr [ESI + 0x1ff]
006122FB  68 B0 00 00 00            PUSH 0xb0
00612300  50                        PUSH EAX
00612301  8B 86 1B 02 00 00         MOV EAX,dword ptr [ESI + 0x21b]
00612307  52                        PUSH EDX
00612308  8B 96 D9 01 00 00         MOV EDX,dword ptr [ESI + 0x1d9]
0061230E  50                        PUSH EAX
0061230F  52                        PUSH EDX
00612310  0F BF 86 64 02 00 00      MOVSX EAX,word ptr [ESI + 0x264]
00612317  0F BF 96 62 02 00 00      MOVSX EDX,word ptr [ESI + 0x262]
0061231E  50                        PUSH EAX
0061231F  52                        PUSH EDX
00612320  0F BF 86 60 02 00 00      MOVSX EAX,word ptr [ESI + 0x260]
00612327  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
0061232B  50                        PUSH EAX
0061232C  52                        PUSH EDX
0061232D  0F BF C3                  MOVSX EAX,BX
00612330  50                        PUSH EAX
00612331  51                        PUSH ECX
00612332  8D 8E EB 02 00 00         LEA ECX,[ESI + 0x2eb]
00612338  E8 D9 21 DF FF            CALL 0x00404516
0061233D  8B F8                     MOV EDI,EAX
0061233F  85 FF                     TEST EDI,EDI
00612341  7E 32                     JLE 0x00612375
00612343  83 FF 05                  CMP EDI,0x5
00612346  75 13                     JNZ 0x0061235b
00612348  8B CE                     MOV ECX,ESI
0061234A  E8 EE 22 DF FF            CALL 0x0040463d
0061234F  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
00612359  EB 1A                     JMP 0x00612375
LAB_0061235b:
0061235B  8B 8E 0C 02 00 00         MOV ECX,dword ptr [ESI + 0x20c]
00612361  51                        PUSH ECX
00612362  57                        PUSH EDI
00612363  8B CE                     MOV ECX,ESI
00612365  E8 4A 0B DF FF            CALL 0x00402eb4
0061236A  89 86 0C 02 00 00         MOV dword ptr [ESI + 0x20c],EAX
00612370  EB 03                     JMP 0x00612375
LAB_00612372:
00612372  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00612375:
00612375  0F BF 86 5A 02 00 00      MOVSX EAX,word ptr [ESI + 0x25a]
0061237C  0F BF 8E 5C 02 00 00      MOVSX ECX,word ptr [ESI + 0x25c]
00612383  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
0061238A  85 FF                     TEST EDI,EDI
0061238C  89 86 2B 02 00 00         MOV dword ptr [ESI + 0x22b],EAX
00612392  89 8E 2F 02 00 00         MOV dword ptr [ESI + 0x22f],ECX
00612398  89 96 33 02 00 00         MOV dword ptr [ESI + 0x233],EDX
0061239E  75 5D                     JNZ 0x006123fd
006123A0  8B BE F7 01 00 00         MOV EDI,dword ptr [ESI + 0x1f7]
006123A6  85 FF                     TEST EDI,EDI
006123A8  74 05                     JZ 0x006123af
006123AA  83 FF 02                  CMP EDI,0x2
006123AD  75 4E                     JNZ 0x006123fd
LAB_006123af:
006123AF  8B BE 48 02 00 00         MOV EDI,dword ptr [ESI + 0x248]
006123B5  85 FF                     TEST EDI,EDI
006123B7  7D 19                     JGE 0x006123d2
006123B9  6A 00                     PUSH 0x0
006123BB  6A 00                     PUSH 0x0
006123BD  6A FF                     PUSH -0x1
006123BF  6A 00                     PUSH 0x0
006123C1  6A 00                     PUSH 0x0
006123C3  6A 00                     PUSH 0x0
006123C5  6A 00                     PUSH 0x0
006123C7  6A 00                     PUSH 0x0
006123C9  6A 00                     PUSH 0x0
006123CB  52                        PUSH EDX
006123CC  51                        PUSH ECX
006123CD  50                        PUSH EAX
006123CE  6A 00                     PUSH 0x0
006123D0  EB 1C                     JMP 0x006123ee
LAB_006123d2:
006123D2  83 FF 05                  CMP EDI,0x5
006123D5  7D 26                     JGE 0x006123fd
006123D7  6A 00                     PUSH 0x0
006123D9  6A 00                     PUSH 0x0
006123DB  6A FF                     PUSH -0x1
006123DD  6A 00                     PUSH 0x0
006123DF  6A 00                     PUSH 0x0
006123E1  6A 00                     PUSH 0x0
006123E3  6A 00                     PUSH 0x0
006123E5  6A 00                     PUSH 0x0
006123E7  6A 00                     PUSH 0x0
006123E9  52                        PUSH EDX
006123EA  51                        PUSH ECX
006123EB  50                        PUSH EAX
006123EC  6A 05                     PUSH 0x5
LAB_006123ee:
006123EE  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
006123F4  6A 01                     PUSH 0x1
006123F6  6A 01                     PUSH 0x1
006123F8  E8 36 F0 DE FF            CALL 0x00401433
LAB_006123fd:
006123FD  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
00612403  84 C0                     TEST AL,AL
00612405  0F 84 1C 03 00 00         JZ 0x00612727
0061240B  8B 86 52 02 00 00         MOV EAX,dword ptr [ESI + 0x252]
00612411  85 C0                     TEST EAX,EAX
00612413  0F 84 0E 03 00 00         JZ 0x00612727
00612419  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
0061241F  33 DB                     XOR EBX,EBX
00612421  2B C3                     SUB EAX,EBX
00612423  74 34                     JZ 0x00612459
00612425  48                        DEC EAX
00612426  74 0E                     JZ 0x00612436
00612428  48                        DEC EAX
00612429  74 2E                     JZ 0x00612459
0061242B  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
00612431  E9 42 01 00 00            JMP 0x00612578
LAB_00612436:
00612436  8B 8E 37 02 00 00         MOV ECX,dword ptr [ESI + 0x237]
0061243C  41                        INC ECX
0061243D  8B C1                     MOV EAX,ECX
0061243F  89 8E 37 02 00 00         MOV dword ptr [ESI + 0x237],ECX
00612445  83 F8 0A                  CMP EAX,0xa
00612448  0F 8C 2A 01 00 00         JL 0x00612578
0061244E  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
00612454  E9 1F 01 00 00            JMP 0x00612578
LAB_00612459:
00612459  0F BF 96 60 02 00 00      MOVSX EDX,word ptr [ESI + 0x260]
00612460  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00612463  6A 01                     PUSH 0x1
00612465  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00612468  0F BF 86 62 02 00 00      MOVSX EAX,word ptr [ESI + 0x262]
0061246F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00612475  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00612478  53                        PUSH EBX
00612479  0F BF 8E 64 02 00 00      MOVSX ECX,word ptr [ESI + 0x264]
00612480  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00612486  53                        PUSH EBX
00612487  53                        PUSH EBX
00612488  53                        PUSH EBX
00612489  53                        PUSH EBX
0061248A  D9 5D BC                  FSTP float ptr [EBP + -0x44]
0061248D  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00612490  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00612493  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00612499  8D 55 BC                  LEA EDX,[EBP + -0x44]
0061249C  53                        PUSH EBX
0061249D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006124A3  8D 45 AC                  LEA EAX,[EBP + -0x54]
006124A6  52                        PUSH EDX
006124A7  50                        PUSH EAX
006124A8  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006124AE  D9 5D C0                  FSTP float ptr [EBP + -0x40]
006124B1  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006124B4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006124BA  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006124C0  D9 5D C4                  FSTP float ptr [EBP + -0x3c]
006124C3  E8 08 01 0D 00            CALL 0x006e25d0
006124C8  0F BF 8E 5A 02 00 00      MOVSX ECX,word ptr [ESI + 0x25a]
006124CF  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006124D2  6A 01                     PUSH 0x1
006124D4  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006124D7  0F BF 96 5C 02 00 00      MOVSX EDX,word ptr [ESI + 0x25c]
006124DE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006124E4  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006124E7  53                        PUSH EBX
006124E8  0F BF 86 5E 02 00 00      MOVSX EAX,word ptr [ESI + 0x25e]
006124EF  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006124F5  53                        PUSH EBX
006124F6  53                        PUSH EBX
006124F7  53                        PUSH EBX
006124F8  53                        PUSH EBX
006124F9  D9 5D C8                  FSTP float ptr [EBP + -0x38]
006124FC  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006124FF  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00612502  8D 4D C8                  LEA ECX,[EBP + -0x38]
00612505  53                        PUSH EBX
00612506  8D 55 9C                  LEA EDX,[EBP + -0x64]
00612509  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061250F  51                        PUSH ECX
00612510  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00612516  52                        PUSH EDX
00612517  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061251D  D9 5D CC                  FSTP float ptr [EBP + -0x34]
00612520  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00612523  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00612529  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061252F  D9 5D D0                  FSTP float ptr [EBP + -0x30]
00612532  E8 99 00 0D 00            CALL 0x006e25d0
00612537  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0061253A  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0061253D  8B 06                     MOV EAX,dword ptr [ESI]
0061253F  C1 F9 10                  SAR ECX,0x10
00612542  C1 FA 10                  SAR EDX,0x10
00612545  51                        PUSH ECX
00612546  52                        PUSH EDX
00612547  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0061254A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0061254D  C1 F9 10                  SAR ECX,0x10
00612550  C1 FA 10                  SAR EDX,0x10
00612553  51                        PUSH ECX
00612554  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00612557  52                        PUSH EDX
00612558  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0061255B  C1 F9 10                  SAR ECX,0x10
0061255E  C1 FA 10                  SAR EDX,0x10
00612561  51                        PUSH ECX
00612562  52                        PUSH EDX
00612563  8B CE                     MOV ECX,ESI
00612565  FF 50 14                  CALL dword ptr [EAX + 0x14]
00612568  0F BF C0                  MOVSX EAX,AX
0061256B  8B 0C 85 38 21 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d2138]
00612572  89 8E 37 02 00 00         MOV dword ptr [ESI + 0x237],ECX
LAB_00612578:
00612578  8B 96 37 02 00 00         MOV EDX,dword ptr [ESI + 0x237]
0061257E  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00612584  52                        PUSH EDX
00612585  6A 0D                     PUSH 0xd
00612587  E8 D8 EA DE FF            CALL 0x00401064
0061258C  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00612592  6A 0D                     PUSH 0xd
00612594  E8 23 0B DF FF            CALL 0x004030bc
00612599  DB 86 33 02 00 00         FILD dword ptr [ESI + 0x233]
0061259F  51                        PUSH ECX
006125A0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006125A6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006125AC  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006125B2  D9 1C 24                  FSTP float ptr [ESP]
006125B5  DB 86 2F 02 00 00         FILD dword ptr [ESI + 0x22f]
006125BB  51                        PUSH ECX
006125BC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006125C2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006125C8  D9 1C 24                  FSTP float ptr [ESP]
006125CB  DB 86 2B 02 00 00         FILD dword ptr [ESI + 0x22b]
006125D1  51                        PUSH ECX
006125D2  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006125D8  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006125DE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006125E4  D9 1C 24                  FSTP float ptr [ESP]
006125E7  E8 ED 1F DF FF            CALL 0x004045d9
006125EC  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
006125F2  3B FB                     CMP EDI,EBX
006125F4  0F 84 F2 EF FF FF         JZ 0x006115ec
006125FA  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
00612600  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00612605  3B CB                     CMP ECX,EBX
00612607  7C 14                     JL 0x0061261d
00612609  F7 E9                     IMUL ECX
0061260B  C1 FA 06                  SAR EDX,0x6
0061260E  8B C2                     MOV EAX,EDX
00612610  C1 E8 1F                  SHR EAX,0x1f
00612613  03 D0                     ADD EDX,EAX
00612615  0F BF CA                  MOVSX ECX,DX
00612618  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0061261B  EB 13                     JMP 0x00612630
LAB_0061261d:
0061261D  F7 E9                     IMUL ECX
0061261F  C1 FA 06                  SAR EDX,0x6
00612622  8B C2                     MOV EAX,EDX
00612624  C1 E8 1F                  SHR EAX,0x1f
00612627  03 D0                     ADD EDX,EAX
00612629  0F BF C2                  MOVSX EAX,DX
0061262C  48                        DEC EAX
0061262D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00612630:
00612630  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
00612636  B8 79 19 8C 02            MOV EAX,0x28c1979
0061263B  3B CB                     CMP ECX,EBX
0061263D  7C 10                     JL 0x0061264f
0061263F  F7 E9                     IMUL ECX
00612641  D1 FA                     SAR EDX,0x1
00612643  8B CA                     MOV ECX,EDX
00612645  C1 E9 1F                  SHR ECX,0x1f
00612648  03 D1                     ADD EDX,ECX
0061264A  0F BF DA                  MOVSX EBX,DX
0061264D  EB 0F                     JMP 0x0061265e
LAB_0061264f:
0061264F  F7 E9                     IMUL ECX
00612651  D1 FA                     SAR EDX,0x1
00612653  8B C2                     MOV EAX,EDX
00612655  C1 E8 1F                  SHR EAX,0x1f
00612658  03 D0                     ADD EDX,EAX
0061265A  0F BF DA                  MOVSX EBX,DX
0061265D  4B                        DEC EBX
LAB_0061265e:
0061265E  8B 8E 2B 02 00 00         MOV ECX,dword ptr [ESI + 0x22b]
00612664  B8 79 19 8C 02            MOV EAX,0x28c1979
00612669  85 C9                     TEST ECX,ECX
0061266B  7C 10                     JL 0x0061267d
0061266D  F7 E9                     IMUL ECX
0061266F  D1 FA                     SAR EDX,0x1
00612671  8B CA                     MOV ECX,EDX
00612673  C1 E9 1F                  SHR ECX,0x1f
00612676  03 D1                     ADD EDX,ECX
00612678  0F BF C2                  MOVSX EAX,DX
0061267B  EB 0F                     JMP 0x0061268c
LAB_0061267d:
0061267D  F7 E9                     IMUL ECX
0061267F  D1 FA                     SAR EDX,0x1
00612681  8B C2                     MOV EAX,EDX
00612683  C1 E8 1F                  SHR EAX,0x1f
00612686  03 D0                     ADD EDX,EAX
00612688  0F BF C2                  MOVSX EAX,DX
0061268B  48                        DEC EAX
LAB_0061268c:
0061268C  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00612693  0F 84 76 F5 FF FF         JZ 0x00611c0f
00612699  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
0061269F  85 C9                     TEST ECX,ECX
006126A1  0F 84 68 F5 FF FF         JZ 0x00611c0f
006126A7  8D 4D F8                  LEA ECX,[EBP + -0x8]
006126AA  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006126AD  51                        PUSH ECX
006126AE  52                        PUSH EDX
006126AF  53                        PUSH EBX
006126B0  50                        PUSH EAX
006126B1  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
006126B7  8B CF                     MOV ECX,EDI
006126B9  50                        PUSH EAX
006126BA  E8 94 18 DF FF            CALL 0x00403f53
006126BF  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006126C2  85 C0                     TEST EAX,EAX
006126C4  0F 8C 45 F5 FF FF         JL 0x00611c0f
006126CA  83 F8 05                  CMP EAX,0x5
006126CD  0F 8D 3C F5 FF FF         JGE 0x00611c0f
006126D3  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006126D6  85 D2                     TEST EDX,EDX
006126D8  0F 8C 31 F5 FF FF         JL 0x00611c0f
006126DE  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
006126E1  3B D1                     CMP EDX,ECX
006126E3  0F 8D 26 F5 FF FF         JGE 0x00611c0f
006126E9  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
006126F0  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006126F3  03 C3                     ADD EAX,EBX
006126F5  85 C0                     TEST EAX,EAX
006126F7  0F 8C 12 F5 FF FF         JL 0x00611c0f
006126FD  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00612700  0F 8D 09 F5 FF FF         JGE 0x00611c0f
00612706  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
00612709  85 FF                     TEST EDI,EDI
0061270B  0F 84 FE F4 FF FF         JZ 0x00611c0f
00612711  0F AF C1                  IMUL EAX,ECX
00612714  03 C7                     ADD EAX,EDI
00612716  33 C9                     XOR ECX,ECX
00612718  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0061271B  E9 41 E9 FF FF            JMP 0x00611061
switchD_006101d2::caseD_9:
00612720  8B CE                     MOV ECX,ESI
00612722  E8 16 1F DF FF            CALL 0x0040463d
switchD_006101d2::default:
00612727  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0061272A  5F                        POP EDI
0061272B  5E                        POP ESI
0061272C  5B                        POP EBX
0061272D  8B E5                     MOV ESP,EBP
0061272F  5D                        POP EBP
00612730  C3                        RET
