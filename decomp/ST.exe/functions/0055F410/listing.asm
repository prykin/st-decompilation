AiCalcDispositionAreas:
0055F410  55                        PUSH EBP
0055F411  8B EC                     MOV EBP,ESP
0055F413  6A FF                     PUSH -0x1
0055F415  68 D0 AF 79 00            PUSH 0x79afd0
0055F41A  68 64 D9 72 00            PUSH 0x72d964
0055F41F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0055F425  50                        PUSH EAX
0055F426  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0055F42D  81 EC CC 01 00 00         SUB ESP,0x1cc
0055F433  53                        PUSH EBX
0055F434  56                        PUSH ESI
0055F435  57                        PUSH EDI
0055F436  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F439  33 C9                     XOR ECX,ECX
0055F43B  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
0055F43E  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0055F441  39 4D 14                  CMP dword ptr [EBP + 0x14],ECX
0055F444  0F 84 C1 17 00 00         JZ 0x00560c0b
0055F44A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0055F44D  3B D9                     CMP EBX,ECX
0055F44F  0F 8E B6 17 00 00         JLE 0x00560c0b
0055F455  89 0D 18 33 80 00         MOV dword ptr [0x00803318],ECX
0055F45B  BE 03 00 00 00            MOV ESI,0x3
0055F460  89 35 1C 33 80 00         MOV dword ptr [0x0080331c],ESI
0055F466  BF 02 00 00 00            MOV EDI,0x2
0055F46B  89 3D 20 33 80 00         MOV dword ptr [0x00803320],EDI
0055F471  89 35 24 33 80 00         MOV dword ptr [0x00803324],ESI
0055F477  BA 05 00 00 00            MOV EDX,0x5
0055F47C  89 15 28 33 80 00         MOV dword ptr [0x00803328],EDX
0055F482  C7 05 2C 33 80 00 04 00 00 00  MOV dword ptr [0x0080332c],0x4
0055F48C  89 15 30 33 80 00         MOV dword ptr [0x00803330],EDX
0055F492  89 3D 34 33 80 00         MOV dword ptr [0x00803334],EDI
0055F498  B8 0A 00 00 00            MOV EAX,0xa
0055F49D  A3 38 33 80 00            MOV [0x00803338],EAX
0055F4A2  89 15 3C 33 80 00         MOV dword ptr [0x0080333c],EDX
0055F4A8  C7 05 40 33 80 00 01 00 00 00  MOV dword ptr [0x00803340],0x1
0055F4B2  C7 05 44 33 80 00 64 00 00 00  MOV dword ptr [0x00803344],0x64
0055F4BC  89 15 48 33 80 00         MOV dword ptr [0x00803348],EDX
0055F4C2  89 35 4C 33 80 00         MOV dword ptr [0x0080334c],ESI
0055F4C8  89 35 50 33 80 00         MOV dword ptr [0x00803350],ESI
0055F4CE  89 15 58 33 80 00         MOV dword ptr [0x00803358],EDX
0055F4D4  BE 14 00 00 00            MOV ESI,0x14
0055F4D9  89 35 5C 33 80 00         MOV dword ptr [0x0080335c],ESI
0055F4DF  89 3D 60 33 80 00         MOV dword ptr [0x00803360],EDI
0055F4E5  89 3D 64 33 80 00         MOV dword ptr [0x00803364],EDI
0055F4EB  A3 68 33 80 00            MOV [0x00803368],EAX
0055F4F0  89 35 6C 33 80 00         MOV dword ptr [0x0080336c],ESI
0055F4F6  A3 70 33 80 00            MOV [0x00803370],EAX
0055F4FB  89 15 54 33 80 00         MOV dword ptr [0x00803354],EDX
0055F501  89 0D B4 33 80 00         MOV dword ptr [0x008033b4],ECX
0055F507  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
0055F50A  89 0D 00 33 80 00         MOV dword ptr [0x00803300],ECX
0055F510  89 0D 14 33 80 00         MOV dword ptr [0x00803314],ECX
0055F516  89 0D 7C 33 80 00         MOV dword ptr [0x0080337c],ECX
0055F51C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055F51F  83 C0 08                  ADD EAX,0x8
0055F522  83 CA FF                  OR EDX,0xffffffff
LAB_0055f525:
0055F525  89 50 FC                  MOV dword ptr [EAX + -0x4],EDX
0055F528  89 10                     MOV dword ptr [EAX],EDX
0055F52A  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0055F52D  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0055F530  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
0055F533  83 C0 18                  ADD EAX,0x18
0055F536  4B                        DEC EBX
0055F537  75 EC                     JNZ 0x0055f525
0055F539  C7 05 90 33 80 00 28 00 00 00  MOV dword ptr [0x00803390],0x28
0055F543  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0055F546  8D 46 D8                  LEA EAX,[ESI + -0x28]
0055F549  A3 BC 33 80 00            MOV [0x008033bc],EAX
0055F54E  3B C1                     CMP EAX,ECX
0055F550  7D 06                     JGE 0x0055f558
0055F552  89 0D BC 33 80 00         MOV dword ptr [0x008033bc],ECX
LAB_0055f558:
0055F558  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0055F55B  8D 7A D8                  LEA EDI,[EDX + -0x28]
0055F55E  89 3D C0 33 80 00         MOV dword ptr [0x008033c0],EDI
0055F564  3B F9                     CMP EDI,ECX
0055F566  7D 08                     JGE 0x0055f570
0055F568  33 FF                     XOR EDI,EDI
0055F56A  89 3D C0 33 80 00         MOV dword ptr [0x008033c0],EDI
LAB_0055f570:
0055F570  8D 4E 28                  LEA ECX,[ESI + 0x28]
0055F573  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0055F57A  3B C8                     CMP ECX,EAX
0055F57C  7C 03                     JL 0x0055f581
0055F57E  8D 48 FF                  LEA ECX,[EAX + -0x1]
LAB_0055f581:
0055F581  8D 42 28                  LEA EAX,[EDX + 0x28]
0055F584  0F BF 1D 7A B2 7F 00      MOVSX EBX,word ptr [0x007fb27a]
0055F58B  3B C3                     CMP EAX,EBX
0055F58D  7C 03                     JL 0x0055f592
0055F58F  8D 43 FF                  LEA EAX,[EBX + -0x1]
LAB_0055f592:
0055F592  8B 1D BC 33 80 00         MOV EBX,dword ptr [0x008033bc]
0055F598  2B CB                     SUB ECX,EBX
0055F59A  41                        INC ECX
0055F59B  89 0D A4 33 80 00         MOV dword ptr [0x008033a4],ECX
0055F5A1  2B C7                     SUB EAX,EDI
0055F5A3  40                        INC EAX
0055F5A4  A3 A8 33 80 00            MOV [0x008033a8],EAX
0055F5A9  0F AF C1                  IMUL EAX,ECX
0055F5AC  A3 AC 33 80 00            MOV [0x008033ac],EAX
0055F5B1  2B F3                     SUB ESI,EBX
0055F5B3  89 35 04 33 80 00         MOV dword ptr [0x00803304],ESI
0055F5B9  2B D7                     SUB EDX,EDI
0055F5BB  89 15 08 33 80 00         MOV dword ptr [0x00803308],EDX
0055F5C1  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0055F5C7  89 8D 4C FE FF FF         MOV dword ptr [EBP + 0xfffffe4c],ECX
0055F5CD  8D 95 4C FE FF FF         LEA EDX,[EBP + 0xfffffe4c]
0055F5D3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055F5D9  8D 85 50 FE FF FF         LEA EAX,[EBP + 0xfffffe50]
0055F5DF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055F5E2  51                        PUSH ECX
0055F5E3  68 21 DA 72 00            PUSH 0x72da21
0055F5E8  6A 02                     PUSH 0x2
0055F5EA  50                        PUSH EAX
0055F5EB  E8 00 E2 1C 00            CALL 0x0072d7f0
0055F5F0  83 C4 10                  ADD ESP,0x10
0055F5F3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F5F6  8B F0                     MOV ESI,EAX
0055F5F8  85 F6                     TEST ESI,ESI
0055F5FA  0F 85 64 15 00 00         JNZ 0x00560b64
0055F600  8B 15 AC 33 80 00         MOV EDX,dword ptr [0x008033ac]
0055F606  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
0055F609  50                        PUSH EAX
0055F60A  E8 01 B6 14 00            CALL 0x006aac10
0055F60F  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0055F612  8B 0D AC 33 80 00         MOV ECX,dword ptr [0x008033ac]
0055F618  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
0055F61B  52                        PUSH EDX
0055F61C  E8 EF B5 14 00            CALL 0x006aac10
LAB_0055f621:
0055F621  A3 80 33 80 00            MOV [0x00803380],EAX
0055F626  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0055F629  B8 80 02 00 00            MOV EAX,0x280
0055F62E  E8 0D E4 1C 00            CALL 0x0072da40
0055F633  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F636  8B C4                     MOV EAX,ESP
0055F638  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
0055F63E  B8 00 0A 00 00            MOV EAX,0xa00
0055F643  E8 F8 E3 1C 00            CALL 0x0072da40
0055F648  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F64B  8B C4                     MOV EAX,ESP
0055F64D  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
0055F650  B8 80 00 00 00            MOV EAX,0x80
0055F655  E8 E6 E3 1C 00            CALL 0x0072da40
0055F65A  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F65D  8B C4                     MOV EAX,ESP
0055F65F  8B F8                     MOV EDI,EAX
0055F661  89 3D FC 32 80 00         MOV dword ptr [0x008032fc],EDI
0055F667  B8 40 00 00 00            MOV EAX,0x40
0055F66C  E8 CF E3 1C 00            CALL 0x0072da40
0055F671  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F674  8B C4                     MOV EAX,ESP
0055F676  A3 B0 33 80 00            MOV [0x008033b0],EAX
0055F67B  B8 90 01 00 00            MOV EAX,0x190
0055F680  E8 BB E3 1C 00            CALL 0x0072da40
0055F685  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F688  8B C4                     MOV EAX,ESP
0055F68A  89 85 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],EAX
0055F690  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0055F693  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
0055F69A  83 C0 03                  ADD EAX,0x3
0055F69D  24 FC                     AND AL,0xfc
0055F69F  E8 9C E3 1C 00            CALL 0x0072da40
0055F6A4  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F6A7  8B C4                     MOV EAX,ESP
0055F6A9  8B D8                     MOV EBX,EAX
0055F6AB  89 5D 84                  MOV dword ptr [EBP + -0x7c],EBX
0055F6AE  B8 A0 0F 00 00            MOV EAX,0xfa0
0055F6B3  E8 88 E3 1C 00            CALL 0x0072da40
0055F6B8  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F6BB  8B C4                     MOV EAX,ESP
0055F6BD  A3 00 33 80 00            MOV [0x00803300],EAX
0055F6C2  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0055F6C5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0055F6C8  C1 E0 02                  SHL EAX,0x2
0055F6CB  83 C0 03                  ADD EAX,0x3
0055F6CE  24 FC                     AND AL,0xfc
0055F6D0  E8 6B E3 1C 00            CALL 0x0072da40
LAB_0055f6d5:
0055F6D5  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F6D8  8B C4                     MOV EAX,ESP
0055F6DA  A3 10 33 80 00            MOV [0x00803310],EAX
0055F6DF  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0055F6E6  B9 20 00 00 00            MOV ECX,0x20
0055F6EB  33 C0                     XOR EAX,EAX
0055F6ED  F3 AB                     STOSD.REP ES:EDI
0055F6EF  A1 FC 32 80 00            MOV EAX,[0x008032fc]
0055F6F4  83 C0 40                  ADD EAX,0x40
0055F6F7  A3 B8 33 80 00            MOV [0x008033b8],EAX
0055F6FC  B9 10 00 00 00            MOV ECX,0x10
0055F701  33 C0                     XOR EAX,EAX
0055F703  8B 3D B0 33 80 00         MOV EDI,dword ptr [0x008033b0]
0055F709  F3 AB                     STOSD.REP ES:EDI
0055F70B  A1 00 33 80 00            MOV EAX,[0x00803300]
0055F710  A3 F8 32 80 00            MOV [0x008032f8],EAX
0055F715  05 D0 07 00 00            ADD EAX,0x7d0
0055F71A  A3 F4 32 80 00            MOV [0x008032f4],EAX
0055F71F  33 FF                     XOR EDI,EDI
0055F721  33 C9                     XOR ECX,ECX
0055F723  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
0055F726  85 F6                     TEST ESI,ESI
0055F728  7E 61                     JLE 0x0055f78b
LAB_0055f72a:
0055F72A  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
0055F72D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055F730  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0055F733  89 85 28 FE FF FF         MOV dword ptr [EBP + 0xfffffe28],EAX
0055F739  8B 00                     MOV EAX,dword ptr [EAX]
0055F73B  85 C0                     TEST EAX,EAX
0055F73D  7E 44                     JLE 0x0055f783
0055F73F  33 F6                     XOR ESI,ESI
0055F741  85 FF                     TEST EDI,EDI
0055F743  7E 0C                     JLE 0x0055f751
LAB_0055f745:
0055F745  8B 0C B3                  MOV ECX,dword ptr [EBX + ESI*0x4]
0055F748  3B 01                     CMP EAX,dword ptr [ECX]
0055F74A  7F 05                     JG 0x0055f751
0055F74C  46                        INC ESI
0055F74D  3B F7                     CMP ESI,EDI
0055F74F  7C F4                     JL 0x0055f745
LAB_0055f751:
0055F751  3B F7                     CMP ESI,EDI
0055F753  7D 1E                     JGE 0x0055f773
0055F755  8B D6                     MOV EDX,ESI
0055F757  C1 E2 1E                  SHL EDX,0x1e
0055F75A  2B D6                     SUB EDX,ESI
0055F75C  03 D7                     ADD EDX,EDI
0055F75E  C1 E2 02                  SHL EDX,0x2
0055F761  52                        PUSH EDX
0055F762  8D 04 B3                  LEA EAX,[EBX + ESI*0x4]
0055F765  50                        PUSH EAX
0055F766  8D 4C B3 04               LEA ECX,[EBX + ESI*0x4 + 0x4]
0055F76A  51                        PUSH ECX
0055F76B  E8 00 E3 1C 00            CALL 0x0072da70
0055F770  83 C4 0C                  ADD ESP,0xc
LAB_0055f773:
0055F773  8B 95 28 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe28]
0055F779  89 14 B3                  MOV dword ptr [EBX + ESI*0x4],EDX
0055F77C  47                        INC EDI
0055F77D  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0055F780  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
LAB_0055f783:
0055F783  41                        INC ECX
0055F784  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
0055F787  3B CE                     CMP ECX,ESI
0055F789  7C 9F                     JL 0x0055f72a
LAB_0055f78b:
0055F78B  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
0055F78E  83 CB FF                  OR EBX,0xffffffff
0055F791  83 CE FF                  OR ESI,0xffffffff
0055F794  89 B5 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ESI
0055F79A  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0055F79D  8B 44 B9 FC               MOV EAX,dword ptr [ECX + EDI*0x4 + -0x4]
0055F7A1  33 D2                     XOR EDX,EDX
0055F7A3  83 38 14                  CMP dword ptr [EAX],0x14
0055F7A6  0F 9E C2                  SETLE DL
0055F7A9  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
0055F7AC  83 C7 FE                  ADD EDI,-0x2
0055F7AF  85 FF                     TEST EDI,EDI
0055F7B1  7C 42                     JL 0x0055f7f5
LAB_0055f7b3:
0055F7B3  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
0055F7B6  8B 10                     MOV EDX,dword ptr [EAX]
0055F7B8  83 FA 0A                  CMP EDX,0xa
0055F7BB  7E 32                     JLE 0x0055f7ef
0055F7BD  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0055F7C0  8B 44 B9 04               MOV EAX,dword ptr [ECX + EDI*0x4 + 0x4]
0055F7C4  8B 08                     MOV ECX,dword ptr [EAX]
0055F7C6  8B C2                     MOV EAX,EDX
0055F7C8  2B C1                     SUB EAX,ECX
0055F7CA  3B C1                     CMP EAX,ECX
0055F7CC  7E 21                     JLE 0x0055f7ef
0055F7CE  3B D8                     CMP EBX,EAX
0055F7D0  7C 13                     JL 0x0055f7e5
0055F7D2  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0055F7D5  85 C9                     TEST ECX,ECX
0055F7D7  74 16                     JZ 0x0055f7ef
0055F7D9  83 FA 14                  CMP EDX,0x14
0055F7DC  7E 11                     JLE 0x0055f7ef
0055F7DE  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
LAB_0055f7e5:
0055F7E5  8B D8                     MOV EBX,EAX
0055F7E7  8B F7                     MOV ESI,EDI
0055F7E9  89 B5 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ESI
LAB_0055f7ef:
0055F7EF  4F                        DEC EDI
0055F7F0  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0055F7F3  79 BE                     JNS 0x0055f7b3
LAB_0055f7f5:
0055F7F5  8B 54 B1 04               MOV EDX,dword ptr [ECX + ESI*0x4 + 0x4]
0055F7F9  8B 02                     MOV EAX,dword ptr [EDX]
0055F7FB  83 F8 32                  CMP EAX,0x32
0055F7FE  7C 07                     JL 0x0055f807
0055F800  B8 05 00 00 00            MOV EAX,0x5
0055F805  EB 16                     JMP 0x0055f81d
LAB_0055f807:
0055F807  8D 50 05                  LEA EDX,[EAX + 0x5]
0055F80A  B8 67 66 66 66            MOV EAX,0x66666667
0055F80F  F7 EA                     IMUL EDX
0055F811  C1 FA 02                  SAR EDX,0x2
0055F814  8B C2                     MOV EAX,EDX
0055F816  C1 E8 1F                  SHR EAX,0x1f
0055F819  03 D0                     ADD EDX,EAX
0055F81B  8B C2                     MOV EAX,EDX
LAB_0055f81d:
0055F81D  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0055F820  8B 14 C5 24 4C 7A 00      MOV EDX,dword ptr [EAX*0x8 + 0x7a4c24]
0055F827  89 15 F0 32 80 00         MOV dword ptr [0x008032f0],EDX
0055F82D  8B 04 C5 20 4C 7A 00      MOV EAX,dword ptr [EAX*0x8 + 0x7a4c20]
0055F834  A3 EC 32 80 00            MOV [0x008032ec],EAX
0055F839  0F AF C2                  IMUL EAX,EDX
0055F83C  A3 0C 33 80 00            MOV [0x0080330c],EAX
0055F841  85 F6                     TEST ESI,ESI
0055F843  7C 4C                     JL 0x0055f891
0055F845  8B 09                     MOV ECX,dword ptr [ECX]
0055F847  8B 01                     MOV EAX,dword ptr [ECX]
0055F849  83 F8 32                  CMP EAX,0x32
0055F84C  7C 07                     JL 0x0055f855
0055F84E  BA 05 00 00 00            MOV EDX,0x5
0055F853  EB 14                     JMP 0x0055f869
LAB_0055f855:
0055F855  8D 48 05                  LEA ECX,[EAX + 0x5]
0055F858  B8 67 66 66 66            MOV EAX,0x66666667
0055F85D  F7 E9                     IMUL ECX
0055F85F  C1 FA 02                  SAR EDX,0x2
0055F862  8B C2                     MOV EAX,EDX
0055F864  C1 E8 1F                  SHR EAX,0x1f
0055F867  03 D0                     ADD EDX,EAX
LAB_0055f869:
0055F869  89 95 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDX
0055F86F  8B 04 D5 24 4C 7A 00      MOV EAX,dword ptr [EDX*0x8 + 0x7a4c24]
0055F876  A3 74 33 80 00            MOV [0x00803374],EAX
0055F87B  8B 14 D5 20 4C 7A 00      MOV EDX,dword ptr [EDX*0x8 + 0x7a4c20]
0055F882  89 15 78 33 80 00         MOV dword ptr [0x00803378],EDX
0055F888  0F AF D0                  IMUL EDX,EAX
0055F88B  89 15 E8 32 80 00         MOV dword ptr [0x008032e8],EDX
LAB_0055f891:
0055F891  A1 04 33 80 00            MOV EAX,[0x00803304]
0055F896  8D 48 EC                  LEA ECX,[EAX + -0x14]
0055F899  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
0055F89F  33 FF                     XOR EDI,EDI
0055F8A1  3B CF                     CMP ECX,EDI
0055F8A3  7D 06                     JGE 0x0055f8ab
0055F8A5  89 BD 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDI
LAB_0055f8ab:
0055F8AB  8B 0D 08 33 80 00         MOV ECX,dword ptr [0x00803308]
0055F8B1  8D 51 EC                  LEA EDX,[ECX + -0x14]
0055F8B4  89 95 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EDX
0055F8BA  3B D7                     CMP EDX,EDI
0055F8BC  7D 08                     JGE 0x0055f8c6
0055F8BE  33 D2                     XOR EDX,EDX
0055F8C0  89 95 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EDX
LAB_0055f8c6:
0055F8C6  83 C0 14                  ADD EAX,0x14
0055F8C9  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
0055F8CF  8B 35 A4 33 80 00         MOV ESI,dword ptr [0x008033a4]
0055F8D5  3B C6                     CMP EAX,ESI
0055F8D7  7C 09                     JL 0x0055f8e2
0055F8D9  8D 46 FF                  LEA EAX,[ESI + -0x1]
0055F8DC  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
LAB_0055f8e2:
0055F8E2  83 C1 14                  ADD ECX,0x14
0055F8E5  89 8D 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],ECX
0055F8EB  A1 A8 33 80 00            MOV EAX,[0x008033a8]
0055F8F0  3B C8                     CMP ECX,EAX
0055F8F2  7C 09                     JL 0x0055f8fd
0055F8F4  8D 48 FF                  LEA ECX,[EAX + -0x1]
0055F8F7  89 8D 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],ECX
LAB_0055f8fd:
0055F8FD  89 BD 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDI
0055F903  3B D7                     CMP EDX,EDI
0055F905  0F 8E E6 00 00 00         JLE 0x0055f9f1
LAB_0055f90b:
0055F90B  8B C7                     MOV EAX,EDI
0055F90D  0F AF C6                  IMUL EAX,ESI
0055F910  D1 E0                     SHL EAX,0x1
0055F912  8B 0D 80 33 80 00         MOV ECX,dword ptr [0x00803380]
0055F918  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0055F91B  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0055F91E  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0055F921  03 C1                     ADD EAX,ECX
0055F923  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
0055F929  8B 15 C0 33 80 00         MOV EDX,dword ptr [0x008033c0]
0055F92F  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
0055F932  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
0055F939  0F AF C1                  IMUL EAX,ECX
0055F93C  03 05 BC 33 80 00         ADD EAX,dword ptr [0x008033bc]
0055F942  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0055F948  8D 0C 42                  LEA ECX,[EDX + EAX*0x2]
0055F94B  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
0055F951  33 D2                     XOR EDX,EDX
0055F953  85 F6                     TEST ESI,ESI
0055F955  7E 7D                     JLE 0x0055f9d4
LAB_0055f957:
0055F957  33 C0                     XOR EAX,EAX
0055F959  33 F6                     XOR ESI,ESI
0055F95B  66 8B 3D 7E B2 7F 00      MOV DI,word ptr [0x007fb27e]
LAB_0055f962:
0055F962  66 83 39 00               CMP word ptr [ECX],0x0
0055F966  75 01                     JNZ 0x0055f969
0055F968  40                        INC EAX
LAB_0055f969:
0055F969  46                        INC ESI
0055F96A  0F BF DF                  MOVSX EBX,DI
0055F96D  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
0055F970  83 FE 05                  CMP ESI,0x5
0055F973  7C ED                     JL 0x0055f962
0055F975  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0055F978  88 04 51                  MOV byte ptr [ECX + EDX*0x2],AL
0055F97B  85 C0                     TEST EAX,EAX
0055F97D  7F 0E                     JG 0x0055f98d
0055F97F  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0055F985  66 C7 04 50 FF FF         MOV word ptr [EAX + EDX*0x2],0xffff
0055F98B  EB 27                     JMP 0x0055f9b4
LAB_0055f98d:
0055F98D  83 F8 03                  CMP EAX,0x3
0055F990  7C 0E                     JL 0x0055f9a0
0055F992  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
0055F998  66 C7 04 51 00 00         MOV word ptr [ECX + EDX*0x2],0x0
0055F99E  EB 14                     JMP 0x0055f9b4
LAB_0055f9a0:
0055F9A0  B9 03 00 00 00            MOV ECX,0x3
0055F9A5  2B C8                     SUB ECX,EAX
0055F9A7  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0055F9AA  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
0055F9B0  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
LAB_0055f9b4:
0055F9B4  42                        INC EDX
0055F9B5  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
0055F9BB  83 C1 02                  ADD ECX,0x2
0055F9BE  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
0055F9C4  8B 35 A4 33 80 00         MOV ESI,dword ptr [0x008033a4]
0055F9CA  3B D6                     CMP EDX,ESI
0055F9CC  7C 89                     JL 0x0055f957
0055F9CE  8B BD 54 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff54]
LAB_0055f9d4:
0055F9D4  47                        INC EDI
0055F9D5  89 BD 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDI
0055F9DB  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
0055F9E1  3B F8                     CMP EDI,EAX
0055F9E3  0F 8C 22 FF FF FF         JL 0x0055f90b
0055F9E9  8B 8D 94 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe94]
0055F9EF  8B D0                     MOV EDX,EAX
LAB_0055f9f1:
0055F9F1  89 95 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDX
0055F9F7  3B D1                     CMP EDX,ECX
0055F9F9  0F 8F DC 03 00 00         JG 0x0055fddb
LAB_0055f9ff:
0055F9FF  8B BD 54 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff54]
0055FA05  8B C7                     MOV EAX,EDI
0055FA07  0F AF C6                  IMUL EAX,ESI
0055FA0A  D1 E0                     SHL EAX,0x1
0055FA0C  8B 15 80 33 80 00         MOV EDX,dword ptr [0x00803380]
0055FA12  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
0055FA15  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0055FA18  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0055FA1B  03 C2                     ADD EAX,EDX
0055FA1D  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
0055FA23  A1 C0 33 80 00            MOV EAX,[0x008033c0]
0055FA28  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
0055FA2B  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0055FA32  0F AF CA                  IMUL ECX,EDX
0055FA35  03 0D BC 33 80 00         ADD ECX,dword ptr [0x008033bc]
0055FA3B  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
0055FA40  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
0055FA43  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
0055FA49  33 C9                     XOR ECX,ECX
0055FA4B  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0055FA51  85 D2                     TEST EDX,EDX
0055FA53  0F 8E 85 00 00 00         JLE 0x0055fade
LAB_0055fa59:
0055FA59  33 D2                     XOR EDX,EDX
0055FA5B  33 F6                     XOR ESI,ESI
0055FA5D  66 8B 3D 7E B2 7F 00      MOV DI,word ptr [0x007fb27e]
LAB_0055fa64:
0055FA64  66 83 38 00               CMP word ptr [EAX],0x0
0055FA68  75 01                     JNZ 0x0055fa6b
0055FA6A  42                        INC EDX
LAB_0055fa6b:
0055FA6B  46                        INC ESI
0055FA6C  0F BF DF                  MOVSX EBX,DI
0055FA6F  8D 04 58                  LEA EAX,[EAX + EBX*0x2]
0055FA72  83 FE 05                  CMP ESI,0x5
0055FA75  7C ED                     JL 0x0055fa64
0055FA77  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0055FA7A  88 14 48                  MOV byte ptr [EAX + ECX*0x2],DL
0055FA7D  85 D2                     TEST EDX,EDX
0055FA7F  7F 0E                     JG 0x0055fa8f
0055FA81  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
0055FA87  66 C7 04 4A FF FF         MOV word ptr [EDX + ECX*0x2],0xffff
0055FA8D  EB 27                     JMP 0x0055fab6
LAB_0055fa8f:
0055FA8F  83 FA 03                  CMP EDX,0x3
0055FA92  7C 0E                     JL 0x0055faa2
0055FA94  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0055FA9A  66 C7 04 48 00 00         MOV word ptr [EAX + ECX*0x2],0x0
0055FAA0  EB 14                     JMP 0x0055fab6
LAB_0055faa2:
0055FAA2  B8 03 00 00 00            MOV EAX,0x3
0055FAA7  2B C2                     SUB EAX,EDX
0055FAA9  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0055FAAC  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0055FAB2  66 89 14 48               MOV word ptr [EAX + ECX*0x2],DX
LAB_0055fab6:
0055FAB6  41                        INC ECX
0055FAB7  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
0055FABD  83 C0 02                  ADD EAX,0x2
0055FAC0  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
0055FAC6  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0055FACC  3B CA                     CMP ECX,EDX
0055FACE  7C 89                     JL 0x0055fa59
0055FAD0  8B 35 A4 33 80 00         MOV ESI,dword ptr [0x008033a4]
0055FAD6  8B BD 54 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff54]
0055FADC  EB 06                     JMP 0x0055fae4
LAB_0055fade:
0055FADE  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
LAB_0055fae4:
0055FAE4  8B 0D C0 33 80 00         MOV ECX,dword ptr [0x008033c0]
0055FAEA  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
0055FAED  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0055FAF4  0F AF F8                  IMUL EDI,EAX
0055FAF7  03 FA                     ADD EDI,EDX
0055FAF9  8B 0D BC 33 80 00         MOV ECX,dword ptr [0x008033bc]
0055FAFF  03 F9                     ADD EDI,ECX
0055FB01  8B 1D 80 B2 7F 00         MOV EBX,dword ptr [0x007fb280]
0055FB07  8D 3C 7B                  LEA EDI,[EBX + EDI*0x2]
0055FB0A  89 BD 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDI
0055FB10  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0055FB17  0F AF F8                  IMUL EDI,EAX
0055FB1A  03 FA                     ADD EDI,EDX
0055FB1C  03 F9                     ADD EDI,ECX
0055FB1E  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0055FB23  8D 0C F8                  LEA ECX,[EAX + EDI*0x8]
0055FB26  89 8D 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],ECX
0055FB2C  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
0055FB32  3B 95 38 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff38]
0055FB38  0F 8F D1 01 00 00         JG 0x0055fd0f
LAB_0055fb3e:
0055FB3E  33 DB                     XOR EBX,EBX
0055FB40  33 C9                     XOR ECX,ECX
0055FB42  8B BD 74 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff74]
0055FB48  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0055FB4B  8B B5 9C FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffe9c]
0055FB51  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
LAB_0055fb54:
0055FB54  66 83 3F 00               CMP word ptr [EDI],0x0
0055FB58  75 21                     JNZ 0x0055fb7b
0055FB5A  41                        INC ECX
0055FB5B  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0055FB5E  85 C0                     TEST EAX,EAX
0055FB60  0F 84 0B 01 00 00         JZ 0x0055fc71
0055FB66  81 78 20 AE 01 00 00      CMP dword ptr [EAX + 0x20],0x1ae
0055FB6D  0F 85 FE 00 00 00         JNZ 0x0055fc71
0055FB73  83 C3 03                  ADD EBX,0x3
0055FB76  E9 F6 00 00 00            JMP 0x0055fc71
LAB_0055fb7b:
0055FB7B  8B 06                     MOV EAX,dword ptr [ESI]
0055FB7D  85 C0                     TEST EAX,EAX
0055FB7F  0F 84 EC 00 00 00         JZ 0x0055fc71
0055FB85  41                        INC ECX
0055FB86  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
0055FB8C  81 7D 08 FF 00 00 00      CMP dword ptr [EBP + 0x8],0xff
0055FB93  0F 84 D7 00 00 00         JZ 0x0055fc70
0055FB99  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
0055FB9C  88 85 3C FE FF FF         MOV byte ptr [EBP + 0xfffffe3c],AL
0055FBA2  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0055FBA8  84 C9                     TEST CL,CL
0055FBAA  74 3C                     JZ 0x0055fbe8
0055FBAC  8B 85 3C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe3c]
0055FBB2  25 FF 00 00 00            AND EAX,0xff
0055FBB7  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0055FBBA  C1 E2 04                  SHL EDX,0x4
0055FBBD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055FBC0  81 E1 FF 00 00 00         AND ECX,0xff
0055FBC6  8D 3C 89                  LEA EDI,[ECX + ECX*0x4]
0055FBC9  C1 E7 04                  SHL EDI,0x4
0055FBCC  8A 8C 0F EA 87 80 00      MOV CL,byte ptr [EDI + ECX*0x1 + 0x8087ea]
0055FBD3  8B FA                     MOV EDI,EDX
0055FBD5  33 D2                     XOR EDX,EDX
0055FBD7  3A 8C 07 EA 87 80 00      CMP CL,byte ptr [EDI + EAX*0x1 + 0x8087ea]
0055FBDE  0F 95 C2                  SETNZ DL
0055FBE1  8B C2                     MOV EAX,EDX
0055FBE3  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0055FBE6  EB 7E                     JMP 0x0055fc66
LAB_0055fbe8:
0055FBE8  3A 45 08                  CMP AL,byte ptr [EBP + 0x8]
0055FBEB  74 6E                     JZ 0x0055fc5b
0055FBED  8B 85 3C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe3c]
0055FBF3  25 FF 00 00 00            AND EAX,0xff
0055FBF8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055FBFB  81 E1 FF 00 00 00         AND ECX,0xff
0055FC01  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0055FC08  84 D2                     TEST DL,DL
0055FC0A  75 10                     JNZ 0x0055fc1c
0055FC0C  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0055FC13  75 07                     JNZ 0x0055fc1c
0055FC15  B8 FE FF FF FF            MOV EAX,0xfffffffe
0055FC1A  EB 41                     JMP 0x0055fc5d
LAB_0055fc1c:
0055FC1C  80 FA 01                  CMP DL,0x1
0055FC1F  75 0F                     JNZ 0x0055fc30
0055FC21  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0055FC29  75 05                     JNZ 0x0055fc30
0055FC2B  83 C8 FF                  OR EAX,0xffffffff
0055FC2E  EB 2D                     JMP 0x0055fc5d
LAB_0055fc30:
0055FC30  84 D2                     TEST DL,DL
0055FC32  75 11                     JNZ 0x0055fc45
0055FC34  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0055FC3C  75 07                     JNZ 0x0055fc45
0055FC3E  B8 01 00 00 00            MOV EAX,0x1
0055FC43  EB 18                     JMP 0x0055fc5d
LAB_0055fc45:
0055FC45  80 FA 01                  CMP DL,0x1
0055FC48  75 11                     JNZ 0x0055fc5b
0055FC4A  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0055FC52  75 07                     JNZ 0x0055fc5b
0055FC54  B8 02 00 00 00            MOV EAX,0x2
0055FC59  EB 02                     JMP 0x0055fc5d
LAB_0055fc5b:
0055FC5B  33 C0                     XOR EAX,EAX
LAB_0055fc5d:
0055FC5D  33 D2                     XOR EDX,EDX
0055FC5F  85 C0                     TEST EAX,EAX
0055FC61  0F 9C C2                  SETL DL
0055FC64  8B C2                     MOV EAX,EDX
LAB_0055fc66:
0055FC66  85 C0                     TEST EAX,EAX
0055FC68  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
0055FC6E  75 01                     JNZ 0x0055fc71
LAB_0055fc70:
0055FC70  43                        INC EBX
LAB_0055fc71:
0055FC71  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0055FC74  40                        INC EAX
0055FC75  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0055FC78  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0055FC7F  8D 3C 57                  LEA EDI,[EDI + EDX*0x2]
0055FC82  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0055FC85  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0055FC8C  8D 34 D6                  LEA ESI,[ESI + EDX*0x8]
0055FC8F  83 F8 05                  CMP EAX,0x5
0055FC92  0F 8C BC FE FF FF         JL 0x0055fb54
0055FC98  8A C3                     MOV AL,BL
0055FC9A  C0 E0 04                  SHL AL,0x4
0055FC9D  0A C1                     OR AL,CL
0055FC9F  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0055FCA2  8B B5 70 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff70]
0055FCA8  88 04 72                  MOV byte ptr [EDX + ESI*0x2],AL
0055FCAB  8B C1                     MOV EAX,ECX
0055FCAD  2B C3                     SUB EAX,EBX
0055FCAF  85 C0                     TEST EAX,EAX
0055FCB1  7F 0E                     JG 0x0055fcc1
0055FCB3  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0055FCB9  66 C7 04 70 FF FF         MOV word ptr [EAX + ESI*0x2],0xffff
0055FCBF  EB 27                     JMP 0x0055fce8
LAB_0055fcc1:
0055FCC1  83 F8 03                  CMP EAX,0x3
0055FCC4  7C 0E                     JL 0x0055fcd4
0055FCC6  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
0055FCCC  66 C7 04 71 00 00         MOV word ptr [ECX + ESI*0x2],0x0
0055FCD2  EB 14                     JMP 0x0055fce8
LAB_0055fcd4:
0055FCD4  2B D9                     SUB EBX,ECX
0055FCD6  83 C3 03                  ADD EBX,0x3
0055FCD9  8B C3                     MOV EAX,EBX
0055FCDB  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0055FCDE  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0055FCE4  66 89 14 70               MOV word ptr [EAX + ESI*0x2],DX
LAB_0055fce8:
0055FCE8  46                        INC ESI
0055FCE9  89 B5 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ESI
0055FCEF  83 85 74 FF FF FF 02      ADD dword ptr [EBP + 0xffffff74],0x2
0055FCF6  83 85 9C FE FF FF 08      ADD dword ptr [EBP + 0xfffffe9c],0x8
0055FCFD  3B B5 38 FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff38]
0055FD03  0F 8E 35 FE FF FF         JLE 0x0055fb3e
0055FD09  8B 35 A4 33 80 00         MOV ESI,dword ptr [0x008033a4]
LAB_0055fd0f:
0055FD0F  8B 0D C0 33 80 00         MOV ECX,dword ptr [0x008033c0]
0055FD15  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0055FD1B  03 D1                     ADD EDX,ECX
0055FD1D  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0055FD24  0F AF D0                  IMUL EDX,EAX
0055FD27  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
0055FD2D  03 D1                     ADD EDX,ECX
0055FD2F  03 15 BC 33 80 00         ADD EDX,dword ptr [0x008033bc]
0055FD35  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
0055FD3A  8D 44 50 02               LEA EAX,[EAX + EDX*0x2 + 0x2]
0055FD3E  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
0055FD44  41                        INC ECX
0055FD45  3B CE                     CMP ECX,ESI
0055FD47  7D 77                     JGE 0x0055fdc0
LAB_0055fd49:
0055FD49  33 D2                     XOR EDX,EDX
0055FD4B  33 F6                     XOR ESI,ESI
0055FD4D  66 8B 3D 7E B2 7F 00      MOV DI,word ptr [0x007fb27e]
LAB_0055fd54:
0055FD54  66 83 38 00               CMP word ptr [EAX],0x0
0055FD58  75 01                     JNZ 0x0055fd5b
0055FD5A  42                        INC EDX
LAB_0055fd5b:
0055FD5B  46                        INC ESI
0055FD5C  0F BF DF                  MOVSX EBX,DI
0055FD5F  8D 04 58                  LEA EAX,[EAX + EBX*0x2]
0055FD62  83 FE 05                  CMP ESI,0x5
0055FD65  7C ED                     JL 0x0055fd54
0055FD67  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0055FD6A  88 14 48                  MOV byte ptr [EAX + ECX*0x2],DL
0055FD6D  85 D2                     TEST EDX,EDX
0055FD6F  7F 0E                     JG 0x0055fd7f
0055FD71  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
0055FD77  66 C7 04 4A FF FF         MOV word ptr [EDX + ECX*0x2],0xffff
0055FD7D  EB 27                     JMP 0x0055fda6
LAB_0055fd7f:
0055FD7F  83 FA 03                  CMP EDX,0x3
0055FD82  7C 0E                     JL 0x0055fd92
0055FD84  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0055FD8A  66 C7 04 48 00 00         MOV word ptr [EAX + ECX*0x2],0x0
0055FD90  EB 14                     JMP 0x0055fda6
LAB_0055fd92:
0055FD92  B8 03 00 00 00            MOV EAX,0x3
0055FD97  2B C2                     SUB EAX,EDX
0055FD99  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0055FD9C  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0055FDA2  66 89 14 48               MOV word ptr [EAX + ECX*0x2],DX
LAB_0055fda6:
0055FDA6  41                        INC ECX
0055FDA7  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
0055FDAD  83 C0 02                  ADD EAX,0x2
0055FDB0  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
0055FDB6  8B 35 A4 33 80 00         MOV ESI,dword ptr [0x008033a4]
0055FDBC  3B CE                     CMP ECX,ESI
0055FDBE  7C 89                     JL 0x0055fd49
LAB_0055fdc0:
0055FDC0  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
0055FDC6  40                        INC EAX
0055FDC7  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0055FDCD  8B 8D 94 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe94]
0055FDD3  3B C1                     CMP EAX,ECX
0055FDD5  0F 8E 24 FC FF FF         JLE 0x0055f9ff
LAB_0055fddb:
0055FDDB  41                        INC ECX
0055FDDC  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
0055FDE2  3B 0D A8 33 80 00         CMP ECX,dword ptr [0x008033a8]
0055FDE8  0F 8D D7 00 00 00         JGE 0x0055fec5
LAB_0055fdee:
0055FDEE  8B C1                     MOV EAX,ECX
0055FDF0  0F AF C6                  IMUL EAX,ESI
0055FDF3  D1 E0                     SHL EAX,0x1
0055FDF5  8B 15 80 33 80 00         MOV EDX,dword ptr [0x00803380]
0055FDFB  03 D0                     ADD EDX,EAX
0055FDFD  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0055FE00  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0055FE03  03 C2                     ADD EAX,EDX
0055FE05  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
0055FE0B  A1 C0 33 80 00            MOV EAX,[0x008033c0]
0055FE10  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
0055FE13  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0055FE1A  0F AF D0                  IMUL EDX,EAX
0055FE1D  03 15 BC 33 80 00         ADD EDX,dword ptr [0x008033bc]
0055FE23  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
0055FE28  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0055FE2B  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
0055FE31  33 D2                     XOR EDX,EDX
0055FE33  85 F6                     TEST ESI,ESI
0055FE35  7E 7B                     JLE 0x0055feb2
LAB_0055fe37:
0055FE37  33 C0                     XOR EAX,EAX
0055FE39  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
0055FE3F  33 F6                     XOR ESI,ESI
0055FE41  66 8B 3D 7E B2 7F 00      MOV DI,word ptr [0x007fb27e]
LAB_0055fe48:
0055FE48  66 83 39 00               CMP word ptr [ECX],0x0
0055FE4C  75 01                     JNZ 0x0055fe4f
0055FE4E  40                        INC EAX
LAB_0055fe4f:
0055FE4F  46                        INC ESI
0055FE50  0F BF DF                  MOVSX EBX,DI
0055FE53  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
0055FE56  83 FE 05                  CMP ESI,0x5
0055FE59  7C ED                     JL 0x0055fe48
0055FE5B  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0055FE5E  88 04 51                  MOV byte ptr [ECX + EDX*0x2],AL
0055FE61  85 C0                     TEST EAX,EAX
0055FE63  7F 0E                     JG 0x0055fe73
0055FE65  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0055FE6B  66 C7 04 50 FF FF         MOV word ptr [EAX + EDX*0x2],0xffff
0055FE71  EB 27                     JMP 0x0055fe9a
LAB_0055fe73:
0055FE73  83 F8 03                  CMP EAX,0x3
0055FE76  7C 0E                     JL 0x0055fe86
0055FE78  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
0055FE7E  66 C7 04 51 00 00         MOV word ptr [ECX + EDX*0x2],0x0
0055FE84  EB 14                     JMP 0x0055fe9a
LAB_0055fe86:
0055FE86  B9 03 00 00 00            MOV ECX,0x3
0055FE8B  2B C8                     SUB ECX,EAX
0055FE8D  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0055FE90  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
0055FE96  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
LAB_0055fe9a:
0055FE9A  42                        INC EDX
0055FE9B  83 85 74 FF FF FF 02      ADD dword ptr [EBP + 0xffffff74],0x2
0055FEA2  8B 35 A4 33 80 00         MOV ESI,dword ptr [0x008033a4]
0055FEA8  3B D6                     CMP EDX,ESI
0055FEAA  7C 8B                     JL 0x0055fe37
0055FEAC  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
LAB_0055feb2:
0055FEB2  41                        INC ECX
0055FEB3  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
0055FEB9  3B 0D A8 33 80 00         CMP ECX,dword ptr [0x008033a8]
0055FEBF  0F 8C 29 FF FF FF         JL 0x0055fdee
LAB_0055fec5:
0055FEC5  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0055FEC8  85 C0                     TEST EAX,EAX
0055FECA  0F 84 BE 01 00 00         JZ 0x0056008e
0055FED0  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0055FED3  85 C9                     TEST ECX,ECX
0055FED5  0F 8E B3 01 00 00         JLE 0x0056008e
0055FEDB  33 C0                     XOR EAX,EAX
0055FEDD  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
0055FEE0  85 C9                     TEST ECX,ECX
0055FEE2  0F 8E A6 01 00 00         JLE 0x0056008e
LAB_0055fee8:
0055FEE8  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0055FEEB  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0055FEEE  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0055FEF1  8B 38                     MOV EDI,dword ptr [EAX]
0055FEF3  85 FF                     TEST EDI,EDI
0055FEF5  0F 8E 83 01 00 00         JLE 0x0056007e
0055FEFB  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0055FEFE  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0055FF01  2B 0D BC 33 80 00         SUB ECX,dword ptr [0x008033bc]
0055FF07  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
0055FF0D  0F 88 6B 01 00 00         JS 0x0056007e
0055FF13  3B CE                     CMP ECX,ESI
0055FF15  0F 8D 63 01 00 00         JGE 0x0056007e
0055FF1B  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
0055FF1E  2B 1D C0 33 80 00         SUB EBX,dword ptr [0x008033c0]
0055FF24  89 9D 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EBX
0055FF2A  0F 88 4E 01 00 00         JS 0x0056007e
0055FF30  3B 1D A8 33 80 00         CMP EBX,dword ptr [0x008033a8]
0055FF36  0F 8D 42 01 00 00         JGE 0x0056007e
0055FF3C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0055FF3F  85 C9                     TEST ECX,ECX
0055FF41  7E 07                     JLE 0x0055ff4a
0055FF43  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0055FF46  85 C0                     TEST EAX,EAX
0055FF48  7F 22                     JG 0x0055ff6c
LAB_0055ff4a:
0055FF4A  33 C0                     XOR EAX,EAX
LAB_0055ff4c:
0055FF4C  3B 3C 85 14 96 7C 00      CMP EDI,dword ptr [EAX*0x4 + 0x7c9614]
0055FF53  7E 06                     JLE 0x0055ff5b
0055FF55  40                        INC EAX
0055FF56  83 F8 09                  CMP EAX,0x9
0055FF59  7C F1                     JL 0x0055ff4c
LAB_0055ff5b:
0055FF5B  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0055FF5E  8B 0C C5 40 96 7C 00      MOV ECX,dword ptr [EAX*0x8 + 0x7c9640]
0055FF65  8B 04 C5 3C 96 7C 00      MOV EAX,dword ptr [EAX*0x8 + 0x7c963c]
LAB_0055ff6c:
0055FF6C  52                        PUSH EDX
0055FF6D  50                        PUSH EAX
0055FF6E  51                        PUSH ECX
0055FF6F  E8 CC 12 00 00            CALL 0x00561240
0055FF74  8B C8                     MOV ECX,EAX
0055FF76  89 8D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],ECX
0055FF7C  8B 31                     MOV ESI,dword ptr [ECX]
0055FF7E  83 FE 01                  CMP ESI,0x1
0055FF81  0F 8E E5 00 00 00         JLE 0x0056006c
0055FF87  8B C7                     MOV EAX,EDI
0055FF89  C1 E0 10                  SHL EAX,0x10
0055FF8C  99                        CDQ
0055FF8D  F7 FE                     IDIV ESI
0055FF8F  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
0055FF95  33 C0                     XOR EAX,EAX
0055FF97  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0055FF9A  03 D3                     ADD EDX,EBX
0055FF9C  0F AF 15 A4 33 80 00      IMUL EDX,dword ptr [0x008033a4]
0055FFA3  8B 35 80 33 80 00         MOV ESI,dword ptr [0x00803380]
0055FFA9  8D 3C 56                  LEA EDI,[ESI + EDX*0x2]
0055FFAC  33 F6                     XOR ESI,ESI
0055FFAE  89 B5 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ESI
0055FFB4  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0055FFB7  85 D2                     TEST EDX,EDX
0055FFB9  0F 8E AD 00 00 00         JLE 0x0056006c
0055FFBF  EB 06                     JMP 0x0055ffc7
LAB_0055ffc1:
0055FFC1  8B 9D 44 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff44]
LAB_0055ffc7:
0055FFC7  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0055FFCA  03 D3                     ADD EDX,EBX
0055FFCC  03 D6                     ADD EDX,ESI
0055FFCE  85 D2                     TEST EDX,EDX
0055FFD0  7C 7B                     JL 0x0056004d
0055FFD2  3B 15 A8 33 80 00         CMP EDX,dword ptr [0x008033a8]
0055FFD8  7D 73                     JGE 0x0056004d
0055FFDA  8B 54 F1 18               MOV EDX,dword ptr [ECX + ESI*0x8 + 0x18]
0055FFDE  8B 9D 7C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff7c]
0055FFE4  03 D3                     ADD EDX,EBX
0055FFE6  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
0055FFEC  8B 74 F1 14               MOV ESI,dword ptr [ECX + ESI*0x8 + 0x14]
0055FFF0  03 F3                     ADD ESI,EBX
0055FFF2  3B F2                     CMP ESI,EDX
0055FFF4  7F 57                     JG 0x0056004d
LAB_0055fff6:
0055FFF6  85 F6                     TEST ESI,ESI
0055FFF8  7C 4E                     JL 0x00560048
0055FFFA  3B 35 A4 33 80 00         CMP ESI,dword ptr [0x008033a4]
00560000  7D 46                     JGE 0x00560048
00560002  03 85 C0 FE FF FF         ADD EAX,dword ptr [EBP + 0xfffffec0]
00560008  3D 00 00 01 00            CMP EAX,0x10000
0056000D  7E 39                     JLE 0x00560048
0056000F  8B C8                     MOV ECX,EAX
00560011  C1 F9 10                  SAR ECX,0x10
00560014  8A 14 77                  MOV DL,byte ptr [EDI + ESI*0x2]
00560017  8B DA                     MOV EBX,EDX
00560019  81 E3 FF 00 00 00         AND EBX,0xff
0056001F  C1 EB 04                  SHR EBX,0x4
00560022  03 D9                     ADD EBX,ECX
00560024  83 FB 0F                  CMP EBX,0xf
00560027  7D 0A                     JGE 0x00560033
00560029  C0 E1 04                  SHL CL,0x4
0056002C  02 CA                     ADD CL,DL
0056002E  88 0C 77                  MOV byte ptr [EDI + ESI*0x2],CL
00560031  EB 09                     JMP 0x0056003c
LAB_00560033:
00560033  80 E2 07                  AND DL,0x7
00560036  80 EA 10                  SUB DL,0x10
00560039  88 14 77                  MOV byte ptr [EDI + ESI*0x2],DL
LAB_0056003c:
0056003C  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
00560042  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
LAB_00560048:
00560048  46                        INC ESI
00560049  3B F2                     CMP ESI,EDX
0056004B  7E A9                     JLE 0x0055fff6
LAB_0056004d:
0056004D  8B B5 54 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff54]
00560053  46                        INC ESI
00560054  89 B5 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ESI
0056005A  8B 15 A4 33 80 00         MOV EDX,dword ptr [0x008033a4]
00560060  8D 3C 57                  LEA EDI,[EDI + EDX*0x2]
00560063  3B 71 10                  CMP ESI,dword ptr [ECX + 0x10]
00560066  0F 8C 55 FF FF FF         JL 0x0055ffc1
LAB_0056006c:
0056006C  8D 85 34 FF FF FF         LEA EAX,[EBP + 0xffffff34]
00560072  50                        PUSH EAX
00560073  E8 E8 AF 14 00            CALL 0x006ab060
00560078  8B 35 A4 33 80 00         MOV ESI,dword ptr [0x008033a4]
LAB_0056007e:
0056007E  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00560081  40                        INC EAX
00560082  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00560085  3B 45 28                  CMP EAX,dword ptr [EBP + 0x28]
00560088  0F 8C 5A FE FF FF         JL 0x0055fee8
LAB_0056008e:
0056008E  33 FF                     XOR EDI,EDI
00560090  89 3D 8C 33 80 00         MOV dword ptr [0x0080338c],EDI
00560096  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00560099  85 C0                     TEST EAX,EAX
0056009B  0F 84 62 01 00 00         JZ 0x00560203
005600A1  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005600A4  85 C9                     TEST ECX,ECX
005600A6  0F 8E 57 01 00 00         JLE 0x00560203
005600AC  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
005600AF  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005600B2  8B 54 82 FC               MOV EDX,dword ptr [EDX + EAX*0x4 + -0x4]
005600B6  8B 02                     MOV EAX,dword ptr [EDX]
005600B8  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005600BB  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
005600BE  D1 E0                     SHL EAX,0x1
005600C0  99                        CDQ
005600C1  F7 3D 0C 33 80 00         IDIV dword ptr [0x0080330c]
005600C7  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
005600CA  89 7D 8C                  MOV dword ptr [EBP + -0x74],EDI
005600CD  85 C9                     TEST ECX,ECX
005600CF  0F 8E 2E 01 00 00         JLE 0x00560203
LAB_005600d5:
005600D5  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
005600D8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005600DB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005600DE  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
005600E1  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
005600E4  2B 1D BC 33 80 00         SUB EBX,dword ptr [0x008033bc]
005600EA  0F 88 03 01 00 00         JS 0x005601f3
005600F0  3B DE                     CMP EBX,ESI
005600F2  0F 8D FB 00 00 00         JGE 0x005601f3
005600F8  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005600FB  2B 0D C0 33 80 00         SUB ECX,dword ptr [0x008033c0]
00560101  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
00560107  0F 88 E6 00 00 00         JS 0x005601f3
0056010D  8B 15 A8 33 80 00         MOV EDX,dword ptr [0x008033a8]
00560113  3B CA                     CMP ECX,EDX
00560115  0F 8D D8 00 00 00         JGE 0x005601f3
0056011B  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0056011E  83 F9 F6                  CMP ECX,-0xa
00560121  74 36                     JZ 0x00560159
00560123  83 F9 01                  CMP ECX,0x1
00560126  74 22                     JZ 0x0056014a
00560128  83 F9 02                  CMP ECX,0x2
0056012B  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0056012E  74 0E                     JZ 0x0056013e
00560130  8B 0C 8D F8 4B 7A 00      MOV ECX,dword ptr [ECX*0x4 + 0x7a4bf8]
00560137  D1 E1                     SHL ECX,0x1
00560139  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
0056013C  EB 30                     JMP 0x0056016e
LAB_0056013e:
0056013E  8B 0C CD 88 4B 7A 00      MOV ECX,dword ptr [ECX*0x8 + 0x7a4b88]
00560145  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00560148  EB 27                     JMP 0x00560171
LAB_0056014a:
0056014A  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
0056014D  8B 0C 95 60 4B 7A 00      MOV ECX,dword ptr [EDX*0x4 + 0x7a4b60]
00560154  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00560157  EB 18                     JMP 0x00560171
LAB_00560159:
00560159  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
0056015C  C1 E2 03                  SHL EDX,0x3
0056015F  8B 8A 20 4C 7A 00         MOV ECX,dword ptr [EDX + 0x7a4c20]
00560165  8B 92 24 4C 7A 00         MOV EDX,dword ptr [EDX + 0x7a4c24]
0056016B  0F AF D1                  IMUL EDX,ECX
LAB_0056016e:
0056016E  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
LAB_00560171:
00560171  8B 00                     MOV EAX,dword ptr [EAX]
00560173  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00560176  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00560179  C1 E0 02                  SHL EAX,0x2
0056017C  99                        CDQ
0056017D  F7 7D B8                  IDIV dword ptr [EBP + -0x48]
00560180  3B 45 88                  CMP EAX,dword ptr [EBP + -0x78]
00560183  7C 6E                     JL 0x005601f3
00560185  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00560188  8B 15 10 33 80 00         MOV EDX,dword ptr [0x00803310]
0056018E  89 1C 82                  MOV dword ptr [EDX + EAX*0x4],EBX
00560191  A1 8C 33 80 00            MOV EAX,[0x0080338c]
00560196  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00560199  8B 15 10 33 80 00         MOV EDX,dword ptr [0x00803310]
0056019F  8B B5 54 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff54]
005601A5  89 74 82 04               MOV dword ptr [EDX + EAX*0x4 + 0x4],ESI
005601A9  A1 8C 33 80 00            MOV EAX,[0x0080338c]
005601AE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005601B1  8B 35 10 33 80 00         MOV ESI,dword ptr [0x00803310]
005601B7  33 D2                     XOR EDX,EDX
005601B9  89 54 86 08               MOV dword ptr [ESI + EAX*0x4 + 0x8],EDX
005601BD  A1 8C 33 80 00            MOV EAX,[0x0080338c]
005601C2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005601C5  8B 35 10 33 80 00         MOV ESI,dword ptr [0x00803310]
005601CB  89 54 86 0C               MOV dword ptr [ESI + EAX*0x4 + 0xc],EDX
005601CF  A1 8C 33 80 00            MOV EAX,[0x0080338c]
005601D4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005601D7  A1 10 33 80 00            MOV EAX,[0x00803310]
005601DC  89 4C 90 10               MOV dword ptr [EAX + EDX*0x4 + 0x10],ECX
005601E0  8B 3D 8C 33 80 00         MOV EDI,dword ptr [0x0080338c]
005601E6  47                        INC EDI
005601E7  89 3D 8C 33 80 00         MOV dword ptr [0x0080338c],EDI
005601ED  8B 35 A4 33 80 00         MOV ESI,dword ptr [0x008033a4]
LAB_005601f3:
005601F3  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
005601F6  40                        INC EAX
005601F7  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
005601FA  3B 45 20                  CMP EAX,dword ptr [EBP + 0x20]
005601FD  0F 8C D2 FE FF FF         JL 0x005600d5
LAB_00560203:
00560203  C7 05 9C 33 80 00 05 00 00 00  MOV dword ptr [0x0080339c],0x5
0056020D  33 C9                     XOR ECX,ECX
0056020F  33 FF                     XOR EDI,EDI
00560211  89 8D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],ECX
00560217  8B 95 1C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff1c]
0056021D  8B C2                     MOV EAX,EDX
0056021F  3B 85 94 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffe94]
00560225  7F 45                     JG 0x0056026c
LAB_00560227:
00560227  8B C2                     MOV EAX,EDX
00560229  0F AF C6                  IMUL EAX,ESI
0056022C  8B 1D 80 33 80 00         MOV EBX,dword ptr [0x00803380]
00560232  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
00560235  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00560238  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
0056023E  8B 9D 38 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff38]
00560244  3B C3                     CMP EAX,EBX
00560246  7F 1B                     JG 0x00560263
LAB_00560248:
00560248  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
0056024B  F6 04 43 F0               TEST byte ptr [EBX + EAX*0x2],0xf0
0056024F  76 09                     JBE 0x0056025a
00560251  41                        INC ECX
00560252  03 F8                     ADD EDI,EAX
00560254  01 95 20 FF FF FF         ADD dword ptr [EBP + 0xffffff20],EDX
LAB_0056025a:
0056025A  40                        INC EAX
0056025B  3B 85 38 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff38]
00560261  7E E5                     JLE 0x00560248
LAB_00560263:
00560263  42                        INC EDX
00560264  3B 95 94 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffe94]
0056026A  7E BB                     JLE 0x00560227
LAB_0056026c:
0056026C  85 C9                     TEST ECX,ECX
0056026E  7E 77                     JLE 0x005602e7
00560270  8B C1                     MOV EAX,ECX
00560272  99                        CDQ
00560273  2B C2                     SUB EAX,EDX
00560275  8B F0                     MOV ESI,EAX
00560277  D1 FE                     SAR ESI,0x1
00560279  8D 04 37                  LEA EAX,[EDI + ESI*0x1]
0056027C  99                        CDQ
0056027D  F7 F9                     IDIV ECX
0056027F  8B F8                     MOV EDI,EAX
00560281  8B 95 20 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff20]
00560287  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
0056028A  99                        CDQ
0056028B  F7 F9                     IDIV ECX
0056028D  8B F0                     MOV ESI,EAX
0056028F  A1 08 33 80 00            MOV EAX,[0x00803308]
00560294  50                        PUSH EAX
00560295  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
0056029B  51                        PUSH ECX
0056029C  56                        PUSH ESI
0056029D  57                        PUSH EDI
0056029E  E8 ED CC 14 00            CALL 0x006acf90
005602A3  8B C8                     MOV ECX,EAX
005602A5  83 F9 05                  CMP ECX,0x5
005602A8  7F 0E                     JG 0x005602b8
005602AA  89 3D 04 33 80 00         MOV dword ptr [0x00803304],EDI
005602B0  89 35 08 33 80 00         MOV dword ptr [0x00803308],ESI
005602B6  EB 2F                     JMP 0x005602e7
LAB_005602b8:
005602B8  8D 59 FB                  LEA EBX,[ECX + -0x5]
005602BB  8B C3                     MOV EAX,EBX
005602BD  0F AF 05 04 33 80 00      IMUL EAX,dword ptr [0x00803304]
005602C4  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
005602C7  03 C2                     ADD EAX,EDX
005602C9  99                        CDQ
005602CA  F7 F9                     IDIV ECX
005602CC  A3 04 33 80 00            MOV [0x00803304],EAX
005602D1  8B C3                     MOV EAX,EBX
005602D3  0F AF 05 08 33 80 00      IMUL EAX,dword ptr [0x00803308]
005602DA  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
005602DD  03 C2                     ADD EAX,EDX
005602DF  99                        CDQ
005602E0  F7 F9                     IDIV ECX
005602E2  A3 08 33 80 00            MOV [0x00803308],EAX
LAB_005602e7:
005602E7  B9 14 00 00 00            MOV ECX,0x14
005602EC  33 C0                     XOR EAX,EAX
005602EE  8D BD C8 FE FF FF         LEA EDI,[EBP + 0xfffffec8]
005602F4  F3 AB                     STOSD.REP ES:EDI
005602F6  8B 35 9C 33 80 00         MOV ESI,dword ptr [0x0080339c]
005602FC  83 FE 0D                  CMP ESI,0xd
005602FF  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
00560305  0F 8D 8E 00 00 00         JGE 0x00560399
LAB_0056030b:
0056030B  6A 01                     PUSH 0x1
0056030D  56                        PUSH ESI
0056030E  53                        PUSH EBX
0056030F  E8 5C EB FF FF            CALL 0x0055ee70
00560314  8B C8                     MOV ECX,EAX
00560316  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00560319  33 D2                     XOR EDX,EDX
0056031B  85 C9                     TEST ECX,ECX
0056031D  7E 56                     JLE 0x00560375
LAB_0056031f:
0056031F  0F BE 0C 53               MOVSX ECX,byte ptr [EBX + EDX*0x2]
00560323  03 0D 04 33 80 00         ADD ECX,dword ptr [0x00803304]
00560329  0F BE 44 53 01            MOVSX EAX,byte ptr [EBX + EDX*0x2 + 0x1]
0056032E  03 05 08 33 80 00         ADD EAX,dword ptr [0x00803308]
00560334  85 C9                     TEST ECX,ECX
00560336  7C 35                     JL 0x0056036d
00560338  8B 3D A4 33 80 00         MOV EDI,dword ptr [0x008033a4]
0056033E  3B CF                     CMP ECX,EDI
00560340  7D 2B                     JGE 0x0056036d
00560342  85 C0                     TEST EAX,EAX
00560344  7C 27                     JL 0x0056036d
00560346  3B 05 A8 33 80 00         CMP EAX,dword ptr [0x008033a8]
0056034C  7D 1F                     JGE 0x0056036d
0056034E  0F AF C7                  IMUL EAX,EDI
00560351  03 C1                     ADD EAX,ECX
00560353  33 C9                     XOR ECX,ECX
00560355  8B 3D 80 33 80 00         MOV EDI,dword ptr [0x00803380]
0056035B  8A 0C 47                  MOV CL,byte ptr [EDI + EAX*0x2]
0056035E  F7 C1 F0 FF FF FF         TEST ECX,0xfffffff0
00560364  7E 07                     JLE 0x0056036d
00560366  FF 84 B5 C8 FE FF FF      INC dword ptr [EBP + ESI*0x4 + 0xfffffec8]
LAB_0056036d:
0056036D  42                        INC EDX
0056036E  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00560371  3B D1                     CMP EDX,ECX
00560373  7C AA                     JL 0x0056031f
LAB_00560375:
00560375  8B 84 B5 C8 FE FF FF      MOV EAX,dword ptr [EBP + ESI*0x4 + 0xfffffec8]
0056037C  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0056037F  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00560382  C1 E0 02                  SHL EAX,0x2
00560385  99                        CDQ
00560386  F7 F9                     IDIV ECX
00560388  89 84 B5 C8 FE FF FF      MOV dword ptr [EBP + ESI*0x4 + 0xfffffec8],EAX
0056038F  46                        INC ESI
00560390  83 FE 0D                  CMP ESI,0xd
00560393  0F 8C 72 FF FF FF         JL 0x0056030b
LAB_00560399:
00560399  BE D0 8A FF FF            MOV ESI,0xffff8ad0
0056039E  B9 0B 00 00 00            MOV ECX,0xb
005603A3  39 0D 9C 33 80 00         CMP dword ptr [0x0080339c],ECX
005603A9  7F 3C                     JG 0x005603e7
LAB_005603ab:
005603AB  B8 0C 00 00 00            MOV EAX,0xc
005603B0  2B C1                     SUB EAX,ECX
005603B2  0F AF 85 F8 FE FF FF      IMUL EAX,dword ptr [EBP + 0xfffffef8]
005603B9  03 84 8D C8 FE FF FF      ADD EAX,dword ptr [EBP + ECX*0x4 + 0xfffffec8]
005603C0  BF 0D 00 00 00            MOV EDI,0xd
005603C5  2B F9                     SUB EDI,ECX
005603C7  99                        CDQ
005603C8  F7 FF                     IDIV EDI
005603CA  2B 85 F8 FE FF FF         SUB EAX,dword ptr [EBP + 0xfffffef8]
005603D0  3B C6                     CMP EAX,ESI
005603D2  7C 0A                     JL 0x005603de
005603D4  8B F0                     MOV ESI,EAX
005603D6  8D 41 01                  LEA EAX,[ECX + 0x1]
005603D9  A3 84 33 80 00            MOV [0x00803384],EAX
LAB_005603de:
005603DE  49                        DEC ECX
005603DF  3B 0D 9C 33 80 00         CMP ECX,dword ptr [0x0080339c]
005603E5  7D C4                     JGE 0x005603ab
LAB_005603e7:
005603E7  A1 84 33 80 00            MOV EAX,[0x00803384]
005603EC  83 F8 0A                  CMP EAX,0xa
005603EF  7D 08                     JGE 0x005603f9
005603F1  83 C0 02                  ADD EAX,0x2
005603F4  A3 84 33 80 00            MOV [0x00803384],EAX
LAB_005603f9:
005603F9  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
005603FC  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00560402  89 08                     MOV dword ptr [EAX],ECX
00560404  8B 15 08 33 80 00         MOV EDX,dword ptr [0x00803308]
0056040A  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0056040D  6A 01                     PUSH 0x1
0056040F  50                        PUSH EAX
00560410  A1 A8 33 80 00            MOV EAX,[0x008033a8]
00560415  50                        PUSH EAX
00560416  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0056041C  51                        PUSH ECX
0056041D  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00560420  52                        PUSH EDX
00560421  E8 4A 12 00 00            CALL 0x00561670
00560426  83 C4 14                  ADD ESP,0x14
00560429  A3 B4 33 80 00            MOV [0x008033b4],EAX
0056042E  8D 45 A4                  LEA EAX,[EBP + -0x5c]
00560431  50                        PUSH EAX
00560432  E8 29 AC 14 00            CALL 0x006ab060
00560437  53                        PUSH EBX
00560438  E8 04 20 EA FF            CALL 0x00402441
0056043D  33 F6                     XOR ESI,ESI
LAB_0056043f:
0056043F  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00560442  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00560445  C1 E0 03                  SHL EAX,0x3
00560448  99                        CDQ
00560449  83 E2 0F                  AND EDX,0xf
0056044C  03 C2                     ADD EAX,EDX
0056044E  8B F8                     MOV EDI,EAX
00560450  C1 FF 04                  SAR EDI,0x4
00560453  57                        PUSH EDI
00560454  8B 0D EC 32 80 00         MOV ECX,dword ptr [0x008032ec]
0056045A  51                        PUSH ECX
0056045B  8B 15 F0 32 80 00         MOV EDX,dword ptr [0x008032f0]
00560461  52                        PUSH EDX
00560462  E8 D9 0D 00 00            CALL 0x00561240
00560467  8B 0D FC 32 80 00         MOV ECX,dword ptr [0x008032fc]
0056046D  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
00560470  57                        PUSH EDI
00560471  8B 15 78 33 80 00         MOV EDX,dword ptr [0x00803378]
00560477  52                        PUSH EDX
00560478  A1 74 33 80 00            MOV EAX,[0x00803374]
0056047D  50                        PUSH EAX
0056047E  E8 BD 0D 00 00            CALL 0x00561240
00560483  8B 0D B8 33 80 00         MOV ECX,dword ptr [0x008033b8]
00560489  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
0056048C  57                        PUSH EDI
0056048D  8B 15 EC 32 80 00         MOV EDX,dword ptr [0x008032ec]
00560493  52                        PUSH EDX
00560494  6A 05                     PUSH 0x5
00560496  E8 A5 0D 00 00            CALL 0x00561240
0056049B  8B 0D B0 33 80 00         MOV ECX,dword ptr [0x008033b0]
005604A1  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
005604A4  46                        INC ESI
005604A5  83 FE 10                  CMP ESI,0x10
005604A8  7C 95                     JL 0x0056043f
005604AA  8B 3D 9C 33 80 00         MOV EDI,dword ptr [0x0080339c]
005604B0  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
005604B6  83 FF 14                  CMP EDI,0x14
005604B9  0F 8D 10 02 00 00         JGE 0x005606cf
005604BF  EB 06                     JMP 0x005604c7
LAB_005604c1:
005604C1  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
LAB_005604c7:
005604C7  6A 01                     PUSH 0x1
005604C9  57                        PUSH EDI
005604CA  53                        PUSH EBX
005604CB  E8 A0 E9 FF FF            CALL 0x0055ee70
005604D0  8B D8                     MOV EBX,EAX
005604D2  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
005604D5  A1 84 33 80 00            MOV EAX,[0x00803384]
005604DA  8B C8                     MOV ECX,EAX
005604DC  2B 0D 9C 33 80 00         SUB ECX,dword ptr [0x0080339c]
005604E2  BE 14 00 00 00            MOV ESI,0x14
005604E7  2B F0                     SUB ESI,EAX
005604E9  3B F1                     CMP ESI,ECX
005604EB  7E 13                     JLE 0x00560500
005604ED  2B C7                     SUB EAX,EDI
005604EF  99                        CDQ
005604F0  33 C2                     XOR EAX,EDX
005604F2  2B C2                     SUB EAX,EDX
005604F4  8B D0                     MOV EDX,EAX
005604F6  0F AF D0                  IMUL EDX,EAX
005604F9  8B C6                     MOV EAX,ESI
005604FB  0F AF C6                  IMUL EAX,ESI
005604FE  EB 11                     JMP 0x00560511
LAB_00560500:
00560500  2B C7                     SUB EAX,EDI
00560502  99                        CDQ
00560503  33 C2                     XOR EAX,EDX
00560505  2B C2                     SUB EAX,EDX
00560507  8B D0                     MOV EDX,EAX
00560509  0F AF D0                  IMUL EDX,EAX
0056050C  8B C1                     MOV EAX,ECX
0056050E  0F AF C1                  IMUL EAX,ECX
LAB_00560511:
00560511  2B C2                     SUB EAX,EDX
00560513  99                        CDQ
00560514  2B C2                     SUB EAX,EDX
00560516  D1 F8                     SAR EAX,0x1
00560518  A3 88 33 80 00            MOV [0x00803388],EAX
0056051D  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
00560524  85 DB                     TEST EBX,EBX
00560526  0F 8E 91 01 00 00         JLE 0x005606bd
LAB_0056052c:
0056052C  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
00560532  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00560535  0F BE 04 48               MOVSX EAX,byte ptr [EAX + ECX*0x2]
00560539  03 05 04 33 80 00         ADD EAX,dword ptr [0x00803304]
0056053F  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
00560545  0F 88 5A 01 00 00         JS 0x005606a5
0056054B  A1 A4 33 80 00            MOV EAX,[0x008033a4]
00560550  39 85 70 FF FF FF         CMP dword ptr [EBP + 0xffffff70],EAX
00560556  0F 8D 49 01 00 00         JGE 0x005606a5
0056055C  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
00560562  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00560565  0F BE 74 4A 01            MOVSX ESI,byte ptr [EDX + ECX*0x2 + 0x1]
0056056A  03 35 08 33 80 00         ADD ESI,dword ptr [0x00803308]
00560570  0F 88 2F 01 00 00         JS 0x005606a5
00560576  3B 35 A8 33 80 00         CMP ESI,dword ptr [0x008033a8]
0056057C  0F 8D 23 01 00 00         JGE 0x005606a5
00560582  8B D6                     MOV EDX,ESI
00560584  0F AF D0                  IMUL EDX,EAX
00560587  03 95 70 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff70]
0056058D  A1 B4 33 80 00            MOV EAX,[0x008033b4]
00560592  66 83 3C 50 00            CMP word ptr [EAX + EDX*0x2],0x0
00560597  0F 8E 08 01 00 00         JLE 0x005606a5
0056059D  33 DB                     XOR EBX,EBX
0056059F  89 9D BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EBX
005605A5  39 1D 8C 33 80 00         CMP dword ptr [0x0080338c],EBX
005605AB  7E 4F                     JLE 0x005605fc
LAB_005605ad:
005605AD  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
005605B0  8B 15 10 33 80 00         MOV EDX,dword ptr [0x00803310]
005605B6  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
005605B9  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
005605BC  8B 15 EC 32 80 00         MOV EDX,dword ptr [0x008032ec]
005605C2  3B C2                     CMP EAX,EDX
005605C4  7F 02                     JG 0x005605c8
005605C6  8B C2                     MOV EAX,EDX
LAB_005605c8:
005605C8  99                        CDQ
005605C9  2B C2                     SUB EAX,EDX
005605CB  8B F8                     MOV EDI,EAX
005605CD  D1 FF                     SAR EDI,0x1
005605CF  56                        PUSH ESI
005605D0  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
005605D6  50                        PUSH EAX
005605D7  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005605DA  52                        PUSH EDX
005605DB  8B 01                     MOV EAX,dword ptr [ECX]
005605DD  50                        PUSH EAX
005605DE  E8 AD C9 14 00            CALL 0x006acf90
005605E3  3B C7                     CMP EAX,EDI
005605E5  7C 0B                     JL 0x005605f2
005605E7  43                        INC EBX
005605E8  3B 1D 8C 33 80 00         CMP EBX,dword ptr [0x0080338c]
005605EE  7C BD                     JL 0x005605ad
005605F0  EB 0A                     JMP 0x005605fc
LAB_005605f2:
005605F2  C7 85 BC FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffebc],0x1
LAB_005605fc:
005605FC  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00560602  85 C0                     TEST EAX,EAX
00560604  0F 85 9B 00 00 00         JNZ 0x005606a5
0056060A  6A 10                     PUSH 0x10
0056060C  56                        PUSH ESI
0056060D  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
00560613  51                        PUSH ECX
00560614  8B 15 08 33 80 00         MOV EDX,dword ptr [0x00803308]
0056061A  52                        PUSH EDX
0056061B  A1 04 33 80 00            MOV EAX,[0x00803304]
00560620  50                        PUSH EAX
00560621  E8 EA B2 17 00            CALL 0x006db910
00560626  50                        PUSH EAX
00560627  E8 64 B3 17 00            CALL 0x006db990
0056062C  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0056062F  8D 78 FD                  LEA EDI,[EAX + -0x3]
00560632  83 C0 03                  ADD EAX,0x3
00560635  3B F8                     CMP EDI,EAX
00560637  7F 6C                     JG 0x005606a5
LAB_00560639:
00560639  85 FF                     TEST EDI,EDI
0056063B  7D 05                     JGE 0x00560642
0056063D  8D 47 10                  LEA EAX,[EDI + 0x10]
00560640  EB 0A                     JMP 0x0056064c
LAB_00560642:
00560642  83 FF 10                  CMP EDI,0x10
00560645  8D 47 F0                  LEA EAX,[EDI + -0x10]
00560648  7D 02                     JGE 0x0056064c
0056064A  8B C7                     MOV EAX,EDI
LAB_0056064c:
0056064C  50                        PUSH EAX
0056064D  56                        PUSH ESI
0056064E  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
00560654  51                        PUSH ECX
00560655  E8 66 17 00 00            CALL 0x00561dc0
0056065A  8B D8                     MOV EBX,EAX
0056065C  8B 15 0C 33 80 00         MOV EDX,dword ptr [0x0080330c]
00560662  52                        PUSH EDX
00560663  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
00560666  50                        PUSH EAX
00560667  53                        PUSH EBX
00560668  56                        PUSH ESI
00560669  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0056066F  51                        PUSH ECX
00560670  E8 4B 1D 00 00            CALL 0x005623c0
00560675  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
0056067B  85 C0                     TEST EAX,EAX
0056067D  7C 19                     JL 0x00560698
0056067F  8B 15 E8 32 80 00         MOV EDX,dword ptr [0x008032e8]
00560685  52                        PUSH EDX
00560686  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
00560689  50                        PUSH EAX
0056068A  53                        PUSH EBX
0056068B  56                        PUSH ESI
0056068C  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
00560692  51                        PUSH ECX
00560693  E8 28 1D 00 00            CALL 0x005623c0
LAB_00560698:
00560698  83 C7 03                  ADD EDI,0x3
0056069B  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0056069E  8D 42 03                  LEA EAX,[EDX + 0x3]
005606A1  3B F8                     CMP EDI,EAX
005606A3  7E 94                     JLE 0x00560639
LAB_005606a5:
005606A5  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005606A8  83 C0 02                  ADD EAX,0x2
005606AB  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005606AE  3B 45 DC                  CMP EAX,dword ptr [EBP + -0x24]
005606B1  0F 8C 75 FE FF FF         JL 0x0056052c
005606B7  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
LAB_005606bd:
005606BD  83 C7 02                  ADD EDI,0x2
005606C0  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
005606C6  83 FF 14                  CMP EDI,0x14
005606C9  0F 8C F2 FD FF FF         JL 0x005604c1
LAB_005606cf:
005606CF  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
005606D5  8D 4C 40 03               LEA ECX,[EAX + EAX*0x2 + 0x3]
005606D9  8D 44 C8 01               LEA EAX,[EAX + ECX*0x8 + 0x1]
005606DD  C1 E0 02                  SHL EAX,0x2
005606E0  99                        CDQ
005606E1  F7 7D 18                  IDIV dword ptr [EBP + 0x18]
005606E4  8B 35 7C 33 80 00         MOV ESI,dword ptr [0x0080337c]
005606EA  3B F0                     CMP ESI,EAX
005606EC  7E 08                     JLE 0x005606f6
005606EE  8B F0                     MOV ESI,EAX
005606F0  89 35 7C 33 80 00         MOV dword ptr [0x0080337c],ESI
LAB_005606f6:
005606F6  BA 64 00 00 00            MOV EDX,0x64
005606FB  2B D0                     SUB EDX,EAX
005606FD  8B 0D 14 33 80 00         MOV ECX,dword ptr [0x00803314]
00560703  3B CA                     CMP ECX,EDX
00560705  7E 08                     JLE 0x0056070f
00560707  8B CA                     MOV ECX,EDX
00560709  89 0D 14 33 80 00         MOV dword ptr [0x00803314],ECX
LAB_0056070f:
0056070F  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
00560712  A3 98 33 80 00            MOV [0x00803398],EAX
00560717  85 C0                     TEST EAX,EAX
00560719  0F 8E 07 04 00 00         JLE 0x00560b26
0056071F  B8 FF FF FF 7F            MOV EAX,0x7fffffff
00560724  33 D2                     XOR EDX,EDX
00560726  85 F6                     TEST ESI,ESI
00560728  7E 18                     JLE 0x00560742
LAB_0056072a:
0056072A  8D 3C 92                  LEA EDI,[EDX + EDX*0x4]
0056072D  8B 1D F8 32 80 00         MOV EBX,dword ptr [0x008032f8]
00560733  8B 7C BB 0C               MOV EDI,dword ptr [EBX + EDI*0x4 + 0xc]
00560737  3B C7                     CMP EAX,EDI
00560739  7E 02                     JLE 0x0056073d
0056073B  8B C7                     MOV EAX,EDI
LAB_0056073d:
0056073D  42                        INC EDX
0056073E  3B D6                     CMP EDX,ESI
00560740  7C E8                     JL 0x0056072a
LAB_00560742:
00560742  33 D2                     XOR EDX,EDX
00560744  85 C9                     TEST ECX,ECX
00560746  7E 18                     JLE 0x00560760
LAB_00560748:
00560748  8D 3C 92                  LEA EDI,[EDX + EDX*0x4]
0056074B  8B 1D F4 32 80 00         MOV EBX,dword ptr [0x008032f4]
00560751  8B 7C BB 0C               MOV EDI,dword ptr [EBX + EDI*0x4 + 0xc]
00560755  3B C7                     CMP EAX,EDI
00560757  7E 02                     JLE 0x0056075b
00560759  8B C7                     MOV EAX,EDI
LAB_0056075b:
0056075B  42                        INC EDX
0056075C  3B D1                     CMP EDX,ECX
0056075E  7C E8                     JL 0x00560748
LAB_00560760:
00560760  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00560763  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00560766  99                        CDQ
00560767  83 E2 0F                  AND EDX,0xf
0056076A  03 C2                     ADD EAX,EDX
0056076C  C1 F8 04                  SAR EAX,0x4
0056076F  33 D2                     XOR EDX,EDX
00560771  85 F6                     TEST ESI,ESI
00560773  7E 34                     JLE 0x005607a9
LAB_00560775:
00560775  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
00560778  C1 E1 02                  SHL ECX,0x2
0056077B  8B 35 F8 32 80 00         MOV ESI,dword ptr [0x008032f8]
00560781  29 44 31 0C               SUB dword ptr [ECX + ESI*0x1 + 0xc],EAX
00560785  8B 35 F8 32 80 00         MOV ESI,dword ptr [0x008032f8]
0056078B  8B 4C 31 0C               MOV ECX,dword ptr [ECX + ESI*0x1 + 0xc]
0056078F  8B B5 A0 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffea0]
00560795  89 0C 96                  MOV dword ptr [ESI + EDX*0x4],ECX
00560798  42                        INC EDX
00560799  8B 35 7C 33 80 00         MOV ESI,dword ptr [0x0080337c]
0056079F  3B D6                     CMP EDX,ESI
005607A1  7C D2                     JL 0x00560775
005607A3  8B 0D 14 33 80 00         MOV ECX,dword ptr [0x00803314]
LAB_005607a9:
005607A9  33 D2                     XOR EDX,EDX
005607AB  85 C9                     TEST ECX,ECX
005607AD  7E 3C                     JLE 0x005607eb
LAB_005607af:
005607AF  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
005607B2  C1 E1 02                  SHL ECX,0x2
005607B5  8B 35 F4 32 80 00         MOV ESI,dword ptr [0x008032f4]
005607BB  29 44 31 0C               SUB dword ptr [ECX + ESI*0x1 + 0xc],EAX
005607BF  8B 35 7C 33 80 00         MOV ESI,dword ptr [0x0080337c]
005607C5  03 F2                     ADD ESI,EDX
005607C7  8B 3D F4 32 80 00         MOV EDI,dword ptr [0x008032f4]
005607CD  8B 4C 39 0C               MOV ECX,dword ptr [ECX + EDI*0x1 + 0xc]
005607D1  8B BD A0 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffea0]
005607D7  89 0C B7                  MOV dword ptr [EDI + ESI*0x4],ECX
005607DA  42                        INC EDX
005607DB  8B 0D 14 33 80 00         MOV ECX,dword ptr [0x00803314]
005607E1  3B D1                     CMP EDX,ECX
005607E3  7C CA                     JL 0x005607af
005607E5  8B 35 7C 33 80 00         MOV ESI,dword ptr [0x0080337c]
LAB_005607eb:
005607EB  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005607EE  C1 E1 02                  SHL ECX,0x2
005607F1  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
005607F4  A1 00 33 80 00            MOV EAX,[0x00803300]
005607F9  8D 3C 90                  LEA EDI,[EAX + EDX*0x4]
005607FC  8B 35 F4 32 80 00         MOV ESI,dword ptr [0x008032f4]
00560802  8B D1                     MOV EDX,ECX
00560804  C1 E9 02                  SHR ECX,0x2
00560807  F3 A5                     MOVSD.REP ES:EDI,ESI
00560809  8B CA                     MOV ECX,EDX
0056080B  83 E1 03                  AND ECX,0x3
0056080E  F3 A4                     MOVSB.REP ES:EDI,ESI
00560810  A1 7C 33 80 00            MOV EAX,[0x0080337c]
00560815  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00560818  8B 0D 00 33 80 00         MOV ECX,dword ptr [0x00803300]
0056081E  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
00560821  89 15 F4 32 80 00         MOV dword ptr [0x008032f4],EDX
00560827  68 10 2E 56 00            PUSH 0x562e10
0056082C  68 70 21 56 00            PUSH 0x562170
00560831  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00560834  50                        PUSH EAX
00560835  6A 0A                     PUSH 0xa
00560837  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0056083A  56                        PUSH ESI
0056083B  8B 0D 98 33 80 00         MOV ECX,dword ptr [0x00803398]
00560841  51                        PUSH ECX
00560842  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
00560848  52                        PUSH EDX
00560849  E8 F6 27 EA FF            CALL 0x00403044
0056084E  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00560851  85 C0                     TEST EAX,EAX
00560853  0F 85 58 02 00 00         JNZ 0x00560ab1
00560859  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00560860  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
00560867  83 C0 03                  ADD EAX,0x3
0056086A  24 FC                     AND AL,0xfc
0056086C  E8 CF D1 1C 00            CALL 0x0072da40
00560871  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00560874  8B C4                     MOV EAX,ESP
00560876  8B D0                     MOV EDX,EAX
00560878  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0056087B  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00560882  EB 2A                     JMP 0x005608ae
LAB_005608ae:
005608AE  33 C0                     XOR EAX,EAX
005608B0  89 85 A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EAX
005608B6  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
005608B9  8B BD 6C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff6c]
005608BF  85 FF                     TEST EDI,EDI
005608C1  0F 8C E8 00 00 00         JL 0x005609af
005608C7  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
LAB_005608ca:
005608CA  8B 35 F8 32 80 00         MOV ESI,dword ptr [0x008032f8]
005608D0  C7 45 CC D0 8A FF FF      MOV dword ptr [EBP + -0x34],0xffff8ad0
005608D7  C7 85 B0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeb0],0x0
005608E1  8B 3D 7C 33 80 00         MOV EDI,dword ptr [0x0080337c]
005608E7  85 FF                     TEST EDI,EDI
005608E9  0F 8E 80 00 00 00         JLE 0x0056096f
LAB_005608ef:
005608EF  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005608F2  85 C0                     TEST EAX,EAX
005608F4  7C 55                     JL 0x0056094b
005608F6  BF 30 75 00 00            MOV EDI,0x7530
005608FB  33 DB                     XOR EBX,EBX
005608FD  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00560903  85 C0                     TEST EAX,EAX
00560905  7E 33                     JLE 0x0056093a
LAB_00560907:
00560907  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0056090A  8B 04 99                  MOV EAX,dword ptr [ECX + EBX*0x4]
0056090D  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00560910  A1 00 33 80 00            MOV EAX,[0x00803300]
00560915  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00560918  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0056091B  51                        PUSH ECX
0056091C  8B 16                     MOV EDX,dword ptr [ESI]
0056091E  52                        PUSH EDX
0056091F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00560922  51                        PUSH ECX
00560923  8B 10                     MOV EDX,dword ptr [EAX]
00560925  52                        PUSH EDX
00560926  E8 65 C6 14 00            CALL 0x006acf90
0056092B  3B F8                     CMP EDI,EAX
0056092D  7E 02                     JLE 0x00560931
0056092F  8B F8                     MOV EDI,EAX
LAB_00560931:
00560931  43                        INC EBX
00560932  3B 9D A8 FE FF FF         CMP EBX,dword ptr [EBP + 0xfffffea8]
00560938  7C CD                     JL 0x00560907
LAB_0056093a:
0056093A  39 7D CC                  CMP dword ptr [EBP + -0x34],EDI
0056093D  7D 0C                     JGE 0x0056094b
0056093F  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
00560942  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00560948  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
LAB_0056094b:
0056094B  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00560951  40                        INC EAX
00560952  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
00560958  83 C6 14                  ADD ESI,0x14
0056095B  3B 05 7C 33 80 00         CMP EAX,dword ptr [0x0080337c]
00560961  7C 8C                     JL 0x005608ef
00560963  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00560966  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0056096C  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
LAB_0056096f:
0056096F  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
00560972  85 F6                     TEST ESI,ESI
00560974  7C 16                     JL 0x0056098c
00560976  8D 34 89                  LEA ESI,[ECX + ECX*0x4]
00560979  8B 3D F8 32 80 00         MOV EDI,dword ptr [0x008032f8]
0056097F  C7 44 B7 0C FF FF FF FF   MOV dword ptr [EDI + ESI*0x4 + 0xc],0xffffffff
00560987  89 0C 82                  MOV dword ptr [EDX + EAX*0x4],ECX
0056098A  EB 07                     JMP 0x00560993
LAB_0056098c:
0056098C  C7 04 82 FF FF FF FF      MOV dword ptr [EDX + EAX*0x4],0xffffffff
LAB_00560993:
00560993  40                        INC EAX
00560994  89 85 A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EAX
0056099A  8B 75 8C                  MOV ESI,dword ptr [EBP + -0x74]
0056099D  46                        INC ESI
0056099E  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
005609A1  8B BD 6C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff6c]
005609A7  3B F7                     CMP ESI,EDI
005609A9  0F 8E 1B FF FF FF         JLE 0x005608ca
LAB_005609af:
005609AF  8D 4F 01                  LEA ECX,[EDI + 0x1]
005609B2  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
005609B5  3B 4D 18                  CMP ECX,dword ptr [EBP + 0x18]
005609B8  0F 8D F6 00 00 00         JGE 0x00560ab4
LAB_005609be:
005609BE  8B 35 F4 32 80 00         MOV ESI,dword ptr [0x008032f4]
005609C4  C7 45 CC D0 8A FF FF      MOV dword ptr [EBP + -0x34],0xffff8ad0
005609CB  C7 85 B0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeb0],0x0
005609D5  A1 14 33 80 00            MOV EAX,[0x00803314]
005609DA  85 C0                     TEST EAX,EAX
005609DC  7E 77                     JLE 0x00560a55
LAB_005609de:
005609DE  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005609E1  85 C0                     TEST EAX,EAX
005609E3  7C 55                     JL 0x00560a3a
005609E5  BF 30 75 00 00            MOV EDI,0x7530
005609EA  33 DB                     XOR EBX,EBX
005609EC  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
005609F2  85 C0                     TEST EAX,EAX
005609F4  7E 33                     JLE 0x00560a29
LAB_005609f6:
005609F6  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
005609F9  8B 04 99                  MOV EAX,dword ptr [ECX + EBX*0x4]
005609FC  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005609FF  A1 00 33 80 00            MOV EAX,[0x00803300]
00560A04  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00560A07  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00560A0A  51                        PUSH ECX
00560A0B  8B 16                     MOV EDX,dword ptr [ESI]
00560A0D  52                        PUSH EDX
00560A0E  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00560A11  51                        PUSH ECX
00560A12  8B 10                     MOV EDX,dword ptr [EAX]
00560A14  52                        PUSH EDX
00560A15  E8 76 C5 14 00            CALL 0x006acf90
00560A1A  3B F8                     CMP EDI,EAX
00560A1C  7E 02                     JLE 0x00560a20
00560A1E  8B F8                     MOV EDI,EAX
LAB_00560a20:
00560A20  43                        INC EBX
00560A21  3B 9D A8 FE FF FF         CMP EBX,dword ptr [EBP + 0xfffffea8]
00560A27  7C CD                     JL 0x005609f6
LAB_00560a29:
00560A29  39 7D CC                  CMP dword ptr [EBP + -0x34],EDI
00560A2C  7D 0C                     JGE 0x00560a3a
00560A2E  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
00560A31  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00560A37  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
LAB_00560a3a:
00560A3A  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00560A40  40                        INC EAX
00560A41  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
00560A47  83 C6 14                  ADD ESI,0x14
00560A4A  3B 05 14 33 80 00         CMP EAX,dword ptr [0x00803314]
00560A50  7C 8C                     JL 0x005609de
00560A52  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
LAB_00560a55:
00560A55  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00560A58  85 C0                     TEST EAX,EAX
00560A5A  7C 30                     JL 0x00560a8c
00560A5C  A1 7C 33 80 00            MOV EAX,[0x0080337c]
00560A61  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00560A64  03 C2                     ADD EAX,EDX
00560A66  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00560A69  8B 35 00 33 80 00         MOV ESI,dword ptr [0x00803300]
00560A6F  C7 44 86 0C FF FF FF FF   MOV dword ptr [ESI + EAX*0x4 + 0xc],0xffffffff
00560A77  A1 7C 33 80 00            MOV EAX,[0x0080337c]
00560A7C  03 D0                     ADD EDX,EAX
00560A7E  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00560A81  8B B5 A8 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffea8]
00560A87  89 14 B0                  MOV dword ptr [EAX + ESI*0x4],EDX
00560A8A  EB 10                     JMP 0x00560a9c
LAB_00560a8c:
00560A8C  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00560A8F  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00560A95  C7 04 82 FF FF FF FF      MOV dword ptr [EDX + EAX*0x4],0xffffffff
LAB_00560a9c:
00560A9C  FF 85 A8 FE FF FF         INC dword ptr [EBP + 0xfffffea8]
00560AA2  41                        INC ECX
00560AA3  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00560AA6  3B 4D 18                  CMP ECX,dword ptr [EBP + 0x18]
00560AA9  0F 8C 0F FF FF FF         JL 0x005609be
00560AAF  EB 03                     JMP 0x00560ab4
LAB_00560ab1:
00560AB1  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_00560ab4:
00560AB4  33 D2                     XOR EDX,EDX
00560AB6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00560AB9  85 C0                     TEST EAX,EAX
00560ABB  7E 69                     JLE 0x00560b26
LAB_00560abd:
00560ABD  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00560AC0  8B 04 91                  MOV EAX,dword ptr [ECX + EDX*0x4]
00560AC3  85 C0                     TEST EAX,EAX
00560AC5  7C 59                     JL 0x00560b20
00560AC7  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00560ACA  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
00560ACD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00560AD0  C1 E0 02                  SHL EAX,0x2
00560AD3  8B 35 00 33 80 00         MOV ESI,dword ptr [0x00803300]
00560AD9  8B 34 30                  MOV ESI,dword ptr [EAX + ESI*0x1]
00560ADC  03 35 BC 33 80 00         ADD ESI,dword ptr [0x008033bc]
00560AE2  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
00560AE5  8B 35 00 33 80 00         MOV ESI,dword ptr [0x00803300]
00560AEB  8B 74 30 04               MOV ESI,dword ptr [EAX + ESI*0x1 + 0x4]
00560AEF  03 35 C0 33 80 00         ADD ESI,dword ptr [0x008033c0]
00560AF5  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
00560AF8  C7 41 0C F6 FF FF FF      MOV dword ptr [ECX + 0xc],0xfffffff6
00560AFF  3B 95 6C FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff6c]
00560B05  8B B5 40 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff40]
00560B0B  7E 03                     JLE 0x00560b10
00560B0D  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
LAB_00560b10:
00560B10  89 71 10                  MOV dword ptr [ECX + 0x10],ESI
00560B13  8B 35 00 33 80 00         MOV ESI,dword ptr [0x00803300]
00560B19  8B 44 30 08               MOV EAX,dword ptr [EAX + ESI*0x1 + 0x8]
00560B1D  89 41 14                  MOV dword ptr [ECX + 0x14],EAX
LAB_00560b20:
00560B20  42                        INC EDX
00560B21  3B 55 18                  CMP EDX,dword ptr [EBP + 0x18]
00560B24  7C 97                     JL 0x00560abd
LAB_00560b26:
00560B26  8B 8D 4C FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe4c]
00560B2C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00560B32  8B 75 94                  MOV ESI,dword ptr [EBP + -0x6c]
00560B35  EB 5F                     JMP 0x00560b96
LAB_00560b64:
00560B64  8B 85 4C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe4c]
00560B6A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00560B6F  68 CC 96 7C 00            PUSH 0x7c96cc
00560B74  68 CC 4C 7A 00            PUSH 0x7a4ccc
00560B79  56                        PUSH ESI
00560B7A  6A 00                     PUSH 0x0
00560B7C  68 56 09 00 00            PUSH 0x956
00560B81  68 B0 96 7C 00            PUSH 0x7c96b0
00560B86  E8 45 C9 14 00            CALL 0x006ad4d0
00560B8B  83 C4 18                  ADD ESP,0x18
00560B8E  85 C0                     TEST EAX,EAX
00560B90  74 01                     JZ 0x00560b93
00560B92  CC                        INT3
LAB_00560b93:
00560B93  89 75 94                  MOV dword ptr [EBP + -0x6c],ESI
LAB_00560b96:
00560B96  8D 4D 98                  LEA ECX,[EBP + -0x68]
00560B99  51                        PUSH ECX
00560B9A  E8 C1 A4 14 00            CALL 0x006ab060
00560B9F  68 B4 33 80 00            PUSH 0x8033b4
00560BA4  E8 B7 A4 14 00            CALL 0x006ab060
00560BA9  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00560BAC  52                        PUSH EDX
00560BAD  E8 AE A4 14 00            CALL 0x006ab060
00560BB2  68 80 33 80 00            PUSH 0x803380
00560BB7  E8 A4 A4 14 00            CALL 0x006ab060
00560BBC  33 FF                     XOR EDI,EDI
LAB_00560bbe:
00560BBE  A1 FC 32 80 00            MOV EAX,[0x008032fc]
00560BC3  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
00560BC6  51                        PUSH ECX
00560BC7  E8 94 A4 14 00            CALL 0x006ab060
00560BCC  83 C7 04                  ADD EDI,0x4
00560BCF  81 FF 80 00 00 00         CMP EDI,0x80
00560BD5  7C E7                     JL 0x00560bbe
00560BD7  33 FF                     XOR EDI,EDI
LAB_00560bd9:
00560BD9  8B 15 B0 33 80 00         MOV EDX,dword ptr [0x008033b0]
00560BDF  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00560BE2  50                        PUSH EAX
00560BE3  E8 78 A4 14 00            CALL 0x006ab060
00560BE8  83 C7 04                  ADD EDI,0x4
00560BEB  83 FF 40                  CMP EDI,0x40
00560BEE  7C E9                     JL 0x00560bd9
00560BF0  85 F6                     TEST ESI,ESI
00560BF2  74 17                     JZ 0x00560c0b
00560BF4  68 68 09 00 00            PUSH 0x968
00560BF9  68 B0 96 7C 00            PUSH 0x7c96b0
00560BFE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00560C04  51                        PUSH ECX
00560C05  56                        PUSH ESI
00560C06  E8 35 52 14 00            CALL 0x006a5e40
LAB_00560c0b:
00560C0B  8D A5 18 FE FF FF         LEA ESP,[EBP + 0xfffffe18]
00560C11  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00560C14  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00560C1B  5F                        POP EDI
00560C1C  5E                        POP ESI
00560C1D  5B                        POP EBX
00560C1E  8B E5                     MOV ESP,EBP
00560C20  5D                        POP EBP
00560C21  C2 28 00                  RET 0x28
