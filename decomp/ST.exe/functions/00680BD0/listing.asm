FUN_00680bd0:
00680BD0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680BD6  8B C1                     MOV EAX,ECX
00680BD8  C1 E0 04                  SHL EAX,0x4
00680BDB  03 C1                     ADD EAX,ECX
00680BDD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680BE0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680BE3  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680BE6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00680BE9  8A 04 8D C8 3B 81 00      MOV AL,byte ptr [ECX*0x4 + 0x813bc8]
00680BF0  3C 02                     CMP AL,0x2
00680BF2  74 07                     JZ 0x00680bfb
00680BF4  3C 04                     CMP AL,0x4
00680BF6  74 03                     JZ 0x00680bfb
00680BF8  33 C0                     XOR EAX,EAX
00680BFA  C3                        RET
LAB_00680bfb:
00680BFB  B8 01 00 00 00            MOV EAX,0x1
00680C00  C3                        RET
