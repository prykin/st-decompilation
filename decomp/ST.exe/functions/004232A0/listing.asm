STGroupBoatC::sub_004232A0:
004232A0  56                        PUSH ESI
004232A1  8B F1                     MOV ESI,ECX
004232A3  E8 38 2E 2C 00            CALL 0x006e60e0
004232A8  33 C0                     XOR EAX,EAX
004232AA  C7 06 08 05 79 00         MOV dword ptr [ESI],0x790508
004232B0  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004232B3  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
004232B6  89 46 29                  MOV dword ptr [ESI + 0x29],EAX
004232B9  89 46 2D                  MOV dword ptr [ESI + 0x2d],EAX
004232BC  66 89 46 27               MOV word ptr [ESI + 0x27],AX
004232C0  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
004232C3  89 46 39                  MOV dword ptr [ESI + 0x39],EAX
004232C6  8B C6                     MOV EAX,ESI
004232C8  5E                        POP ESI
004232C9  C3                        RET
