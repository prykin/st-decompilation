FUN_004e43c0:
004E43C0  55                        PUSH EBP
004E43C1  8B EC                     MOV EBP,ESP
004E43C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E43C6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E43C9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E43CC  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E43CF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E43D2  C1 E1 04                  SHL ECX,0x4
004E43D5  03 C8                     ADD ECX,EAX
004E43D7  8D 04 4D BE 57 7F 00      LEA EAX,[ECX*0x2 + 0x7f57be]
004E43DE  8B 0C 4D BE 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57be]
004E43E5  2B CA                     SUB ECX,EDX
004E43E7  89 08                     MOV dword ptr [EAX],ECX
004E43E9  79 06                     JNS 0x004e43f1
004E43EB  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_004e43f1:
004E43F1  8B 00                     MOV EAX,dword ptr [EAX]
004E43F3  5D                        POP EBP
004E43F4  C2 08 00                  RET 0x8
