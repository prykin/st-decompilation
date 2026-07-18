FUN_0074ac25:
0074AC25  56                        PUSH ESI
0074AC26  8B F1                     MOV ESI,ECX
0074AC28  E8 14 00 00 00            CALL 0x0074ac41
0074AC2D  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
0074AC32  74 07                     JZ 0x0074ac3b
0074AC34  56                        PUSH ESI
0074AC35  E8 76 36 FE FF            CALL 0x0072e2b0
0074AC3A  59                        POP ECX
LAB_0074ac3b:
0074AC3B  8B C6                     MOV EAX,ESI
0074AC3D  5E                        POP ESI
0074AC3E  C2 04 00                  RET 0x4
