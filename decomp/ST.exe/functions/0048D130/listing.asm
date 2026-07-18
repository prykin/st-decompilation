FUN_0048d130:
0048D130  55                        PUSH EBP
0048D131  8B EC                     MOV EBP,ESP
0048D133  53                        PUSH EBX
0048D134  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0048D137  56                        PUSH ESI
0048D138  83 FB FF                  CMP EBX,-0x1
0048D13B  57                        PUSH EDI
0048D13C  8B F1                     MOV ESI,ECX
0048D13E  0F 84 A6 00 00 00         JZ 0x0048d1ea
0048D144  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0048D148  66 85 C0                  TEST AX,AX
0048D14B  7C 60                     JL 0x0048d1ad
0048D14D  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0048D154  66 3B C7                  CMP AX,DI
0048D157  7D 54                     JGE 0x0048d1ad
0048D159  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0048D15D  66 85 C9                  TEST CX,CX
0048D160  7C 4B                     JL 0x0048d1ad
0048D162  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0048D169  7D 42                     JGE 0x0048d1ad
0048D16B  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
0048D16F  66 85 C0                  TEST AX,AX
0048D172  7C 39                     JL 0x0048d1ad
0048D174  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0048D17B  7D 30                     JGE 0x0048d1ad
0048D17D  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0048D184  0F BF C0                  MOVSX EAX,AX
0048D187  0F AF D0                  IMUL EDX,EAX
0048D18A  0F BF C7                  MOVSX EAX,DI
0048D18D  0F BF C9                  MOVSX ECX,CX
0048D190  0F AF C1                  IMUL EAX,ECX
0048D193  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048D199  03 D0                     ADD EDX,EAX
0048D19B  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
0048D19F  03 D0                     ADD EDX,EAX
0048D1A1  8B 04 D1                  MOV EAX,dword ptr [ECX + EDX*0x8]
0048D1A4  85 C0                     TEST EAX,EAX
0048D1A6  74 05                     JZ 0x0048d1ad
0048D1A8  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
0048D1AB  74 44                     JZ 0x0048d1f1
LAB_0048d1ad:
0048D1AD  68 24 BA 7A 00            PUSH 0x7aba24
0048D1B2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0048D1B7  6A 00                     PUSH 0x0
0048D1B9  6A 00                     PUSH 0x0
0048D1BB  68 CC 4B 00 00            PUSH 0x4bcc
0048D1C0  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048D1C5  E8 06 03 22 00            CALL 0x006ad4d0
0048D1CA  83 C4 18                  ADD ESP,0x18
0048D1CD  85 C0                     TEST EAX,EAX
0048D1CF  74 01                     JZ 0x0048d1d2
0048D1D1  CC                        INT3
LAB_0048d1d2:
0048D1D2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0048D1D8  68 CD 4B 00 00            PUSH 0x4bcd
0048D1DD  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048D1E2  52                        PUSH EDX
0048D1E3  6A 00                     PUSH 0x0
0048D1E5  E8 56 8C 21 00            CALL 0x006a5e40
LAB_0048d1ea:
0048D1EA  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
LAB_0048d1f1:
0048D1F1  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
0048D1F5  0F 85 D4 00 00 00         JNZ 0x0048d2cf
0048D1FB  39 9E A1 04 00 00         CMP dword ptr [ESI + 0x4a1],EBX
0048D201  0F 84 91 01 00 00         JZ 0x0048d398
0048D207  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
0048D20E  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
0048D215  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
0048D21C  66 85 C0                  TEST AX,AX
0048D21F  7C 64                     JL 0x0048d285
0048D221  66 3B C7                  CMP AX,DI
0048D224  7D 5F                     JGE 0x0048d285
0048D226  66 85 D2                  TEST DX,DX
0048D229  7C 5A                     JL 0x0048d285
0048D22B  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048D232  7D 51                     JGE 0x0048d285
0048D234  66 85 C9                  TEST CX,CX
0048D237  7C 4C                     JL 0x0048d285
0048D239  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0048D240  7D 43                     JGE 0x0048d285
0048D242  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0048D249  0F BF C9                  MOVSX ECX,CX
0048D24C  0F AF D9                  IMUL EBX,ECX
0048D24F  0F BF CF                  MOVSX ECX,DI
0048D252  0F BF D2                  MOVSX EDX,DX
0048D255  0F AF CA                  IMUL ECX,EDX
0048D258  0F BF C0                  MOVSX EAX,AX
0048D25B  03 D9                     ADD EBX,ECX
0048D25D  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048D263  03 D8                     ADD EBX,EAX
0048D265  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
0048D268  85 FF                     TEST EDI,EDI
0048D26A  74 16                     JZ 0x0048d282
0048D26C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0048D26F  8B CF                     MOV ECX,EDI
0048D271  52                        PUSH EDX
0048D272  E8 1A 84 F7 FF            CALL 0x00405691
0048D277  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0048D27A  8B CF                     MOV ECX,EDI
0048D27C  50                        PUSH EAX
0048D27D  E8 48 5A F7 FF            CALL 0x00402cca
LAB_0048d282:
0048D282  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_0048d285:
0048D285  83 FB FF                  CMP EBX,-0x1
0048D288  89 9E A1 04 00 00         MOV dword ptr [ESI + 0x4a1],EBX
0048D28E  C7 86 BD 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4bd],0x1
0048D298  0F 84 FA 00 00 00         JZ 0x0048d398
0048D29E  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0048D2A2  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
0048D2A6  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
0048D2AA  66 89 8E 9B 04 00 00      MOV word ptr [ESI + 0x49b],CX
0048D2B1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0048D2B4  66 89 96 9D 04 00 00      MOV word ptr [ESI + 0x49d],DX
0048D2BB  66 89 86 9F 04 00 00      MOV word ptr [ESI + 0x49f],AX
0048D2C2  89 8E B5 04 00 00         MOV dword ptr [ESI + 0x4b5],ECX
0048D2C8  5F                        POP EDI
0048D2C9  5E                        POP ESI
0048D2CA  5B                        POP EBX
0048D2CB  5D                        POP EBP
0048D2CC  C2 18 00                  RET 0x18
LAB_0048d2cf:
0048D2CF  39 9E AB 04 00 00         CMP dword ptr [ESI + 0x4ab],EBX
0048D2D5  0F 84 BD 00 00 00         JZ 0x0048d398
0048D2DB  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
0048D2E2  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
0048D2E9  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
0048D2F0  66 85 C0                  TEST AX,AX
0048D2F3  7C 64                     JL 0x0048d359
0048D2F5  66 3B C7                  CMP AX,DI
0048D2F8  7D 5F                     JGE 0x0048d359
0048D2FA  66 85 D2                  TEST DX,DX
0048D2FD  7C 5A                     JL 0x0048d359
0048D2FF  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048D306  7D 51                     JGE 0x0048d359
0048D308  66 85 C9                  TEST CX,CX
0048D30B  7C 4C                     JL 0x0048d359
0048D30D  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0048D314  7D 43                     JGE 0x0048d359
0048D316  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0048D31D  0F BF C9                  MOVSX ECX,CX
0048D320  0F AF D9                  IMUL EBX,ECX
0048D323  0F BF CF                  MOVSX ECX,DI
0048D326  0F BF D2                  MOVSX EDX,DX
0048D329  0F AF CA                  IMUL ECX,EDX
0048D32C  0F BF C0                  MOVSX EAX,AX
0048D32F  03 D9                     ADD EBX,ECX
0048D331  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048D337  03 D8                     ADD EBX,EAX
0048D339  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
0048D33C  85 FF                     TEST EDI,EDI
0048D33E  74 16                     JZ 0x0048d356
0048D340  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0048D343  8B CF                     MOV ECX,EDI
0048D345  52                        PUSH EDX
0048D346  E8 46 83 F7 FF            CALL 0x00405691
0048D34B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0048D34E  8B CF                     MOV ECX,EDI
0048D350  50                        PUSH EAX
0048D351  E8 74 59 F7 FF            CALL 0x00402cca
LAB_0048d356:
0048D356  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_0048d359:
0048D359  83 FB FF                  CMP EBX,-0x1
0048D35C  89 9E AB 04 00 00         MOV dword ptr [ESI + 0x4ab],EBX
0048D362  C7 86 C1 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4c1],0x1
0048D36C  74 2A                     JZ 0x0048d398
0048D36E  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0048D372  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
0048D376  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
0048D37A  66 89 8E A5 04 00 00      MOV word ptr [ESI + 0x4a5],CX
0048D381  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0048D384  66 89 96 A7 04 00 00      MOV word ptr [ESI + 0x4a7],DX
0048D38B  66 89 86 A9 04 00 00      MOV word ptr [ESI + 0x4a9],AX
0048D392  89 8E B9 04 00 00         MOV dword ptr [ESI + 0x4b9],ECX
LAB_0048d398:
0048D398  5F                        POP EDI
0048D399  5E                        POP ESI
0048D39A  5B                        POP EBX
0048D39B  5D                        POP EBP
0048D39C  C2 18 00                  RET 0x18
