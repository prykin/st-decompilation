FUN_007474f4:
007474F4  55                        PUSH EBP
007474F5  8B EC                     MOV EBP,ESP
007474F7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007474FA  57                        PUSH EDI
007474FB  8D 48 F0                  LEA ECX,[EAX + -0x10]
007474FE  8B 40 F0                  MOV EAX,dword ptr [EAX + -0x10]
00747501  FF 50 20                  CALL dword ptr [EAX + 0x20]
00747504  8B F8                     MOV EDI,EAX
00747506  85 FF                     TEST EDI,EDI
00747508  75 05                     JNZ 0x0074750f
0074750A  6A 01                     PUSH 0x1
0074750C  58                        POP EAX
0074750D  EB 57                     JMP 0x00747566
LAB_0074750f:
0074750F  56                        PUSH ESI
00747510  6A 00                     PUSH 0x0
00747512  FF 15 D0 C0 85 00         CALL dword ptr [0x0085c0d0]
00747518  8D 45 08                  LEA EAX,[EBP + 0x8]
0074751B  50                        PUSH EAX
0074751C  68 10 1B 7A 00            PUSH 0x7a1b10
00747521  6A 01                     PUSH 0x1
00747523  6A 00                     PUSH 0x0
00747525  68 00 1B 7A 00            PUSH 0x7a1b00
0074752A  FF 15 E4 C0 85 00         CALL dword ptr [0x0085c0e4]
00747530  8B F0                     MOV ESI,EAX
00747532  85 F6                     TEST ESI,ESI
00747534  7C 16                     JL 0x0074754c
00747536  6A 00                     PUSH 0x0
00747538  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074753B  57                        PUSH EDI
0074753C  E8 C7 21 00 00            CALL 0x00749708
00747541  8B F0                     MOV ESI,EAX
00747543  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00747546  50                        PUSH EAX
00747547  8B 08                     MOV ECX,dword ptr [EAX]
00747549  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074754c:
0074754C  FF 15 D4 C0 85 00         CALL dword ptr [0x0085c0d4]
00747552  FF 15 E0 C0 85 00         CALL dword ptr [0x0085c0e0]
00747558  8B C6                     MOV EAX,ESI
0074755A  2D 02 00 07 80            SUB EAX,0x80070002
0074755F  F7 D8                     NEG EAX
00747561  1B C0                     SBB EAX,EAX
00747563  23 C6                     AND EAX,ESI
00747565  5E                        POP ESI
LAB_00747566:
00747566  5F                        POP EDI
00747567  5D                        POP EBP
00747568  C2 04 00                  RET 0x4
