FUN_005530e0:
005530E0  55                        PUSH EBP
005530E1  8B EC                     MOV EBP,ESP
005530E3  83 EC 50                  SUB ESP,0x50
005530E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005530E9  56                        PUSH ESI
005530EA  85 C0                     TEST EAX,EAX
005530EC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005530F3  7D 07                     JGE 0x005530fc
005530F5  33 C0                     XOR EAX,EAX
005530F7  5E                        POP ESI
005530F8  8B E5                     MOV ESP,EBP
005530FA  5D                        POP EBP
005530FB  C3                        RET
LAB_005530fc:
005530FC  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00553101  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00553104  8D 4D B0                  LEA ECX,[EBP + -0x50]
00553107  6A 00                     PUSH 0x0
00553109  52                        PUSH EDX
0055310A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0055310D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00553113  E8 D8 A6 1D 00            CALL 0x0072d7f0
00553118  83 C4 08                  ADD ESP,0x8
0055311B  85 C0                     TEST EAX,EAX
0055311D  75 61                     JNZ 0x00553180
0055311F  A1 4C 2A 80 00            MOV EAX,[0x00802a4c]
00553124  85 C0                     TEST EAX,EAX
00553126  75 05                     JNZ 0x0055312d
00553128  E8 1C 04 EB FF            CALL 0x00403549
LAB_0055312d:
0055312D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00553130  56                        PUSH ESI
00553131  E8 95 09 EB FF            CALL 0x00403acb
00553136  83 C4 04                  ADD ESP,0x4
00553139  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0055313C  85 C0                     TEST EAX,EAX
0055313E  75 32                     JNZ 0x00553172
00553140  56                        PUSH ESI
00553141  E8 F2 28 EB FF            CALL 0x00405a38
00553146  83 C4 04                  ADD ESP,0x4
00553149  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0055314C  85 C0                     TEST EAX,EAX
0055314E  74 22                     JZ 0x00553172
00553150  33 C9                     XOR ECX,ECX
00553152  8D 55 F4                  LEA EDX,[EBP + -0xc]
00553155  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00553158  52                        PUSH EDX
00553159  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
0055315D  89 45 F6                  MOV dword ptr [EBP + -0xa],EAX
00553160  A1 4C 2A 80 00            MOV EAX,[0x00802a4c]
00553165  66 89 75 F4               MOV word ptr [EBP + -0xc],SI
00553169  50                        PUSH EAX
0055316A  E8 51 B0 15 00            CALL 0x006ae1c0
0055316F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00553172:
00553172  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00553175  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055317B  5E                        POP ESI
0055317C  8B E5                     MOV ESP,EBP
0055317E  5D                        POP EBP
0055317F  C3                        RET
LAB_00553180:
00553180  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00553183  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00553186  85 C0                     TEST EAX,EAX
00553188  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055318E  75 0C                     JNZ 0x0055319c
00553190  8D 45 FC                  LEA EAX,[EBP + -0x4]
00553193  50                        PUSH EAX
00553194  E8 C7 7E 15 00            CALL 0x006ab060
00553199  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0055319c:
0055319C  5E                        POP ESI
0055319D  8B E5                     MOV ESP,EBP
0055319F  5D                        POP EBP
005531A0  C3                        RET
