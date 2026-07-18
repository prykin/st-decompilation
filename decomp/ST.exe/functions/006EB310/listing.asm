FUN_006eb310:
006EB310  55                        PUSH EBP
006EB311  8B EC                     MOV EBP,ESP
006EB313  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EB316  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EB31C  3B D0                     CMP EDX,EAX
006EB31E  73 22                     JNC 0x006eb342
006EB320  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EB326  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EB329  C1 E0 03                  SHL EAX,0x3
006EB32C  2B C2                     SUB EAX,EDX
006EB32E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EB331  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EB334  8B 00                     MOV EAX,dword ptr [EAX]
006EB336  F6 C4 80                  TEST AH,0x80
006EB339  74 07                     JZ 0x006eb342
006EB33B  83 E0 01                  AND EAX,0x1
006EB33E  5D                        POP EBP
006EB33F  C2 04 00                  RET 0x4
LAB_006eb342:
006EB342  33 C0                     XOR EAX,EAX
006EB344  5D                        POP EBP
006EB345  C2 04 00                  RET 0x4
