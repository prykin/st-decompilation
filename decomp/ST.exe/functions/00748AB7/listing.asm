FUN_00748ab7:
00748AB7  56                        PUSH ESI
00748AB8  8B F1                     MOV ESI,ECX
00748ABA  E8 14 00 00 00            CALL 0x00748ad3
00748ABF  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
00748AC4  74 07                     JZ 0x00748acd
00748AC6  56                        PUSH ESI
00748AC7  E8 E4 57 FE FF            CALL 0x0072e2b0
00748ACC  59                        POP ECX
LAB_00748acd:
00748ACD  8B C6                     MOV EAX,ESI
00748ACF  5E                        POP ESI
00748AD0  C2 04 00                  RET 0x4
