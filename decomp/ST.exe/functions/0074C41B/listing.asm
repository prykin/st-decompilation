FUN_0074c41b:
0074C41B  56                        PUSH ESI
0074C41C  8B F1                     MOV ESI,ECX
0074C41E  6A 00                     PUSH 0x0
0074C420  8B 8E D8 00 00 00         MOV ECX,dword ptr [ESI + 0xd8]
0074C426  8B 01                     MOV EAX,dword ptr [ECX]
0074C428  FF 50 4C                  CALL dword ptr [EAX + 0x4c]
0074C42B  8B CE                     MOV ECX,ESI
0074C42D  E8 5F BB FF FF            CALL 0x00747f91
0074C432  5E                        POP ESI
0074C433  C3                        RET
