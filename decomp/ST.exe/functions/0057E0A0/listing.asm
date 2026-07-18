FUN_0057e0a0:
0057E0A0  55                        PUSH EBP
0057E0A1  8B EC                     MOV EBP,ESP
0057E0A3  83 EC 64                  SUB ESP,0x64
0057E0A6  8A 81 61 02 00 00         MOV AL,byte ptr [ECX + 0x261]
0057E0AC  53                        PUSH EBX
0057E0AD  56                        PUSH ESI
0057E0AE  57                        PUSH EDI
0057E0AF  A8 04                     TEST AL,0x4
0057E0B1  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0057E0B4  74 14                     JZ 0x0057e0ca
0057E0B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057E0B9  83 78 10 03               CMP dword ptr [EAX + 0x10],0x3
0057E0BD  74 0B                     JZ 0x0057e0ca
0057E0BF  33 C0                     XOR EAX,EAX
0057E0C1  5F                        POP EDI
0057E0C2  5E                        POP ESI
0057E0C3  5B                        POP EBX
0057E0C4  8B E5                     MOV ESP,EBP
0057E0C6  5D                        POP EBP
0057E0C7  C2 04 00                  RET 0x4
LAB_0057e0ca:
0057E0CA  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0057E0D0  33 FF                     XOR EDI,EDI
0057E0D2  8D 45 A0                  LEA EAX,[EBP + -0x60]
0057E0D5  8D 55 9C                  LEA EDX,[EBP + -0x64]
0057E0D8  57                        PUSH EDI
0057E0D9  50                        PUSH EAX
0057E0DA  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0057E0DD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057E0E3  E8 08 F7 1A 00            CALL 0x0072d7f0
0057E0E8  8B F0                     MOV ESI,EAX
0057E0EA  83 C4 08                  ADD ESP,0x8
0057E0ED  3B F7                     CMP ESI,EDI
0057E0EF  0F 85 E5 0C 00 00         JNZ 0x0057edda
0057E0F5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0057E0F8  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0057E0FB  56                        PUSH ESI
0057E0FC  8B CB                     MOV ECX,EBX
0057E0FE  E8 04 6E E8 FF            CALL 0x00404f07
0057E103  3D FF FF 00 00            CMP EAX,0xffff
0057E108  75 14                     JNZ 0x0057e11e
0057E10A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0057E110  6A 56                     PUSH 0x56
0057E112  68 9C B1 7C 00            PUSH 0x7cb19c
0057E117  51                        PUSH ECX
0057E118  50                        PUSH EAX
0057E119  E8 22 7D 12 00            CALL 0x006a5e40
LAB_0057e11e:
0057E11E  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0057E121  3D 08 01 00 00            CMP EAX,0x108
0057E126  0F 87 2A 0B 00 00         JA 0x0057ec56
0057E12C  0F 84 24 0A 00 00         JZ 0x0057eb56
0057E132  2B C7                     SUB EAX,EDI
0057E134  0F 84 7D 05 00 00         JZ 0x0057e6b7
0057E13A  83 E8 02                  SUB EAX,0x2
0057E13D  0F 84 C4 00 00 00         JZ 0x0057e207
0057E143  48                        DEC EAX
0057E144  0F 85 7C 0C 00 00         JNZ 0x0057edc6
0057E14A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0057E150  53                        PUSH EBX
0057E151  E8 AE 6B E8 FF            CALL 0x00404d04
0057E156  39 BB 6D 02 00 00         CMP dword ptr [EBX + 0x26d],EDI
0057E15C  74 53                     JZ 0x0057e1b1
0057E15E  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057E164  48                        DEC EAX
0057E165  89 83 65 02 00 00         MOV dword ptr [EBX + 0x265],EAX
0057E16B  78 35                     JS 0x0057e1a2
LAB_0057e16d:
0057E16D  8B 93 6D 02 00 00         MOV EDX,dword ptr [EBX + 0x26d]
0057E173  8B 0C 82                  MOV ECX,dword ptr [EDX + EAX*0x4]
0057E176  E8 5A 40 E8 FF            CALL 0x004021d5
0057E17B  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057E181  8B 8B 6D 02 00 00         MOV ECX,dword ptr [EBX + 0x26d]
0057E187  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0057E18A  52                        PUSH EDX
0057E18B  E8 20 01 1B 00            CALL 0x0072e2b0
0057E190  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057E196  83 C4 04                  ADD ESP,0x4
0057E199  48                        DEC EAX
0057E19A  89 83 65 02 00 00         MOV dword ptr [EBX + 0x265],EAX
0057E1A0  79 CB                     JNS 0x0057e16d
LAB_0057e1a2:
0057E1A2  8B 83 6D 02 00 00         MOV EAX,dword ptr [EBX + 0x26d]
0057E1A8  50                        PUSH EAX
0057E1A9  E8 02 01 1B 00            CALL 0x0072e2b0
0057E1AE  83 C4 04                  ADD ESP,0x4
LAB_0057e1b1:
0057E1B1  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
0057E1B5  66 3D FF FF               CMP AX,0xffff
0057E1B9  74 0D                     JZ 0x0057e1c8
0057E1BB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0057E1C1  53                        PUSH EBX
0057E1C2  50                        PUSH EAX
0057E1C3  E8 79 33 E8 FF            CALL 0x00401541
LAB_0057e1c8:
0057E1C8  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0057E1CE  E8 02 40 E8 FF            CALL 0x004021d5
0057E1D3  8B 83 73 02 00 00         MOV EAX,dword ptr [EBX + 0x273]
0057E1D9  3B C7                     CMP EAX,EDI
0057E1DB  0F 84 E5 0B 00 00         JZ 0x0057edc6
0057E1E1  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0057E1E7  50                        PUSH EAX
0057E1E8  E8 93 83 16 00            CALL 0x006e6580
0057E1ED  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0057E1F0  89 BB 73 02 00 00         MOV dword ptr [EBX + 0x273],EDI
0057E1F6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057E1FC  33 C0                     XOR EAX,EAX
0057E1FE  5F                        POP EDI
0057E1FF  5E                        POP ESI
0057E200  5B                        POP EBX
0057E201  8B E5                     MOV ESP,EBP
0057E203  5D                        POP EBP
0057E204  C2 04 00                  RET 0x4
LAB_0057e207:
0057E207  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0057E20A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0057E20D  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0057E210  83 F8 01                  CMP EAX,0x1
0057E213  0F 86 E7 01 00 00         JBE 0x0057e400
0057E219  83 F8 02                  CMP EAX,0x2
0057E21C  0F 85 02 04 00 00         JNZ 0x0057e624
0057E222  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0057E225  B9 11 00 00 00            MOV ECX,0x11
0057E22A  8B F0                     MOV ESI,EAX
0057E22C  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
0057E232  F3 A5                     MOVSD.REP ES:EDI,ESI
0057E234  33 C9                     XOR ECX,ECX
0057E236  83 C0 46                  ADD EAX,0x46
0057E239  66 A5                     MOVSW ES:EDI,ESI
0057E23B  89 8B 73 02 00 00         MOV dword ptr [EBX + 0x273],ECX
0057E241  89 8B 65 02 00 00         MOV dword ptr [EBX + 0x265],ECX
0057E247  89 8B 6D 02 00 00         MOV dword ptr [EBX + 0x26d],ECX
0057E24D  50                        PUSH EAX
0057E24E  8B CB                     MOV ECX,EBX
0057E250  C7 83 61 02 00 00 04 00 00 00  MOV dword ptr [EBX + 0x261],0x4
0057E25A  E8 C0 72 E8 FF            CALL 0x0040551f
0057E25F  66 8B 83 45 02 00 00      MOV AX,word ptr [EBX + 0x245]
0057E266  66 8B 93 49 02 00 00      MOV DX,word ptr [EBX + 0x249]
0057E26D  66 8B 8B 4D 02 00 00      MOV CX,word ptr [EBX + 0x24d]
0057E274  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0057E27B  66 85 C0                  TEST AX,AX
0057E27E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0057E281  7C 53                     JL 0x0057e2d6
0057E283  66 3B C7                  CMP AX,DI
0057E286  7D 4E                     JGE 0x0057e2d6
0057E288  66 85 D2                  TEST DX,DX
0057E28B  7C 49                     JL 0x0057e2d6
0057E28D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0057E294  7D 40                     JGE 0x0057e2d6
0057E296  66 85 C9                  TEST CX,CX
0057E299  7C 3B                     JL 0x0057e2d6
0057E29B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0057E2A2  7D 32                     JGE 0x0057e2d6
0057E2A4  0F BF D2                  MOVSX EDX,DX
0057E2A7  0F BF F7                  MOVSX ESI,DI
0057E2AA  0F AF D6                  IMUL EDX,ESI
0057E2AD  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
0057E2B4  0F BF F9                  MOVSX EDI,CX
0057E2B7  0F AF F7                  IMUL ESI,EDI
0057E2BA  03 D6                     ADD EDX,ESI
0057E2BC  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0057E2C3  0F BF F0                  MOVSX ESI,AX
0057E2C6  03 D6                     ADD EDX,ESI
0057E2C8  8B 35 48 B2 7F 00         MOV ESI,dword ptr [0x007fb248]
0057E2CE  8B 34 D6                  MOV ESI,dword ptr [ESI + EDX*0x8]
0057E2D1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0057E2D4  EB 02                     JMP 0x0057e2d8
LAB_0057e2d6:
0057E2D6  33 F6                     XOR ESI,ESI
LAB_0057e2d8:
0057E2D8  66 85 C0                  TEST AX,AX
0057E2DB  7C 4E                     JL 0x0057e32b
0057E2DD  66 3B C7                  CMP AX,DI
0057E2E0  7D 49                     JGE 0x0057e32b
0057E2E2  66 85 D2                  TEST DX,DX
0057E2E5  7C 44                     JL 0x0057e32b
0057E2E7  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0057E2EE  7D 3B                     JGE 0x0057e32b
0057E2F0  66 85 C9                  TEST CX,CX
0057E2F3  7C 36                     JL 0x0057e32b
0057E2F5  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0057E2FC  7D 2D                     JGE 0x0057e32b
0057E2FE  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0057E305  0F BF D2                  MOVSX EDX,DX
0057E308  0F AF D7                  IMUL EDX,EDI
0057E30B  0F BF 3D 7E B2 7F 00      MOVSX EDI,word ptr [0x007fb27e]
0057E312  0F BF C9                  MOVSX ECX,CX
0057E315  0F AF F9                  IMUL EDI,ECX
0057E318  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
0057E31E  03 D7                     ADD EDX,EDI
0057E320  0F BF C0                  MOVSX EAX,AX
0057E323  03 D0                     ADD EDX,EAX
0057E325  0F BF 04 51               MOVSX EAX,word ptr [ECX + EDX*0x2]
0057E329  EB 03                     JMP 0x0057e32e
LAB_0057e32b:
0057E32B  83 C8 FF                  OR EAX,0xffffffff
LAB_0057e32e:
0057E32E  85 C0                     TEST EAX,EAX
0057E330  74 3B                     JZ 0x0057e36d
0057E332  85 F6                     TEST ESI,ESI
0057E334  74 30                     JZ 0x0057e366
0057E336  8B 16                     MOV EDX,dword ptr [ESI]
0057E338  8B CE                     MOV ECX,ESI
0057E33A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0057E33D  83 F8 39                  CMP EAX,0x39
0057E340  74 2B                     JZ 0x0057e36d
0057E342  8B 06                     MOV EAX,dword ptr [ESI]
0057E344  8B CE                     MOV ECX,ESI
0057E346  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0057E349  83 F8 4F                  CMP EAX,0x4f
0057E34C  74 1F                     JZ 0x0057e36d
0057E34E  8B 16                     MOV EDX,dword ptr [ESI]
0057E350  8B CE                     MOV ECX,ESI
0057E352  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0057E355  83 F8 5E                  CMP EAX,0x5e
0057E358  74 13                     JZ 0x0057e36d
0057E35A  8B 06                     MOV EAX,dword ptr [ESI]
0057E35C  8B CE                     MOV ECX,ESI
0057E35E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0057E361  83 F8 61                  CMP EAX,0x61
0057E364  74 07                     JZ 0x0057e36d
LAB_0057e366:
0057E366  8B CB                     MOV ECX,EBX
0057E368  E8 DC 60 E8 FF            CALL 0x00404449
LAB_0057e36d:
0057E36D  66 8B 4B 32               MOV CX,word ptr [EBX + 0x32]
0057E371  53                        PUSH EBX
0057E372  51                        PUSH ECX
0057E373  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0057E379  E8 5A 59 E8 FF            CALL 0x00403cd8
0057E37E  85 C0                     TEST EAX,EAX
0057E380  74 07                     JZ 0x0057e389
0057E382  8B CB                     MOV ECX,EBX
0057E384  E8 C0 60 E8 FF            CALL 0x00404449
LAB_0057e389:
0057E389  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0057E38C  BE 01 00 00 00            MOV ESI,0x1
0057E391  39 72 0C                  CMP dword ptr [EDX + 0xc],ESI
0057E394  75 07                     JNZ 0x0057e39d
0057E396  8B CB                     MOV ECX,EBX
0057E398  E8 38 5C E8 FF            CALL 0x00403fd5
LAB_0057e39d:
0057E39D  8B 8B 61 02 00 00         MOV ECX,dword ptr [EBX + 0x261]
0057E3A3  8B 83 51 02 00 00         MOV EAX,dword ptr [EBX + 0x251]
0057E3A9  66 8B 93 49 02 00 00      MOV DX,word ptr [EBX + 0x249]
0057E3B0  0B CE                     OR ECX,ESI
0057E3B2  89 8B 61 02 00 00         MOV dword ptr [EBX + 0x261],ECX
0057E3B8  66 8B 8B 4D 02 00 00      MOV CX,word ptr [EBX + 0x24d]
0057E3BF  89 83 59 02 00 00         MOV dword ptr [EBX + 0x259],EAX
0057E3C5  66 8B 83 45 02 00 00      MOV AX,word ptr [EBX + 0x245]
0057E3CC  6A 00                     PUSH 0x0
0057E3CE  51                        PUSH ECX
0057E3CF  52                        PUSH EDX
0057E3D0  50                        PUSH EAX
0057E3D1  8B CB                     MOV ECX,EBX
0057E3D3  E8 87 45 E8 FF            CALL 0x0040295f
0057E3D8  8B CB                     MOV ECX,EBX
0057E3DA  E8 F4 3A E8 FF            CALL 0x00401ed3
0057E3DF  3D FF FF 00 00            CMP EAX,0xffff
0057E3E4  0F 85 2C 02 00 00         JNZ 0x0057e616
0057E3EA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0057E3F0  68 B1 00 00 00            PUSH 0xb1
0057E3F5  68 9C B1 7C 00            PUSH 0x7cb19c
0057E3FA  51                        PUSH ECX
0057E3FB  E9 0C 02 00 00            JMP 0x0057e60c
LAB_0057e400:
0057E400  33 C0                     XOR EAX,EAX
0057E402  C7 83 61 02 00 00 04 00 00 00  MOV dword ptr [EBX + 0x261],0x4
0057E40C  89 83 65 02 00 00         MOV dword ptr [EBX + 0x265],EAX
0057E412  89 83 6D 02 00 00         MOV dword ptr [EBX + 0x26d],EAX
0057E418  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
0057E41B  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
0057E421  B9 0A 00 00 00            MOV ECX,0xa
0057E426  F3 A5                     MOVSD.REP ES:EDI,ESI
0057E428  39 83 51 02 00 00         CMP dword ptr [EBX + 0x251],EAX
0057E42E  7F 0C                     JG 0x0057e43c
0057E430  8B CB                     MOV ECX,EBX
0057E432  E8 12 60 E8 FF            CALL 0x00404449
0057E437  E9 E8 01 00 00            JMP 0x0057e624
LAB_0057e43c:
0057E43C  8B 83 55 02 00 00         MOV EAX,dword ptr [EBX + 0x255]
0057E442  3D DD 00 00 00            CMP EAX,0xdd
0057E447  74 41                     JZ 0x0057e48a
0057E449  3D DE 00 00 00            CMP EAX,0xde
0057E44E  74 3A                     JZ 0x0057e48a
0057E450  3D DC 00 00 00            CMP EAX,0xdc
0057E455  74 33                     JZ 0x0057e48a
0057E457  3D E0 00 00 00            CMP EAX,0xe0
0057E45C  74 2C                     JZ 0x0057e48a
0057E45E  68 14 B2 7C 00            PUSH 0x7cb214
0057E463  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057E468  6A 00                     PUSH 0x0
0057E46A  6A 00                     PUSH 0x0
0057E46C  6A 6A                     PUSH 0x6a
0057E46E  68 9C B1 7C 00            PUSH 0x7cb19c
0057E473  E8 58 F0 12 00            CALL 0x006ad4d0
0057E478  83 C4 18                  ADD ESP,0x18
0057E47B  85 C0                     TEST EAX,EAX
0057E47D  74 01                     JZ 0x0057e480
0057E47F  CC                        INT3
LAB_0057e480:
0057E480  C7 83 31 02 00 00 DE 00 00 00  MOV dword ptr [EBX + 0x231],0xde
LAB_0057e48a:
0057E48A  66 8B 83 45 02 00 00      MOV AX,word ptr [EBX + 0x245]
0057E491  66 8B 93 49 02 00 00      MOV DX,word ptr [EBX + 0x249]
0057E498  66 8B 8B 4D 02 00 00      MOV CX,word ptr [EBX + 0x24d]
0057E49F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0057E4A2  66 85 C0                  TEST AX,AX
0057E4A5  7C 54                     JL 0x0057e4fb
0057E4A7  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0057E4AE  7D 4B                     JGE 0x0057e4fb
0057E4B0  66 85 D2                  TEST DX,DX
0057E4B3  7C 46                     JL 0x0057e4fb
0057E4B5  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0057E4BC  7D 3D                     JGE 0x0057e4fb
0057E4BE  66 85 C9                  TEST CX,CX
0057E4C1  7C 38                     JL 0x0057e4fb
0057E4C3  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0057E4CA  7D 2F                     JGE 0x0057e4fb
0057E4CC  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
0057E4D3  0F BF F9                  MOVSX EDI,CX
0057E4D6  0F AF F7                  IMUL ESI,EDI
0057E4D9  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0057E4E0  0F BF D2                  MOVSX EDX,DX
0057E4E3  0F AF FA                  IMUL EDI,EDX
0057E4E6  0F BF D0                  MOVSX EDX,AX
0057E4E9  03 F7                     ADD ESI,EDI
0057E4EB  03 F2                     ADD ESI,EDX
0057E4ED  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0057E4F3  8B 34 F2                  MOV ESI,dword ptr [EDX + ESI*0x8]
0057E4F6  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0057E4F9  EB 02                     JMP 0x0057e4fd
LAB_0057e4fb:
0057E4FB  33 F6                     XOR ESI,ESI
LAB_0057e4fd:
0057E4FD  66 85 C0                  TEST AX,AX
0057E500  7C 51                     JL 0x0057e553
0057E502  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0057E509  7D 48                     JGE 0x0057e553
0057E50B  66 85 D2                  TEST DX,DX
0057E50E  7C 43                     JL 0x0057e553
0057E510  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0057E517  7D 3A                     JGE 0x0057e553
0057E519  66 85 C9                  TEST CX,CX
0057E51C  7C 35                     JL 0x0057e553
0057E51E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0057E525  7D 2C                     JGE 0x0057e553
0057E527  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0057E52E  0F BF D2                  MOVSX EDX,DX
0057E531  0F AF FA                  IMUL EDI,EDX
0057E534  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0057E53B  0F BF C9                  MOVSX ECX,CX
0057E53E  0F AF D1                  IMUL EDX,ECX
0057E541  03 FA                     ADD EDI,EDX
0057E543  0F BF D0                  MOVSX EDX,AX
0057E546  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
0057E54B  03 FA                     ADD EDI,EDX
0057E54D  0F BF 04 78               MOVSX EAX,word ptr [EAX + EDI*0x2]
0057E551  EB 03                     JMP 0x0057e556
LAB_0057e553:
0057E553  83 C8 FF                  OR EAX,0xffffffff
LAB_0057e556:
0057E556  85 C0                     TEST EAX,EAX
0057E558  74 3B                     JZ 0x0057e595
0057E55A  85 F6                     TEST ESI,ESI
0057E55C  74 30                     JZ 0x0057e58e
0057E55E  8B 16                     MOV EDX,dword ptr [ESI]
0057E560  8B CE                     MOV ECX,ESI
0057E562  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0057E565  83 F8 39                  CMP EAX,0x39
0057E568  74 2B                     JZ 0x0057e595
0057E56A  8B 06                     MOV EAX,dword ptr [ESI]
0057E56C  8B CE                     MOV ECX,ESI
0057E56E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0057E571  83 F8 4F                  CMP EAX,0x4f
0057E574  74 1F                     JZ 0x0057e595
0057E576  8B 16                     MOV EDX,dword ptr [ESI]
0057E578  8B CE                     MOV ECX,ESI
0057E57A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0057E57D  83 F8 5E                  CMP EAX,0x5e
0057E580  74 13                     JZ 0x0057e595
0057E582  8B 06                     MOV EAX,dword ptr [ESI]
0057E584  8B CE                     MOV ECX,ESI
0057E586  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0057E589  83 F8 61                  CMP EAX,0x61
0057E58C  74 07                     JZ 0x0057e595
LAB_0057e58e:
0057E58E  8B CB                     MOV ECX,EBX
0057E590  E8 B4 5E E8 FF            CALL 0x00404449
LAB_0057e595:
0057E595  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0057E59B  53                        PUSH EBX
0057E59C  68 FF FF 00 00            PUSH 0xffff
0057E5A1  E8 32 57 E8 FF            CALL 0x00403cd8
0057E5A6  85 C0                     TEST EAX,EAX
0057E5A8  74 07                     JZ 0x0057e5b1
0057E5AA  8B CB                     MOV ECX,EBX
0057E5AC  E8 98 5E E8 FF            CALL 0x00404449
LAB_0057e5b1:
0057E5B1  8B 8B 61 02 00 00         MOV ECX,dword ptr [EBX + 0x261]
0057E5B7  66 8B 93 4D 02 00 00      MOV DX,word ptr [EBX + 0x24d]
0057E5BE  66 8B 83 49 02 00 00      MOV AX,word ptr [EBX + 0x249]
0057E5C5  83 C9 01                  OR ECX,0x1
0057E5C8  89 8B 61 02 00 00         MOV dword ptr [EBX + 0x261],ECX
0057E5CE  8B 8B 51 02 00 00         MOV ECX,dword ptr [EBX + 0x251]
0057E5D4  89 8B 59 02 00 00         MOV dword ptr [EBX + 0x259],ECX
0057E5DA  66 8B 8B 45 02 00 00      MOV CX,word ptr [EBX + 0x245]
0057E5E1  6A 00                     PUSH 0x0
0057E5E3  52                        PUSH EDX
0057E5E4  50                        PUSH EAX
0057E5E5  51                        PUSH ECX
0057E5E6  8B CB                     MOV ECX,EBX
0057E5E8  E8 72 43 E8 FF            CALL 0x0040295f
0057E5ED  8B CB                     MOV ECX,EBX
0057E5EF  E8 DF 38 E8 FF            CALL 0x00401ed3
0057E5F4  3D FF FF 00 00            CMP EAX,0xffff
0057E5F9  75 1B                     JNZ 0x0057e616
0057E5FB  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0057E601  68 85 00 00 00            PUSH 0x85
0057E606  68 9C B1 7C 00            PUSH 0x7cb19c
0057E60B  52                        PUSH EDX
LAB_0057e60c:
0057E60C  68 FF FF 00 00            PUSH 0xffff
0057E611  E8 2A 78 12 00            CALL 0x006a5e40
LAB_0057e616:
0057E616  8B 83 61 02 00 00         MOV EAX,dword ptr [EBX + 0x261]
0057E61C  24 FB                     AND AL,0xfb
0057E61E  89 83 61 02 00 00         MOV dword ptr [EBX + 0x261],EAX
LAB_0057e624:
0057E624  F6 83 61 02 00 00 04      TEST byte ptr [EBX + 0x261],0x4
0057E62B  0F 85 95 07 00 00         JNZ 0x0057edc6
0057E631  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0057E637  53                        PUSH EBX
0057E638  E8 10 46 E8 FF            CALL 0x00402c4d
0057E63D  66 8B 83 45 02 00 00      MOV AX,word ptr [EBX + 0x245]
0057E644  66 8B 93 4D 02 00 00      MOV DX,word ptr [EBX + 0x24d]
0057E64B  66 8B 8B 49 02 00 00      MOV CX,word ptr [EBX + 0x249]
0057E652  66 89 43 47               MOV word ptr [EBX + 0x47],AX
0057E656  66 89 43 5B               MOV word ptr [EBX + 0x5b],AX
0057E65A  66 8B 83 49 02 00 00      MOV AX,word ptr [EBX + 0x249]
0057E661  66 89 43 49               MOV word ptr [EBX + 0x49],AX
0057E665  66 89 43 5D               MOV word ptr [EBX + 0x5d],AX
0057E669  66 8B 83 4D 02 00 00      MOV AX,word ptr [EBX + 0x24d]
0057E670  66 69 D2 C8 00            IMUL DX,DX,0xc8
0057E675  66 89 43 4B               MOV word ptr [EBX + 0x4b],AX
0057E679  66 89 43 5F               MOV word ptr [EBX + 0x5f],AX
0057E67D  66 8B 83 45 02 00 00      MOV AX,word ptr [EBX + 0x245]
0057E684  66 69 C9 C9 00            IMUL CX,CX,0xc9
0057E689  66 69 C0 C9 00            IMUL AX,AX,0xc9
0057E68E  83 C2 64                  ADD EDX,0x64
0057E691  83 C0 64                  ADD EAX,0x64
0057E694  83 C1 64                  ADD ECX,0x64
0057E697  66 89 53 45               MOV word ptr [EBX + 0x45],DX
0057E69B  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0057E69E  66 89 43 41               MOV word ptr [EBX + 0x41],AX
0057E6A2  66 89 4B 43               MOV word ptr [EBX + 0x43],CX
0057E6A6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057E6AC  33 C0                     XOR EAX,EAX
0057E6AE  5F                        POP EDI
0057E6AF  5E                        POP ESI
0057E6B0  5B                        POP EBX
0057E6B1  8B E5                     MOV ESP,EBP
0057E6B3  5D                        POP EBP
0057E6B4  C2 04 00                  RET 0x4
LAB_0057e6b7:
0057E6B7  8B CB                     MOV ECX,EBX
0057E6B9  E8 7E 33 E8 FF            CALL 0x00401a3c
0057E6BE  85 C0                     TEST EAX,EAX
0057E6C0  8A 83 61 02 00 00         MOV AL,byte ptr [EBX + 0x261]
0057E6C6  75 15                     JNZ 0x0057e6dd
0057E6C8  A8 01                     TEST AL,0x1
0057E6CA  75 2A                     JNZ 0x0057e6f6
0057E6CC  8B CB                     MOV ECX,EBX
0057E6CE  E8 C8 29 E8 FF            CALL 0x0040109b
0057E6D3  8B 83 61 02 00 00         MOV EAX,dword ptr [EBX + 0x261]
0057E6D9  0C 02                     OR AL,0x2
0057E6DB  EB 13                     JMP 0x0057e6f0
LAB_0057e6dd:
0057E6DD  A8 02                     TEST AL,0x2
0057E6DF  74 15                     JZ 0x0057e6f6
0057E6E1  8B CB                     MOV ECX,EBX
0057E6E3  E8 D3 5E E8 FF            CALL 0x004045bb
0057E6E8  8B 83 61 02 00 00         MOV EAX,dword ptr [EBX + 0x261]
0057E6EE  24 FD                     AND AL,0xfd
LAB_0057e6f0:
0057E6F0  89 83 61 02 00 00         MOV dword ptr [EBX + 0x261],EAX
LAB_0057e6f6:
0057E6F6  8B 83 73 02 00 00         MOV EAX,dword ptr [EBX + 0x273]
0057E6FC  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0057E702  3B C7                     CMP EAX,EDI
0057E704  0F 85 68 01 00 00         JNZ 0x0057e872
0057E70A  3B F7                     CMP ESI,EDI
0057E70C  0F 84 B0 02 00 00         JZ 0x0057e9c2
0057E712  A0 4D 87 80 00            MOV AL,[0x0080874d]
0057E717  8B BB 4D 02 00 00         MOV EDI,dword ptr [EBX + 0x24d]
0057E71D  3C FF                     CMP AL,0xff
0057E71F  0F 84 12 01 00 00         JZ 0x0057e837
0057E725  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0057E72B  85 C0                     TEST EAX,EAX
0057E72D  0F 84 04 01 00 00         JZ 0x0057e837
0057E733  8B 93 49 02 00 00         MOV EDX,dword ptr [EBX + 0x249]
0057E739  8D 45 F0                  LEA EAX,[EBP + -0x10]
0057E73C  8D 4D EC                  LEA ECX,[EBP + -0x14]
0057E73F  50                        PUSH EAX
0057E740  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
0057E746  51                        PUSH ECX
0057E747  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
0057E74D  52                        PUSH EDX
0057E74E  50                        PUSH EAX
0057E74F  51                        PUSH ECX
0057E750  8B CE                     MOV ECX,ESI
0057E752  E8 FC 57 E8 FF            CALL 0x00403f53
0057E757  85 FF                     TEST EDI,EDI
0057E759  0F 8C D3 00 00 00         JL 0x0057e832
0057E75F  83 FF 05                  CMP EDI,0x5
0057E762  0F 8D CA 00 00 00         JGE 0x0057e832
0057E768  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0057E76B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0057E76E  85 C9                     TEST ECX,ECX
0057E770  7C 1E                     JL 0x0057e790
0057E772  3B 4E 28                  CMP ECX,dword ptr [ESI + 0x28]
0057E775  7D 19                     JGE 0x0057e790
0057E777  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
0057E77E  03 C2                     ADD EAX,EDX
0057E780  85 C0                     TEST EAX,EAX
0057E782  7C 0C                     JL 0x0057e790
0057E784  3B 46 2C                  CMP EAX,dword ptr [ESI + 0x2c]
0057E787  7D 07                     JGE 0x0057e790
0057E789  B8 01 00 00 00            MOV EAX,0x1
0057E78E  EB 02                     JMP 0x0057e792
LAB_0057e790:
0057E790  33 C0                     XOR EAX,EAX
LAB_0057e792:
0057E792  85 C0                     TEST EAX,EAX
0057E794  74 31                     JZ 0x0057e7c7
0057E796  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0057E79C  83 F8 04                  CMP EAX,0x4
0057E79F  7D 26                     JGE 0x0057e7c7
0057E7A1  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
0057E7A5  85 C0                     TEST EAX,EAX
0057E7A7  74 1E                     JZ 0x0057e7c7
0057E7A9  8B 0C BD D0 AE 79 00      MOV ECX,dword ptr [EDI*0x4 + 0x79aed0]
0057E7B0  03 CA                     ADD ECX,EDX
0057E7B2  0F AF 4E 28               IMUL ECX,dword ptr [ESI + 0x28]
0057E7B6  03 C8                     ADD ECX,EAX
0057E7B8  33 C0                     XOR EAX,EAX
0057E7BA  8B D1                     MOV EDX,ECX
0057E7BC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0057E7BF  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
0057E7C2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0057E7C5  EB 03                     JMP 0x0057e7ca
LAB_0057e7c7:
0057E7C7  83 C8 FF                  OR EAX,0xffffffff
LAB_0057e7ca:
0057E7CA  85 C0                     TEST EAX,EAX
0057E7CC  7C 6B                     JL 0x0057e839
0057E7CE  83 F8 0F                  CMP EAX,0xf
0057E7D1  74 07                     JZ 0x0057e7da
0057E7D3  B8 02 00 00 00            MOV EAX,0x2
0057E7D8  EB 5F                     JMP 0x0057e839
LAB_0057e7da:
0057E7DA  85 C9                     TEST ECX,ECX
0057E7DC  7C 1E                     JL 0x0057e7fc
0057E7DE  3B 4E 30                  CMP ECX,dword ptr [ESI + 0x30]
0057E7E1  7D 19                     JGE 0x0057e7fc
0057E7E3  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
0057E7EA  03 C2                     ADD EAX,EDX
0057E7EC  85 C0                     TEST EAX,EAX
0057E7EE  7C 0C                     JL 0x0057e7fc
0057E7F0  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0057E7F3  7D 07                     JGE 0x0057e7fc
0057E7F5  B8 01 00 00 00            MOV EAX,0x1
0057E7FA  EB 02                     JMP 0x0057e7fe
LAB_0057e7fc:
0057E7FC  33 C0                     XOR EAX,EAX
LAB_0057e7fe:
0057E7FE  85 C0                     TEST EAX,EAX
0057E800  74 1D                     JZ 0x0057e81f
0057E802  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
0057E805  85 C0                     TEST EAX,EAX
0057E807  74 16                     JZ 0x0057e81f
0057E809  8B 3C BD D0 AE 79 00      MOV EDI,dword ptr [EDI*0x4 + 0x79aed0]
0057E810  03 FA                     ADD EDI,EDX
0057E812  0F AF 7E 30               IMUL EDI,dword ptr [ESI + 0x30]
0057E816  03 F8                     ADD EDI,EAX
0057E818  33 C0                     XOR EAX,EAX
0057E81A  8A 04 0F                  MOV AL,byte ptr [EDI + ECX*0x1]
0057E81D  EB 03                     JMP 0x0057e822
LAB_0057e81f:
0057E81F  83 C8 FF                  OR EAX,0xffffffff
LAB_0057e822:
0057E822  85 C0                     TEST EAX,EAX
0057E824  7C 13                     JL 0x0057e839
0057E826  33 C9                     XOR ECX,ECX
0057E828  83 F8 0F                  CMP EAX,0xf
0057E82B  0F 95 C1                  SETNZ CL
0057E82E  8B C1                     MOV EAX,ECX
0057E830  EB 07                     JMP 0x0057e839
LAB_0057e832:
0057E832  83 C8 FF                  OR EAX,0xffffffff
0057E835  EB 02                     JMP 0x0057e839
LAB_0057e837:
0057E837  33 C0                     XOR EAX,EAX
LAB_0057e839:
0057E839  83 F8 02                  CMP EAX,0x2
0057E83C  74 20                     JZ 0x0057e85e
0057E83E  8B 93 49 02 00 00         MOV EDX,dword ptr [EBX + 0x249]
0057E844  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
0057E84A  52                        PUSH EDX
0057E84B  50                        PUSH EAX
0057E84C  8B CB                     MOV ECX,EBX
0057E84E  E8 2A 2D E8 FF            CALL 0x0040157d
0057E853  89 83 73 02 00 00         MOV dword ptr [EBX + 0x273],EAX
0057E859  E9 64 01 00 00            JMP 0x0057e9c2
LAB_0057e85e:
0057E85E  8B 83 73 02 00 00         MOV EAX,dword ptr [EBX + 0x273]
0057E864  85 C0                     TEST EAX,EAX
0057E866  0F 84 56 01 00 00         JZ 0x0057e9c2
0057E86C  50                        PUSH EAX
0057E86D  E9 3B 01 00 00            JMP 0x0057e9ad
LAB_0057e872:
0057E872  3B F7                     CMP ESI,EDI
0057E874  0F 84 48 01 00 00         JZ 0x0057e9c2
0057E87A  A0 4D 87 80 00            MOV AL,[0x0080874d]
0057E87F  8B BB 4D 02 00 00         MOV EDI,dword ptr [EBX + 0x24d]
0057E885  3C FF                     CMP AL,0xff
0057E887  0F 84 12 01 00 00         JZ 0x0057e99f
0057E88D  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0057E893  85 C0                     TEST EAX,EAX
0057E895  0F 84 04 01 00 00         JZ 0x0057e99f
0057E89B  8B 83 49 02 00 00         MOV EAX,dword ptr [EBX + 0x249]
0057E8A1  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0057E8A4  8D 55 E8                  LEA EDX,[EBP + -0x18]
0057E8A7  51                        PUSH ECX
0057E8A8  8B 8B 45 02 00 00         MOV ECX,dword ptr [EBX + 0x245]
0057E8AE  52                        PUSH EDX
0057E8AF  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
0057E8B5  50                        PUSH EAX
0057E8B6  51                        PUSH ECX
0057E8B7  52                        PUSH EDX
0057E8B8  8B CE                     MOV ECX,ESI
0057E8BA  E8 94 56 E8 FF            CALL 0x00403f53
0057E8BF  85 FF                     TEST EDI,EDI
0057E8C1  0F 8C D3 00 00 00         JL 0x0057e99a
0057E8C7  83 FF 05                  CMP EDI,0x5
0057E8CA  0F 8D CA 00 00 00         JGE 0x0057e99a
0057E8D0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0057E8D3  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0057E8D6  85 C9                     TEST ECX,ECX
0057E8D8  7C 1E                     JL 0x0057e8f8
0057E8DA  3B 4E 28                  CMP ECX,dword ptr [ESI + 0x28]
0057E8DD  7D 19                     JGE 0x0057e8f8
0057E8DF  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
0057E8E6  03 C2                     ADD EAX,EDX
0057E8E8  85 C0                     TEST EAX,EAX
0057E8EA  7C 0C                     JL 0x0057e8f8
0057E8EC  3B 46 2C                  CMP EAX,dword ptr [ESI + 0x2c]
0057E8EF  7D 07                     JGE 0x0057e8f8
0057E8F1  B8 01 00 00 00            MOV EAX,0x1
0057E8F6  EB 02                     JMP 0x0057e8fa
LAB_0057e8f8:
0057E8F8  33 C0                     XOR EAX,EAX
LAB_0057e8fa:
0057E8FA  85 C0                     TEST EAX,EAX
0057E8FC  74 31                     JZ 0x0057e92f
0057E8FE  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0057E904  83 F8 04                  CMP EAX,0x4
0057E907  7D 26                     JGE 0x0057e92f
0057E909  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
0057E90D  85 C0                     TEST EAX,EAX
0057E90F  74 1E                     JZ 0x0057e92f
0057E911  8B 0C BD D0 AE 79 00      MOV ECX,dword ptr [EDI*0x4 + 0x79aed0]
0057E918  03 CA                     ADD ECX,EDX
0057E91A  0F AF 4E 28               IMUL ECX,dword ptr [ESI + 0x28]
0057E91E  03 C8                     ADD ECX,EAX
0057E920  33 C0                     XOR EAX,EAX
0057E922  8B D1                     MOV EDX,ECX
0057E924  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0057E927  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
0057E92A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0057E92D  EB 03                     JMP 0x0057e932
LAB_0057e92f:
0057E92F  83 C8 FF                  OR EAX,0xffffffff
LAB_0057e932:
0057E932  85 C0                     TEST EAX,EAX
0057E934  7C 6B                     JL 0x0057e9a1
0057E936  83 F8 0F                  CMP EAX,0xf
0057E939  74 07                     JZ 0x0057e942
0057E93B  B8 02 00 00 00            MOV EAX,0x2
0057E940  EB 5F                     JMP 0x0057e9a1
LAB_0057e942:
0057E942  85 C9                     TEST ECX,ECX
0057E944  7C 1E                     JL 0x0057e964
0057E946  3B 4E 30                  CMP ECX,dword ptr [ESI + 0x30]
0057E949  7D 19                     JGE 0x0057e964
0057E94B  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
0057E952  03 C2                     ADD EAX,EDX
0057E954  85 C0                     TEST EAX,EAX
0057E956  7C 0C                     JL 0x0057e964
0057E958  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0057E95B  7D 07                     JGE 0x0057e964
0057E95D  B8 01 00 00 00            MOV EAX,0x1
0057E962  EB 02                     JMP 0x0057e966
LAB_0057e964:
0057E964  33 C0                     XOR EAX,EAX
LAB_0057e966:
0057E966  85 C0                     TEST EAX,EAX
0057E968  74 1D                     JZ 0x0057e987
0057E96A  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
0057E96D  85 C0                     TEST EAX,EAX
0057E96F  74 16                     JZ 0x0057e987
0057E971  8B 3C BD D0 AE 79 00      MOV EDI,dword ptr [EDI*0x4 + 0x79aed0]
0057E978  03 FA                     ADD EDI,EDX
0057E97A  0F AF 7E 30               IMUL EDI,dword ptr [ESI + 0x30]
0057E97E  03 F8                     ADD EDI,EAX
0057E980  33 C0                     XOR EAX,EAX
0057E982  8A 04 0F                  MOV AL,byte ptr [EDI + ECX*0x1]
0057E985  EB 03                     JMP 0x0057e98a
LAB_0057e987:
0057E987  83 C8 FF                  OR EAX,0xffffffff
LAB_0057e98a:
0057E98A  85 C0                     TEST EAX,EAX
0057E98C  7C 13                     JL 0x0057e9a1
0057E98E  33 C9                     XOR ECX,ECX
0057E990  83 F8 0F                  CMP EAX,0xf
0057E993  0F 95 C1                  SETNZ CL
0057E996  8B C1                     MOV EAX,ECX
0057E998  EB 07                     JMP 0x0057e9a1
LAB_0057e99a:
0057E99A  83 C8 FF                  OR EAX,0xffffffff
0057E99D  EB 02                     JMP 0x0057e9a1
LAB_0057e99f:
0057E99F  33 C0                     XOR EAX,EAX
LAB_0057e9a1:
0057E9A1  83 F8 02                  CMP EAX,0x2
0057E9A4  75 1C                     JNZ 0x0057e9c2
0057E9A6  8B 93 73 02 00 00         MOV EDX,dword ptr [EBX + 0x273]
0057E9AC  52                        PUSH EDX
LAB_0057e9ad:
0057E9AD  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0057E9B3  E8 C8 7B 16 00            CALL 0x006e6580
0057E9B8  C7 83 73 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x273],0x0
LAB_0057e9c2:
0057E9C2  8B 03                     MOV EAX,dword ptr [EBX]
0057E9C4  8B CB                     MOV ECX,EBX
0057E9C6  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0057E9CC  8B 83 55 02 00 00         MOV EAX,dword ptr [EBX + 0x255]
0057E9D2  BF E0 00 00 00            MOV EDI,0xe0
0057E9D7  3B C7                     CMP EAX,EDI
0057E9D9  74 32                     JZ 0x0057ea0d
0057E9DB  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057E9E1  33 F6                     XOR ESI,ESI
0057E9E3  85 C0                     TEST EAX,EAX
0057E9E5  7E 26                     JLE 0x0057ea0d
LAB_0057e9e7:
0057E9E7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057E9ED  8B 83 6D 02 00 00         MOV EAX,dword ptr [EBX + 0x26d]
0057E9F3  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0057E9F9  8B 0C B0                  MOV ECX,dword ptr [EAX + ESI*0x4]
0057E9FC  52                        PUSH EDX
0057E9FD  E8 A8 49 E8 FF            CALL 0x004033aa
0057EA02  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057EA08  46                        INC ESI
0057EA09  3B F0                     CMP ESI,EAX
0057EA0B  7C DA                     JL 0x0057e9e7
LAB_0057ea0d:
0057EA0D  83 BB 5D 02 00 00 02      CMP dword ptr [EBX + 0x25d],0x2
0057EA14  0F 85 AC 03 00 00         JNZ 0x0057edc6
0057EA1A  8B 83 11 02 00 00         MOV EAX,dword ptr [EBX + 0x211]
0057EA20  85 C0                     TEST EAX,EAX
0057EA22  0F 84 A3 00 00 00         JZ 0x0057eacb
0057EA28  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057EA2E  33 D2                     XOR EDX,EDX
0057EA30  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0057EA36  B9 0F 00 00 00            MOV ECX,0xf
0057EA3B  F7 F1                     DIV ECX
0057EA3D  85 D2                     TEST EDX,EDX
0057EA3F  0F 85 86 00 00 00         JNZ 0x0057eacb
0057EA45  8A 83 72 02 00 00         MOV AL,byte ptr [EBX + 0x272]
0057EA4B  66 33 D2                  XOR DX,DX
0057EA4E  FE C0                     INC AL
0057EA50  88 83 72 02 00 00         MOV byte ptr [EBX + 0x272],AL
0057EA56  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0057EA5C  8A D0                     MOV DL,AL
0057EA5E  66 3B 51 23               CMP DX,word ptr [ECX + 0x23]
0057EA62  7D 60                     JGE 0x0057eac4
0057EA64  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
0057EA68  25 FF 00 00 00            AND EAX,0xff
0057EA6D  52                        PUSH EDX
0057EA6E  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
0057EA72  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0057EA78  50                        PUSH EAX
0057EA79  E8 EF 26 E8 FF            CALL 0x0040116d
0057EA7E  39 BB 55 02 00 00         CMP dword ptr [EBX + 0x255],EDI
0057EA84  74 45                     JZ 0x0057eacb
0057EA86  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057EA8C  33 F6                     XOR ESI,ESI
0057EA8E  85 C0                     TEST EAX,EAX
0057EA90  7E 39                     JLE 0x0057eacb
LAB_0057ea92:
0057EA92  A1 24 67 80 00            MOV EAX,[0x00806724]
0057EA97  33 D2                     XOR EDX,EDX
0057EA99  8A 93 72 02 00 00         MOV DL,byte ptr [EBX + 0x272]
0057EA9F  0F BF 48 2C               MOVSX ECX,word ptr [EAX + 0x2c]
0057EAA3  8B 44 90 30               MOV EAX,dword ptr [EAX + EDX*0x4 + 0x30]
0057EAA7  51                        PUSH ECX
0057EAA8  8B 8B 6D 02 00 00         MOV ECX,dword ptr [EBX + 0x26d]
0057EAAE  50                        PUSH EAX
0057EAAF  8B 0C B1                  MOV ECX,dword ptr [ECX + ESI*0x4]
0057EAB2  E8 B6 26 E8 FF            CALL 0x0040116d
0057EAB7  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057EABD  46                        INC ESI
0057EABE  3B F0                     CMP ESI,EAX
0057EAC0  7C D0                     JL 0x0057ea92
0057EAC2  EB 07                     JMP 0x0057eacb
LAB_0057eac4:
0057EAC4  8B CB                     MOV ECX,EBX
0057EAC6  E8 7E 59 E8 FF            CALL 0x00404449
LAB_0057eacb:
0057EACB  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
0057EAD1  85 C0                     TEST EAX,EAX
0057EAD3  0F 84 ED 02 00 00         JZ 0x0057edc6
0057EAD9  8B CB                     MOV ECX,EBX
0057EADB  E8 5F 6D E8 FF            CALL 0x0040583f
0057EAE0  85 C0                     TEST EAX,EAX
0057EAE2  0F 84 DE 02 00 00         JZ 0x0057edc6
0057EAE8  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
0057EAEE  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0057EAF4  0F BF 42 2C               MOVSX EAX,word ptr [EDX + 0x2c]
0057EAF8  50                        PUSH EAX
0057EAF9  6A 00                     PUSH 0x0
0057EAFB  E8 6D 26 E8 FF            CALL 0x0040116d
0057EB00  39 BB 55 02 00 00         CMP dword ptr [EBX + 0x255],EDI
0057EB06  0F 84 BA 02 00 00         JZ 0x0057edc6
0057EB0C  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057EB12  33 F6                     XOR ESI,ESI
0057EB14  85 C0                     TEST EAX,EAX
0057EB16  0F 8E AA 02 00 00         JLE 0x0057edc6
LAB_0057eb1c:
0057EB1C  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0057EB22  8B 83 6D 02 00 00         MOV EAX,dword ptr [EBX + 0x26d]
0057EB28  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
0057EB2C  8B 0C B0                  MOV ECX,dword ptr [EAX + ESI*0x4]
0057EB2F  52                        PUSH EDX
0057EB30  6A 00                     PUSH 0x0
0057EB32  E8 36 26 E8 FF            CALL 0x0040116d
0057EB37  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057EB3D  46                        INC ESI
0057EB3E  3B F0                     CMP ESI,EAX
0057EB40  7C DA                     JL 0x0057eb1c
0057EB42  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0057EB45  33 C0                     XOR EAX,EAX
0057EB47  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057EB4D  5F                        POP EDI
0057EB4E  5E                        POP ESI
0057EB4F  5B                        POP EBX
0057EB50  8B E5                     MOV ESP,EBP
0057EB52  5D                        POP EBP
0057EB53  C2 04 00                  RET 0x4
LAB_0057eb56:
0057EB56  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0057EB5C  E8 BB 6C E8 FF            CALL 0x0040581c
0057EB61  8B 8B 65 02 00 00         MOV ECX,dword ptr [EBX + 0x265]
0057EB67  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0057EB6A  D1 E0                     SHL EAX,0x1
0057EB6C  3B CF                     CMP ECX,EDI
0057EB6E  0F 8E 52 02 00 00         JLE 0x0057edc6
0057EB74  8D 70 01                  LEA ESI,[EAX + 0x1]
0057EB77  8D 0C 85 E4 FF FF FF      LEA ECX,[EAX*0x4 + 0xffffffe4]
0057EB7E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0057EB81  8D 3C B5 00 00 00 00      LEA EDI,[ESI*0x4 + 0x0]
LAB_0057eb88:
0057EB88  83 FE 08                  CMP ESI,0x8
0057EB8B  8B C7                     MOV EAX,EDI
0057EB8D  7E 03                     JLE 0x0057eb92
0057EB8F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_0057eb92:
0057EB92  DB 83 4D 02 00 00         FILD dword ptr [EBX + 0x24d]
0057EB98  8B 90 DC B0 7C 00         MOV EDX,dword ptr [EAX + 0x7cb0dc]
0057EB9E  51                        PUSH ECX
0057EB9F  8B 8B 49 02 00 00         MOV ECX,dword ptr [EBX + 0x249]
0057EBA5  8B 80 B8 B0 7C 00         MOV EAX,dword ptr [EAX + 0x7cb0b8]
0057EBAB  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0057EBB1  03 D1                     ADD EDX,ECX
0057EBB3  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0057EBB6  8B 93 45 02 00 00         MOV EDX,dword ptr [EBX + 0x245]
0057EBBC  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0057EBC2  03 C2                     ADD EAX,EDX
0057EBC4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0057EBC7  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0057EBCD  D9 1C 24                  FSTP float ptr [ESP]
0057EBD0  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0057EBD3  51                        PUSH ECX
0057EBD4  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0057EBD7  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057EBDD  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057EBE3  D9 1C 24                  FSTP float ptr [ESP]
0057EBE6  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0057EBE9  51                        PUSH ECX
0057EBEA  8B 8B 6D 02 00 00         MOV ECX,dword ptr [EBX + 0x26d]
0057EBF0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057EBF6  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
0057EBF9  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057EBFF  D9 1C 24                  FSTP float ptr [ESP]
0057EC02  E8 D2 59 E8 FF            CALL 0x004045d9
0057EC07  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0057EC0A  8B 83 55 02 00 00         MOV EAX,dword ptr [EBX + 0x255]
0057EC10  83 C7 04                  ADD EDI,0x4
0057EC13  83 C2 04                  ADD EDX,0x4
0057EC16  46                        INC ESI
0057EC17  3D DE 00 00 00            CMP EAX,0xde
0057EC1C  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0057EC1F  75 0C                     JNZ 0x0057ec2d
0057EC21  8B CA                     MOV ECX,EDX
0057EC23  83 C7 04                  ADD EDI,0x4
0057EC26  83 C1 04                  ADD ECX,0x4
0057EC29  46                        INC ESI
0057EC2A  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_0057ec2d:
0057EC2D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0057EC30  8B 8B 65 02 00 00         MOV ECX,dword ptr [EBX + 0x265]
0057EC36  40                        INC EAX
0057EC37  3B C1                     CMP EAX,ECX
0057EC39  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0057EC3C  0F 8C 46 FF FF FF         JL 0x0057eb88
0057EC42  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0057EC45  33 C0                     XOR EAX,EAX
0057EC47  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057EC4D  5F                        POP EDI
0057EC4E  5E                        POP ESI
0057EC4F  5B                        POP EBX
0057EC50  8B E5                     MOV ESP,EBP
0057EC52  5D                        POP EBP
0057EC53  C2 04 00                  RET 0x4
LAB_0057ec56:
0057EC56  2D 0F 01 00 00            SUB EAX,0x10f
0057EC5B  0F 84 CF 00 00 00         JZ 0x0057ed30
0057EC61  83 E8 02                  SUB EAX,0x2
0057EC64  0F 85 5C 01 00 00         JNZ 0x0057edc6
0057EC6A  66 8B 83 45 02 00 00      MOV AX,word ptr [EBX + 0x245]
0057EC71  66 8B 8B 4D 02 00 00      MOV CX,word ptr [EBX + 0x24d]
0057EC78  66 8B 93 49 02 00 00      MOV DX,word ptr [EBX + 0x249]
0057EC7F  66 3B C7                  CMP AX,DI
0057EC82  7C 50                     JL 0x0057ecd4
0057EC84  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
0057EC8B  66 3B C6                  CMP AX,SI
0057EC8E  7D 44                     JGE 0x0057ecd4
0057EC90  66 3B D7                  CMP DX,DI
0057EC93  7C 3F                     JL 0x0057ecd4
0057EC95  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0057EC9C  7D 36                     JGE 0x0057ecd4
0057EC9E  66 3B CF                  CMP CX,DI
0057ECA1  7C 31                     JL 0x0057ecd4
0057ECA3  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0057ECAA  7D 28                     JGE 0x0057ecd4
0057ECAC  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0057ECB3  0F BF C9                  MOVSX ECX,CX
0057ECB6  0F BF D2                  MOVSX EDX,DX
0057ECB9  0F AF CF                  IMUL ECX,EDI
0057ECBC  0F BF F6                  MOVSX ESI,SI
0057ECBF  0F AF D6                  IMUL EDX,ESI
0057ECC2  0F BF C0                  MOVSX EAX,AX
0057ECC5  03 CA                     ADD ECX,EDX
0057ECC7  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0057ECCD  03 C8                     ADD ECX,EAX
0057ECCF  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0057ECD2  EB 02                     JMP 0x0057ecd6
LAB_0057ecd4:
0057ECD4  33 C9                     XOR ECX,ECX
LAB_0057ecd6:
0057ECD6  85 C9                     TEST ECX,ECX
0057ECD8  0F 84 E8 00 00 00         JZ 0x0057edc6
0057ECDE  8B 01                     MOV EAX,dword ptr [ECX]
0057ECE0  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0057ECE3  8B 8B 55 02 00 00         MOV ECX,dword ptr [EBX + 0x255]
0057ECE9  81 F9 DD 00 00 00         CMP ECX,0xdd
0057ECEF  75 0A                     JNZ 0x0057ecfb
0057ECF1  83 F8 39                  CMP EAX,0x39
0057ECF4  74 1F                     JZ 0x0057ed15
0057ECF6  83 F8 5E                  CMP EAX,0x5e
0057ECF9  74 1A                     JZ 0x0057ed15
LAB_0057ecfb:
0057ECFB  81 F9 DE 00 00 00         CMP ECX,0xde
0057ED01  0F 85 BF 00 00 00         JNZ 0x0057edc6
0057ED07  83 F8 4F                  CMP EAX,0x4f
0057ED0A  74 09                     JZ 0x0057ed15
0057ED0C  83 F8 61                  CMP EAX,0x61
0057ED0F  0F 85 B1 00 00 00         JNZ 0x0057edc6
LAB_0057ed15:
0057ED15  8B CB                     MOV ECX,EBX
0057ED17  E8 9F 58 E8 FF            CALL 0x004045bb
0057ED1C  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0057ED1F  33 C0                     XOR EAX,EAX
0057ED21  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057ED27  5F                        POP EDI
0057ED28  5E                        POP ESI
0057ED29  5B                        POP EBX
0057ED2A  8B E5                     MOV ESP,EBP
0057ED2C  5D                        POP EBP
0057ED2D  C2 04 00                  RET 0x4
LAB_0057ed30:
0057ED30  83 BB 5D 02 00 00 02      CMP dword ptr [EBX + 0x25d],0x2
0057ED37  0F 84 89 00 00 00         JZ 0x0057edc6
0057ED3D  8D 4D FC                  LEA ECX,[EBP + -0x4]
0057ED40  51                        PUSH ECX
0057ED41  8B CB                     MOV ECX,EBX
0057ED43  E8 52 24 E8 FF            CALL 0x0040119a
0057ED48  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057ED4B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0057ED4E  83 C2 46                  ADD EDX,0x46
0057ED51  52                        PUSH EDX
0057ED52  E8 19 BF 12 00            CALL 0x006aac70
0057ED57  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0057ED5A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0057ED5D  3B CF                     CMP ECX,EDI
0057ED5F  74 65                     JZ 0x0057edc6
0057ED61  3B C7                     CMP EAX,EDI
0057ED63  74 61                     JZ 0x0057edc6
0057ED65  B9 11 00 00 00            MOV ECX,0x11
0057ED6A  8D B3 31 02 00 00         LEA ESI,[EBX + 0x231]
0057ED70  8B F8                     MOV EDI,EAX
0057ED72  C7 83 3D 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x23d],0x2
0057ED7C  F3 A5                     MOVSD.REP ES:EDI,ESI
0057ED7E  66 A5                     MOVSW ES:EDI,ESI
0057ED80  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057ED83  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057ED86  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0057ED89  8B D1                     MOV EDX,ECX
0057ED8B  8D 78 46                  LEA EDI,[EAX + 0x46]
0057ED8E  C1 E9 02                  SHR ECX,0x2
0057ED91  F3 A5                     MOVSD.REP ES:EDI,ESI
0057ED93  8B CA                     MOV ECX,EDX
0057ED95  83 E1 03                  AND ECX,0x3
0057ED98  F3 A4                     MOVSB.REP ES:EDI,ESI
0057ED9A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057ED9D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0057EDA0  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0057EDA3  83 C0 46                  ADD EAX,0x46
0057EDA6  50                        PUSH EAX
0057EDA7  51                        PUSH ECX
0057EDA8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057EDAE  52                        PUSH EDX
0057EDAF  E8 45 38 E8 FF            CALL 0x004025f9
0057EDB4  8D 45 F4                  LEA EAX,[EBP + -0xc]
0057EDB7  50                        PUSH EAX
0057EDB8  E8 A3 C2 12 00            CALL 0x006ab060
0057EDBD  8D 4D F8                  LEA ECX,[EBP + -0x8]
0057EDC0  51                        PUSH ECX
0057EDC1  E8 9A C2 12 00            CALL 0x006ab060
LAB_0057edc6:
0057EDC6  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0057EDC9  33 C0                     XOR EAX,EAX
0057EDCB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057EDD1  5F                        POP EDI
0057EDD2  5E                        POP ESI
0057EDD3  5B                        POP EBX
0057EDD4  8B E5                     MOV ESP,EBP
0057EDD6  5D                        POP EBP
0057EDD7  C2 04 00                  RET 0x4
LAB_0057edda:
0057EDDA  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0057EDDD  68 F4 B1 7C 00            PUSH 0x7cb1f4
0057EDE2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057EDE7  56                        PUSH ESI
0057EDE8  57                        PUSH EDI
0057EDE9  68 69 01 00 00            PUSH 0x169
0057EDEE  68 9C B1 7C 00            PUSH 0x7cb19c
0057EDF3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057EDF8  E8 D3 E6 12 00            CALL 0x006ad4d0
0057EDFD  83 C4 18                  ADD ESP,0x18
0057EE00  85 C0                     TEST EAX,EAX
0057EE02  74 01                     JZ 0x0057ee05
0057EE04  CC                        INT3
LAB_0057ee05:
0057EE05  68 6A 01 00 00            PUSH 0x16a
0057EE0A  68 9C B1 7C 00            PUSH 0x7cb19c
0057EE0F  57                        PUSH EDI
0057EE10  56                        PUSH ESI
0057EE11  E8 2A 70 12 00            CALL 0x006a5e40
0057EE16  5F                        POP EDI
0057EE17  5E                        POP ESI
0057EE18  B8 FF FF 00 00            MOV EAX,0xffff
0057EE1D  5B                        POP EBX
0057EE1E  8B E5                     MOV ESP,EBP
0057EE20  5D                        POP EBP
0057EE21  C2 04 00                  RET 0x4
