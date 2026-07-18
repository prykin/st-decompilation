FUN_006925b0:
006925B0  55                        PUSH EBP
006925B1  8B EC                     MOV EBP,ESP
006925B3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006925B6  56                        PUSH ESI
006925B7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006925BA  57                        PUSH EDI
006925BB  8D 50 FF                  LEA EDX,[EAX + -0x1]
006925BE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006925C1  85 F6                     TEST ESI,ESI
006925C3  75 01                     JNZ 0x006925c6
006925C5  48                        DEC EAX
LAB_006925c6:
006925C6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006925C9  8D B4 76 90 00 00 00      LEA ESI,[ESI + ESI*0x2 + 0x90]
006925D0  81 E7 FF FF 00 00         AND EDI,0xffff
006925D6  81 E2 FF FF 00 00         AND EDX,0xffff
006925DC  03 C7                     ADD EAX,EDI
006925DE  5F                        POP EDI
006925DF  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
006925E2  5E                        POP ESI
006925E3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006925E6  03 C2                     ADD EAX,EDX
006925E8  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006925EB  5D                        POP EBP
006925EC  C2 10 00                  RET 0x10
