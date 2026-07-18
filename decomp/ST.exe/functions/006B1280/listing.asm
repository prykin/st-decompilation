FUN_006b1280:
006B1280  55                        PUSH EBP
006B1281  8B EC                     MOV EBP,ESP
006B1283  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B1286  99                        CDQ
006B1287  8B 0D 8C DA 7E 00         MOV ECX,dword ptr [0x007eda8c]
006B128D  F7 F9                     IDIV ECX
006B128F  D1 E9                     SHR ECX,0x1
006B1291  0B D2                     OR EDX,EDX
006B1293  7C 07                     JL 0x006b129c
006B1295  3B D1                     CMP EDX,ECX
006B1297  72 0A                     JC 0x006b12a3
006B1299  40                        INC EAX
006B129A  EB 07                     JMP 0x006b12a3
LAB_006b129c:
006B129C  F7 D9                     NEG ECX
006B129E  3B D1                     CMP EDX,ECX
006B12A0  7F 01                     JG 0x006b12a3
006B12A2  48                        DEC EAX
LAB_006b12a3:
006B12A3  5D                        POP EBP
006B12A4  C3                        RET
