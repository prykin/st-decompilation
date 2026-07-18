FUN_00759480:
00759480  55                        PUSH EBP
00759481  8B EC                     MOV EBP,ESP
00759483  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759486  53                        PUSH EBX
00759487  56                        PUSH ESI
00759488  57                        PUSH EDI
00759489  8B 38                     MOV EDI,dword ptr [EAX]
0075948B  B8 F4 C9 9A 3B            MOV EAX,0x3b9ac9f4
00759490  33 D2                     XOR EDX,EDX
00759492  F7 75 10                  DIV dword ptr [EBP + 0x10]
00759495  8B F0                     MOV ESI,EAX
00759497  85 F6                     TEST ESI,ESI
00759499  7F 18                     JG 0x007594b3
0075949B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
007594A1  68 95 01 00 00            PUSH 0x195
007594A6  68 C8 2D 7F 00            PUSH 0x7f2dc8
007594AB  51                        PUSH ECX
007594AC  6A 45                     PUSH 0x45
007594AE  E8 8D C9 F4 FF            CALL 0x006a5e40
LAB_007594b3:
007594B3  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
007594B6  3B F3                     CMP ESI,EBX
007594B8  7C 02                     JL 0x007594bc
007594BA  8B F3                     MOV ESI,EBX
LAB_007594bc:
007594BC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007594BF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007594C2  8D 14 9D 00 00 00 00      LEA EDX,[EBX*0x4 + 0x0]
007594C9  89 77 4C                  MOV dword ptr [EDI + 0x4c],ESI
007594CC  52                        PUSH EDX
007594CD  50                        PUSH EAX
007594CE  51                        PUSH ECX
007594CF  E8 BC FD FF FF            CALL 0x00759290
007594D4  33 FF                     XOR EDI,EDI
007594D6  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
007594D9  85 DB                     TEST EBX,EBX
007594DB  76 3E                     JBE 0x0075951b
LAB_007594dd:
007594DD  8B C3                     MOV EAX,EBX
007594DF  2B C7                     SUB EAX,EDI
007594E1  3B F0                     CMP ESI,EAX
007594E3  72 02                     JC 0x007594e7
007594E5  8B F0                     MOV ESI,EAX
LAB_007594e7:
007594E7  8B D6                     MOV EDX,ESI
007594E9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007594EC  0F AF 55 10               IMUL EDX,dword ptr [EBP + 0x10]
007594F0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007594F3  52                        PUSH EDX
007594F4  50                        PUSH EAX
007594F5  51                        PUSH ECX
007594F6  E8 E5 FE FF FF            CALL 0x007593e0
007594FB  85 F6                     TEST ESI,ESI
007594FD  76 15                     JBE 0x00759514
007594FF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00759502  8D 0C BA                  LEA ECX,[EDX + EDI*0x4]
00759505  8B D6                     MOV EDX,ESI
00759507  03 FE                     ADD EDI,ESI
LAB_00759509:
00759509  89 01                     MOV dword ptr [ECX],EAX
0075950B  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
0075950E  83 C1 04                  ADD ECX,0x4
00759511  4A                        DEC EDX
00759512  75 F5                     JNZ 0x00759509
LAB_00759514:
00759514  3B FB                     CMP EDI,EBX
00759516  72 C5                     JC 0x007594dd
00759518  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_0075951b:
0075951B  5F                        POP EDI
0075951C  5E                        POP ESI
0075951D  5B                        POP EBX
0075951E  5D                        POP EBP
0075951F  C2 10 00                  RET 0x10
