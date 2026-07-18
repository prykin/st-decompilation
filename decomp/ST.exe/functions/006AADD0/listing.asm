FUN_006aadd0:
006AADD0  55                        PUSH EBP
006AADD1  8B EC                     MOV EBP,ESP
006AADD3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AADD6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006AADD9  2B C1                     SUB EAX,ECX
006AADDB  56                        PUSH ESI
006AADDC  99                        CDQ
006AADDD  8B C8                     MOV ECX,EAX
006AADDF  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AADE2  33 CA                     XOR ECX,EDX
006AADE4  2B CA                     SUB ECX,EDX
006AADE6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AADE9  2B C2                     SUB EAX,EDX
006AADEB  99                        CDQ
006AADEC  8B F0                     MOV ESI,EAX
006AADEE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006AADF1  33 F2                     XOR ESI,EDX
006AADF3  2B F2                     SUB ESI,EDX
006AADF5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AADF8  2B C2                     SUB EAX,EDX
006AADFA  99                        CDQ
006AADFB  33 C2                     XOR EAX,EDX
006AADFD  2B C2                     SUB EAX,EDX
006AADFF  3B F0                     CMP ESI,EAX
006AAE01  7C 27                     JL 0x006aae2a
006AAE03  3B CE                     CMP ECX,ESI
006AAE05  7C 09                     JL 0x006aae10
006AAE07  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006AAE0A  03 C8                     ADD ECX,EAX
006AAE0C  03 CE                     ADD ECX,ESI
006AAE0E  EB 32                     JMP 0x006aae42
LAB_006aae10:
006AAE10  3B C8                     CMP ECX,EAX
006AAE12  7C 0B                     JL 0x006aae1f
006AAE14  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
006AAE17  03 F2                     ADD ESI,EDX
006AAE19  03 F1                     ADD ESI,ECX
006AAE1B  8B CE                     MOV ECX,ESI
006AAE1D  EB 23                     JMP 0x006aae42
LAB_006aae1f:
006AAE1F  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
006AAE22  03 F0                     ADD ESI,EAX
006AAE24  03 F1                     ADD ESI,ECX
006AAE26  8B CE                     MOV ECX,ESI
006AAE28  EB 18                     JMP 0x006aae42
LAB_006aae2a:
006AAE2A  3B C8                     CMP ECX,EAX
006AAE2C  7C 09                     JL 0x006aae37
006AAE2E  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
006AAE31  03 CA                     ADD ECX,EDX
006AAE33  03 CE                     ADD ECX,ESI
006AAE35  EB 0B                     JMP 0x006aae42
LAB_006aae37:
006AAE37  8D 14 46                  LEA EDX,[ESI + EAX*0x2]
006AAE3A  3B CE                     CMP ECX,ESI
006AAE3C  03 C2                     ADD EAX,EDX
006AAE3E  03 C1                     ADD EAX,ECX
006AAE40  8B C8                     MOV ECX,EAX
LAB_006aae42:
006AAE42  B8 56 55 55 55            MOV EAX,0x55555556
006AAE47  5E                        POP ESI
006AAE48  F7 E9                     IMUL ECX
006AAE4A  8B C2                     MOV EAX,EDX
006AAE4C  8B C8                     MOV ECX,EAX
006AAE4E  C1 E9 1F                  SHR ECX,0x1f
006AAE51  03 C1                     ADD EAX,ECX
006AAE53  5D                        POP EBP
006AAE54  C2 18 00                  RET 0x18
