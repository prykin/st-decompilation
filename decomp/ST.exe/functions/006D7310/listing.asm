FUN_006d7310:
006D7310  55                        PUSH EBP
006D7311  8B EC                     MOV EBP,ESP
006D7313  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D7316  50                        PUSH EAX
006D7317  68 98 E2 7E 00            PUSH 0x7ee298
006D731C  E8 80 69 07 00            CALL 0x0074dca1
006D7321  5D                        POP EBP
006D7322  C2 08 00                  RET 0x8
