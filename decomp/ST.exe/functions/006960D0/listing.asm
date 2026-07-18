FUN_006960d0:
006960D0  55                        PUSH EBP
006960D1  8B EC                     MOV EBP,ESP
006960D3  8B 81 53 58 00 00         MOV EAX,dword ptr [ECX + 0x5853]
006960D9  53                        PUSH EBX
006960DA  56                        PUSH ESI
006960DB  57                        PUSH EDI
006960DC  83 CF FF                  OR EDI,0xffffffff
006960DF  85 C0                     TEST EAX,EAX
006960E1  0F 84 83 00 00 00         JZ 0x0069616a
006960E7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006960EA  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006960ED  3B CA                     CMP ECX,EDX
006960EF  73 0B                     JNC 0x006960fc
006960F1  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006960F4  0F AF F1                  IMUL ESI,ECX
006960F7  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
006960FA  EB 02                     JMP 0x006960fe
LAB_006960fc:
006960FC  33 F6                     XOR ESI,ESI
LAB_006960fe:
006960FE  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
00696101  85 C0                     TEST EAX,EAX
00696103  75 10                     JNZ 0x00696115
00696105  6A 0A                     PUSH 0xa
00696107  6A 04                     PUSH 0x4
00696109  6A 0A                     PUSH 0xa
0069610B  6A 00                     PUSH 0x0
0069610D  E8 7E 81 01 00            CALL 0x006ae290
00696112  89 46 19                  MOV dword ptr [ESI + 0x19],EAX
LAB_00696115:
00696115  8B 76 19                  MOV ESI,dword ptr [ESI + 0x19]
00696118  85 F6                     TEST ESI,ESI
0069611A  74 4E                     JZ 0x0069616a
0069611C  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0069611F  33 C0                     XOR EAX,EAX
00696121  85 D2                     TEST EDX,EDX
00696123  7E 34                     JLE 0x00696159
00696125  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00696128  3B C2                     CMP EAX,EDX
LAB_0069612a:
0069612A  73 13                     JNC 0x0069613f
0069612C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0069612F  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
00696132  0F AF C8                  IMUL ECX,EAX
00696135  03 CB                     ADD ECX,EBX
00696137  85 C9                     TEST ECX,ECX
00696139  74 04                     JZ 0x0069613f
0069613B  39 39                     CMP dword ptr [ECX],EDI
0069613D  74 16                     JZ 0x00696155
LAB_0069613f:
0069613F  40                        INC EAX
00696140  3B C2                     CMP EAX,EDX
00696142  7C E6                     JL 0x0069612a
00696144  8D 45 0C                  LEA EAX,[EBP + 0xc]
00696147  50                        PUSH EAX
00696148  56                        PUSH ESI
00696149  E8 72 80 01 00            CALL 0x006ae1c0
0069614E  5F                        POP EDI
0069614F  5E                        POP ESI
00696150  5B                        POP EBX
00696151  5D                        POP EBP
00696152  C2 08 00                  RET 0x8
LAB_00696155:
00696155  85 C0                     TEST EAX,EAX
00696157  7D 13                     JGE 0x0069616c
LAB_00696159:
00696159  8D 45 0C                  LEA EAX,[EBP + 0xc]
0069615C  50                        PUSH EAX
0069615D  56                        PUSH ESI
0069615E  E8 5D 80 01 00            CALL 0x006ae1c0
00696163  5F                        POP EDI
00696164  5E                        POP ESI
00696165  5B                        POP EBX
00696166  5D                        POP EBP
00696167  C2 08 00                  RET 0x8
LAB_0069616a:
0069616A  8B C7                     MOV EAX,EDI
LAB_0069616c:
0069616C  5F                        POP EDI
0069616D  5E                        POP ESI
0069616E  5B                        POP EBX
0069616F  5D                        POP EBP
00696170  C2 08 00                  RET 0x8
