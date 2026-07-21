STBHEShellC::STBHEShellC:
005F3440  56                        PUSH ESI
005F3441  57                        PUSH EDI
005F3442  8B F1                     MOV ESI,ECX
005F3444  E8 97 2C 0F 00            CALL 0x006e60e0
005F3449  B9 4A 00 00 00            MOV ECX,0x4a
005F344E  33 C0                     XOR EAX,EAX
005F3450  8D 7E 4D                  LEA EDI,[ESI + 0x4d]
005F3453  C7 06 84 C5 79 00         MOV dword ptr [ESI],0x79c584
005F3459  F3 AB                     STOSD.REP ES:EDI
005F345B  8B C6                     MOV EAX,ESI
005F345D  5F                        POP EDI
005F345E  5E                        POP ESI
005F345F  C3                        RET
