FUN_00747822:
00747822  56                        PUSH ESI
00747823  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
00747827  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0074782A  8B 01                     MOV EAX,dword ptr [ECX]
0074782C  FF 50 14                  CALL dword ptr [EAX + 0x14]
0074782F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00747832  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
00747835  8B 01                     MOV EAX,dword ptr [ECX]
00747837  FF 50 18                  CALL dword ptr [EAX + 0x18]
0074783A  83 66 04 00               AND dword ptr [ESI + 0x4],0x0
0074783E  8D 4E 18                  LEA ECX,[ESI + 0x18]
00747841  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
00747844  E8 48 66 00 00            CALL 0x0074de91
00747849  33 C0                     XOR EAX,EAX
0074784B  5E                        POP ESI
0074784C  C2 04 00                  RET 0x4
