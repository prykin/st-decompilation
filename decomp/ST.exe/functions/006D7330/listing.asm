FUN_006d7330:
006D7330  55                        PUSH EBP
006D7331  8B EC                     MOV EBP,ESP
006D7333  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D7336  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D7339  6A 00                     PUSH 0x0
006D733B  50                        PUSH EAX
006D733C  51                        PUSH ECX
006D733D  E8 70 5B 07 00            CALL 0x0074ceb2
006D7342  5D                        POP EBP
006D7343  C2 0C 00                  RET 0xc
