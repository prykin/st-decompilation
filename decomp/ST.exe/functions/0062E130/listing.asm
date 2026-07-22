STManRub3C::sub_0062E130:
0062E130  56                        PUSH ESI
0062E131  57                        PUSH EDI
0062E132  8D 71 70                  LEA ESI,[ECX + 0x70]
0062E135  BF 08 00 00 00            MOV EDI,0x8
LAB_0062e13a:
0062E13A  8B 06                     MOV EAX,dword ptr [ESI]
0062E13C  85 C0                     TEST EAX,EAX
0062E13E  74 0C                     JZ 0x0062e14c
0062E140  50                        PUSH EAX
0062E141  E8 CA FF 07 00            CALL 0x006ae110
0062E146  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0062e14c:
0062E14C  83 C6 04                  ADD ESI,0x4
0062E14F  4F                        DEC EDI
0062E150  75 E8                     JNZ 0x0062e13a
0062E152  5F                        POP EDI
0062E153  5E                        POP ESI
0062E154  C3                        RET
