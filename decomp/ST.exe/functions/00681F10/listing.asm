FUN_00681f10:
00681F10  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681F16  8B C1                     MOV EAX,ECX
00681F18  C1 E0 04                  SHL EAX,0x4
00681F1B  03 C1                     ADD EAX,ECX
00681F1D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681F20  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681F23  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681F26  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00681F29  33 C0                     XOR EAX,EAX
00681F2B  83 3C 8D E8 1A 81 00 01   CMP dword ptr [ECX*0x4 + 0x811ae8],0x1
00681F33  0F 9D C0                  SETGE AL
00681F36  C3                        RET
