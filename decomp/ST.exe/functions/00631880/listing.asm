FUN_00631880:
00631880  55                        PUSH EBP
00631881  8B EC                     MOV EBP,ESP
00631883  83 EC 28                  SUB ESP,0x28
00631886  53                        PUSH EBX
00631887  56                        PUSH ESI
00631888  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0063188B  83 C8 FF                  OR EAX,0xffffffff
0063188E  85 F6                     TEST ESI,ESI
00631890  8B D9                     MOV EBX,ECX
00631892  74 4B                     JZ 0x006318df
00631894  57                        PUSH EDI
00631895  B9 08 00 00 00            MOV ECX,0x8
0063189A  8D 7D D8                  LEA EDI,[EBP + -0x28]
0063189D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006318A0  F3 A5                     MOVSD.REP ES:EDI,ESI
006318A2  A4                        MOVSB ES:EDI,ESI
006318A3  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
006318A6  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
006318A9  85 C0                     TEST EAX,EAX
006318AB  5F                        POP EDI
006318AC  75 10                     JNZ 0x006318be
006318AE  6A 0A                     PUSH 0xa
006318B0  6A 25                     PUSH 0x25
006318B2  6A 0A                     PUSH 0xa
006318B4  6A 00                     PUSH 0x0
006318B6  E8 D5 C9 07 00            CALL 0x006ae290
006318BB  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
LAB_006318be:
006318BE  8B 5B 3C                  MOV EBX,dword ptr [EBX + 0x3c]
006318C1  85 DB                     TEST EBX,EBX
006318C3  74 17                     JZ 0x006318dc
006318C5  8D 4D D8                  LEA ECX,[EBP + -0x28]
006318C8  51                        PUSH ECX
006318C9  53                        PUSH EBX
006318CA  E8 F1 C8 07 00            CALL 0x006ae1c0
006318CF  85 C0                     TEST EAX,EAX
006318D1  7C 0C                     JL 0x006318df
006318D3  5E                        POP ESI
006318D4  40                        INC EAX
006318D5  5B                        POP EBX
006318D6  8B E5                     MOV ESP,EBP
006318D8  5D                        POP EBP
006318D9  C2 08 00                  RET 0x8
LAB_006318dc:
006318DC  83 C8 FF                  OR EAX,0xffffffff
LAB_006318df:
006318DF  5E                        POP ESI
006318E0  5B                        POP EBX
006318E1  8B E5                     MOV ESP,EBP
006318E3  5D                        POP EBP
006318E4  C2 08 00                  RET 0x8
