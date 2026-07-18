FUN_00753170:
00753170  55                        PUSH EBP
00753171  8B EC                     MOV EBP,ESP
00753173  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753176  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00753179  56                        PUSH ESI
0075317A  6A 00                     PUSH 0x0
0075317C  50                        PUSH EAX
0075317D  51                        PUSH ECX
0075317E  E8 FD 11 F8 FF            CALL 0x006d4380
00753183  85 C0                     TEST EAX,EAX
00753185  74 51                     JZ 0x007531d8
00753187  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
0075318A  8B 70 34                  MOV ESI,dword ptr [EAX + 0x34]
0075318D  83 F9 20                  CMP ECX,0x20
00753190  72 2A                     JC 0x007531bc
00753192  81 3E 44 4B 46 4D         CMP dword ptr [ESI],0x4d464b44
00753198  75 22                     JNZ 0x007531bc
0075319A  66 81 7E 04 01 01         CMP word ptr [ESI + 0x4],0x101
007531A0  75 1A                     JNZ 0x007531bc
007531A2  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
007531A5  F6 04 32 03               TEST byte ptr [EDX + ESI*0x1],0x3
007531A9  75 11                     JNZ 0x007531bc
007531AB  57                        PUSH EDI
007531AC  8D 78 10                  LEA EDI,[EAX + 0x10]
007531AF  B9 08 00 00 00            MOV ECX,0x8
007531B4  F3 A5                     MOVSD.REP ES:EDI,ESI
007531B6  5F                        POP EDI
007531B7  5E                        POP ESI
007531B8  5D                        POP EBP
007531B9  C2 08 00                  RET 0x8
LAB_007531bc:
007531BC  6A 00                     PUSH 0x0
007531BE  50                        PUSH EAX
007531BF  E8 DC 14 F8 FF            CALL 0x006d46a0
007531C4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007531C9  6A 38                     PUSH 0x38
007531CB  68 F4 2B 7F 00            PUSH 0x7f2bf4
007531D0  50                        PUSH EAX
007531D1  6A FB                     PUSH -0x5
007531D3  E8 68 2C F5 FF            CALL 0x006a5e40
LAB_007531d8:
007531D8  33 C0                     XOR EAX,EAX
007531DA  5E                        POP ESI
007531DB  5D                        POP EBP
007531DC  C2 08 00                  RET 0x8
