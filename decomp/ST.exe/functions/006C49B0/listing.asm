FUN_006c49b0:
006C49B0  55                        PUSH EBP
006C49B1  8B EC                     MOV EBP,ESP
006C49B3  56                        PUSH ESI
006C49B4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C49B7  33 C0                     XOR EAX,EAX
006C49B9  57                        PUSH EDI
006C49BA  85 F6                     TEST ESI,ESI
006C49BC  74 36                     JZ 0x006c49f4
006C49BE  8B FE                     MOV EDI,ESI
006C49C0  83 C9 FF                  OR ECX,0xffffffff
006C49C3  F2 AE                     SCASB.REPNE ES:EDI
006C49C5  F7 D1                     NOT ECX
006C49C7  51                        PUSH ECX
006C49C8  E8 A3 62 FE FF            CALL 0x006aac70
006C49CD  8B D0                     MOV EDX,EAX
006C49CF  85 D2                     TEST EDX,EDX
006C49D1  74 1F                     JZ 0x006c49f2
006C49D3  8B FE                     MOV EDI,ESI
006C49D5  83 C9 FF                  OR ECX,0xffffffff
006C49D8  33 C0                     XOR EAX,EAX
006C49DA  F2 AE                     SCASB.REPNE ES:EDI
006C49DC  F7 D1                     NOT ECX
006C49DE  2B F9                     SUB EDI,ECX
006C49E0  8B C1                     MOV EAX,ECX
006C49E2  8B F7                     MOV ESI,EDI
006C49E4  8B FA                     MOV EDI,EDX
006C49E6  C1 E9 02                  SHR ECX,0x2
006C49E9  F3 A5                     MOVSD.REP ES:EDI,ESI
006C49EB  8B C8                     MOV ECX,EAX
006C49ED  83 E1 03                  AND ECX,0x3
006C49F0  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006c49f2:
006C49F2  8B C2                     MOV EAX,EDX
LAB_006c49f4:
006C49F4  5F                        POP EDI
006C49F5  5E                        POP ESI
006C49F6  5D                        POP EBP
006C49F7  C2 04 00                  RET 0x4
