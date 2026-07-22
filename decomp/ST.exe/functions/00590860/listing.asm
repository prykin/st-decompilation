MAdvTy::sub_00590860:
00590860  8B D1                     MOV EDX,ECX
00590862  56                        PUSH ESI
00590863  57                        PUSH EDI
00590864  B9 08 00 00 00            MOV ECX,0x8
00590869  8D 72 18                  LEA ESI,[EDX + 0x18]
0059086C  33 C0                     XOR EAX,EAX
0059086E  8B FE                     MOV EDI,ESI
00590870  56                        PUSH ESI
00590871  F3 AB                     STOSD.REP ES:EDI
00590873  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00590876  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00590879  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0059087C  89 4A 20                  MOV dword ptr [EDX + 0x20],ECX
0059087F  8B CA                     MOV ECX,EDX
00590881  C7 42 24 00 00 00 00      MOV dword ptr [EDX + 0x24],0x0
00590888  C7 42 28 0A 00 00 00      MOV dword ptr [EDX + 0x28],0xa
0059088F  89 42 2C                  MOV dword ptr [EDX + 0x2c],EAX
00590892  E8 09 58 15 00            CALL 0x006e60a0
00590897  5F                        POP EDI
00590898  5E                        POP ESI
00590899  C3                        RET
