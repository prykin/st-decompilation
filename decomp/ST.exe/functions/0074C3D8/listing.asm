FUN_0074c3d8:
0074C3D8  56                        PUSH ESI
0074C3D9  8B F1                     MOV ESI,ECX
0074C3DB  E8 E5 C1 FF FF            CALL 0x007485c5
0074C3E0  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
0074C3E5  74 07                     JZ 0x0074c3ee
0074C3E7  56                        PUSH ESI
0074C3E8  E8 C3 1E FE FF            CALL 0x0072e2b0
0074C3ED  59                        POP ECX
LAB_0074c3ee:
0074C3EE  8B C6                     MOV EAX,ESI
0074C3F0  5E                        POP ESI
0074C3F1  C2 04 00                  RET 0x4
