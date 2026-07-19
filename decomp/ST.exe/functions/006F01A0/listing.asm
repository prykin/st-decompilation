mfTMapDelObj:
006F01A0  55                        PUSH EBP
006F01A1  8B EC                     MOV EBP,ESP
006F01A3  83 EC 44                  SUB ESP,0x44
006F01A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F01AB  53                        PUSH EBX
006F01AC  56                        PUSH ESI
006F01AD  57                        PUSH EDI
006F01AE  8D 55 C0                  LEA EDX,[EBP + -0x40]
006F01B1  8D 4D BC                  LEA ECX,[EBP + -0x44]
006F01B4  6A 00                     PUSH 0x0
006F01B6  52                        PUSH EDX
006F01B7  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006F01BA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F01C0  E8 2B D6 03 00            CALL 0x0072d7f0
006F01C5  8B F0                     MOV ESI,EAX
006F01C7  83 C4 08                  ADD ESP,0x8
006F01CA  85 F6                     TEST ESI,ESI
006F01CC  0F 85 B4 00 00 00         JNZ 0x006f0286
006F01D2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F01D5  85 F6                     TEST ESI,ESI
006F01D7  75 17                     JNZ 0x006f01f0
006F01D9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F01DE  68 A4 01 00 00            PUSH 0x1a4
006F01E3  68 88 EF 7E 00            PUSH 0x7eef88
006F01E8  50                        PUSH EAX
006F01E9  6A CC                     PUSH -0x34
006F01EB  E8 50 5C FB FF            CALL 0x006a5e40
LAB_006f01f0:
006F01F0  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006F01F3  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F01F6  85 FF                     TEST EDI,EDI
006F01F8  7C 1F                     JL 0x006f0219
006F01FA  0F BF 0E                  MOVSX ECX,word ptr [ESI]
006F01FD  3B F9                     CMP EDI,ECX
006F01FF  7D 18                     JGE 0x006f0219
006F0201  85 DB                     TEST EBX,EBX
006F0203  7C 14                     JL 0x006f0219
006F0205  0F BF 56 02               MOVSX EDX,word ptr [ESI + 0x2]
006F0209  3B DA                     CMP EBX,EDX
006F020B  7D 0C                     JGE 0x006f0219
006F020D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F0210  85 C0                     TEST EAX,EAX
006F0212  7C 05                     JL 0x006f0219
006F0214  83 F8 06                  CMP EAX,0x6
006F0217  7C 17                     JL 0x006f0230
LAB_006f0219:
006F0219  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F021E  68 A5 01 00 00            PUSH 0x1a5
006F0223  68 88 EF 7E 00            PUSH 0x7eef88
006F0228  50                        PUSH EAX
006F0229  6A CC                     PUSH -0x34
006F022B  E8 10 5C FB FF            CALL 0x006a5e40
LAB_006f0230:
006F0230  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
006F0234  99                        CDQ
006F0235  2B C2                     SUB EAX,EDX
006F0237  8B C8                     MOV ECX,EAX
006F0239  8B C3                     MOV EAX,EBX
006F023B  D1 F9                     SAR ECX,0x1
006F023D  0F AF 4D 14               IMUL ECX,dword ptr [EBP + 0x14]
006F0241  99                        CDQ
006F0242  2B C2                     SUB EAX,EDX
006F0244  D1 F8                     SAR EAX,0x1
006F0246  03 C8                     ADD ECX,EAX
006F0248  0F BF 06                  MOVSX EAX,word ptr [ESI]
006F024B  99                        CDQ
006F024C  2B C2                     SUB EAX,EDX
006F024E  D1 F8                     SAR EAX,0x1
006F0250  0F AF C8                  IMUL ECX,EAX
006F0253  8B C7                     MOV EAX,EDI
006F0255  99                        CDQ
006F0256  2B C2                     SUB EAX,EDX
006F0258  D1 F8                     SAR EAX,0x1
006F025A  03 C8                     ADD ECX,EAX
006F025C  8D 84 8E 59 04 00 00      LEA EAX,[ESI + ECX*0x4 + 0x459]
006F0263  8B 8C 8E 59 04 00 00      MOV ECX,dword ptr [ESI + ECX*0x4 + 0x459]
006F026A  85 C9                     TEST ECX,ECX
006F026C  74 06                     JZ 0x006f0274
006F026E  50                        PUSH EAX
006F026F  E8 EC AD FB FF            CALL 0x006ab060
LAB_006f0274:
006F0274  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006F0277  33 C0                     XOR EAX,EAX
006F0279  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F027F  5F                        POP EDI
006F0280  5E                        POP ESI
006F0281  5B                        POP EBX
006F0282  8B E5                     MOV ESP,EBP
006F0284  5D                        POP EBP
006F0285  C3                        RET
LAB_006f0286:
006F0286  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006F0289  68 34 F0 7E 00            PUSH 0x7ef034
006F028E  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F0293  56                        PUSH ESI
006F0294  6A 00                     PUSH 0x0
006F0296  68 AF 01 00 00            PUSH 0x1af
006F029B  68 88 EF 7E 00            PUSH 0x7eef88
006F02A0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F02A6  E8 25 D2 FB FF            CALL 0x006ad4d0
006F02AB  83 C4 18                  ADD ESP,0x18
006F02AE  85 C0                     TEST EAX,EAX
006F02B0  74 01                     JZ 0x006f02b3
006F02B2  CC                        INT3
LAB_006f02b3:
006F02B3  68 B1 01 00 00            PUSH 0x1b1
006F02B8  68 88 EF 7E 00            PUSH 0x7eef88
006F02BD  6A 00                     PUSH 0x0
006F02BF  56                        PUSH ESI
006F02C0  E8 7B 5B FB FF            CALL 0x006a5e40
006F02C5  8B C6                     MOV EAX,ESI
006F02C7  5F                        POP EDI
006F02C8  5E                        POP ESI
006F02C9  5B                        POP EBX
006F02CA  8B E5                     MOV ESP,EBP
006F02CC  5D                        POP EBP
006F02CD  C3                        RET
