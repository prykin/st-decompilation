FUN_006a4ef0:
006A4EF0  55                        PUSH EBP
006A4EF1  8B EC                     MOV EBP,ESP
006A4EF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A4EF6  6A 01                     PUSH 0x1
006A4EF8  50                        PUSH EAX
006A4EF9  E8 54 DD D5 FF            CALL 0x00402c52
006A4EFE  83 C4 08                  ADD ESP,0x8
006A4F01  5D                        POP EBP
006A4F02  C3                        RET
