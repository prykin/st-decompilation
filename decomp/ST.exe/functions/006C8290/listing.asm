FUN_006c8290:
006C8290  55                        PUSH EBP
006C8291  8B EC                     MOV EBP,ESP
006C8293  53                        PUSH EBX
006C8294  56                        PUSH ESI
006C8295  57                        PUSH EDI
006C8296  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C8299  E8 1D 00 00 00            CALL 0x006c82bb
006C829E  5F                        POP EDI
006C829F  5E                        POP ESI
006C82A0  5B                        POP EBX
006C82A1  5D                        POP EBP
006C82A2  C3                        RET
