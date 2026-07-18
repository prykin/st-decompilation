FUN_00680ff0:
00680FF0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680FF6  8B C1                     MOV EAX,ECX
00680FF8  C1 E0 04                  SHL EAX,0x4
00680FFB  03 C1                     ADD EAX,ECX
00680FFD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681000  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681003  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681006  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00681009  83 3C 8D E8 1A 81 00 01   CMP dword ptr [ECX*0x4 + 0x811ae8],0x1
00681011  7D 2C                     JGE 0x0068103f
00681013  8B 15 34 D7 79 00         MOV EDX,dword ptr [0x0079d734]
00681019  52                        PUSH EDX
0068101A  E8 17 2E D8 FF            CALL 0x00403e36
0068101F  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
00681025  8B CA                     MOV ECX,EDX
00681027  C1 E1 04                  SHL ECX,0x4
0068102A  03 CA                     ADD ECX,EDX
0068102C  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0068102F  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00681032  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
00681035  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00681038  89 04 95 EC 1A 81 00      MOV dword ptr [EDX*0x4 + 0x811aec],EAX
LAB_0068103f:
0068103F  B8 01 00 00 00            MOV EAX,0x1
00681044  C3                        RET
