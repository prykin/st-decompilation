FUN_0074c90a:
0074C90A  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074C90E  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074C912  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
0074C915  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074C919  8B 08                     MOV ECX,dword ptr [EAX]
0074C91B  50                        PUSH EAX
0074C91C  FF 11                     CALL dword ptr [ECX]
0074C91E  C2 0C 00                  RET 0xc
