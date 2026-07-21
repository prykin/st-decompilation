TLOBldMark::TLOBldMark:
004C60A0  56                        PUSH ESI
004C60A1  8B F1                     MOV ESI,ECX
004C60A3  E8 08 FF 21 00            CALL 0x006e5fb0
004C60A8  33 C0                     XOR EAX,EAX
004C60AA  C7 06 04 0C 79 00         MOV dword ptr [ESI],0x790c04
004C60B0  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
004C60B3  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
004C60B6  83 C8 FF                  OR EAX,0xffffffff
004C60B9  C7 46 18 01 00 00 00      MOV dword ptr [ESI + 0x18],0x1
004C60C0  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
004C60C3  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
004C60C6  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
004C60C9  8B C6                     MOV EAX,ESI
004C60CB  5E                        POP ESI
004C60CC  C3                        RET
