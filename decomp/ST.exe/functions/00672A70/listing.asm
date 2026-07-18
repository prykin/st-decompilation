FUN_00672a70:
00672A70  55                        PUSH EBP
00672A71  8B EC                     MOV EBP,ESP
00672A73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00672A76  66 8B 0D 24 2D 7D 00      MOV CX,word ptr [0x007d2d24]
00672A7D  50                        PUSH EAX
00672A7E  68 00 04 00 00            PUSH 0x400
00672A83  51                        PUSH ECX
00672A84  E8 C7 5E 05 00            CALL 0x006c8950
00672A89  25 FF FF 00 00            AND EAX,0xffff
00672A8E  A3 24 2D 7D 00            MOV [0x007d2d24],EAX
00672A93  5D                        POP EBP
00672A94  C2 04 00                  RET 0x4
