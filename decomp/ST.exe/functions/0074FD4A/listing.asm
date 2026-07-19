FUN_0074fd4a:
0074FD4A  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074FD4E  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
0074FD51  50                        PUSH EAX
0074FD52  8B 08                     MOV ECX,dword ptr [EAX]
0074FD54  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074FD57  C2 04 00                  RET 0x4
