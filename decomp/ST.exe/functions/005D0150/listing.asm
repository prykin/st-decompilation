FUN_005d0150:
005D0150  55                        PUSH EBP
005D0151  8B EC                     MOV EBP,ESP
005D0153  83 EC 58                  SUB ESP,0x58
005D0156  8B 81 84 1F 00 00         MOV EAX,dword ptr [ECX + 0x1f84]
005D015C  53                        PUSH EBX
005D015D  56                        PUSH ESI
005D015E  57                        PUSH EDI
005D015F  85 C0                     TEST EAX,EAX
005D0161  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005D0164  0F 84 2D 04 00 00         JZ 0x005d0597
005D016A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D016F  8D 55 AC                  LEA EDX,[EBP + -0x54]
005D0172  8D 4D A8                  LEA ECX,[EBP + -0x58]
005D0175  6A 00                     PUSH 0x0
005D0177  52                        PUSH EDX
005D0178  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005D017B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D0181  E8 6A D6 15 00            CALL 0x0072d7f0
005D0186  8B F0                     MOV ESI,EAX
005D0188  83 C4 08                  ADD ESP,0x8
005D018B  85 F6                     TEST ESI,ESI
005D018D  0F 85 C5 03 00 00         JNZ 0x005d0558
005D0193  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005D0196  88 45 FE                  MOV byte ptr [EBP + -0x2],AL
005D0199  A0 AA 8A 80 00            MOV AL,[0x00808aaa]
005D019E  84 C0                     TEST AL,AL
005D01A0  75 53                     JNZ 0x005d01f5
005D01A2  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D01A8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D01AB  85 C0                     TEST EAX,EAX
005D01AD  76 46                     JBE 0x005d01f5
005D01AF  3B F0                     CMP ESI,EAX
005D01B1  73 0D                     JNC 0x005d01c0
LAB_005d01b3:
005D01B3  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D01B6  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005D01B9  0F AF C6                  IMUL EAX,ESI
005D01BC  03 C2                     ADD EAX,EDX
005D01BE  EB 02                     JMP 0x005d01c2
LAB_005d01c0:
005D01C0  33 C0                     XOR EAX,EAX
LAB_005d01c2:
005D01C2  85 C0                     TEST EAX,EAX
005D01C4  74 21                     JZ 0x005d01e7
005D01C6  80 78 04 03               CMP byte ptr [EAX + 0x4],0x3
005D01CA  75 1B                     JNZ 0x005d01e7
005D01CC  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005D01CF  85 C0                     TEST EAX,EAX
005D01D1  74 06                     JZ 0x005d01d9
005D01D3  50                        PUSH EAX
005D01D4  E8 37 DF 0D 00            CALL 0x006ae110
LAB_005d01d9:
005D01D9  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D01DF  56                        PUSH ESI
005D01E0  50                        PUSH EAX
005D01E1  E8 8A 0A 0E 00            CALL 0x006b0c70
005D01E6  4E                        DEC ESI
LAB_005d01e7:
005D01E7  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D01ED  46                        INC ESI
005D01EE  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D01F1  3B F0                     CMP ESI,EAX
005D01F3  72 BE                     JC 0x005d01b3
LAB_005d01f5:
005D01F5  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D01FB  32 C0                     XOR AL,AL
005D01FD  33 F6                     XOR ESI,ESI
005D01FF  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
005D0202  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
005D0205  85 FF                     TEST EDI,EDI
005D0207  76 6E                     JBE 0x005d0277
005D0209  3B F7                     CMP ESI,EDI
005D020B  73 0D                     JNC 0x005d021a
LAB_005d020d:
005D020D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D0210  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005D0213  0F AF C6                  IMUL EAX,ESI
005D0216  03 C2                     ADD EAX,EDX
005D0218  EB 02                     JMP 0x005d021c
LAB_005d021a:
005D021A  33 C0                     XOR EAX,EAX
LAB_005d021c:
005D021C  85 C0                     TEST EAX,EAX
005D021E  74 31                     JZ 0x005d0251
005D0220  80 38 00                  CMP byte ptr [EAX],0x0
005D0223  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
005D0226  74 19                     JZ 0x005d0241
005D0228  80 FA 02                  CMP DL,0x2
005D022B  75 20                     JNZ 0x005d024d
005D022D  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D0233  3C 0C                     CMP AL,0xc
005D0235  74 16                     JZ 0x005d024d
005D0237  3C 10                     CMP AL,0x10
005D0239  74 12                     JZ 0x005d024d
005D023B  C6 45 FE 00               MOV byte ptr [EBP + -0x2],0x0
005D023F  EB 10                     JMP 0x005d0251
LAB_005d0241:
005D0241  80 FA 01                  CMP DL,0x1
005D0244  75 0B                     JNZ 0x005d0251
005D0246  8A 55 FE                  MOV DL,byte ptr [EBP + -0x2]
005D0249  84 D2                     TEST DL,DL
005D024B  75 0E                     JNZ 0x005d025b
LAB_005d024d:
005D024D  C6 45 FE 01               MOV byte ptr [EBP + -0x2],0x1
LAB_005d0251:
005D0251  46                        INC ESI
005D0252  3B F7                     CMP ESI,EDI
005D0254  72 B7                     JC 0x005d020d
005D0256  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005D0259  EB 1C                     JMP 0x005d0277
LAB_005d025b:
005D025B  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005D025E  85 C0                     TEST EAX,EAX
005D0260  74 06                     JZ 0x005d0268
005D0262  50                        PUSH EAX
005D0263  E8 A8 DE 0D 00            CALL 0x006ae110
LAB_005d0268:
005D0268  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D026E  56                        PUSH ESI
005D026F  51                        PUSH ECX
005D0270  E8 FB 09 0E 00            CALL 0x006b0c70
005D0275  B0 01                     MOV AL,0x1
LAB_005d0277:
005D0277  84 C0                     TEST AL,AL
005D0279  0F 85 76 FF FF FF         JNZ 0x005d01f5
005D027F  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D0285  3C 0C                     CMP AL,0xc
005D0287  74 08                     JZ 0x005d0291
005D0289  3C 10                     CMP AL,0x10
005D028B  74 04                     JZ 0x005d0291
005D028D  B0 01                     MOV AL,0x1
005D028F  EB 02                     JMP 0x005d0293
LAB_005d0291:
005D0291  32 C0                     XOR AL,AL
LAB_005d0293:
005D0293  84 C0                     TEST AL,AL
005D0295  74 7C                     JZ 0x005d0313
LAB_005d0297:
005D0297  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D029A  BA 01 00 00 00            MOV EDX,0x1
005D029F  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005D02A3  8B B0 84 1F 00 00         MOV ESI,dword ptr [EAX + 0x1f84]
005D02A9  8B 5E 0C                  MOV EBX,dword ptr [ESI + 0xc]
005D02AC  3B DA                     CMP EBX,EDX
005D02AE  76 5C                     JBE 0x005d030c
005D02B0  3B D3                     CMP EDX,EBX
005D02B2  73 0D                     JNC 0x005d02c1
LAB_005d02b4:
005D02B4  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005D02B7  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005D02BA  0F AF CA                  IMUL ECX,EDX
005D02BD  03 C8                     ADD ECX,EAX
005D02BF  EB 02                     JMP 0x005d02c3
LAB_005d02c1:
005D02C1  33 C9                     XOR ECX,ECX
LAB_005d02c3:
005D02C3  8D 42 FF                  LEA EAX,[EDX + -0x1]
005D02C6  3B C3                     CMP EAX,EBX
005D02C8  73 0E                     JNC 0x005d02d8
005D02CA  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D02CD  8D 7A FF                  LEA EDI,[EDX + -0x1]
005D02D0  0F AF C7                  IMUL EAX,EDI
005D02D3  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
005D02D6  EB 02                     JMP 0x005d02da
LAB_005d02d8:
005D02D8  33 C0                     XOR EAX,EAX
LAB_005d02da:
005D02DA  85 C9                     TEST ECX,ECX
005D02DC  74 19                     JZ 0x005d02f7
005D02DE  85 C0                     TEST EAX,EAX
005D02E0  74 15                     JZ 0x005d02f7
005D02E2  80 39 00                  CMP byte ptr [ECX],0x0
005D02E5  74 10                     JZ 0x005d02f7
005D02E7  80 38 00                  CMP byte ptr [EAX],0x0
005D02EA  75 0B                     JNZ 0x005d02f7
005D02EC  80 78 04 01               CMP byte ptr [EAX + 0x4],0x1
005D02F0  74 05                     JZ 0x005d02f7
005D02F2  83 FB 18                  CMP EBX,0x18
005D02F5  72 07                     JC 0x005d02fe
LAB_005d02f7:
005D02F7  42                        INC EDX
005D02F8  3B D3                     CMP EDX,EBX
005D02FA  72 B8                     JC 0x005d02b4
005D02FC  EB 0E                     JMP 0x005d030c
LAB_005d02fe:
005D02FE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D0301  52                        PUSH EDX
005D0302  50                        PUSH EAX
005D0303  E8 C8 14 E3 FF            CALL 0x004017d0
005D0308  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_005d030c:
005D030C  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005D030F  84 C0                     TEST AL,AL
005D0311  75 84                     JNZ 0x005d0297
LAB_005d0313:
005D0313  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005D0316  8A 87 26 1E 00 00         MOV AL,byte ptr [EDI + 0x1e26]
005D031C  3C 0C                     CMP AL,0xc
005D031E  74 45                     JZ 0x005d0365
005D0320  3C 10                     CMP AL,0x10
005D0322  74 41                     JZ 0x005d0365
005D0324  8B 8F 84 1F 00 00         MOV ECX,dword ptr [EDI + 0x1f84]
005D032A  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005D032D  85 D2                     TEST EDX,EDX
005D032F  74 34                     JZ 0x005d0365
005D0331  8D 72 FF                  LEA ESI,[EDX + -0x1]
005D0334  3B F2                     CMP ESI,EDX
005D0336  73 0D                     JNC 0x005d0345
005D0338  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D033B  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
005D033E  0F AF C6                  IMUL EAX,ESI
005D0341  03 C3                     ADD EAX,EBX
005D0343  EB 02                     JMP 0x005d0347
LAB_005d0345:
005D0345  33 C0                     XOR EAX,EAX
LAB_005d0347:
005D0347  85 C0                     TEST EAX,EAX
005D0349  74 1A                     JZ 0x005d0365
005D034B  80 38 00                  CMP byte ptr [EAX],0x0
005D034E  75 15                     JNZ 0x005d0365
005D0350  80 78 04 01               CMP byte ptr [EAX + 0x4],0x1
005D0354  74 0F                     JZ 0x005d0365
005D0356  83 FA 18                  CMP EDX,0x18
005D0359  73 0A                     JNC 0x005d0365
005D035B  46                        INC ESI
005D035C  8B CF                     MOV ECX,EDI
005D035E  56                        PUSH ESI
005D035F  50                        PUSH EAX
005D0360  E8 6B 14 E3 FF            CALL 0x004017d0
LAB_005d0365:
005D0365  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D0368  BE 01 00 00 00            MOV ESI,0x1
005D036D  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005D0371  8B 91 84 1F 00 00         MOV EDX,dword ptr [ECX + 0x1f84]
005D0377  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
005D037A  3B DE                     CMP EBX,ESI
005D037C  76 71                     JBE 0x005d03ef
005D037E  3B F3                     CMP ESI,EBX
005D0380  73 0D                     JNC 0x005d038f
LAB_005d0382:
005D0382  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005D0385  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
005D0388  0F AF CE                  IMUL ECX,ESI
005D038B  03 C8                     ADD ECX,EAX
005D038D  EB 02                     JMP 0x005d0391
LAB_005d038f:
005D038F  33 C9                     XOR ECX,ECX
LAB_005d0391:
005D0391  8D 46 FF                  LEA EAX,[ESI + -0x1]
005D0394  3B C3                     CMP EAX,EBX
005D0396  73 0E                     JNC 0x005d03a6
005D0398  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005D039B  8D 7E FF                  LEA EDI,[ESI + -0x1]
005D039E  0F AF C7                  IMUL EAX,EDI
005D03A1  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005D03A4  EB 02                     JMP 0x005d03a8
LAB_005d03a6:
005D03A6  33 C0                     XOR EAX,EAX
LAB_005d03a8:
005D03A8  85 C9                     TEST ECX,ECX
005D03AA  74 1A                     JZ 0x005d03c6
005D03AC  85 C0                     TEST EAX,EAX
005D03AE  74 16                     JZ 0x005d03c6
005D03B0  80 39 00                  CMP byte ptr [ECX],0x0
005D03B3  75 11                     JNZ 0x005d03c6
005D03B5  80 79 04 01               CMP byte ptr [ECX + 0x4],0x1
005D03B9  74 0B                     JZ 0x005d03c6
005D03BB  80 38 00                  CMP byte ptr [EAX],0x0
005D03BE  75 06                     JNZ 0x005d03c6
005D03C0  80 78 04 01               CMP byte ptr [EAX + 0x4],0x1
005D03C4  74 07                     JZ 0x005d03cd
LAB_005d03c6:
005D03C6  46                        INC ESI
005D03C7  3B F3                     CMP ESI,EBX
005D03C9  72 B7                     JC 0x005d0382
005D03CB  EB 22                     JMP 0x005d03ef
LAB_005d03cd:
005D03CD  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005D03D0  85 C0                     TEST EAX,EAX
005D03D2  74 06                     JZ 0x005d03da
005D03D4  50                        PUSH EAX
005D03D5  E8 36 DD 0D 00            CALL 0x006ae110
LAB_005d03da:
005D03DA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D03DD  4E                        DEC ESI
005D03DE  56                        PUSH ESI
005D03DF  8B 91 84 1F 00 00         MOV EDX,dword ptr [ECX + 0x1f84]
005D03E5  52                        PUSH EDX
005D03E6  E8 85 08 0E 00            CALL 0x006b0c70
005D03EB  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_005d03ef:
005D03EF  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005D03F2  84 C0                     TEST AL,AL
005D03F4  0F 85 6B FF FF FF         JNZ 0x005d0365
005D03FA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D03FD  33 C0                     XOR EAX,EAX
005D03FF  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005D0403  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005D0406  8B 91 84 1F 00 00         MOV EDX,dword ptr [ECX + 0x1f84]
005D040C  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005D040F  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
005D0412  85 FF                     TEST EDI,EDI
005D0414  0F 86 2F 01 00 00         JBE 0x005d0549
005D041A  EB 03                     JMP 0x005d041f
LAB_005d041c:
005D041C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_005d041f:
005D041F  3B C7                     CMP EAX,EDI
005D0421  73 0B                     JNC 0x005d042e
005D0423  8B 5A 08                  MOV EBX,dword ptr [EDX + 0x8]
005D0426  0F AF D8                  IMUL EBX,EAX
005D0429  03 5A 1C                  ADD EBX,dword ptr [EDX + 0x1c]
005D042C  EB 02                     JMP 0x005d0430
LAB_005d042e:
005D042E  33 DB                     XOR EBX,EBX
LAB_005d0430:
005D0430  85 DB                     TEST EBX,EBX
005D0432  0F 84 F3 00 00 00         JZ 0x005d052b
005D0438  80 3B 00                  CMP byte ptr [EBX],0x0
005D043B  0F 84 EA 00 00 00         JZ 0x005d052b
005D0441  80 7B 04 01               CMP byte ptr [EBX + 0x4],0x1
005D0445  0F 85 E0 00 00 00         JNZ 0x005d052b
005D044B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005D044E  C6 45 FE 00               MOV byte ptr [EBP + -0x2],0x0
005D0452  40                        INC EAX
005D0453  3B C7                     CMP EAX,EDI
005D0455  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005D0458  73 34                     JNC 0x005d048e
LAB_005d045a:
005D045A  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
005D045D  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
005D0460  0F AF F0                  IMUL ESI,EAX
005D0463  03 F1                     ADD ESI,ECX
005D0465  85 F6                     TEST ESI,ESI
005D0467  74 1D                     JZ 0x005d0486
005D0469  80 3E 00                  CMP byte ptr [ESI],0x0
005D046C  75 1D                     JNZ 0x005d048b
005D046E  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
005D0471  80 F9 03                  CMP CL,0x3
005D0474  75 0B                     JNZ 0x005d0481
005D0476  8A 55 FE                  MOV DL,byte ptr [EBP + -0x2]
005D0479  FE C2                     INC DL
005D047B  88 55 FE                  MOV byte ptr [EBP + -0x2],DL
005D047E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_005d0481:
005D0481  80 F9 02                  CMP CL,0x2
005D0484  74 3F                     JZ 0x005d04c5
LAB_005d0486:
005D0486  40                        INC EAX
005D0487  3B C7                     CMP EAX,EDI
005D0489  72 CF                     JC 0x005d045a
LAB_005d048b:
005D048B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_005d048e:
005D048E  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005D0491  84 C0                     TEST AL,AL
005D0493  0F 85 92 00 00 00         JNZ 0x005d052b
005D0499  8A 45 FE                  MOV AL,byte ptr [EBP + -0x2]
005D049C  84 C0                     TEST AL,AL
005D049E  0F 84 87 00 00 00         JZ 0x005d052b
LAB_005d04a4:
005D04A4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D04A7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005D04AA  8B 89 84 1F 00 00         MOV ECX,dword ptr [ECX + 0x1f84]
005D04B0  8D 72 01                  LEA ESI,[EDX + 0x1]
005D04B3  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
005D04B6  73 46                     JNC 0x005d04fe
005D04B8  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D04BB  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005D04BE  0F AF C6                  IMUL EAX,ESI
005D04C1  03 C2                     ADD EAX,EDX
005D04C3  EB 3B                     JMP 0x005d0500
LAB_005d04c5:
005D04C5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005D04C8  8B 43 50                  MOV EAX,dword ptr [EBX + 0x50]
005D04CB  85 C0                     TEST EAX,EAX
005D04CD  74 06                     JZ 0x005d04d5
005D04CF  50                        PUSH EAX
005D04D0  E8 3B DC 0D 00            CALL 0x006ae110
LAB_005d04d5:
005D04D5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005D04D8  B9 18 00 00 00            MOV ECX,0x18
005D04DD  8B FB                     MOV EDI,EBX
005D04DF  F3 A5                     MOVSD.REP ES:EDI,ESI
005D04E1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005D04E4  C6 43 01 00               MOV byte ptr [EBX + 0x1],0x0
005D04E8  C6 03 01                  MOV byte ptr [EBX],0x1
005D04EB  8B 82 84 1F 00 00         MOV EAX,dword ptr [EDX + 0x1f84]
005D04F1  51                        PUSH ECX
005D04F2  50                        PUSH EAX
005D04F3  E8 78 07 0E 00            CALL 0x006b0c70
005D04F8  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
005D04FC  EB 90                     JMP 0x005d048e
LAB_005d04fe:
005D04FE  33 C0                     XOR EAX,EAX
LAB_005d0500:
005D0500  85 C0                     TEST EAX,EAX
005D0502  74 27                     JZ 0x005d052b
005D0504  80 38 00                  CMP byte ptr [EAX],0x0
005D0507  75 22                     JNZ 0x005d052b
005D0509  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005D050C  85 C0                     TEST EAX,EAX
005D050E  74 06                     JZ 0x005d0516
005D0510  50                        PUSH EAX
005D0511  E8 FA DB 0D 00            CALL 0x006ae110
LAB_005d0516:
005D0516  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D0519  56                        PUSH ESI
005D051A  8B 88 84 1F 00 00         MOV ECX,dword ptr [EAX + 0x1f84]
005D0520  51                        PUSH ECX
005D0521  E8 4A 07 0E 00            CALL 0x006b0c70
005D0526  E9 79 FF FF FF            JMP 0x005d04a4
LAB_005d052b:
005D052B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005D052E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005D0531  40                        INC EAX
005D0532  8B 92 84 1F 00 00         MOV EDX,dword ptr [EDX + 0x1f84]
005D0538  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005D053B  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005D053E  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
005D0541  3B C7                     CMP EAX,EDI
005D0543  0F 82 D3 FE FF FF         JC 0x005d041c
LAB_005d0549:
005D0549  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
005D054C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D0551  5F                        POP EDI
005D0552  5E                        POP ESI
005D0553  5B                        POP EBX
005D0554  8B E5                     MOV ESP,EBP
005D0556  5D                        POP EBP
005D0557  C3                        RET
LAB_005d0558:
005D0558  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
005D055B  68 F4 D3 7C 00            PUSH 0x7cd3f4
005D0560  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D0565  56                        PUSH ESI
005D0566  6A 00                     PUSH 0x0
005D0568  68 63 05 00 00            PUSH 0x563
005D056D  68 58 D2 7C 00            PUSH 0x7cd258
005D0572  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D0578  E8 53 CF 0D 00            CALL 0x006ad4d0
005D057D  83 C4 18                  ADD ESP,0x18
005D0580  85 C0                     TEST EAX,EAX
005D0582  74 01                     JZ 0x005d0585
005D0584  CC                        INT3
LAB_005d0585:
005D0585  68 63 05 00 00            PUSH 0x563
005D058A  68 58 D2 7C 00            PUSH 0x7cd258
005D058F  6A 00                     PUSH 0x0
005D0591  56                        PUSH ESI
005D0592  E8 A9 58 0D 00            CALL 0x006a5e40
LAB_005d0597:
005D0597  5F                        POP EDI
005D0598  5E                        POP ESI
005D0599  5B                        POP EBX
005D059A  8B E5                     MOV ESP,EBP
005D059C  5D                        POP EBP
005D059D  C3                        RET
