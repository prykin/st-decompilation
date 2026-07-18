FUN_0074756b:
0074756B  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074756F  56                        PUSH ESI
00747570  8B F1                     MOV ESI,ECX
00747572  57                        PUSH EDI
00747573  6A 00                     PUSH 0x0
00747575  83 66 04 00               AND dword ptr [ESI + 0x4],0x0
00747579  83 66 08 00               AND dword ptr [ESI + 0x8],0x0
0074757D  8D 7E 18                  LEA EDI,[ESI + 0x18]
00747580  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
00747583  8B CF                     MOV ECX,EDI
00747585  C7 46 14 01 00 00 00      MOV dword ptr [ESI + 0x14],0x1
0074758C  E8 D2 68 00 00            CALL 0x0074de63
00747591  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00747594  C7 06 08 11 7A 00         MOV dword ptr [ESI],0x7a1108
0074759A  83 C0 0C                  ADD EAX,0xc
0074759D  50                        PUSH EAX
0074759E  8B 08                     MOV ECX,dword ptr [EAX]
007475A0  FF 51 04                  CALL dword ptr [ECX + 0x4]
007475A3  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
007475A7  85 C0                     TEST EAX,EAX
007475A9  75 18                     JNZ 0x007475c3
007475AB  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
007475AE  8B 01                     MOV EAX,dword ptr [ECX]
007475B0  FF 50 14                  CALL dword ptr [EAX + 0x14]
007475B3  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
007475B6  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
007475B9  8B 01                     MOV EAX,dword ptr [ECX]
007475BB  FF 50 18                  CALL dword ptr [EAX + 0x18]
007475BE  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
007475C1  EB 1D                     JMP 0x007475e0
LAB_007475c3:
007475C3  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
007475C6  83 C0 18                  ADD EAX,0x18
007475C9  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
007475CC  8B 48 F0                  MOV ECX,dword ptr [EAX + -0x10]
007475CF  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
007475D2  8B 48 F8                  MOV ECX,dword ptr [EAX + -0x8]
007475D5  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
007475D8  50                        PUSH EAX
007475D9  8B CF                     MOV ECX,EDI
007475DB  E8 15 6A 00 00            CALL 0x0074dff5
LAB_007475e0:
007475E0  8B C6                     MOV EAX,ESI
007475E2  5F                        POP EDI
007475E3  5E                        POP ESI
007475E4  C2 08 00                  RET 0x8
