FUN_00428a10:
00428A10  55                        PUSH EBP
00428A11  8B EC                     MOV EBP,ESP
00428A13  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
00428A19  85 C9                     TEST ECX,ECX
00428A1B  75 05                     JNZ 0x00428a22
00428A1D  83 C8 FF                  OR EAX,0xffffffff
00428A20  5D                        POP EBP
00428A21  C3                        RET
LAB_00428a22:
00428A22  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00428A25  85 C0                     TEST EAX,EAX
00428A27  7D 3B                     JGE 0x00428a64
00428A29  F7 D8                     NEG EAX
00428A2B  A3 00 4E 7F 00            MOV [0x007f4e00],EAX
00428A30  50                        PUSH EAX
00428A31  A1 18 76 80 00            MOV EAX,[0x00807618]
00428A36  50                        PUSH EAX
00428A37  68 84 26 00 00            PUSH 0x2684
00428A3C  E8 FF 76 28 00            CALL 0x006b0140
00428A41  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
00428A47  50                        PUSH EAX
00428A48  6A 00                     PUSH 0x0
00428A4A  E8 3C C3 FD FF            CALL 0x00404d8b
00428A4F  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
00428A55  6A 00                     PUSH 0x0
00428A57  6A 00                     PUSH 0x0
00428A59  6A 00                     PUSH 0x0
00428A5B  E8 12 AA FD FF            CALL 0x00403472
00428A60  33 C0                     XOR EAX,EAX
00428A62  5D                        POP EBP
00428A63  C3                        RET
LAB_00428a64:
00428A64  6A 00                     PUSH 0x0
00428A66  50                        PUSH EAX
00428A67  6A 01                     PUSH 0x1
00428A69  E8 04 AA FD FF            CALL 0x00403472
00428A6E  33 C0                     XOR EAX,EAX
00428A70  5D                        POP EBP
00428A71  C3                        RET
