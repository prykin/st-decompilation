FUN_0074f75f:
0074F75F  56                        PUSH ESI
0074F760  8B F1                     MOV ESI,ECX
0074F762  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F766  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074F769  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F76D  E8 46 C0 FF FF            CALL 0x0074b7b8
0074F772  83 66 10 00               AND dword ptr [ESI + 0x10],0x0
0074F776  8B C6                     MOV EAX,ESI
0074F778  5E                        POP ESI
0074F779  C2 08 00                  RET 0x8
