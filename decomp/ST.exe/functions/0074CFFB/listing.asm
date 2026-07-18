FUN_0074cffb:
0074CFFB  56                        PUSH ESI
0074CFFC  8B F1                     MOV ESI,ECX
0074CFFE  E8 B7 F6 FF FF            CALL 0x0074c6ba
0074D003  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
0074D008  74 07                     JZ 0x0074d011
0074D00A  56                        PUSH ESI
0074D00B  E8 A0 12 FE FF            CALL 0x0072e2b0
0074D010  59                        POP ECX
LAB_0074d011:
0074D011  8B C6                     MOV EAX,ESI
0074D013  5E                        POP ESI
0074D014  C2 04 00                  RET 0x4
