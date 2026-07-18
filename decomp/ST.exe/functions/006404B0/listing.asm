FUN_006404b0:
006404B0  55                        PUSH EBP
006404B1  8B EC                     MOV EBP,ESP
006404B3  83 EC 0C                  SUB ESP,0xc
006404B6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006404B9  33 C0                     XOR EAX,EAX
006404BB  A0 4D 87 80 00            MOV AL,[0x0080874d]
006404C0  56                        PUSH ESI
006404C1  33 F6                     XOR ESI,ESI
006404C3  3B C2                     CMP EAX,EDX
006404C5  0F 85 DB 00 00 00         JNZ 0x006405a6
006404CB  33 D2                     XOR EDX,EDX
006404CD  33 C0                     XOR EAX,EAX
006404CF  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006404D2  A0 4E 87 80 00            MOV AL,[0x0080874e]
006404D7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006404DA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006404DD  8B 91 45 02 00 00         MOV EDX,dword ptr [ECX + 0x245]
006404E3  83 FA 01                  CMP EDX,0x1
006404E6  76 23                     JBE 0x0064050b
006404E8  83 FA 02                  CMP EDX,0x2
006404EB  75 3E                     JNZ 0x0064052b
006404ED  48                        DEC EAX
006404EE  74 14                     JZ 0x00640504
006404F0  48                        DEC EAX
006404F1  74 0A                     JZ 0x006404fd
006404F3  48                        DEC EAX
006404F4  75 35                     JNZ 0x0064052b
006404F6  BE A6 00 00 00            MOV ESI,0xa6
006404FB  EB 2E                     JMP 0x0064052b
LAB_006404fd:
006404FD  BE A5 00 00 00            MOV ESI,0xa5
00640502  EB 27                     JMP 0x0064052b
LAB_00640504:
00640504  BE A4 00 00 00            MOV ESI,0xa4
00640509  EB 20                     JMP 0x0064052b
LAB_0064050b:
0064050B  48                        DEC EAX
0064050C  74 18                     JZ 0x00640526
0064050E  48                        DEC EAX
0064050F  74 0E                     JZ 0x0064051f
00640511  48                        DEC EAX
00640512  74 04                     JZ 0x00640518
00640514  33 F6                     XOR ESI,ESI
00640516  EB 13                     JMP 0x0064052b
LAB_00640518:
00640518  BE A3 00 00 00            MOV ESI,0xa3
0064051D  EB 0C                     JMP 0x0064052b
LAB_0064051f:
0064051F  BE A2 00 00 00            MOV ESI,0xa2
00640524  EB 05                     JMP 0x0064052b
LAB_00640526:
00640526  BE A1 00 00 00            MOV ESI,0xa1
LAB_0064052b:
0064052B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0064052E  B8 79 19 8C 02            MOV EAX,0x28c1979
00640533  85 D2                     TEST EDX,EDX
00640535  7C 10                     JL 0x00640547
00640537  F7 EA                     IMUL EDX
00640539  D1 FA                     SAR EDX,0x1
0064053B  8B C2                     MOV EAX,EDX
0064053D  C1 E8 1F                  SHR EAX,0x1f
00640540  03 D0                     ADD EDX,EAX
00640542  0F BF D2                  MOVSX EDX,DX
00640545  EB 0F                     JMP 0x00640556
LAB_00640547:
00640547  F7 EA                     IMUL EDX
00640549  D1 FA                     SAR EDX,0x1
0064054B  8B C2                     MOV EAX,EDX
0064054D  C1 E8 1F                  SHR EAX,0x1f
00640550  03 D0                     ADD EDX,EAX
00640552  0F BF D2                  MOVSX EDX,DX
00640555  4A                        DEC EDX
LAB_00640556:
00640556  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00640559  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0064055C  85 D2                     TEST EDX,EDX
0064055E  B8 79 19 8C 02            MOV EAX,0x28c1979
00640563  7C 10                     JL 0x00640575
00640565  F7 EA                     IMUL EDX
00640567  D1 FA                     SAR EDX,0x1
00640569  8B C2                     MOV EAX,EDX
0064056B  C1 E8 1F                  SHR EAX,0x1f
0064056E  03 D0                     ADD EDX,EAX
00640570  0F BF D2                  MOVSX EDX,DX
00640573  EB 0F                     JMP 0x00640584
LAB_00640575:
00640575  F7 EA                     IMUL EDX
00640577  D1 FA                     SAR EDX,0x1
00640579  8B C2                     MOV EAX,EDX
0064057B  C1 E8 1F                  SHR EAX,0x1f
0064057E  03 D0                     ADD EDX,EAX
00640580  0F BF D2                  MOVSX EDX,DX
00640583  4A                        DEC EDX
LAB_00640584:
00640584  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00640587  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0064058A  85 F6                     TEST ESI,ESI
0064058C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064058F  74 15                     JZ 0x006405a6
00640591  8D 4D F4                  LEA ECX,[EBP + -0xc]
00640594  6A 00                     PUSH 0x0
00640596  51                        PUSH ECX
00640597  56                        PUSH ESI
00640598  6A 00                     PUSH 0x0
0064059A  6A 06                     PUSH 0x6
0064059C  B9 58 76 80 00            MOV ECX,0x807658
006405A1  E8 32 46 DC FF            CALL 0x00404bd8
LAB_006405a6:
006405A6  5E                        POP ESI
006405A7  8B E5                     MOV ESP,EBP
006405A9  5D                        POP EBP
006405AA  C2 0C 00                  RET 0xc
