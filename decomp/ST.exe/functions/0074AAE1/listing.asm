FUN_0074aae1:
0074AAE1  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074AAE5  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074AAE9  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
0074AAEC  8B 01                     MOV EAX,dword ptr [ECX]
0074AAEE  FF 90 9C 00 00 00         CALL dword ptr [EAX + 0x9c]
0074AAF4  C2 08 00                  RET 0x8
