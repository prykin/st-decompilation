FUN_0074c69e:
0074C69E  56                        PUSH ESI
0074C69F  8B F1                     MOV ESI,ECX
0074C6A1  E8 14 00 00 00            CALL 0x0074c6ba
0074C6A6  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
0074C6AB  74 07                     JZ 0x0074c6b4
0074C6AD  56                        PUSH ESI
0074C6AE  E8 FD 1B FE FF            CALL 0x0072e2b0
0074C6B3  59                        POP ECX
LAB_0074c6b4:
0074C6B4  8B C6                     MOV EAX,ESI
0074C6B6  5E                        POP ESI
0074C6B7  C2 04 00                  RET 0x4
