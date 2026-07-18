FUN_006814a0:
006814A0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006814A6  33 D2                     XOR EDX,EDX
006814A8  8B C1                     MOV EAX,ECX
006814AA  C1 E0 04                  SHL EAX,0x4
006814AD  03 C1                     ADD EAX,ECX
006814AF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006814B2  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006814B5  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006814B8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006814BB  C1 E0 02                  SHL EAX,0x2
006814BE  83 B8 7C 1C 81 00 01      CMP dword ptr [EAX + 0x811c7c],0x1
006814C5  7D 06                     JGE 0x006814cd
006814C7  89 90 80 1C 81 00         MOV dword ptr [EAX + 0x811c80],EDX
LAB_006814cd:
006814CD  83 B8 7C 1C 81 00 02      CMP dword ptr [EAX + 0x811c7c],0x2
006814D4  7D 06                     JGE 0x006814dc
006814D6  89 90 84 1C 81 00         MOV dword ptr [EAX + 0x811c84],EDX
LAB_006814dc:
006814DC  83 B8 7C 1C 81 00 03      CMP dword ptr [EAX + 0x811c7c],0x3
006814E3  7D 06                     JGE 0x006814eb
006814E5  89 90 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],EDX
LAB_006814eb:
006814EB  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
006814F1  3B CA                     CMP ECX,EDX
006814F3  7C 19                     JL 0x0068150e
006814F5  83 F9 02                  CMP ECX,0x2
006814F8  7F 14                     JG 0x0068150e
006814FA  39 90 88 1C 81 00         CMP dword ptr [EAX + 0x811c88],EDX
00681500  7D 06                     JGE 0x00681508
00681502  89 90 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],EDX
LAB_00681508:
00681508  B8 01 00 00 00            MOV EAX,0x1
0068150D  C3                        RET
LAB_0068150e:
0068150E  33 C0                     XOR EAX,EAX
00681510  C3                        RET
