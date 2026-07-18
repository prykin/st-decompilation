FUN_0074e560:
0074E560  56                        PUSH ESI
0074E561  8B F1                     MOV ESI,ECX
0074E563  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074E567  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074E56A  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074E56E  E8 45 D2 FF FF            CALL 0x0074b7b8
0074E573  83 66 10 00               AND dword ptr [ESI + 0x10],0x0
0074E577  8B C6                     MOV EAX,ESI
0074E579  5E                        POP ESI
0074E57A  C2 08 00                  RET 0x8
