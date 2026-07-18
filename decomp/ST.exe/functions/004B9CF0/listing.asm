FUN_004b9cf0:
004B9CF0  56                        PUSH ESI
004B9CF1  8B F1                     MOV ESI,ECX
004B9CF3  6A 00                     PUSH 0x0
004B9CF5  E8 34 77 F4 FF            CALL 0x0040142e
004B9CFA  C7 86 B4 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4b4],0x1
004B9D04  33 C0                     XOR EAX,EAX
004B9D06  5E                        POP ESI
004B9D07  C3                        RET
