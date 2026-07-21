FreeAndNull:
006AB060  55                        PUSH EBP
006AB061  8B EC                     MOV EBP,ESP
006AB063  56                        PUSH ESI
006AB064  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006AB067  8B 06                     MOV EAX,dword ptr [ESI]
006AB069  85 C0                     TEST EAX,EAX
006AB06B  74 0F                     JZ 0x006ab07c
006AB06D  50                        PUSH EAX
006AB06E  E8 17 AD D5 FF            CALL 0x00405d8a
006AB073  83 C4 04                  ADD ESP,0x4
006AB076  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_006ab07c:
006AB07C  5E                        POP ESI
006AB07D  5D                        POP EBP
006AB07E  C2 04 00                  RET 0x4
