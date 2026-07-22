TLOBaseTy::sub_004C34A0:
004C34A0  55                        PUSH EBP
004C34A1  8B EC                     MOV EBP,ESP
004C34A3  53                        PUSH EBX
004C34A4  56                        PUSH ESI
004C34A5  8B B1 59 02 00 00         MOV ESI,dword ptr [ECX + 0x259]
004C34AB  B8 89 88 88 88            MOV EAX,0x88888889
004C34B0  F7 EE                     IMUL ESI
004C34B2  03 D6                     ADD EDX,ESI
004C34B4  57                        PUSH EDI
004C34B5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004C34B8  C1 FA 03                  SAR EDX,0x3
004C34BB  8B C2                     MOV EAX,EDX
004C34BD  C1 E8 1F                  SHR EAX,0x1f
004C34C0  03 D0                     ADD EDX,EAX
004C34C2  B8 89 88 88 88            MOV EAX,0x88888889
004C34C7  8B F2                     MOV ESI,EDX
004C34C9  F7 EF                     IMUL EDI
004C34CB  03 D7                     ADD EDX,EDI
004C34CD  8D 1C 76                  LEA EBX,[ESI + ESI*0x2]
004C34D0  C1 FA 03                  SAR EDX,0x3
004C34D3  8B C2                     MOV EAX,EDX
004C34D5  C1 E8 1F                  SHR EAX,0x1f
004C34D8  03 D0                     ADD EDX,EAX
004C34DA  8D 14 DA                  LEA EDX,[EDX + EBX*0x8]
004C34DD  8B 04 95 C8 E8 7B 00      MOV EAX,dword ptr [EDX*0x4 + 0x7be8c8]
004C34E4  85 C0                     TEST EAX,EAX
004C34E6  74 4F                     JZ 0x004c3537
004C34E8  33 D2                     XOR EDX,EDX
004C34EA  BF 01 00 00 00            MOV EDI,0x1
004C34EF  85 C0                     TEST EAX,EAX
004C34F1  0F 9E C2                  SETLE DL
004C34F4  4A                        DEC EDX
004C34F5  83 E2 02                  AND EDX,0x2
004C34F8  4A                        DEC EDX
004C34F9  8B C2                     MOV EAX,EDX
004C34FB  03 C6                     ADD EAX,ESI
004C34FD  83 F8 17                  CMP EAX,0x17
004C3500  7E 17                     JLE 0x004c3519
004C3502  33 C0                     XOR EAX,EAX
004C3504  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C3507  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004C350A  50                        PUSH EAX
004C350B  E8 C0 05 F4 FF            CALL 0x00403ad0
004C3510  8B C7                     MOV EAX,EDI
004C3512  5F                        POP EDI
004C3513  5E                        POP ESI
004C3514  5B                        POP EBX
004C3515  5D                        POP EBP
004C3516  C2 04 00                  RET 0x4
LAB_004c3519:
004C3519  85 C0                     TEST EAX,EAX
004C351B  7D 05                     JGE 0x004c3522
004C351D  B8 17 00 00 00            MOV EAX,0x17
LAB_004c3522:
004C3522  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C3525  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004C3528  50                        PUSH EAX
004C3529  E8 A2 05 F4 FF            CALL 0x00403ad0
004C352E  8B C7                     MOV EAX,EDI
004C3530  5F                        POP EDI
004C3531  5E                        POP ESI
004C3532  5B                        POP EBX
004C3533  5D                        POP EBP
004C3534  C2 04 00                  RET 0x4
LAB_004c3537:
004C3537  5F                        POP EDI
004C3538  5E                        POP ESI
004C3539  33 C0                     XOR EAX,EAX
004C353B  5B                        POP EBX
004C353C  5D                        POP EBP
004C353D  C2 04 00                  RET 0x4
