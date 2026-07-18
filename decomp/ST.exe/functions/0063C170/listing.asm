FUN_0063c170:
0063C170  55                        PUSH EBP
0063C171  8B EC                     MOV EBP,ESP
0063C173  83 EC 08                  SUB ESP,0x8
0063C176  56                        PUSH ESI
0063C177  8B F1                     MOV ESI,ECX
0063C179  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0063C17C  57                        PUSH EDI
0063C17D  8B BE 8E 02 00 00         MOV EDI,dword ptr [ESI + 0x28e]
0063C183  8B 86 6E 02 00 00         MOV EAX,dword ptr [ESI + 0x26e]
0063C189  2B CF                     SUB ECX,EDI
0063C18B  89 86 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EAX
0063C191  8D 41 40                  LEA EAX,[ECX + 0x40]
0063C194  0F AF C1                  IMUL EAX,ECX
0063C197  0F BF 8E 51 02 00 00      MOVSX ECX,word ptr [ESI + 0x251]
0063C19E  C1 E0 03                  SHL EAX,0x3
0063C1A1  99                        CDQ
0063C1A2  83 E2 3F                  AND EDX,0x3f
0063C1A5  03 C2                     ADD EAX,EDX
0063C1A7  C1 F8 06                  SAR EAX,0x6
0063C1AA  03 C8                     ADD ECX,EAX
0063C1AC  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0063C1B1  85 C9                     TEST ECX,ECX
0063C1B3  89 8E 6E 02 00 00         MOV dword ptr [ESI + 0x26e],ECX
0063C1B9  7C 11                     JL 0x0063c1cc
0063C1BB  F7 E9                     IMUL ECX
0063C1BD  C1 FA 06                  SAR EDX,0x6
0063C1C0  8B C2                     MOV EAX,EDX
0063C1C2  C1 E8 1F                  SHR EAX,0x1f
0063C1C5  03 D0                     ADD EDX,EAX
0063C1C7  0F BF C2                  MOVSX EAX,DX
0063C1CA  EB 10                     JMP 0x0063c1dc
LAB_0063c1cc:
0063C1CC  F7 E9                     IMUL ECX
0063C1CE  C1 FA 06                  SAR EDX,0x6
0063C1D1  8B C2                     MOV EAX,EDX
0063C1D3  C1 E8 1F                  SHR EAX,0x1f
0063C1D6  03 D0                     ADD EDX,EAX
0063C1D8  0F BF C2                  MOVSX EAX,DX
0063C1DB  48                        DEC EAX
LAB_0063c1dc:
0063C1DC  83 F8 19                  CMP EAX,0x19
0063C1DF  7C 0D                     JL 0x0063c1ee
0063C1E1  5F                        POP EDI
0063C1E2  B8 0A 00 00 00            MOV EAX,0xa
0063C1E7  5E                        POP ESI
0063C1E8  8B E5                     MOV ESP,EBP
0063C1EA  5D                        POP EBP
0063C1EB  C2 04 00                  RET 0x4
LAB_0063c1ee:
0063C1EE  66 8B 96 61 02 00 00      MOV DX,word ptr [ESI + 0x261]
0063C1F5  8B 86 5D 02 00 00         MOV EAX,dword ptr [ESI + 0x25d]
0063C1FB  6A 00                     PUSH 0x0
0063C1FD  6A 00                     PUSH 0x0
0063C1FF  68 A8 00 00 00            PUSH 0xa8
0063C204  52                        PUSH EDX
0063C205  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
0063C20B  50                        PUSH EAX
0063C20C  8B 86 7A 02 00 00         MOV EAX,dword ptr [ESI + 0x27a]
0063C212  68 50 C3 00 00            PUSH 0xc350
0063C217  52                        PUSH EDX
0063C218  8B 96 76 02 00 00         MOV EDX,dword ptr [ESI + 0x276]
0063C21E  50                        PUSH EAX
0063C21F  8B 86 72 02 00 00         MOV EAX,dword ptr [ESI + 0x272]
0063C225  52                        PUSH EDX
0063C226  8B 96 66 02 00 00         MOV EDX,dword ptr [ESI + 0x266]
0063C22C  50                        PUSH EAX
0063C22D  51                        PUSH ECX
0063C22E  8B 8E 6A 02 00 00         MOV ECX,dword ptr [ESI + 0x26a]
0063C234  51                        PUSH ECX
0063C235  52                        PUSH EDX
0063C236  8D 8E 83 03 00 00         LEA ECX,[ESI + 0x383]
0063C23C  E8 D5 82 DC FF            CALL 0x00404516
0063C241  8B F8                     MOV EDI,EAX
0063C243  85 FF                     TEST EDI,EDI
0063C245  0F 84 B9 00 00 00         JZ 0x0063c304
0063C24B  83 FF 01                  CMP EDI,0x1
0063C24E  75 38                     JNZ 0x0063c288
0063C250  8B 86 A3 03 00 00         MOV EAX,dword ptr [ESI + 0x3a3]
0063C256  8B 8E A7 03 00 00         MOV ECX,dword ptr [ESI + 0x3a7]
0063C25C  8B 96 AB 03 00 00         MOV EDX,dword ptr [ESI + 0x3ab]
0063C262  89 86 66 02 00 00         MOV dword ptr [ESI + 0x266],EAX
0063C268  8B C7                     MOV EAX,EDI
0063C26A  89 8E 6A 02 00 00         MOV dword ptr [ESI + 0x26a],ECX
0063C270  89 96 6E 02 00 00         MOV dword ptr [ESI + 0x26e],EDX
0063C276  C7 86 97 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x397],0x0
0063C280  5F                        POP EDI
0063C281  5E                        POP ESI
0063C282  8B E5                     MOV ESP,EBP
0063C284  5D                        POP EBP
0063C285  C2 04 00                  RET 0x4
LAB_0063c288:
0063C288  83 FF 02                  CMP EDI,0x2
0063C28B  75 77                     JNZ 0x0063c304
0063C28D  8B 8E 97 03 00 00         MOV ECX,dword ptr [ESI + 0x397]
0063C293  85 C9                     TEST ECX,ECX
0063C295  74 66                     JZ 0x0063c2fd
0063C297  8D 55 F8                  LEA EDX,[EBP + -0x8]
0063C29A  8B 01                     MOV EAX,dword ptr [ECX]
0063C29C  52                        PUSH EDX
0063C29D  8D 55 FC                  LEA EDX,[EBP + -0x4]
0063C2A0  52                        PUSH EDX
0063C2A1  8D 55 FE                  LEA EDX,[EBP + -0x2]
0063C2A4  52                        PUSH EDX
0063C2A5  8D 55 0A                  LEA EDX,[EBP + 0xa]
0063C2A8  52                        PUSH EDX
0063C2A9  8B 96 9B 03 00 00         MOV EDX,dword ptr [ESI + 0x39b]
0063C2AF  52                        PUSH EDX
0063C2B0  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
0063C2B6  85 C0                     TEST EAX,EAX
0063C2B8  75 43                     JNZ 0x0063c2fd
0063C2BA  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
0063C2BE  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
0063C2C2  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0063C2C6  89 86 A3 03 00 00         MOV dword ptr [ESI + 0x3a3],EAX
0063C2CC  89 86 66 02 00 00         MOV dword ptr [ESI + 0x266],EAX
0063C2D2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063C2D5  89 8E A7 03 00 00         MOV dword ptr [ESI + 0x3a7],ECX
0063C2DB  89 86 9F 03 00 00         MOV dword ptr [ESI + 0x39f],EAX
0063C2E1  8B C7                     MOV EAX,EDI
0063C2E3  89 96 AB 03 00 00         MOV dword ptr [ESI + 0x3ab],EDX
0063C2E9  89 8E 6A 02 00 00         MOV dword ptr [ESI + 0x26a],ECX
0063C2EF  89 96 6E 02 00 00         MOV dword ptr [ESI + 0x26e],EDX
0063C2F5  5F                        POP EDI
0063C2F6  5E                        POP ESI
0063C2F7  8B E5                     MOV ESP,EBP
0063C2F9  5D                        POP EBP
0063C2FA  C2 04 00                  RET 0x4
LAB_0063c2fd:
0063C2FD  8B CE                     MOV ECX,ESI
0063C2FF  E8 04 95 DC FF            CALL 0x00405808
LAB_0063c304:
0063C304  8B C7                     MOV EAX,EDI
0063C306  5F                        POP EDI
0063C307  5E                        POP ESI
0063C308  8B E5                     MOV ESP,EBP
0063C30A  5D                        POP EBP
0063C30B  C2 04 00                  RET 0x4
