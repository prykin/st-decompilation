AiPlrClassTy::Offensive:
0067C180  55                        PUSH EBP
0067C181  8B EC                     MOV EBP,ESP
0067C183  83 EC 7C                  SUB ESP,0x7c
0067C186  8A 81 76 06 00 00         MOV AL,byte ptr [ECX + 0x676]
0067C18C  53                        PUSH EBX
0067C18D  56                        PUSH ESI
0067C18E  57                        PUSH EDI
0067C18F  33 FF                     XOR EDI,EDI
0067C191  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0067C194  84 C0                     TEST AL,AL
0067C196  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0067C199  0F 84 E2 04 00 00         JZ 0x0067c681
0067C19F  81 B9 40 06 00 00 FF 00 00 00  CMP dword ptr [ECX + 0x640],0xff
0067C1A9  0F 84 D2 04 00 00         JZ 0x0067c681
0067C1AF  39 B9 95 06 00 00         CMP dword ptr [ECX + 0x695],EDI
0067C1B5  0F 84 C6 04 00 00         JZ 0x0067c681
0067C1BB  39 3D 74 A1 7F 00         CMP dword ptr [0x007fa174],EDI
0067C1C1  0F 84 BA 04 00 00         JZ 0x0067c681
0067C1C7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067C1CC  8D 55 88                  LEA EDX,[EBP + -0x78]
0067C1CF  8D 4D 84                  LEA ECX,[EBP + -0x7c]
0067C1D2  57                        PUSH EDI
0067C1D3  52                        PUSH EDX
0067C1D4  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0067C1D7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067C1DD  E8 0E 16 0B 00            CALL 0x0072d7f0
0067C1E2  8B F0                     MOV ESI,EAX
0067C1E4  83 C4 08                  ADD ESP,0x8
0067C1E7  3B F7                     CMP ESI,EDI
0067C1E9  0F 85 46 04 00 00         JNZ 0x0067c635
0067C1EF  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0067C1F2  8B 86 89 06 00 00         MOV EAX,dword ptr [ESI + 0x689]
0067C1F8  3B C7                     CMP EAX,EDI
0067C1FA  8B 86 81 06 00 00         MOV EAX,dword ptr [ESI + 0x681]
0067C200  0F 85 68 02 00 00         JNZ 0x0067c46e
0067C206  3B C7                     CMP EAX,EDI
0067C208  74 19                     JZ 0x0067c223
0067C20A  8B 96 85 06 00 00         MOV EDX,dword ptr [ESI + 0x685]
0067C210  8B 8E FE 06 00 00         MOV ECX,dword ptr [ESI + 0x6fe]
0067C216  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0067C219  03 C2                     ADD EAX,EDX
0067C21B  3B C8                     CMP ECX,EAX
0067C21D  0F 82 5E 04 00 00         JC 0x0067c681
LAB_0067c223:
0067C223  8B 8E FE 06 00 00         MOV ECX,dword ptr [ESI + 0x6fe]
0067C229  6A 05                     PUSH 0x5
0067C22B  6A 10                     PUSH 0x10
0067C22D  6A 05                     PUSH 0x5
0067C22F  57                        PUSH EDI
0067C230  89 8E 85 06 00 00         MOV dword ptr [ESI + 0x685],ECX
0067C236  E8 55 20 03 00            CALL 0x006ae290
0067C23B  8B D8                     MOV EBX,EAX
0067C23D  8B CE                     MOV ECX,ESI
0067C23F  53                        PUSH EBX
0067C240  68 44 35 40 00            PUSH 0x403544
0067C245  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0067C248  E8 96 65 D8 FF            CALL 0x004027e3
0067C24D  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0067C250  33 C9                     XOR ECX,ECX
0067C252  33 D2                     XOR EDX,EDX
0067C254  3B C8                     CMP ECX,EAX
0067C256  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0067C259  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0067C25C  7D 32                     JGE 0x0067c290
LAB_0067c25e:
0067C25E  73 0D                     JNC 0x0067c26d
0067C260  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0067C263  8B 7B 1C                  MOV EDI,dword ptr [EBX + 0x1c]
0067C266  0F AF C1                  IMUL EAX,ECX
0067C269  03 C7                     ADD EAX,EDI
0067C26B  EB 02                     JMP 0x0067c26f
LAB_0067c26d:
0067C26D  33 C0                     XOR EAX,EAX
LAB_0067c26f:
0067C26F  85 C0                     TEST EAX,EAX
0067C271  74 12                     JZ 0x0067c285
0067C273  66 83 38 00               CMP word ptr [EAX],0x0
0067C277  76 0C                     JBE 0x0067c285
0067C279  0F BF 78 02               MOVSX EDI,word ptr [EAX + 0x2]
0067C27D  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0067C280  03 D7                     ADD EDX,EDI
0067C282  01 45 F4                  ADD dword ptr [EBP + -0xc],EAX
LAB_0067c285:
0067C285  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0067C288  41                        INC ECX
0067C289  3B C8                     CMP ECX,EAX
0067C28B  7C D1                     JL 0x0067c25e
0067C28D  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_0067c290:
0067C290  0F BF 8E 77 06 00 00      MOVSX ECX,word ptr [ESI + 0x677]
0067C297  3B D1                     CMP EDX,ECX
0067C299  0F 8C 7C 03 00 00         JL 0x0067c61b
0067C29F  85 C0                     TEST EAX,EAX
0067C2A1  0F 8E 74 03 00 00         JLE 0x0067c61b
0067C2A7  85 D2                     TEST EDX,EDX
0067C2A9  0F 8E 6C 03 00 00         JLE 0x0067c61b
0067C2AF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0067C2B2  85 C0                     TEST EAX,EAX
0067C2B4  0F 8E 61 03 00 00         JLE 0x0067c61b
0067C2BA  8A 96 40 06 00 00         MOV DL,byte ptr [ESI + 0x640]
0067C2C0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067C2C6  52                        PUSH EDX
0067C2C7  E8 BD 96 D8 FF            CALL 0x00405989
0067C2CC  8B F8                     MOV EDI,EAX
0067C2CE  85 FF                     TEST EDI,EDI
0067C2D0  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0067C2D3  0F 84 42 03 00 00         JZ 0x0067c61b
0067C2D9  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0067C2DC  33 C9                     XOR ECX,ECX
0067C2DE  3B C8                     CMP ECX,EAX
0067C2E0  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0067C2E3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0067C2E6  7D 5E                     JGE 0x0067c346
LAB_0067c2e8:
0067C2E8  73 0D                     JNC 0x0067c2f7
0067C2EA  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0067C2ED  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0067C2F0  0F AF C1                  IMUL EAX,ECX
0067C2F3  03 C2                     ADD EAX,EDX
0067C2F5  EB 02                     JMP 0x0067c2f9
LAB_0067c2f7:
0067C2F7  33 C0                     XOR EAX,EAX
LAB_0067c2f9:
0067C2F9  8B 18                     MOV EBX,dword ptr [EAX]
0067C2FB  85 DB                     TEST EBX,EBX
0067C2FD  74 39                     JZ 0x0067c338
0067C2FF  8B 03                     MOV EAX,dword ptr [EBX]
0067C301  8B CB                     MOV ECX,EBX
0067C303  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0067C309  85 C0                     TEST EAX,EAX
0067C30B  74 28                     JZ 0x0067c335
0067C30D  8B 13                     MOV EDX,dword ptr [EBX]
0067C30F  8B CB                     MOV ECX,EBX
0067C311  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0067C314  50                        PUSH EAX
0067C315  E8 F1 7D D8 FF            CALL 0x0040410b
0067C31A  83 C4 04                  ADD ESP,0x4
0067C31D  A8 03                     TEST AL,0x3
0067C31F  75 07                     JNZ 0x0067c328
0067C321  A9 00 00 63 00            TEST EAX,0x630000
0067C326  74 0D                     JZ 0x0067c335
LAB_0067c328:
0067C328  8B 03                     MOV EAX,dword ptr [EBX]
0067C32A  8B CB                     MOV ECX,EBX
0067C32C  FF 90 D4 00 00 00         CALL dword ptr [EAX + 0xd4]
0067C332  01 45 F0                  ADD dword ptr [EBP + -0x10],EAX
LAB_0067c335:
0067C335  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0067c338:
0067C338  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0067C33B  41                        INC ECX
0067C33C  3B C8                     CMP ECX,EAX
0067C33E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0067C341  7C A5                     JL 0x0067c2e8
0067C343  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0067c346:
0067C346  0F BF 8E 79 06 00 00      MOVSX ECX,word ptr [ESI + 0x679]
0067C34D  39 4D E8                  CMP dword ptr [EBP + -0x18],ECX
0067C350  7D 26                     JGE 0x0067c378
0067C352  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0067C355  85 C0                     TEST EAX,EAX
0067C357  7E 1F                     JLE 0x0067c378
0067C359  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0067C35C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0067C35F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0067C362  C1 E0 02                  SHL EAX,0x2
0067C365  99                        CDQ
0067C366  F7 7D F0                  IDIV dword ptr [EBP + -0x10]
0067C369  0F BF 96 7B 06 00 00      MOVSX EDX,word ptr [ESI + 0x67b]
0067C370  3B C2                     CMP EAX,EDX
0067C372  0F 8E A3 02 00 00         JLE 0x0067c61b
LAB_0067c378:
0067C378  8B 86 AD 06 00 00         MOV EAX,dword ptr [ESI + 0x6ad]
0067C37E  33 C9                     XOR ECX,ECX
0067C380  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0067C383  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
0067C386  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0067C389  3B C8                     CMP ECX,EAX
0067C38B  0F 8D A0 00 00 00         JGE 0x0067c431
LAB_0067c391:
0067C391  73 0D                     JNC 0x0067c3a0
0067C393  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0067C396  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0067C399  0F AF C1                  IMUL EAX,ECX
0067C39C  03 C2                     ADD EAX,EDX
0067C39E  EB 02                     JMP 0x0067c3a2
LAB_0067c3a0:
0067C3A0  33 C0                     XOR EAX,EAX
LAB_0067c3a2:
0067C3A2  8B 18                     MOV EBX,dword ptr [EAX]
0067C3A4  85 DB                     TEST EBX,EBX
0067C3A6  74 77                     JZ 0x0067c41f
0067C3A8  8B 13                     MOV EDX,dword ptr [EBX]
0067C3AA  8B CB                     MOV ECX,EBX
0067C3AC  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0067C3B2  85 C0                     TEST EAX,EAX
0067C3B4  74 66                     JZ 0x0067c41c
0067C3B6  B9 07 00 00 00            MOV ECX,0x7
0067C3BB  33 C0                     XOR EAX,EAX
0067C3BD  8D 7D C8                  LEA EDI,[EBP + -0x38]
0067C3C0  F3 AB                     STOSD.REP ES:EDI
0067C3C2  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0067C3C6  8B CB                     MOV ECX,EBX
0067C3C8  66 89 45 C8               MOV word ptr [EBP + -0x38],AX
0067C3CC  8B 13                     MOV EDX,dword ptr [EBX]
0067C3CE  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0067C3D1  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
0067C3D5  8D 45 CC                  LEA EAX,[EBP + -0x34]
0067C3D8  53                        PUSH EBX
0067C3D9  50                        PUSH EAX
0067C3DA  E8 E3 93 D8 FF            CALL 0x004057c2
0067C3DF  8B 13                     MOV EDX,dword ptr [EBX]
0067C3E1  83 C4 08                  ADD ESP,0x8
0067C3E4  8B CB                     MOV ECX,EBX
0067C3E6  FF 92 D4 00 00 00         CALL dword ptr [EDX + 0xd4]
0067C3EC  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0067C3EF  0F BF 45 CA               MOVSX EAX,word ptr [EBP + -0x36]
0067C3F3  50                        PUSH EAX
0067C3F4  E8 12 7D D8 FF            CALL 0x0040410b
0067C3F9  50                        PUSH EAX
0067C3FA  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0067C3FD  E8 B5 62 D8 FF            CALL 0x004026b7
0067C402  8B 96 AD 06 00 00         MOV EDX,dword ptr [ESI + 0x6ad]
0067C408  83 C4 08                  ADD ESP,0x8
0067C40B  8D 4D C8                  LEA ECX,[EBP + -0x38]
0067C40E  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
0067C412  51                        PUSH ECX
0067C413  52                        PUSH EDX
0067C414  E8 A7 1D 03 00            CALL 0x006ae1c0
0067C419  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_0067c41c:
0067C41C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0067c41f:
0067C41F  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0067C422  41                        INC ECX
0067C423  3B C8                     CMP ECX,EAX
0067C425  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0067C428  0F 8C 63 FF FF FF         JL 0x0067c391
0067C42E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0067c431:
0067C431  8B 86 AD 06 00 00         MOV EAX,dword ptr [ESI + 0x6ad]
0067C437  68 FD 26 40 00            PUSH 0x4026fd
0067C43C  50                        PUSH EAX
0067C43D  E8 66 85 D8 FF            CALL 0x004049a8
0067C442  68 B4 29 40 00            PUSH 0x4029b4
0067C447  53                        PUSH EBX
0067C448  E8 5B 85 D8 FF            CALL 0x004049a8
0067C44D  8B 8E AD 06 00 00         MOV ECX,dword ptr [ESI + 0x6ad]
0067C453  83 C4 10                  ADD ESP,0x10
0067C456  51                        PUSH ECX
0067C457  53                        PUSH EBX
0067C458  8B CE                     MOV ECX,ESI
0067C45A  E8 21 58 D8 FF            CALL 0x00401c80
0067C45F  C7 86 89 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x689],0x1
0067C469  E9 AD 01 00 00            JMP 0x0067c61b
LAB_0067c46e:
0067C46E  3B C7                     CMP EAX,EDI
0067C470  74 16                     JZ 0x0067c488
0067C472  8B 96 85 06 00 00         MOV EDX,dword ptr [ESI + 0x685]
0067C478  03 D0                     ADD EDX,EAX
0067C47A  8B 86 FE 06 00 00         MOV EAX,dword ptr [ESI + 0x6fe]
0067C480  3B C2                     CMP EAX,EDX
0067C482  0F 82 F9 01 00 00         JC 0x0067c681
LAB_0067c488:
0067C488  8B 8E AD 06 00 00         MOV ECX,dword ptr [ESI + 0x6ad]
0067C48E  8B 86 FE 06 00 00         MOV EAX,dword ptr [ESI + 0x6fe]
0067C494  51                        PUSH ECX
0067C495  8B CE                     MOV ECX,ESI
0067C497  89 86 85 06 00 00         MOV dword ptr [ESI + 0x685],EAX
0067C49D  E8 44 65 D8 FF            CALL 0x004029e6
0067C4A2  8B 96 AD 06 00 00         MOV EDX,dword ptr [ESI + 0x6ad]
0067C4A8  52                        PUSH EDX
0067C4A9  E8 93 4B D8 FF            CALL 0x00401041
0067C4AE  83 C4 04                  ADD ESP,0x4
0067C4B1  8B D8                     MOV EBX,EAX
0067C4B3  6A 05                     PUSH 0x5
0067C4B5  6A 10                     PUSH 0x10
0067C4B7  6A 05                     PUSH 0x5
0067C4B9  57                        PUSH EDI
0067C4BA  E8 D1 1D 03 00            CALL 0x006ae290
0067C4BF  8B F8                     MOV EDI,EAX
0067C4C1  8B CE                     MOV ECX,ESI
0067C4C3  57                        PUSH EDI
0067C4C4  68 44 35 40 00            PUSH 0x403544
0067C4C9  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0067C4CC  E8 12 63 D8 FF            CALL 0x004027e3
0067C4D1  8B 7F 0C                  MOV EDI,dword ptr [EDI + 0xc]
0067C4D4  8D 04 3B                  LEA EAX,[EBX + EDI*0x1]
0067C4D7  85 C0                     TEST EAX,EAX
0067C4D9  75 0C                     JNZ 0x0067c4e7
0067C4DB  8B CE                     MOV ECX,ESI
0067C4DD  E8 6D 74 D8 FF            CALL 0x0040394f
0067C4E2  E9 31 01 00 00            JMP 0x0067c618
LAB_0067c4e7:
0067C4E7  85 FF                     TEST EDI,EDI
0067C4E9  0F 8E 29 01 00 00         JLE 0x0067c618
0067C4EF  8B 8E AD 06 00 00         MOV ECX,dword ptr [ESI + 0x6ad]
0067C4F5  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
0067C4F8  0F 8E F8 00 00 00         JLE 0x0067c5f6
0067C4FE  8A 96 40 06 00 00         MOV DL,byte ptr [ESI + 0x640]
0067C504  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067C50A  52                        PUSH EDX
0067C50B  E8 79 94 D8 FF            CALL 0x00405989
0067C510  8B C8                     MOV ECX,EAX
0067C512  85 C9                     TEST ECX,ECX
0067C514  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0067C517  0F 84 C5 00 00 00         JZ 0x0067c5e2
0067C51D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067C520  33 FF                     XOR EDI,EDI
0067C522  85 C0                     TEST EAX,EAX
0067C524  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0067C527  0F 8E B5 00 00 00         JLE 0x0067c5e2
0067C52D  3B F8                     CMP EDI,EAX
LAB_0067c52f:
0067C52F  73 0D                     JNC 0x0067c53e
0067C531  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067C534  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067C537  0F AF C7                  IMUL EAX,EDI
0067C53A  03 C2                     ADD EAX,EDX
0067C53C  EB 02                     JMP 0x0067c540
LAB_0067c53e:
0067C53E  33 C0                     XOR EAX,EAX
LAB_0067c540:
0067C540  8B 18                     MOV EBX,dword ptr [EAX]
0067C542  85 DB                     TEST EBX,EBX
0067C544  0F 84 89 00 00 00         JZ 0x0067c5d3
0067C54A  8B 03                     MOV EAX,dword ptr [EBX]
0067C54C  8B CB                     MOV ECX,EBX
0067C54E  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0067C554  85 C0                     TEST EAX,EAX
0067C556  74 78                     JZ 0x0067c5d0
0067C558  8B 8E AD 06 00 00         MOV ECX,dword ptr [ESI + 0x6ad]
0067C55E  57                        PUSH EDI
0067C55F  51                        PUSH ECX
0067C560  E8 49 97 D8 FF            CALL 0x00405cae
0067C565  83 C4 08                  ADD ESP,0x8
0067C568  85 C0                     TEST EAX,EAX
0067C56A  75 64                     JNZ 0x0067c5d0
0067C56C  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0067C570  B9 07 00 00 00            MOV ECX,0x7
0067C575  8D 7D C8                  LEA EDI,[EBP + -0x38]
0067C578  F3 AB                     STOSD.REP ES:EDI
0067C57A  66 89 55 C8               MOV word ptr [EBP + -0x38],DX
0067C57E  8B 03                     MOV EAX,dword ptr [EBX]
0067C580  8B CB                     MOV ECX,EBX
0067C582  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0067C585  8D 4D CC                  LEA ECX,[EBP + -0x34]
0067C588  53                        PUSH EBX
0067C589  51                        PUSH ECX
0067C58A  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
0067C58E  E8 2F 92 D8 FF            CALL 0x004057c2
0067C593  8B 13                     MOV EDX,dword ptr [EBX]
0067C595  83 C4 08                  ADD ESP,0x8
0067C598  8B CB                     MOV ECX,EBX
0067C59A  FF 92 D4 00 00 00         CALL dword ptr [EDX + 0xd4]
0067C5A0  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0067C5A3  0F BF 45 CA               MOVSX EAX,word ptr [EBP + -0x36]
0067C5A7  50                        PUSH EAX
0067C5A8  E8 5E 7B D8 FF            CALL 0x0040410b
0067C5AD  50                        PUSH EAX
0067C5AE  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0067C5B1  E8 01 61 D8 FF            CALL 0x004026b7
0067C5B6  8B 96 AD 06 00 00         MOV EDX,dword ptr [ESI + 0x6ad]
0067C5BC  83 C4 08                  ADD ESP,0x8
0067C5BF  8D 4D C8                  LEA ECX,[EBP + -0x38]
0067C5C2  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
0067C5C6  51                        PUSH ECX
0067C5C7  52                        PUSH EDX
0067C5C8  E8 F3 1B 03 00            CALL 0x006ae1c0
0067C5CD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0067c5d0:
0067C5D0  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_0067c5d3:
0067C5D3  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067C5D6  47                        INC EDI
0067C5D7  3B F8                     CMP EDI,EAX
0067C5D9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0067C5DC  0F 8C 4D FF FF FF         JL 0x0067c52f
LAB_0067c5e2:
0067C5E2  8B 86 AD 06 00 00         MOV EAX,dword ptr [ESI + 0x6ad]
0067C5E8  68 FD 26 40 00            PUSH 0x4026fd
0067C5ED  50                        PUSH EAX
0067C5EE  E8 B5 83 D8 FF            CALL 0x004049a8
0067C5F3  83 C4 08                  ADD ESP,0x8
LAB_0067c5f6:
0067C5F6  8B 86 AD 06 00 00         MOV EAX,dword ptr [ESI + 0x6ad]
0067C5FC  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067C5FF  85 C9                     TEST ECX,ECX
0067C601  75 09                     JNZ 0x0067c60c
0067C603  8B CE                     MOV ECX,ESI
0067C605  E8 45 73 D8 FF            CALL 0x0040394f
0067C60A  EB 0C                     JMP 0x0067c618
LAB_0067c60c:
0067C60C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0067C60F  50                        PUSH EAX
0067C610  51                        PUSH ECX
0067C611  8B CE                     MOV ECX,ESI
0067C613  E8 68 56 D8 FF            CALL 0x00401c80
LAB_0067c618:
0067C618  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0067c61b:
0067C61B  85 DB                     TEST EBX,EBX
0067C61D  74 06                     JZ 0x0067c625
0067C61F  53                        PUSH EBX
0067C620  E8 EB 1A 03 00            CALL 0x006ae110
LAB_0067c625:
0067C625  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0067C628  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067C62E  5F                        POP EDI
0067C62F  5E                        POP ESI
0067C630  5B                        POP EBX
0067C631  8B E5                     MOV ESP,EBP
0067C633  5D                        POP EBP
0067C634  C3                        RET
LAB_0067c635:
0067C635  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0067C638  68 2C 2F 7D 00            PUSH 0x7d2f2c
0067C63D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067C642  56                        PUSH ESI
0067C643  57                        PUSH EDI
0067C644  68 70 05 00 00            PUSH 0x570
0067C649  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067C64E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067C653  E8 78 0E 03 00            CALL 0x006ad4d0
0067C658  83 C4 18                  ADD ESP,0x18
0067C65B  85 C0                     TEST EAX,EAX
0067C65D  74 01                     JZ 0x0067c660
0067C65F  CC                        INT3
LAB_0067c660:
0067C660  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067C663  3B C7                     CMP EAX,EDI
0067C665  74 09                     JZ 0x0067c670
0067C667  50                        PUSH EAX
0067C668  E8 A3 1A 03 00            CALL 0x006ae110
0067C66D  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_0067c670:
0067C670  68 73 05 00 00            PUSH 0x573
0067C675  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067C67A  57                        PUSH EDI
0067C67B  56                        PUSH ESI
0067C67C  E8 BF 97 02 00            CALL 0x006a5e40
LAB_0067c681:
0067C681  5F                        POP EDI
0067C682  5E                        POP ESI
0067C683  5B                        POP EBX
0067C684  8B E5                     MOV ESP,EBP
0067C686  5D                        POP EBP
0067C687  C3                        RET
