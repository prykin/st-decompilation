FUN_00750385:
00750385  56                        PUSH ESI
00750386  8B F1                     MOV ESI,ECX
00750388  57                        PUSH EDI
00750389  8D 7E 08                  LEA EDI,[ESI + 0x8]
0075038C  57                        PUSH EDI
0075038D  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00750393  83 66 64 00               AND dword ptr [ESI + 0x64],0x0
00750397  8B CE                     MOV ECX,ESI
00750399  E8 E9 FE FF FF            CALL 0x00750287
0075039E  57                        PUSH EDI
0075039F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007503A5  5F                        POP EDI
007503A6  33 C0                     XOR EAX,EAX
007503A8  5E                        POP ESI
007503A9  C3                        RET
