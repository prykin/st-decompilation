FUN_00617560:
00617560  55                        PUSH EBP
00617561  8B EC                     MOV EBP,ESP
00617563  83 EC 0C                  SUB ESP,0xc
00617566  33 C0                     XOR EAX,EAX
00617568  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061756B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061756E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00617571  66 8B 81 5A 02 00 00      MOV AX,word ptr [ECX + 0x25a]
00617578  66 85 C0                  TEST AX,AX
0061757B  0F BF D0                  MOVSX EDX,AX
0061757E  B8 79 19 8C 02            MOV EAX,0x28c1979
00617583  7C 10                     JL 0x00617595
00617585  F7 EA                     IMUL EDX
00617587  D1 FA                     SAR EDX,0x1
00617589  8B C2                     MOV EAX,EDX
0061758B  C1 E8 1F                  SHR EAX,0x1f
0061758E  03 D0                     ADD EDX,EAX
00617590  0F BF D2                  MOVSX EDX,DX
00617593  EB 0F                     JMP 0x006175a4
LAB_00617595:
00617595  F7 EA                     IMUL EDX
00617597  D1 FA                     SAR EDX,0x1
00617599  8B C2                     MOV EAX,EDX
0061759B  C1 E8 1F                  SHR EAX,0x1f
0061759E  03 D0                     ADD EDX,EAX
006175A0  0F BF D2                  MOVSX EDX,DX
006175A3  4A                        DEC EDX
LAB_006175a4:
006175A4  66 8B 81 5C 02 00 00      MOV AX,word ptr [ECX + 0x25c]
006175AB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006175AE  66 85 C0                  TEST AX,AX
006175B1  0F BF D0                  MOVSX EDX,AX
006175B4  B8 79 19 8C 02            MOV EAX,0x28c1979
006175B9  7C 10                     JL 0x006175cb
006175BB  F7 EA                     IMUL EDX
006175BD  D1 FA                     SAR EDX,0x1
006175BF  8B C2                     MOV EAX,EDX
006175C1  C1 E8 1F                  SHR EAX,0x1f
006175C4  03 D0                     ADD EDX,EAX
006175C6  0F BF D2                  MOVSX EDX,DX
006175C9  EB 0F                     JMP 0x006175da
LAB_006175cb:
006175CB  F7 EA                     IMUL EDX
006175CD  D1 FA                     SAR EDX,0x1
006175CF  8B C2                     MOV EAX,EDX
006175D1  C1 E8 1F                  SHR EAX,0x1f
006175D4  03 D0                     ADD EDX,EAX
006175D6  0F BF D2                  MOVSX EDX,DX
006175D9  4A                        DEC EDX
LAB_006175da:
006175DA  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
006175DD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006175E0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006175E3  8D 4D F4                  LEA ECX,[EBP + -0xc]
006175E6  6A 00                     PUSH 0x0
006175E8  51                        PUSH ECX
006175E9  52                        PUSH EDX
006175EA  6A 00                     PUSH 0x0
006175EC  6A 03                     PUSH 0x3
006175EE  B9 58 76 80 00            MOV ECX,0x807658
006175F3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006175F6  E8 DD D5 DE FF            CALL 0x00404bd8
006175FB  8B E5                     MOV ESP,EBP
006175FD  5D                        POP EBP
006175FE  C2 04 00                  RET 0x4
