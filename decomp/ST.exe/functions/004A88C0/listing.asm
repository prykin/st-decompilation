OpticClassC::OpticClassC:
004A88C0  56                        PUSH ESI
004A88C1  8B F1                     MOV ESI,ECX
004A88C3  E8 E8 D6 23 00            CALL 0x006e5fb0
004A88C8  C7 06 58 07 79 00         MOV dword ptr [ESI],0x790758
004A88CE  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
004A88D4  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
004A88D7  8B C6                     MOV EAX,ESI
004A88D9  5E                        POP ESI
004A88DA  C3                        RET
