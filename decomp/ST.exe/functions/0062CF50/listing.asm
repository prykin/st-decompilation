STManRub3C::sub_0062CF50:
0062CF50  56                        PUSH ESI
0062CF51  57                        PUSH EDI
0062CF52  8D 71 30                  LEA ESI,[ECX + 0x30]
0062CF55  BF 08 00 00 00            MOV EDI,0x8
LAB_0062cf5a:
0062CF5A  8B 06                     MOV EAX,dword ptr [ESI]
0062CF5C  85 C0                     TEST EAX,EAX
0062CF5E  74 0C                     JZ 0x0062cf6c
0062CF60  50                        PUSH EAX
0062CF61  E8 AA 11 08 00            CALL 0x006ae110
0062CF66  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0062cf6c:
0062CF6C  83 C6 04                  ADD ESI,0x4
0062CF6F  4F                        DEC EDI
0062CF70  75 E8                     JNZ 0x0062cf5a
0062CF72  5F                        POP EDI
0062CF73  5E                        POP ESI
0062CF74  C3                        RET
