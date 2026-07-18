FUN_006a5eb0:
006A5EB0  55                        PUSH EBP
006A5EB1  8B EC                     MOV EBP,ESP
006A5EB3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A5EB6  56                        PUSH ESI
006A5EB7  57                        PUSH EDI
006A5EB8  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006A5EBB  2B FA                     SUB EDI,EDX
006A5EBD  8B C7                     MOV EAX,EDI
006A5EBF  99                        CDQ
006A5EC0  33 C2                     XOR EAX,EDX
006A5EC2  2B C2                     SUB EAX,EDX
006A5EC4  83 F8 01                  CMP EAX,0x1
006A5EC7  7F 40                     JG 0x006a5f09
006A5EC9  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A5ECC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A5ECF  2B F2                     SUB ESI,EDX
006A5ED1  8B C6                     MOV EAX,ESI
006A5ED3  99                        CDQ
006A5ED4  33 C2                     XOR EAX,EDX
006A5ED6  2B C2                     SUB EAX,EDX
006A5ED8  83 F8 01                  CMP EAX,0x1
006A5EDB  7F 2C                     JG 0x006a5f09
006A5EDD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A5EE0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A5EE3  2B C8                     SUB ECX,EAX
006A5EE5  8B C1                     MOV EAX,ECX
006A5EE7  99                        CDQ
006A5EE8  33 C2                     XOR EAX,EDX
006A5EEA  2B C2                     SUB EAX,EDX
006A5EEC  83 F8 01                  CMP EAX,0x1
006A5EEF  7F 18                     JG 0x006a5f09
006A5EF1  8D 04 4E                  LEA EAX,[ESI + ECX*0x2]
006A5EF4  03 C8                     ADD ECX,EAX
006A5EF6  A1 14 D7 7E 00            MOV EAX,[0x007ed714]
006A5EFB  8D 14 4F                  LEA EDX,[EDI + ECX*0x2]
006A5EFE  5F                        POP EDI
006A5EFF  03 CA                     ADD ECX,EDX
006A5F01  5E                        POP ESI
006A5F02  8B 04 88                  MOV EAX,dword ptr [EAX + ECX*0x4]
006A5F05  5D                        POP EBP
006A5F06  C2 18 00                  RET 0x18
LAB_006a5f09:
006A5F09  5F                        POP EDI
006A5F0A  B8 FE 0F 00 00            MOV EAX,0xffe
006A5F0F  5E                        POP ESI
006A5F10  5D                        POP EBP
006A5F11  C2 18 00                  RET 0x18
