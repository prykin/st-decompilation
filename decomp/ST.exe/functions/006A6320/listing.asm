FUN_006a6320:
006A6320  55                        PUSH EBP
006A6321  8B EC                     MOV EBP,ESP
006A6323  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A6326  8B C1                     MOV EAX,ECX
006A6328  80 E4 9F                  AND AH,0x9f
006A632B  3D FE 0F 00 00            CMP EAX,0xffe
006A6330  74 11                     JZ 0x006a6343
006A6332  05 B4 00 00 00            ADD EAX,0xb4
006A6337  56                        PUSH ESI
006A6338  99                        CDQ
006A6339  BE 68 01 00 00            MOV ESI,0x168
006A633E  F7 FE                     IDIV ESI
006A6340  5E                        POP ESI
006A6341  8B C2                     MOV EAX,EDX
LAB_006a6343:
006A6343  F6 C5 40                  TEST CH,0x40
006A6346  74 07                     JZ 0x006a634f
006A6348  80 CC 20                  OR AH,0x20
006A634B  5D                        POP EBP
006A634C  C2 04 00                  RET 0x4
LAB_006a634f:
006A634F  F6 C5 20                  TEST CH,0x20
006A6352  74 03                     JZ 0x006a6357
006A6354  80 CC 40                  OR AH,0x40
LAB_006a6357:
006A6357  5D                        POP EBP
006A6358  C2 04 00                  RET 0x4
