FUN_006193e0:
006193E0  8B 51 61                  MOV EDX,dword ptr [ECX + 0x61]
006193E3  53                        PUSH EBX
006193E4  56                        PUSH ESI
006193E5  8B 71 65                  MOV ESI,dword ptr [ECX + 0x65]
006193E8  57                        PUSH EDI
006193E9  8B 79 69                  MOV EDI,dword ptr [ECX + 0x69]
006193EC  85 D2                     TEST EDX,EDX
006193EE  89 91 9F 00 00 00         MOV dword ptr [ECX + 0x9f],EDX
006193F4  89 B1 A3 00 00 00         MOV dword ptr [ECX + 0xa3],ESI
006193FA  89 B9 A7 00 00 00         MOV dword ptr [ECX + 0xa7],EDI
00619400  89 91 DB 00 00 00         MOV dword ptr [ECX + 0xdb],EDX
00619406  89 B1 DF 00 00 00         MOV dword ptr [ECX + 0xdf],ESI
0061940C  89 B9 E3 00 00 00         MOV dword ptr [ECX + 0xe3],EDI
00619412  B8 79 19 8C 02            MOV EAX,0x28c1979
00619417  7C 10                     JL 0x00619429
00619419  F7 EA                     IMUL EDX
0061941B  D1 FA                     SAR EDX,0x1
0061941D  8B C2                     MOV EAX,EDX
0061941F  C1 E8 1F                  SHR EAX,0x1f
00619422  03 D0                     ADD EDX,EAX
00619424  0F BF DA                  MOVSX EBX,DX
00619427  EB 0F                     JMP 0x00619438
LAB_00619429:
00619429  F7 EA                     IMUL EDX
0061942B  D1 FA                     SAR EDX,0x1
0061942D  8B C2                     MOV EAX,EDX
0061942F  C1 E8 1F                  SHR EAX,0x1f
00619432  03 D0                     ADD EDX,EAX
00619434  0F BF DA                  MOVSX EBX,DX
00619437  4B                        DEC EBX
LAB_00619438:
00619438  85 F6                     TEST ESI,ESI
0061943A  66 89 99 C9 00 00 00      MOV word ptr [ECX + 0xc9],BX
00619441  B8 79 19 8C 02            MOV EAX,0x28c1979
00619446  7C 10                     JL 0x00619458
00619448  F7 EE                     IMUL ESI
0061944A  D1 FA                     SAR EDX,0x1
0061944C  8B C2                     MOV EAX,EDX
0061944E  C1 E8 1F                  SHR EAX,0x1f
00619451  03 D0                     ADD EDX,EAX
00619453  0F BF F2                  MOVSX ESI,DX
00619456  EB 0F                     JMP 0x00619467
LAB_00619458:
00619458  F7 EE                     IMUL ESI
0061945A  D1 FA                     SAR EDX,0x1
0061945C  8B C2                     MOV EAX,EDX
0061945E  C1 E8 1F                  SHR EAX,0x1f
00619461  03 D0                     ADD EDX,EAX
00619463  0F BF F2                  MOVSX ESI,DX
00619466  4E                        DEC ESI
LAB_00619467:
00619467  85 FF                     TEST EDI,EDI
00619469  66 89 B1 CB 00 00 00      MOV word ptr [ECX + 0xcb],SI
00619470  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00619475  7C 11                     JL 0x00619488
00619477  F7 EF                     IMUL EDI
00619479  C1 FA 06                  SAR EDX,0x6
0061947C  8B C2                     MOV EAX,EDX
0061947E  C1 E8 1F                  SHR EAX,0x1f
00619481  03 D0                     ADD EDX,EAX
00619483  0F BF C2                  MOVSX EAX,DX
00619486  EB 10                     JMP 0x00619498
LAB_00619488:
00619488  F7 EF                     IMUL EDI
0061948A  C1 FA 06                  SAR EDX,0x6
0061948D  8B C2                     MOV EAX,EDX
0061948F  C1 E8 1F                  SHR EAX,0x1f
00619492  03 D0                     ADD EDX,EAX
00619494  0F BF C2                  MOVSX EAX,DX
00619497  48                        DEC EAX
LAB_00619498:
00619498  66 85 DB                  TEST BX,BX
0061949B  66 89 81 CD 00 00 00      MOV word ptr [ECX + 0xcd],AX
006194A2  7C 46                     JL 0x006194ea
006194A4  66 85 F6                  TEST SI,SI
006194A7  7C 41                     JL 0x006194ea
006194A9  66 85 C0                  TEST AX,AX
006194AC  7C 3C                     JL 0x006194ea
006194AE  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
006194B5  7D 33                     JGE 0x006194ea
006194B7  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
006194BE  7D 2A                     JGE 0x006194ea
006194C0  66 3D 05 00               CMP AX,0x5
006194C4  7D 24                     JGE 0x006194ea
006194C6  8B 51 6D                  MOV EDX,dword ptr [ECX + 0x6d]
006194C9  8B 41 71                  MOV EAX,dword ptr [ECX + 0x71]
006194CC  89 91 E7 00 00 00         MOV dword ptr [ECX + 0xe7],EDX
006194D2  8B 51 75                  MOV EDX,dword ptr [ECX + 0x75]
006194D5  5F                        POP EDI
006194D6  89 81 EB 00 00 00         MOV dword ptr [ECX + 0xeb],EAX
006194DC  5E                        POP ESI
006194DD  89 91 EF 00 00 00         MOV dword ptr [ECX + 0xef],EDX
006194E3  B8 01 00 00 00            MOV EAX,0x1
006194E8  5B                        POP EBX
006194E9  C3                        RET
LAB_006194ea:
006194EA  5F                        POP EDI
006194EB  5E                        POP ESI
006194EC  33 C0                     XOR EAX,EAX
006194EE  5B                        POP EBX
006194EF  C3                        RET
