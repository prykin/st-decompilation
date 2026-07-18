FUN_005fcc70:
005FCC70  55                        PUSH EBP
005FCC71  8B EC                     MOV EBP,ESP
005FCC73  56                        PUSH ESI
005FCC74  57                        PUSH EDI
005FCC75  8D B9 5C 03 00 00         LEA EDI,[ECX + 0x35c]
005FCC7B  83 C9 FF                  OR ECX,0xffffffff
005FCC7E  33 C0                     XOR EAX,EAX
005FCC80  F2 AE                     SCASB.REPNE ES:EDI
005FCC82  F7 D1                     NOT ECX
005FCC84  2B F9                     SUB EDI,ECX
005FCC86  8B C1                     MOV EAX,ECX
005FCC88  8B F7                     MOV ESI,EDI
005FCC8A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005FCC8D  C1 E9 02                  SHR ECX,0x2
005FCC90  F3 A5                     MOVSD.REP ES:EDI,ESI
005FCC92  8B C8                     MOV ECX,EAX
005FCC94  83 E1 03                  AND ECX,0x3
005FCC97  F3 A4                     MOVSB.REP ES:EDI,ESI
005FCC99  5F                        POP EDI
005FCC9A  5E                        POP ESI
005FCC9B  5D                        POP EBP
005FCC9C  C2 04 00                  RET 0x4
