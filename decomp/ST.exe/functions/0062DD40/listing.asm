STManRub3C::sub_0062DD40:
0062DD40  56                        PUSH ESI
0062DD41  57                        PUSH EDI
0062DD42  8D 71 50                  LEA ESI,[ECX + 0x50]
0062DD45  BF 08 00 00 00            MOV EDI,0x8
LAB_0062dd4a:
0062DD4A  8B 06                     MOV EAX,dword ptr [ESI]
0062DD4C  85 C0                     TEST EAX,EAX
0062DD4E  74 0C                     JZ 0x0062dd5c
0062DD50  50                        PUSH EAX
0062DD51  E8 BA 03 08 00            CALL 0x006ae110
0062DD56  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0062dd5c:
0062DD5C  83 C6 04                  ADD ESI,0x4
0062DD5F  4F                        DEC EDI
0062DD60  75 E8                     JNZ 0x0062dd4a
0062DD62  5F                        POP EDI
0062DD63  5E                        POP ESI
0062DD64  C3                        RET
