FUN_0055b1c0:
0055B1C0  55                        PUSH EBP
0055B1C1  8B EC                     MOV EBP,ESP
0055B1C3  83 EC 0C                  SUB ESP,0xc
0055B1C6  8B D1                     MOV EDX,ECX
0055B1C8  53                        PUSH EBX
0055B1C9  56                        PUSH ESI
0055B1CA  57                        PUSH EDI
0055B1CB  8B 82 14 01 00 00         MOV EAX,dword ptr [EDX + 0x114]
0055B1D1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0055B1D4  85 C0                     TEST EAX,EAX
0055B1D6  0F 84 67 01 00 00         JZ 0x0055b343
0055B1DC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055B1DF  83 F9 08                  CMP ECX,0x8
0055B1E2  0F 83 5B 01 00 00         JNC 0x0055b343
0055B1E8  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0055B1ED  85 C0                     TEST EAX,EAX
0055B1EF  74 11                     JZ 0x0055b202
0055B1F1  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0055B1F4  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0055B1FC  0F 83 41 01 00 00         JNC 0x0055b343
LAB_0055b202:
0055B202  33 C0                     XOR EAX,EAX
0055B204  BF E9 87 80 00            MOV EDI,0x8087e9
0055B209  81 C2 94 00 00 00         ADD EDX,0x94
0055B20F  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055B212  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0055b215:
0055B215  3B C1                     CMP EAX,ECX
0055B217  0F 84 0A 01 00 00         JZ 0x0055b327
0055B21D  80 3F FF                  CMP byte ptr [EDI],0xff
0055B220  0F 84 01 01 00 00         JZ 0x0055b327
0055B226  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0055B22C  84 D2                     TEST DL,DL
0055B22E  74 30                     JZ 0x0055b260
0055B230  8B D0                     MOV EDX,EAX
0055B232  33 DB                     XOR EBX,EBX
0055B234  81 E2 FF 00 00 00         AND EDX,0xff
0055B23A  8D 34 D2                  LEA ESI,[EDX + EDX*0x8]
0055B23D  8B D1                     MOV EDX,ECX
0055B23F  81 E2 FF 00 00 00         AND EDX,0xff
0055B245  8A 8C F6 EA 87 80 00      MOV CL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
0055B24C  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0055B24F  3A 8C D2 EA 87 80 00      CMP CL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0055B256  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055B259  0F 95 C3                  SETNZ BL
0055B25C  8B D3                     MOV EDX,EBX
0055B25E  EB 79                     JMP 0x0055b2d9
LAB_0055b260:
0055B260  3A C8                     CMP CL,AL
0055B262  74 6A                     JZ 0x0055b2ce
0055B264  8B D1                     MOV EDX,ECX
0055B266  8B F0                     MOV ESI,EAX
0055B268  81 E2 FF 00 00 00         AND EDX,0xff
0055B26E  81 E6 FF 00 00 00         AND ESI,0xff
0055B274  8A 9C D6 4F 8A 80 00      MOV BL,byte ptr [ESI + EDX*0x8 + 0x808a4f]
0055B27B  84 DB                     TEST BL,BL
0055B27D  75 10                     JNZ 0x0055b28f
0055B27F  38 9C F2 4F 8A 80 00      CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],BL
0055B286  75 07                     JNZ 0x0055b28f
0055B288  BA FE FF FF FF            MOV EDX,0xfffffffe
0055B28D  EB 41                     JMP 0x0055b2d0
LAB_0055b28f:
0055B28F  80 FB 01                  CMP BL,0x1
0055B292  75 0F                     JNZ 0x0055b2a3
0055B294  80 BC F2 4F 8A 80 00 00   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x0
0055B29C  75 05                     JNZ 0x0055b2a3
0055B29E  83 CA FF                  OR EDX,0xffffffff
0055B2A1  EB 2D                     JMP 0x0055b2d0
LAB_0055b2a3:
0055B2A3  84 DB                     TEST BL,BL
0055B2A5  75 11                     JNZ 0x0055b2b8
0055B2A7  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
0055B2AF  75 07                     JNZ 0x0055b2b8
0055B2B1  BA 01 00 00 00            MOV EDX,0x1
0055B2B6  EB 18                     JMP 0x0055b2d0
LAB_0055b2b8:
0055B2B8  80 FB 01                  CMP BL,0x1
0055B2BB  75 11                     JNZ 0x0055b2ce
0055B2BD  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
0055B2C5  75 07                     JNZ 0x0055b2ce
0055B2C7  BA 02 00 00 00            MOV EDX,0x2
0055B2CC  EB 02                     JMP 0x0055b2d0
LAB_0055b2ce:
0055B2CE  33 D2                     XOR EDX,EDX
LAB_0055b2d0:
0055B2D0  33 DB                     XOR EBX,EBX
0055B2D2  85 D2                     TEST EDX,EDX
0055B2D4  0F 9C C3                  SETL BL
0055B2D7  8B D3                     MOV EDX,EBX
LAB_0055b2d9:
0055B2D9  85 D2                     TEST EDX,EDX
0055B2DB  74 4A                     JZ 0x0055b327
0055B2DD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055B2E0  8B 32                     MOV ESI,dword ptr [EDX]
0055B2E2  85 F6                     TEST ESI,ESI
0055B2E4  74 41                     JZ 0x0055b327
0055B2E6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055B2E9  85 D2                     TEST EDX,EDX
0055B2EB  7C 3A                     JL 0x0055b327
0055B2ED  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0055B2F0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055B2F3  8B 52 20                  MOV EDX,dword ptr [EDX + 0x20]
0055B2F6  3B DA                     CMP EBX,EDX
0055B2F8  7D 2D                     JGE 0x0055b327
0055B2FA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055B2FD  85 DB                     TEST EBX,EBX
0055B2FF  7C 26                     JL 0x0055b327
0055B301  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0055B304  3B 5F 24                  CMP EBX,dword ptr [EDI + 0x24]
0055B307  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0055B30A  7D 1B                     JGE 0x0055b327
0055B30C  81 FF 71 8A 80 00         CMP EDI,0x808a71
0055B312  7D 13                     JGE 0x0055b327
0055B314  0F AF D3                  IMUL EDX,EBX
0055B317  03 D6                     ADD EDX,ESI
0055B319  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055B31C  33 DB                     XOR EBX,EBX
0055B31E  8A 1C 32                  MOV BL,byte ptr [EDX + ESI*0x1]
0055B321  8B D3                     MOV EDX,EBX
0055B323  85 D2                     TEST EDX,EDX
0055B325  7F 27                     JG 0x0055b34e
LAB_0055b327:
0055B327  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0055B32A  83 C7 51                  ADD EDI,0x51
0055B32D  40                        INC EAX
0055B32E  83 C3 04                  ADD EBX,0x4
0055B331  81 FF 71 8A 80 00         CMP EDI,0x808a71
0055B337  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0055B33A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055B33D  0F 8C D2 FE FF FF         JL 0x0055b215
LAB_0055b343:
0055B343  5F                        POP EDI
0055B344  5E                        POP ESI
0055B345  33 C0                     XOR EAX,EAX
0055B347  5B                        POP EBX
0055B348  8B E5                     MOV ESP,EBP
0055B34A  5D                        POP EBP
0055B34B  C2 10 00                  RET 0x10
LAB_0055b34e:
0055B34E  5F                        POP EDI
0055B34F  5E                        POP ESI
0055B350  B8 01 00 00 00            MOV EAX,0x1
0055B355  5B                        POP EBX
0055B356  8B E5                     MOV ESP,EBP
0055B358  5D                        POP EBP
0055B359  C2 10 00                  RET 0x10
