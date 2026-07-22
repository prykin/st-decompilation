STManRuinC::sub_00631390:
00631390  55                        PUSH EBP
00631391  8B EC                     MOV EBP,ESP
00631393  53                        PUSH EBX
00631394  8B D9                     MOV EBX,ECX
00631396  56                        PUSH ESI
00631397  57                        PUSH EDI
00631398  85 DB                     TEST EBX,EBX
0063139A  74 05                     JZ 0x006313a1
0063139C  8D 7B 1C                  LEA EDI,[EBX + 0x1c]
0063139F  EB 02                     JMP 0x006313a3
LAB_006313a1:
006313A1  33 FF                     XOR EDI,EDI
LAB_006313a3:
006313A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006313A6  B9 15 00 00 00            MOV ECX,0x15
006313AB  8B F0                     MOV ESI,EAX
006313AD  F3 A5                     MOVSD.REP ES:EDI,ESI
006313AF  A4                        MOVSB ES:EDI,ESI
006313B0  8D 70 55                  LEA ESI,[EAX + 0x55]
006313B3  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
006313B6  85 C0                     TEST EAX,EAX
006313B8  C7 43 3C 00 00 00 00      MOV dword ptr [EBX + 0x3c],0x0
006313BF  C7 43 61 FF FF FF FF      MOV dword ptr [EBX + 0x61],0xffffffff
006313C6  74 14                     JZ 0x006313dc
006313C8  8B FE                     MOV EDI,ESI
006313CA  83 C6 04                  ADD ESI,0x4
006313CD  56                        PUSH ESI
006313CE  6A 00                     PUSH 0x0
006313D0  E8 8B EC 07 00            CALL 0x006b0060
006313D5  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
006313D8  8B 07                     MOV EAX,dword ptr [EDI]
006313DA  03 F0                     ADD ESI,EAX
LAB_006313dc:
006313DC  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
006313DF  85 C0                     TEST EAX,EAX
006313E1  74 0C                     JZ 0x006313ef
006313E3  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
006313E6  50                        PUSH EAX
006313E7  E8 84 98 07 00            CALL 0x006aac70
006313EC  89 43 34                  MOV dword ptr [EBX + 0x34],EAX
LAB_006313ef:
006313EF  8B 7B 34                  MOV EDI,dword ptr [EBX + 0x34]
006313F2  85 FF                     TEST EDI,EDI
006313F4  74 11                     JZ 0x00631407
006313F6  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
006313F9  8B D1                     MOV EDX,ECX
006313FB  C1 E9 02                  SHR ECX,0x2
006313FE  F3 A5                     MOVSD.REP ES:EDI,ESI
00631400  8B CA                     MOV ECX,EDX
00631402  83 E1 03                  AND ECX,0x3
00631405  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00631407:
00631407  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
0063140A  5F                        POP EDI
0063140B  5E                        POP ESI
0063140C  5B                        POP EBX
0063140D  5D                        POP EBP
0063140E  C2 04 00                  RET 0x4
