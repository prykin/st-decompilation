FUN_00614950:
00614950  55                        PUSH EBP
00614951  8B EC                     MOV EBP,ESP
00614953  83 EC 08                  SUB ESP,0x8
00614956  53                        PUSH EBX
00614957  8B D9                     MOV EBX,ECX
00614959  56                        PUSH ESI
0061495A  57                        PUSH EDI
0061495B  8B 83 DD 02 00 00         MOV EAX,dword ptr [EBX + 0x2dd]
00614961  C7 45 FC 16 01 00 00      MOV dword ptr [EBP + -0x4],0x116
00614968  85 C0                     TEST EAX,EAX
0061496A  74 19                     JZ 0x00614985
0061496C  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
00614972  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00614979  2B C8                     SUB ECX,EAX
0061497B  8D 14 8D 16 01 00 00      LEA EDX,[ECX*0x4 + 0x116]
00614982  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00614985:
00614985  8B 83 E5 02 00 00         MOV EAX,dword ptr [EBX + 0x2e5]
0061498B  85 C0                     TEST EAX,EAX
0061498D  74 0F                     JZ 0x0061499e
0061498F  8B 83 E1 02 00 00         MOV EAX,dword ptr [EBX + 0x2e1]
00614995  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00614998  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
0061499B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0061499e:
0061499E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006149A1  50                        PUSH EAX
006149A2  E8 C9 62 09 00            CALL 0x006aac70
006149A7  85 DB                     TEST EBX,EBX
006149A9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006149AC  74 08                     JZ 0x006149b6
006149AE  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
006149B4  EB 02                     JMP 0x006149b8
LAB_006149b6:
006149B6  33 F6                     XOR ESI,ESI
LAB_006149b8:
006149B8  B9 45 00 00 00            MOV ECX,0x45
006149BD  8B F8                     MOV EDI,EAX
006149BF  F3 A5                     MOVSD.REP ES:EDI,ESI
006149C1  66 A5                     MOVSW ES:EDI,ESI
006149C3  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
006149CA  8B B3 DD 02 00 00         MOV ESI,dword ptr [EBX + 0x2dd]
006149D0  85 F6                     TEST ESI,ESI
006149D2  8D 90 16 01 00 00         LEA EDX,[EAX + 0x116]
006149D8  74 37                     JZ 0x00614a11
006149DA  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
006149E0  8B FA                     MOV EDI,EDX
006149E2  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
006149E9  2B C8                     SUB ECX,EAX
006149EB  C1 E1 02                  SHL ECX,0x2
006149EE  8B C1                     MOV EAX,ECX
006149F0  C1 E9 02                  SHR ECX,0x2
006149F3  F3 A5                     MOVSD.REP ES:EDI,ESI
006149F5  8B C8                     MOV ECX,EAX
006149F7  83 E1 03                  AND ECX,0x3
006149FA  F3 A4                     MOVSB.REP ES:EDI,ESI
006149FC  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
00614A02  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00614A09  2B C8                     SUB ECX,EAX
00614A0B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00614A0E  8D 14 8A                  LEA EDX,[EDX + ECX*0x4]
LAB_00614a11:
00614A11  8B B3 E5 02 00 00         MOV ESI,dword ptr [EBX + 0x2e5]
00614A17  85 F6                     TEST ESI,ESI
00614A19  74 19                     JZ 0x00614a34
00614A1B  8B 8B E1 02 00 00         MOV ECX,dword ptr [EBX + 0x2e1]
00614A21  8B FA                     MOV EDI,EDX
00614A23  C1 E1 02                  SHL ECX,0x2
00614A26  8B D1                     MOV EDX,ECX
00614A28  C1 E9 02                  SHR ECX,0x2
00614A2B  F3 A5                     MOVSD.REP ES:EDI,ESI
00614A2D  8B CA                     MOV ECX,EDX
00614A2F  83 E1 03                  AND ECX,0x3
00614A32  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00614a34:
00614A34  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00614A37  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00614A3A  5F                        POP EDI
00614A3B  5E                        POP ESI
00614A3C  89 11                     MOV dword ptr [ECX],EDX
00614A3E  5B                        POP EBX
00614A3F  8B E5                     MOV ESP,EBP
00614A41  5D                        POP EBP
00614A42  C2 04 00                  RET 0x4
