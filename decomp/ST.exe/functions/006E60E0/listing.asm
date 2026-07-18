FUN_006e60e0:
006E60E0  56                        PUSH ESI
006E60E1  8B F1                     MOV ESI,ECX
006E60E3  E8 C8 FE FF FF            CALL 0x006e5fb0
006E60E8  C7 06 B0 E1 79 00         MOV dword ptr [ESI],0x79e1b0
006E60EE  C7 46 18 00 00 00 00      MOV dword ptr [ESI + 0x18],0x0
006E60F5  8B C6                     MOV EAX,ESI
006E60F7  5E                        POP ESI
006E60F8  C3                        RET
