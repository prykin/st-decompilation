FUN_006765b0:
006765B0  33 C0                     XOR EAX,EAX
006765B2  56                        PUSH ESI
006765B3  A0 4D 87 80 00            MOV AL,[0x0080874d]
006765B8  57                        PUSH EDI
006765B9  B9 05 00 00 00            MOV ECX,0x5
006765BE  BF 3B E8 80 00            MOV EDI,0x80e83b
006765C3  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006765C6  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
006765C9  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006765CC  C1 E2 04                  SHL EDX,0x4
006765CF  03 D0                     ADD EDX,EAX
006765D1  33 C0                     XOR EAX,EAX
006765D3  8D 34 55 0B 51 7F 00      LEA ESI,[EDX*0x2 + 0x7f510b]
006765DA  F3 A5                     MOVSD.REP ES:EDI,ESI
006765DC  A0 4D 87 80 00            MOV AL,[0x0080874d]
006765E1  B9 05 00 00 00            MOV ECX,0x5
006765E6  BF 4F E8 80 00            MOV EDI,0x80e84f
006765EB  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006765EE  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
006765F1  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006765F4  C1 E2 04                  SHL EDX,0x4
006765F7  03 D0                     ADD EDX,EAX
006765F9  33 C0                     XOR EAX,EAX
006765FB  8D 34 55 1F 51 7F 00      LEA ESI,[EDX*0x2 + 0x7f511f]
00676602  F3 A5                     MOVSD.REP ES:EDI,ESI
00676604  A0 4D 87 80 00            MOV AL,[0x0080874d]
00676609  B9 9B 00 00 00            MOV ECX,0x9b
0067660E  BF 63 E8 80 00            MOV EDI,0x80e863
00676613  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00676616  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00676619  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0067661C  C1 E2 04                  SHL EDX,0x4
0067661F  03 D0                     ADD EDX,EAX
00676621  33 C0                     XOR EAX,EAX
00676623  8D 34 55 47 51 7F 00      LEA ESI,[EDX*0x2 + 0x7f5147]
0067662A  F3 A5                     MOVSD.REP ES:EDI,ESI
0067662C  A0 4D 87 80 00            MOV AL,[0x0080874d]
00676631  B9 6A 00 00 00            MOV ECX,0x6a
00676636  BF CF EA 80 00            MOV EDI,0x80eacf
0067663B  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0067663E  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00676641  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00676644  C1 E2 04                  SHL EDX,0x4
00676647  03 D0                     ADD EDX,EAX
00676649  33 C0                     XOR EAX,EAX
0067664B  8D 34 55 B3 53 7F 00      LEA ESI,[EDX*0x2 + 0x7f53b3]
00676652  F3 A5                     MOVSD.REP ES:EDI,ESI
00676654  A0 4D 87 80 00            MOV AL,[0x0080874d]
00676659  B9 26 00 00 00            MOV ECX,0x26
0067665E  BF 77 EC 80 00            MOV EDI,0x80ec77
00676663  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00676666  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00676669  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0067666C  C1 E2 04                  SHL EDX,0x4
0067666F  03 D0                     ADD EDX,EAX
00676671  8D 34 55 5B 55 7F 00      LEA ESI,[EDX*0x2 + 0x7f555b]
00676678  F3 A5                     MOVSD.REP ES:EDI,ESI
0067667A  66 A5                     MOVSW ES:EDI,ESI
0067667C  A4                        MOVSB ES:EDI,ESI
0067667D  5F                        POP EDI
0067667E  5E                        POP ESI
0067667F  C3                        RET
