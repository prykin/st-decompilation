FUN_00693cb0:
00693CB0  55                        PUSH EBP
00693CB1  8B EC                     MOV EBP,ESP
00693CB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00693CB6  56                        PUSH ESI
00693CB7  57                        PUSH EDI
00693CB8  BE 68 62 7D 00            MOV ESI,0x7d6268
00693CBD  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00693CC0  8D 0C C1                  LEA ECX,[ECX + EAX*0x8]
00693CC3  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
00693CC6  B9 14 00 00 00            MOV ECX,0x14
00693CCB  83 C8 FF                  OR EAX,0xffffffff
00693CCE  8D 7A 11                  LEA EDI,[EDX + 0x11]
00693CD1  F3 A5                     MOVSD.REP ES:EDI,ESI
00693CD3  A4                        MOVSB ES:EDI,ESI
00693CD4  B9 06 00 00 00            MOV ECX,0x6
00693CD9  8D 7A 4A                  LEA EDI,[EDX + 0x4a]
00693CDC  F3 AB                     STOSD.REP ES:EDI
00693CDE  5F                        POP EDI
00693CDF  5E                        POP ESI
00693CE0  5D                        POP EBP
00693CE1  C2 04 00                  RET 0x4
