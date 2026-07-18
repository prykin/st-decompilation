FUN_00681400:
00681400  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681406  33 D2                     XOR EDX,EDX
00681408  8B C1                     MOV EAX,ECX
0068140A  C1 E0 04                  SHL EAX,0x4
0068140D  03 C1                     ADD EAX,ECX
0068140F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681412  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681415  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681418  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068141B  C1 E0 02                  SHL EAX,0x2
0068141E  83 B8 7C 1C 81 00 01      CMP dword ptr [EAX + 0x811c7c],0x1
00681425  7D 06                     JGE 0x0068142d
00681427  89 90 80 1C 81 00         MOV dword ptr [EAX + 0x811c80],EDX
LAB_0068142d:
0068142D  83 B8 7C 1C 81 00 02      CMP dword ptr [EAX + 0x811c7c],0x2
00681434  7D 0A                     JGE 0x00681440
00681436  C7 80 84 1C 81 00 DD 00 00 00  MOV dword ptr [EAX + 0x811c84],0xdd
LAB_00681440:
00681440  83 B8 7C 1C 81 00 03      CMP dword ptr [EAX + 0x811c7c],0x3
00681447  7D 06                     JGE 0x0068144f
00681449  89 90 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],EDX
LAB_0068144f:
0068144F  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
00681455  3B CA                     CMP ECX,EDX
00681457  7C 19                     JL 0x00681472
00681459  83 F9 02                  CMP ECX,0x2
0068145C  7F 14                     JG 0x00681472
0068145E  39 90 88 1C 81 00         CMP dword ptr [EAX + 0x811c88],EDX
00681464  7D 06                     JGE 0x0068146c
00681466  89 90 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],EDX
LAB_0068146c:
0068146C  B8 01 00 00 00            MOV EAX,0x1
00681471  C3                        RET
LAB_00681472:
00681472  33 C0                     XOR EAX,EAX
00681474  C3                        RET
