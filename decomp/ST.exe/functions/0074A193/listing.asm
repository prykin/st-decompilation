FUN_0074a193:
0074A193  56                        PUSH ESI
0074A194  8B F1                     MOV ESI,ECX
0074A196  6A 01                     PUSH 0x1
0074A198  E8 80 06 00 00            CALL 0x0074a81d
0074A19D  83 66 60 00               AND dword ptr [ESI + 0x60],0x0
0074A1A1  33 C0                     XOR EAX,EAX
0074A1A3  5E                        POP ESI
0074A1A4  C2 04 00                  RET 0x4
