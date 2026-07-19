FUN_0074c842:
0074C842  8B 89 A0 00 00 00         MOV ECX,dword ptr [ECX + 0xa0]
0074C848  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C84C  8B 01                     MOV EAX,dword ptr [ECX]
0074C84E  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C852  FF 50 30                  CALL dword ptr [EAX + 0x30]
0074C855  C2 08 00                  RET 0x8
