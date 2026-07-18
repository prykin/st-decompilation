FUN_00747af8:
00747AF8  56                        PUSH ESI
00747AF9  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
00747AFD  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00747B00  83 66 04 00               AND dword ptr [ESI + 0x4],0x0
00747B04  8B 01                     MOV EAX,dword ptr [ECX]
00747B06  FF 50 10                  CALL dword ptr [EAX + 0x10]
00747B09  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
00747B0C  33 C0                     XOR EAX,EAX
00747B0E  5E                        POP ESI
00747B0F  C2 04 00                  RET 0x4
