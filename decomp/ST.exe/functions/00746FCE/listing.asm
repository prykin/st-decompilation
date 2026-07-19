FUN_00746fce:
00746FCE  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
00746FD2  85 C0                     TEST EAX,EAX
00746FD4  75 07                     JNZ 0x00746fdd
00746FD6  B8 03 40 00 80            MOV EAX,0x80004003
00746FDB  EB 0B                     JMP 0x00746fe8
LAB_00746fdd:
00746FDD  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
00746FE1  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
00746FE4  89 08                     MOV dword ptr [EAX],ECX
00746FE6  33 C0                     XOR EAX,EAX
LAB_00746fe8:
00746FE8  C2 0C 00                  RET 0xc
