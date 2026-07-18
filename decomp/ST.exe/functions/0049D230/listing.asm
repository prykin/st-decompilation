FUN_0049d230:
0049D230  55                        PUSH EBP
0049D231  8B EC                     MOV EBP,ESP
0049D233  83 EC 78                  SUB ESP,0x78
0049D236  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049D239  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049D23F  53                        PUSH EBX
0049D240  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0049D243  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049D246  56                        PUSH ESI
0049D247  57                        PUSH EDI
0049D248  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0049D24B  33 FF                     XOR EDI,EDI
0049D24D  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0049D250  8D 45 88                  LEA EAX,[EBP + -0x78]
0049D253  57                        PUSH EDI
0049D254  51                        PUSH ECX
0049D255  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0049D258  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0049D25B  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
0049D25E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049D263  E8 88 05 29 00            CALL 0x0072d7f0
0049D268  8B F0                     MOV ESI,EAX
0049D26A  83 C4 08                  ADD ESP,0x8
0049D26D  3B F7                     CMP ESI,EDI
0049D26F  0F 85 78 03 00 00         JNZ 0x0049d5ed
0049D275  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049D278  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
0049D27B  3B C7                     CMP EAX,EDI
0049D27D  74 09                     JZ 0x0049d288
0049D27F  83 F8 01                  CMP EAX,0x1
0049D282  0F 85 82 01 00 00         JNZ 0x0049d40a
LAB_0049d288:
0049D288  B9 15 00 00 00            MOV ECX,0x15
0049D28D  33 C0                     XOR EAX,EAX
0049D28F  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049D295  33 D2                     XOR EDX,EDX
0049D297  F3 AB                     STOSD.REP ES:EDI
0049D299  8D 83 56 01 00 00         LEA EAX,[EBX + 0x156]
0049D29F  89 53 65                  MOV dword ptr [EBX + 0x65],EDX
0049D2A2  8B C8                     MOV ECX,EAX
0049D2A4  8D B3 95 02 00 00         LEA ESI,[EBX + 0x295]
0049D2AA  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0049D2AD  8B 39                     MOV EDI,dword ptr [ECX]
0049D2AF  89 3E                     MOV dword ptr [ESI],EDI
0049D2B1  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0049D2B4  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0049D2B8  66 89 4E 04               MOV word ptr [ESI + 0x4],CX
0049D2BC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049D2C2  66 8B 00                  MOV AX,word ptr [EAX]
0049D2C5  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
0049D2CB  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
0049D2CF  66 8B 83 5A 01 00 00      MOV AX,word ptr [EBX + 0x15a]
0049D2D6  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0049D2D9  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
0049D2DD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049D2E0  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0049D2E3  66 8B 8B 58 01 00 00      MOV CX,word ptr [EBX + 0x158]
0049D2EA  3B C2                     CMP EAX,EDX
0049D2EC  66 89 4D D2               MOV word ptr [EBP + -0x2e],CX
0049D2F0  0F 86 EC 00 00 00         JBE 0x0049d3e2
LAB_0049d2f6:
0049D2F6  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049D2F9  51                        PUSH ECX
0049D2FA  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049D2FD  E8 6E F9 20 00            CALL 0x006acc70
0049D302  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049D305  66 3D FF FF               CMP AX,0xffff
0049D309  0F 84 BB 00 00 00         JZ 0x0049d3ca
0049D30F  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049D312  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049D318  6A 01                     PUSH 0x1
0049D31A  50                        PUSH EAX
0049D31B  52                        PUSH EDX
0049D31C  E8 99 55 F6 FF            CALL 0x004028ba
0049D321  8B F0                     MOV ESI,EAX
0049D323  85 F6                     TEST ESI,ESI
0049D325  75 1A                     JNZ 0x0049d341
0049D327  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049D32C  68 60 09 00 00            PUSH 0x960
0049D331  68 3C BE 7A 00            PUSH 0x7abe3c
0049D336  50                        PUSH EAX
0049D337  68 04 00 FE AF            PUSH 0xaffe0004
0049D33C  E8 FF 8A 20 00            CALL 0x006a5e40
LAB_0049d341:
0049D341  8B 16                     MOV EDX,dword ptr [ESI]
0049D343  8B CE                     MOV ECX,ESI
0049D345  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049D348  83 F8 08                  CMP EAX,0x8
0049D34B  74 51                     JZ 0x0049d39e
0049D34D  8B 06                     MOV EAX,dword ptr [ESI]
0049D34F  8B CE                     MOV ECX,ESI
0049D351  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049D354  83 F8 14                  CMP EAX,0x14
0049D357  74 45                     JZ 0x0049d39e
0049D359  8B 16                     MOV EDX,dword ptr [ESI]
0049D35B  8B CE                     MOV ECX,ESI
0049D35D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049D360  83 F8 1A                  CMP EAX,0x1a
0049D363  74 39                     JZ 0x0049d39e
0049D365  8B CE                     MOV ECX,ESI
0049D367  E8 EC 7A F6 FF            CALL 0x00404e58
0049D36C  85 C0                     TEST EAX,EAX
0049D36E  75 08                     JNZ 0x0049d378
0049D370  8D 45 E0                  LEA EAX,[EBP + -0x20]
0049D373  50                        PUSH EAX
0049D374  6A 03                     PUSH 0x3
0049D376  EB 4B                     JMP 0x0049d3c3
LAB_0049d378:
0049D378  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049D37B  85 C0                     TEST EAX,EAX
0049D37D  75 10                     JNZ 0x0049d38f
0049D37F  6A 01                     PUSH 0x1
0049D381  6A 02                     PUSH 0x2
0049D383  6A 01                     PUSH 0x1
0049D385  6A 00                     PUSH 0x0
0049D387  E8 04 0F 21 00            CALL 0x006ae290
0049D38C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0049d38f:
0049D38F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049D392  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049D395  51                        PUSH ECX
0049D396  52                        PUSH EDX
0049D397  E8 24 0E 21 00            CALL 0x006ae1c0
0049D39C  EB 2C                     JMP 0x0049d3ca
LAB_0049d39e:
0049D39E  85 FF                     TEST EDI,EDI
0049D3A0  75 11                     JNZ 0x0049d3b3
0049D3A2  6A 01                     PUSH 0x1
0049D3A4  6A 02                     PUSH 0x2
0049D3A6  6A 01                     PUSH 0x1
0049D3A8  57                        PUSH EDI
0049D3A9  E8 E2 0E 21 00            CALL 0x006ae290
0049D3AE  8B F8                     MOV EDI,EAX
0049D3B0  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0049d3b3:
0049D3B3  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049D3B6  50                        PUSH EAX
0049D3B7  57                        PUSH EDI
0049D3B8  E8 03 0E 21 00            CALL 0x006ae1c0
0049D3BD  8D 4D CC                  LEA ECX,[EBP + -0x34]
0049D3C0  51                        PUSH ECX
0049D3C1  6A 0D                     PUSH 0xd
LAB_0049d3c3:
0049D3C3  8B CE                     MOV ECX,ESI
0049D3C5  E8 5C 4D F6 FF            CALL 0x00402126
LAB_0049d3ca:
0049D3CA  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0049D3CD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049D3D0  42                        INC EDX
0049D3D1  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0049D3D4  81 E2 FF FF 00 00         AND EDX,0xffff
0049D3DA  3B D0                     CMP EDX,EAX
0049D3DC  0F 82 14 FF FF FF         JC 0x0049d2f6
LAB_0049d3e2:
0049D3E2  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0049D3E5  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049D3E8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049D3EE  56                        PUSH ESI
0049D3EF  57                        PUSH EDI
0049D3F0  52                        PUSH EDX
0049D3F1  E8 A5 69 F6 FF            CALL 0x00403d9b
0049D3F6  85 FF                     TEST EDI,EDI
0049D3F8  74 06                     JZ 0x0049d400
0049D3FA  57                        PUSH EDI
0049D3FB  E8 10 0D 21 00            CALL 0x006ae110
LAB_0049d400:
0049D400  85 F6                     TEST ESI,ESI
0049D402  74 06                     JZ 0x0049d40a
0049D404  56                        PUSH ESI
0049D405  E8 06 0D 21 00            CALL 0x006ae110
LAB_0049d40a:
0049D40A  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049D40F  33 D2                     XOR EDX,EDX
0049D411  B9 64 00 00 00            MOV ECX,0x64
0049D416  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
0049D41D  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0049D423  F7 F1                     DIV ECX
0049D425  85 D2                     TEST EDX,EDX
0049D427  0F 85 AB 01 00 00         JNZ 0x0049d5d8
0049D42D  66 8B 83 95 02 00 00      MOV AX,word ptr [EBX + 0x295]
0049D434  66 8B 8B 99 02 00 00      MOV CX,word ptr [EBX + 0x299]
0049D43B  66 8B 93 97 02 00 00      MOV DX,word ptr [EBX + 0x297]
0049D442  66 85 C0                  TEST AX,AX
0049D445  7C 50                     JL 0x0049d497
0049D447  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
0049D44E  66 3B C6                  CMP AX,SI
0049D451  7D 44                     JGE 0x0049d497
0049D453  66 85 D2                  TEST DX,DX
0049D456  7C 3F                     JL 0x0049d497
0049D458  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0049D45F  7D 36                     JGE 0x0049d497
0049D461  66 85 C9                  TEST CX,CX
0049D464  7C 31                     JL 0x0049d497
0049D466  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0049D46D  7D 28                     JGE 0x0049d497
0049D46F  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0049D476  0F BF C9                  MOVSX ECX,CX
0049D479  0F AF F9                  IMUL EDI,ECX
0049D47C  0F BF CE                  MOVSX ECX,SI
0049D47F  0F BF D2                  MOVSX EDX,DX
0049D482  0F AF CA                  IMUL ECX,EDX
0049D485  0F BF C0                  MOVSX EAX,AX
0049D488  03 F9                     ADD EDI,ECX
0049D48A  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0049D490  03 F8                     ADD EDI,EAX
0049D492  8B 34 F9                  MOV ESI,dword ptr [ECX + EDI*0x8]
0049D495  EB 02                     JMP 0x0049d499
LAB_0049d497:
0049D497  33 F6                     XOR ESI,ESI
LAB_0049d499:
0049D499  33 FF                     XOR EDI,EDI
0049D49B  3B F7                     CMP ESI,EDI
0049D49D  0F 84 32 01 00 00         JZ 0x0049d5d5
0049D4A3  0F BE 53 24               MOVSX EDX,byte ptr [EBX + 0x24]
0049D4A7  39 56 24                  CMP dword ptr [ESI + 0x24],EDX
0049D4AA  0F 85 25 01 00 00         JNZ 0x0049d5d5
0049D4B0  8B 06                     MOV EAX,dword ptr [ESI]
0049D4B2  8B CE                     MOV ECX,ESI
0049D4B4  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049D4B7  83 F8 3B                  CMP EAX,0x3b
0049D4BA  74 10                     JZ 0x0049d4cc
0049D4BC  8B 16                     MOV EDX,dword ptr [ESI]
0049D4BE  8B CE                     MOV ECX,ESI
0049D4C0  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049D4C3  83 F8 60                  CMP EAX,0x60
0049D4C6  0F 85 09 01 00 00         JNZ 0x0049d5d5
LAB_0049d4cc:
0049D4CC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049D4CF  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0049D4D2  85 C0                     TEST EAX,EAX
0049D4D4  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0049D4D7  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0049D4DA  0F 86 C4 00 00 00         JBE 0x0049d5a4
0049D4E0  33 D2                     XOR EDX,EDX
LAB_0049d4e2:
0049D4E2  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049D4E5  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049D4E8  50                        PUSH EAX
0049D4E9  E8 82 F7 20 00            CALL 0x006acc70
0049D4EE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049D4F1  66 3D FF FF               CMP AX,0xffff
0049D4F5  0F 84 8C 00 00 00         JZ 0x0049d587
0049D4FB  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049D4FE  6A 01                     PUSH 0x1
0049D500  50                        PUSH EAX
0049D501  51                        PUSH ECX
0049D502  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049D508  E8 AD 53 F6 FF            CALL 0x004028ba
0049D50D  8B F0                     MOV ESI,EAX
0049D50F  85 F6                     TEST ESI,ESI
0049D511  75 1B                     JNZ 0x0049d52e
0049D513  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049D519  68 89 09 00 00            PUSH 0x989
0049D51E  68 3C BE 7A 00            PUSH 0x7abe3c
0049D523  52                        PUSH EDX
0049D524  68 04 00 FE AF            PUSH 0xaffe0004
0049D529  E8 12 89 20 00            CALL 0x006a5e40
LAB_0049d52e:
0049D52E  8B 06                     MOV EAX,dword ptr [ESI]
0049D530  8B CE                     MOV ECX,ESI
0049D532  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049D535  83 F8 08                  CMP EAX,0x8
0049D538  74 18                     JZ 0x0049d552
0049D53A  8B 16                     MOV EDX,dword ptr [ESI]
0049D53C  8B CE                     MOV ECX,ESI
0049D53E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049D541  83 F8 14                  CMP EAX,0x14
0049D544  74 0C                     JZ 0x0049d552
0049D546  8B 06                     MOV EAX,dword ptr [ESI]
0049D548  8B CE                     MOV ECX,ESI
0049D54A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049D54D  83 F8 1A                  CMP EAX,0x1a
0049D550  75 35                     JNZ 0x0049d587
LAB_0049d552:
0049D552  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049D555  8B 8E DA 07 00 00         MOV ECX,dword ptr [ESI + 0x7da]
0049D55B  8B 96 D6 07 00 00         MOV EDX,dword ptr [ESI + 0x7d6]
0049D561  40                        INC EAX
0049D562  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0049D565  8B 86 D2 07 00 00         MOV EAX,dword ptr [ESI + 0x7d2]
0049D56B  03 CA                     ADD ECX,EDX
0049D56D  03 C8                     ADD ECX,EAX
0049D56F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049D572  03 C1                     ADD EAX,ECX
0049D574  85 C0                     TEST EAX,EAX
0049D576  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0049D579  7F 29                     JG 0x0049d5a4
0049D57B  8B CE                     MOV ECX,ESI
0049D57D  E8 5A 59 F6 FF            CALL 0x00402edc
0049D582  83 F8 0D                  CMP EAX,0xd
0049D585  74 16                     JZ 0x0049d59d
LAB_0049d587:
0049D587  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049D58A  47                        INC EDI
0049D58B  8B D7                     MOV EDX,EDI
0049D58D  81 E2 FF FF 00 00         AND EDX,0xffff
0049D593  3B D0                     CMP EDX,EAX
0049D595  0F 82 47 FF FF FF         JC 0x0049d4e2
0049D59B  EB 07                     JMP 0x0049d5a4
LAB_0049d59d:
0049D59D  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
LAB_0049d5a4:
0049D5A4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049D5A7  85 C0                     TEST EAX,EAX
0049D5A9  74 0E                     JZ 0x0049d5b9
0049D5AB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049D5AE  85 C0                     TEST EAX,EAX
0049D5B0  75 26                     JNZ 0x0049d5d8
0049D5B2  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0049D5B5  85 C0                     TEST EAX,EAX
0049D5B7  75 1F                     JNZ 0x0049d5d8
LAB_0049d5b9:
0049D5B9  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0049D5BC  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0049D5C3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049D5C6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049D5CC  5F                        POP EDI
0049D5CD  5E                        POP ESI
0049D5CE  5B                        POP EBX
0049D5CF  8B E5                     MOV ESP,EBP
0049D5D1  5D                        POP EBP
0049D5D2  C2 04 00                  RET 0x4
LAB_0049d5d5:
0049D5D5  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
LAB_0049d5d8:
0049D5D8  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0049D5DB  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049D5DE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049D5E4  5F                        POP EDI
0049D5E5  5E                        POP ESI
0049D5E6  5B                        POP EBX
0049D5E7  8B E5                     MOV ESP,EBP
0049D5E9  5D                        POP EBP
0049D5EA  C2 04 00                  RET 0x4
LAB_0049d5ed:
0049D5ED  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
0049D5F0  68 F8 BF 7A 00            PUSH 0x7abff8
0049D5F5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049D5FA  56                        PUSH ESI
0049D5FB  57                        PUSH EDI
0049D5FC  68 9A 09 00 00            PUSH 0x99a
0049D601  68 3C BE 7A 00            PUSH 0x7abe3c
0049D606  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049D60B  E8 C0 FE 20 00            CALL 0x006ad4d0
0049D610  83 C4 18                  ADD ESP,0x18
0049D613  85 C0                     TEST EAX,EAX
0049D615  74 01                     JZ 0x0049d618
0049D617  CC                        INT3
LAB_0049d618:
0049D618  68 9B 09 00 00            PUSH 0x99b
0049D61D  68 3C BE 7A 00            PUSH 0x7abe3c
0049D622  57                        PUSH EDI
0049D623  56                        PUSH ESI
0049D624  E8 17 88 20 00            CALL 0x006a5e40
0049D629  5F                        POP EDI
0049D62A  5E                        POP ESI
0049D62B  83 C8 FF                  OR EAX,0xffffffff
0049D62E  5B                        POP EBX
0049D62F  8B E5                     MOV ESP,EBP
0049D631  5D                        POP EBP
0049D632  C2 04 00                  RET 0x4
