FUN_0074b9f5:
0074B9F5  FF 74 24 04               PUSH dword ptr [ESP + 0x4]
0074B9F9  E8 9E FF FF FF            CALL 0x0074b99c
0074B9FE  F7 D8                     NEG EAX
0074BA00  1B C0                     SBB EAX,EAX
0074BA02  40                        INC EAX
0074BA03  C2 04 00                  RET 0x4
