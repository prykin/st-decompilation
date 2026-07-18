FUN_0072e6c0:
0072E6C0  55                        PUSH EBP
0072E6C1  8B EC                     MOV EBP,ESP
0072E6C3  A1 10 11 7F 00            MOV EAX,[0x007f1110]
0072E6C8  69 C0 FD 43 03 00         IMUL EAX,EAX,0x343fd
0072E6CE  05 C3 9E 26 00            ADD EAX,0x269ec3
0072E6D3  A3 10 11 7F 00            MOV [0x007f1110],EAX
0072E6D8  A1 10 11 7F 00            MOV EAX,[0x007f1110]
0072E6DD  C1 F8 10                  SAR EAX,0x10
0072E6E0  25 FF 7F 00 00            AND EAX,0x7fff
0072E6E5  5D                        POP EBP
0072E6E6  C3                        RET
