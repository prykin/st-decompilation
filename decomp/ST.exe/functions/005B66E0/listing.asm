FUN_005b66e0:
005B66E0  8B D1                     MOV EDX,ECX
005B66E2  56                        PUSH ESI
005B66E3  57                        PUSH EDI
005B66E4  B9 08 00 00 00            MOV ECX,0x8
005B66E9  8D 72 1D                  LEA ESI,[EDX + 0x1d]
005B66EC  33 C0                     XOR EAX,EAX
005B66EE  8B FE                     MOV EDI,ESI
005B66F0  56                        PUSH ESI
005B66F1  F3 AB                     STOSD.REP ES:EDI
005B66F3  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005B66F6  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005B66F9  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005B66FC  89 4A 25                  MOV dword ptr [EDX + 0x25],ECX
005B66FF  8B CA                     MOV ECX,EDX
005B6701  C7 42 29 00 00 00 00      MOV dword ptr [EDX + 0x29],0x0
005B6708  C7 42 2D 0A 00 00 00      MOV dword ptr [EDX + 0x2d],0xa
005B670F  89 42 31                  MOV dword ptr [EDX + 0x31],EAX
005B6712  E8 89 F9 12 00            CALL 0x006e60a0
005B6717  5F                        POP EDI
005B6718  5E                        POP ESI
005B6719  C3                        RET
