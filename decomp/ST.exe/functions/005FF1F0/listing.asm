FUN_005ff1f0:
005FF1F0  55                        PUSH EBP
005FF1F1  8B EC                     MOV EBP,ESP
005FF1F3  83 EC 14                  SUB ESP,0x14
005FF1F6  53                        PUSH EBX
005FF1F7  56                        PUSH ESI
005FF1F8  8B F1                     MOV ESI,ECX
005FF1FA  57                        PUSH EDI
005FF1FB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005FF1FE  33 DB                     XOR EBX,EBX
005FF200  83 CF FF                  OR EDI,0xffffffff
005FF203  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005FF206  85 C9                     TEST ECX,ECX
005FF208  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005FF20B  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005FF20E  74 32                     JZ 0x005ff242
005FF210  7E 22                     JLE 0x005ff234
005FF212  83 F9 05                  CMP ECX,0x5
005FF215  7D 1D                     JGE 0x005ff234
005FF217  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005FF21A  33 D2                     XOR EDX,EDX
005FF21C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FF222  05 39 30 00 00            ADD EAX,0x3039
005FF227  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF22A  C1 E8 10                  SHR EAX,0x10
005FF22D  41                        INC ECX
005FF22E  F7 F1                     DIV ECX
005FF230  85 D2                     TEST EDX,EDX
005FF232  75 0E                     JNZ 0x005ff242
LAB_005ff234:
005FF234  5F                        POP EDI
005FF235  5E                        POP ESI
005FF236  B8 30 75 00 00            MOV EAX,0x7530
005FF23B  5B                        POP EBX
005FF23C  8B E5                     MOV ESP,EBP
005FF23E  5D                        POP EBP
005FF23F  C2 0C 00                  RET 0xc
LAB_005ff242:
005FF242  8B 86 26 02 00 00         MOV EAX,dword ptr [ESI + 0x226]
005FF248  8B 8E 37 02 00 00         MOV ECX,dword ptr [ESI + 0x237]
005FF24E  D1 E0                     SHL EAX,0x1
005FF250  3B C8                     CMP ECX,EAX
005FF252  7E 05                     JLE 0x005ff259
005FF254  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
005FF257  EB 05                     JMP 0x005ff25e
LAB_005ff259:
005FF259  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
005FF25C  8B C1                     MOV EAX,ECX
LAB_005ff25e:
005FF25E  83 F8 01                  CMP EAX,0x1
005FF261  0F 8E B7 00 00 00         JLE 0x005ff31e
005FF267  85 C0                     TEST EAX,EAX
005FF269  7E 27                     JLE 0x005ff292
005FF26B  8B 8E 3F 02 00 00         MOV ECX,dword ptr [ESI + 0x23f]
005FF271  8B D0                     MOV EDX,EAX
LAB_005ff273:
005FF273  8B 01                     MOV EAX,dword ptr [ECX]
005FF275  83 C1 04                  ADD ECX,0x4
005FF278  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
005FF27B  8B 86 3B 02 00 00         MOV EAX,dword ptr [ESI + 0x23b]
005FF281  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
005FF284  8B 78 10                  MOV EDI,dword ptr [EAX + 0x10]
005FF287  03 78 0C                  ADD EDI,dword ptr [EAX + 0xc]
005FF28A  03 DF                     ADD EBX,EDI
005FF28C  4A                        DEC EDX
005FF28D  75 E4                     JNZ 0x005ff273
005FF28F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005ff292:
005FF292  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FF295  85 C0                     TEST EAX,EAX
005FF297  7E 79                     JLE 0x005ff312
LAB_005ff299:
005FF299  85 DB                     TEST EBX,EBX
005FF29B  7E 75                     JLE 0x005ff312
005FF29D  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF2A0  33 D2                     XOR EDX,EDX
005FF2A2  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF2A8  33 FF                     XOR EDI,EDI
005FF2AA  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF2B0  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF2B3  C1 E8 10                  SHR EAX,0x10
005FF2B6  F7 F3                     DIV EBX
005FF2B8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005FF2BB  8B CA                     MOV ECX,EDX
005FF2BD  33 D2                     XOR EDX,EDX
005FF2BF  85 C0                     TEST EAX,EAX
005FF2C1  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005FF2C4  7E 41                     JLE 0x005ff307
005FF2C6  8B 86 3B 02 00 00         MOV EAX,dword ptr [ESI + 0x23b]
005FF2CC  8B 9E 3F 02 00 00         MOV EBX,dword ptr [ESI + 0x23f]
005FF2D2  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_005ff2d5:
005FF2D5  8B 03                     MOV EAX,dword ptr [EBX]
005FF2D7  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005FF2DA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005FF2DD  8D 34 C6                  LEA ESI,[ESI + EAX*0x8]
005FF2E0  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005FF2E3  03 46 0C                  ADD EAX,dword ptr [ESI + 0xc]
005FF2E6  03 F8                     ADD EDI,EAX
005FF2E8  3B F9                     CMP EDI,ECX
005FF2EA  7D 0E                     JGE 0x005ff2fa
005FF2EC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005FF2EF  42                        INC EDX
005FF2F0  83 C3 04                  ADD EBX,0x4
005FF2F3  3B D6                     CMP EDX,ESI
005FF2F5  7C DE                     JL 0x005ff2d5
005FF2F7  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_005ff2fa:
005FF2FA  85 C0                     TEST EAX,EAX
005FF2FC  7E 03                     JLE 0x005ff301
005FF2FE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_005ff301:
005FF301  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005FF304  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_005ff307:
005FF307  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FF30A  48                        DEC EAX
005FF30B  85 C0                     TEST EAX,EAX
005FF30D  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
005FF310  7F 87                     JG 0x005ff299
LAB_005ff312:
005FF312  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005FF315  5F                        POP EDI
005FF316  5E                        POP ESI
005FF317  5B                        POP EBX
005FF318  8B E5                     MOV ESP,EBP
005FF31A  5D                        POP EBP
005FF31B  C2 0C 00                  RET 0xc
LAB_005ff31e:
005FF31E  75 0B                     JNZ 0x005ff32b
005FF320  5F                        POP EDI
005FF321  5E                        POP ESI
005FF322  33 C0                     XOR EAX,EAX
005FF324  5B                        POP EBX
005FF325  8B E5                     MOV ESP,EBP
005FF327  5D                        POP EBP
005FF328  C2 0C 00                  RET 0xc
LAB_005ff32b:
005FF32B  8B C7                     MOV EAX,EDI
005FF32D  5F                        POP EDI
005FF32E  5E                        POP ESI
005FF32F  5B                        POP EBX
005FF330  8B E5                     MOV ESP,EBP
005FF332  5D                        POP EBP
005FF333  C2 0C 00                  RET 0xc
