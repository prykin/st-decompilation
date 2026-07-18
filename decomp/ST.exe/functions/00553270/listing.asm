FUN_00553270:
00553270  8B 0D 4C 2A 80 00         MOV ECX,dword ptr [0x00802a4c]
00553276  85 C9                     TEST ECX,ECX
00553278  74 4C                     JZ 0x005532c6
0055327A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0055327D  56                        PUSH ESI
0055327E  33 F6                     XOR ESI,ESI
00553280  85 C0                     TEST EAX,EAX
00553282  7E 31                     JLE 0x005532b5
00553284  3B F0                     CMP ESI,EAX
LAB_00553286:
00553286  73 25                     JNC 0x005532ad
00553288  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0055328B  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0055328E  0F AF C6                  IMUL EAX,ESI
00553291  03 C2                     ADD EAX,EDX
00553293  85 C0                     TEST EAX,EAX
00553295  74 16                     JZ 0x005532ad
00553297  8B 50 02                  MOV EDX,dword ptr [EAX + 0x2]
0055329A  83 C0 02                  ADD EAX,0x2
0055329D  85 D2                     TEST EDX,EDX
0055329F  74 0C                     JZ 0x005532ad
005532A1  50                        PUSH EAX
005532A2  E8 B9 7D 15 00            CALL 0x006ab060
005532A7  8B 0D 4C 2A 80 00         MOV ECX,dword ptr [0x00802a4c]
LAB_005532ad:
005532AD  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005532B0  46                        INC ESI
005532B1  3B F0                     CMP ESI,EAX
005532B3  7C D1                     JL 0x00553286
LAB_005532b5:
005532B5  51                        PUSH ECX
005532B6  E8 55 AE 15 00            CALL 0x006ae110
005532BB  C7 05 4C 2A 80 00 00 00 00 00  MOV dword ptr [0x00802a4c],0x0
005532C5  5E                        POP ESI
LAB_005532c6:
005532C6  C3                        RET
