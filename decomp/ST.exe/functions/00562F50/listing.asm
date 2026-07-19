AiAiCalcMinesFields:
00562F50  55                        PUSH EBP
00562F51  8B EC                     MOV EBP,ESP
00562F53  6A FF                     PUSH -0x1
00562F55  68 F0 AF 79 00            PUSH 0x79aff0
00562F5A  68 64 D9 72 00            PUSH 0x72d964
00562F5F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00562F65  50                        PUSH EAX
00562F66  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00562F6D  81 EC C8 01 00 00         SUB ESP,0x1c8
00562F73  53                        PUSH EBX
00562F74  56                        PUSH ESI
00562F75  57                        PUSH EDI
00562F76  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00562F79  33 DB                     XOR EBX,EBX
00562F7B  89 5D 98                  MOV dword ptr [EBP + -0x68],EBX
00562F7E  89 5D 94                  MOV dword ptr [EBP + -0x6c],EBX
00562F81  39 5D 14                  CMP dword ptr [EBP + 0x14],EBX
00562F84  0F 84 E5 17 00 00         JZ 0x0056476f
00562F8A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00562F8D  3B D3                     CMP EDX,EBX
00562F8F  0F 8E DA 17 00 00         JLE 0x0056476f
00562F95  89 1D 18 33 80 00         MOV dword ptr [0x00803318],EBX
00562F9B  BE 01 00 00 00            MOV ESI,0x1
00562FA0  89 35 1C 33 80 00         MOV dword ptr [0x0080331c],ESI
00562FA6  BF 02 00 00 00            MOV EDI,0x2
00562FAB  89 3D 20 33 80 00         MOV dword ptr [0x00803320],EDI
00562FB1  B8 03 00 00 00            MOV EAX,0x3
00562FB6  A3 24 33 80 00            MOV [0x00803324],EAX
00562FBB  B9 05 00 00 00            MOV ECX,0x5
00562FC0  89 0D 28 33 80 00         MOV dword ptr [0x00803328],ECX
00562FC6  89 3D 2C 33 80 00         MOV dword ptr [0x0080332c],EDI
00562FCC  C7 05 30 33 80 00 08 00 00 00  MOV dword ptr [0x00803330],0x8
00562FD6  89 3D 34 33 80 00         MOV dword ptr [0x00803334],EDI
00562FDC  BF 0A 00 00 00            MOV EDI,0xa
00562FE1  89 3D 38 33 80 00         MOV dword ptr [0x00803338],EDI
00562FE7  89 35 3C 33 80 00         MOV dword ptr [0x0080333c],ESI
00562FED  89 35 40 33 80 00         MOV dword ptr [0x00803340],ESI
00562FF3  C7 05 44 33 80 00 64 00 00 00  MOV dword ptr [0x00803344],0x64
00562FFD  89 0D 48 33 80 00         MOV dword ptr [0x00803348],ECX
00563003  A3 4C 33 80 00            MOV [0x0080334c],EAX
00563008  A3 50 33 80 00            MOV [0x00803350],EAX
0056300D  C7 05 58 33 80 00 09 00 00 00  MOV dword ptr [0x00803358],0x9
00563017  C7 05 5C 33 80 00 16 00 00 00  MOV dword ptr [0x0080335c],0x16
00563021  A3 60 33 80 00            MOV [0x00803360],EAX
00563026  A3 64 33 80 00            MOV [0x00803364],EAX
0056302B  89 3D 68 33 80 00         MOV dword ptr [0x00803368],EDI
00563031  C7 05 6C 33 80 00 1E 00 00 00  MOV dword ptr [0x0080336c],0x1e
0056303B  C7 05 70 33 80 00 0F 00 00 00  MOV dword ptr [0x00803370],0xf
00563045  89 0D 54 33 80 00         MOV dword ptr [0x00803354],ECX
0056304B  89 1D B4 33 80 00         MOV dword ptr [0x008033b4],EBX
00563051  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
00563054  89 1D 00 33 80 00         MOV dword ptr [0x00803300],EBX
0056305A  89 1D 14 33 80 00         MOV dword ptr [0x00803314],EBX
00563060  89 1D 7C 33 80 00         MOV dword ptr [0x0080337c],EBX
00563066  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00563069  8D 48 0C                  LEA ECX,[EAX + 0xc]
0056306C  8B F2                     MOV ESI,EDX
0056306E  83 CF FF                  OR EDI,0xffffffff
LAB_00563071:
00563071  89 79 F8                  MOV dword ptr [ECX + -0x8],EDI
00563074  89 79 FC                  MOV dword ptr [ECX + -0x4],EDI
00563077  89 59 08                  MOV dword ptr [ECX + 0x8],EBX
0056307A  39 59 F4                  CMP dword ptr [ECX + -0xc],EBX
0056307D  7F 1F                     JG 0x0056309e
0056307F  8B 11                     MOV EDX,dword ptr [ECX]
00563081  3B D3                     CMP EDX,EBX
00563083  7E 19                     JLE 0x0056309e
00563085  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00563088  3B C3                     CMP EAX,EBX
0056308A  7E 12                     JLE 0x0056309e
0056308C  42                        INC EDX
0056308D  83 E2 FE                  AND EDX,0xfffffffe
00563090  40                        INC EAX
00563091  24 FE                     AND AL,0xfe
00563093  0F AF C2                  IMUL EAX,EDX
00563096  99                        CDQ
00563097  2B C2                     SUB EAX,EDX
00563099  D1 F8                     SAR EAX,0x1
0056309B  89 41 F4                  MOV dword ptr [ECX + -0xc],EAX
LAB_0056309e:
0056309E  89 19                     MOV dword ptr [ECX],EBX
005630A0  89 59 04                  MOV dword ptr [ECX + 0x4],EBX
005630A3  83 C1 18                  ADD ECX,0x18
005630A6  4E                        DEC ESI
005630A7  75 C8                     JNZ 0x00563071
005630A9  C7 05 90 33 80 00 2C 00 00 00  MOV dword ptr [0x00803390],0x2c
005630B3  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005630B6  8D 46 D4                  LEA EAX,[ESI + -0x2c]
005630B9  A3 BC 33 80 00            MOV [0x008033bc],EAX
005630BE  3B C3                     CMP EAX,EBX
005630C0  7D 06                     JGE 0x005630c8
005630C2  89 1D BC 33 80 00         MOV dword ptr [0x008033bc],EBX
LAB_005630c8:
005630C8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005630CB  8D 7A D4                  LEA EDI,[EDX + -0x2c]
005630CE  89 3D C0 33 80 00         MOV dword ptr [0x008033c0],EDI
005630D4  3B FB                     CMP EDI,EBX
005630D6  7D 08                     JGE 0x005630e0
005630D8  33 FF                     XOR EDI,EDI
005630DA  89 3D C0 33 80 00         MOV dword ptr [0x008033c0],EDI
LAB_005630e0:
005630E0  8D 4E 2C                  LEA ECX,[ESI + 0x2c]
005630E3  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
005630EA  3B C8                     CMP ECX,EAX
005630EC  7C 03                     JL 0x005630f1
005630EE  8D 48 FF                  LEA ECX,[EAX + -0x1]
LAB_005630f1:
005630F1  8D 42 2C                  LEA EAX,[EDX + 0x2c]
005630F4  0F BF 1D 7A B2 7F 00      MOVSX EBX,word ptr [0x007fb27a]
005630FB  3B C3                     CMP EAX,EBX
005630FD  7C 03                     JL 0x00563102
005630FF  8D 43 FF                  LEA EAX,[EBX + -0x1]
LAB_00563102:
00563102  8B 1D BC 33 80 00         MOV EBX,dword ptr [0x008033bc]
00563108  2B CB                     SUB ECX,EBX
0056310A  41                        INC ECX
0056310B  89 0D A4 33 80 00         MOV dword ptr [0x008033a4],ECX
00563111  2B C7                     SUB EAX,EDI
00563113  40                        INC EAX
00563114  A3 A8 33 80 00            MOV [0x008033a8],EAX
00563119  0F AF C1                  IMUL EAX,ECX
0056311C  A3 AC 33 80 00            MOV [0x008033ac],EAX
00563121  2B F3                     SUB ESI,EBX
00563123  89 35 04 33 80 00         MOV dword ptr [0x00803304],ESI
00563129  2B D7                     SUB EDX,EDI
0056312B  89 15 08 33 80 00         MOV dword ptr [0x00803308],EDX
00563131  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00563137  89 8D 4C FE FF FF         MOV dword ptr [EBP + 0xfffffe4c],ECX
0056313D  8D 95 4C FE FF FF         LEA EDX,[EBP + 0xfffffe4c]
00563143  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00563149  8D 85 50 FE FF FF         LEA EAX,[EBP + 0xfffffe50]
0056314F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00563152  51                        PUSH ECX
00563153  68 21 DA 72 00            PUSH 0x72da21
00563158  6A 02                     PUSH 0x2
0056315A  50                        PUSH EAX
0056315B  E8 90 A6 1C 00            CALL 0x0072d7f0
00563160  83 C4 10                  ADD ESP,0x10
00563163  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00563166  8B F0                     MOV ESI,EAX
00563168  85 F6                     TEST ESI,ESI
0056316A  0F 85 58 15 00 00         JNZ 0x005646c8
00563170  8B 15 AC 33 80 00         MOV EDX,dword ptr [0x008033ac]
00563176  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
00563179  50                        PUSH EAX
0056317A  E8 91 7A 14 00            CALL 0x006aac10
0056317F  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00563182  8B 0D AC 33 80 00         MOV ECX,dword ptr [0x008033ac]
00563188  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
0056318B  52                        PUSH EDX
0056318C  E8 7F 7A 14 00            CALL 0x006aac10
LAB_00563191:
00563191  A3 80 33 80 00            MOV [0x00803380],EAX
00563196  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00563199  B8 C0 02 00 00            MOV EAX,0x2c0
0056319E  E8 9D A8 1C 00            CALL 0x0072da40
005631A3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
005631A6  8B C4                     MOV EAX,ESP
005631A8  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
005631AE  B8 00 0B 00 00            MOV EAX,0xb00
005631B3  E8 88 A8 1C 00            CALL 0x0072da40
005631B8  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
005631BB  8B C4                     MOV EAX,ESP
005631BD  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
005631C0  B8 80 00 00 00            MOV EAX,0x80
005631C5  E8 76 A8 1C 00            CALL 0x0072da40
005631CA  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
005631CD  8B C4                     MOV EAX,ESP
005631CF  8B F8                     MOV EDI,EAX
005631D1  89 3D FC 32 80 00         MOV dword ptr [0x008032fc],EDI
005631D7  B8 40 00 00 00            MOV EAX,0x40
005631DC  E8 5F A8 1C 00            CALL 0x0072da40
005631E1  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
005631E4  8B C4                     MOV EAX,ESP
005631E6  A3 B0 33 80 00            MOV [0x008033b0],EAX
005631EB  B8 90 01 00 00            MOV EAX,0x190
005631F0  E8 4B A8 1C 00            CALL 0x0072da40
005631F5  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
005631F8  8B C4                     MOV EAX,ESP
005631FA  89 85 A4 FE FF FF         MOV dword ptr [EBP + 0xfffffea4],EAX
00563200  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00563203  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
0056320A  83 C0 03                  ADD EAX,0x3
0056320D  24 FC                     AND AL,0xfc
0056320F  E8 2C A8 1C 00            CALL 0x0072da40
00563214  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00563217  8B C4                     MOV EAX,ESP
00563219  8B D8                     MOV EBX,EAX
0056321B  89 9D 90 FE FF FF         MOV dword ptr [EBP + 0xfffffe90],EBX
00563221  B8 A0 0F 00 00            MOV EAX,0xfa0
00563226  E8 15 A8 1C 00            CALL 0x0072da40
0056322B  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0056322E  8B C4                     MOV EAX,ESP
00563230  A3 00 33 80 00            MOV [0x00803300],EAX
00563235  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00563238  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0056323B  C1 E0 02                  SHL EAX,0x2
0056323E  83 C0 03                  ADD EAX,0x3
00563241  24 FC                     AND AL,0xfc
00563243  E8 F8 A7 1C 00            CALL 0x0072da40
LAB_00563248:
00563248  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0056324B  8B C4                     MOV EAX,ESP
0056324D  A3 10 33 80 00            MOV [0x00803310],EAX
00563252  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00563259  B9 20 00 00 00            MOV ECX,0x20
0056325E  33 C0                     XOR EAX,EAX
00563260  F3 AB                     STOSD.REP ES:EDI
00563262  A1 FC 32 80 00            MOV EAX,[0x008032fc]
00563267  83 C0 40                  ADD EAX,0x40
0056326A  A3 B8 33 80 00            MOV [0x008033b8],EAX
0056326F  B9 10 00 00 00            MOV ECX,0x10
00563274  33 C0                     XOR EAX,EAX
00563276  8B 3D B0 33 80 00         MOV EDI,dword ptr [0x008033b0]
0056327C  F3 AB                     STOSD.REP ES:EDI
0056327E  A1 00 33 80 00            MOV EAX,[0x00803300]
00563283  A3 F8 32 80 00            MOV [0x008032f8],EAX
00563288  05 D0 07 00 00            ADD EAX,0x7d0
0056328D  A3 F4 32 80 00            MOV [0x008032f4],EAX
00563292  33 FF                     XOR EDI,EDI
00563294  33 C9                     XOR ECX,ECX
00563296  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00563299  85 F6                     TEST ESI,ESI
0056329B  7E 61                     JLE 0x005632fe
LAB_0056329d:
0056329D  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
005632A0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005632A3  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
005632A6  89 85 28 FE FF FF         MOV dword ptr [EBP + 0xfffffe28],EAX
005632AC  8B 00                     MOV EAX,dword ptr [EAX]
005632AE  85 C0                     TEST EAX,EAX
005632B0  7E 44                     JLE 0x005632f6
005632B2  33 F6                     XOR ESI,ESI
005632B4  85 FF                     TEST EDI,EDI
005632B6  7E 0C                     JLE 0x005632c4
LAB_005632b8:
005632B8  8B 0C B3                  MOV ECX,dword ptr [EBX + ESI*0x4]
005632BB  3B 01                     CMP EAX,dword ptr [ECX]
005632BD  7F 05                     JG 0x005632c4
005632BF  46                        INC ESI
005632C0  3B F7                     CMP ESI,EDI
005632C2  7C F4                     JL 0x005632b8
LAB_005632c4:
005632C4  3B F7                     CMP ESI,EDI
005632C6  7D 1E                     JGE 0x005632e6
005632C8  8B D6                     MOV EDX,ESI
005632CA  C1 E2 1E                  SHL EDX,0x1e
005632CD  2B D6                     SUB EDX,ESI
005632CF  03 D7                     ADD EDX,EDI
005632D1  C1 E2 02                  SHL EDX,0x2
005632D4  52                        PUSH EDX
005632D5  8D 04 B3                  LEA EAX,[EBX + ESI*0x4]
005632D8  50                        PUSH EAX
005632D9  8D 4C B3 04               LEA ECX,[EBX + ESI*0x4 + 0x4]
005632DD  51                        PUSH ECX
005632DE  E8 8D A7 1C 00            CALL 0x0072da70
005632E3  83 C4 0C                  ADD ESP,0xc
LAB_005632e6:
005632E6  8B 95 28 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe28]
005632EC  89 14 B3                  MOV dword ptr [EBX + ESI*0x4],EDX
005632EF  47                        INC EDI
005632F0  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
005632F3  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
LAB_005632f6:
005632F6  41                        INC ECX
005632F7  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
005632FA  3B CE                     CMP ECX,ESI
005632FC  7C 9F                     JL 0x0056329d
LAB_005632fe:
005632FE  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
00563301  83 CB FF                  OR EBX,0xffffffff
00563304  83 CE FF                  OR ESI,0xffffffff
00563307  89 B5 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ESI
0056330D  8B 8D 90 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe90]
00563313  8B 44 B9 FC               MOV EAX,dword ptr [ECX + EDI*0x4 + -0x4]
00563317  33 D2                     XOR EDX,EDX
00563319  83 38 1E                  CMP dword ptr [EAX],0x1e
0056331C  0F 9E C2                  SETLE DL
0056331F  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00563322  83 C7 FE                  ADD EDI,-0x2
00563325  85 FF                     TEST EDI,EDI
00563327  7C 48                     JL 0x00563371
LAB_00563329:
00563329  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
0056332C  8B 10                     MOV EDX,dword ptr [EAX]
0056332E  83 FA 0F                  CMP EDX,0xf
00563331  7E 35                     JLE 0x00563368
00563333  8B 8D 90 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe90]
00563339  8B 44 B9 04               MOV EAX,dword ptr [ECX + EDI*0x4 + 0x4]
0056333D  8B 08                     MOV ECX,dword ptr [EAX]
0056333F  8B C2                     MOV EAX,EDX
00563341  2B C1                     SUB EAX,ECX
00563343  3B C1                     CMP EAX,ECX
00563345  7E 21                     JLE 0x00563368
00563347  3B D8                     CMP EBX,EAX
00563349  7C 13                     JL 0x0056335e
0056334B  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0056334E  85 C9                     TEST ECX,ECX
00563350  74 16                     JZ 0x00563368
00563352  83 FA 1E                  CMP EDX,0x1e
00563355  7E 11                     JLE 0x00563368
00563357  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
LAB_0056335e:
0056335E  8B D8                     MOV EBX,EAX
00563360  8B F7                     MOV ESI,EDI
00563362  89 B5 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ESI
LAB_00563368:
00563368  4F                        DEC EDI
00563369  8B 8D 90 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe90]
0056336F  79 B8                     JNS 0x00563329
LAB_00563371:
00563371  8B 54 B1 04               MOV EDX,dword ptr [ECX + ESI*0x4 + 0x4]
00563375  8B 12                     MOV EDX,dword ptr [EDX]
00563377  33 C0                     XOR EAX,EAX
LAB_00563379:
00563379  3B 14 85 14 96 7C 00      CMP EDX,dword ptr [EAX*0x4 + 0x7c9614]
00563380  7E 06                     JLE 0x00563388
00563382  40                        INC EAX
00563383  83 F8 09                  CMP EAX,0x9
00563386  7C F1                     JL 0x00563379
LAB_00563388:
00563388  8B 14 C5 40 96 7C 00      MOV EDX,dword ptr [EAX*0x8 + 0x7c9640]
0056338F  89 15 F0 32 80 00         MOV dword ptr [0x008032f0],EDX
00563395  8B 04 C5 3C 96 7C 00      MOV EAX,dword ptr [EAX*0x8 + 0x7c963c]
0056339C  A3 EC 32 80 00            MOV [0x008032ec],EAX
005633A1  0F AF C2                  IMUL EAX,EDX
005633A4  A3 0C 33 80 00            MOV [0x0080330c],EAX
005633A9  85 F6                     TEST ESI,ESI
005633AB  7C 36                     JL 0x005633e3
005633AD  8B 01                     MOV EAX,dword ptr [ECX]
005633AF  8B 08                     MOV ECX,dword ptr [EAX]
005633B1  33 C0                     XOR EAX,EAX
LAB_005633b3:
005633B3  3B 0C 85 14 96 7C 00      CMP ECX,dword ptr [EAX*0x4 + 0x7c9614]
005633BA  7E 06                     JLE 0x005633c2
005633BC  40                        INC EAX
005633BD  83 F8 09                  CMP EAX,0x9
005633C0  7C F1                     JL 0x005633b3
LAB_005633c2:
005633C2  8B 0C C5 40 96 7C 00      MOV ECX,dword ptr [EAX*0x8 + 0x7c9640]
005633C9  89 0D 74 33 80 00         MOV dword ptr [0x00803374],ECX
005633CF  8B 04 C5 3C 96 7C 00      MOV EAX,dword ptr [EAX*0x8 + 0x7c963c]
005633D6  A3 78 33 80 00            MOV [0x00803378],EAX
005633DB  0F AF C1                  IMUL EAX,ECX
005633DE  A3 E8 32 80 00            MOV [0x008032e8],EAX
LAB_005633e3:
005633E3  A1 04 33 80 00            MOV EAX,[0x00803304]
005633E8  8D 48 EC                  LEA ECX,[EAX + -0x14]
005633EB  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
005633F1  85 C9                     TEST ECX,ECX
005633F3  7D 0A                     JGE 0x005633ff
005633F5  C7 85 68 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff68],0x0
LAB_005633ff:
005633FF  8B 15 08 33 80 00         MOV EDX,dword ptr [0x00803308]
00563405  8D 72 EC                  LEA ESI,[EDX + -0x14]
00563408  89 B5 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],ESI
0056340E  85 F6                     TEST ESI,ESI
00563410  7D 08                     JGE 0x0056341a
00563412  33 F6                     XOR ESI,ESI
00563414  89 B5 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],ESI
LAB_0056341a:
0056341A  83 C0 14                  ADD EAX,0x14
0056341D  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
00563423  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
00563429  3B C1                     CMP EAX,ECX
0056342B  7C 09                     JL 0x00563436
0056342D  8D 41 FF                  LEA EAX,[ECX + -0x1]
00563430  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_00563436:
00563436  83 C2 14                  ADD EDX,0x14
00563439  89 95 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EDX
0056343F  A1 A8 33 80 00            MOV EAX,[0x008033a8]
00563444  3B D0                     CMP EDX,EAX
00563446  7C 07                     JL 0x0056344f
00563448  48                        DEC EAX
00563449  89 85 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EAX
LAB_0056344f:
0056344F  33 D2                     XOR EDX,EDX
00563451  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
00563457  85 F6                     TEST ESI,ESI
00563459  0F 8E D4 00 00 00         JLE 0x00563533
LAB_0056345f:
0056345F  8B C2                     MOV EAX,EDX
00563461  0F AF C1                  IMUL EAX,ECX
00563464  D1 E0                     SHL EAX,0x1
00563466  8B 35 80 33 80 00         MOV ESI,dword ptr [0x00803380]
0056346C  03 F0                     ADD ESI,EAX
0056346E  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
00563471  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
00563474  03 C6                     ADD EAX,ESI
00563476  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
0056347C  A1 C0 33 80 00            MOV EAX,[0x008033c0]
00563481  03 C2                     ADD EAX,EDX
00563483  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
0056348A  0F AF C6                  IMUL EAX,ESI
0056348D  03 05 BC 33 80 00         ADD EAX,dword ptr [0x008033bc]
00563493  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
00563499  8D 04 46                  LEA EAX,[ESI + EAX*0x2]
0056349C  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
005634A2  33 F6                     XOR ESI,ESI
005634A4  85 C9                     TEST ECX,ECX
005634A6  7E 78                     JLE 0x00563520
LAB_005634a8:
005634A8  33 C0                     XOR EAX,EAX
005634AA  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
005634B0  33 D2                     XOR EDX,EDX
005634B2  66 8B 3D 7E B2 7F 00      MOV DI,word ptr [0x007fb27e]
LAB_005634b9:
005634B9  66 83 39 00               CMP word ptr [ECX],0x0
005634BD  75 01                     JNZ 0x005634c0
005634BF  40                        INC EAX
LAB_005634c0:
005634C0  42                        INC EDX
005634C1  0F BF DF                  MOVSX EBX,DI
005634C4  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
005634C7  83 FA 05                  CMP EDX,0x5
005634CA  7C ED                     JL 0x005634b9
005634CC  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005634CF  88 04 71                  MOV byte ptr [ECX + ESI*0x2],AL
005634D2  85 C0                     TEST EAX,EAX
005634D4  7F 0E                     JG 0x005634e4
005634D6  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
005634DC  66 C7 04 72 FF FF         MOV word ptr [EDX + ESI*0x2],0xffff
005634E2  EB 24                     JMP 0x00563508
LAB_005634e4:
005634E4  83 F8 03                  CMP EAX,0x3
005634E7  7C 0E                     JL 0x005634f7
005634E9  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
005634EF  66 C7 04 70 00 00         MOV word ptr [EAX + ESI*0x2],0x0
005634F5  EB 11                     JMP 0x00563508
LAB_005634f7:
005634F7  B9 05 00 00 00            MOV ECX,0x5
005634FC  2B C8                     SUB ECX,EAX
005634FE  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
00563504  66 89 0C 72               MOV word ptr [EDX + ESI*0x2],CX
LAB_00563508:
00563508  46                        INC ESI
00563509  83 85 74 FF FF FF 02      ADD dword ptr [EBP + 0xffffff74],0x2
00563510  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
00563516  3B F1                     CMP ESI,ECX
00563518  7C 8E                     JL 0x005634a8
0056351A  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
LAB_00563520:
00563520  42                        INC EDX
00563521  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
00563527  3B 95 24 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff24]
0056352D  0F 8C 2C FF FF FF         JL 0x0056345f
LAB_00563533:
00563533  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00563539  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
0056353F  3B 85 98 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffe98]
00563545  0F 8F D7 03 00 00         JG 0x00563922
0056354B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_0056354e:
0056354E  8B BD 58 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff58]
00563554  8B C7                     MOV EAX,EDI
00563556  0F AF C1                  IMUL EAX,ECX
00563559  D1 E0                     SHL EAX,0x1
0056355B  8B 15 80 33 80 00         MOV EDX,dword ptr [0x00803380]
00563561  03 D0                     ADD EDX,EAX
00563563  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00563566  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00563569  03 C2                     ADD EAX,EDX
0056356B  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
00563571  A1 C0 33 80 00            MOV EAX,[0x008033c0]
00563576  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
00563579  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00563580  0F AF D0                  IMUL EDX,EAX
00563583  03 15 BC 33 80 00         ADD EDX,dword ptr [0x008033bc]
00563589  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
0056358E  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
00563591  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
00563597  33 F6                     XOR ESI,ESI
00563599  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
0056359F  85 D2                     TEST EDX,EDX
005635A1  0F 8E 87 00 00 00         JLE 0x0056362e
LAB_005635a7:
005635A7  33 D2                     XOR EDX,EDX
005635A9  33 C9                     XOR ECX,ECX
005635AB  66 8B 3D 7E B2 7F 00      MOV DI,word ptr [0x007fb27e]
LAB_005635b2:
005635B2  66 83 38 00               CMP word ptr [EAX],0x0
005635B6  75 01                     JNZ 0x005635b9
005635B8  42                        INC EDX
LAB_005635b9:
005635B9  41                        INC ECX
005635BA  0F BF DF                  MOVSX EBX,DI
005635BD  8D 04 58                  LEA EAX,[EAX + EBX*0x2]
005635C0  83 F9 05                  CMP ECX,0x5
005635C3  7C ED                     JL 0x005635b2
005635C5  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005635C8  88 14 71                  MOV byte ptr [ECX + ESI*0x2],DL
005635CB  85 D2                     TEST EDX,EDX
005635CD  7F 0E                     JG 0x005635dd
005635CF  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
005635D5  66 C7 04 72 FF FF         MOV word ptr [EDX + ESI*0x2],0xffff
005635DB  EB 24                     JMP 0x00563601
LAB_005635dd:
005635DD  83 FA 03                  CMP EDX,0x3
005635E0  7C 0E                     JL 0x005635f0
005635E2  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
005635E8  66 C7 04 70 00 00         MOV word ptr [EAX + ESI*0x2],0x0
005635EE  EB 11                     JMP 0x00563601
LAB_005635f0:
005635F0  B9 05 00 00 00            MOV ECX,0x5
005635F5  2B CA                     SUB ECX,EDX
005635F7  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
005635FD  66 89 0C 72               MOV word ptr [EDX + ESI*0x2],CX
LAB_00563601:
00563601  46                        INC ESI
00563602  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
00563608  83 C0 02                  ADD EAX,0x2
0056360B  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
00563611  3B B5 68 FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff68]
00563617  7C 8E                     JL 0x005635a7
00563619  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0056361F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00563622  8B BD 58 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff58]
00563628  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
LAB_0056362e:
0056362E  A1 C0 33 80 00            MOV EAX,[0x008033c0]
00563633  03 C7                     ADD EAX,EDI
00563635  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
0056363C  0F AF F0                  IMUL ESI,EAX
0056363F  03 F2                     ADD ESI,EDX
00563641  03 35 BC 33 80 00         ADD ESI,dword ptr [0x008033bc]
00563647  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
0056364D  8D 34 77                  LEA ESI,[EDI + ESI*0x2]
00563650  89 B5 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ESI
00563656  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
0056365D  0F AF F0                  IMUL ESI,EAX
00563660  03 F2                     ADD ESI,EDX
00563662  03 35 BC 33 80 00         ADD ESI,dword ptr [0x008033bc]
00563668  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0056366D  8D 04 F0                  LEA EAX,[EAX + ESI*0x8]
00563670  89 85 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],EAX
00563676  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
0056367C  3B 95 40 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff40]
00563682  0F 8F CF 01 00 00         JG 0x00563857
LAB_00563688:
00563688  33 C0                     XOR EAX,EAX
0056368A  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
00563690  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00563693  8B BD 74 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff74]
00563699  8B B5 A0 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffea0]
0056369F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_005636a2:
005636A2  66 83 3F 00               CMP word ptr [EDI],0x0
005636A6  75 29                     JNZ 0x005636d1
005636A8  FF 85 30 FF FF FF         INC dword ptr [EBP + 0xffffff30]
005636AE  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005636B1  85 C0                     TEST EAX,EAX
005636B3  0F 84 03 01 00 00         JZ 0x005637bc
005636B9  81 78 20 AE 01 00 00      CMP dword ptr [EAX + 0x20],0x1ae
005636C0  0F 85 F6 00 00 00         JNZ 0x005637bc
005636C6  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
005636C9  83 C0 03                  ADD EAX,0x3
005636CC  E9 E8 00 00 00            JMP 0x005637b9
LAB_005636d1:
005636D1  8B 06                     MOV EAX,dword ptr [ESI]
005636D3  85 C0                     TEST EAX,EAX
005636D5  0F 84 E1 00 00 00         JZ 0x005637bc
005636DB  81 FB FF 00 00 00         CMP EBX,0xff
005636E1  0F 84 CC 00 00 00         JZ 0x005637b3
005636E7  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
005636EA  88 85 3C FE FF FF         MOV byte ptr [EBP + 0xfffffe3c],AL
005636F0  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
005636F6  84 C9                     TEST CL,CL
005636F8  74 39                     JZ 0x00563733
005636FA  8B 85 3C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe3c]
00563700  25 FF 00 00 00            AND EAX,0xff
00563705  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00563708  C1 E2 04                  SHL EDX,0x4
0056370B  8B CB                     MOV ECX,EBX
0056370D  81 E1 FF 00 00 00         AND ECX,0xff
00563713  8D 1C 89                  LEA EBX,[ECX + ECX*0x4]
00563716  C1 E3 04                  SHL EBX,0x4
00563719  8A 8C 0B EA 87 80 00      MOV CL,byte ptr [EBX + ECX*0x1 + 0x8087ea]
00563720  33 DB                     XOR EBX,EBX
00563722  3A 8C 02 EA 87 80 00      CMP CL,byte ptr [EDX + EAX*0x1 + 0x8087ea]
00563729  0F 95 C3                  SETNZ BL
0056372C  8B C3                     MOV EAX,EBX
0056372E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00563731  EB 7C                     JMP 0x005637af
LAB_00563733:
00563733  3A C3                     CMP AL,BL
00563735  74 6D                     JZ 0x005637a4
00563737  8B 85 3C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe3c]
0056373D  25 FF 00 00 00            AND EAX,0xff
00563742  8B CB                     MOV ECX,EBX
00563744  81 E1 FF 00 00 00         AND ECX,0xff
0056374A  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00563751  84 D2                     TEST DL,DL
00563753  75 10                     JNZ 0x00563765
00563755  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0056375C  75 07                     JNZ 0x00563765
0056375E  B8 FE FF FF FF            MOV EAX,0xfffffffe
00563763  EB 41                     JMP 0x005637a6
LAB_00563765:
00563765  80 FA 01                  CMP DL,0x1
00563768  75 0F                     JNZ 0x00563779
0056376A  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00563772  75 05                     JNZ 0x00563779
00563774  83 C8 FF                  OR EAX,0xffffffff
00563777  EB 2D                     JMP 0x005637a6
LAB_00563779:
00563779  84 D2                     TEST DL,DL
0056377B  75 11                     JNZ 0x0056378e
0056377D  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00563785  75 07                     JNZ 0x0056378e
00563787  B8 01 00 00 00            MOV EAX,0x1
0056378C  EB 18                     JMP 0x005637a6
LAB_0056378e:
0056378E  80 FA 01                  CMP DL,0x1
00563791  75 11                     JNZ 0x005637a4
00563793  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0056379B  75 07                     JNZ 0x005637a4
0056379D  B8 02 00 00 00            MOV EAX,0x2
005637A2  EB 02                     JMP 0x005637a6
LAB_005637a4:
005637A4  33 C0                     XOR EAX,EAX
LAB_005637a6:
005637A6  33 D2                     XOR EDX,EDX
005637A8  85 C0                     TEST EAX,EAX
005637AA  0F 9C C2                  SETL DL
005637AD  8B C2                     MOV EAX,EDX
LAB_005637af:
005637AF  85 C0                     TEST EAX,EAX
005637B1  75 09                     JNZ 0x005637bc
LAB_005637b3:
005637B3  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
005637B6  83 C0 02                  ADD EAX,0x2
LAB_005637b9:
005637B9  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
LAB_005637bc:
005637BC  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
005637BF  40                        INC EAX
005637C0  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005637C3  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
005637CA  8D 3C 4F                  LEA EDI,[EDI + ECX*0x2]
005637CD  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
005637D4  8D 34 D6                  LEA ESI,[ESI + EDX*0x8]
005637D7  83 F8 05                  CMP EAX,0x5
005637DA  0F 8C C2 FE FF FF         JL 0x005636a2
005637E0  8A 4D A0                  MOV CL,byte ptr [EBP + -0x60]
005637E3  C0 E1 04                  SHL CL,0x4
005637E6  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
005637EC  0A CA                     OR CL,DL
005637EE  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
005637F1  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
005637F7  88 0C 46                  MOV byte ptr [ESI + EAX*0x2],CL
005637FA  85 D2                     TEST EDX,EDX
005637FC  7F 0E                     JG 0x0056380c
005637FE  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
00563804  66 C7 04 41 FF FF         MOV word ptr [ECX + EAX*0x2],0xffff
0056380A  EB 24                     JMP 0x00563830
LAB_0056380c:
0056380C  83 FA 03                  CMP EDX,0x3
0056380F  7C 0E                     JL 0x0056381f
00563811  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
00563817  66 C7 04 42 00 00         MOV word ptr [EDX + EAX*0x2],0x0
0056381D  EB 11                     JMP 0x00563830
LAB_0056381f:
0056381F  B9 05 00 00 00            MOV ECX,0x5
00563824  2B CA                     SUB ECX,EDX
00563826  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
0056382C  66 89 0C 42               MOV word ptr [EDX + EAX*0x2],CX
LAB_00563830:
00563830  40                        INC EAX
00563831  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
00563837  83 85 74 FF FF FF 02      ADD dword ptr [EBP + 0xffffff74],0x2
0056383E  83 85 A0 FE FF FF 08      ADD dword ptr [EBP + 0xfffffea0],0x8
00563845  3B 85 40 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff40]
0056384B  0F 8E 37 FE FF FF         JLE 0x00563688
00563851  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_00563857:
00563857  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
0056385D  8B 15 C0 33 80 00         MOV EDX,dword ptr [0x008033c0]
00563863  03 C2                     ADD EAX,EDX
00563865  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0056386C  0F AF C2                  IMUL EAX,EDX
0056386F  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
00563875  03 C2                     ADD EAX,EDX
00563877  03 05 BC 33 80 00         ADD EAX,dword ptr [0x008033bc]
0056387D  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
00563883  8D 44 46 02               LEA EAX,[ESI + EAX*0x2 + 0x2]
00563887  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
0056388D  42                        INC EDX
0056388E  3B D1                     CMP EDX,ECX
00563890  7D 77                     JGE 0x00563909
LAB_00563892:
00563892  33 C9                     XOR ECX,ECX
00563894  33 F6                     XOR ESI,ESI
00563896  66 8B 3D 7E B2 7F 00      MOV DI,word ptr [0x007fb27e]
LAB_0056389d:
0056389D  66 83 38 00               CMP word ptr [EAX],0x0
005638A1  75 01                     JNZ 0x005638a4
005638A3  41                        INC ECX
LAB_005638a4:
005638A4  46                        INC ESI
005638A5  0F BF DF                  MOVSX EBX,DI
005638A8  8D 04 58                  LEA EAX,[EAX + EBX*0x2]
005638AB  83 FE 05                  CMP ESI,0x5
005638AE  7C ED                     JL 0x0056389d
005638B0  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
005638B3  88 0C 50                  MOV byte ptr [EAX + EDX*0x2],CL
005638B6  85 C9                     TEST ECX,ECX
005638B8  7F 0E                     JG 0x005638c8
005638BA  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
005638C0  66 C7 04 51 FF FF         MOV word ptr [ECX + EDX*0x2],0xffff
005638C6  EB 24                     JMP 0x005638ec
LAB_005638c8:
005638C8  83 F9 03                  CMP ECX,0x3
005638CB  7C 0E                     JL 0x005638db
005638CD  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
005638D3  66 C7 04 50 00 00         MOV word ptr [EAX + EDX*0x2],0x0
005638D9  EB 11                     JMP 0x005638ec
LAB_005638db:
005638DB  B8 05 00 00 00            MOV EAX,0x5
005638E0  2B C1                     SUB EAX,ECX
005638E2  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
005638E8  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
LAB_005638ec:
005638EC  42                        INC EDX
005638ED  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
005638F3  83 C0 02                  ADD EAX,0x2
005638F6  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
005638FC  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
00563902  3B D1                     CMP EDX,ECX
00563904  7C 8C                     JL 0x00563892
00563906  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_00563909:
00563909  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
0056390F  40                        INC EAX
00563910  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
00563916  3B 85 98 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffe98]
0056391C  0F 8E 2C FC FF FF         JLE 0x0056354e
LAB_00563922:
00563922  8B 95 98 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe98]
00563928  42                        INC EDX
00563929  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
0056392F  3B 15 A8 33 80 00         CMP EDX,dword ptr [0x008033a8]
00563935  0F 8D D4 00 00 00         JGE 0x00563a0f
LAB_0056393b:
0056393B  8B C2                     MOV EAX,EDX
0056393D  0F AF C1                  IMUL EAX,ECX
00563940  D1 E0                     SHL EAX,0x1
00563942  8B 35 80 33 80 00         MOV ESI,dword ptr [0x00803380]
00563948  03 F0                     ADD ESI,EAX
0056394A  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0056394D  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
00563950  03 C6                     ADD EAX,ESI
00563952  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
00563958  A1 C0 33 80 00            MOV EAX,[0x008033c0]
0056395D  03 C2                     ADD EAX,EDX
0056395F  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
00563966  0F AF C6                  IMUL EAX,ESI
00563969  03 05 BC 33 80 00         ADD EAX,dword ptr [0x008033bc]
0056396F  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
00563975  8D 04 46                  LEA EAX,[ESI + EAX*0x2]
00563978  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
0056397E  33 F6                     XOR ESI,ESI
00563980  85 C9                     TEST ECX,ECX
00563982  7E 78                     JLE 0x005639fc
LAB_00563984:
00563984  33 C0                     XOR EAX,EAX
00563986  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
0056398C  33 D2                     XOR EDX,EDX
0056398E  66 8B 3D 7E B2 7F 00      MOV DI,word ptr [0x007fb27e]
LAB_00563995:
00563995  66 83 39 00               CMP word ptr [ECX],0x0
00563999  75 01                     JNZ 0x0056399c
0056399B  40                        INC EAX
LAB_0056399c:
0056399C  42                        INC EDX
0056399D  0F BF DF                  MOVSX EBX,DI
005639A0  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
005639A3  83 FA 05                  CMP EDX,0x5
005639A6  7C ED                     JL 0x00563995
005639A8  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005639AB  88 04 71                  MOV byte ptr [ECX + ESI*0x2],AL
005639AE  85 C0                     TEST EAX,EAX
005639B0  7F 0E                     JG 0x005639c0
005639B2  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
005639B8  66 C7 04 72 FF FF         MOV word ptr [EDX + ESI*0x2],0xffff
005639BE  EB 24                     JMP 0x005639e4
LAB_005639c0:
005639C0  83 F8 03                  CMP EAX,0x3
005639C3  7C 0E                     JL 0x005639d3
005639C5  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
005639CB  66 C7 04 70 00 00         MOV word ptr [EAX + ESI*0x2],0x0
005639D1  EB 11                     JMP 0x005639e4
LAB_005639d3:
005639D3  B9 05 00 00 00            MOV ECX,0x5
005639D8  2B C8                     SUB ECX,EAX
005639DA  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
005639E0  66 89 0C 72               MOV word ptr [EDX + ESI*0x2],CX
LAB_005639e4:
005639E4  46                        INC ESI
005639E5  83 85 74 FF FF FF 02      ADD dword ptr [EBP + 0xffffff74],0x2
005639EC  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
005639F2  3B F1                     CMP ESI,ECX
005639F4  7C 8E                     JL 0x00563984
005639F6  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
LAB_005639fc:
005639FC  42                        INC EDX
005639FD  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
00563A03  3B 15 A8 33 80 00         CMP EDX,dword ptr [0x008033a8]
00563A09  0F 8C 2C FF FF FF         JL 0x0056393b
LAB_00563a0f:
00563A0F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00563A12  85 C0                     TEST EAX,EAX
00563A14  0F 84 01 02 00 00         JZ 0x00563c1b
00563A1A  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00563A1D  85 D2                     TEST EDX,EDX
00563A1F  0F 8E F6 01 00 00         JLE 0x00563c1b
00563A25  33 C0                     XOR EAX,EAX
00563A27  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00563A2A  85 D2                     TEST EDX,EDX
00563A2C  0F 8E E9 01 00 00         JLE 0x00563c1b
LAB_00563a32:
00563A32  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00563A35  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00563A38  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
00563A3B  8B 38                     MOV EDI,dword ptr [EAX]
00563A3D  85 FF                     TEST EDI,EDI
00563A3F  0F 8E C6 01 00 00         JLE 0x00563c0b
00563A45  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
00563A48  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00563A4B  2B 15 BC 33 80 00         SUB EDX,dword ptr [0x008033bc]
00563A51  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
00563A54  0F 88 B1 01 00 00         JS 0x00563c0b
00563A5A  3B D1                     CMP EDX,ECX
00563A5C  0F 8D A9 01 00 00         JGE 0x00563c0b
00563A62  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
00563A65  2B 1D C0 33 80 00         SUB EBX,dword ptr [0x008033c0]
00563A6B  89 9D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EBX
00563A71  0F 88 94 01 00 00         JS 0x00563c0b
00563A77  3B 1D A8 33 80 00         CMP EBX,dword ptr [0x008033a8]
00563A7D  0F 8D 88 01 00 00         JGE 0x00563c0b
00563A83  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00563A86  83 C1 0A                  ADD ECX,0xa
00563A89  83 F9 0F                  CMP ECX,0xf
00563A8C  77 5A                     JA 0x00563ae8
00563A8E  33 D2                     XOR EDX,EDX
00563A90  8A 91 A0 47 56 00         MOV DL,byte ptr [ECX + 0x5647a0]
switchD_00563a96::switchD:
00563A96  FF 24 95 88 47 56 00      JMP dword ptr [EDX*0x4 + 0x564788]
switchD_00563a96::caseD_1:
00563A9D  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
00563AA0  8B 0C 85 60 4B 7A 00      MOV ECX,dword ptr [EAX*0x4 + 0x7a4b60]
00563AA7  B8 01 00 00 00            MOV EAX,0x1
00563AAC  EB 4E                     JMP 0x00563afc
switchD_00563a96::caseD_2:
00563AAE  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00563AB1  8B 0C CD 88 4B 7A 00      MOV ECX,dword ptr [ECX*0x8 + 0x7a4b88]
00563AB8  B8 01 00 00 00            MOV EAX,0x1
00563ABD  EB 3D                     JMP 0x00563afc
switchD_00563a96::caseD_0:
00563ABF  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00563AC2  8B 04 95 F8 4B 7A 00      MOV EAX,dword ptr [EDX*0x4 + 0x7a4bf8]
00563AC9  8D 4C 00 FE               LEA ECX,[EAX + EAX*0x1 + -0x2]
00563ACD  8B C1                     MOV EAX,ECX
00563ACF  33 F6                     XOR ESI,ESI
00563AD1  EB 29                     JMP 0x00563afc
switchD_00563a96::caseD_4:
00563AD3  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00563AD6  8B 0C 8D F8 4B 7A 00      MOV ECX,dword ptr [ECX*0x4 + 0x7a4bf8]
00563ADD  D1 E1                     SHL ECX,0x1
00563ADF  8B C1                     MOV EAX,ECX
00563AE1  99                        CDQ
00563AE2  2B C2                     SUB EAX,EDX
00563AE4  D1 F8                     SAR EAX,0x1
00563AE6  EB 14                     JMP 0x00563afc
switchD_00563a96::caseD_fffffff7:
00563AE8  33 F6                     XOR ESI,ESI
switchD_00563a96::caseD_fffffff6:
00563AEA  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
00563AED  C1 E0 03                  SHL EAX,0x3
00563AF0  8B 88 20 4C 7A 00         MOV ECX,dword ptr [EAX + 0x7a4c20]
00563AF6  8B 80 24 4C 7A 00         MOV EAX,dword ptr [EAX + 0x7a4c24]
LAB_00563afc:
00563AFC  56                        PUSH ESI
00563AFD  51                        PUSH ECX
00563AFE  50                        PUSH EAX
00563AFF  E8 3C D7 FF FF            CALL 0x00561240
00563B04  8B C8                     MOV ECX,EAX
00563B06  89 8D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ECX
00563B0C  8B 31                     MOV ESI,dword ptr [ECX]
00563B0E  83 FE 01                  CMP ESI,0x1
00563B11  0F 8E E2 00 00 00         JLE 0x00563bf9
00563B17  8B C7                     MOV EAX,EDI
00563B19  C1 E0 10                  SHL EAX,0x10
00563B1C  99                        CDQ
00563B1D  F7 FE                     IDIV ESI
00563B1F  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
00563B25  33 C0                     XOR EAX,EAX
00563B27  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00563B2A  03 D3                     ADD EDX,EBX
00563B2C  0F AF 15 A4 33 80 00      IMUL EDX,dword ptr [0x008033a4]
00563B33  8B 35 80 33 80 00         MOV ESI,dword ptr [0x00803380]
00563B39  8D 3C 56                  LEA EDI,[ESI + EDX*0x2]
00563B3C  33 F6                     XOR ESI,ESI
00563B3E  89 B5 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ESI
00563B44  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00563B47  85 D2                     TEST EDX,EDX
00563B49  0F 8E AA 00 00 00         JLE 0x00563bf9
00563B4F  EB 06                     JMP 0x00563b57
LAB_00563b51:
00563B51  8B 9D 4C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff4c]
LAB_00563b57:
00563B57  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00563B5A  03 D3                     ADD EDX,EBX
00563B5C  03 D6                     ADD EDX,ESI
00563B5E  85 D2                     TEST EDX,EDX
00563B60  7C 78                     JL 0x00563bda
00563B62  3B 15 A8 33 80 00         CMP EDX,dword ptr [0x008033a8]
00563B68  7D 70                     JGE 0x00563bda
00563B6A  8B 54 F1 18               MOV EDX,dword ptr [ECX + ESI*0x8 + 0x18]
00563B6E  8B 5D 80                  MOV EBX,dword ptr [EBP + -0x80]
00563B71  03 D3                     ADD EDX,EBX
00563B73  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
00563B79  8B 74 F1 14               MOV ESI,dword ptr [ECX + ESI*0x8 + 0x14]
00563B7D  03 F3                     ADD ESI,EBX
00563B7F  3B F2                     CMP ESI,EDX
00563B81  7F 57                     JG 0x00563bda
LAB_00563b83:
00563B83  85 F6                     TEST ESI,ESI
00563B85  7C 4E                     JL 0x00563bd5
00563B87  3B 35 A4 33 80 00         CMP ESI,dword ptr [0x008033a4]
00563B8D  7D 46                     JGE 0x00563bd5
00563B8F  03 85 C8 FE FF FF         ADD EAX,dword ptr [EBP + 0xfffffec8]
00563B95  3D 00 00 01 00            CMP EAX,0x10000
00563B9A  7E 39                     JLE 0x00563bd5
00563B9C  8B C8                     MOV ECX,EAX
00563B9E  C1 F9 10                  SAR ECX,0x10
00563BA1  8A 14 77                  MOV DL,byte ptr [EDI + ESI*0x2]
00563BA4  8B DA                     MOV EBX,EDX
00563BA6  81 E3 FF 00 00 00         AND EBX,0xff
00563BAC  C1 EB 04                  SHR EBX,0x4
00563BAF  03 D9                     ADD EBX,ECX
00563BB1  83 FB 0F                  CMP EBX,0xf
00563BB4  7D 0A                     JGE 0x00563bc0
00563BB6  C0 E1 04                  SHL CL,0x4
00563BB9  02 CA                     ADD CL,DL
00563BBB  88 0C 77                  MOV byte ptr [EDI + ESI*0x2],CL
00563BBE  EB 09                     JMP 0x00563bc9
LAB_00563bc0:
00563BC0  80 E2 07                  AND DL,0x7
00563BC3  80 EA 10                  SUB DL,0x10
00563BC6  88 14 77                  MOV byte ptr [EDI + ESI*0x2],DL
LAB_00563bc9:
00563BC9  8B 8D 3C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff3c]
00563BCF  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
LAB_00563bd5:
00563BD5  46                        INC ESI
00563BD6  3B F2                     CMP ESI,EDX
00563BD8  7E A9                     JLE 0x00563b83
LAB_00563bda:
00563BDA  8B B5 58 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff58]
00563BE0  46                        INC ESI
00563BE1  89 B5 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ESI
00563BE7  8B 15 A4 33 80 00         MOV EDX,dword ptr [0x008033a4]
00563BED  8D 3C 57                  LEA EDI,[EDI + EDX*0x2]
00563BF0  3B 71 10                  CMP ESI,dword ptr [ECX + 0x10]
00563BF3  0F 8C 58 FF FF FF         JL 0x00563b51
LAB_00563bf9:
00563BF9  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
00563BFF  50                        PUSH EAX
00563C00  E8 5B 74 14 00            CALL 0x006ab060
00563C05  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_00563c0b:
00563C0B  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00563C0E  40                        INC EAX
00563C0F  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00563C12  3B 45 20                  CMP EAX,dword ptr [EBP + 0x20]
00563C15  0F 8C 17 FE FF FF         JL 0x00563a32
LAB_00563c1b:
00563C1B  33 FF                     XOR EDI,EDI
00563C1D  89 3D 8C 33 80 00         MOV dword ptr [0x0080338c],EDI
00563C23  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00563C26  85 C0                     TEST EAX,EAX
00563C28  0F 84 24 01 00 00         JZ 0x00563d52
00563C2E  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
00563C31  85 F6                     TEST ESI,ESI
00563C33  0F 8E 19 01 00 00         JLE 0x00563d52
00563C39  8B 95 90 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe90]
00563C3F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00563C42  8B 54 82 FC               MOV EDX,dword ptr [EDX + EAX*0x4 + -0x4]
00563C46  8B 02                     MOV EAX,dword ptr [EDX]
00563C48  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00563C4B  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00563C4E  D1 E0                     SHL EAX,0x1
00563C50  99                        CDQ
00563C51  F7 3D 0C 33 80 00         IDIV dword ptr [0x0080330c]
00563C57  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
00563C5A  89 7D 8C                  MOV dword ptr [EBP + -0x74],EDI
00563C5D  85 F6                     TEST ESI,ESI
00563C5F  0F 8E ED 00 00 00         JLE 0x00563d52
LAB_00563c65:
00563C65  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00563C68  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00563C6B  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00563C6E  8D 34 C2                  LEA ESI,[EDX + EAX*0x8]
00563C71  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
00563C74  2B 1D BC 33 80 00         SUB EBX,dword ptr [0x008033bc]
00563C7A  0F 88 C2 00 00 00         JS 0x00563d42
00563C80  3B D9                     CMP EBX,ECX
00563C82  0F 8D BA 00 00 00         JGE 0x00563d42
00563C88  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00563C8B  2B 05 C0 33 80 00         SUB EAX,dword ptr [0x008033c0]
00563C91  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
00563C97  0F 88 A5 00 00 00         JS 0x00563d42
00563C9D  A1 A8 33 80 00            MOV EAX,[0x008033a8]
00563CA2  39 85 58 FF FF FF         CMP dword ptr [EBP + 0xffffff58],EAX
00563CA8  0F 8D 94 00 00 00         JGE 0x00563d42
00563CAE  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00563CB1  0F AF 46 10               IMUL EAX,dword ptr [ESI + 0x10]
00563CB5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00563CB8  85 C0                     TEST EAX,EAX
00563CBA  0F 8E 82 00 00 00         JLE 0x00563d42
00563CC0  8B 06                     MOV EAX,dword ptr [ESI]
00563CC2  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00563CC5  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00563CC8  C1 E0 02                  SHL EAX,0x2
00563CCB  99                        CDQ
00563CCC  F7 7D B8                  IDIV dword ptr [EBP + -0x48]
00563CCF  3B 45 88                  CMP EAX,dword ptr [EBP + -0x78]
00563CD2  7C 6E                     JL 0x00563d42
00563CD4  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00563CD7  8B 0D 10 33 80 00         MOV ECX,dword ptr [0x00803310]
00563CDD  89 1C 81                  MOV dword ptr [ECX + EAX*0x4],EBX
00563CE0  A1 8C 33 80 00            MOV EAX,[0x0080338c]
00563CE5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00563CE8  A1 10 33 80 00            MOV EAX,[0x00803310]
00563CED  8B 8D 58 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff58]
00563CF3  89 4C 90 04               MOV dword ptr [EAX + EDX*0x4 + 0x4],ECX
00563CF7  A1 8C 33 80 00            MOV EAX,[0x0080338c]
00563CFC  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00563CFF  A1 10 33 80 00            MOV EAX,[0x00803310]
00563D04  33 C9                     XOR ECX,ECX
00563D06  89 4C 90 08               MOV dword ptr [EAX + EDX*0x4 + 0x8],ECX
00563D0A  A1 8C 33 80 00            MOV EAX,[0x0080338c]
00563D0F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00563D12  A1 10 33 80 00            MOV EAX,[0x00803310]
00563D17  89 4C 90 0C               MOV dword ptr [EAX + EDX*0x4 + 0xc],ECX
00563D1B  A1 8C 33 80 00            MOV EAX,[0x0080338c]
00563D20  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00563D23  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
00563D26  A1 10 33 80 00            MOV EAX,[0x00803310]
00563D2B  89 54 88 10               MOV dword ptr [EAX + ECX*0x4 + 0x10],EDX
00563D2F  8B 3D 8C 33 80 00         MOV EDI,dword ptr [0x0080338c]
00563D35  47                        INC EDI
00563D36  89 3D 8C 33 80 00         MOV dword ptr [0x0080338c],EDI
00563D3C  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_00563d42:
00563D42  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00563D45  40                        INC EAX
00563D46  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00563D49  3B 45 28                  CMP EAX,dword ptr [EBP + 0x28]
00563D4C  0F 8C 13 FF FF FF         JL 0x00563c65
LAB_00563d52:
00563D52  C7 05 9C 33 80 00 09 00 00 00  MOV dword ptr [0x0080339c],0x9
00563D5C  33 F6                     XOR ESI,ESI
00563D5E  33 FF                     XOR EDI,EDI
00563D60  89 B5 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ESI
00563D66  8B 95 24 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff24]
00563D6C  8B C2                     MOV EAX,EDX
00563D6E  3B 85 98 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffe98]
00563D74  7F 45                     JG 0x00563dbb
LAB_00563d76:
00563D76  8B C2                     MOV EAX,EDX
00563D78  0F AF C1                  IMUL EAX,ECX
00563D7B  8B 1D 80 33 80 00         MOV EBX,dword ptr [0x00803380]
00563D81  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
00563D84  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00563D87  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00563D8D  8B 9D 40 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff40]
00563D93  3B C3                     CMP EAX,EBX
00563D95  7F 1B                     JG 0x00563db2
LAB_00563d97:
00563D97  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
00563D9A  F6 04 43 F0               TEST byte ptr [EBX + EAX*0x2],0xf0
00563D9E  76 09                     JBE 0x00563da9
00563DA0  46                        INC ESI
00563DA1  03 F8                     ADD EDI,EAX
00563DA3  01 95 28 FF FF FF         ADD dword ptr [EBP + 0xffffff28],EDX
LAB_00563da9:
00563DA9  40                        INC EAX
00563DAA  3B 85 40 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff40]
00563DB0  7E E5                     JLE 0x00563d97
LAB_00563db2:
00563DB2  42                        INC EDX
00563DB3  3B 95 98 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffe98]
00563DB9  7E BB                     JLE 0x00563d76
LAB_00563dbb:
00563DBB  85 F6                     TEST ESI,ESI
00563DBD  7E 77                     JLE 0x00563e36
00563DBF  8B C6                     MOV EAX,ESI
00563DC1  99                        CDQ
00563DC2  2B C2                     SUB EAX,EDX
00563DC4  8B C8                     MOV ECX,EAX
00563DC6  D1 F9                     SAR ECX,0x1
00563DC8  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
00563DCB  99                        CDQ
00563DCC  F7 FE                     IDIV ESI
00563DCE  8B F8                     MOV EDI,EAX
00563DD0  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
00563DD6  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
00563DD9  99                        CDQ
00563DDA  F7 FE                     IDIV ESI
00563DDC  8B F0                     MOV ESI,EAX
00563DDE  A1 08 33 80 00            MOV EAX,[0x00803308]
00563DE3  50                        PUSH EAX
00563DE4  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00563DEA  51                        PUSH ECX
00563DEB  56                        PUSH ESI
00563DEC  57                        PUSH EDI
00563DED  E8 9E 91 14 00            CALL 0x006acf90
00563DF2  8B C8                     MOV ECX,EAX
00563DF4  83 F9 05                  CMP ECX,0x5
00563DF7  7F 0E                     JG 0x00563e07
00563DF9  89 3D 04 33 80 00         MOV dword ptr [0x00803304],EDI
00563DFF  89 35 08 33 80 00         MOV dword ptr [0x00803308],ESI
00563E05  EB 2F                     JMP 0x00563e36
LAB_00563e07:
00563E07  8D 59 FB                  LEA EBX,[ECX + -0x5]
00563E0A  8B C3                     MOV EAX,EBX
00563E0C  0F AF 05 04 33 80 00      IMUL EAX,dword ptr [0x00803304]
00563E13  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
00563E16  03 C2                     ADD EAX,EDX
00563E18  99                        CDQ
00563E19  F7 F9                     IDIV ECX
00563E1B  A3 04 33 80 00            MOV [0x00803304],EAX
00563E20  8B C3                     MOV EAX,EBX
00563E22  0F AF 05 08 33 80 00      IMUL EAX,dword ptr [0x00803308]
00563E29  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
00563E2C  03 C2                     ADD EAX,EDX
00563E2E  99                        CDQ
00563E2F  F7 F9                     IDIV ECX
00563E31  A3 08 33 80 00            MOV [0x00803308],EAX
LAB_00563e36:
00563E36  B9 16 00 00 00            MOV ECX,0x16
00563E3B  33 C0                     XOR EAX,EAX
00563E3D  8D BD D0 FE FF FF         LEA EDI,[EBP + 0xfffffed0]
00563E43  F3 AB                     STOSD.REP ES:EDI
00563E45  8B 3D 9C 33 80 00         MOV EDI,dword ptr [0x0080339c]
00563E4B  83 FF 0E                  CMP EDI,0xe
00563E4E  0F 8D 94 00 00 00         JGE 0x00563ee8
00563E54  8B B5 64 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff64]
LAB_00563e5a:
00563E5A  6A 01                     PUSH 0x1
00563E5C  57                        PUSH EDI
00563E5D  56                        PUSH ESI
00563E5E  E8 0D B0 FF FF            CALL 0x0055ee70
00563E63  8B C8                     MOV ECX,EAX
00563E65  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00563E68  33 D2                     XOR EDX,EDX
00563E6A  85 C9                     TEST ECX,ECX
00563E6C  7E 56                     JLE 0x00563ec4
LAB_00563e6e:
00563E6E  0F BE 0C 56               MOVSX ECX,byte ptr [ESI + EDX*0x2]
00563E72  03 0D 04 33 80 00         ADD ECX,dword ptr [0x00803304]
00563E78  0F BE 44 56 01            MOVSX EAX,byte ptr [ESI + EDX*0x2 + 0x1]
00563E7D  03 05 08 33 80 00         ADD EAX,dword ptr [0x00803308]
00563E83  85 C9                     TEST ECX,ECX
00563E85  7C 35                     JL 0x00563ebc
00563E87  8B 1D A4 33 80 00         MOV EBX,dword ptr [0x008033a4]
00563E8D  3B CB                     CMP ECX,EBX
00563E8F  7D 2B                     JGE 0x00563ebc
00563E91  85 C0                     TEST EAX,EAX
00563E93  7C 27                     JL 0x00563ebc
00563E95  3B 05 A8 33 80 00         CMP EAX,dword ptr [0x008033a8]
00563E9B  7D 1F                     JGE 0x00563ebc
00563E9D  0F AF C3                  IMUL EAX,EBX
00563EA0  03 C1                     ADD EAX,ECX
00563EA2  33 C9                     XOR ECX,ECX
00563EA4  8B 1D 80 33 80 00         MOV EBX,dword ptr [0x00803380]
00563EAA  8A 0C 43                  MOV CL,byte ptr [EBX + EAX*0x2]
00563EAD  F7 C1 F0 FF FF FF         TEST ECX,0xfffffff0
00563EB3  7E 07                     JLE 0x00563ebc
00563EB5  FF 84 BD D0 FE FF FF      INC dword ptr [EBP + EDI*0x4 + 0xfffffed0]
LAB_00563ebc:
00563EBC  42                        INC EDX
00563EBD  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00563EC0  3B D1                     CMP EDX,ECX
00563EC2  7C AA                     JL 0x00563e6e
LAB_00563ec4:
00563EC4  8B 84 BD D0 FE FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffffed0]
00563ECB  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00563ECE  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00563ED1  C1 E0 02                  SHL EAX,0x2
00563ED4  99                        CDQ
00563ED5  F7 F9                     IDIV ECX
00563ED7  89 84 BD D0 FE FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffffed0],EAX
00563EDE  47                        INC EDI
00563EDF  83 FF 0E                  CMP EDI,0xe
00563EE2  0F 8C 72 FF FF FF         JL 0x00563e5a
LAB_00563ee8:
00563EE8  BE D0 8A FF FF            MOV ESI,0xffff8ad0
00563EED  B9 0C 00 00 00            MOV ECX,0xc
00563EF2  39 0D 9C 33 80 00         CMP dword ptr [0x0080339c],ECX
00563EF8  7F 3A                     JG 0x00563f34
00563EFA  8B BD 04 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff04]
LAB_00563f00:
00563F00  B8 0D 00 00 00            MOV EAX,0xd
00563F05  2B C1                     SUB EAX,ECX
00563F07  0F AF C7                  IMUL EAX,EDI
00563F0A  03 84 8D D0 FE FF FF      ADD EAX,dword ptr [EBP + ECX*0x4 + 0xfffffed0]
00563F11  BB 0E 00 00 00            MOV EBX,0xe
00563F16  2B D9                     SUB EBX,ECX
00563F18  99                        CDQ
00563F19  F7 FB                     IDIV EBX
00563F1B  2B C7                     SUB EAX,EDI
00563F1D  3B C6                     CMP EAX,ESI
00563F1F  7C 0A                     JL 0x00563f2b
00563F21  8B F0                     MOV ESI,EAX
00563F23  8D 41 01                  LEA EAX,[ECX + 0x1]
00563F26  A3 84 33 80 00            MOV [0x00803384],EAX
LAB_00563f2b:
00563F2B  49                        DEC ECX
00563F2C  3B 0D 9C 33 80 00         CMP ECX,dword ptr [0x0080339c]
00563F32  7D CC                     JGE 0x00563f00
LAB_00563f34:
00563F34  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00563F37  8B 0D 84 33 80 00         MOV ECX,dword ptr [0x00803384]
00563F3D  83 F9 0B                  CMP ECX,0xb
00563F40  7D 09                     JGE 0x00563f4b
00563F42  83 C1 04                  ADD ECX,0x4
00563F45  89 0D 84 33 80 00         MOV dword ptr [0x00803384],ECX
LAB_00563f4b:
00563F4B  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00563F51  89 08                     MOV dword ptr [EAX],ECX
00563F53  8B 15 08 33 80 00         MOV EDX,dword ptr [0x00803308]
00563F59  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00563F5C  6A 01                     PUSH 0x1
00563F5E  50                        PUSH EAX
00563F5F  A1 A8 33 80 00            MOV EAX,[0x008033a8]
00563F64  50                        PUSH EAX
00563F65  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
00563F6B  51                        PUSH ECX
00563F6C  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00563F6F  52                        PUSH EDX
00563F70  E8 FB D6 FF FF            CALL 0x00561670
00563F75  83 C4 14                  ADD ESP,0x14
00563F78  A3 B4 33 80 00            MOV [0x008033b4],EAX
00563F7D  8D 45 A4                  LEA EAX,[EBP + -0x5c]
00563F80  50                        PUSH EAX
00563F81  E8 DA 70 14 00            CALL 0x006ab060
00563F86  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00563F8C  51                        PUSH ECX
00563F8D  E8 AF E4 E9 FF            CALL 0x00402441
00563F92  33 F6                     XOR ESI,ESI
LAB_00563f94:
00563F94  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00563F97  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00563F9A  C1 E0 03                  SHL EAX,0x3
00563F9D  99                        CDQ
00563F9E  83 E2 0F                  AND EDX,0xf
00563FA1  03 C2                     ADD EAX,EDX
00563FA3  8B F8                     MOV EDI,EAX
00563FA5  C1 FF 04                  SAR EDI,0x4
00563FA8  57                        PUSH EDI
00563FA9  8B 15 EC 32 80 00         MOV EDX,dword ptr [0x008032ec]
00563FAF  52                        PUSH EDX
00563FB0  A1 F0 32 80 00            MOV EAX,[0x008032f0]
00563FB5  50                        PUSH EAX
00563FB6  E8 85 D2 FF FF            CALL 0x00561240
00563FBB  8B 0D FC 32 80 00         MOV ECX,dword ptr [0x008032fc]
00563FC1  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
00563FC4  57                        PUSH EDI
00563FC5  8B 15 78 33 80 00         MOV EDX,dword ptr [0x00803378]
00563FCB  52                        PUSH EDX
00563FCC  A1 74 33 80 00            MOV EAX,[0x00803374]
00563FD1  50                        PUSH EAX
00563FD2  E8 69 D2 FF FF            CALL 0x00561240
00563FD7  8B 0D B8 33 80 00         MOV ECX,dword ptr [0x008033b8]
00563FDD  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
00563FE0  57                        PUSH EDI
00563FE1  8B 15 EC 32 80 00         MOV EDX,dword ptr [0x008032ec]
00563FE7  52                        PUSH EDX
00563FE8  6A 05                     PUSH 0x5
00563FEA  E8 51 D2 FF FF            CALL 0x00561240
00563FEF  8B 0D B0 33 80 00         MOV ECX,dword ptr [0x008033b0]
00563FF5  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
00563FF8  46                        INC ESI
00563FF9  83 FE 10                  CMP ESI,0x10
00563FFC  7C 96                     JL 0x00563f94
00563FFE  8B 3D 9C 33 80 00         MOV EDI,dword ptr [0x0080339c]
00564004  89 BD 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDI
0056400A  83 FF 16                  CMP EDI,0x16
0056400D  0F 8D 0D 02 00 00         JGE 0x00564220
LAB_00564013:
00564013  6A 01                     PUSH 0x1
00564015  57                        PUSH EDI
00564016  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0056401C  52                        PUSH EDX
0056401D  E8 4E AE FF FF            CALL 0x0055ee70
00564022  8B D8                     MOV EBX,EAX
00564024  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00564027  A1 84 33 80 00            MOV EAX,[0x00803384]
0056402C  8B C8                     MOV ECX,EAX
0056402E  2B 0D 9C 33 80 00         SUB ECX,dword ptr [0x0080339c]
00564034  BE 16 00 00 00            MOV ESI,0x16
00564039  2B F0                     SUB ESI,EAX
0056403B  3B F1                     CMP ESI,ECX
0056403D  7E 15                     JLE 0x00564054
0056403F  2B C7                     SUB EAX,EDI
00564041  99                        CDQ
00564042  33 C2                     XOR EAX,EDX
00564044  2B C2                     SUB EAX,EDX
00564046  8B C8                     MOV ECX,EAX
00564048  0F AF C8                  IMUL ECX,EAX
0056404B  8B C6                     MOV EAX,ESI
0056404D  0F AF C6                  IMUL EAX,ESI
00564050  2B C1                     SUB EAX,ECX
00564052  EB 13                     JMP 0x00564067
LAB_00564054:
00564054  2B C7                     SUB EAX,EDI
00564056  99                        CDQ
00564057  33 C2                     XOR EAX,EDX
00564059  2B C2                     SUB EAX,EDX
0056405B  8B D0                     MOV EDX,EAX
0056405D  0F AF D0                  IMUL EDX,EAX
00564060  8B C1                     MOV EAX,ECX
00564062  0F AF C1                  IMUL EAX,ECX
00564065  2B C2                     SUB EAX,EDX
LAB_00564067:
00564067  99                        CDQ
00564068  2B C2                     SUB EAX,EDX
0056406A  D1 F8                     SAR EAX,0x1
0056406C  A3 88 33 80 00            MOV [0x00803388],EAX
00564071  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
00564078  85 DB                     TEST EBX,EBX
0056407A  0F 8E 88 01 00 00         JLE 0x00564208
LAB_00564080:
00564080  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00564086  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00564089  0F BE 1C 48               MOVSX EBX,byte ptr [EAX + ECX*0x2]
0056408D  03 1D 04 33 80 00         ADD EBX,dword ptr [0x00803304]
00564093  0F 88 5D 01 00 00         JS 0x005641f6
00564099  8B 15 A4 33 80 00         MOV EDX,dword ptr [0x008033a4]
0056409F  3B DA                     CMP EBX,EDX
005640A1  0F 8D 4F 01 00 00         JGE 0x005641f6
005640A7  0F BE 74 48 01            MOVSX ESI,byte ptr [EAX + ECX*0x2 + 0x1]
005640AC  03 35 08 33 80 00         ADD ESI,dword ptr [0x00803308]
005640B2  0F 88 3E 01 00 00         JS 0x005641f6
005640B8  3B 35 A8 33 80 00         CMP ESI,dword ptr [0x008033a8]
005640BE  0F 8D 32 01 00 00         JGE 0x005641f6
005640C4  8B CE                     MOV ECX,ESI
005640C6  0F AF CA                  IMUL ECX,EDX
005640C9  03 CB                     ADD ECX,EBX
005640CB  8B 15 B4 33 80 00         MOV EDX,dword ptr [0x008033b4]
005640D1  33 C0                     XOR EAX,EAX
005640D3  66 39 04 4A               CMP word ptr [EDX + ECX*0x2],AX
005640D7  0F 8E 19 01 00 00         JLE 0x005641f6
005640DD  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
005640E3  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
005640E9  39 05 8C 33 80 00         CMP dword ptr [0x0080338c],EAX
005640EF  7E 55                     JLE 0x00564146
LAB_005640f1:
005640F1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005640F4  8B 0D 10 33 80 00         MOV ECX,dword ptr [0x00803310]
005640FA  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
005640FD  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00564100  8B 15 EC 32 80 00         MOV EDX,dword ptr [0x008032ec]
00564106  3B C2                     CMP EAX,EDX
00564108  7F 02                     JG 0x0056410c
0056410A  8B C2                     MOV EAX,EDX
LAB_0056410c:
0056410C  99                        CDQ
0056410D  2B C2                     SUB EAX,EDX
0056410F  8B F8                     MOV EDI,EAX
00564111  D1 FF                     SAR EDI,0x1
00564113  56                        PUSH ESI
00564114  53                        PUSH EBX
00564115  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00564118  52                        PUSH EDX
00564119  8B 01                     MOV EAX,dword ptr [ECX]
0056411B  50                        PUSH EAX
0056411C  E8 6F 8E 14 00            CALL 0x006acf90
00564121  3B C7                     CMP EAX,EDI
00564123  7C 17                     JL 0x0056413c
00564125  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
0056412B  40                        INC EAX
0056412C  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
00564132  3B 05 8C 33 80 00         CMP EAX,dword ptr [0x0080338c]
00564138  7C B7                     JL 0x005640f1
0056413A  EB 0A                     JMP 0x00564146
LAB_0056413c:
0056413C  C7 85 C4 FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffec4],0x1
LAB_00564146:
00564146  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
0056414C  85 C0                     TEST EAX,EAX
0056414E  0F 85 A2 00 00 00         JNZ 0x005641f6
00564154  6A 10                     PUSH 0x10
00564156  56                        PUSH ESI
00564157  53                        PUSH EBX
00564158  8B 0D 08 33 80 00         MOV ECX,dword ptr [0x00803308]
0056415E  51                        PUSH ECX
0056415F  8B 15 04 33 80 00         MOV EDX,dword ptr [0x00803304]
00564165  52                        PUSH EDX
00564166  E8 A5 77 17 00            CALL 0x006db910
0056416B  50                        PUSH EAX
0056416C  E8 1F 78 17 00            CALL 0x006db990
00564171  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
00564174  8D 48 FD                  LEA ECX,[EAX + -0x3]
00564177  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
0056417D  83 C0 03                  ADD EAX,0x3
00564180  3B C8                     CMP ECX,EAX
00564182  7F 72                     JG 0x005641f6
LAB_00564184:
00564184  85 C9                     TEST ECX,ECX
00564186  7D 05                     JGE 0x0056418d
00564188  83 C1 10                  ADD ECX,0x10
0056418B  EB 08                     JMP 0x00564195
LAB_0056418d:
0056418D  83 F9 10                  CMP ECX,0x10
00564190  7C 03                     JL 0x00564195
00564192  83 C1 F0                  ADD ECX,-0x10
LAB_00564195:
00564195  51                        PUSH ECX
00564196  56                        PUSH ESI
00564197  53                        PUSH EBX
00564198  E8 23 DC FF FF            CALL 0x00561dc0
0056419D  8B F8                     MOV EDI,EAX
0056419F  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
005641A5  50                        PUSH EAX
005641A6  8B 0D 0C 33 80 00         MOV ECX,dword ptr [0x0080330c]
005641AC  51                        PUSH ECX
005641AD  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
005641B0  52                        PUSH EDX
005641B1  57                        PUSH EDI
005641B2  56                        PUSH ESI
005641B3  53                        PUSH EBX
005641B4  E8 77 0D 00 00            CALL 0x00564f30
005641B9  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
005641BF  85 C0                     TEST EAX,EAX
005641C1  7C 1A                     JL 0x005641dd
005641C3  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
005641C9  50                        PUSH EAX
005641CA  8B 0D E8 32 80 00         MOV ECX,dword ptr [0x008032e8]
005641D0  51                        PUSH ECX
005641D1  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
005641D4  52                        PUSH EDX
005641D5  57                        PUSH EDI
005641D6  56                        PUSH ESI
005641D7  53                        PUSH EBX
005641D8  E8 53 0D 00 00            CALL 0x00564f30
LAB_005641dd:
005641DD  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
005641E3  83 C1 03                  ADD ECX,0x3
005641E6  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
005641EC  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
005641EF  83 C0 03                  ADD EAX,0x3
005641F2  3B C8                     CMP ECX,EAX
005641F4  7E 8E                     JLE 0x00564184
LAB_005641f6:
005641F6  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005641F9  83 C0 03                  ADD EAX,0x3
005641FC  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005641FF  3B 45 DC                  CMP EAX,dword ptr [EBP + -0x24]
00564202  0F 8C 78 FE FF FF         JL 0x00564080
LAB_00564208:
00564208  8B BD 7C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff7c]
0056420E  83 C7 03                  ADD EDI,0x3
00564211  89 BD 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDI
00564217  83 FF 16                  CMP EDI,0x16
0056421A  0F 8C F3 FD FF FF         JL 0x00564013
LAB_00564220:
00564220  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00564226  8D 4C 40 03               LEA ECX,[EAX + EAX*0x2 + 0x3]
0056422A  8D 44 C8 01               LEA EAX,[EAX + ECX*0x8 + 0x1]
0056422E  C1 E0 02                  SHL EAX,0x2
00564231  99                        CDQ
00564232  F7 7D 18                  IDIV dword ptr [EBP + 0x18]
00564235  8B 35 7C 33 80 00         MOV ESI,dword ptr [0x0080337c]
0056423B  3B F0                     CMP ESI,EAX
0056423D  7E 08                     JLE 0x00564247
0056423F  8B F0                     MOV ESI,EAX
00564241  89 35 7C 33 80 00         MOV dword ptr [0x0080337c],ESI
LAB_00564247:
00564247  BA 64 00 00 00            MOV EDX,0x64
0056424C  2B D0                     SUB EDX,EAX
0056424E  8B 0D 14 33 80 00         MOV ECX,dword ptr [0x00803314]
00564254  3B CA                     CMP ECX,EDX
00564256  7E 08                     JLE 0x00564260
00564258  8B CA                     MOV ECX,EDX
0056425A  89 0D 14 33 80 00         MOV dword ptr [0x00803314],ECX
LAB_00564260:
00564260  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
00564263  A3 98 33 80 00            MOV [0x00803398],EAX
00564268  85 C0                     TEST EAX,EAX
0056426A  0F 8E 1A 04 00 00         JLE 0x0056468a
00564270  B8 FF FF FF 7F            MOV EAX,0x7fffffff
00564275  33 D2                     XOR EDX,EDX
00564277  85 F6                     TEST ESI,ESI
00564279  7E 18                     JLE 0x00564293
LAB_0056427b:
0056427B  8D 3C 92                  LEA EDI,[EDX + EDX*0x4]
0056427E  8B 1D F8 32 80 00         MOV EBX,dword ptr [0x008032f8]
00564284  8B 7C BB 0C               MOV EDI,dword ptr [EBX + EDI*0x4 + 0xc]
00564288  3B C7                     CMP EAX,EDI
0056428A  7E 02                     JLE 0x0056428e
0056428C  8B C7                     MOV EAX,EDI
LAB_0056428e:
0056428E  42                        INC EDX
0056428F  3B D6                     CMP EDX,ESI
00564291  7C E8                     JL 0x0056427b
LAB_00564293:
00564293  33 D2                     XOR EDX,EDX
00564295  85 C9                     TEST ECX,ECX
00564297  7E 18                     JLE 0x005642b1
LAB_00564299:
00564299  8D 3C 92                  LEA EDI,[EDX + EDX*0x4]
0056429C  8B 1D F4 32 80 00         MOV EBX,dword ptr [0x008032f4]
005642A2  8B 7C BB 0C               MOV EDI,dword ptr [EBX + EDI*0x4 + 0xc]
005642A6  3B C7                     CMP EAX,EDI
005642A8  7E 02                     JLE 0x005642ac
005642AA  8B C7                     MOV EAX,EDI
LAB_005642ac:
005642AC  42                        INC EDX
005642AD  3B D1                     CMP EDX,ECX
005642AF  7C E8                     JL 0x00564299
LAB_005642b1:
005642B1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005642B4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005642B7  99                        CDQ
005642B8  83 E2 0F                  AND EDX,0xf
005642BB  03 C2                     ADD EAX,EDX
005642BD  C1 F8 04                  SAR EAX,0x4
005642C0  33 D2                     XOR EDX,EDX
005642C2  85 F6                     TEST ESI,ESI
005642C4  7E 34                     JLE 0x005642fa
LAB_005642c6:
005642C6  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
005642C9  C1 E1 02                  SHL ECX,0x2
005642CC  8B 35 F8 32 80 00         MOV ESI,dword ptr [0x008032f8]
005642D2  29 44 31 0C               SUB dword ptr [ECX + ESI*0x1 + 0xc],EAX
005642D6  8B 35 F8 32 80 00         MOV ESI,dword ptr [0x008032f8]
005642DC  8B 4C 31 0C               MOV ECX,dword ptr [ECX + ESI*0x1 + 0xc]
005642E0  8B B5 A4 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffea4]
005642E6  89 0C 96                  MOV dword ptr [ESI + EDX*0x4],ECX
005642E9  42                        INC EDX
005642EA  8B 35 7C 33 80 00         MOV ESI,dword ptr [0x0080337c]
005642F0  3B D6                     CMP EDX,ESI
005642F2  7C D2                     JL 0x005642c6
005642F4  8B 0D 14 33 80 00         MOV ECX,dword ptr [0x00803314]
LAB_005642fa:
005642FA  33 D2                     XOR EDX,EDX
005642FC  85 C9                     TEST ECX,ECX
005642FE  7E 3C                     JLE 0x0056433c
LAB_00564300:
00564300  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
00564303  C1 E1 02                  SHL ECX,0x2
00564306  8B 35 F4 32 80 00         MOV ESI,dword ptr [0x008032f4]
0056430C  29 44 31 0C               SUB dword ptr [ECX + ESI*0x1 + 0xc],EAX
00564310  8B 35 7C 33 80 00         MOV ESI,dword ptr [0x0080337c]
00564316  03 F2                     ADD ESI,EDX
00564318  8B 3D F4 32 80 00         MOV EDI,dword ptr [0x008032f4]
0056431E  8B 4C 39 0C               MOV ECX,dword ptr [ECX + EDI*0x1 + 0xc]
00564322  8B BD A4 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffea4]
00564328  89 0C B7                  MOV dword ptr [EDI + ESI*0x4],ECX
0056432B  42                        INC EDX
0056432C  8B 0D 14 33 80 00         MOV ECX,dword ptr [0x00803314]
00564332  3B D1                     CMP EDX,ECX
00564334  7C CA                     JL 0x00564300
00564336  8B 35 7C 33 80 00         MOV ESI,dword ptr [0x0080337c]
LAB_0056433c:
0056433C  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0056433F  C1 E1 02                  SHL ECX,0x2
00564342  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
00564345  A1 00 33 80 00            MOV EAX,[0x00803300]
0056434A  8D 3C 90                  LEA EDI,[EAX + EDX*0x4]
0056434D  8B 35 F4 32 80 00         MOV ESI,dword ptr [0x008032f4]
00564353  8B D1                     MOV EDX,ECX
00564355  C1 E9 02                  SHR ECX,0x2
00564358  F3 A5                     MOVSD.REP ES:EDI,ESI
0056435A  8B CA                     MOV ECX,EDX
0056435C  83 E1 03                  AND ECX,0x3
0056435F  F3 A4                     MOVSB.REP ES:EDI,ESI
00564361  A1 7C 33 80 00            MOV EAX,[0x0080337c]
00564366  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00564369  8B 0D 00 33 80 00         MOV ECX,dword ptr [0x00803300]
0056436F  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
00564372  89 15 F4 32 80 00         MOV dword ptr [0x008032f4],EDX
00564378  68 D0 4D 56 00            PUSH 0x564dd0
0056437D  68 70 21 56 00            PUSH 0x562170
00564382  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00564385  50                        PUSH EAX
00564386  6A 0A                     PUSH 0xa
00564388  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0056438B  56                        PUSH ESI
0056438C  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
00564392  51                        PUSH ECX
00564393  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00564399  52                        PUSH EDX
0056439A  E8 A5 EC E9 FF            CALL 0x00403044
0056439F  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
005643A2  85 C0                     TEST EAX,EAX
005643A4  0F 85 58 02 00 00         JNZ 0x00564602
005643AA  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005643B1  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
005643B8  83 C0 03                  ADD EAX,0x3
005643BB  24 FC                     AND AL,0xfc
005643BD  E8 7E 96 1C 00            CALL 0x0072da40
005643C2  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
005643C5  8B C4                     MOV EAX,ESP
005643C7  8B D0                     MOV EDX,EAX
005643C9  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
005643CC  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005643D3  EB 2A                     JMP 0x005643ff
LAB_005643ff:
005643FF  33 C0                     XOR EAX,EAX
00564401  89 85 AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EAX
00564407  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
0056440A  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
00564410  85 FF                     TEST EDI,EDI
00564412  0F 8C E8 00 00 00         JL 0x00564500
00564418  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
LAB_0056441b:
0056441B  8B 35 F8 32 80 00         MOV ESI,dword ptr [0x008032f8]
00564421  C7 45 CC D0 8A FF FF      MOV dword ptr [EBP + -0x34],0xffff8ad0
00564428  C7 85 B4 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeb4],0x0
00564432  8B 3D 7C 33 80 00         MOV EDI,dword ptr [0x0080337c]
00564438  85 FF                     TEST EDI,EDI
0056443A  0F 8E 80 00 00 00         JLE 0x005644c0
LAB_00564440:
00564440  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00564443  85 C0                     TEST EAX,EAX
00564445  7C 55                     JL 0x0056449c
00564447  BF 30 75 00 00            MOV EDI,0x7530
0056444C  33 DB                     XOR EBX,EBX
0056444E  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00564454  85 C0                     TEST EAX,EAX
00564456  7E 33                     JLE 0x0056448b
LAB_00564458:
00564458  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0056445B  8B 04 99                  MOV EAX,dword ptr [ECX + EBX*0x4]
0056445E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00564461  A1 00 33 80 00            MOV EAX,[0x00803300]
00564466  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00564469  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0056446C  51                        PUSH ECX
0056446D  8B 16                     MOV EDX,dword ptr [ESI]
0056446F  52                        PUSH EDX
00564470  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00564473  51                        PUSH ECX
00564474  8B 10                     MOV EDX,dword ptr [EAX]
00564476  52                        PUSH EDX
00564477  E8 14 8B 14 00            CALL 0x006acf90
0056447C  3B F8                     CMP EDI,EAX
0056447E  7E 02                     JLE 0x00564482
00564480  8B F8                     MOV EDI,EAX
LAB_00564482:
00564482  43                        INC EBX
00564483  3B 9D AC FE FF FF         CMP EBX,dword ptr [EBP + 0xfffffeac]
00564489  7C CD                     JL 0x00564458
LAB_0056448b:
0056448B  39 7D CC                  CMP dword ptr [EBP + -0x34],EDI
0056448E  7D 0C                     JGE 0x0056449c
00564490  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
00564493  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00564499  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
LAB_0056449c:
0056449C  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
005644A2  40                        INC EAX
005644A3  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
005644A9  83 C6 14                  ADD ESI,0x14
005644AC  3B 05 7C 33 80 00         CMP EAX,dword ptr [0x0080337c]
005644B2  7C 8C                     JL 0x00564440
005644B4  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
005644B7  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
005644BD  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
LAB_005644c0:
005644C0  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
005644C3  85 F6                     TEST ESI,ESI
005644C5  7C 16                     JL 0x005644dd
005644C7  8D 34 89                  LEA ESI,[ECX + ECX*0x4]
005644CA  8B 3D F8 32 80 00         MOV EDI,dword ptr [0x008032f8]
005644D0  C7 44 B7 0C FF FF FF FF   MOV dword ptr [EDI + ESI*0x4 + 0xc],0xffffffff
005644D8  89 0C 82                  MOV dword ptr [EDX + EAX*0x4],ECX
005644DB  EB 07                     JMP 0x005644e4
LAB_005644dd:
005644DD  C7 04 82 FF FF FF FF      MOV dword ptr [EDX + EAX*0x4],0xffffffff
LAB_005644e4:
005644E4  40                        INC EAX
005644E5  89 85 AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EAX
005644EB  8B 75 8C                  MOV ESI,dword ptr [EBP + -0x74]
005644EE  46                        INC ESI
005644EF  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
005644F2  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
005644F8  3B F7                     CMP ESI,EDI
005644FA  0F 8E 1B FF FF FF         JLE 0x0056441b
LAB_00564500:
00564500  8D 4F 01                  LEA ECX,[EDI + 0x1]
00564503  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00564506  3B 4D 18                  CMP ECX,dword ptr [EBP + 0x18]
00564509  0F 8D F6 00 00 00         JGE 0x00564605
LAB_0056450f:
0056450F  8B 35 F4 32 80 00         MOV ESI,dword ptr [0x008032f4]
00564515  C7 45 CC D0 8A FF FF      MOV dword ptr [EBP + -0x34],0xffff8ad0
0056451C  C7 85 B4 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeb4],0x0
00564526  A1 14 33 80 00            MOV EAX,[0x00803314]
0056452B  85 C0                     TEST EAX,EAX
0056452D  7E 77                     JLE 0x005645a6
LAB_0056452f:
0056452F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00564532  85 C0                     TEST EAX,EAX
00564534  7C 55                     JL 0x0056458b
00564536  BF 30 75 00 00            MOV EDI,0x7530
0056453B  33 DB                     XOR EBX,EBX
0056453D  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00564543  85 C0                     TEST EAX,EAX
00564545  7E 33                     JLE 0x0056457a
LAB_00564547:
00564547  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0056454A  8B 04 99                  MOV EAX,dword ptr [ECX + EBX*0x4]
0056454D  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00564550  A1 00 33 80 00            MOV EAX,[0x00803300]
00564555  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00564558  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0056455B  51                        PUSH ECX
0056455C  8B 16                     MOV EDX,dword ptr [ESI]
0056455E  52                        PUSH EDX
0056455F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00564562  51                        PUSH ECX
00564563  8B 10                     MOV EDX,dword ptr [EAX]
00564565  52                        PUSH EDX
00564566  E8 25 8A 14 00            CALL 0x006acf90
0056456B  3B F8                     CMP EDI,EAX
0056456D  7E 02                     JLE 0x00564571
0056456F  8B F8                     MOV EDI,EAX
LAB_00564571:
00564571  43                        INC EBX
00564572  3B 9D AC FE FF FF         CMP EBX,dword ptr [EBP + 0xfffffeac]
00564578  7C CD                     JL 0x00564547
LAB_0056457a:
0056457A  39 7D CC                  CMP dword ptr [EBP + -0x34],EDI
0056457D  7D 0C                     JGE 0x0056458b
0056457F  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
00564582  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00564588  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
LAB_0056458b:
0056458B  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00564591  40                        INC EAX
00564592  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
00564598  83 C6 14                  ADD ESI,0x14
0056459B  3B 05 14 33 80 00         CMP EAX,dword ptr [0x00803314]
005645A1  7C 8C                     JL 0x0056452f
005645A3  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
LAB_005645a6:
005645A6  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
005645A9  85 C0                     TEST EAX,EAX
005645AB  7C 30                     JL 0x005645dd
005645AD  A1 7C 33 80 00            MOV EAX,[0x0080337c]
005645B2  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005645B5  03 C2                     ADD EAX,EDX
005645B7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005645BA  8B 35 00 33 80 00         MOV ESI,dword ptr [0x00803300]
005645C0  C7 44 86 0C FF FF FF FF   MOV dword ptr [ESI + EAX*0x4 + 0xc],0xffffffff
005645C8  A1 7C 33 80 00            MOV EAX,[0x0080337c]
005645CD  03 D0                     ADD EDX,EAX
005645CF  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
005645D2  8B B5 AC FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffeac]
005645D8  89 14 B0                  MOV dword ptr [EAX + ESI*0x4],EDX
005645DB  EB 10                     JMP 0x005645ed
LAB_005645dd:
005645DD  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
005645E0  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
005645E6  C7 04 82 FF FF FF FF      MOV dword ptr [EDX + EAX*0x4],0xffffffff
LAB_005645ed:
005645ED  FF 85 AC FE FF FF         INC dword ptr [EBP + 0xfffffeac]
005645F3  41                        INC ECX
005645F4  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
005645F7  3B 4D 18                  CMP ECX,dword ptr [EBP + 0x18]
005645FA  0F 8C 0F FF FF FF         JL 0x0056450f
00564600  EB 03                     JMP 0x00564605
LAB_00564602:
00564602  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_00564605:
00564605  33 D2                     XOR EDX,EDX
00564607  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0056460A  85 C0                     TEST EAX,EAX
0056460C  7E 7C                     JLE 0x0056468a
LAB_0056460e:
0056460E  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00564611  8B 04 91                  MOV EAX,dword ptr [ECX + EDX*0x4]
00564614  85 C0                     TEST EAX,EAX
00564616  7C 6C                     JL 0x00564684
00564618  8B 8D 90 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe90]
0056461E  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
00564621  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00564624  C1 E0 02                  SHL EAX,0x2
00564627  8B 35 00 33 80 00         MOV ESI,dword ptr [0x00803300]
0056462D  8B 34 30                  MOV ESI,dword ptr [EAX + ESI*0x1]
00564630  03 35 BC 33 80 00         ADD ESI,dword ptr [0x008033bc]
00564636  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
00564639  8B 35 00 33 80 00         MOV ESI,dword ptr [0x00803300]
0056463F  8B 74 30 04               MOV ESI,dword ptr [EAX + ESI*0x1 + 0x4]
00564643  03 35 C0 33 80 00         ADD ESI,dword ptr [0x008033c0]
00564649  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
0056464C  3B 95 78 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff78]
00564652  7E 11                     JLE 0x00564665
00564654  8B 35 F0 32 80 00         MOV ESI,dword ptr [0x008032f0]
0056465A  89 71 0C                  MOV dword ptr [ECX + 0xc],ESI
0056465D  8B 35 EC 32 80 00         MOV ESI,dword ptr [0x008032ec]
00564663  EB 0F                     JMP 0x00564674
LAB_00564665:
00564665  8B 35 74 33 80 00         MOV ESI,dword ptr [0x00803374]
0056466B  89 71 0C                  MOV dword ptr [ECX + 0xc],ESI
0056466E  8B 35 78 33 80 00         MOV ESI,dword ptr [0x00803378]
LAB_00564674:
00564674  89 71 10                  MOV dword ptr [ECX + 0x10],ESI
00564677  8B 35 00 33 80 00         MOV ESI,dword ptr [0x00803300]
0056467D  8B 44 30 08               MOV EAX,dword ptr [EAX + ESI*0x1 + 0x8]
00564681  89 41 14                  MOV dword ptr [ECX + 0x14],EAX
LAB_00564684:
00564684  42                        INC EDX
00564685  3B 55 18                  CMP EDX,dword ptr [EBP + 0x18]
00564688  7C 84                     JL 0x0056460e
LAB_0056468a:
0056468A  8B 8D 4C FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe4c]
00564690  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00564696  8B 75 94                  MOV ESI,dword ptr [EBP + -0x6c]
00564699  EB 5F                     JMP 0x005646fa
LAB_005646c8:
005646C8  8B 85 4C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe4c]
005646CE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005646D3  68 E8 96 7C 00            PUSH 0x7c96e8
005646D8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005646DD  56                        PUSH ESI
005646DE  6A 00                     PUSH 0x0
005646E0  68 C2 0D 00 00            PUSH 0xdc2
005646E5  68 B0 96 7C 00            PUSH 0x7c96b0
005646EA  E8 E1 8D 14 00            CALL 0x006ad4d0
005646EF  83 C4 18                  ADD ESP,0x18
005646F2  85 C0                     TEST EAX,EAX
005646F4  74 01                     JZ 0x005646f7
005646F6  CC                        INT3
LAB_005646f7:
005646F7  89 75 94                  MOV dword ptr [EBP + -0x6c],ESI
LAB_005646fa:
005646FA  8D 4D 98                  LEA ECX,[EBP + -0x68]
005646FD  51                        PUSH ECX
005646FE  E8 5D 69 14 00            CALL 0x006ab060
00564703  68 B4 33 80 00            PUSH 0x8033b4
00564708  E8 53 69 14 00            CALL 0x006ab060
0056470D  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00564710  52                        PUSH EDX
00564711  E8 4A 69 14 00            CALL 0x006ab060
00564716  68 80 33 80 00            PUSH 0x803380
0056471B  E8 40 69 14 00            CALL 0x006ab060
00564720  33 FF                     XOR EDI,EDI
LAB_00564722:
00564722  A1 FC 32 80 00            MOV EAX,[0x008032fc]
00564727  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
0056472A  51                        PUSH ECX
0056472B  E8 30 69 14 00            CALL 0x006ab060
00564730  83 C7 04                  ADD EDI,0x4
00564733  81 FF 80 00 00 00         CMP EDI,0x80
00564739  7C E7                     JL 0x00564722
0056473B  33 FF                     XOR EDI,EDI
LAB_0056473d:
0056473D  8B 15 B0 33 80 00         MOV EDX,dword ptr [0x008033b0]
00564743  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00564746  50                        PUSH EAX
00564747  E8 14 69 14 00            CALL 0x006ab060
0056474C  83 C7 04                  ADD EDI,0x4
0056474F  83 FF 40                  CMP EDI,0x40
00564752  7C E9                     JL 0x0056473d
00564754  85 F6                     TEST ESI,ESI
00564756  74 17                     JZ 0x0056476f
00564758  68 D4 0D 00 00            PUSH 0xdd4
0056475D  68 B0 96 7C 00            PUSH 0x7c96b0
00564762  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00564768  51                        PUSH ECX
00564769  56                        PUSH ESI
0056476A  E8 D1 16 14 00            CALL 0x006a5e40
LAB_0056476f:
0056476F  8D A5 1C FE FF FF         LEA ESP,[EBP + 0xfffffe1c]
00564775  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00564778  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0056477F  5F                        POP EDI
00564780  5E                        POP ESI
00564781  5B                        POP EBX
00564782  8B E5                     MOV ESP,EBP
00564784  5D                        POP EBP
00564785  C2 28 00                  RET 0x28
