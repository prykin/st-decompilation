FUN_006366d0:
006366D0  57                        PUSH EDI
006366D1  8B F9                     MOV EDI,ECX
006366D3  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
006366D6  85 C0                     TEST EAX,EAX
006366D8  74 4C                     JZ 0x00636726
006366DA  53                        PUSH EBX
006366DB  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
006366DE  56                        PUSH ESI
006366DF  33 F6                     XOR ESI,ESI
006366E1  85 DB                     TEST EBX,EBX
006366E3  7E 2F                     JLE 0x00636714
LAB_006366e5:
006366E5  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
006366E8  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
006366EB  73 22                     JNC 0x0063670f
006366ED  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006366F0  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006366F3  0F AF C6                  IMUL EAX,ESI
006366F6  03 C2                     ADD EAX,EDX
006366F8  85 C0                     TEST EAX,EAX
006366FA  74 13                     JZ 0x0063670f
006366FC  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006366FF  85 C0                     TEST EAX,EAX
00636701  7C 0C                     JL 0x0063670f
00636703  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00636709  50                        PUSH EAX
0063670A  E8 91 24 0B 00            CALL 0x006e8ba0
LAB_0063670f:
0063670F  46                        INC ESI
00636710  3B F3                     CMP ESI,EBX
00636712  7C D1                     JL 0x006366e5
LAB_00636714:
00636714  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
00636717  50                        PUSH EAX
00636718  E8 F3 79 07 00            CALL 0x006ae110
0063671D  5E                        POP ESI
0063671E  C7 47 2C 00 00 00 00      MOV dword ptr [EDI + 0x2c],0x0
00636725  5B                        POP EBX
LAB_00636726:
00636726  5F                        POP EDI
00636727  C3                        RET
