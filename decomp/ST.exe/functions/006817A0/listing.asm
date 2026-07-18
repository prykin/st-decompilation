FUN_006817a0:
006817A0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006817A6  56                        PUSH ESI
006817A7  8B C1                     MOV EAX,ECX
006817A9  33 F6                     XOR ESI,ESI
006817AB  C1 E0 04                  SHL EAX,0x4
006817AE  03 C1                     ADD EAX,ECX
006817B0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006817B3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006817B6  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006817B9  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006817BC  B8 01 00 00 00            MOV EAX,0x1
006817C1  C1 E1 02                  SHL ECX,0x2
006817C4  39 81 7C 1C 81 00         CMP dword ptr [ECX + 0x811c7c],EAX
006817CA  7D 06                     JGE 0x006817d2
006817CC  89 B1 80 1C 81 00         MOV dword ptr [ECX + 0x811c80],ESI
LAB_006817d2:
006817D2  83 B9 7C 1C 81 00 02      CMP dword ptr [ECX + 0x811c7c],0x2
006817D9  7D 06                     JGE 0x006817e1
006817DB  89 81 84 1C 81 00         MOV dword ptr [ECX + 0x811c84],EAX
LAB_006817e1:
006817E1  83 B9 7C 1C 81 00 03      CMP dword ptr [ECX + 0x811c7c],0x3
006817E8  7D 06                     JGE 0x006817f0
006817EA  89 81 88 1C 81 00         MOV dword ptr [ECX + 0x811c88],EAX
LAB_006817f0:
006817F0  83 B9 7C 1C 81 00 04      CMP dword ptr [ECX + 0x811c7c],0x4
006817F7  7D 06                     JGE 0x006817ff
006817F9  89 B1 8C 1C 81 00         MOV dword ptr [ECX + 0x811c8c],ESI
LAB_006817ff:
006817FF  83 B9 7C 1C 81 00 05      CMP dword ptr [ECX + 0x811c7c],0x5
00681806  7D 06                     JGE 0x0068180e
00681808  89 81 90 1C 81 00         MOV dword ptr [ECX + 0x811c90],EAX
LAB_0068180e:
0068180E  83 B9 7C 1C 81 00 06      CMP dword ptr [ECX + 0x811c7c],0x6
00681815  7D 06                     JGE 0x0068181d
00681817  89 B1 94 1C 81 00         MOV dword ptr [ECX + 0x811c94],ESI
LAB_0068181d:
0068181D  8B 91 80 1C 81 00         MOV EDX,dword ptr [ECX + 0x811c80]
00681823  3B D6                     CMP EDX,ESI
00681825  7C 3F                     JL 0x00681866
00681827  83 FA 02                  CMP EDX,0x2
0068182A  7F 3A                     JG 0x00681866
0068182C  39 B1 88 1C 81 00         CMP dword ptr [ECX + 0x811c88],ESI
00681832  7D 06                     JGE 0x0068183a
00681834  89 81 88 1C 81 00         MOV dword ptr [ECX + 0x811c88],EAX
LAB_0068183a:
0068183A  39 B1 8C 1C 81 00         CMP dword ptr [ECX + 0x811c8c],ESI
00681840  7D 06                     JGE 0x00681848
00681842  89 B1 8C 1C 81 00         MOV dword ptr [ECX + 0x811c8c],ESI
LAB_00681848:
00681848  39 B1 90 1C 81 00         CMP dword ptr [ECX + 0x811c90],ESI
0068184E  7D 06                     JGE 0x00681856
00681850  89 81 90 1C 81 00         MOV dword ptr [ECX + 0x811c90],EAX
LAB_00681856:
00681856  39 B1 94 1C 81 00         CMP dword ptr [ECX + 0x811c94],ESI
0068185C  7D 0A                     JGE 0x00681868
0068185E  89 B1 94 1C 81 00         MOV dword ptr [ECX + 0x811c94],ESI
00681864  5E                        POP ESI
00681865  C3                        RET
LAB_00681866:
00681866  33 C0                     XOR EAX,EAX
LAB_00681868:
00681868  5E                        POP ESI
00681869  C3                        RET
