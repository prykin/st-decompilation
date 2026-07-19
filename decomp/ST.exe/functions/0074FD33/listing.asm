FUN_0074fd33:
0074FD33  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074FD37  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074FD3B  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
0074FD3E  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074FD42  8B 08                     MOV ECX,dword ptr [EAX]
0074FD44  50                        PUSH EAX
0074FD45  FF 11                     CALL dword ptr [ECX]
0074FD47  C2 0C 00                  RET 0xc
