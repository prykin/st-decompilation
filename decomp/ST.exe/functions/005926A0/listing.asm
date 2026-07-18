FUN_005926a0:
005926A0  55                        PUSH EBP
005926A1  8B EC                     MOV EBP,ESP
005926A3  56                        PUSH ESI
005926A4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005926A7  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005926AA  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005926AD  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005926B0  50                        PUSH EAX
005926B1  8B 06                     MOV EAX,dword ptr [ESI]
005926B3  51                        PUSH ECX
005926B4  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005926BA  52                        PUSH EDX
005926BB  50                        PUSH EAX
005926BC  51                        PUSH ECX
005926BD  E8 BE 38 12 00            CALL 0x006b5f80
005926C2  56                        PUSH ESI
005926C3  E8 F8 23 13 00            CALL 0x006c4ac0
005926C8  5E                        POP ESI
005926C9  5D                        POP EBP
005926CA  C2 04 00                  RET 0x4
