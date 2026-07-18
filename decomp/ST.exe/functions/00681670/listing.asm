FUN_00681670:
00681670  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681676  56                        PUSH ESI
00681677  8B C1                     MOV EAX,ECX
00681679  33 F6                     XOR ESI,ESI
0068167B  C1 E0 04                  SHL EAX,0x4
0068167E  03 C1                     ADD EAX,ECX
00681680  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681683  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681686  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681689  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068168C  B8 01 00 00 00            MOV EAX,0x1
00681691  C1 E1 02                  SHL ECX,0x2
00681694  39 81 7C 1C 81 00         CMP dword ptr [ECX + 0x811c7c],EAX
0068169A  7D 06                     JGE 0x006816a2
0068169C  89 B1 80 1C 81 00         MOV dword ptr [ECX + 0x811c80],ESI
LAB_006816a2:
006816A2  83 B9 7C 1C 81 00 02      CMP dword ptr [ECX + 0x811c7c],0x2
006816A9  7D 0A                     JGE 0x006816b5
006816AB  C7 81 84 1C 81 00 FF FF FF 3F  MOV dword ptr [ECX + 0x811c84],0x3fffffff
LAB_006816b5:
006816B5  83 B9 7C 1C 81 00 03      CMP dword ptr [ECX + 0x811c7c],0x3
006816BC  7D 06                     JGE 0x006816c4
006816BE  89 81 88 1C 81 00         MOV dword ptr [ECX + 0x811c88],EAX
LAB_006816c4:
006816C4  83 B9 7C 1C 81 00 04      CMP dword ptr [ECX + 0x811c7c],0x4
006816CB  7D 06                     JGE 0x006816d3
006816CD  89 B1 8C 1C 81 00         MOV dword ptr [ECX + 0x811c8c],ESI
LAB_006816d3:
006816D3  83 B9 7C 1C 81 00 05      CMP dword ptr [ECX + 0x811c7c],0x5
006816DA  7D 06                     JGE 0x006816e2
006816DC  89 81 90 1C 81 00         MOV dword ptr [ECX + 0x811c90],EAX
LAB_006816e2:
006816E2  83 B9 7C 1C 81 00 06      CMP dword ptr [ECX + 0x811c7c],0x6
006816E9  7D 06                     JGE 0x006816f1
006816EB  89 B1 94 1C 81 00         MOV dword ptr [ECX + 0x811c94],ESI
LAB_006816f1:
006816F1  83 B9 7C 1C 81 00 07      CMP dword ptr [ECX + 0x811c7c],0x7
006816F8  7D 06                     JGE 0x00681700
006816FA  89 B1 98 1C 81 00         MOV dword ptr [ECX + 0x811c98],ESI
LAB_00681700:
00681700  8B 91 80 1C 81 00         MOV EDX,dword ptr [ECX + 0x811c80]
00681706  3B D6                     CMP EDX,ESI
00681708  7C 4D                     JL 0x00681757
0068170A  83 FA 02                  CMP EDX,0x2
0068170D  7F 48                     JG 0x00681757
0068170F  39 B1 88 1C 81 00         CMP dword ptr [ECX + 0x811c88],ESI
00681715  7D 06                     JGE 0x0068171d
00681717  89 81 88 1C 81 00         MOV dword ptr [ECX + 0x811c88],EAX
LAB_0068171d:
0068171D  39 B1 8C 1C 81 00         CMP dword ptr [ECX + 0x811c8c],ESI
00681723  7D 06                     JGE 0x0068172b
00681725  89 B1 8C 1C 81 00         MOV dword ptr [ECX + 0x811c8c],ESI
LAB_0068172b:
0068172B  39 B1 90 1C 81 00         CMP dword ptr [ECX + 0x811c90],ESI
00681731  7D 06                     JGE 0x00681739
00681733  89 81 90 1C 81 00         MOV dword ptr [ECX + 0x811c90],EAX
LAB_00681739:
00681739  39 B1 94 1C 81 00         CMP dword ptr [ECX + 0x811c94],ESI
0068173F  7D 06                     JGE 0x00681747
00681741  89 B1 94 1C 81 00         MOV dword ptr [ECX + 0x811c94],ESI
LAB_00681747:
00681747  39 B1 98 1C 81 00         CMP dword ptr [ECX + 0x811c98],ESI
0068174D  7D 0A                     JGE 0x00681759
0068174F  89 B1 98 1C 81 00         MOV dword ptr [ECX + 0x811c98],ESI
00681755  5E                        POP ESI
00681756  C3                        RET
LAB_00681757:
00681757  33 C0                     XOR EAX,EAX
LAB_00681759:
00681759  5E                        POP ESI
0068175A  C3                        RET
