FUN_004ef140:
004EF140  55                        PUSH EBP
004EF141  8B EC                     MOV EBP,ESP
004EF143  83 EC 10                  SUB ESP,0x10
004EF146  53                        PUSH EBX
004EF147  8B D9                     MOV EBX,ECX
004EF149  33 C0                     XOR EAX,EAX
004EF14B  8A 83 78 02 00 00         MOV AL,byte ptr [EBX + 0x278]
004EF151  8B 8C 83 7A 02 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x27a]
004EF158  85 C9                     TEST ECX,ECX
004EF15A  0F 84 57 01 00 00         JZ 0x004ef2b7
004EF160  56                        PUSH ESI
004EF161  57                        PUSH EDI
004EF162  8D 8B B6 01 00 00         LEA ECX,[EBX + 0x1b6]
004EF168  8D BB A1 01 00 00         LEA EDI,[EBX + 0x1a1]
004EF16E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004EF175  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004EF178  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004EF17B  C7 45 F0 05 00 00 00      MOV dword ptr [EBP + -0x10],0x5
LAB_004ef182:
004EF182  C7 43 28 21 00 00 00      MOV dword ptr [EBX + 0x28],0x21
004EF189  8B 17                     MOV EDX,dword ptr [EDI]
004EF18B  8D 73 18                  LEA ESI,[EBX + 0x18]
004EF18E  8B CB                     MOV ECX,EBX
004EF190  56                        PUSH ESI
004EF191  52                        PUSH EDX
004EF192  6A 02                     PUSH 0x2
004EF194  E8 E7 6E 1F 00            CALL 0x006e6080
004EF199  33 C0                     XOR EAX,EAX
004EF19B  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
004EF19E  8A 83 78 02 00 00         MOV AL,byte ptr [EBX + 0x278]
004EF1A4  8B 94 83 7A 02 00 00      MOV EDX,dword ptr [EBX + EAX*0x4 + 0x27a]
004EF1AB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004EF1AE  03 83 99 01 00 00         ADD EAX,dword ptr [EBX + 0x199]
004EF1B4  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
004EF1B7  1B C0                     SBB EAX,EAX
004EF1B9  F7 D8                     NEG EAX
004EF1BB  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
004EF1BE  0F 85 A4 00 00 00         JNZ 0x004ef268
004EF1C4  85 C9                     TEST ECX,ECX
004EF1C6  0F 85 A4 00 00 00         JNZ 0x004ef270
LAB_004ef1cc:
004EF1CC  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
004EF1D3  8B 17                     MOV EDX,dword ptr [EDI]
004EF1D5  56                        PUSH ESI
004EF1D6  52                        PUSH EDX
LAB_004ef1d7:
004EF1D7  6A 02                     PUSH 0x2
004EF1D9  8B CB                     MOV ECX,EBX
004EF1DB  E8 A0 6E 1F 00            CALL 0x006e6080
004EF1E0  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
004EF1E3  85 C0                     TEST EAX,EAX
004EF1E5  0F 84 A7 00 00 00         JZ 0x004ef292
004EF1EB  33 C0                     XOR EAX,EAX
004EF1ED  8A 83 78 02 00 00         MOV AL,byte ptr [EBX + 0x278]
004EF1F3  8B 84 83 7A 02 00 00      MOV EAX,dword ptr [EBX + EAX*0x4 + 0x27a]
004EF1FA  85 C0                     TEST EAX,EAX
004EF1FC  0F 84 90 00 00 00         JZ 0x004ef292
004EF202  8B 8B 99 01 00 00         MOV ECX,dword ptr [EBX + 0x199]
004EF208  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004EF20B  03 CA                     ADD ECX,EDX
004EF20D  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004EF210  3B CA                     CMP ECX,EDX
004EF212  73 7E                     JNC 0x004ef292
004EF214  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
004EF217  0F AF F1                  IMUL ESI,ECX
004EF21A  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
004EF21D  85 F6                     TEST ESI,ESI
004EF21F  74 71                     JZ 0x004ef292
004EF221  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
004EF224  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004EF227  84 C0                     TEST AL,AL
004EF229  0F 94 C0                  SETZ AL
004EF22C  83 C0 03                  ADD EAX,0x3
004EF22F  6A 00                     PUSH 0x0
004EF231  88 41 FF                  MOV byte ptr [ECX + -0x1],AL
004EF234  8A 56 09                  MOV DL,byte ptr [ESI + 0x9]
004EF237  8B 06                     MOV EAX,dword ptr [ESI]
004EF239  52                        PUSH EDX
004EF23A  50                        PUSH EAX
004EF23B  E8 44 44 F1 FF            CALL 0x00403684
004EF240  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004EF243  83 C4 0C                  ADD ESP,0xc
004EF246  89 02                     MOV dword ptr [EDX],EAX
004EF248  C7 42 04 00 00 00 00      MOV dword ptr [EDX + 0x4],0x0
004EF24F  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
004EF252  84 C0                     TEST AL,AL
004EF254  74 2A                     JZ 0x004ef280
004EF256  83 C6 0A                  ADD ESI,0xa
004EF259  83 C2 08                  ADD EDX,0x8
004EF25C  8B 0E                     MOV ECX,dword ptr [ESI]
004EF25E  89 0A                     MOV dword ptr [EDX],ECX
004EF260  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
004EF263  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
004EF266  EB 2A                     JMP 0x004ef292
LAB_004ef268:
004EF268  85 C9                     TEST ECX,ECX
004EF26A  0F 85 5C FF FF FF         JNZ 0x004ef1cc
LAB_004ef270:
004EF270  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
004EF277  8B 0F                     MOV ECX,dword ptr [EDI]
004EF279  56                        PUSH ESI
004EF27A  51                        PUSH ECX
004EF27B  E9 57 FF FF FF            JMP 0x004ef1d7
LAB_004ef280:
004EF280  B9 07 00 00 00            MOV ECX,0x7
004EF285  83 C6 12                  ADD ESI,0x12
004EF288  8D 7A 08                  LEA EDI,[EDX + 0x8]
004EF28B  F3 A5                     MOVSD.REP ES:EDI,ESI
004EF28D  66 A5                     MOVSW ES:EDI,ESI
004EF28F  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_004ef292:
004EF292  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004EF295  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004EF298  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004EF29B  46                        INC ESI
004EF29C  83 C7 04                  ADD EDI,0x4
004EF29F  83 C1 27                  ADD ECX,0x27
004EF2A2  48                        DEC EAX
004EF2A3  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004EF2A6  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004EF2A9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004EF2AC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004EF2AF  0F 85 CD FE FF FF         JNZ 0x004ef182
004EF2B5  5F                        POP EDI
004EF2B6  5E                        POP ESI
LAB_004ef2b7:
004EF2B7  5B                        POP EBX
004EF2B8  8B E5                     MOV ESP,EBP
004EF2BA  5D                        POP EBP
004EF2BB  C3                        RET
