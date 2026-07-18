FUN_00648530:
00648530  55                        PUSH EBP
00648531  8B EC                     MOV EBP,ESP
00648533  83 EC 48                  SUB ESP,0x48
00648536  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064853B  56                        PUSH ESI
0064853C  57                        PUSH EDI
0064853D  8D 55 BC                  LEA EDX,[EBP + -0x44]
00648540  8D 4D B8                  LEA ECX,[EBP + -0x48]
00648543  6A 00                     PUSH 0x0
00648545  52                        PUSH EDX
00648546  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0064854D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00648550  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00648556  E8 95 52 0E 00            CALL 0x0072d7f0
0064855B  8B F0                     MOV ESI,EAX
0064855D  83 C4 08                  ADD ESP,0x8
00648560  85 F6                     TEST ESI,ESI
00648562  75 5A                     JNZ 0x006485be
00648564  68 85 00 00 00            PUSH 0x85
00648569  E8 A2 26 06 00            CALL 0x006aac10
0064856E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00648571  B9 21 00 00 00            MOV ECX,0x21
00648576  8B F2                     MOV ESI,EDX
00648578  8B F8                     MOV EDI,EAX
0064857A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064857D  F3 A5                     MOVSD.REP ES:EDI,ESI
0064857F  A4                        MOVSB ES:EDI,ESI
00648580  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00648583  C7 40 01 85 00 00 00      MOV dword ptr [EAX + 0x1],0x85
0064858A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064858D  C6 41 05 02               MOV byte ptr [ECX + 0x5],0x2
00648591  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00648594  8B 48 46                  MOV ECX,dword ptr [EAX + 0x46]
00648597  8D 84 11 84 00 00 00      LEA EAX,[ECX + EDX*0x1 + 0x84]
0064859E  50                        PUSH EAX
0064859F  E8 4E B6 DB FF            CALL 0x00403bf2
006485A4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006485A7  83 C4 04                  ADD ESP,0x4
006485AA  89 42 4E                  MOV dword ptr [EDX + 0x4e],EAX
006485AD  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006485B0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006485B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006485B8  5F                        POP EDI
006485B9  5E                        POP ESI
006485BA  8B E5                     MOV ESP,EBP
006485BC  5D                        POP EBP
006485BD  C3                        RET
LAB_006485be:
006485BE  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006485C1  8D 55 FC                  LEA EDX,[EBP + -0x4]
006485C4  52                        PUSH EDX
006485C5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006485CB  E8 D4 9A DB FF            CALL 0x004020a4
006485D0  83 C4 04                  ADD ESP,0x4
006485D3  6A 45                     PUSH 0x45
006485D5  68 F4 27 7D 00            PUSH 0x7d27f4
006485DA  6A 00                     PUSH 0x0
006485DC  56                        PUSH ESI
006485DD  E8 5E D8 05 00            CALL 0x006a5e40
006485E2  5F                        POP EDI
006485E3  33 C0                     XOR EAX,EAX
006485E5  5E                        POP ESI
006485E6  8B E5                     MOV ESP,EBP
006485E8  5D                        POP EBP
006485E9  C3                        RET
