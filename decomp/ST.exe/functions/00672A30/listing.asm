FUN_00672a30:
00672A30  55                        PUSH EBP
00672A31  8B EC                     MOV EBP,ESP
00672A33  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00672A36  66 8B 0D 24 2D 7D 00      MOV CX,word ptr [0x007d2d24]
00672A3D  50                        PUSH EAX
00672A3E  68 00 02 00 00            PUSH 0x200
00672A43  51                        PUSH ECX
00672A44  E8 07 5F 05 00            CALL 0x006c8950
00672A49  25 FF FF 00 00            AND EAX,0xffff
00672A4E  A3 24 2D 7D 00            MOV [0x007d2d24],EAX
00672A53  5D                        POP EBP
00672A54  C2 04 00                  RET 0x4
