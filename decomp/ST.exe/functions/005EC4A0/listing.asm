FUN_005ec4a0:
005EC4A0  55                        PUSH EBP
005EC4A1  8B EC                     MOV EBP,ESP
005EC4A3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005EC4A6  8B C1                     MOV EAX,ECX
005EC4A8  56                        PUSH ESI
005EC4A9  57                        PUSH EDI
005EC4AA  B9 54 00 00 00            MOV ECX,0x54
005EC4AF  8B F2                     MOV ESI,EDX
005EC4B1  8D B8 26 03 00 00         LEA EDI,[EAX + 0x326]
005EC4B7  F3 A5                     MOVSD.REP ES:EDI,ESI
005EC4B9  A4                        MOVSB ES:EDI,ESI
005EC4BA  B9 3D 00 00 00            MOV ECX,0x3d
005EC4BF  8D B2 51 01 00 00         LEA ESI,[EDX + 0x151]
005EC4C5  8D B8 31 02 00 00         LEA EDI,[EAX + 0x231]
005EC4CB  81 C2 46 02 00 00         ADD EDX,0x246
005EC4D1  F3 A5                     MOVSD.REP ES:EDI,ESI
005EC4D3  52                        PUSH EDX
005EC4D4  8B C8                     MOV ECX,EAX
005EC4D6  A4                        MOVSB ES:EDI,ESI
005EC4D7  E8 7D 60 E1 FF            CALL 0x00402559
005EC4DC  5F                        POP EDI
005EC4DD  05 46 02 00 00            ADD EAX,0x246
005EC4E2  5E                        POP ESI
005EC4E3  5D                        POP EBP
005EC4E4  C2 04 00                  RET 0x4
