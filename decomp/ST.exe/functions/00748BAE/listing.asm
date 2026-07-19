FUN_00748bae:
00748BAE  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748BB2  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
00748BB6  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00748BB9  89 01                     MOV dword ptr [ECX],EAX
00748BBB  33 C0                     XOR EAX,EAX
00748BBD  C2 08 00                  RET 0x8
