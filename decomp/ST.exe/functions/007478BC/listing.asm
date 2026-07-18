FUN_007478bc:
007478BC  56                        PUSH ESI
007478BD  8B F1                     MOV ESI,ECX
007478BF  E8 14 00 00 00            CALL 0x007478d8
007478C4  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
007478C9  74 07                     JZ 0x007478d2
007478CB  56                        PUSH ESI
007478CC  E8 DF 69 FE FF            CALL 0x0072e2b0
007478D1  59                        POP ECX
LAB_007478d2:
007478D2  8B C6                     MOV EAX,ESI
007478D4  5E                        POP ESI
007478D5  C2 04 00                  RET 0x4
