FUN_0074d283:
0074D283  56                        PUSH ESI
0074D284  8B F1                     MOV ESI,ECX
0074D286  57                        PUSH EDI
0074D287  6A 01                     PUSH 0x1
0074D289  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074D28C  E8 59 FF FF FF            CALL 0x0074d1ea
0074D291  6A 00                     PUSH 0x0
0074D293  8D 4E 08                  LEA ECX,[ESI + 0x8]
0074D296  E8 4F FF FF FF            CALL 0x0074d1ea
0074D29B  8B 3D 88 BB 85 00         MOV EDI,dword ptr [0x0085bb88]
0074D2A1  8D 46 18                  LEA EAX,[ESI + 0x18]
0074D2A4  50                        PUSH EAX
0074D2A5  FF D7                     CALL EDI
0074D2A7  8D 46 30                  LEA EAX,[ESI + 0x30]
0074D2AA  50                        PUSH EAX
0074D2AB  FF D7                     CALL EDI
0074D2AD  83 66 14 00               AND dword ptr [ESI + 0x14],0x0
0074D2B1  8B C6                     MOV EAX,ESI
0074D2B3  5F                        POP EDI
0074D2B4  5E                        POP ESI
0074D2B5  C3                        RET
