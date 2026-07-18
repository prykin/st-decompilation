FUN_00604fc0:
00604FC0  55                        PUSH EBP
00604FC1  8B EC                     MOV EBP,ESP
00604FC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00604FC6  53                        PUSH EBX
00604FC7  8B D9                     MOV EBX,ECX
00604FC9  56                        PUSH ESI
00604FCA  57                        PUSH EDI
00604FCB  B9 10 00 00 00            MOV ECX,0x10
00604FD0  8B F0                     MOV ESI,EAX
00604FD2  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
00604FD8  F3 A5                     MOVSD.REP ES:EDI,ESI
00604FDA  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
00604FDD  8D BB 19 02 00 00         LEA EDI,[EBX + 0x219]
00604FE3  89 8B 15 02 00 00         MOV dword ptr [EBX + 0x215],ECX
00604FE9  B9 14 00 00 00            MOV ECX,0x14
00604FEE  8D 70 44                  LEA ESI,[EAX + 0x44]
00604FF1  F3 A5                     MOVSD.REP ES:EDI,ESI
00604FF3  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
00604FF9  8D B8 E2 00 00 00         LEA EDI,[EAX + 0xe2]
00604FFF  89 93 69 02 00 00         MOV dword ptr [EBX + 0x269],EDX
00605005  8A 88 98 00 00 00         MOV CL,byte ptr [EAX + 0x98]
0060500B  88 8B 6D 02 00 00         MOV byte ptr [EBX + 0x26d],CL
00605011  8B 90 99 00 00 00         MOV EDX,dword ptr [EAX + 0x99]
00605017  89 93 6E 02 00 00         MOV dword ptr [EBX + 0x26e],EDX
0060501D  8B 88 DE 00 00 00         MOV ECX,dword ptr [EAX + 0xde]
00605023  8D 90 9D 00 00 00         LEA EDX,[EAX + 0x9d]
00605029  89 8B B7 02 00 00         MOV dword ptr [EBX + 0x2b7],ECX
0060502F  C7 83 BB 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2bb],0x0
00605039  8D 8B 72 02 00 00         LEA ECX,[EBX + 0x272]
0060503F  8B 32                     MOV ESI,dword ptr [EDX]
00605041  89 31                     MOV dword ptr [ECX],ESI
00605043  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
00605046  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
00605049  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
0060504C  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
0060504F  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
00605052  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
00605055  8B 83 15 02 00 00         MOV EAX,dword ptr [EBX + 0x215]
0060505B  85 C0                     TEST EAX,EAX
0060505D  74 15                     JZ 0x00605074
0060505F  8B 37                     MOV ESI,dword ptr [EDI]
00605061  83 C7 04                  ADD EDI,0x4
00605064  57                        PUSH EDI
00605065  6A 00                     PUSH 0x0
00605067  E8 F4 AF 0A 00            CALL 0x006b0060
0060506C  89 83 15 02 00 00         MOV dword ptr [EBX + 0x215],EAX
00605072  03 FE                     ADD EDI,ESI
LAB_00605074:
00605074  8B 83 69 02 00 00         MOV EAX,dword ptr [EBX + 0x269]
0060507A  85 C0                     TEST EAX,EAX
0060507C  74 4B                     JZ 0x006050c9
0060507E  33 F6                     XOR ESI,ESI
00605080  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
00605083  85 C0                     TEST EAX,EAX
00605085  7E 42                     JLE 0x006050c9
00605087  8D 8B 19 02 00 00         LEA ECX,[EBX + 0x219]
0060508D  8B D0                     MOV EDX,EAX
LAB_0060508f:
0060508F  83 39 00                  CMP dword ptr [ECX],0x0
00605092  74 0A                     JZ 0x0060509e
00605094  8B 07                     MOV EAX,dword ptr [EDI]
00605096  8D 74 06 04               LEA ESI,[ESI + EAX*0x1 + 0x4]
0060509A  8D 7C 07 04               LEA EDI,[EDI + EAX*0x1 + 0x4]
LAB_0060509e:
0060509E  83 C1 04                  ADD ECX,0x4
006050A1  4A                        DEC EDX
006050A2  75 EB                     JNZ 0x0060508f
006050A4  85 F6                     TEST ESI,ESI
006050A6  74 21                     JZ 0x006050c9
006050A8  56                        PUSH ESI
006050A9  E8 C2 5B 0A 00            CALL 0x006aac70
006050AE  8B CE                     MOV ECX,ESI
006050B0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006050B3  89 83 B3 02 00 00         MOV dword ptr [EBX + 0x2b3],EAX
006050B9  8B F8                     MOV EDI,EAX
006050BB  8B C1                     MOV EAX,ECX
006050BD  C1 E9 02                  SHR ECX,0x2
006050C0  F3 A5                     MOVSD.REP ES:EDI,ESI
006050C2  8B C8                     MOV ECX,EAX
006050C4  83 E1 03                  AND ECX,0x3
006050C7  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006050c9:
006050C9  5F                        POP EDI
006050CA  5E                        POP ESI
006050CB  33 C0                     XOR EAX,EAX
006050CD  5B                        POP EBX
006050CE  5D                        POP EBP
006050CF  C2 04 00                  RET 0x4
