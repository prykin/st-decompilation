FUN_0074c1dc:
0074C1DC  8B 89 90 00 00 00         MOV ECX,dword ptr [ECX + 0x90]
0074C1E2  33 C0                     XOR EAX,EAX
0074C1E4  85 C9                     TEST ECX,ECX
0074C1E6  74 05                     JZ 0x0074c1ed
0074C1E8  8B 01                     MOV EAX,dword ptr [ECX]
0074C1EA  FF 50 50                  CALL dword ptr [EAX + 0x50]
LAB_0074c1ed:
0074C1ED  C3                        RET
