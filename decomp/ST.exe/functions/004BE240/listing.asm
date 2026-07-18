FUN_004be240:
004BE240  55                        PUSH EBP
004BE241  8B EC                     MOV EBP,ESP
004BE243  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004BE246  56                        PUSH ESI
004BE247  57                        PUSH EDI
004BE248  8D B9 C4 05 00 00         LEA EDI,[ECX + 0x5c4]
004BE24E  83 C9 FF                  OR ECX,0xffffffff
004BE251  33 C0                     XOR EAX,EAX
004BE253  C6 02 00                  MOV byte ptr [EDX],0x0
004BE256  F2 AE                     SCASB.REPNE ES:EDI
004BE258  F7 D1                     NOT ECX
004BE25A  2B F9                     SUB EDI,ECX
004BE25C  8B C1                     MOV EAX,ECX
004BE25E  8B F7                     MOV ESI,EDI
004BE260  8B FA                     MOV EDI,EDX
004BE262  C1 E9 02                  SHR ECX,0x2
004BE265  F3 A5                     MOVSD.REP ES:EDI,ESI
004BE267  8B C8                     MOV ECX,EAX
004BE269  83 E1 03                  AND ECX,0x3
004BE26C  F3 A4                     MOVSB.REP ES:EDI,ESI
004BE26E  5F                        POP EDI
004BE26F  5E                        POP ESI
004BE270  5D                        POP EBP
004BE271  C2 04 00                  RET 0x4
