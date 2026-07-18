FUN_007494b5:
007494B5  56                        PUSH ESI
007494B6  8B F1                     MOV ESI,ECX
007494B8  E8 23 02 00 00            CALL 0x007496e0
007494BD  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
007494C2  74 07                     JZ 0x007494cb
007494C4  56                        PUSH ESI
007494C5  E8 E6 4D FE FF            CALL 0x0072e2b0
007494CA  59                        POP ECX
LAB_007494cb:
007494CB  8B C6                     MOV EAX,ESI
007494CD  5E                        POP ESI
007494CE  C2 04 00                  RET 0x4
