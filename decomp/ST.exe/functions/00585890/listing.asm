FUN_00585890:
00585890  55                        PUSH EBP
00585891  8B EC                     MOV EBP,ESP
00585893  83 EC 0C                  SUB ESP,0xc
00585896  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00585899  33 C0                     XOR EAX,EAX
0058589B  A0 4D 87 80 00            MOV AL,[0x0080874d]
005858A0  56                        PUSH ESI
005858A1  3B C2                     CMP EAX,EDX
005858A3  0F 85 AD 00 00 00         JNZ 0x00585956
005858A9  33 D2                     XOR EDX,EDX
005858AB  33 C0                     XOR EAX,EAX
005858AD  A0 4E 87 80 00            MOV AL,[0x0080874e]
005858B2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005858B5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005858B8  48                        DEC EAX
005858B9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005858BC  74 18                     JZ 0x005858d6
005858BE  48                        DEC EAX
005858BF  74 0E                     JZ 0x005858cf
005858C1  48                        DEC EAX
005858C2  74 04                     JZ 0x005858c8
005858C4  33 F6                     XOR ESI,ESI
005858C6  EB 13                     JMP 0x005858db
LAB_005858c8:
005858C8  BE A9 00 00 00            MOV ESI,0xa9
005858CD  EB 0C                     JMP 0x005858db
LAB_005858cf:
005858CF  BE A8 00 00 00            MOV ESI,0xa8
005858D4  EB 05                     JMP 0x005858db
LAB_005858d6:
005858D6  BE A7 00 00 00            MOV ESI,0xa7
LAB_005858db:
005858DB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005858DE  B8 79 19 8C 02            MOV EAX,0x28c1979
005858E3  85 D2                     TEST EDX,EDX
005858E5  7C 10                     JL 0x005858f7
005858E7  F7 EA                     IMUL EDX
005858E9  D1 FA                     SAR EDX,0x1
005858EB  8B C2                     MOV EAX,EDX
005858ED  C1 E8 1F                  SHR EAX,0x1f
005858F0  03 D0                     ADD EDX,EAX
005858F2  0F BF D2                  MOVSX EDX,DX
005858F5  EB 0F                     JMP 0x00585906
LAB_005858f7:
005858F7  F7 EA                     IMUL EDX
005858F9  D1 FA                     SAR EDX,0x1
005858FB  8B C2                     MOV EAX,EDX
005858FD  C1 E8 1F                  SHR EAX,0x1f
00585900  03 D0                     ADD EDX,EAX
00585902  0F BF D2                  MOVSX EDX,DX
00585905  4A                        DEC EDX
LAB_00585906:
00585906  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00585909  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0058590C  85 D2                     TEST EDX,EDX
0058590E  B8 79 19 8C 02            MOV EAX,0x28c1979
00585913  7C 10                     JL 0x00585925
00585915  F7 EA                     IMUL EDX
00585917  D1 FA                     SAR EDX,0x1
00585919  8B C2                     MOV EAX,EDX
0058591B  C1 E8 1F                  SHR EAX,0x1f
0058591E  03 D0                     ADD EDX,EAX
00585920  0F BF D2                  MOVSX EDX,DX
00585923  EB 0F                     JMP 0x00585934
LAB_00585925:
00585925  F7 EA                     IMUL EDX
00585927  D1 FA                     SAR EDX,0x1
00585929  8B C2                     MOV EAX,EDX
0058592B  C1 E8 1F                  SHR EAX,0x1f
0058592E  03 D0                     ADD EDX,EAX
00585930  0F BF D2                  MOVSX EDX,DX
00585933  4A                        DEC EDX
LAB_00585934:
00585934  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00585937  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0058593A  85 F6                     TEST ESI,ESI
0058593C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0058593F  74 15                     JZ 0x00585956
00585941  8D 4D F4                  LEA ECX,[EBP + -0xc]
00585944  6A 00                     PUSH 0x0
00585946  51                        PUSH ECX
00585947  56                        PUSH ESI
00585948  6A 00                     PUSH 0x0
0058594A  6A 06                     PUSH 0x6
0058594C  B9 58 76 80 00            MOV ECX,0x807658
00585951  E8 82 F2 E7 FF            CALL 0x00404bd8
LAB_00585956:
00585956  5E                        POP ESI
00585957  8B E5                     MOV ESP,EBP
00585959  5D                        POP EBP
0058595A  C2 0C 00                  RET 0xc
