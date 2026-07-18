FUN_0074748e:
0074748E  55                        PUSH EBP
0074748F  8B EC                     MOV EBP,ESP
00747491  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00747494  56                        PUSH ESI
00747495  8D 48 F0                  LEA ECX,[EAX + -0x10]
00747498  8B 40 F0                  MOV EAX,dword ptr [EAX + -0x10]
0074749B  FF 50 20                  CALL dword ptr [EAX + 0x20]
0074749E  8B F0                     MOV ESI,EAX
007474A0  85 F6                     TEST ESI,ESI
007474A2  75 05                     JNZ 0x007474a9
007474A4  6A 01                     PUSH 0x1
007474A6  58                        POP EAX
007474A7  EB 46                     JMP 0x007474ef
LAB_007474a9:
007474A9  6A 00                     PUSH 0x0
007474AB  FF 15 D0 C0 85 00         CALL dword ptr [0x0085c0d0]
007474B1  8D 45 08                  LEA EAX,[EBP + 0x8]
007474B4  50                        PUSH EAX
007474B5  68 10 1B 7A 00            PUSH 0x7a1b10
007474BA  6A 01                     PUSH 0x1
007474BC  6A 00                     PUSH 0x0
007474BE  68 00 1B 7A 00            PUSH 0x7a1b00
007474C3  FF 15 E4 C0 85 00         CALL dword ptr [0x0085c0e4]
007474C9  85 C0                     TEST EAX,EAX
007474CB  7C 14                     JL 0x007474e1
007474CD  6A 01                     PUSH 0x1
007474CF  FF 75 08                  PUSH dword ptr [EBP + 0x8]
007474D2  56                        PUSH ESI
007474D3  E8 30 22 00 00            CALL 0x00749708
007474D8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007474DB  50                        PUSH EAX
007474DC  8B 08                     MOV ECX,dword ptr [EAX]
007474DE  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_007474e1:
007474E1  FF 15 D4 C0 85 00         CALL dword ptr [0x0085c0d4]
007474E7  FF 15 E0 C0 85 00         CALL dword ptr [0x0085c0e0]
007474ED  33 C0                     XOR EAX,EAX
LAB_007474ef:
007474EF  5E                        POP ESI
007474F0  5D                        POP EBP
007474F1  C2 04 00                  RET 0x4
