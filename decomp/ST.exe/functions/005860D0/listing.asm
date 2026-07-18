FUN_005860d0:
005860D0  55                        PUSH EBP
005860D1  8B EC                     MOV EBP,ESP
005860D3  83 EC 0C                  SUB ESP,0xc
005860D6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005860D9  33 C0                     XOR EAX,EAX
005860DB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005860DE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005860E1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005860E4  B8 79 19 8C 02            MOV EAX,0x28c1979
005860E9  85 D2                     TEST EDX,EDX
005860EB  7C 10                     JL 0x005860fd
005860ED  F7 EA                     IMUL EDX
005860EF  D1 FA                     SAR EDX,0x1
005860F1  8B C2                     MOV EAX,EDX
005860F3  C1 E8 1F                  SHR EAX,0x1f
005860F6  03 D0                     ADD EDX,EAX
005860F8  0F BF D2                  MOVSX EDX,DX
005860FB  EB 0F                     JMP 0x0058610c
LAB_005860fd:
005860FD  F7 EA                     IMUL EDX
005860FF  D1 FA                     SAR EDX,0x1
00586101  8B C2                     MOV EAX,EDX
00586103  C1 E8 1F                  SHR EAX,0x1f
00586106  03 D0                     ADD EDX,EAX
00586108  0F BF D2                  MOVSX EDX,DX
0058610B  4A                        DEC EDX
LAB_0058610c:
0058610C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0058610F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00586112  85 D2                     TEST EDX,EDX
00586114  B8 79 19 8C 02            MOV EAX,0x28c1979
00586119  7C 10                     JL 0x0058612b
0058611B  F7 EA                     IMUL EDX
0058611D  D1 FA                     SAR EDX,0x1
0058611F  8B C2                     MOV EAX,EDX
00586121  C1 E8 1F                  SHR EAX,0x1f
00586124  03 D0                     ADD EDX,EAX
00586126  0F BF D2                  MOVSX EDX,DX
00586129  EB 0F                     JMP 0x0058613a
LAB_0058612b:
0058612B  F7 EA                     IMUL EDX
0058612D  D1 FA                     SAR EDX,0x1
0058612F  8B C2                     MOV EAX,EDX
00586131  C1 E8 1F                  SHR EAX,0x1f
00586134  03 D0                     ADD EDX,EAX
00586136  0F BF D2                  MOVSX EDX,DX
00586139  4A                        DEC EDX
LAB_0058613a:
0058613A  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0058613D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00586140  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00586143  8D 4D F4                  LEA ECX,[EBP + -0xc]
00586146  6A 00                     PUSH 0x0
00586148  51                        PUSH ECX
00586149  52                        PUSH EDX
0058614A  6A 00                     PUSH 0x0
0058614C  6A 02                     PUSH 0x2
0058614E  B9 58 76 80 00            MOV ECX,0x807658
00586153  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00586156  E8 7D EA E7 FF            CALL 0x00404bd8
0058615B  8B E5                     MOV ESP,EBP
0058615D  5D                        POP EBP
0058615E  C2 0C 00                  RET 0xc
