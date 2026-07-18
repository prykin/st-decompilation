FUN_006802a0:
006802A0  55                        PUSH EBP
006802A1  8B EC                     MOV EBP,ESP
006802A3  57                        PUSH EDI
006802A4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006802A7  85 FF                     TEST EDI,EDI
006802A9  74 2B                     JZ 0x006802d6
006802AB  B8 B4 88 84 00            MOV EAX,0x8488b4
006802B0  85 C0                     TEST EAX,EAX
006802B2  74 22                     JZ 0x006802d6
006802B4  83 C9 FF                  OR ECX,0xffffffff
006802B7  33 C0                     XOR EAX,EAX
006802B9  F2 AE                     SCASB.REPNE ES:EDI
006802BB  F7 D1                     NOT ECX
006802BD  2B F9                     SUB EDI,ECX
006802BF  56                        PUSH ESI
006802C0  8B D1                     MOV EDX,ECX
006802C2  8B F7                     MOV ESI,EDI
006802C4  BF B4 88 84 00            MOV EDI,0x8488b4
006802C9  C1 E9 02                  SHR ECX,0x2
006802CC  F3 A5                     MOVSD.REP ES:EDI,ESI
006802CE  8B CA                     MOV ECX,EDX
006802D0  83 E1 03                  AND ECX,0x3
006802D3  F3 A4                     MOVSB.REP ES:EDI,ESI
006802D5  5E                        POP ESI
LAB_006802d6:
006802D6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006802DB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006802DE  6A 74                     PUSH 0x74
006802E0  68 04 56 7D 00            PUSH 0x7d5604
006802E5  50                        PUSH EAX
006802E6  51                        PUSH ECX
006802E7  E8 54 5B 02 00            CALL 0x006a5e40
006802EC  5F                        POP EDI
006802ED  5D                        POP EBP
006802EE  C3                        RET
