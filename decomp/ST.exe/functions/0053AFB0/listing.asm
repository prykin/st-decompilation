PlayPanelTy::GetMessage:
0053AFB0  55                        PUSH EBP
0053AFB1  8B EC                     MOV EBP,ESP
0053AFB3  83 EC 60                  SUB ESP,0x60
0053AFB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053AFBB  53                        PUSH EBX
0053AFBC  56                        PUSH ESI
0053AFBD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053AFC0  57                        PUSH EDI
0053AFC1  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0053AFC4  8D 4D A0                  LEA ECX,[EBP + -0x60]
0053AFC7  6A 00                     PUSH 0x0
0053AFC9  52                        PUSH EDX
0053AFCA  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0053AFCD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053AFD3  E8 18 28 1F 00            CALL 0x0072d7f0
0053AFD8  8B F0                     MOV ESI,EAX
0053AFDA  83 C4 08                  ADD ESP,0x8
0053AFDD  85 F6                     TEST ESI,ESI
0053AFDF  0F 85 18 0C 00 00         JNZ 0x0053bbfd
0053AFE5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053AFE8  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0053AFEB  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0053AFEE  83 E8 02                  SUB EAX,0x2
0053AFF1  75 2D                     JNZ 0x0053b020
0053AFF3  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053AFF8  8D 5E 4C                  LEA EBX,[ESI + 0x4c]
0053AFFB  53                        PUSH EBX
0053AFFC  6A 00                     PUSH 0x0
0053AFFE  6A 03                     PUSH 0x3
0053B000  50                        PUSH EAX
0053B001  E8 4A 6A 17 00            CALL 0x006b1a50
0053B006  8B 0B                     MOV ECX,dword ptr [EBX]
0053B008  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0053B00B  89 4E 3C                  MOV dword ptr [ESI + 0x3c],ECX
0053B00E  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
0053B011  8B D0                     MOV EDX,EAX
0053B013  2B D1                     SUB EDX,ECX
0053B015  03 C8                     ADD ECX,EAX
0053B017  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
0053B01A  89 8E 74 01 00 00         MOV dword ptr [ESI + 0x174],ECX
LAB_0053b020:
0053B020  57                        PUSH EDI
0053B021  8B CE                     MOV ECX,ESI
0053B023  E8 D0 67 EC FF            CALL 0x004017f8
0053B028  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0053B02B  3D 09 B2 00 00            CMP EAX,0xb209
0053B030  0F 87 9F 05 00 00         JA 0x0053b5d5
0053B036  0F 84 09 05 00 00         JZ 0x0053b545
0053B03C  3D 00 62 00 00            CMP EAX,0x6200
0053B041  0F 87 89 01 00 00         JA 0x0053b1d0
0053B047  0F 84 07 01 00 00         JZ 0x0053b154
0053B04D  83 E8 00                  SUB EAX,0x0
0053B050  74 42                     JZ 0x0053b094
0053B052  83 E8 02                  SUB EAX,0x2
0053B055  74 22                     JZ 0x0053b079
0053B057  48                        DEC EAX
0053B058  0F 85 8B 0B 00 00         JNZ 0x0053bbe9
0053B05E  8B CE                     MOV ECX,ESI
0053B060  E8 31 92 EC FF            CALL 0x00404296
0053B065  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B068  33 C0                     XOR EAX,EAX
0053B06A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B070  5F                        POP EDI
0053B071  5E                        POP ESI
0053B072  5B                        POP EBX
0053B073  8B E5                     MOV ESP,EBP
0053B075  5D                        POP EBP
0053B076  C2 04 00                  RET 0x4
LAB_0053b079:
0053B079  8B CE                     MOV ECX,ESI
0053B07B  E8 E2 98 EC FF            CALL 0x00404962
0053B080  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B083  33 C0                     XOR EAX,EAX
0053B085  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B08B  5F                        POP EDI
0053B08C  5E                        POP ESI
0053B08D  5B                        POP EBX
0053B08E  8B E5                     MOV ESP,EBP
0053B090  5D                        POP EBP
0053B091  C2 04 00                  RET 0x4
LAB_0053b094:
0053B094  33 C0                     XOR EAX,EAX
0053B096  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
0053B09D  83 E8 03                  SUB EAX,0x3
0053B0A0  74 5A                     JZ 0x0053b0fc
0053B0A2  48                        DEC EAX
0053B0A3  0F 85 40 0B 00 00         JNZ 0x0053bbe9
0053B0A9  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0053B0AC  8B 7E 48                  MOV EDI,dword ptr [ESI + 0x48]
0053B0AF  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0053B0B2  2B C7                     SUB EAX,EDI
0053B0B4  3B C8                     CMP ECX,EAX
0053B0B6  7E 06                     JLE 0x0053b0be
0053B0B8  83 C1 E2                  ADD ECX,-0x1e
0053B0BB  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
LAB_0053b0be:
0053B0BE  39 46 44                  CMP dword ptr [ESI + 0x44],EAX
0053B0C1  7F 0C                     JG 0x0053b0cf
0053B0C3  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0053B0C6  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
LAB_0053b0cf:
0053B0CF  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0053B0D2  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053B0D5  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0053B0D8  50                        PUSH EAX
0053B0D9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053B0DE  51                        PUSH ECX
0053B0DF  6A FF                     PUSH -0x1
0053B0E1  52                        PUSH EDX
0053B0E2  50                        PUSH EAX
0053B0E3  E8 58 85 17 00            CALL 0x006b3640
0053B0E8  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B0EB  33 C0                     XOR EAX,EAX
0053B0ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B0F3  5F                        POP EDI
0053B0F4  5E                        POP ESI
0053B0F5  5B                        POP EBX
0053B0F6  8B E5                     MOV ESP,EBP
0053B0F8  5D                        POP EBP
0053B0F9  C2 04 00                  RET 0x4
LAB_0053b0fc:
0053B0FC  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0053B0FF  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0053B102  3B C8                     CMP ECX,EAX
0053B104  7D 06                     JGE 0x0053b10c
0053B106  83 C1 1E                  ADD ECX,0x1e
0053B109  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
LAB_0053b10c:
0053B10C  39 46 44                  CMP dword ptr [ESI + 0x44],EAX
0053B10F  7C 15                     JL 0x0053b126
0053B111  6A 01                     PUSH 0x1
0053B113  8B CE                     MOV ECX,ESI
0053B115  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0053B118  66 C7 86 72 01 00 00 01 00  MOV word ptr [ESI + 0x172],0x1
0053B121  E8 98 87 EC FF            CALL 0x004038be
LAB_0053b126:
0053B126  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0053B129  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0053B12C  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
0053B12F  51                        PUSH ECX
0053B130  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0053B136  52                        PUSH EDX
0053B137  6A FF                     PUSH -0x1
0053B139  50                        PUSH EAX
0053B13A  51                        PUSH ECX
0053B13B  E8 00 85 17 00            CALL 0x006b3640
0053B140  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B143  33 C0                     XOR EAX,EAX
0053B145  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B14B  5F                        POP EDI
0053B14C  5E                        POP ESI
0053B14D  5B                        POP EBX
0053B14E  8B E5                     MOV ESP,EBP
0053B150  5D                        POP EBP
0053B151  C2 04 00                  RET 0x4
LAB_0053b154:
0053B154  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0053B157  8B CE                     MOV ECX,ESI
0053B159  89 96 C9 01 00 00         MOV dword ptr [ESI + 0x1c9],EDX
0053B15F  E8 DE 80 EC FF            CALL 0x00403242
0053B164  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
0053B16B  8D BE A1 01 00 00         LEA EDI,[ESI + 0x1a1]
0053B171  BB 08 00 00 00            MOV EBX,0x8
LAB_0053b176:
0053B176  8B 07                     MOV EAX,dword ptr [EDI]
0053B178  85 C0                     TEST EAX,EAX
0053B17A  74 0E                     JZ 0x0053b18a
0053B17C  8D 4E 18                  LEA ECX,[ESI + 0x18]
0053B17F  51                        PUSH ECX
0053B180  50                        PUSH EAX
0053B181  6A 02                     PUSH 0x2
0053B183  8B CE                     MOV ECX,ESI
0053B185  E8 F6 AE 1A 00            CALL 0x006e6080
LAB_0053b18a:
0053B18A  83 C7 04                  ADD EDI,0x4
0053B18D  4B                        DEC EBX
0053B18E  75 E6                     JNZ 0x0053b176
0053B190  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
0053B197  8D BE 81 01 00 00         LEA EDI,[ESI + 0x181]
0053B19D  BB 08 00 00 00            MOV EBX,0x8
LAB_0053b1a2:
0053B1A2  8B 07                     MOV EAX,dword ptr [EDI]
0053B1A4  85 C0                     TEST EAX,EAX
0053B1A6  74 0E                     JZ 0x0053b1b6
0053B1A8  8D 56 18                  LEA EDX,[ESI + 0x18]
0053B1AB  8B CE                     MOV ECX,ESI
0053B1AD  52                        PUSH EDX
0053B1AE  50                        PUSH EAX
0053B1AF  6A 02                     PUSH 0x2
0053B1B1  E8 CA AE 1A 00            CALL 0x006e6080
LAB_0053b1b6:
0053B1B6  83 C7 04                  ADD EDI,0x4
0053B1B9  4B                        DEC EBX
0053B1BA  75 E6                     JNZ 0x0053b1a2
0053B1BC  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B1BF  33 C0                     XOR EAX,EAX
0053B1C1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B1C7  5F                        POP EDI
0053B1C8  5E                        POP ESI
0053B1C9  5B                        POP EBX
0053B1CA  8B E5                     MOV ESP,EBP
0053B1CC  5D                        POP EBP
0053B1CD  C2 04 00                  RET 0x4
LAB_0053b1d0:
0053B1D0  2D 01 62 00 00            SUB EAX,0x6201
0053B1D5  0F 84 5C 03 00 00         JZ 0x0053b537
0053B1DB  48                        DEC EAX
0053B1DC  0F 84 22 03 00 00         JZ 0x0053b504
0053B1E2  2D 06 50 00 00            SUB EAX,0x5006
0053B1E7  0F 85 FC 09 00 00         JNZ 0x0053bbe9
0053B1ED  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0053B1F0  8B 00                     MOV EAX,dword ptr [EAX]
0053B1F2  48                        DEC EAX
0053B1F3  83 E8 00                  SUB EAX,0x0
0053B1F6  0F 84 94 02 00 00         JZ 0x0053b490
0053B1FC  48                        DEC EAX
0053B1FD  0F 84 4C 01 00 00         JZ 0x0053b34f
0053B203  48                        DEC EAX
0053B204  0F 85 DF 09 00 00         JNZ 0x0053bbe9
0053B20A  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0053B210  80 FA 08                  CMP DL,0x8
0053B213  0F 83 F6 00 00 00         JNC 0x0053b30f
0053B219  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0053B21E  32 DB                     XOR BL,BL
0053B220  84 C0                     TEST AL,AL
0053B222  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0053B225  0F 86 E4 00 00 00         JBE 0x0053b30f
0053B22B  EB 06                     JMP 0x0053b233
LAB_0053b22d:
0053B22D  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
LAB_0053b233:
0053B233  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053B236  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0053B23C  25 FF 00 00 00            AND EAX,0xff
0053B241  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
0053B244  C1 E7 03                  SHL EDI,0x3
0053B247  2B F8                     SUB EDI,EAX
0053B249  C1 E7 02                  SHL EDI,0x2
0053B24C  84 C9                     TEST CL,CL
0053B24E  8A 87 F4 8A 80 00         MOV AL,byte ptr [EDI + 0x808af4]
0053B254  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0053B257  74 27                     JZ 0x0053b280
0053B259  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053B25C  25 FF 00 00 00            AND EAX,0xff
0053B261  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0053B264  33 C0                     XOR EAX,EAX
0053B266  8A C2                     MOV AL,DL
0053B268  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0053B26B  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0053B272  33 C0                     XOR EAX,EAX
0053B274  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0053B27B  0F 95 C0                  SETNZ AL
0053B27E  EB 73                     JMP 0x0053b2f3
LAB_0053b280:
0053B280  3A C2                     CMP AL,DL
0053B282  74 66                     JZ 0x0053b2ea
0053B284  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053B287  33 C9                     XOR ECX,ECX
0053B289  25 FF 00 00 00            AND EAX,0xff
0053B28E  8A CA                     MOV CL,DL
0053B290  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0053B297  84 D2                     TEST DL,DL
0053B299  75 10                     JNZ 0x0053b2ab
0053B29B  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0053B2A2  75 07                     JNZ 0x0053b2ab
0053B2A4  B9 FE FF FF FF            MOV ECX,0xfffffffe
0053B2A9  EB 41                     JMP 0x0053b2ec
LAB_0053b2ab:
0053B2AB  80 FA 01                  CMP DL,0x1
0053B2AE  75 0F                     JNZ 0x0053b2bf
0053B2B0  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0053B2B8  75 05                     JNZ 0x0053b2bf
0053B2BA  83 C9 FF                  OR ECX,0xffffffff
0053B2BD  EB 2D                     JMP 0x0053b2ec
LAB_0053b2bf:
0053B2BF  84 D2                     TEST DL,DL
0053B2C1  75 11                     JNZ 0x0053b2d4
0053B2C3  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0053B2CB  75 07                     JNZ 0x0053b2d4
0053B2CD  B9 01 00 00 00            MOV ECX,0x1
0053B2D2  EB 18                     JMP 0x0053b2ec
LAB_0053b2d4:
0053B2D4  80 FA 01                  CMP DL,0x1
0053B2D7  75 11                     JNZ 0x0053b2ea
0053B2D9  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0053B2E1  75 07                     JNZ 0x0053b2ea
0053B2E3  B9 02 00 00 00            MOV ECX,0x2
0053B2E8  EB 02                     JMP 0x0053b2ec
LAB_0053b2ea:
0053B2EA  33 C9                     XOR ECX,ECX
LAB_0053b2ec:
0053B2EC  33 C0                     XOR EAX,EAX
0053B2EE  85 C9                     TEST ECX,ECX
0053B2F0  0F 9C C0                  SETL AL
LAB_0053b2f3:
0053B2F3  B1 01                     MOV CL,0x1
0053B2F5  2A C8                     SUB CL,AL
0053B2F7  FE C3                     INC BL
0053B2F9  88 8F F7 8A 80 00         MOV byte ptr [EDI + 0x808af7],CL
0053B2FF  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0053B304  3A D8                     CMP BL,AL
0053B306  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0053B309  0F 82 1E FF FF FF         JC 0x0053b22d
LAB_0053b30f:
0053B30F  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
0053B316  8D BE A1 01 00 00         LEA EDI,[ESI + 0x1a1]
0053B31C  BB 08 00 00 00            MOV EBX,0x8
LAB_0053b321:
0053B321  8B 07                     MOV EAX,dword ptr [EDI]
0053B323  85 C0                     TEST EAX,EAX
0053B325  74 0E                     JZ 0x0053b335
0053B327  8D 56 18                  LEA EDX,[ESI + 0x18]
0053B32A  8B CE                     MOV ECX,ESI
0053B32C  52                        PUSH EDX
0053B32D  50                        PUSH EAX
0053B32E  6A 02                     PUSH 0x2
0053B330  E8 4B AD 1A 00            CALL 0x006e6080
LAB_0053b335:
0053B335  83 C7 04                  ADD EDI,0x4
0053B338  4B                        DEC EBX
0053B339  75 E6                     JNZ 0x0053b321
0053B33B  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B33E  33 C0                     XOR EAX,EAX
0053B340  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B346  5F                        POP EDI
0053B347  5E                        POP ESI
0053B348  5B                        POP EBX
0053B349  8B E5                     MOV ESP,EBP
0053B34B  5D                        POP EBP
0053B34C  C2 04 00                  RET 0x4
LAB_0053b34f:
0053B34F  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0053B355  80 FA 08                  CMP DL,0x8
0053B358  0F 83 F2 00 00 00         JNC 0x0053b450
0053B35E  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0053B363  32 DB                     XOR BL,BL
0053B365  84 C0                     TEST AL,AL
0053B367  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0053B36A  0F 86 E0 00 00 00         JBE 0x0053b450
0053B370  EB 06                     JMP 0x0053b378
LAB_0053b372:
0053B372  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
LAB_0053b378:
0053B378  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053B37B  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0053B381  25 FF 00 00 00            AND EAX,0xff
0053B386  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
0053B389  C1 E7 03                  SHL EDI,0x3
0053B38C  2B F8                     SUB EDI,EAX
0053B38E  C1 E7 02                  SHL EDI,0x2
0053B391  84 C9                     TEST CL,CL
0053B393  8A 87 F4 8A 80 00         MOV AL,byte ptr [EDI + 0x808af4]
0053B399  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0053B39C  74 27                     JZ 0x0053b3c5
0053B39E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053B3A1  25 FF 00 00 00            AND EAX,0xff
0053B3A6  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0053B3A9  33 C0                     XOR EAX,EAX
0053B3AB  8A C2                     MOV AL,DL
0053B3AD  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0053B3B0  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0053B3B7  33 C0                     XOR EAX,EAX
0053B3B9  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0053B3C0  0F 95 C0                  SETNZ AL
0053B3C3  EB 73                     JMP 0x0053b438
LAB_0053b3c5:
0053B3C5  3A C2                     CMP AL,DL
0053B3C7  74 66                     JZ 0x0053b42f
0053B3C9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053B3CC  33 C9                     XOR ECX,ECX
0053B3CE  25 FF 00 00 00            AND EAX,0xff
0053B3D3  8A CA                     MOV CL,DL
0053B3D5  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0053B3DC  84 D2                     TEST DL,DL
0053B3DE  75 10                     JNZ 0x0053b3f0
0053B3E0  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0053B3E7  75 07                     JNZ 0x0053b3f0
0053B3E9  B9 FE FF FF FF            MOV ECX,0xfffffffe
0053B3EE  EB 41                     JMP 0x0053b431
LAB_0053b3f0:
0053B3F0  80 FA 01                  CMP DL,0x1
0053B3F3  75 0F                     JNZ 0x0053b404
0053B3F5  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0053B3FD  75 05                     JNZ 0x0053b404
0053B3FF  83 C9 FF                  OR ECX,0xffffffff
0053B402  EB 2D                     JMP 0x0053b431
LAB_0053b404:
0053B404  84 D2                     TEST DL,DL
0053B406  75 11                     JNZ 0x0053b419
0053B408  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0053B410  75 07                     JNZ 0x0053b419
0053B412  B9 01 00 00 00            MOV ECX,0x1
0053B417  EB 18                     JMP 0x0053b431
LAB_0053b419:
0053B419  80 FA 01                  CMP DL,0x1
0053B41C  75 11                     JNZ 0x0053b42f
0053B41E  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0053B426  75 07                     JNZ 0x0053b42f
0053B428  B9 02 00 00 00            MOV ECX,0x2
0053B42D  EB 02                     JMP 0x0053b431
LAB_0053b42f:
0053B42F  33 C9                     XOR ECX,ECX
LAB_0053b431:
0053B431  33 C0                     XOR EAX,EAX
0053B433  85 C9                     TEST ECX,ECX
0053B435  0F 9C C0                  SETL AL
LAB_0053b438:
0053B438  88 87 F7 8A 80 00         MOV byte ptr [EDI + 0x808af7],AL
0053B43E  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0053B443  FE C3                     INC BL
0053B445  3A D8                     CMP BL,AL
0053B447  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0053B44A  0F 82 22 FF FF FF         JC 0x0053b372
LAB_0053b450:
0053B450  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
0053B457  8D BE A1 01 00 00         LEA EDI,[ESI + 0x1a1]
0053B45D  BB 08 00 00 00            MOV EBX,0x8
LAB_0053b462:
0053B462  8B 07                     MOV EAX,dword ptr [EDI]
0053B464  85 C0                     TEST EAX,EAX
0053B466  74 0E                     JZ 0x0053b476
0053B468  8D 4E 18                  LEA ECX,[ESI + 0x18]
0053B46B  51                        PUSH ECX
0053B46C  50                        PUSH EAX
0053B46D  6A 02                     PUSH 0x2
0053B46F  8B CE                     MOV ECX,ESI
0053B471  E8 0A AC 1A 00            CALL 0x006e6080
LAB_0053b476:
0053B476  83 C7 04                  ADD EDI,0x4
0053B479  4B                        DEC EBX
0053B47A  75 E6                     JNZ 0x0053b462
0053B47C  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B47F  33 C0                     XOR EAX,EAX
0053B481  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B487  5F                        POP EDI
0053B488  5E                        POP ESI
0053B489  5B                        POP EBX
0053B48A  8B E5                     MOV ESP,EBP
0053B48C  5D                        POP EBP
0053B48D  C2 04 00                  RET 0x4
LAB_0053b490:
0053B490  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0053B495  32 C9                     XOR CL,CL
0053B497  84 C0                     TEST AL,AL
0053B499  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0053B49C  76 26                     JBE 0x0053b4c4
LAB_0053b49e:
0053B49E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053B4A1  25 FF 00 00 00            AND EAX,0xff
0053B4A6  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0053B4A9  C1 E2 03                  SHL EDX,0x3
0053B4AC  2B D0                     SUB EDX,EAX
0053B4AE  FE C1                     INC CL
0053B4B0  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0053B4B3  C6 04 95 F7 8A 80 00 01   MOV byte ptr [EDX*0x4 + 0x808af7],0x1
0053B4BB  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0053B4C0  3A C8                     CMP CL,AL
0053B4C2  72 DA                     JC 0x0053b49e
LAB_0053b4c4:
0053B4C4  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
0053B4CB  8D BE A1 01 00 00         LEA EDI,[ESI + 0x1a1]
0053B4D1  BB 08 00 00 00            MOV EBX,0x8
LAB_0053b4d6:
0053B4D6  8B 07                     MOV EAX,dword ptr [EDI]
0053B4D8  85 C0                     TEST EAX,EAX
0053B4DA  74 0E                     JZ 0x0053b4ea
0053B4DC  8D 4E 18                  LEA ECX,[ESI + 0x18]
0053B4DF  51                        PUSH ECX
0053B4E0  50                        PUSH EAX
0053B4E1  6A 02                     PUSH 0x2
0053B4E3  8B CE                     MOV ECX,ESI
0053B4E5  E8 96 AB 1A 00            CALL 0x006e6080
LAB_0053b4ea:
0053B4EA  83 C7 04                  ADD EDI,0x4
0053B4ED  4B                        DEC EBX
0053B4EE  75 E6                     JNZ 0x0053b4d6
0053B4F0  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B4F3  33 C0                     XOR EAX,EAX
0053B4F5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B4FB  5F                        POP EDI
0053B4FC  5E                        POP ESI
0053B4FD  5B                        POP EBX
0053B4FE  8B E5                     MOV ESP,EBP
0053B500  5D                        POP EBP
0053B501  C2 04 00                  RET 0x4
LAB_0053b504:
0053B504  68 88 1E 40 00            PUSH 0x401e88
0053B509  6A 00                     PUSH 0x0
0053B50B  68 34 3E 7C 00            PUSH 0x7c3e34
LAB_0053b510:
0053B510  E8 67 A2 EC FF            CALL 0x0040577c
0053B515  83 C4 08                  ADD ESP,0x8
0053B518  8B CE                     MOV ECX,ESI
0053B51A  50                        PUSH EAX
0053B51B  6A 06                     PUSH 0x6
0053B51D  57                        PUSH EDI
0053B51E  E8 72 7F EC FF            CALL 0x00403495
0053B523  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B526  33 C0                     XOR EAX,EAX
0053B528  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B52E  5F                        POP EDI
0053B52F  5E                        POP ESI
0053B530  5B                        POP EBX
0053B531  8B E5                     MOV ESP,EBP
0053B533  5D                        POP EBP
0053B534  C2 04 00                  RET 0x4
LAB_0053b537:
0053B537  68 88 1E 40 00            PUSH 0x401e88
0053B53C  6A 00                     PUSH 0x0
0053B53E  68 40 3E 7C 00            PUSH 0x7c3e40
0053B543  EB CB                     JMP 0x0053b510
LAB_0053b545:
0053B545  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0053B548  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0053B54B  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0053B54E  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0053B551  2B CA                     SUB ECX,EDX
0053B553  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053B556  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
0053B559  85 C9                     TEST ECX,ECX
0053B55B  75 05                     JNZ 0x0053b562
0053B55D  03 5E 48                  ADD EBX,dword ptr [ESI + 0x48]
0053B560  EB 03                     JMP 0x0053b565
LAB_0053b562:
0053B562  2B 5E 44                  SUB EBX,dword ptr [ESI + 0x44]
LAB_0053b565:
0053B565  6A 01                     PUSH 0x1
0053B567  6A 00                     PUSH 0x0
0053B569  57                        PUSH EDI
0053B56A  E8 EB 7D EC FF            CALL 0x0040335a
0053B56F  83 C4 04                  ADD ESP,0x4
0053B572  50                        PUSH EAX
0053B573  6A 01                     PUSH 0x1
0053B575  6A 00                     PUSH 0x0
0053B577  68 D0 71 7C 00            PUSH 0x7c71d0
0053B57C  E8 FB A1 EC FF            CALL 0x0040577c
0053B581  83 C4 08                  ADD ESP,0x8
0053B584  50                        PUSH EAX
0053B585  E8 76 76 1B 00            CALL 0x006f2c00
0053B58A  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053B590  83 C4 0C                  ADD ESP,0xc
0053B593  50                        PUSH EAX
0053B594  6A 01                     PUSH 0x1
0053B596  E8 45 67 1B 00            CALL 0x006f1ce0
0053B59B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0053B59E  50                        PUSH EAX
0053B59F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053B5A2  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053B5A5  6A 01                     PUSH 0x1
0053B5A7  53                        PUSH EBX
0053B5A8  52                        PUSH EDX
0053B5A9  50                        PUSH EAX
0053B5AA  E8 7A 7C EC FF            CALL 0x00403229
0053B5AF  83 C4 14                  ADD ESP,0x14
0053B5B2  8D 4D F8                  LEA ECX,[EBP + -0x8]
0053B5B5  51                        PUSH ECX
0053B5B6  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053B5BC  E8 1F 6B 1B 00            CALL 0x006f20e0
0053B5C1  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B5C4  33 C0                     XOR EAX,EAX
0053B5C6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B5CC  5F                        POP EDI
0053B5CD  5E                        POP ESI
0053B5CE  5B                        POP EBX
0053B5CF  8B E5                     MOV ESP,EBP
0053B5D1  5D                        POP EBP
0053B5D2  C2 04 00                  RET 0x4
LAB_0053b5d5:
0053B5D5  3D 36 B5 00 00            CMP EAX,0xb536
0053B5DA  0F 87 B8 05 00 00         JA 0x0053bb98
0053B5E0  3D 2F B5 00 00            CMP EAX,0xb52f
0053B5E5  0F 83 05 05 00 00         JNC 0x0053baf0
0053B5EB  05 01 4B FF FF            ADD EAX,0xffff4b01
0053B5F0  83 F8 27                  CMP EAX,0x27
0053B5F3  0F 87 F0 05 00 00         JA 0x0053bbe9
0053B5F9  33 D2                     XOR EDX,EDX
0053B5FB  8A 90 5C BC 53 00         MOV DL,byte ptr [EAX + 0x53bc5c]
switchD_0053b601::switchD:
0053B601  FF 24 95 4C BC 53 00      JMP dword ptr [EDX*0x4 + 0x53bc4c]
switchD_0053b601::caseD_b51f:
0053B608  8A 47 10                  MOV AL,byte ptr [EDI + 0x10]
0053B60B  8D 7E 18                  LEA EDI,[ESI + 0x18]
0053B60E  2C 1F                     SUB AL,0x1f
0053B610  57                        PUSH EDI
0053B611  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
0053B614  8B 86 C9 01 00 00         MOV EAX,dword ptr [ESI + 0x1c9]
0053B61A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0053B61D  81 E1 FF 00 00 00         AND ECX,0xff
0053B623  03 C1                     ADD EAX,ECX
0053B625  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0053B628  C1 E2 03                  SHL EDX,0x3
0053B62B  2B D0                     SUB EDX,EAX
0053B62D  8D 04 95 F7 8A 80 00      LEA EAX,[EDX*0x4 + 0x808af7]
0053B634  8A 14 95 F7 8A 80 00      MOV DL,byte ptr [EDX*0x4 + 0x808af7]
0053B63B  84 D2                     TEST DL,DL
0053B63D  0F 94 C2                  SETZ DL
0053B640  88 10                     MOV byte ptr [EAX],DL
0053B642  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
0053B649  8B 84 8E A1 01 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0x1a1]
0053B650  8B CE                     MOV ECX,ESI
0053B652  50                        PUSH EAX
0053B653  6A 02                     PUSH 0x2
0053B655  E8 26 AA 1A 00            CALL 0x006e6080
0053B65A  8B 86 C1 01 00 00         MOV EAX,dword ptr [ESI + 0x1c1]
0053B660  85 C0                     TEST EAX,EAX
0053B662  0F 84 81 05 00 00         JZ 0x0053bbe9
0053B668  57                        PUSH EDI
0053B669  50                        PUSH EAX
0053B66A  6A 02                     PUSH 0x2
0053B66C  8B CE                     MOV ECX,ESI
0053B66E  C7 46 28 25 00 00 00      MOV dword ptr [ESI + 0x28],0x25
0053B675  E8 06 AA 1A 00            CALL 0x006e6080
0053B67A  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
0053B67D  B8 04 00 00 00            MOV EAX,0x4
0053B682  3B C8                     CMP ECX,EAX
0053B684  0F 84 5F 05 00 00         JZ 0x0053bbe9
0053B68A  8B 8E C1 01 00 00         MOV ECX,dword ptr [ESI + 0x1c1]
0053B690  57                        PUSH EDI
0053B691  51                        PUSH ECX
0053B692  6A 02                     PUSH 0x2
0053B694  8B CE                     MOV ECX,ESI
0053B696  C7 46 28 22 00 00 00      MOV dword ptr [ESI + 0x28],0x22
0053B69D  66 89 46 2C               MOV word ptr [ESI + 0x2c],AX
0053B6A1  E8 DA A9 1A 00            CALL 0x006e6080
0053B6A6  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B6A9  33 C0                     XOR EAX,EAX
0053B6AB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B6B1  5F                        POP EDI
0053B6B2  5E                        POP ESI
0053B6B3  5B                        POP EBX
0053B6B4  8B E5                     MOV ESP,EBP
0053B6B6  5D                        POP EBP
0053B6B7  C2 04 00                  RET 0x4
switchD_0053b601::caseD_b4ff:
0053B6BA  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
0053B6C0  33 C9                     XOR ECX,ECX
0053B6C2  8A CB                     MOV CL,BL
0053B6C4  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0053B6C7  8A 94 C0 C7 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087c7]
0053B6CE  84 D2                     TEST DL,DL
0053B6D0  75 10                     JNZ 0x0053b6e2
0053B6D2  A0 4F 87 80 00            MOV AL,[0x0080874f]
0053B6D7  84 C0                     TEST AL,AL
0053B6D9  75 07                     JNZ 0x0053b6e2
0053B6DB  B8 01 00 00 00            MOV EAX,0x1
0053B6E0  EB 02                     JMP 0x0053b6e4
LAB_0053b6e2:
0053B6E2  33 C0                     XOR EAX,EAX
LAB_0053b6e4:
0053B6E4  85 C0                     TEST EAX,EAX
0053B6E6  0F 84 FD 04 00 00         JZ 0x0053bbe9
0053B6EC  80 3D 83 87 80 00 01      CMP byte ptr [0x00808783],0x1
0053B6F3  0F 84 F0 04 00 00         JZ 0x0053bbe9
0053B6F9  8A 57 10                  MOV DL,byte ptr [EDI + 0x10]
0053B6FC  8B B6 C9 01 00 00         MOV ESI,dword ptr [ESI + 0x1c9]
0053B702  FE C2                     INC DL
0053B704  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
0053B707  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0053B70A  25 FF 00 00 00            AND EAX,0xff
0053B70F  03 F0                     ADD ESI,EAX
0053B711  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0053B714  C1 E0 03                  SHL EAX,0x3
0053B717  2B C6                     SUB EAX,ESI
0053B719  C1 E0 02                  SHL EAX,0x2
0053B71C  80 3D 8F 8A 80 00 00      CMP byte ptr [0x00808a8f],0x0
0053B723  8A 90 F4 8A 80 00         MOV DL,byte ptr [EAX + 0x808af4]
0053B729  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
0053B72C  0F 85 B7 04 00 00         JNZ 0x0053bbe9
0053B732  80 B8 F5 8A 80 00 00      CMP byte ptr [EAX + 0x808af5],0x0
0053B739  0F 84 AA 04 00 00         JZ 0x0053bbe9
0053B73F  80 FB FF                  CMP BL,0xff
0053B742  0F 84 A1 04 00 00         JZ 0x0053bbe9
0053B748  80 FA FF                  CMP DL,0xff
0053B74B  0F 84 98 04 00 00         JZ 0x0053bbe9
0053B751  3A DA                     CMP BL,DL
0053B753  0F 84 90 04 00 00         JZ 0x0053bbe9
0053B759  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0053B75C  33 D2                     XOR EDX,EDX
0053B75E  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0053B761  25 FF 00 00 00            AND EAX,0xff
0053B766  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0053B769  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0053B76C  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0053B76F  80 BC D2 C7 87 80 00 01   CMP byte ptr [EDX + EDX*0x8 + 0x8087c7],0x1
0053B777  0F 85 B9 00 00 00         JNZ 0x0053b836
0053B77D  8A 94 C8 4F 8A 80 00      MOV DL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0053B784  C7 45 E4 06 00 00 00      MOV dword ptr [EBP + -0x1c],0x6
0053B78B  84 D2                     TEST DL,DL
0053B78D  75 12                     JNZ 0x0053b7a1
0053B78F  8A 9C C1 4F 8A 80 00      MOV BL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0053B796  84 DB                     TEST BL,BL
0053B798  75 07                     JNZ 0x0053b7a1
0053B79A  BA FE FF FF FF            MOV EDX,0xfffffffe
0053B79F  EB 42                     JMP 0x0053b7e3
LAB_0053b7a1:
0053B7A1  80 FA 01                  CMP DL,0x1
0053B7A4  75 10                     JNZ 0x0053b7b6
0053B7A6  8A 9C C1 4F 8A 80 00      MOV BL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0053B7AD  84 DB                     TEST BL,BL
0053B7AF  75 05                     JNZ 0x0053b7b6
0053B7B1  83 CA FF                  OR EDX,0xffffffff
0053B7B4  EB 2D                     JMP 0x0053b7e3
LAB_0053b7b6:
0053B7B6  84 D2                     TEST DL,DL
0053B7B8  75 11                     JNZ 0x0053b7cb
0053B7BA  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
0053B7C2  75 07                     JNZ 0x0053b7cb
0053B7C4  BA 01 00 00 00            MOV EDX,0x1
0053B7C9  EB 18                     JMP 0x0053b7e3
LAB_0053b7cb:
0053B7CB  80 FA 01                  CMP DL,0x1
0053B7CE  75 11                     JNZ 0x0053b7e1
0053B7D0  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
0053B7D8  75 07                     JNZ 0x0053b7e1
0053B7DA  BA 02 00 00 00            MOV EDX,0x2
0053B7DF  EB 02                     JMP 0x0053b7e3
LAB_0053b7e1:
0053B7E1  33 D2                     XOR EDX,EDX
LAB_0053b7e3:
0053B7E3  83 C2 02                  ADD EDX,0x2
0053B7E6  83 FA 04                  CMP EDX,0x4
0053B7E9  77 5A                     JA 0x0053b845
switchD_0053b7eb::switchD:
0053B7EB  FF 24 95 84 BC 53 00      JMP dword ptr [EDX*0x4 + 0x53bc84]
switchD_0053b7eb::caseD_fffffffe:
0053B7F2  C1 E1 10                  SHL ECX,0x10
0053B7F5  0B C8                     OR ECX,EAX
0053B7F7  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0053B7FE  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0053B801  EB 42                     JMP 0x0053b845
switchD_0053b7eb::caseD_2:
0053B803  C1 E1 10                  SHL ECX,0x10
0053B806  0B C8                     OR ECX,EAX
0053B808  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0053B80F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0053B812  EB 31                     JMP 0x0053b845
switchD_0053b7eb::caseD_ffffffff:
0053B814  C1 E0 10                  SHL EAX,0x10
0053B817  0B C1                     OR EAX,ECX
0053B819  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0053B820  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0053B823  EB 20                     JMP 0x0053b845
switchD_0053b7eb::caseD_1:
0053B825  C1 E0 10                  SHL EAX,0x10
0053B828  0B C1                     OR EAX,ECX
0053B82A  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0053B831  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0053B834  EB 0F                     JMP 0x0053b845
LAB_0053b836:
0053B836  C1 E1 10                  SHL ECX,0x10
0053B839  0B C8                     OR ECX,EAX
0053B83B  C7 45 E4 07 00 00 00      MOV dword ptr [EBP + -0x1c],0x7
0053B842  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
switchD_0053b7eb::caseD_0:
0053B845  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0053B84B  85 C9                     TEST ECX,ECX
0053B84D  0F 84 96 03 00 00         JZ 0x0053bbe9
0053B853  6A FF                     PUSH -0x1
0053B855  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0053B858  6A 01                     PUSH 0x1
0053B85A  50                        PUSH EAX
0053B85B  6A 05                     PUSH 0x5
0053B85D  E8 D1 83 EC FF            CALL 0x00403c33
0053B862  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053B865  33 C0                     XOR EAX,EAX
0053B867  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053B86D  5F                        POP EDI
0053B86E  5E                        POP ESI
0053B86F  5B                        POP EBX
0053B870  8B E5                     MOV ESP,EBP
0053B872  5D                        POP EBP
0053B873  C2 04 00                  RET 0x4
switchD_0053b601::caseD_b50f:
0053B876  8A 4F 10                  MOV CL,byte ptr [EDI + 0x10]
0053B879  8B 5F 18                  MOV EBX,dword ptr [EDI + 0x18]
0053B87C  80 E9 0F                  SUB CL,0xf
0053B87F  8B 03                     MOV EAX,dword ptr [EBX]
0053B881  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
0053B884  2B 46 3C                  SUB EAX,dword ptr [ESI + 0x3c]
0053B887  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053B88A  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
0053B88D  85 C0                     TEST EAX,EAX
0053B88F  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
0053B892  75 05                     JNZ 0x0053b899
0053B894  03 46 48                  ADD EAX,dword ptr [ESI + 0x48]
0053B897  EB 03                     JMP 0x0053b89c
LAB_0053b899:
0053B899  2B 46 44                  SUB EAX,dword ptr [ESI + 0x44]
LAB_0053b89c:
0053B89C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053B89F  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053B8A4  3C 03                     CMP AL,0x3
0053B8A6  75 07                     JNZ 0x0053b8af
0053B8A8  B8 73 00 00 00            MOV EAX,0x73
0053B8AD  EB 0E                     JMP 0x0053b8bd
LAB_0053b8af:
0053B8AF  FE C8                     DEC AL
0053B8B1  F6 D8                     NEG AL
0053B8B3  1B C0                     SBB EAX,EAX
0053B8B5  25 89 00 00 00            AND EAX,0x89
0053B8BA  83 C0 3A                  ADD EAX,0x3a
LAB_0053b8bd:
0053B8BD  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
0053B8C0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0053B8C3  50                        PUSH EAX
0053B8C4  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0053B8C7  52                        PUSH EDX
0053B8C8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0053B8CB  50                        PUSH EAX
0053B8CC  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053B8CF  51                        PUSH ECX
0053B8D0  52                        PUSH EDX
0053B8D1  6A 00                     PUSH 0x0
0053B8D3  50                        PUSH EAX
0053B8D4  E8 97 88 17 00            CALL 0x006b4170
0053B8D9  66 83 7F 14 00            CMP word ptr [EDI + 0x14],0x0
0053B8DE  0F 84 33 01 00 00         JZ 0x0053ba17
0053B8E4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0053B8E7  8B 86 C9 01 00 00         MOV EAX,dword ptr [ESI + 0x1c9]
0053B8ED  81 E1 FF 00 00 00         AND ECX,0xff
0053B8F3  03 C1                     ADD EAX,ECX
0053B8F5  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
0053B8F8  C1 E7 03                  SHL EDI,0x3
0053B8FB  2B F8                     SUB EDI,EAX
0053B8FD  A0 4D 87 80 00            MOV AL,[0x0080874d]
0053B902  C1 E7 02                  SHL EDI,0x2
0053B905  3C FF                     CMP AL,0xff
0053B907  8A 8F F4 8A 80 00         MOV CL,byte ptr [EDI + 0x808af4]
0053B90D  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
0053B910  0F 84 D4 00 00 00         JZ 0x0053b9ea
0053B916  80 F9 FF                  CMP CL,0xff
0053B919  0F 84 CB 00 00 00         JZ 0x0053b9ea
0053B91F  3A C1                     CMP AL,CL
0053B921  0F 84 C3 00 00 00         JZ 0x0053b9ea
0053B927  33 C9                     XOR ECX,ECX
0053B929  83 CB FF                  OR EBX,0xffffffff
0053B92C  8A C8                     MOV CL,AL
0053B92E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0053B931  25 FF 00 00 00            AND EAX,0xff
0053B936  8A 94 C8 4F 8A 80 00      MOV DL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0053B93D  84 D2                     TEST DL,DL
0053B93F  75 10                     JNZ 0x0053b951
0053B941  38 94 C1 4F 8A 80 00      CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],DL
0053B948  75 07                     JNZ 0x0053b951
0053B94A  B8 FE FF FF FF            MOV EAX,0xfffffffe
0053B94F  EB 41                     JMP 0x0053b992
LAB_0053b951:
0053B951  80 FA 01                  CMP DL,0x1
0053B954  75 0F                     JNZ 0x0053b965
0053B956  80 BC C1 4F 8A 80 00 00   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x0
0053B95E  75 05                     JNZ 0x0053b965
0053B960  83 C8 FF                  OR EAX,0xffffffff
0053B963  EB 2D                     JMP 0x0053b992
LAB_0053b965:
0053B965  84 D2                     TEST DL,DL
0053B967  75 11                     JNZ 0x0053b97a
0053B969  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
0053B971  75 07                     JNZ 0x0053b97a
0053B973  B8 01 00 00 00            MOV EAX,0x1
0053B978  EB 18                     JMP 0x0053b992
LAB_0053b97a:
0053B97A  80 FA 01                  CMP DL,0x1
0053B97D  75 11                     JNZ 0x0053b990
0053B97F  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
0053B987  75 07                     JNZ 0x0053b990
0053B989  B8 02 00 00 00            MOV EAX,0x2
0053B98E  EB 02                     JMP 0x0053b992
LAB_0053b990:
0053B990  33 C0                     XOR EAX,EAX
LAB_0053b992:
0053B992  83 C0 02                  ADD EAX,0x2
0053B995  83 F8 04                  CMP EAX,0x4
0053B998  77 1E                     JA 0x0053b9b8
switchD_0053b99a::switchD:
0053B99A  FF 24 85 98 BC 53 00      JMP dword ptr [EAX*0x4 + 0x53bc98]
switchD_0053b99a::caseD_fffffffe:
0053B9A1  BB 03 00 00 00            MOV EBX,0x3
0053B9A6  EB 10                     JMP 0x0053b9b8
switchD_0053b99a::caseD_2:
0053B9A8  BB 02 00 00 00            MOV EBX,0x2
0053B9AD  EB 09                     JMP 0x0053b9b8
switchD_0053b99a::caseD_ffffffff:
0053B9AF  BB 01 00 00 00            MOV EBX,0x1
0053B9B4  EB 02                     JMP 0x0053b9b8
switchD_0053b99a::caseD_1:
0053B9B6  33 DB                     XOR EBX,EBX
switchD_0053b99a::caseD_0:
0053B9B8  85 DB                     TEST EBX,EBX
0053B9BA  7C 2E                     JL 0x0053b9ea
0053B9BC  8A 87 F5 8A 80 00         MOV AL,byte ptr [EDI + 0x808af5]
0053B9C2  84 C0                     TEST AL,AL
0053B9C4  74 24                     JZ 0x0053b9ea
0053B9C6  8B 96 D5 01 00 00         MOV EDX,dword ptr [ESI + 0x1d5]
0053B9CC  53                        PUSH EBX
0053B9CD  52                        PUSH EDX
0053B9CE  E8 CD F9 1C 00            CALL 0x0070b3a0
0053B9D3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0053B9D6  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0053B9D9  50                        PUSH EAX
0053B9DA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053B9DD  6A 06                     PUSH 0x6
0053B9DF  50                        PUSH EAX
0053B9E0  51                        PUSH ECX
0053B9E1  52                        PUSH EDX
0053B9E2  E8 42 78 EC FF            CALL 0x00403229
0053B9E7  83 C4 1C                  ADD ESP,0x1c
LAB_0053b9ea:
0053B9EA  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0053B9ED  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053B9F0  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0053B9F3  50                        PUSH EAX
0053B9F4  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053B9F9  51                        PUSH ECX
0053B9FA  6A FF                     PUSH -0x1
0053B9FC  52                        PUSH EDX
0053B9FD  50                        PUSH EAX
0053B9FE  E8 3D 7C 17 00            CALL 0x006b3640
0053BA03  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053BA06  33 C0                     XOR EAX,EAX
0053BA08  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053BA0E  5F                        POP EDI
0053BA0F  5E                        POP ESI
0053BA10  5B                        POP EBX
0053BA11  8B E5                     MOV ESP,EBP
0053BA13  5D                        POP EBP
0053BA14  C2 04 00                  RET 0x4
LAB_0053ba17:
0053BA17  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0053BA1C  84 C0                     TEST AL,AL
0053BA1E  0F 84 C5 01 00 00         JZ 0x0053bbe9
0053BA24  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0053BA27  8B 8E C9 01 00 00         MOV ECX,dword ptr [ESI + 0x1c9]
0053BA2D  81 E2 FF 00 00 00         AND EDX,0xff
0053BA33  03 CA                     ADD ECX,EDX
0053BA35  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0053BA38  C1 E0 03                  SHL EAX,0x3
0053BA3B  2B C1                     SUB EAX,ECX
0053BA3D  C1 E0 02                  SHL EAX,0x2
0053BA40  8A 88 F5 8A 80 00         MOV CL,byte ptr [EAX + 0x808af5]
0053BA46  84 C9                     TEST CL,CL
0053BA48  0F 84 9B 01 00 00         JZ 0x0053bbe9
0053BA4E  33 C9                     XOR ECX,ECX
0053BA50  33 D2                     XOR EDX,EDX
0053BA52  8A 88 F4 8A 80 00         MOV CL,byte ptr [EAX + 0x808af4]
0053BA58  8B C1                     MOV EAX,ECX
0053BA5A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0053BA5D  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0053BA64  83 C2 41                  ADD EDX,0x41
0053BA67  52                        PUSH EDX
0053BA68  68 90 3F 7C 00            PUSH 0x7c3f90
0053BA6D  68 3A F3 80 00            PUSH 0x80f33a
0053BA72  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0053BA78  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0053BA7B  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0053BA7E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0053BA81  83 C4 0C                  ADD ESP,0xc
0053BA84  50                        PUSH EAX
0053BA85  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053BA88  51                        PUSH ECX
0053BA89  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053BA8C  52                        PUSH EDX
0053BA8D  50                        PUSH EAX
0053BA8E  6A 00                     PUSH 0x0
0053BA90  51                        PUSH ECX
0053BA91  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
0053BA97  E8 F4 4F 1D 00            CALL 0x00710a90
0053BA9C  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
0053BAA2  33 D2                     XOR EDX,EDX
0053BAA4  80 FB 03                  CMP BL,0x3
0053BAA7  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
0053BAAD  0F 95 C2                  SETNZ DL
0053BAB0  4A                        DEC EDX
0053BAB1  83 E2 05                  AND EDX,0x5
0053BAB4  52                        PUSH EDX
0053BAB5  6A FF                     PUSH -0x1
0053BAB7  6A FF                     PUSH -0x1
0053BAB9  68 3A F3 80 00            PUSH 0x80f33a
0053BABE  E8 FD 5E 1D 00            CALL 0x007119c0
0053BAC3  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0053BAC6  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053BAC9  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0053BACC  50                        PUSH EAX
0053BACD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053BAD2  51                        PUSH ECX
0053BAD3  6A FF                     PUSH -0x1
0053BAD5  52                        PUSH EDX
0053BAD6  50                        PUSH EAX
0053BAD7  E8 64 7B 17 00            CALL 0x006b3640
0053BADC  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053BADF  33 C0                     XOR EAX,EAX
0053BAE1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053BAE7  5F                        POP EDI
0053BAE8  5E                        POP ESI
0053BAE9  5B                        POP EBX
0053BAEA  8B E5                     MOV ESP,EBP
0053BAEC  5D                        POP EBP
0053BAED  C2 04 00                  RET 0x4
LAB_0053baf0:
0053BAF0  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0053BAF3  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0053BAF6  8B 08                     MOV ECX,dword ptr [EAX]
0053BAF8  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
0053BAFB  2B CA                     SUB ECX,EDX
0053BAFD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053BB00  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
0053BB03  85 C9                     TEST ECX,ECX
0053BB05  75 05                     JNZ 0x0053bb0c
0053BB07  03 5E 48                  ADD EBX,dword ptr [ESI + 0x48]
0053BB0A  EB 03                     JMP 0x0053bb0f
LAB_0053bb0c:
0053BB0C  2B 5E 44                  SUB EBX,dword ptr [ESI + 0x44]
LAB_0053bb0f:
0053BB0F  66 83 7F 14 00            CMP word ptr [EDI + 0x14],0x0
0053BB14  74 33                     JZ 0x0053bb49
0053BB16  8A 4F 10                  MOV CL,byte ptr [EDI + 0x10]
0053BB19  8B 86 C9 01 00 00         MOV EAX,dword ptr [ESI + 0x1c9]
0053BB1F  80 E9 2F                  SUB CL,0x2f
0053BB22  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
0053BB25  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0053BB28  81 E2 FF 00 00 00         AND EDX,0xff
0053BB2E  03 C2                     ADD EAX,EDX
0053BB30  33 D2                     XOR EDX,EDX
0053BB32  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0053BB35  C1 E1 03                  SHL ECX,0x3
0053BB38  2B C8                     SUB ECX,EAX
0053BB3A  8A 04 8D F7 8A 80 00      MOV AL,byte ptr [ECX*0x4 + 0x808af7]
0053BB41  84 C0                     TEST AL,AL
0053BB43  0F 94 C2                  SETZ DL
0053BB46  52                        PUSH EDX
0053BB47  EB 02                     JMP 0x0053bb4b
LAB_0053bb49:
0053BB49  6A 01                     PUSH 0x1
LAB_0053bb4b:
0053BB4B  8B 86 D9 01 00 00         MOV EAX,dword ptr [ESI + 0x1d9]
0053BB51  50                        PUSH EAX
0053BB52  E8 49 F8 1C 00            CALL 0x0070b3a0
0053BB57  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0053BB5A  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0053BB5D  50                        PUSH EAX
0053BB5E  6A 01                     PUSH 0x1
0053BB60  53                        PUSH EBX
0053BB61  51                        PUSH ECX
0053BB62  52                        PUSH EDX
0053BB63  E8 C1 76 EC FF            CALL 0x00403229
0053BB68  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0053BB6B  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053BB6E  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0053BB71  83 C4 1C                  ADD ESP,0x1c
0053BB74  50                        PUSH EAX
0053BB75  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053BB7A  51                        PUSH ECX
0053BB7B  6A FF                     PUSH -0x1
0053BB7D  52                        PUSH EDX
0053BB7E  50                        PUSH EAX
0053BB7F  E8 BC 7A 17 00            CALL 0x006b3640
0053BB84  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053BB87  33 C0                     XOR EAX,EAX
0053BB89  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053BB8F  5F                        POP EDI
0053BB90  5E                        POP ESI
0053BB91  5B                        POP EBX
0053BB92  8B E5                     MOV ESP,EBP
0053BB94  5D                        POP EBP
0053BB95  C2 04 00                  RET 0x4
LAB_0053bb98:
0053BB98  2D FF BF 00 00            SUB EAX,0xbfff
0053BB9D  74 34                     JZ 0x0053bbd3
0053BB9F  48                        DEC EAX
0053BBA0  75 47                     JNZ 0x0053bbe9
0053BBA2  68 4E 27 00 00            PUSH 0x274e
0053BBA7  6A 00                     PUSH 0x0
0053BBA9  68 94 38 7C 00            PUSH 0x7c3894
0053BBAE  E8 C9 9B EC FF            CALL 0x0040577c
0053BBB3  83 C4 08                  ADD ESP,0x8
0053BBB6  8B CE                     MOV ECX,ESI
0053BBB8  50                        PUSH EAX
0053BBB9  57                        PUSH EDI
0053BBBA  E8 49 79 EC FF            CALL 0x00403508
0053BBBF  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053BBC2  33 C0                     XOR EAX,EAX
0053BBC4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053BBCA  5F                        POP EDI
0053BBCB  5E                        POP ESI
0053BBCC  5B                        POP EBX
0053BBCD  8B E5                     MOV ESP,EBP
0053BBCF  5D                        POP EBP
0053BBD0  C2 04 00                  RET 0x4
LAB_0053bbd3:
0053BBD3  6A 00                     PUSH 0x0
0053BBD5  8B CE                     MOV ECX,ESI
0053BBD7  E8 83 86 EC FF            CALL 0x0040425f
0053BBDC  68 AE 00 00 00            PUSH 0xae
0053BBE1  E8 49 A2 EC FF            CALL 0x00405e2f
0053BBE6  83 C4 04                  ADD ESP,0x4
switchD_0053b601::caseD_b507:
0053BBE9  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0053BBEC  33 C0                     XOR EAX,EAX
0053BBEE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053BBF4  5F                        POP EDI
0053BBF5  5E                        POP ESI
0053BBF6  5B                        POP EBX
0053BBF7  8B E5                     MOV ESP,EBP
0053BBF9  5D                        POP EBP
0053BBFA  C2 04 00                  RET 0x4
LAB_0053bbfd:
0053BBFD  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0053BC00  68 AC 76 7C 00            PUSH 0x7c76ac
0053BC05  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053BC0A  56                        PUSH ESI
0053BC0B  6A 00                     PUSH 0x0
0053BC0D  68 F4 01 00 00            PUSH 0x1f4
0053BC12  68 74 75 7C 00            PUSH 0x7c7574
0053BC17  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053BC1D  E8 AE 18 17 00            CALL 0x006ad4d0
0053BC22  83 C4 18                  ADD ESP,0x18
0053BC25  85 C0                     TEST EAX,EAX
0053BC27  74 01                     JZ 0x0053bc2a
0053BC29  CC                        INT3
LAB_0053bc2a:
0053BC2A  68 F4 01 00 00            PUSH 0x1f4
0053BC2F  68 74 75 7C 00            PUSH 0x7c7574
0053BC34  6A 00                     PUSH 0x0
0053BC36  56                        PUSH ESI
0053BC37  E8 04 A2 16 00            CALL 0x006a5e40
0053BC3C  5F                        POP EDI
0053BC3D  5E                        POP ESI
0053BC3E  B8 FF FF 00 00            MOV EAX,0xffff
0053BC43  5B                        POP EBX
0053BC44  8B E5                     MOV ESP,EBP
0053BC46  5D                        POP EBP
0053BC47  C2 04 00                  RET 0x4
