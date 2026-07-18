FUN_0074b96b:
0074B96B  56                        PUSH ESI
0074B96C  8B F1                     MOV ESI,ECX
0074B96E  39 74 24 08               CMP dword ptr [ESP + 0x8],ESI
0074B972  74 10                     JZ 0x0074b984
0074B974  56                        PUSH ESI
0074B975  E8 6A 03 00 00            CALL 0x0074bce4
0074B97A  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074B97E  56                        PUSH ESI
0074B97F  E8 05 03 00 00            CALL 0x0074bc89
LAB_0074b984:
0074B984  8B C6                     MOV EAX,ESI
0074B986  5E                        POP ESI
0074B987  C2 04 00                  RET 0x4
