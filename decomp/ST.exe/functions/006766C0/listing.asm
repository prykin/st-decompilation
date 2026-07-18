FUN_006766c0:
006766C0  33 C0                     XOR EAX,EAX
006766C2  56                        PUSH ESI
006766C3  A0 4D 87 80 00            MOV AL,[0x0080874d]
006766C8  57                        PUSH EDI
006766C9  B9 05 00 00 00            MOV ECX,0x5
006766CE  BE 3B E8 80 00            MOV ESI,0x80e83b
006766D3  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006766D6  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
006766D9  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006766DC  C1 E2 04                  SHL EDX,0x4
006766DF  03 D0                     ADD EDX,EAX
006766E1  33 C0                     XOR EAX,EAX
006766E3  8D 3C 55 0B 51 7F 00      LEA EDI,[EDX*0x2 + 0x7f510b]
006766EA  F3 A5                     MOVSD.REP ES:EDI,ESI
006766EC  A0 4D 87 80 00            MOV AL,[0x0080874d]
006766F1  B9 05 00 00 00            MOV ECX,0x5
006766F6  BE 4F E8 80 00            MOV ESI,0x80e84f
006766FB  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006766FE  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00676701  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00676704  C1 E2 04                  SHL EDX,0x4
00676707  03 D0                     ADD EDX,EAX
00676709  33 C0                     XOR EAX,EAX
0067670B  8D 3C 55 1F 51 7F 00      LEA EDI,[EDX*0x2 + 0x7f511f]
00676712  F3 A5                     MOVSD.REP ES:EDI,ESI
00676714  A0 4D 87 80 00            MOV AL,[0x0080874d]
00676719  B9 9B 00 00 00            MOV ECX,0x9b
0067671E  BE 63 E8 80 00            MOV ESI,0x80e863
00676723  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00676726  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00676729  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0067672C  C1 E2 04                  SHL EDX,0x4
0067672F  03 D0                     ADD EDX,EAX
00676731  33 C0                     XOR EAX,EAX
00676733  8D 3C 55 47 51 7F 00      LEA EDI,[EDX*0x2 + 0x7f5147]
0067673A  F3 A5                     MOVSD.REP ES:EDI,ESI
0067673C  A0 4D 87 80 00            MOV AL,[0x0080874d]
00676741  B9 6A 00 00 00            MOV ECX,0x6a
00676746  BE CF EA 80 00            MOV ESI,0x80eacf
0067674B  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0067674E  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00676751  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00676754  C1 E2 04                  SHL EDX,0x4
00676757  03 D0                     ADD EDX,EAX
00676759  33 C0                     XOR EAX,EAX
0067675B  8D 3C 55 B3 53 7F 00      LEA EDI,[EDX*0x2 + 0x7f53b3]
00676762  F3 A5                     MOVSD.REP ES:EDI,ESI
00676764  A0 4D 87 80 00            MOV AL,[0x0080874d]
00676769  B9 26 00 00 00            MOV ECX,0x26
0067676E  BE 77 EC 80 00            MOV ESI,0x80ec77
00676773  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00676776  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00676779  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0067677C  C1 E2 04                  SHL EDX,0x4
0067677F  03 D0                     ADD EDX,EAX
00676781  8D 3C 55 5B 55 7F 00      LEA EDI,[EDX*0x2 + 0x7f555b]
00676788  F3 A5                     MOVSD.REP ES:EDI,ESI
0067678A  66 A5                     MOVSW ES:EDI,ESI
0067678C  A4                        MOVSB ES:EDI,ESI
0067678D  5F                        POP EDI
0067678E  5E                        POP ESI
0067678F  C3                        RET
