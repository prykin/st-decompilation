FUN_006e5950:
006E5950  55                        PUSH EBP
006E5951  8B EC                     MOV EBP,ESP
006E5953  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E5956  50                        PUSH EAX
006E5957  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006E595A  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006E595D  52                        PUSH EDX
006E595E  50                        PUSH EAX
006E595F  E8 0C 00 00 00            CALL 0x006e5970
006E5964  5D                        POP EBP
006E5965  C2 04 00                  RET 0x4
