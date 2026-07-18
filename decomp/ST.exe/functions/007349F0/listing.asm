__setdefaultprecision:
007349F0  55                        PUSH EBP
007349F1  8B EC                     MOV EBP,ESP
007349F3  68 00 00 03 00            PUSH 0x30000
007349F8  68 00 00 01 00            PUSH 0x10000
007349FD  E8 AE AF 00 00            CALL 0x0073f9b0
00734A02  83 C4 08                  ADD ESP,0x8
00734A05  5D                        POP EBP
00734A06  C3                        RET
