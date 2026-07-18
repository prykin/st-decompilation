FUN_00674de0:
00674DE0  55                        PUSH EBP
00674DE1  8B EC                     MOV EBP,ESP
00674DE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00674DE6  A1 74 19 81 00            MOV EAX,[0x00811974]
00674DEB  89 0D 74 19 81 00         MOV dword ptr [0x00811974],ECX
00674DF1  5D                        POP EBP
00674DF2  C3                        RET
