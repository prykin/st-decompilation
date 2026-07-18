STTorpC::ClearDangerous:
006452A0  55                        PUSH EBP
006452A1  8B EC                     MOV EBP,ESP
006452A3  83 EC 50                  SUB ESP,0x50
006452A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006452AB  56                        PUSH ESI
006452AC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006452AF  57                        PUSH EDI
006452B0  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006452B3  8D 4D B0                  LEA ECX,[EBP + -0x50]
006452B6  6A 00                     PUSH 0x0
006452B8  52                        PUSH EDX
006452B9  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006452BC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006452C2  E8 29 85 0E 00            CALL 0x0072d7f0
006452C7  8B F0                     MOV ESI,EAX
006452C9  83 C4 08                  ADD ESP,0x8
006452CC  85 F6                     TEST ESI,ESI
006452CE  0F 85 AF 00 00 00         JNZ 0x00645383
006452D4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006452D7  83 FE FF                  CMP ESI,-0x1
006452DA  75 32                     JNZ 0x0064530e
006452DC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006452DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006452E2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006452E5  8D 4D F4                  LEA ECX,[EBP + -0xc]
006452E8  8B 82 41 02 00 00         MOV EAX,dword ptr [EDX + 0x241]
006452EE  51                        PUSH ECX
006452EF  50                        PUSH EAX
006452F0  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006452F7  E8 C4 8E 06 00            CALL 0x006ae1c0
006452FC  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006452FF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00645304  33 C0                     XOR EAX,EAX
00645306  5F                        POP EDI
00645307  5E                        POP ESI
00645308  8B E5                     MOV ESP,EBP
0064530A  5D                        POP EBP
0064530B  C2 08 00                  RET 0x8
LAB_0064530e:
0064530E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00645311  8D 4D F4                  LEA ECX,[EBP + -0xc]
00645314  51                        PUSH ECX
00645315  8B D6                     MOV EDX,ESI
00645317  8B 8F 41 02 00 00         MOV ECX,dword ptr [EDI + 0x241]
0064531D  E8 4E 79 06 00            CALL 0x006acc70
00645322  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00645325  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00645328  3B D0                     CMP EDX,EAX
0064532A  75 2A                     JNZ 0x00645356
0064532C  8B 8F 41 02 00 00         MOV ECX,dword ptr [EDI + 0x241]
00645332  8D 45 F4                  LEA EAX,[EBP + -0xc]
00645335  50                        PUSH EAX
00645336  56                        PUSH ESI
00645337  51                        PUSH ECX
00645338  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0064533F  E8 FC 8D 06 00            CALL 0x006ae140
00645344  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00645347  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064534C  33 C0                     XOR EAX,EAX
0064534E  5F                        POP EDI
0064534F  5E                        POP ESI
00645350  8B E5                     MOV ESP,EBP
00645352  5D                        POP EBP
00645353  C2 08 00                  RET 0x8
LAB_00645356:
00645356  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064535C  68 9E 04 00 00            PUSH 0x49e
00645361  68 C0 25 7D 00            PUSH 0x7d25c0
00645366  52                        PUSH EDX
00645367  68 09 00 FE AF            PUSH 0xaffe0009
0064536C  E8 CF 0A 06 00            CALL 0x006a5e40
00645371  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00645374  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00645379  33 C0                     XOR EAX,EAX
0064537B  5F                        POP EDI
0064537C  5E                        POP ESI
0064537D  8B E5                     MOV ESP,EBP
0064537F  5D                        POP EBP
00645380  C2 08 00                  RET 0x8
LAB_00645383:
00645383  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00645386  68 1C 26 7D 00            PUSH 0x7d261c
0064538B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00645390  56                        PUSH ESI
00645391  6A 00                     PUSH 0x0
00645393  68 A1 04 00 00            PUSH 0x4a1
00645398  68 C0 25 7D 00            PUSH 0x7d25c0
0064539D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006453A3  E8 28 81 06 00            CALL 0x006ad4d0
006453A8  83 C4 18                  ADD ESP,0x18
006453AB  85 C0                     TEST EAX,EAX
006453AD  74 01                     JZ 0x006453b0
006453AF  CC                        INT3
LAB_006453b0:
006453B0  68 A2 04 00 00            PUSH 0x4a2
006453B5  68 C0 25 7D 00            PUSH 0x7d25c0
006453BA  6A 00                     PUSH 0x0
006453BC  56                        PUSH ESI
006453BD  E8 7E 0A 06 00            CALL 0x006a5e40
006453C2  5F                        POP EDI
006453C3  83 C8 FF                  OR EAX,0xffffffff
006453C6  5E                        POP ESI
006453C7  8B E5                     MOV ESP,EBP
006453C9  5D                        POP EBP
006453CA  C2 08 00                  RET 0x8
