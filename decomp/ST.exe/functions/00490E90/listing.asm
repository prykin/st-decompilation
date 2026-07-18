FUN_00490e90:
00490E90  55                        PUSH EBP
00490E91  8B EC                     MOV EBP,ESP
00490E93  56                        PUSH ESI
00490E94  57                        PUSH EDI
00490E95  8D B9 FB 06 00 00         LEA EDI,[ECX + 0x6fb]
00490E9B  83 C9 FF                  OR ECX,0xffffffff
00490E9E  33 C0                     XOR EAX,EAX
00490EA0  F2 AE                     SCASB.REPNE ES:EDI
00490EA2  F7 D1                     NOT ECX
00490EA4  2B F9                     SUB EDI,ECX
00490EA6  8B C1                     MOV EAX,ECX
00490EA8  8B F7                     MOV ESI,EDI
00490EAA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00490EAD  C1 E9 02                  SHR ECX,0x2
00490EB0  F3 A5                     MOVSD.REP ES:EDI,ESI
00490EB2  8B C8                     MOV ECX,EAX
00490EB4  83 E1 03                  AND ECX,0x3
00490EB7  F3 A4                     MOVSB.REP ES:EDI,ESI
00490EB9  5F                        POP EDI
00490EBA  5E                        POP ESI
00490EBB  5D                        POP EBP
00490EBC  C2 04 00                  RET 0x4
