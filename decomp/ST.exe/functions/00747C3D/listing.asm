FUN_00747c3d:
00747C3D  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00747C41  8B 40 70                  MOV EAX,dword ptr [EAX + 0x70]
00747C44  83 C0 0C                  ADD EAX,0xc
00747C47  50                        PUSH EAX
00747C48  8B 08                     MOV ECX,dword ptr [EAX]
00747C4A  FF 51 04                  CALL dword ptr [ECX + 0x4]
00747C4D  C2 04 00                  RET 0x4
