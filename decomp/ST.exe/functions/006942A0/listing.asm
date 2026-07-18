FUN_006942a0:
006942A0  55                        PUSH EBP
006942A1  8B EC                     MOV EBP,ESP
006942A3  83 EC 50                  SUB ESP,0x50
006942A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006942AB  53                        PUSH EBX
006942AC  56                        PUSH ESI
006942AD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006942B0  57                        PUSH EDI
006942B1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006942B4  8D 4D B0                  LEA ECX,[EBP + -0x50]
006942B7  6A 00                     PUSH 0x0
006942B9  52                        PUSH EDX
006942BA  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006942C1  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006942C8  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006942CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006942D1  E8 1A 95 09 00            CALL 0x0072d7f0
006942D6  83 C4 08                  ADD ESP,0x8
006942D9  85 C0                     TEST EAX,EAX
006942DB  75 28                     JNZ 0x00694305
006942DD  8B 0D 70 D7 79 00         MOV ECX,dword ptr [0x0079d770]
006942E3  8D 45 F8                  LEA EAX,[EBP + -0x8]
006942E6  68 99 19 00 00            PUSH 0x1999
006942EB  50                        PUSH EAX
006942EC  51                        PUSH ECX
006942ED  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006942F0  6A 00                     PUSH 0x0
006942F2  E8 E9 D9 05 00            CALL 0x006f1ce0
006942F7  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006942FA  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006942FD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00694303  EB 0D                     JMP 0x00694312
LAB_00694305:
00694305  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00694308  33 F6                     XOR ESI,ESI
0069430A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0069430F  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_00694312:
00694312  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00694315  85 F6                     TEST ESI,ESI
00694317  74 29                     JZ 0x00694342
00694319  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0069431C  33 C0                     XOR EAX,EAX
0069431E  8D 73 11                  LEA ESI,[EBX + 0x11]
00694321  8D 51 11                  LEA EDX,[ECX + 0x11]
00694324  B9 A2 00 00 00            MOV ECX,0xa2
00694329  8B FA                     MOV EDI,EDX
0069432B  F3 AB                     STOSD.REP ES:EDI
0069432D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00694330  B9 A2 00 00 00            MOV ECX,0xa2
00694335  8B FA                     MOV EDI,EDX
00694337  F3 A5                     MOVSD.REP ES:EDI,ESI
00694339  8A 53 10                  MOV DL,byte ptr [EBX + 0x10]
0069433C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0069433F  88 50 10                  MOV byte ptr [EAX + 0x10],DL
LAB_00694342:
00694342  85 DB                     TEST EBX,EBX
00694344  74 0C                     JZ 0x00694352
00694346  8D 4D F8                  LEA ECX,[EBP + -0x8]
00694349  51                        PUSH ECX
0069434A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069434D  E8 8E DD 05 00            CALL 0x006f20e0
LAB_00694352:
00694352  8B C6                     MOV EAX,ESI
00694354  5F                        POP EDI
00694355  5E                        POP ESI
00694356  5B                        POP EBX
00694357  8B E5                     MOV ESP,EBP
00694359  5D                        POP EBP
0069435A  C2 04 00                  RET 0x4
