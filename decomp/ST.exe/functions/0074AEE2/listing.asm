FUN_0074aee2:
0074AEE2  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074AEE6  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
0074AEEA  89 48 E0                  MOV dword ptr [EAX + -0x20],ECX
0074AEED  33 C0                     XOR EAX,EAX
0074AEEF  C2 08 00                  RET 0x8
