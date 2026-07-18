FUN_0074fdeb:
0074FDEB  56                        PUSH ESI
0074FDEC  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074FDF0  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0074FDF3  85 C9                     TEST ECX,ECX
0074FDF5  75 07                     JNZ 0x0074fdfe
0074FDF7  B8 34 02 04 80            MOV EAX,0x80040234
0074FDFC  EB 13                     JMP 0x0074fe11
LAB_0074fdfe:
0074FDFE  8B 01                     MOV EAX,dword ptr [ECX]
0074FE00  8D 56 F4                  LEA EDX,[ESI + -0xc]
0074FE03  52                        PUSH EDX
0074FE04  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0074FE07  85 C0                     TEST EAX,EAX
0074FE09  7C 06                     JL 0x0074fe11
0074FE0B  83 66 04 00               AND dword ptr [ESI + 0x4],0x0
0074FE0F  33 C0                     XOR EAX,EAX
LAB_0074fe11:
0074FE11  5E                        POP ESI
0074FE12  C2 04 00                  RET 0x4
