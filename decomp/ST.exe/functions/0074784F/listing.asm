FUN_0074784f:
0074784F  56                        PUSH ESI
00747850  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
00747854  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00747857  8B 01                     MOV EAX,dword ptr [ECX]
00747859  FF 50 14                  CALL dword ptr [EAX + 0x14]
0074785C  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0074785F  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
00747862  8B 01                     MOV EAX,dword ptr [ECX]
00747864  FF 50 18                  CALL dword ptr [EAX + 0x18]
00747867  83 66 04 00               AND dword ptr [ESI + 0x4],0x0
0074786B  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0074786E  33 C0                     XOR EAX,EAX
00747870  5E                        POP ESI
00747871  C2 04 00                  RET 0x4
