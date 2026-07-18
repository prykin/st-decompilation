FUN_004836c0:
004836C0  8B 81 FC 07 00 00         MOV EAX,dword ptr [ECX + 0x7fc]
004836C6  66 8B 91 04 08 00 00      MOV DX,word ptr [ECX + 0x804]
004836CD  53                        PUSH EBX
004836CE  56                        PUSH ESI
004836CF  66 8B B1 02 08 00 00      MOV SI,word ptr [ECX + 0x802]
004836D6  83 F8 03                  CMP EAX,0x3
004836D9  66 8B 81 00 08 00 00      MOV AX,word ptr [ECX + 0x800]
004836E0  57                        PUSH EDI
004836E1  75 6E                     JNZ 0x00483751
004836E3  66 85 C0                  TEST AX,AX
004836E6  0F 8C E3 00 00 00         JL 0x004837cf
004836EC  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004836F3  66 3B C7                  CMP AX,DI
004836F6  0F 8D D3 00 00 00         JGE 0x004837cf
004836FC  66 85 F6                  TEST SI,SI
004836FF  0F 8C CA 00 00 00         JL 0x004837cf
00483705  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
0048370C  0F 8D BD 00 00 00         JGE 0x004837cf
00483712  66 85 D2                  TEST DX,DX
00483715  0F 8C B4 00 00 00         JL 0x004837cf
0048371B  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00483722  0F 8D A7 00 00 00         JGE 0x004837cf
00483728  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0048372F  0F BF D2                  MOVSX EDX,DX
00483732  0F AF DA                  IMUL EBX,EDX
00483735  0F BF D7                  MOVSX EDX,DI
00483738  0F BF F6                  MOVSX ESI,SI
0048373B  0F AF D6                  IMUL EDX,ESI
0048373E  0F BF C0                  MOVSX EAX,AX
00483741  03 DA                     ADD EBX,EDX
00483743  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00483749  03 D8                     ADD EBX,EAX
0048374B  8B 44 DA 04               MOV EAX,dword ptr [EDX + EBX*0x8 + 0x4]
0048374F  EB 53                     JMP 0x004837a4
LAB_00483751:
00483751  66 85 C0                  TEST AX,AX
00483754  7C 79                     JL 0x004837cf
00483756  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0048375D  66 3B C7                  CMP AX,DI
00483760  7D 6D                     JGE 0x004837cf
00483762  66 85 F6                  TEST SI,SI
00483765  7C 68                     JL 0x004837cf
00483767  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
0048376E  7D 5F                     JGE 0x004837cf
00483770  66 85 D2                  TEST DX,DX
00483773  7C 5A                     JL 0x004837cf
00483775  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0048377C  7D 51                     JGE 0x004837cf
0048377E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00483785  0F BF D2                  MOVSX EDX,DX
00483788  0F AF DA                  IMUL EBX,EDX
0048378B  0F BF D7                  MOVSX EDX,DI
0048378E  0F BF F6                  MOVSX ESI,SI
00483791  0F AF D6                  IMUL EDX,ESI
00483794  0F BF C0                  MOVSX EAX,AX
00483797  03 DA                     ADD EBX,EDX
00483799  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0048379F  03 D8                     ADD EBX,EAX
004837A1  8B 04 DA                  MOV EAX,dword ptr [EDX + EBX*0x8]
LAB_004837a4:
004837A4  85 C0                     TEST EAX,EAX
004837A6  74 27                     JZ 0x004837cf
004837A8  66 8B 70 45               MOV SI,word ptr [EAX + 0x45]
004837AC  8B 11                     MOV EDX,dword ptr [ECX]
004837AE  56                        PUSH ESI
004837AF  66 8B 70 43               MOV SI,word ptr [EAX + 0x43]
004837B3  66 8B 40 41               MOV AX,word ptr [EAX + 0x41]
004837B7  56                        PUSH ESI
004837B8  50                        PUSH EAX
004837B9  66 8B 41 45               MOV AX,word ptr [ECX + 0x45]
004837BD  50                        PUSH EAX
004837BE  66 8B 41 43               MOV AX,word ptr [ECX + 0x43]
004837C2  50                        PUSH EAX
004837C3  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
004837C7  50                        PUSH EAX
004837C8  FF 52 10                  CALL dword ptr [EDX + 0x10]
004837CB  5F                        POP EDI
004837CC  5E                        POP ESI
004837CD  5B                        POP EBX
004837CE  C3                        RET
LAB_004837cf:
004837CF  5F                        POP EDI
004837D0  5E                        POP ESI
004837D1  66 33 C0                  XOR AX,AX
004837D4  5B                        POP EBX
004837D5  C3                        RET
