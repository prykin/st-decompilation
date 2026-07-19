FUN_0074fd5a:
0074FD5A  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074FD5E  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
0074FD61  50                        PUSH EAX
0074FD62  8B 08                     MOV ECX,dword ptr [EAX]
0074FD64  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074FD67  C2 04 00                  RET 0x4
