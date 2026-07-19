FUN_0074c931:
0074C931  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074C935  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
0074C938  50                        PUSH EAX
0074C939  8B 08                     MOV ECX,dword ptr [EAX]
0074C93B  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074C93E  C2 04 00                  RET 0x4
