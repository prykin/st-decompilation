FUN_0074c4bf:
0074C4BF  53                        PUSH EBX
0074C4C0  56                        PUSH ESI
0074C4C1  57                        PUSH EDI
0074C4C2  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
0074C4C6  8B B7 CC 00 00 00         MOV ESI,dword ptr [EDI + 0xcc]
0074C4CC  83 C6 74                  ADD ESI,0x74
0074C4CF  56                        PUSH ESI
0074C4D0  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074C4D6  8B 47 F4                  MOV EAX,dword ptr [EDI + -0xc]
0074C4D9  8D 4F F4                  LEA ECX,[EDI + -0xc]
0074C4DC  FF 50 38                  CALL dword ptr [EAX + 0x38]
0074C4DF  8B D8                     MOV EBX,EAX
0074C4E1  85 DB                     TEST EBX,EBX
0074C4E3  75 0D                     JNZ 0x0074c4f2
0074C4E5  8B 8F CC 00 00 00         MOV ECX,dword ptr [EDI + 0xcc]
0074C4EB  8B 01                     MOV EAX,dword ptr [ECX]
0074C4ED  FF 50 58                  CALL dword ptr [EAX + 0x58]
0074C4F0  8B D8                     MOV EBX,EAX
LAB_0074c4f2:
0074C4F2  56                        PUSH ESI
0074C4F3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C4F9  5F                        POP EDI
0074C4FA  8B C3                     MOV EAX,EBX
0074C4FC  5E                        POP ESI
0074C4FD  5B                        POP EBX
0074C4FE  C2 04 00                  RET 0x4
