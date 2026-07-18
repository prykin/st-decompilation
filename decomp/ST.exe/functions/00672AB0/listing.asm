FUN_00672ab0:
00672AB0  55                        PUSH EBP
00672AB1  8B EC                     MOV EBP,ESP
00672AB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00672AB6  66 8B 0D 24 2D 7D 00      MOV CX,word ptr [0x007d2d24]
00672ABD  50                        PUSH EAX
00672ABE  68 00 08 00 00            PUSH 0x800
00672AC3  51                        PUSH ECX
00672AC4  E8 87 5E 05 00            CALL 0x006c8950
00672AC9  25 FF FF 00 00            AND EAX,0xffff
00672ACE  A3 24 2D 7D 00            MOV [0x007d2d24],EAX
00672AD3  5D                        POP EBP
00672AD4  C2 04 00                  RET 0x4
