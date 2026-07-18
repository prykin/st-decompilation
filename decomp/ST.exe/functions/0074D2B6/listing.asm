FUN_0074d2b6:
0074D2B6  56                        PUSH ESI
0074D2B7  57                        PUSH EDI
0074D2B8  8B F1                     MOV ESI,ECX
0074D2BA  E8 A2 04 00 00            CALL 0x0074d761
0074D2BF  8B 3D 84 BB 85 00         MOV EDI,dword ptr [0x0085bb84]
0074D2C5  8D 46 30                  LEA EAX,[ESI + 0x30]
0074D2C8  50                        PUSH EAX
0074D2C9  FF D7                     CALL EDI
0074D2CB  8D 46 18                  LEA EAX,[ESI + 0x18]
0074D2CE  50                        PUSH EAX
0074D2CF  FF D7                     CALL EDI
0074D2D1  8D 4E 08                  LEA ECX,[ESI + 0x8]
0074D2D4  E8 2B FF FF FF            CALL 0x0074d204
0074D2D9  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074D2DC  E8 23 FF FF FF            CALL 0x0074d204
0074D2E1  5F                        POP EDI
0074D2E2  5E                        POP ESI
0074D2E3  C3                        RET
