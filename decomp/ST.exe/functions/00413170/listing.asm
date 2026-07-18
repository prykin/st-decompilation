FUN_00413170:
00413170  55                        PUSH EBP
00413171  8B EC                     MOV EBP,ESP
00413173  83 EC 1C                  SUB ESP,0x1c
00413176  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00413179  53                        PUSH EBX
0041317A  56                        PUSH ESI
0041317B  57                        PUSH EDI
0041317C  8B 18                     MOV EBX,dword ptr [EAX]
0041317E  8A 43 03                  MOV AL,byte ptr [EBX + 0x3]
00413181  84 C0                     TEST AL,AL
00413183  7C 14                     JL 0x00413199
00413185  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
LAB_00413188:
00413188  0F BE D0                  MOVSX EDX,AL
0041318B  3B D1                     CMP EDX,ECX
0041318D  7D 0A                     JGE 0x00413199
0041318F  8A 43 07                  MOV AL,byte ptr [EBX + 0x7]
00413192  83 C3 04                  ADD EBX,0x4
00413195  84 C0                     TEST AL,AL
00413197  7D EF                     JGE 0x00413188
LAB_00413199:
00413199  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0041319C  33 FF                     XOR EDI,EDI
0041319E  33 D2                     XOR EDX,EDX
004131A0  3B F7                     CMP ESI,EDI
004131A2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004131A5  7E 32                     JLE 0x004131d9
004131A7  8A 43 03                  MOV AL,byte ptr [EBX + 0x3]
004131AA  8D 4B 03                  LEA ECX,[EBX + 0x3]
004131AD  84 C0                     TEST AL,AL
004131AF  7C 28                     JL 0x004131d9
LAB_004131b1:
004131B1  0F BE 01                  MOVSX EAX,byte ptr [ECX]
004131B4  3B C6                     CMP EAX,ESI
004131B6  7F 1C                     JG 0x004131d4
004131B8  0F BE 41 03               MOVSX EAX,byte ptr [ECX + 0x3]
004131BC  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004131BF  83 C1 04                  ADD ECX,0x4
004131C2  03 C7                     ADD EAX,EDI
004131C4  78 09                     JS 0x004131cf
004131C6  3B 05 34 4D 7F 00         CMP EAX,dword ptr [0x007f4d34]
004131CC  7D 01                     JGE 0x004131cf
004131CE  42                        INC EDX
LAB_004131cf:
004131CF  80 39 00                  CMP byte ptr [ECX],0x0
004131D2  7D DD                     JGE 0x004131b1
LAB_004131d4:
004131D4  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004131D7  33 FF                     XOR EDI,EDI
LAB_004131d9:
004131D9  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
004131DE  8B 0D 20 4D 7F 00         MOV ECX,dword ptr [0x007f4d20]
004131E4  0F AF 05 2C 4D 7F 00      IMUL EAX,dword ptr [0x007f4d2c]
004131EB  3B D1                     CMP EDX,ECX
004131ED  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004131F0  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
004131F3  0F 8E ED 02 00 00         JLE 0x004134e6
004131F9  8B C2                     MOV EAX,EDX
004131FB  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
004131FE  C1 E0 10                  SHL EAX,0x10
00413201  99                        CDQ
00413202  F7 F9                     IDIV ECX
00413204  3B CF                     CMP ECX,EDI
00413206  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00413209  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
0041320C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0041320F  0F 8E 0B 04 00 00         JLE 0x00413620
00413215  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00413218  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0041321B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0041321e:
0041321E  8A 43 03                  MOV AL,byte ptr [EBX + 0x3]
00413221  84 C0                     TEST AL,AL
00413223  0F 8C 40 01 00 00         JL 0x00413369
00413229  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
LAB_0041322f:
0041322F  0F BE 43 02               MOVSX EAX,byte ptr [EBX + 0x2]
00413233  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
00413236  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00413239  0F 88 CB 00 00 00         JS 0x0041330a
0041323F  3B 05 34 4D 7F 00         CMP EAX,dword ptr [0x007f4d34]
00413245  0F 8D BF 00 00 00         JGE 0x0041330a
0041324B  8B 0D 08 4D 7F 00         MOV ECX,dword ptr [0x007f4d08]
00413251  83 F9 07                  CMP ECX,0x7
00413254  77 48                     JA 0x0041329e
switchD_00413256::switchD:
00413256  FF 24 8D 40 36 41 00      JMP dword ptr [ECX*0x4 + 0x413640]
switchD_00413256::caseD_0:
0041325D  0F BE 33                  MOVSX ESI,byte ptr [EBX]
00413260  03 75 08                  ADD ESI,dword ptr [EBP + 0x8]
00413263  0F BE 7B 01               MOVSX EDI,byte ptr [EBX + 0x1]
00413267  EB 32                     JMP 0x0041329b
switchD_00413256::caseD_2:
00413269  0F BE 73 01               MOVSX ESI,byte ptr [EBX + 0x1]
0041326D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00413270  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00413273  03 F1                     ADD ESI,ECX
00413275  0F BE 0B                  MOVSX ECX,byte ptr [EBX]
00413278  2B F9                     SUB EDI,ECX
0041327A  EB 22                     JMP 0x0041329e
switchD_00413256::caseD_4:
0041327C  0F BE 0B                  MOVSX ECX,byte ptr [EBX]
0041327F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00413282  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00413285  2B F1                     SUB ESI,ECX
00413287  0F BE 4B 01               MOVSX ECX,byte ptr [EBX + 0x1]
0041328B  2B F9                     SUB EDI,ECX
0041328D  EB 0F                     JMP 0x0041329e
switchD_00413256::caseD_6:
0041328F  0F BE 4B 01               MOVSX ECX,byte ptr [EBX + 0x1]
00413293  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00413296  0F BE 3B                  MOVSX EDI,byte ptr [EBX]
00413299  2B F1                     SUB ESI,ECX
LAB_0041329b:
0041329B  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
switchD_00413256::default:
0041329E  85 F6                     TEST ESI,ESI
004132A0  7C 68                     JL 0x0041330a
004132A2  3B F2                     CMP ESI,EDX
004132A4  7D 64                     JGE 0x0041330a
004132A6  85 FF                     TEST EDI,EDI
004132A8  7C 60                     JL 0x0041330a
004132AA  3B 3D 30 4D 7F 00         CMP EDI,dword ptr [0x007f4d30]
004132B0  7D 58                     JGE 0x0041330a
004132B2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004132B5  41                        INC ECX
004132B6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004132B9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004132BC  81 E9 00 00 01 00         SUB ECX,0x10000
004132C2  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
004132C5  79 43                     JNS 0x0041330a
004132C7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004132CA  0F AF D7                  IMUL EDX,EDI
004132CD  0F AF C8                  IMUL ECX,EAX
004132D0  8B C6                     MOV EAX,ESI
004132D2  03 C2                     ADD EAX,EDX
004132D4  03 C1                     ADD EAX,ECX
004132D6  8B 0D F0 4C 7F 00         MOV ECX,dword ptr [0x007f4cf0]
004132DC  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
004132E1  75 1A                     JNZ 0x004132fd
004132E3  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004132E6  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004132E9  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004132EF  80 F2 07                  XOR DL,0x7
004132F2  33 C0                     XOR EAX,EAX
004132F4  0F A3 11                  BT [ECX],EDX
004132F7  D0 D0                     RCL AL,0x1
004132F9  85 C0                     TEST EAX,EAX
004132FB  74 1C                     JZ 0x00413319
LAB_004132fd:
004132FD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00413300  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
00413306  48                        DEC EAX
00413307  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0041330a:
0041330A  8A 43 07                  MOV AL,byte ptr [EBX + 0x7]
0041330D  83 C3 04                  ADD EBX,0x4
00413310  84 C0                     TEST AL,AL
00413312  7C 55                     JL 0x00413369
00413314  E9 16 FF FF FF            JMP 0x0041322f
LAB_00413319:
00413319  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0041331C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0041331F  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00413325  03 C2                     ADD EAX,EDX
00413327  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
0041332A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0041332D  83 C3 04                  ADD EBX,0x4
00413330  89 34 08                  MOV dword ptr [EAX + ECX*0x1],ESI
00413333  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00413339  89 7C 10 04               MOV dword ptr [EAX + EDX*0x1 + 0x4],EDI
0041333D  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00413343  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00413346  89 54 08 08               MOV dword ptr [EAX + ECX*0x1 + 0x8],EDX
0041334A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0041334D  83 C0 14                  ADD EAX,0x14
00413350  41                        INC ECX
00413351  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00413354  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
00413359  3B C8                     CMP ECX,EAX
0041335B  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0041335E  0F 8D BC 02 00 00         JGE 0x00413620
00413364  E9 B5 FE FF FF            JMP 0x0041321e
LAB_00413369:
00413369  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0041336E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00413371  3B C8                     CMP ECX,EAX
00413373  0F 8D A7 02 00 00         JGE 0x00413620
00413379  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0041337C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0041337F  3B C1                     CMP EAX,ECX
00413381  0F 8D 65 01 00 00         JGE 0x004134ec
00413387  C1 E0 10                  SHL EAX,0x10
0041338A  99                        CDQ
0041338B  F7 3D 20 4D 7F 00         IDIV dword ptr [0x007f4d20]
00413391  8B 0D 20 4D 7F 00         MOV ECX,dword ptr [0x007f4d20]
00413397  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0041339A  33 C0                     XOR EAX,EAX
0041339C  3B C8                     CMP ECX,EAX
0041339E  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
004133A1  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004133A4  0F 8E 76 02 00 00         JLE 0x00413620
004133AA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_004133ad:
004133AD  8A 43 03                  MOV AL,byte ptr [EBX + 0x3]
004133B0  84 C0                     TEST AL,AL
004133B2  0F 8C 34 01 00 00         JL 0x004134ec
LAB_004133b8:
004133B8  0F BE 43 02               MOVSX EAX,byte ptr [EBX + 0x2]
004133BC  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
004133BF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004133C2  0F 88 BF 00 00 00         JS 0x00413487
004133C8  3B 05 34 4D 7F 00         CMP EAX,dword ptr [0x007f4d34]
004133CE  0F 8D B3 00 00 00         JGE 0x00413487
004133D4  8B 0D 08 4D 7F 00         MOV ECX,dword ptr [0x007f4d08]
004133DA  83 F9 07                  CMP ECX,0x7
004133DD  77 4A                     JA 0x00413429
switchD_004133df::switchD:
004133DF  FF 24 8D 60 36 41 00      JMP dword ptr [ECX*0x4 + 0x413660]
switchD_004133df::caseD_0:
004133E6  0F BE 33                  MOVSX ESI,byte ptr [EBX]
004133E9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004133EC  0F BE 7B 01               MOVSX EDI,byte ptr [EBX + 0x1]
004133F0  03 F2                     ADD ESI,EDX
004133F2  EB 32                     JMP 0x00413426
switchD_004133df::caseD_2:
004133F4  0F BE 73 01               MOVSX ESI,byte ptr [EBX + 0x1]
004133F8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004133FB  0F BE 0B                  MOVSX ECX,byte ptr [EBX]
004133FE  03 F7                     ADD ESI,EDI
00413400  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00413403  2B F9                     SUB EDI,ECX
00413405  EB 22                     JMP 0x00413429
switchD_004133df::caseD_4:
00413407  0F BE 13                  MOVSX EDX,byte ptr [EBX]
0041340A  0F BE 4B 01               MOVSX ECX,byte ptr [EBX + 0x1]
0041340E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00413411  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00413414  2B F2                     SUB ESI,EDX
00413416  2B F9                     SUB EDI,ECX
00413418  EB 0F                     JMP 0x00413429
switchD_004133df::caseD_6:
0041341A  0F BE 53 01               MOVSX EDX,byte ptr [EBX + 0x1]
0041341E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00413421  0F BE 3B                  MOVSX EDI,byte ptr [EBX]
00413424  2B F2                     SUB ESI,EDX
LAB_00413426:
00413426  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
switchD_004133df::default:
00413429  85 F6                     TEST ESI,ESI
0041342B  7C 5A                     JL 0x00413487
0041342D  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
00413433  3B F1                     CMP ESI,ECX
00413435  7D 50                     JGE 0x00413487
00413437  85 FF                     TEST EDI,EDI
00413439  7C 4C                     JL 0x00413487
0041343B  3B 3D 30 4D 7F 00         CMP EDI,dword ptr [0x007f4d30]
00413441  7D 44                     JGE 0x00413487
00413443  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00413446  81 EA 00 00 01 00         SUB EDX,0x10000
0041344C  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
0041344F  79 36                     JNS 0x00413487
00413451  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00413454  0F AF CF                  IMUL ECX,EDI
00413457  0F AF D0                  IMUL EDX,EAX
0041345A  8B C6                     MOV EAX,ESI
0041345C  03 C1                     ADD EAX,ECX
0041345E  8B 0D F0 4C 7F 00         MOV ECX,dword ptr [0x007f4cf0]
00413464  03 C2                     ADD EAX,EDX
00413466  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
0041346B  75 1A                     JNZ 0x00413487
0041346D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00413470  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00413473  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
00413479  80 F2 07                  XOR DL,0x7
0041347C  33 C0                     XOR EAX,EAX
0041347E  0F A3 11                  BT [ECX],EDX
00413481  D0 D0                     RCL AL,0x1
00413483  85 C0                     TEST EAX,EAX
00413485  74 0F                     JZ 0x00413496
LAB_00413487:
00413487  8A 43 07                  MOV AL,byte ptr [EBX + 0x7]
0041348A  83 C3 04                  ADD EBX,0x4
0041348D  84 C0                     TEST AL,AL
0041348F  7C 5B                     JL 0x004134ec
00413491  E9 22 FF FF FF            JMP 0x004133b8
LAB_00413496:
00413496  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00413499  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0041349C  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
004134A2  03 C2                     ADD EAX,EDX
004134A4  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
004134A7  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004134AA  83 C3 04                  ADD EBX,0x4
004134AD  89 34 08                  MOV dword ptr [EAX + ECX*0x1],ESI
004134B0  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004134B6  89 7C 10 04               MOV dword ptr [EAX + EDX*0x1 + 0x4],EDI
004134BA  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
004134C0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004134C3  89 54 08 08               MOV dword ptr [EAX + ECX*0x1 + 0x8],EDX
004134C7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004134CA  83 C0 14                  ADD EAX,0x14
004134CD  41                        INC ECX
004134CE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004134D1  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
004134D6  3B C8                     CMP ECX,EAX
004134D8  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
004134DB  0F 8D 3F 01 00 00         JGE 0x00413620
004134E1  E9 C7 FE FF FF            JMP 0x004133ad
LAB_004134e6:
004134E6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004134E9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_004134ec:
004134EC  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
004134F1  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004134F4  3B C8                     CMP ECX,EAX
004134F6  0F 8D 24 01 00 00         JGE 0x00413620
004134FC  33 C9                     XOR ECX,ECX
004134FE  3B C1                     CMP EAX,ECX
00413500  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00413503  0F 8E 17 01 00 00         JLE 0x00413620
00413509  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_0041350c:
0041350C  8A 43 03                  MOV AL,byte ptr [EBX + 0x3]
0041350F  84 C0                     TEST AL,AL
00413511  0F 8C 19 01 00 00         JL 0x00413630
00413517  0F BE 43 02               MOVSX EAX,byte ptr [EBX + 0x2]
0041351B  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
0041351E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00413521  0F 88 B1 00 00 00         JS 0x004135d8
00413527  3B 05 34 4D 7F 00         CMP EAX,dword ptr [0x007f4d34]
0041352D  0F 8D A5 00 00 00         JGE 0x004135d8
00413533  8B 0D 08 4D 7F 00         MOV ECX,dword ptr [0x007f4d08]
00413539  83 F9 07                  CMP ECX,0x7
0041353C  77 4A                     JA 0x00413588
switchD_0041353e::switchD:
0041353E  FF 24 8D 80 36 41 00      JMP dword ptr [ECX*0x4 + 0x413680]
switchD_0041353e::caseD_0:
00413545  0F BE 33                  MOVSX ESI,byte ptr [EBX]
00413548  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0041354B  0F BE 7B 01               MOVSX EDI,byte ptr [EBX + 0x1]
0041354F  03 F2                     ADD ESI,EDX
00413551  EB 32                     JMP 0x00413585
switchD_0041353e::caseD_2:
00413553  0F BE 73 01               MOVSX ESI,byte ptr [EBX + 0x1]
00413557  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0041355A  0F BE 0B                  MOVSX ECX,byte ptr [EBX]
0041355D  03 F7                     ADD ESI,EDI
0041355F  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00413562  2B F9                     SUB EDI,ECX
00413564  EB 22                     JMP 0x00413588
switchD_0041353e::caseD_4:
00413566  0F BE 13                  MOVSX EDX,byte ptr [EBX]
00413569  0F BE 4B 01               MOVSX ECX,byte ptr [EBX + 0x1]
0041356D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00413570  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00413573  2B F2                     SUB ESI,EDX
00413575  2B F9                     SUB EDI,ECX
00413577  EB 0F                     JMP 0x00413588
switchD_0041353e::caseD_6:
00413579  0F BE 53 01               MOVSX EDX,byte ptr [EBX + 0x1]
0041357D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00413580  0F BE 3B                  MOVSX EDI,byte ptr [EBX]
00413583  2B F2                     SUB ESI,EDX
LAB_00413585:
00413585  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
switchD_0041353e::default:
00413588  85 F6                     TEST ESI,ESI
0041358A  7C 4C                     JL 0x004135d8
0041358C  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
00413592  3B F1                     CMP ESI,ECX
00413594  7D 42                     JGE 0x004135d8
00413596  85 FF                     TEST EDI,EDI
00413598  7C 3E                     JL 0x004135d8
0041359A  3B 3D 30 4D 7F 00         CMP EDI,dword ptr [0x007f4d30]
004135A0  7D 36                     JGE 0x004135d8
004135A2  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004135A5  0F AF CF                  IMUL ECX,EDI
004135A8  0F AF D0                  IMUL EDX,EAX
004135AB  8B C6                     MOV EAX,ESI
004135AD  03 C1                     ADD EAX,ECX
004135AF  8B 0D F0 4C 7F 00         MOV ECX,dword ptr [0x007f4cf0]
004135B5  03 C2                     ADD EAX,EDX
004135B7  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
004135BC  75 1A                     JNZ 0x004135d8
004135BE  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004135C1  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004135C4  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004135CA  80 F2 07                  XOR DL,0x7
004135CD  33 C0                     XOR EAX,EAX
004135CF  0F A3 11                  BT [ECX],EDX
004135D2  D0 D0                     RCL AL,0x1
004135D4  85 C0                     TEST EAX,EAX
004135D6  74 08                     JZ 0x004135e0
LAB_004135d8:
004135D8  83 C3 04                  ADD EBX,0x4
004135DB  E9 2C FF FF FF            JMP 0x0041350c
LAB_004135e0:
004135E0  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004135E6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004135E9  83 C3 04                  ADD EBX,0x4
004135EC  89 34 10                  MOV dword ptr [EAX + EDX*0x1],ESI
004135EF  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
004135F5  89 7C 08 04               MOV dword ptr [EAX + ECX*0x1 + 0x4],EDI
004135F9  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004135FF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00413602  89 4C 10 08               MOV dword ptr [EAX + EDX*0x1 + 0x8],ECX
00413606  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00413609  83 C0 14                  ADD EAX,0x14
0041360C  41                        INC ECX
0041360D  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00413610  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
00413615  3B C8                     CMP ECX,EAX
00413617  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0041361A  0F 8C EC FE FF FF         JL 0x0041350c
LAB_00413620:
00413620  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00413623  5F                        POP EDI
00413624  5E                        POP ESI
00413625  33 C0                     XOR EAX,EAX
00413627  89 1A                     MOV dword ptr [EDX],EBX
00413629  5B                        POP EBX
0041362A  8B E5                     MOV ESP,EBP
0041362C  5D                        POP EBP
0041362D  C2 18 00                  RET 0x18
LAB_00413630:
00413630  5F                        POP EDI
00413631  5E                        POP ESI
00413632  B8 FC FF FF FF            MOV EAX,0xfffffffc
00413637  5B                        POP EBX
00413638  8B E5                     MOV ESP,EBP
0041363A  5D                        POP EBP
0041363B  C2 18 00                  RET 0x18
