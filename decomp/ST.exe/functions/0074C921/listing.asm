FUN_0074c921:
0074C921  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074C925  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
0074C928  50                        PUSH EAX
0074C929  8B 08                     MOV ECX,dword ptr [EAX]
0074C92B  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074C92E  C2 04 00                  RET 0x4
