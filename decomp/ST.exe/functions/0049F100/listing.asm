FUN_0049f100:
0049F100  55                        PUSH EBP
0049F101  8B EC                     MOV EBP,ESP
0049F103  81 EC 98 00 00 00         SUB ESP,0x98
0049F109  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049F10C  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049F112  53                        PUSH EBX
0049F113  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0049F116  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049F119  56                        PUSH ESI
0049F11A  57                        PUSH EDI
0049F11B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0049F11E  33 FF                     XOR EDI,EDI
0049F120  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0049F123  8D 45 88                  LEA EAX,[EBP + -0x78]
0049F126  57                        PUSH EDI
0049F127  51                        PUSH ECX
0049F128  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0049F12B  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0049F12E  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0049F131  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
0049F138  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
0049F13B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049F140  E8 AB E6 28 00            CALL 0x0072d7f0
0049F145  8B F0                     MOV ESI,EAX
0049F147  83 C4 08                  ADD ESP,0x8
0049F14A  3B F7                     CMP ESI,EDI
0049F14C  0F 85 8F 03 00 00         JNZ 0x0049f4e1
0049F152  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049F155  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
0049F158  3B C7                     CMP EAX,EDI
0049F15A  74 09                     JZ 0x0049f165
0049F15C  83 F8 01                  CMP EAX,0x1
0049F15F  0F 85 94 01 00 00         JNZ 0x0049f2f9
LAB_0049f165:
0049F165  B9 15 00 00 00            MOV ECX,0x15
0049F16A  33 C0                     XOR EAX,EAX
0049F16C  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049F172  33 F6                     XOR ESI,ESI
0049F174  F3 AB                     STOSD.REP ES:EDI
0049F176  8D 83 92 01 00 00         LEA EAX,[EBX + 0x192]
0049F17C  89 73 65                  MOV dword ptr [EBX + 0x65],ESI
0049F17F  8B D0                     MOV EDX,EAX
0049F181  8D 8B C3 02 00 00         LEA ECX,[EBX + 0x2c3]
0049F187  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0049F18A  8B 3A                     MOV EDI,dword ptr [EDX]
0049F18C  89 39                     MOV dword ptr [ECX],EDI
0049F18E  66 8B 7A 04               MOV DI,word ptr [EDX + 0x4]
0049F192  66 89 79 04               MOV word ptr [ECX + 0x4],DI
0049F196  8A 52 06                  MOV DL,byte ptr [EDX + 0x6]
0049F199  88 51 06                  MOV byte ptr [ECX + 0x6],DL
0049F19C  8A 10                     MOV DL,byte ptr [EAX]
0049F19E  66 8B 83 93 01 00 00      MOV AX,word ptr [EBX + 0x193]
0049F1A5  89 B3 CA 02 00 00         MOV dword ptr [EBX + 0x2ca],ESI
0049F1AB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049F1B1  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
0049F1B7  66 89 45 D9               MOV word ptr [EBP + -0x27],AX
0049F1BB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049F1BE  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0049F1C1  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0049F1C4  8B 8B 95 01 00 00         MOV ECX,dword ptr [EBX + 0x195]
0049F1CA  3B C6                     CMP EAX,ESI
0049F1CC  88 55 D8                  MOV byte ptr [EBP + -0x28],DL
0049F1CF  89 4D DB                  MOV dword ptr [EBP + -0x25],ECX
0049F1D2  0F 86 F4 00 00 00         JBE 0x0049f2cc
0049F1D8  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0049F1DB  33 D2                     XOR EDX,EDX
LAB_0049f1dd:
0049F1DD  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049F1E0  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049F1E3  50                        PUSH EAX
0049F1E4  E8 87 DA 20 00            CALL 0x006acc70
0049F1E9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049F1EC  66 3D FF FF               CMP AX,0xffff
0049F1F0  0F 84 BC 00 00 00         JZ 0x0049f2b2
0049F1F6  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049F1F9  6A 01                     PUSH 0x1
0049F1FB  50                        PUSH EAX
0049F1FC  51                        PUSH ECX
0049F1FD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049F203  E8 B2 36 F6 FF            CALL 0x004028ba
0049F208  8B F0                     MOV ESI,EAX
0049F20A  85 F6                     TEST ESI,ESI
0049F20C  75 1B                     JNZ 0x0049f229
0049F20E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049F214  68 B4 0B 00 00            PUSH 0xbb4
0049F219  68 3C BE 7A 00            PUSH 0x7abe3c
0049F21E  52                        PUSH EDX
0049F21F  68 04 00 FE AF            PUSH 0xaffe0004
0049F224  E8 17 6C 20 00            CALL 0x006a5e40
LAB_0049f229:
0049F229  8B 06                     MOV EAX,dword ptr [ESI]
0049F22B  8B CE                     MOV ECX,ESI
0049F22D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049F230  83 F8 06                  CMP EAX,0x6
0049F233  74 51                     JZ 0x0049f286
0049F235  8B 16                     MOV EDX,dword ptr [ESI]
0049F237  8B CE                     MOV ECX,ESI
0049F239  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049F23C  83 F8 12                  CMP EAX,0x12
0049F23F  74 45                     JZ 0x0049f286
0049F241  8B 06                     MOV EAX,dword ptr [ESI]
0049F243  8B CE                     MOV ECX,ESI
0049F245  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049F248  83 F8 22                  CMP EAX,0x22
0049F24B  74 39                     JZ 0x0049f286
0049F24D  8B CE                     MOV ECX,ESI
0049F24F  E8 04 5C F6 FF            CALL 0x00404e58
0049F254  85 C0                     TEST EAX,EAX
0049F256  75 08                     JNZ 0x0049f260
0049F258  8D 4D F0                  LEA ECX,[EBP + -0x10]
0049F25B  51                        PUSH ECX
0049F25C  6A 03                     PUSH 0x3
0049F25E  EB 4B                     JMP 0x0049f2ab
LAB_0049f260:
0049F260  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049F263  85 C0                     TEST EAX,EAX
0049F265  75 10                     JNZ 0x0049f277
0049F267  6A 01                     PUSH 0x1
0049F269  6A 02                     PUSH 0x2
0049F26B  6A 01                     PUSH 0x1
0049F26D  6A 00                     PUSH 0x0
0049F26F  E8 1C F0 20 00            CALL 0x006ae290
0049F274  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0049f277:
0049F277  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049F27A  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049F27D  52                        PUSH EDX
0049F27E  50                        PUSH EAX
0049F27F  E8 3C EF 20 00            CALL 0x006ae1c0
0049F284  EB 2C                     JMP 0x0049f2b2
LAB_0049f286:
0049F286  85 FF                     TEST EDI,EDI
0049F288  75 11                     JNZ 0x0049f29b
0049F28A  6A 01                     PUSH 0x1
0049F28C  6A 02                     PUSH 0x2
0049F28E  6A 01                     PUSH 0x1
0049F290  57                        PUSH EDI
0049F291  E8 FA EF 20 00            CALL 0x006ae290
0049F296  8B F8                     MOV EDI,EAX
0049F298  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
LAB_0049f29b:
0049F29B  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049F29E  51                        PUSH ECX
0049F29F  57                        PUSH EDI
0049F2A0  E8 1B EF 20 00            CALL 0x006ae1c0
0049F2A5  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0049F2A8  52                        PUSH EDX
0049F2A9  6A 09                     PUSH 0x9
LAB_0049f2ab:
0049F2AB  8B CE                     MOV ECX,ESI
0049F2AD  E8 74 2E F6 FF            CALL 0x00402126
LAB_0049f2b2:
0049F2B2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0049F2B5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049F2B8  42                        INC EDX
0049F2B9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0049F2BC  81 E2 FF FF 00 00         AND EDX,0xffff
0049F2C2  3B D0                     CMP EDX,EAX
0049F2C4  0F 82 13 FF FF FF         JC 0x0049f1dd
0049F2CA  EB 03                     JMP 0x0049f2cf
LAB_0049f2cc:
0049F2CC  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_0049f2cf:
0049F2CF  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0049F2D2  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049F2D5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049F2DB  56                        PUSH ESI
0049F2DC  57                        PUSH EDI
0049F2DD  50                        PUSH EAX
0049F2DE  E8 B8 4A F6 FF            CALL 0x00403d9b
0049F2E3  85 FF                     TEST EDI,EDI
0049F2E5  74 06                     JZ 0x0049f2ed
0049F2E7  57                        PUSH EDI
0049F2E8  E8 23 EE 20 00            CALL 0x006ae110
LAB_0049f2ed:
0049F2ED  85 F6                     TEST ESI,ESI
0049F2EF  74 06                     JZ 0x0049f2f7
0049F2F1  56                        PUSH ESI
0049F2F2  E8 19 EE 20 00            CALL 0x006ae110
LAB_0049f2f7:
0049F2F7  33 FF                     XOR EDI,EDI
LAB_0049f2f9:
0049F2F9  39 BB CA 02 00 00         CMP dword ptr [EBX + 0x2ca],EDI
0049F2FF  0F 85 1C 01 00 00         JNZ 0x0049f421
0049F305  66 8B 8B C4 02 00 00      MOV CX,word ptr [EBX + 0x2c4]
0049F30C  8A 93 C3 02 00 00         MOV DL,byte ptr [EBX + 0x2c3]
0049F312  6A 01                     PUSH 0x1
0049F314  51                        PUSH ECX
0049F315  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049F31B  52                        PUSH EDX
0049F31C  E8 99 35 F6 FF            CALL 0x004028ba
0049F321  3B C7                     CMP EAX,EDI
0049F323  74 24                     JZ 0x0049f349
0049F325  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0049F328  8B 93 C6 02 00 00         MOV EDX,dword ptr [EBX + 0x2c6]
0049F32E  3B CA                     CMP ECX,EDX
0049F330  75 17                     JNZ 0x0049f349
0049F332  0F BE 4B 24               MOVSX ECX,byte ptr [EBX + 0x24]
0049F336  8B 10                     MOV EDX,dword ptr [EAX]
0049F338  51                        PUSH ECX
0049F339  8B C8                     MOV ECX,EAX
0049F33B  FF 92 08 01 00 00         CALL dword ptr [EDX + 0x108]
0049F341  85 C0                     TEST EAX,EAX
0049F343  0F 85 84 01 00 00         JNZ 0x0049f4cd
LAB_0049f349:
0049F349  C7 83 CA 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x2ca],0x1
0049F353  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049F359  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0049F35C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049F362  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0049F365  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049F368  3B C7                     CMP EAX,EDI
0049F36A  0F 8E 5D 01 00 00         JLE 0x0049f4cd
0049F370  33 D2                     XOR EDX,EDX
LAB_0049f372:
0049F372  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049F375  51                        PUSH ECX
0049F376  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049F379  E8 F2 D8 20 00            CALL 0x006acc70
0049F37E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049F381  66 3D FF FF               CMP AX,0xffff
0049F385  74 6E                     JZ 0x0049f3f5
0049F387  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049F38A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049F390  6A 01                     PUSH 0x1
0049F392  50                        PUSH EAX
0049F393  52                        PUSH EDX
0049F394  E8 21 35 F6 FF            CALL 0x004028ba
0049F399  8B F0                     MOV ESI,EAX
0049F39B  85 F6                     TEST ESI,ESI
0049F39D  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
0049F3A0  75 1A                     JNZ 0x0049f3bc
0049F3A2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049F3A7  68 DA 0B 00 00            PUSH 0xbda
0049F3AC  68 3C BE 7A 00            PUSH 0x7abe3c
0049F3B1  50                        PUSH EAX
0049F3B2  68 04 00 FE AF            PUSH 0xaffe0004
0049F3B7  E8 84 6A 20 00            CALL 0x006a5e40
LAB_0049f3bc:
0049F3BC  8B CE                     MOV ECX,ESI
0049F3BE  E8 19 3B F6 FF            CALL 0x00402edc
0049F3C3  83 F8 09                  CMP EAX,0x9
0049F3C6  75 20                     JNZ 0x0049f3e8
0049F3C8  81 C6 FC 05 00 00         ADD ESI,0x5fc
0049F3CE  B9 07 00 00 00            MOV ECX,0x7
0049F3D3  8D BD 68 FF FF FF         LEA EDI,[EBP + 0xffffff68]
0049F3D9  F3 A5                     MOVSD.REP ES:EDI,ESI
0049F3DB  A4                        MOVSB ES:EDI,ESI
0049F3DC  83 BD 7D FF FF FF 04      CMP dword ptr [EBP + 0xffffff7d],0x4
0049F3E3  7D 10                     JGE 0x0049f3f5
0049F3E5  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
LAB_0049f3e8:
0049F3E8  8D 4D F0                  LEA ECX,[EBP + -0x10]
0049F3EB  51                        PUSH ECX
0049F3EC  6A 03                     PUSH 0x3
0049F3EE  8B CE                     MOV ECX,ESI
0049F3F0  E8 31 2D F6 FF            CALL 0x00402126
LAB_0049f3f5:
0049F3F5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0049F3F8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049F3FB  42                        INC EDX
0049F3FC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0049F3FF  81 E2 FF FF 00 00         AND EDX,0xffff
0049F405  3B D0                     CMP EDX,EAX
0049F407  0F 8C 65 FF FF FF         JL 0x0049f372
0049F40D  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
0049F410  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049F415  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0049F418  5F                        POP EDI
0049F419  5E                        POP ESI
0049F41A  5B                        POP EBX
0049F41B  8B E5                     MOV ESP,EBP
0049F41D  5D                        POP EBP
0049F41E  C2 04 00                  RET 0x4
LAB_0049f421:
0049F421  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049F427  B9 14 00 00 00            MOV ECX,0x14
0049F42C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049F432  33 D2                     XOR EDX,EDX
0049F434  F7 F1                     DIV ECX
0049F436  83 FA 05                  CMP EDX,0x5
0049F439  0F 85 8E 00 00 00         JNZ 0x0049f4cd
0049F43F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049F442  85 C0                     TEST EAX,EAX
0049F444  7E 79                     JLE 0x0049f4bf
0049F446  33 D2                     XOR EDX,EDX
LAB_0049f448:
0049F448  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049F44B  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049F44E  50                        PUSH EAX
0049F44F  E8 1C D8 20 00            CALL 0x006acc70
0049F454  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049F457  66 3D FF FF               CMP AX,0xffff
0049F45B  74 4D                     JZ 0x0049f4aa
0049F45D  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049F460  6A 01                     PUSH 0x1
0049F462  50                        PUSH EAX
0049F463  51                        PUSH ECX
0049F464  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049F46A  E8 4B 34 F6 FF            CALL 0x004028ba
0049F46F  8B F0                     MOV ESI,EAX
0049F471  85 F6                     TEST ESI,ESI
0049F473  75 1B                     JNZ 0x0049f490
0049F475  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049F47B  68 EB 0B 00 00            PUSH 0xbeb
0049F480  68 3C BE 7A 00            PUSH 0x7abe3c
0049F485  52                        PUSH EDX
0049F486  68 04 00 FE AF            PUSH 0xaffe0004
0049F48B  E8 B0 69 20 00            CALL 0x006a5e40
LAB_0049f490:
0049F490  8B CE                     MOV ECX,ESI
0049F492  E8 45 3A F6 FF            CALL 0x00402edc
0049F497  83 F8 09                  CMP EAX,0x9
0049F49A  74 20                     JZ 0x0049f4bc
0049F49C  6A 09                     PUSH 0x9
0049F49E  8B CE                     MOV ECX,ESI
0049F4A0  E8 54 59 F6 FF            CALL 0x00404df9
0049F4A5  83 F8 01                  CMP EAX,0x1
0049F4A8  74 12                     JZ 0x0049f4bc
LAB_0049f4aa:
0049F4AA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049F4AD  47                        INC EDI
0049F4AE  8B D7                     MOV EDX,EDI
0049F4B0  81 E2 FF FF 00 00         AND EDX,0xffff
0049F4B6  3B D0                     CMP EDX,EAX
0049F4B8  7C 8E                     JL 0x0049f448
0049F4BA  EB 03                     JMP 0x0049f4bf
LAB_0049f4bc:
0049F4BC  FF 45 E8                  INC dword ptr [EBP + -0x18]
LAB_0049f4bf:
0049F4BF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049F4C2  85 C0                     TEST EAX,EAX
0049F4C4  75 07                     JNZ 0x0049f4cd
0049F4C6  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_0049f4cd:
0049F4CD  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
0049F4D0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049F4D5  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0049F4D8  5F                        POP EDI
0049F4D9  5E                        POP ESI
0049F4DA  5B                        POP EBX
0049F4DB  8B E5                     MOV ESP,EBP
0049F4DD  5D                        POP EBP
0049F4DE  C2 04 00                  RET 0x4
LAB_0049f4e1:
0049F4E1  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
0049F4E4  68 EC C0 7A 00            PUSH 0x7ac0ec
0049F4E9  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049F4EE  56                        PUSH ESI
0049F4EF  57                        PUSH EDI
0049F4F0  68 F4 0B 00 00            PUSH 0xbf4
0049F4F5  68 3C BE 7A 00            PUSH 0x7abe3c
0049F4FA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049F500  E8 CB DF 20 00            CALL 0x006ad4d0
0049F505  83 C4 18                  ADD ESP,0x18
0049F508  85 C0                     TEST EAX,EAX
0049F50A  74 01                     JZ 0x0049f50d
0049F50C  CC                        INT3
LAB_0049f50d:
0049F50D  68 F5 0B 00 00            PUSH 0xbf5
0049F512  68 3C BE 7A 00            PUSH 0x7abe3c
0049F517  57                        PUSH EDI
0049F518  56                        PUSH ESI
0049F519  E8 22 69 20 00            CALL 0x006a5e40
0049F51E  5F                        POP EDI
0049F51F  5E                        POP ESI
0049F520  83 C8 FF                  OR EAX,0xffffffff
0049F523  5B                        POP EBX
0049F524  8B E5                     MOV ESP,EBP
0049F526  5D                        POP EBP
0049F527  C2 04 00                  RET 0x4
