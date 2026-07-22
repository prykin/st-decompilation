MTestTy::sub_005E5F60:
005E5F60  8B D1                     MOV EDX,ECX
005E5F62  56                        PUSH ESI
005E5F63  57                        PUSH EDI
005E5F64  B9 08 00 00 00            MOV ECX,0x8
005E5F69  8D 72 61                  LEA ESI,[EDX + 0x61]
005E5F6C  33 C0                     XOR EAX,EAX
005E5F6E  8B FE                     MOV EDI,ESI
005E5F70  56                        PUSH ESI
005E5F71  F3 AB                     STOSD.REP ES:EDI
005E5F73  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005E5F76  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005E5F79  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005E5F7C  89 4A 69                  MOV dword ptr [EDX + 0x69],ECX
005E5F7F  8B CA                     MOV ECX,EDX
005E5F81  C7 42 6D 00 00 00 00      MOV dword ptr [EDX + 0x6d],0x0
005E5F88  C7 42 71 0A 00 00 00      MOV dword ptr [EDX + 0x71],0xa
005E5F8F  89 42 75                  MOV dword ptr [EDX + 0x75],EAX
005E5F92  E8 09 01 10 00            CALL 0x006e60a0
005E5F97  5F                        POP EDI
005E5F98  5E                        POP ESI
005E5F99  C3                        RET
