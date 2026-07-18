FUN_00631220:
00631220  55                        PUSH EBP
00631221  8B EC                     MOV EBP,ESP
00631223  83 EC 14                  SUB ESP,0x14
00631226  53                        PUSH EBX
00631227  8B D9                     MOV EBX,ECX
00631229  56                        PUSH ESI
0063122A  57                        PUSH EDI
0063122B  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
0063122E  33 FF                     XOR EDI,EDI
00631230  BE 55 00 00 00            MOV ESI,0x55
00631235  3B CF                     CMP ECX,EDI
00631237  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0063123A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0063123D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00631240  74 14                     JZ 0x00631256
00631242  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00631245  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
00631249  83 C0 20                  ADD EAX,0x20
0063124C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063124F  03 C6                     ADD EAX,ESI
00631251  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00631254  8B F0                     MOV ESI,EAX
LAB_00631256:
00631256  39 7B 34                  CMP dword ptr [EBX + 0x34],EDI
00631259  74 06                     JZ 0x00631261
0063125B  03 73 30                  ADD ESI,dword ptr [EBX + 0x30]
0063125E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_00631261:
00631261  56                        PUSH ESI
00631262  E8 09 9A 07 00            CALL 0x006aac70
00631267  8B 4B 71                  MOV ECX,dword ptr [EBX + 0x71]
0063126A  3B C7                     CMP EAX,EDI
0063126C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0063126F  89 4B 65                  MOV dword ptr [EBX + 0x65],ECX
00631272  0F 84 AD 00 00 00         JZ 0x00631325
00631278  3B DF                     CMP EBX,EDI
0063127A  C7 43 28 02 00 00 00      MOV dword ptr [EBX + 0x28],0x2
00631281  74 05                     JZ 0x00631288
00631283  8D 73 1C                  LEA ESI,[EBX + 0x1c]
00631286  EB 02                     JMP 0x0063128a
LAB_00631288:
00631288  33 F6                     XOR ESI,ESI
LAB_0063128a:
0063128A  B9 15 00 00 00            MOV ECX,0x15
0063128F  8B F8                     MOV EDI,EAX
00631291  F3 A5                     MOVSD.REP ES:EDI,ESI
00631293  A4                        MOVSB ES:EDI,ESI
00631294  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
00631297  C7 43 61 FF FF FF FF      MOV dword ptr [EBX + 0x61],0xffffffff
0063129E  85 C9                     TEST ECX,ECX
006312A0  74 45                     JZ 0x006312e7
006312A2  8D 55 FC                  LEA EDX,[EBP + -0x4]
006312A5  52                        PUSH EDX
006312A6  51                        PUSH ECX
006312A7  E8 74 ED 07 00            CALL 0x006b0020
006312AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006312AF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006312B2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006312B5  89 48 55                  MOV dword ptr [EAX + 0x55],ECX
006312B8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006312BB  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006312BE  83 C0 59                  ADD EAX,0x59
006312C1  8B D1                     MOV EDX,ECX
006312C3  8B F8                     MOV EDI,EAX
006312C5  C1 E9 02                  SHR ECX,0x2
006312C8  F3 A5                     MOVSD.REP ES:EDI,ESI
006312CA  8B CA                     MOV ECX,EDX
006312CC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006312CF  83 E1 03                  AND ECX,0x3
006312D2  F3 A4                     MOVSB.REP ES:EDI,ESI
006312D4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006312D7  85 C0                     TEST EAX,EAX
006312D9  74 09                     JZ 0x006312e4
006312DB  8D 45 F0                  LEA EAX,[EBP + -0x10]
006312DE  50                        PUSH EAX
006312DF  E8 7C 9D 07 00            CALL 0x006ab060
LAB_006312e4:
006312E4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_006312e7:
006312E7  8B 73 34                  MOV ESI,dword ptr [EBX + 0x34]
006312EA  85 F6                     TEST ESI,ESI
006312EC  74 26                     JZ 0x00631314
006312EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006312F1  85 C9                     TEST ECX,ECX
006312F3  74 05                     JZ 0x006312fa
006312F5  01 4D F8                  ADD dword ptr [EBP + -0x8],ECX
006312F8  EB 06                     JMP 0x00631300
LAB_006312fa:
006312FA  8D 48 55                  LEA ECX,[EAX + 0x55]
006312FD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00631300:
00631300  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
00631303  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00631306  8B D1                     MOV EDX,ECX
00631308  C1 E9 02                  SHR ECX,0x2
0063130B  F3 A5                     MOVSD.REP ES:EDI,ESI
0063130D  8B CA                     MOV ECX,EDX
0063130F  83 E1 03                  AND ECX,0x3
00631312  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00631314:
00631314  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00631317  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0063131A  5F                        POP EDI
0063131B  5E                        POP ESI
0063131C  89 11                     MOV dword ptr [ECX],EDX
0063131E  5B                        POP EBX
0063131F  8B E5                     MOV ESP,EBP
00631321  5D                        POP EBP
00631322  C2 04 00                  RET 0x4
LAB_00631325:
00631325  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00631328  5F                        POP EDI
00631329  89 31                     MOV dword ptr [ECX],ESI
0063132B  5E                        POP ESI
0063132C  5B                        POP EBX
0063132D  8B E5                     MOV ESP,EBP
0063132F  5D                        POP EBP
00631330  C2 04 00                  RET 0x4
