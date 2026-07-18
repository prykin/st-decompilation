FUN_006a5210:
006A5210  55                        PUSH EBP
006A5211  8B EC                     MOV EBP,ESP
006A5213  83 EC 08                  SUB ESP,0x8
006A5216  A0 78 C1 7E 00            MOV AL,[0x007ec178]
006A521B  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
006A5222  A8 01                     TEST AL,0x1
006A5224  75 09                     JNZ 0x006a522f
006A5226  B8 01 00 00 00            MOV EAX,0x1
006A522B  8B E5                     MOV ESP,EBP
006A522D  5D                        POP EBP
006A522E  C3                        RET
LAB_006a522f:
006A522F  E8 BC C6 08 00            CALL 0x007318f0
006A5234  83 F8 FF                  CMP EAX,-0x1
006A5237  0F 84 DE 00 00 00         JZ 0x006a531b
006A523D  83 F8 FE                  CMP EAX,-0x2
006A5240  0F 84 D5 00 00 00         JZ 0x006a531b
006A5246  83 C0 06                  ADD EAX,0x6
006A5249  83 F8 03                  CMP EAX,0x3
006A524C  0F 87 A3 00 00 00         JA 0x006a52f5
switchD_006a5252::switchD:
006A5252  FF 24 85 7C 54 6A 00      JMP dword ptr [EAX*0x4 + 0x6a547c]
switchD_006a5252::caseD_fffffffd:
006A5259  68 AC C8 7E 00            PUSH 0x7ec8ac
006A525E  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A5263  6A 00                     PUSH 0x0
006A5265  6A 00                     PUSH 0x0
006A5267  6A 00                     PUSH 0x0
006A5269  6A 00                     PUSH 0x0
006A526B  E8 30 BD 08 00            CALL 0x00730fa0
006A5270  83 C4 18                  ADD ESP,0x18
006A5273  83 F8 01                  CMP EAX,0x1
006A5276  0F 85 99 00 00 00         JNZ 0x006a5315
006A527C  CC                        INT3
switchD_006a5252::caseD_fffffffc:
006A5283  68 80 C8 7E 00            PUSH 0x7ec880
006A5288  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A528D  6A 00                     PUSH 0x0
006A528F  6A 00                     PUSH 0x0
006A5291  6A 00                     PUSH 0x0
006A5293  6A 00                     PUSH 0x0
006A5295  E8 06 BD 08 00            CALL 0x00730fa0
006A529A  83 C4 18                  ADD ESP,0x18
006A529D  83 F8 01                  CMP EAX,0x1
006A52A0  75 73                     JNZ 0x006a5315
006A52A2  CC                        INT3
switchD_006a5252::caseD_fffffffb:
006A52A9  68 58 C8 7E 00            PUSH 0x7ec858
006A52AE  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A52B3  6A 00                     PUSH 0x0
006A52B5  6A 00                     PUSH 0x0
006A52B7  6A 00                     PUSH 0x0
006A52B9  6A 00                     PUSH 0x0
006A52BB  E8 E0 BC 08 00            CALL 0x00730fa0
006A52C0  83 C4 18                  ADD ESP,0x18
006A52C3  83 F8 01                  CMP EAX,0x1
006A52C6  75 4D                     JNZ 0x006a5315
006A52C8  CC                        INT3
switchD_006a5252::caseD_fffffffa:
006A52CF  68 30 C8 7E 00            PUSH 0x7ec830
006A52D4  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A52D9  6A 00                     PUSH 0x0
006A52DB  6A 00                     PUSH 0x0
006A52DD  6A 00                     PUSH 0x0
006A52DF  6A 00                     PUSH 0x0
006A52E1  E8 BA BC 08 00            CALL 0x00730fa0
006A52E6  83 C4 18                  ADD ESP,0x18
006A52E9  83 F8 01                  CMP EAX,0x1
006A52EC  75 27                     JNZ 0x006a5315
006A52EE  CC                        INT3
switchD_006a5252::default:
006A52F5  68 FC C7 7E 00            PUSH 0x7ec7fc
006A52FA  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A52FF  6A 00                     PUSH 0x0
006A5301  6A 00                     PUSH 0x0
006A5303  6A 00                     PUSH 0x0
006A5305  6A 00                     PUSH 0x0
006A5307  E8 94 BC 08 00            CALL 0x00730fa0
006A530C  83 C4 18                  ADD ESP,0x18
006A530F  83 F8 01                  CMP EAX,0x1
006A5312  75 01                     JNZ 0x006a5315
006A5314  CC                        INT3
LAB_006a5315:
006A5315  33 C0                     XOR EAX,EAX
006A5317  8B E5                     MOV ESP,EBP
006A5319  5D                        POP EBP
006A531A  C3                        RET
LAB_006a531b:
006A531B  53                        PUSH EBX
006A531C  56                        PUSH ESI
006A531D  8B 35 6C 49 85 00         MOV ESI,dword ptr [0x0085496c]
006A5323  33 DB                     XOR EBX,EBX
006A5325  3B F3                     CMP ESI,EBX
006A5327  0F 84 44 01 00 00         JZ 0x006a5471
006A532D  57                        PUSH EDI
LAB_006a532e:
006A532E  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006A5331  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006A5338  8B C1                     MOV EAX,ECX
006A533A  25 FF FF 00 00            AND EAX,0xffff
006A533F  83 F8 04                  CMP EAX,0x4
006A5342  74 14                     JZ 0x006a5358
006A5344  83 F9 01                  CMP ECX,0x1
006A5347  74 0F                     JZ 0x006a5358
006A5349  83 F8 02                  CMP EAX,0x2
006A534C  74 0A                     JZ 0x006a5358
006A534E  83 F9 03                  CMP ECX,0x3
006A5351  BF F0 C7 7E 00            MOV EDI,0x7ec7f0
006A5356  75 07                     JNZ 0x006a535f
LAB_006a5358:
006A5358  8B 3C 85 88 C1 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7ec188]
LAB_006a535f:
006A535F  A0 84 C1 7E 00            MOV AL,[0x007ec184]
006A5364  6A 04                     PUSH 0x4
006A5366  8D 4E 1C                  LEA ECX,[ESI + 0x1c]
006A5369  50                        PUSH EAX
006A536A  51                        PUSH ECX
006A536B  E8 C0 FD FF FF            CALL 0x006a5130
006A5370  83 C4 0C                  ADD ESP,0xc
006A5373  85 C0                     TEST EAX,EAX
006A5375  75 23                     JNZ 0x006a539a
006A5377  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006A537A  8D 56 20                  LEA EDX,[ESI + 0x20]
006A537D  52                        PUSH EDX
006A537E  50                        PUSH EAX
006A537F  57                        PUSH EDI
006A5380  68 BC C7 7E 00            PUSH 0x7ec7bc
006A5385  53                        PUSH EBX
006A5386  53                        PUSH EBX
006A5387  53                        PUSH EBX
006A5388  53                        PUSH EBX
006A5389  E8 12 BC 08 00            CALL 0x00730fa0
006A538E  83 C4 20                  ADD ESP,0x20
006A5391  83 F8 01                  CMP EAX,0x1
006A5394  75 01                     JNZ 0x006a5397
006A5396  CC                        INT3
LAB_006a5397:
006A5397  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006a539a:
006A539A  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006A539D  8A 0D 84 C1 7E 00         MOV CL,byte ptr [0x007ec184]
006A53A3  6A 04                     PUSH 0x4
006A53A5  51                        PUSH ECX
006A53A6  8D 44 32 20               LEA EAX,[EDX + ESI*0x1 + 0x20]
006A53AA  50                        PUSH EAX
006A53AB  E8 80 FD FF FF            CALL 0x006a5130
006A53B0  83 C4 0C                  ADD ESP,0xc
006A53B3  85 C0                     TEST EAX,EAX
006A53B5  75 23                     JNZ 0x006a53da
006A53B7  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006A53BA  8D 4E 20                  LEA ECX,[ESI + 0x20]
006A53BD  51                        PUSH ECX
006A53BE  52                        PUSH EDX
006A53BF  57                        PUSH EDI
006A53C0  68 88 C7 7E 00            PUSH 0x7ec788
006A53C5  53                        PUSH EBX
006A53C6  53                        PUSH EBX
006A53C7  53                        PUSH EBX
006A53C8  53                        PUSH EBX
006A53C9  E8 D2 BB 08 00            CALL 0x00730fa0
006A53CE  83 C4 20                  ADD ESP,0x20
006A53D1  83 F8 01                  CMP EAX,0x1
006A53D4  75 01                     JNZ 0x006a53d7
006A53D6  CC                        INT3
LAB_006a53d7:
006A53D7  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006a53da:
006A53DA  39 5E 14                  CMP dword ptr [ESI + 0x14],EBX
006A53DD  75 35                     JNZ 0x006a5414
006A53DF  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006A53E2  8A 0D 85 C1 7E 00         MOV CL,byte ptr [0x007ec185]
006A53E8  8D 5E 20                  LEA EBX,[ESI + 0x20]
006A53EB  50                        PUSH EAX
006A53EC  51                        PUSH ECX
006A53ED  53                        PUSH EBX
006A53EE  E8 3D FD FF FF            CALL 0x006a5130
006A53F3  83 C4 0C                  ADD ESP,0xc
006A53F6  85 C0                     TEST EAX,EAX
006A53F8  75 1A                     JNZ 0x006a5414
006A53FA  53                        PUSH EBX
006A53FB  68 54 C7 7E 00            PUSH 0x7ec754
006A5400  50                        PUSH EAX
006A5401  50                        PUSH EAX
006A5402  50                        PUSH EAX
006A5403  50                        PUSH EAX
006A5404  E8 97 BB 08 00            CALL 0x00730fa0
006A5409  83 C4 18                  ADD ESP,0x18
006A540C  83 F8 01                  CMP EAX,0x1
006A540F  75 0C                     JNZ 0x006a541d
006A5411  CC                        INT3
LAB_006a5414:
006A5414  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A5417  33 DB                     XOR EBX,EBX
006A5419  3B C3                     CMP EAX,EBX
006A541B  75 49                     JNZ 0x006a5466
LAB_006a541d:
006A541D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006A5420  33 DB                     XOR EBX,EBX
006A5422  3B C3                     CMP EAX,EBX
006A5424  74 1D                     JZ 0x006a5443
006A5426  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006A5429  52                        PUSH EDX
006A542A  50                        PUSH EAX
006A542B  57                        PUSH EDI
006A542C  68 2C C7 7E 00            PUSH 0x7ec72c
006A5431  53                        PUSH EBX
006A5432  53                        PUSH EBX
006A5433  53                        PUSH EBX
006A5434  53                        PUSH EBX
006A5435  E8 66 BB 08 00            CALL 0x00730fa0
006A543A  83 C4 20                  ADD ESP,0x20
006A543D  83 F8 01                  CMP EAX,0x1
006A5440  75 01                     JNZ 0x006a5443
006A5442  CC                        INT3
LAB_006a5443:
006A5443  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006A5446  8D 4E 20                  LEA ECX,[ESI + 0x20]
006A5449  50                        PUSH EAX
006A544A  51                        PUSH ECX
006A544B  57                        PUSH EDI
006A544C  68 F8 C6 7E 00            PUSH 0x7ec6f8
006A5451  53                        PUSH EBX
006A5452  53                        PUSH EBX
006A5453  53                        PUSH EBX
006A5454  53                        PUSH EBX
006A5455  E8 46 BB 08 00            CALL 0x00730fa0
006A545A  83 C4 20                  ADD ESP,0x20
006A545D  83 F8 01                  CMP EAX,0x1
006A5460  75 01                     JNZ 0x006a5463
006A5462  CC                        INT3
LAB_006a5463:
006A5463  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006a5466:
006A5466  8B 36                     MOV ESI,dword ptr [ESI]
006A5468  3B F3                     CMP ESI,EBX
006A546A  0F 85 BE FE FF FF         JNZ 0x006a532e
006A5470  5F                        POP EDI
LAB_006a5471:
006A5471  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A5474  5E                        POP ESI
006A5475  5B                        POP EBX
006A5476  8B E5                     MOV ESP,EBP
006A5478  5D                        POP EBP
006A5479  C3                        RET
