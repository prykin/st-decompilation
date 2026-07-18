FUN_00681280:
00681280  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681286  8B C1                     MOV EAX,ECX
00681288  C1 E0 04                  SHL EAX,0x4
0068128B  03 C1                     ADD EAX,ECX
0068128D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681290  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681293  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681296  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681299  C1 E0 02                  SHL EAX,0x2
0068129C  83 B8 7C 1C 81 00 01      CMP dword ptr [EAX + 0x811c7c],0x1
006812A3  7C 15                     JL 0x006812ba
006812A5  8B 80 80 1C 81 00         MOV EAX,dword ptr [EAX + 0x811c80]
006812AB  85 C0                     TEST EAX,EAX
006812AD  7C 0B                     JL 0x006812ba
006812AF  83 F8 02                  CMP EAX,0x2
006812B2  7F 06                     JG 0x006812ba
006812B4  B8 01 00 00 00            MOV EAX,0x1
006812B9  C3                        RET
LAB_006812ba:
006812BA  33 C0                     XOR EAX,EAX
006812BC  C3                        RET
