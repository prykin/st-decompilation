FUN_0058d080:
0058D080  55                        PUSH EBP
0058D081  8B EC                     MOV EBP,ESP
0058D083  A1 20 17 81 00            MOV EAX,[0x00811720]
0058D088  56                        PUSH ESI
0058D089  57                        PUSH EDI
0058D08A  8D 50 FF                  LEA EDX,[EAX + -0x1]
0058D08D  8B C2                     MOV EAX,EDX
0058D08F  85 C0                     TEST EAX,EAX
0058D091  7C 18                     JL 0x0058d0ab
0058D093  8B 3D 18 17 81 00         MOV EDI,dword ptr [0x00811718]
0058D099  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0058D09C  8D 0C 87                  LEA ECX,[EDI + EAX*0x4]
LAB_0058d09f:
0058D09F  3B 31                     CMP ESI,dword ptr [ECX]
0058D0A1  74 0E                     JZ 0x0058d0b1
0058D0A3  48                        DEC EAX
0058D0A4  83 E9 04                  SUB ECX,0x4
0058D0A7  85 C0                     TEST EAX,EAX
0058D0A9  7D F4                     JGE 0x0058d09f
LAB_0058d0ab:
0058D0AB  5F                        POP EDI
0058D0AC  33 C0                     XOR EAX,EAX
0058D0AE  5E                        POP ESI
0058D0AF  5D                        POP EBP
0058D0B0  C3                        RET
LAB_0058d0b1:
0058D0B1  8B CA                     MOV ECX,EDX
0058D0B3  89 15 20 17 81 00         MOV dword ptr [0x00811720],EDX
0058D0B9  2B C8                     SUB ECX,EAX
0058D0BB  85 C9                     TEST ECX,ECX
0058D0BD  7E 35                     JLE 0x0058d0f4
0058D0BF  8D 74 87 04               LEA ESI,[EDI + EAX*0x4 + 0x4]
0058D0C3  8D 3C 87                  LEA EDI,[EDI + EAX*0x4]
0058D0C6  F3 A5                     MOVSD.REP ES:EDI,ESI
0058D0C8  8B 0D 20 17 81 00         MOV ECX,dword ptr [0x00811720]
0058D0CE  8B 15 1C 17 81 00         MOV EDX,dword ptr [0x0081171c]
0058D0D4  2B C8                     SUB ECX,EAX
0058D0D6  C1 E1 02                  SHL ECX,0x2
0058D0D9  8D 74 82 04               LEA ESI,[EDX + EAX*0x4 + 0x4]
0058D0DD  8D 3C 82                  LEA EDI,[EDX + EAX*0x4]
0058D0E0  8B D1                     MOV EDX,ECX
0058D0E2  C1 E9 02                  SHR ECX,0x2
0058D0E5  F3 A5                     MOVSD.REP ES:EDI,ESI
0058D0E7  8B CA                     MOV ECX,EDX
0058D0E9  83 E1 03                  AND ECX,0x3
0058D0EC  F3 A4                     MOVSB.REP ES:EDI,ESI
0058D0EE  8B 15 20 17 81 00         MOV EDX,dword ptr [0x00811720]
LAB_0058d0f4:
0058D0F4  85 D2                     TEST EDX,EDX
0058D0F6  75 28                     JNZ 0x0058d120
0058D0F8  68 18 17 81 00            PUSH 0x811718
0058D0FD  E8 5E DF 11 00            CALL 0x006ab060
0058D102  68 1C 17 81 00            PUSH 0x81171c
0058D107  C7 05 18 17 81 00 00 00 00 00  MOV dword ptr [0x00811718],0x0
0058D111  E8 4A DF 11 00            CALL 0x006ab060
0058D116  C7 05 1C 17 81 00 00 00 00 00  MOV dword ptr [0x0081171c],0x0
LAB_0058d120:
0058D120  5F                        POP EDI
0058D121  B8 01 00 00 00            MOV EAX,0x1
0058D126  5E                        POP ESI
0058D127  5D                        POP EBP
0058D128  C3                        RET
