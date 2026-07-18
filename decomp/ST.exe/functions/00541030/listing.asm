FUN_00541030:
00541030  55                        PUSH EBP
00541031  8B EC                     MOV EBP,ESP
00541033  81 EC B0 00 00 00         SUB ESP,0xb0
00541039  56                        PUSH ESI
0054103A  57                        PUSH EDI
0054103B  B9 13 00 00 00            MOV ECX,0x13
00541040  33 C0                     XOR EAX,EAX
00541042  8D BD 50 FF FF FF         LEA EDI,[EBP + 0xffffff50]
00541048  8D 55 A0                  LEA EDX,[EBP + -0x60]
0054104B  F3 AB                     STOSD.REP ES:EDI
0054104D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00541052  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00541055  6A 00                     PUSH 0x0
00541057  52                        PUSH EDX
00541058  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0054105B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00541061  E8 8A C7 1E 00            CALL 0x0072d7f0
00541066  8B F0                     MOV ESI,EAX
00541068  83 C4 08                  ADD ESP,0x8
0054106B  85 F6                     TEST ESI,ESI
0054106D  0F 85 93 00 00 00         JNZ 0x00541106
00541073  A1 F0 26 80 00            MOV EAX,[0x008026f0]
00541078  85 C0                     TEST EAX,EAX
0054107A  74 7C                     JZ 0x005410f8
0054107C  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0054107F  8B 0D F0 26 80 00         MOV ECX,dword ptr [0x008026f0]
00541085  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
0054108B  E8 00 01 17 00            CALL 0x006b1190
00541090  85 C0                     TEST EAX,EAX
00541092  7C 4E                     JL 0x005410e2
00541094  BE 11 00 00 00            MOV ESI,0x11
LAB_00541099:
00541099  B9 08 00 00 00            MOV ECX,0x8
0054109E  33 C0                     XOR EAX,EAX
005410A0  8D 7D E0                  LEA EDI,[EBP + -0x20]
005410A3  F3 AB                     STOSD.REP ES:EDI
005410A5  8D 4D E0                  LEA ECX,[EBP + -0x20]
005410A8  8D 85 50 FF FF FF         LEA EAX,[EBP + 0xffffff50]
005410AE  51                        PUSH ECX
005410AF  B9 20 76 80 00            MOV ECX,0x807620
005410B4  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
005410BB  C7 45 EC 03 00 00 00      MOV dword ptr [EBP + -0x14],0x3
005410C2  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005410C5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005410C8  E8 E3 2C 1A 00            CALL 0x006e3db0
005410CD  8B 0D F0 26 80 00         MOV ECX,dword ptr [0x008026f0]
005410D3  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
005410D9  E8 B2 00 17 00            CALL 0x006b1190
005410DE  85 C0                     TEST EAX,EAX
005410E0  7D B7                     JGE 0x00541099
LAB_005410e2:
005410E2  8B 15 F0 26 80 00         MOV EDX,dword ptr [0x008026f0]
005410E8  52                        PUSH EDX
005410E9  E8 22 D0 16 00            CALL 0x006ae110
005410EE  C7 05 F0 26 80 00 00 00 00 00  MOV dword ptr [0x008026f0],0x0
LAB_005410f8:
005410F8  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
005410FB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00541100  5F                        POP EDI
00541101  5E                        POP ESI
00541102  8B E5                     MOV ESP,EBP
00541104  5D                        POP EBP
00541105  C3                        RET
LAB_00541106:
00541106  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00541109  68 D0 7B 7C 00            PUSH 0x7c7bd0
0054110E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00541113  56                        PUSH ESI
00541114  6A 00                     PUSH 0x0
00541116  68 FD 00 00 00            PUSH 0xfd
0054111B  68 2C 7B 7C 00            PUSH 0x7c7b2c
00541120  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00541126  E8 A5 C3 16 00            CALL 0x006ad4d0
0054112B  83 C4 18                  ADD ESP,0x18
0054112E  85 C0                     TEST EAX,EAX
00541130  74 01                     JZ 0x00541133
00541132  CC                        INT3
LAB_00541133:
00541133  68 FD 00 00 00            PUSH 0xfd
00541138  68 2C 7B 7C 00            PUSH 0x7c7b2c
0054113D  6A 00                     PUSH 0x0
0054113F  56                        PUSH ESI
00541140  E8 FB 4C 16 00            CALL 0x006a5e40
00541145  5F                        POP EDI
00541146  5E                        POP ESI
00541147  8B E5                     MOV ESP,EBP
00541149  5D                        POP EBP
0054114A  C3                        RET
