SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006F31D0::FUN_006f31d0:
006F31D0  55                        PUSH EBP
006F31D1  8B EC                     MOV EBP,ESP
006F31D3  83 EC 6C                  SUB ESP,0x6c
006F31D6  33 C0                     XOR EAX,EAX
006F31D8  53                        PUSH EBX
006F31D9  56                        PUSH ESI
006F31DA  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006F31DD  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006F31E0  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006F31E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F31E6  57                        PUSH EDI
006F31E7  8B F9                     MOV EDI,ECX
006F31E9  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
006F31F0  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006F31F3  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006F31F6  8B 97 30 03 00 00         MOV EDX,dword ptr [EDI + 0x330]
006F31FC  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006F31FF  C1 E0 03                  SHL EAX,0x3
006F3202  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006F3205  8B 5C 10 64               MOV EBX,dword ptr [EAX + EDX*0x1 + 0x64]
006F3209  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
006F320C  8B 43 64                  MOV EAX,dword ptr [EBX + 0x64]
006F320F  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
006F3212  8B 53 6C                  MOV EDX,dword ptr [EBX + 0x6c]
006F3215  8B 73 70                  MOV ESI,dword ptr [EBX + 0x70]
006F3218  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
006F321B  89 4B 40                  MOV dword ptr [EBX + 0x40],ECX
006F321E  89 53 44                  MOV dword ptr [EBX + 0x44],EDX
006F3221  89 73 48                  MOV dword ptr [EBX + 0x48],ESI
006F3224  83 3F 00                  CMP dword ptr [EDI],0x0
006F3227  74 20                     JZ 0x006f3249
006F3229  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006F322C  85 F6                     TEST ESI,ESI
006F322E  75 19                     JNZ 0x006f3249
006F3230  8B 73 70                  MOV ESI,dword ptr [EBX + 0x70]
006F3233  56                        PUSH ESI
006F3234  52                        PUSH EDX
006F3235  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
006F3238  03 D1                     ADD EDX,ECX
006F323A  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
006F323D  03 C8                     ADD ECX,EAX
006F323F  8B 07                     MOV EAX,dword ptr [EDI]
006F3241  52                        PUSH EDX
006F3242  51                        PUSH ECX
006F3243  50                        PUSH EAX
006F3244  E8 37 2D FC FF            CALL 0x006b5f80
LAB_006f3249:
006F3249  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006F324C  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
006F324F  F6 C1 80                  TEST CL,0x80
006F3252  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006F3255  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006F3258  75 13                     JNZ 0x006f326d
006F325A  F6 C1 20                  TEST CL,0x20
006F325D  0F 84 96 00 00 00         JZ 0x006f32f9
006F3263  83 7B 1C FF               CMP dword ptr [EBX + 0x1c],-0x1
006F3267  0F 85 8C 00 00 00         JNZ 0x006f32f9
LAB_006f326d:
006F326D  8B 73 24                  MOV ESI,dword ptr [EBX + 0x24]
006F3270  B9 01 00 00 00            MOV ECX,0x1
006F3275  85 F6                     TEST ESI,ESI
006F3277  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006F327A  0F 8C 97 01 00 00         JL 0x006f3417
006F3280  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
006F3283  85 D2                     TEST EDX,EDX
006F3285  0F 8C 8C 01 00 00         JL 0x006f3417
006F328B  8B 97 F0 02 00 00         MOV EDX,dword ptr [EDI + 0x2f0]
006F3291  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006F3296  0F AF D6                  IMUL EDX,ESI
006F3299  F7 EA                     IMUL EDX
006F329B  8B 73 54                  MOV ESI,dword ptr [EBX + 0x54]
006F329E  C1 FA 05                  SAR EDX,0x5
006F32A1  8B C2                     MOV EAX,EDX
006F32A3  C1 E8 1F                  SHR EAX,0x1f
006F32A6  03 D0                     ADD EDX,EAX
006F32A8  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006F32AD  03 D6                     ADD EDX,ESI
006F32AF  8B F2                     MOV ESI,EDX
006F32B1  8B 97 F4 02 00 00         MOV EDX,dword ptr [EDI + 0x2f4]
006F32B7  0F AF 53 28               IMUL EDX,dword ptr [EBX + 0x28]
006F32BB  F7 EA                     IMUL EDX
006F32BD  C1 FA 05                  SAR EDX,0x5
006F32C0  8B C2                     MOV EAX,EDX
006F32C2  C1 E8 1F                  SHR EAX,0x1f
006F32C5  03 D0                     ADD EDX,EAX
006F32C7  8B 43 58                  MOV EAX,dword ptr [EBX + 0x58]
006F32CA  03 D0                     ADD EDX,EAX
006F32CC  85 F6                     TEST ESI,ESI
006F32CE  7C 29                     JL 0x006f32f9
006F32D0  85 D2                     TEST EDX,EDX
006F32D2  7C 25                     JL 0x006f32f9
006F32D4  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
006F32D7  3B F0                     CMP ESI,EAX
006F32D9  7D 1E                     JGE 0x006f32f9
006F32DB  3B 57 2C                  CMP EDX,dword ptr [EDI + 0x2c]
006F32DE  7D 19                     JGE 0x006f32f9
006F32E0  0F AF C2                  IMUL EAX,EDX
006F32E3  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
006F32E6  03 C6                     ADD EAX,ESI
006F32E8  33 F6                     XOR ESI,ESI
006F32EA  66 8B 34 42               MOV SI,word ptr [EDX + EAX*0x2]
006F32EE  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006F32F1  3B C6                     CMP EAX,ESI
006F32F3  0F 8E 1E 01 00 00         JLE 0x006f3417
LAB_006f32f9:
006F32F9  8B 4B 64                  MOV ECX,dword ptr [EBX + 0x64]
006F32FC  8B 97 C8 02 00 00         MOV EDX,dword ptr [EDI + 0x2c8]
006F3302  8B B7 C0 02 00 00         MOV ESI,dword ptr [EDI + 0x2c0]
006F3308  8B C1                     MOV EAX,ECX
006F330A  2B C2                     SUB EAX,EDX
006F330C  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
006F3313  99                        CDQ
006F3314  F7 FE                     IDIV ESI
006F3316  2B 8F C8 02 00 00         SUB ECX,dword ptr [EDI + 0x2c8]
006F331C  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006F331F  8B 43 6C                  MOV EAX,dword ptr [EBX + 0x6c]
006F3322  8D 44 01 FF               LEA EAX,[ECX + EAX*0x1 + -0x1]
006F3326  8B 8F C4 02 00 00         MOV ECX,dword ptr [EDI + 0x2c4]
006F332C  99                        CDQ
006F332D  F7 FE                     IDIV ESI
006F332F  8B 73 68                  MOV ESI,dword ptr [EBX + 0x68]
006F3332  8B 97 CC 02 00 00         MOV EDX,dword ptr [EDI + 0x2cc]
006F3338  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F333B  8B C6                     MOV EAX,ESI
006F333D  2B C2                     SUB EAX,EDX
006F333F  99                        CDQ
006F3340  F7 F9                     IDIV ECX
006F3342  8B 53 70                  MOV EDX,dword ptr [EBX + 0x70]
006F3345  8B C8                     MOV ECX,EAX
006F3347  8B 87 CC 02 00 00         MOV EAX,dword ptr [EDI + 0x2cc]
006F334D  2B D0                     SUB EDX,EAX
006F334F  8D 44 32 FF               LEA EAX,[EDX + ESI*0x1 + -0x1]
006F3353  8B B7 B0 02 00 00         MOV ESI,dword ptr [EDI + 0x2b0]
006F3359  99                        CDQ
006F335A  F7 BF C4 02 00 00         IDIV dword ptr [EDI + 0x2c4]
006F3360  8B 97 B8 02 00 00         MOV EDX,dword ptr [EDI + 0x2b8]
006F3366  0F AF D1                  IMUL EDX,ECX
006F3369  8D 34 56                  LEA ESI,[ESI + EDX*0x2]
006F336C  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006F336F  3B C8                     CMP ECX,EAX
006F3371  0F 8F 9A 00 00 00         JG 0x006f3411
006F3377  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F337A  2B C1                     SUB EAX,ECX
006F337C  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006F337F  40                        INC EAX
006F3380  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_006f3383:
006F3383  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006F3386  3B C2                     CMP EAX,EDX
006F3388  7F 29                     JG 0x006f33b3
006F338A  8D 34 46                  LEA ESI,[ESI + EAX*0x2]
006F338D  2B D0                     SUB EDX,EAX
006F338F  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
006F3392  42                        INC EDX
LAB_006f3393:
006F3393  33 C0                     XOR EAX,EAX
006F3395  66 8B 06                  MOV AX,word ptr [ESI]
006F3398  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F339B  3B C6                     CMP EAX,ESI
006F339D  7D 02                     JGE 0x006f33a1
006F339F  33 C9                     XOR ECX,ECX
LAB_006f33a1:
006F33A1  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
006F33A4  83 C6 02                  ADD ESI,0x2
006F33A7  4A                        DEC EDX
006F33A8  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
006F33AB  75 E6                     JNZ 0x006f3393
006F33AD  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F33B0  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
LAB_006f33b3:
006F33B3  8B 87 B8 02 00 00         MOV EAX,dword ptr [EDI + 0x2b8]
006F33B9  8D 34 46                  LEA ESI,[ESI + EAX*0x2]
006F33BC  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006F33BF  48                        DEC EAX
006F33C0  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006F33C3  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006F33C6  75 BB                     JNZ 0x006f3383
006F33C8  85 C9                     TEST ECX,ECX
006F33CA  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006F33CD  75 3D                     JNZ 0x006f340c
006F33CF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F33D2  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F33D5  85 C0                     TEST EAX,EAX
006F33D7  7F 1C                     JG 0x006f33f5
006F33D9  8B 03                     MOV EAX,dword ptr [EBX]
006F33DB  F7 D9                     NEG ECX
006F33DD  1B C9                     SBB ECX,ECX
006F33DF  81 E1 00 00 18 00         AND ECX,0x180000
006F33E5  81 C1 00 00 08 00         ADD ECX,0x80000
006F33EB  23 C8                     AND ECX,EAX
006F33ED  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006F33F0  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006F33F3  EB 22                     JMP 0x006f3417
LAB_006f33f5:
006F33F5  8B 03                     MOV EAX,dword ptr [EBX]
006F33F7  F7 D9                     NEG ECX
006F33F9  1B C9                     SBB ECX,ECX
006F33FB  81 E1 00 00 30 00         AND ECX,0x300000
006F3401  81 C1 00 00 10 00         ADD ECX,0x100000
006F3407  23 C8                     AND ECX,EAX
006F3409  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
LAB_006f340c:
006F340C  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006F340F  EB 06                     JMP 0x006f3417
LAB_006f3411:
006F3411  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006F3414  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
LAB_006f3417:
006F3417  85 C9                     TEST ECX,ECX
006F3419  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
006F3420  75 12                     JNZ 0x006f3434
006F3422  F7 43 04 00 00 01 00      TEST dword ptr [EBX + 0x4],0x10000
006F3429  74 09                     JZ 0x006f3434
006F342B  8B 8B B8 00 00 00         MOV ECX,dword ptr [EBX + 0xb8]
006F3431  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
LAB_006f3434:
006F3434  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F3437  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
006F343A  85 D2                     TEST EDX,EDX
006F343C  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
006F3443  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006F3446  7C 29                     JL 0x006f3471
006F3448  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F344B  85 F6                     TEST ESI,ESI
006F344D  75 08                     JNZ 0x006f3457
006F344F  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006F3452  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
006F3455  EB 4D                     JMP 0x006f34a4
LAB_006f3457:
006F3457  83 FE 01                  CMP ESI,0x1
006F345A  75 4B                     JNZ 0x006f34a7
006F345C  2B CA                     SUB ECX,EDX
006F345E  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006F3461  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F3464  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006F3467  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
006F346A  03 D1                     ADD EDX,ECX
006F346C  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F346F  EB 36                     JMP 0x006f34a7
LAB_006f3471:
006F3471  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F3474  85 D2                     TEST EDX,EDX
006F3476  75 17                     JNZ 0x006f348f
006F3478  8B D1                     MOV EDX,ECX
006F347A  C1 FA 02                  SAR EDX,0x2
006F347D  2B CA                     SUB ECX,EDX
006F347F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F3482  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006F3485  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
006F3488  03 D1                     ADD EDX,ECX
006F348A  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F348D  EB 18                     JMP 0x006f34a7
LAB_006f348f:
006F348F  83 FA 01                  CMP EDX,0x1
006F3492  75 13                     JNZ 0x006f34a7
006F3494  8B D1                     MOV EDX,ECX
006F3496  C1 FA 02                  SAR EDX,0x2
006F3499  2B CA                     SUB ECX,EDX
006F349B  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006F349E  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
006F34A1  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
LAB_006f34a4:
006F34A4  01 55 08                  ADD dword ptr [EBP + 0x8],EDX
LAB_006f34a7:
006F34A7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F34AA  85 C9                     TEST ECX,ECX
006F34AC  8B 8F 44 01 00 00         MOV ECX,dword ptr [EDI + 0x144]
006F34B2  74 64                     JZ 0x006f3518
006F34B4  85 C9                     TEST ECX,ECX
006F34B6  74 55                     JZ 0x006f350d
006F34B8  8B 8F 58 01 00 00         MOV ECX,dword ptr [EDI + 0x158]
006F34BE  85 C9                     TEST ECX,ECX
006F34C0  74 4B                     JZ 0x006f350d
006F34C2  8B 8F 6C 01 00 00         MOV ECX,dword ptr [EDI + 0x16c]
006F34C8  8B B7 78 02 00 00         MOV ESI,dword ptr [EDI + 0x278]
006F34CE  2B C1                     SUB EAX,ECX
006F34D0  8B 97 70 01 00 00         MOV EDX,dword ptr [EDI + 0x170]
006F34D6  0F AF C6                  IMUL EAX,ESI
006F34D9  2B D1                     SUB EDX,ECX
006F34DB  8B CA                     MOV ECX,EDX
006F34DD  99                        CDQ
006F34DE  F7 F9                     IDIV ECX
006F34E0  85 C0                     TEST EAX,EAX
006F34E2  7D 12                     JGE 0x006f34f6
006F34E4  8B 8F 7C 02 00 00         MOV ECX,dword ptr [EDI + 0x27c]
006F34EA  33 C0                     XOR EAX,EAX
006F34EC  C1 E0 08                  SHL EAX,0x8
006F34EF  03 C8                     ADD ECX,EAX
006F34F1  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006F34F4  EB 4A                     JMP 0x006f3540
LAB_006f34f6:
006F34F6  3B C6                     CMP EAX,ESI
006F34F8  7C 03                     JL 0x006f34fd
006F34FA  8D 46 FF                  LEA EAX,[ESI + -0x1]
LAB_006f34fd:
006F34FD  8B 8F 7C 02 00 00         MOV ECX,dword ptr [EDI + 0x27c]
006F3503  C1 E0 08                  SHL EAX,0x8
006F3506  03 C8                     ADD ECX,EAX
006F3508  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006F350B  EB 33                     JMP 0x006f3540
LAB_006f350d:
006F350D  8B 97 7C 02 00 00         MOV EDX,dword ptr [EDI + 0x27c]
006F3513  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006F3516  EB 28                     JMP 0x006f3540
LAB_006f3518:
006F3518  85 C9                     TEST ECX,ECX
006F351A  74 1B                     JZ 0x006f3537
006F351C  8B 8F 58 01 00 00         MOV ECX,dword ptr [EDI + 0x158]
006F3522  85 C9                     TEST ECX,ECX
006F3524  74 11                     JZ 0x006f3537
006F3526  3B 87 6C 01 00 00         CMP EAX,dword ptr [EDI + 0x16c]
006F352C  7E 12                     JLE 0x006f3540
006F352E  25 00 7F 00 00            AND EAX,0x7f00
006F3533  03 C1                     ADD EAX,ECX
006F3535  EB 06                     JMP 0x006f353d
LAB_006f3537:
006F3537  8B 83 B4 00 00 00         MOV EAX,dword ptr [EBX + 0xb4]
LAB_006f353d:
006F353D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_006f3540:
006F3540  8B 8F 30 03 00 00         MOV ECX,dword ptr [EDI + 0x330]
006F3546  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006F3549  8B 04 0A                  MOV EAX,dword ptr [EDX + ECX*0x1]
006F354C  83 E0 02                  AND EAX,0x2
006F354F  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006F3552  8B 83 94 00 00 00         MOV EAX,dword ptr [EBX + 0x94]
006F3558  48                        DEC EAX
006F3559  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F355C  0F 88 AA 18 00 00         JS 0x006f4e0c
LAB_006f3562:
006F3562  8B 83 A4 00 00 00         MOV EAX,dword ptr [EBX + 0xa4]
006F3568  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F356B  8D 0C 88                  LEA ECX,[EAX + ECX*0x4]
006F356E  66 8B 41 02               MOV AX,word ptr [ECX + 0x2]
006F3572  8B D0                     MOV EDX,EAX
006F3574  81 E2 00 C0 00 00         AND EDX,0xc000
006F357A  81 FA 00 C0 00 00         CMP EDX,0xc000
006F3580  0F 85 72 18 00 00         JNZ 0x006f4df8
006F3586  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006F3589  85 D2                     TEST EDX,EDX
006F358B  75 08                     JNZ 0x006f3595
006F358D  A8 80                     TEST AL,0x80
006F358F  0F 84 63 18 00 00         JZ 0x006f4df8
LAB_006f3595:
006F3595  A8 01                     TEST AL,0x1
006F3597  0F 84 60 01 00 00         JZ 0x006f36fd
006F359D  0F BF 01                  MOVSX EAX,word ptr [ECX]
006F35A0  8B 97 30 03 00 00         MOV EDX,dword ptr [EDI + 0x330]
006F35A6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006F35A9  8D 34 88                  LEA ESI,[EAX + ECX*0x4]
006F35AC  C1 E6 03                  SHL ESI,0x3
006F35AF  03 D6                     ADD EDX,ESI
006F35B1  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F35B4  8B 4A 64                  MOV ECX,dword ptr [EDX + 0x64]
006F35B7  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
006F35BA  83 79 08 00               CMP dword ptr [ECX + 0x8],0x0
006F35BE  0F 85 34 18 00 00         JNZ 0x006f4df8
006F35C4  F6 41 02 01               TEST byte ptr [ECX + 0x2],0x1
006F35C8  0F 84 2A 18 00 00         JZ 0x006f4df8
006F35CE  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
006F35D2  74 0D                     JZ 0x006f35e1
006F35D4  83 B9 90 00 00 00 00      CMP dword ptr [ECX + 0x90],0x0
006F35DB  0F 84 17 18 00 00         JZ 0x006f4df8
LAB_006f35e1:
006F35E1  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
006F35E4  81 E2 40 80 00 00         AND EDX,0x8040
006F35EA  83 FA 40                  CMP EDX,0x40
006F35ED  0F 85 05 18 00 00         JNZ 0x006f4df8
006F35F3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F35F6  F6 02 03                  TEST byte ptr [EDX],0x3
006F35F9  0F 84 F9 17 00 00         JZ 0x006f4df8
006F35FF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F3602  85 D2                     TEST EDX,EDX
006F3604  7C 2F                     JL 0x006f3635
006F3606  8B 49 50                  MOV ECX,dword ptr [ECX + 0x50]
006F3609  2B 4B 50                  SUB ECX,dword ptr [EBX + 0x50]
006F360C  85 D2                     TEST EDX,EDX
006F360E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006F3611  75 6F                     JNZ 0x006f3682
006F3613  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006F3616  2B D1                     SUB EDX,ECX
006F3618  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F361B  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006F361E  3B CA                     CMP ECX,EDX
006F3620  0F 8D D2 17 00 00         JGE 0x006f4df8
006F3626  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006F3629  8B 52 38                  MOV EDX,dword ptr [EDX + 0x38]
006F362C  03 D1                     ADD EDX,ECX
006F362E  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006F3631  3B D1                     CMP EDX,ECX
006F3633  7F 41                     JG 0x006f3676
LAB_006f3635:
006F3635  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F3638  51                        PUSH ECX
006F3639  6A FF                     PUSH -0x1
006F363B  6A FF                     PUSH -0x1
LAB_006f363d:
006F363D  50                        PUSH EAX
006F363E  8B CF                     MOV ECX,EDI
006F3640  E8 8B FB FF FF            CALL 0x006f31d0
006F3645  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F3648  85 C0                     TEST EAX,EAX
006F364A  74 11                     JZ 0x006f365d
006F364C  8B 97 30 03 00 00         MOV EDX,dword ptr [EDI + 0x330]
006F3652  8B 44 16 64               MOV EAX,dword ptr [ESI + EDX*0x1 + 0x64]
006F3656  8B 08                     MOV ECX,dword ptr [EAX]
006F3658  80 E1 7F                  AND CL,0x7f
006F365B  89 08                     MOV dword ptr [EAX],ECX
LAB_006f365d:
006F365D  8B 87 30 03 00 00         MOV EAX,dword ptr [EDI + 0x330]
006F3663  8B 74 06 64               MOV ESI,dword ptr [ESI + EAX*0x1 + 0x64]
006F3667  8B 0E                     MOV ECX,dword ptr [ESI]
006F3669  80 E1 7D                  AND CL,0x7d
006F366C  83 C9 01                  OR ECX,0x1
006F366F  89 0E                     MOV dword ptr [ESI],ECX
006F3671  E9 82 17 00 00            JMP 0x006f4df8
LAB_006f3676:
006F3676  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006F3679  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F367C  52                        PUSH EDX
006F367D  51                        PUSH ECX
006F367E  6A 00                     PUSH 0x0
006F3680  EB BB                     JMP 0x006f363d
LAB_006f3682:
006F3682  83 FA 01                  CMP EDX,0x1
006F3685  0F 85 6D 17 00 00         JNZ 0x006f4df8
006F368B  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006F368E  2B D1                     SUB EDX,ECX
006F3690  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F3693  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006F3696  8B 52 38                  MOV EDX,dword ptr [EDX + 0x38]
006F3699  03 D1                     ADD EDX,ECX
006F369B  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006F369E  3B D1                     CMP EDX,ECX
006F36A0  0F 8E 52 17 00 00         JLE 0x006f4df8
006F36A6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006F36A9  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006F36AC  3B CA                     CMP ECX,EDX
006F36AE  7C 0A                     JL 0x006f36ba
006F36B0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006F36B3  52                        PUSH EDX
006F36B4  6A FF                     PUSH -0x1
006F36B6  6A FF                     PUSH -0x1
006F36B8  EB 0A                     JMP 0x006f36c4
LAB_006f36ba:
006F36BA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F36BD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F36C0  51                        PUSH ECX
006F36C1  52                        PUSH EDX
006F36C2  6A 01                     PUSH 0x1
LAB_006f36c4:
006F36C4  50                        PUSH EAX
006F36C5  8B CF                     MOV ECX,EDI
006F36C7  E8 04 FB FF FF            CALL 0x006f31d0
006F36CC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F36CF  85 C0                     TEST EAX,EAX
006F36D1  74 11                     JZ 0x006f36e4
006F36D3  8B 87 30 03 00 00         MOV EAX,dword ptr [EDI + 0x330]
006F36D9  8B 44 06 64               MOV EAX,dword ptr [ESI + EAX*0x1 + 0x64]
006F36DD  8B 08                     MOV ECX,dword ptr [EAX]
006F36DF  80 E1 7F                  AND CL,0x7f
006F36E2  89 08                     MOV dword ptr [EAX],ECX
LAB_006f36e4:
006F36E4  8B 8F 30 03 00 00         MOV ECX,dword ptr [EDI + 0x330]
006F36EA  8B 74 0E 64               MOV ESI,dword ptr [ESI + ECX*0x1 + 0x64]
006F36EE  8B 16                     MOV EDX,dword ptr [ESI]
006F36F0  80 E2 7D                  AND DL,0x7d
006F36F3  83 CA 01                  OR EDX,0x1
006F36F6  89 16                     MOV dword ptr [ESI],EDX
006F36F8  E9 FB 16 00 00            JMP 0x006f4df8
LAB_006f36fd:
006F36FD  8B 93 A0 00 00 00         MOV EDX,dword ptr [EBX + 0xa0]
006F3703  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
006F3706  8B 54 F2 04               MOV EDX,dword ptr [EDX + ESI*0x8 + 0x4]
006F370A  85 D2                     TEST EDX,EDX
006F370C  0F 84 E6 16 00 00         JZ 0x006f4df8
006F3712  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006F3715  C1 E8 02                  SHR EAX,0x2
006F3718  83 E0 01                  AND EAX,0x1
006F371B  3B F0                     CMP ESI,EAX
006F371D  0F 85 D5 16 00 00         JNZ 0x006f4df8
006F3723  8B 87 30 03 00 00         MOV EAX,dword ptr [EDI + 0x330]
006F3729  8B 75 A8                  MOV ESI,dword ptr [EBP + -0x58]
006F372C  03 C6                     ADD EAX,ESI
006F372E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006F3731  8B 70 18                  MOV ESI,dword ptr [EAX + 0x18]
006F3734  85 F6                     TEST ESI,ESI
006F3736  0F 84 BC 16 00 00         JZ 0x006f4df8
006F373C  0F BF 09                  MOVSX ECX,word ptr [ECX]
006F373F  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
006F3742  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006F3745  0F BF 41 14               MOVSX EAX,word ptr [ECX + 0x14]
006F3749  0F BF 51 12               MOVSX EDX,word ptr [ECX + 0x12]
006F374D  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006F3750  A1 30 70 85 00            MOV EAX,[0x00857030]
006F3755  85 C0                     TEST EAX,EAX
006F3757  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F375A  0F 84 A3 01 00 00         JZ 0x006f3903
006F3760  F6 43 04 04               TEST byte ptr [EBX + 0x4],0x4
006F3764  0F 85 99 01 00 00         JNZ 0x006f3903
006F376A  8B 93 A4 00 00 00         MOV EDX,dword ptr [EBX + 0xa4]
006F3770  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F3773  F6 44 82 02 02            TEST byte ptr [EDX + EAX*0x4 + 0x2],0x2
006F3778  0F 85 85 01 00 00         JNZ 0x006f3903
006F377E  0F BF 41 10               MOVSX EAX,word ptr [ECX + 0x10]
006F3782  0F BF 49 14               MOVSX ECX,word ptr [ECX + 0x14]
006F3786  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
006F3789  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006F378C  3B CA                     CMP ECX,EDX
006F378E  0F 8D 64 16 00 00         JGE 0x006f4df8
006F3794  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006F3797  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
006F379A  03 CE                     ADD ECX,ESI
006F379C  3B C8                     CMP ECX,EAX
006F379E  0F 8C 54 16 00 00         JL 0x006f4df8
006F37A4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F37A7  85 F6                     TEST ESI,ESI
006F37A9  7C 49                     JL 0x006f37f4
006F37AB  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
006F37AE  3B F0                     CMP ESI,EAX
006F37B0  89 75 AC                  MOV dword ptr [EBP + -0x54],ESI
006F37B3  7F 03                     JG 0x006f37b8
006F37B5  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_006f37b8:
006F37B8  3B CA                     CMP ECX,EDX
006F37BA  7C 02                     JL 0x006f37be
006F37BC  8B CA                     MOV ECX,EDX
LAB_006f37be:
006F37BE  3B C8                     CMP ECX,EAX
006F37C0  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006F37C3  7D 03                     JGE 0x006f37c8
006F37C5  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_006f37c8:
006F37C8  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006F37CB  8B 0D 08 70 85 00         MOV ECX,dword ptr [0x00857008]
006F37D1  99                        CDQ
006F37D2  F7 F9                     IDIV ECX
006F37D4  8B F0                     MOV ESI,EAX
006F37D6  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006F37D9  99                        CDQ
006F37DA  F7 F9                     IDIV ECX
006F37DC  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006F37DF  D1 E6                     SHL ESI,0x1
006F37E1  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
006F37E4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F37E7  99                        CDQ
006F37E8  F7 F9                     IDIV ECX
006F37EA  D1 E0                     SHL EAX,0x1
006F37EC  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006F37EF  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006F37F2  EB 3F                     JMP 0x006f3833
LAB_006f37f4:
006F37F4  8B 0D 08 70 85 00         MOV ECX,dword ptr [0x00857008]
006F37FA  99                        CDQ
006F37FB  F7 F9                     IDIV ECX
006F37FD  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F3800  8B F0                     MOV ESI,EAX
006F3802  D1 E6                     SHL ESI,0x1
006F3804  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
006F3807  0F BF 42 10               MOVSX EAX,word ptr [EDX + 0x10]
006F380B  99                        CDQ
006F380C  F7 F9                     IDIV ECX
006F380E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F3811  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F3814  0F BF 42 14               MOVSX EAX,word ptr [EDX + 0x14]
006F3818  0F BF 52 10               MOVSX EDX,word ptr [EDX + 0x10]
006F381C  03 C2                     ADD EAX,EDX
006F381E  99                        CDQ
006F381F  F7 F9                     IDIV ECX
006F3821  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F3824  D1 E0                     SHL EAX,0x1
006F3826  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006F3829  0F BF 42 10               MOVSX EAX,word ptr [EDX + 0x10]
006F382D  0F BF 52 14               MOVSX EDX,word ptr [EDX + 0x14]
006F3831  03 C2                     ADD EAX,EDX
LAB_006f3833:
006F3833  99                        CDQ
006F3834  F7 F9                     IDIV ECX
006F3836  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006F3839  0F BF 40 0E               MOVSX EAX,word ptr [EAX + 0xe]
006F383D  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
006F3840  99                        CDQ
006F3841  F7 F9                     IDIV ECX
006F3843  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F3846  D1 E0                     SHL EAX,0x1
006F3848  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006F384B  0F BF 42 0E               MOVSX EAX,word ptr [EDX + 0xe]
006F384F  99                        CDQ
006F3850  F7 F9                     IDIV ECX
006F3852  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006F3855  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F3858  0F BF 42 12               MOVSX EAX,word ptr [EDX + 0x12]
006F385C  0F BF 52 0E               MOVSX EDX,word ptr [EDX + 0xe]
006F3860  03 C2                     ADD EAX,EDX
006F3862  99                        CDQ
006F3863  F7 F9                     IDIV ECX
006F3865  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F3868  D1 E0                     SHL EAX,0x1
006F386A  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006F386D  0F BF 42 12               MOVSX EAX,word ptr [EDX + 0x12]
006F3871  0F BF 52 0E               MOVSX EDX,word ptr [EDX + 0xe]
006F3875  03 C2                     ADD EAX,EDX
006F3877  99                        CDQ
006F3878  F7 F9                     IDIV ECX
006F387A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F387D  83 F9 05                  CMP ECX,0x5
006F3880  75 2D                     JNZ 0x006f38af
006F3882  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006F3885  D1 F8                     SAR EAX,0x1
006F3887  03 C8                     ADD ECX,EAX
006F3889  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F388C  D1 F8                     SAR EAX,0x1
006F388E  03 F0                     ADD ESI,EAX
006F3890  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006F3893  D1 FA                     SAR EDX,0x1
006F3895  03 C2                     ADD EAX,EDX
006F3897  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
006F389A  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006F389D  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006F38A0  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006F38A3  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
006F38A6  D1 F8                     SAR EAX,0x1
006F38A8  03 C8                     ADD ECX,EAX
006F38AA  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
006F38AD  EB 2F                     JMP 0x006f38de
LAB_006f38af:
006F38AF  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006F38B2  40                        INC EAX
006F38B3  D1 F8                     SAR EAX,0x1
006F38B5  03 C8                     ADD ECX,EAX
006F38B7  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006F38BA  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
006F38BD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006F38C0  41                        INC ECX
006F38C1  D1 F9                     SAR ECX,0x1
006F38C3  03 F1                     ADD ESI,ECX
006F38C5  42                        INC EDX
006F38C6  D1 FA                     SAR EDX,0x1
006F38C8  03 C2                     ADD EAX,EDX
006F38CA  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006F38CD  42                        INC EDX
006F38CE  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006F38D1  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006F38D4  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
006F38D7  D1 FA                     SAR EDX,0x1
006F38D9  03 C2                     ADD EAX,EDX
006F38DB  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
LAB_006f38de:
006F38DE  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006F38E1  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
006F38E4  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006F38E7  2B C8                     SUB ECX,EAX
006F38E9  2B D6                     SUB EDX,ESI
006F38EB  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
006F38EE  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
006F38F1  8B 4B 54                  MOV ECX,dword ptr [EBX + 0x54]
006F38F4  03 C1                     ADD EAX,ECX
006F38F6  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006F38F9  8B 43 58                  MOV EAX,dword ptr [EBX + 0x58]
006F38FC  03 F0                     ADD ESI,EAX
006F38FE  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
006F3901  EB 77                     JMP 0x006f397a
LAB_006f3903:
006F3903  0F BF 51 10               MOVSX EDX,word ptr [ECX + 0x10]
006F3907  0F BF 41 14               MOVSX EAX,word ptr [ECX + 0x14]
006F390B  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
006F390E  03 C2                     ADD EAX,EDX
006F3910  3B F0                     CMP ESI,EAX
006F3912  0F 8D E0 14 00 00         JGE 0x006f4df8
006F3918  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006F391B  03 C6                     ADD EAX,ESI
006F391D  3B C2                     CMP EAX,EDX
006F391F  0F 8C D3 14 00 00         JL 0x006f4df8
006F3925  0F BF 71 0E               MOVSX ESI,word ptr [ECX + 0xe]
006F3929  8B 53 4C                  MOV EDX,dword ptr [EBX + 0x4c]
006F392C  03 D6                     ADD EDX,ESI
006F392E  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
006F3931  0F BF 51 12               MOVSX EDX,word ptr [ECX + 0x12]
006F3935  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
006F3938  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F393B  85 D2                     TEST EDX,EDX
006F393D  7C 25                     JL 0x006f3964
006F393F  0F BF 71 10               MOVSX ESI,word ptr [ECX + 0x10]
006F3943  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006F3946  3B D6                     CMP EDX,ESI
006F3948  7F 02                     JG 0x006f394c
006F394A  8B D6                     MOV EDX,ESI
LAB_006f394c:
006F394C  0F BF 49 14               MOVSX ECX,word ptr [ECX + 0x14]
006F3950  03 CE                     ADD ECX,ESI
006F3952  3B C1                     CMP EAX,ECX
006F3954  7C 02                     JL 0x006f3958
006F3956  8B C1                     MOV EAX,ECX
LAB_006f3958:
006F3958  8B 73 50                  MOV ESI,dword ptr [EBX + 0x50]
006F395B  03 F2                     ADD ESI,EDX
006F395D  2B C2                     SUB EAX,EDX
006F395F  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
006F3962  EB 13                     JMP 0x006f3977
LAB_006f3964:
006F3964  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006F3967  8B 73 50                  MOV ESI,dword ptr [EBX + 0x50]
006F396A  0F BF 50 10               MOVSX EDX,word ptr [EAX + 0x10]
006F396E  03 F2                     ADD ESI,EDX
006F3970  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
006F3973  0F BF 40 14               MOVSX EAX,word ptr [EAX + 0x14]
LAB_006f3977:
006F3977  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
LAB_006f397a:
006F397A  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006F397D  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
006F3980  83 F8 04                  CMP EAX,0x4
006F3983  7F 36                     JG 0x006f39bb
006F3985  8B 93 A4 00 00 00         MOV EDX,dword ptr [EBX + 0xa4]
006F398B  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F398E  8A 54 8A 02               MOV DL,byte ptr [EDX + ECX*0x4 + 0x2]
006F3992  80 E2 C0                  AND DL,0xc0
006F3995  80 FA C0                  CMP DL,0xc0
006F3998  75 12                     JNZ 0x006f39ac
006F399A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006F399D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006F39A0  83 C0 08                  ADD EAX,0x8
006F39A3  C7 45 A4 01 00 00 00      MOV dword ptr [EBP + -0x5c],0x1
006F39AA  EB 18                     JMP 0x006f39c4
LAB_006f39ac:
006F39AC  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006F39AF  C7 45 AC 00 00 00 00      MOV dword ptr [EBP + -0x54],0x0
006F39B6  8D 42 20                  LEA EAX,[EDX + 0x20]
006F39B9  EB 09                     JMP 0x006f39c4
LAB_006f39bb:
006F39BB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F39BE  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006F39C1  8D 43 64                  LEA EAX,[EBX + 0x64]
LAB_006f39c4:
006F39C4  3B 8B 8C 00 00 00         CMP ECX,dword ptr [EBX + 0x8c]
006F39CA  75 33                     JNZ 0x006f39ff
006F39CC  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006F39CF  89 35 EC 6F 85 00         MOV dword ptr [0x00856fec],ESI
006F39D5  89 15 E8 6F 85 00         MOV dword ptr [0x00856fe8],EDX
006F39DB  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
006F39DE  89 15 F0 6F 85 00         MOV dword ptr [0x00856ff0],EDX
006F39E4  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006F39E7  89 15 F4 6F 85 00         MOV dword ptr [0x00856ff4],EDX
006F39ED  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F39F0  89 15 E4 6F 85 00         MOV dword ptr [0x00856fe4],EDX
006F39F6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F39F9  89 15 0C 70 85 00         MOV dword ptr [0x0085700c],EDX
LAB_006f39ff:
006F39FF  8B 93 A4 00 00 00         MOV EDX,dword ptr [EBX + 0xa4]
006F3A05  F6 44 8A 03 20            TEST byte ptr [EDX + ECX*0x4 + 0x3],0x20
006F3A0A  74 11                     JZ 0x006f3a1d
006F3A0C  8B 93 8C 00 00 00         MOV EDX,dword ptr [EBX + 0x8c]
006F3A12  C7 45 B0 01 00 00 00      MOV dword ptr [EBP + -0x50],0x1
006F3A19  3B CA                     CMP ECX,EDX
006F3A1B  7C 07                     JL 0x006f3a24
LAB_006f3a1d:
006F3A1D  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
LAB_006f3a24:
006F3A24  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006F3A27  89 0D 00 70 85 00         MOV dword ptr [0x00857000],ECX
LAB_006f3a2d:
006F3A2D  50                        PUSH EAX
006F3A2E  8D 55 94                  LEA EDX,[EBP + -0x6c]
006F3A31  B9 D0 6F 85 00            MOV ECX,0x856fd0
006F3A36  E8 25 CA FB FF            CALL 0x006b0460
006F3A3B  83 F8 01                  CMP EAX,0x1
006F3A3E  75 18                     JNZ 0x006f3a58
006F3A40  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006F3A43  85 C0                     TEST EAX,EAX
006F3A45  74 19                     JZ 0x006f3a60
006F3A47  BA D0 6F 85 00            MOV EDX,0x856fd0
006F3A4C  68 E8 6F 85 00            PUSH 0x856fe8
006F3A51  8B CA                     MOV ECX,EDX
006F3A53  E8 08 CA FB FF            CALL 0x006b0460
LAB_006f3a58:
006F3A58  85 C0                     TEST EAX,EAX
006F3A5A  0F 84 61 13 00 00         JZ 0x006f4dc1
LAB_006f3a60:
006F3A60  8B 77 24                  MOV ESI,dword ptr [EDI + 0x24]
006F3A63  A1 D4 6F 85 00            MOV EAX,[0x00856fd4]
006F3A68  8B 0D 28 70 85 00         MOV ECX,dword ptr [0x00857028]
006F3A6E  03 F0                     ADD ESI,EAX
006F3A70  0F AF F1                  IMUL ESI,ECX
006F3A73  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
006F3A76  03 F2                     ADD ESI,EDX
006F3A78  8B 15 D0 6F 85 00         MOV EDX,dword ptr [0x00856fd0]
006F3A7E  03 F2                     ADD ESI,EDX
006F3A80  8B 15 04 70 85 00         MOV EDX,dword ptr [0x00857004]
006F3A86  03 F2                     ADD ESI,EDX
006F3A88  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F3A8B  0F AF D0                  IMUL EDX,EAX
006F3A8E  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006F3A91  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006F3A94  03 C2                     ADD EAX,EDX
006F3A96  8B 15 D0 6F 85 00         MOV EDX,dword ptr [0x00856fd0]
006F3A9C  03 C2                     ADD EAX,EDX
006F3A9E  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006F3AA1  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006F3AA4  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006F3AA7  03 C2                     ADD EAX,EDX
006F3AA9  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
006F3AAC  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006F3AAF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F3AB2  A1 30 70 85 00            MOV EAX,[0x00857030]
006F3AB7  85 C0                     TEST EAX,EAX
006F3AB9  0F 84 FF 0B 00 00         JZ 0x006f46be
006F3ABF  F6 43 04 04               TEST byte ptr [EBX + 0x4],0x4
006F3AC3  0F 85 F5 0B 00 00         JNZ 0x006f46be
006F3AC9  8B 93 A4 00 00 00         MOV EDX,dword ptr [EBX + 0xa4]
006F3ACF  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F3AD2  F6 44 82 02 02            TEST byte ptr [EDX + EAX*0x4 + 0x2],0x2
006F3AD7  0F 85 E1 0B 00 00         JNZ 0x006f46be
006F3ADD  8B 43 54                  MOV EAX,dword ptr [EBX + 0x54]
006F3AE0  8B 1D D8 6F 85 00         MOV EBX,dword ptr [0x00856fd8]
006F3AE6  8B 3D D0 6F 85 00         MOV EDI,dword ptr [0x00856fd0]
006F3AEC  2B D8                     SUB EBX,EAX
006F3AEE  03 DF                     ADD EBX,EDI
006F3AF0  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006F3AF3  8B C3                     MOV EAX,EBX
006F3AF5  8B 35 08 70 85 00         MOV ESI,dword ptr [0x00857008]
006F3AFB  99                        CDQ
006F3AFC  2B C2                     SUB EAX,EDX
006F3AFE  8B F8                     MOV EDI,EAX
006F3B00  D1 FF                     SAR EDI,0x1
006F3B02  0F AF FE                  IMUL EDI,ESI
006F3B05  83 FE 03                  CMP ESI,0x3
006F3B08  75 05                     JNZ 0x006f3b0f
006F3B0A  83 E3 01                  AND EBX,0x1
006F3B0D  EB 0B                     JMP 0x006f3b1a
LAB_006f3b0f:
006F3B0F  80 E3 01                  AND BL,0x1
006F3B12  F6 DB                     NEG BL
006F3B14  1B DB                     SBB EBX,EBX
006F3B16  83 E3 03                  AND EBX,0x3
006F3B19  4B                        DEC EBX
LAB_006f3b1a:
006F3B1A  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F3B1D  0F BF 42 0E               MOVSX EAX,word ptr [EDX + 0xe]
006F3B21  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F3B24  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006F3B27  2B D8                     SUB EBX,EAX
006F3B29  A1 D0 6F 85 00            MOV EAX,[0x00856fd0]
006F3B2E  2B C2                     SUB EAX,EDX
006F3B30  03 FB                     ADD EDI,EBX
006F3B32  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006F3B35  99                        CDQ
006F3B36  2B C2                     SUB EAX,EDX
006F3B38  8B D8                     MOV EBX,EAX
006F3B3A  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006F3B3D  D1 FB                     SAR EBX,0x1
006F3B3F  0F AF DE                  IMUL EBX,ESI
006F3B42  83 FE 03                  CMP ESI,0x3
006F3B45  75 07                     JNZ 0x006f3b4e
006F3B47  83 E0 01                  AND EAX,0x1
006F3B4A  D1 E0                     SHL EAX,0x1
006F3B4C  EB 07                     JMP 0x006f3b55
LAB_006f3b4e:
006F3B4E  83 E0 01                  AND EAX,0x1
006F3B51  D1 E0                     SHL EAX,0x1
006F3B53  0C 01                     OR AL,0x1
LAB_006f3b55:
006F3B55  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006F3B58  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F3B5B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006F3B5E  2B C6                     SUB EAX,ESI
006F3B60  8B 52 58                  MOV EDX,dword ptr [EDX + 0x58]
006F3B63  03 D8                     ADD EBX,EAX
006F3B65  A1 DC 6F 85 00            MOV EAX,[0x00856fdc]
006F3B6A  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006F3B6D  2B C2                     SUB EAX,EDX
006F3B6F  8B 15 D4 6F 85 00         MOV EDX,dword ptr [0x00856fd4]
006F3B75  03 C2                     ADD EAX,EDX
006F3B77  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006F3B7A  99                        CDQ
006F3B7B  2B C2                     SUB EAX,EDX
006F3B7D  8B F0                     MOV ESI,EAX
006F3B7F  A1 08 70 85 00            MOV EAX,[0x00857008]
006F3B84  D1 FE                     SAR ESI,0x1
006F3B86  0F AF F0                  IMUL ESI,EAX
006F3B89  83 F8 03                  CMP EAX,0x3
006F3B8C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F3B8F  75 05                     JNZ 0x006f3b96
006F3B91  83 E0 01                  AND EAX,0x1
006F3B94  EB 0A                     JMP 0x006f3ba0
LAB_006f3b96:
006F3B96  24 01                     AND AL,0x1
006F3B98  F6 D8                     NEG AL
006F3B9A  1B C0                     SBB EAX,EAX
006F3B9C  83 E0 03                  AND EAX,0x3
006F3B9F  48                        DEC EAX
LAB_006f3ba0:
006F3BA0  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F3BA3  0F BF 52 10               MOVSX EDX,word ptr [EDX + 0x10]
006F3BA7  2B C2                     SUB EAX,EDX
006F3BA9  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3BAC  03 F0                     ADD ESI,EAX
006F3BAE  A1 D4 6F 85 00            MOV EAX,[0x00856fd4]
006F3BB3  2B C2                     SUB EAX,EDX
006F3BB5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006F3BB8  99                        CDQ
006F3BB9  2B C2                     SUB EAX,EDX
006F3BBB  D1 F8                     SAR EAX,0x1
006F3BBD  0F AF 05 08 70 85 00      IMUL EAX,dword ptr [0x00857008]
006F3BC4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006F3BC7  A1 08 70 85 00            MOV EAX,[0x00857008]
006F3BCC  83 F8 03                  CMP EAX,0x3
006F3BCF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F3BD2  75 07                     JNZ 0x006f3bdb
006F3BD4  83 E0 01                  AND EAX,0x1
006F3BD7  D1 E0                     SHL EAX,0x1
006F3BD9  EB 07                     JMP 0x006f3be2
LAB_006f3bdb:
006F3BDB  83 E0 01                  AND EAX,0x1
006F3BDE  D1 E0                     SHL EAX,0x1
006F3BE0  0C 01                     OR AL,0x1
LAB_006f3be2:
006F3BE2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F3BE5  8B D0                     MOV EDX,EAX
006F3BE7  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006F3BEA  0F BF 40 10               MOVSX EAX,word ptr [EAX + 0x10]
006F3BEE  2B D0                     SUB EDX,EAX
006F3BF0  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006F3BF3  03 C2                     ADD EAX,EDX
006F3BF5  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F3BF8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006F3BFB  8B 82 C0 00 00 00         MOV EAX,dword ptr [EDX + 0xc0]
006F3C01  85 C0                     TEST EAX,EAX
006F3C03  74 13                     JZ 0x006f3c18
006F3C05  8B 82 BC 00 00 00         MOV EAX,dword ptr [EDX + 0xbc]
006F3C0B  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
006F3C0F  03 82 C0 00 00 00         ADD EAX,dword ptr [EDX + 0xc0]
006F3C15  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_006f3c18:
006F3C18  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006F3C1B  85 C0                     TEST EAX,EAX
006F3C1D  7E 15                     JLE 0x006f3c34
006F3C1F  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006F3C22  50                        PUSH EAX
006F3C23  51                        PUSH ECX
006F3C24  E8 E7 C1 FD FF            CALL 0x006cfe10
006F3C29  8B 0D 28 70 85 00         MOV ECX,dword ptr [0x00857028]
006F3C2F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006F3C32  EB 12                     JMP 0x006f3c46
LAB_006f3c34:
006F3C34  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006F3C37  8A 50 0D                  MOV DL,byte ptr [EAX + 0xd]
006F3C3A  D1 EA                     SHR EDX,0x1
006F3C3C  83 E2 0E                  AND EDX,0xe
006F3C3F  8D 44 02 16               LEA EAX,[EDX + EAX*0x1 + 0x16]
006F3C43  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006f3c46:
006F3C46  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F3C49  8B 82 A4 00 00 00         MOV EAX,dword ptr [EDX + 0xa4]
006F3C4F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F3C52  66 8B 44 90 02            MOV AX,word ptr [EAX + EDX*0x4 + 0x2]
006F3C57  F6 C4 01                  TEST AH,0x1
006F3C5A  0F 84 C7 00 00 00         JZ 0x006f3d27
006F3C60  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006F3C63  85 C0                     TEST EAX,EAX
006F3C65  74 07                     JZ 0x006f3c6e
006F3C67  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006f3c6e:
006F3C6E  83 3D 08 70 85 00 03      CMP dword ptr [0x00857008],0x3
006F3C75  75 58                     JNZ 0x006f3ccf
006F3C77  A1 DC 6F 85 00            MOV EAX,[0x00856fdc]
006F3C7C  8B 15 D8 6F 85 00         MOV EDX,dword ptr [0x00856fd8]
006F3C82  50                        PUSH EAX
006F3C83  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F3C86  52                        PUSH EDX
006F3C87  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F3C8A  50                        PUSH EAX
006F3C8B  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006F3C8E  52                        PUSH EDX
006F3C8F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3C92  2B F2                     SUB ESI,EDX
006F3C94  8B 90 9C 00 00 00         MOV EDX,dword ptr [EAX + 0x9c]
006F3C9A  8B 80 98 00 00 00         MOV EAX,dword ptr [EAX + 0x98]
006F3CA0  2B FB                     SUB EDI,EBX
006F3CA2  56                        PUSH ESI
006F3CA3  57                        PUSH EDI
006F3CA4  52                        PUSH EDX
006F3CA5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F3CA8  50                        PUSH EAX
006F3CA9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F3CAC  53                        PUSH EBX
006F3CAD  52                        PUSH EDX
006F3CAE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F3CB1  50                        PUSH EAX
006F3CB2  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006F3CB5  52                        PUSH EDX
006F3CB6  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006F3CB9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F3CBC  D1 E2                     SHL EDX,0x1
006F3CBE  52                        PUSH EDX
006F3CBF  50                        PUSH EAX
006F3CC0  51                        PUSH ECX
006F3CC1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F3CC4  51                        PUSH ECX
006F3CC5  E8 66 31 01 00            CALL 0x00706e30
006F3CCA  E9 F2 10 00 00            JMP 0x006f4dc1
LAB_006f3ccf:
006F3CCF  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F3CD5  A1 D8 6F 85 00            MOV EAX,[0x00856fd8]
006F3CDA  52                        PUSH EDX
006F3CDB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F3CDE  50                        PUSH EAX
006F3CDF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F3CE2  52                        PUSH EDX
006F3CE3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3CE6  50                        PUSH EAX
006F3CE7  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006F3CEA  2B F2                     SUB ESI,EDX
006F3CEC  2B FB                     SUB EDI,EBX
006F3CEE  8B 90 9C 00 00 00         MOV EDX,dword ptr [EAX + 0x9c]
006F3CF4  8B 80 98 00 00 00         MOV EAX,dword ptr [EAX + 0x98]
006F3CFA  56                        PUSH ESI
006F3CFB  57                        PUSH EDI
006F3CFC  52                        PUSH EDX
006F3CFD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F3D00  50                        PUSH EAX
006F3D01  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F3D04  53                        PUSH EBX
006F3D05  52                        PUSH EDX
006F3D06  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F3D09  50                        PUSH EAX
006F3D0A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006F3D0D  52                        PUSH EDX
006F3D0E  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006F3D11  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F3D14  D1 E2                     SHL EDX,0x1
006F3D16  52                        PUSH EDX
006F3D17  50                        PUSH EAX
006F3D18  51                        PUSH ECX
006F3D19  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F3D1C  51                        PUSH ECX
006F3D1D  E8 EE 3A 01 00            CALL 0x00707810
006F3D22  E9 9A 10 00 00            JMP 0x006f4dc1
LAB_006f3d27:
006F3D27  A8 10                     TEST AL,0x10
006F3D29  0F 84 9F 00 00 00         JZ 0x006f3dce
006F3D2F  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F3D32  8B 82 B0 00 00 00         MOV EAX,dword ptr [EDX + 0xb0]
006F3D38  85 C0                     TEST EAX,EAX
006F3D3A  0F 84 81 10 00 00         JZ 0x006f4dc1
006F3D40  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006F3D43  85 D2                     TEST EDX,EDX
006F3D45  74 07                     JZ 0x006f3d4e
006F3D47  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006f3d4e:
006F3D4E  8B 15 08 70 85 00         MOV EDX,dword ptr [0x00857008]
006F3D54  50                        PUSH EAX
006F3D55  83 FA 03                  CMP EDX,0x3
006F3D58  75 3A                     JNZ 0x006f3d94
006F3D5A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F3D5D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F3D60  50                        PUSH EAX
006F3D61  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F3D64  52                        PUSH EDX
006F3D65  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3D68  2B F2                     SUB ESI,EDX
006F3D6A  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F3D6D  2B FB                     SUB EDI,EBX
006F3D6F  56                        PUSH ESI
006F3D70  57                        PUSH EDI
006F3D71  53                        PUSH EBX
006F3D72  50                        PUSH EAX
006F3D73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F3D76  52                        PUSH EDX
006F3D77  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F3D7A  50                        PUSH EAX
006F3D7B  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F3D7E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F3D81  D1 E0                     SHL EAX,0x1
006F3D83  50                        PUSH EAX
006F3D84  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F3D87  52                        PUSH EDX
006F3D88  51                        PUSH ECX
006F3D89  50                        PUSH EAX
006F3D8A  E8 D1 F3 00 00            CALL 0x00703160
006F3D8F  E9 2D 10 00 00            JMP 0x006f4dc1
LAB_006f3d94:
006F3D94  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F3D97  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F3D9A  52                        PUSH EDX
006F3D9B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3D9E  2B F2                     SUB ESI,EDX
006F3DA0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F3DA3  50                        PUSH EAX
006F3DA4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F3DA7  2B FB                     SUB EDI,EBX
006F3DA9  56                        PUSH ESI
006F3DAA  57                        PUSH EDI
006F3DAB  53                        PUSH EBX
006F3DAC  52                        PUSH EDX
006F3DAD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F3DB0  50                        PUSH EAX
006F3DB1  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006F3DB4  52                        PUSH EDX
006F3DB5  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006F3DB8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F3DBB  D1 E2                     SHL EDX,0x1
006F3DBD  52                        PUSH EDX
006F3DBE  50                        PUSH EAX
006F3DBF  51                        PUSH ECX
006F3DC0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F3DC3  51                        PUSH ECX
006F3DC4  E8 87 F8 00 00            CALL 0x00703650
006F3DC9  E9 F3 0F 00 00            JMP 0x006f4dc1
LAB_006f3dce:
006F3DCE  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F3DD1  85 D2                     TEST EDX,EDX
006F3DD3  0F 84 84 03 00 00         JZ 0x006f415d
006F3DD9  A8 08                     TEST AL,0x8
006F3DDB  0F 85 7C 03 00 00         JNZ 0x006f415d
006F3DE1  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006F3DE4  85 D2                     TEST EDX,EDX
006F3DE6  74 07                     JZ 0x006f3def
006F3DE8  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006f3def:
006F3DEF  A8 04                     TEST AL,0x4
006F3DF1  0F 84 9A 00 00 00         JZ 0x006f3e91
006F3DF7  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006F3DFA  85 C0                     TEST EAX,EAX
006F3DFC  0F 84 BF 0F 00 00         JZ 0x006f4dc1
006F3E02  A1 08 70 85 00            MOV EAX,[0x00857008]
006F3E07  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F3E0A  83 F8 03                  CMP EAX,0x3
006F3E0D  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F3E10  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F3E13  52                        PUSH EDX
006F3E14  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F3E17  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F3E1D  52                        PUSH EDX
006F3E1E  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F3E21  52                        PUSH EDX
006F3E22  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006F3E25  52                        PUSH EDX
006F3E26  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F3E29  52                        PUSH EDX
006F3E2A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F3E2D  52                        PUSH EDX
006F3E2E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3E31  75 2F                     JNZ 0x006f3e62
006F3E33  2B F2                     SUB ESI,EDX
006F3E35  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F3E38  2B FB                     SUB EDI,EBX
006F3E3A  56                        PUSH ESI
006F3E3B  57                        PUSH EDI
006F3E3C  53                        PUSH EBX
006F3E3D  52                        PUSH EDX
006F3E3E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F3E41  52                        PUSH EDX
006F3E42  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F3E45  52                        PUSH EDX
006F3E46  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006F3E49  52                        PUSH EDX
006F3E4A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F3E4D  52                        PUSH EDX
006F3E4E  50                        PUSH EAX
006F3E4F  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006F3E52  50                        PUSH EAX
006F3E53  51                        PUSH ECX
006F3E54  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F3E57  51                        PUSH ECX
006F3E58  E8 E3 FE 00 00            CALL 0x00703d40
006F3E5D  E9 5F 0F 00 00            JMP 0x006f4dc1
LAB_006f3e62:
006F3E62  2B F2                     SUB ESI,EDX
006F3E64  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F3E67  2B FB                     SUB EDI,EBX
006F3E69  56                        PUSH ESI
006F3E6A  57                        PUSH EDI
006F3E6B  53                        PUSH EBX
006F3E6C  52                        PUSH EDX
006F3E6D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F3E70  52                        PUSH EDX
006F3E71  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F3E74  52                        PUSH EDX
006F3E75  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006F3E78  52                        PUSH EDX
006F3E79  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F3E7C  52                        PUSH EDX
006F3E7D  50                        PUSH EAX
006F3E7E  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006F3E81  50                        PUSH EAX
006F3E82  51                        PUSH ECX
006F3E83  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F3E86  51                        PUSH ECX
006F3E87  E8 D4 05 01 00            CALL 0x00704460
006F3E8C  E9 30 0F 00 00            JMP 0x006f4dc1
LAB_006f3e91:
006F3E91  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006F3E94  85 C0                     TEST EAX,EAX
006F3E96  A1 08 70 85 00            MOV EAX,[0x00857008]
006F3E9B  0F 84 66 01 00 00         JZ 0x006f4007
006F3EA1  83 F8 03                  CMP EAX,0x3
006F3EA4  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006F3EA7  0F 85 AD 00 00 00         JNZ 0x006f3f5a
006F3EAD  85 C0                     TEST EAX,EAX
006F3EAF  74 59                     JZ 0x006f3f0a
006F3EB1  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F3EB4  2B FB                     SUB EDI,EBX
006F3EB6  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F3EB9  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F3EBC  52                        PUSH EDX
006F3EBD  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F3EC0  50                        PUSH EAX
006F3EC1  52                        PUSH EDX
006F3EC2  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F3EC5  03 C0                     ADD EAX,EAX
006F3EC7  52                        PUSH EDX
006F3EC8  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F3ECB  52                        PUSH EDX
006F3ECC  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F3ECF  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F3ED5  52                        PUSH EDX
006F3ED6  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F3ED9  52                        PUSH EDX
006F3EDA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F3EDD  52                        PUSH EDX
006F3EDE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F3EE1  52                        PUSH EDX
006F3EE2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3EE5  2B F2                     SUB ESI,EDX
006F3EE7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F3EEA  56                        PUSH ESI
006F3EEB  57                        PUSH EDI
006F3EEC  53                        PUSH EBX
006F3EED  52                        PUSH EDX
006F3EEE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F3EF1  52                        PUSH EDX
006F3EF2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F3EF5  52                        PUSH EDX
006F3EF6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F3EF9  50                        PUSH EAX
006F3EFA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F3EFD  52                        PUSH EDX
006F3EFE  51                        PUSH ECX
006F3EFF  50                        PUSH EAX
006F3F00  E8 6B A6 00 00            CALL 0x006fe570
006F3F05  E9 B7 0E 00 00            JMP 0x006f4dc1
LAB_006f3f0a:
006F3F0A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F3F0D  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006F3F10  52                        PUSH EDX
006F3F11  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F3F14  50                        PUSH EAX
006F3F15  2B FB                     SUB EDI,EBX
006F3F17  8B 82 BC 00 00 00         MOV EAX,dword ptr [EDX + 0xbc]
006F3F1D  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F3F20  50                        PUSH EAX
006F3F21  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F3F24  52                        PUSH EDX
006F3F25  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F3F28  50                        PUSH EAX
006F3F29  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F3F2C  52                        PUSH EDX
006F3F2D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3F30  2B F2                     SUB ESI,EDX
006F3F32  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F3F35  56                        PUSH ESI
006F3F36  57                        PUSH EDI
006F3F37  53                        PUSH EBX
006F3F38  50                        PUSH EAX
006F3F39  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F3F3C  52                        PUSH EDX
006F3F3D  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F3F40  50                        PUSH EAX
006F3F41  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F3F44  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F3F47  D1 E0                     SHL EAX,0x1
006F3F49  50                        PUSH EAX
006F3F4A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F3F4D  52                        PUSH EDX
006F3F4E  51                        PUSH ECX
006F3F4F  50                        PUSH EAX
006F3F50  E8 4B 9F 00 00            CALL 0x006fdea0
006F3F55  E9 67 0E 00 00            JMP 0x006f4dc1
LAB_006f3f5a:
006F3F5A  85 C0                     TEST EAX,EAX
006F3F5C  74 59                     JZ 0x006f3fb7
006F3F5E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F3F61  2B FB                     SUB EDI,EBX
006F3F63  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F3F66  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F3F69  52                        PUSH EDX
006F3F6A  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F3F6D  50                        PUSH EAX
006F3F6E  52                        PUSH EDX
006F3F6F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F3F72  03 C0                     ADD EAX,EAX
006F3F74  52                        PUSH EDX
006F3F75  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F3F78  52                        PUSH EDX
006F3F79  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F3F7C  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F3F82  52                        PUSH EDX
006F3F83  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F3F86  52                        PUSH EDX
006F3F87  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F3F8A  52                        PUSH EDX
006F3F8B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F3F8E  52                        PUSH EDX
006F3F8F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3F92  2B F2                     SUB ESI,EDX
006F3F94  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F3F97  56                        PUSH ESI
006F3F98  57                        PUSH EDI
006F3F99  53                        PUSH EBX
006F3F9A  52                        PUSH EDX
006F3F9B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F3F9E  52                        PUSH EDX
006F3F9F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F3FA2  52                        PUSH EDX
006F3FA3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F3FA6  50                        PUSH EAX
006F3FA7  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F3FAA  52                        PUSH EDX
006F3FAB  51                        PUSH ECX
006F3FAC  50                        PUSH EAX
006F3FAD  E8 DE B6 00 00            CALL 0x006ff690
006F3FB2  E9 0A 0E 00 00            JMP 0x006f4dc1
LAB_006f3fb7:
006F3FB7  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F3FBA  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006F3FBD  52                        PUSH EDX
006F3FBE  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F3FC1  50                        PUSH EAX
006F3FC2  2B FB                     SUB EDI,EBX
006F3FC4  8B 82 BC 00 00 00         MOV EAX,dword ptr [EDX + 0xbc]
006F3FCA  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F3FCD  50                        PUSH EAX
006F3FCE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F3FD1  52                        PUSH EDX
006F3FD2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F3FD5  50                        PUSH EAX
006F3FD6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F3FD9  52                        PUSH EDX
006F3FDA  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F3FDD  2B F2                     SUB ESI,EDX
006F3FDF  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F3FE2  56                        PUSH ESI
006F3FE3  57                        PUSH EDI
006F3FE4  53                        PUSH EBX
006F3FE5  50                        PUSH EAX
006F3FE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F3FE9  52                        PUSH EDX
006F3FEA  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F3FED  50                        PUSH EAX
006F3FEE  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F3FF1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F3FF4  D1 E0                     SHL EAX,0x1
006F3FF6  50                        PUSH EAX
006F3FF7  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F3FFA  52                        PUSH EDX
006F3FFB  51                        PUSH ECX
006F3FFC  50                        PUSH EAX
006F3FFD  E8 4E AD 00 00            CALL 0x006fed50
006F4002  E9 BA 0D 00 00            JMP 0x006f4dc1
LAB_006f4007:
006F4007  83 F8 03                  CMP EAX,0x3
006F400A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006F400D  0F 85 A5 00 00 00         JNZ 0x006f40b8
006F4013  85 C0                     TEST EAX,EAX
006F4015  74 55                     JZ 0x006f406c
006F4017  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F401A  2B FB                     SUB EDI,EBX
006F401C  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F401F  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F4022  52                        PUSH EDX
006F4023  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4026  50                        PUSH EAX
006F4027  52                        PUSH EDX
006F4028  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F402B  03 C0                     ADD EAX,EAX
006F402D  52                        PUSH EDX
006F402E  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F4031  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F4037  52                        PUSH EDX
006F4038  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F403B  52                        PUSH EDX
006F403C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F403F  52                        PUSH EDX
006F4040  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F4043  52                        PUSH EDX
006F4044  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F4047  2B F2                     SUB ESI,EDX
006F4049  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F404C  56                        PUSH ESI
006F404D  57                        PUSH EDI
006F404E  53                        PUSH EBX
006F404F  52                        PUSH EDX
006F4050  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4053  52                        PUSH EDX
006F4054  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F4057  52                        PUSH EDX
006F4058  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F405B  50                        PUSH EAX
006F405C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F405F  52                        PUSH EDX
006F4060  51                        PUSH ECX
006F4061  50                        PUSH EAX
006F4062  E8 79 83 00 00            CALL 0x006fc3e0
006F4067  E9 55 0D 00 00            JMP 0x006f4dc1
LAB_006f406c:
006F406C  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F406F  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006F4072  52                        PUSH EDX
006F4073  2B FB                     SUB EDI,EBX
006F4075  8B 90 BC 00 00 00         MOV EDX,dword ptr [EAX + 0xbc]
006F407B  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006F407E  52                        PUSH EDX
006F407F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F4082  50                        PUSH EAX
006F4083  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F4086  52                        PUSH EDX
006F4087  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F408A  2B F2                     SUB ESI,EDX
006F408C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F408F  50                        PUSH EAX
006F4090  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F4093  56                        PUSH ESI
006F4094  57                        PUSH EDI
006F4095  53                        PUSH EBX
006F4096  52                        PUSH EDX
006F4097  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F409A  50                        PUSH EAX
006F409B  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006F409E  52                        PUSH EDX
006F409F  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006F40A2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F40A5  D1 E2                     SHL EDX,0x1
006F40A7  52                        PUSH EDX
006F40A8  50                        PUSH EAX
006F40A9  51                        PUSH ECX
006F40AA  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F40AD  51                        PUSH ECX
006F40AE  E8 8D 7C 00 00            CALL 0x006fbd40
006F40B3  E9 09 0D 00 00            JMP 0x006f4dc1
LAB_006f40b8:
006F40B8  85 C0                     TEST EAX,EAX
006F40BA  74 55                     JZ 0x006f4111
006F40BC  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F40BF  2B FB                     SUB EDI,EBX
006F40C1  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F40C4  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F40C7  52                        PUSH EDX
006F40C8  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F40CB  50                        PUSH EAX
006F40CC  52                        PUSH EDX
006F40CD  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F40D0  03 C0                     ADD EAX,EAX
006F40D2  52                        PUSH EDX
006F40D3  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F40D6  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F40DC  52                        PUSH EDX
006F40DD  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F40E0  52                        PUSH EDX
006F40E1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F40E4  52                        PUSH EDX
006F40E5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F40E8  52                        PUSH EDX
006F40E9  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F40EC  2B F2                     SUB ESI,EDX
006F40EE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F40F1  56                        PUSH ESI
006F40F2  57                        PUSH EDI
006F40F3  53                        PUSH EBX
006F40F4  52                        PUSH EDX
006F40F5  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F40F8  52                        PUSH EDX
006F40F9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F40FC  52                        PUSH EDX
006F40FD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F4100  50                        PUSH EAX
006F4101  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4104  52                        PUSH EDX
006F4105  51                        PUSH ECX
006F4106  50                        PUSH EAX
006F4107  E8 24 93 00 00            CALL 0x006fd430
006F410C  E9 B0 0C 00 00            JMP 0x006f4dc1
LAB_006f4111:
006F4111  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F4114  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006F4117  52                        PUSH EDX
006F4118  2B FB                     SUB EDI,EBX
006F411A  8B 90 BC 00 00 00         MOV EDX,dword ptr [EAX + 0xbc]
006F4120  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006F4123  52                        PUSH EDX
006F4124  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F4127  50                        PUSH EAX
006F4128  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F412B  52                        PUSH EDX
006F412C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F412F  2B F2                     SUB ESI,EDX
006F4131  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4134  50                        PUSH EAX
006F4135  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F4138  56                        PUSH ESI
006F4139  57                        PUSH EDI
006F413A  53                        PUSH EBX
006F413B  52                        PUSH EDX
006F413C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F413F  50                        PUSH EAX
006F4140  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006F4143  52                        PUSH EDX
006F4144  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006F4147  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F414A  D1 E2                     SHL EDX,0x1
006F414C  52                        PUSH EDX
006F414D  50                        PUSH EAX
006F414E  51                        PUSH ECX
006F414F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F4152  51                        PUSH ECX
006F4153  E8 D8 89 00 00            CALL 0x006fcb30
006F4158  E9 64 0C 00 00            JMP 0x006f4dc1
LAB_006f415d:
006F415D  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006F4160  85 D2                     TEST EDX,EDX
006F4162  0F 84 6D 01 00 00         JZ 0x006f42d5
006F4168  8B 15 E4 6F 85 00         MOV EDX,dword ptr [0x00856fe4]
006F416E  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006F4171  0F BF 52 0E               MOVSX EDX,word ptr [EDX + 0xe]
006F4175  0F BF 40 0E               MOVSX EAX,word ptr [EAX + 0xe]
006F4179  2B C2                     SUB EAX,EDX
006F417B  8B 15 E4 6F 85 00         MOV EDX,dword ptr [0x00856fe4]
006F4181  03 C3                     ADD EAX,EBX
006F4183  0F BF 52 10               MOVSX EDX,word ptr [EDX + 0x10]
006F4187  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006F418A  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006F418D  0F BF 40 10               MOVSX EAX,word ptr [EAX + 0x10]
006F4191  2B C2                     SUB EAX,EDX
006F4193  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F4196  03 C2                     ADD EAX,EDX
006F4198  85 C0                     TEST EAX,EAX
006F419A  7E 15                     JLE 0x006f41b1
006F419C  8B 0D E4 6F 85 00         MOV ECX,dword ptr [0x00856fe4]
006F41A2  50                        PUSH EAX
006F41A3  51                        PUSH ECX
006F41A4  E8 67 BC FD FF            CALL 0x006cfe10
006F41A9  8B 0D 28 70 85 00         MOV ECX,dword ptr [0x00857028]
006F41AF  EB 11                     JMP 0x006f41c2
LAB_006f41b1:
006F41B1  A1 E4 6F 85 00            MOV EAX,[0x00856fe4]
006F41B6  8A 50 0D                  MOV DL,byte ptr [EAX + 0xd]
006F41B9  D1 EA                     SHR EDX,0x1
006F41BB  83 E2 0E                  AND EDX,0xe
006F41BE  8D 44 02 16               LEA EAX,[EDX + EAX*0x1 + 0x16]
LAB_006f41c2:
006F41C2  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006F41C5  85 D2                     TEST EDX,EDX
006F41C7  74 07                     JZ 0x006f41d0
006F41C9  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006f41d0:
006F41D0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F41D3  85 D2                     TEST EDX,EDX
006F41D5  8B 15 08 70 85 00         MOV EDX,dword ptr [0x00857008]
006F41DB  74 7E                     JZ 0x006f425b
006F41DD  83 FA 03                  CMP EDX,0x3
006F41E0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F41E3  52                        PUSH EDX
006F41E4  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F41E7  52                        PUSH EDX
006F41E8  8B 15 0C 70 85 00         MOV EDX,dword ptr [0x0085700c]
006F41EE  52                        PUSH EDX
006F41EF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F41F2  50                        PUSH EAX
006F41F3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F41F6  50                        PUSH EAX
006F41F7  52                        PUSH EDX
006F41F8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F41FB  75 2F                     JNZ 0x006f422c
006F41FD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F4200  2B F2                     SUB ESI,EDX
006F4202  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4205  2B FB                     SUB EDI,EBX
006F4207  56                        PUSH ESI
006F4208  57                        PUSH EDI
006F4209  53                        PUSH EBX
006F420A  50                        PUSH EAX
006F420B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F420E  52                        PUSH EDX
006F420F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F4212  50                        PUSH EAX
006F4213  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F4216  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F4219  D1 E0                     SHL EAX,0x1
006F421B  50                        PUSH EAX
006F421C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F421F  52                        PUSH EDX
006F4220  51                        PUSH ECX
006F4221  50                        PUSH EAX
006F4222  E8 C9 D0 00 00            CALL 0x007012f0
006F4227  E9 95 0B 00 00            JMP 0x006f4dc1
LAB_006f422c:
006F422C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F422F  2B F2                     SUB ESI,EDX
006F4231  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4234  2B FB                     SUB EDI,EBX
006F4236  56                        PUSH ESI
006F4237  57                        PUSH EDI
006F4238  53                        PUSH EBX
006F4239  50                        PUSH EAX
006F423A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F423D  52                        PUSH EDX
006F423E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F4241  50                        PUSH EAX
006F4242  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F4245  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F4248  D1 E0                     SHL EAX,0x1
006F424A  50                        PUSH EAX
006F424B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F424E  52                        PUSH EDX
006F424F  51                        PUSH ECX
006F4250  50                        PUSH EAX
006F4251  E8 7A D8 00 00            CALL 0x00701ad0
006F4256  E9 66 0B 00 00            JMP 0x006f4dc1
LAB_006f425b:
006F425B  83 FA 03                  CMP EDX,0x3
006F425E  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F4261  52                        PUSH EDX
006F4262  8B 15 0C 70 85 00         MOV EDX,dword ptr [0x0085700c]
006F4268  52                        PUSH EDX
006F4269  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F426C  50                        PUSH EAX
006F426D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F4270  50                        PUSH EAX
006F4271  52                        PUSH EDX
006F4272  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F4275  75 2F                     JNZ 0x006f42a6
006F4277  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F427A  2B F2                     SUB ESI,EDX
006F427C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F427F  2B FB                     SUB EDI,EBX
006F4281  56                        PUSH ESI
006F4282  57                        PUSH EDI
006F4283  53                        PUSH EBX
006F4284  50                        PUSH EAX
006F4285  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4288  52                        PUSH EDX
006F4289  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F428C  50                        PUSH EAX
006F428D  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F4290  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F4293  D1 E0                     SHL EAX,0x1
006F4295  50                        PUSH EAX
006F4296  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4299  52                        PUSH EDX
006F429A  51                        PUSH ECX
006F429B  50                        PUSH EAX
006F429C  E8 EF BE 00 00            CALL 0x00700190
006F42A1  E9 1B 0B 00 00            JMP 0x006f4dc1
LAB_006f42a6:
006F42A6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F42A9  2B F2                     SUB ESI,EDX
006F42AB  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F42AE  2B FB                     SUB EDI,EBX
006F42B0  56                        PUSH ESI
006F42B1  57                        PUSH EDI
006F42B2  53                        PUSH EBX
006F42B3  50                        PUSH EAX
006F42B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F42B7  52                        PUSH EDX
006F42B8  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F42BB  50                        PUSH EAX
006F42BC  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F42BF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F42C2  D1 E0                     SHL EAX,0x1
006F42C4  50                        PUSH EAX
006F42C5  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F42C8  52                        PUSH EDX
006F42C9  51                        PUSH ECX
006F42CA  50                        PUSH EAX
006F42CB  E8 50 C6 00 00            CALL 0x00700920
006F42D0  E9 EC 0A 00 00            JMP 0x006f4dc1
LAB_006f42d5:
006F42D5  A8 04                     TEST AL,0x4
006F42D7  0F 84 F5 00 00 00         JZ 0x006f43d2
006F42DD  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006F42E0  85 C0                     TEST EAX,EAX
006F42E2  0F 84 D9 0A 00 00         JZ 0x006f4dc1
006F42E8  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006F42EB  85 C0                     TEST EAX,EAX
006F42ED  A1 08 70 85 00            MOV EAX,[0x00857008]
006F42F2  74 66                     JZ 0x006f435a
006F42F4  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006F42F7  83 F8 03                  CMP EAX,0x3
006F42FA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F42FD  52                        PUSH EDX
006F42FE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F4301  50                        PUSH EAX
006F4302  52                        PUSH EDX
006F4303  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F4306  75 29                     JNZ 0x006f4331
006F4308  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F430B  2B F2                     SUB ESI,EDX
006F430D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4310  2B FB                     SUB EDI,EBX
006F4312  56                        PUSH ESI
006F4313  57                        PUSH EDI
006F4314  53                        PUSH EBX
006F4315  50                        PUSH EAX
006F4316  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006F4319  52                        PUSH EDX
006F431A  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006F431D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006F4320  52                        PUSH EDX
006F4321  50                        PUSH EAX
006F4322  51                        PUSH ECX
006F4323  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F4326  51                        PUSH ECX
006F4327  E8 A4 1B 01 00            CALL 0x00705ed0
006F432C  E9 90 0A 00 00            JMP 0x006f4dc1
LAB_006f4331:
006F4331  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F4334  2B F2                     SUB ESI,EDX
006F4336  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4339  2B FB                     SUB EDI,EBX
006F433B  56                        PUSH ESI
006F433C  57                        PUSH EDI
006F433D  53                        PUSH EBX
006F433E  50                        PUSH EAX
006F433F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006F4342  52                        PUSH EDX
006F4343  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006F4346  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006F4349  52                        PUSH EDX
006F434A  50                        PUSH EAX
006F434B  51                        PUSH ECX
006F434C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F434F  51                        PUSH ECX
006F4350  E8 EB 1F 01 00            CALL 0x00706340
006F4355  E9 67 0A 00 00            JMP 0x006f4dc1
LAB_006f435a:
006F435A  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F435D  83 F8 03                  CMP EAX,0x3
006F4360  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F4363  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006F4366  52                        PUSH EDX
006F4367  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F436A  52                        PUSH EDX
006F436B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F436E  52                        PUSH EDX
006F436F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F4372  75 2F                     JNZ 0x006f43a3
006F4374  2B F2                     SUB ESI,EDX
006F4376  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4379  2B FB                     SUB EDI,EBX
006F437B  56                        PUSH ESI
006F437C  57                        PUSH EDI
006F437D  53                        PUSH EBX
006F437E  52                        PUSH EDX
006F437F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4382  52                        PUSH EDX
006F4383  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F4386  52                        PUSH EDX
006F4387  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006F438A  52                        PUSH EDX
006F438B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F438E  52                        PUSH EDX
006F438F  50                        PUSH EAX
006F4390  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006F4393  50                        PUSH EAX
006F4394  51                        PUSH ECX
006F4395  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F4398  51                        PUSH ECX
006F4399  E8 72 E1 00 00            CALL 0x00702510
006F439E  E9 1E 0A 00 00            JMP 0x006f4dc1
LAB_006f43a3:
006F43A3  2B F2                     SUB ESI,EDX
006F43A5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F43A8  2B FB                     SUB EDI,EBX
006F43AA  56                        PUSH ESI
006F43AB  57                        PUSH EDI
006F43AC  53                        PUSH EBX
006F43AD  52                        PUSH EDX
006F43AE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F43B1  52                        PUSH EDX
006F43B2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F43B5  52                        PUSH EDX
006F43B6  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006F43B9  52                        PUSH EDX
006F43BA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F43BD  52                        PUSH EDX
006F43BE  50                        PUSH EAX
006F43BF  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006F43C2  50                        PUSH EAX
006F43C3  51                        PUSH ECX
006F43C4  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F43C7  51                        PUSH ECX
006F43C8  E8 63 E6 00 00            CALL 0x00702a30
006F43CD  E9 EF 09 00 00            JMP 0x006f4dc1
LAB_006f43d2:
006F43D2  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006F43D5  85 C0                     TEST EAX,EAX
006F43D7  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006F43DA  0F 84 A5 00 00 00         JZ 0x006f4485
006F43E0  85 C0                     TEST EAX,EAX
006F43E2  A1 08 70 85 00            MOV EAX,[0x00857008]
006F43E7  74 50                     JZ 0x006f4439
006F43E9  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F43EC  83 F8 03                  CMP EAX,0x3
006F43EF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F43F2  52                        PUSH EDX
006F43F3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F43F6  50                        PUSH EAX
006F43F7  52                        PUSH EDX
006F43F8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F43FB  75 1E                     JNZ 0x006f441b
006F43FD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F4400  2B F2                     SUB ESI,EDX
006F4402  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4405  2B FB                     SUB EDI,EBX
006F4407  56                        PUSH ESI
006F4408  57                        PUSH EDI
006F4409  53                        PUSH EBX
006F440A  50                        PUSH EAX
006F440B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F440E  52                        PUSH EDX
006F440F  51                        PUSH ECX
006F4410  50                        PUSH EAX
006F4411  E8 BA 11 01 00            CALL 0x007055d0
006F4416  E9 A6 09 00 00            JMP 0x006f4dc1
LAB_006f441b:
006F441B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F441E  2B F2                     SUB ESI,EDX
006F4420  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4423  2B FB                     SUB EDI,EBX
006F4425  56                        PUSH ESI
006F4426  57                        PUSH EDI
006F4427  53                        PUSH EBX
006F4428  50                        PUSH EAX
006F4429  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F442C  52                        PUSH EDX
006F442D  51                        PUSH ECX
006F442E  50                        PUSH EAX
006F442F  E8 6C 15 01 00            CALL 0x007059a0
006F4434  E9 88 09 00 00            JMP 0x006f4dc1
LAB_006f4439:
006F4439  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F443C  83 F8 03                  CMP EAX,0x3
006F443F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F4442  52                        PUSH EDX
006F4443  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F4446  50                        PUSH EAX
006F4447  75 1E                     JNZ 0x006f4467
006F4449  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F444C  2B F2                     SUB ESI,EDX
006F444E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4451  2B FB                     SUB EDI,EBX
006F4453  56                        PUSH ESI
006F4454  57                        PUSH EDI
006F4455  53                        PUSH EBX
006F4456  52                        PUSH EDX
006F4457  50                        PUSH EAX
006F4458  51                        PUSH ECX
006F4459  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F445C  51                        PUSH ECX
006F445D  E8 0E 0A 01 00            CALL 0x00704e70
006F4462  E9 5A 09 00 00            JMP 0x006f4dc1
LAB_006f4467:
006F4467  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F446A  2B F2                     SUB ESI,EDX
006F446C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F446F  2B FB                     SUB EDI,EBX
006F4471  56                        PUSH ESI
006F4472  57                        PUSH EDI
006F4473  53                        PUSH EBX
006F4474  52                        PUSH EDX
006F4475  50                        PUSH EAX
006F4476  51                        PUSH ECX
006F4477  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F447A  51                        PUSH ECX
006F447B  E8 00 0D 01 00            CALL 0x00705180
006F4480  E9 3C 09 00 00            JMP 0x006f4dc1
LAB_006f4485:
006F4485  85 C0                     TEST EAX,EAX
006F4487  A1 08 70 85 00            MOV EAX,[0x00857008]
006F448C  0F 84 1E 01 00 00         JZ 0x006f45b0
006F4492  83 F8 03                  CMP EAX,0x3
006F4495  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006F4498  0F 85 89 00 00 00         JNZ 0x006f4527
006F449E  85 C0                     TEST EAX,EAX
006F44A0  74 47                     JZ 0x006f44e9
006F44A2  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F44A5  2B FB                     SUB EDI,EBX
006F44A7  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F44AA  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F44AD  52                        PUSH EDX
006F44AE  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F44B1  50                        PUSH EAX
006F44B2  52                        PUSH EDX
006F44B3  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F44B6  03 C0                     ADD EAX,EAX
006F44B8  52                        PUSH EDX
006F44B9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F44BC  52                        PUSH EDX
006F44BD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F44C0  52                        PUSH EDX
006F44C1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F44C4  2B F2                     SUB ESI,EDX
006F44C6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F44C9  56                        PUSH ESI
006F44CA  57                        PUSH EDI
006F44CB  53                        PUSH EBX
006F44CC  52                        PUSH EDX
006F44CD  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F44D0  52                        PUSH EDX
006F44D1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F44D4  52                        PUSH EDX
006F44D5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F44D8  50                        PUSH EAX
006F44D9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F44DC  52                        PUSH EDX
006F44DD  51                        PUSH ECX
006F44DE  50                        PUSH EAX
006F44DF  E8 BC 62 00 00            CALL 0x006fa7a0
006F44E4  E9 D8 08 00 00            JMP 0x006f4dc1
LAB_006f44e9:
006F44E9  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F44EC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F44EF  52                        PUSH EDX
006F44F0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F44F3  50                        PUSH EAX
006F44F4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F44F7  52                        PUSH EDX
006F44F8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F44FB  2B F2                     SUB ESI,EDX
006F44FD  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4500  2B FB                     SUB EDI,EBX
006F4502  56                        PUSH ESI
006F4503  57                        PUSH EDI
006F4504  53                        PUSH EBX
006F4505  50                        PUSH EAX
006F4506  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4509  52                        PUSH EDX
006F450A  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F450D  50                        PUSH EAX
006F450E  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F4511  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F4514  D1 E0                     SHL EAX,0x1
006F4516  50                        PUSH EAX
006F4517  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F451A  52                        PUSH EDX
006F451B  51                        PUSH ECX
006F451C  50                        PUSH EAX
006F451D  E8 5E 5D 00 00            CALL 0x006fa280
006F4522  E9 9A 08 00 00            JMP 0x006f4dc1
LAB_006f4527:
006F4527  85 C0                     TEST EAX,EAX
006F4529  74 47                     JZ 0x006f4572
006F452B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F452E  2B FB                     SUB EDI,EBX
006F4530  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F4533  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F4536  52                        PUSH EDX
006F4537  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F453A  50                        PUSH EAX
006F453B  52                        PUSH EDX
006F453C  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F453F  03 C0                     ADD EAX,EAX
006F4541  52                        PUSH EDX
006F4542  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F4545  52                        PUSH EDX
006F4546  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F4549  52                        PUSH EDX
006F454A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F454D  2B F2                     SUB ESI,EDX
006F454F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4552  56                        PUSH ESI
006F4553  57                        PUSH EDI
006F4554  53                        PUSH EBX
006F4555  52                        PUSH EDX
006F4556  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4559  52                        PUSH EDX
006F455A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F455D  52                        PUSH EDX
006F455E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F4561  50                        PUSH EAX
006F4562  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4565  52                        PUSH EDX
006F4566  51                        PUSH ECX
006F4567  50                        PUSH EAX
006F4568  E8 33 6F 00 00            CALL 0x006fb4a0
006F456D  E9 4F 08 00 00            JMP 0x006f4dc1
LAB_006f4572:
006F4572  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F4575  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F4578  52                        PUSH EDX
006F4579  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F457C  50                        PUSH EAX
006F457D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F4580  52                        PUSH EDX
006F4581  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F4584  2B F2                     SUB ESI,EDX
006F4586  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F4589  2B FB                     SUB EDI,EBX
006F458B  56                        PUSH ESI
006F458C  57                        PUSH EDI
006F458D  53                        PUSH EBX
006F458E  50                        PUSH EAX
006F458F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4592  52                        PUSH EDX
006F4593  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F4596  50                        PUSH EAX
006F4597  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F459A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F459D  D1 E0                     SHL EAX,0x1
006F459F  50                        PUSH EAX
006F45A0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F45A3  52                        PUSH EDX
006F45A4  51                        PUSH ECX
006F45A5  50                        PUSH EAX
006F45A6  E8 15 68 00 00            CALL 0x006fadc0
006F45AB  E9 11 08 00 00            JMP 0x006f4dc1
LAB_006f45b0:
006F45B0  83 F8 03                  CMP EAX,0x3
006F45B3  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006F45B6  0F 85 81 00 00 00         JNZ 0x006f463d
006F45BC  85 C0                     TEST EAX,EAX
006F45BE  74 43                     JZ 0x006f4603
006F45C0  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F45C3  2B FB                     SUB EDI,EBX
006F45C5  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F45C8  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F45CB  52                        PUSH EDX
006F45CC  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F45CF  50                        PUSH EAX
006F45D0  52                        PUSH EDX
006F45D1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F45D4  03 C0                     ADD EAX,EAX
006F45D6  52                        PUSH EDX
006F45D7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F45DA  52                        PUSH EDX
006F45DB  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F45DE  2B F2                     SUB ESI,EDX
006F45E0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F45E3  56                        PUSH ESI
006F45E4  57                        PUSH EDI
006F45E5  53                        PUSH EBX
006F45E6  52                        PUSH EDX
006F45E7  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F45EA  52                        PUSH EDX
006F45EB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F45EE  52                        PUSH EDX
006F45EF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F45F2  50                        PUSH EAX
006F45F3  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F45F6  52                        PUSH EDX
006F45F7  51                        PUSH ECX
006F45F8  50                        PUSH EAX
006F45F9  E8 02 49 00 00            CALL 0x006f8f00
006F45FE  E9 BE 07 00 00            JMP 0x006f4dc1
LAB_006f4603:
006F4603  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F4606  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F4609  52                        PUSH EDX
006F460A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F460D  2B F2                     SUB ESI,EDX
006F460F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4612  50                        PUSH EAX
006F4613  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F4616  2B FB                     SUB EDI,EBX
006F4618  56                        PUSH ESI
006F4619  57                        PUSH EDI
006F461A  53                        PUSH EBX
006F461B  52                        PUSH EDX
006F461C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F461F  50                        PUSH EAX
006F4620  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006F4623  52                        PUSH EDX
006F4624  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006F4627  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F462A  D1 E2                     SHL EDX,0x1
006F462C  52                        PUSH EDX
006F462D  50                        PUSH EAX
006F462E  51                        PUSH ECX
006F462F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F4632  51                        PUSH ECX
006F4633  E8 78 44 00 00            CALL 0x006f8ab0
006F4638  E9 84 07 00 00            JMP 0x006f4dc1
LAB_006f463d:
006F463D  85 C0                     TEST EAX,EAX
006F463F  74 43                     JZ 0x006f4684
006F4641  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006F4644  2B FB                     SUB EDI,EBX
006F4646  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006F4649  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F464C  52                        PUSH EDX
006F464D  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4650  50                        PUSH EAX
006F4651  52                        PUSH EDX
006F4652  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F4655  03 C0                     ADD EAX,EAX
006F4657  52                        PUSH EDX
006F4658  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F465B  52                        PUSH EDX
006F465C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F465F  2B F2                     SUB ESI,EDX
006F4661  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4664  56                        PUSH ESI
006F4665  57                        PUSH EDI
006F4666  53                        PUSH EBX
006F4667  52                        PUSH EDX
006F4668  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006F466B  52                        PUSH EDX
006F466C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F466F  52                        PUSH EDX
006F4670  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F4673  50                        PUSH EAX
006F4674  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4677  52                        PUSH EDX
006F4678  51                        PUSH ECX
006F4679  50                        PUSH EAX
006F467A  E8 51 54 00 00            CALL 0x006f9ad0
006F467F  E9 3D 07 00 00            JMP 0x006f4dc1
LAB_006f4684:
006F4684  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F4687  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F468A  52                        PUSH EDX
006F468B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006F468E  2B F2                     SUB ESI,EDX
006F4690  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4693  50                        PUSH EAX
006F4694  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F4697  2B FB                     SUB EDI,EBX
006F4699  56                        PUSH ESI
006F469A  57                        PUSH EDI
006F469B  53                        PUSH EBX
006F469C  52                        PUSH EDX
006F469D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F46A0  50                        PUSH EAX
006F46A1  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006F46A4  52                        PUSH EDX
006F46A5  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006F46A8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F46AB  D1 E2                     SHL EDX,0x1
006F46AD  52                        PUSH EDX
006F46AE  50                        PUSH EAX
006F46AF  51                        PUSH ECX
006F46B0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006F46B3  51                        PUSH ECX
006F46B4  E8 17 4E 00 00            CALL 0x006f94d0
006F46B9  E9 03 07 00 00            JMP 0x006f4dc1
LAB_006f46be:
006F46BE  A1 D0 6F 85 00            MOV EAX,[0x00856fd0]
006F46C3  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006F46C6  2B C2                     SUB EAX,EDX
006F46C8  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F46CB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006F46CE  A1 D4 6F 85 00            MOV EAX,[0x00856fd4]
006F46D3  0F BF 52 10               MOVSX EDX,word ptr [EDX + 0x10]
006F46D7  2B C2                     SUB EAX,EDX
006F46D9  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
006F46DC  2B C2                     SUB EAX,EDX
006F46DE  8B 93 C0 00 00 00         MOV EDX,dword ptr [EBX + 0xc0]
006F46E4  85 D2                     TEST EDX,EDX
006F46E6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006F46E9  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006F46EC  74 1C                     JZ 0x006f470a
006F46EE  A1 D4 6F 85 00            MOV EAX,[0x00856fd4]
006F46F3  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
006F46F6  2B C2                     SUB EAX,EDX
006F46F8  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F46FB  0F AF 83 BC 00 00 00      IMUL EAX,dword ptr [EBX + 0xbc]
006F4702  03 C2                     ADD EAX,EDX
006F4704  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006F4707  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_006f470a:
006F470A  85 C0                     TEST EAX,EAX
006F470C  7E 14                     JLE 0x006f4722
006F470E  50                        PUSH EAX
006F470F  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006F4712  50                        PUSH EAX
006F4713  E8 F8 B6 FD FF            CALL 0x006cfe10
006F4718  8B 0D 28 70 85 00         MOV ECX,dword ptr [0x00857028]
006F471E  8B D8                     MOV EBX,EAX
006F4720  EB 0F                     JMP 0x006f4731
LAB_006f4722:
006F4722  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006F4725  8A 50 0D                  MOV DL,byte ptr [EAX + 0xd]
006F4728  D1 EA                     SHR EDX,0x1
006F472A  83 E2 0E                  AND EDX,0xe
006F472D  8D 5C 02 16               LEA EBX,[EDX + EAX*0x1 + 0x16]
LAB_006f4731:
006F4731  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006F4734  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006F473A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F473D  66 8B 44 82 02            MOV AX,word ptr [EDX + EAX*0x4 + 0x2]
006F4742  F6 C4 01                  TEST AH,0x1
006F4745  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006F4748  74 5D                     JZ 0x006f47a7
006F474A  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006F474D  85 C0                     TEST EAX,EAX
006F474F  74 07                     JZ 0x006f4758
006F4751  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006f4758:
006F4758  A1 D8 6F 85 00            MOV EAX,[0x00856fd8]
006F475D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4760  3B C2                     CMP EAX,EDX
006F4762  75 07                     JNZ 0x006f476b
006F4764  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_006f476b:
006F476B  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4771  52                        PUSH EDX
006F4772  50                        PUSH EAX
006F4773  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006F4776  8B 90 9C 00 00 00         MOV EDX,dword ptr [EAX + 0x9c]
006F477C  8B 80 98 00 00 00         MOV EAX,dword ptr [EAX + 0x98]
006F4782  52                        PUSH EDX
006F4783  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006F4786  50                        PUSH EAX
006F4787  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F478A  52                        PUSH EDX
006F478B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F478E  50                        PUSH EAX
006F478F  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
006F4792  53                        PUSH EBX
006F4793  52                        PUSH EDX
006F4794  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F4797  D1 E0                     SHL EAX,0x1
006F4799  50                        PUSH EAX
006F479A  52                        PUSH EDX
006F479B  51                        PUSH ECX
006F479C  56                        PUSH ESI
006F479D  E8 2E 21 01 00            CALL 0x007068d0
006F47A2  E9 1A 06 00 00            JMP 0x006f4dc1
LAB_006f47a7:
006F47A7  A8 10                     TEST AL,0x10
006F47A9  74 64                     JZ 0x006f480f
006F47AB  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006F47AE  8B 80 B0 00 00 00         MOV EAX,dword ptr [EAX + 0xb0]
006F47B4  85 C0                     TEST EAX,EAX
006F47B6  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006F47B9  0F 84 02 06 00 00         JZ 0x006f4dc1
006F47BF  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006F47C2  85 C0                     TEST EAX,EAX
006F47C4  74 07                     JZ 0x006f47cd
006F47C6  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006f47cd:
006F47CD  A1 D8 6F 85 00            MOV EAX,[0x00856fd8]
006F47D2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F47D5  3B C2                     CMP EAX,EDX
006F47D7  75 07                     JNZ 0x006f47e0
006F47D9  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_006f47e0:
006F47E0  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F47E3  52                        PUSH EDX
006F47E4  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F47EA  52                        PUSH EDX
006F47EB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F47EE  50                        PUSH EAX
006F47EF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F47F2  50                        PUSH EAX
006F47F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F47F6  52                        PUSH EDX
006F47F7  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F47FA  53                        PUSH EBX
006F47FB  50                        PUSH EAX
006F47FC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F47FF  D1 E2                     SHL EDX,0x1
006F4801  52                        PUSH EDX
006F4802  50                        PUSH EAX
006F4803  51                        PUSH ECX
006F4804  56                        PUSH ESI
006F4805  E8 B6 37 00 00            CALL 0x006f7fc0
006F480A  E9 B2 05 00 00            JMP 0x006f4dc1
LAB_006f480f:
006F480F  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F4812  85 D2                     TEST EDX,EDX
006F4814  0F 84 B8 01 00 00         JZ 0x006f49d2
006F481A  A8 08                     TEST AL,0x8
006F481C  0F 85 B0 01 00 00         JNZ 0x006f49d2
006F4822  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006F4825  85 C0                     TEST EAX,EAX
006F4827  74 07                     JZ 0x006f4830
006F4829  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006f4830:
006F4830  A1 D8 6F 85 00            MOV EAX,[0x00856fd8]
006F4835  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4838  3B C2                     CMP EAX,EDX
006F483A  75 07                     JNZ 0x006f4843
006F483C  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_006f4843:
006F4843  F6 45 C0 04               TEST byte ptr [EBP + -0x40],0x4
006F4847  74 56                     JZ 0x006f489f
006F4849  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006F484C  85 D2                     TEST EDX,EDX
006F484E  0F 84 6D 05 00 00         JZ 0x006f4dc1
006F4854  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F4857  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006F485A  0F BF 52 0E               MOVSX EDX,word ptr [EDX + 0xe]
006F485E  52                        PUSH EDX
006F485F  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F4862  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F4868  52                        PUSH EDX
006F4869  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F486C  52                        PUSH EDX
006F486D  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006F4870  52                        PUSH EDX
006F4871  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4877  52                        PUSH EDX
006F4878  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F487B  50                        PUSH EAX
006F487C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F487F  50                        PUSH EAX
006F4880  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4883  52                        PUSH EDX
006F4884  53                        PUSH EBX
006F4885  50                        PUSH EAX
006F4886  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4889  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F488C  52                        PUSH EDX
006F488D  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4890  50                        PUSH EAX
006F4891  57                        PUSH EDI
006F4892  52                        PUSH EDX
006F4893  51                        PUSH ECX
006F4894  56                        PUSH ESI
006F4895  E8 36 39 00 00            CALL 0x006f81d0
006F489A  E9 22 05 00 00            JMP 0x006f4dc1
LAB_006f489f:
006F489F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F48A2  85 D2                     TEST EDX,EDX
006F48A4  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F48A7  0F 84 95 00 00 00         JZ 0x006f4942
006F48AD  85 D2                     TEST EDX,EDX
006F48AF  74 4C                     JZ 0x006f48fd
006F48B1  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006F48B4  52                        PUSH EDX
006F48B5  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F48B8  57                        PUSH EDI
006F48B9  52                        PUSH EDX
006F48BA  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F48BD  52                        PUSH EDX
006F48BE  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F48C1  0F BF 52 0E               MOVSX EDX,word ptr [EDX + 0xe]
006F48C5  52                        PUSH EDX
006F48C6  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F48C9  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F48CF  52                        PUSH EDX
006F48D0  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F48D3  52                        PUSH EDX
006F48D4  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F48DA  52                        PUSH EDX
006F48DB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F48DE  50                        PUSH EAX
006F48DF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F48E2  50                        PUSH EAX
006F48E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F48E6  52                        PUSH EDX
006F48E7  53                        PUSH EBX
006F48E8  50                        PUSH EAX
006F48E9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F48EC  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F48EF  52                        PUSH EDX
006F48F0  50                        PUSH EAX
006F48F1  51                        PUSH ECX
006F48F2  56                        PUSH ESI
006F48F3  E8 A8 25 00 00            CALL 0x006f6ea0
006F48F8  E9 C4 04 00 00            JMP 0x006f4dc1
LAB_006f48fd:
006F48FD  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F4900  52                        PUSH EDX
006F4901  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F4904  0F BF 52 0E               MOVSX EDX,word ptr [EDX + 0xe]
006F4908  52                        PUSH EDX
006F4909  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F490C  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F4912  52                        PUSH EDX
006F4913  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F4916  52                        PUSH EDX
006F4917  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F491D  52                        PUSH EDX
006F491E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4921  50                        PUSH EAX
006F4922  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4925  50                        PUSH EAX
006F4926  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4929  52                        PUSH EDX
006F492A  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F492D  53                        PUSH EBX
006F492E  50                        PUSH EAX
006F492F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4932  D1 E2                     SHL EDX,0x1
006F4934  52                        PUSH EDX
006F4935  50                        PUSH EAX
006F4936  51                        PUSH ECX
006F4937  56                        PUSH ESI
006F4938  E8 A3 21 00 00            CALL 0x006f6ae0
006F493D  E9 7F 04 00 00            JMP 0x006f4dc1
LAB_006f4942:
006F4942  85 D2                     TEST EDX,EDX
006F4944  74 4B                     JZ 0x006f4991
006F4946  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F4949  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006F494C  52                        PUSH EDX
006F494D  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4950  57                        PUSH EDI
006F4951  52                        PUSH EDX
006F4952  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F4955  0F BF 52 0E               MOVSX EDX,word ptr [EDX + 0xe]
006F4959  52                        PUSH EDX
006F495A  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F495D  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F4963  52                        PUSH EDX
006F4964  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F4967  52                        PUSH EDX
006F4968  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F496E  52                        PUSH EDX
006F496F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4972  50                        PUSH EAX
006F4973  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4976  50                        PUSH EAX
006F4977  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F497A  52                        PUSH EDX
006F497B  53                        PUSH EBX
006F497C  50                        PUSH EAX
006F497D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4980  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F4983  52                        PUSH EDX
006F4984  50                        PUSH EAX
006F4985  51                        PUSH ECX
006F4986  56                        PUSH ESI
006F4987  E8 34 1D 00 00            CALL 0x006f66c0
006F498C  E9 30 04 00 00            JMP 0x006f4dc1
LAB_006f4991:
006F4991  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006F4994  0F BF 52 0E               MOVSX EDX,word ptr [EDX + 0xe]
006F4998  52                        PUSH EDX
006F4999  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F499C  8B 92 BC 00 00 00         MOV EDX,dword ptr [EDX + 0xbc]
006F49A2  52                        PUSH EDX
006F49A3  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006F49A6  52                        PUSH EDX
006F49A7  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F49AD  52                        PUSH EDX
006F49AE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F49B1  50                        PUSH EAX
006F49B2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F49B5  50                        PUSH EAX
006F49B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F49B9  52                        PUSH EDX
006F49BA  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F49BD  53                        PUSH EBX
006F49BE  50                        PUSH EAX
006F49BF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F49C2  D1 E2                     SHL EDX,0x1
006F49C4  52                        PUSH EDX
006F49C5  50                        PUSH EAX
006F49C6  51                        PUSH ECX
006F49C7  56                        PUSH ESI
006F49C8  E8 63 19 00 00            CALL 0x006f6330
006F49CD  E9 EF 03 00 00            JMP 0x006f4dc1
LAB_006f49d2:
006F49D2  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006F49D5  85 D2                     TEST EDX,EDX
006F49D7  0F 84 02 01 00 00         JZ 0x006f4adf
006F49DD  A1 D0 6F 85 00            MOV EAX,[0x00856fd0]
006F49E2  8B 15 E8 6F 85 00         MOV EDX,dword ptr [0x00856fe8]
006F49E8  2B C2                     SUB EAX,EDX
006F49EA  8B 15 E4 6F 85 00         MOV EDX,dword ptr [0x00856fe4]
006F49F0  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006F49F3  A1 D4 6F 85 00            MOV EAX,[0x00856fd4]
006F49F8  0F BF 52 10               MOVSX EDX,word ptr [EDX + 0x10]
006F49FC  2B C2                     SUB EAX,EDX
006F49FE  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006F4A01  2B 42 50                  SUB EAX,dword ptr [EDX + 0x50]
006F4A04  85 C0                     TEST EAX,EAX
006F4A06  7E 17                     JLE 0x006f4a1f
006F4A08  50                        PUSH EAX
006F4A09  A1 E4 6F 85 00            MOV EAX,[0x00856fe4]
006F4A0E  50                        PUSH EAX
006F4A0F  E8 FC B3 FD FF            CALL 0x006cfe10
006F4A14  8B 0D 28 70 85 00         MOV ECX,dword ptr [0x00857028]
006F4A1A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006F4A1D  EB 14                     JMP 0x006f4a33
LAB_006f4a1f:
006F4A1F  A1 E4 6F 85 00            MOV EAX,[0x00856fe4]
006F4A24  8A 50 0D                  MOV DL,byte ptr [EAX + 0xd]
006F4A27  D1 EA                     SHR EDX,0x1
006F4A29  83 E2 0E                  AND EDX,0xe
006F4A2C  8D 44 02 16               LEA EAX,[EDX + EAX*0x1 + 0x16]
006F4A30  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006f4a33:
006F4A33  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006F4A36  85 C0                     TEST EAX,EAX
006F4A38  74 07                     JZ 0x006f4a41
006F4A3A  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006f4a41:
006F4A41  A1 D8 6F 85 00            MOV EAX,[0x00856fd8]
006F4A46  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4A49  3B C2                     CMP EAX,EDX
006F4A4B  75 07                     JNZ 0x006f4a54
006F4A4D  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_006f4a54:
006F4A54  3B 05 0C 70 85 00         CMP EAX,dword ptr [0x0085700c]
006F4A5A  75 07                     JNZ 0x006f4a63
006F4A5C  C7 45 C0 00 00 00 00      MOV dword ptr [EBP + -0x40],0x0
LAB_006f4a63:
006F4A63  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F4A66  85 D2                     TEST EDX,EDX
006F4A68  74 3B                     JZ 0x006f4aa5
006F4A6A  52                        PUSH EDX
006F4A6B  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F4A6E  52                        PUSH EDX
006F4A6F  8B 15 0C 70 85 00         MOV EDX,dword ptr [0x0085700c]
006F4A75  52                        PUSH EDX
006F4A76  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4A79  52                        PUSH EDX
006F4A7A  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4A80  52                        PUSH EDX
006F4A81  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4A84  50                        PUSH EAX
006F4A85  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4A88  50                        PUSH EAX
006F4A89  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4A8C  52                        PUSH EDX
006F4A8D  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F4A90  53                        PUSH EBX
006F4A91  50                        PUSH EAX
006F4A92  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4A95  D1 E2                     SHL EDX,0x1
006F4A97  52                        PUSH EDX
006F4A98  50                        PUSH EAX
006F4A99  51                        PUSH ECX
006F4A9A  56                        PUSH ESI
006F4A9B  E8 40 2D 00 00            CALL 0x006f77e0
006F4AA0  E9 1C 03 00 00            JMP 0x006f4dc1
LAB_006f4aa5:
006F4AA5  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006F4AA8  52                        PUSH EDX
006F4AA9  8B 15 0C 70 85 00         MOV EDX,dword ptr [0x0085700c]
006F4AAF  52                        PUSH EDX
006F4AB0  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4AB3  52                        PUSH EDX
006F4AB4  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4ABA  52                        PUSH EDX
006F4ABB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4ABE  50                        PUSH EAX
006F4ABF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4AC2  50                        PUSH EAX
006F4AC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4AC6  52                        PUSH EDX
006F4AC7  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F4ACA  53                        PUSH EBX
006F4ACB  50                        PUSH EAX
006F4ACC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4ACF  D1 E2                     SHL EDX,0x1
006F4AD1  52                        PUSH EDX
006F4AD2  50                        PUSH EAX
006F4AD3  51                        PUSH ECX
006F4AD4  56                        PUSH ESI
006F4AD5  E8 16 28 00 00            CALL 0x006f72f0
006F4ADA  E9 E2 02 00 00            JMP 0x006f4dc1
LAB_006f4adf:
006F4ADF  A8 04                     TEST AL,0x4
006F4AE1  0F 84 CE 00 00 00         JZ 0x006f4bb5
006F4AE7  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006F4AEA  85 C0                     TEST EAX,EAX
006F4AEC  0F 84 CF 02 00 00         JZ 0x006f4dc1
006F4AF2  A1 D8 6F 85 00            MOV EAX,[0x00856fd8]
006F4AF7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4AFA  3B C2                     CMP EAX,EDX
006F4AFC  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006F4AFF  75 52                     JNZ 0x006f4b53
006F4B01  85 D2                     TEST EDX,EDX
006F4B03  74 21                     JZ 0x006f4b26
006F4B05  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006F4B08  52                        PUSH EDX
006F4B09  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4B0F  52                        PUSH EDX
006F4B10  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4B13  50                        PUSH EAX
006F4B14  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
006F4B17  53                        PUSH EBX
006F4B18  50                        PUSH EAX
006F4B19  52                        PUSH EDX
006F4B1A  51                        PUSH ECX
006F4B1B  56                        PUSH ESI
006F4B1C  E8 7F 3A 00 00            CALL 0x006f85a0
006F4B21  E9 9B 02 00 00            JMP 0x006f4dc1
LAB_006f4b26:
006F4B26  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006F4B29  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006F4B2C  52                        PUSH EDX
006F4B2D  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4B33  52                        PUSH EDX
006F4B34  50                        PUSH EAX
006F4B35  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4B38  53                        PUSH EBX
006F4B39  50                        PUSH EAX
006F4B3A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4B3D  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F4B40  52                        PUSH EDX
006F4B41  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4B44  50                        PUSH EAX
006F4B45  57                        PUSH EDI
006F4B46  52                        PUSH EDX
006F4B47  51                        PUSH ECX
006F4B48  56                        PUSH ESI
006F4B49  E8 12 11 00 00            CALL 0x006f5c60
006F4B4E  E9 6E 02 00 00            JMP 0x006f4dc1
LAB_006f4b53:
006F4B53  85 D2                     TEST EDX,EDX
006F4B55  74 29                     JZ 0x006f4b80
006F4B57  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006F4B5A  52                        PUSH EDX
006F4B5B  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4B61  52                        PUSH EDX
006F4B62  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4B65  50                        PUSH EAX
006F4B66  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4B69  50                        PUSH EAX
006F4B6A  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
006F4B6D  52                        PUSH EDX
006F4B6E  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4B71  53                        PUSH EBX
006F4B72  50                        PUSH EAX
006F4B73  52                        PUSH EDX
006F4B74  51                        PUSH ECX
006F4B75  56                        PUSH ESI
006F4B76  E8 25 3D 00 00            CALL 0x006f88a0
006F4B7B  E9 41 02 00 00            JMP 0x006f4dc1
LAB_006f4b80:
006F4B80  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006F4B83  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006F4B86  52                        PUSH EDX
006F4B87  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4B8D  52                        PUSH EDX
006F4B8E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4B91  50                        PUSH EAX
006F4B92  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4B95  50                        PUSH EAX
006F4B96  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4B99  52                        PUSH EDX
006F4B9A  53                        PUSH EBX
006F4B9B  50                        PUSH EAX
006F4B9C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4B9F  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F4BA2  52                        PUSH EDX
006F4BA3  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4BA6  50                        PUSH EAX
006F4BA7  57                        PUSH EDI
006F4BA8  52                        PUSH EDX
006F4BA9  51                        PUSH ECX
006F4BAA  56                        PUSH ESI
006F4BAB  E8 60 31 00 00            CALL 0x006f7d10
006F4BB0  E9 0C 02 00 00            JMP 0x006f4dc1
LAB_006f4bb5:
006F4BB5  A1 D8 6F 85 00            MOV EAX,[0x00856fd8]
006F4BBA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4BBD  3B C2                     CMP EAX,EDX
006F4BBF  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006F4BC2  0F 85 EA 00 00 00         JNZ 0x006f4cb2
006F4BC8  85 D2                     TEST EDX,EDX
006F4BCA  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F4BCD  74 2F                     JZ 0x006f4bfe
006F4BCF  85 D2                     TEST EDX,EDX
006F4BD1  74 16                     JZ 0x006f4be9
006F4BD3  52                        PUSH EDX
006F4BD4  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4BDA  52                        PUSH EDX
006F4BDB  50                        PUSH EAX
006F4BDC  53                        PUSH EBX
006F4BDD  51                        PUSH ECX
006F4BDE  56                        PUSH ESI
006F4BDF  E8 EC 0F 00 00            CALL 0x006f5bd0
006F4BE4  E9 D8 01 00 00            JMP 0x006f4dc1
LAB_006f4be9:
006F4BE9  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4BEF  52                        PUSH EDX
006F4BF0  50                        PUSH EAX
006F4BF1  53                        PUSH EBX
006F4BF2  51                        PUSH ECX
006F4BF3  56                        PUSH ESI
006F4BF4  E8 E7 D9 FD FF            CALL 0x006d25e0
006F4BF9  E9 C3 01 00 00            JMP 0x006f4dc1
LAB_006f4bfe:
006F4BFE  85 D2                     TEST EDX,EDX
006F4C00  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F4C03  74 59                     JZ 0x006f4c5e
006F4C05  85 D2                     TEST EDX,EDX
006F4C07  74 2E                     JZ 0x006f4c37
006F4C09  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006F4C0C  52                        PUSH EDX
006F4C0D  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4C10  57                        PUSH EDI
006F4C11  52                        PUSH EDX
006F4C12  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F4C15  52                        PUSH EDX
006F4C16  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4C1C  52                        PUSH EDX
006F4C1D  50                        PUSH EAX
006F4C1E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4C21  53                        PUSH EBX
006F4C22  50                        PUSH EAX
006F4C23  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4C26  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F4C29  52                        PUSH EDX
006F4C2A  50                        PUSH EAX
006F4C2B  51                        PUSH ECX
006F4C2C  56                        PUSH ESI
006F4C2D  E8 EE 0C 00 00            CALL 0x006f5920
006F4C32  E9 8A 01 00 00            JMP 0x006f4dc1
LAB_006f4c37:
006F4C37  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F4C3A  52                        PUSH EDX
006F4C3B  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4C41  52                        PUSH EDX
006F4C42  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F4C45  50                        PUSH EAX
006F4C46  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4C49  53                        PUSH EBX
006F4C4A  50                        PUSH EAX
006F4C4B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4C4E  D1 E2                     SHL EDX,0x1
006F4C50  52                        PUSH EDX
006F4C51  50                        PUSH EAX
006F4C52  51                        PUSH ECX
006F4C53  56                        PUSH ESI
006F4C54  E8 07 0B 00 00            CALL 0x006f5760
006F4C59  E9 63 01 00 00            JMP 0x006f4dc1
LAB_006f4c5e:
006F4C5E  85 D2                     TEST EDX,EDX
006F4C60  74 2D                     JZ 0x006f4c8f
006F4C62  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F4C65  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006F4C68  52                        PUSH EDX
006F4C69  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4C6C  57                        PUSH EDI
006F4C6D  52                        PUSH EDX
006F4C6E  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4C74  52                        PUSH EDX
006F4C75  50                        PUSH EAX
006F4C76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4C79  53                        PUSH EBX
006F4C7A  50                        PUSH EAX
006F4C7B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4C7E  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F4C81  52                        PUSH EDX
006F4C82  50                        PUSH EAX
006F4C83  51                        PUSH ECX
006F4C84  56                        PUSH ESI
006F4C85  E8 56 03 00 00            CALL 0x006f4fe0
006F4C8A  E9 32 01 00 00            JMP 0x006f4dc1
LAB_006f4c8f:
006F4C8F  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4C95  52                        PUSH EDX
006F4C96  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F4C99  50                        PUSH EAX
006F4C9A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4C9D  53                        PUSH EBX
006F4C9E  50                        PUSH EAX
006F4C9F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4CA2  D1 E2                     SHL EDX,0x1
006F4CA4  52                        PUSH EDX
006F4CA5  50                        PUSH EAX
006F4CA6  51                        PUSH ECX
006F4CA7  56                        PUSH ESI
006F4CA8  E8 C3 01 00 00            CALL 0x006f4e70
006F4CAD  E9 0F 01 00 00            JMP 0x006f4dc1
LAB_006f4cb2:
006F4CB2  85 D2                     TEST EDX,EDX
006F4CB4  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F4CB7  74 3F                     JZ 0x006f4cf8
006F4CB9  85 D2                     TEST EDX,EDX
006F4CBB  74 1E                     JZ 0x006f4cdb
006F4CBD  52                        PUSH EDX
006F4CBE  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4CC4  52                        PUSH EDX
006F4CC5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4CC8  50                        PUSH EAX
006F4CC9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4CCC  50                        PUSH EAX
006F4CCD  52                        PUSH EDX
006F4CCE  53                        PUSH EBX
006F4CCF  51                        PUSH ECX
006F4CD0  56                        PUSH ESI
006F4CD1  E8 8A 39 00 00            CALL 0x006f8660
006F4CD6  E9 E6 00 00 00            JMP 0x006f4dc1
LAB_006f4cdb:
006F4CDB  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4CE1  52                        PUSH EDX
006F4CE2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4CE5  50                        PUSH EAX
006F4CE6  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4CE9  50                        PUSH EAX
006F4CEA  52                        PUSH EDX
006F4CEB  53                        PUSH EBX
006F4CEC  51                        PUSH ECX
006F4CED  56                        PUSH ESI
006F4CEE  E8 DD D9 FD FF            CALL 0x006d26d0
006F4CF3  E9 C9 00 00 00            JMP 0x006f4dc1
LAB_006f4cf8:
006F4CF8  85 D2                     TEST EDX,EDX
006F4CFA  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F4CFD  74 66                     JZ 0x006f4d65
006F4CFF  85 D2                     TEST EDX,EDX
006F4D01  74 36                     JZ 0x006f4d39
006F4D03  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006F4D06  52                        PUSH EDX
006F4D07  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4D0A  57                        PUSH EDI
006F4D0B  52                        PUSH EDX
006F4D0C  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F4D0F  52                        PUSH EDX
006F4D10  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4D16  52                        PUSH EDX
006F4D17  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4D1A  50                        PUSH EAX
006F4D1B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4D1E  50                        PUSH EAX
006F4D1F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4D22  52                        PUSH EDX
006F4D23  53                        PUSH EBX
006F4D24  50                        PUSH EAX
006F4D25  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4D28  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F4D2B  52                        PUSH EDX
006F4D2C  50                        PUSH EAX
006F4D2D  51                        PUSH ECX
006F4D2E  56                        PUSH ESI
006F4D2F  E8 EC 12 00 00            CALL 0x006f6020
006F4D34  E9 88 00 00 00            JMP 0x006f4dc1
LAB_006f4d39:
006F4D39  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006F4D3C  52                        PUSH EDX
006F4D3D  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4D43  52                        PUSH EDX
006F4D44  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4D47  50                        PUSH EAX
006F4D48  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4D4B  50                        PUSH EAX
006F4D4C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4D4F  52                        PUSH EDX
006F4D50  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F4D53  53                        PUSH EBX
006F4D54  50                        PUSH EAX
006F4D55  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4D58  D1 E2                     SHL EDX,0x1
006F4D5A  52                        PUSH EDX
006F4D5B  50                        PUSH EAX
006F4D5C  51                        PUSH ECX
006F4D5D  56                        PUSH ESI
006F4D5E  E8 1D 10 00 00            CALL 0x006f5d80
006F4D63  EB 5C                     JMP 0x006f4dc1
LAB_006f4d65:
006F4D65  85 D2                     TEST EDX,EDX
006F4D67  74 32                     JZ 0x006f4d9b
006F4D69  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006F4D6C  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006F4D6F  52                        PUSH EDX
006F4D70  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006F4D73  57                        PUSH EDI
006F4D74  52                        PUSH EDX
006F4D75  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4D7B  52                        PUSH EDX
006F4D7C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4D7F  50                        PUSH EAX
006F4D80  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4D83  50                        PUSH EAX
006F4D84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4D87  52                        PUSH EDX
006F4D88  53                        PUSH EBX
006F4D89  50                        PUSH EAX
006F4D8A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4D8D  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F4D90  52                        PUSH EDX
006F4D91  50                        PUSH EAX
006F4D92  51                        PUSH ECX
006F4D93  56                        PUSH ESI
006F4D94  E8 97 06 00 00            CALL 0x006f5430
006F4D99  EB 26                     JMP 0x006f4dc1
LAB_006f4d9b:
006F4D9B  8B 15 DC 6F 85 00         MOV EDX,dword ptr [0x00856fdc]
006F4DA1  52                        PUSH EDX
006F4DA2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F4DA5  50                        PUSH EAX
006F4DA6  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F4DA9  50                        PUSH EAX
006F4DAA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F4DAD  52                        PUSH EDX
006F4DAE  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006F4DB1  53                        PUSH EBX
006F4DB2  50                        PUSH EAX
006F4DB3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F4DB6  D1 E2                     SHL EDX,0x1
006F4DB8  52                        PUSH EDX
006F4DB9  50                        PUSH EAX
006F4DBA  51                        PUSH ECX
006F4DBB  56                        PUSH ESI
006F4DBC  E8 7F 04 00 00            CALL 0x006f5240
LAB_006f4dc1:
006F4DC1  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006F4DC4  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006F4DC7  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006F4DCA  8B 8F 30 03 00 00         MOV ECX,dword ptr [EDI + 0x330]
006F4DD0  40                        INC EAX
006F4DD1  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006F4DD4  3B 44 11 18               CMP EAX,dword ptr [ECX + EDX*0x1 + 0x18]
006F4DD8  7D 12                     JGE 0x006f4dec
006F4DDA  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006F4DDD  83 C0 02                  ADD EAX,0x2
006F4DE0  C1 E0 04                  SHL EAX,0x4
006F4DE3  03 C1                     ADD EAX,ECX
006F4DE5  03 C2                     ADD EAX,EDX
006F4DE7  E9 41 EC FF FF            JMP 0x006f3a2d
LAB_006f4dec:
006F4DEC  8B 0D 00 70 85 00         MOV ECX,dword ptr [0x00857000]
006F4DF2  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006F4DF5  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_006f4df8:
006F4DF8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F4DFB  48                        DEC EAX
006F4DFC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F4DFF  0F 89 5D E7 FF FF         JNS 0x006f3562
006F4E05  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006F4E08  85 C0                     TEST EAX,EAX
006F4E0A  75 5A                     JNZ 0x006f4e66
LAB_006f4e0c:
006F4E0C  8B 97 30 03 00 00         MOV EDX,dword ptr [EDI + 0x330]
006F4E12  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006F4E15  83 7C 10 18 04            CMP dword ptr [EAX + EDX*0x1 + 0x18],0x4
006F4E1A  7E 4A                     JLE 0x006f4e66
006F4E1C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F4E1F  85 C0                     TEST EAX,EAX
006F4E21  74 26                     JZ 0x006f4e49
006F4E23  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F4E26  33 C9                     XOR ECX,ECX
006F4E28  85 C0                     TEST EAX,EAX
006F4E2A  8B 03                     MOV EAX,dword ptr [EBX]
006F4E2C  5F                        POP EDI
006F4E2D  0F 9F C1                  SETG CL
006F4E30  49                        DEC ECX
006F4E31  5E                        POP ESI
006F4E32  81 E1 00 00 E0 FF         AND ECX,0xffe00000
006F4E38  81 C1 00 00 40 00         ADD ECX,0x400000
006F4E3E  0B C1                     OR EAX,ECX
006F4E40  89 03                     MOV dword ptr [EBX],EAX
006F4E42  5B                        POP EBX
006F4E43  8B E5                     MOV ESP,EBP
006F4E45  5D                        POP EBP
006F4E46  C2 10 00                  RET 0x10
LAB_006f4e49:
006F4E49  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F4E4C  33 D2                     XOR EDX,EDX
006F4E4E  85 C0                     TEST EAX,EAX
006F4E50  8B 03                     MOV EAX,dword ptr [EBX]
006F4E52  0F 9F C2                  SETG DL
006F4E55  4A                        DEC EDX
006F4E56  81 E2 00 00 F8 FF         AND EDX,0xfff80000
006F4E5C  81 C2 00 00 10 00         ADD EDX,0x100000
006F4E62  0B C2                     OR EAX,EDX
006F4E64  89 03                     MOV dword ptr [EBX],EAX
LAB_006f4e66:
006F4E66  5F                        POP EDI
006F4E67  5E                        POP ESI
006F4E68  5B                        POP EBX
006F4E69  8B E5                     MOV ESP,EBP
006F4E6B  5D                        POP EBP
006F4E6C  C2 10 00                  RET 0x10
