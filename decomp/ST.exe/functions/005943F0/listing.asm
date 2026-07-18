FUN_005943f0:
005943F0  8B D1                     MOV EDX,ECX
005943F2  56                        PUSH ESI
005943F3  57                        PUSH EDI
005943F4  B9 08 00 00 00            MOV ECX,0x8
005943F9  8D 72 18                  LEA ESI,[EDX + 0x18]
005943FC  33 C0                     XOR EAX,EAX
005943FE  8B FE                     MOV EDI,ESI
00594400  56                        PUSH ESI
00594401  F3 AB                     STOSD.REP ES:EDI
00594403  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00594406  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00594409  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0059440C  89 4A 20                  MOV dword ptr [EDX + 0x20],ECX
0059440F  8B CA                     MOV ECX,EDX
00594411  C7 42 24 00 00 00 00      MOV dword ptr [EDX + 0x24],0x0
00594418  C7 42 28 0A 00 00 00      MOV dword ptr [EDX + 0x28],0xa
0059441F  89 42 2C                  MOV dword ptr [EDX + 0x2c],EAX
00594422  E8 79 1C 15 00            CALL 0x006e60a0
00594427  5F                        POP EDI
00594428  5E                        POP ESI
00594429  C3                        RET
