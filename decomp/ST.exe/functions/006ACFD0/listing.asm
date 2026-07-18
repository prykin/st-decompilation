FUN_006acfd0:
006ACFD0  55                        PUSH EBP
006ACFD1  8B EC                     MOV EBP,ESP
006ACFD3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006ACFD6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006ACFD9  2B C1                     SUB EAX,ECX
006ACFDB  99                        CDQ
006ACFDC  8B C8                     MOV ECX,EAX
006ACFDE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006ACFE1  33 CA                     XOR ECX,EDX
006ACFE3  2B CA                     SUB ECX,EDX
006ACFE5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACFE8  2B C2                     SUB EAX,EDX
006ACFEA  99                        CDQ
006ACFEB  33 C2                     XOR EAX,EDX
006ACFED  2B C2                     SUB EAX,EDX
006ACFEF  83 F9 02                  CMP ECX,0x2
006ACFF2  75 0A                     JNZ 0x006acffe
006ACFF4  3B C1                     CMP EAX,ECX
006ACFF6  75 06                     JNZ 0x006acffe
006ACFF8  8B C1                     MOV EAX,ECX
006ACFFA  5D                        POP EBP
006ACFFB  C2 10 00                  RET 0x10
LAB_006acffe:
006ACFFE  3B C8                     CMP ECX,EAX
006AD000  7C 0C                     JL 0x006ad00e
006AD002  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006AD005  99                        CDQ
006AD006  2B C2                     SUB EAX,EDX
006AD008  D1 F8                     SAR EAX,0x1
006AD00A  5D                        POP EBP
006AD00B  C2 10 00                  RET 0x10
LAB_006ad00e:
006AD00E  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006AD011  99                        CDQ
006AD012  2B C2                     SUB EAX,EDX
006AD014  D1 F8                     SAR EAX,0x1
006AD016  5D                        POP EBP
006AD017  C2 10 00                  RET 0x10
