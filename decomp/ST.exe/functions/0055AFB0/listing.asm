FUN_0055afb0:
0055AFB0  55                        PUSH EBP
0055AFB1  8B EC                     MOV EBP,ESP
0055AFB3  83 EC 0C                  SUB ESP,0xc
0055AFB6  8B D1                     MOV EDX,ECX
0055AFB8  53                        PUSH EBX
0055AFB9  56                        PUSH ESI
0055AFBA  57                        PUSH EDI
0055AFBB  8B 82 14 01 00 00         MOV EAX,dword ptr [EDX + 0x114]
0055AFC1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0055AFC4  85 C0                     TEST EAX,EAX
0055AFC6  0F 84 64 01 00 00         JZ 0x0055b130
0055AFCC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055AFCF  83 F9 08                  CMP ECX,0x8
0055AFD2  0F 83 58 01 00 00         JNC 0x0055b130
0055AFD8  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0055AFDD  85 C0                     TEST EAX,EAX
0055AFDF  74 11                     JZ 0x0055aff2
0055AFE1  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0055AFE4  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0055AFEC  0F 83 3E 01 00 00         JNC 0x0055b130
LAB_0055aff2:
0055AFF2  33 C0                     XOR EAX,EAX
0055AFF4  BF E9 87 80 00            MOV EDI,0x8087e9
0055AFF9  83 C2 74                  ADD EDX,0x74
0055AFFC  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055AFFF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0055b002:
0055B002  3B C1                     CMP EAX,ECX
0055B004  0F 84 0A 01 00 00         JZ 0x0055b114
0055B00A  80 3F FF                  CMP byte ptr [EDI],0xff
0055B00D  0F 84 01 01 00 00         JZ 0x0055b114
0055B013  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0055B019  84 D2                     TEST DL,DL
0055B01B  74 30                     JZ 0x0055b04d
0055B01D  8B D0                     MOV EDX,EAX
0055B01F  33 DB                     XOR EBX,EBX
0055B021  81 E2 FF 00 00 00         AND EDX,0xff
0055B027  8D 34 D2                  LEA ESI,[EDX + EDX*0x8]
0055B02A  8B D1                     MOV EDX,ECX
0055B02C  81 E2 FF 00 00 00         AND EDX,0xff
0055B032  8A 8C F6 EA 87 80 00      MOV CL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
0055B039  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0055B03C  3A 8C D2 EA 87 80 00      CMP CL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0055B043  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055B046  0F 95 C3                  SETNZ BL
0055B049  8B D3                     MOV EDX,EBX
0055B04B  EB 79                     JMP 0x0055b0c6
LAB_0055b04d:
0055B04D  3A C8                     CMP CL,AL
0055B04F  74 6A                     JZ 0x0055b0bb
0055B051  8B D1                     MOV EDX,ECX
0055B053  8B F0                     MOV ESI,EAX
0055B055  81 E2 FF 00 00 00         AND EDX,0xff
0055B05B  81 E6 FF 00 00 00         AND ESI,0xff
0055B061  8A 9C D6 4F 8A 80 00      MOV BL,byte ptr [ESI + EDX*0x8 + 0x808a4f]
0055B068  84 DB                     TEST BL,BL
0055B06A  75 10                     JNZ 0x0055b07c
0055B06C  38 9C F2 4F 8A 80 00      CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],BL
0055B073  75 07                     JNZ 0x0055b07c
0055B075  BA FE FF FF FF            MOV EDX,0xfffffffe
0055B07A  EB 41                     JMP 0x0055b0bd
LAB_0055b07c:
0055B07C  80 FB 01                  CMP BL,0x1
0055B07F  75 0F                     JNZ 0x0055b090
0055B081  80 BC F2 4F 8A 80 00 00   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x0
0055B089  75 05                     JNZ 0x0055b090
0055B08B  83 CA FF                  OR EDX,0xffffffff
0055B08E  EB 2D                     JMP 0x0055b0bd
LAB_0055b090:
0055B090  84 DB                     TEST BL,BL
0055B092  75 11                     JNZ 0x0055b0a5
0055B094  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
0055B09C  75 07                     JNZ 0x0055b0a5
0055B09E  BA 01 00 00 00            MOV EDX,0x1
0055B0A3  EB 18                     JMP 0x0055b0bd
LAB_0055b0a5:
0055B0A5  80 FB 01                  CMP BL,0x1
0055B0A8  75 11                     JNZ 0x0055b0bb
0055B0AA  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
0055B0B2  75 07                     JNZ 0x0055b0bb
0055B0B4  BA 02 00 00 00            MOV EDX,0x2
0055B0B9  EB 02                     JMP 0x0055b0bd
LAB_0055b0bb:
0055B0BB  33 D2                     XOR EDX,EDX
LAB_0055b0bd:
0055B0BD  33 DB                     XOR EBX,EBX
0055B0BF  85 D2                     TEST EDX,EDX
0055B0C1  0F 9C C3                  SETL BL
0055B0C4  8B D3                     MOV EDX,EBX
LAB_0055b0c6:
0055B0C6  85 D2                     TEST EDX,EDX
0055B0C8  74 4A                     JZ 0x0055b114
0055B0CA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055B0CD  8B 32                     MOV ESI,dword ptr [EDX]
0055B0CF  85 F6                     TEST ESI,ESI
0055B0D1  74 41                     JZ 0x0055b114
0055B0D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055B0D6  85 D2                     TEST EDX,EDX
0055B0D8  7C 3A                     JL 0x0055b114
0055B0DA  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0055B0DD  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055B0E0  8B 52 20                  MOV EDX,dword ptr [EDX + 0x20]
0055B0E3  3B DA                     CMP EBX,EDX
0055B0E5  7D 2D                     JGE 0x0055b114
0055B0E7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055B0EA  85 DB                     TEST EBX,EBX
0055B0EC  7C 26                     JL 0x0055b114
0055B0EE  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0055B0F1  3B 5F 24                  CMP EBX,dword ptr [EDI + 0x24]
0055B0F4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0055B0F7  7D 1B                     JGE 0x0055b114
0055B0F9  81 FF 71 8A 80 00         CMP EDI,0x808a71
0055B0FF  7D 13                     JGE 0x0055b114
0055B101  0F AF D3                  IMUL EDX,EBX
0055B104  03 D6                     ADD EDX,ESI
0055B106  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055B109  33 DB                     XOR EBX,EBX
0055B10B  8A 1C 32                  MOV BL,byte ptr [EDX + ESI*0x1]
0055B10E  8B D3                     MOV EDX,EBX
0055B110  85 D2                     TEST EDX,EDX
0055B112  7F 27                     JG 0x0055b13b
LAB_0055b114:
0055B114  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0055B117  83 C7 51                  ADD EDI,0x51
0055B11A  40                        INC EAX
0055B11B  83 C3 04                  ADD EBX,0x4
0055B11E  81 FF 71 8A 80 00         CMP EDI,0x808a71
0055B124  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0055B127  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055B12A  0F 8C D2 FE FF FF         JL 0x0055b002
LAB_0055b130:
0055B130  5F                        POP EDI
0055B131  5E                        POP ESI
0055B132  33 C0                     XOR EAX,EAX
0055B134  5B                        POP EBX
0055B135  8B E5                     MOV ESP,EBP
0055B137  5D                        POP EBP
0055B138  C2 10 00                  RET 0x10
LAB_0055b13b:
0055B13B  5F                        POP EDI
0055B13C  5E                        POP ESI
0055B13D  B8 01 00 00 00            MOV EAX,0x1
0055B142  5B                        POP EBX
0055B143  8B E5                     MOV ESP,EBP
0055B145  5D                        POP EBP
0055B146  C2 10 00                  RET 0x10
