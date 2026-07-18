FUN_006aae60:
006AAE60  55                        PUSH EBP
006AAE61  8B EC                     MOV EBP,ESP
006AAE63  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AAE66  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006AAE69  2B C1                     SUB EAX,ECX
006AAE6B  56                        PUSH ESI
006AAE6C  99                        CDQ
006AAE6D  8B C8                     MOV ECX,EAX
006AAE6F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AAE72  33 CA                     XOR ECX,EDX
006AAE74  2B CA                     SUB ECX,EDX
006AAE76  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AAE79  2B C2                     SUB EAX,EDX
006AAE7B  99                        CDQ
006AAE7C  8B F0                     MOV ESI,EAX
006AAE7E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006AAE81  33 F2                     XOR ESI,EDX
006AAE83  2B F2                     SUB ESI,EDX
006AAE85  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AAE88  2B C2                     SUB EAX,EDX
006AAE8A  99                        CDQ
006AAE8B  33 C2                     XOR EAX,EDX
006AAE8D  2B C2                     SUB EAX,EDX
006AAE8F  3B F0                     CMP ESI,EAX
006AAE91  7C 32                     JL 0x006aaec5
006AAE93  3B CE                     CMP ECX,ESI
006AAE95  7C 0E                     JL 0x006aaea5
006AAE97  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006AAE9A  03 C8                     ADD ECX,EAX
006AAE9C  03 CE                     ADD ECX,ESI
006AAE9E  5E                        POP ESI
006AAE9F  8B C1                     MOV EAX,ECX
006AAEA1  5D                        POP EBP
006AAEA2  C2 18 00                  RET 0x18
LAB_006aaea5:
006AAEA5  3B C8                     CMP ECX,EAX
006AAEA7  7C 0E                     JL 0x006aaeb7
006AAEA9  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
006AAEAC  03 F2                     ADD ESI,EDX
006AAEAE  03 F1                     ADD ESI,ECX
006AAEB0  8B C6                     MOV EAX,ESI
006AAEB2  5E                        POP ESI
006AAEB3  5D                        POP EBP
006AAEB4  C2 18 00                  RET 0x18
LAB_006aaeb7:
006AAEB7  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
006AAEBA  03 F0                     ADD ESI,EAX
006AAEBC  03 F1                     ADD ESI,ECX
006AAEBE  8B C6                     MOV EAX,ESI
006AAEC0  5E                        POP ESI
006AAEC1  5D                        POP EBP
006AAEC2  C2 18 00                  RET 0x18
LAB_006aaec5:
006AAEC5  3B C8                     CMP ECX,EAX
006AAEC7  7C 0E                     JL 0x006aaed7
006AAEC9  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
006AAECC  03 CA                     ADD ECX,EDX
006AAECE  03 CE                     ADD ECX,ESI
006AAED0  5E                        POP ESI
006AAED1  8B C1                     MOV EAX,ECX
006AAED3  5D                        POP EBP
006AAED4  C2 18 00                  RET 0x18
LAB_006aaed7:
006AAED7  8D 14 46                  LEA EDX,[ESI + EAX*0x2]
006AAEDA  3B CE                     CMP ECX,ESI
006AAEDC  03 C2                     ADD EAX,EDX
006AAEDE  5E                        POP ESI
006AAEDF  03 C1                     ADD EAX,ECX
006AAEE1  5D                        POP EBP
006AAEE2  C2 18 00                  RET 0x18
