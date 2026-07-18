FUN_006ed100:
006ED100  55                        PUSH EBP
006ED101  8B EC                     MOV EBP,ESP
006ED103  81 EC 1C 01 00 00         SUB ESP,0x11c
006ED109  53                        PUSH EBX
006ED10A  56                        PUSH ESI
006ED10B  8B F1                     MOV ESI,ECX
006ED10D  57                        PUSH EDI
006ED10E  89 B5 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ESI
006ED114  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
006ED11B  8B 86 A0 02 00 00         MOV EAX,dword ptr [ESI + 0x2a0]
006ED121  8B 8E AC 02 00 00         MOV ECX,dword ptr [ESI + 0x2ac]
006ED127  8B 9E A8 02 00 00         MOV EBX,dword ptr [ESI + 0x2a8]
006ED12D  2B C8                     SUB ECX,EAX
006ED12F  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
006ED132  89 8E AC 02 00 00         MOV dword ptr [ESI + 0x2ac],ECX
006ED138  79 23                     JNS 0x006ed15d
LAB_006ed13a:
006ED13A  8B 8E A8 02 00 00         MOV ECX,dword ptr [ESI + 0x2a8]
006ED140  41                        INC ECX
006ED141  89 8E A8 02 00 00         MOV dword ptr [ESI + 0x2a8],ECX
006ED147  8B 8E A4 02 00 00         MOV ECX,dword ptr [ESI + 0x2a4]
006ED14D  8B 86 AC 02 00 00         MOV EAX,dword ptr [ESI + 0x2ac]
006ED153  03 C1                     ADD EAX,ECX
006ED155  89 86 AC 02 00 00         MOV dword ptr [ESI + 0x2ac],EAX
006ED15B  78 DD                     JS 0x006ed13a
LAB_006ed15d:
006ED15D  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006ED160  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006ED163  25 00 11 00 00            AND EAX,0x1100
006ED168  3D 00 01 00 00            CMP EAX,0x100
006ED16D  0F 84 A5 1F 00 00         JZ 0x006ef118
006ED173  8B 86 DC 02 00 00         MOV EAX,dword ptr [ESI + 0x2dc]
006ED179  85 C0                     TEST EAX,EAX
006ED17B  74 0E                     JZ 0x006ed18b
006ED17D  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006ED183  85 C0                     TEST EAX,EAX
006ED185  0F 84 8D 1F 00 00         JZ 0x006ef118
LAB_006ed18b:
006ED18B  8B 86 34 01 00 00         MOV EAX,dword ptr [ESI + 0x134]
006ED191  85 C0                     TEST EAX,EAX
006ED193  74 07                     JZ 0x006ed19c
006ED195  8B CE                     MOV ECX,ESI
006ED197  E8 B4 3E FF FF            CALL 0x006e1050
LAB_006ed19c:
006ED19C  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006ED1A2  85 C0                     TEST EAX,EAX
006ED1A4  74 6F                     JZ 0x006ed215
006ED1A6  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
006ED1AC  85 C0                     TEST EAX,EAX
006ED1AE  74 0E                     JZ 0x006ed1be
006ED1B0  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006ED1B3  85 C0                     TEST EAX,EAX
006ED1B5  74 07                     JZ 0x006ed1be
006ED1B7  8B CE                     MOV ECX,ESI
006ED1B9  E8 82 EC FF FF            CALL 0x006ebe40
LAB_006ed1be:
006ED1BE  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006ED1C4  85 C0                     TEST EAX,EAX
006ED1C6  74 4D                     JZ 0x006ed215
006ED1C8  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006ED1CB  85 C0                     TEST EAX,EAX
006ED1CD  74 46                     JZ 0x006ed215
006ED1CF  8B 86 66 04 00 00         MOV EAX,dword ptr [ESI + 0x466]
006ED1D5  85 C0                     TEST EAX,EAX
006ED1D7  74 57                     JZ 0x006ed230
006ED1D9  8B 86 C2 04 00 00         MOV EAX,dword ptr [ESI + 0x4c2]
006ED1DF  8B BE 6E 04 00 00         MOV EDI,dword ptr [ESI + 0x46e]
006ED1E5  0F AF 86 BE 04 00 00      IMUL EAX,dword ptr [ESI + 0x4be]
006ED1EC  83 C0 07                  ADD EAX,0x7
006ED1EF  99                        CDQ
006ED1F0  83 E2 07                  AND EDX,0x7
006ED1F3  03 C2                     ADD EAX,EDX
006ED1F5  8B C8                     MOV ECX,EAX
006ED1F7  83 C8 FF                  OR EAX,0xffffffff
006ED1FA  C1 F9 03                  SAR ECX,0x3
006ED1FD  8B D1                     MOV EDX,ECX
006ED1FF  C1 E9 02                  SHR ECX,0x2
006ED202  F3 AB                     STOSD.REP ES:EDI
006ED204  8B CA                     MOV ECX,EDX
006ED206  83 E1 03                  AND ECX,0x3
006ED209  F3 AA                     STOSB.REP ES:EDI
006ED20B  C7 86 6A 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x46a],0x1
LAB_006ed215:
006ED215  8B 86 66 04 00 00         MOV EAX,dword ptr [ESI + 0x466]
006ED21B  85 C0                     TEST EAX,EAX
006ED21D  74 11                     JZ 0x006ed230
006ED21F  8B 86 6A 04 00 00         MOV EAX,dword ptr [ESI + 0x46a]
006ED225  85 C0                     TEST EAX,EAX
006ED227  74 07                     JZ 0x006ed230
006ED229  8B CE                     MOV ECX,ESI
006ED22B  E8 40 A7 02 00            CALL 0x00717970
LAB_006ed230:
006ED230  A1 B8 6D 85 00            MOV EAX,[0x00856db8]
006ED235  85 C0                     TEST EAX,EAX
006ED237  74 09                     JZ 0x006ed242
006ED239  F6 C3 01                  TEST BL,0x1
006ED23C  0F 85 D6 1E 00 00         JNZ 0x006ef118
LAB_006ed242:
006ED242  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006ED245  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006ED248  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006ED24B  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
006ED251  2B D0                     SUB EDX,EAX
006ED253  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006ED256  2B C1                     SUB EAX,ECX
006ED258  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
006ED25E  8B 8E F0 02 00 00         MOV ECX,dword ptr [ESI + 0x2f0]
006ED264  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
006ED26A  B8 64 00 00 00            MOV EAX,0x64
006ED26F  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
006ED275  3B C8                     CMP ECX,EAX
006ED277  75 12                     JNZ 0x006ed28b
006ED279  39 86 F4 02 00 00         CMP dword ptr [ESI + 0x2f4],EAX
006ED27F  75 0A                     JNZ 0x006ed28b
006ED281  33 C0                     XOR EAX,EAX
006ED283  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006ED289  EB 0C                     JMP 0x006ed297
LAB_006ed28b:
006ED28B  C7 85 74 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff74],0x1
006ED295  33 C0                     XOR EAX,EAX
LAB_006ed297:
006ED297  8B BE 1C 03 00 00         MOV EDI,dword ptr [ESI + 0x31c]
006ED29D  89 86 D4 02 00 00         MOV dword ptr [ESI + 0x2d4],EAX
006ED2A3  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
006ED2A9  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006ED2AF  85 C0                     TEST EAX,EAX
006ED2B1  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006ED2B4  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006ED2BB  0F 8E E7 0E 00 00         JLE 0x006ee1a8
LAB_006ed2c1:
006ED2C1  8B 07                     MOV EAX,dword ptr [EDI]
006ED2C3  25 00 82 00 00            AND EAX,0x8200
006ED2C8  3D 00 82 00 00            CMP EAX,0x8200
006ED2CD  75 65                     JNZ 0x006ed334
006ED2CF  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006ED2D2  F6 C6 01                  TEST DH,0x1
006ED2D5  74 5D                     JZ 0x006ed334
006ED2D7  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED2DD  85 C0                     TEST EAX,EAX
006ED2DF  74 53                     JZ 0x006ed334
006ED2E1  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
006ED2E4  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006ED2E7  C1 E0 03                  SHL EAX,0x3
006ED2EA  2B C1                     SUB EAX,ECX
006ED2EC  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006ED2EF  8B 86 1C 03 00 00         MOV EAX,dword ptr [ESI + 0x31c]
006ED2F5  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006ED2F8  8B 08                     MOV ECX,dword ptr [EAX]
006ED2FA  F6 C5 80                  TEST CH,0x80
006ED2FD  74 2F                     JZ 0x006ed32e
006ED2FF  8B 48 74                  MOV ECX,dword ptr [EAX + 0x74]
006ED302  C7 85 58 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff58],0x1
006ED30C  89 4F 74                  MOV dword ptr [EDI + 0x74],ECX
006ED30F  8B 50 78                  MOV EDX,dword ptr [EAX + 0x78]
006ED312  89 57 78                  MOV dword ptr [EDI + 0x78],EDX
006ED315  8B 48 7C                  MOV ECX,dword ptr [EAX + 0x7c]
006ED318  89 4F 7C                  MOV dword ptr [EDI + 0x7c],ECX
006ED31B  8B 10                     MOV EDX,dword ptr [EAX]
006ED31D  8B 07                     MOV EAX,dword ptr [EDI]
006ED31F  81 E2 00 00 01 00         AND EDX,0x10000
006ED325  83 CA 0C                  OR EDX,0xc
006ED328  0B C2                     OR EAX,EDX
006ED32A  89 07                     MOV dword ptr [EDI],EAX
006ED32C  EB 06                     JMP 0x006ed334
LAB_006ed32e:
006ED32E  80 E6 FE                  AND DH,0xfe
006ED331  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
LAB_006ed334:
006ED334  8B 07                     MOV EAX,dword ptr [EDI]
006ED336  A9 00 00 01 00            TEST EAX,0x10000
006ED33B  0F 84 77 0D 00 00         JZ 0x006ee0b8
006ED341  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006ED344  85 C9                     TEST ECX,ECX
006ED346  0F 85 6C 0D 00 00         JNZ 0x006ee0b8
006ED34C  F6 47 04 70               TEST byte ptr [EDI + 0x4],0x70
006ED350  74 0A                     JZ 0x006ed35c
006ED352  C7 86 D4 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2d4],0x1
LAB_006ed35c:
006ED35C  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006ED362  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006ED365  03 C3                     ADD EAX,EBX
006ED367  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
006ED36A  8B 0F                     MOV ECX,dword ptr [EDI]
006ED36C  81 E1 01 01 00 00         AND ECX,0x101
006ED372  81 F9 01 01 00 00         CMP ECX,0x101
006ED378  0F 85 EA 00 00 00         JNZ 0x006ed468
006ED37E  8B 86 D0 02 00 00         MOV EAX,dword ptr [ESI + 0x2d0]
006ED384  85 C0                     TEST EAX,EAX
006ED386  0F 84 DC 00 00 00         JZ 0x006ed468
006ED38C  8B 87 94 00 00 00         MOV EAX,dword ptr [EDI + 0x94]
006ED392  33 DB                     XOR EBX,EBX
006ED394  85 C0                     TEST EAX,EAX
006ED396  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
006ED399  0F 8E C9 00 00 00         JLE 0x006ed468
LAB_006ed39f:
006ED39F  8B 97 A4 00 00 00         MOV EDX,dword ptr [EDI + 0xa4]
006ED3A5  8A 4C 9A 02               MOV CL,byte ptr [EDX + EBX*0x4 + 0x2]
006ED3A9  8D 04 9A                  LEA EAX,[EDX + EBX*0x4]
006ED3AC  F6 C1 20                  TEST CL,0x20
006ED3AF  0F 84 A1 00 00 00         JZ 0x006ed456
006ED3B5  8B 96 A8 02 00 00         MOV EDX,dword ptr [ESI + 0x2a8]
006ED3BB  8B CA                     MOV ECX,EDX
006ED3BD  2B 4D A0                  SUB ECX,dword ptr [EBP + -0x60]
006ED3C0  85 C9                     TEST ECX,ECX
006ED3C2  0F 8E 8E 00 00 00         JLE 0x006ed456
006ED3C8  0F BF 08                  MOVSX ECX,word ptr [EAX]
006ED3CB  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006ED3CE  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
006ED3D5  3B C2                     CMP EAX,EDX
006ED3D7  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006ED3DA  7D 2E                     JGE 0x006ed40a
006ED3DC  8B 97 A8 00 00 00         MOV EDX,dword ptr [EDI + 0xa8]
006ED3E2  0F BF 5C DA 04            MOVSX EBX,word ptr [EDX + EBX*0x8 + 0x4]
LAB_006ed3e7:
006ED3E7  99                        CDQ
006ED3E8  F7 FB                     IDIV EBX
006ED3EA  85 D2                     TEST EDX,EDX
006ED3EC  75 08                     JNZ 0x006ed3f6
006ED3EE  C7 45 D0 01 00 00 00      MOV dword ptr [EBP + -0x30],0x1
006ED3F5  41                        INC ECX
LAB_006ed3f6:
006ED3F6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006ED3F9  8B 96 A8 02 00 00         MOV EDX,dword ptr [ESI + 0x2a8]
006ED3FF  40                        INC EAX
006ED400  3B C2                     CMP EAX,EDX
006ED402  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006ED405  7C E0                     JL 0x006ed3e7
006ED407  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
LAB_006ed40a:
006ED40A  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006ED40D  85 C0                     TEST EAX,EAX
006ED40F  74 45                     JZ 0x006ed456
006ED411  8B 97 A0 00 00 00         MOV EDX,dword ptr [EDI + 0xa0]
006ED417  85 D2                     TEST EDX,EDX
006ED419  74 3B                     JZ 0x006ed456
006ED41B  8B 87 A8 00 00 00         MOV EAX,dword ptr [EDI + 0xa8]
006ED421  8B 14 DA                  MOV EDX,dword ptr [EDX + EBX*0x8]
006ED424  8D 04 D8                  LEA EAX,[EAX + EBX*0x8]
006ED427  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006ED42A  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
006ED42E  3B C2                     CMP EAX,EDX
006ED430  7E 02                     JLE 0x006ed434
006ED432  8B C2                     MOV EAX,EDX
LAB_006ed434:
006ED434  3B C8                     CMP ECX,EAX
006ED436  7C 16                     JL 0x006ed44e
006ED438  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006ED43B  0F BF 12                  MOVSX EDX,word ptr [EDX]
006ED43E  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006ED441  2B D1                     SUB EDX,ECX
006ED443  03 D0                     ADD EDX,EAX
006ED445  8B CA                     MOV ECX,EDX
006ED447  3B C8                     CMP ECX,EAX
006ED449  7C 03                     JL 0x006ed44e
006ED44B  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
LAB_006ed44e:
006ED44E  51                        PUSH ECX
006ED44F  53                        PUSH EBX
006ED450  57                        PUSH EDI
006ED451  E8 BA C5 FF FF            CALL 0x006e9a10
LAB_006ed456:
006ED456  8B 87 94 00 00 00         MOV EAX,dword ptr [EDI + 0x94]
006ED45C  43                        INC EBX
006ED45D  3B D8                     CMP EBX,EAX
006ED45F  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
006ED462  0F 8C 37 FF FF FF         JL 0x006ed39f
LAB_006ed468:
006ED468  8B 07                     MOV EAX,dword ptr [EDI]
006ED46A  A8 08                     TEST AL,0x8
006ED46C  75 21                     JNZ 0x006ed48f
006ED46E  8B 8E D8 02 00 00         MOV ECX,dword ptr [ESI + 0x2d8]
006ED474  85 C9                     TEST ECX,ECX
006ED476  75 17                     JNZ 0x006ed48f
006ED478  8B C8                     MOV ECX,EAX
006ED47A  83 E1 05                  AND ECX,0x5
006ED47D  80 F9 05                  CMP CL,0x5
006ED480  0F 85 3C 09 00 00         JNZ 0x006eddc2
006ED486  0C 82                     OR AL,0x82
006ED488  89 07                     MOV dword ptr [EDI],EAX
006ED48A  E9 33 09 00 00            JMP 0x006eddc2
LAB_006ed48f:
006ED48F  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006ED492  F6 C4 40                  TEST AH,0x40
006ED495  0F 84 01 02 00 00         JZ 0x006ed69c
006ED49B  8B 97 A0 00 00 00         MOV EDX,dword ptr [EDI + 0xa0]
006ED4A1  6A 01                     PUSH 0x1
006ED4A3  6A 00                     PUSH 0x0
006ED4A5  6A 00                     PUSH 0x0
006ED4A7  8B 02                     MOV EAX,dword ptr [EDX]
006ED4A9  6A 00                     PUSH 0x0
006ED4AB  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006ED4AE  8B 8F A0 00 00 00         MOV ECX,dword ptr [EDI + 0xa0]
006ED4B4  6A 00                     PUSH 0x0
006ED4B6  6A 00                     PUSH 0x0
006ED4B8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006ED4BB  6A 00                     PUSH 0x0
006ED4BD  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
006ED4C0  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED4C6  8D 55 94                  LEA EDX,[EBP + -0x6c]
006ED4C9  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006ED4CC  52                        PUSH EDX
006ED4CD  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
006ED4D0  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED4D6  83 C0 29                  ADD EAX,0x29
006ED4D9  8B CE                     MOV ECX,ESI
006ED4DB  50                        PUSH EAX
006ED4DC  E8 EF 50 FF FF            CALL 0x006e25d0
006ED4E1  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED4E7  6A 01                     PUSH 0x1
006ED4E9  6A 00                     PUSH 0x0
006ED4EB  6A 00                     PUSH 0x0
006ED4ED  8B 48 29                  MOV ECX,dword ptr [EAX + 0x29]
006ED4F0  6A 00                     PUSH 0x0
006ED4F2  81 C1 00 80 00 00         ADD ECX,0x8000
006ED4F8  6A 00                     PUSH 0x0
006ED4FA  81 E1 00 00 FF FF         AND ECX,0xffff0000
006ED500  6A 00                     PUSH 0x0
006ED502  89 48 29                  MOV dword ptr [EAX + 0x29],ECX
006ED505  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED50B  6A 00                     PUSH 0x0
006ED50D  8B 50 2D                  MOV EDX,dword ptr [EAX + 0x2d]
006ED510  8B 58 29                  MOV EBX,dword ptr [EAX + 0x29]
006ED513  81 C2 00 80 00 00         ADD EDX,0x8000
006ED519  81 E2 00 00 FF FF         AND EDX,0xffff0000
006ED51F  89 50 2D                  MOV dword ptr [EAX + 0x2d],EDX
006ED522  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED528  C1 FB 10                  SAR EBX,0x10
006ED52B  8B 48 2D                  MOV ECX,dword ptr [EAX + 0x2d]
006ED52E  8B 50 31                  MOV EDX,dword ptr [EAX + 0x31]
006ED531  C1 F9 10                  SAR ECX,0x10
006ED534  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006ED537  8B 8E E4 02 00 00         MOV ECX,dword ptr [ESI + 0x2e4]
006ED53D  2B D1                     SUB EDX,ECX
006ED53F  89 50 31                  MOV dword ptr [EAX + 0x31],EDX
006ED542  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED548  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006ED54B  8B 48 31                  MOV ECX,dword ptr [EAX + 0x31]
006ED54E  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
006ED551  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED557  C1 F9 10                  SAR ECX,0x10
006ED55A  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006ED55D  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006ED560  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
006ED563  8B 97 A0 00 00 00         MOV EDX,dword ptr [EDI + 0xa0]
006ED569  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006ED56C  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
006ED56F  51                        PUSH ECX
006ED570  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006ED573  8B 97 A0 00 00 00         MOV EDX,dword ptr [EDI + 0xa0]
006ED579  83 C2 39                  ADD EDX,0x39
006ED57C  8B CE                     MOV ECX,ESI
006ED57E  52                        PUSH EDX
006ED57F  E8 4C 50 FF FF            CALL 0x006e25d0
006ED584  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED58A  8B 48 39                  MOV ECX,dword ptr [EAX + 0x39]
006ED58D  81 C1 00 80 00 00         ADD ECX,0x8000
006ED593  81 E1 00 00 FF FF         AND ECX,0xffff0000
006ED599  89 48 39                  MOV dword ptr [EAX + 0x39],ECX
006ED59C  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED5A2  8B 50 3D                  MOV EDX,dword ptr [EAX + 0x3d]
006ED5A5  8B 48 39                  MOV ECX,dword ptr [EAX + 0x39]
006ED5A8  81 C2 00 80 00 00         ADD EDX,0x8000
006ED5AE  C1 F9 10                  SAR ECX,0x10
006ED5B1  81 E2 00 00 FF FF         AND EDX,0xffff0000
006ED5B7  89 50 3D                  MOV dword ptr [EAX + 0x3d],EDX
006ED5BA  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED5C0  8B 50 3D                  MOV EDX,dword ptr [EAX + 0x3d]
006ED5C3  C1 FA 10                  SAR EDX,0x10
006ED5C6  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006ED5C9  8B 96 E4 02 00 00         MOV EDX,dword ptr [ESI + 0x2e4]
006ED5CF  29 50 41                  SUB dword ptr [EAX + 0x41],EDX
006ED5D2  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED5D8  8B 50 41                  MOV EDX,dword ptr [EAX + 0x41]
006ED5DB  C1 FA 10                  SAR EDX,0x10
006ED5DE  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
006ED5E4  8B 50 1D                  MOV EDX,dword ptr [EAX + 0x1d]
006ED5E7  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
006ED5EA  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006ED5ED  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006ED5F0  48                        DEC EAX
006ED5F1  99                        CDQ
006ED5F2  2B C2                     SUB EAX,EDX
006ED5F4  D1 F8                     SAR EAX,0x1
006ED5F6  3B D9                     CMP EBX,ECX
006ED5F8  7D 13                     JGE 0x006ed60d
006ED5FA  8B D3                     MOV EDX,EBX
006ED5FC  2B CB                     SUB ECX,EBX
006ED5FE  2B D0                     SUB EDX,EAX
006ED600  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006ED603  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006ED606  03 CA                     ADD ECX,EDX
006ED608  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006ED60B  EB 11                     JMP 0x006ed61e
LAB_006ed60d:
006ED60D  8B D1                     MOV EDX,ECX
006ED60F  2B D9                     SUB EBX,ECX
006ED611  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006ED614  2B D0                     SUB EDX,EAX
006ED616  03 D9                     ADD EBX,ECX
006ED618  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006ED61B  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
LAB_006ed61e:
006ED61E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006ED621  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006ED624  3B CA                     CMP ECX,EDX
006ED626  7D 13                     JGE 0x006ed63b
006ED628  8B D9                     MOV EBX,ECX
006ED62A  2B D1                     SUB EDX,ECX
006ED62C  2B D8                     SUB EBX,EAX
006ED62E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006ED631  03 D0                     ADD EDX,EAX
006ED633  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
006ED636  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006ED639  EB 11                     JMP 0x006ed64c
LAB_006ed63b:
006ED63B  8B DA                     MOV EBX,EDX
006ED63D  2B CA                     SUB ECX,EDX
006ED63F  2B D8                     SUB EBX,EAX
006ED641  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006ED644  03 C8                     ADD ECX,EAX
006ED646  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
006ED649  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_006ed64c:
006ED64C  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006ED64F  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
006ED655  03 C1                     ADD EAX,ECX
006ED657  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006ED65A  99                        CDQ
006ED65B  2B C2                     SUB EAX,EDX
006ED65D  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
006ED663  D1 F8                     SAR EAX,0x1
006ED665  52                        PUSH EDX
006ED666  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006ED669  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
006ED66C  E8 EF 2D FC FF            CALL 0x006b0460
006ED671  85 C0                     TEST EAX,EAX
006ED673  0F 84 49 07 00 00         JZ 0x006eddc2
006ED679  8B 07                     MOV EAX,dword ptr [EDI]
006ED67B  0C 82                     OR AL,0x82
006ED67D  89 07                     MOV dword ptr [EDI],EAX
006ED67F  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006ED682  89 47 64                  MOV dword ptr [EDI + 0x64],EAX
006ED685  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
006ED688  89 4F 68                  MOV dword ptr [EDI + 0x68],ECX
006ED68B  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006ED68E  89 57 6C                  MOV dword ptr [EDI + 0x6c],EDX
006ED691  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006ED694  89 47 70                  MOV dword ptr [EDI + 0x70],EAX
006ED697  E9 26 07 00 00            JMP 0x006eddc2
LAB_006ed69c:
006ED69C  F6 C4 20                  TEST AH,0x20
006ED69F  0F 84 88 02 00 00         JZ 0x006ed92d
006ED6A5  8B 8F A0 00 00 00         MOV ECX,dword ptr [EDI + 0xa0]
006ED6AB  DB 41 1D                  FILD dword ptr [ECX + 0x1d]
006ED6AE  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
006ED6B1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006ED6B4  48                        DEC EAX
006ED6B5  DA 71 21                  FIDIV dword ptr [ECX + 0x21]
006ED6B8  8B 49 19                  MOV ECX,dword ptr [ECX + 0x19]
006ED6BB  99                        CDQ
006ED6BC  2B C2                     SUB EAX,EDX
006ED6BE  51                        PUSH ECX
006ED6BF  8B D8                     MOV EBX,EAX
006ED6C1  D1 FB                     SAR EBX,0x1
006ED6C3  89 9D 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EBX
006ED6C9  DD 9D 40 FF FF FF         FSTP double ptr [EBP + 0xffffff40]
006ED6CF  E8 6C DF FE FF            CALL 0x006db640
006ED6D4  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006ED6D7  8B 97 A0 00 00 00         MOV EDX,dword ptr [EDI + 0xa0]
006ED6DD  DB 45 CC                  FILD dword ptr [EBP + -0x34]
006ED6E0  8B 42 19                  MOV EAX,dword ptr [EDX + 0x19]
006ED6E3  50                        PUSH EAX
006ED6E4  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006ED6EA  DC 8D 40 FF FF FF         FMUL double ptr [EBP + 0xffffff40]
006ED6F0  DD 9D 28 FF FF FF         FSTP double ptr [EBP + 0xffffff28]
006ED6F6  E8 D5 DF FE FF            CALL 0x006db6d0
006ED6FB  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006ED6FE  B8 00 7D 00 00            MOV EAX,0x7d00
006ED703  DB 45 CC                  FILD dword ptr [EBP + -0x34]
006ED706  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006ED709  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006ED70C  B8 00 83 FF FF            MOV EAX,0xffff8300
006ED711  33 C9                     XOR ECX,ECX
006ED713  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006ED719  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006ED71C  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006ED71F  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED725  C7 45 A8 30 75 00 00      MOV dword ptr [EBP + -0x58],0x7530
006ED72C  DC 8D 40 FF FF FF         FMUL double ptr [EBP + 0xffffff40]
006ED732  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006ED735  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
006ED73B  3B D1                     CMP EDX,ECX
006ED73D  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
006ED740  DD 9D 30 FF FF FF         FSTP double ptr [EBP + 0xffffff30]
006ED746  D9 40 08                  FLD float ptr [EAX + 0x8]
006ED749  D9 40 0C                  FLD float ptr [EAX + 0xc]
006ED74C  D9 40 10                  FLD float ptr [EAX + 0x10]
006ED74F  0F 8E CD 01 00 00         JLE 0x006ed922
006ED755  DD 5D C8                  FSTP double ptr [EBP + -0x38]
006ED758  33 DB                     XOR EBX,EBX
006ED75A  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006ED75D  DD 9D 5C FF FF FF         FSTP double ptr [EBP + 0xffffff5c]
006ED763  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006ED766  DD 5D AC                  FSTP double ptr [EBP + -0x54]
LAB_006ed769:
006ED769  8B 10                     MOV EDX,dword ptr [EAX]
006ED76B  6A 01                     PUSH 0x1
006ED76D  D9 04 0A                  FLD float ptr [EDX + ECX*0x1]
006ED770  DC 8D 30 FF FF FF         FMUL double ptr [EBP + 0xffffff30]
006ED776  D9 44 0A 04               FLD float ptr [EDX + ECX*0x1 + 0x4]
006ED77A  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
006ED77D  DC 8D 28 FF FF FF         FMUL double ptr [EBP + 0xffffff28]
006ED783  DE E9                     FSUBP
006ED785  D9 5D 94                  FSTP float ptr [EBP + -0x6c]
006ED788  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED78E  8B 10                     MOV EDX,dword ptr [EAX]
006ED790  D9 44 0A 04               FLD float ptr [EDX + ECX*0x1 + 0x4]
006ED794  DC 8D 30 FF FF FF         FMUL double ptr [EBP + 0xffffff30]
006ED79A  D9 04 0A                  FLD float ptr [EDX + ECX*0x1]
006ED79D  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
006ED7A0  DC 8D 28 FF FF FF         FMUL double ptr [EBP + 0xffffff28]
006ED7A6  DE C1                     FADDP
006ED7A8  D9 5D 98                  FSTP float ptr [EBP + -0x68]
006ED7AB  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED7B1  8B 10                     MOV EDX,dword ptr [EAX]
006ED7B3  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006ED7B6  50                        PUSH EAX
006ED7B7  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
006ED7BD  D9 44 0A 08               FLD float ptr [EDX + ECX*0x1 + 0x8]
006ED7C1  DC 8D 40 FF FF FF         FMUL double ptr [EBP + 0xffffff40]
006ED7C7  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006ED7CA  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
006ED7D0  51                        PUSH ECX
006ED7D1  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006ED7D4  52                        PUSH EDX
006ED7D5  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006ED7D8  D9 5D 9C                  FSTP float ptr [EBP + -0x64]
006ED7DB  50                        PUSH EAX
006ED7DC  51                        PUSH ECX
006ED7DD  8B 8F A0 00 00 00         MOV ECX,dword ptr [EDI + 0xa0]
006ED7E3  52                        PUSH EDX
006ED7E4  8D 45 94                  LEA EAX,[EBP + -0x6c]
006ED7E7  8D 54 0B 25               LEA EDX,[EBX + ECX*0x1 + 0x25]
006ED7EB  50                        PUSH EAX
006ED7EC  52                        PUSH EDX
006ED7ED  8B CE                     MOV ECX,ESI
006ED7EF  E8 DC 4D FF FF            CALL 0x006e25d0
006ED7F4  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED7FA  03 C3                     ADD EAX,EBX
006ED7FC  8B 5F 04                  MOV EBX,dword ptr [EDI + 0x4]
006ED7FF  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
006ED802  8B 50 29                  MOV EDX,dword ptr [EAX + 0x29]
006ED805  C1 F9 10                  SAR ECX,0x10
006ED808  C1 FA 10                  SAR EDX,0x10
006ED80B  F6 C3 80                  TEST BL,0x80
006ED80E  75 26                     JNZ 0x006ed836
006ED810  F6 C3 20                  TEST BL,0x20
006ED813  74 06                     JZ 0x006ed81b
006ED815  83 7F 1C FF               CMP dword ptr [EDI + 0x1c],-0x1
006ED819  74 1B                     JZ 0x006ed836
LAB_006ed81b:
006ED81B  8B 9E E4 02 00 00         MOV EBX,dword ptr [ESI + 0x2e4]
006ED821  29 58 2D                  SUB dword ptr [EAX + 0x2d],EBX
006ED824  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED82A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006ED82D  8B 44 03 2D               MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2d]
006ED831  C1 F8 10                  SAR EAX,0x10
006ED834  EB 0C                     JMP 0x006ed842
LAB_006ed836:
006ED836  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006ED839  C7 40 2D 00 00 00 00      MOV dword ptr [EAX + 0x2d],0x0
006ED840  33 C0                     XOR EAX,EAX
LAB_006ed842:
006ED842  39 4D F4                  CMP dword ptr [EBP + -0xc],ECX
006ED845  7E 03                     JLE 0x006ed84a
006ED847  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006ed84a:
006ED84A  39 4D D4                  CMP dword ptr [EBP + -0x2c],ECX
006ED84D  7D 03                     JGE 0x006ed852
006ED84F  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_006ed852:
006ED852  39 55 E8                  CMP dword ptr [EBP + -0x18],EDX
006ED855  7E 03                     JLE 0x006ed85a
006ED857  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_006ed85a:
006ED85A  39 55 E0                  CMP dword ptr [EBP + -0x20],EDX
006ED85D  7D 03                     JGE 0x006ed862
006ED85F  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_006ed862:
006ED862  39 45 A8                  CMP dword ptr [EBP + -0x58],EAX
006ED865  7E 03                     JLE 0x006ed86a
006ED867  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
LAB_006ed86a:
006ED86A  39 85 7C FF FF FF         CMP dword ptr [EBP + 0xffffff7c],EAX
006ED870  7D 06                     JGE 0x006ed878
006ED872  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
LAB_006ed878:
006ED878  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006ED87B  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006ED87E  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006ED884  42                        INC EDX
006ED885  83 C1 0C                  ADD ECX,0xc
006ED888  83 C3 10                  ADD EBX,0x10
006ED88B  3B 50 04                  CMP EDX,dword ptr [EAX + 0x4]
006ED88E  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
006ED891  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006ED894  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006ED897  0F 8C CC FE FF FF         JL 0x006ed769
006ED89D  8B 9D 38 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff38]
LAB_006ed8a3:
006ED8A3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006ED8A6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006ED8A9  8B D1                     MOV EDX,ECX
006ED8AB  2B C3                     SUB EAX,EBX
006ED8AD  2B D3                     SUB EDX,EBX
006ED8AF  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006ED8B2  8B D0                     MOV EDX,EAX
006ED8B4  2B D1                     SUB EDX,ECX
006ED8B6  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006ED8B9  03 D1                     ADD EDX,ECX
006ED8BB  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006ED8BE  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006ED8C1  8B CA                     MOV ECX,EDX
006ED8C3  2B CB                     SUB ECX,EBX
006ED8C5  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006ED8C8  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006ED8CB  2B CA                     SUB ECX,EDX
006ED8CD  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006ED8D3  03 C8                     ADD ECX,EAX
006ED8D5  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006ED8D8  03 C2                     ADD EAX,EDX
006ED8DA  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006ED8DD  99                        CDQ
006ED8DE  2B C2                     SUB EAX,EDX
006ED8E0  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
006ED8E6  D1 F8                     SAR EAX,0x1
006ED8E8  51                        PUSH ECX
006ED8E9  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006ED8EC  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006ED8EF  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
006ED8F2  E8 69 2B FC FF            CALL 0x006b0460
006ED8F7  85 C0                     TEST EAX,EAX
006ED8F9  0F 84 C3 04 00 00         JZ 0x006eddc2
006ED8FF  8B 07                     MOV EAX,dword ptr [EDI]
006ED901  0C 82                     OR AL,0x82
006ED903  89 07                     MOV dword ptr [EDI],EAX
006ED905  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
006ED908  89 57 64                  MOV dword ptr [EDI + 0x64],EDX
006ED90B  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
006ED90E  89 47 68                  MOV dword ptr [EDI + 0x68],EAX
006ED911  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006ED914  89 4F 6C                  MOV dword ptr [EDI + 0x6c],ECX
006ED917  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006ED91A  89 57 70                  MOV dword ptr [EDI + 0x70],EDX
006ED91D  E9 A0 04 00 00            JMP 0x006eddc2
LAB_006ed922:
006ED922  DD D8                     FSTP ST0
006ED924  DD D8                     FSTP ST0
006ED926  DD D8                     FSTP ST0
006ED928  E9 76 FF FF FF            JMP 0x006ed8a3
LAB_006ed92d:
006ED92D  F6 C4 10                  TEST AH,0x10
006ED930  0F 84 07 01 00 00         JZ 0x006eda3d
006ED936  8B 47 74                  MOV EAX,dword ptr [EDI + 0x74]
006ED939  6A 00                     PUSH 0x0
006ED93B  6A 00                     PUSH 0x0
006ED93D  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006ED940  8B 4F 78                  MOV ECX,dword ptr [EDI + 0x78]
006ED943  6A 00                     PUSH 0x0
006ED945  6A 00                     PUSH 0x0
006ED947  6A 00                     PUSH 0x0
006ED949  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
006ED94C  8B 57 7C                  MOV EDX,dword ptr [EDI + 0x7c]
006ED94F  6A 00                     PUSH 0x0
006ED951  8D 45 94                  LEA EAX,[EBP + -0x6c]
006ED954  6A 00                     PUSH 0x0
006ED956  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
006ED95C  50                        PUSH EAX
006ED95D  51                        PUSH ECX
006ED95E  8B CE                     MOV ECX,ESI
006ED960  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
006ED963  E8 68 4C FF FF            CALL 0x006e25d0
006ED968  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
006ED96E  8B 9D 48 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff48]
006ED974  C1 F8 10                  SAR EAX,0x10
006ED977  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006ED97A  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
006ED97D  C1 FB 10                  SAR EBX,0x10
006ED980  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006ED983  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006ED986  C1 E0 02                  SHL EAX,0x2
006ED989  99                        CDQ
006ED98A  F7 BE F0 02 00 00         IDIV dword ptr [ESI + 0x2f0]
006ED990  8B 96 08 01 00 00         MOV EDX,dword ptr [ESI + 0x108]
006ED996  F7 DA                     NEG EDX
006ED998  40                        INC EAX
006ED999  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006ED99C  DB 45 F0                  FILD dword ptr [EBP + -0x10]
006ED99F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006ED9A2  DB 45 F0                  FILD dword ptr [EBP + -0x10]
006ED9A5  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006ED9AB  DC C0                     FADD ST0,ST0
006ED9AD  DE F9                     FDIVP
006ED9AF  DC 8E 08 03 00 00         FMUL double ptr [ESI + 0x308]
006ED9B5  E8 CE 08 04 00            CALL 0x0072e288
006ED9BA  03 85 50 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff50]
006ED9C0  79 02                     JNS 0x006ed9c4
006ED9C2  33 C0                     XOR EAX,EAX
LAB_006ed9c4:
006ED9C4  8B 17                     MOV EDX,dword ptr [EDI]
006ED9C6  83 CA 04                  OR EDX,0x4
006ED9C9  89 17                     MOV dword ptr [EDI],EDX
006ED9CB  8B 8F 84 00 00 00         MOV ECX,dword ptr [EDI + 0x84]
006ED9D1  2B D9                     SUB EBX,ECX
006ED9D3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006ED9D6  89 5F 4C                  MOV dword ptr [EDI + 0x4c],EBX
006ED9D9  8B 97 88 00 00 00         MOV EDX,dword ptr [EDI + 0x88]
006ED9DF  2B CA                     SUB ECX,EDX
006ED9E1  8D 57 54                  LEA EDX,[EDI + 0x54]
006ED9E4  89 4F 50                  MOV dword ptr [EDI + 0x50],ECX
006ED9E7  8B 4F 4C                  MOV ECX,dword ptr [EDI + 0x4c]
006ED9EA  89 0A                     MOV dword ptr [EDX],ECX
006ED9EC  8B 4F 50                  MOV ECX,dword ptr [EDI + 0x50]
006ED9EF  89 4F 58                  MOV dword ptr [EDI + 0x58],ECX
006ED9F2  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
006ED9F5  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
006ED9F8  89 47 5C                  MOV dword ptr [EDI + 0x5c],EAX
006ED9FB  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
006ED9FE  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
006EDA04  89 4F 60                  MOV dword ptr [EDI + 0x60],ECX
006EDA07  50                        PUSH EAX
006EDA08  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006EDA0B  E8 50 2A FC FF            CALL 0x006b0460
006EDA10  85 C0                     TEST EAX,EAX
006EDA12  74 1E                     JZ 0x006eda32
006EDA14  8B 07                     MOV EAX,dword ptr [EDI]
006EDA16  0C 02                     OR AL,0x2
006EDA18  89 07                     MOV dword ptr [EDI],EAX
006EDA1A  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006EDA1D  89 4F 64                  MOV dword ptr [EDI + 0x64],ECX
006EDA20  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006EDA23  89 57 68                  MOV dword ptr [EDI + 0x68],EDX
006EDA26  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006EDA29  89 47 6C                  MOV dword ptr [EDI + 0x6c],EAX
006EDA2C  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006EDA2F  89 4F 70                  MOV dword ptr [EDI + 0x70],ECX
LAB_006eda32:
006EDA32  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
006EDA35  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
006EDA38  E9 85 03 00 00            JMP 0x006eddc2
LAB_006eda3d:
006EDA3D  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006EDA43  85 C0                     TEST EAX,EAX
006EDA45  0F 84 77 03 00 00         JZ 0x006eddc2
006EDA4B  8B 47 74                  MOV EAX,dword ptr [EDI + 0x74]
006EDA4E  6A 00                     PUSH 0x0
006EDA50  6A 00                     PUSH 0x0
006EDA52  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006EDA55  8B 4F 78                  MOV ECX,dword ptr [EDI + 0x78]
006EDA58  6A 00                     PUSH 0x0
006EDA5A  6A 00                     PUSH 0x0
006EDA5C  6A 00                     PUSH 0x0
006EDA5E  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
006EDA61  8B 57 7C                  MOV EDX,dword ptr [EDI + 0x7c]
006EDA64  6A 00                     PUSH 0x0
006EDA66  8D 45 94                  LEA EAX,[EBP + -0x6c]
006EDA69  6A 00                     PUSH 0x0
006EDA6B  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
006EDA71  50                        PUSH EAX
006EDA72  51                        PUSH ECX
006EDA73  8B CE                     MOV ECX,ESI
006EDA75  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
006EDA78  E8 53 4B FF FF            CALL 0x006e25d0
006EDA7D  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006EDA83  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
006EDA89  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
006EDA8F  C1 F8 10                  SAR EAX,0x10
006EDA92  C1 F9 10                  SAR ECX,0x10
006EDA95  85 D2                     TEST EDX,EDX
006EDA97  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
006EDA9A  7D 07                     JGE 0x006edaa3
006EDA9C  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
LAB_006edaa3:
006EDAA3  8B 96 D8 02 00 00         MOV EDX,dword ptr [ESI + 0x2d8]
006EDAA9  85 D2                     TEST EDX,EDX
006EDAAB  75 2B                     JNZ 0x006edad8
006EDAAD  8B 1F                     MOV EBX,dword ptr [EDI]
006EDAAF  F6 C3 04                  TEST BL,0x4
006EDAB2  75 24                     JNZ 0x006edad8
006EDAB4  8B D0                     MOV EDX,EAX
006EDAB6  2B 97 84 00 00 00         SUB EDX,dword ptr [EDI + 0x84]
006EDABC  39 57 4C                  CMP dword ptr [EDI + 0x4c],EDX
006EDABF  75 17                     JNZ 0x006edad8
006EDAC1  8B D1                     MOV EDX,ECX
006EDAC3  2B 97 88 00 00 00         SUB EDX,dword ptr [EDI + 0x88]
006EDAC9  39 57 50                  CMP dword ptr [EDI + 0x50],EDX
006EDACC  75 0A                     JNZ 0x006edad8
006EDACE  83 E3 B7                  AND EBX,0xffffffb7
006EDAD1  89 1F                     MOV dword ptr [EDI],EBX
006EDAD3  E9 EA 02 00 00            JMP 0x006eddc2
LAB_006edad8:
006EDAD8  8D 5F 54                  LEA EBX,[EDI + 0x54]
006EDADB  89 03                     MOV dword ptr [EBX],EAX
006EDADD  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006EDAE0  89 4F 58                  MOV dword ptr [EDI + 0x58],ECX
006EDAE3  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
006EDAE6  F7 07 00 00 04 00         TEST dword ptr [EDI],0x40000
006EDAEC  74 08                     JZ 0x006edaf6
006EDAEE  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
006EDAF1  03 C8                     ADD ECX,EAX
006EDAF3  89 4F 10                  MOV dword ptr [EDI + 0x10],ECX
LAB_006edaf6:
006EDAF6  8B 0F                     MOV ECX,dword ptr [EDI]
006EDAF8  83 C9 04                  OR ECX,0x4
006EDAFB  89 0F                     MOV dword ptr [EDI],ECX
006EDAFD  8B 13                     MOV EDX,dword ptr [EBX]
006EDAFF  2B 97 84 00 00 00         SUB EDX,dword ptr [EDI + 0x84]
006EDB05  89 57 4C                  MOV dword ptr [EDI + 0x4c],EDX
006EDB08  8B 47 58                  MOV EAX,dword ptr [EDI + 0x58]
006EDB0B  2B 87 88 00 00 00         SUB EAX,dword ptr [EDI + 0x88]
006EDB11  89 47 50                  MOV dword ptr [EDI + 0x50],EAX
006EDB14  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
006EDB1A  85 C0                     TEST EAX,EAX
006EDB1C  0F 84 92 00 00 00         JZ 0x006edbb4
006EDB22  F6 47 04 04               TEST byte ptr [EDI + 0x4],0x4
006EDB26  0F 85 88 00 00 00         JNZ 0x006edbb4
006EDB2C  8B 8E F0 02 00 00         MOV ECX,dword ptr [ESI + 0x2f0]
006EDB32  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006EDB37  0F AF 8F 84 00 00 00      IMUL ECX,dword ptr [EDI + 0x84]
006EDB3E  F7 E9                     IMUL ECX
006EDB40  C1 FA 05                  SAR EDX,0x5
006EDB43  8B CA                     MOV ECX,EDX
006EDB45  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006EDB4A  C1 E9 1F                  SHR ECX,0x1f
006EDB4D  03 D1                     ADD EDX,ECX
006EDB4F  8B 0B                     MOV ECX,dword ptr [EBX]
006EDB51  03 CA                     ADD ECX,EDX
006EDB53  89 0B                     MOV dword ptr [EBX],ECX
006EDB55  8B 8E F4 02 00 00         MOV ECX,dword ptr [ESI + 0x2f4]
006EDB5B  0F AF 8F 88 00 00 00      IMUL ECX,dword ptr [EDI + 0x88]
006EDB62  F7 E9                     IMUL ECX
006EDB64  C1 FA 05                  SAR EDX,0x5
006EDB67  8B C2                     MOV EAX,EDX
006EDB69  C1 E8 1F                  SHR EAX,0x1f
006EDB6C  03 D0                     ADD EDX,EAX
006EDB6E  8B 47 58                  MOV EAX,dword ptr [EDI + 0x58]
006EDB71  03 C2                     ADD EAX,EDX
006EDB73  89 47 58                  MOV dword ptr [EDI + 0x58],EAX
006EDB76  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
006EDB79  0F AF 8E F0 02 00 00      IMUL ECX,dword ptr [ESI + 0x2f0]
006EDB80  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006EDB85  F7 E9                     IMUL ECX
006EDB87  C1 FA 05                  SAR EDX,0x5
006EDB8A  8B CA                     MOV ECX,EDX
006EDB8C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006EDB91  C1 E9 1F                  SHR ECX,0x1f
006EDB94  03 D1                     ADD EDX,ECX
006EDB96  89 57 5C                  MOV dword ptr [EDI + 0x5c],EDX
006EDB99  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
006EDB9C  0F AF 8E F4 02 00 00      IMUL ECX,dword ptr [ESI + 0x2f4]
006EDBA3  F7 E9                     IMUL ECX
006EDBA5  C1 FA 05                  SAR EDX,0x5
006EDBA8  8B C2                     MOV EAX,EDX
006EDBAA  C1 E8 1F                  SHR EAX,0x1f
006EDBAD  03 D0                     ADD EDX,EAX
006EDBAF  89 57 60                  MOV dword ptr [EDI + 0x60],EDX
006EDBB2  EB 17                     JMP 0x006edbcb
LAB_006edbb4:
006EDBB4  8B 4F 4C                  MOV ECX,dword ptr [EDI + 0x4c]
006EDBB7  89 0B                     MOV dword ptr [EBX],ECX
006EDBB9  8B 57 50                  MOV EDX,dword ptr [EDI + 0x50]
006EDBBC  89 57 58                  MOV dword ptr [EDI + 0x58],EDX
006EDBBF  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
006EDBC2  89 47 5C                  MOV dword ptr [EDI + 0x5c],EAX
006EDBC5  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
006EDBC8  89 4F 60                  MOV dword ptr [EDI + 0x60],ECX
LAB_006edbcb:
006EDBCB  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
006EDBD1  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006EDBD4  52                        PUSH EDX
006EDBD5  8B D3                     MOV EDX,EBX
006EDBD7  E8 84 28 FC FF            CALL 0x006b0460
006EDBDC  85 C0                     TEST EAX,EAX
006EDBDE  0F 84 D8 01 00 00         JZ 0x006eddbc
006EDBE4  8B 03                     MOV EAX,dword ptr [EBX]
006EDBE6  8B 4F 5C                  MOV ECX,dword ptr [EDI + 0x5c]
006EDBE9  8B 57 60                  MOV EDX,dword ptr [EDI + 0x60]
006EDBEC  03 C8                     ADD ECX,EAX
006EDBEE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006EDBF1  8B 4F 58                  MOV ECX,dword ptr [EDI + 0x58]
006EDBF4  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006EDBF7  8B 87 94 00 00 00         MOV EAX,dword ptr [EDI + 0x94]
006EDBFD  03 D1                     ADD EDX,ECX
006EDBFF  33 DB                     XOR EBX,EBX
006EDC01  85 C0                     TEST EAX,EAX
006EDC03  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006EDC06  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006EDC09  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
006EDC0C  0F 8E 6E 01 00 00         JLE 0x006edd80
LAB_006edc12:
006EDC12  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006EDC18  8B 4C D8 04               MOV ECX,dword ptr [EAX + EBX*0x8 + 0x4]
006EDC1C  85 C9                     TEST ECX,ECX
006EDC1E  0F 84 4A 01 00 00         JZ 0x006edd6e
006EDC24  8B 97 A4 00 00 00         MOV EDX,dword ptr [EDI + 0xa4]
006EDC2A  8D 04 9A                  LEA EAX,[EDX + EBX*0x4]
006EDC2D  0F BF 14 9A               MOVSX EDX,word ptr [EDX + EBX*0x4]
006EDC31  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
006EDC34  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006EDC3A  85 D2                     TEST EDX,EDX
006EDC3C  0F 84 BA 00 00 00         JZ 0x006edcfc
006EDC42  F6 47 04 04               TEST byte ptr [EDI + 0x4],0x4
006EDC46  0F 85 B0 00 00 00         JNZ 0x006edcfc
006EDC4C  F6 40 02 02               TEST byte ptr [EAX + 0x2],0x2
006EDC50  0F 85 A6 00 00 00         JNZ 0x006edcfc
006EDC56  8B 59 04                  MOV EBX,dword ptr [ECX + 0x4]
006EDC59  8B 96 F0 02 00 00         MOV EDX,dword ptr [ESI + 0x2f0]
006EDC5F  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006EDC62  0F AF D3                  IMUL EDX,EBX
006EDC65  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006EDC68  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006EDC6D  F7 EA                     IMUL EDX
006EDC6F  C1 FA 05                  SAR EDX,0x5
006EDC72  8B C2                     MOV EAX,EDX
006EDC74  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006EDC77  C1 E8 1F                  SHR EAX,0x1f
006EDC7A  03 D0                     ADD EDX,EAX
006EDC7C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006EDC81  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
006EDC84  8B 96 F4 02 00 00         MOV EDX,dword ptr [ESI + 0x2f4]
006EDC8A  0F AF 55 E4               IMUL EDX,dword ptr [EBP + -0x1c]
006EDC8E  F7 EA                     IMUL EDX
006EDC90  C1 FA 05                  SAR EDX,0x5
006EDC93  8B C2                     MOV EAX,EDX
006EDC95  C1 E8 1F                  SHR EAX,0x1f
006EDC98  03 D0                     ADD EDX,EAX
006EDC9A  8B C3                     MOV EAX,EBX
006EDC9C  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
006EDC9F  0F BF 51 0E               MOVSX EDX,word ptr [ECX + 0xe]
006EDCA3  0F AF 55 A4               IMUL EDX,dword ptr [EBP + -0x5c]
006EDCA7  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006EDCAA  99                        CDQ
006EDCAB  2B C2                     SUB EAX,EDX
006EDCAD  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006EDCB0  D1 F8                     SAR EAX,0x1
006EDCB2  03 C2                     ADD EAX,EDX
006EDCB4  99                        CDQ
006EDCB5  F7 FB                     IDIV EBX
006EDCB7  03 47 54                  ADD EAX,dword ptr [EDI + 0x54]
006EDCBA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006EDCBD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EDCC0  0F BF 59 10               MOVSX EBX,word ptr [ECX + 0x10]
006EDCC4  0F AF 5D B0               IMUL EBX,dword ptr [EBP + -0x50]
006EDCC8  99                        CDQ
006EDCC9  2B C2                     SUB EAX,EDX
006EDCCB  D1 F8                     SAR EAX,0x1
006EDCCD  03 C3                     ADD EAX,EBX
006EDCCF  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
006EDCD2  99                        CDQ
006EDCD3  F7 7D E4                  IDIV dword ptr [EBP + -0x1c]
006EDCD6  03 47 58                  ADD EAX,dword ptr [EDI + 0x58]
006EDCD9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006EDCDC  0F BF 41 12               MOVSX EAX,word ptr [ECX + 0x12]
006EDCE0  0F AF 45 A4               IMUL EAX,dword ptr [EBP + -0x5c]
006EDCE4  99                        CDQ
006EDCE5  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
006EDCE8  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006EDCEB  0F BF 41 14               MOVSX EAX,word ptr [ECX + 0x14]
006EDCEF  0F AF 45 B0               IMUL EAX,dword ptr [EBP + -0x50]
006EDCF3  99                        CDQ
006EDCF4  F7 7D E4                  IDIV dword ptr [EBP + -0x1c]
006EDCF7  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006EDCFA  EB 24                     JMP 0x006edd20
LAB_006edcfc:
006EDCFC  0F BF 41 0E               MOVSX EAX,word ptr [ECX + 0xe]
006EDD00  03 47 4C                  ADD EAX,dword ptr [EDI + 0x4c]
006EDD03  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006EDD06  8B 47 50                  MOV EAX,dword ptr [EDI + 0x50]
006EDD09  0F BF 51 10               MOVSX EDX,word ptr [ECX + 0x10]
006EDD0D  03 D0                     ADD EDX,EAX
006EDD0F  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006EDD12  0F BF 41 12               MOVSX EAX,word ptr [ECX + 0x12]
006EDD16  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006EDD19  0F BF 49 14               MOVSX ECX,word ptr [ECX + 0x14]
006EDD1D  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_006edd20:
006EDD20  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
006EDD26  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006EDD29  52                        PUSH EDX
006EDD2A  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006EDD2D  E8 2E 27 FC FF            CALL 0x006b0460
006EDD32  85 C0                     TEST EAX,EAX
006EDD34  74 38                     JZ 0x006edd6e
006EDD36  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006EDD39  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006EDD3C  3B C8                     CMP ECX,EAX
006EDD3E  7E 03                     JLE 0x006edd43
006EDD40  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006edd43:
006EDD43  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
006EDD46  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006EDD49  3B D1                     CMP EDX,ECX
006EDD4B  7E 03                     JLE 0x006edd50
006EDD4D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_006edd50:
006EDD50  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006EDD53  03 C2                     ADD EAX,EDX
006EDD55  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006EDD58  3B D0                     CMP EDX,EAX
006EDD5A  7D 03                     JGE 0x006edd5f
006EDD5C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006edd5f:
006EDD5F  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006EDD62  03 C1                     ADD EAX,ECX
006EDD64  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006EDD67  3B C8                     CMP ECX,EAX
006EDD69  7D 03                     JGE 0x006edd6e
006EDD6B  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_006edd6e:
006EDD6E  8B 87 94 00 00 00         MOV EAX,dword ptr [EDI + 0x94]
006EDD74  43                        INC EBX
006EDD75  3B D8                     CMP EBX,EAX
006EDD77  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
006EDD7A  0F 8C 92 FE FF FF         JL 0x006edc12
LAB_006edd80:
006EDD80  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006EDD83  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EDD86  3B C2                     CMP EAX,EDX
006EDD88  7D 32                     JGE 0x006eddbc
006EDD8A  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006EDD8D  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006EDD90  3B D9                     CMP EBX,ECX
006EDD92  7D 28                     JGE 0x006eddbc
006EDD94  8B 07                     MOV EAX,dword ptr [EDI]
006EDD96  F6 C4 02                  TEST AH,0x2
006EDD99  74 0A                     JZ 0x006edda5
006EDD9B  66 83 BF A8 00 00 00 00   CMP word ptr [EDI + 0xa8],0x0
006EDDA3  7F 04                     JG 0x006edda9
LAB_006edda5:
006EDDA5  0C 82                     OR AL,0x82
006EDDA7  89 07                     MOV dword ptr [EDI],EAX
LAB_006edda9:
006EDDA9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EDDAC  89 47 64                  MOV dword ptr [EDI + 0x64],EAX
006EDDAF  2B D0                     SUB EDX,EAX
006EDDB1  89 5F 68                  MOV dword ptr [EDI + 0x68],EBX
006EDDB4  2B CB                     SUB ECX,EBX
006EDDB6  89 57 6C                  MOV dword ptr [EDI + 0x6c],EDX
006EDDB9  89 4F 70                  MOV dword ptr [EDI + 0x70],ECX
LAB_006eddbc:
006EDDBC  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
006EDDBF  89 4F 14                  MOV dword ptr [EDI + 0x14],ECX
LAB_006eddc2:
006EDDC2  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006EDDC5  8A 07                     MOV AL,byte ptr [EDI]
006EDDC7  F6 C4 80                  TEST AH,0x80
006EDDCA  0F 84 B5 02 00 00         JZ 0x006ee085
006EDDD0  A8 40                     TEST AL,0x40
006EDDD2  75 0E                     JNZ 0x006edde2
006EDDD4  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006EDDDA  85 C0                     TEST EAX,EAX
006EDDDC  0F 84 A2 03 00 00         JZ 0x006ee184
LAB_006edde2:
006EDDE2  8B 8E D8 02 00 00         MOV ECX,dword ptr [ESI + 0x2d8]
006EDDE8  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006EDDEE  33 DB                     XOR EBX,EBX
006EDDF0  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006EDDF6  3B CB                     CMP ECX,EBX
006EDDF8  74 39                     JZ 0x006ede33
006EDDFA  8B 8F E4 00 00 00         MOV ECX,dword ptr [EDI + 0xe4]
006EDE00  33 F6                     XOR ESI,ESI
006EDE02  3B C3                     CMP EAX,EBX
006EDE04  7E 1B                     JLE 0x006ede21
006EDE06  8D 59 08                  LEA EBX,[ECX + 0x8]
LAB_006ede09:
006EDE09  8B 13                     MOV EDX,dword ptr [EBX]
006EDE0B  52                        PUSH EDX
006EDE0C  E8 7F 80 FB FF            CALL 0x006a5e90
006EDE11  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006EDE17  83 C3 0C                  ADD EBX,0xc
006EDE1A  46                        INC ESI
006EDE1B  3B F0                     CMP ESI,EAX
006EDE1D  7C EA                     JL 0x006ede09
006EDE1F  33 DB                     XOR EBX,EBX
LAB_006ede21:
006EDE21  8D 87 E4 00 00 00         LEA EAX,[EDI + 0xe4]
006EDE27  50                        PUSH EAX
006EDE28  E8 33 D2 FB FF            CALL 0x006ab060
006EDE2D  89 9F E0 00 00 00         MOV dword ptr [EDI + 0xe0],EBX
LAB_006ede33:
006EDE33  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EDE38  8D 95 E8 FE FF FF         LEA EDX,[EBP + 0xfffffee8]
006EDE3E  8D 8D E4 FE FF FF         LEA ECX,[EBP + 0xfffffee4]
006EDE44  53                        PUSH EBX
006EDE45  52                        PUSH EDX
006EDE46  89 85 E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],EAX
006EDE4C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EDE52  E8 99 F9 03 00            CALL 0x0072d7f0
006EDE57  8B B5 3C FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff3c]
006EDE5D  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
006EDE60  83 C4 08                  ADD ESP,0x8
006EDE63  3B C3                     CMP EAX,EBX
006EDE65  0F 85 85 00 00 00         JNZ 0x006edef0
006EDE6B  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
006EDE71  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006EDE74  8D 8F C4 00 00 00         LEA ECX,[EDI + 0xc4]
006EDE7A  50                        PUSH EAX
006EDE7B  51                        PUSH ECX
006EDE7C  52                        PUSH EDX
006EDE7D  56                        PUSH ESI
006EDE7E  FF 97 F4 00 00 00         CALL dword ptr [EDI + 0xf4]
006EDE84  3B C3                     CMP EAX,EBX
006EDE86  7D 5A                     JGE 0x006edee2
006EDE88  83 F8 FC                  CMP EAX,-0x4
006EDE8B  75 4D                     JNZ 0x006ededa
006EDE8D  8B 8F E0 00 00 00         MOV ECX,dword ptr [EDI + 0xe0]
006EDE93  8B 87 E4 00 00 00         MOV EAX,dword ptr [EDI + 0xe4]
006EDE99  33 DB                     XOR EBX,EBX
006EDE9B  85 C9                     TEST ECX,ECX
006EDE9D  7E 25                     JLE 0x006edec4
006EDE9F  83 C0 08                  ADD EAX,0x8
006EDEA2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006edea5:
006EDEA5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EDEA8  8B 08                     MOV ECX,dword ptr [EAX]
006EDEAA  51                        PUSH ECX
006EDEAB  E8 E0 7F FB FF            CALL 0x006a5e90
006EDEB0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EDEB3  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006EDEB9  83 C2 0C                  ADD EDX,0xc
006EDEBC  43                        INC EBX
006EDEBD  3B D8                     CMP EBX,EAX
006EDEBF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006EDEC2  7C E1                     JL 0x006edea5
LAB_006edec4:
006EDEC4  8D 87 E4 00 00 00         LEA EAX,[EDI + 0xe4]
006EDECA  50                        PUSH EAX
006EDECB  E8 90 D1 FB FF            CALL 0x006ab060
006EDED0  33 C0                     XOR EAX,EAX
006EDED2  33 DB                     XOR EBX,EBX
006EDED4  89 87 E0 00 00 00         MOV dword ptr [EDI + 0xe0],EAX
LAB_006ededa:
006EDEDA  39 5D EC                  CMP dword ptr [EBP + -0x14],EBX
006EDEDD  75 03                     JNZ 0x006edee2
006EDEDF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006edee2:
006EDEE2  8B 95 E4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee4]
006EDEE8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006EDEEE  EB 16                     JMP 0x006edf06
LAB_006edef0:
006EDEF0  8B 8D E4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee4]
006EDEF6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EDEFC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006EDEFF  3B CB                     CMP ECX,EBX
006EDF01  75 03                     JNZ 0x006edf06
006EDF03  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006edf06:
006EDF06  83 F8 02                  CMP EAX,0x2
006EDF09  0F 84 6B 01 00 00         JZ 0x006ee07a
006EDF0F  8B 97 EC 00 00 00         MOV EDX,dword ptr [EDI + 0xec]
006EDF15  89 97 00 01 00 00         MOV dword ptr [EDI + 0x100],EDX
006EDF1B  8B 87 E8 00 00 00         MOV EAX,dword ptr [EDI + 0xe8]
006EDF21  89 87 FC 00 00 00         MOV dword ptr [EDI + 0xfc],EAX
006EDF27  89 9F EC 00 00 00         MOV dword ptr [EDI + 0xec],EBX
006EDF2D  89 9F E8 00 00 00         MOV dword ptr [EDI + 0xe8],EBX
006EDF33  8B 8F E0 00 00 00         MOV ECX,dword ptr [EDI + 0xe0]
006EDF39  3B CB                     CMP ECX,EBX
006EDF3B  0F 84 EA 00 00 00         JZ 0x006ee02b
006EDF41  39 9F E4 00 00 00         CMP dword ptr [EDI + 0xe4],EBX
006EDF47  0F 84 DE 00 00 00         JZ 0x006ee02b
006EDF4D  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
006EDF53  3B C1                     CMP EAX,ECX
006EDF55  74 5B                     JZ 0x006edfb2
006EDF57  8B 8F F0 00 00 00         MOV ECX,dword ptr [EDI + 0xf0]
006EDF5D  3B C3                     CMP EAX,EBX
006EDF5F  7E 1C                     JLE 0x006edf7d
006EDF61  8D 59 0C                  LEA EBX,[ECX + 0xc]
006EDF64  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_006edf67:
006EDF67  8B 0B                     MOV ECX,dword ptr [EBX]
006EDF69  51                        PUSH ECX
006EDF6A  E8 21 7F FB FF            CALL 0x006a5e90
006EDF6F  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006EDF72  83 C3 10                  ADD EBX,0x10
006EDF75  48                        DEC EAX
006EDF76  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006EDF79  75 EC                     JNZ 0x006edf67
006EDF7B  33 DB                     XOR EBX,EBX
LAB_006edf7d:
006EDF7D  8B 97 F0 00 00 00         MOV EDX,dword ptr [EDI + 0xf0]
006EDF83  52                        PUSH EDX
006EDF84  E8 07 7F FB FF            CALL 0x006a5e90
006EDF89  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006EDF8F  C1 E0 04                  SHL EAX,0x4
006EDF92  50                        PUSH EAX
006EDF93  E8 38 25 FC FF            CALL 0x006b04d0
006EDF98  3B C3                     CMP EAX,EBX
006EDF9A  89 87 F0 00 00 00         MOV dword ptr [EDI + 0xf0],EAX
006EDFA0  0F 84 37 02 00 00         JZ 0x006ee1dd
006EDFA6  8B 8F E0 00 00 00         MOV ECX,dword ptr [EDI + 0xe0]
006EDFAC  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
LAB_006edfb2:
006EDFB2  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006EDFB8  8B 87 E4 00 00 00         MOV EAX,dword ptr [EDI + 0xe4]
006EDFBE  8B 9F F0 00 00 00         MOV EBX,dword ptr [EDI + 0xf0]
006EDFC4  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
006EDFCB  85 C9                     TEST ECX,ECX
006EDFCD  7E 48                     JLE 0x006ee017
006EDFCF  83 C0 04                  ADD EAX,0x4
006EDFD2  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_006edfd5:
006EDFD5  8B 00                     MOV EAX,dword ptr [EAX]
006EDFD7  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006EDFDA  3B C8                     CMP ECX,EAX
006EDFDC  74 1C                     JZ 0x006edffa
006EDFDE  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
006EDFE5  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006EDFE8  52                        PUSH EDX
006EDFE9  50                        PUSH EAX
006EDFEA  E8 61 1B FD FF            CALL 0x006bfb50
006EDFEF  85 C0                     TEST EAX,EAX
006EDFF1  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
006EDFF4  0F 84 DC 01 00 00         JZ 0x006ee1d6
LAB_006edffa:
006EDFFA  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006EDFFD  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006EE000  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
006EE006  83 C0 0C                  ADD EAX,0xc
006EE009  83 C3 10                  ADD EBX,0x10
006EE00C  41                        INC ECX
006EE00D  3B CA                     CMP ECX,EDX
006EE00F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006EE012  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006EE015  7C BE                     JL 0x006edfd5
LAB_006ee017:
006EE017  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
006EE01D  57                        PUSH EDI
006EE01E  51                        PUSH ECX
006EE01F  8B CE                     MOV ECX,ESI
006EE021  E8 4A EC FF FF            CALL 0x006ecc70
006EE026  E9 49 01 00 00            JMP 0x006ee174
LAB_006ee02b:
006EE02B  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006EE031  8B 87 F0 00 00 00         MOV EAX,dword ptr [EDI + 0xf0]
006EE037  3B CB                     CMP ECX,EBX
006EE039  7E 1C                     JLE 0x006ee057
006EE03B  8D 58 0C                  LEA EBX,[EAX + 0xc]
006EE03E  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
LAB_006ee041:
006EE041  8B 13                     MOV EDX,dword ptr [EBX]
006EE043  52                        PUSH EDX
006EE044  E8 47 7E FB FF            CALL 0x006a5e90
006EE049  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006EE04C  83 C3 10                  ADD EBX,0x10
006EE04F  48                        DEC EAX
006EE050  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006EE053  75 EC                     JNZ 0x006ee041
006EE055  33 DB                     XOR EBX,EBX
LAB_006ee057:
006EE057  8B 87 F0 00 00 00         MOV EAX,dword ptr [EDI + 0xf0]
006EE05D  50                        PUSH EAX
006EE05E  E8 2D 7E FB FF            CALL 0x006a5e90
006EE063  89 9F E0 00 00 00         MOV dword ptr [EDI + 0xe0],EBX
006EE069  89 9F E4 00 00 00         MOV dword ptr [EDI + 0xe4],EBX
006EE06F  89 9F F0 00 00 00         MOV dword ptr [EDI + 0xf0],EBX
006EE075  E9 FA 00 00 00            JMP 0x006ee174
LAB_006ee07a:
006EE07A  8B 07                     MOV EAX,dword ptr [EDI]
006EE07C  24 BF                     AND AL,0xbf
006EE07E  89 07                     MOV dword ptr [EDI],EAX
006EE080  E9 EF 00 00 00            JMP 0x006ee174
LAB_006ee085:
006EE085  A8 40                     TEST AL,0x40
006EE087  0F 84 E7 00 00 00         JZ 0x006ee174
006EE08D  8B 8F EC 00 00 00         MOV ECX,dword ptr [EDI + 0xec]
006EE093  33 C0                     XOR EAX,EAX
006EE095  89 8F 00 01 00 00         MOV dword ptr [EDI + 0x100],ECX
006EE09B  8B 97 E8 00 00 00         MOV EDX,dword ptr [EDI + 0xe8]
006EE0A1  89 97 FC 00 00 00         MOV dword ptr [EDI + 0xfc],EDX
006EE0A7  89 87 EC 00 00 00         MOV dword ptr [EDI + 0xec],EAX
006EE0AD  89 87 E8 00 00 00         MOV dword ptr [EDI + 0xe8],EAX
006EE0B3  E9 BC 00 00 00            JMP 0x006ee174
LAB_006ee0b8:
006EE0B8  A8 40                     TEST AL,0x40
006EE0BA  0F 84 B4 00 00 00         JZ 0x006ee174
006EE0C0  8B 87 EC 00 00 00         MOV EAX,dword ptr [EDI + 0xec]
006EE0C6  33 DB                     XOR EBX,EBX
006EE0C8  89 87 00 01 00 00         MOV dword ptr [EDI + 0x100],EAX
006EE0CE  8B 8F E8 00 00 00         MOV ECX,dword ptr [EDI + 0xe8]
006EE0D4  89 8F FC 00 00 00         MOV dword ptr [EDI + 0xfc],ECX
006EE0DA  89 9F EC 00 00 00         MOV dword ptr [EDI + 0xec],EBX
006EE0E0  89 9F E8 00 00 00         MOV dword ptr [EDI + 0xe8],EBX
006EE0E6  8B 8F E0 00 00 00         MOV ECX,dword ptr [EDI + 0xe0]
006EE0EC  8B 87 E4 00 00 00         MOV EAX,dword ptr [EDI + 0xe4]
006EE0F2  3B CB                     CMP ECX,EBX
006EE0F4  7E 25                     JLE 0x006ee11b
006EE0F6  83 C0 08                  ADD EAX,0x8
006EE0F9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006ee0fc:
006EE0FC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EE0FF  8B 02                     MOV EAX,dword ptr [EDX]
006EE101  50                        PUSH EAX
006EE102  E8 89 7D FB FF            CALL 0x006a5e90
006EE107  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EE10A  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006EE110  83 C2 0C                  ADD EDX,0xc
006EE113  43                        INC EBX
006EE114  3B D8                     CMP EBX,EAX
006EE116  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006EE119  7C E1                     JL 0x006ee0fc
LAB_006ee11b:
006EE11B  8D 87 E4 00 00 00         LEA EAX,[EDI + 0xe4]
006EE121  50                        PUSH EAX
006EE122  E8 39 CF FB FF            CALL 0x006ab060
006EE127  8B 8F E0 00 00 00         MOV ECX,dword ptr [EDI + 0xe0]
006EE12D  8B 87 F0 00 00 00         MOV EAX,dword ptr [EDI + 0xf0]
006EE133  33 DB                     XOR EBX,EBX
006EE135  85 C9                     TEST ECX,ECX
006EE137  7E 25                     JLE 0x006ee15e
006EE139  83 C0 0C                  ADD EAX,0xc
006EE13C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006ee13f:
006EE13F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006EE142  8B 11                     MOV EDX,dword ptr [ECX]
006EE144  52                        PUSH EDX
006EE145  E8 46 7D FB FF            CALL 0x006a5e90
006EE14A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EE14D  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006EE153  83 C2 10                  ADD EDX,0x10
006EE156  43                        INC EBX
006EE157  3B D8                     CMP EBX,EAX
006EE159  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006EE15C  7C E1                     JL 0x006ee13f
LAB_006ee15e:
006EE15E  8D 87 F0 00 00 00         LEA EAX,[EDI + 0xf0]
006EE164  50                        PUSH EAX
006EE165  E8 F6 CE FB FF            CALL 0x006ab060
006EE16A  C7 87 E0 00 00 00 00 00 00 00  MOV dword ptr [EDI + 0xe0],0x0
LAB_006ee174:
006EE174  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006EE17A  85 C0                     TEST EAX,EAX
006EE17C  74 06                     JZ 0x006ee184
006EE17E  81 27 EE FF 87 FF         AND dword ptr [EDI],0xff87ffee
LAB_006ee184:
006EE184  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EE187  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
006EE18D  40                        INC EAX
006EE18E  81 C7 14 01 00 00         ADD EDI,0x114
006EE194  3B C1                     CMP EAX,ECX
006EE196  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006EE199  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006EE19C  0F 8C 1F F1 FF FF         JL 0x006ed2c1
006EE1A2  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
LAB_006ee1a8:
006EE1A8  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006EE1AE  85 C0                     TEST EAX,EAX
006EE1B0  0F 85 22 01 00 00         JNZ 0x006ee2d8
006EE1B6  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006EE1BC  8B 9E 1C 03 00 00         MOV EBX,dword ptr [ESI + 0x31c]
006EE1C2  85 C0                     TEST EAX,EAX
006EE1C4  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006EE1CB  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
006EE1CE  0F 8E 04 01 00 00         JLE 0x006ee2d8
006EE1D4  EB 19                     JMP 0x006ee1ef
LAB_006ee1d6:
006EE1D6  C7 43 08 00 00 00 00      MOV dword ptr [EBX + 0x8],0x0
LAB_006ee1dd:
006EE1DD  C7 45 EC FE FF FF FF      MOV dword ptr [EBP + -0x14],0xfffffffe
006EE1E4  E9 E5 0E 00 00            JMP 0x006ef0ce
LAB_006ee1e9:
006EE1E9  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
LAB_006ee1ef:
006EE1EF  8B 03                     MOV EAX,dword ptr [EBX]
006EE1F1  83 E0 05                  AND EAX,0x5
006EE1F4  3C 05                     CMP AL,0x5
006EE1F6  75 3F                     JNZ 0x006ee237
006EE1F8  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006EE1FE  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
006EE201  6A 01                     PUSH 0x1
006EE203  51                        PUSH ECX
006EE204  8B 4B 40                  MOV ECX,dword ptr [EBX + 0x40]
006EE207  52                        PUSH EDX
006EE208  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
006EE20B  52                        PUSH EDX
006EE20C  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
006EE20F  50                        PUSH EAX
006EE210  8B 86 50 03 00 00         MOV EAX,dword ptr [ESI + 0x350]
006EE216  51                        PUSH ECX
006EE217  52                        PUSH EDX
006EE218  6A 64                     PUSH 0x64
006EE21A  50                        PUSH EAX
006EE21B  E8 B0 38 FE FF            CALL 0x006d1ad0
006EE220  33 C9                     XOR ECX,ECX
006EE222  85 C0                     TEST EAX,EAX
006EE224  0F 9C C1                  SETL CL
006EE227  8B C1                     MOV EAX,ECX
006EE229  85 C0                     TEST EAX,EAX
006EE22B  89 86 D8 02 00 00         MOV dword ptr [ESI + 0x2d8],EAX
006EE231  0F 85 A1 00 00 00         JNZ 0x006ee2d8
LAB_006ee237:
006EE237  8B 13                     MOV EDX,dword ptr [EBX]
006EE239  83 E2 50                  AND EDX,0x50
006EE23C  80 FA 50                  CMP DL,0x50
006EE23F  75 79                     JNZ 0x006ee2ba
006EE241  8B 83 FC 00 00 00         MOV EAX,dword ptr [EBX + 0xfc]
006EE247  8B BB 00 01 00 00         MOV EDI,dword ptr [EBX + 0x100]
006EE24D  85 C0                     TEST EAX,EAX
006EE24F  C7 45 80 00 00 00 00      MOV dword ptr [EBP + -0x80],0x0
006EE256  7E 58                     JLE 0x006ee2b0
LAB_006ee258:
006EE258  8B 07                     MOV EAX,dword ptr [EDI]
006EE25A  85 C0                     TEST EAX,EAX
006EE25C  7C 3E                     JL 0x006ee29c
006EE25E  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006EE264  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
006EE26A  6A 01                     PUSH 0x1
006EE26C  51                        PUSH ECX
006EE26D  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006EE270  52                        PUSH EDX
006EE271  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006EE274  51                        PUSH ECX
006EE275  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006EE278  52                        PUSH EDX
006EE279  8B 96 50 03 00 00         MOV EDX,dword ptr [ESI + 0x350]
006EE27F  51                        PUSH ECX
006EE280  50                        PUSH EAX
006EE281  6A 64                     PUSH 0x64
006EE283  52                        PUSH EDX
006EE284  E8 47 38 FE FF            CALL 0x006d1ad0
006EE289  33 C9                     XOR ECX,ECX
006EE28B  85 C0                     TEST EAX,EAX
006EE28D  0F 9C C1                  SETL CL
006EE290  8B C1                     MOV EAX,ECX
006EE292  85 C0                     TEST EAX,EAX
006EE294  89 86 D8 02 00 00         MOV dword ptr [ESI + 0x2d8],EAX
006EE29A  75 14                     JNZ 0x006ee2b0
LAB_006ee29c:
006EE29C  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
006EE29F  8B 8B FC 00 00 00         MOV ECX,dword ptr [EBX + 0xfc]
006EE2A5  83 C7 10                  ADD EDI,0x10
006EE2A8  40                        INC EAX
006EE2A9  3B C1                     CMP EAX,ECX
006EE2AB  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
006EE2AE  7C A8                     JL 0x006ee258
LAB_006ee2b0:
006EE2B0  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006EE2B6  85 C0                     TEST EAX,EAX
006EE2B8  75 1E                     JNZ 0x006ee2d8
LAB_006ee2ba:
006EE2BA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EE2BD  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
006EE2C3  40                        INC EAX
006EE2C4  81 C3 14 01 00 00         ADD EBX,0x114
006EE2CA  3B C1                     CMP EAX,ECX
006EE2CC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006EE2CF  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
006EE2D2  0F 8C 11 FF FF FF         JL 0x006ee1e9
LAB_006ee2d8:
006EE2D8  8B 86 D4 02 00 00         MOV EAX,dword ptr [ESI + 0x2d4]
006EE2DE  85 C0                     TEST EAX,EAX
006EE2E0  0F 84 43 01 00 00         JZ 0x006ee429
006EE2E6  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
006EE2EC  8B 86 1C 03 00 00         MOV EAX,dword ptr [ESI + 0x31c]
006EE2F2  85 C9                     TEST ECX,ECX
006EE2F4  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006EE2FB  0F 8E 28 01 00 00         JLE 0x006ee429
LAB_006ee301:
006EE301  F6 00 03                  TEST byte ptr [EAX],0x3
006EE304  0F 84 05 01 00 00         JZ 0x006ee40f
006EE30A  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
006EE30D  F6 C3 70                  TEST BL,0x70
006EE310  0F 84 F9 00 00 00         JZ 0x006ee40f
006EE316  F6 C3 10                  TEST BL,0x10
006EE319  74 6B                     JZ 0x006ee386
006EE31B  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006EE31E  83 FA FF                  CMP EDX,-0x1
006EE321  75 11                     JNZ 0x006ee334
006EE323  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006EE326  81 C2 00 00 01 00         ADD EDX,0x10000
006EE32C  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
006EE32F  E9 DB 00 00 00            JMP 0x006ee40f
LAB_006ee334:
006EE334  8D 0C 52                  LEA ECX,[EDX + EDX*0x2]
006EE337  C1 E1 03                  SHL ECX,0x3
006EE33A  2B CA                     SUB ECX,EDX
006EE33C  8B 96 1C 03 00 00         MOV EDX,dword ptr [ESI + 0x31c]
006EE342  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006EE345  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006EE348  F6 01 03                  TEST byte ptr [ECX],0x3
006EE34B  0F 84 BE 00 00 00         JZ 0x006ee40f
006EE351  8A 59 04                  MOV BL,byte ptr [ECX + 0x4]
006EE354  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
006EE357  F6 C3 02                  TEST BL,0x2
006EE35A  74 03                     JZ 0x006ee35f
006EE35C  03 51 2C                  ADD EDX,dword ptr [ECX + 0x2c]
LAB_006ee35f:
006EE35F  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
006EE362  3B FA                     CMP EDI,EDX
006EE364  7C 14                     JL 0x006ee37a
006EE366  0F 85 A3 00 00 00         JNZ 0x006ee40f
006EE36C  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
006EE36F  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
006EE372  3B FB                     CMP EDI,EBX
006EE374  0F 8F 95 00 00 00         JG 0x006ee40f
LAB_006ee37a:
006EE37A  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
006EE37D  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006EE380  41                        INC ECX
006EE381  E9 86 00 00 00            JMP 0x006ee40c
LAB_006ee386:
006EE386  8B CB                     MOV ECX,EBX
006EE388  83 E1 20                  AND ECX,0x20
006EE38B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006EE38E  74 0F                     JZ 0x006ee39f
006EE390  83 78 1C FF               CMP dword ptr [EAX + 0x1c],-0x1
006EE394  75 09                     JNZ 0x006ee39f
006EE396  C7 40 14 00 00 00 00      MOV dword ptr [EAX + 0x14],0x0
006EE39D  EB 70                     JMP 0x006ee40f
LAB_006ee39f:
006EE39F  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006EE3A2  8D 0C 52                  LEA ECX,[EDX + EDX*0x2]
006EE3A5  C1 E1 03                  SHL ECX,0x3
006EE3A8  2B CA                     SUB ECX,EDX
006EE3AA  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EE3AD  8B 8E 1C 03 00 00         MOV ECX,dword ptr [ESI + 0x31c]
006EE3B3  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006EE3B6  F6 01 03                  TEST byte ptr [ECX],0x3
006EE3B9  74 54                     JZ 0x006ee40f
006EE3BB  8A 51 04                  MOV DL,byte ptr [ECX + 0x4]
006EE3BE  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
006EE3C1  F6 C2 02                  TEST DL,0x2
006EE3C4  74 03                     JZ 0x006ee3c9
006EE3C6  03 79 30                  ADD EDI,dword ptr [ECX + 0x30]
LAB_006ee3c9:
006EE3C9  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006EE3CC  85 D2                     TEST EDX,EDX
006EE3CE  74 30                     JZ 0x006ee400
006EE3D0  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006EE3D3  3B D7                     CMP EDX,EDI
006EE3D5  7F 0C                     JG 0x006ee3e3
006EE3D7  75 36                     JNZ 0x006ee40f
006EE3D9  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006EE3DC  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
006EE3DF  3B D3                     CMP EDX,EBX
006EE3E1  7C 2C                     JL 0x006ee40f
LAB_006ee3e3:
006EE3E3  89 78 14                  MOV dword ptr [EAX + 0x14],EDI
006EE3E6  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006EE3E9  85 C9                     TEST ECX,ECX
006EE3EB  7F 1E                     JG 0x006ee40b
006EE3ED  85 FF                     TEST EDI,EDI
006EE3EF  7E 06                     JLE 0x006ee3f7
006EE3F1  4F                        DEC EDI
006EE3F2  89 78 14                  MOV dword ptr [EAX + 0x14],EDI
006EE3F5  EB 18                     JMP 0x006ee40f
LAB_006ee3f7:
006EE3F7  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
006EE3FE  EB 0F                     JMP 0x006ee40f
LAB_006ee400:
006EE400  F6 C3 40                  TEST BL,0x40
006EE403  74 0A                     JZ 0x006ee40f
006EE405  89 78 14                  MOV dword ptr [EAX + 0x14],EDI
006EE408  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
LAB_006ee40b:
006EE40B  49                        DEC ECX
LAB_006ee40c:
006EE40C  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
LAB_006ee40f:
006EE40F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006EE412  8B 96 10 03 00 00         MOV EDX,dword ptr [ESI + 0x310]
006EE418  41                        INC ECX
006EE419  05 14 01 00 00            ADD EAX,0x114
006EE41E  3B CA                     CMP ECX,EDX
006EE420  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006EE423  0F 8C D8 FE FF FF         JL 0x006ee301
LAB_006ee429:
006EE429  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
006EE42F  85 C0                     TEST EAX,EAX
006EE431  0F 84 85 00 00 00         JZ 0x006ee4bc
006EE437  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006EE43D  8B 8E 1C 03 00 00         MOV ECX,dword ptr [ESI + 0x31c]
006EE443  33 DB                     XOR EBX,EBX
006EE445  85 C0                     TEST EAX,EAX
006EE447  7E 73                     JLE 0x006ee4bc
006EE449  83 C1 14                  ADD ECX,0x14
LAB_006ee44c:
006EE44C  8B 41 F0                  MOV EAX,dword ptr [ECX + -0x10]
006EE44F  F6 C4 01                  TEST AH,0x1
006EE452  74 57                     JZ 0x006ee4ab
006EE454  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006EE457  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EE45A  C1 E0 03                  SHL EAX,0x3
006EE45D  2B C2                     SUB EAX,EDX
006EE45F  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EE462  8B 86 1C 03 00 00         MOV EAX,dword ptr [ESI + 0x31c]
006EE468  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EE46B  F6 00 03                  TEST byte ptr [EAX],0x3
006EE46E  74 3B                     JZ 0x006ee4ab
006EE470  F6 40 04 02               TEST byte ptr [EAX + 0x4],0x2
006EE474  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006EE477  74 03                     JZ 0x006ee47c
006EE479  03 50 30                  ADD EDX,dword ptr [EAX + 0x30]
LAB_006ee47c:
006EE47C  8B 39                     MOV EDI,dword ptr [ECX]
006EE47E  3B FA                     CMP EDI,EDX
006EE480  7F 0A                     JG 0x006ee48c
006EE482  75 27                     JNZ 0x006ee4ab
006EE484  8B 79 F8                  MOV EDI,dword ptr [ECX + -0x8]
006EE487  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
006EE48A  7C 1F                     JL 0x006ee4ab
LAB_006ee48c:
006EE48C  89 11                     MOV dword ptr [ECX],EDX
006EE48E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006EE491  85 C0                     TEST EAX,EAX
006EE493  7E 06                     JLE 0x006ee49b
006EE495  48                        DEC EAX
006EE496  89 41 F8                  MOV dword ptr [ECX + -0x8],EAX
006EE499  EB 10                     JMP 0x006ee4ab
LAB_006ee49b:
006EE49B  85 D2                     TEST EDX,EDX
006EE49D  7E 05                     JLE 0x006ee4a4
006EE49F  4A                        DEC EDX
006EE4A0  89 11                     MOV dword ptr [ECX],EDX
006EE4A2  EB 07                     JMP 0x006ee4ab
LAB_006ee4a4:
006EE4A4  C7 41 F8 00 00 00 00      MOV dword ptr [ECX + -0x8],0x0
LAB_006ee4ab:
006EE4AB  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006EE4B1  43                        INC EBX
006EE4B2  81 C1 14 01 00 00         ADD ECX,0x114
006EE4B8  3B D8                     CMP EBX,EAX
006EE4BA  7C 90                     JL 0x006ee44c
LAB_006ee4bc:
006EE4BC  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006EE4C2  8B BE 1C 03 00 00         MOV EDI,dword ptr [ESI + 0x31c]
006EE4C8  33 DB                     XOR EBX,EBX
006EE4CA  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006EE4CD  3B C3                     CMP EAX,EBX
006EE4CF  89 9E 28 03 00 00         MOV dword ptr [ESI + 0x328],EBX
006EE4D5  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006EE4D8  0F 8E 4C 04 00 00         JLE 0x006ee92a
LAB_006ee4de:
006EE4DE  8B 07                     MOV EAX,dword ptr [EDI]
006EE4E0  8B C8                     MOV ECX,EAX
006EE4E2  83 E1 05                  AND ECX,0x5
006EE4E5  80 F9 01                  CMP CL,0x1
006EE4E8  74 41                     JZ 0x006ee52b
006EE4EA  A8 02                     TEST AL,0x2
006EE4EC  75 3D                     JNZ 0x006ee52b
006EE4EE  25 F2 F7 FF FF            AND EAX,0xfffff7f2
006EE4F3  89 07                     MOV dword ptr [EDI],EAX
006EE4F5  25 00 44 00 00            AND EAX,0x4400
006EE4FA  3D 00 04 00 00            CMP EAX,0x400
006EE4FF  0F 85 07 04 00 00         JNZ 0x006ee90c
006EE505  8B 8F 94 00 00 00         MOV ECX,dword ptr [EDI + 0x94]
006EE50B  49                        DEC ECX
006EE50C  0F 88 FA 03 00 00         JS 0x006ee90c
LAB_006ee512:
006EE512  8B 97 A4 00 00 00         MOV EDX,dword ptr [EDI + 0xa4]
006EE518  66 81 64 8A 02 7F FF      AND word ptr [EDX + ECX*0x4 + 0x2],0xff7f
006EE51F  8D 44 8A 02               LEA EAX,[EDX + ECX*0x4 + 0x2]
006EE523  49                        DEC ECX
006EE524  79 EC                     JNS 0x006ee512
006EE526  E9 E1 03 00 00            JMP 0x006ee90c
LAB_006ee52b:
006EE52B  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EE531  8B 86 2C 03 00 00         MOV EAX,dword ptr [ESI + 0x32c]
006EE537  41                        INC ECX
006EE538  3B C8                     CMP ECX,EAX
006EE53A  7C 30                     JL 0x006ee56c
006EE53C  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE542  8D 94 40 96 00 00 00      LEA EDX,[EAX + EAX*0x2 + 0x96]
006EE549  8D 44 90 32               LEA EAX,[EAX + EDX*0x4 + 0x32]
006EE54D  C1 E0 03                  SHL EAX,0x3
006EE550  50                        PUSH EAX
006EE551  51                        PUSH ECX
006EE552  E8 F9 15 FD FF            CALL 0x006bfb50
006EE557  3B C3                     CMP EAX,EBX
006EE559  89 86 30 03 00 00         MOV dword ptr [ESI + 0x330],EAX
006EE55F  0F 84 75 05 00 00         JZ 0x006eeada
006EE565  83 86 2C 03 00 00 32      ADD dword ptr [ESI + 0x32c],0x32
LAB_006ee56c:
006EE56C  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE572  8B 17                     MOV EDX,dword ptr [EDI]
006EE574  83 E2 DF                  AND EDX,0xffffffdf
006EE577  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EE57A  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006EE57D  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE583  89 14 C1                  MOV dword ptr [ECX + EAX*0x8],EDX
006EE586  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE58C  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006EE58F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EE592  80 E6 7F                  AND DH,0x7f
006EE595  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006EE598  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE59E  89 54 C1 04               MOV dword ptr [ECX + EAX*0x8 + 0x4],EDX
006EE5A2  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE5A8  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE5AE  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EE5B1  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EE5B4  C7 44 C1 60 FF FF FF FF   MOV dword ptr [ECX + EAX*0x8 + 0x60],0xffffffff
006EE5BC  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE5C2  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE5C8  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EE5CB  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EE5CE  89 7C C1 64               MOV dword ptr [ECX + EAX*0x8 + 0x64],EDI
006EE5D2  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE5D8  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE5DE  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EE5E1  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EE5E4  89 5C C1 1C               MOV dword ptr [ECX + EAX*0x8 + 0x1c],EBX
006EE5E8  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE5EE  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE5F4  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EE5F7  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EE5FA  89 5C C1 18               MOV dword ptr [ECX + EAX*0x8 + 0x18],EBX
006EE5FE  8B 07                     MOV EAX,dword ptr [EDI]
006EE600  A8 02                     TEST AL,0x2
006EE602  0F 85 DB 02 00 00         JNZ 0x006ee8e3
006EE608  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006EE60B  F6 C5 10                  TEST CH,0x10
006EE60E  0F 85 CF 02 00 00         JNZ 0x006ee8e3
006EE614  F6 C4 08                  TEST AH,0x8
006EE617  0F 84 E0 02 00 00         JZ 0x006ee8fd
006EE61D  8B 47 54                  MOV EAX,dword ptr [EDI + 0x54]
006EE620  8B 4F 5C                  MOV ECX,dword ptr [EDI + 0x5c]
006EE623  8B 57 58                  MOV EDX,dword ptr [EDI + 0x58]
006EE626  8B 5F 60                  MOV EBX,dword ptr [EDI + 0x60]
006EE629  03 C8                     ADD ECX,EAX
006EE62B  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006EE62E  8B 87 94 00 00 00         MOV EAX,dword ptr [EDI + 0x94]
006EE634  03 DA                     ADD EBX,EDX
006EE636  85 C0                     TEST EAX,EAX
006EE638  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006EE63B  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006EE63E  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006EE641  C7 45 C4 00 00 00 00      MOV dword ptr [EBP + -0x3c],0x0
006EE648  0F 8E 88 01 00 00         JLE 0x006ee7d6
LAB_006ee64e:
006EE64E  8B 97 A0 00 00 00         MOV EDX,dword ptr [EDI + 0xa0]
006EE654  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006EE657  8B 4C C2 04               MOV ECX,dword ptr [EDX + EAX*0x8 + 0x4]
006EE65B  85 C9                     TEST ECX,ECX
006EE65D  0F 84 5B 01 00 00         JZ 0x006ee7be
006EE663  8B 97 A4 00 00 00         MOV EDX,dword ptr [EDI + 0xa4]
006EE669  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
006EE66C  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006EE670  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006EE673  80 E2 C0                  AND DL,0xc0
006EE676  80 FA C0                  CMP DL,0xc0
006EE679  0F 85 3F 01 00 00         JNZ 0x006ee7be
006EE67F  0F BF 10                  MOVSX EDX,word ptr [EAX]
006EE682  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
006EE688  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
006EE68B  85 C0                     TEST EAX,EAX
006EE68D  0F 84 BA 00 00 00         JZ 0x006ee74d
006EE693  F6 47 04 04               TEST byte ptr [EDI + 0x4],0x4
006EE697  0F 85 B0 00 00 00         JNZ 0x006ee74d
006EE69D  F6 45 F0 02               TEST byte ptr [EBP + -0x10],0x2
006EE6A1  0F 85 A6 00 00 00         JNZ 0x006ee74d
006EE6A7  8B 59 04                  MOV EBX,dword ptr [ECX + 0x4]
006EE6AA  8B 96 F0 02 00 00         MOV EDX,dword ptr [ESI + 0x2f0]
006EE6B0  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006EE6B3  0F AF D3                  IMUL EDX,EBX
006EE6B6  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006EE6B9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006EE6BE  F7 EA                     IMUL EDX
006EE6C0  C1 FA 05                  SAR EDX,0x5
006EE6C3  8B C2                     MOV EAX,EDX
006EE6C5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006EE6C8  C1 E8 1F                  SHR EAX,0x1f
006EE6CB  03 D0                     ADD EDX,EAX
006EE6CD  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006EE6D2  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
006EE6D5  8B 96 F4 02 00 00         MOV EDX,dword ptr [ESI + 0x2f4]
006EE6DB  0F AF 55 E4               IMUL EDX,dword ptr [EBP + -0x1c]
006EE6DF  F7 EA                     IMUL EDX
006EE6E1  C1 FA 05                  SAR EDX,0x5
006EE6E4  8B C2                     MOV EAX,EDX
006EE6E6  C1 E8 1F                  SHR EAX,0x1f
006EE6E9  03 D0                     ADD EDX,EAX
006EE6EB  8B C3                     MOV EAX,EBX
006EE6ED  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
006EE6F0  0F BF 51 0E               MOVSX EDX,word ptr [ECX + 0xe]
006EE6F4  0F AF 55 A4               IMUL EDX,dword ptr [EBP + -0x5c]
006EE6F8  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006EE6FB  99                        CDQ
006EE6FC  2B C2                     SUB EAX,EDX
006EE6FE  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006EE701  D1 F8                     SAR EAX,0x1
006EE703  03 C2                     ADD EAX,EDX
006EE705  99                        CDQ
006EE706  F7 FB                     IDIV EBX
006EE708  03 47 54                  ADD EAX,dword ptr [EDI + 0x54]
006EE70B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006EE70E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EE711  0F BF 59 10               MOVSX EBX,word ptr [ECX + 0x10]
006EE715  0F AF 5D B0               IMUL EBX,dword ptr [EBP + -0x50]
006EE719  99                        CDQ
006EE71A  2B C2                     SUB EAX,EDX
006EE71C  D1 F8                     SAR EAX,0x1
006EE71E  03 C3                     ADD EAX,EBX
006EE720  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006EE723  99                        CDQ
006EE724  F7 7D E4                  IDIV dword ptr [EBP + -0x1c]
006EE727  03 47 58                  ADD EAX,dword ptr [EDI + 0x58]
006EE72A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006EE72D  0F BF 41 12               MOVSX EAX,word ptr [ECX + 0x12]
006EE731  0F AF 45 A4               IMUL EAX,dword ptr [EBP + -0x5c]
006EE735  99                        CDQ
006EE736  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
006EE739  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006EE73C  0F BF 41 14               MOVSX EAX,word ptr [ECX + 0x14]
006EE740  0F AF 45 B0               IMUL EAX,dword ptr [EBP + -0x50]
006EE744  99                        CDQ
006EE745  F7 7D E4                  IDIV dword ptr [EBP + -0x1c]
006EE748  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006EE74B  EB 24                     JMP 0x006ee771
LAB_006ee74d:
006EE74D  0F BF 41 0E               MOVSX EAX,word ptr [ECX + 0xe]
006EE751  03 47 4C                  ADD EAX,dword ptr [EDI + 0x4c]
006EE754  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006EE757  8B 47 50                  MOV EAX,dword ptr [EDI + 0x50]
006EE75A  0F BF 51 10               MOVSX EDX,word ptr [ECX + 0x10]
006EE75E  03 D0                     ADD EDX,EAX
006EE760  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006EE763  0F BF 41 12               MOVSX EAX,word ptr [ECX + 0x12]
006EE767  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006EE76A  0F BF 49 14               MOVSX ECX,word ptr [ECX + 0x14]
006EE76E  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_006ee771:
006EE771  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
006EE777  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006EE77A  52                        PUSH EDX
006EE77B  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006EE77E  E8 DD 1C FC FF            CALL 0x006b0460
006EE783  85 C0                     TEST EAX,EAX
006EE785  74 37                     JZ 0x006ee7be
006EE787  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006EE78A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006EE78D  3B C8                     CMP ECX,EAX
006EE78F  7E 03                     JLE 0x006ee794
006EE791  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006ee794:
006EE794  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
006EE797  3B D9                     CMP EBX,ECX
006EE799  7E 05                     JLE 0x006ee7a0
006EE79B  8B D9                     MOV EBX,ECX
006EE79D  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
LAB_006ee7a0:
006EE7A0  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006EE7A3  03 C2                     ADD EAX,EDX
006EE7A5  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006EE7A8  3B D0                     CMP EDX,EAX
006EE7AA  7D 03                     JGE 0x006ee7af
006EE7AC  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006ee7af:
006EE7AF  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006EE7B2  03 C1                     ADD EAX,ECX
006EE7B4  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006EE7B7  3B C8                     CMP ECX,EAX
006EE7B9  7D 03                     JGE 0x006ee7be
006EE7BB  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_006ee7be:
006EE7BE  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006EE7C1  8B 8F 94 00 00 00         MOV ECX,dword ptr [EDI + 0x94]
006EE7C7  40                        INC EAX
006EE7C8  3B C1                     CMP EAX,ECX
006EE7CA  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006EE7CD  0F 8C 7B FE FF FF         JL 0x006ee64e
006EE7D3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_006ee7d6:
006EE7D6  3B 4D D4                  CMP ECX,dword ptr [EBP + -0x2c]
006EE7D9  0F 8D 1E 01 00 00         JGE 0x006ee8fd
006EE7DF  3B 5D E0                  CMP EBX,dword ptr [EBP + -0x20]
006EE7E2  0F 8D 15 01 00 00         JGE 0x006ee8fd
006EE7E8  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE7EE  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EE7F1  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EE7F4  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EE7FA  89 4C C2 08               MOV dword ptr [EDX + EAX*0x8 + 0x8],ECX
006EE7FE  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE804  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EE807  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EE80A  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EE810  89 5C C2 0C               MOV dword ptr [EDX + EAX*0x8 + 0xc],EBX
006EE814  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006EE817  2B C1                     SUB EAX,ECX
006EE819  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EE81F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006EE822  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EE825  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006EE828  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EE82E  89 44 CA 10               MOV dword ptr [EDX + ECX*0x8 + 0x10],EAX
006EE832  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EE838  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006EE83B  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EE83E  2B C3                     SUB EAX,EBX
006EE840  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006EE843  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006EE846  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EE84C  89 44 CA 14               MOV dword ptr [EDX + ECX*0x8 + 0x14],EAX
006EE850  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EE856  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EE859  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006EE85C  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EE862  C7 44 CA 18 01 00 00 00   MOV dword ptr [EDX + ECX*0x8 + 0x18],0x1
006EE86A  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EE870  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EE873  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006EE876  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EE87C  89 5C CA 20               MOV dword ptr [EDX + ECX*0x8 + 0x20],EBX
006EE880  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EE886  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006EE889  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EE88C  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006EE88F  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EE895  89 5C CA 24               MOV dword ptr [EDX + ECX*0x8 + 0x24],EBX
006EE899  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EE89F  8B 9E 30 03 00 00         MOV EBX,dword ptr [ESI + 0x330]
006EE8A5  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EE8A8  8D 14 91                  LEA EDX,[ECX + EDX*0x4]
006EE8AB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EE8AE  89 4C D3 28               MOV dword ptr [EBX + EDX*0x8 + 0x28],ECX
006EE8B2  8B 96 28 03 00 00         MOV EDX,dword ptr [ESI + 0x328]
006EE8B8  8D 1C 52                  LEA EBX,[EDX + EDX*0x2]
006EE8BB  8D 14 9A                  LEA EDX,[EDX + EBX*0x4]
006EE8BE  8B 9E 30 03 00 00         MOV EBX,dword ptr [ESI + 0x330]
006EE8C4  89 44 D3 2C               MOV dword ptr [EBX + EDX*0x8 + 0x2c],EAX
006EE8C8  0F AF C1                  IMUL EAX,ECX
006EE8CB  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EE8D1  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EE8D4  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006EE8D7  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EE8DD  89 44 CA 1C               MOV dword ptr [EDX + ECX*0x8 + 0x1c],EAX
006EE8E1  EB 1A                     JMP 0x006ee8fd
LAB_006ee8e3:
006EE8E3  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE8E9  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EE8EC  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
006EE8EF  8B 86 30 03 00 00         MOV EAX,dword ptr [ESI + 0x330]
006EE8F5  C7 44 D0 18 05 00 00 00   MOV dword ptr [EAX + EDX*0x8 + 0x18],0x5
LAB_006ee8fd:
006EE8FD  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE903  40                        INC EAX
006EE904  33 DB                     XOR EBX,EBX
006EE906  89 86 28 03 00 00         MOV dword ptr [ESI + 0x328],EAX
LAB_006ee90c:
006EE90C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EE90F  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
006EE915  40                        INC EAX
006EE916  81 C7 14 01 00 00         ADD EDI,0x114
006EE91C  3B C1                     CMP EAX,ECX
006EE91E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006EE921  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006EE924  0F 8C B4 FB FF FF         JL 0x006ee4de
LAB_006ee92a:
006EE92A  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE930  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE936  68 C0 CF 6E 00            PUSH 0x6ecfc0
006EE93B  6A 68                     PUSH 0x68
006EE93D  50                        PUSH EAX
006EE93E  51                        PUSH ECX
006EE93F  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006EE942  E8 89 E3 FB FF            CALL 0x006accd0
006EE947  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006EE94D  8B BE 1C 03 00 00         MOV EDI,dword ptr [ESI + 0x31c]
006EE953  3B C3                     CMP EAX,EBX
006EE955  89 9E 24 03 00 00         MOV dword ptr [ESI + 0x324],EBX
006EE95B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006EE95E  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006EE961  0F 8E 37 01 00 00         JLE 0x006eea9e
LAB_006ee967:
006EE967  39 9F 90 00 00 00         CMP dword ptr [EDI + 0x90],EBX
006EE96D  0F 8E 0D 01 00 00         JLE 0x006eea80
006EE973  8B 07                     MOV EAX,dword ptr [EDI]
006EE975  8B D0                     MOV EDX,EAX
006EE977  83 E2 05                  AND EDX,0x5
006EE97A  80 FA 01                  CMP DL,0x1
006EE97D  74 08                     JZ 0x006ee987
006EE97F  A8 02                     TEST AL,0x2
006EE981  0F 84 F9 00 00 00         JZ 0x006eea80
LAB_006ee987:
006EE987  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EE98D  8B 86 2C 03 00 00         MOV EAX,dword ptr [ESI + 0x32c]
006EE993  41                        INC ECX
006EE994  3B C8                     CMP ECX,EAX
006EE996  7C 30                     JL 0x006ee9c8
006EE998  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE99E  8D 94 40 96 00 00 00      LEA EDX,[EAX + EAX*0x2 + 0x96]
006EE9A5  8D 44 90 32               LEA EAX,[EAX + EDX*0x4 + 0x32]
006EE9A9  C1 E0 03                  SHL EAX,0x3
006EE9AC  50                        PUSH EAX
006EE9AD  51                        PUSH ECX
006EE9AE  E8 9D 11 FD FF            CALL 0x006bfb50
006EE9B3  3B C3                     CMP EAX,EBX
006EE9B5  89 86 30 03 00 00         MOV dword ptr [ESI + 0x330],EAX
006EE9BB  0F 84 19 01 00 00         JZ 0x006eeada
006EE9C1  83 86 2C 03 00 00 32      ADD dword ptr [ESI + 0x32c],0x32
LAB_006ee9c8:
006EE9C8  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE9CE  8B 17                     MOV EDX,dword ptr [EDI]
006EE9D0  83 E2 DF                  AND EDX,0xffffffdf
006EE9D3  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EE9D6  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006EE9D9  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE9DF  89 14 C1                  MOV dword ptr [ECX + EAX*0x8],EDX
006EE9E2  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EE9E8  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006EE9EB  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EE9EE  80 E6 7F                  AND DH,0x7f
006EE9F1  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006EE9F4  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EE9FA  89 54 C1 04               MOV dword ptr [ECX + EAX*0x8 + 0x4],EDX
006EE9FE  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEA04  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EEA0A  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEA0D  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEA10  C7 44 C1 60 FF FF FF FF   MOV dword ptr [ECX + EAX*0x8 + 0x60],0xffffffff
006EEA18  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEA1E  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EEA24  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEA27  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEA2A  89 7C C1 64               MOV dword ptr [ECX + EAX*0x8 + 0x64],EDI
006EEA2E  8B 17                     MOV EDX,dword ptr [EDI]
006EEA30  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEA36  80 E2 02                  AND DL,0x2
006EEA39  F6 DA                     NEG DL
006EEA3B  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EEA3E  1B D2                     SBB EDX,EDX
006EEA40  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006EEA43  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EEA49  83 E2 05                  AND EDX,0x5
006EEA4C  89 54 C1 18               MOV dword ptr [ECX + EAX*0x8 + 0x18],EDX
006EEA50  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEA56  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EEA5C  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEA5F  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEA62  89 5C C1 1C               MOV dword ptr [ECX + EAX*0x8 + 0x1c],EBX
006EEA66  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EEA6C  8B 86 24 03 00 00         MOV EAX,dword ptr [ESI + 0x324]
006EEA72  41                        INC ECX
006EEA73  40                        INC EAX
006EEA74  89 8E 28 03 00 00         MOV dword ptr [ESI + 0x328],ECX
006EEA7A  89 86 24 03 00 00         MOV dword ptr [ESI + 0x324],EAX
LAB_006eea80:
006EEA80  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EEA83  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
006EEA89  40                        INC EAX
006EEA8A  81 C7 14 01 00 00         ADD EDI,0x114
006EEA90  3B C1                     CMP EAX,ECX
006EEA92  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006EEA95  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006EEA98  0F 8C C9 FE FF FF         JL 0x006ee967
LAB_006eea9e:
006EEA9E  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006EEAA4  8B BE 1C 03 00 00         MOV EDI,dword ptr [ESI + 0x31c]
006EEAAA  3B C3                     CMP EAX,EBX
006EEAAC  89 9E 20 03 00 00         MOV dword ptr [ESI + 0x320],EBX
006EEAB2  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006EEAB5  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006EEAB8  0F 8E 09 02 00 00         JLE 0x006eecc7
LAB_006eeabe:
006EEABE  8B 07                     MOV EAX,dword ptr [EDI]
006EEAC0  8B D0                     MOV EDX,EAX
006EEAC2  83 E2 50                  AND EDX,0x50
006EEAC5  80 FA 10                  CMP DL,0x10
006EEAC8  74 28                     JZ 0x006eeaf2
006EEACA  A8 20                     TEST AL,0x20
006EEACC  75 24                     JNZ 0x006eeaf2
006EEACE  25 AF DF FF FF            AND EAX,0xffffdfaf
006EEAD3  89 07                     MOV dword ptr [EDI],EAX
006EEAD5  E9 B3 01 00 00            JMP 0x006eec8d
LAB_006eeada:
006EEADA  89 9E 30 03 00 00         MOV dword ptr [ESI + 0x330],EBX
006EEAE0  89 9E 2C 03 00 00         MOV dword ptr [ESI + 0x32c],EBX
006EEAE6  C7 45 EC FE FF FF FF      MOV dword ptr [EBP + -0x14],0xfffffffe
006EEAED  E9 DE 05 00 00            JMP 0x006ef0d0
LAB_006eeaf2:
006EEAF2  8B 8F E0 00 00 00         MOV ECX,dword ptr [EDI + 0xe0]
006EEAF8  8B 96 28 03 00 00         MOV EDX,dword ptr [ESI + 0x328]
006EEAFE  8B 86 2C 03 00 00         MOV EAX,dword ptr [ESI + 0x32c]
006EEB04  03 D1                     ADD EDX,ECX
006EEB06  3B D0                     CMP EDX,EAX
006EEB08  7C 3B                     JL 0x006eeb45
006EEB0A  8D 44 08 32               LEA EAX,[EAX + ECX*0x1 + 0x32]
006EEB0E  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EEB11  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
006EEB14  8B 86 30 03 00 00         MOV EAX,dword ptr [ESI + 0x330]
006EEB1A  C1 E2 03                  SHL EDX,0x3
006EEB1D  52                        PUSH EDX
006EEB1E  50                        PUSH EAX
006EEB1F  E8 2C 10 FD FF            CALL 0x006bfb50
006EEB24  3B C3                     CMP EAX,EBX
006EEB26  89 86 30 03 00 00         MOV dword ptr [ESI + 0x330],EAX
006EEB2C  74 AC                     JZ 0x006eeada
006EEB2E  8B 8F E0 00 00 00         MOV ECX,dword ptr [EDI + 0xe0]
006EEB34  8B 86 2C 03 00 00         MOV EAX,dword ptr [ESI + 0x32c]
006EEB3A  83 C1 32                  ADD ECX,0x32
006EEB3D  03 C1                     ADD EAX,ECX
006EEB3F  89 86 2C 03 00 00         MOV dword ptr [ESI + 0x32c],EAX
LAB_006eeb45:
006EEB45  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006EEB4B  8B 97 F0 00 00 00         MOV EDX,dword ptr [EDI + 0xf0]
006EEB51  33 C9                     XOR ECX,ECX
006EEB53  3B C3                     CMP EAX,EBX
006EEB55  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
006EEB5B  0F 8E 2C 01 00 00         JLE 0x006eec8d
LAB_006eeb61:
006EEB61  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
006EEB67  F6 00 02                  TEST byte ptr [EAX],0x2
006EEB6A  0F 85 FF 00 00 00         JNZ 0x006eec6f
006EEB70  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEB76  8B 17                     MOV EDX,dword ptr [EDI]
006EEB78  80 E2 7C                  AND DL,0x7c
006EEB7B  8D 1C 40                  LEA EBX,[EAX + EAX*0x2]
006EEB7E  8D 04 98                  LEA EAX,[EAX + EBX*0x4]
006EEB81  8B 9E 30 03 00 00         MOV EBX,dword ptr [ESI + 0x330]
006EEB87  89 14 C3                  MOV dword ptr [EBX + EAX*0x8],EDX
006EEB8A  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEB90  8B 5F 04                  MOV EBX,dword ptr [EDI + 0x4]
006EEB93  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEB96  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEB99  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EEB9F  89 5C C2 04               MOV dword ptr [EDX + EAX*0x8 + 0x4],EBX
006EEBA3  8A 07                     MOV AL,byte ptr [EDI]
006EEBA5  A8 20                     TEST AL,0x20
006EEBA7  74 18                     JZ 0x006eebc1
006EEBA9  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEBAF  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEBB2  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEBB5  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EEBBB  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
006EEBBE  83 08 02                  OR dword ptr [EAX],0x2
LAB_006eebc1:
006EEBC1  F6 07 10                  TEST byte ptr [EDI],0x10
006EEBC4  74 18                     JZ 0x006eebde
006EEBC6  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEBCC  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEBCF  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEBD2  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EEBD8  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
006EEBDB  83 08 01                  OR dword ptr [EAX],0x1
LAB_006eebde:
006EEBDE  F6 07 40                  TEST byte ptr [EDI],0x40
006EEBE1  75 18                     JNZ 0x006eebfb
006EEBE3  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEBE9  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEBEC  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEBEF  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EEBF5  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
006EEBF8  83 20 FB                  AND dword ptr [EAX],0xfffffffb
LAB_006eebfb:
006EEBFB  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEC01  33 DB                     XOR EBX,EBX
006EEC03  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEC06  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEC09  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EEC0F  89 4C C2 60               MOV dword ptr [EDX + EAX*0x8 + 0x60],ECX
006EEC13  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEC19  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEC1C  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEC1F  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EEC25  89 7C C2 64               MOV dword ptr [EDX + EAX*0x8 + 0x64],EDI
006EEC29  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEC2F  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEC32  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEC35  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EEC3B  89 5C C2 18               MOV dword ptr [EDX + EAX*0x8 + 0x18],EBX
006EEC3F  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EEC45  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EEC48  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EEC4B  8B 96 30 03 00 00         MOV EDX,dword ptr [ESI + 0x330]
006EEC51  89 5C C2 1C               MOV dword ptr [EDX + EAX*0x8 + 0x1c],EBX
006EEC55  8B 96 28 03 00 00         MOV EDX,dword ptr [ESI + 0x328]
006EEC5B  8B 86 20 03 00 00         MOV EAX,dword ptr [ESI + 0x320]
006EEC61  42                        INC EDX
006EEC62  40                        INC EAX
006EEC63  89 96 28 03 00 00         MOV dword ptr [ESI + 0x328],EDX
006EEC69  89 86 20 03 00 00         MOV dword ptr [ESI + 0x320],EAX
LAB_006eec6f:
006EEC6F  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
006EEC75  83 C0 10                  ADD EAX,0x10
006EEC78  41                        INC ECX
006EEC79  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
006EEC7F  8B 87 E0 00 00 00         MOV EAX,dword ptr [EDI + 0xe0]
006EEC85  3B C8                     CMP ECX,EAX
006EEC87  0F 8C D4 FE FF FF         JL 0x006eeb61
LAB_006eec8d:
006EEC8D  8B 8F 00 01 00 00         MOV ECX,dword ptr [EDI + 0x100]
006EEC93  8D 87 00 01 00 00         LEA EAX,[EDI + 0x100]
006EEC99  3B CB                     CMP ECX,EBX
006EEC9B  74 06                     JZ 0x006eeca3
006EEC9D  50                        PUSH EAX
006EEC9E  E8 BD C3 FB FF            CALL 0x006ab060
LAB_006eeca3:
006EECA3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EECA6  89 9F FC 00 00 00         MOV dword ptr [EDI + 0xfc],EBX
006EECAC  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
006EECB2  40                        INC EAX
006EECB3  81 C7 14 01 00 00         ADD EDI,0x114
006EECB9  3B C1                     CMP EAX,ECX
006EECBB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006EECBE  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006EECC1  0F 8C F7 FD FF FF         JL 0x006eeabe
LAB_006eecc7:
006EECC7  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006EECCA  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
006EECCD  3B C3                     CMP EAX,EBX
006EECCF  0F 8E 92 00 00 00         JLE 0x006eed67
006EECD5  33 DB                     XOR EBX,EBX
LAB_006eecd7:
006EECD7  8B 86 30 03 00 00         MOV EAX,dword ptr [ESI + 0x330]
006EECDD  8D 3C 18                  LEA EDI,[EAX + EBX*0x1]
006EECE0  8B 44 18 04               MOV EAX,dword ptr [EAX + EBX*0x1 + 0x4]
006EECE4  A8 40                     TEST AL,0x40
006EECE6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006EECE9  74 58                     JZ 0x006eed43
006EECEB  8B 57 64                  MOV EDX,dword ptr [EDI + 0x64]
006EECEE  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
006EECF1  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EECF4  C1 E0 03                  SHL EAX,0x3
006EECF7  2B C1                     SUB EAX,ECX
006EECF9  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EECFC  8B 86 1C 03 00 00         MOV EAX,dword ptr [ESI + 0x31c]
006EED02  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006EED05  F6 00 03                  TEST byte ptr [EAX],0x3
006EED08  75 0A                     JNZ 0x006eed14
006EED0A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006EED0D  24 BF                     AND AL,0xbf
006EED0F  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
006EED12  EB 2F                     JMP 0x006eed43
LAB_006eed14:
006EED14  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
006EED17  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006EED1D  66 81 4C 8A 02 01 C0      OR word ptr [EDX + ECX*0x4 + 0x2],0xc001
006EED24  8D 4C 8A 02               LEA ECX,[EDX + ECX*0x4 + 0x2]
006EED28  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EED2E  8B 54 19 64               MOV EDX,dword ptr [ECX + EBX*0x1 + 0x64]
006EED32  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
006EED35  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006EED3B  66 8B 45 B0               MOV AX,word ptr [EBP + -0x50]
006EED3F  66 89 04 8A               MOV word ptr [EDX + ECX*0x4],AX
LAB_006eed43:
006EED43  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EED49  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006EED4C  8B 54 19 64               MOV EDX,dword ptr [ECX + EBX*0x1 + 0x64]
006EED50  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006EED53  83 C3 68                  ADD EBX,0x68
006EED56  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
006EED59  40                        INC EAX
006EED5A  3B C1                     CMP EAX,ECX
006EED5C  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006EED5F  0F 8C 72 FF FF FF         JL 0x006eecd7
006EED65  33 DB                     XOR EBX,EBX
LAB_006eed67:
006EED67  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006EED6A  8B CE                     MOV ECX,ESI
006EED6C  E8 9F D2 FF FF            CALL 0x006ec010
006EED71  3B FB                     CMP EDI,EBX
006EED73  75 05                     JNZ 0x006eed7a
006EED75  8B F8                     MOV EDI,EAX
006EED77  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
LAB_006eed7a:
006EED7A  8B CE                     MOV ECX,ESI
006EED7C  E8 6F A8 03 00            CALL 0x007295f0
006EED81  3B FB                     CMP EDI,EBX
006EED83  75 05                     JNZ 0x006eed8a
006EED85  8B F8                     MOV EDI,EAX
006EED87  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
LAB_006eed8a:
006EED8A  8B CE                     MOV ECX,ESI
006EED8C  E8 BF 98 01 00            CALL 0x00708650
006EED91  3B FB                     CMP EDI,EBX
006EED93  75 03                     JNZ 0x006eed98
006EED95  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006eed98:
006EED98  8B 86 28 03 00 00         MOV EAX,dword ptr [ESI + 0x328]
006EED9E  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
006EEDA1  3B C3                     CMP EAX,EBX
006EEDA3  7E 69                     JLE 0x006eee0e
006EEDA5  33 FF                     XOR EDI,EDI
LAB_006eeda7:
006EEDA7  8B 86 30 03 00 00         MOV EAX,dword ptr [ESI + 0x330]
006EEDAD  03 C7                     ADD EAX,EDI
006EEDAF  F6 40 04 40               TEST byte ptr [EAX + 0x4],0x40
006EEDB3  74 45                     JZ 0x006eedfa
006EEDB5  8B 50 64                  MOV EDX,dword ptr [EAX + 0x64]
006EEDB8  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
006EEDBB  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EEDBE  C1 E0 03                  SHL EAX,0x3
006EEDC1  2B C1                     SUB EAX,ECX
006EEDC3  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EEDC6  8B 86 1C 03 00 00         MOV EAX,dword ptr [ESI + 0x31c]
006EEDCC  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006EEDCF  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
006EEDD2  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006EEDD8  66 81 64 8A 02 FE 3F      AND word ptr [EDX + ECX*0x4 + 0x2],0x3ffe
006EEDDF  8D 4C 8A 02               LEA ECX,[EDX + ECX*0x4 + 0x2]
006EEDE3  8B 8E 30 03 00 00         MOV ECX,dword ptr [ESI + 0x330]
006EEDE9  8B 54 39 64               MOV EDX,dword ptr [ECX + EDI*0x1 + 0x64]
006EEDED  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
006EEDF0  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006EEDF6  66 89 1C 8A               MOV word ptr [EDX + ECX*0x4],BX
LAB_006eedfa:
006EEDFA  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006EEDFD  8B 8E 28 03 00 00         MOV ECX,dword ptr [ESI + 0x328]
006EEE03  40                        INC EAX
006EEE04  83 C7 68                  ADD EDI,0x68
006EEE07  3B C1                     CMP EAX,ECX
006EEE09  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006EEE0C  7C 99                     JL 0x006eeda7
LAB_006eee0e:
006EEE0E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006EEE11  89 9E D8 02 00 00         MOV dword ptr [ESI + 0x2d8],EBX
006EEE17  3B C3                     CMP EAX,EBX
006EEE19  0F 85 B1 02 00 00         JNZ 0x006ef0d0
006EEE1F  39 9E 34 03 00 00         CMP dword ptr [ESI + 0x334],EBX
006EEE25  75 0C                     JNZ 0x006eee33
006EEE27  39 9E 38 03 00 00         CMP dword ptr [ESI + 0x338],EBX
006EEE2D  0F 84 9D 02 00 00         JZ 0x006ef0d0
LAB_006eee33:
006EEE33  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006EEE36  50                        PUSH EAX
006EEE37  E8 74 CA FC FF            CALL 0x006bb8b0
006EEE3C  3B C3                     CMP EAX,EBX
006EEE3E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006EEE41  0F 85 89 02 00 00         JNZ 0x006ef0d0
006EEE47  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006EEE4A  8B 8A 78 04 00 00         MOV ECX,dword ptr [EDX + 0x478]
006EEE50  8B BA 74 04 00 00         MOV EDI,dword ptr [EDX + 0x474]
006EEE56  8B C1                     MOV EAX,ECX
006EEE58  8B 96 34 03 00 00         MOV EDX,dword ptr [ESI + 0x334]
006EEE5E  0F AF 46 24               IMUL EAX,dword ptr [ESI + 0x24]
006EEE62  03 C7                     ADD EAX,EDI
006EEE64  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
006EEE67  03 C7                     ADD EAX,EDI
006EEE69  3B D3                     CMP EDX,EBX
006EEE6B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006EEE6E  74 5D                     JZ 0x006eeecd
006EEE70  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006EEE73  8B 7E 30                  MOV EDI,dword ptr [ESI + 0x30]
006EEE76  8B DA                     MOV EBX,EDX
006EEE78  0F AF D9                  IMUL EBX,ECX
006EEE7B  03 DF                     ADD EBX,EDI
006EEE7D  03 C3                     ADD EAX,EBX
006EEE7F  8B 9E 34 03 00 00         MOV EBX,dword ptr [ESI + 0x334]
006EEE85  53                        PUSH EBX
006EEE86  8B 5E 3C                  MOV EBX,dword ptr [ESI + 0x3c]
006EEE89  2B DA                     SUB EBX,EDX
006EEE8B  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006EEE8E  2B D7                     SUB EDX,EDI
006EEE90  53                        PUSH EBX
006EEE91  52                        PUSH EDX
006EEE92  51                        PUSH ECX
006EEE93  50                        PUSH EAX
006EEE94  51                        PUSH ECX
006EEE95  50                        PUSH EAX
006EEE96  E8 F5 16 06 00            CALL 0x00750590
006EEE9B  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006EEE9E  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006EEEA1  2B D0                     SUB EDX,EAX
006EEEA3  C7 86 D8 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2d8],0x1
006EEEAD  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006EEEB0  52                        PUSH EDX
006EEEB1  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006EEEB4  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
006EEEB7  2B D1                     SUB EDX,ECX
006EEEB9  03 CF                     ADD ECX,EDI
006EEEBB  52                        PUSH EDX
006EEEBC  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
006EEEBF  03 C2                     ADD EAX,EDX
006EEEC1  50                        PUSH EAX
006EEEC2  8B 06                     MOV EAX,dword ptr [ESI]
006EEEC4  51                        PUSH ECX
006EEEC5  50                        PUSH EAX
006EEEC6  E8 B5 70 FC FF            CALL 0x006b5f80
006EEECB  33 DB                     XOR EBX,EBX
LAB_006eeecd:
006EEECD  8B BE 38 03 00 00         MOV EDI,dword ptr [ESI + 0x338]
006EEED3  3B FB                     CMP EDI,EBX
006EEED5  0F 84 DD 01 00 00         JZ 0x006ef0b8
006EEEDB  8B 8E 44 03 00 00         MOV ECX,dword ptr [ESI + 0x344]
006EEEE1  8B 96 48 03 00 00         MOV EDX,dword ptr [ESI + 0x348]
006EEEE7  8B 86 4C 03 00 00         MOV EAX,dword ptr [ESI + 0x34c]
006EEEED  6A 00                     PUSH 0x0
006EEEEF  6A 00                     PUSH 0x0
006EEEF1  6A 00                     PUSH 0x0
006EEEF3  6A 00                     PUSH 0x0
006EEEF5  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
006EEEF8  6A 00                     PUSH 0x0
006EEEFA  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
006EEEFD  6A 00                     PUSH 0x0
006EEEFF  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006EEF02  6A 00                     PUSH 0x0
006EEF04  8D 95 48 FF FF FF         LEA EDX,[EBP + 0xffffff48]
006EEF0A  51                        PUSH ECX
006EEF0B  52                        PUSH EDX
006EEF0C  8B CE                     MOV ECX,ESI
006EEF0E  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006EEF11  E8 BA 36 FF FF            CALL 0x006e25d0
006EEF16  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006EEF1C  8B 9D 4C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff4c]
006EEF22  C1 F8 10                  SAR EAX,0x10
006EEF25  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006EEF28  8B 86 F0 02 00 00         MOV EAX,dword ptr [ESI + 0x2f0]
006EEF2E  C1 FB 10                  SAR EBX,0x10
006EEF31  83 F8 64                  CMP EAX,0x64
006EEF34  75 3B                     JNZ 0x006eef71
006EEF36  8B 8E 40 03 00 00         MOV ECX,dword ptr [ESI + 0x340]
006EEF3C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EEF3F  8B 96 3C 03 00 00         MOV EDX,dword ptr [ESI + 0x33c]
006EEF45  2B D9                     SUB EBX,ECX
006EEF47  0F BF 4F 0E               MOVSX ECX,word ptr [EDI + 0xe]
006EEF4B  2B C2                     SUB EAX,EDX
006EEF4D  03 C8                     ADD ECX,EAX
006EEF4F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006EEF52  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006EEF55  0F BF 57 10               MOVSX EDX,word ptr [EDI + 0x10]
006EEF59  03 D3                     ADD EDX,EBX
006EEF5B  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006EEF5E  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
006EEF62  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006EEF65  0F BF 4F 14               MOVSX ECX,word ptr [EDI + 0x14]
006EEF69  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006EEF6C  E9 E4 00 00 00            JMP 0x006ef055
LAB_006eef71:
006EEF71  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006EEF74  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006EEF77  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006EEF7A  8B 96 F0 02 00 00         MOV EDX,dword ptr [ESI + 0x2f0]
006EEF80  0F AF D1                  IMUL EDX,ECX
006EEF83  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006EEF88  F7 EA                     IMUL EDX
006EEF8A  C1 FA 05                  SAR EDX,0x5
006EEF8D  8B C2                     MOV EAX,EDX
006EEF8F  C1 E8 1F                  SHR EAX,0x1f
006EEF92  03 D0                     ADD EDX,EAX
006EEF94  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006EEF99  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
006EEF9C  8B 96 F4 02 00 00         MOV EDX,dword ptr [ESI + 0x2f4]
006EEFA2  0F AF 55 E4               IMUL EDX,dword ptr [EBP + -0x1c]
006EEFA6  F7 EA                     IMUL EDX
006EEFA8  C1 FA 05                  SAR EDX,0x5
006EEFAB  8B C2                     MOV EAX,EDX
006EEFAD  C1 E8 1F                  SHR EAX,0x1f
006EEFB0  03 D0                     ADD EDX,EAX
006EEFB2  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006EEFB7  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
006EEFBA  8B 96 3C 03 00 00         MOV EDX,dword ptr [ESI + 0x33c]
006EEFC0  0F AF 96 F0 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f0]
006EEFC7  F7 EA                     IMUL EDX
006EEFC9  C1 FA 05                  SAR EDX,0x5
006EEFCC  8B C2                     MOV EAX,EDX
006EEFCE  C1 E8 1F                  SHR EAX,0x1f
006EEFD1  03 D0                     ADD EDX,EAX
006EEFD3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EEFD6  03 C2                     ADD EAX,EDX
006EEFD8  8B 96 40 03 00 00         MOV EDX,dword ptr [ESI + 0x340]
006EEFDE  0F AF 96 F4 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f4]
006EEFE5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006EEFE8  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006EEFED  F7 EA                     IMUL EDX
006EEFEF  C1 FA 05                  SAR EDX,0x5
006EEFF2  8B C2                     MOV EAX,EDX
006EEFF4  C1 E8 1F                  SHR EAX,0x1f
006EEFF7  03 D0                     ADD EDX,EAX
006EEFF9  8B C1                     MOV EAX,ECX
006EEFFB  03 DA                     ADD EBX,EDX
006EEFFD  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006EF000  0F BF 5F 0E               MOVSX EBX,word ptr [EDI + 0xe]
006EF004  0F AF 5D A4               IMUL EBX,dword ptr [EBP + -0x5c]
006EF008  99                        CDQ
006EF009  2B C2                     SUB EAX,EDX
006EF00B  D1 F8                     SAR EAX,0x1
006EF00D  03 C3                     ADD EAX,EBX
006EF00F  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006EF012  99                        CDQ
006EF013  F7 F9                     IDIV ECX
006EF015  03 C3                     ADD EAX,EBX
006EF017  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006EF01A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EF01D  0F BF 5F 10               MOVSX EBX,word ptr [EDI + 0x10]
006EF021  0F AF 5D B0               IMUL EBX,dword ptr [EBP + -0x50]
006EF025  99                        CDQ
006EF026  2B C2                     SUB EAX,EDX
006EF028  D1 F8                     SAR EAX,0x1
006EF02A  03 C3                     ADD EAX,EBX
006EF02C  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006EF02F  99                        CDQ
006EF030  F7 7D E4                  IDIV dword ptr [EBP + -0x1c]
006EF033  03 C3                     ADD EAX,EBX
006EF035  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006EF038  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
006EF03C  0F AF 45 A4               IMUL EAX,dword ptr [EBP + -0x5c]
006EF040  99                        CDQ
006EF041  F7 F9                     IDIV ECX
006EF043  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006EF046  0F BF 47 14               MOVSX EAX,word ptr [EDI + 0x14]
006EF04A  0F AF 45 B0               IMUL EAX,dword ptr [EBP + -0x50]
006EF04E  99                        CDQ
006EF04F  F7 7D E4                  IDIV dword ptr [EBP + -0x1c]
006EF052  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_006ef055:
006EF055  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
006EF05B  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006EF05E  51                        PUSH ECX
006EF05F  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006EF062  E8 F9 13 FC FF            CALL 0x006b0460
006EF067  85 C0                     TEST EAX,EAX
006EF069  74 4D                     JZ 0x006ef0b8
006EF06B  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006EF06E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006EF071  6A 00                     PUSH 0x0
006EF073  6A 00                     PUSH 0x0
006EF075  8B 88 78 04 00 00         MOV ECX,dword ptr [EAX + 0x478]
006EF07B  6A 00                     PUSH 0x0
006EF07D  53                        PUSH EBX
006EF07E  52                        PUSH EDX
006EF07F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006EF082  57                        PUSH EDI
006EF083  51                        PUSH ECX
006EF084  52                        PUSH EDX
006EF085  8B CE                     MOV ECX,ESI
006EF087  E8 84 9C 01 00            CALL 0x00708d10
006EF08C  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006EF08F  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006EF092  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
006EF095  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006EF098  50                        PUSH EAX
006EF099  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006EF09C  03 D3                     ADD EDX,EBX
006EF09E  51                        PUSH ECX
006EF09F  8B 0E                     MOV ECX,dword ptr [ESI]
006EF0A1  52                        PUSH EDX
006EF0A2  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
006EF0A5  C7 86 D8 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2d8],0x1
006EF0AF  03 C2                     ADD EAX,EDX
006EF0B1  50                        PUSH EAX
006EF0B2  51                        PUSH ECX
006EF0B3  E8 C8 6E FC FF            CALL 0x006b5f80
LAB_006ef0b8:
006EF0B8  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006EF0BB  52                        PUSH EDX
006EF0BC  E8 BF C8 FC FF            CALL 0x006bb980
006EF0C1  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006EF0C4  C7 80 0C 05 00 00 01 00 00 00  MOV dword ptr [EAX + 0x50c],0x1
LAB_006ef0ce:
006EF0CE  33 DB                     XOR EBX,EBX
LAB_006ef0d0:
006EF0D0  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006EF0D3  3B FB                     CMP EDI,EBX
006EF0D5  74 20                     JZ 0x006ef0f7
006EF0D7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006EF0DD  68 69 10 00 00            PUSH 0x1069
006EF0E2  68 4C EF 7E 00            PUSH 0x7eef4c
006EF0E7  51                        PUSH ECX
006EF0E8  57                        PUSH EDI
006EF0E9  E8 52 6D FB FF            CALL 0x006a5e40
006EF0EE  8B C7                     MOV EAX,EDI
006EF0F0  5F                        POP EDI
006EF0F1  5E                        POP ESI
006EF0F2  5B                        POP EBX
006EF0F3  8B E5                     MOV ESP,EBP
006EF0F5  5D                        POP EBP
006EF0F6  C3                        RET
LAB_006ef0f7:
006EF0F7  39 9E DC 02 00 00         CMP dword ptr [ESI + 0x2dc],EBX
006EF0FD  74 16                     JZ 0x006ef115
006EF0FF  8B 96 E0 02 00 00         MOV EDX,dword ptr [ESI + 0x2e0]
006EF105  8B CE                     MOV ECX,ESI
006EF107  52                        PUSH EDX
006EF108  6A 01                     PUSH 0x1
006EF10A  89 9E DC 02 00 00         MOV dword ptr [ESI + 0x2dc],EBX
006EF110  E8 4B 66 03 00            CALL 0x00725760
LAB_006ef115:
006EF115  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
LAB_006ef118:
006EF118  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
006EF11E  8B BE 1C 03 00 00         MOV EDI,dword ptr [ESI + 0x31c]
006EF124  33 C0                     XOR EAX,EAX
006EF126  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006EF129  3B C8                     CMP ECX,EAX
006EF12B  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006EF12E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006EF131  0F 8E 73 01 00 00         JLE 0x006ef2aa
LAB_006ef137:
006EF137  8B 07                     MOV EAX,dword ptr [EDI]
006EF139  F6 C4 40                  TEST AH,0x40
006EF13C  74 3D                     JZ 0x006ef17b
006EF13E  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
006EF144  C7 47 08 00 00 00 00      MOV dword ptr [EDI + 0x8],0x0
006EF14B  8B 86 EC 02 00 00         MOV EAX,dword ptr [ESI + 0x2ec]
006EF151  85 C0                     TEST EAX,EAX
006EF153  74 05                     JZ 0x006ef15a
006EF155  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
006EF158  EB 06                     JMP 0x006ef160
LAB_006ef15a:
006EF15A  89 BE E8 02 00 00         MOV dword ptr [ESI + 0x2e8],EDI
LAB_006ef160:
006EF160  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006EF166  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006EF169  48                        DEC EAX
006EF16A  89 BE EC 02 00 00         MOV dword ptr [ESI + 0x2ec],EDI
006EF170  3B C8                     CMP ECX,EAX
006EF172  75 07                     JNZ 0x006ef17b
006EF174  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
LAB_006ef17b:
006EF17B  8B 0F                     MOV ECX,dword ptr [EDI]
006EF17D  81 E1 00 82 00 00         AND ECX,0x8200
006EF183  81 F9 00 82 00 00         CMP ECX,0x8200
006EF189  0F 85 FD 00 00 00         JNZ 0x006ef28c
006EF18F  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006EF195  85 C0                     TEST EAX,EAX
006EF197  0F 84 EF 00 00 00         JZ 0x006ef28c
006EF19D  66 8B D3                  MOV DX,BX
006EF1A0  66 2B 96 A8 02 00 00      SUB DX,word ptr [ESI + 0x2a8]
006EF1A7  66 01 97 A8 00 00 00      ADD word ptr [EDI + 0xa8],DX
006EF1AE  66 83 BF A8 00 00 00 00   CMP word ptr [EDI + 0xa8],0x0
006EF1B6  0F 8F D0 00 00 00         JG 0x006ef28c
006EF1BC  8B 86 A8 02 00 00         MOV EAX,dword ptr [ESI + 0x2a8]
006EF1C2  8B C8                     MOV ECX,EAX
006EF1C4  2B CB                     SUB ECX,EBX
006EF1C6  85 C9                     TEST ECX,ECX
006EF1C8  0F 8E BE 00 00 00         JLE 0x006ef28c
006EF1CE  3B D8                     CMP EBX,EAX
006EF1D0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006EF1D7  8B CB                     MOV ECX,EBX
006EF1D9  7D 21                     JGE 0x006ef1fc
006EF1DB  0F BF 9F AA 00 00 00      MOVSX EBX,word ptr [EDI + 0xaa]
LAB_006ef1e2:
006EF1E2  8B C1                     MOV EAX,ECX
006EF1E4  99                        CDQ
006EF1E5  F7 FB                     IDIV EBX
006EF1E7  85 D2                     TEST EDX,EDX
006EF1E9  75 03                     JNZ 0x006ef1ee
006EF1EB  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_006ef1ee:
006EF1EE  8B 86 A8 02 00 00         MOV EAX,dword ptr [ESI + 0x2a8]
006EF1F4  41                        INC ECX
006EF1F5  3B C8                     CMP ECX,EAX
006EF1F7  7C E9                     JL 0x006ef1e2
006EF1F9  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
LAB_006ef1fc:
006EF1FC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EF1FF  85 C0                     TEST EAX,EAX
006EF201  0F 8E 85 00 00 00         JLE 0x006ef28c
006EF207  8B 87 94 00 00 00         MOV EAX,dword ptr [EDI + 0x94]
006EF20D  33 DB                     XOR EBX,EBX
006EF20F  3B C3                     CMP EAX,EBX
006EF211  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006EF214  7E 5B                     JLE 0x006ef271
LAB_006ef216:
006EF216  8B 97 A0 00 00 00         MOV EDX,dword ptr [EDI + 0xa0]
006EF21C  8B 44 DA 04               MOV EAX,dword ptr [EDX + EBX*0x8 + 0x4]
006EF220  8D 0C DA                  LEA ECX,[EDX + EBX*0x8]
006EF223  85 C0                     TEST EAX,EAX
006EF225  74 3C                     JZ 0x006ef263
006EF227  8B 87 A4 00 00 00         MOV EAX,dword ptr [EDI + 0xa4]
006EF22D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EF230  0F BF 04 98               MOVSX EAX,word ptr [EAX + EBX*0x4]
006EF234  03 C2                     ADD EAX,EDX
006EF236  8B 11                     MOV EDX,dword ptr [ECX]
006EF238  3B C2                     CMP EAX,EDX
006EF23A  7D 0A                     JGE 0x006ef246
006EF23C  50                        PUSH EAX
006EF23D  53                        PUSH EBX
006EF23E  57                        PUSH EDI
006EF23F  E8 CC A7 FF FF            CALL 0x006e9a10
006EF244  EB 20                     JMP 0x006ef266
LAB_006ef246:
006EF246  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006EF249  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
006EF250  8B 8F A0 00 00 00         MOV ECX,dword ptr [EDI + 0xa0]
006EF256  40                        INC EAX
006EF257  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006EF25A  C7 04 D9 00 00 00 00      MOV dword ptr [ECX + EBX*0x8],0x0
006EF261  EB 03                     JMP 0x006ef266
LAB_006ef263:
006EF263  FF 45 DC                  INC dword ptr [EBP + -0x24]
LAB_006ef266:
006EF266  8B 87 94 00 00 00         MOV EAX,dword ptr [EDI + 0x94]
006EF26C  43                        INC EBX
006EF26D  3B D8                     CMP EBX,EAX
006EF26F  7C A5                     JL 0x006ef216
LAB_006ef271:
006EF271  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006EF274  8B 87 94 00 00 00         MOV EAX,dword ptr [EDI + 0x94]
006EF27A  3B D0                     CMP EDX,EAX
006EF27C  7C 0B                     JL 0x006ef289
006EF27E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EF281  8B CE                     MOV ECX,ESI
006EF283  50                        PUSH EAX
006EF284  E8 17 99 FF FF            CALL 0x006e8ba0
LAB_006ef289:
006EF289  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
LAB_006ef28c:
006EF28C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EF28F  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
006EF295  40                        INC EAX
006EF296  81 C7 14 01 00 00         ADD EDI,0x114
006EF29C  3B C1                     CMP EAX,ECX
006EF29E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006EF2A1  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006EF2A4  0F 8C 8D FE FF FF         JL 0x006ef137
LAB_006ef2aa:
006EF2AA  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006EF2AD  85 C0                     TEST EAX,EAX
006EF2AF  74 40                     JZ 0x006ef2f1
006EF2B1  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
006EF2B7  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EF2BA  C1 E0 03                  SHL EAX,0x3
006EF2BD  2B C1                     SUB EAX,ECX
006EF2BF  85 C9                     TEST ECX,ECX
006EF2C1  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EF2C4  8B 86 1C 03 00 00         MOV EAX,dword ptr [ESI + 0x31c]
006EF2CA  8D 94 90 EC FE FF FF      LEA EDX,[EAX + EDX*0x4 + 0xfffffeec]
006EF2D1  7E 1E                     JLE 0x006ef2f1
LAB_006ef2d3:
006EF2D3  83 3A 00                  CMP dword ptr [EDX],0x0
006EF2D6  75 19                     JNZ 0x006ef2f1
006EF2D8  8B 9E 10 03 00 00         MOV EBX,dword ptr [ESI + 0x310]
006EF2DE  81 EA 14 01 00 00         SUB EDX,0x114
006EF2E4  4B                        DEC EBX
006EF2E5  8B C3                     MOV EAX,EBX
006EF2E7  89 9E 10 03 00 00         MOV dword ptr [ESI + 0x310],EBX
006EF2ED  85 C0                     TEST EAX,EAX
006EF2EF  7F E2                     JG 0x006ef2d3
LAB_006ef2f1:
006EF2F1  5F                        POP EDI
006EF2F2  5E                        POP ESI
006EF2F3  33 C0                     XOR EAX,EAX
006EF2F5  5B                        POP EBX
006EF2F6  8B E5                     MOV ESP,EBP
006EF2F8  5D                        POP EBP
006EF2F9  C3                        RET
