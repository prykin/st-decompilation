FUN_007475e7:
007475E7  56                        PUSH ESI
007475E8  8B F1                     MOV ESI,ECX
007475EA  E8 14 00 00 00            CALL 0x00747603
007475EF  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
007475F4  74 07                     JZ 0x007475fd
007475F6  56                        PUSH ESI
007475F7  E8 B4 6C FE FF            CALL 0x0072e2b0
007475FC  59                        POP ECX
LAB_007475fd:
007475FD  8B C6                     MOV EAX,ESI
007475FF  5E                        POP ESI
00747600  C2 04 00                  RET 0x4
