FUN_0074f0c0:
0074F0C0  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074F0C4  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0074F0C7  50                        PUSH EAX
0074F0C8  8B 08                     MOV ECX,dword ptr [EAX]
0074F0CA  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074F0CD  C2 04 00                  RET 0x4
