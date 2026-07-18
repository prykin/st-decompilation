FUN_006c23f0:
006C23F0  55                        PUSH EBP
006C23F1  8B EC                     MOV EBP,ESP
006C23F3  83 EC 08                  SUB ESP,0x8
006C23F6  56                        PUSH ESI
006C23F7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C23FA  66 83 3E 01               CMP word ptr [ESI],0x1
006C23FE  75 29                     JNZ 0x006c2429
006C2400  8B 46 12                  MOV EAX,dword ptr [ESI + 0x12]
006C2403  6A 00                     PUSH 0x0
006C2405  68 E8 03 00 00            PUSH 0x3e8
006C240A  6A 00                     PUSH 0x0
006C240C  50                        PUSH EAX
006C240D  E8 DE C0 06 00            CALL 0x0072e4f0
006C2412  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006C2415  6A 00                     PUSH 0x0
006C2417  51                        PUSH ECX
006C2418  52                        PUSH EDX
006C2419  50                        PUSH EAX
006C241A  E8 21 C0 06 00            CALL 0x0072e440
006C241F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006C2422  5E                        POP ESI
006C2423  8B E5                     MOV ESP,EBP
006C2425  5D                        POP EBP
006C2426  C2 04 00                  RET 0x4
LAB_006c2429:
006C2429  8B 46 1A                  MOV EAX,dword ptr [ESI + 0x1a]
006C242C  6A 00                     PUSH 0x0
006C242E  99                        CDQ
006C242F  68 E8 03 00 00            PUSH 0x3e8
006C2434  52                        PUSH EDX
006C2435  50                        PUSH EAX
006C2436  E8 B5 C0 06 00            CALL 0x0072e4f0
006C243B  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C243E  6A 00                     PUSH 0x0
006C2440  51                        PUSH ECX
006C2441  52                        PUSH EDX
006C2442  50                        PUSH EAX
006C2443  E8 F8 BF 06 00            CALL 0x0072e440
006C2448  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006C244B  5E                        POP ESI
006C244C  8B E5                     MOV ESP,EBP
006C244E  5D                        POP EBP
006C244F  C2 04 00                  RET 0x4
