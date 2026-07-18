FUN_0074a0c1:
0074A0C1  56                        PUSH ESI
0074A0C2  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074A0C6  85 F6                     TEST ESI,ESI
0074A0C8  75 07                     JNZ 0x0074a0d1
0074A0CA  B8 03 40 00 80            MOV EAX,0x80004003
0074A0CF  EB 3E                     JMP 0x0074a10f
LAB_0074a0d1:
0074A0D1  68 98 E2 7E 00            PUSH 0x7ee298
0074A0D6  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074A0DA  E8 F4 34 00 00            CALL 0x0074d5d3
0074A0DF  85 C0                     TEST EAX,EAX
0074A0E1  75 24                     JNZ 0x0074a107
0074A0E3  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0074A0E7  6A 00                     PUSH 0x0
0074A0E9  8D 48 F4                  LEA ECX,[EAX + -0xc]
0074A0EC  8B 40 F4                  MOV EAX,dword ptr [EAX + -0xc]
0074A0EF  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0074A0F2  8D 48 0C                  LEA ECX,[EAX + 0xc]
0074A0F5  F7 D8                     NEG EAX
0074A0F7  1B C0                     SBB EAX,EAX
0074A0F9  23 C1                     AND EAX,ECX
0074A0FB  89 06                     MOV dword ptr [ESI],EAX
0074A0FD  50                        PUSH EAX
0074A0FE  8B 08                     MOV ECX,dword ptr [EAX]
0074A100  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074A103  33 C0                     XOR EAX,EAX
0074A105  EB 08                     JMP 0x0074a10f
LAB_0074a107:
0074A107  83 26 00                  AND dword ptr [ESI],0x0
0074A10A  B8 16 02 04 80            MOV EAX,0x80040216
LAB_0074a10f:
0074A10F  5E                        POP ESI
0074A110  C2 0C 00                  RET 0xc
