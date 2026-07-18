FUN_0072ece0:
0072ECE0  55                        PUSH EBP
0072ECE1  8B EC                     MOV EBP,ESP
0072ECE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072ECE6  50                        PUSH EAX
0072ECE7  E8 44 FF FF FF            CALL 0x0072ec30
0072ECEC  83 C4 04                  ADD ESP,0x4
0072ECEF  F7 D8                     NEG EAX
0072ECF1  1B C0                     SBB EAX,EAX
0072ECF3  F7 D8                     NEG EAX
0072ECF5  48                        DEC EAX
0072ECF6  5D                        POP EBP
0072ECF7  C3                        RET
