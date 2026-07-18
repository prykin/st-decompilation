FUN_00759290:
00759290  55                        PUSH EBP
00759291  8B EC                     MOV EBP,ESP
00759293  51                        PUSH ECX
00759294  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759297  53                        PUSH EBX
00759298  56                        PUSH ESI
00759299  57                        PUSH EDI
0075929A  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075929D  8B 08                     MOV ECX,dword ptr [EAX]
0075929F  81 FF F4 C9 9A 3B         CMP EDI,0x3b9ac9f4
007592A5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007592A8  76 08                     JBE 0x007592b2
007592AA  6A 01                     PUSH 0x1
007592AC  50                        PUSH EAX
007592AD  E8 0E 01 00 00            CALL 0x007593c0
LAB_007592b2:
007592B2  8B C7                     MOV EAX,EDI
007592B4  83 E0 07                  AND EAX,0x7
007592B7  76 0C                     JBE 0x007592c5
007592B9  BA 08 00 00 00            MOV EDX,0x8
007592BE  2B D0                     SUB EDX,EAX
007592C0  03 FA                     ADD EDI,EDX
007592C2  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
LAB_007592c5:
007592C5  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007592C8  85 F6                     TEST ESI,ESI
007592CA  7C 05                     JL 0x007592d1
007592CC  83 FE 02                  CMP ESI,0x2
007592CF  7C 17                     JL 0x007592e8
LAB_007592d1:
007592D1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007592D6  68 10 01 00 00            PUSH 0x110
007592DB  68 C8 2D 7F 00            PUSH 0x7f2dc8
007592E0  50                        PUSH EAX
007592E1  6A 0C                     PUSH 0xc
007592E3  E8 58 CB F4 FF            CALL 0x006a5e40
LAB_007592e8:
007592E8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007592EB  33 DB                     XOR EBX,EBX
007592ED  8B 44 B1 30               MOV EAX,dword ptr [ECX + ESI*0x4 + 0x30]
007592F1  85 C0                     TEST EAX,EAX
007592F3  74 17                     JZ 0x0075930c
LAB_007592f5:
007592F5  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
007592F8  73 0A                     JNC 0x00759304
007592FA  8B D8                     MOV EBX,EAX
007592FC  8B 00                     MOV EAX,dword ptr [EAX]
007592FE  85 C0                     TEST EAX,EAX
00759300  75 F3                     JNZ 0x007592f5
00759302  EB 08                     JMP 0x0075930c
LAB_00759304:
00759304  85 C0                     TEST EAX,EAX
00759306  0F 85 8D 00 00 00         JNZ 0x00759399
LAB_0075930c:
0075930C  83 C7 0C                  ADD EDI,0xc
0075930F  85 DB                     TEST EBX,EBX
00759311  75 09                     JNZ 0x0075931c
00759313  8B 34 B5 84 1E 7A 00      MOV ESI,dword ptr [ESI*0x4 + 0x7a1e84]
0075931A  EB 07                     JMP 0x00759323
LAB_0075931c:
0075931C  8B 34 B5 8C 1E 7A 00      MOV ESI,dword ptr [ESI*0x4 + 0x7a1e8c]
LAB_00759323:
00759323  B8 00 CA 9A 3B            MOV EAX,0x3b9aca00
00759328  2B C7                     SUB EAX,EDI
0075932A  3B F0                     CMP ESI,EAX
0075932C  76 02                     JBE 0x00759330
0075932E  8B F0                     MOV ESI,EAX
LAB_00759330:
00759330  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759333  8D 14 3E                  LEA EDX,[ESI + EDI*0x1]
00759336  52                        PUSH EDX
00759337  50                        PUSH EAX
00759338  E8 A3 6F 00 00            CALL 0x007602e0
0075933D  85 C0                     TEST EAX,EAX
0075933F  75 23                     JNZ 0x00759364
LAB_00759341:
00759341  D1 EE                     SHR ESI,0x1
00759343  83 FE 32                  CMP ESI,0x32
00759346  73 0B                     JNC 0x00759353
00759348  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075934B  6A 02                     PUSH 0x2
0075934D  51                        PUSH ECX
0075934E  E8 6D 00 00 00            CALL 0x007593c0
LAB_00759353:
00759353  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759356  8D 14 3E                  LEA EDX,[ESI + EDI*0x1]
00759359  52                        PUSH EDX
0075935A  50                        PUSH EAX
0075935B  E8 80 6F 00 00            CALL 0x007602e0
00759360  85 C0                     TEST EAX,EAX
00759362  74 DD                     JZ 0x00759341
LAB_00759364:
00759364  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00759367  8D 14 3E                  LEA EDX,[ESI + EDI*0x1]
0075936A  8B 79 48                  MOV EDI,dword ptr [ECX + 0x48]
0075936D  03 FA                     ADD EDI,EDX
0075936F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00759372  03 F2                     ADD ESI,EDX
00759374  89 79 48                  MOV dword ptr [ECX + 0x48],EDI
00759377  85 DB                     TEST EBX,EBX
00759379  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0075937F  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
00759386  89 70 08                  MOV dword ptr [EAX + 0x8],ESI
00759389  75 09                     JNZ 0x00759394
0075938B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075938E  89 44 91 30               MOV dword ptr [ECX + EDX*0x4 + 0x30],EAX
00759392  EB 02                     JMP 0x00759396
LAB_00759394:
00759394  89 03                     MOV dword ptr [EBX],EAX
LAB_00759396:
00759396  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_00759399:
00759399  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0075939C  8D 54 01 0C               LEA EDX,[ECX + EAX*0x1 + 0xc]
007593A0  03 CF                     ADD ECX,EDI
007593A2  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
007593A5  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
007593A8  2B CF                     SUB ECX,EDI
007593AA  5F                        POP EDI
007593AB  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
007593AE  5E                        POP ESI
007593AF  8B C2                     MOV EAX,EDX
007593B1  5B                        POP EBX
007593B2  8B E5                     MOV ESP,EBP
007593B4  5D                        POP EBP
007593B5  C2 0C 00                  RET 0xc
