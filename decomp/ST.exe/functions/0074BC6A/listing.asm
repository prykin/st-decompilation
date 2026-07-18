FUN_0074bc6a:
0074BC6A  56                        PUSH ESI
0074BC6B  6A 48                     PUSH 0x48
0074BC6D  FF 15 D8 C0 85 00         CALL dword ptr [0x0085c0d8]
0074BC73  8B F0                     MOV ESI,EAX
0074BC75  85 F6                     TEST ESI,ESI
0074BC77  74 0C                     JZ 0x0074bc85
0074BC79  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074BC7D  56                        PUSH ESI
0074BC7E  E8 06 00 00 00            CALL 0x0074bc89
0074BC83  8B C6                     MOV EAX,ESI
LAB_0074bc85:
0074BC85  5E                        POP ESI
0074BC86  C2 04 00                  RET 0x4
