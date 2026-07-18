FUN_006819a0:
006819A0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006819A6  8B C1                     MOV EAX,ECX
006819A8  C1 E0 04                  SHL EAX,0x4
006819AB  03 C1                     ADD EAX,ECX
006819AD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006819B0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006819B3  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006819B6  33 C9                     XOR ECX,ECX
006819B8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006819BB  C1 E0 02                  SHL EAX,0x2
006819BE  83 B8 7C 1C 81 00 01      CMP dword ptr [EAX + 0x811c7c],0x1
006819C5  7D 06                     JGE 0x006819cd
006819C7  89 88 80 1C 81 00         MOV dword ptr [EAX + 0x811c80],ECX
LAB_006819cd:
006819CD  83 B8 7C 1C 81 00 02      CMP dword ptr [EAX + 0x811c7c],0x2
006819D4  7D 06                     JGE 0x006819dc
006819D6  89 88 84 1C 81 00         MOV dword ptr [EAX + 0x811c84],ECX
LAB_006819dc:
006819DC  83 B8 7C 1C 81 00 03      CMP dword ptr [EAX + 0x811c7c],0x3
006819E3  7D 06                     JGE 0x006819eb
006819E5  89 88 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],ECX
LAB_006819eb:
006819EB  56                        PUSH ESI
006819EC  8B B0 7C 1C 81 00         MOV ESI,dword ptr [EAX + 0x811c7c]
006819F2  83 FE 04                  CMP ESI,0x4
006819F5  BA 07 00 00 00            MOV EDX,0x7
006819FA  5E                        POP ESI
006819FB  7D 06                     JGE 0x00681a03
006819FD  89 90 8C 1C 81 00         MOV dword ptr [EAX + 0x811c8c],EDX
LAB_00681a03:
00681A03  57                        PUSH EDI
00681A04  8B B8 7C 1C 81 00         MOV EDI,dword ptr [EAX + 0x811c7c]
00681A0A  83 FF 05                  CMP EDI,0x5
00681A0D  7D 06                     JGE 0x00681a15
00681A0F  89 90 90 1C 81 00         MOV dword ptr [EAX + 0x811c90],EDX
LAB_00681a15:
00681A15  83 B8 7C 1C 81 00 06      CMP dword ptr [EAX + 0x811c7c],0x6
00681A1C  7D 0A                     JGE 0x00681a28
00681A1E  C7 80 94 1C 81 00 05 00 00 00  MOV dword ptr [EAX + 0x811c94],0x5
LAB_00681a28:
00681A28  39 88 80 1C 81 00         CMP dword ptr [EAX + 0x811c80],ECX
00681A2E  7D 06                     JGE 0x00681a36
00681A30  89 88 80 1C 81 00         MOV dword ptr [EAX + 0x811c80],ECX
LAB_00681a36:
00681A36  39 88 84 1C 81 00         CMP dword ptr [EAX + 0x811c84],ECX
00681A3C  7D 06                     JGE 0x00681a44
00681A3E  89 88 84 1C 81 00         MOV dword ptr [EAX + 0x811c84],ECX
LAB_00681a44:
00681A44  39 88 88 1C 81 00         CMP dword ptr [EAX + 0x811c88],ECX
00681A4A  7D 06                     JGE 0x00681a52
00681A4C  89 88 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],ECX
LAB_00681a52:
00681A52  39 88 8C 1C 81 00         CMP dword ptr [EAX + 0x811c8c],ECX
00681A58  7F 06                     JG 0x00681a60
00681A5A  89 90 8C 1C 81 00         MOV dword ptr [EAX + 0x811c8c],EDX
LAB_00681a60:
00681A60  8B B8 90 1C 81 00         MOV EDI,dword ptr [EAX + 0x811c90]
00681A66  3B F9                     CMP EDI,ECX
00681A68  5F                        POP EDI
00681A69  7F 06                     JG 0x00681a71
00681A6B  89 90 90 1C 81 00         MOV dword ptr [EAX + 0x811c90],EDX
LAB_00681a71:
00681A71  39 88 94 1C 81 00         CMP dword ptr [EAX + 0x811c94],ECX
00681A77  7F 0A                     JG 0x00681a83
00681A79  C7 80 94 1C 81 00 05 00 00 00  MOV dword ptr [EAX + 0x811c94],0x5
LAB_00681a83:
00681A83  B8 01 00 00 00            MOV EAX,0x1
00681A88  C3                        RET
