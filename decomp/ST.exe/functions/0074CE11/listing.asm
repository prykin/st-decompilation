FUN_0074ce11:
0074CE11  56                        PUSH ESI
0074CE12  8B F1                     MOV ESI,ECX
0074CE14  E8 AC B7 FF FF            CALL 0x007485c5
0074CE19  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
0074CE1E  74 07                     JZ 0x0074ce27
0074CE20  56                        PUSH ESI
0074CE21  E8 8A 14 FE FF            CALL 0x0072e2b0
0074CE26  59                        POP ECX
LAB_0074ce27:
0074CE27  8B C6                     MOV EAX,ESI
0074CE29  5E                        POP ESI
0074CE2A  C2 04 00                  RET 0x4
