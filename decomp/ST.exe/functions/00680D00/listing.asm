FUN_00680d00:
00680D00  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680D06  8B C1                     MOV EAX,ECX
00680D08  C1 E0 04                  SHL EAX,0x4
00680D0B  03 C1                     ADD EAX,ECX
00680D0D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680D10  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680D13  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680D16  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00680D19  33 C0                     XOR EAX,EAX
00680D1B  83 3C 8D 7C 1C 81 00 01   CMP dword ptr [ECX*0x4 + 0x811c7c],0x1
00680D23  0F 94 C0                  SETZ AL
00680D26  C3                        RET
