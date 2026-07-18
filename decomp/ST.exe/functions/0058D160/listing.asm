FUN_0058d160:
0058D160  55                        PUSH EBP
0058D161  8B EC                     MOV EBP,ESP
0058D163  51                        PUSH ECX
0058D164  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0058D167  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0058D16A  53                        PUSH EBX
0058D16B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0058D16E  56                        PUSH ESI
0058D16F  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
0058D172  0F BF 4B 41               MOVSX ECX,word ptr [EBX + 0x41]
0058D176  2B F0                     SUB ESI,EAX
0058D178  57                        PUSH EDI
0058D179  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
0058D17C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0058D183  D1 FE                     SAR ESI,0x1
0058D185  03 F1                     ADD ESI,ECX
0058D187  2B FA                     SUB EDI,EDX
0058D189  0F BF 4B 43               MOVSX ECX,word ptr [EBX + 0x43]
0058D18D  D1 FF                     SAR EDI,0x1
0058D18F  03 F9                     ADD EDI,ECX
0058D191  2B F0                     SUB ESI,EAX
0058D193  2B FA                     SUB EDI,EDX
LAB_0058d195:
0058D195  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058D198  85 C9                     TEST ECX,ECX
0058D19A  74 04                     JZ 0x0058d1a0
0058D19C  8B F0                     MOV ESI,EAX
0058D19E  8B FA                     MOV EDI,EDX
LAB_0058d1a0:
0058D1A0  33 C9                     XOR ECX,ECX
0058D1A2  8B D6                     MOV EDX,ESI
0058D1A4  3B F1                     CMP ESI,ECX
0058D1A6  7D 02                     JGE 0x0058d1aa
0058D1A8  F7 DA                     NEG EDX
LAB_0058d1aa:
0058D1AA  3B F9                     CMP EDI,ECX
0058D1AC  8B C7                     MOV EAX,EDI
0058D1AE  7D 02                     JGE 0x0058d1b2
0058D1B0  F7 D8                     NEG EAX
LAB_0058d1b2:
0058D1B2  3B D0                     CMP EDX,EAX
0058D1B4  7E 54                     JLE 0x0058d20a
LAB_0058d1b6:
0058D1B6  3B F1                     CMP ESI,ECX
0058D1B8  0F BF 73 41               MOVSX ESI,word ptr [EBX + 0x41]
0058D1BC  7D 21                     JGE 0x0058d1df
0058D1BE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0058D1C1  81 EE C9 00 00 00         SUB ESI,0xc9
0058D1C7  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0058D1CA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0058D1CD  8D 54 C2 64               LEA EDX,[EDX + EAX*0x8 + 0x64]
0058D1D1  0F BF C2                  MOVSX EAX,DX
0058D1D4  3B F0                     CMP ESI,EAX
0058D1D6  7D 26                     JGE 0x0058d1fe
0058D1D8  BE 01 00 00 00            MOV ESI,0x1
0058D1DD  EB D7                     JMP 0x0058d1b6
LAB_0058d1df:
0058D1DF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0058D1E2  81 C6 C9 00 00 00         ADD ESI,0xc9
0058D1E8  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0058D1EB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0058D1EE  8D 54 C2 64               LEA EDX,[EDX + EAX*0x8 + 0x64]
0058D1F2  0F BF C2                  MOVSX EAX,DX
0058D1F5  3B F0                     CMP ESI,EAX
0058D1F7  7E 05                     JLE 0x0058d1fe
0058D1F9  83 CE FF                  OR ESI,0xffffffff
0058D1FC  EB B8                     JMP 0x0058d1b6
LAB_0058d1fe:
0058D1FE  89 7D 20                  MOV dword ptr [EBP + 0x20],EDI
0058D201  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0058D204  0F BF 7B 43               MOVSX EDI,word ptr [EBX + 0x43]
0058D208  EB 52                     JMP 0x0058d25c
LAB_0058d20a:
0058D20A  3B F9                     CMP EDI,ECX
0058D20C  0F BF 7B 43               MOVSX EDI,word ptr [EBX + 0x43]
0058D210  7D 21                     JGE 0x0058d233
0058D212  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0058D215  81 EF C9 00 00 00         SUB EDI,0xc9
0058D21B  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0058D21E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0058D221  8D 54 C2 64               LEA EDX,[EDX + EAX*0x8 + 0x64]
0058D225  0F BF C2                  MOVSX EAX,DX
0058D228  3B F8                     CMP EDI,EAX
0058D22A  7D 26                     JGE 0x0058d252
0058D22C  BF 01 00 00 00            MOV EDI,0x1
0058D231  EB D7                     JMP 0x0058d20a
LAB_0058d233:
0058D233  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0058D236  81 C7 C9 00 00 00         ADD EDI,0xc9
0058D23C  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0058D23F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0058D242  8D 54 C2 64               LEA EDX,[EDX + EAX*0x8 + 0x64]
0058D246  0F BF C2                  MOVSX EAX,DX
0058D249  3B F8                     CMP EDI,EAX
0058D24B  7E 05                     JLE 0x0058d252
0058D24D  83 CF FF                  OR EDI,0xffffffff
0058D250  EB B8                     JMP 0x0058d20a
LAB_0058d252:
0058D252  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0058D255  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
0058D258  0F BF 73 41               MOVSX ESI,word ptr [EBX + 0x41]
LAB_0058d25c:
0058D25C  66 8B 43 45               MOV AX,word ptr [EBX + 0x45]
0058D260  66 3B C1                  CMP AX,CX
0058D263  0F BF D0                  MOVSX EDX,AX
0058D266  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058D26B  7C 14                     JL 0x0058d281
0058D26D  F7 EA                     IMUL EDX
0058D26F  C1 FA 06                  SAR EDX,0x6
0058D272  8B C2                     MOV EAX,EDX
0058D274  C1 E8 1F                  SHR EAX,0x1f
0058D277  03 D0                     ADD EDX,EAX
0058D279  0F BF D2                  MOVSX EDX,DX
0058D27C  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0058D27F  EB 13                     JMP 0x0058d294
LAB_0058d281:
0058D281  F7 EA                     IMUL EDX
0058D283  C1 FA 06                  SAR EDX,0x6
0058D286  8B C2                     MOV EAX,EDX
0058D288  C1 E8 1F                  SHR EAX,0x1f
0058D28B  03 D0                     ADD EDX,EAX
0058D28D  0F BF C2                  MOVSX EAX,DX
0058D290  48                        DEC EAX
0058D291  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_0058d294:
0058D294  3B F9                     CMP EDI,ECX
0058D296  B8 79 19 8C 02            MOV EAX,0x28c1979
0058D29B  7C 10                     JL 0x0058d2ad
0058D29D  F7 EF                     IMUL EDI
0058D29F  D1 FA                     SAR EDX,0x1
0058D2A1  8B CA                     MOV ECX,EDX
0058D2A3  C1 E9 1F                  SHR ECX,0x1f
0058D2A6  03 D1                     ADD EDX,ECX
0058D2A8  0F BF CA                  MOVSX ECX,DX
0058D2AB  EB 0F                     JMP 0x0058d2bc
LAB_0058d2ad:
0058D2AD  F7 EF                     IMUL EDI
0058D2AF  D1 FA                     SAR EDX,0x1
0058D2B1  8B C2                     MOV EAX,EDX
0058D2B3  C1 E8 1F                  SHR EAX,0x1f
0058D2B6  03 D0                     ADD EDX,EAX
0058D2B8  0F BF CA                  MOVSX ECX,DX
0058D2BB  49                        DEC ECX
LAB_0058d2bc:
0058D2BC  85 F6                     TEST ESI,ESI
0058D2BE  B8 79 19 8C 02            MOV EAX,0x28c1979
0058D2C3  7C 10                     JL 0x0058d2d5
0058D2C5  F7 EE                     IMUL ESI
0058D2C7  D1 FA                     SAR EDX,0x1
0058D2C9  8B C2                     MOV EAX,EDX
0058D2CB  C1 E8 1F                  SHR EAX,0x1f
0058D2CE  03 D0                     ADD EDX,EAX
0058D2D0  0F BF C2                  MOVSX EAX,DX
0058D2D3  EB 0F                     JMP 0x0058d2e4
LAB_0058d2d5:
0058D2D5  F7 EE                     IMUL ESI
0058D2D7  D1 FA                     SAR EDX,0x1
0058D2D9  8B C2                     MOV EAX,EDX
0058D2DB  C1 E8 1F                  SHR EAX,0x1f
0058D2DE  03 D0                     ADD EDX,EAX
0058D2E0  0F BF C2                  MOVSX EAX,DX
0058D2E3  48                        DEC EAX
LAB_0058d2e4:
0058D2E4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0058D2E7  52                        PUSH EDX
0058D2E8  51                        PUSH ECX
0058D2E9  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058D2EF  50                        PUSH EAX
0058D2F0  E8 46 7A E7 FF            CALL 0x00404d3b
0058D2F5  85 C0                     TEST EAX,EAX
0058D2F7  75 17                     JNZ 0x0058d310
0058D2F9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058D2FC  40                        INC EAX
0058D2FD  83 F8 02                  CMP EAX,0x2
0058D300  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0058D303  7D 18                     JGE 0x0058d31d
0058D305  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0058D308  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0058D30B  E9 85 FE FF FF            JMP 0x0058d195
LAB_0058d310:
0058D310  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0058D313  B8 01 00 00 00            MOV EAX,0x1
0058D318  E9 8C 00 00 00            JMP 0x0058d3a9
LAB_0058d31d:
0058D31D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0058d324:
0058D324  85 FF                     TEST EDI,EDI
0058D326  B8 79 19 8C 02            MOV EAX,0x28c1979
0058D32B  7C 10                     JL 0x0058d33d
0058D32D  F7 EF                     IMUL EDI
0058D32F  D1 FA                     SAR EDX,0x1
0058D331  8B C2                     MOV EAX,EDX
0058D333  C1 E8 1F                  SHR EAX,0x1f
0058D336  03 D0                     ADD EDX,EAX
0058D338  0F BF CA                  MOVSX ECX,DX
0058D33B  EB 0F                     JMP 0x0058d34c
LAB_0058d33d:
0058D33D  F7 EF                     IMUL EDI
0058D33F  D1 FA                     SAR EDX,0x1
0058D341  8B CA                     MOV ECX,EDX
0058D343  C1 E9 1F                  SHR ECX,0x1f
0058D346  03 D1                     ADD EDX,ECX
0058D348  0F BF CA                  MOVSX ECX,DX
0058D34B  49                        DEC ECX
LAB_0058d34c:
0058D34C  85 F6                     TEST ESI,ESI
0058D34E  B8 79 19 8C 02            MOV EAX,0x28c1979
0058D353  7C 10                     JL 0x0058d365
0058D355  F7 EE                     IMUL ESI
0058D357  D1 FA                     SAR EDX,0x1
0058D359  8B C2                     MOV EAX,EDX
0058D35B  C1 E8 1F                  SHR EAX,0x1f
0058D35E  03 D0                     ADD EDX,EAX
0058D360  0F BF C2                  MOVSX EAX,DX
0058D363  EB 0F                     JMP 0x0058d374
LAB_0058d365:
0058D365  F7 EE                     IMUL ESI
0058D367  D1 FA                     SAR EDX,0x1
0058D369  8B C2                     MOV EAX,EDX
0058D36B  C1 E8 1F                  SHR EAX,0x1f
0058D36E  03 D0                     ADD EDX,EAX
0058D370  0F BF C2                  MOVSX EAX,DX
0058D373  48                        DEC EAX
LAB_0058d374:
0058D374  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0058D377  53                        PUSH EBX
0058D378  51                        PUSH ECX
0058D379  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058D37F  50                        PUSH EAX
0058D380  E8 B6 79 E7 FF            CALL 0x00404d3b
0058D385  85 C0                     TEST EAX,EAX
0058D387  75 1B                     JNZ 0x0058d3a4
0058D389  8D 43 01                  LEA EAX,[EBX + 0x1]
0058D38C  B9 05 00 00 00            MOV ECX,0x5
0058D391  99                        CDQ
0058D392  F7 F9                     IDIV ECX
0058D394  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058D397  40                        INC EAX
0058D398  3B C1                     CMP EAX,ECX
0058D39A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0058D39D  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0058D3A0  7D 2D                     JGE 0x0058d3cf
0058D3A2  EB 80                     JMP 0x0058d324
LAB_0058d3a4:
0058D3A4  B8 01 00 00 00            MOV EAX,0x1
LAB_0058d3a9:
0058D3A9  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
0058D3AC  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0058D3AF  66 89 32                  MOV word ptr [EDX],SI
0058D3B2  66 89 39                  MOV word ptr [ECX],DI
0058D3B5  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
0058D3B8  5F                        POP EDI
0058D3B9  5E                        POP ESI
0058D3BA  5B                        POP EBX
0058D3BB  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0058D3BE  8D 0C D5 64 00 00 00      LEA ECX,[EDX*0x8 + 0x64]
0058D3C5  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
0058D3C8  66 89 0A                  MOV word ptr [EDX],CX
0058D3CB  8B E5                     MOV ESP,EBP
0058D3CD  5D                        POP EBP
0058D3CE  C3                        RET
LAB_0058d3cf:
0058D3CF  5F                        POP EDI
0058D3D0  5E                        POP ESI
0058D3D1  33 C0                     XOR EAX,EAX
0058D3D3  5B                        POP EBX
0058D3D4  8B E5                     MOV ESP,EBP
0058D3D6  5D                        POP EBP
0058D3D7  C3                        RET
