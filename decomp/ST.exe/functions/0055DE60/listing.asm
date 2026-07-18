FUN_0055de60:
0055DE60  55                        PUSH EBP
0055DE61  8B EC                     MOV EBP,ESP
0055DE63  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055DE66  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055DE69  2B C1                     SUB EAX,ECX
0055DE6B  99                        CDQ
0055DE6C  8B C8                     MOV ECX,EAX
0055DE6E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055DE71  33 CA                     XOR ECX,EDX
0055DE73  2B CA                     SUB ECX,EDX
0055DE75  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055DE78  2B C2                     SUB EAX,EDX
0055DE7A  99                        CDQ
0055DE7B  33 C2                     XOR EAX,EDX
0055DE7D  2B C2                     SUB EAX,EDX
0055DE7F  3B C8                     CMP ECX,EAX
0055DE81  7C 1A                     JL 0x0055de9d
0055DE83  8B 15 24 33 80 00         MOV EDX,dword ptr [0x00803324]
0055DE89  2B C8                     SUB ECX,EAX
0055DE8B  0F AF 0D 20 33 80 00      IMUL ECX,dword ptr [0x00803320]
0055DE92  0F AF D0                  IMUL EDX,EAX
0055DE95  03 CA                     ADD ECX,EDX
0055DE97  8B C1                     MOV EAX,ECX
0055DE99  5D                        POP EBP
0055DE9A  C2 10 00                  RET 0x10
LAB_0055de9d:
0055DE9D  8B 15 24 33 80 00         MOV EDX,dword ptr [0x00803324]
0055DEA3  2B C1                     SUB EAX,ECX
0055DEA5  0F AF 05 20 33 80 00      IMUL EAX,dword ptr [0x00803320]
0055DEAC  0F AF D1                  IMUL EDX,ECX
0055DEAF  03 C2                     ADD EAX,EDX
0055DEB1  5D                        POP EBP
0055DEB2  C2 10 00                  RET 0x10
