FUN_006acf90:
006ACF90  55                        PUSH EBP
006ACF91  8B EC                     MOV EBP,ESP
006ACF93  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006ACF96  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006ACF99  2B C1                     SUB EAX,ECX
006ACF9B  99                        CDQ
006ACF9C  8B C8                     MOV ECX,EAX
006ACF9E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006ACFA1  33 CA                     XOR ECX,EDX
006ACFA3  2B CA                     SUB ECX,EDX
006ACFA5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACFA8  2B C2                     SUB EAX,EDX
006ACFAA  99                        CDQ
006ACFAB  33 C2                     XOR EAX,EDX
006ACFAD  2B C2                     SUB EAX,EDX
006ACFAF  3B C8                     CMP ECX,EAX
006ACFB1  7C 0C                     JL 0x006acfbf
006ACFB3  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006ACFB6  99                        CDQ
006ACFB7  2B C2                     SUB EAX,EDX
006ACFB9  D1 F8                     SAR EAX,0x1
006ACFBB  5D                        POP EBP
006ACFBC  C2 10 00                  RET 0x10
LAB_006acfbf:
006ACFBF  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006ACFC2  99                        CDQ
006ACFC3  2B C2                     SUB EAX,EDX
006ACFC5  D1 F8                     SAR EAX,0x1
006ACFC7  5D                        POP EBP
006ACFC8  C2 10 00                  RET 0x10
