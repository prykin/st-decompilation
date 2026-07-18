CPanelTy::CreateBut:
004F3130  55                        PUSH EBP
004F3131  8B EC                     MOV EBP,ESP
004F3133  81 EC CC 01 00 00         SUB ESP,0x1cc
004F3139  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F313E  53                        PUSH EBX
004F313F  56                        PUSH ESI
004F3140  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F3143  33 DB                     XOR EBX,EBX
004F3145  57                        PUSH EDI
004F3146  8D 95 38 FE FF FF         LEA EDX,[EBP + 0xfffffe38]
004F314C  8D 8D 34 FE FF FF         LEA ECX,[EBP + 0xfffffe34]
004F3152  53                        PUSH EBX
004F3153  52                        PUSH EDX
004F3154  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004F3157  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004F315A  89 85 34 FE FF FF         MOV dword ptr [EBP + 0xfffffe34],EAX
004F3160  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F3166  E8 85 A6 23 00            CALL 0x0072d7f0
004F316B  8B F0                     MOV ESI,EAX
004F316D  83 C4 08                  ADD ESP,0x8
004F3170  3B F3                     CMP ESI,EBX
004F3172  0F 85 91 02 00 00         JNZ 0x004f3409
004F3178  B9 5F 00 00 00            MOV ECX,0x5f
004F317D  33 C0                     XOR EAX,EAX
004F317F  8D BD 78 FE FF FF         LEA EDI,[EBP + 0xfffffe78]
004F3185  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004F3188  F3 AB                     STOSD.REP ES:EDI
004F318A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F318D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004F3190  89 85 7C FE FF FF         MOV dword ptr [EBP + 0xfffffe7c],EAX
004F3196  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004F3199  3B C3                     CMP EAX,EBX
004F319B  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
004F319E  89 8D 78 FE FF FF         MOV dword ptr [EBP + 0xfffffe78],ECX
004F31A4  74 2E                     JZ 0x004f31d4
004F31A6  8D BE E1 01 00 00         LEA EDI,[ESI + 0x1e1]
004F31AC  50                        PUSH EAX
004F31AD  68 1C 18 7C 00            PUSH 0x7c181c
004F31B2  57                        PUSH EDI
004F31B3  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F31B9  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F31BF  83 C4 0C                  ADD ESP,0xc
004F31C2  6A 01                     PUSH 0x1
004F31C4  6A 00                     PUSH 0x0
004F31C6  57                        PUSH EDI
004F31C7  53                        PUSH EBX
004F31C8  E8 13 EB 1F 00            CALL 0x006f1ce0
004F31CD  8B F8                     MOV EDI,EAX
004F31CF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004F31D2  EB 03                     JMP 0x004f31d7
LAB_004f31d4:
004F31D4  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_004f31d7:
004F31D7  81 E3 FF 00 00 00         AND EBX,0xff
004F31DD  4B                        DEC EBX
004F31DE  74 27                     JZ 0x004f3207
004F31E0  83 EB 05                  SUB EBX,0x5
004F31E3  74 0E                     JZ 0x004f31f3
004F31E5  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
004F31E8  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
004F31EB  89 8D 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],ECX
004F31F1  EB 20                     JMP 0x004f3213
LAB_004f31f3:
004F31F3  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
004F31F6  89 8D 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],ECX
004F31FC  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
004F31FF  89 85 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EAX
004F3205  EB 12                     JMP 0x004f3219
LAB_004f3207:
004F3207  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
004F320A  89 8D 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],ECX
004F3210  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
LAB_004f3213:
004F3213  89 95 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EDX
LAB_004f3219:
004F3219  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004F321C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004F321F  85 C0                     TEST EAX,EAX
004F3221  7D 12                     JGE 0x004f3235
004F3223  8B C3                     MOV EAX,EBX
004F3225  25 FF 00 00 00            AND EAX,0xff
004F322A  8B 44 86 68               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x68]
004F322E  2B C1                     SUB EAX,ECX
004F3230  99                        CDQ
004F3231  2B C2                     SUB EAX,EDX
004F3233  D1 F8                     SAR EAX,0x1
LAB_004f3235:
004F3235  8B CB                     MOV ECX,EBX
004F3237  81 E1 FF 00 00 00         AND ECX,0xff
004F323D  8B 54 8E 3C               MOV EDX,dword ptr [ESI + ECX*0x4 + 0x3c]
004F3241  03 D0                     ADD EDX,EAX
004F3243  8B 86 30 01 00 00         MOV EAX,dword ptr [ESI + 0x130]
004F3249  83 F9 08                  CMP ECX,0x8
004F324C  89 95 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EDX
004F3252  77 1D                     JA 0x004f3271
004F3254  33 D2                     XOR EDX,EDX
004F3256  8A 91 60 34 4F 00         MOV DL,byte ptr [ECX + 0x4f3460]
switchD_004f325c::switchD:
004F325C  FF 24 95 54 34 4F 00      JMP dword ptr [EDX*0x4 + 0x4f3454]
switchD_004f325c::caseD_0:
004F3263  8B 86 34 01 00 00         MOV EAX,dword ptr [ESI + 0x134]
004F3269  EB 06                     JMP 0x004f3271
switchD_004f325c::caseD_5:
004F326B  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
switchD_004f325c::caseD_4:
004F3271  85 C0                     TEST EAX,EAX
004F3273  74 09                     JZ 0x004f327e
004F3275  8B 8C 8E 94 00 00 00      MOV ECX,dword ptr [ESI + ECX*0x4 + 0x94]
004F327C  EB 1B                     JMP 0x004f3299
LAB_004f327e:
004F327E  80 FB 01                  CMP BL,0x1
004F3281  74 09                     JZ 0x004f328c
004F3283  80 FB 07                  CMP BL,0x7
004F3286  74 04                     JZ 0x004f328c
004F3288  33 C9                     XOR ECX,ECX
004F328A  EB 06                     JMP 0x004f3292
LAB_004f328c:
004F328C  8B 8E C0 00 00 00         MOV ECX,dword ptr [ESI + 0xc0]
LAB_004f3292:
004F3292  A1 34 67 80 00            MOV EAX,[0x00806734]
004F3297  03 C8                     ADD ECX,EAX
LAB_004f3299:
004F3299  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004F329C  03 CA                     ADD ECX,EDX
004F329E  85 FF                     TEST EDI,EDI
004F32A0  89 8D 84 FE FF FF         MOV dword ptr [EBP + 0xfffffe84],ECX
004F32A6  74 0F                     JZ 0x004f32b7
004F32A8  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F32AE  8D 45 FC                  LEA EAX,[EBP + -0x4]
004F32B1  50                        PUSH EAX
004F32B2  E8 29 EE 1F 00            CALL 0x006f20e0
LAB_004f32b7:
004F32B7  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
004F32BA  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
004F32BD  89 85 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EAX
004F32C3  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
004F32C9  89 85 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EAX
004F32CF  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
004F32D2  89 85 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EAX
004F32D8  66 8B 45 2C               MOV AX,word ptr [EBP + 0x2c]
004F32DC  B9 02 00 00 00            MOV ECX,0x2
004F32E1  89 95 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],EDX
004F32E7  8B 55 44                  MOV EDX,dword ptr [EBP + 0x44]
004F32EA  BB 01 00 00 00            MOV EBX,0x1
004F32EF  89 8D 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],ECX
004F32F5  89 8D BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],ECX
004F32FB  89 8D DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],ECX
004F3301  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
004F3304  66 85 C0                  TEST AX,AX
004F3307  89 95 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EDX
004F330D  89 5D 80                  MOV dword ptr [EBP + -0x80],EBX
004F3310  89 5D 84                  MOV dword ptr [EBP + -0x7c],EBX
004F3313  74 75                     JZ 0x004f338a
004F3315  66 8B 55 30               MOV DX,word ptr [EBP + 0x30]
004F3319  BF 03 00 00 00            MOV EDI,0x3
004F331E  C7 85 F8 FE FF FF 01 01 00 00  MOV dword ptr [EBP + 0xfffffef8],0x101
004F3328  89 BD FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],EDI
004F332E  C7 85 00 FF FF FF 01 42 00 00  MOV dword ptr [EBP + 0xffffff00],0x4201
004F3338  66 89 95 04 FF FF FF      MOV word ptr [EBP + 0xffffff04],DX
004F333F  66 89 85 06 FF FF FF      MOV word ptr [EBP + 0xffffff06],AX
004F3346  89 8D 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],ECX
004F334C  C7 85 10 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x0
004F3356  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
004F335C  C7 85 1C FF FF FF 01 01 00 00  MOV dword ptr [EBP + 0xffffff1c],0x101
004F3366  89 BD 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EDI
004F336C  C7 85 24 FF FF FF 02 42 00 00  MOV dword ptr [EBP + 0xffffff24],0x4202
004F3376  66 89 95 28 FF FF FF      MOV word ptr [EBP + 0xffffff28],DX
004F337D  66 89 85 2A FF FF FF      MOV word ptr [EBP + 0xffffff2a],AX
004F3384  89 8D 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],ECX
LAB_004f338a:
004F338A  66 3B C3                  CMP AX,BX
004F338D  75 18                     JNZ 0x004f33a7
004F338F  8B 49 09                  MOV ECX,dword ptr [ECX + 0x9]
004F3392  85 C9                     TEST ECX,ECX
004F3394  7C 11                     JL 0x004f33a7
004F3396  8B 0C 8D 66 7E 80 00      MOV ECX,dword ptr [ECX*0x4 + 0x807e66]
004F339D  C7 45 A4 08 00 00 00      MOV dword ptr [EBP + -0x5c],0x8
004F33A4  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
LAB_004f33a7:
004F33A7  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
004F33AA  85 FF                     TEST EDI,EDI
004F33AC  74 28                     JZ 0x004f33d6
004F33AE  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
004F33B4  53                        PUSH EBX
004F33B5  6A 00                     PUSH 0x0
004F33B7  57                        PUSH EDI
004F33B8  52                        PUSH EDX
004F33B9  E8 B2 76 21 00            CALL 0x0070aa70
004F33BE  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
004F33C1  A1 90 67 80 00            MOV EAX,[0x00806790]
004F33C6  53                        PUSH EBX
004F33C7  57                        PUSH EDI
004F33C8  6A 12                     PUSH 0x12
004F33CA  50                        PUSH EAX
004F33CB  E8 20 73 21 00            CALL 0x0070a6f0
004F33D0  83 C4 20                  ADD ESP,0x20
004F33D3  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
LAB_004f33d6:
004F33D6  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
004F33D9  8D 85 78 FE FF FF         LEA EAX,[EBP + 0xfffffe78]
004F33DF  6A 00                     PUSH 0x0
004F33E1  50                        PUSH EAX
004F33E2  8B 16                     MOV EDX,dword ptr [ESI]
004F33E4  8D 4D F8                  LEA ECX,[EBP + -0x8]
004F33E7  6A 00                     PUSH 0x0
004F33E9  51                        PUSH ECX
004F33EA  6A 02                     PUSH 0x2
004F33EC  8B CE                     MOV ECX,ESI
004F33EE  FF 52 08                  CALL dword ptr [EDX + 0x8]
004F33F1  8B 95 34 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe34]
004F33F7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F33FA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F3400  5F                        POP EDI
004F3401  5E                        POP ESI
004F3402  5B                        POP EBX
004F3403  8B E5                     MOV ESP,EBP
004F3405  5D                        POP EBP
004F3406  C2 40 00                  RET 0x40
LAB_004f3409:
004F3409  8B 85 34 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe34]
004F340F  68 20 1B 7C 00            PUSH 0x7c1b20
004F3414  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F3419  56                        PUSH ESI
004F341A  53                        PUSH EBX
004F341B  68 B3 01 00 00            PUSH 0x1b3
004F3420  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F3425  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F342A  E8 A1 A0 1B 00            CALL 0x006ad4d0
004F342F  83 C4 18                  ADD ESP,0x18
004F3432  85 C0                     TEST EAX,EAX
004F3434  74 01                     JZ 0x004f3437
004F3436  CC                        INT3
LAB_004f3437:
004F3437  68 B3 01 00 00            PUSH 0x1b3
004F343C  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F3441  53                        PUSH EBX
004F3442  56                        PUSH ESI
004F3443  E8 F8 29 1B 00            CALL 0x006a5e40
004F3448  5F                        POP EDI
004F3449  5E                        POP ESI
004F344A  33 C0                     XOR EAX,EAX
004F344C  5B                        POP EBX
004F344D  8B E5                     MOV ESP,EBP
004F344F  5D                        POP EBP
004F3450  C2 40 00                  RET 0x40
