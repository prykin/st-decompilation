FUN_004e4330:
004E4330  55                        PUSH EBP
004E4331  8B EC                     MOV EBP,ESP
004E4333  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E4336  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E4339  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E433C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E433F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E4342  C1 E1 04                  SHL ECX,0x4
004E4345  03 C8                     ADD ECX,EAX
004E4347  8D 04 4D B6 57 7F 00      LEA EAX,[ECX*0x2 + 0x7f57b6]
004E434E  8B 0C 4D B6 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57b6]
004E4355  2B CA                     SUB ECX,EDX
004E4357  89 08                     MOV dword ptr [EAX],ECX
004E4359  79 06                     JNS 0x004e4361
004E435B  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_004e4361:
004E4361  8B 00                     MOV EAX,dword ptr [EAX]
004E4363  5D                        POP EBP
004E4364  C2 08 00                  RET 0x8
