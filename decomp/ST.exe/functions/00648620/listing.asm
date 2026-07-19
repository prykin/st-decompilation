BossDataPack:
00648620  55                        PUSH EBP
00648621  8B EC                     MOV EBP,ESP
00648623  83 EC 48                  SUB ESP,0x48
00648626  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064862B  53                        PUSH EBX
0064862C  56                        PUSH ESI
0064862D  57                        PUSH EDI
0064862E  8D 55 BC                  LEA EDX,[EBP + -0x44]
00648631  8D 4D B8                  LEA ECX,[EBP + -0x48]
00648634  6A 00                     PUSH 0x0
00648636  52                        PUSH EDX
00648637  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0064863E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00648641  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00648647  E8 A4 51 0E 00            CALL 0x0072d7f0
0064864C  8B F0                     MOV ESI,EAX
0064864E  83 C4 08                  ADD ESP,0x8
00648651  85 F6                     TEST ESI,ESI
00648653  75 7A                     JNZ 0x006486cf
00648655  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00648658  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0064865B  8D 83 85 00 00 00         LEA EAX,[EBX + 0x85]
00648661  50                        PUSH EAX
00648662  89 01                     MOV dword ptr [ECX],EAX
00648664  E8 A7 25 06 00            CALL 0x006aac10
00648669  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064866C  B9 21 00 00 00            MOV ECX,0x21
00648671  8B F8                     MOV EDI,EAX
00648673  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00648676  F3 A5                     MOVSD.REP ES:EDI,ESI
00648678  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0064867B  A4                        MOVSB ES:EDI,ESI
0064867C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064867F  8B 02                     MOV EAX,dword ptr [EDX]
00648681  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00648684  89 41 01                  MOV dword ptr [ECX + 0x1],EAX
00648687  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0064868A  89 5A 4A                  MOV dword ptr [EDX + 0x4a],EBX
0064868D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00648690  C6 40 05 00               MOV byte ptr [EAX + 0x5],0x0
00648694  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00648697  8D 81 84 00 00 00         LEA EAX,[ECX + 0x84]
0064869D  8B 49 4A                  MOV ECX,dword ptr [ECX + 0x4a]
006486A0  8B D1                     MOV EDX,ECX
006486A2  8B F8                     MOV EDI,EAX
006486A4  C1 E9 02                  SHR ECX,0x2
006486A7  F3 A5                     MOVSD.REP ES:EDI,ESI
006486A9  8B CA                     MOV ECX,EDX
006486AB  83 E1 03                  AND ECX,0x3
006486AE  F3 A4                     MOVSB.REP ES:EDI,ESI
006486B0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006486B3  2B C1                     SUB EAX,ECX
006486B5  2D 84 00 00 00            SUB EAX,0x84
006486BA  89 41 46                  MOV dword ptr [ECX + 0x46],EAX
006486BD  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006486C0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006486C5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006486C8  5F                        POP EDI
006486C9  5E                        POP ESI
006486CA  5B                        POP EBX
006486CB  8B E5                     MOV ESP,EBP
006486CD  5D                        POP EBP
006486CE  C3                        RET
LAB_006486cf:
006486CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006486D2  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006486D5  85 C0                     TEST EAX,EAX
006486D7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006486DD  74 09                     JZ 0x006486e8
006486DF  8D 55 FC                  LEA EDX,[EBP + -0x4]
006486E2  52                        PUSH EDX
006486E3  E8 78 29 06 00            CALL 0x006ab060
LAB_006486e8:
006486E8  68 18 28 7D 00            PUSH 0x7d2818
006486ED  68 CC 4C 7A 00            PUSH 0x7a4ccc
006486F2  56                        PUSH ESI
006486F3  6A 00                     PUSH 0x0
006486F5  6A 6B                     PUSH 0x6b
006486F7  68 F4 27 7D 00            PUSH 0x7d27f4
006486FC  E8 CF 4D 06 00            CALL 0x006ad4d0
00648701  83 C4 18                  ADD ESP,0x18
00648704  85 C0                     TEST EAX,EAX
00648706  74 01                     JZ 0x00648709
00648708  CC                        INT3
LAB_00648709:
00648709  6A 6C                     PUSH 0x6c
0064870B  68 F4 27 7D 00            PUSH 0x7d27f4
00648710  6A 00                     PUSH 0x0
00648712  56                        PUSH ESI
00648713  E8 28 D7 05 00            CALL 0x006a5e40
00648718  5F                        POP EDI
00648719  5E                        POP ESI
0064871A  33 C0                     XOR EAX,EAX
0064871C  5B                        POP EBX
0064871D  8B E5                     MOV ESP,EBP
0064871F  5D                        POP EBP
00648720  C3                        RET
