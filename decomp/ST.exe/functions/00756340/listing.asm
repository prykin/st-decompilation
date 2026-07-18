FUN_00756340:
00756340  55                        PUSH EBP
00756341  8B EC                     MOV EBP,ESP
00756343  56                        PUSH ESI
00756344  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756347  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075634A  3D C8 00 00 00            CMP EAX,0xc8
0075634F  74 1E                     JZ 0x0075636f
00756351  3D C9 00 00 00            CMP EAX,0xc9
00756356  74 17                     JZ 0x0075636f
00756358  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075635D  68 02 01 00 00            PUSH 0x102
00756362  68 38 2D 7F 00            PUSH 0x7f2d38
00756367  50                        PUSH EAX
00756368  6A 12                     PUSH 0x12
0075636A  E8 D1 FA F4 FF            CALL 0x006a5e40
LAB_0075636f:
0075636F  56                        PUSH ESI
00756370  E8 4B 00 00 00            CALL 0x007563c0
00756375  8B C8                     MOV ECX,EAX
00756377  49                        DEC ECX
00756378  74 32                     JZ 0x007563ac
0075637A  49                        DEC ECX
0075637B  75 34                     JNZ 0x007563b1
0075637D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00756380  85 C0                     TEST EAX,EAX
00756382  74 18                     JZ 0x0075639c
00756384  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075638A  68 0C 01 00 00            PUSH 0x10c
0075638F  68 38 2D 7F 00            PUSH 0x7f2d38
00756394  51                        PUSH ECX
00756395  6A 32                     PUSH 0x32
00756397  E8 A4 FA F4 FF            CALL 0x006a5e40
LAB_0075639c:
0075639C  56                        PUSH ESI
0075639D  E8 2E 3A 00 00            CALL 0x00759dd0
007563A2  B8 02 00 00 00            MOV EAX,0x2
007563A7  5E                        POP ESI
007563A8  5D                        POP EBP
007563A9  C2 08 00                  RET 0x8
LAB_007563ac:
007563AC  B8 01 00 00 00            MOV EAX,0x1
LAB_007563b1:
007563B1  5E                        POP ESI
007563B2  5D                        POP EBP
007563B3  C2 08 00                  RET 0x8
