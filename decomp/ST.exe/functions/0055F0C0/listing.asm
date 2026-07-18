FUN_0055f0c0:
0055F0C0  55                        PUSH EBP
0055F0C1  8B EC                     MOV EBP,ESP
0055F0C3  6A FF                     PUSH -0x1
0055F0C5  68 C0 AF 79 00            PUSH 0x79afc0
0055F0CA  68 64 D9 72 00            PUSH 0x72d964
0055F0CF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0055F0D5  50                        PUSH EAX
0055F0D6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0055F0DD  83 EC 58                  SUB ESP,0x58
0055F0E0  53                        PUSH EBX
0055F0E1  56                        PUSH ESI
0055F0E2  57                        PUSH EDI
0055F0E3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F0E6  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055F0E9  83 FB 0A                  CMP EBX,0xa
0055F0EC  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
0055F0EF  7C 07                     JL 0x0055f0f8
0055F0F1  C7 45 BC 0A 00 00 00      MOV dword ptr [EBP + -0x44],0xa
LAB_0055f0f8:
0055F0F8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0055F0FF  8D 34 9D 00 00 00 00      LEA ESI,[EBX*0x4 + 0x0]
0055F106  8B C6                     MOV EAX,ESI
0055F108  83 C0 03                  ADD EAX,0x3
0055F10B  24 FC                     AND AL,0xfc
0055F10D  E8 2E E9 1C 00            CALL 0x0072da40
0055F112  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F115  8B C4                     MOV EAX,ESP
0055F117  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0055F11A  8B C6                     MOV EAX,ESI
0055F11C  83 C0 03                  ADD EAX,0x3
0055F11F  24 FC                     AND AL,0xfc
0055F121  E8 1A E9 1C 00            CALL 0x0072da40
0055F126  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F129  8B C4                     MOV EAX,ESP
0055F12B  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0055F12E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055F131  8D 34 85 00 00 00 00      LEA ESI,[EAX*0x4 + 0x0]
0055F138  8B C6                     MOV EAX,ESI
0055F13A  83 C0 03                  ADD EAX,0x3
0055F13D  24 FC                     AND AL,0xfc
0055F13F  E8 FC E8 1C 00            CALL 0x0072da40
0055F144  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0055F147  8B C4                     MOV EAX,ESP
0055F149  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0055F14C  83 CF FF                  OR EDI,0xffffffff
0055F14F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0055F152  56                        PUSH ESI
0055F153  E8 18 BB 14 00            CALL 0x006aac70
0055F158  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0055F15B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055F15E  85 C0                     TEST EAX,EAX
0055F160  7D 05                     JGE 0x0055f167
0055F162  B8 01 00 00 00            MOV EAX,0x1
LAB_0055f167:
0055F167  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
0055F16A  85 C0                     TEST EAX,EAX
0055F16C  0F 8E 8F 01 00 00         JLE 0x0055f301
0055F172  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_0055f175:
0055F175  8D 0C 9D 00 00 00 00      LEA ECX,[EBX*0x4 + 0x0]
0055F17C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055F17F  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0055F182  8B D1                     MOV EDX,ECX
0055F184  C1 E9 02                  SHR ECX,0x2
0055F187  F3 A5                     MOVSD.REP ES:EDI,ESI
0055F189  8B CA                     MOV ECX,EDX
0055F18B  83 E1 03                  AND ECX,0x3
0055F18E  F3 A4                     MOVSB.REP ES:EDI,ESI
0055F190  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
0055F197  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055F19A  85 C0                     TEST EAX,EAX
0055F19C  0F 8E 20 01 00 00         JLE 0x0055f2c2
0055F1A2  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0055F1A5  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0055F1A8  EB 03                     JMP 0x0055f1ad
LAB_0055f1aa:
0055F1AA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0055f1ad:
0055F1AD  33 FF                     XOR EDI,EDI
0055F1AF  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0055F1B2  33 D2                     XOR EDX,EDX
0055F1B4  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0055F1B7  33 F6                     XOR ESI,ESI
0055F1B9  85 DB                     TEST EBX,EBX
0055F1BB  7E 1F                     JLE 0x0055f1dc
0055F1BD  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_0055f1c0:
0055F1C0  3B 55 BC                  CMP EDX,dword ptr [EBP + -0x44]
0055F1C3  7D 17                     JGE 0x0055f1dc
0055F1C5  8B 01                     MOV EAX,dword ptr [ECX]
0055F1C7  85 C0                     TEST EAX,EAX
0055F1C9  7C 09                     JL 0x0055f1d4
0055F1CB  03 F8                     ADD EDI,EAX
0055F1CD  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0055F1D0  42                        INC EDX
0055F1D1  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
LAB_0055f1d4:
0055F1D4  46                        INC ESI
0055F1D5  83 C1 04                  ADD ECX,0x4
0055F1D8  3B F3                     CMP ESI,EBX
0055F1DA  7C E4                     JL 0x0055f1c0
LAB_0055f1dc:
0055F1DC  85 D2                     TEST EDX,EDX
0055F1DE  0F 8E DE 00 00 00         JLE 0x0055f2c2
0055F1E4  85 FF                     TEST EDI,EDI
0055F1E6  75 2D                     JNZ 0x0055f215
0055F1E8  8D 1C 92                  LEA EBX,[EDX + EDX*0x4]
0055F1EB  8D 1C 9B                  LEA EBX,[EBX + EBX*0x4]
0055F1EE  C1 E3 02                  SHL EBX,0x2
0055F1F1  85 F6                     TEST ESI,ESI
0055F1F3  7E 67                     JLE 0x0055f25c
0055F1F5  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0055F1F8  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0055F1FB  2B C8                     SUB ECX,EAX
0055F1FD  8B FE                     MOV EDI,ESI
LAB_0055f1ff:
0055F1FF  33 D2                     XOR EDX,EDX
0055F201  39 14 01                  CMP dword ptr [ECX + EAX*0x1],EDX
0055F204  0F 9C C2                  SETL DL
0055F207  4A                        DEC EDX
0055F208  83 E2 64                  AND EDX,0x64
0055F20B  89 10                     MOV dword ptr [EAX],EDX
0055F20D  83 C0 04                  ADD EAX,0x4
0055F210  4F                        DEC EDI
0055F211  75 EC                     JNZ 0x0055f1ff
0055F213  EB 47                     JMP 0x0055f25c
LAB_0055f215:
0055F215  33 DB                     XOR EBX,EBX
0055F217  85 F6                     TEST ESI,ESI
0055F219  7E 41                     JLE 0x0055f25c
0055F21B  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0055F21E  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0055F221  8B C1                     MOV EAX,ECX
0055F223  2B F8                     SUB EDI,EAX
0055F225  89 7D 9C                  MOV dword ptr [EBP + -0x64],EDI
0055F228  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
LAB_0055f22b:
0055F22B  8B 04 39                  MOV EAX,dword ptr [ECX + EDI*0x1]
0055F22E  85 C0                     TEST EAX,EAX
0055F230  7C 1A                     JL 0x0055f24c
0055F232  0F AF C2                  IMUL EAX,EDX
0055F235  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0055F238  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0055F23B  C1 E0 02                  SHL EAX,0x2
0055F23E  99                        CDQ
0055F23F  F7 7D DC                  IDIV dword ptr [EBP + -0x24]
0055F242  89 01                     MOV dword ptr [ECX],EAX
0055F244  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0055F247  8B 7D 9C                  MOV EDI,dword ptr [EBP + -0x64]
0055F24A  EB 06                     JMP 0x0055f252
LAB_0055f24c:
0055F24C  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
LAB_0055f252:
0055F252  03 19                     ADD EBX,dword ptr [ECX]
0055F254  83 C1 04                  ADD ECX,0x4
0055F257  FF 4D 98                  DEC dword ptr [EBP + -0x68]
0055F25A  75 CF                     JNZ 0x0055f22b
LAB_0055f25c:
0055F25C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055F25F  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0055F265  05 39 30 00 00            ADD EAX,0x3039
0055F26A  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0055F26D  C1 E8 10                  SHR EAX,0x10
0055F270  33 D2                     XOR EDX,EDX
0055F272  F7 F3                     DIV EBX
0055F274  42                        INC EDX
0055F275  33 C0                     XOR EAX,EAX
0055F277  85 F6                     TEST ESI,ESI
0055F279  7E 11                     JLE 0x0055f28c
0055F27B  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
LAB_0055f27e:
0055F27E  2B 11                     SUB EDX,dword ptr [ECX]
0055F280  85 D2                     TEST EDX,EDX
0055F282  7E 08                     JLE 0x0055f28c
0055F284  40                        INC EAX
0055F285  83 C1 04                  ADD ECX,0x4
0055F288  3B C6                     CMP EAX,ESI
0055F28A  7C F2                     JL 0x0055f27e
LAB_0055f28c:
0055F28C  3B C6                     CMP EAX,ESI
0055F28E  7D 2F                     JGE 0x0055f2bf
0055F290  8B 7D A0                  MOV EDI,dword ptr [EBP + -0x60]
0055F293  89 07                     MOV dword ptr [EDI],EAX
0055F295  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0055F298  C7 04 81 FF FF FF FF      MOV dword ptr [ECX + EAX*0x4],0xffffffff
0055F29F  50                        PUSH EAX
0055F2A0  51                        PUSH ECX
0055F2A1  8B 75 B4                  MOV ESI,dword ptr [EBP + -0x4c]
0055F2A4  56                        PUSH ESI
0055F2A5  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0055F2A8  50                        PUSH EAX
0055F2A9  FF 55 20                  CALL dword ptr [EBP + 0x20]
0055F2AC  46                        INC ESI
0055F2AD  89 75 B4                  MOV dword ptr [EBP + -0x4c],ESI
0055F2B0  83 C7 04                  ADD EDI,0x4
0055F2B3  89 7D A0                  MOV dword ptr [EBP + -0x60],EDI
0055F2B6  3B 75 10                  CMP ESI,dword ptr [EBP + 0x10]
0055F2B9  0F 8C EB FE FF FF         JL 0x0055f1aa
LAB_0055f2bf:
0055F2BF  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0055f2c2:
0055F2C2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055F2C5  39 45 B4                  CMP dword ptr [EBP + -0x4c],EAX
0055F2C8  7C 2E                     JL 0x0055f2f8
0055F2CA  50                        PUSH EAX
0055F2CB  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0055F2CE  51                        PUSH ECX
0055F2CF  FF 55 1C                  CALL dword ptr [EBP + 0x1c]
0055F2D2  39 45 D8                  CMP dword ptr [EBP + -0x28],EAX
0055F2D5  7D 21                     JGE 0x0055f2f8
0055F2D7  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0055F2DA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0055F2DD  8D 0C 95 00 00 00 00      LEA ECX,[EDX*0x4 + 0x0]
0055F2E4  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
0055F2E7  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0055F2EA  8B C1                     MOV EAX,ECX
0055F2EC  C1 E9 02                  SHR ECX,0x2
0055F2EF  F3 A5                     MOVSD.REP ES:EDI,ESI
0055F2F1  8B C8                     MOV ECX,EAX
0055F2F3  83 E1 03                  AND ECX,0x3
0055F2F6  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0055f2f8:
0055F2F8  FF 4D A4                  DEC dword ptr [EBP + -0x5c]
0055F2FB  0F 85 74 FE FF FF         JNZ 0x0055f175
LAB_0055f301:
0055F301  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0055F304  85 C0                     TEST EAX,EAX
0055F306  7D 09                     JGE 0x0055f311
0055F308  8D 4D C0                  LEA ECX,[EBP + -0x40]
0055F30B  51                        PUSH ECX
0055F30C  E8 4F BD 14 00            CALL 0x006ab060
LAB_0055f311:
0055F311  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0055F314  EB 2A                     JMP 0x0055f340
LAB_0055f340:
0055F340  8D 65 8C                  LEA ESP,[EBP + -0x74]
0055F343  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0055F346  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0055F34D  5F                        POP EDI
0055F34E  5E                        POP ESI
0055F34F  5B                        POP EBX
0055F350  8B E5                     MOV ESP,EBP
0055F352  5D                        POP EBP
0055F353  C2 1C 00                  RET 0x1c
