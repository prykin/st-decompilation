FUN_00754068:
00754068  56                        PUSH ESI
00754069  57                        PUSH EDI
0075406A  8B 84 3D D0 00 00 00      MOV EAX,dword ptr [EBP + EDI*0x1 + 0xd0]
00754071  25 FF 0F 00 00            AND EAX,0xfff
00754076  D1 E0                     SHL EAX,0x1
00754078  05 02 40 00 00            ADD EAX,0x4002
0075407D  8B F0                     MOV ESI,EAX
0075407F  D1 E7                     SHL EDI,0x1
00754081  0F B7 9C 35 CE 21 00 00   MOVZX EBX,word ptr [EBP + ESI*0x1 + 0x21ce]
00754089  66 89 9C 3D CE 21 00 00   MOV word ptr [EBP + EDI*0x1 + 0x21ce],BX
00754091  66 89 BC 1D D0 81 00 00   MOV word ptr [EBP + EBX*0x1 + 0x81d0],DI
00754099  66 89 BC 35 CE 21 00 00   MOV word ptr [EBP + ESI*0x1 + 0x21ce],DI
007540A1  66 89 B4 3D D0 81 00 00   MOV word ptr [EBP + EDI*0x1 + 0x81d0],SI
007540A9  5F                        POP EDI
007540AA  5E                        POP ESI
007540AB  C3                        RET
