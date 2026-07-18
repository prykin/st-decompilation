FUN_004af080:
004AF080  55                        PUSH EBP
004AF081  8B EC                     MOV EBP,ESP
004AF083  83 EC 50                  SUB ESP,0x50
004AF086  66 A1 42 B2 7F 00         MOV AX,[0x007fb242]
004AF08C  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004AF092  53                        PUSH EBX
004AF093  56                        PUSH ESI
004AF094  33 F6                     XOR ESI,ESI
004AF096  66 3B C1                  CMP AX,CX
004AF099  57                        PUSH EDI
004AF09A  89 75 B4                  MOV dword ptr [EBP + -0x4c],ESI
004AF09D  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
004AF0A0  89 75 B8                  MOV dword ptr [EBP + -0x48],ESI
004AF0A3  C7 45 C4 FF FF FF FF      MOV dword ptr [EBP + -0x3c],0xffffffff
004AF0AA  7F 02                     JG 0x004af0ae
004AF0AC  8B C1                     MOV EAX,ECX
LAB_004af0ae:
004AF0AE  0F BF C8                  MOVSX ECX,AX
004AF0B1  B8 56 55 55 55            MOV EAX,0x55555556
004AF0B6  F7 E9                     IMUL ECX
004AF0B8  8B C2                     MOV EAX,EDX
004AF0BA  B9 02 00 00 00            MOV ECX,0x2
004AF0BF  C1 E8 1F                  SHR EAX,0x1f
004AF0C2  03 D0                     ADD EDX,EAX
004AF0C4  B8 01 00 00 00            MOV EAX,0x1
004AF0C9  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
004AF0CC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AF0CF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004AF0D2  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004AF0D5  39 04 95 68 1D 79 00      CMP dword ptr [EDX*0x4 + 0x791d68],EAX
004AF0DC  75 06                     JNZ 0x004af0e4
004AF0DE  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
004AF0E1  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_004af0e4:
004AF0E4  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004AF0EB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004AF0EE  50                        PUSH EAX
004AF0EF  E8 7C BB 1F 00            CALL 0x006aac70
004AF0F4  33 D2                     XOR EDX,EDX
004AF0F6  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004AF0F9  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_004af0fc:
004AF0FC  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004AF103  0F AF C2                  IMUL EAX,EDX
004AF106  33 C9                     XOR ECX,ECX
004AF108  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004AF10B  66 39 0D 42 B2 7F 00      CMP word ptr [0x007fb242],CX
004AF112  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004AF115  0F 8E 32 02 00 00         JLE 0x004af34d
LAB_004af11b:
004AF11B  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004AF122  8B F0                     MOV ESI,EAX
004AF124  33 FF                     XOR EDI,EDI
004AF126  0F AF F1                  IMUL ESI,ECX
004AF129  85 C0                     TEST EAX,EAX
004AF12B  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
004AF12E  0F 8E 06 02 00 00         JLE 0x004af33a
004AF134  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
LAB_004af13a:
004AF13A  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004AF141  0F AF 45 E8               IMUL EAX,dword ptr [EBP + -0x18]
004AF145  0F AF DA                  IMUL EBX,EDX
004AF148  8B D7                     MOV EDX,EDI
004AF14A  03 D3                     ADD EDX,EBX
004AF14C  03 C2                     ADD EAX,EDX
004AF14E  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004AF154  8B 04 C2                  MOV EAX,dword ptr [EDX + EAX*0x8]
004AF157  85 C0                     TEST EAX,EAX
004AF159  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004AF15C  0F 85 9B 00 00 00         JNZ 0x004af1fd
004AF162  66 85 FF                  TEST DI,DI
004AF165  7C 6E                     JL 0x004af1d5
004AF167  66 3B F9                  CMP DI,CX
004AF16A  7D 69                     JGE 0x004af1d5
004AF16C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004AF16F  66 85 C0                  TEST AX,AX
004AF172  7C 61                     JL 0x004af1d5
004AF174  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
004AF17B  7D 58                     JGE 0x004af1d5
004AF17D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004AF180  66 85 D2                  TEST DX,DX
004AF183  7C 50                     JL 0x004af1d5
004AF185  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004AF18C  7D 47                     JGE 0x004af1d5
004AF18E  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
004AF195  0F BF CA                  MOVSX ECX,DX
004AF198  0F AF CB                  IMUL ECX,EBX
004AF19B  0F BF 1D 78 B2 7F 00      MOVSX EBX,word ptr [0x007fb278]
004AF1A2  0F BF C0                  MOVSX EAX,AX
004AF1A5  0F AF C3                  IMUL EAX,EBX
004AF1A8  03 C8                     ADD ECX,EAX
004AF1AA  0F BF C7                  MOVSX EAX,DI
004AF1AD  03 C8                     ADD ECX,EAX
004AF1AF  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
004AF1B4  0F BF 04 48               MOVSX EAX,word ptr [EAX + ECX*0x2]
004AF1B8  85 C0                     TEST EAX,EAX
004AF1BA  75 14                     JNZ 0x004af1d0
004AF1BC  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004AF1BF  8D 0C 37                  LEA ECX,[EDI + ESI*0x1]
004AF1C2  03 C8                     ADD ECX,EAX
004AF1C4  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004AF1C7  C6 04 01 00               MOV byte ptr [ECX + EAX*0x1],0x0
004AF1CB  E9 55 01 00 00            JMP 0x004af325
LAB_004af1d0:
004AF1D0  83 F8 FF                  CMP EAX,-0x1
004AF1D3  75 14                     JNZ 0x004af1e9
LAB_004af1d5:
004AF1D5  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004AF1D8  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004AF1DB  8D 0C 37                  LEA ECX,[EDI + ESI*0x1]
004AF1DE  03 C8                     ADD ECX,EAX
004AF1E0  C6 04 11 03               MOV byte ptr [ECX + EDX*0x1],0x3
004AF1E4  E9 39 01 00 00            JMP 0x004af322
LAB_004af1e9:
004AF1E9  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004AF1EC  8D 04 37                  LEA EAX,[EDI + ESI*0x1]
004AF1EF  03 C1                     ADD EAX,ECX
004AF1F1  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004AF1F4  C6 04 08 01               MOV byte ptr [EAX + ECX*0x1],0x1
004AF1F8  E9 28 01 00 00            JMP 0x004af325
LAB_004af1fd:
004AF1FD  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
004AF200  83 F9 08                  CMP ECX,0x8
004AF203  0F 83 0A 01 00 00         JNC 0x004af313
004AF209  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004AF20F  85 D2                     TEST EDX,EDX
004AF211  74 11                     JZ 0x004af224
004AF213  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
004AF216  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
004AF21E  0F 83 EF 00 00 00         JNC 0x004af313
LAB_004af224:
004AF224  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
004AF22A  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
004AF22D  88 45 C8                  MOV byte ptr [EBP + -0x38],AL
004AF230  8A 91 6F 14 00 00         MOV DL,byte ptr [ECX + 0x146f]
004AF236  84 D2                     TEST DL,DL
004AF238  74 36                     JZ 0x004af270
004AF23A  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004AF23D  25 FF 00 00 00            AND EAX,0xff
004AF242  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
004AF245  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AF248  25 FF 00 00 00            AND EAX,0xff
004AF24D  8D 1C D1                  LEA EBX,[ECX + EDX*0x8]
004AF250  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AF253  8D 0C C1                  LEA ECX,[ECX + EAX*0x8]
004AF256  8A 84 08 CA 11 00 00      MOV AL,byte ptr [EAX + ECX*0x1 + 0x11ca]
004AF25D  33 C9                     XOR ECX,ECX
004AF25F  3A 84 1A CA 11 00 00      CMP AL,byte ptr [EDX + EBX*0x1 + 0x11ca]
004AF266  0F 95 C1                  SETNZ CL
004AF269  8B C1                     MOV EAX,ECX
004AF26B  E9 8E 00 00 00            JMP 0x004af2fe
LAB_004af270:
004AF270  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004AF273  3A C2                     CMP AL,DL
004AF275  74 79                     JZ 0x004af2f0
004AF277  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004AF27A  8B F2                     MOV ESI,EDX
004AF27C  25 FF 00 00 00            AND EAX,0xff
004AF281  81 E6 FF 00 00 00         AND ESI,0xff
004AF287  8D 14 C6                  LEA EDX,[ESI + EAX*0x8]
004AF28A  8A 94 0A 2F 14 00 00      MOV DL,byte ptr [EDX + ECX*0x1 + 0x142f]
004AF291  84 D2                     TEST DL,DL
004AF293  75 13                     JNZ 0x004af2a8
004AF295  8D 1C F0                  LEA EBX,[EAX + ESI*0x8]
004AF298  38 94 0B 2F 14 00 00      CMP byte ptr [EBX + ECX*0x1 + 0x142f],DL
004AF29F  75 07                     JNZ 0x004af2a8
004AF2A1  B8 FE FF FF FF            MOV EAX,0xfffffffe
004AF2A6  EB 4A                     JMP 0x004af2f2
LAB_004af2a8:
004AF2A8  80 FA 01                  CMP DL,0x1
004AF2AB  75 12                     JNZ 0x004af2bf
004AF2AD  8D 1C F0                  LEA EBX,[EAX + ESI*0x8]
004AF2B0  80 BC 0B 2F 14 00 00 00   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x0
004AF2B8  75 05                     JNZ 0x004af2bf
004AF2BA  83 C8 FF                  OR EAX,0xffffffff
004AF2BD  EB 33                     JMP 0x004af2f2
LAB_004af2bf:
004AF2BF  84 D2                     TEST DL,DL
004AF2C1  75 14                     JNZ 0x004af2d7
004AF2C3  8D 1C F0                  LEA EBX,[EAX + ESI*0x8]
004AF2C6  80 BC 0B 2F 14 00 00 01   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x1
004AF2CE  75 07                     JNZ 0x004af2d7
004AF2D0  B8 01 00 00 00            MOV EAX,0x1
004AF2D5  EB 1B                     JMP 0x004af2f2
LAB_004af2d7:
004AF2D7  80 FA 01                  CMP DL,0x1
004AF2DA  75 14                     JNZ 0x004af2f0
004AF2DC  8D 04 F0                  LEA EAX,[EAX + ESI*0x8]
004AF2DF  80 BC 08 2F 14 00 00 01   CMP byte ptr [EAX + ECX*0x1 + 0x142f],0x1
004AF2E7  75 07                     JNZ 0x004af2f0
004AF2E9  B8 02 00 00 00            MOV EAX,0x2
004AF2EE  EB 02                     JMP 0x004af2f2
LAB_004af2f0:
004AF2F0  33 C0                     XOR EAX,EAX
LAB_004af2f2:
004AF2F2  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
004AF2F5  33 C9                     XOR ECX,ECX
004AF2F7  85 C0                     TEST EAX,EAX
004AF2F9  0F 9C C1                  SETL CL
004AF2FC  8B C1                     MOV EAX,ECX
LAB_004af2fe:
004AF2FE  85 C0                     TEST EAX,EAX
004AF300  74 11                     JZ 0x004af313
004AF302  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004AF305  8D 14 37                  LEA EDX,[EDI + ESI*0x1]
004AF308  03 D0                     ADD EDX,EAX
004AF30A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004AF30D  C6 04 02 04               MOV byte ptr [EDX + EAX*0x1],0x4
004AF311  EB 0F                     JMP 0x004af322
LAB_004af313:
004AF313  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004AF316  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004AF319  8D 0C 37                  LEA ECX,[EDI + ESI*0x1]
004AF31C  03 C8                     ADD ECX,EAX
004AF31E  C6 04 11 05               MOV byte ptr [ECX + EDX*0x1],0x5
LAB_004af322:
004AF322  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_004af325:
004AF325  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004AF32B  47                        INC EDI
004AF32C  0F BF C1                  MOVSX EAX,CX
004AF32F  3B F8                     CMP EDI,EAX
004AF331  0F 8C 03 FE FF FF         JL 0x004af13a
004AF337  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_004af33a:
004AF33A  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004AF341  41                        INC ECX
004AF342  3B C8                     CMP ECX,EAX
004AF344  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004AF347  0F 8C CE FD FF FF         JL 0x004af11b
LAB_004af34d:
004AF34D  42                        INC EDX
004AF34E  83 FA 04                  CMP EDX,0x4
004AF351  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004AF354  0F 8C A2 FD FF FF         JL 0x004af0fc
004AF35A  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004AF35F  33 F6                     XOR ESI,ESI
004AF361  3B C6                     CMP EAX,ESI
004AF363  74 6A                     JZ 0x004af3cf
004AF365  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
004AF368  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004AF36E  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AF371  E8 1A 1E 20 00            CALL 0x006b1190
004AF376  85 C0                     TEST EAX,EAX
004AF378  7C 55                     JL 0x004af3cf
LAB_004af37a:
004AF37A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AF37D  3B CE                     CMP ECX,ESI
004AF37F  74 3C                     JZ 0x004af3bd
004AF381  8D 55 FA                  LEA EDX,[EBP + -0x6]
004AF384  8D 45 FC                  LEA EAX,[EBP + -0x4]
004AF387  52                        PUSH EDX
004AF388  8D 55 FE                  LEA EDX,[EBP + -0x2]
004AF38B  50                        PUSH EAX
004AF38C  52                        PUSH EDX
004AF38D  E8 33 25 F5 FF            CALL 0x004018c5
004AF392  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
004AF396  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004AF39D  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004AF3A1  0F AF C1                  IMUL EAX,ECX
004AF3A4  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004AF3AB  0F AF D1                  IMUL EDX,ECX
004AF3AE  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
004AF3B1  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
004AF3B5  03 D3                     ADD EDX,EBX
004AF3B7  03 D0                     ADD EDX,EAX
004AF3B9  C6 04 11 02               MOV byte ptr [ECX + EDX*0x1],0x2
LAB_004af3bd:
004AF3BD  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004AF3C3  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AF3C6  E8 C5 1D 20 00            CALL 0x006b1190
004AF3CB  85 C0                     TEST EAX,EAX
004AF3CD  7D AB                     JGE 0x004af37a
LAB_004af3cf:
004AF3CF  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_004af3d2:
004AF3D2  33 DB                     XOR EBX,EBX
004AF3D4  66 39 1D 42 B2 7F 00      CMP word ptr [0x007fb242],BX
004AF3DB  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
004AF3DE  0F 8E 7C 08 00 00         JLE 0x004afc60
LAB_004af3e4:
004AF3E4  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004AF3EB  85 C0                     TEST EAX,EAX
004AF3ED  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
004AF3F4  0F 8E 53 08 00 00         JLE 0x004afc4d
004AF3FA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004AF3FD  EB 06                     JMP 0x004af405
LAB_004af3ff:
004AF3FF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004AF402  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_004af405:
004AF405  8D 48 01                  LEA ECX,[EAX + 0x1]
004AF408  8B F0                     MOV ESI,EAX
004AF40A  3B C1                     CMP EAX,ECX
004AF40C  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
004AF40F  0F 8D A9 00 00 00         JGE 0x004af4be
LAB_004af415:
004AF415  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004AF41C  3B F0                     CMP ESI,EAX
004AF41E  0F 8D 10 08 00 00         JGE 0x004afc34
004AF424  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004AF42B  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
004AF42E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004AF431  03 C3                     ADD EAX,EBX
004AF433  0F AF D6                  IMUL EDX,ESI
004AF436  8B FB                     MOV EDI,EBX
004AF438  3B D8                     CMP EBX,EAX
004AF43A  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
004AF43D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004AF440  7D 68                     JGE 0x004af4aa
004AF442  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004AF449  0F AF CB                  IMUL ECX,EBX
LAB_004af44c:
004AF44C  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004AF453  3B F8                     CMP EDI,EAX
004AF455  0F 8D D9 07 00 00         JGE 0x004afc34
004AF45B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004AF45E  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
004AF461  03 F0                     ADD ESI,EAX
004AF463  3B C6                     CMP EAX,ESI
004AF465  7D 29                     JGE 0x004af490
004AF467  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_004af46a:
004AF46A  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
004AF471  3B C7                     CMP EAX,EDI
004AF473  0F 8D BB 07 00 00         JGE 0x004afc34
004AF479  8D 3C 01                  LEA EDI,[ECX + EAX*0x1]
004AF47C  03 FA                     ADD EDI,EDX
004AF47E  80 3C 1F 00               CMP byte ptr [EDI + EBX*0x1],0x0
004AF482  0F 85 AC 07 00 00         JNZ 0x004afc34
004AF488  40                        INC EAX
004AF489  3B C6                     CMP EAX,ESI
004AF48B  7C DD                     JL 0x004af46a
004AF48D  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
LAB_004af490:
004AF490  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004AF497  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
004AF49A  03 C8                     ADD ECX,EAX
004AF49C  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004AF49F  47                        INC EDI
004AF4A0  3B F8                     CMP EDI,EAX
004AF4A2  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
004AF4A5  7C A5                     JL 0x004af44c
004AF4A7  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
LAB_004af4aa:
004AF4AA  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004AF4AD  46                        INC ESI
004AF4AE  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
004AF4B1  8D 41 01                  LEA EAX,[ECX + 0x1]
004AF4B4  3B F0                     CMP ESI,EAX
004AF4B6  0F 8C 59 FF FF FF         JL 0x004af415
004AF4BC  8B C1                     MOV EAX,ECX
LAB_004af4be:
004AF4BE  85 C0                     TEST EAX,EAX
004AF4C0  0F 8E 81 00 00 00         JLE 0x004af547
004AF4C6  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004AF4C9  8B FB                     MOV EDI,EBX
004AF4CB  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004AF4D2  8D 42 FF                  LEA EAX,[EDX + -0x1]
004AF4D5  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004AF4D8  0F AF C1                  IMUL EAX,ECX
004AF4DB  8D 0C 13                  LEA ECX,[EBX + EDX*0x1]
004AF4DE  3B D9                     CMP EBX,ECX
004AF4E0  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004AF4E3  7D 62                     JGE 0x004af547
004AF4E5  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004AF4EC  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
004AF4EF  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004AF4F6  8B F2                     MOV ESI,EDX
004AF4F8  0F AF F3                  IMUL ESI,EBX
004AF4FB  03 F0                     ADD ESI,EAX
004AF4FD  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004AF500  03 C6                     ADD EAX,ESI
004AF502  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
004AF505  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004AF508  03 C6                     ADD EAX,ESI
004AF50A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_004af50d:
004AF50D  3B 7D CC                  CMP EDI,dword ptr [EBP + -0x34]
004AF510  7D 28                     JGE 0x004af53a
004AF512  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004AF515  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
004AF518  03 F0                     ADD ESI,EAX
004AF51A  3B C6                     CMP EAX,ESI
004AF51C  7D 1C                     JGE 0x004af53a
004AF51E  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
LAB_004af521:
004AF521  3B C2                     CMP EAX,EDX
004AF523  7D 0C                     JGE 0x004af531
004AF525  80 39 03                  CMP byte ptr [ECX],0x3
004AF528  0F 85 06 07 00 00         JNZ 0x004afc34
004AF52E  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_004af531:
004AF531  40                        INC EAX
004AF532  41                        INC ECX
004AF533  3B C6                     CMP EAX,ESI
004AF535  7C EA                     JL 0x004af521
004AF537  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_004af53a:
004AF53A  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
004AF53D  47                        INC EDI
004AF53E  03 F2                     ADD ESI,EDX
004AF540  3B F9                     CMP EDI,ECX
004AF542  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
004AF545  7C C6                     JL 0x004af50d
LAB_004af547:
004AF547  83 7D F0 04               CMP dword ptr [EBP + -0x10],0x4
004AF54B  0F 8D 9A 00 00 00         JGE 0x004af5eb
004AF551  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004AF558  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004AF55B  8B D3                     MOV EDX,EBX
004AF55D  41                        INC ECX
004AF55E  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
004AF561  0F AF C1                  IMUL EAX,ECX
004AF564  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004AF567  03 CB                     ADD ECX,EBX
004AF569  3B D9                     CMP EBX,ECX
004AF56B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004AF56E  7D 7B                     JGE 0x004af5eb
004AF570  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
004AF577  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004AF57E  8B FE                     MOV EDI,ESI
004AF580  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004AF583  0F AF FB                  IMUL EDI,EBX
004AF586  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004AF589  03 F8                     ADD EDI,EAX
004AF58B  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
004AF58E  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
004AF591  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004AF594  03 C7                     ADD EAX,EDI
004AF596  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_004af599:
004AF599  3B 55 CC                  CMP EDX,dword ptr [EBP + -0x34]
004AF59C  7D 3A                     JGE 0x004af5d8
004AF59E  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004AF5A1  8D 3C 01                  LEA EDI,[ECX + EAX*0x1]
004AF5A4  3B CF                     CMP ECX,EDI
004AF5A6  7D 30                     JGE 0x004af5d8
004AF5A8  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
LAB_004af5ab:
004AF5AB  3B CE                     CMP ECX,ESI
004AF5AD  7D 1D                     JGE 0x004af5cc
004AF5AF  8A 02                     MOV AL,byte ptr [EDX]
004AF5B1  3C 01                     CMP AL,0x1
004AF5B3  0F 84 7B 06 00 00         JZ 0x004afc34
004AF5B9  3C 03                     CMP AL,0x3
004AF5BB  0F 84 73 06 00 00         JZ 0x004afc34
004AF5C1  3C 02                     CMP AL,0x2
004AF5C3  0F 84 6B 06 00 00         JZ 0x004afc34
004AF5C9  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_004af5cc:
004AF5CC  41                        INC ECX
004AF5CD  42                        INC EDX
004AF5CE  3B CF                     CMP ECX,EDI
004AF5D0  7C D9                     JL 0x004af5ab
004AF5D2  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
004AF5D5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_004af5d8:
004AF5D8  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
004AF5DB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004AF5DE  42                        INC EDX
004AF5DF  03 FE                     ADD EDI,ESI
004AF5E1  3B D0                     CMP EDX,EAX
004AF5E3  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
004AF5E6  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
004AF5E9  7C AE                     JL 0x004af599
LAB_004af5eb:
004AF5EB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AF5EE  83 F8 64                  CMP EAX,0x64
004AF5F1  0F 85 85 00 00 00         JNZ 0x004af67c
004AF5F7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AF5FA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004AF5FD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004AF600  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004AF603  C1 E1 04                  SHL ECX,0x4
004AF606  03 C8                     ADD ECX,EAX
004AF608  8D 3C 4D F6 57 7F 00      LEA EDI,[ECX*0x2 + 0x7f57f6]
004AF60F  8B 0C 4D F6 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57f6]
004AF616  85 C9                     TEST ECX,ECX
004AF618  0F 84 77 04 00 00         JZ 0x004afa95
004AF61E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AF621  33 F6                     XOR ESI,ESI
004AF623  85 C0                     TEST EAX,EAX
004AF625  0F 8E 6A 04 00 00         JLE 0x004afa95
LAB_004af62b:
004AF62B  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AF62E  52                        PUSH EDX
004AF62F  8B D6                     MOV EDX,ESI
004AF631  E8 3A D6 1F 00            CALL 0x006acc70
004AF636  8D 45 FA                  LEA EAX,[EBP + -0x6]
004AF639  8D 4D FC                  LEA ECX,[EBP + -0x4]
004AF63C  50                        PUSH EAX
004AF63D  8D 55 FE                  LEA EDX,[EBP + -0x2]
004AF640  51                        PUSH ECX
004AF641  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AF644  52                        PUSH EDX
004AF645  E8 7B 22 F5 FF            CALL 0x004018c5
004AF64A  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004AF64E  2B 45 EC                  SUB EAX,dword ptr [EBP + -0x14]
004AF651  99                        CDQ
004AF652  33 C2                     XOR EAX,EDX
004AF654  2B C2                     SUB EAX,EDX
004AF656  83 F8 0F                  CMP EAX,0xf
004AF659  7F 14                     JG 0x004af66f
004AF65B  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004AF65F  2B C3                     SUB EAX,EBX
004AF661  99                        CDQ
004AF662  33 C2                     XOR EAX,EDX
004AF664  2B C2                     SUB EAX,EDX
004AF666  83 F8 0F                  CMP EAX,0xf
004AF669  0F 8E C5 05 00 00         JLE 0x004afc34
LAB_004af66f:
004AF66F  8B 0F                     MOV ECX,dword ptr [EDI]
004AF671  46                        INC ESI
004AF672  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AF675  7C B4                     JL 0x004af62b
004AF677  E9 19 04 00 00            JMP 0x004afa95
LAB_004af67c:
004AF67C  83 F8 4D                  CMP EAX,0x4d
004AF67F  0F 85 9C 00 00 00         JNZ 0x004af721
004AF685  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AF688  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004AF68B  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004AF68E  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004AF691  C1 E1 04                  SHL ECX,0x4
004AF694  03 C8                     ADD ECX,EAX
004AF696  8D 04 4D 02 58 7F 00      LEA EAX,[ECX*0x2 + 0x7f5802]
004AF69D  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004AF6A0  8B 08                     MOV ECX,dword ptr [EAX]
004AF6A2  85 C9                     TEST ECX,ECX
004AF6A4  0F 84 EB 03 00 00         JZ 0x004afa95
004AF6AA  8B 15 18 51 79 00         MOV EDX,dword ptr [0x00795118]
004AF6B0  B8 79 19 8C 02            MOV EAX,0x28c1979
004AF6B5  F7 EA                     IMUL EDX
004AF6B7  D1 FA                     SAR EDX,0x1
004AF6B9  8B C2                     MOV EAX,EDX
004AF6BB  33 F6                     XOR ESI,ESI
004AF6BD  C1 E8 1F                  SHR EAX,0x1f
004AF6C0  03 D0                     ADD EDX,EAX
004AF6C2  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AF6C5  85 C0                     TEST EAX,EAX
004AF6C7  8B FA                     MOV EDI,EDX
004AF6C9  0F 8E C6 03 00 00         JLE 0x004afa95
LAB_004af6cf:
004AF6CF  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AF6D2  52                        PUSH EDX
004AF6D3  8B D6                     MOV EDX,ESI
004AF6D5  E8 96 D5 1F 00            CALL 0x006acc70
004AF6DA  8D 45 FA                  LEA EAX,[EBP + -0x6]
004AF6DD  8D 4D FC                  LEA ECX,[EBP + -0x4]
004AF6E0  50                        PUSH EAX
004AF6E1  8D 55 FE                  LEA EDX,[EBP + -0x2]
004AF6E4  51                        PUSH ECX
004AF6E5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AF6E8  52                        PUSH EDX
004AF6E9  E8 D7 21 F5 FF            CALL 0x004018c5
004AF6EE  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004AF6F2  2B 45 EC                  SUB EAX,dword ptr [EBP + -0x14]
004AF6F5  99                        CDQ
004AF6F6  33 C2                     XOR EAX,EDX
004AF6F8  2B C2                     SUB EAX,EDX
004AF6FA  3B C7                     CMP EAX,EDI
004AF6FC  7F 13                     JG 0x004af711
004AF6FE  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004AF702  2B C3                     SUB EAX,EBX
004AF704  99                        CDQ
004AF705  33 C2                     XOR EAX,EDX
004AF707  2B C2                     SUB EAX,EDX
004AF709  3B C7                     CMP EAX,EDI
004AF70B  0F 8E 23 05 00 00         JLE 0x004afc34
LAB_004af711:
004AF711  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004AF714  46                        INC ESI
004AF715  8B 08                     MOV ECX,dword ptr [EAX]
004AF717  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AF71A  7C B3                     JL 0x004af6cf
004AF71C  E9 74 03 00 00            JMP 0x004afa95
LAB_004af721:
004AF721  83 F8 43                  CMP EAX,0x43
004AF724  0F 85 9C 00 00 00         JNZ 0x004af7c6
004AF72A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AF72D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004AF730  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004AF733  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004AF736  C1 E1 04                  SHL ECX,0x4
004AF739  03 C8                     ADD ECX,EAX
004AF73B  8D 04 4D 0E 58 7F 00      LEA EAX,[ECX*0x2 + 0x7f580e]
004AF742  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004AF745  8B 08                     MOV ECX,dword ptr [EAX]
004AF747  85 C9                     TEST ECX,ECX
004AF749  0F 84 46 03 00 00         JZ 0x004afa95
004AF74F  8B 15 F0 50 79 00         MOV EDX,dword ptr [0x007950f0]
004AF755  B8 79 19 8C 02            MOV EAX,0x28c1979
004AF75A  F7 EA                     IMUL EDX
004AF75C  D1 FA                     SAR EDX,0x1
004AF75E  8B C2                     MOV EAX,EDX
004AF760  33 F6                     XOR ESI,ESI
004AF762  C1 E8 1F                  SHR EAX,0x1f
004AF765  03 D0                     ADD EDX,EAX
004AF767  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AF76A  85 C0                     TEST EAX,EAX
004AF76C  8B FA                     MOV EDI,EDX
004AF76E  0F 8E 21 03 00 00         JLE 0x004afa95
LAB_004af774:
004AF774  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AF777  52                        PUSH EDX
004AF778  8B D6                     MOV EDX,ESI
004AF77A  E8 F1 D4 1F 00            CALL 0x006acc70
004AF77F  8D 45 FA                  LEA EAX,[EBP + -0x6]
004AF782  8D 4D FC                  LEA ECX,[EBP + -0x4]
004AF785  50                        PUSH EAX
004AF786  8D 55 FE                  LEA EDX,[EBP + -0x2]
004AF789  51                        PUSH ECX
004AF78A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AF78D  52                        PUSH EDX
004AF78E  E8 32 21 F5 FF            CALL 0x004018c5
004AF793  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004AF797  2B 45 EC                  SUB EAX,dword ptr [EBP + -0x14]
004AF79A  99                        CDQ
004AF79B  33 C2                     XOR EAX,EDX
004AF79D  2B C2                     SUB EAX,EDX
004AF79F  3B C7                     CMP EAX,EDI
004AF7A1  7F 13                     JG 0x004af7b6
004AF7A3  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004AF7A7  2B C3                     SUB EAX,EBX
004AF7A9  99                        CDQ
004AF7AA  33 C2                     XOR EAX,EDX
004AF7AC  2B C2                     SUB EAX,EDX
004AF7AE  3B C7                     CMP EAX,EDI
004AF7B0  0F 8E 7E 04 00 00         JLE 0x004afc34
LAB_004af7b6:
004AF7B6  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004AF7B9  46                        INC ESI
004AF7BA  8B 08                     MOV ECX,dword ptr [EAX]
004AF7BC  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AF7BF  7C B3                     JL 0x004af774
004AF7C1  E9 CF 02 00 00            JMP 0x004afa95
LAB_004af7c6:
004AF7C6  83 F8 73                  CMP EAX,0x73
004AF7C9  0F 85 9C 00 00 00         JNZ 0x004af86b
004AF7CF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AF7D2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004AF7D5  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004AF7D8  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004AF7DB  C1 E1 04                  SHL ECX,0x4
004AF7DE  03 C8                     ADD ECX,EAX
004AF7E0  8D 04 4D 12 58 7F 00      LEA EAX,[ECX*0x2 + 0x7f5812]
004AF7E7  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004AF7EA  8B 08                     MOV ECX,dword ptr [EAX]
004AF7EC  85 C9                     TEST ECX,ECX
004AF7EE  0F 84 A1 02 00 00         JZ 0x004afa95
004AF7F4  8B 15 B0 51 79 00         MOV EDX,dword ptr [0x007951b0]
004AF7FA  B8 79 19 8C 02            MOV EAX,0x28c1979
004AF7FF  F7 EA                     IMUL EDX
004AF801  D1 FA                     SAR EDX,0x1
004AF803  8B C2                     MOV EAX,EDX
004AF805  33 F6                     XOR ESI,ESI
004AF807  C1 E8 1F                  SHR EAX,0x1f
004AF80A  03 D0                     ADD EDX,EAX
004AF80C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AF80F  85 C0                     TEST EAX,EAX
004AF811  8B FA                     MOV EDI,EDX
004AF813  0F 8E 7C 02 00 00         JLE 0x004afa95
LAB_004af819:
004AF819  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AF81C  52                        PUSH EDX
004AF81D  8B D6                     MOV EDX,ESI
004AF81F  E8 4C D4 1F 00            CALL 0x006acc70
004AF824  8D 45 FA                  LEA EAX,[EBP + -0x6]
004AF827  8D 4D FC                  LEA ECX,[EBP + -0x4]
004AF82A  50                        PUSH EAX
004AF82B  8D 55 FE                  LEA EDX,[EBP + -0x2]
004AF82E  51                        PUSH ECX
004AF82F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AF832  52                        PUSH EDX
004AF833  E8 8D 20 F5 FF            CALL 0x004018c5
004AF838  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004AF83C  2B 45 EC                  SUB EAX,dword ptr [EBP + -0x14]
004AF83F  99                        CDQ
004AF840  33 C2                     XOR EAX,EDX
004AF842  2B C2                     SUB EAX,EDX
004AF844  3B C7                     CMP EAX,EDI
004AF846  7F 13                     JG 0x004af85b
004AF848  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004AF84C  2B C3                     SUB EAX,EBX
004AF84E  99                        CDQ
004AF84F  33 C2                     XOR EAX,EDX
004AF851  2B C2                     SUB EAX,EDX
004AF853  3B C7                     CMP EAX,EDI
004AF855  0F 8E D9 03 00 00         JLE 0x004afc34
LAB_004af85b:
004AF85B  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004AF85E  46                        INC ESI
004AF85F  8B 08                     MOV ECX,dword ptr [EAX]
004AF861  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AF864  7C B3                     JL 0x004af819
004AF866  E9 2A 02 00 00            JMP 0x004afa95
LAB_004af86b:
004AF86B  83 F8 65                  CMP EAX,0x65
004AF86E  0F 85 9C 00 00 00         JNZ 0x004af910
004AF874  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AF877  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004AF87A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004AF87D  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004AF880  C1 E1 04                  SHL ECX,0x4
004AF883  03 C8                     ADD ECX,EAX
004AF885  8D 04 4D 06 58 7F 00      LEA EAX,[ECX*0x2 + 0x7f5806]
004AF88C  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004AF88F  8B 08                     MOV ECX,dword ptr [EAX]
004AF891  85 C9                     TEST ECX,ECX
004AF893  0F 84 FC 01 00 00         JZ 0x004afa95
004AF899  8B 15 78 51 79 00         MOV EDX,dword ptr [0x00795178]
004AF89F  B8 79 19 8C 02            MOV EAX,0x28c1979
004AF8A4  F7 EA                     IMUL EDX
004AF8A6  D1 FA                     SAR EDX,0x1
004AF8A8  8B C2                     MOV EAX,EDX
004AF8AA  33 F6                     XOR ESI,ESI
004AF8AC  C1 E8 1F                  SHR EAX,0x1f
004AF8AF  03 D0                     ADD EDX,EAX
004AF8B1  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AF8B4  85 C0                     TEST EAX,EAX
004AF8B6  8B FA                     MOV EDI,EDX
004AF8B8  0F 8E D7 01 00 00         JLE 0x004afa95
LAB_004af8be:
004AF8BE  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AF8C1  52                        PUSH EDX
004AF8C2  8B D6                     MOV EDX,ESI
004AF8C4  E8 A7 D3 1F 00            CALL 0x006acc70
004AF8C9  8D 45 FA                  LEA EAX,[EBP + -0x6]
004AF8CC  8D 4D FC                  LEA ECX,[EBP + -0x4]
004AF8CF  50                        PUSH EAX
004AF8D0  8D 55 FE                  LEA EDX,[EBP + -0x2]
004AF8D3  51                        PUSH ECX
004AF8D4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AF8D7  52                        PUSH EDX
004AF8D8  E8 E8 1F F5 FF            CALL 0x004018c5
004AF8DD  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004AF8E1  2B 45 EC                  SUB EAX,dword ptr [EBP + -0x14]
004AF8E4  99                        CDQ
004AF8E5  33 C2                     XOR EAX,EDX
004AF8E7  2B C2                     SUB EAX,EDX
004AF8E9  3B C7                     CMP EAX,EDI
004AF8EB  7F 13                     JG 0x004af900
004AF8ED  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004AF8F1  2B C3                     SUB EAX,EBX
004AF8F3  99                        CDQ
004AF8F4  33 C2                     XOR EAX,EDX
004AF8F6  2B C2                     SUB EAX,EDX
004AF8F8  3B C7                     CMP EAX,EDI
004AF8FA  0F 8E 34 03 00 00         JLE 0x004afc34
LAB_004af900:
004AF900  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004AF903  46                        INC ESI
004AF904  8B 08                     MOV ECX,dword ptr [EAX]
004AF906  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AF909  7C B3                     JL 0x004af8be
004AF90B  E9 85 01 00 00            JMP 0x004afa95
LAB_004af910:
004AF910  83 F8 54                  CMP EAX,0x54
004AF913  0F 8C 11 02 00 00         JL 0x004afb2a
004AF919  83 F8 5A                  CMP EAX,0x5a
004AF91C  0F 8F 08 02 00 00         JG 0x004afb2a
004AF922  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
004AF925  85 C9                     TEST ECX,ECX
004AF927  0F 84 FD 01 00 00         JZ 0x004afb2a
004AF92D  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004AF934  0F AF 45 F0               IMUL EAX,dword ptr [EBP + -0x10]
004AF938  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004AF93B  8D 53 FF                  LEA EDX,[EBX + -0x1]
004AF93E  03 D9                     ADD EBX,ECX
004AF940  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004AF943  8B FA                     MOV EDI,EDX
004AF945  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
004AF94C  8D 43 01                  LEA EAX,[EBX + 0x1]
004AF94F  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
004AF952  3B F8                     CMP EDI,EAX
004AF954  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
004AF957  0F 8D D7 02 00 00         JGE 0x004afc34
LAB_004af95d:
004AF95D  85 FF                     TEST EDI,EDI
004AF95F  0F 8C F8 00 00 00         JL 0x004afa5d
004AF965  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004AF96C  3B F8                     CMP EDI,EAX
004AF96E  0F 8D E9 00 00 00         JGE 0x004afa5d
004AF974  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004AF977  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
004AF97A  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004AF981  8D 71 FF                  LEA ESI,[ECX + -0x1]
004AF984  03 CB                     ADD ECX,EBX
004AF986  0F AF C7                  IMUL EAX,EDI
004AF989  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004AF98C  41                        INC ECX
004AF98D  3B F1                     CMP ESI,ECX
004AF98F  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
004AF992  0F 8D C5 00 00 00         JGE 0x004afa5d
004AF998  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
004AF99B  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004AF99E  03 C1                     ADD EAX,ECX
004AF9A0  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004AF9A3  8D 1C C5 00 00 00 00      LEA EBX,[EAX*0x8 + 0x0]
004AF9AA  03 C1                     ADD EAX,ECX
004AF9AC  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_004af9af:
004AF9AF  85 F6                     TEST ESI,ESI
004AF9B1  0F 8C 8F 00 00 00         JL 0x004afa46
004AF9B7  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004AF9BE  3B F0                     CMP ESI,EAX
004AF9C0  0F 8D 80 00 00 00         JGE 0x004afa46
004AF9C6  3B FA                     CMP EDI,EDX
004AF9C8  75 0E                     JNZ 0x004af9d8
004AF9CA  3B 75 C0                  CMP ESI,dword ptr [EBP + -0x40]
004AF9CD  74 77                     JZ 0x004afa46
004AF9CF  3B FA                     CMP EDI,EDX
004AF9D1  75 05                     JNZ 0x004af9d8
004AF9D3  3B 75 CC                  CMP ESI,dword ptr [EBP + -0x34]
004AF9D6  74 6E                     JZ 0x004afa46
LAB_004af9d8:
004AF9D8  3B 7D E0                  CMP EDI,dword ptr [EBP + -0x20]
004AF9DB  75 0F                     JNZ 0x004af9ec
004AF9DD  3B 75 CC                  CMP ESI,dword ptr [EBP + -0x34]
004AF9E0  74 64                     JZ 0x004afa46
004AF9E2  3B 7D E0                  CMP EDI,dword ptr [EBP + -0x20]
004AF9E5  75 05                     JNZ 0x004af9ec
004AF9E7  3B 75 C0                  CMP ESI,dword ptr [EBP + -0x40]
004AF9EA  74 5A                     JZ 0x004afa46
LAB_004af9ec:
004AF9EC  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
004AF9EF  80 39 05                  CMP byte ptr [ECX],0x5
004AF9F2  75 52                     JNZ 0x004afa46
004AF9F4  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004AF9F9  8B 0C 03                  MOV ECX,dword ptr [EBX + EAX*0x1]
004AF9FC  85 C9                     TEST ECX,ECX
004AF9FE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004AFA01  74 43                     JZ 0x004afa46
004AFA03  8B 11                     MOV EDX,dword ptr [ECX]
004AFA05  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AFA08  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AFA0B  83 F8 53                  CMP EAX,0x53
004AFA0E  75 0B                     JNZ 0x004afa1b
004AFA10  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
004AFA13  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004AFA16  3B 42 18                  CMP EAX,dword ptr [EDX + 0x18]
004AFA19  74 56                     JZ 0x004afa71
LAB_004afa1b:
004AFA1B  8B 01                     MOV EAX,dword ptr [ECX]
004AFA1D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004AFA20  83 F8 54                  CMP EAX,0x54
004AFA23  7C 1E                     JL 0x004afa43
004AFA25  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AFA28  8B 11                     MOV EDX,dword ptr [ECX]
004AFA2A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AFA2D  83 F8 5A                  CMP EAX,0x5a
004AFA30  7F 11                     JG 0x004afa43
004AFA32  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AFA35  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
004AFA38  8B 81 D3 05 00 00         MOV EAX,dword ptr [ECX + 0x5d3]
004AFA3E  3B 42 18                  CMP EAX,dword ptr [EDX + 0x18]
004AFA41  74 2E                     JZ 0x004afa71
LAB_004afa43:
004AFA43  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
LAB_004afa46:
004AFA46  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004AFA49  46                        INC ESI
004AFA4A  83 C3 08                  ADD EBX,0x8
004AFA4D  40                        INC EAX
004AFA4E  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004AFA51  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004AFA54  40                        INC EAX
004AFA55  3B F0                     CMP ESI,EAX
004AFA57  0F 8C 52 FF FF FF         JL 0x004af9af
LAB_004afa5d:
004AFA5D  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004AFA60  47                        INC EDI
004AFA61  8D 41 01                  LEA EAX,[ECX + 0x1]
004AFA64  3B F8                     CMP EDI,EAX
004AFA66  0F 8C F1 FE FF FF         JL 0x004af95d
004AFA6C  E9 C3 01 00 00            JMP 0x004afc34
LAB_004afa71:
004AFA71  8B 11                     MOV EDX,dword ptr [ECX]
004AFA73  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004AFA76  83 F8 53                  CMP EAX,0x53
004AFA79  75 17                     JNZ 0x004afa92
004AFA7B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004AFA7E  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
004AFA81  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004AFA84  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
004AFA87  3B C8                     CMP ECX,EAX
004AFA89  75 07                     JNZ 0x004afa92
004AFA8B  C7 45 D0 01 00 00 00      MOV dword ptr [EBP + -0x30],0x1
LAB_004afa92:
004AFA92  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_004afa95:
004AFA95  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004AFA9C  0F AF 45 F0               IMUL EAX,dword ptr [EBP + -0x10]
004AFAA0  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004AFAA3  8D 73 FF                  LEA ESI,[EBX + -0x1]
004AFAA6  C7 45 C0 01 00 00 00      MOV dword ptr [EBP + -0x40],0x1
004AFAAD  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004AFAB0  8D 54 0B 01               LEA EDX,[EBX + ECX*0x1 + 0x1]
004AFAB4  3B F2                     CMP ESI,EDX
004AFAB6  0F 8D F1 00 00 00         JGE 0x004afbad
LAB_004afabc:
004AFABC  85 F6                     TEST ESI,ESI
004AFABE  7C 56                     JL 0x004afb16
004AFAC0  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004AFAC7  3B F0                     CMP ESI,EAX
004AFAC9  7D 4B                     JGE 0x004afb16
004AFACB  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004AFACE  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004AFAD1  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
004AFAD8  8B CE                     MOV ECX,ESI
004AFADA  8D 47 FF                  LEA EAX,[EDI + -0x1]
004AFADD  8D 7C 17 01               LEA EDI,[EDI + EDX*0x1 + 0x1]
004AFAE1  0F AF CB                  IMUL ECX,EBX
004AFAE4  3B C7                     CMP EAX,EDI
004AFAE6  7D 2E                     JGE 0x004afb16
004AFAE8  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
004AFAEB  03 C8                     ADD ECX,EAX
004AFAED  03 CA                     ADD ECX,EDX
004AFAEF  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004AFAF2  03 CA                     ADD ECX,EDX
LAB_004afaf4:
004AFAF4  85 C0                     TEST EAX,EAX
004AFAF6  7C 18                     JL 0x004afb10
004AFAF8  3B C3                     CMP EAX,EBX
004AFAFA  7D 14                     JGE 0x004afb10
004AFAFC  8A 11                     MOV DL,byte ptr [ECX]
004AFAFE  80 FA 05                  CMP DL,0x5
004AFB01  0F 84 9C 00 00 00         JZ 0x004afba3
004AFB07  80 FA 02                  CMP DL,0x2
004AFB0A  0F 84 93 00 00 00         JZ 0x004afba3
LAB_004afb10:
004AFB10  40                        INC EAX
004AFB11  41                        INC ECX
004AFB12  3B C7                     CMP EAX,EDI
004AFB14  7C DE                     JL 0x004afaf4
LAB_004afb16:
004AFB16  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
004AFB19  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004AFB1C  46                        INC ESI
004AFB1D  8D 4C 03 01               LEA ECX,[EBX + EAX*0x1 + 0x1]
004AFB21  3B F1                     CMP ESI,ECX
004AFB23  7C 97                     JL 0x004afabc
004AFB25  E9 83 00 00 00            JMP 0x004afbad
LAB_004afb2a:
004AFB2A  83 F8 3A                  CMP EAX,0x3a
004AFB2D  0F 85 62 FF FF FF         JNZ 0x004afa95
004AFB33  8B 0D 6C A1 7F 00         MOV ECX,dword ptr [0x007fa16c]
004AFB39  85 C9                     TEST ECX,ECX
004AFB3B  0F 84 54 FF FF FF         JZ 0x004afa95
004AFB41  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004AFB44  33 F6                     XOR ESI,ESI
004AFB46  85 C0                     TEST EAX,EAX
004AFB48  0F 8E 47 FF FF FF         JLE 0x004afa95
LAB_004afb4e:
004AFB4E  8D 45 F4                  LEA EAX,[EBP + -0xc]
004AFB51  8B D6                     MOV EDX,ESI
004AFB53  50                        PUSH EAX
004AFB54  E8 17 D1 1F 00            CALL 0x006acc70
004AFB59  8D 4D FA                  LEA ECX,[EBP + -0x6]
004AFB5C  8D 55 FC                  LEA EDX,[EBP + -0x4]
004AFB5F  51                        PUSH ECX
004AFB60  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AFB63  8D 45 FE                  LEA EAX,[EBP + -0x2]
004AFB66  52                        PUSH EDX
004AFB67  50                        PUSH EAX
004AFB68  E8 58 1D F5 FF            CALL 0x004018c5
004AFB6D  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004AFB71  2B 45 EC                  SUB EAX,dword ptr [EBP + -0x14]
004AFB74  99                        CDQ
004AFB75  33 C2                     XOR EAX,EDX
004AFB77  2B C2                     SUB EAX,EDX
004AFB79  83 F8 0D                  CMP EAX,0xd
004AFB7C  7F 14                     JG 0x004afb92
004AFB7E  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004AFB82  2B C3                     SUB EAX,EBX
004AFB84  99                        CDQ
004AFB85  33 C2                     XOR EAX,EDX
004AFB87  2B C2                     SUB EAX,EDX
004AFB89  83 F8 0D                  CMP EAX,0xd
004AFB8C  0F 8E A2 00 00 00         JLE 0x004afc34
LAB_004afb92:
004AFB92  8B 0D 6C A1 7F 00         MOV ECX,dword ptr [0x007fa16c]
004AFB98  46                        INC ESI
004AFB99  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004AFB9C  7C B0                     JL 0x004afb4e
004AFB9E  E9 F2 FE FF FF            JMP 0x004afa95
LAB_004afba3:
004AFBA3  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
004AFBA6  C7 45 C0 00 00 00 00      MOV dword ptr [EBP + -0x40],0x0
LAB_004afbad:
004AFBAD  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
004AFBB0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004AFBB3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004AFBB6  52                        PUSH EDX
004AFBB7  50                        PUSH EAX
004AFBB8  53                        PUSH EBX
004AFBB9  51                        PUSH ECX
004AFBBA  E8 19 D3 1F 00            CALL 0x006aced8
004AFBBF  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
004AFBC2  83 C4 10                  ADD ESP,0x10
004AFBC5  85 F6                     TEST ESI,ESI
004AFBC7  8B C8                     MOV ECX,EAX
004AFBC9  7C 44                     JL 0x004afc0f
004AFBCB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AFBCE  83 F8 54                  CMP EAX,0x54
004AFBD1  7C 13                     JL 0x004afbe6
004AFBD3  83 F8 5A                  CMP EAX,0x5a
004AFBD6  7F 0E                     JG 0x004afbe6
004AFBD8  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004AFBDB  85 C0                     TEST EAX,EAX
004AFBDD  74 07                     JZ 0x004afbe6
004AFBDF  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004AFBE2  85 C0                     TEST EAX,EAX
004AFBE4  74 29                     JZ 0x004afc0f
LAB_004afbe6:
004AFBE6  8B C1                     MOV EAX,ECX
004AFBE8  99                        CDQ
004AFBE9  F7 7D BC                  IDIV dword ptr [EBP + -0x44]
004AFBEC  8B F8                     MOV EDI,EAX
004AFBEE  8B C6                     MOV EAX,ESI
004AFBF0  99                        CDQ
004AFBF1  F7 7D BC                  IDIV dword ptr [EBP + -0x44]
004AFBF4  33 D2                     XOR EDX,EDX
004AFBF6  3B F8                     CMP EDI,EAX
004AFBF8  0F 9C C2                  SETL DL
004AFBFB  8B C2                     MOV EAX,EDX
004AFBFD  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
004AFC00  85 D2                     TEST EDX,EDX
004AFC02  74 07                     JZ 0x004afc0b
004AFC04  3B 4D C4                  CMP ECX,dword ptr [EBP + -0x3c]
004AFC07  7C 06                     JL 0x004afc0f
004AFC09  EB 29                     JMP 0x004afc34
LAB_004afc0b:
004AFC0B  85 C0                     TEST EAX,EAX
004AFC0D  74 25                     JZ 0x004afc34
LAB_004afc0f:
004AFC0F  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004AFC12  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004AFC15  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
004AFC18  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004AFC1B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004AFC1E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004AFC21  89 11                     MOV dword ptr [ECX],EDX
004AFC23  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004AFC26  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004AFC29  89 18                     MOV dword ptr [EAX],EBX
004AFC2B  89 11                     MOV dword ptr [ECX],EDX
004AFC2D  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
LAB_004afc34:
004AFC34  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004AFC37  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004AFC3E  41                        INC ECX
004AFC3F  3B C8                     CMP ECX,EAX
004AFC41  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004AFC44  0F 8C B5 F7 FF FF         JL 0x004af3ff
004AFC4A  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_004afc4d:
004AFC4D  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004AFC54  43                        INC EBX
004AFC55  3B D8                     CMP EBX,EAX
004AFC57  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
004AFC5A  0F 8C 84 F7 FF FF         JL 0x004af3e4
LAB_004afc60:
004AFC60  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004AFC63  40                        INC EAX
004AFC64  83 F8 04                  CMP EAX,0x4
004AFC67  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004AFC6A  0F 8C 62 F7 FF FF         JL 0x004af3d2
004AFC70  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004AFC73  51                        PUSH ECX
004AFC74  E8 17 62 1F 00            CALL 0x006a5e90
004AFC79  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004AFC7C  5F                        POP EDI
004AFC7D  5E                        POP ESI
004AFC7E  5B                        POP EBX
004AFC7F  8B E5                     MOV ESP,EBP
004AFC81  5D                        POP EBP
004AFC82  C3                        RET
