FUN_00661790:
00661790  55                        PUSH EBP
00661791  8B EC                     MOV EBP,ESP
00661793  8B 89 0B 02 00 00         MOV ECX,dword ptr [ECX + 0x20b]
00661799  53                        PUSH EBX
0066179A  56                        PUSH ESI
0066179B  33 D2                     XOR EDX,EDX
0066179D  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
006617A0  57                        PUSH EDI
006617A1  85 F6                     TEST ESI,ESI
006617A3  7E 2E                     JLE 0x006617d3
006617A5  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006617A8  3B D6                     CMP EDX,ESI
LAB_006617aa:
006617AA  73 0D                     JNC 0x006617b9
006617AC  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006617AF  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
006617B2  0F AF C2                  IMUL EAX,EDX
006617B5  03 C3                     ADD EAX,EBX
006617B7  EB 02                     JMP 0x006617bb
LAB_006617b9:
006617B9  33 C0                     XOR EAX,EAX
LAB_006617bb:
006617BB  39 78 24                  CMP dword ptr [EAX + 0x24],EDI
006617BE  74 0C                     JZ 0x006617cc
006617C0  42                        INC EDX
006617C1  3B D6                     CMP EDX,ESI
006617C3  7C E5                     JL 0x006617aa
006617C5  5F                        POP EDI
006617C6  5E                        POP ESI
006617C7  5B                        POP EBX
006617C8  5D                        POP EBP
006617C9  C2 08 00                  RET 0x8
LAB_006617cc:
006617CC  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
LAB_006617d3:
006617D3  5F                        POP EDI
006617D4  5E                        POP ESI
006617D5  5B                        POP EBX
006617D6  5D                        POP EBP
006617D7  C2 08 00                  RET 0x8
