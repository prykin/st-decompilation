FUN_00676170:
00676170  55                        PUSH EBP
00676171  8B EC                     MOV EBP,ESP
00676173  83 EC 48                  SUB ESP,0x48
00676176  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067617B  56                        PUSH ESI
0067617C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067617F  8D 4D B8                  LEA ECX,[EBP + -0x48]
00676182  6A 00                     PUSH 0x0
00676184  52                        PUSH EDX
00676185  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067618C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067618F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00676195  E8 56 76 0B 00            CALL 0x0072d7f0
0067619A  8B F0                     MOV ESI,EAX
0067619C  83 C4 08                  ADD ESP,0x8
0067619F  85 F6                     TEST ESI,ESI
006761A1  75 42                     JNZ 0x006761e5
006761A3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006761A9  85 C9                     TEST ECX,ECX
006761AB  74 0C                     JZ 0x006761b9
006761AD  50                        PUSH EAX
006761AE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006761B1  50                        PUSH EAX
006761B2  E8 42 FB D8 FF            CALL 0x00405cf9
006761B7  EB 02                     JMP 0x006761bb
LAB_006761b9:
006761B9  33 C0                     XOR EAX,EAX
LAB_006761bb:
006761BB  85 C0                     TEST EAX,EAX
006761BD  74 15                     JZ 0x006761d4
006761BF  8B C8                     MOV ECX,EAX
006761C1  E8 EF CB D8 FF            CALL 0x00402db5
006761C6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006761C9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006761CF  5E                        POP ESI
006761D0  8B E5                     MOV ESP,EBP
006761D2  5D                        POP EBP
006761D3  C3                        RET
LAB_006761d4:
006761D4  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006761D7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006761DA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006761E0  5E                        POP ESI
006761E1  8B E5                     MOV ESP,EBP
006761E3  5D                        POP EBP
006761E4  C3                        RET
LAB_006761e5:
006761E5  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006761E8  68 A0 2D 7D 00            PUSH 0x7d2da0
006761ED  68 CC 4C 7A 00            PUSH 0x7a4ccc
006761F2  56                        PUSH ESI
006761F3  6A 00                     PUSH 0x0
006761F5  68 25 01 00 00            PUSH 0x125
006761FA  68 58 2D 7D 00            PUSH 0x7d2d58
006761FF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00676205  E8 C6 72 03 00            CALL 0x006ad4d0
0067620A  83 C4 18                  ADD ESP,0x18
0067620D  85 C0                     TEST EAX,EAX
0067620F  74 01                     JZ 0x00676212
00676211  CC                        INT3
LAB_00676212:
00676212  68 26 01 00 00            PUSH 0x126
00676217  68 58 2D 7D 00            PUSH 0x7d2d58
0067621C  6A 00                     PUSH 0x0
0067621E  56                        PUSH ESI
0067621F  E8 1C FC 02 00            CALL 0x006a5e40
00676224  33 C0                     XOR EAX,EAX
00676226  5E                        POP ESI
00676227  8B E5                     MOV ESP,EBP
00676229  5D                        POP EBP
0067622A  C3                        RET
