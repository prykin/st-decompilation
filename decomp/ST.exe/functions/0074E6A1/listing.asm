FUN_0074e6a1:
0074E6A1  56                        PUSH ESI
0074E6A2  8B F1                     MOV ESI,ECX
0074E6A4  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074E6A8  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074E6AB  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074E6AF  E8 04 D1 FF FF            CALL 0x0074b7b8
0074E6B4  83 66 10 00               AND dword ptr [ESI + 0x10],0x0
0074E6B8  8B C6                     MOV EAX,ESI
0074E6BA  5E                        POP ESI
0074E6BB  C2 0C 00                  RET 0xc
