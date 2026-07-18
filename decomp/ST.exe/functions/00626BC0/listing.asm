FUN_00626bc0:
00626BC0  55                        PUSH EBP
00626BC1  8B EC                     MOV EBP,ESP
00626BC3  56                        PUSH ESI
00626BC4  57                        PUSH EDI
00626BC5  8D B9 8E 02 00 00         LEA EDI,[ECX + 0x28e]
00626BCB  83 C9 FF                  OR ECX,0xffffffff
00626BCE  33 C0                     XOR EAX,EAX
00626BD0  F2 AE                     SCASB.REPNE ES:EDI
00626BD2  F7 D1                     NOT ECX
00626BD4  2B F9                     SUB EDI,ECX
00626BD6  8B C1                     MOV EAX,ECX
00626BD8  8B F7                     MOV ESI,EDI
00626BDA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00626BDD  C1 E9 02                  SHR ECX,0x2
00626BE0  F3 A5                     MOVSD.REP ES:EDI,ESI
00626BE2  8B C8                     MOV ECX,EAX
00626BE4  83 E1 03                  AND ECX,0x3
00626BE7  F3 A4                     MOVSB.REP ES:EDI,ESI
00626BE9  5F                        POP EDI
00626BEA  5E                        POP ESI
00626BEB  5D                        POP EBP
00626BEC  C2 04 00                  RET 0x4
