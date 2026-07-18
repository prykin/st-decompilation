FUN_007531e0:
007531E0  55                        PUSH EBP
007531E1  8B EC                     MOV EBP,ESP
007531E3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007531E6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007531E9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007531EC  56                        PUSH ESI
007531ED  50                        PUSH EAX
007531EE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007531F1  51                        PUSH ECX
007531F2  52                        PUSH EDX
007531F3  50                        PUSH EAX
007531F4  E8 17 13 F8 FF            CALL 0x006d4510
007531F9  85 C0                     TEST EAX,EAX
007531FB  74 52                     JZ 0x0075324f
007531FD  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
00753200  8B 70 34                  MOV ESI,dword ptr [EAX + 0x34]
00753203  83 F9 20                  CMP ECX,0x20
00753206  72 2A                     JC 0x00753232
00753208  81 3E 44 4B 46 4D         CMP dword ptr [ESI],0x4d464b44
0075320E  75 22                     JNZ 0x00753232
00753210  66 81 7E 04 01 01         CMP word ptr [ESI + 0x4],0x101
00753216  75 1A                     JNZ 0x00753232
00753218  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0075321B  F6 04 31 03               TEST byte ptr [ECX + ESI*0x1],0x3
0075321F  75 11                     JNZ 0x00753232
00753221  57                        PUSH EDI
00753222  8D 78 10                  LEA EDI,[EAX + 0x10]
00753225  B9 08 00 00 00            MOV ECX,0x8
0075322A  F3 A5                     MOVSD.REP ES:EDI,ESI
0075322C  5F                        POP EDI
0075322D  5E                        POP ESI
0075322E  5D                        POP EBP
0075322F  C2 10 00                  RET 0x10
LAB_00753232:
00753232  6A 00                     PUSH 0x0
00753234  50                        PUSH EAX
00753235  E8 66 14 F8 FF            CALL 0x006d46a0
0075323A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00753240  6A 51                     PUSH 0x51
00753242  68 F4 2B 7F 00            PUSH 0x7f2bf4
00753247  52                        PUSH EDX
00753248  6A FB                     PUSH -0x5
0075324A  E8 F1 2B F5 FF            CALL 0x006a5e40
LAB_0075324f:
0075324F  33 C0                     XOR EAX,EAX
00753251  5E                        POP ESI
00753252  5D                        POP EBP
00753253  C2 10 00                  RET 0x10
