STGroupC::GetGroupContent:
004233E0  55                        PUSH EBP
004233E1  8B EC                     MOV EBP,ESP
004233E3  83 EC 58                  SUB ESP,0x58
004233E6  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
004233E9  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
004233EF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004233F2  53                        PUSH EBX
004233F3  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004233F6  56                        PUSH ESI
004233F7  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004233FA  33 F6                     XOR ESI,ESI
004233FC  57                        PUSH EDI
004233FD  8D 4D AC                  LEA ECX,[EBP + -0x54]
00423400  8D 45 A8                  LEA EAX,[EBP + -0x58]
00423403  56                        PUSH ESI
00423404  51                        PUSH ECX
00423405  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00423408  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0042340B  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0042340E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00423413  E8 D8 A3 30 00            CALL 0x0072d7f0
00423418  8B F8                     MOV EDI,EAX
0042341A  83 C4 08                  ADD ESP,0x8
0042341D  3B FE                     CMP EDI,ESI
0042341F  75 74                     JNZ 0x00423495
00423421  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00423424  33 D2                     XOR EDX,EDX
00423426  6A 01                     PUSH 0x1
00423428  6A 02                     PUSH 0x2
0042342A  66 8B 50 27               MOV DX,word ptr [EAX + 0x27]
0042342E  52                        PUSH EDX
0042342F  56                        PUSH ESI
00423430  E8 5B AE 28 00            CALL 0x006ae290
00423435  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00423438  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042343B  3B DE                     CMP EBX,ESI
0042343D  76 43                     JBE 0x00423482
0042343F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00423442  33 D2                     XOR EDX,EDX
LAB_00423444:
00423444  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00423447  8D 4D FE                  LEA ECX,[EBP + -0x2]
0042344A  51                        PUSH ECX
0042344B  8B 48 29                  MOV ECX,dword ptr [EAX + 0x29]
0042344E  E8 1D 98 28 00            CALL 0x006acc70
00423453  66 81 7D FE FF FF         CMP word ptr [EBP + -0x2],0xffff
00423459  74 1A                     JZ 0x00423475
0042345B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042345E  8B D7                     MOV EDX,EDI
00423460  8D 4D FE                  LEA ECX,[EBP + -0x2]
00423463  81 E2 FF FF 00 00         AND EDX,0xffff
00423469  51                        PUSH ECX
0042346A  52                        PUSH EDX
0042346B  50                        PUSH EAX
0042346C  E8 CF AC 28 00            CALL 0x006ae140
00423471  47                        INC EDI
00423472  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_00423475:
00423475  46                        INC ESI
00423476  8B D6                     MOV EDX,ESI
00423478  81 E2 FF FF 00 00         AND EDX,0xffff
0042347E  3B D3                     CMP EDX,EBX
00423480  72 C2                     JC 0x00423444
LAB_00423482:
00423482  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00423485  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00423488  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042348E  5F                        POP EDI
0042348F  5E                        POP ESI
00423490  5B                        POP EBX
00423491  8B E5                     MOV ESP,EBP
00423493  5D                        POP EBP
00423494  C3                        RET
LAB_00423495:
00423495  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00423498  68 C8 50 7A 00            PUSH 0x7a50c8
0042349D  68 CC 4C 7A 00            PUSH 0x7a4ccc
004234A2  57                        PUSH EDI
004234A3  56                        PUSH ESI
004234A4  6A 52                     PUSH 0x52
004234A6  68 A4 50 7A 00            PUSH 0x7a50a4
004234AB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004234B1  E8 1A A0 28 00            CALL 0x006ad4d0
004234B6  83 C4 18                  ADD ESP,0x18
004234B9  85 C0                     TEST EAX,EAX
004234BB  74 01                     JZ 0x004234be
004234BD  CC                        INT3
LAB_004234be:
004234BE  6A 53                     PUSH 0x53
004234C0  68 A4 50 7A 00            PUSH 0x7a50a4
004234C5  56                        PUSH ESI
004234C6  57                        PUSH EDI
004234C7  E8 74 29 28 00            CALL 0x006a5e40
004234CC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004234CF  5F                        POP EDI
004234D0  5E                        POP ESI
004234D1  5B                        POP EBX
004234D2  8B E5                     MOV ESP,EBP
004234D4  5D                        POP EBP
004234D5  C3                        RET
