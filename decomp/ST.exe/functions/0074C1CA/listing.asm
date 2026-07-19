FUN_0074c1ca:
0074C1CA  8B 89 90 00 00 00         MOV ECX,dword ptr [ECX + 0x90]
0074C1D0  33 C0                     XOR EAX,EAX
0074C1D2  85 C9                     TEST ECX,ECX
0074C1D4  74 05                     JZ 0x0074c1db
0074C1D6  8B 01                     MOV EAX,dword ptr [ECX]
0074C1D8  FF 50 4C                  CALL dword ptr [EAX + 0x4c]
LAB_0074c1db:
0074C1DB  C3                        RET
