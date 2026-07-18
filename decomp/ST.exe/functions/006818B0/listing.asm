FUN_006818b0:
006818B0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006818B6  56                        PUSH ESI
006818B7  8B C1                     MOV EAX,ECX
006818B9  33 F6                     XOR ESI,ESI
006818BB  C1 E0 04                  SHL EAX,0x4
006818BE  03 C1                     ADD EAX,ECX
006818C0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006818C3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006818C6  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006818C9  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006818CC  B8 01 00 00 00            MOV EAX,0x1
006818D1  C1 E1 02                  SHL ECX,0x2
006818D4  39 81 7C 1C 81 00         CMP dword ptr [ECX + 0x811c7c],EAX
006818DA  7D 06                     JGE 0x006818e2
006818DC  89 B1 80 1C 81 00         MOV dword ptr [ECX + 0x811c80],ESI
LAB_006818e2:
006818E2  83 B9 7C 1C 81 00 02      CMP dword ptr [ECX + 0x811c7c],0x2
006818E9  7D 0A                     JGE 0x006818f5
006818EB  C7 81 84 1C 81 00 FF FF FF 3F  MOV dword ptr [ECX + 0x811c84],0x3fffffff
LAB_006818f5:
006818F5  83 B9 7C 1C 81 00 03      CMP dword ptr [ECX + 0x811c7c],0x3
006818FC  7D 06                     JGE 0x00681904
006818FE  89 81 88 1C 81 00         MOV dword ptr [ECX + 0x811c88],EAX
LAB_00681904:
00681904  83 B9 7C 1C 81 00 04      CMP dword ptr [ECX + 0x811c7c],0x4
0068190B  7D 06                     JGE 0x00681913
0068190D  89 B1 8C 1C 81 00         MOV dword ptr [ECX + 0x811c8c],ESI
LAB_00681913:
00681913  83 B9 7C 1C 81 00 05      CMP dword ptr [ECX + 0x811c7c],0x5
0068191A  7D 06                     JGE 0x00681922
0068191C  89 B1 90 1C 81 00         MOV dword ptr [ECX + 0x811c90],ESI
LAB_00681922:
00681922  8B 91 80 1C 81 00         MOV EDX,dword ptr [ECX + 0x811c80]
00681928  3B D6                     CMP EDX,ESI
0068192A  7C 31                     JL 0x0068195d
0068192C  83 FA 02                  CMP EDX,0x2
0068192F  7F 2C                     JG 0x0068195d
00681931  39 B1 88 1C 81 00         CMP dword ptr [ECX + 0x811c88],ESI
00681937  7D 06                     JGE 0x0068193f
00681939  89 81 88 1C 81 00         MOV dword ptr [ECX + 0x811c88],EAX
LAB_0068193f:
0068193F  39 B1 8C 1C 81 00         CMP dword ptr [ECX + 0x811c8c],ESI
00681945  7D 06                     JGE 0x0068194d
00681947  89 B1 8C 1C 81 00         MOV dword ptr [ECX + 0x811c8c],ESI
LAB_0068194d:
0068194D  39 B1 90 1C 81 00         CMP dword ptr [ECX + 0x811c90],ESI
00681953  7D 0A                     JGE 0x0068195f
00681955  89 B1 90 1C 81 00         MOV dword ptr [ECX + 0x811c90],ESI
0068195B  5E                        POP ESI
0068195C  C3                        RET
LAB_0068195d:
0068195D  33 C0                     XOR EAX,EAX
LAB_0068195f:
0068195F  5E                        POP ESI
00681960  C3                        RET
