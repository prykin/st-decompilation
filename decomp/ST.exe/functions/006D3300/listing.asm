FUN_006d3300:
006D3300  55                        PUSH EBP
006D3301  8B EC                     MOV EBP,ESP
006D3303  53                        PUSH EBX
006D3304  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006D3307  56                        PUSH ESI
006D3308  57                        PUSH EDI
006D3309  85 DB                     TEST EBX,EBX
006D330B  74 15                     JZ 0x006d3322
006D330D  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D3310  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D3313  0F AF 45 34               IMUL EAX,dword ptr [EBP + 0x34]
006D3317  C1 F9 03                  SAR ECX,0x3
006D331A  03 CB                     ADD ECX,EBX
006D331C  8D 1C 01                  LEA EBX,[ECX + EAX*0x1]
006D331F  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
LAB_006d3322:
006D3322  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D3325  85 C0                     TEST EAX,EAX
006D3327  7E 0E                     JLE 0x006d3337
006D3329  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D332C  50                        PUSH EAX
006D332D  57                        PUSH EDI
006D332E  E8 DD CA FF FF            CALL 0x006cfe10
006D3333  8B F0                     MOV ESI,EAX
006D3335  EB 0F                     JMP 0x006d3346
LAB_006d3337:
006D3337  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D333A  8A 57 0D                  MOV DL,byte ptr [EDI + 0xd]
006D333D  D1 EA                     SHR EDX,0x1
006D333F  83 E2 0E                  AND EDX,0xe
006D3342  8D 74 3A 16               LEA ESI,[EDX + EDI*0x1 + 0x16]
LAB_006d3346:
006D3346  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
006D334A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D334D  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006D3350  3B C8                     CMP ECX,EAX
006D3352  0F 85 77 01 00 00         JNZ 0x006d34cf
006D3358  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D335B  85 DB                     TEST EBX,EBX
006D335D  75 79                     JNZ 0x006d33d8
006D335F  8B C8                     MOV ECX,EAX
006D3361  48                        DEC EAX
006D3362  85 C9                     TEST ECX,ECX
006D3364  0F 8E BA 03 00 00         JLE 0x006d3724
006D336A  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006D336D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D3370  40                        INC EAX
006D3371  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
LAB_006d3374:
006D3374  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D3377  33 C0                     XOR EAX,EAX
006D3379  8A 06                     MOV AL,byte ptr [ESI]
006D337B  46                        INC ESI
006D337C  85 C0                     TEST EAX,EAX
006D337E  74 45                     JZ 0x006d33c5
LAB_006d3380:
006D3380  8B C8                     MOV ECX,EAX
006D3382  83 E1 7F                  AND ECX,0x7f
006D3385  2B F9                     SUB EDI,ECX
006D3387  A8 80                     TEST AL,0x80
006D3389  74 1D                     JZ 0x006d33a8
006D338B  8B C1                     MOV EAX,ECX
006D338D  49                        DEC ECX
006D338E  85 C0                     TEST EAX,EAX
006D3390  7E 19                     JLE 0x006d33ab
006D3392  41                        INC ECX
LAB_006d3393:
006D3393  33 C0                     XOR EAX,EAX
006D3395  83 C2 02                  ADD EDX,0x2
006D3398  8A 06                     MOV AL,byte ptr [ESI]
006D339A  46                        INC ESI
006D339B  49                        DEC ECX
006D339C  66 8B 04 43               MOV AX,word ptr [EBX + EAX*0x2]
006D33A0  66 89 42 FE               MOV word ptr [EDX + -0x2],AX
006D33A4  75 ED                     JNZ 0x006d3393
006D33A6  EB 03                     JMP 0x006d33ab
LAB_006d33a8:
006D33A8  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
LAB_006d33ab:
006D33AB  85 FF                     TEST EDI,EDI
006D33AD  7E 07                     JLE 0x006d33b6
006D33AF  33 C0                     XOR EAX,EAX
006D33B1  8A 06                     MOV AL,byte ptr [ESI]
006D33B3  46                        INC ESI
006D33B4  EB CA                     JMP 0x006d3380
LAB_006d33b6:
006D33B6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D33B9  8D 04 09                  LEA EAX,[ECX + ECX*0x1]
006D33BC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D33BF  2B C8                     SUB ECX,EAX
006D33C1  03 D1                     ADD EDX,ECX
006D33C3  EB 03                     JMP 0x006d33c8
LAB_006d33c5:
006D33C5  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
LAB_006d33c8:
006D33C8  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D33CB  48                        DEC EAX
006D33CC  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006D33CF  75 A3                     JNZ 0x006d3374
006D33D1  5F                        POP EDI
006D33D2  5E                        POP ESI
006D33D3  5B                        POP EBX
006D33D4  5D                        POP EBP
006D33D5  C2 30 00                  RET 0x30
LAB_006d33d8:
006D33D8  8B D0                     MOV EDX,EAX
006D33DA  48                        DEC EAX
006D33DB  85 D2                     TEST EDX,EDX
006D33DD  0F 8E 41 03 00 00         JLE 0x006d3724
006D33E3  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D33E6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D33E9  83 E1 07                  AND ECX,0x7
006D33EC  BA 80 00 00 00            MOV EDX,0x80
006D33F1  D3 FA                     SAR EDX,CL
006D33F3  40                        INC EAX
006D33F4  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006D33F7  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
LAB_006d33fa:
006D33FA  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D33FD  33 C9                     XOR ECX,ECX
006D33FF  8A 0E                     MOV CL,byte ptr [ESI]
006D3401  46                        INC ESI
006D3402  85 C9                     TEST ECX,ECX
006D3404  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
006D3407  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006D340A  0F 84 A0 00 00 00         JZ 0x006d34b0
LAB_006d3410:
006D3410  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D3413  8B C1                     MOV EAX,ECX
006D3415  83 E0 7F                  AND EAX,0x7f
006D3418  2B D8                     SUB EBX,EAX
006D341A  F6 C1 80                  TEST CL,0x80
006D341D  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006D3420  74 36                     JZ 0x006d3458
006D3422  8B C8                     MOV ECX,EAX
006D3424  48                        DEC EAX
006D3425  85 C9                     TEST ECX,ECX
006D3427  7E 61                     JLE 0x006d348a
006D3429  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D342C  40                        INC EAX
006D342D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D3430  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
LAB_006d3433:
006D3433  84 11                     TEST byte ptr [ECX],DL
006D3435  74 0B                     JZ 0x006d3442
006D3437  33 DB                     XOR EBX,EBX
006D3439  8A 1E                     MOV BL,byte ptr [ESI]
006D343B  66 8B 1C 58               MOV BX,word ptr [EAX + EBX*0x2]
006D343F  66 89 1F                  MOV word ptr [EDI],BX
LAB_006d3442:
006D3442  83 C7 02                  ADD EDI,0x2
006D3445  46                        INC ESI
006D3446  D0 EA                     SHR DL,0x1
006D3448  75 03                     JNZ 0x006d344d
006D344A  B2 80                     MOV DL,0x80
006D344C  41                        INC ECX
LAB_006d344d:
006D344D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D3450  4B                        DEC EBX
006D3451  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006D3454  75 DD                     JNZ 0x006d3433
006D3456  EB 2F                     JMP 0x006d3487
LAB_006d3458:
006D3458  33 DB                     XOR EBX,EBX
006D345A  8B C8                     MOV ECX,EAX
006D345C  8A FA                     MOV BH,DL
006D345E  83 E1 07                  AND ECX,0x7
006D3461  D3 EB                     SHR EBX,CL
006D3463  8D 3C 47                  LEA EDI,[EDI + EAX*0x2]
006D3466  8B CB                     MOV ECX,EBX
006D3468  81 F9 80 00 00 00         CMP ECX,0x80
006D346E  77 0B                     JA 0x006d347b
006D3470  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D3473  42                        INC EDX
006D3474  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006D3477  8A D1                     MOV DL,CL
006D3479  EB 04                     JMP 0x006d347f
LAB_006d347b:
006D347B  33 D2                     XOR EDX,EDX
006D347D  8A D5                     MOV DL,CH
LAB_006d347f:
006D347F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D3482  C1 F8 03                  SAR EAX,0x3
006D3485  03 C8                     ADD ECX,EAX
LAB_006d3487:
006D3487  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
LAB_006d348a:
006D348A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D348D  85 C0                     TEST EAX,EAX
006D348F  7E 0A                     JLE 0x006d349b
006D3491  33 C9                     XOR ECX,ECX
006D3493  8A 0E                     MOV CL,byte ptr [ESI]
006D3495  46                        INC ESI
006D3496  E9 75 FF FF FF            JMP 0x006d3410
LAB_006d349b:
006D349B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D349E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D34A1  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006D34A4  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
006D34A7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D34AA  2B C8                     SUB ECX,EAX
006D34AC  03 F9                     ADD EDI,ECX
006D34AE  EB 03                     JMP 0x006d34b3
LAB_006d34b0:
006D34B0  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
LAB_006d34b3:
006D34B3  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D34B6  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006D34B9  03 D9                     ADD EBX,ECX
006D34BB  48                        DEC EAX
006D34BC  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
006D34BF  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006D34C2  0F 85 32 FF FF FF         JNZ 0x006d33fa
006D34C8  5F                        POP EDI
006D34C9  5E                        POP ESI
006D34CA  5B                        POP EBX
006D34CB  5D                        POP EBP
006D34CC  C2 30 00                  RET 0x30
LAB_006d34cf:
006D34CF  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D34D2  8B D0                     MOV EDX,EAX
006D34D4  48                        DEC EAX
006D34D5  85 D2                     TEST EDX,EDX
006D34D7  0F 8E 47 02 00 00         JLE 0x006d3724
006D34DD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D34E0  40                        INC EAX
006D34E1  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
LAB_006d34e4:
006D34E4  33 C0                     XOR EAX,EAX
006D34E6  8A 06                     MOV AL,byte ptr [ESI]
006D34E8  46                        INC ESI
006D34E9  85 C0                     TEST EAX,EAX
006D34EB  0F 84 13 02 00 00         JZ 0x006d3704
006D34F1  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D34F4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D34F7  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006D34FA  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D34FD  83 E1 07                  AND ECX,0x7
006D3500  BB 80 00 00 00            MOV EBX,0x80
006D3505  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006D3508  8B D0                     MOV EDX,EAX
006D350A  D3 FB                     SAR EBX,CL
006D350C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D350F  83 E2 7F                  AND EDX,0x7f
006D3512  3B D1                     CMP EDX,ECX
006D3514  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D3517  7F 16                     JG 0x006d352f
LAB_006d3519:
006D3519  A8 80                     TEST AL,0x80
006D351B  74 02                     JZ 0x006d351f
006D351D  03 F2                     ADD ESI,EDX
LAB_006d351f:
006D351F  33 C0                     XOR EAX,EAX
006D3521  2B CA                     SUB ECX,EDX
006D3523  8A 06                     MOV AL,byte ptr [ESI]
006D3525  46                        INC ESI
006D3526  8B D0                     MOV EDX,EAX
006D3528  83 E2 7F                  AND EDX,0x7f
006D352B  3B D1                     CMP EDX,ECX
006D352D  7E EA                     JLE 0x006d3519
LAB_006d352f:
006D352F  2B D1                     SUB EDX,ECX
006D3531  A8 80                     TEST AL,0x80
006D3533  74 02                     JZ 0x006d3537
006D3535  03 F1                     ADD ESI,ECX
LAB_006d3537:
006D3537  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D353A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D353D  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D3540  85 C9                     TEST ECX,ECX
006D3542  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D3545  0F 85 86 00 00 00         JNZ 0x006d35d1
006D354B  3B D1                     CMP EDX,ECX
006D354D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D3550  7F 45                     JG 0x006d3597
LAB_006d3552:
006D3552  2B CA                     SUB ECX,EDX
006D3554  A8 80                     TEST AL,0x80
006D3556  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D3559  74 23                     JZ 0x006d357e
006D355B  8B DA                     MOV EBX,EDX
006D355D  4A                        DEC EDX
006D355E  85 DB                     TEST EBX,EBX
006D3560  7E 1F                     JLE 0x006d3581
006D3562  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D3565  42                        INC EDX
LAB_006d3566:
006D3566  33 DB                     XOR EBX,EBX
006D3568  83 C7 02                  ADD EDI,0x2
006D356B  8A 1E                     MOV BL,byte ptr [ESI]
006D356D  46                        INC ESI
006D356E  4A                        DEC EDX
006D356F  66 8B 1C 59               MOV BX,word ptr [ECX + EBX*0x2]
006D3573  66 89 5F FE               MOV word ptr [EDI + -0x2],BX
006D3577  75 ED                     JNZ 0x006d3566
006D3579  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D357C  EB 03                     JMP 0x006d3581
LAB_006d357e:
006D357E  8D 3C 57                  LEA EDI,[EDI + EDX*0x2]
LAB_006d3581:
006D3581  85 C9                     TEST ECX,ECX
006D3583  7E 10                     JLE 0x006d3595
006D3585  33 C0                     XOR EAX,EAX
006D3587  8A 06                     MOV AL,byte ptr [ESI]
006D3589  8B D0                     MOV EDX,EAX
006D358B  83 E2 7F                  AND EDX,0x7f
006D358E  46                        INC ESI
006D358F  3B D1                     CMP EDX,ECX
006D3591  7E BF                     JLE 0x006d3552
006D3593  EB 02                     JMP 0x006d3597
LAB_006d3595:
006D3595  33 D2                     XOR EDX,EDX
LAB_006d3597:
006D3597  2B D1                     SUB EDX,ECX
006D3599  A8 80                     TEST AL,0x80
006D359B  0F 84 22 01 00 00         JZ 0x006d36c3
006D35A1  8B D9                     MOV EBX,ECX
006D35A3  49                        DEC ECX
006D35A4  85 DB                     TEST EBX,EBX
006D35A6  0F 8E 1F 01 00 00         JLE 0x006d36cb
006D35AC  41                        INC ECX
006D35AD  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D35B0  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
LAB_006d35b3:
006D35B3  33 DB                     XOR EBX,EBX
006D35B5  83 C7 02                  ADD EDI,0x2
006D35B8  8A 1E                     MOV BL,byte ptr [ESI]
006D35BA  46                        INC ESI
006D35BB  66 8B 1C 59               MOV BX,word ptr [ECX + EBX*0x2]
006D35BF  66 89 5F FE               MOV word ptr [EDI + -0x2],BX
006D35C3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D35C6  4B                        DEC EBX
006D35C7  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006D35CA  75 E7                     JNZ 0x006d35b3
006D35CC  E9 FA 00 00 00            JMP 0x006d36cb
LAB_006d35d1:
006D35D1  3B D1                     CMP EDX,ECX
006D35D3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D35D6  0F 8F 9C 00 00 00         JG 0x006d3678
LAB_006d35dc:
006D35DC  2B CA                     SUB ECX,EDX
006D35DE  A8 80                     TEST AL,0x80
006D35E0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D35E3  74 3C                     JZ 0x006d3621
006D35E5  8B CA                     MOV ECX,EDX
006D35E7  4A                        DEC EDX
006D35E8  85 C9                     TEST ECX,ECX
006D35EA  7E 69                     JLE 0x006d3655
006D35EC  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D35EF  42                        INC EDX
006D35F0  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_006d35f3:
006D35F3  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D35F6  84 1A                     TEST byte ptr [EDX],BL
006D35F8  74 0B                     JZ 0x006d3605
006D35FA  33 D2                     XOR EDX,EDX
006D35FC  8A 16                     MOV DL,byte ptr [ESI]
006D35FE  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006D3602  66 89 17                  MOV word ptr [EDI],DX
LAB_006d3605:
006D3605  83 C7 02                  ADD EDI,0x2
006D3608  46                        INC ESI
006D3609  D0 EB                     SHR BL,0x1
006D360B  75 09                     JNZ 0x006d3616
006D360D  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D3610  B3 80                     MOV BL,0x80
006D3612  42                        INC EDX
006D3613  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
LAB_006d3616:
006D3616  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D3619  4A                        DEC EDX
006D361A  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006D361D  75 D4                     JNZ 0x006d35f3
006D361F  EB 34                     JMP 0x006d3655
LAB_006d3621:
006D3621  33 C9                     XOR ECX,ECX
006D3623  8D 3C 57                  LEA EDI,[EDI + EDX*0x2]
006D3626  8A EB                     MOV CH,BL
006D3628  8B D9                     MOV EBX,ECX
006D362A  8B CA                     MOV ECX,EDX
006D362C  83 E1 07                  AND ECX,0x7
006D362F  D3 EB                     SHR EBX,CL
006D3631  8B CB                     MOV ECX,EBX
006D3633  81 F9 80 00 00 00         CMP ECX,0x80
006D3639  77 0B                     JA 0x006d3646
006D363B  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006D363E  43                        INC EBX
006D363F  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
006D3642  8A D9                     MOV BL,CL
006D3644  EB 04                     JMP 0x006d364a
LAB_006d3646:
006D3646  33 DB                     XOR EBX,EBX
006D3648  8A DD                     MOV BL,CH
LAB_006d364a:
006D364A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D364D  C1 FA 03                  SAR EDX,0x3
006D3650  03 CA                     ADD ECX,EDX
006D3652  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
LAB_006d3655:
006D3655  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D3658  85 C9                     TEST ECX,ECX
006D365A  7E 17                     JLE 0x006d3673
006D365C  33 C0                     XOR EAX,EAX
006D365E  8A 06                     MOV AL,byte ptr [ESI]
006D3660  8B D0                     MOV EDX,EAX
006D3662  83 E2 7F                  AND EDX,0x7f
006D3665  46                        INC ESI
006D3666  3B D1                     CMP EDX,ECX
006D3668  0F 8E 6E FF FF FF         JLE 0x006d35dc
006D366E  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D3671  EB 05                     JMP 0x006d3678
LAB_006d3673:
006D3673  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D3676  33 D2                     XOR EDX,EDX
LAB_006d3678:
006D3678  2B D1                     SUB EDX,ECX
006D367A  A8 80                     TEST AL,0x80
006D367C  74 45                     JZ 0x006d36c3
006D367E  8B F9                     MOV EDI,ECX
006D3680  49                        DEC ECX
006D3681  85 FF                     TEST EDI,EDI
006D3683  7E 43                     JLE 0x006d36c8
006D3685  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D3688  41                        INC ECX
006D3689  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006d368c:
006D368C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D368F  84 19                     TEST byte ptr [ECX],BL
006D3691  74 11                     JZ 0x006d36a4
006D3693  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006D3696  33 C9                     XOR ECX,ECX
006D3698  8A 0E                     MOV CL,byte ptr [ESI]
006D369A  66 8B 0C 4F               MOV CX,word ptr [EDI + ECX*0x2]
006D369E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D36A1  66 89 0F                  MOV word ptr [EDI],CX
LAB_006d36a4:
006D36A4  83 C7 02                  ADD EDI,0x2
006D36A7  46                        INC ESI
006D36A8  D0 EB                     SHR BL,0x1
006D36AA  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D36AD  75 09                     JNZ 0x006d36b8
006D36AF  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D36B2  B3 80                     MOV BL,0x80
006D36B4  41                        INC ECX
006D36B5  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
LAB_006d36b8:
006D36B8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D36BB  49                        DEC ECX
006D36BC  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D36BF  75 CB                     JNZ 0x006d368c
006D36C1  EB 08                     JMP 0x006d36cb
LAB_006d36c3:
006D36C3  8D 3C 4F                  LEA EDI,[EDI + ECX*0x2]
006D36C6  EB 03                     JMP 0x006d36cb
LAB_006d36c8:
006D36C8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006d36cb:
006D36CB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D36CE  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006D36D1  2B CB                     SUB ECX,EBX
006D36D3  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006D36D6  2B CB                     SUB ECX,EBX
006D36D8  3B D1                     CMP EDX,ECX
006D36DA  7D 16                     JGE 0x006d36f2
LAB_006d36dc:
006D36DC  A8 80                     TEST AL,0x80
006D36DE  74 02                     JZ 0x006d36e2
006D36E0  03 F2                     ADD ESI,EDX
LAB_006d36e2:
006D36E2  33 C0                     XOR EAX,EAX
006D36E4  2B CA                     SUB ECX,EDX
006D36E6  8A 06                     MOV AL,byte ptr [ESI]
006D36E8  8B D0                     MOV EDX,EAX
006D36EA  83 E2 7F                  AND EDX,0x7f
006D36ED  46                        INC ESI
006D36EE  3B D1                     CMP EDX,ECX
006D36F0  7C EA                     JL 0x006d36dc
LAB_006d36f2:
006D36F2  A8 80                     TEST AL,0x80
006D36F4  74 02                     JZ 0x006d36f8
006D36F6  03 F1                     ADD ESI,ECX
LAB_006d36f8:
006D36F8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D36FB  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006D36FE  2B C8                     SUB ECX,EAX
006D3700  03 F9                     ADD EDI,ECX
006D3702  EB 03                     JMP 0x006d3707
LAB_006d3704:
006D3704  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
LAB_006d3707:
006D3707  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D370A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D370D  85 C0                     TEST EAX,EAX
006D370F  74 06                     JZ 0x006d3717
006D3711  03 45 2C                  ADD EAX,dword ptr [EBP + 0x2c]
006D3714  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
LAB_006d3717:
006D3717  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006D371A  48                        DEC EAX
006D371B  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006D371E  0F 85 C0 FD FF FF         JNZ 0x006d34e4
LAB_006d3724:
006D3724  5F                        POP EDI
006D3725  5E                        POP ESI
006D3726  5B                        POP EBX
006D3727  5D                        POP EBP
006D3728  C2 30 00                  RET 0x30
