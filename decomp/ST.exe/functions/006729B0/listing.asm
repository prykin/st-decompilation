FUN_006729b0:
006729B0  55                        PUSH EBP
006729B1  8B EC                     MOV EBP,ESP
006729B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006729B6  66 8B 0D 24 2D 7D 00      MOV CX,word ptr [0x007d2d24]
006729BD  50                        PUSH EAX
006729BE  6A 01                     PUSH 0x1
006729C0  51                        PUSH ECX
006729C1  E8 8A 5F 05 00            CALL 0x006c8950
006729C6  25 FF FF 00 00            AND EAX,0xffff
006729CB  A3 24 2D 7D 00            MOV [0x007d2d24],EAX
006729D0  5D                        POP EBP
006729D1  C2 04 00                  RET 0x4
