FUN_006e3a90:
006E3A90  55                        PUSH EBP
006E3A91  8B EC                     MOV EBP,ESP
006E3A93  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E3A96  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E3A99  50                        PUSH EAX
006E3A9A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E3A9D  6A 00                     PUSH 0x0
006E3A9F  52                        PUSH EDX
006E3AA0  50                        PUSH EAX
006E3AA1  E8 AA F9 FF FF            CALL 0x006e3450
006E3AA6  83 C4 10                  ADD ESP,0x10
006E3AA9  5D                        POP EBP
006E3AAA  C2 08 00                  RET 0x8
