FUN_0072ea70:
0072EA70  55                        PUSH EBP
0072EA71  8B EC                     MOV EBP,ESP
0072EA73  6A 40                     PUSH 0x40
0072EA75  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072EA78  50                        PUSH EAX
0072EA79  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072EA7C  51                        PUSH ECX
0072EA7D  E8 FE FE FF FF            CALL 0x0072e980
0072EA82  83 C4 0C                  ADD ESP,0xc
0072EA85  5D                        POP EBP
0072EA86  C3                        RET
