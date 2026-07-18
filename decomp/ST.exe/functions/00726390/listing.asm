FUN_00726390:
00726390  55                        PUSH EBP
00726391  8B EC                     MOV EBP,ESP
00726393  83 EC 50                  SUB ESP,0x50
00726396  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0072639B  56                        PUSH ESI
0072639C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0072639F  8D 4D B0                  LEA ECX,[EBP + -0x50]
007263A2  6A 00                     PUSH 0x0
007263A4  52                        PUSH EDX
007263A5  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
007263A8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007263AE  E8 3D 74 00 00            CALL 0x0072d7f0
007263B3  8B F0                     MOV ESI,EAX
007263B5  83 C4 08                  ADD ESP,0x8
007263B8  85 F6                     TEST ESI,ESI
007263BA  75 43                     JNZ 0x007263ff
007263BC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007263BF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007263C2  8D 4D F4                  LEA ECX,[EBP + -0xc]
007263C5  50                        PUSH EAX
007263C6  51                        PUSH ECX
007263C7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007263CA  52                        PUSH EDX
007263CB  6A 08                     PUSH 0x8
007263CD  E8 3E BF FC FF            CALL 0x006f2310
007263D2  85 C0                     TEST EAX,EAX
007263D4  75 17                     JNZ 0x007263ed
007263D6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007263DB  68 F0 00 00 00            PUSH 0xf0
007263E0  68 8C 0C 7F 00            PUSH 0x7f0c8c
007263E5  50                        PUSH EAX
007263E6  6A FC                     PUSH -0x4
007263E8  E8 53 FA F7 FF            CALL 0x006a5e40
LAB_007263ed:
007263ED  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
007263F0  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
007263F4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007263FA  5E                        POP ESI
007263FB  8B E5                     MOV ESP,EBP
007263FD  5D                        POP EBP
007263FE  C3                        RET
LAB_007263ff:
007263FF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00726402  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00726405  85 C0                     TEST EAX,EAX
00726407  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072640D  75 0C                     JNZ 0x0072641b
0072640F  83 FE FC                  CMP ESI,-0x4
00726412  75 07                     JNZ 0x0072641b
00726414  8B C6                     MOV EAX,ESI
00726416  5E                        POP ESI
00726417  8B E5                     MOV ESP,EBP
00726419  5D                        POP EBP
0072641A  C3                        RET
LAB_0072641b:
0072641B  68 D0 0C 7F 00            PUSH 0x7f0cd0
00726420  68 CC 4C 7A 00            PUSH 0x7a4ccc
00726425  56                        PUSH ESI
00726426  6A 00                     PUSH 0x0
00726428  68 F4 00 00 00            PUSH 0xf4
0072642D  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726432  E8 99 70 F8 FF            CALL 0x006ad4d0
00726437  83 C4 18                  ADD ESP,0x18
0072643A  85 C0                     TEST EAX,EAX
0072643C  74 01                     JZ 0x0072643f
0072643E  CC                        INT3
LAB_0072643f:
0072643F  68 F6 00 00 00            PUSH 0xf6
00726444  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726449  6A 00                     PUSH 0x0
0072644B  56                        PUSH ESI
0072644C  E8 EF F9 F7 FF            CALL 0x006a5e40
00726451  85 F6                     TEST ESI,ESI
00726453  7D 07                     JGE 0x0072645c
00726455  8B C6                     MOV EAX,ESI
00726457  5E                        POP ESI
00726458  8B E5                     MOV ESP,EBP
0072645A  5D                        POP EBP
0072645B  C3                        RET
LAB_0072645c:
0072645C  83 C8 FF                  OR EAX,0xffffffff
0072645F  5E                        POP ESI
00726460  8B E5                     MOV ESP,EBP
00726462  5D                        POP EBP
00726463  C3                        RET
