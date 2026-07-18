FUN_005c0230:
005C0230  55                        PUSH EBP
005C0231  8B EC                     MOV EBP,ESP
005C0233  81 EC B8 04 00 00         SUB ESP,0x4b8
005C0239  53                        PUSH EBX
005C023A  56                        PUSH ESI
005C023B  8B F1                     MOV ESI,ECX
005C023D  57                        PUSH EDI
005C023E  B9 16 00 00 00            MOV ECX,0x16
005C0243  33 C0                     XOR EAX,EAX
005C0245  8D 7D A8                  LEA EDI,[EBP + -0x58]
005C0248  BA 93 00 00 00            MOV EDX,0x93
005C024D  F3 AB                     STOSD.REP ES:EDI
005C024F  B9 18 01 00 00            MOV ECX,0x118
005C0254  8D BD 48 FB FF FF         LEA EDI,[EBP + 0xfffffb48]
005C025A  F3 AB                     STOSD.REP ES:EDI
005C025C  BF 7D 00 00 00            MOV EDI,0x7d
005C0261  B9 7E 00 00 00            MOV ECX,0x7e
005C0266  89 BE 53 03 00 00         MOV dword ptr [ESI + 0x353],EDI
005C026C  89 8E 57 03 00 00         MOV dword ptr [ESI + 0x357],ECX
005C0272  B8 54 00 00 00            MOV EAX,0x54
005C0277  89 96 5B 03 00 00         MOV dword ptr [ESI + 0x35b],EDX
005C027D  89 86 5F 03 00 00         MOV dword ptr [ESI + 0x35f],EAX
005C0283  C7 86 6B 03 00 00 46 24 00 00  MOV dword ptr [ESI + 0x36b],0x2446
005C028D  C7 86 6F 03 00 00 11 01 00 00  MOV dword ptr [ESI + 0x36f],0x111
005C0297  89 8E 73 03 00 00         MOV dword ptr [ESI + 0x373],ECX
005C029D  C7 86 77 03 00 00 91 00 00 00  MOV dword ptr [ESI + 0x377],0x91
005C02A7  89 86 7B 03 00 00         MOV dword ptr [ESI + 0x37b],EAX
005C02AD  C7 86 87 03 00 00 47 24 00 00  MOV dword ptr [ESI + 0x387],0x2447
005C02B7  C7 86 8B 03 00 00 A3 01 00 00  MOV dword ptr [ESI + 0x38b],0x1a3
005C02C1  89 8E 8F 03 00 00         MOV dword ptr [ESI + 0x38f],ECX
005C02C7  89 96 93 03 00 00         MOV dword ptr [ESI + 0x393],EDX
005C02CD  89 86 97 03 00 00         MOV dword ptr [ESI + 0x397],EAX
005C02D3  C7 86 A3 03 00 00 48 24 00 00  MOV dword ptr [ESI + 0x3a3],0x2448
005C02DD  C7 86 A7 03 00 00 39 02 00 00  MOV dword ptr [ESI + 0x3a7],0x239
005C02E7  BB 95 00 00 00            MOV EBX,0x95
005C02EC  89 8E AB 03 00 00         MOV dword ptr [ESI + 0x3ab],ECX
005C02F2  89 9E AF 03 00 00         MOV dword ptr [ESI + 0x3af],EBX
005C02F8  89 86 B3 03 00 00         MOV dword ptr [ESI + 0x3b3],EAX
005C02FE  C7 86 BF 03 00 00 49 24 00 00  MOV dword ptr [ESI + 0x3bf],0x2449
005C0308  B9 DF 00 00 00            MOV ECX,0xdf
005C030D  89 96 CB 03 00 00         MOV dword ptr [ESI + 0x3cb],EDX
005C0313  89 96 03 04 00 00         MOV dword ptr [ESI + 0x403],EDX
005C0319  89 BE C3 03 00 00         MOV dword ptr [ESI + 0x3c3],EDI
005C031F  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C0322  89 8E C7 03 00 00         MOV dword ptr [ESI + 0x3c7],ECX
005C0328  89 86 CF 03 00 00         MOV dword ptr [ESI + 0x3cf],EAX
005C032E  89 8E E3 03 00 00         MOV dword ptr [ESI + 0x3e3],ECX
005C0334  89 86 EB 03 00 00         MOV dword ptr [ESI + 0x3eb],EAX
005C033A  89 8E FF 03 00 00         MOV dword ptr [ESI + 0x3ff],ECX
005C0340  89 86 07 04 00 00         MOV dword ptr [ESI + 0x407],EAX
005C0346  89 8E 1B 04 00 00         MOV dword ptr [ESI + 0x41b],ECX
005C034C  89 86 23 04 00 00         MOV dword ptr [ESI + 0x423],EAX
005C0352  89 BE 33 04 00 00         MOV dword ptr [ESI + 0x433],EDI
005C0358  B9 08 00 00 00            MOV ECX,0x8
005C035D  33 C0                     XOR EAX,EAX
005C035F  8B FA                     MOV EDI,EDX
005C0361  C7 86 DB 03 00 00 4A 24 00 00  MOV dword ptr [ESI + 0x3db],0x244a
005C036B  C7 86 DF 03 00 00 11 01 00 00  MOV dword ptr [ESI + 0x3df],0x111
005C0375  C7 86 E7 03 00 00 91 00 00 00  MOV dword ptr [ESI + 0x3e7],0x91
005C037F  C7 86 F7 03 00 00 4B 24 00 00  MOV dword ptr [ESI + 0x3f7],0x244b
005C0389  C7 86 FB 03 00 00 A3 01 00 00  MOV dword ptr [ESI + 0x3fb],0x1a3
005C0393  C7 86 13 04 00 00 4C 24 00 00  MOV dword ptr [ESI + 0x413],0x244c
005C039D  C7 86 17 04 00 00 39 02 00 00  MOV dword ptr [ESI + 0x417],0x239
005C03A7  89 9E 1F 04 00 00         MOV dword ptr [ESI + 0x41f],EBX
005C03AD  C7 86 2F 04 00 00 4D 24 00 00  MOV dword ptr [ESI + 0x42f],0x244d
005C03B7  C7 86 37 04 00 00 3F 01 00 00  MOV dword ptr [ESI + 0x437],0x13f
005C03C1  C7 86 3B 04 00 00 51 02 00 00  MOV dword ptr [ESI + 0x43b],0x251
005C03CB  C7 86 3F 04 00 00 43 00 00 00  MOV dword ptr [ESI + 0x43f],0x43
005C03D5  C7 86 4B 04 00 00 4E 24 00 00  MOV dword ptr [ESI + 0x44b],0x244e
005C03DF  F3 AB                     STOSD.REP ES:EDI
005C03E1  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005C03E4  52                        PUSH EDX
005C03E5  6A 01                     PUSH 0x1
005C03E7  6A 03                     PUSH 0x3
005C03E9  8B CE                     MOV ECX,ESI
005C03EB  C7 46 2D 13 00 00 00      MOV dword ptr [ESI + 0x2d],0x13
005C03F2  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005C03F5  E8 06 5C 12 00            CALL 0x006e6000
005C03FA  80 7E 66 01               CMP byte ptr [ESI + 0x66],0x1
005C03FE  75 54                     JNZ 0x005c0454
005C0400  68 13 62 00 00            PUSH 0x6213
005C0405  68 01 62 00 00            PUSH 0x6201
005C040A  6A 28                     PUSH 0x28
005C040C  68 91 00 00 00            PUSH 0x91
005C0411  68 26 02 00 00            PUSH 0x226
005C0416  6A 2D                     PUSH 0x2d
005C0418  6A 01                     PUSH 0x1
005C041A  6A 01                     PUSH 0x1
005C041C  8B CE                     MOV ECX,ESI
005C041E  E8 AC 5A E4 FF            CALL 0x00405ecf
005C0423  68 14 62 00 00            PUSH 0x6214
005C0428  68 02 62 00 00            PUSH 0x6202
005C042D  6A 1E                     PUSH 0x1e
005C042F  68 2C 01 00 00            PUSH 0x12c
005C0434  68 BD 01 00 00            PUSH 0x1bd
005C0439  6A 1E                     PUSH 0x1e
005C043B  6A 01                     PUSH 0x1
005C043D  6A 01                     PUSH 0x1
005C043F  8B CE                     MOV ECX,ESI
005C0441  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
005C0447  E8 83 5A E4 FF            CALL 0x00405ecf
005C044C  89 86 97 00 00 00         MOV dword ptr [ESI + 0x97],EAX
005C0452  EB 2C                     JMP 0x005c0480
LAB_005c0454:
005C0454  68 12 62 00 00            PUSH 0x6212
005C0459  68 00 62 00 00            PUSH 0x6200
005C045E  6A 28                     PUSH 0x28
005C0460  68 91 00 00 00            PUSH 0x91
005C0465  68 26 02 00 00            PUSH 0x226
005C046A  68 62 02 00 00            PUSH 0x262
005C046F  6A 01                     PUSH 0x1
005C0471  6A 01                     PUSH 0x1
005C0473  8B CE                     MOV ECX,ESI
005C0475  E8 55 5A E4 FF            CALL 0x00405ecf
005C047A  89 86 8F 00 00 00         MOV dword ptr [ESI + 0x8f],EAX
LAB_005c0480:
005C0480  32 C9                     XOR CL,CL
005C0482  BF 01 00 00 00            MOV EDI,0x1
005C0487  BA 4B 00 00 00            MOV EDX,0x4b
005C048C  8D 85 4C FB FF FF         LEA EAX,[EBP + 0xfffffb4c]
LAB_005c0492:
005C0492  33 DB                     XOR EBX,EBX
005C0494  89 78 FC                  MOV dword ptr [EAX + -0x4],EDI
005C0497  84 C9                     TEST CL,CL
005C0499  0F 95 C3                  SETNZ BL
005C049C  43                        INC EBX
005C049D  FE C1                     INC CL
005C049F  89 18                     MOV dword ptr [EAX],EBX
005C04A1  C7 40 08 1A 00 00 00      MOV dword ptr [EAX + 0x8],0x1a
005C04A8  C7 40 10 2E 00 00 00      MOV dword ptr [EAX + 0x10],0x2e
005C04AF  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
005C04B2  C7 40 14 24 00 00 00      MOV dword ptr [EAX + 0x14],0x24
005C04B9  47                        INC EDI
005C04BA  83 C2 26                  ADD EDX,0x26
005C04BD  83 C0 70                  ADD EAX,0x70
005C04C0  80 F9 09                  CMP CL,0x9
005C04C3  72 CD                     JC 0x005c0492
005C04C5  B8 01 00 00 00            MOV EAX,0x1
005C04CA  8D 8D 48 FB FF FF         LEA ECX,[EBP + 0xfffffb48]
005C04D0  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005C04D3  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005C04D6  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005C04D9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005C04DC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005C04DF  B9 02 00 00 00            MOV ECX,0x2
005C04E4  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
005C04E7  8D 45 A8                  LEA EAX,[EBP + -0x58]
005C04EA  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
005C04ED  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005C04F0  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C04F3  6A 00                     PUSH 0x0
005C04F5  50                        PUSH EAX
005C04F6  8D 86 9F 00 00 00         LEA EAX,[ESI + 0x9f]
005C04FC  C7 45 C0 08 B2 00 00      MOV dword ptr [EBP + -0x40],0xb208
005C0503  C7 45 E0 09 B2 00 00      MOV dword ptr [EBP + -0x20],0xb209
005C050A  8B 11                     MOV EDX,dword ptr [ECX]
005C050C  6A 00                     PUSH 0x0
005C050E  50                        PUSH EAX
005C050F  6A 05                     PUSH 0x5
005C0511  FF 52 08                  CALL dword ptr [EDX + 0x8]
005C0514  8B CE                     MOV ECX,ESI
005C0516  E8 EC 35 E4 FF            CALL 0x00403b07
005C051B  5F                        POP EDI
005C051C  5E                        POP ESI
005C051D  5B                        POP EBX
005C051E  8B E5                     MOV ESP,EBP
005C0520  5D                        POP EBP
005C0521  C3                        RET
