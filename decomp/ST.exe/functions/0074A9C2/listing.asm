FUN_0074a9c2:
0074A9C2  53                        PUSH EBX
0074A9C3  8B 5C 24 08               MOV EBX,dword ptr [ESP + 0x8]
0074A9C7  55                        PUSH EBP
0074A9C8  8B 2D 8C BB 85 00         MOV EBP,dword ptr [0x0085bb8c]
0074A9CE  56                        PUSH ESI
0074A9CF  8B B3 CC 00 00 00         MOV ESI,dword ptr [EBX + 0xcc]
0074A9D5  83 C6 7C                  ADD ESI,0x7c
0074A9D8  57                        PUSH EDI
0074A9D9  56                        PUSH ESI
0074A9DA  FF D5                     CALL EBP
0074A9DC  8B BB CC 00 00 00         MOV EDI,dword ptr [EBX + 0xcc]
0074A9E2  81 C7 94 00 00 00         ADD EDI,0x94
0074A9E8  57                        PUSH EDI
0074A9E9  FF D5                     CALL EBP
0074A9EB  8B 43 F4                  MOV EAX,dword ptr [EBX + -0xc]
0074A9EE  8D 4B F4                  LEA ECX,[EBX + -0xc]
0074A9F1  FF 50 38                  CALL dword ptr [EAX + 0x38]
0074A9F4  8B E8                     MOV EBP,EAX
0074A9F6  85 ED                     TEST EBP,EBP
0074A9F8  75 19                     JNZ 0x0074aa13
0074A9FA  8B 8B CC 00 00 00         MOV ECX,dword ptr [EBX + 0xcc]
0074AA00  8B 01                     MOV EAX,dword ptr [ECX]
0074AA02  FF 50 68                  CALL dword ptr [EAX + 0x68]
0074AA05  8B E8                     MOV EBP,EAX
0074AA07  85 ED                     TEST EBP,EBP
0074AA09  7C 08                     JL 0x0074aa13
0074AA0B  53                        PUSH EBX
0074AA0C  E8 94 D8 FF FF            CALL 0x007482a5
0074AA11  8B E8                     MOV EBP,EAX
LAB_0074aa13:
0074AA13  57                        PUSH EDI
0074AA14  8B 3D 90 BB 85 00         MOV EDI,dword ptr [0x0085bb90]
0074AA1A  FF D7                     CALL EDI
0074AA1C  56                        PUSH ESI
0074AA1D  FF D7                     CALL EDI
0074AA1F  5F                        POP EDI
0074AA20  8B C5                     MOV EAX,EBP
0074AA22  5E                        POP ESI
0074AA23  5D                        POP EBP
0074AA24  5B                        POP EBX
0074AA25  C2 04 00                  RET 0x4
