FUN_006aff5b:
006AFF5B  55                        PUSH EBP
006AFF5C  8B EC                     MOV EBP,ESP
006AFF5E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006aff61:
006AFF61  53                        PUSH EBX
006AFF62  99                        CDQ
006AFF63  BB 68 01 00 00            MOV EBX,0x168
006AFF68  F7 FB                     IDIV EBX
006AFF6A  8B C2                     MOV EAX,EDX
006AFF6C  0B C0                     OR EAX,EAX
006AFF6E  7D 05                     JGE 0x006aff75
006AFF70  05 68 01 00 00            ADD EAX,0x168
LAB_006aff75:
006AFF75  3D B4 00 00 00            CMP EAX,0xb4
006AFF7A  76 0E                     JBE 0x006aff8a
006AFF7C  2D B4 00 00 00            SUB EAX,0xb4
006AFF81  E8 0D 00 00 00            CALL 0x006aff93
006AFF86  F7 D8                     NEG EAX
006AFF88  EB 05                     JMP 0x006aff8f
LAB_006aff8a:
006AFF8A  E8 04 00 00 00            CALL 0x006aff93
LAB_006aff8f:
006AFF8F  99                        CDQ
006AFF90  5B                        POP EBX
006AFF91  5D                        POP EBP
006AFF92  C3                        RET
