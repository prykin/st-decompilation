FUN_00747c50:
00747C50  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00747C54  8B 40 70                  MOV EAX,dword ptr [EAX + 0x70]
00747C57  83 C0 0C                  ADD EAX,0xc
00747C5A  50                        PUSH EAX
00747C5B  8B 08                     MOV ECX,dword ptr [EAX]
00747C5D  FF 51 08                  CALL dword ptr [ECX + 0x8]
00747C60  C2 04 00                  RET 0x4
