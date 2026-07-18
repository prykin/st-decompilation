FUN_0072ddb0:
0072DDB0  55                        PUSH EBP
0072DDB1  8B EC                     MOV EBP,ESP
0072DDB3  53                        PUSH EBX
0072DDB4  56                        PUSH ESI
0072DDB5  57                        PUSH EDI
0072DDB6  E8 35 00 00 00            CALL 0x0072ddf0
0072DDBB  E8 B0 6C 00 00            CALL 0x00734a70
0072DDC0  A3 44 71 85 00            MOV [0x00857144],EAX
0072DDC5  E8 26 6C 00 00            CALL 0x007349f0
0072DDCA  DB E2                     FNCLEX
0072DDCC  5F                        POP EDI
0072DDCD  5E                        POP ESI
0072DDCE  5B                        POP EBX
0072DDCF  5D                        POP EBP
0072DDD0  C3                        RET
