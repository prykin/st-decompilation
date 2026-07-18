FUN_00647ca0:
00647CA0  55                        PUSH EBP
00647CA1  8B EC                     MOV EBP,ESP
00647CA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647CA6  85 C0                     TEST EAX,EAX
00647CA8  7C 12                     JL 0x00647cbc
00647CAA  3D 00 01 00 00            CMP EAX,0x100
00647CAF  7D 0B                     JGE 0x00647cbc
00647CB1  8B 84 81 DE 00 00 00      MOV EAX,dword ptr [ECX + EAX*0x4 + 0xde]
00647CB8  5D                        POP EBP
00647CB9  C2 04 00                  RET 0x4
LAB_00647cbc:
00647CBC  B8 01 00 00 00            MOV EAX,0x1
00647CC1  5D                        POP EBP
00647CC2  C2 04 00                  RET 0x4
