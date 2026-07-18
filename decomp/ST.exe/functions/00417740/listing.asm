FUN_00417740:
00417740  55                        PUSH EBP
00417741  8B EC                     MOV EBP,ESP
00417743  53                        PUSH EBX
00417744  56                        PUSH ESI
00417745  0F BF B1 86 00 00 00      MOVSX ESI,word ptr [ECX + 0x86]
0041774C  57                        PUSH EDI
0041774D  0F BF 7D 08               MOVSX EDI,word ptr [EBP + 0x8]
00417751  8B C7                     MOV EAX,EDI
00417753  99                        CDQ
00417754  F7 FE                     IDIV ESI
00417756  0F BF C0                  MOVSX EAX,AX
00417759  0F AF C6                  IMUL EAX,ESI
0041775C  3B C7                     CMP EAX,EDI
0041775E  0F 85 85 00 00 00         JNZ 0x004177e9
00417764  0F BF 5D 0C               MOVSX EBX,word ptr [EBP + 0xc]
00417768  8B C3                     MOV EAX,EBX
0041776A  99                        CDQ
0041776B  F7 FE                     IDIV ESI
0041776D  0F BF D0                  MOVSX EDX,AX
00417770  0F AF D6                  IMUL EDX,ESI
00417773  3B D3                     CMP EDX,EBX
00417775  75 72                     JNZ 0x004177e9
00417777  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
0041777B  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0041777F  66 3B D0                  CMP DX,AX
00417782  66 89 91 82 00 00 00      MOV word ptr [ECX + 0x82],DX
00417789  66 89 81 84 00 00 00      MOV word ptr [ECX + 0x84],AX
00417790  7E 13                     JLE 0x004177a5
00417792  2B FB                     SUB EDI,EBX
00417794  8B C6                     MOV EAX,ESI
00417796  81 FF B4 00 00 00         CMP EDI,0xb4
0041779C  99                        CDQ
0041779D  7C 19                     JL 0x004177b8
0041779F  33 C2                     XOR EAX,EDX
004177A1  2B C2                     SUB EAX,EDX
004177A3  EB 19                     JMP 0x004177be
LAB_004177a5:
004177A5  2B DF                     SUB EBX,EDI
004177A7  8B C6                     MOV EAX,ESI
004177A9  81 FB B4 00 00 00         CMP EBX,0xb4
004177AF  99                        CDQ
004177B0  7D 06                     JGE 0x004177b8
004177B2  33 C2                     XOR EAX,EDX
004177B4  2B C2                     SUB EAX,EDX
004177B6  EB 06                     JMP 0x004177be
LAB_004177b8:
004177B8  33 C2                     XOR EAX,EDX
004177BA  2B C2                     SUB EAX,EDX
004177BC  F7 D8                     NEG EAX
LAB_004177be:
004177BE  66 89 81 86 00 00 00      MOV word ptr [ECX + 0x86],AX
004177C5  B8 01 00 00 00            MOV EAX,0x1
004177CA  5F                        POP EDI
004177CB  89 81 88 00 00 00         MOV dword ptr [ECX + 0x88],EAX
004177D1  89 81 E8 00 00 00         MOV dword ptr [ECX + 0xe8],EAX
004177D7  5E                        POP ESI
004177D8  C7 81 F0 00 00 00 00 00 00 00  MOV dword ptr [ECX + 0xf0],0x0
004177E2  33 C0                     XOR EAX,EAX
004177E4  5B                        POP EBX
004177E5  5D                        POP EBP
004177E6  C2 08 00                  RET 0x8
LAB_004177e9:
004177E9  5F                        POP EDI
004177EA  5E                        POP ESI
004177EB  83 C8 FF                  OR EAX,0xffffffff
004177EE  5B                        POP EBX
004177EF  5D                        POP EBP
004177F0  C2 08 00                  RET 0x8
