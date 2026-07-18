FUN_006729f0:
006729F0  55                        PUSH EBP
006729F1  8B EC                     MOV EBP,ESP
006729F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006729F6  66 8B 0D 24 2D 7D 00      MOV CX,word ptr [0x007d2d24]
006729FD  50                        PUSH EAX
006729FE  6A 04                     PUSH 0x4
00672A00  51                        PUSH ECX
00672A01  E8 4A 5F 05 00            CALL 0x006c8950
00672A06  25 FF FF 00 00            AND EAX,0xffff
00672A0B  A3 24 2D 7D 00            MOV [0x007d2d24],EAX
00672A10  5D                        POP EBP
00672A11  C2 04 00                  RET 0x4
