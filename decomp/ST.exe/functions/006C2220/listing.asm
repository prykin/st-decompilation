FUN_006c2220:
006C2220  55                        PUSH EBP
006C2221  8B EC                     MOV EBP,ESP
006C2223  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C2228  56                        PUSH ESI
006C2229  33 F6                     XOR ESI,ESI
006C222B  85 C0                     TEST EAX,EAX
006C222D  75 0A                     JNZ 0x006c2239
006C222F  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C2234  5E                        POP ESI
006C2235  5D                        POP EBP
006C2236  C2 18 00                  RET 0x18
LAB_006c2239:
006C2239  57                        PUSH EDI
006C223A  68 98 68 85 00            PUSH 0x856898
006C223F  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C2245  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C2248  85 C0                     TEST EAX,EAX
006C224A  0F 8C 08 01 00 00         JL 0x006c2358
006C2250  83 F8 20                  CMP EAX,0x20
006C2253  0F 8D FF 00 00 00         JGE 0x006c2358
006C2259  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
006C225C  C1 E7 04                  SHL EDI,0x4
006C225F  03 F8                     ADD EDI,EAX
006C2261  C1 E7 02                  SHL EDI,0x2
006C2264  F6 87 F8 4F 85 00 01      TEST byte ptr [EDI + 0x854ff8],0x1
006C226B  0F 84 E7 00 00 00         JZ 0x006c2358
006C2271  8B 87 FC 4F 85 00         MOV EAX,dword ptr [EDI + 0x854ffc]
006C2277  F6 C4 10                  TEST AH,0x10
006C227A  0F 84 D8 00 00 00         JZ 0x006c2358
006C2280  8B 87 08 50 85 00         MOV EAX,dword ptr [EDI + 0x855008]
006C2286  85 C0                     TEST EAX,EAX
006C2288  74 7F                     JZ 0x006c2309
006C228A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C228D  8B 08                     MOV ECX,dword ptr [EAX]
006C228F  6A 01                     PUSH 0x1
006C2291  52                        PUSH EDX
006C2292  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C2295  52                        PUSH EDX
006C2296  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C2299  52                        PUSH EDX
006C229A  50                        PUSH EAX
006C229B  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
006C229E  8B F0                     MOV ESI,EAX
006C22A0  85 F6                     TEST ESI,ESI
006C22A2  0F 85 B5 00 00 00         JNZ 0x006c235d
006C22A8  D9 45 18                  FLD float ptr [EBP + 0x18]
006C22AB  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006C22B1  DF E0                     FNSTSW AX
006C22B3  F6 C4 01                  TEST AH,0x1
006C22B6  75 1C                     JNZ 0x006c22d4
006C22B8  8B 87 08 50 85 00         MOV EAX,dword ptr [EDI + 0x855008]
006C22BE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C22C1  6A 01                     PUSH 0x1
006C22C3  52                        PUSH EDX
006C22C4  8B 08                     MOV ECX,dword ptr [EAX]
006C22C6  50                        PUSH EAX
006C22C7  FF 51 44                  CALL dword ptr [ECX + 0x44]
006C22CA  8B F0                     MOV ESI,EAX
006C22CC  85 F6                     TEST ESI,ESI
006C22CE  0F 85 89 00 00 00         JNZ 0x006c235d
LAB_006c22d4:
006C22D4  D9 45 1C                  FLD float ptr [EBP + 0x1c]
006C22D7  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006C22DD  DF E0                     FNSTSW AX
006C22DF  F6 C4 01                  TEST AH,0x1
006C22E2  75 18                     JNZ 0x006c22fc
006C22E4  8B 87 08 50 85 00         MOV EAX,dword ptr [EDI + 0x855008]
006C22EA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C22ED  6A 01                     PUSH 0x1
006C22EF  52                        PUSH EDX
006C22F0  8B 08                     MOV ECX,dword ptr [EAX]
006C22F2  50                        PUSH EAX
006C22F3  FF 51 40                  CALL dword ptr [ECX + 0x40]
006C22F6  8B F0                     MOV ESI,EAX
006C22F8  85 F6                     TEST ESI,ESI
006C22FA  75 61                     JNZ 0x006c235d
LAB_006c22fc:
006C22FC  A1 BC 68 85 00            MOV EAX,[0x008568bc]
006C2301  50                        PUSH EAX
006C2302  8B 08                     MOV ECX,dword ptr [EAX]
006C2304  FF 51 44                  CALL dword ptr [ECX + 0x44]
006C2307  8B F0                     MOV ESI,EAX
LAB_006c2309:
006C2309  D9 45 18                  FLD float ptr [EBP + 0x18]
006C230C  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006C2312  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C2315  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C2318  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C231B  89 97 30 50 85 00         MOV dword ptr [EDI + 0x855030],EDX
006C2321  89 87 34 50 85 00         MOV dword ptr [EDI + 0x855034],EAX
006C2327  89 8F 38 50 85 00         MOV dword ptr [EDI + 0x855038],ECX
006C232D  DF E0                     FNSTSW AX
006C232F  F6 C4 01                  TEST AH,0x1
006C2332  75 09                     JNZ 0x006c233d
006C2334  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C2337  89 97 3C 50 85 00         MOV dword ptr [EDI + 0x85503c],EDX
LAB_006c233d:
006C233D  D9 45 1C                  FLD float ptr [EBP + 0x1c]
006C2340  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006C2346  DF E0                     FNSTSW AX
006C2348  F6 C4 01                  TEST AH,0x1
006C234B  75 10                     JNZ 0x006c235d
006C234D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C2350  89 87 40 50 85 00         MOV dword ptr [EDI + 0x855040],EAX
006C2356  EB 05                     JMP 0x006c235d
LAB_006c2358:
006C2358  BE FC FF FF FF            MOV ESI,0xfffffffc
LAB_006c235d:
006C235D  68 98 68 85 00            PUSH 0x856898
006C2362  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C2368  83 FE FC                  CMP ESI,-0x4
006C236B  5F                        POP EDI
006C236C  74 18                     JZ 0x006c2386
006C236E  85 F6                     TEST ESI,ESI
006C2370  74 14                     JZ 0x006c2386
006C2372  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C2378  6A 40                     PUSH 0x40
006C237A  68 2C DE 7E 00            PUSH 0x7ede2c
006C237F  51                        PUSH ECX
006C2380  56                        PUSH ESI
006C2381  E8 BA 3A FE FF            CALL 0x006a5e40
LAB_006c2386:
006C2386  8B C6                     MOV EAX,ESI
006C2388  5E                        POP ESI
006C2389  5D                        POP EBP
006C238A  C2 18 00                  RET 0x18
