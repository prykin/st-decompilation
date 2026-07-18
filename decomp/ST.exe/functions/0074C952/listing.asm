FUN_0074c952:
0074C952  56                        PUSH ESI
0074C953  8B F1                     MOV ESI,ECX
0074C955  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074C959  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074C95D  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074C961  E8 7A F4 FF FF            CALL 0x0074bde0
0074C966  8B C6                     MOV EAX,ESI
0074C968  5E                        POP ESI
0074C969  C2 10 00                  RET 0x10
