FUN_0074c7b6:
0074C7B6  56                        PUSH ESI
0074C7B7  8B F1                     MOV ESI,ECX
0074C7B9  6A 01                     PUSH 0x1
0074C7BB  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
0074C7C1  8B 01                     MOV EAX,dword ptr [ECX]
0074C7C3  FF 50 4C                  CALL dword ptr [EAX + 0x4c]
0074C7C6  8B CE                     MOV ECX,ESI
0074C7C8  E8 AF BB FF FF            CALL 0x0074837c
0074C7CD  5E                        POP ESI
0074C7CE  C3                        RET
