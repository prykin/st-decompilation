FUN_004c63f0:
004C63F0  56                        PUSH ESI
004C63F1  8B F1                     MOV ESI,ECX
004C63F3  6A 00                     PUSH 0x0
004C63F5  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C63F8  C7 46 18 01 00 00 00      MOV dword ptr [ESI + 0x18],0x1
004C63FF  E8 60 DE F3 FF            CALL 0x00404264
004C6404  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6407  E8 C9 BD F3 FF            CALL 0x004021d5
004C640C  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
004C640F  50                        PUSH EAX
004C6410  E8 9B 7E 26 00            CALL 0x0072e2b0
004C6415  83 C4 04                  ADD ESP,0x4
004C6418  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
004C641F  C7 46 28 00 00 00 00      MOV dword ptr [ESI + 0x28],0x0
004C6426  33 C0                     XOR EAX,EAX
004C6428  5E                        POP ESI
004C6429  C3                        RET
