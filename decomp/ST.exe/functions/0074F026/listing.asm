FUN_0074f026:
0074F026  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074F02A  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F02E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0074F031  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F035  8B 08                     MOV ECX,dword ptr [EAX]
0074F037  50                        PUSH EAX
0074F038  FF 11                     CALL dword ptr [ECX]
0074F03A  C2 0C 00                  RET 0xc
