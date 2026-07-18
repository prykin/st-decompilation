FUN_006c82a3:
006C82A3  55                        PUSH EBP
006C82A4  8B EC                     MOV EBP,ESP
006C82A6  53                        PUSH EBX
006C82A7  56                        PUSH ESI
006C82A8  57                        PUSH EDI
006C82A9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C82AC  E8 0A 00 00 00            CALL 0x006c82bb
006C82B1  F7 D8                     NEG EAX
006C82B3  83 C0 5A                  ADD EAX,0x5a
006C82B6  5F                        POP EDI
006C82B7  5E                        POP ESI
006C82B8  5B                        POP EBX
006C82B9  5D                        POP EBP
006C82BA  C3                        RET
