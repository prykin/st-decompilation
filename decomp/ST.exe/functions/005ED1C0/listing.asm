FUN_005ed1c0:
005ED1C0  55                        PUSH EBP
005ED1C1  8B EC                     MOV EBP,ESP
005ED1C3  83 EC 08                  SUB ESP,0x8
005ED1C6  53                        PUSH EBX
005ED1C7  56                        PUSH ESI
005ED1C8  8B F1                     MOV ESI,ECX
005ED1CA  57                        PUSH EDI
005ED1CB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005ED1CE  8B 9E BA 02 00 00         MOV EBX,dword ptr [ESI + 0x2ba]
005ED1D4  89 19                     MOV dword ptr [ECX],EBX
005ED1D6  8A 86 5A 02 00 00         MOV AL,byte ptr [ESI + 0x25a]
005ED1DC  84 C0                     TEST AL,AL
005ED1DE  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005ED1E1  0F 85 31 05 00 00         JNZ 0x005ed718
005ED1E7  8B 9E 63 02 00 00         MOV EBX,dword ptr [ESI + 0x263]
005ED1ED  8B 86 6F 02 00 00         MOV EAX,dword ptr [ESI + 0x26f]
005ED1F3  2B C3                     SUB EAX,EBX
005ED1F5  85 C0                     TEST EAX,EAX
005ED1F7  7E 09                     JLE 0x005ed202
005ED1F9  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005ED200  EB 07                     JMP 0x005ed209
LAB_005ed202:
005ED202  F7 D8                     NEG EAX
005ED204  1B C0                     SBB EAX,EAX
005ED206  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005ed209:
005ED209  8B 96 87 02 00 00         MOV EDX,dword ptr [ESI + 0x287]
005ED20F  85 D2                     TEST EDX,EDX
005ED211  74 29                     JZ 0x005ed23c
005ED213  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005ED218  8B BE 8F 02 00 00         MOV EDI,dword ptr [ESI + 0x28f]
005ED21E  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005ED224  2B C7                     SUB EAX,EDI
005ED226  0F AF C2                  IMUL EAX,EDX
005ED229  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
005ED22D  99                        CDQ
005ED22E  83 E2 07                  AND EDX,0x7
005ED231  03 C2                     ADD EAX,EDX
005ED233  8B F8                     MOV EDI,EAX
005ED235  C1 FF 03                  SAR EDI,0x3
005ED238  03 FB                     ADD EDI,EBX
005ED23A  EB 06                     JMP 0x005ed242
LAB_005ed23c:
005ED23C  8B BE C6 02 00 00         MOV EDI,dword ptr [ESI + 0x2c6]
LAB_005ed242:
005ED242  8B 86 8B 02 00 00         MOV EAX,dword ptr [ESI + 0x28b]
005ED248  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
005ED24B  85 C0                     TEST EAX,EAX
005ED24D  74 45                     JZ 0x005ed294
005ED24F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005ED252  03 C2                     ADD EAX,EDX
005ED254  85 C0                     TEST EAX,EAX
005ED256  89 01                     MOV dword ptr [ECX],EAX
005ED258  7D 05                     JGE 0x005ed25f
005ED25A  83 C0 18                  ADD EAX,0x18
005ED25D  89 01                     MOV dword ptr [ECX],EAX
LAB_005ed25f:
005ED25F  8B 01                     MOV EAX,dword ptr [ECX]
005ED261  83 F8 18                  CMP EAX,0x18
005ED264  7C 05                     JL 0x005ed26b
005ED266  83 C0 E8                  ADD EAX,-0x18
005ED269  89 01                     MOV dword ptr [ECX],EAX
LAB_005ed26b:
005ED26B  8B 9E 73 02 00 00         MOV EBX,dword ptr [ESI + 0x273]
005ED271  B8 89 88 88 88            MOV EAX,0x88888889
005ED276  F7 EB                     IMUL EBX
005ED278  03 D3                     ADD EDX,EBX
005ED27A  C1 FA 03                  SAR EDX,0x3
005ED27D  8B C2                     MOV EAX,EDX
005ED27F  C1 E8 1F                  SHR EAX,0x1f
005ED282  03 D0                     ADD EDX,EAX
005ED284  8B 01                     MOV EAX,dword ptr [ECX]
005ED286  3B C2                     CMP EAX,EDX
005ED288  75 0A                     JNZ 0x005ed294
005ED28A  C7 86 8B 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x28b],0x0
LAB_005ed294:
005ED294  85 FF                     TEST EDI,EDI
005ED296  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005ED29B  7C 11                     JL 0x005ed2ae
005ED29D  F7 EF                     IMUL EDI
005ED29F  C1 FA 06                  SAR EDX,0x6
005ED2A2  8B CA                     MOV ECX,EDX
005ED2A4  C1 E9 1F                  SHR ECX,0x1f
005ED2A7  03 D1                     ADD EDX,ECX
005ED2A9  0F BF DA                  MOVSX EBX,DX
005ED2AC  EB 10                     JMP 0x005ed2be
LAB_005ed2ae:
005ED2AE  F7 EF                     IMUL EDI
005ED2B0  C1 FA 06                  SAR EDX,0x6
005ED2B3  8B C2                     MOV EAX,EDX
005ED2B5  C1 E8 1F                  SHR EAX,0x1f
005ED2B8  03 D0                     ADD EDX,EAX
005ED2BA  0F BF DA                  MOVSX EBX,DX
005ED2BD  4B                        DEC EBX
LAB_005ed2be:
005ED2BE  66 8B 86 46 02 00 00      MOV AX,word ptr [ESI + 0x246]
005ED2C5  0F BF C8                  MOVSX ECX,AX
005ED2C8  3B D9                     CMP EBX,ECX
005ED2CA  0F 84 09 01 00 00         JZ 0x005ed3d9
005ED2D0  80 BE 52 02 00 00 01      CMP byte ptr [ESI + 0x252],0x1
005ED2D7  76 6F                     JBE 0x005ed348
005ED2D9  0F BF 96 58 02 00 00      MOVSX EDX,word ptr [ESI + 0x258]
005ED2E0  3B D3                     CMP EDX,EBX
005ED2E2  75 64                     JNZ 0x005ed348
005ED2E4  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005ED2E7  0F BF 86 44 02 00 00      MOVSX EAX,word ptr [ESI + 0x244]
005ED2EE  52                        PUSH EDX
005ED2EF  56                        PUSH ESI
005ED2F0  6A 00                     PUSH 0x0
005ED2F2  51                        PUSH ECX
005ED2F3  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005ED2F9  50                        PUSH EAX
005ED2FA  0F BF 86 42 02 00 00      MOVSX EAX,word ptr [ESI + 0x242]
005ED301  50                        PUSH EAX
005ED302  E8 BA 7B E1 FF            CALL 0x00404ec1
005ED307  85 C0                     TEST EAX,EAX
005ED309  75 06                     JNZ 0x005ed311
005ED30B  FE 8E 52 02 00 00         DEC byte ptr [ESI + 0x252]
LAB_005ed311:
005ED311  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005ED314  8B 86 77 02 00 00         MOV EAX,dword ptr [ESI + 0x277]
005ED31A  66 89 9E 46 02 00 00      MOV word ptr [ESI + 0x246],BX
005ED321  C6 86 53 02 00 00 FF      MOV byte ptr [ESI + 0x253],0xff
005ED328  89 01                     MOV dword ptr [ECX],EAX
005ED32A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005ED32D  8B 96 7B 02 00 00         MOV EDX,dword ptr [ESI + 0x27b]
005ED333  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005ED336  89 10                     MOV dword ptr [EAX],EDX
005ED338  B8 01 00 00 00            MOV EAX,0x1
005ED33D  89 39                     MOV dword ptr [ECX],EDI
005ED33F  5F                        POP EDI
005ED340  5E                        POP ESI
005ED341  5B                        POP EBX
005ED342  8B E5                     MOV ESP,EBP
005ED344  5D                        POP EBP
005ED345  C2 10 00                  RET 0x10
LAB_005ed348:
005ED348  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005ED34B  8B 96 77 02 00 00         MOV EDX,dword ptr [ESI + 0x277]
005ED351  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005ED354  89 10                     MOV dword ptr [EAX],EDX
005ED356  8B 96 7B 02 00 00         MOV EDX,dword ptr [ESI + 0x27b]
005ED35C  89 11                     MOV dword ptr [ECX],EDX
005ED35E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005ED361  89 3A                     MOV dword ptr [EDX],EDI
005ED363  8B BE 67 02 00 00         MOV EDI,dword ptr [ESI + 0x267]
005ED369  C7 86 83 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x283],0x1
005ED373  8B 00                     MOV EAX,dword ptr [EAX]
005ED375  3B C7                     CMP EAX,EDI
005ED377  0F 85 01 05 00 00         JNZ 0x005ed87e
005ED37D  8B 09                     MOV ECX,dword ptr [ECX]
005ED37F  8B 86 6B 02 00 00         MOV EAX,dword ptr [ESI + 0x26b]
005ED385  3B C8                     CMP ECX,EAX
005ED387  0F 85 F1 04 00 00         JNZ 0x005ed87e
005ED38D  8B 12                     MOV EDX,dword ptr [EDX]
005ED38F  8B 86 6F 02 00 00         MOV EAX,dword ptr [ESI + 0x26f]
005ED395  3B D0                     CMP EDX,EAX
005ED397  0F 85 E1 04 00 00         JNZ 0x005ed87e
005ED39D  8B 86 BA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ba]
005ED3A3  8B 96 73 02 00 00         MOV EDX,dword ptr [ESI + 0x273]
005ED3A9  33 C9                     XOR ECX,ECX
005ED3AB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005ED3AE  89 8E 87 02 00 00         MOV dword ptr [ESI + 0x287],ECX
005ED3B4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ED3B7  3B D0                     CMP EDX,EAX
005ED3B9  0F 85 BF 04 00 00         JNZ 0x005ed87e
005ED3BF  89 8E 8B 02 00 00         MOV dword ptr [ESI + 0x28b],ECX
005ED3C5  89 8E 83 02 00 00         MOV dword ptr [ESI + 0x283],ECX
005ED3CB  5F                        POP EDI
005ED3CC  5E                        POP ESI
005ED3CD  B8 01 00 00 00            MOV EAX,0x1
005ED3D2  5B                        POP EBX
005ED3D3  8B E5                     MOV ESP,EBP
005ED3D5  5D                        POP EBP
005ED3D6  C2 10 00                  RET 0x10
LAB_005ed3d9:
005ED3D9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ED3DC  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005ED3DF  8D 04 D5 64 00 00 00      LEA EAX,[EDX*0x8 + 0x64]
005ED3E6  0F BF D8                  MOVSX EBX,AX
005ED3E9  8A 86 52 02 00 00         MOV AL,byte ptr [ESI + 0x252]
005ED3EF  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005ED3F2  3C 01                     CMP AL,0x1
005ED3F4  76 20                     JBE 0x005ed416
005ED3F6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005ED3F9  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005ED3FF  89 0A                     MOV dword ptr [EDX],ECX
005ED401  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005ED404  8B 86 7B 02 00 00         MOV EAX,dword ptr [ESI + 0x27b]
005ED40A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005ED40D  89 01                     MOV dword ptr [ECX],EAX
005ED40F  89 3A                     MOV dword ptr [EDX],EDI
005ED411  E9 5E 04 00 00            JMP 0x005ed874
LAB_005ed416:
005ED416  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005ED419  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005ED41C  85 C0                     TEST EAX,EAX
005ED41E  0F 84 66 02 00 00         JZ 0x005ed68a
005ED424  83 C3 1E                  ADD EBX,0x1e
005ED427  3B FB                     CMP EDI,EBX
005ED429  0F 8E 99 00 00 00         JLE 0x005ed4c8
005ED42F  85 C0                     TEST EAX,EAX
005ED431  0F 8E 91 00 00 00         JLE 0x005ed4c8
005ED437  0F BF 96 44 02 00 00      MOVSX EDX,word ptr [ESI + 0x244]
005ED43E  03 C8                     ADD ECX,EAX
005ED440  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005ED443  0F BF 86 42 02 00 00      MOVSX EAX,word ptr [ESI + 0x242]
005ED44A  66 85 C0                  TEST AX,AX
005ED44D  0F 8C 01 01 00 00         JL 0x005ed554
005ED453  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005ED45A  0F 8D F4 00 00 00         JGE 0x005ed554
005ED460  66 85 D2                  TEST DX,DX
005ED463  0F 8C EB 00 00 00         JL 0x005ed554
005ED469  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005ED470  0F 8D DE 00 00 00         JGE 0x005ed554
005ED476  66 85 C9                  TEST CX,CX
005ED479  0F 8C D5 00 00 00         JL 0x005ed554
005ED47F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005ED486  0F 8D C8 00 00 00         JGE 0x005ed554
005ED48C  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005ED493  0F BF D9                  MOVSX EBX,CX
005ED496  0F AF FB                  IMUL EDI,EBX
005ED499  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005ED4A0  0F BF D2                  MOVSX EDX,DX
005ED4A3  0F AF DA                  IMUL EBX,EDX
005ED4A6  0F BF D0                  MOVSX EDX,AX
005ED4A9  03 FB                     ADD EDI,EBX
005ED4AB  03 FA                     ADD EDI,EDX
005ED4AD  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005ED4B3  83 3C FA 00               CMP dword ptr [EDX + EDI*0x8],0x0
005ED4B7  0F 85 86 01 00 00         JNZ 0x005ed643
005ED4BD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005ED4C0  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
005ED4C3  E9 8C 00 00 00            JMP 0x005ed554
LAB_005ed4c8:
005ED4C8  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005ED4CB  83 C3 E2                  ADD EBX,-0x1e
005ED4CE  3B FB                     CMP EDI,EBX
005ED4D0  0F 8D F7 00 00 00         JGE 0x005ed5cd
005ED4D6  33 DB                     XOR EBX,EBX
005ED4D8  3B C3                     CMP EAX,EBX
005ED4DA  0F 8D F1 00 00 00         JGE 0x005ed5d1
005ED4E0  0F BF 96 44 02 00 00      MOVSX EDX,word ptr [ESI + 0x244]
005ED4E7  03 C8                     ADD ECX,EAX
005ED4E9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005ED4EC  0F BF 86 42 02 00 00      MOVSX EAX,word ptr [ESI + 0x242]
005ED4F3  66 3B C3                  CMP AX,BX
005ED4F6  7C 5C                     JL 0x005ed554
005ED4F8  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005ED4FF  7D 53                     JGE 0x005ed554
005ED501  66 85 D2                  TEST DX,DX
005ED504  7C 4E                     JL 0x005ed554
005ED506  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005ED50D  7D 45                     JGE 0x005ed554
005ED50F  66 85 C9                  TEST CX,CX
005ED512  7C 40                     JL 0x005ed554
005ED514  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005ED51B  7D 37                     JGE 0x005ed554
005ED51D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005ED524  0F BF F9                  MOVSX EDI,CX
005ED527  0F AF FB                  IMUL EDI,EBX
005ED52A  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005ED531  0F BF D2                  MOVSX EDX,DX
005ED534  0F AF D3                  IMUL EDX,EBX
005ED537  03 FA                     ADD EDI,EDX
005ED539  0F BF D0                  MOVSX EDX,AX
005ED53C  03 FA                     ADD EDI,EDX
005ED53E  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005ED544  83 3C FA 00               CMP dword ptr [EDX + EDI*0x8],0x0
005ED548  0F 85 F5 00 00 00         JNZ 0x005ed643
005ED54E  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
005ED551  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_005ed554:
005ED554  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
005ED557  53                        PUSH EBX
005ED558  56                        PUSH ESI
005ED559  6A 00                     PUSH 0x0
005ED55B  51                        PUSH ECX
005ED55C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005ED562  52                        PUSH EDX
005ED563  50                        PUSH EAX
005ED564  E8 BC 3D E1 FF            CALL 0x00401325
005ED569  85 C0                     TEST EAX,EAX
005ED56B  0F 85 D2 00 00 00         JNZ 0x005ed643
005ED571  8A 86 52 02 00 00         MOV AL,byte ptr [ESI + 0x252]
005ED577  66 8B 8E 46 02 00 00      MOV CX,word ptr [ESI + 0x246]
005ED57E  66 8B 96 42 02 00 00      MOV DX,word ptr [ESI + 0x242]
005ED585  FE C0                     INC AL
005ED587  66 03 4D FC               ADD CX,word ptr [EBP + -0x4]
005ED58B  88 86 52 02 00 00         MOV byte ptr [ESI + 0x252],AL
005ED591  66 8B 86 44 02 00 00      MOV AX,word ptr [ESI + 0x244]
005ED598  66 89 96 54 02 00 00      MOV word ptr [ESI + 0x254],DX
005ED59F  8B 96 77 02 00 00         MOV EDX,dword ptr [ESI + 0x277]
005ED5A5  66 89 86 56 02 00 00      MOV word ptr [ESI + 0x256],AX
005ED5AC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005ED5AF  66 89 8E 58 02 00 00      MOV word ptr [ESI + 0x258],CX
005ED5B6  89 10                     MOV dword ptr [EAX],EDX
005ED5B8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005ED5BB  8B 8E 7B 02 00 00         MOV ECX,dword ptr [ESI + 0x27b]
005ED5C1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005ED5C4  89 0A                     MOV dword ptr [EDX],ECX
005ED5C6  89 38                     MOV dword ptr [EAX],EDI
005ED5C8  E9 A7 02 00 00            JMP 0x005ed874
LAB_005ed5cd:
005ED5CD  33 DB                     XOR EBX,EBX
005ED5CF  3B C3                     CMP EAX,EBX
LAB_005ed5d1:
005ED5D1  7E 0A                     JLE 0x005ed5dd
005ED5D3  3B BE 6F 02 00 00         CMP EDI,dword ptr [ESI + 0x26f]
005ED5D9  7D 14                     JGE 0x005ed5ef
005ED5DB  3B C3                     CMP EAX,EBX
LAB_005ed5dd:
005ED5DD  0F 8D A9 00 00 00         JGE 0x005ed68c
005ED5E3  3B BE 6F 02 00 00         CMP EDI,dword ptr [ESI + 0x26f]
005ED5E9  0F 8F 9D 00 00 00         JG 0x005ed68c
LAB_005ed5ef:
005ED5EF  8B 86 77 02 00 00         MOV EAX,dword ptr [ESI + 0x277]
005ED5F5  89 9E 87 02 00 00         MOV dword ptr [ESI + 0x287],EBX
005ED5FB  89 02                     MOV dword ptr [EDX],EAX
005ED5FD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005ED600  8B 8E 7B 02 00 00         MOV ECX,dword ptr [ESI + 0x27b]
005ED606  89 08                     MOV dword ptr [EAX],ECX
005ED608  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005ED60B  8B 8E 6F 02 00 00         MOV ECX,dword ptr [ESI + 0x26f]
005ED611  89 08                     MOV dword ptr [EAX],ECX
005ED613  8B 8E 73 02 00 00         MOV ECX,dword ptr [ESI + 0x273]
005ED619  8B 86 BA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ba]
005ED61F  8B BE 6F 02 00 00         MOV EDI,dword ptr [ESI + 0x26f]
005ED625  3B C8                     CMP ECX,EAX
005ED627  75 63                     JNZ 0x005ed68c
005ED629  89 9E 8B 02 00 00         MOV dword ptr [ESI + 0x28b],EBX
005ED62F  89 9E 83 02 00 00         MOV dword ptr [ESI + 0x283],EBX
005ED635  5F                        POP EDI
005ED636  5E                        POP ESI
005ED637  B8 01 00 00 00            MOV EAX,0x1
005ED63C  5B                        POP EBX
005ED63D  8B E5                     MOV ESP,EBP
005ED63F  5D                        POP EBP
005ED640  C2 10 00                  RET 0x10
LAB_005ed643:
005ED643  8B 8E 73 02 00 00         MOV ECX,dword ptr [ESI + 0x273]
005ED649  51                        PUSH ECX
005ED64A  8B CE                     MOV ECX,ESI
005ED64C  E8 D2 6B E1 FF            CALL 0x00404223
005ED651  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005ED654  8B 96 77 02 00 00         MOV EDX,dword ptr [ESI + 0x277]
005ED65A  5F                        POP EDI
005ED65B  89 10                     MOV dword ptr [EAX],EDX
005ED65D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005ED660  8B 8E 7B 02 00 00         MOV ECX,dword ptr [ESI + 0x27b]
005ED666  89 0A                     MOV dword ptr [EDX],ECX
005ED668  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005ED66B  8B 86 7F 02 00 00         MOV EAX,dword ptr [ESI + 0x27f]
005ED671  89 01                     MOV dword ptr [ECX],EAX
005ED673  C7 86 83 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x283],0xffffffff
005ED67D  5E                        POP ESI
005ED67E  B8 01 00 00 00            MOV EAX,0x1
005ED683  5B                        POP EBX
005ED684  8B E5                     MOV ESP,EBP
005ED686  5D                        POP EBP
005ED687  C2 10 00                  RET 0x10
LAB_005ed68a:
005ED68A  33 DB                     XOR EBX,EBX
LAB_005ed68c:
005ED68C  8B 86 77 02 00 00         MOV EAX,dword ptr [ESI + 0x277]
005ED692  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005ED695  89 02                     MOV dword ptr [EDX],EAX
005ED697  8B 86 7B 02 00 00         MOV EAX,dword ptr [ESI + 0x27b]
005ED69D  89 01                     MOV dword ptr [ECX],EAX
005ED69F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005ED6A2  89 38                     MOV dword ptr [EAX],EDI
005ED6A4  8B BE 67 02 00 00         MOV EDI,dword ptr [ESI + 0x267]
005ED6AA  C7 86 83 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x283],0x1
005ED6B4  8B 12                     MOV EDX,dword ptr [EDX]
005ED6B6  3B D7                     CMP EDX,EDI
005ED6B8  0F 85 C0 01 00 00         JNZ 0x005ed87e
005ED6BE  8B 09                     MOV ECX,dword ptr [ECX]
005ED6C0  8B 96 6B 02 00 00         MOV EDX,dword ptr [ESI + 0x26b]
005ED6C6  3B CA                     CMP ECX,EDX
005ED6C8  0F 85 B0 01 00 00         JNZ 0x005ed87e
005ED6CE  8B 10                     MOV EDX,dword ptr [EAX]
005ED6D0  8B 86 6F 02 00 00         MOV EAX,dword ptr [ESI + 0x26f]
005ED6D6  3B D0                     CMP EDX,EAX
005ED6D8  0F 85 A0 01 00 00         JNZ 0x005ed87e
005ED6DE  8B 86 BA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ba]
005ED6E4  8B 8E 73 02 00 00         MOV ECX,dword ptr [ESI + 0x273]
005ED6EA  89 9E 87 02 00 00         MOV dword ptr [ESI + 0x287],EBX
005ED6F0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005ED6F3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ED6F6  3B C8                     CMP ECX,EAX
005ED6F8  0F 85 80 01 00 00         JNZ 0x005ed87e
005ED6FE  89 9E 8B 02 00 00         MOV dword ptr [ESI + 0x28b],EBX
005ED704  89 9E 83 02 00 00         MOV dword ptr [ESI + 0x283],EBX
005ED70A  5F                        POP EDI
005ED70B  5E                        POP ESI
005ED70C  B8 01 00 00 00            MOV EAX,0x1
005ED711  5B                        POP EBX
005ED712  8B E5                     MOV ESP,EBP
005ED714  5D                        POP EBP
005ED715  C2 10 00                  RET 0x10
LAB_005ed718:
005ED718  8B 96 87 02 00 00         MOV EDX,dword ptr [ESI + 0x287]
005ED71E  85 D2                     TEST EDX,EDX
005ED720  75 08                     JNZ 0x005ed72a
005ED722  8B BE 93 02 00 00         MOV EDI,dword ptr [ESI + 0x293]
005ED728  EB 24                     JMP 0x005ed74e
LAB_005ed72a:
005ED72A  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005ED72F  8B BE 8F 02 00 00         MOV EDI,dword ptr [ESI + 0x28f]
005ED735  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005ED738  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005ED73E  2B C7                     SUB EAX,EDI
005ED740  0F AF C2                  IMUL EAX,EDX
005ED743  99                        CDQ
005ED744  83 E2 0F                  AND EDX,0xf
005ED747  03 C2                     ADD EAX,EDX
005ED749  8B F8                     MOV EDI,EAX
005ED74B  C1 FF 04                  SAR EDI,0x4
LAB_005ed74e:
005ED74E  8B 86 8B 02 00 00         MOV EAX,dword ptr [ESI + 0x28b]
005ED754  85 C0                     TEST EAX,EAX
005ED756  74 42                     JZ 0x005ed79a
005ED758  03 C3                     ADD EAX,EBX
005ED75A  85 C0                     TEST EAX,EAX
005ED75C  89 01                     MOV dword ptr [ECX],EAX
005ED75E  7D 05                     JGE 0x005ed765
005ED760  83 C0 18                  ADD EAX,0x18
005ED763  89 01                     MOV dword ptr [ECX],EAX
LAB_005ed765:
005ED765  8B 01                     MOV EAX,dword ptr [ECX]
005ED767  83 F8 18                  CMP EAX,0x18
005ED76A  7C 05                     JL 0x005ed771
005ED76C  83 C0 E8                  ADD EAX,-0x18
005ED76F  89 01                     MOV dword ptr [ECX],EAX
LAB_005ed771:
005ED771  8B 9E 73 02 00 00         MOV EBX,dword ptr [ESI + 0x273]
005ED777  B8 89 88 88 88            MOV EAX,0x88888889
005ED77C  F7 EB                     IMUL EBX
005ED77E  03 D3                     ADD EDX,EBX
005ED780  C1 FA 03                  SAR EDX,0x3
005ED783  8B C2                     MOV EAX,EDX
005ED785  C1 E8 1F                  SHR EAX,0x1f
005ED788  03 D0                     ADD EDX,EAX
005ED78A  8B 01                     MOV EAX,dword ptr [ECX]
005ED78C  3B C2                     CMP EAX,EDX
005ED78E  75 0A                     JNZ 0x005ed79a
005ED790  C7 86 8B 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x28b],0x0
LAB_005ed79a:
005ED79A  3B BE 93 02 00 00         CMP EDI,dword ptr [ESI + 0x293]
005ED7A0  7C 55                     JL 0x005ed7f7
005ED7A2  8B 8E 8B 02 00 00         MOV ECX,dword ptr [ESI + 0x28b]
005ED7A8  33 C0                     XOR EAX,EAX
005ED7AA  3B C8                     CMP ECX,EAX
005ED7AC  75 35                     JNZ 0x005ed7e3
005ED7AE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005ED7B1  8B 8E 67 02 00 00         MOV ECX,dword ptr [ESI + 0x267]
005ED7B7  5F                        POP EDI
005ED7B8  89 0A                     MOV dword ptr [EDX],ECX
005ED7BA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005ED7BD  8B 8E 6B 02 00 00         MOV ECX,dword ptr [ESI + 0x26b]
005ED7C3  89 0A                     MOV dword ptr [EDX],ECX
005ED7C5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005ED7C8  8B 8E 6F 02 00 00         MOV ECX,dword ptr [ESI + 0x26f]
005ED7CE  89 0A                     MOV dword ptr [EDX],ECX
005ED7D0  89 86 83 02 00 00         MOV dword ptr [ESI + 0x283],EAX
005ED7D6  5E                        POP ESI
005ED7D7  B8 01 00 00 00            MOV EAX,0x1
005ED7DC  5B                        POP EBX
005ED7DD  8B E5                     MOV ESP,EBP
005ED7DF  5D                        POP EBP
005ED7E0  C2 10 00                  RET 0x10
LAB_005ed7e3:
005ED7E3  89 86 87 02 00 00         MOV dword ptr [ESI + 0x287],EAX
005ED7E9  5F                        POP EDI
005ED7EA  5E                        POP ESI
005ED7EB  B8 01 00 00 00            MOV EAX,0x1
005ED7F0  5B                        POP EBX
005ED7F1  8B E5                     MOV ESP,EBP
005ED7F3  5D                        POP EBP
005ED7F4  C2 10 00                  RET 0x10
LAB_005ed7f7:
005ED7F7  8B 8E 9B 02 00 00         MOV ECX,dword ptr [ESI + 0x29b]
005ED7FD  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005ED802  0F AF CF                  IMUL ECX,EDI
005ED805  F7 E9                     IMUL ECX
005ED807  8B 8E 9F 02 00 00         MOV ECX,dword ptr [ESI + 0x29f]
005ED80D  8B 9E 5F 02 00 00         MOV EBX,dword ptr [ESI + 0x25f]
005ED813  C1 FA 0C                  SAR EDX,0xc
005ED816  0F AF CF                  IMUL ECX,EDI
005ED819  8B C2                     MOV EAX,EDX
005ED81B  C1 E8 1F                  SHR EAX,0x1f
005ED81E  03 D0                     ADD EDX,EAX
005ED820  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005ED825  03 D3                     ADD EDX,EBX
005ED827  8B DA                     MOV EBX,EDX
005ED829  F7 E9                     IMUL ECX
005ED82B  C1 FA 0C                  SAR EDX,0xc
005ED82E  8B CA                     MOV ECX,EDX
005ED830  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005ED835  C1 E9 1F                  SHR ECX,0x1f
005ED838  03 D1                     ADD EDX,ECX
005ED83A  8B 8E 63 02 00 00         MOV ECX,dword ptr [ESI + 0x263]
005ED840  03 D1                     ADD EDX,ECX
005ED842  8B 8E 97 02 00 00         MOV ECX,dword ptr [ESI + 0x297]
005ED848  0F AF CF                  IMUL ECX,EDI
005ED84B  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005ED84E  F7 E9                     IMUL ECX
005ED850  C1 FA 0C                  SAR EDX,0xc
005ED853  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005ED856  8B C2                     MOV EAX,EDX
005ED858  C1 E8 1F                  SHR EAX,0x1f
005ED85B  03 D0                     ADD EDX,EAX
005ED85D  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
005ED863  03 D0                     ADD EDX,EAX
005ED865  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005ED868  89 11                     MOV dword ptr [ECX],EDX
005ED86A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005ED86D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005ED870  89 1A                     MOV dword ptr [EDX],EBX
005ED872  89 08                     MOV dword ptr [EAX],ECX
FUN_005ed1c0::cf_common_exit_005ED874:
005ED874  C7 86 83 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x283],0x1
LAB_005ed87e:
005ED87E  5F                        POP EDI
005ED87F  5E                        POP ESI
005ED880  B8 01 00 00 00            MOV EAX,0x1
005ED885  5B                        POP EBX
005ED886  8B E5                     MOV ESP,EBP
005ED888  5D                        POP EBP
005ED889  C2 10 00                  RET 0x10
