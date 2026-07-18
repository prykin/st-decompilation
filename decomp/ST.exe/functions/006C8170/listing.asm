FUN_006c8170:
006C8170  55                        PUSH EBP
006C8171  8B EC                     MOV EBP,ESP
006C8173  56                        PUSH ESI
006C8174  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C8177  33 C0                     XOR EAX,EAX
006C8179  57                        PUSH EDI
006C817A  85 F6                     TEST ESI,ESI
006C817C  74 36                     JZ 0x006c81b4
006C817E  8B FE                     MOV EDI,ESI
006C8180  83 C9 FF                  OR ECX,0xffffffff
006C8183  F2 AE                     SCASB.REPNE ES:EDI
006C8185  F7 D1                     NOT ECX
006C8187  51                        PUSH ECX
006C8188  E8 E3 79 FF FF            CALL 0x006bfb70
006C818D  8B D0                     MOV EDX,EAX
006C818F  85 D2                     TEST EDX,EDX
006C8191  74 1F                     JZ 0x006c81b2
006C8193  8B FE                     MOV EDI,ESI
006C8195  83 C9 FF                  OR ECX,0xffffffff
006C8198  33 C0                     XOR EAX,EAX
006C819A  F2 AE                     SCASB.REPNE ES:EDI
006C819C  F7 D1                     NOT ECX
006C819E  2B F9                     SUB EDI,ECX
006C81A0  8B C1                     MOV EAX,ECX
006C81A2  8B F7                     MOV ESI,EDI
006C81A4  8B FA                     MOV EDI,EDX
006C81A6  C1 E9 02                  SHR ECX,0x2
006C81A9  F3 A5                     MOVSD.REP ES:EDI,ESI
006C81AB  8B C8                     MOV ECX,EAX
006C81AD  83 E1 03                  AND ECX,0x3
006C81B0  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006c81b2:
006C81B2  8B C2                     MOV EAX,EDX
LAB_006c81b4:
006C81B4  5F                        POP EDI
006C81B5  5E                        POP ESI
006C81B6  5D                        POP EBP
006C81B7  C2 04 00                  RET 0x4
