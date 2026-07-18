FUN_0060a9d0:
0060A9D0  56                        PUSH ESI
0060A9D1  8B F1                     MOV ESI,ECX
0060A9D3  E8 13 8A DF FF            CALL 0x004033eb
0060A9D8  8B 86 34 02 00 00         MOV EAX,dword ptr [ESI + 0x234]
0060A9DE  50                        PUSH EAX
0060A9DF  E8 2C 37 0A 00            CALL 0x006ae110
0060A9E4  C7 86 34 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x234],0x0
0060A9EE  5E                        POP ESI
0060A9EF  C3                        RET
