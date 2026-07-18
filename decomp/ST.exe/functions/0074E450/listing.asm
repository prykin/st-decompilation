FUN_0074e450:
0074E450  56                        PUSH ESI
0074E451  8B F1                     MOV ESI,ECX
0074E453  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074E457  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074E45A  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074E45E  E8 55 D3 FF FF            CALL 0x0074b7b8
0074E463  83 66 10 00               AND dword ptr [ESI + 0x10],0x0
0074E467  8B C6                     MOV EAX,ESI
0074E469  5E                        POP ESI
0074E46A  C2 08 00                  RET 0x8
