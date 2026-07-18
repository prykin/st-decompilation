FUN_0074bc50:
0074BC50  56                        PUSH ESI
0074BC51  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074BC55  85 F6                     TEST ESI,ESI
0074BC57  74 0D                     JZ 0x0074bc66
0074BC59  56                        PUSH ESI
0074BC5A  E8 85 00 00 00            CALL 0x0074bce4
0074BC5F  56                        PUSH ESI
0074BC60  FF 15 DC C0 85 00         CALL dword ptr [0x0085c0dc]
LAB_0074bc66:
0074BC66  5E                        POP ESI
0074BC67  C2 04 00                  RET 0x4
