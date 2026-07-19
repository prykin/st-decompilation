FUN_0041f310:
0041F310  8B 81 D1 01 00 00         MOV EAX,dword ptr [ECX + 0x1d1]
0041F316  F7 D0                     NOT EAX
0041F318  D1 E8                     SHR EAX,0x1
0041F31A  83 E0 01                  AND EAX,0x1
0041F31D  C3                        RET
