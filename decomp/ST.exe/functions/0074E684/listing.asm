FUN_0074e684:
0074E684  56                        PUSH ESI
0074E685  8B F1                     MOV ESI,ECX
0074E687  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074E68B  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074E68E  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074E692  E8 21 D1 FF FF            CALL 0x0074b7b8
0074E697  83 66 10 00               AND dword ptr [ESI + 0x10],0x0
0074E69B  8B C6                     MOV EAX,ESI
0074E69D  5E                        POP ESI
0074E69E  C2 08 00                  RET 0x8
