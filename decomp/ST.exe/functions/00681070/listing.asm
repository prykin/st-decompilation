FUN_00681070:
00681070  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681076  8B C1                     MOV EAX,ECX
00681078  C1 E0 04                  SHL EAX,0x4
0068107B  03 C1                     ADD EAX,ECX
0068107D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681080  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681083  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681086  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681089  C1 E0 02                  SHL EAX,0x2
0068108C  83 B8 E8 1A 81 00 01      CMP dword ptr [EAX + 0x811ae8],0x1
00681093  75 6C                     JNZ 0x00681101
00681095  8B 88 7C 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c7c]
0068109B  83 F9 02                  CMP ECX,0x2
0068109E  7C 61                     JL 0x00681101
006810A0  83 F9 03                  CMP ECX,0x3
006810A3  7D 0A                     JGE 0x006810af
006810A5  C7 80 88 1C 81 00 0A 00 00 00  MOV dword ptr [EAX + 0x811c88],0xa
LAB_006810af:
006810AF  83 B8 7C 1C 81 00 04      CMP dword ptr [EAX + 0x811c7c],0x4
006810B6  7D 0A                     JGE 0x006810c2
006810B8  C7 80 8C 1C 81 00 08 00 00 00  MOV dword ptr [EAX + 0x811c8c],0x8
LAB_006810c2:
006810C2  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
006810C8  83 F9 01                  CMP ECX,0x1
006810CB  7C 34                     JL 0x00681101
006810CD  83 F9 03                  CMP ECX,0x3
006810D0  7F 2F                     JG 0x00681101
006810D2  8B 88 88 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c88]
006810D8  85 C9                     TEST ECX,ECX
006810DA  7D 0A                     JGE 0x006810e6
006810DC  C7 80 88 1C 81 00 00 00 00 00  MOV dword ptr [EAX + 0x811c88],0x0
LAB_006810e6:
006810E6  8B 90 88 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c88]
006810EC  B9 14 00 00 00            MOV ECX,0x14
006810F1  3B D1                     CMP EDX,ECX
006810F3  7C 06                     JL 0x006810fb
006810F5  89 88 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],ECX
LAB_006810fb:
006810FB  B8 01 00 00 00            MOV EAX,0x1
00681100  C3                        RET
LAB_00681101:
00681101  33 C0                     XOR EAX,EAX
00681103  C3                        RET
