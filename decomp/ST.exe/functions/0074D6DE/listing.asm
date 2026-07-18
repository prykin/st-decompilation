FUN_0074d6de:
0074D6DE  55                        PUSH EBP
0074D6DF  8B EC                     MOV EBP,ESP
0074D6E1  83 EC 20                  SUB ESP,0x20
0074D6E4  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074D6E7  8D 45 E0                  LEA EAX,[EBP + -0x20]
0074D6EA  68 90 18 7C 00            PUSH 0x7c1890
0074D6EF  50                        PUSH EAX
0074D6F0  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0074D6F6  83 C4 0C                  ADD ESP,0xc
0074D6F9  8D 45 E0                  LEA EAX,[EBP + -0x20]
0074D6FC  6A 20                     PUSH 0x20
0074D6FE  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074D701  6A FF                     PUSH -0x1
0074D703  50                        PUSH EAX
0074D704  6A 00                     PUSH 0x0
0074D706  6A 00                     PUSH 0x0
0074D708  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
0074D70E  C9                        LEAVE
0074D70F  C2 08 00                  RET 0x8
