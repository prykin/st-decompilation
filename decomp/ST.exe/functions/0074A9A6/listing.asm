FUN_0074a9a6:
0074A9A6  56                        PUSH ESI
0074A9A7  8B F1                     MOV ESI,ECX
0074A9A9  E8 17 DC FF FF            CALL 0x007485c5
0074A9AE  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
0074A9B3  74 07                     JZ 0x0074a9bc
0074A9B5  56                        PUSH ESI
0074A9B6  E8 F5 38 FE FF            CALL 0x0072e2b0
0074A9BB  59                        POP ECX
LAB_0074a9bc:
0074A9BC  8B C6                     MOV EAX,ESI
0074A9BE  5E                        POP ESI
0074A9BF  C2 04 00                  RET 0x4
