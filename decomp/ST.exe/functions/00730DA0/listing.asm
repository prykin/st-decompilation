FUN_00730da0:
00730DA0  55                        PUSH EBP
00730DA1  8B EC                     MOV EBP,ESP
00730DA3  A1 CC 71 85 00            MOV EAX,[0x008571cc]
00730DA8  50                        PUSH EAX
00730DA9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730DAC  51                        PUSH ECX
00730DAD  E8 0E 00 00 00            CALL 0x00730dc0
00730DB2  83 C4 08                  ADD ESP,0x8
00730DB5  5D                        POP EBP
00730DB6  C3                        RET
