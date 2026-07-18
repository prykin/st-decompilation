FUN_004e3200:
004E3200  55                        PUSH EBP
004E3201  8B EC                     MOV EBP,ESP
004E3203  83 EC 74                  SUB ESP,0x74
004E3206  53                        PUSH EBX
004E3207  56                        PUSH ESI
004E3208  57                        PUSH EDI
004E3209  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E320C  33 DB                     XOR EBX,EBX
004E320E  8B F1                     MOV ESI,ECX
004E3210  8B 07                     MOV EAX,dword ptr [EDI]
004E3212  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004E3215  3B C3                     CMP EAX,EBX
004E3217  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004E321A  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
004E321D  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004E3220  75 0E                     JNZ 0x004e3230
004E3222  6A 05                     PUSH 0x5
004E3224  6A 30                     PUSH 0x30
004E3226  6A 05                     PUSH 0x5
004E3228  53                        PUSH EBX
004E3229  E8 62 B0 1C 00            CALL 0x006ae290
004E322E  89 07                     MOV dword ptr [EDI],EAX
LAB_004e3230:
004E3230  39 5F 04                  CMP dword ptr [EDI + 0x4],EBX
004E3233  75 0F                     JNZ 0x004e3244
004E3235  6A 05                     PUSH 0x5
004E3237  6A 30                     PUSH 0x30
004E3239  6A 05                     PUSH 0x5
004E323B  53                        PUSH EBX
004E323C  E8 4F B0 1C 00            CALL 0x006ae290
004E3241  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
LAB_004e3244:
004E3244  8B 07                     MOV EAX,dword ptr [EDI]
004E3246  89 58 0C                  MOV dword ptr [EAX + 0xc],EBX
004E3249  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
004E324C  89 59 0C                  MOV dword ptr [ECX + 0xc],EBX
004E324F  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E3255  83 F8 35                  CMP EAX,0x35
004E3258  0F 84 CD 01 00 00         JZ 0x004e342b
004E325E  83 F8 53                  CMP EAX,0x53
004E3261  0F 8E 81 03 00 00         JLE 0x004e35e8
004E3267  83 F8 5A                  CMP EAX,0x5a
004E326A  0F 8F 78 03 00 00         JG 0x004e35e8
004E3270  8D 8C 40 04 FF FF FF      LEA ECX,[EAX + EAX*0x2 + 0xffffff04]
004E3277  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004E327A  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004E327D  39 1C 95 FC A3 79 00      CMP dword ptr [EDX*0x4 + 0x79a3fc],EBX
004E3284  0F 84 5E 03 00 00         JZ 0x004e35e8
004E328A  8D 84 40 04 FF FF FF      LEA EAX,[EAX + EAX*0x2 + 0xffffff04]
004E3291  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E3294  8D 1C 85 FC A3 79 00      LEA EBX,[EAX*0x4 + 0x79a3fc]
LAB_004e329b:
004E329B  83 7D EC 0F               CMP dword ptr [EBP + -0x14],0xf
004E329F  0F 8D 43 03 00 00         JGE 0x004e35e8
004E32A5  8B 0B                     MOV ECX,dword ptr [EBX]
004E32A7  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E32AA  51                        PUSH ECX
004E32AB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E32B1  52                        PUSH EDX
004E32B2  E8 98 1F F2 FF            CALL 0x0040524f
004E32B7  85 C0                     TEST EAX,EAX
004E32B9  0F 84 4F 01 00 00         JZ 0x004e340e
004E32BF  8B 03                     MOV EAX,dword ptr [EBX]
004E32C1  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E32C4  50                        PUSH EAX
004E32C5  51                        PUSH ECX
004E32C6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E32CC  E8 3C 20 F2 FF            CALL 0x0040530d
004E32D1  8B 13                     MOV EDX,dword ptr [EBX]
004E32D3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E32D9  8B F8                     MOV EDI,EAX
004E32DB  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E32DE  52                        PUSH EDX
004E32DF  50                        PUSH EAX
004E32E0  E8 86 E5 F1 FF            CALL 0x0040186b
004E32E5  3B C7                     CMP EAX,EDI
004E32E7  0F 8D 21 01 00 00         JGE 0x004e340e
004E32ED  83 BE 61 03 00 00 02      CMP dword ptr [ESI + 0x361],0x2
004E32F4  75 10                     JNZ 0x004e3306
004E32F6  8B 8E 69 03 00 00         MOV ECX,dword ptr [ESI + 0x369]
004E32FC  8B 03                     MOV EAX,dword ptr [EBX]
004E32FE  3B C8                     CMP ECX,EAX
004E3300  0F 84 08 01 00 00         JZ 0x004e340e
LAB_004e3306:
004E3306  8B 13                     MOV EDX,dword ptr [EBX]
004E3308  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E330B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3311  52                        PUSH EDX
004E3312  50                        PUSH EAX
004E3313  E8 07 EB F1 FF            CALL 0x00401e1f
004E3318  85 C0                     TEST EAX,EAX
004E331A  0F 85 EE 00 00 00         JNZ 0x004e340e
004E3320  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E3323  B9 0C 00 00 00            MOV ECX,0xc
004E3328  8D 7D BC                  LEA EDI,[EBP + -0x44]
004E332B  F3 AB                     STOSD.REP ES:EDI
004E332D  8B 0B                     MOV ECX,dword ptr [EBX]
004E332F  51                        PUSH ECX
004E3330  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3336  52                        PUSH EDX
004E3337  E8 2F E5 F1 FF            CALL 0x0040186b
004E333C  40                        INC EAX
004E333D  33 C9                     XOR ECX,ECX
004E333F  66 8B 0B                  MOV CX,word ptr [EBX]
004E3342  C1 E0 10                  SHL EAX,0x10
004E3345  0B C1                     OR EAX,ECX
004E3347  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004E334A  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004E3350  85 C0                     TEST EAX,EAX
004E3352  74 1A                     JZ 0x004e336e
004E3354  8B 13                     MOV EDX,dword ptr [EBX]
004E3356  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E3359  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E335F  52                        PUSH EDX
004E3360  50                        PUSH EAX
004E3361  E8 30 00 F2 FF            CALL 0x00403396
004E3366  85 C0                     TEST EAX,EAX
004E3368  C6 45 C4 01               MOV byte ptr [EBP + -0x3c],0x1
004E336C  75 04                     JNZ 0x004e3372
LAB_004e336e:
004E336E  C6 45 C4 00               MOV byte ptr [EBP + -0x3c],0x0
LAB_004e3372:
004E3372  8D 4D F0                  LEA ECX,[EBP + -0x10]
004E3375  8D 55 F4                  LEA EDX,[EBP + -0xc]
004E3378  51                        PUSH ECX
004E3379  8D 45 F8                  LEA EAX,[EBP + -0x8]
004E337C  52                        PUSH EDX
004E337D  8B 13                     MOV EDX,dword ptr [EBX]
004E337F  8D 4D FC                  LEA ECX,[EBP + -0x4]
004E3382  50                        PUSH EAX
004E3383  51                        PUSH ECX
004E3384  52                        PUSH EDX
004E3385  6A 02                     PUSH 0x2
004E3387  8B CE                     MOV ECX,ESI
004E3389  E8 51 02 F2 FF            CALL 0x004035df
004E338E  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
004E3392  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004E3395  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
004E3399  66 89 4D C6               MOV word ptr [EBP + -0x3a],CX
004E339D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E33A3  52                        PUSH EDX
004E33A4  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
004E33A8  E8 0A 16 F2 FF            CALL 0x004049b7
004E33AD  3C 03                     CMP AL,0x3
004E33AF  74 0A                     JZ 0x004e33bb
004E33B1  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
004E33B5  66 89 45 C8               MOV word ptr [EBP + -0x38],AX
004E33B9  EB 08                     JMP 0x004e33c3
LAB_004e33bb:
004E33BB  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
004E33BF  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
LAB_004e33c3:
004E33C3  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004E33C6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E33CC  52                        PUSH EDX
004E33CD  E8 E5 15 F2 FF            CALL 0x004049b7
004E33D2  8B 0B                     MOV ECX,dword ptr [EBX]
004E33D4  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E33D7  88 45 C5                  MOV byte ptr [EBP + -0x3b],AL
004E33DA  8D 45 CE                  LEA EAX,[EBP + -0x32]
004E33DD  50                        PUSH EAX
004E33DE  51                        PUSH ECX
004E33DF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E33E5  52                        PUSH EDX
004E33E6  E8 80 E4 F1 FF            CALL 0x0040186b
004E33EB  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E33EE  40                        INC EAX
004E33EF  50                        PUSH EAX
004E33F0  8B 03                     MOV EAX,dword ptr [EBX]
004E33F2  50                        PUSH EAX
004E33F3  51                        PUSH ECX
004E33F4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E33FA  E8 89 F4 F1 FF            CALL 0x00402888
004E33FF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E3402  8D 55 BC                  LEA EDX,[EBP + -0x44]
004E3405  52                        PUSH EDX
004E3406  8B 08                     MOV ECX,dword ptr [EAX]
004E3408  51                        PUSH ECX
004E3409  E8 B2 AD 1C 00            CALL 0x006ae1c0
LAB_004e340e:
004E340E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004E3411  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
004E3414  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E3417  83 C3 04                  ADD EBX,0x4
004E341A  42                        INC EDX
004E341B  85 C0                     TEST EAX,EAX
004E341D  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004E3420  0F 85 75 FE FF FF         JNZ 0x004e329b
004E3426  E9 BD 01 00 00            JMP 0x004e35e8
LAB_004e342b:
004E342B  8B 96 39 02 00 00         MOV EDX,dword ptr [ESI + 0x239]
004E3431  53                        PUSH EBX
004E3432  8B 04 95 04 FC 7B 00      MOV EAX,dword ptr [EDX*0x4 + 0x7bfc04]
004E3439  80 3C 18 00               CMP byte ptr [EAX + EBX*0x1],0x0
004E343D  74 11                     JZ 0x004e3450
004E343F  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E3442  51                        PUSH ECX
004E3443  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3449  E8 01 1E F2 FF            CALL 0x0040524f
004E344E  EB 21                     JMP 0x004e3471
LAB_004e3450:
004E3450  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E3453  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3459  52                        PUSH EDX
004E345A  E8 0C E4 F1 FF            CALL 0x0040186b
004E345F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3465  40                        INC EAX
004E3466  50                        PUSH EAX
004E3467  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E346A  53                        PUSH EBX
004E346B  50                        PUSH EAX
004E346C  E8 D1 EE F1 FF            CALL 0x00402342
LAB_004e3471:
004E3471  85 C0                     TEST EAX,EAX
004E3473  0F 84 5F 01 00 00         JZ 0x004e35d8
004E3479  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E347C  53                        PUSH EBX
004E347D  51                        PUSH ECX
004E347E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3484  E8 84 1E F2 FF            CALL 0x0040530d
004E3489  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E348C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3492  53                        PUSH EBX
004E3493  52                        PUSH EDX
004E3494  8B F8                     MOV EDI,EAX
004E3496  E8 D0 E3 F1 FF            CALL 0x0040186b
004E349B  3B C7                     CMP EAX,EDI
004E349D  0F 8D 35 01 00 00         JGE 0x004e35d8
004E34A3  83 BE 61 03 00 00 02      CMP dword ptr [ESI + 0x361],0x2
004E34AA  75 0C                     JNZ 0x004e34b8
004E34AC  39 9E 69 03 00 00         CMP dword ptr [ESI + 0x369],EBX
004E34B2  0F 84 20 01 00 00         JZ 0x004e35d8
LAB_004e34b8:
004E34B8  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E34BB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E34C1  53                        PUSH EBX
004E34C2  50                        PUSH EAX
004E34C3  E8 57 E9 F1 FF            CALL 0x00401e1f
004E34C8  85 C0                     TEST EAX,EAX
004E34CA  0F 85 08 01 00 00         JNZ 0x004e35d8
004E34D0  B9 0C 00 00 00            MOV ECX,0xc
004E34D5  8D 7D BC                  LEA EDI,[EBP + -0x44]
004E34D8  F3 AB                     STOSD.REP ES:EDI
004E34DA  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E34DD  53                        PUSH EBX
004E34DE  51                        PUSH ECX
004E34DF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E34E5  E8 81 E3 F1 FF            CALL 0x0040186b
004E34EA  40                        INC EAX
004E34EB  8B D3                     MOV EDX,EBX
004E34ED  C1 E0 10                  SHL EAX,0x10
004E34F0  81 E2 FF FF 00 00         AND EDX,0xffff
004E34F6  0B C2                     OR EAX,EDX
004E34F8  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004E34FB  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
004E3501  8B 0C 85 04 FC 7B 00      MOV ECX,dword ptr [EAX*0x4 + 0x7bfc04]
004E3508  80 3C 19 00               CMP byte ptr [ECX + EBX*0x1],0x0
004E350C  74 18                     JZ 0x004e3526
004E350E  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E3511  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3517  53                        PUSH EBX
004E3518  52                        PUSH EDX
004E3519  E8 78 FE F1 FF            CALL 0x00403396
004E351E  85 C0                     TEST EAX,EAX
004E3520  C6 45 C4 00               MOV byte ptr [EBP + -0x3c],0x0
004E3524  74 04                     JZ 0x004e352a
LAB_004e3526:
004E3526  C6 45 C4 01               MOV byte ptr [EBP + -0x3c],0x1
LAB_004e352a:
004E352A  8D 45 F0                  LEA EAX,[EBP + -0x10]
004E352D  8D 4D F4                  LEA ECX,[EBP + -0xc]
004E3530  50                        PUSH EAX
004E3531  8D 55 F8                  LEA EDX,[EBP + -0x8]
004E3534  51                        PUSH ECX
004E3535  8D 45 FC                  LEA EAX,[EBP + -0x4]
004E3538  52                        PUSH EDX
004E3539  50                        PUSH EAX
004E353A  53                        PUSH EBX
004E353B  6A 02                     PUSH 0x2
004E353D  8B CE                     MOV ECX,ESI
004E353F  E8 9B 00 F2 FF            CALL 0x004035df
004E3544  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
004E3548  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E354B  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
004E354F  66 89 4D CA               MOV word ptr [EBP + -0x36],CX
004E3553  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3559  50                        PUSH EAX
004E355A  66 89 55 C6               MOV word ptr [EBP + -0x3a],DX
004E355E  E8 54 14 F2 FF            CALL 0x004049b7
004E3563  3C 03                     CMP AL,0x3
004E3565  74 0A                     JZ 0x004e3571
004E3567  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
004E356B  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
004E356F  EB 08                     JMP 0x004e3579
LAB_004e3571:
004E3571  66 8B 55 F0               MOV DX,word ptr [EBP + -0x10]
004E3575  66 89 55 C8               MOV word ptr [EBP + -0x38],DX
LAB_004e3579:
004E3579  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E357C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3582  50                        PUSH EAX
004E3583  E8 2F 14 F2 FF            CALL 0x004049b7
004E3588  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E358B  8D 4D CE                  LEA ECX,[EBP + -0x32]
004E358E  51                        PUSH ECX
004E358F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3595  53                        PUSH EBX
004E3596  52                        PUSH EDX
004E3597  88 45 C5                  MOV byte ptr [EBP + -0x3b],AL
004E359A  E8 CC E2 F1 FF            CALL 0x0040186b
004E359F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E35A5  40                        INC EAX
004E35A6  50                        PUSH EAX
004E35A7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E35AA  53                        PUSH EBX
004E35AB  50                        PUSH EAX
004E35AC  E8 D7 F2 F1 FF            CALL 0x00402888
004E35B1  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004E35B7  8B 14 8D 04 FC 7B 00      MOV EDX,dword ptr [ECX*0x4 + 0x7bfc04]
004E35BE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E35C1  80 3C 1A 00               CMP byte ptr [EDX + EBX*0x1],0x0
004E35C5  8D 45 BC                  LEA EAX,[EBP + -0x44]
004E35C8  50                        PUSH EAX
004E35C9  74 04                     JZ 0x004e35cf
004E35CB  8B 11                     MOV EDX,dword ptr [ECX]
004E35CD  EB 03                     JMP 0x004e35d2
LAB_004e35cf:
004E35CF  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
LAB_004e35d2:
004E35D2  52                        PUSH EDX
004E35D3  E8 E8 AB 1C 00            CALL 0x006ae1c0
LAB_004e35d8:
004E35D8  43                        INC EBX
004E35D9  81 FB 9B 00 00 00         CMP EBX,0x9b
004E35DF  0F 8C 46 FE FF FF         JL 0x004e342b
004E35E5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_004e35e8:
004E35E8  8B DF                     MOV EBX,EDI
004E35EA  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
LAB_004e35f1:
004E35F1  8B 03                     MOV EAX,dword ptr [EBX]
004E35F3  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004E35F6  85 C9                     TEST ECX,ECX
004E35F8  74 5E                     JZ 0x004e3658
LAB_004e35fa:
004E35FA  8B 0B                     MOV ECX,dword ptr [EBX]
004E35FC  33 F6                     XOR ESI,ESI
004E35FE  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
004E3601  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
004E3604  83 EA 02                  SUB EDX,0x2
004E3607  78 4F                     JS 0x004e3658
LAB_004e3609:
004E3609  8D 45 BC                  LEA EAX,[EBP + -0x44]
004E360C  8B D6                     MOV EDX,ESI
004E360E  50                        PUSH EAX
004E360F  E8 5C 96 1C 00            CALL 0x006acc70
004E3614  8D 4D 8C                  LEA ECX,[EBP + -0x74]
004E3617  8D 7E 01                  LEA EDI,[ESI + 0x1]
004E361A  51                        PUSH ECX
004E361B  8B 0B                     MOV ECX,dword ptr [EBX]
004E361D  8B D7                     MOV EDX,EDI
004E361F  E8 4C 96 1C 00            CALL 0x006acc70
004E3624  8A 45 C4                  MOV AL,byte ptr [EBP + -0x3c]
004E3627  84 C0                     TEST AL,AL
004E3629  75 18                     JNZ 0x004e3643
004E362B  8A 45 94                  MOV AL,byte ptr [EBP + -0x6c]
004E362E  84 C0                     TEST AL,AL
004E3630  74 11                     JZ 0x004e3643
004E3632  8B 13                     MOV EDX,dword ptr [EBX]
004E3634  57                        PUSH EDI
004E3635  56                        PUSH ESI
004E3636  52                        PUSH EDX
004E3637  E8 94 D6 1C 00            CALL 0x006b0cd0
004E363C  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
LAB_004e3643:
004E3643  8B 0B                     MOV ECX,dword ptr [EBX]
004E3645  8B F7                     MOV ESI,EDI
004E3647  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004E364A  83 E8 02                  SUB EAX,0x2
004E364D  3B F0                     CMP ESI,EAX
004E364F  7E B8                     JLE 0x004e3609
004E3651  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E3654  85 C0                     TEST EAX,EAX
004E3656  75 A2                     JNZ 0x004e35fa
LAB_004e3658:
004E3658  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004E365B  83 C3 04                  ADD EBX,0x4
004E365E  48                        DEC EAX
004E365F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004E3662  75 8D                     JNZ 0x004e35f1
004E3664  5F                        POP EDI
004E3665  5E                        POP ESI
004E3666  5B                        POP EBX
004E3667  8B E5                     MOV ESP,EBP
004E3669  5D                        POP EBP
004E366A  C2 04 00                  RET 0x4
