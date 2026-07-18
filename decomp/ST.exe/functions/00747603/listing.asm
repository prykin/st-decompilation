FUN_00747603:
00747603  56                        PUSH ESI
00747604  8B F1                     MOV ESI,ECX
00747606  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00747609  C7 06 08 11 7A 00         MOV dword ptr [ESI],0x7a1108
0074760F  83 C0 0C                  ADD EAX,0xc
00747612  50                        PUSH EAX
00747613  8B 08                     MOV ECX,dword ptr [EAX]
00747615  FF 51 08                  CALL dword ptr [ECX + 0x8]
00747618  8D 4E 18                  LEA ECX,[ESI + 0x18]
0074761B  E8 5F 68 00 00            CALL 0x0074de7f
00747620  5E                        POP ESI
00747621  C3                        RET
