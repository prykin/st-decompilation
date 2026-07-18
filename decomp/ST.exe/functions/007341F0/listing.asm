FUN_007341f0:
007341F0  55                        PUSH EBP
007341F1  8B EC                     MOV EBP,ESP
007341F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007341F6  50                        PUSH EAX
007341F7  E8 64 FF FF FF            CALL 0x00734160
007341FC  83 C4 04                  ADD ESP,0x4
007341FF  5D                        POP EBP
00734200  C3                        RET
