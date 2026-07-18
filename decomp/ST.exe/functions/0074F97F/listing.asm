FUN_0074f97f:
0074F97F  56                        PUSH ESI
0074F980  8B F1                     MOV ESI,ECX
0074F982  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F986  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074F989  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F98D  E8 26 BE FF FF            CALL 0x0074b7b8
0074F992  83 66 10 00               AND dword ptr [ESI + 0x10],0x0
0074F996  8B C6                     MOV EAX,ESI
0074F998  5E                        POP ESI
0074F999  C2 08 00                  RET 0x8
