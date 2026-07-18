FUN_006acc95:
006ACC95  56                        PUSH ESI
006ACC96  8B F1                     MOV ESI,ECX
006ACC98  0F AF F0                  IMUL ESI,EAX
006ACC9B  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
006ACC9E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006ACCA1  03 F2                     ADD ESI,EDX
006ACCA3  8B D1                     MOV EDX,ECX
006ACCA5  C1 E9 02                  SHR ECX,0x2
006ACCA8  F3 A5                     MOVSD.REP ES:EDI,ESI
006ACCAA  8B CA                     MOV ECX,EDX
006ACCAC  83 E1 03                  AND ECX,0x3
006ACCAF  F3 A4                     MOVSB.REP ES:EDI,ESI
006ACCB1  5E                        POP ESI
006ACCB2  5F                        POP EDI
006ACCB3  5D                        POP EBP
006ACCB4  C2 04 00                  RET 0x4
