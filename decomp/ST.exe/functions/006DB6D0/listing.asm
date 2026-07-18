FUN_006db6d0:
006DB6D0  55                        PUSH EBP
006DB6D1  8B EC                     MOV EBP,ESP
006DB6D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DB6D6  83 C0 5A                  ADD EAX,0x5a
006DB6D9  50                        PUSH EAX
006DB6DA  E8 61 FF FF FF            CALL 0x006db640
006DB6DF  5D                        POP EBP
006DB6E0  C2 04 00                  RET 0x4
