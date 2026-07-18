FUN_0041f330:
0041F330  8B 81 D1 01 00 00         MOV EAX,dword ptr [ECX + 0x1d1]
0041F336  F7 D0                     NOT EAX
0041F338  C1 E8 04                  SHR EAX,0x4
0041F33B  83 E0 01                  AND EAX,0x1
0041F33E  C3                        RET
